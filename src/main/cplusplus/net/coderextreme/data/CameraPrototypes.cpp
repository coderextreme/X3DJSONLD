/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.2");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("CameraPrototypes.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman and Jeff Weekley");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("16 March 2009");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("25 October 2016");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("TODO");
meta7->setContent("Schematron rules, backed up by initialize() checks");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("BeyondViewpointCameraNodesWeb3D2009.pdf");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("subject");
meta10->setContent("Camera nodes for Viewpoint navigation control");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("CameraExamples.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("license");
meta15->setContent("../license.html");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
//=============== Camera ==============
CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
</ProtoDeclare>)foo");
ProtoDeclare17->setName("Camera");
ProtoDeclare17->setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
Cfield* field19 = new Cfield();
field19->setName("description");
field19->setAccessType("inputOutput");
field19->setAppinfo("Text description to be displayed for this Camera");
field19->setType("SFString");
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("position");
field20->setAccessType("inputOutput");
field20->setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");
field20->setType("SFVec3f");
field20->setValue("0 0 10");
ProtoInterface18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("orientation");
field21->setAccessType("inputOutput");
field21->setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");
field21->setType("SFRotation");
field21->setValue("0 0 1 0");
ProtoInterface18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("fieldOfView");
field22->setAccessType("inputOutput");
field22->setAppinfo("pi/4");
field22->setType("SFFloat");
field22->setValue("0.7854");
ProtoInterface18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("set_fraction");
field23->setAccessType("inputOnly");
field23->setAppinfo("input fraction drives interpolators");
field23->setType("SFFloat");
ProtoInterface18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("set_bind");
field24->setAccessType("inputOnly");
field24->setAppinfo("input event binds or unbinds this Camera");
field24->setType("SFBool");
ProtoInterface18->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("bindTime");
field25->setAccessType("outputOnly");
field25->setAppinfo("output event indicates when this Camera is bound");
field25->setType("SFTime");
ProtoInterface18->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("isBound");
field26->setAccessType("outputOnly");
field26->setAppinfo("output event indicates whether this Camera is bound or unbound");
field26->setType("SFBool");
ProtoInterface18->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("nearClipPlane");
field27->setAccessType("inputOutput");
field27->setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]");
field27->setType("SFFloat");
field27->setValue("0.25");
ProtoInterface18->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("farClipPlane");
field28->setAccessType("inputOutput");
field28->setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit");
field28->setType("SFFloat");
field28->setValue("0");
ProtoInterface18->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("shots");
field29->setAccessType("inputOutput");
field29->setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes");
field29->setType("MFNode");
//initialization nodes (if any) go here
ProtoInterface18->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("headlight");
field30->setAccessType("inputOutput");
field30->setAppinfo("Whether camera headlight is on or off");
field30->setType("SFBool");
field30->setValue("true");
ProtoInterface18->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("headlightColor");
field31->setAccessType("inputOutput");
field31->setAppinfo("Camera headlight color");
field31->setType("SFColor");
field31->setValue("1 1 1");
ProtoInterface18->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("headlightIntensity");
field32->setAccessType("inputOutput");
field32->setAppinfo("Camera headlight intensity");
field32->setType("SFFloat");
field32->setValue("1");
ProtoInterface18->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("filterColor");
field33->setAccessType("inputOutput");
field33->setAppinfo("Camera filter color that modifies virtual lens capture");
field33->setType("SFColor");
field33->setValue("1 1 1");
ProtoInterface18->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("filterTransparency");
field34->setAccessType("inputOutput");
field34->setAppinfo("Camera filter transparency that modifies virtual lens capture");
field34->setType("SFFloat");
field34->setValue("1");
ProtoInterface18->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("upVector");
field35->setAccessType("inputOutput");
field35->setAppinfo("upVector changes modify camera orientation (and possibly vice versa)");
field35->setType("SFVec3f");
field35->setValue("0 1 0");
ProtoInterface18->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("fStop");
field36->setAccessType("inputOutput");
field36->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field36->setType("SFFloat");
field36->setValue("5.6");
ProtoInterface18->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("focusDistance");
field37->setAccessType("inputOutput");
field37->setAppinfo("Distance to focal plane of sharpest focus");
field37->setType("SFFloat");
field37->setValue("10");
ProtoInterface18->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("isActive");
field38->setAccessType("outputOnly");
field38->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field38->setType("SFBool");
ProtoInterface18->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("totalDuration");
field39->setAccessType("outputOnly");
field39->setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations");
field39->setType("SFTime");
ProtoInterface18->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("offlineRender");
field40->setAccessType("inputOutput");
field40->setAppinfo("OfflineRender node");
field40->setType("SFNode");
//initialization node (if any) goes here
ProtoInterface18->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("traceEnabled");
field41->setAccessType("initializeOnly");
field41->setAppinfo("enable console output to trace script computations and prototype progress");
field41->setType("SFBool");
field41->setValue("false");
ProtoInterface18->addField(*field41);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody42 = new CProtoBody();
CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setDEF("CameraViewpoint");
CIS* IS44 = new CIS();
Cconnect* connect45 = new Cconnect();
connect45->setNodeField("description");
connect45->setProtoField("description");
IS44->addConnect(*connect45);

Cconnect* connect46 = new Cconnect();
connect46->setNodeField("position");
connect46->setProtoField("position");
IS44->addConnect(*connect46);

Cconnect* connect47 = new Cconnect();
connect47->setNodeField("orientation");
connect47->setProtoField("orientation");
IS44->addConnect(*connect47);

Cconnect* connect48 = new Cconnect();
connect48->setNodeField("fieldOfView");
connect48->setProtoField("fieldOfView");
IS44->addConnect(*connect48);

Cconnect* connect49 = new Cconnect();
connect49->setNodeField("set_bind");
connect49->setProtoField("set_bind");
IS44->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("bindTime");
connect50->setProtoField("bindTime");
IS44->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("isBound");
connect51->setProtoField("isBound");
IS44->addConnect(*connect51);

Viewpoint43->setIS(*IS44);

