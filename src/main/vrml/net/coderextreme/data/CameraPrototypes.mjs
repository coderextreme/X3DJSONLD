let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "CameraPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman and Jeff Weekley";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "16 March 2009";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 30 Dec 2023 07:35:06 GMT";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "TODO";
meta7.content = "Schematron rules, backed up by initialize() checks";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "BeyondViewpointCameraNodesWeb3D2009.pdf";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "CameraExamples.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "subject";
meta12.content = "Camera nodes for Viewpoint navigation control";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[11] = meta13;

head = head1;

let ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Camera" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFVec3f" name="position" value="0 0 10"></field>
<field accessType="inputOutput" type="SFRotation" name="orientation"></field>
<field accessType="inputOutput" type="SFFloat" name="fieldOfView" value="0.7854"></field>
<field accessType="inputOnly" type="SFFloat" name="set_fraction"></field>
<field accessType="inputOnly" type="SFBool" name="set_bind"></field>
<field accessType="outputOnly" type="SFTime" name="bindTime"></field>
<field accessType="outputOnly" type="SFBool" name="isBound"></field>
<field accessType="inputOutput" type="SFFloat" name="nearClipPlane" value="0.25"></field>
<field accessType="inputOutput" type="SFFloat" name="farClipPlane"></field>
<field accessType="inputOutput" type="MFNode" name="shots"></field>
<field accessType="inputOutput" type="SFBool" name="headlight" value="true"></field>
<field accessType="inputOutput" type="SFColor" name="headlightColor" value="1 1 1"></field>
<field accessType="inputOutput" type="SFFloat" name="headlightIntensity" value="1"></field>
<field accessType="inputOutput" type="SFColor" name="filterColor" value="1 1 1"></field>
<field accessType="inputOutput" type="SFFloat" name="filterTransparency" value="1"></field>
<field accessType="inputOutput" type="SFVec3f" name="upVector" value="0 1 0"></field>
<field accessType="inputOutput" type="SFFloat" name="fStop" value="5.6"></field>
<field accessType="inputOutput" type="SFFloat" name="focusDistance" value="10"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="outputOnly" type="SFTime" name="totalDuration"></field>
<field accessType="inputOutput" type="SFNode" name="offlineRender"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
</ProtoInterface>
<ProtoBody><Viewpoint DEF="CameraViewpoint"><IS><connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="description" protoField="description"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="fieldOfView" protoField="fieldOfView"></connect>
<connect nodeField="isBound" protoField="isBound"></connect>
<connect nodeField="bindTime" protoField="bindTime"></connect>
</IS>
</Viewpoint>
<NavigationInfo DEF="CameraNavInfo" type="&quot;EXAMINE&quot; &quot;FLY&quot; &quot;ANY&quot;"><IS><connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="headlight" protoField="headlight"></connect>
<connect nodeField="visibilityLimit" protoField="farClipPlane"></connect>
</IS>
</NavigationInfo>
<DirectionalLight DEF="CameraDirectionalLight" global="true"><IS><connect nodeField="on" protoField="headlight"></connect>
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
<Script DEF="CameraScript" directOutput="true" mustEvaluate="true"><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFVec3f" name="position"></field>
<field accessType="inputOutput" type="SFRotation" name="orientation"></field>
<field accessType="inputOnly" type="SFFloat" name="set_fraction"></field>
<field accessType="inputOnly" type="SFBool" name="set_bind"></field>
<field accessType="inputOutput" type="SFFloat" name="fieldOfView"></field>
<field accessType="inputOutput" type="SFFloat" name="nearClipPlane"></field>
<field accessType="inputOutput" type="SFFloat" name="farClipPlane"></field>
<field accessType="inputOutput" type="MFNode" name="shots"></field>
<field accessType="inputOutput" type="SFColor" name="filterColor"></field>
<field accessType="inputOutput" type="SFFloat" name="filterTransparency"></field>
<field accessType="inputOutput" type="SFVec3f" name="upVector"></field>
<field accessType="inputOutput" type="SFFloat" name="fStop"></field>
<field accessType="inputOutput" type="SFFloat" name="focusDistance"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="outputOnly" type="SFTime" name="totalDuration"></field>
<field accessType="inputOutput" type="SFNode" name="offlineRender"></field>
<field accessType="initializeOnly" type="SFNode" name="ViewpointNode"><Viewpoint USE="CameraViewpoint"></Viewpoint>
</field>
<field accessType="initializeOnly" type="SFNode" name="NavInfoNode"><NavigationInfo USE="CameraNavInfo"></NavigationInfo>
</field>
<field accessType="initializeOnly" type="SFNode" name="CameraPI"><PositionInterpolator USE="CameraPositionInterpolator"></PositionInterpolator>
</field>
<field accessType="initializeOnly" type="SFNode" name="CameraOI"><OrientationInterpolator USE="CameraOrientationInterpolator"></OrientationInterpolator>
</field>
<field accessType="inputOutput" type="MFFloat" name="key"></field>
<field accessType="inputOutput" type="MFVec3f" name="keyValuePosition"></field>
<field accessType="inputOutput" type="MFRotation" name="keyValueOrientation"></field>
<field accessType="inputOutput" type="SFBool" name="animated"></field>
<field accessType="initializeOnly" type="SFBool" name="initialized"></field>
<field accessType="initializeOnly" type="SFInt32" name="shotCount"></field>
<field accessType="initializeOnly" type="SFInt32" name="movesCount"></field>
<field accessType="initializeOnly" type="SFFloat" name="frameCount"></field>
<field accessType="initializeOnly" type="SFTime" name="startTime"></field>
<field accessType="initializeOnly" type="SFTime" name="priorTraceTime"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
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
}]]><IS><connect nodeField="description" protoField="description"></connect>
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
</Script>
<ROUTE fromNode="CameraPositionInterpolator" fromField="value_changed" toNode="CameraViewpoint" toField="position"></ROUTE>
<ROUTE fromNode="CameraOrientationInterpolator" fromField="value_changed" toNode="CameraViewpoint" toField="orientation"></ROUTE>
<ROUTE fromNode="CameraScript" fromField="position" toNode="CameraViewpoint" toField="position"></ROUTE>
<ROUTE fromNode="CameraScript" fromField="orientation" toNode="CameraViewpoint" toField="orientation"></ROUTE>
<ROUTE fromNode="CameraScript" fromField="isActive" toNode="CameraViewpoint" toField="set_bind"></ROUTE>
<ROUTE fromNode="CameraScript" fromField="isActive" toNode="CameraNavInfo" toField="set_bind"></ROUTE>
<ROUTE fromNode="CameraScript" fromField="isActive" toNode="CameraDirectionalLight" toField="on"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Camera";
let ProtoInterface16 = browser.currentScene.createNode("ProtoInterface");
let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.type = "SFString";
field17.name = "description";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.name = "position";
field18.value = "0 0 10";
ProtoInterface16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFRotation";
field19.name = "orientation";
ProtoInterface16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.name = "fieldOfView";
field20.value = "0.7854";
ProtoInterface16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOnly";
field21.type = "SFFloat";
field21.name = "set_fraction";
ProtoInterface16.field[4] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOnly";
field22.type = "SFBool";
field22.name = "set_bind";
ProtoInterface16.field[5] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "outputOnly";
field23.type = "SFTime";
field23.name = "bindTime";
ProtoInterface16.field[6] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "outputOnly";
field24.type = "SFBool";
field24.name = "isBound";
ProtoInterface16.field[7] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "inputOutput";
field25.type = "SFFloat";
field25.name = "nearClipPlane";
field25.value = "0.25";
ProtoInterface16.field[8] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.name = "farClipPlane";
ProtoInterface16.field[9] = field26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "inputOutput";
field27.type = "MFNode";
field27.name = "shots";
ProtoInterface16.field[10] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFBool";
field28.name = "headlight";
field28.value = "true";
ProtoInterface16.field[11] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "inputOutput";
field29.type = "SFColor";
field29.name = "headlightColor";
field29.value = "1 1 1";
ProtoInterface16.field[12] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.name = "headlightIntensity";
field30.value = "1";
ProtoInterface16.field[13] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFColor";
field31.name = "filterColor";
field31.value = "1 1 1";
ProtoInterface16.field[14] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.name = "filterTransparency";
field32.value = "1";
ProtoInterface16.field[15] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.name = "upVector";
field33.value = "0 1 0";
ProtoInterface16.field[16] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.name = "fStop";
field34.value = "5.6";
ProtoInterface16.field[17] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.name = "focusDistance";
field35.value = "10";
ProtoInterface16.field[18] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFBool";
field36.name = "isActive";
ProtoInterface16.field[19] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFTime";
field37.name = "totalDuration";
ProtoInterface16.field[20] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFNode";
field38.name = "offlineRender";
ProtoInterface16.field[21] = field38;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "initializeOnly";
field39.type = "SFBool";
field39.name = "traceEnabled";
ProtoInterface16.field[22] = field39;

