package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </p>
 <p> Related links: Catalog page <a href="../../../development/CameraPrototypesIndex.html" target="_blank">CameraPrototypes</a>,  source <a href="../../../development/CameraPrototypes.java">CameraPrototypes.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/CameraPrototypes.x3d">CameraPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman and Jeff Weekley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 March 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 25 October 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Schematron rules, backed up by initialize() checks </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/BeyondViewpointCameraNodesWeb3D2009.pdf">BeyondViewpointCameraNodesWeb3D2009.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Camera nodes for Viewpoint navigation control </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/CameraExamples.x3d">CameraExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d" target="_blank">http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Don Brutzman and Jeff Weekley
 */

public class CameraPrototypes
{
	/** Default constructor to create this object. */
	public CameraPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CameraPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 March 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("25 October 2016"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CameraExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" =============== Camera ============== ")
    .addChild(new ProtoDeclare("Camera").setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
      .setProtoInterface(new ProtoInterface()
        .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields ")
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
        .addField(new field().setName("position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,10.0)).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
        .addField(new field().setName("orientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
        .addField(new field().setName("fieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.7854).setAppinfo("pi/4"))
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
        .addField(new field().setName("set_bind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
        .addField(new field().setName("bindTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
        .addField(new field().setName("isBound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
        .addField(new field().setName("nearClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.25).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
        .addField(new field().setName("farClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.0).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
        .addField(new field().setName("shots").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
          .addComments(" initialization nodes (if any) go here "))
        .addField(new field().setName("headlight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether camera headlight is on or off"))
        .addField(new field().setName("headlightColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,1.0,1.0)).setAppinfo("Camera headlight color"))
        .addField(new field().setName("headlightIntensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("Camera headlight intensity"))
        .addField(new field().setName("filterColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,1.0,1.0)).setAppinfo("Camera filter color that modifies virtual lens capture"))
        .addField(new field().setName("filterTransparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
        .addField(new field().setName("upVector").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,1.0,0.0)).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
        .addField(new field().setName("fStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5.6).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("focusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10).setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("totalDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
        .addField(new field().setName("offlineRender").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
          .addComments(" initialization node (if any) goes here "))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addChild(new Viewpoint("CameraViewpoint")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("position").setProtoField("position"))
            .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
            .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
            .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
            .addConnect(new connect().setNodeField("bindTime").setProtoField("bindTime"))
            .addConnect(new connect().setNodeField("isBound").setProtoField("isBound"))))
        .addComments(" NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation ")
        .addChild(new NavigationInfo("CameraNavInfo").setType("\"EXAMINE\" \"FLY\" \"ANY\"")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
            .addComments(" No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. ")
            .addConnect(new connect().setNodeField("headlight").setProtoField("headlight"))
            .addConnect(new connect().setNodeField("visibilityLimit").setProtoField("farClipPlane"))))
        .addComments(" this DirectionalLight replaces NavigationInfo headlight in order to add color capability ")
        .addChild(new DirectionalLight("CameraDirectionalLight").setGlobal(true)
          .addComments(" TODO confirm other default field values match NavigationInfo spec ")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("on").setProtoField("headlight"))
            .addConnect(new connect().setNodeField("color").setProtoField("headlightColor"))
            .addConnect(new connect().setNodeField("intensity").setProtoField("headlightIntensity"))))
        .addChild(new PositionInterpolator("CameraPositionInterpolator").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0}))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
        .addChild(new OrientationInterpolator("CameraOrientationInterpolator").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
        .addChild(new ROUTE().setFromNode("CameraPositionInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("position"))
        .addChild(new ROUTE().setFromNode("CameraOrientationInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("orientation"))
        .addChild(new Script("CameraScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
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
""")
          .addComments(" binding is controlled externally, all camera operations proceed the same regardless of whether bound or not ")
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
          .addField(new field().setName("position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame"))
          .addField(new field().setName("orientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame"))
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
          .addField(new field().setName("set_bind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
          .addField(new field().setName("fieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setName("nearClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane"))
          .addField(new field().setName("farClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane"))
          .addField(new field().setName("shots").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
            .addComments(" initialization nodes (if any) go here "))
          .addField(new field().setName("filterColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
          .addField(new field().setName("filterTransparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
          .addField(new field().setName("upVector").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
          .addField(new field().setName("fStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("focusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("totalDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
          .addField(new field().setName("offlineRender").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node")
            .addComments(" initialization node (if any) goes here "))
          .addField(new field().setName("ViewpointNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new Viewpoint().setUSE("CameraViewpoint")))
          .addField(new field().setName("NavInfoNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new NavigationInfo().setUSE("CameraNavInfo")))
          .addField(new field().setName("CameraPI").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new PositionInterpolator().setUSE("CameraPositionInterpolator")))
          .addField(new field().setName("CameraOI").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new OrientationInterpolator().setUSE("CameraOrientationInterpolator")))
          .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
          .addField(new field().setName("keyValuePosition").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
          .addField(new field().setName("keyValueOrientation").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
          .addField(new field().setName("animated").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false).setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"))
          .addField(new field().setName("initialized").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("perform checkShots() function once immediately after initialization"))
          .addField(new field().setName("shotCount").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("how many CameraShot nodes are contained in shots array"))
          .addField(new field().setName("movesCount").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("how many CameraMove nodes are contained in moves array"))
          .addField(new field().setName("frameCount").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("how many frames were created in current loop"))
          .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("holding variable"))
          .addField(new field().setName("priorTraceTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("holding variable"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("position").setProtoField("position"))
            .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
            .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
            .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
            .addConnect(new connect().setNodeField("nearClipPlane").setProtoField("nearClipPlane"))
            .addConnect(new connect().setNodeField("farClipPlane").setProtoField("farClipPlane"))
            .addConnect(new connect().setNodeField("shots").setProtoField("shots"))
            .addConnect(new connect().setNodeField("filterColor").setProtoField("filterColor"))
            .addConnect(new connect().setNodeField("filterTransparency").setProtoField("filterTransparency"))
            .addConnect(new connect().setNodeField("upVector").setProtoField("upVector"))
            .addConnect(new connect().setNodeField("fStop").setProtoField("fStop"))
            .addConnect(new connect().setNodeField("focusDistance").setProtoField("focusDistance"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("totalDuration").setProtoField("totalDuration"))
            .addConnect(new connect().setNodeField("offlineRender").setProtoField("offlineRender"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addChild(new ROUTE().setFromNode("CameraScript").setFromField("position").setToNode("CameraViewpoint").setToField("position"))
        .addChild(new ROUTE().setFromNode("CameraScript").setFromField("orientation").setToNode("CameraViewpoint").setToField("orientation"))
        .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraViewpoint").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraNavInfo").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraDirectionalLight").setToField("on"))))
    .addComments(" =============== CameraShot ============== ")
    .addChild(new ProtoDeclare("CameraShot").setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether this CameraShot can be activated"))
        .addField(new field().setName("moves").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
          .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
        .addField(new field().setName("initialPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,10.0)).setAppinfo("Setup to reinitialize camera position for this shot"))
        .addField(new field().setName("initialOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)).setAppinfo("Setup to reinitialize camera rotation for this shot"))
        .addField(new field().setName("initialAimPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
        .addField(new field().setName("initialFieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.7854).setAppinfo("pi/4"))
        .addField(new field().setName("initialFStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5.6).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("initialFocusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10).setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("shotDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("CameraShotScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
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
""")
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
          .addField(new field().setName("moves").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
            .addComments(" initialization nodes (if any) go here "))
          .addField(new field().setName("initialPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
          .addField(new field().setName("initialOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
          .addField(new field().setName("initialAimPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
          .addField(new field().setName("initialFieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
          .addField(new field().setName("initialFStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("initialFocusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("shotDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
          .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("key array for interpolators"))
          .addField(new field().setName("keyValuePosition").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for PositionInterpolator"))
          .addField(new field().setName("keyValueOrientation").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue array for OrientationInterpolator"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("moves").setProtoField("moves"))
            .addConnect(new connect().setNodeField("initialPosition").setProtoField("initialPosition"))
            .addConnect(new connect().setNodeField("initialOrientation").setProtoField("initialOrientation"))
            .addConnect(new connect().setNodeField("initialAimPoint").setProtoField("initialAimPoint"))
            .addConnect(new connect().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView"))
            .addConnect(new connect().setNodeField("initialFStop").setProtoField("initialFStop"))
            .addConnect(new connect().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance"))
            .addConnect(new connect().setNodeField("shotDuration").setProtoField("shotDuration"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addComments(" Add any ROUTEs here, going from Script to other nodes within ProtoBody ")))
    .addComments(" =============== CameraMovement ============== ")
    .addChild(new ProtoDeclare("CameraMovement").setName("CameraMovement").setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether this CameraMovement can be activated"))
        .addField(new field().setName("duration").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("Duration in seconds for this move"))
        .addField(new field().setName("goalPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,10.0)).setAppinfo("Goal camera position for this move"))
        .addField(new field().setName("goalOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)).setAppinfo("Goal camera rotation for this move"))
        .addField(new field().setName("tracking").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
        .addField(new field().setName("goalAimPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
        .addField(new field().setName("goalFieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.7854).setAppinfo("Goal fieldOfView for this move"))
        .addField(new field().setName("goalFStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5.6).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("goalFocusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10).setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events ")
        .addChild(new Script("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
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
""")
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated"))
          .addField(new field().setName("duration").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move"))
          .addField(new field().setName("goalPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move"))
          .addField(new field().setName("goalOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move"))
          .addField(new field().setName("tracking").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
          .addField(new field().setName("goalAimPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
          .addField(new field().setName("goalFieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move"))
          .addField(new field().setName("goalFStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("goalFocusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("duration").setProtoField("duration"))
            .addConnect(new connect().setNodeField("goalPosition").setProtoField("goalPosition"))
            .addConnect(new connect().setNodeField("goalOrientation").setProtoField("goalOrientation"))
            .addConnect(new connect().setNodeField("tracking").setProtoField("tracking"))
            .addConnect(new connect().setNodeField("goalAimPoint").setProtoField("goalAimPoint"))
            .addConnect(new connect().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView"))
            .addConnect(new connect().setNodeField("goalFStop").setProtoField("goalFStop"))
            .addConnect(new connect().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addComments(" Add any ROUTEs here, going from Script to other nodes within ProtoBody ")))
    .addComments(" =============== OfflineRender ============== ")
    .addChild(new ProtoDeclare("OfflineRender").setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
      .setProtoInterface(new ProtoInterface()
        .addComments(" TODO non-photorealistic rendering (NPR) parameters ")
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether this OfflineRender can be activated"))
        .addField(new field().setName("frameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(30).setAppinfo("Frames per second recorded for this rendering"))
        .addField(new field().setName("frameSize").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec2f(640.0,480.0)).setAppinfo("Size of frame in number of pixels width and height"))
        .addField(new field().setName("pixelAspectRatio").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1.33).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
        .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
        .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
        .addField(new field().setName("renderCompleteTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
        .addField(new field().setName("movieFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"mpeg"}).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
        .addField(new field().setName("imageFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"png"}).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addChild(new Script("OfflineRenderScript").setMustEvaluate(true).setSourceCode("""
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
""")
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
          .addField(new field().setName("frameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
          .addField(new field().setName("frameSize").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
          .addField(new field().setName("pixelAspectRatio").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
          .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
          .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
          .addField(new field().setName("renderCompleteTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
          .addField(new field().setName("movieFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.)"))
          .addField(new field().setName("imageFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("frameRate").setProtoField("frameRate"))
            .addConnect(new connect().setNodeField("frameSize").setProtoField("frameSize"))
            .addConnect(new connect().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio"))
            .addConnect(new connect().setNodeField("set_startTime").setProtoField("set_startTime"))
            .addConnect(new connect().setNodeField("progress").setProtoField("progress"))
            .addConnect(new connect().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime"))
            .addConnect(new connect().setNodeField("movieFormat").setProtoField("movieFormat"))
            .addConnect(new connect().setNodeField("imageFormat").setProtoField("imageFormat"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addComments(" Add any ROUTEs here, going from Script to other nodes within ProtoBody ")))
    .addComments(" =============== Launch Prototype Example ============== ")
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.282353,0.380392,0.470588})))
    .addChild(new Anchor().setDescription("launch CameraExample scene").setUrl(new String[] {"CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"})
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2)))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CameraPrototypes model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
     * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new CameraPrototypes().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
        boolean hasArguments = (args != null) && (args.length > 0);
        boolean validate = true; // default
        boolean argumentsLoadNewModel = false;
        String  fileName = new String();

        if (args != null)
        {
                for (String arg : args)
                {
                        if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
                        {
                                validate = true; // making sure
                        }
                        if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
                        {
                                argumentsLoadNewModel = true;
                                fileName = arg;
                        }
                }
        }
        if      (argumentsLoadNewModel)
                System.out.println("WARNING: \"net.x3djsonld.data.CameraPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.CameraPrototypes self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./CameraPrototypes_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./CameraPrototypes_JavaExport.x3d"; 
                String filenameX3DV = "./CameraPrototypes_JavaExport.x3dv"; 
                String filenameJSON = "./CameraPrototypes_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
