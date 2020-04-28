let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
// =============== Camera ============== 
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images." name="Camera" ><ProtoInterface><!-- Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields --><field accessType="inputOutput" appinfo="Text description to be displayed for this Camera" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" name="position" type="SFVec3f" value="0 0 10"></field>
<field accessType="inputOutput" appinfo="Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" name="orientation" type="SFRotation" value="0 0 1 0"></field>
<field accessType="inputOutput" appinfo="pi/4" name="fieldOfView" type="SFFloat" value="0.7854"></field>
<field accessType="inputOnly" appinfo="input fraction drives interpolators" name="set_fraction" type="SFFloat"></field>
<field accessType="inputOnly" appinfo="input event binds or unbinds this Camera" name="set_bind" type="SFBool"></field>
<field accessType="outputOnly" appinfo="output event indicates when this Camera is bound" name="bindTime" type="SFTime"></field>
<field accessType="outputOnly" appinfo="output event indicates whether this Camera is bound or unbound" name="isBound" type="SFBool"></field>
<field accessType="inputOutput" appinfo="Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]" name="nearClipPlane" type="SFFloat" value="0.25"></field>
<field accessType="inputOutput" appinfo="Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit" name="farClipPlane" type="SFFloat" value="0"></field>
<field accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" name="shots" type="MFNode"><!-- initialization nodes (if any) go here --></field>
<field accessType="inputOutput" appinfo="Whether camera headlight is on or off" name="headlight" type="SFBool" value="true"></field>
<field accessType="inputOutput" appinfo="Camera headlight color" name="headlightColor" type="SFColor" value="1 1 1"></field>
<field accessType="inputOutput" appinfo="Camera headlight intensity" name="headlightIntensity" type="SFFloat" value="1"></field>
<field accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" name="filterColor" type="SFColor" value="1 1 1"></field>
<field accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" name="filterTransparency" type="SFFloat" value="1"></field>
<field accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" name="upVector" type="SFVec3f" value="0 1 0"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="fStop" type="SFFloat" value="5.6"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="focusDistance" type="SFFloat" value="10"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" name="totalDuration" type="SFTime"></field>
<field accessType="inputOutput" appinfo="OfflineRender node" name="offlineRender" type="SFNode"><!-- initialization node (if any) goes here --></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool" value="false"></field>
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
<!-- NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation --><NavigationInfo DEF="CameraNavInfo" type="&quot;EXAMINE&quot; &quot;FLY&quot; &quot;ANY&quot;"><IS><connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="headlight" protoField="headlight"></connect>
<connect nodeField="visibilityLimit" protoField="farClipPlane"></connect>
<!-- No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. --></IS>
</NavigationInfo>
<!-- this DirectionalLight replaces NavigationInfo headlight in order to add color capability --><DirectionalLight DEF="CameraDirectionalLight" global="true"><!-- TODO confirm other default field values match NavigationInfo spec --><IS><connect nodeField="on" protoField="headlight"></connect>
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
<Script DEF="CameraScript" directOutput="true" mustEvaluate="true"><!-- binding is controlled externally, all camera operations proceed the same regardless of whether bound or not --><field accessType="inputOutput" appinfo="Text description to be displayed for this Camera" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Camera position in local transformation frame" name="position" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="Camera rotation in local transformation frame" name="orientation" type="SFRotation"></field>
<field accessType="inputOnly" appinfo="input fraction drives interpolators" name="set_fraction" type="SFFloat"></field>
<field accessType="inputOnly" appinfo="input event binds or unbinds this Camera" name="set_bind" type="SFBool"></field>
<field accessType="inputOutput" appinfo="pi/4" name="fieldOfView" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Vector distance to near clipping plane" name="nearClipPlane" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Vector distance to far clipping plane" name="farClipPlane" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" name="shots" type="MFNode"><!-- initialization nodes (if any) go here --></field>
<field accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" name="filterColor" type="SFColor"></field>
<field accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" name="filterTransparency" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" name="upVector" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="fStop" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="focusDistance" type="SFFloat"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" name="totalDuration" type="SFTime"></field>
<field accessType="inputOutput" appinfo="OfflineRender node" name="offlineRender" type="SFNode"><!-- initialization node (if any) goes here --></field>
<field accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" name="ViewpointNode" type="SFNode"><Viewpoint USE="CameraViewpoint"></Viewpoint>
</field>
<field accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" name="NavInfoNode" type="SFNode"><NavigationInfo USE="CameraNavInfo"></NavigationInfo>
</field>
<field accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" name="CameraPI" type="SFNode"><PositionInterpolator USE="CameraPositionInterpolator"></PositionInterpolator>
</field>
<field accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" name="CameraOI" type="SFNode"><OrientationInterpolator USE="CameraOrientationInterpolator"></OrientationInterpolator>
</field>
<field accessType="inputOutput" appinfo="key array for interpolators" name="key" type="MFFloat"></field>
<field accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" name="keyValuePosition" type="MFVec3f"></field>
<field accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" name="keyValueOrientation" type="MFRotation"></field>
<field accessType="inputOutput" appinfo="whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events" name="animated" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="perform checkShots() function once immediately after initialization" name="initialized" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="how many CameraShot nodes are contained in shots array" name="shotCount" type="SFInt32" value="0"></field>
<field accessType="initializeOnly" appinfo="how many CameraMove nodes are contained in moves array" name="movesCount" type="SFInt32" value="0"></field>
<field accessType="initializeOnly" appinfo="how many frames were created in current loop" name="frameCount" type="SFFloat" value="0"></field>
<field accessType="initializeOnly" appinfo="holding variable" name="startTime" type="SFTime" value="0"></field>
<field accessType="initializeOnly" appinfo="holding variable" name="priorTraceTime" type="SFTime" value="0"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool"></field>
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
ProtoDeclare2.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
ProtoDeclare2.name = "Camera";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
// Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields 
let field4 = browser.currentScene.createNode("field");
field4.accessType = "inputOutput";
field4.appinfo = "Text description to be displayed for this Camera";
field4.name = "description";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.accessType = "inputOutput";
field5.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field5.name = "position";
field5.type = "SFVec3f";
field5.value = "0 0 10";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.accessType = "inputOutput";
field6.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field6.name = "orientation";
field6.type = "SFRotation";
field6.value = "0 0 1 0";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.accessType = "inputOutput";
field7.appinfo = "pi/4";
field7.name = "fieldOfView";
field7.type = "SFFloat";
field7.value = "0.7854";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.accessType = "inputOnly";
field8.appinfo = "input fraction drives interpolators";
field8.name = "set_fraction";
field8.type = "SFFloat";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.accessType = "inputOnly";
field9.appinfo = "input event binds or unbinds this Camera";
field9.name = "set_bind";
field9.type = "SFBool";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.accessType = "outputOnly";
field10.appinfo = "output event indicates when this Camera is bound";
field10.name = "bindTime";
field10.type = "SFTime";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.accessType = "outputOnly";
field11.appinfo = "output event indicates whether this Camera is bound or unbound";
field11.name = "isBound";
field11.type = "SFBool";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.accessType = "inputOutput";
field12.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field12.name = "nearClipPlane";
field12.type = "SFFloat";
field12.value = "0.25";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.accessType = "inputOutput";
field13.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field13.name = "farClipPlane";
field13.type = "SFFloat";
field13.value = "0";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.accessType = "inputOutput";
field14.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field14.name = "shots";
field14.type = "MFNode";
// initialization nodes (if any) go here 
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.accessType = "inputOutput";
field15.appinfo = "Whether camera headlight is on or off";
field15.name = "headlight";
field15.type = "SFBool";
field15.value = "true";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.accessType = "inputOutput";
field16.appinfo = "Camera headlight color";
field16.name = "headlightColor";
field16.type = "SFColor";
field16.value = "1 1 1";
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.appinfo = "Camera headlight intensity";
field17.name = "headlightIntensity";
field17.type = "SFFloat";
field17.value = "1";
ProtoInterface3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.appinfo = "Camera filter color that modifies virtual lens capture";
field18.name = "filterColor";
field18.type = "SFColor";
field18.value = "1 1 1";
ProtoInterface3.field[14] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.appinfo = "Camera filter transparency that modifies virtual lens capture";
field19.name = "filterTransparency";
field19.type = "SFFloat";
field19.value = "1";
ProtoInterface3.field[15] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field20.name = "upVector";
field20.type = "SFVec3f";
field20.value = "0 1 0";
ProtoInterface3.field[16] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field21.name = "fStop";
field21.type = "SFFloat";
field21.value = "5.6";
ProtoInterface3.field[17] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.appinfo = "Distance to focal plane of sharpest focus";
field22.name = "focusDistance";
field22.type = "SFFloat";
field22.value = "10";
ProtoInterface3.field[18] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "outputOnly";
field23.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field23.name = "isActive";
field23.type = "SFBool";
ProtoInterface3.field[19] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "outputOnly";
field24.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field24.name = "totalDuration";
field24.type = "SFTime";
ProtoInterface3.field[20] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "inputOutput";
field25.appinfo = "OfflineRender node";
field25.name = "offlineRender";
field25.type = "SFNode";
// initialization node (if any) goes here 
ProtoInterface3.field[21] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "initializeOnly";
field26.appinfo = "enable console output to trace script computations and prototype progress";
field26.name = "traceEnabled";
field26.type = "SFBool";
field26.value = "false";
ProtoInterface3.field[22] = field26;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "CameraViewpoint";
let IS29 = browser.currentScene.createNode("IS");
let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "description";
connect30.protoField = "description";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "position";
connect31.protoField = "position";
IS29.connect[1] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "orientation";
connect32.protoField = "orientation";
IS29.connect[2] = connect32;