ProtoBody42->addChildren(*Viewpoint43);

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
CNavigationInfo* NavigationInfo52 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo52->setDEF("CameraNavInfo");
NavigationInfo52->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
CIS* IS53 = new CIS();
Cconnect* connect54 = new Cconnect();
connect54->setNodeField("set_bind");
connect54->setProtoField("set_bind");
IS53->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("headlight");
connect55->setProtoField("headlight");
IS53->addConnect(*connect55);

Cconnect* connect56 = new Cconnect();
connect56->setNodeField("visibilityLimit");
connect56->setProtoField("farClipPlane");
IS53->addConnect(*connect56);

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo52->setIS(*IS53);

ProtoBody42->addChildren(*NavigationInfo52);

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
CDirectionalLight* DirectionalLight57 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight57->setDEF("CameraDirectionalLight");
DirectionalLight57->setGlobal(True);
//TODO confirm other default field values match NavigationInfo spec
CIS* IS58 = new CIS();
Cconnect* connect59 = new Cconnect();
connect59->setNodeField("on");
connect59->setProtoField("headlight");
IS58->addConnect(*connect59);

Cconnect* connect60 = new Cconnect();
connect60->setNodeField("color");
connect60->setProtoField("headlightColor");
IS58->addConnect(*connect60);

Cconnect* connect61 = new Cconnect();
connect61->setNodeField("intensity");
connect61->setProtoField("headlightIntensity");
IS58->addConnect(*connect61);

DirectionalLight57->setIS(*IS58);

ProtoBody42->addChildren(*DirectionalLight57);

CPositionInterpolator* PositionInterpolator62 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator62->setDEF("CameraPositionInterpolator");
PositionInterpolator62->setKey(new float[2]{0,1}, 2);
PositionInterpolator62->setKeyValue(new float[6]{0,0,0,0,0,0});
CIS* IS63 = new CIS();
Cconnect* connect64 = new Cconnect();
connect64->setNodeField("set_fraction");
connect64->setProtoField("set_fraction");
IS63->addConnect(*connect64);

PositionInterpolator62->setIS(*IS63);

ProtoBody42->addChildren(*PositionInterpolator62);

COrientationInterpolator* OrientationInterpolator65 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator65->setDEF("CameraOrientationInterpolator");
OrientationInterpolator65->setKey(new float[2]{0,1}, 2);
OrientationInterpolator65->setKeyValue(new float[8]{0,1,0,0,0,1,0,0});
CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("set_fraction");
connect67->setProtoField("set_fraction");
IS66->addConnect(*connect67);

OrientationInterpolator65->setIS(*IS66);

ProtoBody42->addChildren(*OrientationInterpolator65);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromField("value_changed");
ROUTE68->setFromNode("CameraPositionInterpolator");
ROUTE68->setToField("position");
ROUTE68->setToNode("CameraViewpoint");
ProtoBody42->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("value_changed");
ROUTE69->setFromNode("CameraOrientationInterpolator");
ROUTE69->setToField("orientation");
ROUTE69->setToNode("CameraViewpoint");
ProtoBody42->addChildren(*ROUTE69);

CScript* Script70 = (CScript *)(m_pScene.createNode("Script"));
Script70->setDEF("CameraScript");
Script70->setDirectOutput(True);
Script70->setMustEvaluate(True);
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
Cfield* field71 = new Cfield();
field71->setName("description");
field71->setAccessType("inputOutput");
field71->setAppinfo("Text description to be displayed for this Camera");
field71->setType("SFString");
Script70->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("position");
field72->setAccessType("inputOutput");
field72->setAppinfo("Camera position in local transformation frame");
field72->setType("SFVec3f");
Script70->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("orientation");
field73->setAccessType("inputOutput");
field73->setAppinfo("Camera rotation in local transformation frame");
field73->setType("SFRotation");
Script70->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("set_fraction");
field74->setAccessType("inputOnly");
field74->setAppinfo("input fraction drives interpolators");
field74->setType("SFFloat");
Script70->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("set_bind");
field75->setAccessType("inputOnly");
field75->setAppinfo("input event binds or unbinds this Camera");
field75->setType("SFBool");
Script70->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("fieldOfView");
field76->setAccessType("inputOutput");
field76->setAppinfo("pi/4");
field76->setType("SFFloat");
Script70->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("nearClipPlane");
field77->setAccessType("inputOutput");
field77->setAppinfo("Vector distance to near clipping plane");
field77->setType("SFFloat");
Script70->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("farClipPlane");
field78->setAccessType("inputOutput");
field78->setAppinfo("Vector distance to far clipping plane");
field78->setType("SFFloat");
Script70->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("shots");
field79->setAccessType("inputOutput");
field79->setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes");
field79->setType("MFNode");
//initialization nodes (if any) go here
Script70->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("filterColor");
field80->setAccessType("inputOutput");
field80->setAppinfo("Camera filter color that modifies virtual lens capture");
field80->setType("SFColor");
Script70->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("filterTransparency");
field81->setAccessType("inputOutput");
field81->setAppinfo("Camera filter transparency that modifies virtual lens capture");
field81->setType("SFFloat");
Script70->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("upVector");
field82->setAccessType("inputOutput");
field82->setAppinfo("upVector changes modify camera orientation (and possibly vice versa)");
field82->setType("SFVec3f");
Script70->addField(*field82);

Cfield* field83 = new Cfield();
field83->setName("fStop");
field83->setAccessType("inputOutput");
field83->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field83->setType("SFFloat");
Script70->addField(*field83);

Cfield* field84 = new Cfield();
field84->setName("focusDistance");
field84->setAccessType("inputOutput");
field84->setAppinfo("Distance to focal plane of sharpest focus");
field84->setType("SFFloat");
Script70->addField(*field84);

Cfield* field85 = new Cfield();
field85->setName("isActive");
field85->setAccessType("outputOnly");
field85->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field85->setType("SFBool");
Script70->addField(*field85);

Cfield* field86 = new Cfield();
field86->setName("totalDuration");
field86->setAccessType("outputOnly");
field86->setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations");
field86->setType("SFTime");
Script70->addField(*field86);

