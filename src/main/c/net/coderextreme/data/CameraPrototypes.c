#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "CameraPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman and Jeff Weekley";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "16 March 2009";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "25 October 2016";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "TODO";
meta7.content = "Schematron rules, backed up by initialize() checks";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "BeyondViewpointCameraNodesWeb3D2009.pdf";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "subject";
meta10.content = "Camera nodes for Viewpoint navigation control";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "CameraExamples.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "license";
meta15.content = "../license.html";
head1.meta[13] = meta15;

head = head1;

//=============== Camera ==============
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field field19 = createNode("field");
field19.name = "description";
field19.accessType = "inputOutput";
field19.appinfo = "Text description to be displayed for this Camera";
field19.type = "SFString";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "position";
field20.accessType = "inputOutput";
field20.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field20.type = "SFVec3f";
field20.value = "0 0 10";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "orientation";
field21.accessType = "inputOutput";
field21.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field21.type = "SFRotation";
field21.value = "0 0 1 0";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "fieldOfView";
field22.accessType = "inputOutput";
field22.appinfo = "pi/4";
field22.type = "SFFloat";
field22.value = "0.7854";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.name = "set_fraction";
field23.accessType = "inputOnly";
field23.appinfo = "input fraction drives interpolators";
field23.type = "SFFloat";
ProtoInterface18.field[4] = field23;

field field24 = createNode("field");
field24.name = "set_bind";
field24.accessType = "inputOnly";
field24.appinfo = "input event binds or unbinds this Camera";
field24.type = "SFBool";
ProtoInterface18.field[5] = field24;

field field25 = createNode("field");
field25.name = "bindTime";
field25.accessType = "outputOnly";
field25.appinfo = "output event indicates when this Camera is bound";
field25.type = "SFTime";
ProtoInterface18.field[6] = field25;

field field26 = createNode("field");
field26.name = "isBound";
field26.accessType = "outputOnly";
field26.appinfo = "output event indicates whether this Camera is bound or unbound";
field26.type = "SFBool";
ProtoInterface18.field[7] = field26;

field field27 = createNode("field");
field27.name = "nearClipPlane";
field27.accessType = "inputOutput";
field27.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field27.type = "SFFloat";
field27.value = "0.25";
ProtoInterface18.field[8] = field27;

field field28 = createNode("field");
field28.name = "farClipPlane";
field28.accessType = "inputOutput";
field28.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field28.type = "SFFloat";
field28.value = "0";
ProtoInterface18.field[9] = field28;

field field29 = createNode("field");
field29.name = "shots";
field29.accessType = "inputOutput";
field29.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field29.type = "MFNode";
//initialization nodes (if any) go here
ProtoInterface18.field[10] = field29;

field field30 = createNode("field");
field30.name = "headlight";
field30.accessType = "inputOutput";
field30.appinfo = "Whether camera headlight is on or off";
field30.type = "SFBool";
field30.value = "true";
ProtoInterface18.field[11] = field30;

field field31 = createNode("field");
field31.name = "headlightColor";
field31.accessType = "inputOutput";
field31.appinfo = "Camera headlight color";
field31.type = "SFColor";
field31.value = "1 1 1";
ProtoInterface18.field[12] = field31;

field field32 = createNode("field");
field32.name = "headlightIntensity";
field32.accessType = "inputOutput";
field32.appinfo = "Camera headlight intensity";
field32.type = "SFFloat";
field32.value = "1";
ProtoInterface18.field[13] = field32;

field field33 = createNode("field");
field33.name = "filterColor";
field33.accessType = "inputOutput";
field33.appinfo = "Camera filter color that modifies virtual lens capture";
field33.type = "SFColor";
field33.value = "1 1 1";
ProtoInterface18.field[14] = field33;

field field34 = createNode("field");
field34.name = "filterTransparency";
field34.accessType = "inputOutput";
field34.appinfo = "Camera filter transparency that modifies virtual lens capture";
field34.type = "SFFloat";
field34.value = "1";
ProtoInterface18.field[15] = field34;

field field35 = createNode("field");
field35.name = "upVector";
field35.accessType = "inputOutput";
field35.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field35.type = "SFVec3f";
field35.value = "0 1 0";
ProtoInterface18.field[16] = field35;

field field36 = createNode("field");
field36.name = "fStop";
field36.accessType = "inputOutput";
field36.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field36.type = "SFFloat";
field36.value = "5.6";
ProtoInterface18.field[17] = field36;

field field37 = createNode("field");
field37.name = "focusDistance";
field37.accessType = "inputOutput";
field37.appinfo = "Distance to focal plane of sharpest focus";
field37.type = "SFFloat";
field37.value = "10";
ProtoInterface18.field[18] = field37;

field field38 = createNode("field");
field38.name = "isActive";
field38.accessType = "outputOnly";
field38.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field38.type = "SFBool";
ProtoInterface18.field[19] = field38;

field field39 = createNode("field");
field39.name = "totalDuration";
field39.accessType = "outputOnly";
field39.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field39.type = "SFTime";
ProtoInterface18.field[20] = field39;

field field40 = createNode("field");
field40.name = "offlineRender";
field40.accessType = "inputOutput";
field40.appinfo = "OfflineRender node";
field40.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface18.field[21] = field40;

field field41 = createNode("field");
field41.name = "traceEnabled";
field41.accessType = "initializeOnly";
field41.appinfo = "enable console output to trace script computations and prototype progress";
field41.type = "SFBool";
field41.value = "false";
ProtoInterface18.field[22] = field41;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody42 = createNode("ProtoBody");
Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.DEF = "CameraViewpoint";
IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "description";
connect45.protoField = "description";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "position";
connect46.protoField = "position";
IS44.connect[1] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "orientation";
connect47.protoField = "orientation";
IS44.connect[2] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "fieldOfView";
connect48.protoField = "fieldOfView";
IS44.connect[3] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "set_bind";
connect49.protoField = "set_bind";
IS44.connect[4] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "bindTime";
connect50.protoField = "bindTime";
IS44.connect[5] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "isBound";
connect51.protoField = "isBound";
IS44.connect[6] = connect51;