let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "fieldOfView";
connect33.protoField = "fieldOfView";
IS29.connect[3] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "set_bind";
connect34.protoField = "set_bind";
IS29.connect[4] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "bindTime";
connect35.protoField = "bindTime";
IS29.connect[5] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "isBound";
connect36.protoField = "isBound";
IS29.connect[6] = connect36;

Viewpoint28.iS = IS29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Viewpoint28;

// NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation 
let NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.DEF = "CameraNavInfo";
NavigationInfo37.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_bind";
connect39.protoField = "set_bind";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "headlight";
connect40.protoField = "headlight";
IS38.connect[1] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "visibilityLimit";
connect41.protoField = "farClipPlane";
IS38.connect[2] = connect41;

// No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. 
NavigationInfo37.iS = IS38;

ProtoBody27.children[1] = NavigationInfo37;

// this DirectionalLight replaces NavigationInfo headlight in order to add color capability 
let DirectionalLight42 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight42.DEF = "CameraDirectionalLight";
DirectionalLight42.global = True;
// TODO confirm other default field values match NavigationInfo spec 
let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "on";
connect44.protoField = "headlight";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "color";
connect45.protoField = "headlightColor";
IS43.connect[1] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "intensity";
connect46.protoField = "headlightIntensity";
IS43.connect[2] = connect46;

DirectionalLight42.iS = IS43;

ProtoBody27.children[2] = DirectionalLight42;

let PositionInterpolator47 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator47.DEF = "CameraPositionInterpolator";
PositionInterpolator47.key = new MFFloat(new float[0,1]);
PositionInterpolator47.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_fraction";
connect49.protoField = "set_fraction";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

PositionInterpolator47.iS = IS48;

ProtoBody27.children[3] = PositionInterpolator47;

let OrientationInterpolator50 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator50.DEF = "CameraOrientationInterpolator";
OrientationInterpolator50.key = new MFFloat(new float[0,1]);
OrientationInterpolator50.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_fraction";
connect52.protoField = "set_fraction";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

OrientationInterpolator50.iS = IS51;

ProtoBody27.children[4] = OrientationInterpolator50;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "CameraPositionInterpolator";
ROUTE53.toField = "position";
ROUTE53.toNode = "CameraViewpoint";
ProtoBody27.children[5] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "CameraOrientationInterpolator";
ROUTE54.toField = "orientation";
ROUTE54.toNode = "CameraViewpoint";
ProtoBody27.children[6] = ROUTE54;

let Script55 = browser.currentScene.createNode("Script");
Script55.DEF = "CameraScript";
Script55.directOutput = True;
Script55.mustEvaluate = True;
// binding is controlled externally, all camera operations proceed the same regardless of whether bound or not 
let field56 = browser.currentScene.createNode("field");
field56.accessType = "inputOutput";
field56.appinfo = "Text description to be displayed for this Camera";
field56.name = "description";
field56.type = "SFString";
Script55.field = new MFNode();

Script55.field[0] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "inputOutput";
field57.appinfo = "Camera position in local transformation frame";
field57.name = "position";
field57.type = "SFVec3f";
Script55.field[1] = field57;

let field58 = browser.currentScene.createNode("field");
field58.accessType = "inputOutput";
field58.appinfo = "Camera rotation in local transformation frame";
field58.name = "orientation";
field58.type = "SFRotation";
Script55.field[2] = field58;

let field59 = browser.currentScene.createNode("field");
field59.accessType = "inputOnly";
field59.appinfo = "input fraction drives interpolators";
field59.name = "set_fraction";
field59.type = "SFFloat";
Script55.field[3] = field59;

let field60 = browser.currentScene.createNode("field");
field60.accessType = "inputOnly";
field60.appinfo = "input event binds or unbinds this Camera";
field60.name = "set_bind";
field60.type = "SFBool";
Script55.field[4] = field60;

let field61 = browser.currentScene.createNode("field");
field61.accessType = "inputOutput";
field61.appinfo = "pi/4";
field61.name = "fieldOfView";
field61.type = "SFFloat";
Script55.field[5] = field61;

let field62 = browser.currentScene.createNode("field");
field62.accessType = "inputOutput";
field62.appinfo = "Vector distance to near clipping plane";
field62.name = "nearClipPlane";
field62.type = "SFFloat";
Script55.field[6] = field62;

let field63 = browser.currentScene.createNode("field");
field63.accessType = "inputOutput";
field63.appinfo = "Vector distance to far clipping plane";
field63.name = "farClipPlane";
field63.type = "SFFloat";
Script55.field[7] = field63;

