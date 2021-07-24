load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
	this.ExternProtoDeclare_Camera_3_22_appinfo = new SFStringObject("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images");

	/** Large attribute array: field appinfo field, scene-graph level=4, element #23, 16 total values */
	this.field_position_4_23_appinfo = new SFStringObject("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: field appinfo field, scene-graph level=4, element #24, 16 total values */
	this.field_orientation_4_24_appinfo = new SFStringObject("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #72, 20 total values */
	this.ExternProtoDeclare_OfflineRender_3_72_appinfo = new SFStringObject("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)");

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=5, element #384, 245 total numbers */
	this.IndexedFaceSet_5_384_coordIndex = new MFInt32Object(Java.to([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #384, 192 total numbers made up of 64 3-tuple values */
	this.Coordinate_6_384_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([-5.25,5.25,0.0,-3.75,5.25,0.0,-2.25,5.25,0.0,-0.75,5.25,0.0,0.75,5.25,0.0,2.25,5.25,0.0,3.75,5.25,0.0,5.25,5.25,0.0,-5.25,3.75,0.0,-3.75,3.75,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-2.25,3.75,0.0,-0.75,3.75,0.0,0.75,3.75,0.0,2.25,3.75,0.0,3.75,3.75,0.0,5.25,3.75,0.0,-5.25,2.25,0.0,-3.75,2.25,0.0,-2.25,2.25,0.0,-0.75,2.25,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.75,2.25,0.0,2.25,2.25,0.0,3.75,2.25,0.0,5.25,2.25,0.0,-5.25,0.75,0.0,-3.75,0.75,0.0,-2.25,0.75,0.0,-0.75,0.75,0.0,0.75,0.75,0.0,2.25,0.75,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([3.75,0.75,0.0,5.25,0.75,0.0,-5.25,-0.75,0.0,-3.75,-0.75,0.0,-2.25,-0.75,0.0,-0.75,-0.75,0.0,0.75,-0.75,0.0,2.25,-0.75,0.0,3.75,-0.75,0.0,5.25,-0.75,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-5.25,-2.25,0.0,-3.75,-2.25,0.0,-2.25,-2.25,0.0,-0.75,-2.25,0.0,0.75,-2.25,0.0,2.25,-2.25,0.0,3.75,-2.25,0.0,5.25,-2.25,0.0,-5.25,-3.75,0.0,-3.75,-3.75,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-2.25,-3.75,0.0,-0.75,-3.75,0.0,0.75,-3.75,0.0,2.25,-3.75,0.0,3.75,-3.75,0.0,5.25,-3.75,0.0,-5.25,-5.25,0.0,-3.75,-5.25,0.0,-2.25,-5.25,0.0,-0.75,-5.25,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.75,-5.25,0.0,2.25,-5.25,0.0,3.75,-5.25,0.0,5.25,-5.25,0.0], Java.type("float[]"))));

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #404, 20 total values */
	this.ExternProtoDeclare_CrossHair_3_404_appinfo = new SFStringObject("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point");
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("CameraExamples.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new metaObject().setName("documentation").setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new metaObject().setName("created").setContent("18 June 2009"))
    .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
    .addMeta(new metaObject().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new metaObject().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new metaObject().setName("MovingImage").setContent("CameraExamplesDemo.mp4"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new metaObject().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new metaObject().setName("reference").setContent("CameraPrototypes.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("CameraExamplesConsoleLog.txt"))
    .addMeta(new metaObject().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addComments(" =============== Camera ============== ")
    .addChild(new WorldInfoObject().setTitle("CameraExamples.x3d"))
    .addChild(new ExternProtoDeclareObject().setName("Camera").setAppinfo(this.ExternProtoDeclare_Camera_3_22_appinfo).setUrl(new MFStringObject("\"CameraPrototypes.x3d#Camera\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera\" \"CameraPrototypes.wrl#Camera\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("Text description to be displayed for this Camera"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("position").setType("SFVec3f").setAppinfo(this.field_position_4_23_appinfo))
      .addField(new fieldObject().setAccessType("inputOutput").setName("orientation").setType("SFRotation").setAppinfo(this.field_orientation_4_24_appinfo))
      .addField(new fieldObject().setAccessType("inputOutput").setName("fieldOfView").setType("SFFloat").setAppinfo("pi/4"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo("input fraction drives interpolators"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_bind").setType("SFBool").setAppinfo("input event binds or unbinds this Camera"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("bindTime").setType("SFTime").setAppinfo("output event indicates when this Camera is bound"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("isBound").setType("SFBool").setAppinfo("output event indicates whether this Camera is bound or unbound"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("nearClipPlane").setType("SFFloat").setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("farClipPlane").setType("SFFloat").setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("shots").setType("MFNode").setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("headlight").setType("SFBool").setAppinfo("Whether camera headlight is on or off"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("headlightColor").setType("SFColor").setAppinfo("Camera headlight color"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("headlightIntensity").setType("SFFloat").setAppinfo("Camera headlight intensity"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("filterColor").setType("SFColor").setAppinfo("Camera filter color that modifies virtual lens capture"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("filterTransparency").setType("SFFloat").setAppinfo("Camera filter transparency that modifies virtual lens capture"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("upVector").setType("SFVec3f").setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("fStop").setType("SFFloat").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("focusDistance").setType("SFFloat").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("isActive").setType("SFBool").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("totalDuration").setType("SFTime").setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("offlineRender").setType("SFNode").setAppinfo("OfflineRender node"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields "))
    .addComments(" =============== CameraShot ============== ")
    .addChild(new ExternProtoDeclareObject().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot").setUrl(new MFStringObject("\"CameraPrototypes.x3d#CameraShot\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot\" \"CameraPrototypes.wrl#CameraShot\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("Text description to be displayed for this CameraShot"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setAppinfo("Whether this CameraShot can be activated"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("moves").setType("MFNode").setAppinfo("Set of CameraMovement nodes")
        .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialPosition").setType("SFVec3f").setAppinfo("Setup to reinitialize camera position for this shot"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialOrientation").setType("SFRotation").setAppinfo("Setup to reinitialize camera rotation for this shot"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialAimPoint").setType("SFVec3f").setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialFieldOfView").setType("SFFloat").setAppinfo("pi/4"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialFStop").setType("SFFloat").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("initialFocusDistance").setType("SFFloat").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("shotDuration").setType("SFTime").setAppinfo("Subtotal duration of contained CameraMovement move durations"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("isActive").setType("SFBool").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== CameraMovement ============== ")
    .addChild(new ExternProtoDeclareObject().setName("CameraMovement").setAppinfo("CameraMovement defines a single camera movement animation").setUrl(new MFStringObject("\"CameraPrototypes.x3d#CameraMovement\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement\" \"CameraPrototypes.wrl#CameraMovement\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("Text description to be displayed for this CameraMovement"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setAppinfo("Whether this CameraMovement can be activated"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("duration").setType("SFFloat").setAppinfo("Duration in seconds for this move"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalPosition").setType("SFVec3f").setAppinfo("Goal camera position for this move"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalOrientation").setType("SFRotation").setAppinfo("Goal camera rotation for this move"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("tracking").setType("SFBool").setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalAimPoint").setType("SFVec3f").setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalFieldOfView").setType("SFFloat").setAppinfo("Goal fieldOfView for this move"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalFStop").setType("SFFloat").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("goalFocusDistance").setType("SFFloat").setAppinfo("Distance to focal plane of sharpest focus"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("isActive").setType("SFBool").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setAppinfo("enable console output to trace script computations and prototype progress")))
    .addComments(" =============== OfflineRender ============== ")
    .addChild(new ExternProtoDeclareObject().setName("OfflineRender").setAppinfo(this.ExternProtoDeclare_OfflineRender_3_72_appinfo).setUrl(new MFStringObject("\"CameraPrototypes.x3d#OfflineRender\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender\" \"CameraPrototypes.wrl#OfflineRender\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("Text description to be displayed for this OfflineRender"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setAppinfo("Whether this OfflineRender can be activated"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("frameRate").setType("SFFloat").setAppinfo("Frames per second recorded for this rendering"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("frameSize").setType("SFVec2f").setAppinfo("Size of frame in number of pixels width and height"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("pixelAspectRatio").setType("SFFloat").setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_startTime").setType("SFTime").setAppinfo("Begin render operation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("progress").setType("SFFloat").setAppinfo("Progress performing render operation (0..1)"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("renderCompleteTime").setType("SFTime").setAppinfo("Render operation complete"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("movieFormat").setType("MFString").setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("imageFormat").setType("MFString").setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setAppinfo("enable console output to trace script computations and prototype progress"))
      .addComments(" TODO non-photorealistic rendering (NPR) parameters "))
    .addComments(" =============== Lights, camera, action! ============== ")
    .addChild(new DirectionalLightObject().setDirection(0.0,-1.0,0.0).setIntensity(0.8).setGlobal(true))
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\" \"FLY\" \"ANY\"")))
    .addChild(new ViewpointObject().setDescription("Camera test scene entry view").setPosition(0.0,2.0,12.0))
    .addChild(new ViewpointObject().setDescription("Camera test scene from above").setPosition(0.0,150.0,0.0).setOrientation(1.0,0.0,0.0,-1.57079))
    .addComments(" Keep prototype instances in same file while developing, then move later ")
    .addComments(" We will create examples matching those in the paper ")
    .addComments(" =============== Camera.SimpleShotsTest ============== ")
    .addChild(new ProtoInstanceObject("Camera.SimpleShotsTest", "Camera").setDEF("Camera.SimpleShotsTest").setName("Camera")
      .addFieldValue(new fieldValueObject().setName("description").setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt"))
      .addFieldValue(new fieldValueObject().setName("headlight").setValue("true"))
      .addFieldValue(new fieldValueObject().setName("position").setValue("-4 4 10"))
      .addFieldValue(new fieldValueObject().setName("shots")
        .addChild(new ProtoInstanceObject("Zoom", "CameraShot").setDEF("Zoom").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Zoom"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-50 1 -10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom In"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -15"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Zoom Out"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-50 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild(new ProtoInstanceObject("Dolly", "CameraShot").setDEF("Dolly").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Dolly"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-40 1 -10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("DollyMove1", "CameraMovement").setDEF("DollyMove1").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Right to Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-45 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Dolly from Left to Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-40 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-40 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild(new ProtoInstanceObject("Pan", "CameraShot").setDEF("Pan").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Simple shot of Camera Pan left right and back to center"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-30 1 -10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("PanLeft", "CameraMovement").setDEF("PanLeft").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("2"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0.4")))
            .addChild(new ProtoInstanceObject("PanRight", "CameraMovement").setDEF("PanRight").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Pan Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 -0.4")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pan back to Center"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("2"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("2"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-30 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild(new ProtoInstanceObject("CameraBoom", "CameraShot").setDEF("CameraBoom").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-20 1 -10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("CameraBoomUp", "CameraMovement").setDEF("CameraBoomUp").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Up"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 5 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject("BoomDown", "CameraMovement").setDEF("BoomDown").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Boom Down"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))
            .addChild(new ProtoInstanceObject("BoomPause", "CameraMovement").setDEF("BoomPause").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("2"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-20 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0")))))
        .addChild(new ProtoInstanceObject("CameraTilt", "CameraShot").setDEF("CameraTilt").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("-10 1 -10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 0 1 0"))
          .addFieldValue(new fieldValueObject().setName("traceEnabled").setValue("true"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0")))
            .addChild(new ProtoInstanceObject("TiltDown", "CameraMovement").setDEF("TiltDown").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Left"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0.785")))
            .addChild(new ProtoInstanceObject("TiltPause", "CameraMovement").setDEF("TiltPause").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0.785")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Right"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 -0.785")))
            .addChild(new ProtoInstanceObject().setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Pause"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 -0.785")))
            .addChild(new ProtoInstanceObject("TiltReset", "CameraMovement").setDEF("TiltReset").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Camera Tilt Reset"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("1"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("-10 1 -10"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0")))
            .addChild(new ProtoInstanceObject("TiltUp", "CameraMovement").setDEF("TiltUp").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("Return to home"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("2"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("0 2 12"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 0 1 0")))))))
    .addChild(new GroupObject("AnimationGroup.SimpleShots")
      .addChild(new TimeSensorObject("CameraTimer.SimpleShots"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("totalDuration").setToNode("CameraTimer.SimpleShots").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTEObject().setFromNode("CameraTimer.SimpleShots").setFromField("fraction_changed").setToNode("Camera.SimpleShotsTest").setToField("set_fraction"))
      .addChild(new TransformObject("Trigger.SimpleShots").setTranslation(-4.0,4.0,0.0)
        .addChild(new BooleanFilterObject("TextTouchActive.SimpleShotsFilter"))
        .addChild(new TouchSensorObject("TextTouch.SimpleShots").setDescription("touch to animate Camera SimpleShotsTest"))
        .addChild(new ROUTEObject().setFromNode("TextTouchActive.SimpleShotsFilter").setFromField("inputTrue").setToNode("Camera.SimpleShotsTest").setToField("set_bind"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.SimpleShots").setFromField("isActive").setToNode("TextTouchActive.SimpleShotsFilter").setToField("set_boolean"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.SimpleShots").setFromField("touchTime").setToNode("CameraTimer.SimpleShots").setToField("startTime"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"Click to animate\" \"SimpleShotsTest\""))
            .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject("ArtDeco5").setShininess(0.01).setSpecularColor(0.072727,0.021705,0.010732).setAmbientIntensity(0.24).setDiffuseColor(0.945455,0.318988,0.321717)
              .addComments(" Universal Media Library: ArtDeco 5 "))))
        .addComments(" Simplify intersection test for user selecting text ")
        .addChild(new ShapeObject("TransparentBox")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(1)))
          .setGeometry(new BoxObject().setSize(6.0,2.0,0.0001)))))
    .addChild(new GroupObject("SimpleShotsTargets")
      .addChild(new TransformObject("TargetBoxZoom").setTranslation(-50.0,1.0,-20.0)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/CameraMoveZoom.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png\"")))))
        .addChild(new TransformObject().setTranslation(0.0,2.0,0.0)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject("\"Zoom in, out\""))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxDolly").setTranslation(-40.0,1.0,-20.0)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/CameraMoveDolly.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png\"")))))
        .addChild(new TransformObject().setTranslation(0.0,2.0,0.0)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject("\"Dolly left, right\""))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxPan").setTranslation(-30.0,1.0,-20.0)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/CameraMovePan.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png\"")))))
        .addChild(new TransformObject().setTranslation(0.0,2.0,0.0)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject("\"Pan left, right\""))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxBoom").setTranslation(-20.0,1.0,-20.0)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/CameraMoveBoom.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png\"")))))
        .addChild(new TransformObject().setTranslation(0.0,2.0,0.0)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject("\"Boom up, down\""))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))))
      .addChild(new TransformObject("TargetBoxTilt").setTranslation(-10.0,1.0,-20.0)
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/CameraMoveTilt.png\" \"https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png\"")))))
        .addChild(new TransformObject().setTranslation(0.0,2.0,0.0)
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject("\"Tilt left, right\""))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject()))))))
    .addComments(" =============== Camera.AimPointTest ============== ")
    .addChild(new ProtoInstanceObject("Camera.AimPointTest", "Camera").setDEF("Camera.AimPointTest").setName("Camera")
      .addFieldValue(new fieldValueObject().setName("description").setValue("AimPointTest for moving camera tracking moving target"))
      .addFieldValue(new fieldValueObject().setName("position").setValue("4 4 10"))
      .addFieldValue(new fieldValueObject().setName("shots")
        .addChild(new ProtoInstanceObject("Shot5", "CameraShot").setDEF("Shot5").setName("CameraShot")
          .addFieldValue(new fieldValueObject().setName("description").setValue("#3 Tracking shot"))
          .addFieldValue(new fieldValueObject().setName("initialPosition").setValue("6 6 10"))
          .addFieldValue(new fieldValueObject().setName("initialOrientation").setValue("0 1 0 0"))
          .addFieldValue(new fieldValueObject().setName("moves")
            .addChild(new ProtoInstanceObject("MoveAimPoint3.1", "CameraMovement").setDEF("MoveAimPoint3.1").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.1 moving BoxPath"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("8"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("6 6 10"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("MoveAimPoint3.2", "CameraMovement").setDEF("MoveAimPoint3.2").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.2 pan right while tracking"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("8"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("40 6 12"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("MoveAimPoint3.3", "CameraMovement").setDEF("MoveAimPoint3.3").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.3 boom up while tracking"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("3"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("40 20 13"))
              .addComments(" goalAimPoint modified by ROUTE to match moving Box "))
            .addChild(new ProtoInstanceObject("MoveAimPoint3.4", "CameraMovement").setDEF("MoveAimPoint3.4").setName("CameraMovement")
              .addFieldValue(new fieldValueObject().setName("description").setValue("AimPoint 3.4 restore camera back to home"))
              .addFieldValue(new fieldValueObject().setName("tracking").setValue("true"))
              .addFieldValue(new fieldValueObject().setName("duration").setValue("5"))
              .addFieldValue(new fieldValueObject().setName("goalPosition").setValue("4 4 10"))
              .addFieldValue(new fieldValueObject().setName("goalAimPoint").setValue("4 4 0"))
              .addFieldValue(new fieldValueObject().setName("goalOrientation").setValue("0 1 0 0"))
              .addComments(" can test tracking or not using these values "))))))
    .addChild(new GroupObject("AnimationGroup.AimPointTest")
      .addChild(new TimeSensorObject("CameraTimer.AimPointTest"))
      .addComments(" initialize clock to match totalDuration of combined Shot Moves ")
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("totalDuration").setToNode("CameraTimer.AimPointTest").setToField("cycleInterval"))
      .addComments(" TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator ")
      .addChild(new ROUTEObject().setFromNode("CameraTimer.AimPointTest").setFromField("fraction_changed").setToNode("Camera.AimPointTest").setToField("set_fraction"))
      .addChild(new TransformObject("Trigger.AimPointTest").setTranslation(4.0,4.0,0.0)
        .addChild(new BooleanFilterObject("TextTouchActive.AimPointFilter"))
        .addChild(new TouchSensorObject("TextTouch.AimPointTest").setDescription("touch to animate Camera AimPointTest"))
        .addChild(new ROUTEObject().setFromNode("TextTouchActive.AimPointFilter").setFromField("inputTrue").setToNode("Camera.AimPointTest").setToField("set_bind"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.AimPointTest").setFromField("isActive").setToNode("TextTouchActive.AimPointFilter").setToField("set_boolean"))
        .addChild(new ROUTEObject().setFromNode("TextTouch.AimPointTest").setFromField("touchTime").setToNode("CameraTimer.AimPointTest").setToField("startTime"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"Click to animate\" \"AimPointTest\""))
            .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setUSE("ArtDeco5"))))
        .addChild(new ShapeObject().setUSE("TransparentBox"))))
    .addComments(" TODO build a test once implemented ")
    .addChild(new ProtoInstanceObject().setName("OfflineRender"))
    .addComments(" =============== animate a camera shape to visualize view changes ============== ")
    .addChild(new TransformObject("CameraShapeTransform").setTranslation(0.0,0.5,0.0)
      .addComments(" move CameraShape using active Camera ")
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("position_changed").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("position").setToNode("CameraShapeTransform").setToField("translation"))
      .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("orientation_changed").setToNode("CameraShapeTransform").setToField("rotation"))
      .addChild(new TransformObject("CameraOffsetTransform").setTranslation(0.0,0.0,0.25)
        .addChild(new TouchSensorObject("CameraShapeTouched"))
        .addChild(new InlineObject("CameraShape").setUrl(new MFStringObject("\"CameraShape.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d\"")))
        .addChild(new ShapeObject("SightLine")
          .setGeometry(new IndexedLineSetObject().setCoordIndex(Java.to([0,1], Java.type("int[]")))
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,0.0,-100.0], Java.type("float[]"))))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setEmissiveColor(0.8,0.8,0.4)))))
      .addComments(" Display frustum to show camera view within the scene, toggled by user selecting CameraShape ")
      .addChild(new ExternProtoDeclareObject().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new MFStringObject("\"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum\" \"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum\""))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("ViewpointNode").setType("SFNode").setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("NavigationInfoNode").setType("SFNode").setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("visible").setType("SFBool").setAppinfo("whether or not frustum geometry is rendered"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("lineColor").setType("SFColor").setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("frustumColor").setType("SFColor").setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("transparency").setType("SFFloat").setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("aspectRatio").setType("SFFloat").setAppinfo("assumed ratio height/width, default value 0.75"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("trace").setType("SFBool").setAppinfo("debug support, default false")))
      .addChild(new ProtoInstanceObject("ViewFrustumNode", "ViewFrustum").setDEF("ViewFrustumNode").setName("ViewFrustum")
        .addFieldValue(new fieldValueObject().setName("ViewpointNode")
          .addChild(new ViewpointObject("FrustumViewpoint").setDescription("viewpoint for ViewFrustum").setPosition(0.0,0.0,0.0)))
        .addFieldValue(new fieldValueObject().setName("NavigationInfoNode")
          .addChild(new NavigationInfoObject("TestNavigationInfo").setTransitionType(new MFStringObject("\"ANIMATE\"")).setVisibilityLimit(100)))
        .addFieldValue(new fieldValueObject().setName("visible").setValue("false"))
        .addFieldValue(new fieldValueObject().setName("lineColor").setValue("0.9 0.9 0.9"))
        .addFieldValue(new fieldValueObject().setName("frustumColor").setValue("0.8 0.8 0.8"))
        .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.95")))
      .addChild(new BooleanToggleObject("ViewFrustumToggle"))
      .addChild(new ROUTEObject().setFromNode("CameraShapeTouched").setFromField("isActive").setToNode("ViewFrustumToggle").setToField("set_boolean"))
      .addChild(new ROUTEObject().setFromNode("ViewFrustumToggle").setFromField("toggle").setToNode("ViewFrustumNode").setToField("set_visible")))
    .addComments(" =============== add checkerboard, axes and other things to look at while animating ============== ")
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(Java.to([0.282353,0.380392,0.470588], Java.type("float[]")))))
    .addChild(new TransformObject().setRotation(1.0,0.0,0.0,-1.57079).setScale(10.0,10.0,10.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setAmbientIntensity(0.01).setShininess(0.05).setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry(new IndexedFaceSetObject().setColorPerVertex(false).setNormalPerVertex(false).setSolid(false).setColorIndex(Java.to([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0], Java.type("int[]"))).setCoordIndex(this.IndexedFaceSet_5_384_coordIndex)
          .setCoord(new CoordinateObject().setPoint(this.Coordinate_6_384_point))
          .setColor(new ColorObject().setColor(new MFColorObject(Java.to([0.435294,0.741176,0.0,0.0,0.560784,0.580392], Java.type("float[]"))))))))
    .addChild(new TransformObject().setTranslation(0.0,0.25,0.0).setScale(3.0,3.0,3.0)
      .addChild(new InlineObject("CoordinateAxes").setUrl(new MFStringObject("\"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"../../Savage/Tools/Authoring/CoordinateAxes.x3d\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d\" \"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"../../Savage/Tools/Authoring/CoordinateAxes.wrl\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl\" \"https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl\""))))
    .addChild(new TransformObject("MovingBoxTransform")
      .addChild(new PositionInterpolatorObject("BoxPath").setKeyValue(new MFVec3fObject(Java.to([-5.0,1.0,5.0,45.0,1.0,5.0,45.0,1.0,-45.0,-5.0,1.0,-45.0,-5.0,1.0,5.0], Java.type("float[]")))).setKey(Java.to([0.0,0.25,0.5,0.75,1.0], Java.type("float[]"))))
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
          .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"../earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\""))))))
    .addComments(" ================ CrossHair visualization for center of screen ================ ")
    .addChild(new ExternProtoDeclareObject().setName("CrossHair").setAppinfo(this.ExternProtoDeclare_CrossHair_3_404_appinfo).setUrl(new MFStringObject("\"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\""))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("enabled").setType("SFBool").setAppinfo("whether CrissHair orititype is enabled or not"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_enabled").setType("SFBool").setAppinfo("control whether enabled/disabled"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("markerColor").setType("SFColor").setAppinfo("color of CrossHair marker"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setAppinfo("size of CrossHair in meters"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("positionOffsetFromCamera").setType("SFVec3f").setAppinfo("distance in front of HUD viewpoint")))
    .addChild(new ProtoInstanceObject("CrossHairInstance", "CrossHair").setDEF("CrossHairInstance").setName("CrossHair")
      .addFieldValue(new fieldValueObject().setName("enabled").setValue("true"))
      .addFieldValue(new fieldValueObject().setName("markerColor").setValue("1 0.5 0"))
      .addFieldValue(new fieldValueObject().setName("scale").setValue("1 1 1"))
      .addFieldValue(new fieldValueObject().setName("positionOffsetFromCamera").setValue("0 0 -6")))
    .addComments(" turn on CrossHairInstance when animated camera viewpoints are bound ")
    .addChild(new ROUTEObject().setFromNode("Camera.SimpleShotsTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addChild(new ROUTEObject().setFromNode("Camera.AimPointTest").setFromField("isBound").setToNode("CrossHairInstance").setToField("set_enabled"))
    .addComments(" turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> ")
    .addComments(" =============== TODO Launch Prototype Example ============== ")
    .addChild(new AnchorObject().setDescription("launch CameraExample scene").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"CameraExample.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d\" \"CameraExample.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl\""))
      .addChild(new TransformObject().setTranslation(0.0,-3.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"CameraPrototype\" \"defines a prototype\" \"\" \"Click on this text to see\" \"CameraExample scene\""))
            .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.5)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.2)))))));
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		print ("CameraExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new CameraExamples().main();