Viewpoint43.iS = IS44;

ProtoBody42.children = new MFNode();

ProtoBody42.children[0] = Viewpoint43;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
NavigationInfo NavigationInfo52 = createNode("NavigationInfo");
NavigationInfo52.DEF = "CameraNavInfo";
NavigationInfo52.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
IS IS53 = createNode("IS");
connect connect54 = createNode("connect");
connect54.nodeField = "set_bind";
connect54.protoField = "set_bind";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "headlight";
connect55.protoField = "headlight";
IS53.connect[1] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "visibilityLimit";
connect56.protoField = "farClipPlane";
IS53.connect[2] = connect56;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo52.iS = IS53;

ProtoBody42.children[1] = NavigationInfo52;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
DirectionalLight DirectionalLight57 = createNode("DirectionalLight");
DirectionalLight57.DEF = "CameraDirectionalLight";
DirectionalLight57.global = True;
//TODO confirm other default field values match NavigationInfo spec
IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "on";
connect59.protoField = "headlight";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

connect connect60 = createNode("connect");
connect60.nodeField = "color";
connect60.protoField = "headlightColor";
IS58.connect[1] = connect60;

connect connect61 = createNode("connect");
connect61.nodeField = "intensity";
connect61.protoField = "headlightIntensity";
IS58.connect[2] = connect61;

DirectionalLight57.iS = IS58;

ProtoBody42.children[2] = DirectionalLight57;

PositionInterpolator PositionInterpolator62 = createNode("PositionInterpolator");
PositionInterpolator62.DEF = "CameraPositionInterpolator";
PositionInterpolator62.key = new MFFloat(new float[0,1]);
PositionInterpolator62.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
IS IS63 = createNode("IS");
connect connect64 = createNode("connect");
connect64.nodeField = "set_fraction";
connect64.protoField = "set_fraction";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

PositionInterpolator62.iS = IS63;

ProtoBody42.children[3] = PositionInterpolator62;