Cfield* field87 = new Cfield();
field87->setName("offlineRender");
field87->setAccessType("inputOutput");
field87->setAppinfo("OfflineRender node");
field87->setType("SFNode");
//initialization node (if any) goes here
Script70->addField(*field87);

Cfield* field88 = new Cfield();
field88->setName("ViewpointNode");
field88->setAccessType("initializeOnly");
field88->setAppinfo("node reference to permit getting setting fields from within Script");
field88->setType("SFNode");
CViewpoint* Viewpoint89 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint89->setUSE("CameraViewpoint");
field88->addChildren(*Viewpoint89);

Script70->addField(*field88);

Cfield* field90 = new Cfield();
field90->setName("NavInfoNode");
field90->setAccessType("initializeOnly");
field90->setAppinfo("node reference to permit getting setting fields from within Script");
field90->setType("SFNode");
CNavigationInfo* NavigationInfo91 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo91->setUSE("CameraNavInfo");
field90->addChildren(*NavigationInfo91);

Script70->addField(*field90);

Cfield* field92 = new Cfield();
field92->setName("CameraPI");
field92->setAccessType("initializeOnly");
field92->setAppinfo("node reference to permit getting setting fields from within Script");
field92->setType("SFNode");
CPositionInterpolator* PositionInterpolator93 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator93->setUSE("CameraPositionInterpolator");
field92->addChildren(*PositionInterpolator93);

Script70->addField(*field92);

Cfield* field94 = new Cfield();
field94->setName("CameraOI");
field94->setAccessType("initializeOnly");
field94->setAppinfo("node reference to permit getting setting fields from within Script");
field94->setType("SFNode");
COrientationInterpolator* OrientationInterpolator95 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator95->setUSE("CameraOrientationInterpolator");
field94->addChildren(*OrientationInterpolator95);

Script70->addField(*field94);

Cfield* field96 = new Cfield();
field96->setName("key");
field96->setAccessType("inputOutput");
field96->setAppinfo("key array for interpolators");
field96->setType("MFFloat");
Script70->addField(*field96);

Cfield* field97 = new Cfield();
field97->setName("keyValuePosition");
field97->setAccessType("inputOutput");
field97->setAppinfo("keyValue array for PositionInterpolator");
field97->setType("MFVec3f");
Script70->addField(*field97);

Cfield* field98 = new Cfield();
field98->setName("keyValueOrientation");
field98->setAccessType("inputOutput");
field98->setAppinfo("keyValue array for OrientationInterpolator");
field98->setType("MFRotation");
Script70->addField(*field98);

Cfield* field99 = new Cfield();
field99->setName("animated");
field99->setAccessType("inputOutput");
field99->setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events");
field99->setType("SFBool");
field99->setValue("false");
Script70->addField(*field99);

Cfield* field100 = new Cfield();
field100->setName("initialized");
field100->setAccessType("initializeOnly");
field100->setAppinfo("perform checkShots() function once immediately after initialization");
field100->setType("SFBool");
field100->setValue("false");
Script70->addField(*field100);

Cfield* field101 = new Cfield();
field101->setName("shotCount");
field101->setAccessType("initializeOnly");
field101->setAppinfo("how many CameraShot nodes are contained in shots array");
field101->setType("SFInt32");
field101->setValue("0");
Script70->addField(*field101);

Cfield* field102 = new Cfield();
field102->setName("movesCount");
field102->setAccessType("initializeOnly");
field102->setAppinfo("how many CameraMove nodes are contained in moves array");
field102->setType("SFInt32");
field102->setValue("0");
Script70->addField(*field102);

Cfield* field103 = new Cfield();
field103->setName("frameCount");
field103->setAccessType("initializeOnly");
field103->setAppinfo("how many frames were created in current loop");
field103->setType("SFFloat");
field103->setValue("0");
Script70->addField(*field103);

Cfield* field104 = new Cfield();
field104->setName("startTime");
field104->setAccessType("initializeOnly");
field104->setAppinfo("holding variable");
field104->setType("SFTime");
field104->setValue("0");
Script70->addField(*field104);

Cfield* field105 = new Cfield();
field105->setName("priorTraceTime");
field105->setAccessType("initializeOnly");
field105->setAppinfo("holding variable");
field105->setType("SFTime");
field105->setValue("0");
Script70->addField(*field105);

Cfield* field106 = new Cfield();
field106->setName("traceEnabled");
field106->setAccessType("initializeOnly");
field106->setAppinfo("enable console output to trace script computations and prototype progress");
field106->setType("SFBool");
Script70->addField(*field106);

CIS* IS107 = new CIS();
Cconnect* connect108 = new Cconnect();
connect108->setNodeField("description");
connect108->setProtoField("description");
IS107->addConnect(*connect108);

Cconnect* connect109 = new Cconnect();
connect109->setNodeField("position");
connect109->setProtoField("position");
IS107->addConnect(*connect109);

Cconnect* connect110 = new Cconnect();
connect110->setNodeField("orientation");
connect110->setProtoField("orientation");
IS107->addConnect(*connect110);

Cconnect* connect111 = new Cconnect();
connect111->setNodeField("set_fraction");
connect111->setProtoField("set_fraction");
IS107->addConnect(*connect111);

Cconnect* connect112 = new Cconnect();
connect112->setNodeField("set_bind");
connect112->setProtoField("set_bind");
IS107->addConnect(*connect112);

Cconnect* connect113 = new Cconnect();
connect113->setNodeField("fieldOfView");
connect113->setProtoField("fieldOfView");
IS107->addConnect(*connect113);

Cconnect* connect114 = new Cconnect();
connect114->setNodeField("nearClipPlane");
connect114->setProtoField("nearClipPlane");
IS107->addConnect(*connect114);

Cconnect* connect115 = new Cconnect();
connect115->setNodeField("farClipPlane");
connect115->setProtoField("farClipPlane");
IS107->addConnect(*connect115);

Cconnect* connect116 = new Cconnect();
connect116->setNodeField("shots");
connect116->setProtoField("shots");
IS107->addConnect(*connect116);