ProtoDeclare15.protoInterface = ProtoInterface16;

let ProtoBody40 = browser.currentScene.createNode("ProtoBody");
let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.DEF = "CameraViewpoint";
let IS42 = browser.currentScene.createNode("IS");
let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "set_bind";
connect43.protoField = "set_bind";
IS42.connect = new MFNode();

IS42.connect[0] = connect43;

let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "description";
connect44.protoField = "description";
IS42.connect[1] = connect44;

let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "position";
connect45.protoField = "position";
IS42.connect[2] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "orientation";
connect46.protoField = "orientation";
IS42.connect[3] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "fieldOfView";
connect47.protoField = "fieldOfView";
IS42.connect[4] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "isBound";
connect48.protoField = "isBound";
IS42.connect[5] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "bindTime";
connect49.protoField = "bindTime";
IS42.connect[6] = connect49;

Viewpoint41.iS = IS42;

ProtoBody40.children = new MFNode();

ProtoBody40.children[0] = Viewpoint41;

let NavigationInfo50 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo50.DEF = "CameraNavInfo";
NavigationInfo50.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_bind";
connect52.protoField = "set_bind";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "headlight";
connect53.protoField = "headlight";
IS51.connect[1] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "visibilityLimit";
connect54.protoField = "farClipPlane";
IS51.connect[2] = connect54;

NavigationInfo50.iS = IS51;

ProtoBody40.children[1] = NavigationInfo50;

let DirectionalLight55 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight55.DEF = "CameraDirectionalLight";
DirectionalLight55.global = True;
let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "on";
connect57.protoField = "headlight";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "color";
connect58.protoField = "headlightColor";
IS56.connect[1] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "intensity";
connect59.protoField = "headlightIntensity";
IS56.connect[2] = connect59;

DirectionalLight55.iS = IS56;

ProtoBody40.children[2] = DirectionalLight55;

let PositionInterpolator60 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator60.DEF = "CameraPositionInterpolator";
PositionInterpolator60.key = new MFFloat(new float[0,1]);
PositionInterpolator60.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "set_fraction";
connect62.protoField = "set_fraction";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

PositionInterpolator60.iS = IS61;

ProtoBody40.children[3] = PositionInterpolator60;