let field64 = browser.currentScene.createNode("field");
field64.accessType = "inputOutput";
field64.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field64.name = "shots";
field64.type = "MFNode";
// initialization nodes (if any) go here 
Script55.field[8] = field64;

let field65 = browser.currentScene.createNode("field");
field65.accessType = "inputOutput";
field65.appinfo = "Camera filter color that modifies virtual lens capture";
field65.name = "filterColor";
field65.type = "SFColor";
Script55.field[9] = field65;

let field66 = browser.currentScene.createNode("field");
field66.accessType = "inputOutput";
field66.appinfo = "Camera filter transparency that modifies virtual lens capture";
field66.name = "filterTransparency";
field66.type = "SFFloat";
Script55.field[10] = field66;

let field67 = browser.currentScene.createNode("field");
field67.accessType = "inputOutput";
field67.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field67.name = "upVector";
field67.type = "SFVec3f";
Script55.field[11] = field67;

let field68 = browser.currentScene.createNode("field");
field68.accessType = "inputOutput";
field68.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field68.name = "fStop";
field68.type = "SFFloat";
Script55.field[12] = field68;

let field69 = browser.currentScene.createNode("field");
field69.accessType = "inputOutput";
field69.appinfo = "Distance to focal plane of sharpest focus";
field69.name = "focusDistance";
field69.type = "SFFloat";
Script55.field[13] = field69;

let field70 = browser.currentScene.createNode("field");
field70.accessType = "outputOnly";
field70.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field70.name = "isActive";
field70.type = "SFBool";
Script55.field[14] = field70;

let field71 = browser.currentScene.createNode("field");
field71.accessType = "outputOnly";
field71.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field71.name = "totalDuration";
field71.type = "SFTime";
Script55.field[15] = field71;

let field72 = browser.currentScene.createNode("field");
field72.accessType = "inputOutput";
field72.appinfo = "OfflineRender node";
field72.name = "offlineRender";
field72.type = "SFNode";
// initialization node (if any) goes here 
Script55.field[16] = field72;

let field73 = browser.currentScene.createNode("field");
field73.accessType = "initializeOnly";
field73.appinfo = "node reference to permit getting setting fields from within Script";
field73.name = "ViewpointNode";
field73.type = "SFNode";
let Viewpoint74 = browser.currentScene.createNode("Viewpoint");
Viewpoint74.USE = "CameraViewpoint";
field73.children = new MFNode();

field73.children[0] = Viewpoint74;

Script55.field[17] = field73;

let field75 = browser.currentScene.createNode("field");
field75.accessType = "initializeOnly";
field75.appinfo = "node reference to permit getting setting fields from within Script";
field75.name = "NavInfoNode";
field75.type = "SFNode";
let NavigationInfo76 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo76.USE = "CameraNavInfo";
field75.children = new MFNode();

field75.children[0] = NavigationInfo76;

Script55.field[18] = field75;

let field77 = browser.currentScene.createNode("field");
field77.accessType = "initializeOnly";
field77.appinfo = "node reference to permit getting setting fields from within Script";
field77.name = "CameraPI";
field77.type = "SFNode";
let PositionInterpolator78 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator78.USE = "CameraPositionInterpolator";
field77.children = new MFNode();

field77.children[0] = PositionInterpolator78;

Script55.field[19] = field77;

let field79 = browser.currentScene.createNode("field");
field79.accessType = "initializeOnly";
field79.appinfo = "node reference to permit getting setting fields from within Script";
field79.name = "CameraOI";
field79.type = "SFNode";
let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.USE = "CameraOrientationInterpolator";
field79.children = new MFNode();

field79.children[0] = OrientationInterpolator80;

Script55.field[20] = field79;

let field81 = browser.currentScene.createNode("field");
field81.accessType = "inputOutput";
field81.appinfo = "key array for interpolators";
field81.name = "key";
field81.type = "MFFloat";
Script55.field[21] = field81;

let field82 = browser.currentScene.createNode("field");
field82.accessType = "inputOutput";
field82.appinfo = "keyValue array for PositionInterpolator";
field82.name = "keyValuePosition";
field82.type = "MFVec3f";
Script55.field[22] = field82;

let field83 = browser.currentScene.createNode("field");
field83.accessType = "inputOutput";
field83.appinfo = "keyValue array for OrientationInterpolator";
field83.name = "keyValueOrientation";
field83.type = "MFRotation";
Script55.field[23] = field83;

let field84 = browser.currentScene.createNode("field");
field84.accessType = "inputOutput";
field84.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field84.name = "animated";
field84.type = "SFBool";
field84.value = "false";
Script55.field[24] = field84;

let field85 = browser.currentScene.createNode("field");
field85.accessType = "initializeOnly";
field85.appinfo = "perform checkShots() function once immediately after initialization";
field85.name = "initialized";
field85.type = "SFBool";
field85.value = "false";
Script55.field[25] = field85;

let field86 = browser.currentScene.createNode("field");
field86.accessType = "initializeOnly";
field86.appinfo = "how many CameraShot nodes are contained in shots array";
field86.name = "shotCount";
field86.type = "SFInt32";
field86.value = "0";
Script55.field[26] = field86;

let field87 = browser.currentScene.createNode("field");
field87.accessType = "initializeOnly";
field87.appinfo = "how many CameraMove nodes are contained in moves array";
field87.name = "movesCount";
field87.type = "SFInt32";
field87.value = "0";
Script55.field[27] = field87;

let field88 = browser.currentScene.createNode("field");
field88.accessType = "initializeOnly";
field88.appinfo = "how many frames were created in current loop";
field88.name = "frameCount";
field88.type = "SFFloat";
field88.value = "0";
Script55.field[28] = field88;

let field89 = browser.currentScene.createNode("field");
field89.accessType = "initializeOnly";
field89.appinfo = "holding variable";
field89.name = "startTime";
field89.type = "SFTime";
field89.value = "0";
Script55.field[29] = field89;

let field90 = browser.currentScene.createNode("field");
field90.accessType = "initializeOnly";
field90.appinfo = "holding variable";
field90.name = "priorTraceTime";
field90.type = "SFTime";
field90.value = "0";
Script55.field[30] = field90;

let field91 = browser.currentScene.createNode("field");
field91.accessType = "initializeOnly";
field91.appinfo = "enable console output to trace script computations and prototype progress";
field91.name = "traceEnabled";
field91.type = "SFBool";
Script55.field[31] = field91;

