package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </p>
 <p> Related links: <a href="../../../development/CameraExamples.java">CameraExamples.java</a> source, <a href="../../../development/CameraExamplesIndex.html" target="_top">CameraExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/CameraExamples.x3d">CameraExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> documentation </i> </td>
			<td> Two demos are found in the scene, click the "red text" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman and Jeff Weekley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 June 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../development/CameraExamplesDemo.mp4">CameraExamplesDemo.mp4</a> </td>
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
			<td> <a href="../../../development/CameraPrototypes.x3d">CameraPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CameraExamplesConsoleLog.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi" target="_blank">http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d" target="_blank">http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Don Brutzman and Jeff Weekley
 */

public class CameraExamples
{
	/** Default constructor to create this object. */
	public CameraExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CameraExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new meta().setName("documentation").setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("18 June 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("CameraExamplesDemo.mp4"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CameraPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CameraExamplesConsoleLog.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" =============== Camera ============== ")
    .addChild(new WorldInfo().setTitle("CameraExamples.x3d"))
    .addChild(new ExternProtoDeclare("Camera").setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setUrl(new String[] {"CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
      .addField(new field().setName("position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
      .addField(new field().setName("orientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
      .addField(new field().setName("fieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
      .addField(new field().setName("set_bind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
      .addField(new field().setName("bindTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
      .addField(new field().setName("isBound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
      .addField(new field().setName("nearClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
      .addField(new field().setName("farClipPlane").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
      .addField(new field().setName("shots").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
      .addField(new field().setName("headlight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off"))
      .addField(new field().setName("headlightColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color"))
      .addField(new field().setName("headlightIntensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity"))
      .addField(new field().setName("filterColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
      .addField(new field().setName("filterTransparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
      .addField(new field().setName("upVector").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
      .addField(new field().setName("fStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new field().setName("focusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new field().setName("totalDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
      .addField(new field().setName("offlineRender").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields "))
    .addComments(" =============== CameraShot ============== ")
    .addChild(new ExternProtoDeclare("CameraShot").setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(new String[] {"CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
      .addField(new field().setName("moves").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
        .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
      .addField(new field().setName("initialPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
      .addField(new field().setName("initialOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
      .addField(new field().setName("initialAimPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
      .addField(new field().setName("initialFieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
      .addField(new field().setName("initialFStop").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new field().setName("initialFocusDistance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new field().setName("shotDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== CameraMovement ============== ")
    .addChild(new ExternProtoDeclare("CameraMovement").setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(new String[] {"CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"})
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
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== OfflineRender ============== ")
    .addChild(new ExternProtoDeclare("OfflineRender").setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setUrl(new String[] {"CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
      .addField(new field().setName("frameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
      .addField(new field().setName("frameSize").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
      .addField(new field().setName("pixelAspectRatio").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
      .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
      .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
      .addField(new field().setName("renderCompleteTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
      .addField(new field().setName("movieFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
      .addField(new field().setName("imageFormat").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" TODO non-photorealistic rendering (NPR) parameters "))
    .addComments(" =============== Lights, camera, action! ============== ")
    .addChild(new DirectionalLight().setDirection(0.0,-1.0,0.0).setGlobal(true).setIntensity(0.8))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
    .addChild(new Viewpoint().setDescription("Camera test scene entry view").setPosition(0.0,2.0,12.0))
    .addChild(new Viewpoint().setDescription("Camera test scene from above").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,150.0,0.0))
    .addComments(" Keep prototype instances in same file while developing, then move later ")
    .addComments(" We will create examples matching those in the paper ")
    .addComments(" =============== Camera.SimpleShotsTest ============== ")
    .addChild(new ProtoInstance("Camera", "Camera.SimpleShotsTest").setContainerField("children")
      .addFieldValue(new fieldValue().setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"))
      .addFieldValue(new fieldValue().setName("headlight").setValue(true))
      .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(-4.0,4.0,10.0)))
      .addFieldValue(new fieldValue().setName("shots")
        .addChild(new ProtoInstance("CameraShot", "Zoom").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Zoom"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(-50.0,1.0,-10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Zoom In"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-50.0,1.0,-15.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Zoom Out"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-50.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-50.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))))
        .addChild(new ProtoInstance("CameraShot", "Dolly").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Dolly"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(-40.0,1.0,-10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement", "DollyMove1").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Dolly from Right to Left"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-45.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Dolly from Left to Right"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-40.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-40.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))))
        .addChild(new ProtoInstance("CameraShot", "Pan").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("Simple shot of Camera Pan left right and back to center"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(-30.0,1.0,-10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement", "PanLeft").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Pan Left"))
              .addFieldValue(new fieldValue().setName("duration").setValue(2))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-30.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.4))))
            .addChild(new ProtoInstance("CameraMovement", "PanRight").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Pan Right"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-30.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,-0.4))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Pan back to Center"))
              .addFieldValue(new fieldValue().setName("duration").setValue(2))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-30.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(2))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-30.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))))
        .addChild(new ProtoInstance("CameraShot", "CameraBoom").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(-20.0,1.0,-10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement", "CameraBoomUp").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom Up"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-20.0,5.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement", "BoomDown").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Boom Down"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-20.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement", "BoomPause").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(2))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-20.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0))))))
        .addChild(new ProtoInstance("CameraShot", "CameraTilt").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.0)))
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue(true))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement", "TiltDown").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Left"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.785))))
            .addChild(new ProtoInstance("CameraMovement", "TiltPause").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.785))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Right"))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,-0.785))))
            .addChild(new ProtoInstance("CameraMovement").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,-0.785))))
            .addChild(new ProtoInstance("CameraMovement", "TiltReset").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Camera Tilt Reset"))
              .addFieldValue(new fieldValue().setName("duration").setValue(1))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(-10.0,1.0,-10.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.0))))
            .addChild(new ProtoInstance("CameraMovement", "TiltUp").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("Return to home"))
              .addFieldValue(new fieldValue().setName("duration").setValue(2))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(0.0,2.0,12.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,0.0,1.0,0.0))))))))
    .addChild(new Group("AnimationGroup.SimpleShots")
      .addChild(new TimeSensor("CameraTimer.SimpleShots"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTE().setFromNode("Camera.SimpleShotsTest").setFromField("totalDuration").setToNode("CameraTimer.SimpleShots").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTE().setFromNode("CameraTimer.SimpleShots").setFromField("fraction_changed").setToNode("Camera.SimpleShotsTest").setToField("set_fraction"))
      .addChild(new Transform("Trigger.SimpleShots").setTranslation(-4.0,4.0,0.0)
        .addChild(new BooleanFilter("TextTouchActive.SimpleShotsFilter"))
        .addChild(new TouchSensor("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
        .addChild(new ROUTE().setFromNode("TextTouchActive.SimpleShotsFilter").setFromField("inputTrue").setToNode("Camera.SimpleShotsTest").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("TextTouch.SimpleShots").setFromField("isActive").setToNode("TextTouchActive.SimpleShotsFilter").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("TextTouch.SimpleShots").setFromField("touchTime").setToNode("CameraTimer.SimpleShots").setToField("startTime"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Click to animate","SimpleShotsTest"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material("ArtDeco5").setAmbientIntensity(0.24).setDiffuseColor(0.945455,0.318988,0.321717).setShininess(0.01).setSpecularColor(0.072727,0.021705,0.010732)
              .addComments(" Universal Media Library: ArtDeco 5 "))))
        .addComments(" Simplify intersection test for user selecting text ")
        .addChild(new Shape("TransparentBox")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(1)))
          .setGeometry(new Box().setSize(6.0,2.0,0.0001)))))
    .addChild(new Group("SimpleShotsTargets")
      .addChild(new Transform("TargetBoxZoom").setTranslation(-50.0,1.0,-20.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"}))))
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Zoom in, out"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform("TargetBoxDolly").setTranslation(-40.0,1.0,-20.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"}))))
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Dolly left, right"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform("TargetBoxPan").setTranslation(-30.0,1.0,-20.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"}))))
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Pan left, right"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform("TargetBoxBoom").setTranslation(-20.0,1.0,-20.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"}))))
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Boom up, down"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform("TargetBoxTilt").setTranslation(-10.0,1.0,-20.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"}))))
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Tilt left, right"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new Material()))))))
    .addComments(" =============== Camera.AimPointTest ============== ")
    .addChild(new ProtoInstance("Camera", "Camera.AimPointTest").setContainerField("children")
      .addFieldValue(new fieldValue().setName("description").setValue("AimPointTest for moving camera tracking moving target"))
      .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(4.0,4.0,10.0)))
      .addFieldValue(new fieldValue().setName("shots")
        .addChild(new ProtoInstance("CameraShot", "Shot5").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("#3 Tracking shot"))
          .addFieldValue(new fieldValue().setName("initialPosition").setValue(new SFVec3f(6.0,6.0,10.0)))
          .addFieldValue(new fieldValue().setName("initialOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("moves")
            .addChild(new ProtoInstance("CameraMovement", "MoveAimPoint3.1").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.1 moving BoxPath"))
              .addFieldValue(new fieldValue().setName("tracking").setValue(true))
              .addFieldValue(new fieldValue().setName("duration").setValue(8))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(6.0,6.0,10.0)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstance("CameraMovement", "MoveAimPoint3.2").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.2 pan right while tracking"))
              .addFieldValue(new fieldValue().setName("tracking").setValue(true))
              .addFieldValue(new fieldValue().setName("duration").setValue(8))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(40.0,6.0,12.0)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstance("CameraMovement", "MoveAimPoint3.3").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.3 boom up while tracking"))
              .addFieldValue(new fieldValue().setName("tracking").setValue(true))
              .addFieldValue(new fieldValue().setName("duration").setValue(3))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(40.0,20.0,13.0)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstance("CameraMovement", "MoveAimPoint3.4").setContainerField("children")
              .addFieldValue(new fieldValue().setName("description").setValue("AimPoint 3.4 restore camera back to home"))
              .addFieldValue(new fieldValue().setName("tracking").setValue(true))
              .addFieldValue(new fieldValue().setName("duration").setValue(5))
              .addFieldValue(new fieldValue().setName("goalPosition").setValue(new SFVec3f(4.0,4.0,10.0)))
              .addFieldValue(new fieldValue().setName("goalAimPoint").setValue(new SFVec3f(4.0,4.0,0.0)))
              .addFieldValue(new fieldValue().setName("goalOrientation").setValue(new SFRotation(0.0,1.0,0.0,0.0)))
              .addComments(" can test tracking or not using these values "))))))
    .addChild(new Group("AnimationGroup.AimPointTest")
      .addChild(new TimeSensor("CameraTimer.AimPointTest"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTE().setFromNode("Camera.AimPointTest").setFromField("totalDuration").setToNode("CameraTimer.AimPointTest").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTE().setFromNode("CameraTimer.AimPointTest").setFromField("fraction_changed").setToNode("Camera.AimPointTest").setToField("set_fraction"))
      .addChild(new Transform("Trigger.AimPointTest").setTranslation(4.0,4.0,0.0)
        .addChild(new BooleanFilter("TextTouchActive.AimPointFilter"))
        .addChild(new TouchSensor("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
        .addChild(new ROUTE().setFromNode("TextTouchActive.AimPointFilter").setFromField("inputTrue").setToNode("Camera.AimPointTest").setToField("set_bind"))
        .addChild(new ROUTE().setFromNode("TextTouch.AimPointTest").setFromField("isActive").setToNode("TextTouchActive.AimPointFilter").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("TextTouch.AimPointTest").setFromField("touchTime").setToNode("CameraTimer.AimPointTest").setToField("startTime"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Click to animate","AimPointTest"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("ArtDeco5"))))
        .addChild(new Shape().setUSE("TransparentBox"))))
    .addComments(" TODO build a test once implemented ")
    .addChild(new ProtoInstance("OfflineRender").setContainerField("children"))
    .addComments(" =============== animate a camera shape to visualize view changes ============== ")
    .addChild(new Transform("CameraShapeTransform").setTranslation(0.0,0.5,0.0)
      .addComments(" move CameraShape using active Camera ")
      .addChild(new ROUTE().setFromNode("Camera.SimpleShotsTest").setFromField("position_changed").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTE().setFromNode("Camera.SimpleShotsTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new ROUTE().setFromNode("Camera.AimPointTest").setFromField("position").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTE().setFromNode("Camera.AimPointTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new Transform("CameraOffsetTransform").setTranslation(0.0,0.0,0.25)
        .addChild(new TouchSensor("CameraShapeTouched"))
        .addChild(new Inline("CameraShape").setUrl(new String[] {"CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"}))
        .addChild(new Shape("SightLine")
          .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,-100.0}))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(0.8,0.8,0.4)))))
      .addComments(" Display frustum to show camera view within the scene, toggled by user selecting CameraShape ")
      .addChild(new ExternProtoDeclare("ViewFrustum").setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new String[] {"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"})
        .addField(new field().setName("ViewpointNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
        .addField(new field().setName("NavigationInfoNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
        .addField(new field().setName("visible").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
        .addField(new field().setName("lineColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField(new field().setName("frustumColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField(new field().setName("transparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField(new field().setName("aspectRatio").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
      .addChild(new ProtoInstance("ViewFrustum", "ViewFrustumNode").setContainerField("children")
        .addFieldValue(new fieldValue().setName("ViewpointNode")
          .addChild(new Viewpoint("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(0.0,0.0,0.0)))
        .addFieldValue(new fieldValue().setName("NavigationInfoNode")
          .addChild(new NavigationInfo("TestNavigationInfo").setTransitionType(new String[] {"ANIMATE"}).setVisibilityLimit(100)))
        .addFieldValue(new fieldValue().setName("visible").setValue(false))
        .addFieldValue(new fieldValue().setName("lineColor").setValue(new SFColor(0.9,0.9,0.9)))
        .addFieldValue(new fieldValue().setName("frustumColor").setValue(new SFColor(0.8,0.8,0.8)))
        .addFieldValue(new fieldValue().setName("transparency").setValue(0.95)))
      .addChild(new BooleanToggle("ViewFrustumToggle"))
      .addChild(new ROUTE().setFromNode("CameraShapeTouched").setFromField("isActive").setToNode("ViewFrustumToggle").setToField("set_boolean"))
      .addChild(new ROUTE().setFromNode("ViewFrustumToggle").setFromField("toggle").setToNode("ViewFrustumNode").setToField("set_visible")))
    .addComments(" =============== add checkerboard, axes and other things to look at while animating ============== ")
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.282353,0.380392,0.470588})))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57079).setScale(10.0,10.0,10.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setAmbientIntensity(0.01).setDiffuseColor(1.0,1.0,1.0).setShininess(0.05)))
        .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setNormalPerVertex(false).setSolid(false).setColorIndex(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}).setCoordIndex(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.25,5.25,0.0,-3.75,5.25,0.0,-2.25,5.25,0.0,-0.75,5.25,0.0,0.75,5.25,0.0,2.25,5.25,0.0,3.75,5.25,0.0,5.25,5.25,0.0,-5.25,3.75,0.0,-3.75,3.75,0.0,-2.25,3.75,0.0,-0.75,3.75,0.0,0.75,3.75,0.0,2.25,3.75,0.0,3.75,3.75,0.0,5.25,3.75,0.0,-5.25,2.25,0.0,-3.75,2.25,0.0,-2.25,2.25,0.0,-0.75,2.25,0.0,0.75,2.25,0.0,2.25,2.25,0.0,3.75,2.25,0.0,5.25,2.25,0.0,-5.25,0.75,0.0,-3.75,0.75,0.0,-2.25,0.75,0.0,-0.75,0.75,0.0,0.75,0.75,0.0,2.25,0.75,0.0,3.75,0.75,0.0,5.25,0.75,0.0,-5.25,-0.75,0.0,-3.75,-0.75,0.0,-2.25,-0.75,0.0,-0.75,-0.75,0.0,0.75,-0.75,0.0,2.25,-0.75,0.0,3.75,-0.75,0.0,5.25,-0.75,0.0,-5.25,-2.25,0.0,-3.75,-2.25,0.0,-2.25,-2.25,0.0,-0.75,-2.25,0.0,0.75,-2.25,0.0,2.25,-2.25,0.0,3.75,-2.25,0.0,5.25,-2.25,0.0,-5.25,-3.75,0.0,-3.75,-3.75,0.0,-2.25,-3.75,0.0,-0.75,-3.75,0.0,0.75,-3.75,0.0,2.25,-3.75,0.0,3.75,-3.75,0.0,5.25,-3.75,0.0,-5.25,-5.25,0.0,-3.75,-5.25,0.0,-2.25,-5.25,0.0,-0.75,-5.25,0.0,0.75,-5.25,0.0,2.25,-5.25,0.0,3.75,-5.25,0.0,5.25,-5.25,0.0})))
          .setColor(new Color().setColor(new MFColor(new double[] {0.435294,0.741176,0.0,0.0,0.560784,0.580392}))))))
    .addChild(new Transform().setScale(3.0,3.0,3.0).setTranslation(0.0,0.25,0.0)
      .addChild(new Inline("CoordinateAxes").setUrl(new String[] {"../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"})))
    .addChild(new Transform("MovingBoxTransform")
      .addChild(new PositionInterpolator("BoxPath").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {-5.0,1.0,5.0,45.0,1.0,5.0,45.0,1.0,-45.0,-5.0,1.0,-45.0,-5.0,1.0,5.0})))
      .addChild(new TimeSensor("BoxTimer").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTE().setFromNode("BoxPath").setFromField("value_changed").setToNode("MovingBoxTransform").setToField("translation"))
      .addChild(new ROUTE().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.1").setToField("goalAimPoint"))
      .addChild(new ROUTE().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.2").setToField("goalAimPoint"))
      .addChild(new ROUTE().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.3").setToField("goalAimPoint"))
      .addChild(new ROUTE().setFromNode("BoxTimer").setFromField("fraction_changed").setToNode("BoxPath").setToField("set_fraction"))
      .addChild(new Shape()
        .setGeometry(new Box())
        .setAppearance(new Appearance()
          .setMaterial(new Material())
          .setTexture(new ImageTexture().setUrl(new String[] {"../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"})))))
    .addComments(" ================ CrossHair visualization for center of screen ================ ")
    .addChild(new ExternProtoDeclare("CrossHair").setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"})
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrissHair orititype is enabled or not"))
      .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
      .addField(new field().setName("markerColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
      .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
      .addField(new field().setName("positionOffsetFromCamera").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
    .addChild(new ProtoInstance("CrossHair", "CrossHairInstance").setContainerField("children")
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("markerColor").setValue(new SFColor(1.0,0.5,0.0)))
      .addFieldValue(new fieldValue().setName("scale").setValue(new SFVec3f(1.0,1.0,1.0)))
      .addFieldValue(new fieldValue().setName("positionOffsetFromCamera").setValue(new SFVec3f(0.0,0.0,-6.0))))
    .addComments(" turn on CrossHairInstance when animated camera viewpoints are bound ")
    .addChild(new ROUTE().setFromNode("Camera.SimpleShotsTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addChild(new ROUTE().setFromNode("Camera.AimPointTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addComments(" turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> ")
    .addComments(" =============== TODO Launch Prototype Example ============== ")
    .addChild(new Anchor().setDescription("launch CameraExample scene").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"})
      .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
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
	 * @return CameraExamples model
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
        X3D thisExampleX3dModel = new CameraExamples().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.CameraExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
                System.out.print("Java program \"net.x3djsonld.data.CameraExamples\" self-validation test results: ");
		String validationResults = thisExampleX3dModel.validationReport();
                if (validationResults.length() > 10)
                    System.out.println();
                System.out.println(validationResults);
        }
    }
}