let OrientationInterpolator63 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "CameraOrientationInterpolator";
OrientationInterpolator63.key = new MFFloat(new float[0,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "set_fraction";
connect65.protoField = "set_fraction";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

ProtoBody40.children[4] = OrientationInterpolator63;

let Script66 = browser.currentScene.createNode("Script");
Script66.DEF = "CameraScript";
Script66.directOutput = True;
Script66.mustEvaluate = True;
let field67 = browser.currentScene.createNode("field");
field67.accessType = "inputOutput";
field67.type = "SFString";
field67.name = "description";
Script66.field = new MFNode();

Script66.field[0] = field67;

let field68 = browser.currentScene.createNode("field");
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.name = "position";
Script66.field[1] = field68;

let field69 = browser.currentScene.createNode("field");
field69.accessType = "inputOutput";
field69.type = "SFRotation";
field69.name = "orientation";
Script66.field[2] = field69;

let field70 = browser.currentScene.createNode("field");
field70.accessType = "inputOnly";
field70.type = "SFFloat";
field70.name = "set_fraction";
Script66.field[3] = field70;

let field71 = browser.currentScene.createNode("field");
field71.accessType = "inputOnly";
field71.type = "SFBool";
field71.name = "set_bind";
Script66.field[4] = field71;

let field72 = browser.currentScene.createNode("field");
field72.accessType = "inputOutput";
field72.type = "SFFloat";
field72.name = "fieldOfView";
Script66.field[5] = field72;

let field73 = browser.currentScene.createNode("field");
field73.accessType = "inputOutput";
field73.type = "SFFloat";
field73.name = "nearClipPlane";
Script66.field[6] = field73;

let field74 = browser.currentScene.createNode("field");
field74.accessType = "inputOutput";
field74.type = "SFFloat";
field74.name = "farClipPlane";
Script66.field[7] = field74;

let field75 = browser.currentScene.createNode("field");
field75.accessType = "inputOutput";
field75.type = "MFNode";
field75.name = "shots";
Script66.field[8] = field75;

let field76 = browser.currentScene.createNode("field");
field76.accessType = "inputOutput";
field76.type = "SFColor";
field76.name = "filterColor";
Script66.field[9] = field76;

let field77 = browser.currentScene.createNode("field");
field77.accessType = "inputOutput";
field77.type = "SFFloat";
field77.name = "filterTransparency";
Script66.field[10] = field77;

let field78 = browser.currentScene.createNode("field");
field78.accessType = "inputOutput";
field78.type = "SFVec3f";
field78.name = "upVector";
Script66.field[11] = field78;

let field79 = browser.currentScene.createNode("field");
field79.accessType = "inputOutput";
field79.type = "SFFloat";
field79.name = "fStop";
Script66.field[12] = field79;

let field80 = browser.currentScene.createNode("field");
field80.accessType = "inputOutput";
field80.type = "SFFloat";
field80.name = "focusDistance";
Script66.field[13] = field80;

let field81 = browser.currentScene.createNode("field");
field81.accessType = "outputOnly";
field81.type = "SFBool";
field81.name = "isActive";
Script66.field[14] = field81;

let field82 = browser.currentScene.createNode("field");
field82.accessType = "outputOnly";
field82.type = "SFTime";
field82.name = "totalDuration";
Script66.field[15] = field82;

let field83 = browser.currentScene.createNode("field");
field83.accessType = "inputOutput";
field83.type = "SFNode";
field83.name = "offlineRender";
Script66.field[16] = field83;

let field84 = browser.currentScene.createNode("field");
field84.accessType = "initializeOnly";
field84.type = "SFNode";
field84.name = "ViewpointNode";
let Viewpoint85 = browser.currentScene.createNode("Viewpoint");
Viewpoint85.USE = "CameraViewpoint";
field84.children = new MFNode();

field84.children[0] = Viewpoint85;

Script66.field[17] = field84;

let field86 = browser.currentScene.createNode("field");
field86.accessType = "initializeOnly";
field86.type = "SFNode";
field86.name = "NavInfoNode";
let NavigationInfo87 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo87.USE = "CameraNavInfo";
field86.children = new MFNode();

field86.children[0] = NavigationInfo87;

Script66.field[18] = field86;

let field88 = browser.currentScene.createNode("field");
field88.accessType = "initializeOnly";
field88.type = "SFNode";
field88.name = "CameraPI";
let PositionInterpolator89 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator89.USE = "CameraPositionInterpolator";
field88.children = new MFNode();

field88.children[0] = PositionInterpolator89;

Script66.field[19] = field88;

let field90 = browser.currentScene.createNode("field");
field90.accessType = "initializeOnly";
field90.type = "SFNode";
field90.name = "CameraOI";
let OrientationInterpolator91 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator91.USE = "CameraOrientationInterpolator";
field90.children = new MFNode();

field90.children[0] = OrientationInterpolator91;

Script66.field[20] = field90;

let field92 = browser.currentScene.createNode("field");
field92.accessType = "inputOutput";
field92.type = "MFFloat";
field92.name = "key";
Script66.field[21] = field92;

let field93 = browser.currentScene.createNode("field");
field93.accessType = "inputOutput";
field93.type = "MFVec3f";
field93.name = "keyValuePosition";
Script66.field[22] = field93;

let field94 = browser.currentScene.createNode("field");
field94.accessType = "inputOutput";
field94.type = "MFRotation";
field94.name = "keyValueOrientation";
Script66.field[23] = field94;

let field95 = browser.currentScene.createNode("field");
field95.accessType = "inputOutput";
field95.type = "SFBool";
field95.name = "animated";
Script66.field[24] = field95;

let field96 = browser.currentScene.createNode("field");
field96.accessType = "initializeOnly";
field96.type = "SFBool";
field96.name = "initialized";
Script66.field[25] = field96;

let field97 = browser.currentScene.createNode("field");
field97.accessType = "initializeOnly";
field97.type = "SFInt32";
field97.name = "shotCount";
Script66.field[26] = field97;

let field98 = browser.currentScene.createNode("field");
field98.accessType = "initializeOnly";
field98.type = "SFInt32";
field98.name = "movesCount";
Script66.field[27] = field98;

let field99 = browser.currentScene.createNode("field");
field99.accessType = "initializeOnly";
field99.type = "SFFloat";
field99.name = "frameCount";
Script66.field[28] = field99;

let field100 = browser.currentScene.createNode("field");
field100.accessType = "initializeOnly";
field100.type = "SFTime";
field100.name = "startTime";
Script66.field[29] = field100;

let field101 = browser.currentScene.createNode("field");
field101.accessType = "initializeOnly";
field101.type = "SFTime";
field101.name = "priorTraceTime";
Script66.field[30] = field101;

let field102 = browser.currentScene.createNode("field");
field102.accessType = "initializeOnly";
field102.type = "SFBool";
field102.name = "traceEnabled";
Script66.field[31] = field102;


Script66.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}`)
let IS103 = browser.currentScene.createNode("IS");
let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "description";
connect104.protoField = "description";
IS103.connect = new MFNode();

IS103.connect[0] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "position";
connect105.protoField = "position";
IS103.connect[1] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "orientation";
connect106.protoField = "orientation";
IS103.connect[2] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "set_fraction";
connect107.protoField = "set_fraction";
IS103.connect[3] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "set_bind";
connect108.protoField = "set_bind";
IS103.connect[4] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "fieldOfView";
connect109.protoField = "fieldOfView";
IS103.connect[5] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "nearClipPlane";
connect110.protoField = "nearClipPlane";
IS103.connect[6] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "farClipPlane";
connect111.protoField = "farClipPlane";
IS103.connect[7] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "shots";
connect112.protoField = "shots";
IS103.connect[8] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "filterColor";
connect113.protoField = "filterColor";
IS103.connect[9] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "filterTransparency";
connect114.protoField = "filterTransparency";
IS103.connect[10] = connect114;

let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "upVector";
connect115.protoField = "upVector";
IS103.connect[11] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "fStop";
connect116.protoField = "fStop";
IS103.connect[12] = connect116;

let connect117 = browser.currentScene.createNode("connect");
connect117.nodeField = "focusDistance";
connect117.protoField = "focusDistance";
IS103.connect[13] = connect117;

let connect118 = browser.currentScene.createNode("connect");
connect118.nodeField = "isActive";
connect118.protoField = "isActive";
IS103.connect[14] = connect118;

let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "totalDuration";
connect119.protoField = "totalDuration";
IS103.connect[15] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "offlineRender";
connect120.protoField = "offlineRender";
IS103.connect[16] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "traceEnabled";
connect121.protoField = "traceEnabled";
IS103.connect[17] = connect121;

Script66.iS = IS103;

ProtoBody40.children[5] = Script66;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromNode = "CameraPositionInterpolator";
ROUTE122.fromField = "value_changed";
ROUTE122.toNode = "CameraViewpoint";
ROUTE122.toField = "position";
ProtoBody40.children[6] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromNode = "CameraOrientationInterpolator";
ROUTE123.fromField = "value_changed";
ROUTE123.toNode = "CameraViewpoint";
ROUTE123.toField = "orientation";
ProtoBody40.children[7] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromNode = "CameraScript";
ROUTE124.fromField = "position";
ROUTE124.toNode = "CameraViewpoint";
ROUTE124.toField = "position";
ProtoBody40.children[8] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromNode = "CameraScript";
ROUTE125.fromField = "orientation";
ROUTE125.toNode = "CameraViewpoint";
ROUTE125.toField = "orientation";
ProtoBody40.children[9] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromNode = "CameraScript";
ROUTE126.fromField = "isActive";
ROUTE126.toNode = "CameraViewpoint";
ROUTE126.toField = "set_bind";
ProtoBody40.children[10] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromNode = "CameraScript";
ROUTE127.fromField = "isActive";
ROUTE127.toNode = "CameraNavInfo";
ROUTE127.toField = "set_bind";
ProtoBody40.children[11] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromNode = "CameraScript";
ROUTE128.fromField = "isActive";
ROUTE128.toNode = "CameraDirectionalLight";
ROUTE128.toField = "on";
ProtoBody40.children[12] = ROUTE128;

ProtoDeclare15.protoBody = ProtoBody40;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare15;

let ProtoDeclare129 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraShot" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="MFNode" name="moves"></field>
<field accessType="inputOutput" type="SFVec3f" name="initialPosition" value="0 0 10"></field>
<field accessType="inputOutput" type="SFRotation" name="initialOrientation"></field>
<field accessType="inputOutput" type="SFVec3f" name="initialAimPoint"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFieldOfView" value="0.7854"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFStop" value="5.6"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFocusDistance" value="10"></field>
<field accessType="outputOnly" type="SFTime" name="shotDuration"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
</ProtoInterface>
<ProtoBody><Script DEF="CameraShotScript" directOutput="true" mustEvaluate="true"><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled"></field>
<field accessType="inputOutput" type="MFNode" name="moves"></field>
<field accessType="inputOutput" type="SFVec3f" name="initialPosition"></field>
<field accessType="inputOutput" type="SFRotation" name="initialOrientation"></field>
<field accessType="inputOutput" type="SFVec3f" name="initialAimPoint"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFieldOfView"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFStop"></field>
<field accessType="inputOutput" type="SFFloat" name="initialFocusDistance"></field>
<field accessType="outputOnly" type="SFTime" name="shotDuration"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
<field accessType="inputOutput" type="MFFloat" name="key"></field>
<field accessType="inputOutput" type="MFVec3f" name="keyValuePosition"></field>
<field accessType="inputOutput" type="MFRotation" name="keyValueOrientation"></field>
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
}]]><IS><connect nodeField="description" protoField="description"></connect>
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
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare129.name = "CameraShot";
let ProtoInterface130 = browser.currentScene.createNode("ProtoInterface");
let field131 = browser.currentScene.createNode("field");
field131.accessType = "inputOutput";
field131.type = "SFString";
field131.name = "description";
ProtoInterface130.field = new MFNode();

ProtoInterface130.field[0] = field131;

let field132 = browser.currentScene.createNode("field");
field132.accessType = "inputOutput";
field132.type = "SFBool";
field132.name = "enabled";
field132.value = "true";
ProtoInterface130.field[1] = field132;

let field133 = browser.currentScene.createNode("field");
field133.accessType = "inputOutput";
field133.type = "MFNode";
field133.name = "moves";
ProtoInterface130.field[2] = field133;

let field134 = browser.currentScene.createNode("field");
field134.accessType = "inputOutput";
field134.type = "SFVec3f";
field134.name = "initialPosition";
field134.value = "0 0 10";
ProtoInterface130.field[3] = field134;

let field135 = browser.currentScene.createNode("field");
field135.accessType = "inputOutput";
field135.type = "SFRotation";
field135.name = "initialOrientation";
ProtoInterface130.field[4] = field135;

let field136 = browser.currentScene.createNode("field");
field136.accessType = "inputOutput";
field136.type = "SFVec3f";
field136.name = "initialAimPoint";
ProtoInterface130.field[5] = field136;

let field137 = browser.currentScene.createNode("field");
field137.accessType = "inputOutput";
field137.type = "SFFloat";
field137.name = "initialFieldOfView";
field137.value = "0.7854";
ProtoInterface130.field[6] = field137;

let field138 = browser.currentScene.createNode("field");
field138.accessType = "inputOutput";
field138.type = "SFFloat";
field138.name = "initialFStop";
field138.value = "5.6";
ProtoInterface130.field[7] = field138;

let field139 = browser.currentScene.createNode("field");
field139.accessType = "inputOutput";
field139.type = "SFFloat";
field139.name = "initialFocusDistance";
field139.value = "10";
ProtoInterface130.field[8] = field139;

let field140 = browser.currentScene.createNode("field");
field140.accessType = "outputOnly";
field140.type = "SFTime";
field140.name = "shotDuration";
ProtoInterface130.field[9] = field140;

let field141 = browser.currentScene.createNode("field");
field141.accessType = "outputOnly";
field141.type = "SFBool";
field141.name = "isActive";
ProtoInterface130.field[10] = field141;

let field142 = browser.currentScene.createNode("field");
field142.accessType = "initializeOnly";
field142.type = "SFBool";
field142.name = "traceEnabled";
ProtoInterface130.field[11] = field142;

ProtoDeclare129.protoInterface = ProtoInterface130;

let ProtoBody143 = browser.currentScene.createNode("ProtoBody");
let Script144 = browser.currentScene.createNode("Script");
Script144.DEF = "CameraShotScript";
Script144.directOutput = True;
Script144.mustEvaluate = True;
let field145 = browser.currentScene.createNode("field");
field145.accessType = "inputOutput";
field145.type = "SFString";
field145.name = "description";
Script144.field = new MFNode();

Script144.field[0] = field145;

let field146 = browser.currentScene.createNode("field");
field146.accessType = "inputOutput";
field146.type = "SFBool";
field146.name = "enabled";
Script144.field[1] = field146;

let field147 = browser.currentScene.createNode("field");
field147.accessType = "inputOutput";
field147.type = "MFNode";
field147.name = "moves";
Script144.field[2] = field147;

let field148 = browser.currentScene.createNode("field");
field148.accessType = "inputOutput";
field148.type = "SFVec3f";
field148.name = "initialPosition";
Script144.field[3] = field148;

let field149 = browser.currentScene.createNode("field");
field149.accessType = "inputOutput";
field149.type = "SFRotation";
field149.name = "initialOrientation";
Script144.field[4] = field149;

let field150 = browser.currentScene.createNode("field");
field150.accessType = "inputOutput";
field150.type = "SFVec3f";
field150.name = "initialAimPoint";
Script144.field[5] = field150;

let field151 = browser.currentScene.createNode("field");
field151.accessType = "inputOutput";
field151.type = "SFFloat";
field151.name = "initialFieldOfView";
Script144.field[6] = field151;

let field152 = browser.currentScene.createNode("field");
field152.accessType = "inputOutput";
field152.type = "SFFloat";
field152.name = "initialFStop";
Script144.field[7] = field152;

let field153 = browser.currentScene.createNode("field");
field153.accessType = "inputOutput";
field153.type = "SFFloat";
field153.name = "initialFocusDistance";
Script144.field[8] = field153;

let field154 = browser.currentScene.createNode("field");
field154.accessType = "outputOnly";
field154.type = "SFTime";
field154.name = "shotDuration";
Script144.field[9] = field154;

let field155 = browser.currentScene.createNode("field");
field155.accessType = "outputOnly";
field155.type = "SFBool";
field155.name = "isActive";
Script144.field[10] = field155;

let field156 = browser.currentScene.createNode("field");
field156.accessType = "initializeOnly";
field156.type = "SFBool";
field156.name = "traceEnabled";
Script144.field[11] = field156;

let field157 = browser.currentScene.createNode("field");
field157.accessType = "inputOutput";
field157.type = "MFFloat";
field157.name = "key";
Script144.field[12] = field157;

let field158 = browser.currentScene.createNode("field");
field158.accessType = "inputOutput";
field158.type = "MFVec3f";
field158.name = "keyValuePosition";
Script144.field[13] = field158;

let field159 = browser.currentScene.createNode("field");
field159.accessType = "inputOutput";
field159.type = "MFRotation";
field159.name = "keyValueOrientation";
Script144.field[14] = field159;


Script144.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}`)
let IS160 = browser.currentScene.createNode("IS");
let connect161 = browser.currentScene.createNode("connect");
connect161.nodeField = "description";
connect161.protoField = "description";
IS160.connect = new MFNode();