Cconnect* connect117 = new Cconnect();
connect117->setNodeField("filterColor");
connect117->setProtoField("filterColor");
IS107->addConnect(*connect117);

Cconnect* connect118 = new Cconnect();
connect118->setNodeField("filterTransparency");
connect118->setProtoField("filterTransparency");
IS107->addConnect(*connect118);

Cconnect* connect119 = new Cconnect();
connect119->setNodeField("upVector");
connect119->setProtoField("upVector");
IS107->addConnect(*connect119);

Cconnect* connect120 = new Cconnect();
connect120->setNodeField("fStop");
connect120->setProtoField("fStop");
IS107->addConnect(*connect120);

Cconnect* connect121 = new Cconnect();
connect121->setNodeField("focusDistance");
connect121->setProtoField("focusDistance");
IS107->addConnect(*connect121);

Cconnect* connect122 = new Cconnect();
connect122->setNodeField("isActive");
connect122->setProtoField("isActive");
IS107->addConnect(*connect122);

Cconnect* connect123 = new Cconnect();
connect123->setNodeField("totalDuration");
connect123->setProtoField("totalDuration");
IS107->addConnect(*connect123);

Cconnect* connect124 = new Cconnect();
connect124->setNodeField("offlineRender");
connect124->setProtoField("offlineRender");
IS107->addConnect(*connect124);

Cconnect* connect125 = new Cconnect();
connect125->setNodeField("traceEnabled");
connect125->setProtoField("traceEnabled");
IS107->addConnect(*connect125);

Script70->setIS(*IS107);


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
ProtoBody42->addChildren(*Script70);

CROUTE* ROUTE126 = new CROUTE();
ROUTE126->setFromField("position");
ROUTE126->setFromNode("CameraScript");
ROUTE126->setToField("position");
ROUTE126->setToNode("CameraViewpoint");
ProtoBody42->addChildren(*ROUTE126);

CROUTE* ROUTE127 = new CROUTE();
ROUTE127->setFromField("orientation");
ROUTE127->setFromNode("CameraScript");
ROUTE127->setToField("orientation");
ROUTE127->setToNode("CameraViewpoint");
ProtoBody42->addChildren(*ROUTE127);

CROUTE* ROUTE128 = new CROUTE();
ROUTE128->setFromField("isActive");
ROUTE128->setFromNode("CameraScript");
ROUTE128->setToField("set_bind");
ROUTE128->setToNode("CameraViewpoint");
ProtoBody42->addChildren(*ROUTE128);

CROUTE* ROUTE129 = new CROUTE();
ROUTE129->setFromField("isActive");
ROUTE129->setFromNode("CameraScript");
ROUTE129->setToField("set_bind");
ROUTE129->setToNode("CameraNavInfo");
ProtoBody42->addChildren(*ROUTE129);

CROUTE* ROUTE130 = new CROUTE();
ROUTE130->setFromField("isActive");
ROUTE130->setFromNode("CameraScript");
ROUTE130->setToField("on");
ROUTE130->setToNode("CameraDirectionalLight");
ProtoBody42->addChildren(*ROUTE130);

ProtoDeclare17->setProtoBody(*ProtoBody42);

group->addChildren(*ProtoDeclare17);

//=============== CameraShot ==============
CProtoDeclare ProtoDeclare131 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
</ProtoDeclare>)foo");
ProtoDeclare131->setName("CameraShot");
ProtoDeclare131->setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.");
CProtoInterface* ProtoInterface132 = new CProtoInterface();
Cfield* field133 = new Cfield();
field133->setName("description");
field133->setAccessType("inputOutput");
field133->setAppinfo("Text description to be displayed for this CameraShot");
field133->setType("SFString");
ProtoInterface132->addField(*field133);

Cfield* field134 = new Cfield();
field134->setName("enabled");
field134->setAccessType("inputOutput");
field134->setAppinfo("Whether this CameraShot can be activated");
field134->setType("SFBool");
field134->setValue("true");
ProtoInterface132->addField(*field134);

Cfield* field135 = new Cfield();
field135->setName("moves");
field135->setAccessType("inputOutput");
field135->setAppinfo("Set of CameraMovement nodes");
field135->setType("MFNode");
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface132->addField(*field135);

Cfield* field136 = new Cfield();
field136->setName("initialPosition");
field136->setAccessType("inputOutput");
field136->setAppinfo("Setup to reinitialize camera position for this shot");
field136->setType("SFVec3f");
field136->setValue("0 0 10");
ProtoInterface132->addField(*field136);

Cfield* field137 = new Cfield();
field137->setName("initialOrientation");
field137->setAccessType("inputOutput");
field137->setAppinfo("Setup to reinitialize camera rotation for this shot");
field137->setType("SFRotation");
field137->setValue("0 0 1 0");
ProtoInterface132->addField(*field137);

Cfield* field138 = new Cfield();
field138->setName("initialAimPoint");
field138->setAccessType("inputOutput");
field138->setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot");
field138->setType("SFVec3f");
field138->setValue("0 0 0");
ProtoInterface132->addField(*field138);

Cfield* field139 = new Cfield();
field139->setName("initialFieldOfView");
field139->setAccessType("inputOutput");
field139->setAppinfo("pi/4");
field139->setType("SFFloat");
field139->setValue("0.7854");
ProtoInterface132->addField(*field139);

Cfield* field140 = new Cfield();
field140->setName("initialFStop");
field140->setAccessType("inputOutput");
field140->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field140->setType("SFFloat");
field140->setValue("5.6");
ProtoInterface132->addField(*field140);

Cfield* field141 = new Cfield();
field141->setName("initialFocusDistance");
field141->setAccessType("inputOutput");
field141->setAppinfo("Distance to focal plane of sharpest focus");
field141->setType("SFFloat");
field141->setValue("10");
ProtoInterface132->addField(*field141);

Cfield* field142 = new Cfield();
field142->setName("shotDuration");
field142->setAccessType("outputOnly");
field142->setAppinfo("Subtotal duration of contained CameraMovement move durations");
field142->setType("SFTime");
ProtoInterface132->addField(*field142);

