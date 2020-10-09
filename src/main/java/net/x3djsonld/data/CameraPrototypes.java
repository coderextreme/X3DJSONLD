package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </p>
 <p> Related links: <a href="../../../development/CameraPrototypes.java">CameraPrototypes.java</a> source, <a href="../../../development/CameraPrototypesIndex.html" target="_top">CameraPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> <a href="http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html" target="_blank">http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html</a> </td>
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
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
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
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CameraPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 March 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("25 October 2016"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CameraExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
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
        .addChild(new NavigationInfo("CameraNavInfo").setType(new String[] {"EXAMINE","FLY","ANY"})
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
        .addChild(new X3DScript("CameraScript").setDirectOutput("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript directOutput: $isNumeric=false, $attributeType=, value='true']
).setMustEvaluate("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript mustEvaluate: $isNumeric=false, $attributeType=, value='true']
)
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
        .addChild(new X3DScript("CameraShotScript").setDirectOutput("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript directOutput: $isNumeric=false, $attributeType=, value='true']
).setMustEvaluate("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript mustEvaluate: $isNumeric=false, $attributeType=, value='true']
)
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
        .addChild(new X3DScript("CameraMovementScript").setDirectOutput("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript directOutput: $isNumeric=false, $attributeType=, value='true']
).setMustEvaluate("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript mustEvaluate: $isNumeric=false, $attributeType=, value='true']
)
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
        .addChild(new X3DScript("OfflineRenderScript").setMustEvaluate("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript mustEvaluate: $isNumeric=false, $attributeType=, value='true']
)
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
    .addChild(new Anchor().setDescription("launch CameraExample scene").setUrl(new String[] {"CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"})
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2)))))));
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
        X3D thisExampleX3dModel = new CameraPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"CameraPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"CameraPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