IS160.connect[0] = connect161;

let connect162 = browser.currentScene.createNode("connect");
connect162.nodeField = "enabled";
connect162.protoField = "enabled";
IS160.connect[1] = connect162;

let connect163 = browser.currentScene.createNode("connect");
connect163.nodeField = "moves";
connect163.protoField = "moves";
IS160.connect[2] = connect163;

let connect164 = browser.currentScene.createNode("connect");
connect164.nodeField = "initialPosition";
connect164.protoField = "initialPosition";
IS160.connect[3] = connect164;

let connect165 = browser.currentScene.createNode("connect");
connect165.nodeField = "initialOrientation";
connect165.protoField = "initialOrientation";
IS160.connect[4] = connect165;

let connect166 = browser.currentScene.createNode("connect");
connect166.nodeField = "initialAimPoint";
connect166.protoField = "initialAimPoint";
IS160.connect[5] = connect166;

let connect167 = browser.currentScene.createNode("connect");
connect167.nodeField = "initialFieldOfView";
connect167.protoField = "initialFieldOfView";
IS160.connect[6] = connect167;

let connect168 = browser.currentScene.createNode("connect");
connect168.nodeField = "initialFStop";
connect168.protoField = "initialFStop";
IS160.connect[7] = connect168;

let connect169 = browser.currentScene.createNode("connect");
connect169.nodeField = "initialFocusDistance";
connect169.protoField = "initialFocusDistance";
IS160.connect[8] = connect169;