Cfield* field143 = new Cfield();
field143->setName("isActive");
field143->setAccessType("outputOnly");
field143->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field143->setType("SFBool");
ProtoInterface132->addField(*field143);

Cfield* field144 = new Cfield();
field144->setName("traceEnabled");
field144->setAccessType("initializeOnly");
field144->setAppinfo("enable console output to trace script computations and prototype progress");
field144->setType("SFBool");
field144->setValue("false");
ProtoInterface132->addField(*field144);

ProtoDeclare131->setProtoInterface(*ProtoInterface132);

CProtoBody* ProtoBody145 = new CProtoBody();
CScript* Script146 = (CScript *)(m_pScene.createNode("Script"));
Script146->setDEF("CameraShotScript");
Script146->setDirectOutput(True);
Script146->setMustEvaluate(True);
Cfield* field147 = new Cfield();
field147->setName("description");
field147->setAccessType("inputOutput");
field147->setAppinfo("Text description to be displayed for this CameraShot");
field147->setType("SFString");
Script146->addField(*field147);

Cfield* field148 = new Cfield();
field148->setName("enabled");
field148->setAccessType("inputOutput");
field148->setAppinfo("Whether this CameraShot can be activated");
field148->setType("SFBool");
Script146->addField(*field148);

Cfield* field149 = new Cfield();
field149->setName("moves");
field149->setAccessType("inputOutput");
field149->setAppinfo("Set of CameraMovement nodes");
field149->setType("MFNode");
//initialization nodes (if any) go here
Script146->addField(*field149);

Cfield* field150 = new Cfield();
field150->setName("initialPosition");
field150->setAccessType("inputOutput");
field150->setAppinfo("Setup to reinitialize camera position for this shot");
field150->setType("SFVec3f");
Script146->addField(*field150);

Cfield* field151 = new Cfield();
field151->setName("initialOrientation");
field151->setAccessType("inputOutput");
field151->setAppinfo("Setup to reinitialize camera rotation for this shot");
field151->setType("SFRotation");
Script146->addField(*field151);

Cfield* field152 = new Cfield();
field152->setName("initialAimPoint");
field152->setAccessType("inputOutput");
field152->setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot");
field152->setType("SFVec3f");
Script146->addField(*field152);

Cfield* field153 = new Cfield();
field153->setName("initialFieldOfView");
field153->setAccessType("inputOutput");
field153->setAppinfo("pi/4");
field153->setType("SFFloat");
Script146->addField(*field153);

Cfield* field154 = new Cfield();
field154->setName("initialFStop");
field154->setAccessType("inputOutput");
field154->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field154->setType("SFFloat");
Script146->addField(*field154);

Cfield* field155 = new Cfield();
field155->setName("initialFocusDistance");
field155->setAccessType("inputOutput");
field155->setAppinfo("Distance to focal plane of sharpest focus");
field155->setType("SFFloat");
Script146->addField(*field155);

Cfield* field156 = new Cfield();
field156->setName("shotDuration");
field156->setAccessType("outputOnly");
field156->setAppinfo("Subtotal duration of contained CameraMovement move durations");
field156->setType("SFTime");
Script146->addField(*field156);

Cfield* field157 = new Cfield();
field157->setName("isActive");
field157->setAccessType("outputOnly");
field157->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field157->setType("SFBool");
Script146->addField(*field157);

Cfield* field158 = new Cfield();
field158->setName("traceEnabled");
field158->setAccessType("initializeOnly");
field158->setAppinfo("enable console output to trace script computations and prototype progress");
field158->setType("SFBool");
Script146->addField(*field158);

Cfield* field159 = new Cfield();
field159->setName("key");
field159->setAccessType("inputOutput");
field159->setAppinfo("key array for interpolators");
field159->setType("MFFloat");
Script146->addField(*field159);

Cfield* field160 = new Cfield();
field160->setName("keyValuePosition");
field160->setAccessType("inputOutput");
field160->setAppinfo("keyValue array for PositionInterpolator");
field160->setType("MFVec3f");
Script146->addField(*field160);

Cfield* field161 = new Cfield();
field161->setName("keyValueOrientation");
field161->setAccessType("inputOutput");
field161->setAppinfo("keyValue array for OrientationInterpolator");
field161->setType("MFRotation");
Script146->addField(*field161);

CIS* IS162 = new CIS();
Cconnect* connect163 = new Cconnect();
connect163->setNodeField("description");
connect163->setProtoField("description");
IS162->addConnect(*connect163);

Cconnect* connect164 = new Cconnect();
connect164->setNodeField("enabled");
connect164->setProtoField("enabled");
IS162->addConnect(*connect164);

Cconnect* connect165 = new Cconnect();
connect165->setNodeField("moves");
connect165->setProtoField("moves");
IS162->addConnect(*connect165);

Cconnect* connect166 = new Cconnect();
connect166->setNodeField("initialPosition");
connect166->setProtoField("initialPosition");
IS162->addConnect(*connect166);

Cconnect* connect167 = new Cconnect();
connect167->setNodeField("initialOrientation");
connect167->setProtoField("initialOrientation");
IS162->addConnect(*connect167);

Cconnect* connect168 = new Cconnect();
connect168->setNodeField("initialAimPoint");
connect168->setProtoField("initialAimPoint");
IS162->addConnect(*connect168);

Cconnect* connect169 = new Cconnect();
connect169->setNodeField("initialFieldOfView");
connect169->setProtoField("initialFieldOfView");
IS162->addConnect(*connect169);

Cconnect* connect170 = new Cconnect();
connect170->setNodeField("initialFStop");
connect170->setProtoField("initialFStop");
IS162->addConnect(*connect170);

Cconnect* connect171 = new Cconnect();
connect171->setNodeField("initialFocusDistance");
connect171->setProtoField("initialFocusDistance");
IS162->addConnect(*connect171);

Cconnect* connect172 = new Cconnect();
connect172->setNodeField("shotDuration");
connect172->setProtoField("shotDuration");
IS162->addConnect(*connect172);

Cconnect* connect173 = new Cconnect();
connect173->setNodeField("isActive");
connect173->setProtoField("isActive");
IS162->addConnect(*connect173);

