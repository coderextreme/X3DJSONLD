package net.x3djsonld.data;

import java.util.*;
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

// Javadoc annotations follow, see below for source.
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("CameraExamples.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new metaObject().setName("documentation").setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("18 June 2009"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new metaObject().setName(metaObject.NAME_TODO       ).setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new metaObject().setName(metaObject.NAME_MOVINGIMAGE).setContent("CameraExamplesDemo.mp4"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("CameraPrototypes.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("CameraExamplesConsoleLog.txt"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addComments(" =============== Camera ============== ")
    .addChild(new WorldInfoObject().setTitle("CameraExamples.x3d"))
    .addChild(new ExternProtoDeclareObject("Camera").setName("Camera").setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images").setUrl(new String[] {"CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"})
      .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this Camera"))
      .addField(new fieldObject().setName("position").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
      .addField(new fieldObject().setName("orientation").setType(fieldObject.TYPE_SFROTATION).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"))
      .addField(new fieldObject().setName("fieldOfView").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
      .addField(new fieldObject().setName("set_fraction").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input fraction drives interpolators"))
      .addField(new fieldObject().setName("set_bind").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("input event binds or unbinds this Camera"))
      .addField(new fieldObject().setName("bindTime").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates when this Camera is bound"))
      .addField(new fieldObject().setName("isBound").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event indicates whether this Camera is bound or unbound"))
      .addField(new fieldObject().setName("nearClipPlane").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
      .addField(new fieldObject().setName("farClipPlane").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
      .addField(new fieldObject().setName("shots").setType(fieldObject.TYPE_MFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
      .addField(new fieldObject().setName("headlight").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether camera headlight is on or off"))
      .addField(new fieldObject().setName("headlightColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight color"))
      .addField(new fieldObject().setName("headlightIntensity").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera headlight intensity"))
      .addField(new fieldObject().setName("filterColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter color that modifies virtual lens capture"))
      .addField(new fieldObject().setName("filterTransparency").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Camera filter transparency that modifies virtual lens capture"))
      .addField(new fieldObject().setName("upVector").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
      .addField(new fieldObject().setName("fStop").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setName("focusDistance").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setName("isActive").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setName("totalDuration").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
      .addField(new fieldObject().setName("offlineRender").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("OfflineRender node"))
      .addField(new fieldObject().setName("traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields "))
    .addComments(" =============== CameraShot ============== ")
    .addChild(new ExternProtoDeclareObject("CameraShot").setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(new String[] {"CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"})
      .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraShot"))
      .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraShot can be activated"))
      .addField(new fieldObject().setName("moves").setType(fieldObject.TYPE_MFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Set of CameraMovement nodes")
        .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
      .addField(new fieldObject().setName("initialPosition").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera position for this shot"))
      .addField(new fieldObject().setName("initialOrientation").setType(fieldObject.TYPE_SFROTATION).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize camera rotation for this shot"))
      .addField(new fieldObject().setName("initialAimPoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
      .addField(new fieldObject().setName("initialFieldOfView").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("pi/4"))
      .addField(new fieldObject().setName("initialFStop").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setName("initialFocusDistance").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setName("shotDuration").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Subtotal duration of contained CameraMovement move durations"))
      .addField(new fieldObject().setName("isActive").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setName("traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== CameraMovement ============== ")
    .addChild(new ExternProtoDeclareObject("CameraMovement").setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(new String[] {"CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"})
      .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this CameraMovement"))
      .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this CameraMovement can be activated"))
      .addField(new fieldObject().setName("duration").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Duration in seconds for this move"))
      .addField(new fieldObject().setName("goalPosition").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera position for this move"))
      .addField(new fieldObject().setName("goalOrientation").setType(fieldObject.TYPE_SFROTATION).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal camera rotation for this move"))
      .addField(new fieldObject().setName("tracking").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
      .addField(new fieldObject().setName("goalAimPoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
      .addField(new fieldObject().setName("goalFieldOfView").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Goal fieldOfView for this move"))
      .addField(new fieldObject().setName("goalFStop").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setName("goalFocusDistance").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setName("isActive").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setName("traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== OfflineRender ============== ")
    .addChild(new ExternProtoDeclareObject("OfflineRender").setName("OfflineRender").setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)").setUrl(new String[] {"CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"})
      .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description to be displayed for this OfflineRender"))
      .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether this OfflineRender can be activated"))
      .addField(new fieldObject().setName("frameRate").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Frames per second recorded for this rendering"))
      .addField(new fieldObject().setName("frameSize").setType(fieldObject.TYPE_SFVEC2F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Size of frame in number of pixels width and height"))
      .addField(new fieldObject().setName("pixelAspectRatio").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
      .addField(new fieldObject().setName("set_startTime").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Begin render operation"))
      .addField(new fieldObject().setName("progress").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Progress performing render operation (0..1)"))
      .addField(new fieldObject().setName("renderCompleteTime").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Render operation complete"))
      .addField(new fieldObject().setName("movieFormat").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
      .addField(new fieldObject().setName("imageFormat").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
      .addField(new fieldObject().setName("traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" TODO non-photorealistic rendering (NPR) parameters "))
    .addComments(" =============== Lights, camera, action! ============== ")
    .addChild(new DirectionalLightObject().setDirection(0.0f,-1.0f,0.0f).setGlobal(true).setIntensity(0.8f))
    .addChild(new NavigationInfoObject().setType(new String[] {"EXAMINE","FLY","ANY"}))
    .addChild(new ViewpointObject().setDescription("Camera test scene entry view").setPosition(0.0f,2.0f,12.0f))
    .addChild(new ViewpointObject().setDescription("Camera test scene from above").setOrientation(1.0f,0.0f,0.0f,-1.57079f).setPosition(0.0f,150.0f,0.0f))
    .addComments(" Keep prototype instances in same file while developing, then move later ")
    .addComments(" We will create examples matching those in the paper ")
    .addComments(" =============== Camera.SimpleShotsTest ============== ")
    .addChild(new ProtoInstanceObject("Camera", "Camera.SimpleShotsTest")
      .addFieldValue(new fieldValueObject().setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"))
      .addFieldValue(new fieldValueObject().setName("headlight").setValue(true))
      .addFieldValue(new fieldValueObject().setName("position").setValue(new SFVec3fObject(-4.0f,4.0f,10.0f)))
      .addFieldValue(new fieldValueObject().setName("shots")
        .addChild(new ProtoInstanceObject("CameraShot", "Zoom")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Zoom"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(-50.0f,1.0f,-10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom In"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-50.0f,1.0f,-15.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom Out"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-50.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-50.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))))
        .addChild(new ProtoInstanceObject("CameraShot", "Dolly")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Dolly"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(-40.0f,1.0f,-10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement", "DollyMove1")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Right to Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-45.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Left to Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-40.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-40.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))))
        .addChild(new ProtoInstanceObject("CameraShot", "Pan")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Pan left right and back to center"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(-30.0f,1.0f,-10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement", "PanLeft")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(2f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-30.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.4f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "PanRight")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-30.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,-0.4f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pan back to Center"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(2f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-30.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(2f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-30.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))))
        .addChild(new ProtoInstanceObject("CameraShot", "CameraBoom")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(-20.0f,1.0f,-10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement", "CameraBoomUp")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Up"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-20.0f,5.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "BoomDown")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Down"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-20.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "BoomPause")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(2f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-20.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f))))))
        .addChild(new ProtoInstanceObject("CameraShot", "CameraTilt")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("traceEnabled").setValue(true))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "TiltDown")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.785f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "TiltPause")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.785f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,-0.785f))))
            .addChild(new ProtoInstanceObject("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,-0.785f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "TiltReset")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Reset"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(1f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(-10.0f,1.0f,-10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.0f))))
            .addChild(new ProtoInstanceObject("CameraMovement", "TiltUp")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Return to home"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(2f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(0.0f,2.0f,12.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,0.0f,1.0f,0.0f))))))))
    .addChild(new GroupObject("AnimationGroup.SimpleShots")
      .addChild(new TimeSensorObject("CameraTimer.SimpleShots"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("totalDuration").setToNode("CameraTimer.SimpleShots").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTEObject().setFromNode("CameraTimer.SimpleShots").setFromField("fraction_changed").setToNode("Camera.SimpleShotsTest").setToField("set_fraction"))
      .addChild(new TransformObject("Trigger.SimpleShots").setTranslation(-4.0f,4.0f,0.0f)
        .addChild(new BooleanFilterObject("TextTouchActive.SimpleShotsFilter"))
        .addChild(new TouchSensorObject("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
        .addChild(new ROUTEObject().setFromNode("TextTouchActive.SimpleShotsFilter").setFromField("inputTrue").setToNode("Camera.SimpleShotsTest").setToField("set_bind"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.SimpleShots").setFromField("isActive").setToNode("TextTouchActive.SimpleShotsFilter").setToField("set_boolean"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.SimpleShots").setFromField("touchTime").setToNode("CameraTimer.SimpleShots").setToField("startTime"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new String[] {"Click to animate","SimpleShotsTest"})
            .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject("ArtDeco5").setAmbientIntensity(0.24f).setDiffuseColor(0.945455f,0.318988f,0.321717f).setShininess(0.01f).setSpecularColor(0.072727f,0.021705f,0.010732f)
              .addComments(" Universal Media Library: ArtDeco 5 "))))
        .addComments(" Simplify intersection test for user selecting text ")
        .addChild(new ShapeObject("TransparentBox")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(1f)))
          .setGeometry(new BoxObject().setSize(6.0f,2.0f,0.0001f)))))
    .addChild(new GroupObject("SimpleShotsTargets")
      .addChild(new TransformObject("TargetBoxZoom").setTranslation(-50.0f,1.0f,-20.0f)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"}))))
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new String[] {"Zoom in, out"})
              .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxDolly").setTranslation(-40.0f,1.0f,-20.0f)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"}))))
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new String[] {"Dolly left, right"})
              .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxPan").setTranslation(-30.0f,1.0f,-20.0f)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"}))))
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new String[] {"Pan left, right"})
              .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxBoom").setTranslation(-20.0f,1.0f,-20.0f)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"}))))
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new String[] {"Boom up, down"})
              .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxTilt").setTranslation(-10.0f,1.0f,-20.0f)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"}))))
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new String[] {"Tilt left, right"})
              .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject()))))))
    .addComments(" =============== Camera.AimPointTest ============== ")
    .addChild(new ProtoInstanceObject("Camera", "Camera.AimPointTest")
      .addFieldValue(new fieldValueObject().setName("description").setValue("AimPointTest for moving camera tracking moving target"))
      .addFieldValue(new fieldValueObject().setName("position").setValue(new SFVec3fObject(4.0f,4.0f,10.0f)))
      .addFieldValue(new fieldValueObject().setName("shots")
        .addChild(new ProtoInstanceObject("CameraShot", "Shot5")
          .addFieldValue(new fieldValueObject().setName("description").setValue("#3 Tracking shot"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue(new SFVec3fObject(6.0f,6.0f,10.0f)))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraMovement", "MoveAimPoint3.1")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.1 moving BoxPath"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue(true))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(8f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(6.0f,6.0f,10.0f)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("CameraMovement", "MoveAimPoint3.2")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.2 pan right while tracking"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue(true))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(8f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(40.0f,6.0f,12.0f)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("CameraMovement", "MoveAimPoint3.3")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.3 boom up while tracking"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue(true))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(3f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(40.0f,20.0f,13.0f)))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("CameraMovement", "MoveAimPoint3.4")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.4 restore camera back to home"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue(true))
              .addFieldValue(new fieldValueObject().setName("duration").setValue(5f))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue(new SFVec3fObject(4.0f,4.0f,10.0f)))
              .addFieldValue(new fieldValueObject().setName("goalAimPoint").setValue(new SFVec3fObject(4.0f,4.0f,0.0f)))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue(new SFRotationObject(0.0f,1.0f,0.0f,0.0f)))
              .addComments(" can test tracking or not using these values "))))))
    .addChild(new GroupObject("AnimationGroup.AimPointTest")
      .addChild(new TimeSensorObject("CameraTimer.AimPointTest"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("totalDuration").setToNode("CameraTimer.AimPointTest").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTEObject().setFromNode("CameraTimer.AimPointTest").setFromField("fraction_changed").setToNode("Camera.AimPointTest").setToField("set_fraction"))
      .addChild(new TransformObject("Trigger.AimPointTest").setTranslation(4.0f,4.0f,0.0f)
        .addChild(new BooleanFilterObject("TextTouchActive.AimPointFilter"))
        .addChild(new TouchSensorObject("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
        .addChild(new ROUTEObject().setFromNode("TextTouchActive.AimPointFilter").setFromField("inputTrue").setToNode("Camera.AimPointTest").setToField("set_bind"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.AimPointTest").setFromField("isActive").setToNode("TextTouchActive.AimPointFilter").setToField("set_boolean"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.AimPointTest").setFromField("touchTime").setToNode("CameraTimer.AimPointTest").setToField("startTime"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new String[] {"Click to animate","AimPointTest"})
            .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setUSE("ArtDeco5"))))
        .addChild(new ShapeObject().setUSE("TransparentBox"))))
    .addComments(" TODO build a test once implemented ")
    .addChild(new ProtoInstanceObject("OfflineRender"))
    .addComments(" =============== animate a camera shape to visualize view changes ============== ")
    .addChild(new TransformObject("CameraShapeTransform").setTranslation(0.0f,0.5f,0.0f)
      .addComments(" move CameraShape using active Camera ")
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("position_changed").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("position").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new TransformObject("CameraOffsetTransform").setTranslation(0.0f,0.0f,0.25f)
        .addChild(new TouchSensorObject("CameraShapeTouched"))
        .addChild(new InlineObject("CameraShape").setUrl(new String[] {"CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"}))
        .addChild(new ShapeObject("SightLine")
          .setGeometry(new IndexedLineSetObject().setCoordIndex(new int[] {0,1})
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,-100.0f}))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setEmissiveColor(0.8f,0.8f,0.4f)))))
      .addComments(" Display frustum to show camera view within the scene, toggled by user selecting CameraShape ")
      .addChild(new ExternProtoDeclareObject("ViewFrustum").setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new String[] {"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"})
        .addField(new fieldObject().setName("ViewpointNode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
        .addField(new fieldObject().setName("NavigationInfoNode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
        .addField(new fieldObject().setName("visible").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
        .addField(new fieldObject().setName("lineColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField(new fieldObject().setName("frustumColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField(new fieldObject().setName("transparency").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField(new fieldObject().setName("aspectRatio").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField(new fieldObject().setName("trace").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
      .addChild(new ProtoInstanceObject("ViewFrustum", "ViewFrustumNode")
        .addFieldValue(new fieldValueObject().setName("ViewpointNode")
          .addChild(new ViewpointObject("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(0.0f,0.0f,0.0f)))
        .addFieldValue(new fieldValueObject().setName("NavigationInfoNode")
          .addChild(new NavigationInfoObject("TestNavigationInfo").setTransitionType(new String[] {"ANIMATE"}).setVisibilityLimit(100f)))
        .addFieldValue(new fieldValueObject().setName("visible").setValue(false))
        .addFieldValue(new fieldValueObject().setName("lineColor").setValue(new SFColorObject(0.9f,0.9f,0.9f)))
        .addFieldValue(new fieldValueObject().setName("frustumColor").setValue(new SFColorObject(0.8f,0.8f,0.8f)))
        .addFieldValue(new fieldValueObject().setName("transparency").setValue(0.95f)))
      .addChild(new BooleanToggleObject("ViewFrustumToggle"))
      .addChild(new ROUTEObject().setFromNode("CameraShapeTouched").setFromField("isActive").setToNode("ViewFrustumToggle").setToField("set_boolean"))
      .addChild(new ROUTEObject().setFromNode("ViewFrustumToggle").setFromField("toggle").setToNode("ViewFrustumNode").setToField("set_visible")))
    .addComments(" =============== add checkerboard, axes and other things to look at while animating ============== ")
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.282353f,0.380392f,0.470588f})))
    .addChild(new TransformObject().setRotation(1.0f,0.0f,0.0f,-1.57079f).setScale(10.0f,10.0f,10.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setAmbientIntensity(0.01f).setDiffuseColor(1.0f,1.0f,1.0f).setShininess(0.05f)))
        .setGeometry(new IndexedFaceSetObject().setColorPerVertex(false).setNormalPerVertex(false).setSolid(false).setColorIndex(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}).setCoordIndex(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1})
          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-5.25f,5.25f,0.0f,-3.75f,5.25f,0.0f,-2.25f,5.25f,0.0f,-0.75f,5.25f,0.0f,0.75f,5.25f,0.0f,2.25f,5.25f,0.0f,3.75f,5.25f,0.0f,5.25f,5.25f,0.0f,-5.25f,3.75f,0.0f,-3.75f,3.75f,0.0f,-2.25f,3.75f,0.0f,-0.75f,3.75f,0.0f,0.75f,3.75f,0.0f,2.25f,3.75f,0.0f,3.75f,3.75f,0.0f,5.25f,3.75f,0.0f,-5.25f,2.25f,0.0f,-3.75f,2.25f,0.0f,-2.25f,2.25f,0.0f,-0.75f,2.25f,0.0f,0.75f,2.25f,0.0f,2.25f,2.25f,0.0f,3.75f,2.25f,0.0f,5.25f,2.25f,0.0f,-5.25f,0.75f,0.0f,-3.75f,0.75f,0.0f,-2.25f,0.75f,0.0f,-0.75f,0.75f,0.0f,0.75f,0.75f,0.0f,2.25f,0.75f,0.0f,3.75f,0.75f,0.0f,5.25f,0.75f,0.0f,-5.25f,-0.75f,0.0f,-3.75f,-0.75f,0.0f,-2.25f,-0.75f,0.0f,-0.75f,-0.75f,0.0f,0.75f,-0.75f,0.0f,2.25f,-0.75f,0.0f,3.75f,-0.75f,0.0f,5.25f,-0.75f,0.0f,-5.25f,-2.25f,0.0f,-3.75f,-2.25f,0.0f,-2.25f,-2.25f,0.0f,-0.75f,-2.25f,0.0f,0.75f,-2.25f,0.0f,2.25f,-2.25f,0.0f,3.75f,-2.25f,0.0f,5.25f,-2.25f,0.0f,-5.25f,-3.75f,0.0f,-3.75f,-3.75f,0.0f,-2.25f,-3.75f,0.0f,-0.75f,-3.75f,0.0f,0.75f,-3.75f,0.0f,2.25f,-3.75f,0.0f,3.75f,-3.75f,0.0f,5.25f,-3.75f,0.0f,-5.25f,-5.25f,0.0f,-3.75f,-5.25f,0.0f,-2.25f,-5.25f,0.0f,-0.75f,-5.25f,0.0f,0.75f,-5.25f,0.0f,2.25f,-5.25f,0.0f,3.75f,-5.25f,0.0f,5.25f,-5.25f,0.0f})))
          .setColor(new ColorObject().setColor(new MFColorObject(new float[] {0.435294f,0.741176f,0.0f,0.0f,0.560784f,0.580392f}))))))
    .addChild(new TransformObject().setScale(3.0f,3.0f,3.0f).setTranslation(0.0f,0.25f,0.0f)
      .addChild(new InlineObject("CoordinateAxes").setUrl(new String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"})))
    .addChild(new TransformObject("MovingBoxTransform")
      .addChild(new PositionInterpolatorObject("BoxPath").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {-5.0f,1.0f,5.0f,45.0f,1.0f,5.0f,45.0f,1.0f,-45.0f,-5.0f,1.0f,-45.0f,-5.0f,1.0f,5.0f})))
      .addChild(new TimeSensorObject("BoxTimer").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("BoxPath").setFromField("value_changed").setToNode("MovingBoxTransform").setToField("translation"))
      .addChild(new ROUTEObject().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.1").setToField("goalAimPoint"))
      .addChild(new ROUTEObject().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.2").setToField("goalAimPoint"))
      .addChild(new ROUTEObject().setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.3").setToField("goalAimPoint"))
      .addChild(new ROUTEObject().setFromNode("BoxTimer").setFromField("fraction_changed").setToNode("BoxPath").setToField("set_fraction"))
      .addChild(new ShapeObject()
        .setGeometry(new BoxObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject())
          .setTexture(new ImageTextureObject().setUrl(new String[] {"../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"})))))
    .addComments(" ================ CrossHair visualization for center of screen ================ ")
    .addChild(new ExternProtoDeclareObject("CrossHair").setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"})
      .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrissHair orititype is enabled or not"))
      .addField(new fieldObject().setName("set_enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
      .addField(new fieldObject().setName("markerColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
      .addField(new fieldObject().setName("scale").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
      .addField(new fieldObject().setName("positionOffsetFromCamera").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
    .addChild(new ProtoInstanceObject("CrossHair", "CrossHairInstance")
      .addFieldValue(new fieldValueObject().setName("enabled").setValue(true))
      .addFieldValue(new fieldValueObject().setName("markerColor").setValue(new SFColorObject(1.0f,0.5f,0.0f)))
      .addFieldValue(new fieldValueObject().setName("scale").setValue(new SFVec3fObject(1.0f,1.0f,1.0f)))
      .addFieldValue(new fieldValueObject().setName("positionOffsetFromCamera").setValue(new SFVec3fObject(0.0f,0.0f,-6.0f))))
    .addComments(" turn on CrossHairInstance when animated camera viewpoints are bound ")
    .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addComments(" turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> ")
    .addComments(" =============== TODO Launch Prototype Example ============== ")
    .addChild(new AnchorObject().setDescription("launch CameraExample scene").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"})
      .addChild(new TransformObject().setTranslation(0.0f,-3.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new String[] {"CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"})
            .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5f)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,0.2f)))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return CameraExamples model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new CameraExamples().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"CameraExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"CameraExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