let connect170 = browser.currentScene.createNode("connect");
connect170.nodeField = "shotDuration";
connect170.protoField = "shotDuration";
IS160.connect[9] = connect170;

let connect171 = browser.currentScene.createNode("connect");
connect171.nodeField = "isActive";
connect171.protoField = "isActive";
IS160.connect[10] = connect171;

let connect172 = browser.currentScene.createNode("connect");
connect172.nodeField = "traceEnabled";
connect172.protoField = "traceEnabled";
IS160.connect[11] = connect172;

Script144.iS = IS160;

ProtoBody143.children = new MFNode();

ProtoBody143.children[0] = Script144;

ProtoDeclare129.protoBody = ProtoBody143;

browser.currentScene.children[1] = ProtoDeclare129;

let ProtoDeclare173 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraMovement" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFFloat" name="duration"></field>
<field accessType="inputOutput" type="SFVec3f" name="goalPosition" value="0 0 10"></field>
<field accessType="inputOutput" type="SFRotation" name="goalOrientation"></field>
<field accessType="inputOutput" type="SFBool" name="tracking"></field>
<field accessType="inputOutput" type="SFVec3f" name="goalAimPoint"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFieldOfView" value="0.7854"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFStop" value="5.6"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFocusDistance" value="10"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
</ProtoInterface>
<ProtoBody><Script DEF="CameraMovementScript" directOutput="true" mustEvaluate="true"><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled"></field>
<field accessType="inputOutput" type="SFFloat" name="duration"></field>
<field accessType="inputOutput" type="SFVec3f" name="goalPosition"></field>
<field accessType="inputOutput" type="SFRotation" name="goalOrientation"></field>
<field accessType="inputOutput" type="SFBool" name="tracking"></field>
<field accessType="inputOutput" type="SFVec3f" name="goalAimPoint"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFieldOfView"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFStop"></field>
<field accessType="inputOutput" type="SFFloat" name="goalFocusDistance"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
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
}]]><IS><connect nodeField="description" protoField="description"></connect>
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
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare173.name = "CameraMovement";
let ProtoInterface174 = browser.currentScene.createNode("ProtoInterface");
let field175 = browser.currentScene.createNode("field");
field175.accessType = "inputOutput";
field175.type = "SFString";
field175.name = "description";
ProtoInterface174.field = new MFNode();