Cconnect* connect174 = new Cconnect();
connect174->setNodeField("traceEnabled");
connect174->setProtoField("traceEnabled");
IS162->addConnect(*connect174);

Script146->setIS(*IS162);


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
ProtoBody145->addChildren(*Script146);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare131->setProtoBody(*ProtoBody145);

group->addChildren(*ProtoDeclare131);

//=============== CameraMovement ==============
CProtoDeclare ProtoDeclare175 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
</ProtoDeclare>)foo");
ProtoDeclare175->setName("CameraMovement");
ProtoDeclare175->setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.");
CProtoInterface* ProtoInterface176 = new CProtoInterface();
Cfield* field177 = new Cfield();
field177->setName("description");
field177->setAccessType("inputOutput");
field177->setAppinfo("Text description to be displayed for this CameraMovement");
field177->setType("SFString");
ProtoInterface176->addField(*field177);

Cfield* field178 = new Cfield();
field178->setName("enabled");
field178->setAccessType("inputOutput");
field178->setAppinfo("Whether this CameraMovement can be activated");
field178->setType("SFBool");
field178->setValue("true");
ProtoInterface176->addField(*field178);

Cfield* field179 = new Cfield();
field179->setName("duration");
field179->setAccessType("inputOutput");
field179->setAppinfo("Duration in seconds for this move");
field179->setType("SFFloat");
field179->setValue("0");
ProtoInterface176->addField(*field179);

Cfield* field180 = new Cfield();
field180->setName("goalPosition");
field180->setAccessType("inputOutput");
field180->setAppinfo("Goal camera position for this move");
field180->setType("SFVec3f");
field180->setValue("0 0 10");
ProtoInterface176->addField(*field180);

Cfield* field181 = new Cfield();
field181->setName("goalOrientation");
field181->setAccessType("inputOutput");
field181->setAppinfo("Goal camera rotation for this move");
field181->setType("SFRotation");
field181->setValue("0 0 1 0");
ProtoInterface176->addField(*field181);

Cfield* field182 = new Cfield();
field182->setName("tracking");
field182->setAccessType("inputOutput");
field182->setAppinfo("Whether or not camera direction is tracking towards the aimPoint");
field182->setType("SFBool");
field182->setValue("false");
ProtoInterface176->addField(*field182);

Cfield* field183 = new Cfield();
field183->setName("goalAimPoint");
field183->setAccessType("inputOutput");
field183->setAppinfo("Goal aimPoint for this move, ignored if tracking=false");
field183->setType("SFVec3f");
field183->setValue("0 0 0");
ProtoInterface176->addField(*field183);

Cfield* field184 = new Cfield();
field184->setName("goalFieldOfView");
field184->setAccessType("inputOutput");
field184->setAppinfo("Goal fieldOfView for this move");
field184->setType("SFFloat");
field184->setValue("0.7854");
ProtoInterface176->addField(*field184);

Cfield* field185 = new Cfield();
field185->setName("goalFStop");
field185->setAccessType("inputOutput");
field185->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field185->setType("SFFloat");
field185->setValue("5.6");
ProtoInterface176->addField(*field185);

Cfield* field186 = new Cfield();
field186->setName("goalFocusDistance");
field186->setAccessType("inputOutput");
field186->setAppinfo("Distance to focal plane of sharpest focus");
field186->setType("SFFloat");
field186->setValue("10");
ProtoInterface176->addField(*field186);

Cfield* field187 = new Cfield();
field187->setName("isActive");
field187->setAccessType("outputOnly");
field187->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field187->setType("SFBool");
ProtoInterface176->addField(*field187);

Cfield* field188 = new Cfield();
field188->setName("traceEnabled");
field188->setAccessType("initializeOnly");
field188->setAppinfo("enable console output to trace script computations and prototype progress");
field188->setType("SFBool");
field188->setValue("false");
ProtoInterface176->addField(*field188);

ProtoDeclare175->setProtoInterface(*ProtoInterface176);

CProtoBody* ProtoBody189 = new CProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
CScript* Script190 = (CScript *)(m_pScene.createNode("Script"));
Script190->setDEF("CameraMovementScript");
Script190->setDirectOutput(True);
Script190->setMustEvaluate(True);
Cfield* field191 = new Cfield();
field191->setName("description");
field191->setAccessType("inputOutput");
field191->setAppinfo("Text description to be displayed for this CameraMovement");
field191->setType("SFString");
Script190->addField(*field191);

Cfield* field192 = new Cfield();
field192->setName("enabled");
field192->setAccessType("inputOutput");
field192->setAppinfo("Whether this CameraMovement can be activated");
field192->setType("SFBool");
Script190->addField(*field192);

Cfield* field193 = new Cfield();
field193->setName("duration");
field193->setAccessType("inputOutput");
field193->setAppinfo("Duration in seconds for this move");
field193->setType("SFFloat");
Script190->addField(*field193);

Cfield* field194 = new Cfield();
field194->setName("goalPosition");
field194->setAccessType("inputOutput");
field194->setAppinfo("Goal camera position for this move");
field194->setType("SFVec3f");
Script190->addField(*field194);

Cfield* field195 = new Cfield();
field195->setName("goalOrientation");
field195->setAccessType("inputOutput");
field195->setAppinfo("Goal camera rotation for this move");
field195->setType("SFRotation");
Script190->addField(*field195);

Cfield* field196 = new Cfield();
field196->setName("tracking");
field196->setAccessType("inputOutput");
field196->setAppinfo("Whether or not camera direction is tracking towards the aimPoint");
field196->setType("SFBool");
Script190->addField(*field196);

Cfield* field197 = new Cfield();
field197->setName("goalAimPoint");
field197->setAccessType("inputOutput");
field197->setAppinfo("Goal aimPoint for this move, ignored if tracking=false");
field197->setType("SFVec3f");
Script190->addField(*field197);

Cfield* field198 = new Cfield();
field198->setName("goalFieldOfView");
field198->setAccessType("inputOutput");
field198->setAppinfo("Goal fieldOfView for this move");
field198->setType("SFFloat");
Script190->addField(*field198);