OrientationInterpolator OrientationInterpolator65 = createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "CameraOrientationInterpolator";
OrientationInterpolator65.key = new MFFloat(new float[0,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
IS IS66 = createNode("IS");
connect connect67 = createNode("connect");
connect67.nodeField = "set_fraction";
connect67.protoField = "set_fraction";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

ProtoBody42.children[4] = OrientationInterpolator65;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromField = "value_changed";
ROUTE68.fromNode = "CameraPositionInterpolator";
ROUTE68.toField = "position";
ROUTE68.toNode = "CameraViewpoint";
ProtoBody42.children[5] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "CameraOrientationInterpolator";
ROUTE69.toField = "orientation";
ROUTE69.toNode = "CameraViewpoint";
ProtoBody42.children[6] = ROUTE69;

Script Script70 = createNode("Script");
Script70.DEF = "CameraScript";
Script70.directOutput = True;
Script70.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
field field71 = createNode("field");
field71.name = "description";
field71.accessType = "inputOutput";
field71.appinfo = "Text description to be displayed for this Camera";
field71.type = "SFString";
Script70.field = new MFNode();

Script70.field[0] = field71;

field field72 = createNode("field");
field72.name = "position";
field72.accessType = "inputOutput";
field72.appinfo = "Camera position in local transformation frame";
field72.type = "SFVec3f";
Script70.field[1] = field72;

field field73 = createNode("field");
field73.name = "orientation";
field73.accessType = "inputOutput";
field73.appinfo = "Camera rotation in local transformation frame";
field73.type = "SFRotation";
Script70.field[2] = field73;

field field74 = createNode("field");
field74.name = "set_fraction";
field74.accessType = "inputOnly";
field74.appinfo = "input fraction drives interpolators";
field74.type = "SFFloat";
Script70.field[3] = field74;

field field75 = createNode("field");
field75.name = "set_bind";
field75.accessType = "inputOnly";
field75.appinfo = "input event binds or unbinds this Camera";
field75.type = "SFBool";
Script70.field[4] = field75;

field field76 = createNode("field");
field76.name = "fieldOfView";
field76.accessType = "inputOutput";
field76.appinfo = "pi/4";
field76.type = "SFFloat";
Script70.field[5] = field76;

field field77 = createNode("field");
field77.name = "nearClipPlane";
field77.accessType = "inputOutput";
field77.appinfo = "Vector distance to near clipping plane";
field77.type = "SFFloat";
Script70.field[6] = field77;

field field78 = createNode("field");
field78.name = "farClipPlane";
field78.accessType = "inputOutput";
field78.appinfo = "Vector distance to far clipping plane";
field78.type = "SFFloat";
Script70.field[7] = field78;

field field79 = createNode("field");
field79.name = "shots";
field79.accessType = "inputOutput";
field79.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field79.type = "MFNode";
//initialization nodes (if any) go here
Script70.field[8] = field79;

field field80 = createNode("field");
field80.name = "filterColor";
field80.accessType = "inputOutput";
field80.appinfo = "Camera filter color that modifies virtual lens capture";
field80.type = "SFColor";
Script70.field[9] = field80;

field field81 = createNode("field");
field81.name = "filterTransparency";
field81.accessType = "inputOutput";
field81.appinfo = "Camera filter transparency that modifies virtual lens capture";
field81.type = "SFFloat";
Script70.field[10] = field81;

field field82 = createNode("field");
field82.name = "upVector";
field82.accessType = "inputOutput";
field82.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field82.type = "SFVec3f";
Script70.field[11] = field82;

field field83 = createNode("field");
field83.name = "fStop";
field83.accessType = "inputOutput";
field83.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field83.type = "SFFloat";
Script70.field[12] = field83;

field field84 = createNode("field");
field84.name = "focusDistance";
field84.accessType = "inputOutput";
field84.appinfo = "Distance to focal plane of sharpest focus";
field84.type = "SFFloat";
Script70.field[13] = field84;

field field85 = createNode("field");
field85.name = "isActive";
field85.accessType = "outputOnly";
field85.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field85.type = "SFBool";
Script70.field[14] = field85;

field field86 = createNode("field");
field86.name = "totalDuration";
field86.accessType = "outputOnly";
field86.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field86.type = "SFTime";
Script70.field[15] = field86;

field field87 = createNode("field");
field87.name = "offlineRender";
field87.accessType = "inputOutput";
field87.appinfo = "OfflineRender node";
field87.type = "SFNode";
//initialization node (if any) goes here
Script70.field[16] = field87;

field field88 = createNode("field");
field88.name = "ViewpointNode";
field88.accessType = "initializeOnly";
field88.appinfo = "node reference to permit getting setting fields from within Script";
field88.type = "SFNode";
Viewpoint Viewpoint89 = createNode("Viewpoint");
Viewpoint89.USE = "CameraViewpoint";
field88.children = new MFNode();

field88.children[0] = Viewpoint89;

Script70.field[17] = field88;

field field90 = createNode("field");
field90.name = "NavInfoNode";
field90.accessType = "initializeOnly";
field90.appinfo = "node reference to permit getting setting fields from within Script";
field90.type = "SFNode";
NavigationInfo NavigationInfo91 = createNode("NavigationInfo");
NavigationInfo91.USE = "CameraNavInfo";
field90.children = new MFNode();

field90.children[0] = NavigationInfo91;

Script70.field[18] = field90;

field field92 = createNode("field");
field92.name = "CameraPI";
field92.accessType = "initializeOnly";
field92.appinfo = "node reference to permit getting setting fields from within Script";
field92.type = "SFNode";
PositionInterpolator PositionInterpolator93 = createNode("PositionInterpolator");
PositionInterpolator93.USE = "CameraPositionInterpolator";
field92.children = new MFNode();

field92.children[0] = PositionInterpolator93;

Script70.field[19] = field92;

field field94 = createNode("field");
field94.name = "CameraOI";
field94.accessType = "initializeOnly";
field94.appinfo = "node reference to permit getting setting fields from within Script";
field94.type = "SFNode";
OrientationInterpolator OrientationInterpolator95 = createNode("OrientationInterpolator");
OrientationInterpolator95.USE = "CameraOrientationInterpolator";
field94.children = new MFNode();

field94.children[0] = OrientationInterpolator95;

Script70.field[20] = field94;

field field96 = createNode("field");
field96.name = "key";
field96.accessType = "inputOutput";
field96.appinfo = "key array for interpolators";
field96.type = "MFFloat";
Script70.field[21] = field96;

field field97 = createNode("field");
field97.name = "keyValuePosition";
field97.accessType = "inputOutput";
field97.appinfo = "keyValue array for PositionInterpolator";
field97.type = "MFVec3f";
Script70.field[22] = field97;

field field98 = createNode("field");
field98.name = "keyValueOrientation";
field98.accessType = "inputOutput";
field98.appinfo = "keyValue array for OrientationInterpolator";
field98.type = "MFRotation";
Script70.field[23] = field98;

field field99 = createNode("field");
field99.name = "animated";
field99.accessType = "inputOutput";
field99.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field99.type = "SFBool";
field99.value = "false";
Script70.field[24] = field99;

field field100 = createNode("field");
field100.name = "initialized";
field100.accessType = "initializeOnly";
field100.appinfo = "perform checkShots() function once immediately after initialization";
field100.type = "SFBool";
field100.value = "false";
Script70.field[25] = field100;

field field101 = createNode("field");
field101.name = "shotCount";
field101.accessType = "initializeOnly";
field101.appinfo = "how many CameraShot nodes are contained in shots array";
field101.type = "SFInt32";
field101.value = "0";
Script70.field[26] = field101;

field field102 = createNode("field");
field102.name = "movesCount";
field102.accessType = "initializeOnly";
field102.appinfo = "how many CameraMove nodes are contained in moves array";
field102.type = "SFInt32";
field102.value = "0";
Script70.field[27] = field102;

field field103 = createNode("field");
field103.name = "frameCount";
field103.accessType = "initializeOnly";
field103.appinfo = "how many frames were created in current loop";
field103.type = "SFFloat";
field103.value = "0";
Script70.field[28] = field103;

field field104 = createNode("field");
field104.name = "startTime";
field104.accessType = "initializeOnly";
field104.appinfo = "holding variable";
field104.type = "SFTime";
field104.value = "0";
Script70.field[29] = field104;

field field105 = createNode("field");
field105.name = "priorTraceTime";
field105.accessType = "initializeOnly";
field105.appinfo = "holding variable";
field105.type = "SFTime";
field105.value = "0";
Script70.field[30] = field105;

field field106 = createNode("field");
field106.name = "traceEnabled";
field106.accessType = "initializeOnly";
field106.appinfo = "enable console output to trace script computations and prototype progress";
field106.type = "SFBool";
Script70.field[31] = field106;

IS IS107 = createNode("IS");
connect connect108 = createNode("connect");
connect108.nodeField = "description";
connect108.protoField = "description";
IS107.connect = new MFNode();

IS107.connect[0] = connect108;

connect connect109 = createNode("connect");
connect109.nodeField = "position";
connect109.protoField = "position";
IS107.connect[1] = connect109;

connect connect110 = createNode("connect");
connect110.nodeField = "orientation";
connect110.protoField = "orientation";
IS107.connect[2] = connect110;

connect connect111 = createNode("connect");
connect111.nodeField = "set_fraction";
connect111.protoField = "set_fraction";
IS107.connect[3] = connect111;

connect connect112 = createNode("connect");
connect112.nodeField = "set_bind";
connect112.protoField = "set_bind";
IS107.connect[4] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "fieldOfView";
connect113.protoField = "fieldOfView";
IS107.connect[5] = connect113;

connect connect114 = createNode("connect");
connect114.nodeField = "nearClipPlane";
connect114.protoField = "nearClipPlane";
IS107.connect[6] = connect114;

connect connect115 = createNode("connect");
connect115.nodeField = "farClipPlane";
connect115.protoField = "farClipPlane";
IS107.connect[7] = connect115;

connect connect116 = createNode("connect");
connect116.nodeField = "shots";
connect116.protoField = "shots";
IS107.connect[8] = connect116;

connect connect117 = createNode("connect");
connect117.nodeField = "filterColor";
connect117.protoField = "filterColor";
IS107.connect[9] = connect117;

connect connect118 = createNode("connect");
connect118.nodeField = "filterTransparency";
connect118.protoField = "filterTransparency";
IS107.connect[10] = connect118;

connect connect119 = createNode("connect");
connect119.nodeField = "upVector";
connect119.protoField = "upVector";
IS107.connect[11] = connect119;

connect connect120 = createNode("connect");
connect120.nodeField = "fStop";
connect120.protoField = "fStop";
IS107.connect[12] = connect120;

connect connect121 = createNode("connect");
connect121.nodeField = "focusDistance";
connect121.protoField = "focusDistance";
IS107.connect[13] = connect121;

connect connect122 = createNode("connect");
connect122.nodeField = "isActive";
connect122.protoField = "isActive";
IS107.connect[14] = connect122;

connect connect123 = createNode("connect");
connect123.nodeField = "totalDuration";
connect123.protoField = "totalDuration";
IS107.connect[15] = connect123;

connect connect124 = createNode("connect");
connect124.nodeField = "offlineRender";
connect124.protoField = "offlineRender";
IS107.connect[16] = connect124;

connect connect125 = createNode("connect");
connect125.nodeField = "traceEnabled";
connect125.protoField = "traceEnabled";
IS107.connect[17] = connect125;

Script70.iS = IS107;


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
ProtoBody42.children[7] = Script70;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromField = "position";
ROUTE126.fromNode = "CameraScript";
ROUTE126.toField = "position";
ROUTE126.toNode = "CameraViewpoint";
ProtoBody42.children[8] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromField = "orientation";
ROUTE127.fromNode = "CameraScript";
ROUTE127.toField = "orientation";
ROUTE127.toNode = "CameraViewpoint";
ProtoBody42.children[9] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromField = "isActive";
ROUTE128.fromNode = "CameraScript";
ROUTE128.toField = "set_bind";
ROUTE128.toNode = "CameraViewpoint";
ProtoBody42.children[10] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromField = "isActive";
ROUTE129.fromNode = "CameraScript";
ROUTE129.toField = "set_bind";
ROUTE129.toNode = "CameraNavInfo";
ProtoBody42.children[11] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromField = "isActive";
ROUTE130.fromNode = "CameraScript";
ROUTE130.toField = "on";
ROUTE130.toNode = "CameraDirectionalLight";
ProtoBody42.children[12] = ROUTE130;

ProtoDeclare17.protoBody = ProtoBody42;

children = new MFNode();

children[0] = ProtoDeclare17;

//=============== CameraShot ==============
ProtoDeclare ProtoDeclare131 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface132 = createNode("ProtoInterface");
field field133 = createNode("field");
field133.name = "description";
field133.accessType = "inputOutput";
field133.appinfo = "Text description to be displayed for this CameraShot";
field133.type = "SFString";
ProtoInterface132.field = new MFNode();

ProtoInterface132.field[0] = field133;

field field134 = createNode("field");
field134.name = "enabled";
field134.accessType = "inputOutput";
field134.appinfo = "Whether this CameraShot can be activated";
field134.type = "SFBool";
field134.value = "true";
ProtoInterface132.field[1] = field134;

field field135 = createNode("field");
field135.name = "moves";
field135.accessType = "inputOutput";
field135.appinfo = "Set of CameraMovement nodes";
field135.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface132.field[2] = field135;

field field136 = createNode("field");
field136.name = "initialPosition";
field136.accessType = "inputOutput";
field136.appinfo = "Setup to reinitialize camera position for this shot";
field136.type = "SFVec3f";
field136.value = "0 0 10";
ProtoInterface132.field[3] = field136;

field field137 = createNode("field");
field137.name = "initialOrientation";
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize camera rotation for this shot";
field137.type = "SFRotation";
field137.value = "0 0 1 0";
ProtoInterface132.field[4] = field137;

field field138 = createNode("field");
field138.name = "initialAimPoint";
field138.accessType = "inputOutput";
field138.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field138.type = "SFVec3f";
field138.value = "0 0 0";
ProtoInterface132.field[5] = field138;

field field139 = createNode("field");
field139.name = "initialFieldOfView";
field139.accessType = "inputOutput";
field139.appinfo = "pi/4";
field139.type = "SFFloat";
field139.value = "0.7854";
ProtoInterface132.field[6] = field139;

field field140 = createNode("field");
field140.name = "initialFStop";
field140.accessType = "inputOutput";
field140.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field140.type = "SFFloat";
field140.value = "5.6";
ProtoInterface132.field[7] = field140;

field field141 = createNode("field");
field141.name = "initialFocusDistance";
field141.accessType = "inputOutput";
field141.appinfo = "Distance to focal plane of sharpest focus";
field141.type = "SFFloat";
field141.value = "10";
ProtoInterface132.field[8] = field141;

field field142 = createNode("field");
field142.name = "shotDuration";
field142.accessType = "outputOnly";
field142.appinfo = "Subtotal duration of contained CameraMovement move durations";
field142.type = "SFTime";
ProtoInterface132.field[9] = field142;

field field143 = createNode("field");
field143.name = "isActive";
field143.accessType = "outputOnly";
field143.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field143.type = "SFBool";
ProtoInterface132.field[10] = field143;

field field144 = createNode("field");
field144.name = "traceEnabled";
field144.accessType = "initializeOnly";
field144.appinfo = "enable console output to trace script computations and prototype progress";
field144.type = "SFBool";
field144.value = "false";
ProtoInterface132.field[11] = field144;

ProtoDeclare131.protoInterface = ProtoInterface132;

ProtoBody ProtoBody145 = createNode("ProtoBody");
Script Script146 = createNode("Script");
Script146.DEF = "CameraShotScript";
Script146.directOutput = True;
Script146.mustEvaluate = True;
field field147 = createNode("field");
field147.name = "description";
field147.accessType = "inputOutput";
field147.appinfo = "Text description to be displayed for this CameraShot";
field147.type = "SFString";
Script146.field = new MFNode();

Script146.field[0] = field147;

field field148 = createNode("field");
field148.name = "enabled";
field148.accessType = "inputOutput";
field148.appinfo = "Whether this CameraShot can be activated";
field148.type = "SFBool";
Script146.field[1] = field148;

field field149 = createNode("field");
field149.name = "moves";
field149.accessType = "inputOutput";
field149.appinfo = "Set of CameraMovement nodes";
field149.type = "MFNode";
//initialization nodes (if any) go here
Script146.field[2] = field149;

field field150 = createNode("field");
field150.name = "initialPosition";
field150.accessType = "inputOutput";
field150.appinfo = "Setup to reinitialize camera position for this shot";
field150.type = "SFVec3f";
Script146.field[3] = field150;

field field151 = createNode("field");
field151.name = "initialOrientation";
field151.accessType = "inputOutput";
field151.appinfo = "Setup to reinitialize camera rotation for this shot";
field151.type = "SFRotation";
Script146.field[4] = field151;

field field152 = createNode("field");
field152.name = "initialAimPoint";
field152.accessType = "inputOutput";
field152.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field152.type = "SFVec3f";
Script146.field[5] = field152;

field field153 = createNode("field");
field153.name = "initialFieldOfView";
field153.accessType = "inputOutput";
field153.appinfo = "pi/4";
field153.type = "SFFloat";
Script146.field[6] = field153;

field field154 = createNode("field");
field154.name = "initialFStop";
field154.accessType = "inputOutput";
field154.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field154.type = "SFFloat";
Script146.field[7] = field154;

field field155 = createNode("field");
field155.name = "initialFocusDistance";
field155.accessType = "inputOutput";
field155.appinfo = "Distance to focal plane of sharpest focus";
field155.type = "SFFloat";
Script146.field[8] = field155;

field field156 = createNode("field");
field156.name = "shotDuration";
field156.accessType = "outputOnly";
field156.appinfo = "Subtotal duration of contained CameraMovement move durations";
field156.type = "SFTime";
Script146.field[9] = field156;

field field157 = createNode("field");
field157.name = "isActive";
field157.accessType = "outputOnly";
field157.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field157.type = "SFBool";
Script146.field[10] = field157;

field field158 = createNode("field");
field158.name = "traceEnabled";
field158.accessType = "initializeOnly";
field158.appinfo = "enable console output to trace script computations and prototype progress";
field158.type = "SFBool";
Script146.field[11] = field158;

field field159 = createNode("field");
field159.name = "key";
field159.accessType = "inputOutput";
field159.appinfo = "key array for interpolators";
field159.type = "MFFloat";
Script146.field[12] = field159;

field field160 = createNode("field");
field160.name = "keyValuePosition";
field160.accessType = "inputOutput";
field160.appinfo = "keyValue array for PositionInterpolator";
field160.type = "MFVec3f";
Script146.field[13] = field160;

field field161 = createNode("field");
field161.name = "keyValueOrientation";
field161.accessType = "inputOutput";
field161.appinfo = "keyValue array for OrientationInterpolator";
field161.type = "MFRotation";
Script146.field[14] = field161;

IS IS162 = createNode("IS");
connect connect163 = createNode("connect");
connect163.nodeField = "description";
connect163.protoField = "description";
IS162.connect = new MFNode();

IS162.connect[0] = connect163;

connect connect164 = createNode("connect");
connect164.nodeField = "enabled";
connect164.protoField = "enabled";
IS162.connect[1] = connect164;

connect connect165 = createNode("connect");
connect165.nodeField = "moves";
connect165.protoField = "moves";
IS162.connect[2] = connect165;

connect connect166 = createNode("connect");
connect166.nodeField = "initialPosition";
connect166.protoField = "initialPosition";
IS162.connect[3] = connect166;

connect connect167 = createNode("connect");
connect167.nodeField = "initialOrientation";
connect167.protoField = "initialOrientation";
IS162.connect[4] = connect167;

connect connect168 = createNode("connect");
connect168.nodeField = "initialAimPoint";
connect168.protoField = "initialAimPoint";
IS162.connect[5] = connect168;

connect connect169 = createNode("connect");
connect169.nodeField = "initialFieldOfView";
connect169.protoField = "initialFieldOfView";
IS162.connect[6] = connect169;

connect connect170 = createNode("connect");
connect170.nodeField = "initialFStop";
connect170.protoField = "initialFStop";
IS162.connect[7] = connect170;

connect connect171 = createNode("connect");
connect171.nodeField = "initialFocusDistance";
connect171.protoField = "initialFocusDistance";
IS162.connect[8] = connect171;

connect connect172 = createNode("connect");
connect172.nodeField = "shotDuration";
connect172.protoField = "shotDuration";
IS162.connect[9] = connect172;

connect connect173 = createNode("connect");
connect173.nodeField = "isActive";
connect173.protoField = "isActive";
IS162.connect[10] = connect173;

connect connect174 = createNode("connect");
connect174.nodeField = "traceEnabled";
connect174.protoField = "traceEnabled";
IS162.connect[11] = connect174;

Script146.iS = IS162;


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
ProtoBody145.children = new MFNode();

ProtoBody145.children[0] = Script146;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare131.protoBody = ProtoBody145;

children[1] = ProtoDeclare131;

//=============== CameraMovement ==============
ProtoDeclare ProtoDeclare175 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface176 = createNode("ProtoInterface");
field field177 = createNode("field");
field177.name = "description";
field177.accessType = "inputOutput";
field177.appinfo = "Text description to be displayed for this CameraMovement";
field177.type = "SFString";
ProtoInterface176.field = new MFNode();

ProtoInterface176.field[0] = field177;

field field178 = createNode("field");
field178.name = "enabled";
field178.accessType = "inputOutput";
field178.appinfo = "Whether this CameraMovement can be activated";
field178.type = "SFBool";
field178.value = "true";
ProtoInterface176.field[1] = field178;

field field179 = createNode("field");
field179.name = "duration";
field179.accessType = "inputOutput";
field179.appinfo = "Duration in seconds for this move";
field179.type = "SFFloat";
field179.value = "0";
ProtoInterface176.field[2] = field179;

field field180 = createNode("field");
field180.name = "goalPosition";
field180.accessType = "inputOutput";
field180.appinfo = "Goal camera position for this move";
field180.type = "SFVec3f";
field180.value = "0 0 10";
ProtoInterface176.field[3] = field180;

field field181 = createNode("field");
field181.name = "goalOrientation";
field181.accessType = "inputOutput";
field181.appinfo = "Goal camera rotation for this move";
field181.type = "SFRotation";
field181.value = "0 0 1 0";
ProtoInterface176.field[4] = field181;

field field182 = createNode("field");
field182.name = "tracking";
field182.accessType = "inputOutput";
field182.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field182.type = "SFBool";
field182.value = "false";
ProtoInterface176.field[5] = field182;

field field183 = createNode("field");
field183.name = "goalAimPoint";
field183.accessType = "inputOutput";
field183.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field183.type = "SFVec3f";
field183.value = "0 0 0";
ProtoInterface176.field[6] = field183;

field field184 = createNode("field");
field184.name = "goalFieldOfView";
field184.accessType = "inputOutput";
field184.appinfo = "Goal fieldOfView for this move";
field184.type = "SFFloat";
field184.value = "0.7854";
ProtoInterface176.field[7] = field184;

field field185 = createNode("field");
field185.name = "goalFStop";
field185.accessType = "inputOutput";
field185.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field185.type = "SFFloat";
field185.value = "5.6";
ProtoInterface176.field[8] = field185;

field field186 = createNode("field");
field186.name = "goalFocusDistance";
field186.accessType = "inputOutput";
field186.appinfo = "Distance to focal plane of sharpest focus";
field186.type = "SFFloat";
field186.value = "10";
ProtoInterface176.field[9] = field186;

field field187 = createNode("field");
field187.name = "isActive";
field187.accessType = "outputOnly";
field187.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field187.type = "SFBool";
ProtoInterface176.field[10] = field187;

field field188 = createNode("field");
field188.name = "traceEnabled";
field188.accessType = "initializeOnly";
field188.appinfo = "enable console output to trace script computations and prototype progress";
field188.type = "SFBool";
field188.value = "false";
ProtoInterface176.field[11] = field188;

ProtoDeclare175.protoInterface = ProtoInterface176;

ProtoBody ProtoBody189 = createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
Script Script190 = createNode("Script");
Script190.DEF = "CameraMovementScript";
Script190.directOutput = True;
Script190.mustEvaluate = True;
field field191 = createNode("field");
field191.name = "description";
field191.accessType = "inputOutput";
field191.appinfo = "Text description to be displayed for this CameraMovement";
field191.type = "SFString";
Script190.field = new MFNode();

Script190.field[0] = field191;

field field192 = createNode("field");
field192.name = "enabled";
field192.accessType = "inputOutput";
field192.appinfo = "Whether this CameraMovement can be activated";
field192.type = "SFBool";
Script190.field[1] = field192;

field field193 = createNode("field");
field193.name = "duration";
field193.accessType = "inputOutput";
field193.appinfo = "Duration in seconds for this move";
field193.type = "SFFloat";
Script190.field[2] = field193;

field field194 = createNode("field");
field194.name = "goalPosition";
field194.accessType = "inputOutput";
field194.appinfo = "Goal camera position for this move";
field194.type = "SFVec3f";
Script190.field[3] = field194;

field field195 = createNode("field");
field195.name = "goalOrientation";
field195.accessType = "inputOutput";
field195.appinfo = "Goal camera rotation for this move";
field195.type = "SFRotation";
Script190.field[4] = field195;

field field196 = createNode("field");
field196.name = "tracking";
field196.accessType = "inputOutput";
field196.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field196.type = "SFBool";
Script190.field[5] = field196;

field field197 = createNode("field");
field197.name = "goalAimPoint";
field197.accessType = "inputOutput";
field197.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field197.type = "SFVec3f";
Script190.field[6] = field197;

field field198 = createNode("field");
field198.name = "goalFieldOfView";
field198.accessType = "inputOutput";
field198.appinfo = "Goal fieldOfView for this move";
field198.type = "SFFloat";
Script190.field[7] = field198;

field field199 = createNode("field");
field199.name = "goalFStop";
field199.accessType = "inputOutput";
field199.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field199.type = "SFFloat";
Script190.field[8] = field199;

field field200 = createNode("field");
field200.name = "goalFocusDistance";
field200.accessType = "inputOutput";
field200.appinfo = "Distance to focal plane of sharpest focus";
field200.type = "SFFloat";
Script190.field[9] = field200;

field field201 = createNode("field");
field201.name = "isActive";
field201.accessType = "outputOnly";
field201.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field201.type = "SFBool";
Script190.field[10] = field201;

field field202 = createNode("field");
field202.name = "traceEnabled";
field202.accessType = "initializeOnly";
field202.appinfo = "enable console output to trace script computations and prototype progress";
field202.type = "SFBool";
Script190.field[11] = field202;

IS IS203 = createNode("IS");
connect connect204 = createNode("connect");
connect204.nodeField = "description";
connect204.protoField = "description";
IS203.connect = new MFNode();

IS203.connect[0] = connect204;

connect connect205 = createNode("connect");
connect205.nodeField = "enabled";
connect205.protoField = "enabled";
IS203.connect[1] = connect205;

connect connect206 = createNode("connect");
connect206.nodeField = "duration";
connect206.protoField = "duration";
IS203.connect[2] = connect206;

connect connect207 = createNode("connect");
connect207.nodeField = "goalPosition";
connect207.protoField = "goalPosition";
IS203.connect[3] = connect207;

connect connect208 = createNode("connect");
connect208.nodeField = "goalOrientation";
connect208.protoField = "goalOrientation";
IS203.connect[4] = connect208;

connect connect209 = createNode("connect");
connect209.nodeField = "tracking";
connect209.protoField = "tracking";
IS203.connect[5] = connect209;

connect connect210 = createNode("connect");
connect210.nodeField = "goalAimPoint";
connect210.protoField = "goalAimPoint";
IS203.connect[6] = connect210;

connect connect211 = createNode("connect");
connect211.nodeField = "goalFieldOfView";
connect211.protoField = "goalFieldOfView";
IS203.connect[7] = connect211;

connect connect212 = createNode("connect");
connect212.nodeField = "goalFStop";
connect212.protoField = "goalFStop";
IS203.connect[8] = connect212;

connect connect213 = createNode("connect");
connect213.nodeField = "goalFocusDistance";
connect213.protoField = "goalFocusDistance";
IS203.connect[9] = connect213;

connect connect214 = createNode("connect");
connect214.nodeField = "isActive";
connect214.protoField = "isActive";
IS203.connect[10] = connect214;

connect connect215 = createNode("connect");
connect215.nodeField = "traceEnabled";
connect215.protoField = "traceEnabled";
IS203.connect[11] = connect215;

Script190.iS = IS203;


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
ProtoBody189.children = new MFNode();

ProtoBody189.children[0] = Script190;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare175.protoBody = ProtoBody189;

children[2] = ProtoDeclare175;

//=============== OfflineRender ==============
ProtoDeclare ProtoDeclare216 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface217 = createNode("ProtoInterface");
//TODO non-photorealistic rendering (NPR) parameters
field field218 = createNode("field");
field218.name = "description";
field218.accessType = "inputOutput";
field218.appinfo = "Text description to be displayed for this OfflineRender";
field218.type = "SFString";
ProtoInterface217.field = new MFNode();

ProtoInterface217.field[0] = field218;

field field219 = createNode("field");
field219.name = "enabled";
field219.accessType = "inputOutput";
field219.appinfo = "Whether this OfflineRender can be activated";
field219.type = "SFBool";
field219.value = "true";
ProtoInterface217.field[1] = field219;

field field220 = createNode("field");
field220.name = "frameRate";
field220.accessType = "inputOutput";
field220.appinfo = "Frames per second recorded for this rendering";
field220.type = "SFFloat";
field220.value = "30";
ProtoInterface217.field[2] = field220;

field field221 = createNode("field");
field221.name = "frameSize";
field221.accessType = "inputOutput";
field221.appinfo = "Size of frame in number of pixels width and height";
field221.type = "SFVec2f";
field221.value = "640 480";
ProtoInterface217.field[3] = field221;

field field222 = createNode("field");
field222.name = "pixelAspectRatio";
field222.accessType = "inputOutput";
field222.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field222.type = "SFFloat";
field222.value = "1.33";
ProtoInterface217.field[4] = field222;

field field223 = createNode("field");
field223.name = "set_startTime";
field223.accessType = "inputOnly";
field223.appinfo = "Begin render operation";
field223.type = "SFTime";
ProtoInterface217.field[5] = field223;

field field224 = createNode("field");
field224.name = "progress";
field224.accessType = "outputOnly";
field224.appinfo = "Progress performing render operation (0..1)";
field224.type = "SFFloat";
ProtoInterface217.field[6] = field224;

field field225 = createNode("field");
field225.name = "renderCompleteTime";
field225.accessType = "outputOnly";
field225.appinfo = "Render operation complete";
field225.type = "SFTime";
ProtoInterface217.field[7] = field225;

field field226 = createNode("field");
field226.name = "movieFormat";
field226.accessType = "initializeOnly";
field226.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field226.type = "MFString";
field226.value = "\"mpeg\"";
ProtoInterface217.field[8] = field226;

field field227 = createNode("field");
field227.name = "imageFormat";
field227.accessType = "initializeOnly";
field227.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field227.type = "MFString";
field227.value = "\"png\"";
ProtoInterface217.field[9] = field227;

field field228 = createNode("field");
field228.name = "traceEnabled";
field228.accessType = "initializeOnly";
field228.appinfo = "enable console output to trace script computations and prototype progress";
field228.type = "SFBool";
field228.value = "false";
ProtoInterface217.field[10] = field228;

ProtoDeclare216.protoInterface = ProtoInterface217;

ProtoBody ProtoBody229 = createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
Script Script230 = createNode("Script");
Script230.DEF = "OfflineRenderScript";
Script230.mustEvaluate = True;
field field231 = createNode("field");
field231.name = "description";
field231.accessType = "inputOutput";
field231.appinfo = "Text description to be displayed for this OfflineRender";
field231.type = "SFString";
Script230.field = new MFNode();

Script230.field[0] = field231;

field field232 = createNode("field");
field232.name = "enabled";
field232.accessType = "inputOutput";
field232.appinfo = "Whether this OfflineRender can be activated";
field232.type = "SFBool";
Script230.field[1] = field232;

field field233 = createNode("field");
field233.name = "frameRate";
field233.accessType = "inputOutput";
field233.appinfo = "Frames per second recorded for this rendering";
field233.type = "SFFloat";
Script230.field[2] = field233;

field field234 = createNode("field");
field234.name = "frameSize";
field234.accessType = "inputOutput";
field234.appinfo = "Size of frame in number of pixels width and height";
field234.type = "SFVec2f";
Script230.field[3] = field234;

field field235 = createNode("field");
field235.name = "pixelAspectRatio";
field235.accessType = "inputOutput";
field235.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field235.type = "SFFloat";
Script230.field[4] = field235;

field field236 = createNode("field");
field236.name = "set_startTime";
field236.accessType = "inputOnly";
field236.appinfo = "Begin render operation";
field236.type = "SFTime";
Script230.field[5] = field236;

field field237 = createNode("field");
field237.name = "progress";
field237.accessType = "outputOnly";
field237.appinfo = "Progress performing render operation (0..1)";
field237.type = "SFFloat";
Script230.field[6] = field237;

field field238 = createNode("field");
field238.name = "renderCompleteTime";
field238.accessType = "outputOnly";
field238.appinfo = "Render operation complete";
field238.type = "SFTime";
Script230.field[7] = field238;

field field239 = createNode("field");
field239.name = "movieFormat";
field239.accessType = "initializeOnly";
field239.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field239.type = "MFString";
Script230.field[8] = field239;

field field240 = createNode("field");
field240.name = "imageFormat";
field240.accessType = "initializeOnly";
field240.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field240.type = "MFString";
Script230.field[9] = field240;

field field241 = createNode("field");
field241.name = "traceEnabled";
field241.accessType = "initializeOnly";
field241.appinfo = "enable console output to trace script computations and prototype progress";
field241.type = "SFBool";
Script230.field[10] = field241;

IS IS242 = createNode("IS");
connect connect243 = createNode("connect");
connect243.nodeField = "description";
connect243.protoField = "description";
IS242.connect = new MFNode();

IS242.connect[0] = connect243;

connect connect244 = createNode("connect");
connect244.nodeField = "enabled";
connect244.protoField = "enabled";
IS242.connect[1] = connect244;

connect connect245 = createNode("connect");
connect245.nodeField = "frameRate";
connect245.protoField = "frameRate";
IS242.connect[2] = connect245;

connect connect246 = createNode("connect");
connect246.nodeField = "frameSize";
connect246.protoField = "frameSize";
IS242.connect[3] = connect246;

connect connect247 = createNode("connect");
connect247.nodeField = "pixelAspectRatio";
connect247.protoField = "pixelAspectRatio";
IS242.connect[4] = connect247;

connect connect248 = createNode("connect");
connect248.nodeField = "set_startTime";
connect248.protoField = "set_startTime";
IS242.connect[5] = connect248;

connect connect249 = createNode("connect");
connect249.nodeField = "progress";
connect249.protoField = "progress";
IS242.connect[6] = connect249;

connect connect250 = createNode("connect");
connect250.nodeField = "renderCompleteTime";
connect250.protoField = "renderCompleteTime";
IS242.connect[7] = connect250;

connect connect251 = createNode("connect");
connect251.nodeField = "movieFormat";
connect251.protoField = "movieFormat";
IS242.connect[8] = connect251;

connect connect252 = createNode("connect");
connect252.nodeField = "imageFormat";
connect252.protoField = "imageFormat";
IS242.connect[9] = connect252;

connect connect253 = createNode("connect");
connect253.nodeField = "traceEnabled";
connect253.protoField = "traceEnabled";
IS242.connect[10] = connect253;

Script230.iS = IS242;


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
ProtoBody229.children = new MFNode();

ProtoBody229.children[0] = Script230;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare216.protoBody = ProtoBody229;

children[3] = ProtoDeclare216;

//=============== Launch Prototype Example ==============
Background Background254 = createNode("Background");
Background254.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
children[4] = Background254;

Anchor Anchor255 = createNode("Anchor");
Anchor255.description = "launch CameraExample scene";
Anchor255.url = new MFString(new java.lang.String["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
Transform Transform256 = createNode("Transform");
Shape Shape257 = createNode("Shape");
Text Text258 = createNode("Text");
Text258.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
FontStyle FontStyle259 = createNode("FontStyle");
FontStyle259.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text258.fontStyle = FontStyle259;

Shape257.geometry = Text258;

Appearance Appearance260 = createNode("Appearance");
Material Material261 = createNode("Material");
Material261.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance260.material = Material261;

Shape257.appearance = Appearance260;

Transform256.child = new undefined();

Transform256.child[0] = Shape257;

Anchor255.children = new MFNode();

Anchor255.children[0] = Transform256;

children[5] = Anchor255;

}
