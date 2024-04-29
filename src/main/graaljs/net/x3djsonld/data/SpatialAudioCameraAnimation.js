load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.java">SpatialAudioCameraAnimation.java</a> source, <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimationIndex.html" target="_top">SpatialAudioCameraAnimation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.x3d">SpatialAudioCameraAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 5 December 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CHANGELOG.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> credit for audio files </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.medialab.hmu.gr/minipages/x3domAudio" target="_blank">https://www.medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../AudioSpatialSound/../license.html">../license.html</a> </td>
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

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

function SpatialAudioCameraAnimation
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
SpatialAudioCameraAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Viewpoint DEF='Camera001' description field, scene-graph level=3, element #17, 40 total values */
	this.Camera001_3_17_description = new SFString("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view");

	/** Large attribute array: OrientationInterpolator DEF='Camera001-ROT-INTERP' keyValue field, scene-graph level=3, element #20, 20 total numbers made up of 5 4-tuple values */
	this.Camera001_ROT_INTERP_3_20_keyValue = new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.523599),doubleToFloat(0.999990),doubleToFloat(0.003554),doubleToFloat(0.002727),doubleToFloat(-1.309007),doubleToFloat(0.0),doubleToFloat(-0.965926),doubleToFloat(-0.258819),doubleToFloat(-3.141593),doubleToFloat(0.002282),doubleToFloat(-0.793351),doubleToFloat(-0.608760),doubleToFloat(-3.135645),doubleToFloat(1.0),doubleToFloat(-0.000001),doubleToFloat(-0.0),doubleToFloat(-0.523599)], Java.type("float[]")));
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("SpatialAudioCameraAnimation.x3d"))
    .addMeta(new meta().setName("description").setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
    .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("28 October 2020"))
    .addMeta(new meta().setName("modified").setContent("5 December 2021"))
    .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
    .addMeta(new meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SpatialAudioCameraAnimation.x3d"))
    .addChild(new NavigationInfo().setId("NAV"))
    .addChild(new Background().setBackUrl(new MFString("\"images/generic/BK1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png\"")).setBottomUrl(new MFString("\"images/generic/DN1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png\"")).setFrontUrl(new MFString("\"images/generic/FR1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png\"")).setLeftUrl(new MFString("\"images/generic/LF1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png\"")).setRightUrl(new MFString("\"images/generic/RT1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png\"")).setTopUrl(new MFString("\"images/generic/UP1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png\"")))
    .addChild(new Viewpoint("Camera001").setDescription(this.Camera001_3_17_description).setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.523599)).setPosition(doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(3500.0)))
    .addChild(new TimeSensor("TIMER").setCycleInterval(33.333332).setLoop(true))
    .addChild(new PositionInterpolator("Camera001-POS-INTERP").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.25),doubleToFloat(0.5),doubleToFloat(0.75),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(3500.0),doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(-3500.0),doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2000.0),doubleToFloat(3500.0)], Java.type("float[]")))))
    .addChild(new OrientationInterpolator("Camera001-ROT-INTERP").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.25),doubleToFloat(0.5),doubleToFloat(0.75),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.Camera001_ROT_INTERP_3_20_keyValue))
    .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Camera001-POS-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_position"))
    .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Camera001-ROT-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_orientation"))
    .addChild(new Transform("Floor").setTranslation(doubleToFloat(1.241),doubleToFloat(0.000),doubleToFloat(0.358))
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.122),doubleToFloat(0.114),doubleToFloat(0.125))))
        .setGeometry(new Box().setSize(doubleToFloat(2000.0),doubleToFloat(1.0),doubleToFloat(2000.0)))))
    .addChild(new Transform("TransformAudio1").setTranslation(doubleToFloat(-933.123474),doubleToFloat(0.0),doubleToFloat(-926.253235))
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor_1")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.690196),doubleToFloat(0.101961),doubleToFloat(0.101961))))
        .setGeometry(new Sphere().setRadius(100)))
      .addChild(new Billboard()
        .addChild(new Transform("violin").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setScale(doubleToFloat(100.0),doubleToFloat(100.0),doubleToFloat(100.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(100.0),doubleToFloat(0.0))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setShininess(0.51).setSpecularColor(doubleToFloat(0.46),doubleToFloat(0.46),doubleToFloat(0.46))))
            .setGeometry(new Text().setString(new MFString("\"Violin\""))
              .setFontStyle(new FontStyle("ModelFontStyle").setFamily(new MFString("\"Times\" \"SERIF\"")).setStyle("BOLD")))))))
    .addChild(new Transform("TransformAudio2").setTranslation(doubleToFloat(933.475586),doubleToFloat(0.0),doubleToFloat(924.423218))
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor_2")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.105882),doubleToFloat(0.694118),doubleToFloat(0.580392))))
        .setGeometry(new Sphere().setRadius(100)))
      .addChild(new Billboard()
        .addChild(new Transform("saxophone").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setScale(doubleToFloat(100.0),doubleToFloat(100.0),doubleToFloat(100.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(100.0),doubleToFloat(0.0))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setShininess(0.51).setSpecularColor(doubleToFloat(0.46),doubleToFloat(0.46),doubleToFloat(0.46))))
            .setGeometry(new Text().setString(new MFString("\"Saxophone\""))
              .setFontStyle(new FontStyle().setUSE("ModelFontStyle")))))))
    .addChild(new ListenerPointSource().setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild(new StreamAudioDestination().setId("AudioDestination")
      .addChild(new SpatialSound("Audio1").setId("SpatialSound1")
        .addChild(new Gain().setId("Gain1")
          .addChild(new AudioClip().setDescription("Violin").setId("AudioClip1").setLoop(true).setUrl(new MFString("\"sound/violin.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3\"")))))
      .addChild(new SpatialSound("Audio2").setId("SpatialSound2")
        .addChild(new Gain().setId("Gain2")
          .addChild(new AudioClip().setDescription("Saxophone").setId("AudioClip2").setLoop(true).setUrl(new MFString("\"sound/saxophone.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3\"")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return SpatialAudioCameraAnimation model
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
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
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
		var testObject = new SpatialAudioCameraAnimation();
		print ("SpatialAudioCameraAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new SpatialAudioCameraAnimation().main();