ProtoInterface174.field[0] = field175;

let field176 = browser.currentScene.createNode("field");
field176.accessType = "inputOutput";
field176.type = "SFBool";
field176.name = "enabled";
field176.value = "true";
ProtoInterface174.field[1] = field176;

let field177 = browser.currentScene.createNode("field");
field177.accessType = "inputOutput";
field177.type = "SFFloat";
field177.name = "duration";
ProtoInterface174.field[2] = field177;

let field178 = browser.currentScene.createNode("field");
field178.accessType = "inputOutput";
field178.type = "SFVec3f";
field178.name = "goalPosition";
field178.value = "0 0 10";
ProtoInterface174.field[3] = field178;

let field179 = browser.currentScene.createNode("field");
field179.accessType = "inputOutput";
field179.type = "SFRotation";
field179.name = "goalOrientation";
ProtoInterface174.field[4] = field179;

let field180 = browser.currentScene.createNode("field");
field180.accessType = "inputOutput";
field180.type = "SFBool";
field180.name = "tracking";
ProtoInterface174.field[5] = field180;

let field181 = browser.currentScene.createNode("field");
field181.accessType = "inputOutput";
field181.type = "SFVec3f";
field181.name = "goalAimPoint";
ProtoInterface174.field[6] = field181;

let field182 = browser.currentScene.createNode("field");
field182.accessType = "inputOutput";
field182.type = "SFFloat";
field182.name = "goalFieldOfView";
field182.value = "0.7854";
ProtoInterface174.field[7] = field182;

let field183 = browser.currentScene.createNode("field");
field183.accessType = "inputOutput";
field183.type = "SFFloat";
field183.name = "goalFStop";
field183.value = "5.6";
ProtoInterface174.field[8] = field183;

let field184 = browser.currentScene.createNode("field");
field184.accessType = "inputOutput";
field184.type = "SFFloat";
field184.name = "goalFocusDistance";
field184.value = "10";
ProtoInterface174.field[9] = field184;

let field185 = browser.currentScene.createNode("field");
field185.accessType = "outputOnly";
field185.type = "SFBool";
field185.name = "isActive";
ProtoInterface174.field[10] = field185;

let field186 = browser.currentScene.createNode("field");
field186.accessType = "initializeOnly";
field186.type = "SFBool";
field186.name = "traceEnabled";
ProtoInterface174.field[11] = field186;

ProtoDeclare173.protoInterface = ProtoInterface174;

let ProtoBody187 = browser.currentScene.createNode("ProtoBody");
let Script188 = browser.currentScene.createNode("Script");
Script188.DEF = "CameraMovementScript";
Script188.directOutput = True;
Script188.mustEvaluate = True;
let field189 = browser.currentScene.createNode("field");
field189.accessType = "inputOutput";
field189.type = "SFString";
field189.name = "description";
Script188.field = new MFNode();

Script188.field[0] = field189;

let field190 = browser.currentScene.createNode("field");
field190.accessType = "inputOutput";
field190.type = "SFBool";
field190.name = "enabled";
Script188.field[1] = field190;

let field191 = browser.currentScene.createNode("field");
field191.accessType = "inputOutput";
field191.type = "SFFloat";
field191.name = "duration";
Script188.field[2] = field191;

let field192 = browser.currentScene.createNode("field");
field192.accessType = "inputOutput";
field192.type = "SFVec3f";
field192.name = "goalPosition";
Script188.field[3] = field192;

let field193 = browser.currentScene.createNode("field");
field193.accessType = "inputOutput";
field193.type = "SFRotation";
field193.name = "goalOrientation";
Script188.field[4] = field193;

let field194 = browser.currentScene.createNode("field");
field194.accessType = "inputOutput";
field194.type = "SFBool";
field194.name = "tracking";
Script188.field[5] = field194;

let field195 = browser.currentScene.createNode("field");
field195.accessType = "inputOutput";
field195.type = "SFVec3f";
field195.name = "goalAimPoint";
Script188.field[6] = field195;

let field196 = browser.currentScene.createNode("field");
field196.accessType = "inputOutput";
field196.type = "SFFloat";
field196.name = "goalFieldOfView";
Script188.field[7] = field196;

let field197 = browser.currentScene.createNode("field");
field197.accessType = "inputOutput";
field197.type = "SFFloat";
field197.name = "goalFStop";
Script188.field[8] = field197;

let field198 = browser.currentScene.createNode("field");
field198.accessType = "inputOutput";
field198.type = "SFFloat";
field198.name = "goalFocusDistance";
Script188.field[9] = field198;

let field199 = browser.currentScene.createNode("field");
field199.accessType = "outputOnly";
field199.type = "SFBool";
field199.name = "isActive";
Script188.field[10] = field199;