Cfield* field199 = new Cfield();
field199->setName("goalFStop");
field199->setAccessType("inputOutput");
field199->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field199->setType("SFFloat");
Script190->addField(*field199);

Cfield* field200 = new Cfield();
field200->setName("goalFocusDistance");
field200->setAccessType("inputOutput");
field200->setAppinfo("Distance to focal plane of sharpest focus");
field200->setType("SFFloat");
Script190->addField(*field200);

Cfield* field201 = new Cfield();
field201->setName("isActive");
field201->setAccessType("outputOnly");
field201->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field201->setType("SFBool");
Script190->addField(*field201);

Cfield* field202 = new Cfield();
field202->setName("traceEnabled");
field202->setAccessType("initializeOnly");
field202->setAppinfo("enable console output to trace script computations and prototype progress");
field202->setType("SFBool");
Script190->addField(*field202);

CIS* IS203 = new CIS();
Cconnect* connect204 = new Cconnect();
connect204->setNodeField("description");
connect204->setProtoField("description");
IS203->addConnect(*connect204);

Cconnect* connect205 = new Cconnect();
connect205->setNodeField("enabled");
connect205->setProtoField("enabled");
IS203->addConnect(*connect205);

Cconnect* connect206 = new Cconnect();
connect206->setNodeField("duration");
connect206->setProtoField("duration");
IS203->addConnect(*connect206);

Cconnect* connect207 = new Cconnect();
connect207->setNodeField("goalPosition");
connect207->setProtoField("goalPosition");
IS203->addConnect(*connect207);

Cconnect* connect208 = new Cconnect();
connect208->setNodeField("goalOrientation");
connect208->setProtoField("goalOrientation");
IS203->addConnect(*connect208);

Cconnect* connect209 = new Cconnect();
connect209->setNodeField("tracking");
connect209->setProtoField("tracking");
IS203->addConnect(*connect209);

Cconnect* connect210 = new Cconnect();
connect210->setNodeField("goalAimPoint");
connect210->setProtoField("goalAimPoint");
IS203->addConnect(*connect210);

Cconnect* connect211 = new Cconnect();
connect211->setNodeField("goalFieldOfView");
connect211->setProtoField("goalFieldOfView");
IS203->addConnect(*connect211);

Cconnect* connect212 = new Cconnect();
connect212->setNodeField("goalFStop");
connect212->setProtoField("goalFStop");
IS203->addConnect(*connect212);

Cconnect* connect213 = new Cconnect();
connect213->setNodeField("goalFocusDistance");
connect213->setProtoField("goalFocusDistance");
IS203->addConnect(*connect213);

Cconnect* connect214 = new Cconnect();
connect214->setNodeField("isActive");
connect214->setProtoField("isActive");
IS203->addConnect(*connect214);

Cconnect* connect215 = new Cconnect();
connect215->setNodeField("traceEnabled");
connect215->setProtoField("traceEnabled");
IS203->addConnect(*connect215);

Script190->setIS(*IS203);


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
ProtoBody189->addChildren(*Script190);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare175->setProtoBody(*ProtoBody189);

group->addChildren(*ProtoDeclare175);

//=============== OfflineRender ==============
CProtoDeclare ProtoDeclare216 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
</ProtoDeclare>)foo");
ProtoDeclare216->setName("OfflineRender");
ProtoDeclare216->setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).");
CProtoInterface* ProtoInterface217 = new CProtoInterface();
//TODO non-photorealistic rendering (NPR) parameters
Cfield* field218 = new Cfield();
field218->setName("description");
field218->setAccessType("inputOutput");
field218->setAppinfo("Text description to be displayed for this OfflineRender");
field218->setType("SFString");
ProtoInterface217->addField(*field218);

Cfield* field219 = new Cfield();
field219->setName("enabled");
field219->setAccessType("inputOutput");
field219->setAppinfo("Whether this OfflineRender can be activated");
field219->setType("SFBool");
field219->setValue("true");
ProtoInterface217->addField(*field219);

Cfield* field220 = new Cfield();
field220->setName("frameRate");
field220->setAccessType("inputOutput");
field220->setAppinfo("Frames per second recorded for this rendering");
field220->setType("SFFloat");
field220->setValue("30");
ProtoInterface217->addField(*field220);

Cfield* field221 = new Cfield();
field221->setName("frameSize");
field221->setAccessType("inputOutput");
field221->setAppinfo("Size of frame in number of pixels width and height");
field221->setType("SFVec2f");
field221->setValue("640 480");
ProtoInterface217->addField(*field221);

Cfield* field222 = new Cfield();
field222->setName("pixelAspectRatio");
field222->setAccessType("inputOutput");
field222->setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1");
field222->setType("SFFloat");
field222->setValue("1.33");
ProtoInterface217->addField(*field222);

Cfield* field223 = new Cfield();
field223->setName("set_startTime");
field223->setAccessType("inputOnly");
field223->setAppinfo("Begin render operation");
field223->setType("SFTime");
ProtoInterface217->addField(*field223);

Cfield* field224 = new Cfield();
field224->setName("progress");
field224->setAccessType("outputOnly");
field224->setAppinfo("Progress performing render operation (0..1)");
field224->setType("SFFloat");
ProtoInterface217->addField(*field224);

Cfield* field225 = new Cfield();
field225->setName("renderCompleteTime");
field225->setAccessType("outputOnly");
field225->setAppinfo("Render operation complete");
field225->setType("SFTime");
ProtoInterface217->addField(*field225);

Cfield* field226 = new Cfield();
field226->setName("movieFormat");
field226->setAccessType("initializeOnly");
field226->setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format");
field226->setType("MFString");
field226->setValue("\"mpeg\"");
ProtoInterface217->addField(*field226);

Cfield* field227 = new Cfield();
field227->setName("imageFormat");
field227->setAccessType("initializeOnly");
field227->setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format");
field227->setType("MFString");
field227->setValue("\"png\"");
ProtoInterface217->addField(*field227);