let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "description";
connect93.protoField = "description";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "position";
connect94.protoField = "position";
IS92.connect[1] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "orientation";
connect95.protoField = "orientation";
IS92.connect[2] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "set_fraction";
connect96.protoField = "set_fraction";
IS92.connect[3] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "set_bind";
connect97.protoField = "set_bind";
IS92.connect[4] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "fieldOfView";
connect98.protoField = "fieldOfView";
IS92.connect[5] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "nearClipPlane";
connect99.protoField = "nearClipPlane";
IS92.connect[6] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "farClipPlane";
connect100.protoField = "farClipPlane";
IS92.connect[7] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "shots";
connect101.protoField = "shots";
IS92.connect[8] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "filterColor";
connect102.protoField = "filterColor";
IS92.connect[9] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "filterTransparency";
connect103.protoField = "filterTransparency";
IS92.connect[10] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "upVector";
connect104.protoField = "upVector";
IS92.connect[11] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "fStop";
connect105.protoField = "fStop";
IS92.connect[12] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "focusDistance";
connect106.protoField = "focusDistance";
IS92.connect[13] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "isActive";
connect107.protoField = "isActive";
IS92.connect[14] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "totalDuration";
connect108.protoField = "totalDuration";
IS92.connect[15] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "offlineRender";
connect109.protoField = "offlineRender";
IS92.connect[16] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "traceEnabled";
connect110.protoField = "traceEnabled";
IS92.connect[17] = connect110;

Script55.iS = IS92;