let field200 = browser.currentScene.createNode("field");
field200.accessType = "initializeOnly";
field200.type = "SFBool";
field200.name = "traceEnabled";
Script188.field[11] = field200;


Script188.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}`)
let IS201 = browser.currentScene.createNode("IS");
let connect202 = browser.currentScene.createNode("connect");
connect202.nodeField = "description";
connect202.protoField = "description";
IS201.connect = new MFNode();

IS201.connect[0] = connect202;

let connect203 = browser.currentScene.createNode("connect");
connect203.nodeField = "enabled";
connect203.protoField = "enabled";
IS201.connect[1] = connect203;

let connect204 = browser.currentScene.createNode("connect");
connect204.nodeField = "duration";
connect204.protoField = "duration";
IS201.connect[2] = connect204;

let connect205 = browser.currentScene.createNode("connect");
connect205.nodeField = "goalPosition";
connect205.protoField = "goalPosition";
IS201.connect[3] = connect205;

let connect206 = browser.currentScene.createNode("connect");
connect206.nodeField = "goalOrientation";
connect206.protoField = "goalOrientation";
IS201.connect[4] = connect206;

let connect207 = browser.currentScene.createNode("connect");
connect207.nodeField = "tracking";
connect207.protoField = "tracking";
IS201.connect[5] = connect207;

let connect208 = browser.currentScene.createNode("connect");
connect208.nodeField = "goalAimPoint";
connect208.protoField = "goalAimPoint";
IS201.connect[6] = connect208;

let connect209 = browser.currentScene.createNode("connect");
connect209.nodeField = "goalFieldOfView";
connect209.protoField = "goalFieldOfView";
IS201.connect[7] = connect209;

let connect210 = browser.currentScene.createNode("connect");
connect210.nodeField = "goalFStop";
connect210.protoField = "goalFStop";
IS201.connect[8] = connect210;

let connect211 = browser.currentScene.createNode("connect");
connect211.nodeField = "goalFocusDistance";
connect211.protoField = "goalFocusDistance";
IS201.connect[9] = connect211;

let connect212 = browser.currentScene.createNode("connect");
connect212.nodeField = "isActive";
connect212.protoField = "isActive";
IS201.connect[10] = connect212;

let connect213 = browser.currentScene.createNode("connect");
connect213.nodeField = "traceEnabled";
connect213.protoField = "traceEnabled";
IS201.connect[11] = connect213;

Script188.iS = IS201;

ProtoBody187.children = new MFNode();

ProtoBody187.children[0] = Script188;

ProtoDeclare173.protoBody = ProtoBody187;

browser.currentScene.children[2] = ProtoDeclare173;

let ProtoDeclare214 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="OfflineRender" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFFloat" name="frameRate" value="30"></field>
<field accessType="inputOutput" type="SFVec2f" name="frameSize" value="640 480"></field>
<field accessType="inputOutput" type="SFFloat" name="pixelAspectRatio" value="1.33"></field>
<field accessType="inputOnly" type="SFTime" name="set_startTime"></field>
<field accessType="outputOnly" type="SFFloat" name="progress"></field>
<field accessType="outputOnly" type="SFTime" name="renderCompleteTime"></field>
<field accessType="initializeOnly" type="MFString" name="movieFormat" value="&quot;mpeg&quot;"></field>
<field accessType="initializeOnly" type="MFString" name="imageFormat" value="&quot;png&quot;"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
</ProtoInterface>
<ProtoBody><Script DEF="OfflineRenderScript" mustEvaluate="true"><field accessType="inputOutput" type="SFString" name="description"></field>
<field accessType="inputOutput" type="SFBool" name="enabled"></field>
<field accessType="inputOutput" type="SFFloat" name="frameRate"></field>
<field accessType="inputOutput" type="SFVec2f" name="frameSize"></field>
<field accessType="inputOutput" type="SFFloat" name="pixelAspectRatio"></field>
<field accessType="inputOnly" type="SFTime" name="set_startTime"></field>
<field accessType="outputOnly" type="SFFloat" name="progress"></field>
<field accessType="outputOnly" type="SFTime" name="renderCompleteTime"></field>
<field accessType="initializeOnly" type="MFString" name="movieFormat"></field>
<field accessType="initializeOnly" type="MFString" name="imageFormat"></field>
<field accessType="initializeOnly" type="SFBool" name="traceEnabled"></field>
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
}]]><IS><connect nodeField="description" protoField="description"></connect>
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
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare214.name = "OfflineRender";
let ProtoInterface215 = browser.currentScene.createNode("ProtoInterface");
let field216 = browser.currentScene.createNode("field");
field216.accessType = "inputOutput";
field216.type = "SFString";
field216.name = "description";
ProtoInterface215.field = new MFNode();

ProtoInterface215.field[0] = field216;

let field217 = browser.currentScene.createNode("field");
field217.accessType = "inputOutput";
field217.type = "SFBool";
field217.name = "enabled";
field217.value = "true";
ProtoInterface215.field[1] = field217;

let field218 = browser.currentScene.createNode("field");
field218.accessType = "inputOutput";
field218.type = "SFFloat";
field218.name = "frameRate";
field218.value = "30";
ProtoInterface215.field[2] = field218;

let field219 = browser.currentScene.createNode("field");
field219.accessType = "inputOutput";
field219.type = "SFVec2f";
field219.name = "frameSize";
field219.value = "640 480";
ProtoInterface215.field[3] = field219;

let field220 = browser.currentScene.createNode("field");
field220.accessType = "inputOutput";
field220.type = "SFFloat";
field220.name = "pixelAspectRatio";
field220.value = "1.33";
ProtoInterface215.field[4] = field220;

let field221 = browser.currentScene.createNode("field");
field221.accessType = "inputOnly";
field221.type = "SFTime";
field221.name = "set_startTime";
ProtoInterface215.field[5] = field221;

let field222 = browser.currentScene.createNode("field");
field222.accessType = "outputOnly";
field222.type = "SFFloat";
field222.name = "progress";
ProtoInterface215.field[6] = field222;

let field223 = browser.currentScene.createNode("field");
field223.accessType = "outputOnly";
field223.type = "SFTime";
field223.name = "renderCompleteTime";
ProtoInterface215.field[7] = field223;

let field224 = browser.currentScene.createNode("field");
field224.accessType = "initializeOnly";
field224.type = "MFString";
field224.name = "movieFormat";
field224.value = "\"mpeg\"";
ProtoInterface215.field[8] = field224;

let field225 = browser.currentScene.createNode("field");
field225.accessType = "initializeOnly";
field225.type = "MFString";
field225.name = "imageFormat";
field225.value = "\"png\"";
ProtoInterface215.field[9] = field225;

let field226 = browser.currentScene.createNode("field");
field226.accessType = "initializeOnly";
field226.type = "SFBool";
field226.name = "traceEnabled";
ProtoInterface215.field[10] = field226;

ProtoDeclare214.protoInterface = ProtoInterface215;

let ProtoBody227 = browser.currentScene.createNode("ProtoBody");
let Script228 = browser.currentScene.createNode("Script");
Script228.DEF = "OfflineRenderScript";
Script228.mustEvaluate = True;
let field229 = browser.currentScene.createNode("field");
field229.accessType = "inputOutput";
field229.type = "SFString";
field229.name = "description";
Script228.field = new MFNode();

Script228.field[0] = field229;

let field230 = browser.currentScene.createNode("field");
field230.accessType = "inputOutput";
field230.type = "SFBool";
field230.name = "enabled";
Script228.field[1] = field230;

let field231 = browser.currentScene.createNode("field");
field231.accessType = "inputOutput";
field231.type = "SFFloat";
field231.name = "frameRate";
Script228.field[2] = field231;

let field232 = browser.currentScene.createNode("field");
field232.accessType = "inputOutput";
field232.type = "SFVec2f";
field232.name = "frameSize";
Script228.field[3] = field232;

let field233 = browser.currentScene.createNode("field");
field233.accessType = "inputOutput";
field233.type = "SFFloat";
field233.name = "pixelAspectRatio";
Script228.field[4] = field233;

let field234 = browser.currentScene.createNode("field");
field234.accessType = "inputOnly";
field234.type = "SFTime";
field234.name = "set_startTime";
Script228.field[5] = field234;

let field235 = browser.currentScene.createNode("field");
field235.accessType = "outputOnly";
field235.type = "SFFloat";
field235.name = "progress";
Script228.field[6] = field235;

let field236 = browser.currentScene.createNode("field");
field236.accessType = "outputOnly";
field236.type = "SFTime";
field236.name = "renderCompleteTime";
Script228.field[7] = field236;

let field237 = browser.currentScene.createNode("field");
field237.accessType = "initializeOnly";
field237.type = "MFString";
field237.name = "movieFormat";
Script228.field[8] = field237;

let field238 = browser.currentScene.createNode("field");
field238.accessType = "initializeOnly";
field238.type = "MFString";
field238.name = "imageFormat";
Script228.field[9] = field238;

let field239 = browser.currentScene.createNode("field");
field239.accessType = "initializeOnly";
field239.type = "SFBool";
field239.name = "traceEnabled";
Script228.field[10] = field239;


Script228.setSourceCode(`ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}`)
let IS240 = browser.currentScene.createNode("IS");
let connect241 = browser.currentScene.createNode("connect");
connect241.nodeField = "description";
connect241.protoField = "description";
IS240.connect = new MFNode();

IS240.connect[0] = connect241;

let connect242 = browser.currentScene.createNode("connect");
connect242.nodeField = "enabled";
connect242.protoField = "enabled";
IS240.connect[1] = connect242;

let connect243 = browser.currentScene.createNode("connect");
connect243.nodeField = "frameRate";
connect243.protoField = "frameRate";
IS240.connect[2] = connect243;

let connect244 = browser.currentScene.createNode("connect");
connect244.nodeField = "frameSize";
connect244.protoField = "frameSize";
IS240.connect[3] = connect244;

let connect245 = browser.currentScene.createNode("connect");
connect245.nodeField = "pixelAspectRatio";
connect245.protoField = "pixelAspectRatio";
IS240.connect[4] = connect245;

let connect246 = browser.currentScene.createNode("connect");
connect246.nodeField = "set_startTime";
connect246.protoField = "set_startTime";
IS240.connect[5] = connect246;

let connect247 = browser.currentScene.createNode("connect");
connect247.nodeField = "progress";
connect247.protoField = "progress";
IS240.connect[6] = connect247;

let connect248 = browser.currentScene.createNode("connect");
connect248.nodeField = "renderCompleteTime";
connect248.protoField = "renderCompleteTime";
IS240.connect[7] = connect248;

let connect249 = browser.currentScene.createNode("connect");
connect249.nodeField = "movieFormat";
connect249.protoField = "movieFormat";
IS240.connect[8] = connect249;

let connect250 = browser.currentScene.createNode("connect");
connect250.nodeField = "imageFormat";
connect250.protoField = "imageFormat";
IS240.connect[9] = connect250;

let connect251 = browser.currentScene.createNode("connect");
connect251.nodeField = "traceEnabled";
connect251.protoField = "traceEnabled";
IS240.connect[10] = connect251;

Script228.iS = IS240;

ProtoBody227.children = new MFNode();

ProtoBody227.children[0] = Script228;

ProtoDeclare214.protoBody = ProtoBody227;

browser.currentScene.children[3] = ProtoDeclare214;

let Background252 = browser.currentScene.createNode("Background");
Background252.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[4] = Background252;

let Anchor253 = browser.currentScene.createNode("Anchor");
Anchor253.description = "launch CameraExample scene";
Anchor253.url = new MFString(new java.lang.String["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
let Transform254 = browser.currentScene.createNode("Transform");
let Shape255 = browser.currentScene.createNode("Shape");
let Appearance256 = browser.currentScene.createNode("Appearance");
let Material257 = browser.currentScene.createNode("Material");
Material257.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance256.material = Material257;

Shape255.appearance = Appearance256;

let Text258 = browser.currentScene.createNode("Text");
Text258.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
let FontStyle259 = browser.currentScene.createNode("FontStyle");
FontStyle259.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text258.fontStyle = FontStyle259;

Shape255.geometry = Text258;

Transform254.child = new undefined();

Transform254.child[0] = Shape255;

Anchor253.children = new MFNode();

Anchor253.children[0] = Transform254;

browser.currentScene.children[5] = Anchor253;