Cfield* field228 = new Cfield();
field228->setName("traceEnabled");
field228->setAccessType("initializeOnly");
field228->setAppinfo("enable console output to trace script computations and prototype progress");
field228->setType("SFBool");
field228->setValue("false");
ProtoInterface217->addField(*field228);

ProtoDeclare216->setProtoInterface(*ProtoInterface217);

CProtoBody* ProtoBody229 = new CProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
CScript* Script230 = (CScript *)(m_pScene.createNode("Script"));
Script230->setDEF("OfflineRenderScript");
Script230->setMustEvaluate(True);
Cfield* field231 = new Cfield();
field231->setName("description");
field231->setAccessType("inputOutput");
field231->setAppinfo("Text description to be displayed for this OfflineRender");
field231->setType("SFString");
Script230->addField(*field231);

Cfield* field232 = new Cfield();
field232->setName("enabled");
field232->setAccessType("inputOutput");
field232->setAppinfo("Whether this OfflineRender can be activated");
field232->setType("SFBool");
Script230->addField(*field232);

Cfield* field233 = new Cfield();
field233->setName("frameRate");
field233->setAccessType("inputOutput");
field233->setAppinfo("Frames per second recorded for this rendering");
field233->setType("SFFloat");
Script230->addField(*field233);

Cfield* field234 = new Cfield();
field234->setName("frameSize");
field234->setAccessType("inputOutput");
field234->setAppinfo("Size of frame in number of pixels width and height");
field234->setType("SFVec2f");
Script230->addField(*field234);

Cfield* field235 = new Cfield();
field235->setName("pixelAspectRatio");
field235->setAccessType("inputOutput");
field235->setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1");
field235->setType("SFFloat");
Script230->addField(*field235);

Cfield* field236 = new Cfield();
field236->setName("set_startTime");
field236->setAccessType("inputOnly");
field236->setAppinfo("Begin render operation");
field236->setType("SFTime");
Script230->addField(*field236);

Cfield* field237 = new Cfield();
field237->setName("progress");
field237->setAccessType("outputOnly");
field237->setAppinfo("Progress performing render operation (0..1)");
field237->setType("SFFloat");
Script230->addField(*field237);

Cfield* field238 = new Cfield();
field238->setName("renderCompleteTime");
field238->setAccessType("outputOnly");
field238->setAppinfo("Render operation complete");
field238->setType("SFTime");
Script230->addField(*field238);

Cfield* field239 = new Cfield();
field239->setName("movieFormat");
field239->setAccessType("initializeOnly");
field239->setAppinfo("Format of rendered output movie (mpeg mp4 etc.)");
field239->setType("MFString");
Script230->addField(*field239);

Cfield* field240 = new Cfield();
field240->setName("imageFormat");
field240->setAccessType("initializeOnly");
field240->setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)");
field240->setType("MFString");
Script230->addField(*field240);

Cfield* field241 = new Cfield();
field241->setName("traceEnabled");
field241->setAccessType("initializeOnly");
field241->setAppinfo("enable console output to trace script computations and prototype progress");
field241->setType("SFBool");
Script230->addField(*field241);

CIS* IS242 = new CIS();
Cconnect* connect243 = new Cconnect();
connect243->setNodeField("description");
connect243->setProtoField("description");
IS242->addConnect(*connect243);

Cconnect* connect244 = new Cconnect();
connect244->setNodeField("enabled");
connect244->setProtoField("enabled");
IS242->addConnect(*connect244);

Cconnect* connect245 = new Cconnect();
connect245->setNodeField("frameRate");
connect245->setProtoField("frameRate");
IS242->addConnect(*connect245);

Cconnect* connect246 = new Cconnect();
connect246->setNodeField("frameSize");
connect246->setProtoField("frameSize");
IS242->addConnect(*connect246);

Cconnect* connect247 = new Cconnect();
connect247->setNodeField("pixelAspectRatio");
connect247->setProtoField("pixelAspectRatio");
IS242->addConnect(*connect247);

Cconnect* connect248 = new Cconnect();
connect248->setNodeField("set_startTime");
connect248->setProtoField("set_startTime");
IS242->addConnect(*connect248);

Cconnect* connect249 = new Cconnect();
connect249->setNodeField("progress");
connect249->setProtoField("progress");
IS242->addConnect(*connect249);

Cconnect* connect250 = new Cconnect();
connect250->setNodeField("renderCompleteTime");
connect250->setProtoField("renderCompleteTime");
IS242->addConnect(*connect250);

Cconnect* connect251 = new Cconnect();
connect251->setNodeField("movieFormat");
connect251->setProtoField("movieFormat");
IS242->addConnect(*connect251);

Cconnect* connect252 = new Cconnect();
connect252->setNodeField("imageFormat");
connect252->setProtoField("imageFormat");
IS242->addConnect(*connect252);

Cconnect* connect253 = new Cconnect();
connect253->setNodeField("traceEnabled");
connect253->setProtoField("traceEnabled");
IS242->addConnect(*connect253);

Script230->setIS(*IS242);


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
ProtoBody229->addChildren(*Script230);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare216->setProtoBody(*ProtoBody229);

group->addChildren(*ProtoDeclare216);

//=============== Launch Prototype Example ==============
CBackground* Background254 = (CBackground *)(m_pScene.createNode("Background"));
Background254->setSkyColor(new float[3]{0.282353,0.380392,0.470588});
group->addChildren(*Background254);

CAnchor* Anchor255 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor255->setDescription("launch CameraExample scene");
Anchor255->setUrl(new CString[4]{"CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"}, 4);
CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text258 = (CText *)(m_pScene.createNode("Text"));
Text258->setString(new CString[5]{"CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"}, 5);
CFontStyle* FontStyle259 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle259->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text258->setFontStyle(*FontStyle259);

Shape257->setGeometry(Text258);

CAppearance* Appearance260 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material261 = (CMaterial *)(m_pScene.createNode("Material"));
Material261->setDiffuseColor(new float[3]{1,1,0.2});
Appearance260->setMaterial(*Material261);

Shape257->setAppearance(*Appearance260);

Transform256->addChildren(*Shape257);

Anchor255->addChildren(*Transform256);

group->addChildren(*Anchor255);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
