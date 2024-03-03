load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement. </p>
 <p> Related links: <a href="../../../development/CameraPrototypes.java">CameraPrototypes.java</a> source, <a href="../../../development/CameraPrototypesIndex.html" target="_top">CameraPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman and Jeff Weekley
 */

function CameraPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
CameraPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #16, 31 total values */
	this.ProtoDeclare_Camera_3_16_appinfo = new SFString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #17, 16 total values */
	this.field_position_5_17_appinfo = new SFString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #18, 16 total values */
	this.field_orientation_5_18_appinfo = new SFString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #174, 14 total values */
	this.ProtoDeclare_CameraMovement_3_174_appinfo = new SFString("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #215, 20 total values */
	this.ProtoDeclare_OfflineRender_3_215_appinfo = new SFString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).");

	/** Large attribute array: Text string field, scene-graph level=6, element #254, 14 total values */
	this.Text_6_254_string = new MFString(new MFString("\"CameraPrototypes.x3d\" \"defines multiple prototype nodes\" \"\" \"Click on this text to see\" \"CameraExamples.x3d scene\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.2")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("CameraPrototypes.x3d"))
    .addMeta(new meta().setName("description").setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new meta().setName("created").setContent("16 March 2009"))
    .addMeta(new meta().setName("modified").setContent("25 October 2016"))
    .addMeta(new meta().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
    .addMeta(new meta().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
    .addMeta(new meta().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
    .addMeta(new meta().setName("reference").setContent("CameraExamples.x3d"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
    .addMeta(new meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" =============== Camera ============== ")
    .addChild(new ProtoDeclare().setName("Camera").setAppinfo(this.ProtoDeclare_Camera_3_16_appinfo)
      .setProtoInterface(new ProtoInterface()
        .addComments(" Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields ")
        .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this Camera"))
        .addField(new field().setName("position").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 10").setAppinfo(this.field_position_5_17_appinfo))
        .addField(new field().setName("orientation").setType("SFRotation").setAccessType("inputOutput").setValue("0 0 1 0").setAppinfo(this.field_orientation_5_18_appinfo))
        .addField(new field().setName("fieldOfView").setType("SFFloat").setAccessType("inputOutput").setValue("0.7854").setAppinfo("pi/4"))
        .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly").setAppinfo("input fraction drives interpolators"))
        .addField(new field().setName("set_bind").setType("SFBool").setAccessType("inputOnly").setAppinfo("input event binds or unbinds this Camera"))
        .addField(new field().setName("bindTime").setType("SFTime").setAccessType("outputOnly").setAppinfo("output event indicates when this Camera is bound"))
        .addField(new field().setName("isBound").setType("SFBool").setAccessType("outputOnly").setAppinfo("output event indicates whether this Camera is bound or unbound"))
        .addField(new field().setName("nearClipPlane").setType("SFFloat").setAccessType("inputOutput").setValue("0.25").setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"))
        .addField(new field().setName("farClipPlane").setType("SFFloat").setAccessType("inputOutput").setValue("0.0").setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"))
        .addField(new field().setName("shots").setType("MFNode").setAccessType("inputOutput").setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
          .addComments(" initialization nodes (if any) go here "))
        .addField(new field().setName("headlight").setType("SFBool").setAccessType("inputOutput").setValue("true").setAppinfo("Whether camera headlight is on or off"))
        .addField(new field().setName("headlightColor").setType("SFColor").setAccessType("inputOutput").setValue("1 1 1").setAppinfo("Camera headlight color"))
        .addField(new field().setName("headlightIntensity").setType("SFFloat").setAccessType("inputOutput").setValue("1").setAppinfo("Camera headlight intensity"))
        .addField(new field().setName("filterColor").setType("SFColor").setAccessType("inputOutput").setValue("1 1 1").setAppinfo("Camera filter color that modifies virtual lens capture"))
        .addField(new field().setName("filterTransparency").setType("SFFloat").setAccessType("inputOutput").setValue("1").setAppinfo("Camera filter transparency that modifies virtual lens capture"))
        .addField(new field().setName("upVector").setType("SFVec3f").setAccessType("inputOutput").setValue("0 1 0").setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
        .addField(new field().setName("fStop").setType("SFFloat").setAccessType("inputOutput").setValue("5.6").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("focusDistance").setType("SFFloat").setAccessType("inputOutput").setValue("10").setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("totalDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
        .addField(new field().setName("offlineRender").setType("SFNode").setAccessType("inputOutput").setAppinfo("OfflineRender node")
          .addComments(" initialization node (if any) goes here "))
        .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("enable console output to trace script computations and prototype progress")))
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
        .addChild(new PositionInterpolator("CameraPositionInterpolator").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
        .addChild(new OrientationInterpolator("CameraOrientationInterpolator").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
        .addChild(new ROUTE().setFromNode("CameraPositionInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("position"))
        .addChild(new ROUTE().setFromNode("CameraOrientationInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("orientation"))
        .addChild(new Script("CameraScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize () // CameraScript" + "\n" + 
"{" + "\n" + 
"//  tracePrint ('initialize start...');" + "\n" + 
"\n" + 
"    NavInfoNode.avatarSize[0]   = nearClipPlane;" + "\n" + 
"\n" + 
"    // remaining setups deferred to invocation of checkShots() method" + "\n" + 
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization" + "\n" + 
"    alwaysPrint ('initialize complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function checkShots (eventValue)" + "\n" + 
"{" + "\n" + 
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');" + "\n" + 
"\n" + 
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes" + "\n" + 
"    totalDuration= 0;" + "\n" + 
"    shotCount  = shots.length;" + "\n" + 
"    movesCount = 0;" + "\n" + 
"    for (i = 0; i < shotCount; i++) // shots index" + "\n" + 
"    {" + "\n" + 
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);" + "\n" + 
"       movesCount   += shots[i].moves.length;" + "\n" + 
"       totalDuration = totalDuration + shots[i].shotDuration;" + "\n" + 
"       if (shots[i].moves.length == 0)" + "\n" + 
"       {" + "\n" + 
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');" + "\n" + 
"       }" + "\n" + 
"    }" + "\n" + 
"    // size checks before proceeding" + "\n" + 
"    if (shotCount == 0)" + "\n" + 
"    {" + "\n" + 
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');" + "\n" + 
"       return;" + "\n" + 
"    }" + "\n" + 
"    else if (movesCount == 0)" + "\n" + 
"    {" + "\n" + 
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');" + "\n" + 
"       return;" + "\n" + 
"    }" + "\n" + 
"    else if (totalDuration == 0)" + "\n" + 
"    {" + "\n" + 
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');" + "\n" + 
"       return;" + "\n" + 
"    }" + "\n" + 
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);" + "\n" + 
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);" + "\n" + 
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');" + "\n" + 
"\n" + 
"    // compute interpolators" + "\n" + 
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation" + "\n" + 
"    for (i = 0; i < shotCount; i++) // shots index" + "\n" + 
"    {" + "\n" + 
"        if (i==0) // initial entries" + "\n" + 
"        {" + "\n" + 
"           key[0]                   = 0.0; // no previous move" + "\n" + 
"           keyValuePosition[0]      = shots[i].initialPosition;" + "\n" + 
"           keyValueOrientation[0]   = shots[i].initialOrientation;" + "\n" + 
"        }" + "\n" + 
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move" + "\n" + 
"        {" + "\n" + 
"           key[k+1]                 = key[k]; // start from end from previous move" + "\n" + 
"           keyValuePosition[k+1]    = shots[i].initialPosition;" + "\n" + 
"           keyValueOrientation[k+1] = shots[i].initialOrientation;" + "\n" + 
"           k++;" + "\n" + 
"        }" + "\n" + 
"        tracePrint (shots[i].description);" + "\n" + 
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);" + "\n" + 
"\n" + 
"        for (j = 0; j < shots[i].moves.length; j++) // moves index" + "\n" + 
"        {" + "\n" + 
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime" + "\n" + 
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime" + "\n" + 
"            //  tracePrint ('durationFloat=' + durationFloat);" + "\n" + 
"            key[k+1]               = key[k] + (durationFloat / totalDuration);" + "\n" + 
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;" + "\n" + 
"            if (!animated)" + "\n" + 
"            {" + "\n" + 
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;" + "\n" + 
"            }" + "\n" + 
"            else" + "\n" + 
"            {" + "\n" + 
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)" + "\n" + 
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions" + "\n" + 
"\n" + 
"                // test if difference vector is zero, if so maintain previous rotation" + "\n" + 
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();" + "\n" + 
"                if (shotVector.length() >= 0)" + "\n" + 
"                {" + "\n" + 
"                    // default view direction is along -Z axis" + "\n" + 
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);" + "\n" + 
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;" + "\n" + 
"                }" + "\n" + 
"                else // note (k > 0)" + "\n" + 
"                {" + "\n" + 
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change" + "\n" + 
"                }" + "\n" + 
"\n" + 
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());" + "\n" + 
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());" + "\n" + 
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());" + "\n" + 
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());" + "\n" + 
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());" + "\n" + 
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');" + "\n" + 
"            }" + "\n" + 
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation" + "\n" + 
"\n" + 
"            // check animated parameter:  set true if any of moves are tracking moves" + "\n" + 
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true" + "\n" + 
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);" + "\n" + 
"\n" + 
"            // intermediate trace" + "\n" + 
"            tracePrint ('                key=' + key);" + "\n" + 
"            tracePrint ('   keyValuePosition=' + keyValuePosition);" + "\n" + 
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);" + "\n" + 
"            tracePrint ('- ' + shots[i].moves[j].description);" + "\n" + 
"        }" + "\n" + 
"    }" + "\n" + 
"    tracePrint ('                key=' + key);" + "\n" + 
"    tracePrint ('   keyValuePosition=' + keyValuePosition);" + "\n" + 
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);" + "\n" + 
"    if (key.length != keyValuePosition.length)" + "\n" + 
"    {" + "\n" + 
"      alwaysPrint ('warning: internal error during array construction, ' +" + "\n" + 
"                  'key.length=' + key.length + ' must equal ' +" + "\n" + 
"                  'keyValuePosition.length=' + keyValuePosition.length);" + "\n" + 
"    }" + "\n" + 
"    if (key.length != keyValueOrientation.length)" + "\n" + 
"    {" + "\n" + 
"      alwaysPrint ('warning: internal error during array construction, ' +" + "\n" + 
"                  'key.length=' + key.length + ' must equal ' +" + "\n" + 
"                  'keyValueOrientation.length=' + keyValueOrientation.length);" + "\n" + 
"    }" + "\n" + 
"    if (key.length != (shotCount + movesCount))" + "\n" + 
"    {" + "\n" + 
"      alwaysPrint ('warning: internal error during array construction, ' +" + "\n" + 
"                  'key.length=' + key.length + ' must equal ' +" + "\n" + 
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));" + "\n" + 
"    }" + "\n" + 
"    tracePrint ('           animated=' + animated);" + "\n" + 
"    // set node values" + "\n" + 
"    CameraPI.key      = key;" + "\n" + 
"    CameraOI.key      = key;" + "\n" + 
"    CameraPI.keyValue = keyValuePosition;" + "\n" + 
"    CameraOI.keyValue = keyValueOrientation;" + "\n" + 
"\n" + 
"    if (!animated) // output results" + "\n" + 
"    {" + "\n" + 
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');" + "\n" + 
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');" + "\n" + 
"    }" + "\n" + 
"    tracePrint ('checkShots() complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function stripBrackets (fieldArray)" + "\n" + 
"{" + "\n" + 
"    // some browsers add brackets to array output strings, this function strips them" + "\n" + 
"    outputString = '';" + "\n" + 
"    for (i = 0; i < fieldArray.length; i++)" + "\n" + 
"    {" + "\n" + 
"       outputString += fieldArray[i].toString();" + "\n" + 
"       if (i < fieldArray.length - 1) outputString += ' ';" + "\n" + 
"    }" + "\n" + 
"    return outputString;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field" + "\n" + 
"{" + "\n" + 
"   // traceEnabled = false;  // for testing purposes" + "\n" + 
"\n" + 
"   // if Camera is being animated, immediately recompute interpolator settings" + "\n" + 
"   if (animated) checkShots (true);" + "\n" + 
"\n" + 
"   // trace progress on console with reduced output frequency" + "\n" + 
"   if (frameCount == 0)" + "\n" + 
"   {" + "\n" + 
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);" + "\n" + 
"      startTime      = timestamp;" + "\n" + 
"      priorTraceTime = timestamp;" + "\n" + 
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());" + "\n" + 
"\n" + 
"      if (animated) // output results" + "\n" + 
"      {" + "\n" + 
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());" + "\n" + 
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');" + "\n" + 
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');" + "\n" + 
"      }" + "\n" + 
"   }" + "\n" + 
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval" + "\n" + 
"   {" + "\n" + 
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());" + "\n" + 
"      priorTraceTime = timestamp;" + "\n" + 
"\n" + 
"      if (animated) // output results" + "\n" + 
"      {" + "\n" + 
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());" + "\n" + 
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');" + "\n" + 
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');" + "\n" + 
"      }" + "\n" + 
"   }" + "\n" + 
"   if (eventValue == 0)" + "\n" + 
"   {" + "\n" + 
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored" + "\n" + 
"      frameCount++;" + "\n" + 
"   }" + "\n" + 
"   else if (eventValue == 1)" + "\n" + 
"   {" + "\n" + 
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());" + "\n" + 
"      if (animated) // output results" + "\n" + 
"      {" + "\n" + 
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());" + "\n" + 
"      }" + "\n" + 
"      alwaysPrint ('Animation loop complete.');" + "\n" + 
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally" + "\n" + 
"   }" + "\n" + 
"   else" + "\n" + 
"   {" + "\n" + 
"      frameCount++;" + "\n" + 
"   }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_bind (eventValue) // input event received for inputOnly field" + "\n" + 
"{" + "\n" + 
"   // need to ensure CameraShot nodes are properly initialized" + "\n" + 
"   if (initialized == false)" + "\n" + 
"   {" + "\n" + 
"      checkShots (true);" + "\n" + 
"      initialized = true;" + "\n" + 
"   }" + "\n" + 
"   if (eventValue)" + "\n" + 
"   {" + "\n" + 
"       tracePrint ('Camera has been bound');" + "\n" + 
"   }" + "\n" + 
"   else" + "\n" + 
"   {" + "\n" + 
"       tracePrint ('Camera has been unbound');" + "\n" + 
"   }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_description (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    description = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_position (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    position = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_orientation (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    orientation = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fieldOfView (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    fieldOfView = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_nearClipPlane (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    nearClipPlane = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_farClipPlane (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    farClipPlane = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_shots (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    shots = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_filterColor (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    filterColor = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_filterTransparency (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    filterTransparency = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_upVector (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    upVector = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fStop (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    fStop = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_focusDistance (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    focusDistance = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_offlineRender (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    offlineRender = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    key = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValuePosition (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    keyValuePosition = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    keyValueOrientation = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_animated (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    animated = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function tracePrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) alwaysPrint (outputValue);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputValue)" + "\n" + 
"{" + "\n" + 
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies" + "\n" + 
"    var outputString = outputValue.toString(); // utility function according to spec" + "\n" + 
"    if (outputString == null) outputString = outputValue; // direct cast" + "\n" + 
"\n" + 
"    if  (description.length > 0)" + "\n" + 
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');" + "\n" + 
"    else" + "\n" + 
"         Browser.print ('[Camera] ' + outputString + '\\n');" + "\n" + 
"}" + "\n")
          .addComments(" binding is controlled externally, all camera operations proceed the same regardless of whether bound or not ")
          .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this Camera"))
          .addField(new field().setName("position").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Camera position in local transformation frame"))
          .addField(new field().setName("orientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo("Camera rotation in local transformation frame"))
          .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly").setAppinfo("input fraction drives interpolators"))
          .addField(new field().setName("set_bind").setType("SFBool").setAccessType("inputOnly").setAppinfo("input event binds or unbinds this Camera"))
          .addField(new field().setName("fieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("pi/4"))
          .addField(new field().setName("nearClipPlane").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Vector distance to near clipping plane"))
          .addField(new field().setName("farClipPlane").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Vector distance to far clipping plane"))
          .addField(new field().setName("shots").setType("MFNode").setAccessType("inputOutput").setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
            .addComments(" initialization nodes (if any) go here "))
          .addField(new field().setName("filterColor").setType("SFColor").setAccessType("inputOutput").setAppinfo("Camera filter color that modifies virtual lens capture"))
          .addField(new field().setName("filterTransparency").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Camera filter transparency that modifies virtual lens capture"))
          .addField(new field().setName("upVector").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("upVector changes modify camera orientation (and possibly vice versa)"))
          .addField(new field().setName("fStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("focusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("totalDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"))
          .addField(new field().setName("offlineRender").setType("SFNode").setAccessType("inputOutput").setAppinfo("OfflineRender node")
            .addComments(" initialization node (if any) goes here "))
          .addField(new field().setName("ViewpointNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new Viewpoint()))
          .addField(new field().setName("NavInfoNode").setType("SFNode").setAccessType("initializeOnly").setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new NavigationInfo()))
          .addField(new field().setName("CameraPI").setType("SFNode").setAccessType("initializeOnly").setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new PositionInterpolator()))
          .addField(new field().setName("CameraOI").setType("SFNode").setAccessType("initializeOnly").setAppinfo("node reference to permit getting setting fields from within Script")
            .addChild(new OrientationInterpolator()))
          .addField(new field().setName("key").setType("MFFloat").setAccessType("inputOutput").setAppinfo("key array for interpolators"))
          .addField(new field().setName("keyValuePosition").setType("MFVec3f").setAccessType("inputOutput").setAppinfo("keyValue array for PositionInterpolator"))
          .addField(new field().setName("keyValueOrientation").setType("MFRotation").setAccessType("inputOutput").setAppinfo("keyValue array for OrientationInterpolator"))
          .addField(new field().setName("animated").setType("SFBool").setAccessType("inputOutput").setValue("false").setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"))
          .addField(new field().setName("initialized").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("perform checkShots() function once immediately after initialization"))
          .addField(new field().setName("shotCount").setType("SFInt32").setAccessType("initializeOnly").setValue("0").setAppinfo("how many CameraShot nodes are contained in shots array"))
          .addField(new field().setName("movesCount").setType("SFInt32").setAccessType("initializeOnly").setValue("0").setAppinfo("how many CameraMove nodes are contained in moves array"))
          .addField(new field().setName("frameCount").setType("SFFloat").setAccessType("initializeOnly").setValue("0").setAppinfo("how many frames were created in current loop"))
          .addField(new field().setName("startTime").setType("SFTime").setAccessType("initializeOnly").setValue("0").setAppinfo("holding variable"))
          .addField(new field().setName("priorTraceTime").setType("SFTime").setAccessType("initializeOnly").setValue("0").setAppinfo("holding variable"))
          .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
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
    .addChild(new ProtoDeclare().setName("CameraShot").setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraShot"))
        .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setValue("true").setAppinfo("Whether this CameraShot can be activated"))
        .addField(new field().setName("moves").setType("MFNode").setAccessType("inputOutput").setAppinfo("Set of CameraMovement nodes")
          .addComments(" initializing CameraMovement nodes are inserted here by scene author using ProtoInstance "))
        .addField(new field().setName("initialPosition").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 10").setAppinfo("Setup to reinitialize camera position for this shot"))
        .addField(new field().setName("initialOrientation").setType("SFRotation").setAccessType("inputOutput").setValue("0 0 1 0").setAppinfo("Setup to reinitialize camera rotation for this shot"))
        .addField(new field().setName("initialAimPoint").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0").setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
        .addField(new field().setName("initialFieldOfView").setType("SFFloat").setAccessType("inputOutput").setValue("0.7854").setAppinfo("pi/4"))
        .addField(new field().setName("initialFStop").setType("SFFloat").setAccessType("inputOutput").setValue("5.6").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("initialFocusDistance").setType("SFFloat").setAccessType("inputOutput").setValue("10").setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("shotDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Subtotal duration of contained CameraMovement move durations"))
        .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("CameraShotScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize () // CameraShotScript" + "\n" + 
"{" + "\n" + 
"//  tracePrint ('initialize start...');" + "\n" + 
"\n" + 
"    // compute shotDuration by summing durations from contained CameraMovement nodes" + "\n" + 
"    shotDuration = 0;" + "\n" + 
"    for (i = 0; i < moves.length; i++)" + "\n" + 
"    {" + "\n" + 
"        shotDuration = shotDuration + moves[i].duration;" + "\n" + 
"    }" + "\n" + 
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');" + "\n" + 
"\n" + 
"//  tracePrint ('... initialize() complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_description (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    description = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_enabled (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    enabled = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_moves (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    moves = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialPosition (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialPosition = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialOrientation (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialOrientation = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialAimPoint (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialAimPoint = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialFieldOfView = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialFStop (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialFStop = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    initialFocusDistance = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    key = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValuePosition (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    keyValuePosition = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    keyValueOrientation = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive" + "\n" + 
"\n" + 
"function tracePrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) alwaysPrint (outputValue);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	// try to ensure outputValue is converted to string despite browser idiosyncracies" + "\n" + 
"    var outputString = outputValue.toString(); // utility function according to spec" + "\n" + 
"    if (outputString == null) outputString = outputValue; // direct cast" + "\n" + 
"\n" + 
"    if  (description.length > 0)" + "\n" + 
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');" + "\n" + 
"    else" + "\n" + 
"         Browser.print ('[CameraShot] ' + outputString + '\\n');" + "\n" + 
"}" + "\n")
          .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraShot"))
          .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this CameraShot can be activated"))
          .addField(new field().setName("moves").setType("MFNode").setAccessType("inputOutput").setAppinfo("Set of CameraMovement nodes")
            .addComments(" initialization nodes (if any) go here "))
          .addField(new field().setName("initialPosition").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Setup to reinitialize camera position for this shot"))
          .addField(new field().setName("initialOrientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo("Setup to reinitialize camera rotation for this shot"))
          .addField(new field().setName("initialAimPoint").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"))
          .addField(new field().setName("initialFieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("pi/4"))
          .addField(new field().setName("initialFStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("initialFocusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("shotDuration").setType("SFTime").setAccessType("outputOnly").setAppinfo("Subtotal duration of contained CameraMovement move durations"))
          .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
          .addField(new field().setName("key").setType("MFFloat").setAccessType("inputOutput").setAppinfo("key array for interpolators"))
          .addField(new field().setName("keyValuePosition").setType("MFVec3f").setAccessType("inputOutput").setAppinfo("keyValue array for PositionInterpolator"))
          .addField(new field().setName("keyValueOrientation").setType("MFRotation").setAccessType("inputOutput").setAppinfo("keyValue array for OrientationInterpolator"))
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
    .addChild(new ProtoDeclare().setName("CameraMovement").setAppinfo(this.ProtoDeclare_CameraMovement_3_174_appinfo)
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraMovement"))
        .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setValue("true").setAppinfo("Whether this CameraMovement can be activated"))
        .addField(new field().setName("duration").setType("SFFloat").setAccessType("inputOutput").setValue("0").setAppinfo("Duration in seconds for this move"))
        .addField(new field().setName("goalPosition").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 10").setAppinfo("Goal camera position for this move"))
        .addField(new field().setName("goalOrientation").setType("SFRotation").setAccessType("inputOutput").setValue("0 0 1 0").setAppinfo("Goal camera rotation for this move"))
        .addField(new field().setName("tracking").setType("SFBool").setAccessType("inputOutput").setValue("false").setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
        .addField(new field().setName("goalAimPoint").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0").setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
        .addField(new field().setName("goalFieldOfView").setType("SFFloat").setAccessType("inputOutput").setValue("0.7854").setAppinfo("Goal fieldOfView for this move"))
        .addField(new field().setName("goalFStop").setType("SFFloat").setAccessType("inputOutput").setValue("5.6").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
        .addField(new field().setName("goalFocusDistance").setType("SFFloat").setAccessType("inputOutput").setValue("10").setAppinfo("Distance to focal plane of sharpest focus"))
        .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
        .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events ")
        .addChild(new Script("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize () // CameraMovementScript" + "\n" + 
"{" + "\n" + 
"//  tracePrint ('initialize start...');" + "\n" + 
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +" + "\n" + 
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()" + "\n" + 
"                           );" + "\n" + 
"    if (duration < 0)" + "\n" + 
"    {" + "\n" + 
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');" + "\n" + 
"       duration = 0;" + "\n" + 
"    }" + "\n" + 
"    else if (duration == 0)" + "\n" + 
"    {" + "\n" + 
"       alwaysPrint ('warning: duration=0, nothing to do!');" + "\n" + 
"    }" + "\n" + 
"    tracePrint ('... initialize complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalAimPoint (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalAimPoint_changed = eventValue;" + "\n" + 
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());" + "\n" + 
"\n" + 
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_description (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    description = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_enabled (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    enabled = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_duration (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    duration = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalPosition (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalPosition = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalOrientation (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalOrientation = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_tracking (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    tracking = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalFieldOfView = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalFStop (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalFStop = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    goalFocusDistance = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive" + "\n" + 
"\n" + 
"function tracePrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) alwaysPrint (outputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function alwaysPrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	// try to ensure outputValue is converted to string despite browser idiosyncracies" + "\n" + 
"    var outputString = outputValue.toString(); // utility function according to spec" + "\n" + 
"    if (outputString == null) outputString = outputValue; // direct cast" + "\n" + 
"\n" + 
"    if  (description.length > 0)" + "\n" + 
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');" + "\n" + 
"    else" + "\n" + 
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');" + "\n" + 
"}" + "\n")
          .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this CameraMovement"))
          .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this CameraMovement can be activated"))
          .addField(new field().setName("duration").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Duration in seconds for this move"))
          .addField(new field().setName("goalPosition").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Goal camera position for this move"))
          .addField(new field().setName("goalOrientation").setType("SFRotation").setAccessType("inputOutput").setAppinfo("Goal camera rotation for this move"))
          .addField(new field().setName("tracking").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether or not camera direction is tracking towards the aimPoint"))
          .addField(new field().setName("goalAimPoint").setType("SFVec3f").setAccessType("inputOutput").setAppinfo("Goal aimPoint for this move, ignored if tracking=false"))
          .addField(new field().setName("goalFieldOfView").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Goal fieldOfView for this move"))
          .addField(new field().setName("goalFStop").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane"))
          .addField(new field().setName("goalFocusDistance").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Distance to focal plane of sharpest focus"))
          .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly").setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations"))
          .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
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
    .addChild(new ProtoDeclare().setName("OfflineRender").setAppinfo(this.ProtoDeclare_OfflineRender_3_215_appinfo)
      .setProtoInterface(new ProtoInterface()
        .addComments(" TODO non-photorealistic rendering (NPR) parameters ")
        .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this OfflineRender"))
        .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setValue("true").setAppinfo("Whether this OfflineRender can be activated"))
        .addField(new field().setName("frameRate").setType("SFFloat").setAccessType("inputOutput").setValue("30").setAppinfo("Frames per second recorded for this rendering"))
        .addField(new field().setName("frameSize").setType("SFVec2f").setAccessType("inputOutput").setValue("640 480").setAppinfo("Size of frame in number of pixels width and height"))
        .addField(new field().setName("pixelAspectRatio").setType("SFFloat").setAccessType("inputOutput").setValue("1.33").setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
        .addField(new field().setName("set_startTime").setType("SFTime").setAccessType("inputOnly").setAppinfo("Begin render operation"))
        .addField(new field().setName("progress").setType("SFFloat").setAccessType("outputOnly").setAppinfo("Progress performing render operation (0..1)"))
        .addField(new field().setName("renderCompleteTime").setType("SFTime").setAccessType("outputOnly").setAppinfo("Render operation complete"))
        .addField(new field().setName("movieFormat").setType("MFString").setAccessType("initializeOnly").setValue("\"mpeg\"").setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format"))
        .addField(new field().setName("imageFormat").setType("MFString").setAccessType("initializeOnly").setValue("\"png\"").setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"))
        .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setValue("false").setAppinfo("enable console output to trace script computations and prototype progress")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addChild(new Script("OfflineRenderScript").setMustEvaluate(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize () // OfflineRenderScript" + "\n" + 
"{" + "\n" + 
"//  tracePrint ('initialize start...');" + "\n" + 
"\n" + 
"    tracePrint ('... initialize complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_description (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    description = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_enabled (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    enabled = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_frameRate (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    frameRate = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_frameSize (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    frameSize = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field" + "\n" + 
"{" + "\n" + 
"    pixelAspectRatio = eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_startTime (eventValue) // input event received for inputOnly field" + "\n" + 
"{" + "\n" + 
"   // do something with input eventValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function tracePrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) alwaysPrint (outputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function alwaysPrint (outputValue)" + "\n" + 
"{" + "\n" + 
"	// try to ensure outputValue is converted to string despite browser idiosyncracies" + "\n" + 
"    var outputString = outputValue.toString(); // utility function according to spec" + "\n" + 
"    if (outputString == null) outputString = outputValue; // direct cast" + "\n" + 
"\n" + 
"    if  (description.length > 0)" + "\n" + 
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');" + "\n" + 
"    else" + "\n" + 
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');" + "\n" + 
"}" + "\n")
          .addField(new field().setName("description").setType("SFString").setAccessType("inputOutput").setAppinfo("Text description to be displayed for this OfflineRender"))
          .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setAppinfo("Whether this OfflineRender can be activated"))
          .addField(new field().setName("frameRate").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Frames per second recorded for this rendering"))
          .addField(new field().setName("frameSize").setType("SFVec2f").setAccessType("inputOutput").setAppinfo("Size of frame in number of pixels width and height"))
          .addField(new field().setName("pixelAspectRatio").setType("SFFloat").setAccessType("inputOutput").setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1"))
          .addField(new field().setName("set_startTime").setType("SFTime").setAccessType("inputOnly").setAppinfo("Begin render operation"))
          .addField(new field().setName("progress").setType("SFFloat").setAccessType("outputOnly").setAppinfo("Progress performing render operation (0..1)"))
          .addField(new field().setName("renderCompleteTime").setType("SFTime").setAccessType("outputOnly").setAppinfo("Render operation complete"))
          .addField(new field().setName("movieFormat").setType("MFString").setAccessType("initializeOnly").setAppinfo("Format of rendered output movie (mpeg mp4 etc.)"))
          .addField(new field().setName("imageFormat").setType("MFString").setAccessType("initializeOnly").setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)"))
          .addField(new field().setName("traceEnabled").setType("SFBool").setAccessType("initializeOnly").setAppinfo("enable console output to trace script computations and prototype progress"))
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
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.282353),doubleToFloat(0.380392),doubleToFloat(0.470588)], Java.type("float[]")))))
    .addChild(new Anchor().setDescription("launch CameraExample scene").setUrl(new MFString("\"CameraExamples.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d\" \"CameraExamples.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl\""))
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new Text().setString(this.Text_6_254_string)
            .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.2))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CameraPrototypes model
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
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
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
		var testObject = new CameraPrototypes();
		print ("CameraPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CameraPrototypes().main();