Script55.setSourceCode(`ecmascript:\n"+
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
ProtoBody27.children[7] = Script55;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "position";
ROUTE111.fromNode = "CameraScript";
ROUTE111.toField = "position";
ROUTE111.toNode = "CameraViewpoint";
ProtoBody27.children[8] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "orientation";
ROUTE112.fromNode = "CameraScript";
ROUTE112.toField = "orientation";
ROUTE112.toNode = "CameraViewpoint";
ProtoBody27.children[9] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "isActive";
ROUTE113.fromNode = "CameraScript";
ROUTE113.toField = "set_bind";
ROUTE113.toNode = "CameraViewpoint";
ProtoBody27.children[10] = ROUTE113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "CameraScript";
ROUTE114.toField = "set_bind";
ROUTE114.toNode = "CameraNavInfo";
ProtoBody27.children[11] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "isActive";
ROUTE115.fromNode = "CameraScript";
ROUTE115.toField = "on";
ROUTE115.toNode = "CameraDirectionalLight";
ProtoBody27.children[12] = ROUTE115;

ProtoDeclare2.protoBody = ProtoBody27;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

// =============== CameraShot ============== 
let ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="CameraShot collects a specific set of CameraMovement animations that make up an individual shot." name="CameraShot" ><ProtoInterface><field accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this CameraShot can be activated" name="enabled" type="SFBool" value="true"></field>
<field accessType="inputOutput" appinfo="Set of CameraMovement nodes" name="moves" type="MFNode"><!-- initializing CameraMovement nodes are inserted here by scene author using ProtoInstance --></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" name="initialPosition" type="SFVec3f" value="0 0 10"></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" name="initialOrientation" type="SFRotation" value="0 0 1 0"></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" name="initialAimPoint" type="SFVec3f" value="0 0 0"></field>
<field accessType="inputOutput" appinfo="pi/4" name="initialFieldOfView" type="SFFloat" value="0.7854"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="initialFStop" type="SFFloat" value="5.6"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="initialFocusDistance" type="SFFloat" value="10"></field>
<field accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" name="shotDuration" type="SFTime"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Script DEF="CameraShotScript" directOutput="true" mustEvaluate="true"><field accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this CameraShot can be activated" name="enabled" type="SFBool"></field>
<field accessType="inputOutput" appinfo="Set of CameraMovement nodes" name="moves" type="MFNode"><!-- initialization nodes (if any) go here --></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" name="initialPosition" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" name="initialOrientation" type="SFRotation"></field>
<field accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" name="initialAimPoint" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="pi/4" name="initialFieldOfView" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="initialFStop" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="initialFocusDistance" type="SFFloat"></field>
<field accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" name="shotDuration" type="SFTime"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool"></field>
<field accessType="inputOutput" appinfo="key array for interpolators" name="key" type="MFFloat"></field>
<field accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" name="keyValuePosition" type="MFVec3f"></field>
<field accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" name="keyValueOrientation" type="MFRotation"></field>
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
<!-- Add any ROUTEs here, going from Script to other nodes within ProtoBody --></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare116.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
ProtoDeclare116.name = "CameraShot";
let ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
let field118 = browser.currentScene.createNode("field");
field118.accessType = "inputOutput";
field118.appinfo = "Text description to be displayed for this CameraShot";
field118.name = "description";
field118.type = "SFString";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

let field119 = browser.currentScene.createNode("field");
field119.accessType = "inputOutput";
field119.appinfo = "Whether this CameraShot can be activated";
field119.name = "enabled";
field119.type = "SFBool";
field119.value = "true";
ProtoInterface117.field[1] = field119;

let field120 = browser.currentScene.createNode("field");
field120.accessType = "inputOutput";
field120.appinfo = "Set of CameraMovement nodes";
field120.name = "moves";
field120.type = "MFNode";
// initializing CameraMovement nodes are inserted here by scene author using ProtoInstance 
ProtoInterface117.field[2] = field120;

let field121 = browser.currentScene.createNode("field");
field121.accessType = "inputOutput";
field121.appinfo = "Setup to reinitialize camera position for this shot";
field121.name = "initialPosition";
field121.type = "SFVec3f";
field121.value = "0 0 10";
ProtoInterface117.field[3] = field121;

let field122 = browser.currentScene.createNode("field");
field122.accessType = "inputOutput";
field122.appinfo = "Setup to reinitialize camera rotation for this shot";
field122.name = "initialOrientation";
field122.type = "SFRotation";
field122.value = "0 0 1 0";
ProtoInterface117.field[4] = field122;

let field123 = browser.currentScene.createNode("field");
field123.accessType = "inputOutput";
field123.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field123.name = "initialAimPoint";
field123.type = "SFVec3f";
field123.value = "0 0 0";
ProtoInterface117.field[5] = field123;

let field124 = browser.currentScene.createNode("field");
field124.accessType = "inputOutput";
field124.appinfo = "pi/4";
field124.name = "initialFieldOfView";
field124.type = "SFFloat";
field124.value = "0.7854";
ProtoInterface117.field[6] = field124;

let field125 = browser.currentScene.createNode("field");
field125.accessType = "inputOutput";
field125.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field125.name = "initialFStop";
field125.type = "SFFloat";
field125.value = "5.6";
ProtoInterface117.field[7] = field125;

let field126 = browser.currentScene.createNode("field");
field126.accessType = "inputOutput";
field126.appinfo = "Distance to focal plane of sharpest focus";
field126.name = "initialFocusDistance";
field126.type = "SFFloat";
field126.value = "10";
ProtoInterface117.field[8] = field126;

let field127 = browser.currentScene.createNode("field");
field127.accessType = "outputOnly";
field127.appinfo = "Subtotal duration of contained CameraMovement move durations";
field127.name = "shotDuration";
field127.type = "SFTime";
ProtoInterface117.field[9] = field127;

let field128 = browser.currentScene.createNode("field");
field128.accessType = "outputOnly";
field128.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field128.name = "isActive";
field128.type = "SFBool";
ProtoInterface117.field[10] = field128;

let field129 = browser.currentScene.createNode("field");
field129.accessType = "initializeOnly";
field129.appinfo = "enable console output to trace script computations and prototype progress";
field129.name = "traceEnabled";
field129.type = "SFBool";
field129.value = "false";
ProtoInterface117.field[11] = field129;

ProtoDeclare116.protoInterface = ProtoInterface117;

let ProtoBody130 = browser.currentScene.createNode("ProtoBody");
let Script131 = browser.currentScene.createNode("Script");
Script131.DEF = "CameraShotScript";
Script131.directOutput = True;
Script131.mustEvaluate = True;
let field132 = browser.currentScene.createNode("field");
field132.accessType = "inputOutput";
field132.appinfo = "Text description to be displayed for this CameraShot";
field132.name = "description";
field132.type = "SFString";
Script131.field = new MFNode();

Script131.field[0] = field132;

let field133 = browser.currentScene.createNode("field");
field133.accessType = "inputOutput";
field133.appinfo = "Whether this CameraShot can be activated";
field133.name = "enabled";
field133.type = "SFBool";
Script131.field[1] = field133;

let field134 = browser.currentScene.createNode("field");
field134.accessType = "inputOutput";
field134.appinfo = "Set of CameraMovement nodes";
field134.name = "moves";
field134.type = "MFNode";
// initialization nodes (if any) go here 
Script131.field[2] = field134;

let field135 = browser.currentScene.createNode("field");
field135.accessType = "inputOutput";
field135.appinfo = "Setup to reinitialize camera position for this shot";
field135.name = "initialPosition";
field135.type = "SFVec3f";
Script131.field[3] = field135;

let field136 = browser.currentScene.createNode("field");
field136.accessType = "inputOutput";
field136.appinfo = "Setup to reinitialize camera rotation for this shot";
field136.name = "initialOrientation";
field136.type = "SFRotation";
Script131.field[4] = field136;

let field137 = browser.currentScene.createNode("field");
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field137.name = "initialAimPoint";
field137.type = "SFVec3f";
Script131.field[5] = field137;

let field138 = browser.currentScene.createNode("field");
field138.accessType = "inputOutput";
field138.appinfo = "pi/4";
field138.name = "initialFieldOfView";
field138.type = "SFFloat";
Script131.field[6] = field138;

let field139 = browser.currentScene.createNode("field");
field139.accessType = "inputOutput";
field139.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field139.name = "initialFStop";
field139.type = "SFFloat";
Script131.field[7] = field139;

let field140 = browser.currentScene.createNode("field");
field140.accessType = "inputOutput";
field140.appinfo = "Distance to focal plane of sharpest focus";
field140.name = "initialFocusDistance";
field140.type = "SFFloat";
Script131.field[8] = field140;

let field141 = browser.currentScene.createNode("field");
field141.accessType = "outputOnly";
field141.appinfo = "Subtotal duration of contained CameraMovement move durations";
field141.name = "shotDuration";
field141.type = "SFTime";
Script131.field[9] = field141;

let field142 = browser.currentScene.createNode("field");
field142.accessType = "outputOnly";
field142.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field142.name = "isActive";
field142.type = "SFBool";
Script131.field[10] = field142;

let field143 = browser.currentScene.createNode("field");
field143.accessType = "initializeOnly";
field143.appinfo = "enable console output to trace script computations and prototype progress";
field143.name = "traceEnabled";
field143.type = "SFBool";
Script131.field[11] = field143;

let field144 = browser.currentScene.createNode("field");
field144.accessType = "inputOutput";
field144.appinfo = "key array for interpolators";
field144.name = "key";
field144.type = "MFFloat";
Script131.field[12] = field144;

let field145 = browser.currentScene.createNode("field");
field145.accessType = "inputOutput";
field145.appinfo = "keyValue array for PositionInterpolator";
field145.name = "keyValuePosition";
field145.type = "MFVec3f";
Script131.field[13] = field145;

let field146 = browser.currentScene.createNode("field");
field146.accessType = "inputOutput";
field146.appinfo = "keyValue array for OrientationInterpolator";
field146.name = "keyValueOrientation";
field146.type = "MFRotation";
Script131.field[14] = field146;

let IS147 = browser.currentScene.createNode("IS");
let connect148 = browser.currentScene.createNode("connect");
connect148.nodeField = "description";
connect148.protoField = "description";
IS147.connect = new MFNode();

IS147.connect[0] = connect148;

let connect149 = browser.currentScene.createNode("connect");
connect149.nodeField = "enabled";
connect149.protoField = "enabled";
IS147.connect[1] = connect149;

let connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "moves";
connect150.protoField = "moves";
IS147.connect[2] = connect150;

let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "initialPosition";
connect151.protoField = "initialPosition";
IS147.connect[3] = connect151;

let connect152 = browser.currentScene.createNode("connect");
connect152.nodeField = "initialOrientation";
connect152.protoField = "initialOrientation";
IS147.connect[4] = connect152;

let connect153 = browser.currentScene.createNode("connect");
connect153.nodeField = "initialAimPoint";
connect153.protoField = "initialAimPoint";
IS147.connect[5] = connect153;

let connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "initialFieldOfView";
connect154.protoField = "initialFieldOfView";
IS147.connect[6] = connect154;

let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "initialFStop";
connect155.protoField = "initialFStop";
IS147.connect[7] = connect155;

let connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "initialFocusDistance";
connect156.protoField = "initialFocusDistance";
IS147.connect[8] = connect156;

let connect157 = browser.currentScene.createNode("connect");
connect157.nodeField = "shotDuration";
connect157.protoField = "shotDuration";
IS147.connect[9] = connect157;

let connect158 = browser.currentScene.createNode("connect");
connect158.nodeField = "isActive";
connect158.protoField = "isActive";
IS147.connect[10] = connect158;

let connect159 = browser.currentScene.createNode("connect");
connect159.nodeField = "traceEnabled";
connect159.protoField = "traceEnabled";
IS147.connect[11] = connect159;

Script131.iS = IS147;


Script131.setSourceCode(`ecmascript:\n"+
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
ProtoBody130.children = new MFNode();

ProtoBody130.children[0] = Script131;

// Add any ROUTEs here, going from Script to other nodes within ProtoBody 
ProtoDeclare116.protoBody = ProtoBody130;

browser.currentScene.children[1] = ProtoDeclare116;

// =============== CameraMovement ============== 
let ProtoDeclare160 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView." name="CameraMovement" ><ProtoInterface><field accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" name="enabled" type="SFBool" value="true"></field>
<field accessType="inputOutput" appinfo="Duration in seconds for this move" name="duration" type="SFFloat" value="0"></field>
<field accessType="inputOutput" appinfo="Goal camera position for this move" name="goalPosition" type="SFVec3f" value="0 0 10"></field>
<field accessType="inputOutput" appinfo="Goal camera rotation for this move" name="goalOrientation" type="SFRotation" value="0 0 1 0"></field>
<field accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" name="tracking" type="SFBool" value="false"></field>
<field accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" name="goalAimPoint" type="SFVec3f" value="0 0 0"></field>
<field accessType="inputOutput" appinfo="Goal fieldOfView for this move" name="goalFieldOfView" type="SFFloat" value="0.7854"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="goalFStop" type="SFFloat" value="5.6"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="goalFocusDistance" type="SFFloat" value="10"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!-- First node determines node type of this prototype --><!-- Subsequent nodes do not render, but still must be a valid X3D subgraph --><!-- Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events --><Script DEF="CameraMovementScript" directOutput="true" mustEvaluate="true"><field accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" name="enabled" type="SFBool"></field>
<field accessType="inputOutput" appinfo="Duration in seconds for this move" name="duration" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Goal camera position for this move" name="goalPosition" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="Goal camera rotation for this move" name="goalOrientation" type="SFRotation"></field>
<field accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" name="tracking" type="SFBool"></field>
<field accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" name="goalAimPoint" type="SFVec3f"></field>
<field accessType="inputOutput" appinfo="Goal fieldOfView for this move" name="goalFieldOfView" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" name="goalFStop" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" name="goalFocusDistance" type="SFFloat"></field>
<field accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" name="isActive" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool"></field>
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
<!-- Add any ROUTEs here, going from Script to other nodes within ProtoBody --></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare160.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
ProtoDeclare160.name = "CameraMovement";
let ProtoInterface161 = browser.currentScene.createNode("ProtoInterface");
let field162 = browser.currentScene.createNode("field");
field162.accessType = "inputOutput";
field162.appinfo = "Text description to be displayed for this CameraMovement";
field162.name = "description";
field162.type = "SFString";
ProtoInterface161.field = new MFNode();

ProtoInterface161.field[0] = field162;

let field163 = browser.currentScene.createNode("field");
field163.accessType = "inputOutput";
field163.appinfo = "Whether this CameraMovement can be activated";
field163.name = "enabled";
field163.type = "SFBool";
field163.value = "true";
ProtoInterface161.field[1] = field163;

let field164 = browser.currentScene.createNode("field");
field164.accessType = "inputOutput";
field164.appinfo = "Duration in seconds for this move";
field164.name = "duration";
field164.type = "SFFloat";
field164.value = "0";
ProtoInterface161.field[2] = field164;

let field165 = browser.currentScene.createNode("field");
field165.accessType = "inputOutput";
field165.appinfo = "Goal camera position for this move";
field165.name = "goalPosition";
field165.type = "SFVec3f";
field165.value = "0 0 10";
ProtoInterface161.field[3] = field165;

let field166 = browser.currentScene.createNode("field");
field166.accessType = "inputOutput";
field166.appinfo = "Goal camera rotation for this move";
field166.name = "goalOrientation";
field166.type = "SFRotation";
field166.value = "0 0 1 0";
ProtoInterface161.field[4] = field166;

let field167 = browser.currentScene.createNode("field");
field167.accessType = "inputOutput";
field167.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field167.name = "tracking";
field167.type = "SFBool";
field167.value = "false";
ProtoInterface161.field[5] = field167;

let field168 = browser.currentScene.createNode("field");
field168.accessType = "inputOutput";
field168.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field168.name = "goalAimPoint";
field168.type = "SFVec3f";
field168.value = "0 0 0";
ProtoInterface161.field[6] = field168;

let field169 = browser.currentScene.createNode("field");
field169.accessType = "inputOutput";
field169.appinfo = "Goal fieldOfView for this move";
field169.name = "goalFieldOfView";
field169.type = "SFFloat";
field169.value = "0.7854";
ProtoInterface161.field[7] = field169;

let field170 = browser.currentScene.createNode("field");
field170.accessType = "inputOutput";
field170.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field170.name = "goalFStop";
field170.type = "SFFloat";
field170.value = "5.6";
ProtoInterface161.field[8] = field170;

let field171 = browser.currentScene.createNode("field");
field171.accessType = "inputOutput";
field171.appinfo = "Distance to focal plane of sharpest focus";
field171.name = "goalFocusDistance";
field171.type = "SFFloat";
field171.value = "10";
ProtoInterface161.field[9] = field171;

let field172 = browser.currentScene.createNode("field");
field172.accessType = "outputOnly";
field172.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field172.name = "isActive";
field172.type = "SFBool";
ProtoInterface161.field[10] = field172;

let field173 = browser.currentScene.createNode("field");
field173.accessType = "initializeOnly";
field173.appinfo = "enable console output to trace script computations and prototype progress";
field173.name = "traceEnabled";
field173.type = "SFBool";
field173.value = "false";
ProtoInterface161.field[11] = field173;

ProtoDeclare160.protoInterface = ProtoInterface161;

let ProtoBody174 = browser.currentScene.createNode("ProtoBody");
// First node determines node type of this prototype 
// Subsequent nodes do not render, but still must be a valid X3D subgraph 
// Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events 
let Script175 = browser.currentScene.createNode("Script");
Script175.DEF = "CameraMovementScript";
Script175.directOutput = True;
Script175.mustEvaluate = True;
let field176 = browser.currentScene.createNode("field");
field176.accessType = "inputOutput";
field176.appinfo = "Text description to be displayed for this CameraMovement";
field176.name = "description";
field176.type = "SFString";
Script175.field = new MFNode();

Script175.field[0] = field176;

let field177 = browser.currentScene.createNode("field");
field177.accessType = "inputOutput";
field177.appinfo = "Whether this CameraMovement can be activated";
field177.name = "enabled";
field177.type = "SFBool";
Script175.field[1] = field177;

let field178 = browser.currentScene.createNode("field");
field178.accessType = "inputOutput";
field178.appinfo = "Duration in seconds for this move";
field178.name = "duration";
field178.type = "SFFloat";
Script175.field[2] = field178;

let field179 = browser.currentScene.createNode("field");
field179.accessType = "inputOutput";
field179.appinfo = "Goal camera position for this move";
field179.name = "goalPosition";
field179.type = "SFVec3f";
Script175.field[3] = field179;

let field180 = browser.currentScene.createNode("field");
field180.accessType = "inputOutput";
field180.appinfo = "Goal camera rotation for this move";
field180.name = "goalOrientation";
field180.type = "SFRotation";
Script175.field[4] = field180;

let field181 = browser.currentScene.createNode("field");
field181.accessType = "inputOutput";
field181.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field181.name = "tracking";
field181.type = "SFBool";
Script175.field[5] = field181;

let field182 = browser.currentScene.createNode("field");
field182.accessType = "inputOutput";
field182.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field182.name = "goalAimPoint";
field182.type = "SFVec3f";
Script175.field[6] = field182;

let field183 = browser.currentScene.createNode("field");
field183.accessType = "inputOutput";
field183.appinfo = "Goal fieldOfView for this move";
field183.name = "goalFieldOfView";
field183.type = "SFFloat";
Script175.field[7] = field183;

let field184 = browser.currentScene.createNode("field");
field184.accessType = "inputOutput";
field184.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field184.name = "goalFStop";
field184.type = "SFFloat";
Script175.field[8] = field184;

let field185 = browser.currentScene.createNode("field");
field185.accessType = "inputOutput";
field185.appinfo = "Distance to focal plane of sharpest focus";
field185.name = "goalFocusDistance";
field185.type = "SFFloat";
Script175.field[9] = field185;

let field186 = browser.currentScene.createNode("field");
field186.accessType = "outputOnly";
field186.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field186.name = "isActive";
field186.type = "SFBool";
Script175.field[10] = field186;

let field187 = browser.currentScene.createNode("field");
field187.accessType = "initializeOnly";
field187.appinfo = "enable console output to trace script computations and prototype progress";
field187.name = "traceEnabled";
field187.type = "SFBool";
Script175.field[11] = field187;

let IS188 = browser.currentScene.createNode("IS");
let connect189 = browser.currentScene.createNode("connect");
connect189.nodeField = "description";
connect189.protoField = "description";
IS188.connect = new MFNode();

IS188.connect[0] = connect189;

let connect190 = browser.currentScene.createNode("connect");
connect190.nodeField = "enabled";
connect190.protoField = "enabled";
IS188.connect[1] = connect190;

let connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "duration";
connect191.protoField = "duration";
IS188.connect[2] = connect191;

let connect192 = browser.currentScene.createNode("connect");
connect192.nodeField = "goalPosition";
connect192.protoField = "goalPosition";
IS188.connect[3] = connect192;

let connect193 = browser.currentScene.createNode("connect");
connect193.nodeField = "goalOrientation";
connect193.protoField = "goalOrientation";
IS188.connect[4] = connect193;

let connect194 = browser.currentScene.createNode("connect");
connect194.nodeField = "tracking";
connect194.protoField = "tracking";
IS188.connect[5] = connect194;

let connect195 = browser.currentScene.createNode("connect");
connect195.nodeField = "goalAimPoint";
connect195.protoField = "goalAimPoint";
IS188.connect[6] = connect195;

let connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "goalFieldOfView";
connect196.protoField = "goalFieldOfView";
IS188.connect[7] = connect196;

let connect197 = browser.currentScene.createNode("connect");
connect197.nodeField = "goalFStop";
connect197.protoField = "goalFStop";
IS188.connect[8] = connect197;

let connect198 = browser.currentScene.createNode("connect");
connect198.nodeField = "goalFocusDistance";
connect198.protoField = "goalFocusDistance";
IS188.connect[9] = connect198;

let connect199 = browser.currentScene.createNode("connect");
connect199.nodeField = "isActive";
connect199.protoField = "isActive";
IS188.connect[10] = connect199;

let connect200 = browser.currentScene.createNode("connect");
connect200.nodeField = "traceEnabled";
connect200.protoField = "traceEnabled";
IS188.connect[11] = connect200;

Script175.iS = IS188;


Script175.setSourceCode(`ecmascript:\n"+
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
ProtoBody174.children = new MFNode();

ProtoBody174.children[0] = Script175;

// Add any ROUTEs here, going from Script to other nodes within ProtoBody 
ProtoDeclare160.protoBody = ProtoBody174;

browser.currentScene.children[2] = ProtoDeclare160;

// =============== OfflineRender ============== 
let ProtoDeclare201 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)." name="OfflineRender" ><ProtoInterface><!-- TODO non-photorealistic rendering (NPR) parameters --><field accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" name="enabled" type="SFBool" value="true"></field>
<field accessType="inputOutput" appinfo="Frames per second recorded for this rendering" name="frameRate" type="SFFloat" value="30"></field>
<field accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" name="frameSize" type="SFVec2f" value="640 480"></field>
<field accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" name="pixelAspectRatio" type="SFFloat" value="1.33"></field>
<field accessType="inputOnly" appinfo="Begin render operation" name="set_startTime" type="SFTime"></field>
<field accessType="outputOnly" appinfo="Progress performing render operation (0..1)" name="progress" type="SFFloat"></field>
<field accessType="outputOnly" appinfo="Render operation complete" name="renderCompleteTime" type="SFTime"></field>
<field accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.), use first supported format" name="movieFormat" type="MFString" value="&quot;mpeg&quot;"></field>
<field accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.) use first supported format" name="imageFormat" type="MFString" value="&quot;png&quot;"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!-- First node determines node type of this prototype --><!-- Subsequent nodes do not render, but still must be a valid X3D subgraph --><Script DEF="OfflineRenderScript" mustEvaluate="true"><field accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" name="description" type="SFString"></field>
<field accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" name="enabled" type="SFBool"></field>
<field accessType="inputOutput" appinfo="Frames per second recorded for this rendering" name="frameRate" type="SFFloat"></field>
<field accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" name="frameSize" type="SFVec2f"></field>
<field accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" name="pixelAspectRatio" type="SFFloat"></field>
<field accessType="inputOnly" appinfo="Begin render operation" name="set_startTime" type="SFTime"></field>
<field accessType="outputOnly" appinfo="Progress performing render operation (0..1)" name="progress" type="SFFloat"></field>
<field accessType="outputOnly" appinfo="Render operation complete" name="renderCompleteTime" type="SFTime"></field>
<field accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.)" name="movieFormat" type="MFString"></field>
<field accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.)" name="imageFormat" type="MFString"></field>
<field accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" name="traceEnabled" type="SFBool"></field>
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
<!-- Add any ROUTEs here, going from Script to other nodes within ProtoBody --></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare201.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
ProtoDeclare201.name = "OfflineRender";
let ProtoInterface202 = browser.currentScene.createNode("ProtoInterface");
// TODO non-photorealistic rendering (NPR) parameters 
let field203 = browser.currentScene.createNode("field");
field203.accessType = "inputOutput";
field203.appinfo = "Text description to be displayed for this OfflineRender";
field203.name = "description";
field203.type = "SFString";
ProtoInterface202.field = new MFNode();

ProtoInterface202.field[0] = field203;

let field204 = browser.currentScene.createNode("field");
field204.accessType = "inputOutput";
field204.appinfo = "Whether this OfflineRender can be activated";
field204.name = "enabled";
field204.type = "SFBool";
field204.value = "true";
ProtoInterface202.field[1] = field204;

let field205 = browser.currentScene.createNode("field");
field205.accessType = "inputOutput";
field205.appinfo = "Frames per second recorded for this rendering";
field205.name = "frameRate";
field205.type = "SFFloat";
field205.value = "30";
ProtoInterface202.field[2] = field205;

let field206 = browser.currentScene.createNode("field");
field206.accessType = "inputOutput";
field206.appinfo = "Size of frame in number of pixels width and height";
field206.name = "frameSize";
field206.type = "SFVec2f";
field206.value = "640 480";
ProtoInterface202.field[3] = field206;

let field207 = browser.currentScene.createNode("field");
field207.accessType = "inputOutput";
field207.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field207.name = "pixelAspectRatio";
field207.type = "SFFloat";
field207.value = "1.33";
ProtoInterface202.field[4] = field207;

let field208 = browser.currentScene.createNode("field");
field208.accessType = "inputOnly";
field208.appinfo = "Begin render operation";
field208.name = "set_startTime";
field208.type = "SFTime";
ProtoInterface202.field[5] = field208;

let field209 = browser.currentScene.createNode("field");
field209.accessType = "outputOnly";
field209.appinfo = "Progress performing render operation (0..1)";
field209.name = "progress";
field209.type = "SFFloat";
ProtoInterface202.field[6] = field209;

let field210 = browser.currentScene.createNode("field");
field210.accessType = "outputOnly";
field210.appinfo = "Render operation complete";
field210.name = "renderCompleteTime";
field210.type = "SFTime";
ProtoInterface202.field[7] = field210;

let field211 = browser.currentScene.createNode("field");
field211.accessType = "initializeOnly";
field211.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field211.name = "movieFormat";
field211.type = "MFString";
field211.value = "\"mpeg\"";
ProtoInterface202.field[8] = field211;

let field212 = browser.currentScene.createNode("field");
field212.accessType = "initializeOnly";
field212.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field212.name = "imageFormat";
field212.type = "MFString";
field212.value = "\"png\"";
ProtoInterface202.field[9] = field212;

let field213 = browser.currentScene.createNode("field");
field213.accessType = "initializeOnly";
field213.appinfo = "enable console output to trace script computations and prototype progress";
field213.name = "traceEnabled";
field213.type = "SFBool";
field213.value = "false";
ProtoInterface202.field[10] = field213;

ProtoDeclare201.protoInterface = ProtoInterface202;

let ProtoBody214 = browser.currentScene.createNode("ProtoBody");
// First node determines node type of this prototype 
// Subsequent nodes do not render, but still must be a valid X3D subgraph 
let Script215 = browser.currentScene.createNode("Script");
Script215.DEF = "OfflineRenderScript";
Script215.mustEvaluate = True;
let field216 = browser.currentScene.createNode("field");
field216.accessType = "inputOutput";
field216.appinfo = "Text description to be displayed for this OfflineRender";
field216.name = "description";
field216.type = "SFString";
Script215.field = new MFNode();

Script215.field[0] = field216;

let field217 = browser.currentScene.createNode("field");
field217.accessType = "inputOutput";
field217.appinfo = "Whether this OfflineRender can be activated";
field217.name = "enabled";
field217.type = "SFBool";
Script215.field[1] = field217;

let field218 = browser.currentScene.createNode("field");
field218.accessType = "inputOutput";
field218.appinfo = "Frames per second recorded for this rendering";
field218.name = "frameRate";
field218.type = "SFFloat";
Script215.field[2] = field218;

let field219 = browser.currentScene.createNode("field");
field219.accessType = "inputOutput";
field219.appinfo = "Size of frame in number of pixels width and height";
field219.name = "frameSize";
field219.type = "SFVec2f";
Script215.field[3] = field219;

let field220 = browser.currentScene.createNode("field");
field220.accessType = "inputOutput";
field220.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field220.name = "pixelAspectRatio";
field220.type = "SFFloat";
Script215.field[4] = field220;

let field221 = browser.currentScene.createNode("field");
field221.accessType = "inputOnly";
field221.appinfo = "Begin render operation";
field221.name = "set_startTime";
field221.type = "SFTime";
Script215.field[5] = field221;

let field222 = browser.currentScene.createNode("field");
field222.accessType = "outputOnly";
field222.appinfo = "Progress performing render operation (0..1)";
field222.name = "progress";
field222.type = "SFFloat";
Script215.field[6] = field222;

let field223 = browser.currentScene.createNode("field");
field223.accessType = "outputOnly";
field223.appinfo = "Render operation complete";
field223.name = "renderCompleteTime";
field223.type = "SFTime";
Script215.field[7] = field223;

let field224 = browser.currentScene.createNode("field");
field224.accessType = "initializeOnly";
field224.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field224.name = "movieFormat";
field224.type = "MFString";
Script215.field[8] = field224;

let field225 = browser.currentScene.createNode("field");
field225.accessType = "initializeOnly";
field225.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field225.name = "imageFormat";
field225.type = "MFString";
Script215.field[9] = field225;

let field226 = browser.currentScene.createNode("field");
field226.accessType = "initializeOnly";
field226.appinfo = "enable console output to trace script computations and prototype progress";
field226.name = "traceEnabled";
field226.type = "SFBool";
Script215.field[10] = field226;

let IS227 = browser.currentScene.createNode("IS");
let connect228 = browser.currentScene.createNode("connect");
connect228.nodeField = "description";
connect228.protoField = "description";
IS227.connect = new MFNode();

IS227.connect[0] = connect228;

let connect229 = browser.currentScene.createNode("connect");
connect229.nodeField = "enabled";
connect229.protoField = "enabled";
IS227.connect[1] = connect229;

let connect230 = browser.currentScene.createNode("connect");
connect230.nodeField = "frameRate";
connect230.protoField = "frameRate";
IS227.connect[2] = connect230;

let connect231 = browser.currentScene.createNode("connect");
connect231.nodeField = "frameSize";
connect231.protoField = "frameSize";
IS227.connect[3] = connect231;

let connect232 = browser.currentScene.createNode("connect");
connect232.nodeField = "pixelAspectRatio";
connect232.protoField = "pixelAspectRatio";
IS227.connect[4] = connect232;

let connect233 = browser.currentScene.createNode("connect");
connect233.nodeField = "set_startTime";
connect233.protoField = "set_startTime";
IS227.connect[5] = connect233;

let connect234 = browser.currentScene.createNode("connect");
connect234.nodeField = "progress";
connect234.protoField = "progress";
IS227.connect[6] = connect234;

let connect235 = browser.currentScene.createNode("connect");
connect235.nodeField = "renderCompleteTime";
connect235.protoField = "renderCompleteTime";
IS227.connect[7] = connect235;

let connect236 = browser.currentScene.createNode("connect");
connect236.nodeField = "movieFormat";
connect236.protoField = "movieFormat";
IS227.connect[8] = connect236;

let connect237 = browser.currentScene.createNode("connect");
connect237.nodeField = "imageFormat";
connect237.protoField = "imageFormat";
IS227.connect[9] = connect237;

let connect238 = browser.currentScene.createNode("connect");
connect238.nodeField = "traceEnabled";
connect238.protoField = "traceEnabled";
IS227.connect[10] = connect238;

Script215.iS = IS227;


Script215.setSourceCode(`ecmascript:\n"+
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
ProtoBody214.children = new MFNode();

ProtoBody214.children[0] = Script215;

// Add any ROUTEs here, going from Script to other nodes within ProtoBody 
ProtoDeclare201.protoBody = ProtoBody214;

browser.currentScene.children[3] = ProtoDeclare201;

// =============== Launch Prototype Example ============== 
let Background239 = browser.currentScene.createNode("Background");
Background239.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[4] = Background239;

let Anchor240 = browser.currentScene.createNode("Anchor");
Anchor240.description = "launch CameraExample scene";
Anchor240.url = new MFString(new java.lang.String["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
let Transform241 = browser.currentScene.createNode("Transform");
let Shape242 = browser.currentScene.createNode("Shape");
let Text243 = browser.currentScene.createNode("Text");
Text243.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
let FontStyle244 = browser.currentScene.createNode("FontStyle");
FontStyle244.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text243.fontStyle = FontStyle244;

Shape242.geometry = Text243;

let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance245.material = Material246;

Shape242.appearance = Appearance245;

Transform241.children = new MFNode();

Transform241.children[0] = Shape242;

Anchor240.children = new MFNode();

Anchor240.children[0] = Transform241;

browser.currentScene.children[5] = Anchor240;

