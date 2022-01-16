var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </p>
 <p> Related links: <a href="../../../development/CameraExamples.java">CameraExamples.java</a> source, <a href="../../../development/CameraExamplesIndex.html" target="_top">CameraExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman and Jeff Weekley
 */

function CameraExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CameraExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #22, 31 total values */
	this.ExternProtoDeclare_Camera_3_22_appinfo = new autoclass.SFString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images");

	/** Large attribute array: field appinfo field, scene-graph level=4, element #23, 16 total values */
	this.field_position_4_23_appinfo = new autoclass.SFString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: field appinfo field, scene-graph level=4, element #24, 16 total values */
	this.field_orientation_4_24_appinfo = new autoclass.SFString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #72, 20 total values */
	this.ExternProtoDeclare_OfflineRender_3_72_appinfo = new autoclass.SFString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)");

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=5, element #384, 245 total numbers */
	this.IndexedFaceSet_5_384_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #384, 192 total numbers made up of 64 3-tuple values */
	this.Coordinate_6_384_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-5.25,5.25,0.0,-3.75,5.25,0.0,-2.25,5.25,0.0,-0.75,5.25,0.0,0.75,5.25,0.0,2.25,5.25,0.0,3.75,5.25,0.0,5.25,5.25,0.0,-5.25,3.75,0.0,-3.75,3.75,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-2.25,3.75,0.0,-0.75,3.75,0.0,0.75,3.75,0.0,2.25,3.75,0.0,3.75,3.75,0.0,5.25,3.75,0.0,-5.25,2.25,0.0,-3.75,2.25,0.0,-2.25,2.25,0.0,-0.75,2.25,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.75,2.25,0.0,2.25,2.25,0.0,3.75,2.25,0.0,5.25,2.25,0.0,-5.25,0.75,0.0,-3.75,0.75,0.0,-2.25,0.75,0.0,-0.75,0.75,0.0,0.75,0.75,0.0,2.25,0.75,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [3.75,0.75,0.0,5.25,0.75,0.0,-5.25,-0.75,0.0,-3.75,-0.75,0.0,-2.25,-0.75,0.0,-0.75,-0.75,0.0,0.75,-0.75,0.0,2.25,-0.75,0.0,3.75,-0.75,0.0,5.25,-0.75,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-5.25,-2.25,0.0,-3.75,-2.25,0.0,-2.25,-2.25,0.0,-0.75,-2.25,0.0,0.75,-2.25,0.0,2.25,-2.25,0.0,3.75,-2.25,0.0,5.25,-2.25,0.0,-5.25,-3.75,0.0,-3.75,-3.75,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-2.25,-3.75,0.0,-0.75,-3.75,0.0,0.75,-3.75,0.0,2.25,-3.75,0.0,3.75,-3.75,0.0,5.25,-3.75,0.0,-5.25,-5.25,0.0,-3.75,-5.25,0.0,-2.25,-5.25,0.0,-0.75,-5.25,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.75,-5.25,0.0,2.25,-5.25,0.0,3.75,-5.25,0.0,5.25,-5.25,0.0])));

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #404, 20 total values */
	this.ExternProtoDeclare_CrossHair_3_404_appinfo = new autoclass.SFString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CameraExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta((new autoclass.meta()).setName("documentation").setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman and Jeff Weekley"))
    .addMeta((new autoclass.meta()).setName("created").setContent("18 June 2009"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta((new autoclass.meta()).setName("MovingImage").setContent("CameraExamplesDemo.mp4"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CameraPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CameraExamplesConsoleLog.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" =============== Camera ============== ")
    .addChild((new autoclass.WorldInfo()).setTitle("CameraExamples.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Camera").setAppinfo(this.ExternProtoDeclare_Camera_3_22_appinfo).setUrl(new autoclass.MFString("\"CameraPrototypes.x3d#Camera\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera\" \"CameraPrototypes.wrl#Camera\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera\""))
      .addField((new autoclass.field()).setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this Camera"))
      .addField((new autoclass.field()).setName("position").setType("SFVec3f").setAccessType("inputOutput").setAppinfo(this.field_position_4_23_appinfo))
      .addField((new autoclass.field()).setName("orientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo(this.field_orientation_4_24_appinfo))
      .addField((new autoclass.field()).setName("fieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("pi/4"))
      .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly").setAppinfo("input fraction drives interpolators"))
      .addField((new autoclass.field()).setName("set_bind").setType("SFBool").setAccessType("inputOnly").setAppinfo("input event binds or unbinds this Camera"))
      .addField((new autoclass.field()).setName("bindTime").setType("SFTime").setAccessType("outputOnly").setAppinfo("output event indicates when this Camera is bound"))
      .addField((new autoclass.field()).setName("isBound").setType("SFBool").setAccessType("outputOnly").setAppinfo("output event indicates whether this Camera is bound or unbound"))
      .addField((new autoclass.field()).setName("nearClipPlane").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
      .addField((new autoclass.field()).setName("farClipPlane").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
      .addField((new autoclass.field()).setName("shots").setType("MFNode").setAccessType("inputOutput").setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
      .addField((new autoclass.field()).setName("headlight").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether camera headlight is on or off"))
      .addField((new autoclass.field()).setName("headlightColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("Camera headlight color"))
      .addField((new autoclass.field()).setName("headlightIntensity").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Camera headlight intensity"))
      .addField((new autoclass.field()).setName("filterColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("Camera filter color that modifies virtual lens capture"))
      .addField((new autoclass.field()).setName("filterTransparency").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Camera filter transparency that modifies virtual lens capture"))
      .addField((new autoclass.field()).setName("upVector").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
      .addField((new autoclass.field()).setName("fStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField((new autoclass.field()).setName("focusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField((new autoclass.field()).setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField((new autoclass.field()).setName("totalDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
      .addField((new autoclass.field()).setName("offlineRender").setType("SFNode").setAccessType("inputOutput").setAppinfo("OfflineRender node"))
      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields "))
    .addComments(" =============== CameraShot ============== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(new autoclass.MFString("\"CameraPrototypes.x3d#CameraShot\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot\" \"CameraPrototypes.wrl#CameraShot\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot\""))
      .addField((new autoclass.field()).setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraShot"))
      .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this CameraShot can be activated"))
      .addField((new autoclass.field()).setName("moves").setType("MFNode").setAccessType("inputOutput").setAppinfo("Set of CameraMovement nodes")
        .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
      .addField((new autoclass.field()).setName("initialPosition").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Setup to reinitialize camera position for this shot"))
      .addField((new autoclass.field()).setName("initialOrientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo("Setup to reinitialize camera rotation for this shot"))
      .addField((new autoclass.field()).setName("initialAimPoint").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
      .addField((new autoclass.field()).setName("initialFieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("pi/4"))
      .addField((new autoclass.field()).setName("initialFStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField((new autoclass.field()).setName("initialFocusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField((new autoclass.field()).setName("shotDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Subtotal duration of contained CameraMovement move durations"))
      .addField((new autoclass.field()).setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== CameraMovement ============== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(new autoclass.MFString("\"CameraPrototypes.x3d#CameraMovement\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement\" \"CameraPrototypes.wrl#CameraMovement\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement\""))
      .addField((new autoclass.field()).setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraMovement"))
      .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this CameraMovement can be activated"))
      .addField((new autoclass.field()).setName("duration").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Duration in seconds for this move"))
      .addField((new autoclass.field()).setName("goalPosition").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Goal camera position for this move"))
      .addField((new autoclass.field()).setName("goalOrientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo("Goal camera rotation for this move"))
      .addField((new autoclass.field()).setName("tracking").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
      .addField((new autoclass.field()).setName("goalAimPoint").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
      .addField((new autoclass.field()).setName("goalFieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Goal fieldOfView for this move"))
      .addField((new autoclass.field()).setName("goalFStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField((new autoclass.field()).setName("goalFocusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField((new autoclass.field()).setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== OfflineRender ============== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("OfflineRender").setAppinfo(this.ExternProtoDeclare_OfflineRender_3_72_appinfo).setUrl(new autoclass.MFString("\"CameraPrototypes.x3d#OfflineRender\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender\" \"CameraPrototypes.wrl#OfflineRender\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender\""))
      .addField((new autoclass.field()).setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this OfflineRender"))
      .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this OfflineRender can be activated"))
      .addField((new autoclass.field()).setName("frameRate").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Frames per second recorded for this rendering"))
      .addField((new autoclass.field()).setName("frameSize").setType("SFVec2f").setAccessType("inputOutput").setAppinfo("Size of frame in number of pixels width and height"))
      .addField((new autoclass.field()).setName("pixelAspectRatio").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
      .addField((new autoclass.field()).setName("set_startTime").setType("SFTime").setAccessType("inputOnly").setAppinfo("Begin render operation"))
      .addField((new autoclass.field()).setName("progress").setType("SFFloat").setAccessType("outputOnly").setAppinfo("Progress performing render operation (0..1)"))
      .addField((new autoclass.field()).setName("renderCompleteTime").setType("SFTime").setAccessType("outputOnly").setAppinfo("Render operation complete"))
      .addField((new autoclass.field()).setName("movieFormat").setType("MFString").setAccessType("initializeOnly").setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
      .addField((new autoclass.field()).setName("imageFormat").setType("MFString").setAccessType("initializeOnly").setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
      .addField((new autoclass.field()).setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" TODO non-photorealistic rendering (NPR) parameters "))
    .addComments(" =============== Lights, camera, action! ============== ")
    .addChild((new autoclass.DirectionalLight()).setDirection(0.0,-1.0,0.0).setGlobal(true).setIntensity(0.8))
    .addChild((new autoclass.NavigationInfo()).setType("\"EXAMINE\" \"FLY\" \"ANY\""))
    .addChild((new autoclass.Viewpoint()).setDescription("Camera test scene entry view").setPosition(0.0,2.0,12.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Camera test scene from above").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,150.0,0.0))
    .addComments(" Keep prototype instances in same file while developing, then move later ")
    .addComments(" We will create examples matching those in the paper ")
    .addComments(" =============== Camera.SimpleShotsTest ============== ")
    .addChild((new autoclass.ProtoInstance("Camera.SimpleShotsTest", "Camera"))
      .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"))
      .addFieldValue((new autoclass.fieldValue()).setName("headlight").setValue("true"))
      .addFieldValue((new autoclass.fieldValue()).setName("position").setValue("-4 4 10"))
      .addFieldValue((new autoclass.fieldValue()).setName("shots")
        .addChild((new autoclass.ProtoInstance("Zoom", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Simple shot of Camera Zoom"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("-50 1 -10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Zoom In"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-50 1 -15"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Zoom Out"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-50 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-50 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild((new autoclass.ProtoInstance("Dolly", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Simple shot of Camera Dolly"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("-40 1 -10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance("DollyMove1", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Dolly from Right to Left"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-45 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Dolly from Left to Right"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-40 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-40 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild((new autoclass.ProtoInstance("Pan", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Simple shot of Camera Pan left right and back to center"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("-30 1 -10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance("PanLeft", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Pan Left"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("2"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0.4")))
            .addChild((new autoclass.ProtoInstance("PanRight", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Pan Right"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 -0.4")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Pan back to Center"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("2"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("2"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild((new autoclass.ProtoInstance("CameraBoom", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Boom"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("-20 1 -10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance("CameraBoomUp", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Boom Up"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-20 5 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance("BoomDown", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Boom Down"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-20 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))
            .addChild((new autoclass.ProtoInstance("BoomPause", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("2"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-20 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild((new autoclass.ProtoInstance("CameraTilt", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("-10 1 -10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 0 1 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("traceEnabled").setValue("true"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 0")))
            .addChild((new autoclass.ProtoInstance("TiltDown", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Left"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 0.785")))
            .addChild((new autoclass.ProtoInstance("TiltPause", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 0.785")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Right"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 -0.785")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 -0.785")))
            .addChild((new autoclass.ProtoInstance("TiltReset", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Camera Tilt Reset"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("1"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 0")))
            .addChild((new autoclass.ProtoInstance("TiltUp", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("Return to home"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("2"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("0 2 12"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 0 1 0")))))))
    .addChild((new autoclass.Group("AnimationGroup.SimpleShots"))
      .addChild((new autoclass.TimeSensor("CameraTimer.SimpleShots")))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.SimpleShotsTest").setFromField("totalDuration").setToNode("CameraTimer.SimpleShots").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild((new autoclass.ROUTE()).setFromNode("CameraTimer.SimpleShots").setFromField("fraction_changed").setToNode("Camera.SimpleShotsTest").setToField("set_fraction"))
      .addChild((new autoclass.Transform("Trigger.SimpleShots")).setTranslation(-4.0,4.0,0.0)
        .addChild((new autoclass.BooleanFilter("TextTouchActive.SimpleShotsFilter")))
        .addChild((new autoclass.TouchSensor("TextTouch.SimpleShots")).setDescription("touch to animate Camera SimpleShotsTest"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouchActive.SimpleShotsFilter").setFromField("inputTrue").setToNode("Camera.SimpleShotsTest").setToField("set_bind"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouch.SimpleShots").setFromField("isActive").setToNode("TextTouchActive.SimpleShotsFilter").setToField("set_boolean"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouch.SimpleShots").setFromField("touchTime").setToNode("CameraTimer.SimpleShots").setToField("startTime"))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click to animate\" \"SimpleShotsTest\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("ArtDeco5")).setAmbientIntensity(0.24).setDiffuseColor(0.945455,0.318988,0.321717).setShininess(0.01).setSpecularColor(0.072727,0.021705,0.010732)
              .addComments(" Universal Media Library: ArtDeco 5 "))))
        .addComments(" Simplify intersection test for user selecting text ")
        .addChild((new autoclass.Shape("TransparentBox"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(1)))
          .setGeometry((new autoclass.Box()).setSize(6.0,2.0,0.0001)))))
    .addChild((new autoclass.Group("SimpleShotsTargets"))
      .addChild((new autoclass.Transform("TargetBoxZoom")).setTranslation(-50.0,1.0,-20.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/CameraMoveZoom.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png\"")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Zoom in, out\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()))))))
      .addChild((new autoclass.Transform("TargetBoxDolly")).setTranslation(-40.0,1.0,-20.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/CameraMoveDolly.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png\"")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Dolly left, right\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()))))))
      .addChild((new autoclass.Transform("TargetBoxPan")).setTranslation(-30.0,1.0,-20.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/CameraMovePan.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png\"")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Pan left, right\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()))))))
      .addChild((new autoclass.Transform("TargetBoxBoom")).setTranslation(-20.0,1.0,-20.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/CameraMoveBoom.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png\"")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Boom up, down\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()))))))
      .addChild((new autoclass.Transform("TargetBoxTilt")).setTranslation(-10.0,1.0,-20.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/CameraMoveTilt.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png\"")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Tilt left, right\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material())))))))
    .addComments(" =============== Camera.AimPointTest ============== ")
    .addChild((new autoclass.ProtoInstance("Camera.AimPointTest", "Camera"))
      .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("AimPointTest for moving camera tracking moving target"))
      .addFieldValue((new autoclass.fieldValue()).setName("position").setValue("4 4 10"))
      .addFieldValue((new autoclass.fieldValue()).setName("shots")
        .addChild((new autoclass.ProtoInstance("Shot5", "CameraShot"))
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("#3 Tracking shot"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialPosition").setValue("6 6 10"))
          .addFieldValue((new autoclass.fieldValue()).setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue((new autoclass.fieldValue()).setName("moves")
            .addChild((new autoclass.ProtoInstance("MoveAimPoint3.1", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("AimPoint 3.1 moving BoxPath"))
              .addFieldValue((new autoclass.fieldValue()).setName("tracking").setValue("true"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("8"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("6 6 10"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild((new autoclass.ProtoInstance("MoveAimPoint3.2", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("AimPoint 3.2 pan right while tracking"))
              .addFieldValue((new autoclass.fieldValue()).setName("tracking").setValue("true"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("8"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("40 6 12"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild((new autoclass.ProtoInstance("MoveAimPoint3.3", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("AimPoint 3.3 boom up while tracking"))
              .addFieldValue((new autoclass.fieldValue()).setName("tracking").setValue("true"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("3"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("40 20 13"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild((new autoclass.ProtoInstance("MoveAimPoint3.4", "CameraMovement"))
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("AimPoint 3.4 restore camera back to home"))
              .addFieldValue((new autoclass.fieldValue()).setName("tracking").setValue("true"))
              .addFieldValue((new autoclass.fieldValue()).setName("duration").setValue("5"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalPosition").setValue("4 4 10"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalAimPoint").setValue("4 4 0"))
              .addFieldValue((new autoclass.fieldValue()).setName("goalOrientation").setValue("0 1 0 0"))
              .addComments(" can test tracking or not using these values "))))))
    .addChild((new autoclass.Group("AnimationGroup.AimPointTest"))
      .addChild((new autoclass.TimeSensor("CameraTimer.AimPointTest")))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.AimPointTest").setFromField("totalDuration").setToNode("CameraTimer.AimPointTest").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild((new autoclass.ROUTE()).setFromNode("CameraTimer.AimPointTest").setFromField("fraction_changed").setToNode("Camera.AimPointTest").setToField("set_fraction"))
      .addChild((new autoclass.Transform("Trigger.AimPointTest")).setTranslation(4.0,4.0,0.0)
        .addChild((new autoclass.BooleanFilter("TextTouchActive.AimPointFilter")))
        .addChild((new autoclass.TouchSensor("TextTouch.AimPointTest")).setDescription("touch to animate Camera AimPointTest"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouchActive.AimPointFilter").setFromField("inputTrue").setToNode("Camera.AimPointTest").setToField("set_bind"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouch.AimPointTest").setFromField("isActive").setToNode("TextTouchActive.AimPointFilter").setToField("set_boolean"))
        .addChild((new autoclass.ROUTE()).setFromNode("TextTouch.AimPointTest").setFromField("touchTime").setToNode("CameraTimer.AimPointTest").setToField("startTime"))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click to animate\" \"AimPointTest\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))))
        .addChild((new autoclass.Shape()))))
    .addComments(" TODO build a test once implemented ")
    .addChild((new autoclass.ProtoInstance()))
    .addComments(" =============== animate a camera shape to visualize view changes ============== ")
    .addChild((new autoclass.Transform("CameraShapeTransform")).setTranslation(0.0,0.5,0.0)
      .addComments(" move CameraShape using active Camera ")
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.SimpleShotsTest").setFromField("position_changed").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.SimpleShotsTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.AimPointTest").setFromField("position").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild((new autoclass.ROUTE()).setFromNode("Camera.AimPointTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild((new autoclass.Transform("CameraOffsetTransform")).setTranslation(0.0,0.0,0.25)
        .addChild((new autoclass.TouchSensor("CameraShapeTouched")))
        .addChild((new autoclass.Inline("CameraShape")).setUrl(new autoclass.MFString("\"CameraShape.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d\"")))
        .addChild((new autoclass.Shape("SightLine"))
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,-100.0])))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setEmissiveColor(0.8,0.8,0.4)))))
      .addComments(" Display frustum to show camera view within the scene, toggled by user selecting CameraShape ")
      .addChild((new autoclass.ExternProtoDeclare()).setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new autoclass.MFString("\"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum\" \"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum\""))
        .addField((new autoclass.field()).setName("ViewpointNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
        .addField((new autoclass.field()).setName("NavigationInfoNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
        .addField((new autoclass.field()).setName("visible").setType("SFBool").setAccessType("inputOutput").setAppinfo("whether or not frustum geometry is rendered"))
        .addField((new autoclass.field()).setName("lineColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField((new autoclass.field()).setName("frustumColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField((new autoclass.field()).setName("transparency").setType("SFFloat").setAccessType("inputOutput").setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField((new autoclass.field()).setName("aspectRatio").setType("SFFloat").setAccessType("inputOutput").setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField((new autoclass.field()).setName("trace").setType("SFBool").setAccessType("initializeOnly").setAppinfo("debug support, default false")))
      .addChild((new autoclass.ProtoInstance("ViewFrustumNode", "ViewFrustum"))
        .addFieldValue((new autoclass.fieldValue()).setName("ViewpointNode")
          .addChild((new autoclass.Viewpoint("FrustumViewpoint")).setDescription("viewpoint for ViewFrustum").setPosition(0.0,0.0,0.0)))
        .addFieldValue((new autoclass.fieldValue()).setName("NavigationInfoNode")
          .addChild((new autoclass.NavigationInfo("TestNavigationInfo")).setTransitionType(new autoclass.MFString("\"ANIMATE\"")).setVisibilityLimit(100)))
        .addFieldValue((new autoclass.fieldValue()).setName("visible").setValue("false"))
        .addFieldValue((new autoclass.fieldValue()).setName("lineColor").setValue("0.9 0.9 0.9"))
        .addFieldValue((new autoclass.fieldValue()).setName("frustumColor").setValue("0.8 0.8 0.8"))
        .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.95")))
      .addChild((new autoclass.BooleanToggle("ViewFrustumToggle")))
      .addChild((new autoclass.ROUTE()).setFromNode("CameraShapeTouched").setFromField("isActive").setToNode("ViewFrustumToggle").setToField("set_boolean"))
      .addChild((new autoclass.ROUTE()).setFromNode("ViewFrustumToggle").setFromField("toggle").setToNode("ViewFrustumNode").setToField("set_visible")))
    .addComments(" =============== add checkerboard, axes and other things to look at while animating ============== ")
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.282353,0.380392,0.470588]))))
    .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.57079).setScale(10.0,10.0,10.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setAmbientIntensity(0.01).setDiffuseColor(1.0,1.0,1.0).setShininess(0.05)))
        .setGeometry((new autoclass.IndexedFaceSet()).setColorPerVertex(false).setNormalPerVertex(false).setSolid(false).setColorIndex(java.newArray("int", [0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0])).setCoordIndex(this.IndexedFaceSet_5_384_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_384_point))
          .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [0.435294,0.741176,0.0,0.0,0.560784,0.580392])))))))
    .addChild((new autoclass.Transform()).setScale(3.0,3.0,3.0).setTranslation(0.0,0.25,0.0)
      .addChild((new autoclass.Inline("CoordinateAxes")).setUrl(new autoclass.MFString("\"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"../../Savage/Tools/Authoring/CoordinateAxes.x3d\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d\" \"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"../../Savage/Tools/Authoring/CoordinateAxes.wrl\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl\""))))
    .addChild((new autoclass.Transform("MovingBoxTransform"))
      .addChild((new autoclass.PositionInterpolator("BoxPath")).setKey(java.newArray("float", [0.0,0.25,0.5,0.75,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [-5.0,1.0,5.0,45.0,1.0,5.0,45.0,1.0,-45.0,-5.0,1.0,-45.0,-5.0,1.0,5.0]))))
      .addChild((new autoclass.TimeSensor("BoxTimer")).setCycleInterval(10).setLoop(true))
      .addChild((new autoclass.ROUTE()).setFromNode("BoxPath").setFromField("value_changed").setToNode("MovingBoxTransform").setToField("translation"))
      .addChild((new autoclass.ROUTE()).setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.1").setToField("goalAimPoint"))
      .addChild((new autoclass.ROUTE()).setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.2").setToField("goalAimPoint"))
      .addChild((new autoclass.ROUTE()).setFromNode("BoxPath").setFromField("value_changed").setToNode("MoveAimPoint3.3").setToField("goalAimPoint"))
      .addChild((new autoclass.ROUTE()).setFromNode("BoxTimer").setFromField("fraction_changed").setToNode("BoxPath").setToField("set_fraction"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Box()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()))
          .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\""))))))
    .addComments(" ================ CrossHair visualization for center of screen ================ ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CrossHair").setAppinfo(this.ExternProtoDeclare_CrossHair_3_404_appinfo).setUrl(new autoclass.MFString("\"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\""))
      .addField((new autoclass.field()).setName("enabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("whether CrissHair orititype is enabled or not"))
      .addField((new autoclass.field()).setName("set_enabled").setType("SFBool").setAccessType("inputOnly").setAppinfo("control whether enabled/disabled"))
      .addField((new autoclass.field()).setName("markerColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("color of CrossHair marker"))
      .addField((new autoclass.field()).setName("scale").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("size of CrossHair in meters"))
      .addField((new autoclass.field()).setName("positionOffsetFromCamera").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("distance in front of HUD viewpoint")))
    .addChild((new autoclass.ProtoInstance("CrossHairInstance", "CrossHair"))
      .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue("true"))
      .addFieldValue((new autoclass.fieldValue()).setName("markerColor").setValue("1 0.5 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("scale").setValue("1 1 1"))
      .addFieldValue((new autoclass.fieldValue()).setName("positionOffsetFromCamera").setValue("0 0 -6")))
    .addComments(" turn on CrossHairInstance when animated camera viewpoints are bound ")
    .addChild((new autoclass.ROUTE()).setFromNode("Camera.SimpleShotsTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addChild((new autoclass.ROUTE()).setFromNode("Camera.AimPointTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addComments(" turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> ")
    .addComments(" =============== TODO Launch Prototype Example ============== ")
    .addChild((new autoclass.Anchor()).setDescription("launch CameraExample scene").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"CameraExample.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d\" \"CameraExample.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl\""))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-3.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"CameraPrototype\" \"defines a prototype\" \"\" \"Click on this text to see\" \"CameraExample scene\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.5)))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CameraExamples model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new CameraExamples();
		console.log ("CameraExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new CameraExamples().main();