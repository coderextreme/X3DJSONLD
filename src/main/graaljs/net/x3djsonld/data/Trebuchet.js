load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Working model of a 14th century Trebuchet Catapult. </p>
 <p> Related links: <a href="../../../StudentProjects/Trebuchet.java">Trebuchet.java</a> source, <a href="../../../StudentProjects/TrebuchetIndex.html" target="_top">Trebuchet catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/Trebuchet.x3d">Trebuchet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Working model of a 14th century Trebuchet Catapult. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> LT Joe Roth </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> version </i> </td>
			<td> 7.8 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://trebuchet.com" target="_blank">http://trebuchet.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://members.home.net/dimona" target="_blank">http://members.home.net/dimona</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> trebuchet catapult Monty Python </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under "Fair Use" clause of the DMCA </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm" target="_blank">https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm" target="_blank">http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author LT Joe Roth
 */

function Trebuchet
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
Trebuchet.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=7, element #122, 24 total numbers made up of 12 2-tuple values */
	this.Extrusion_7_122_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(-.38),doubleToFloat(.92),doubleToFloat(-.38),doubleToFloat(.71),doubleToFloat(-.71),doubleToFloat(.38),doubleToFloat(-.92),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-.38),doubleToFloat(-.92),doubleToFloat(-.71),doubleToFloat(-.71),doubleToFloat(-.92),doubleToFloat(-.38),doubleToFloat(-1.0),doubleToFloat(-.38),doubleToFloat(-1.0),doubleToFloat(-1.1)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(1.0),doubleToFloat(-1.1),doubleToFloat(1.0),doubleToFloat(-.38)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=7, element #137, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_7_137_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(.90),doubleToFloat(0.00),doubleToFloat(0.81),doubleToFloat(-0.34),doubleToFloat(0.63),doubleToFloat(-0.63),doubleToFloat(0.34),doubleToFloat(-0.83),doubleToFloat(0.00),doubleToFloat(-.9),doubleToFloat(-0.34),doubleToFloat(-0.81),doubleToFloat(-0.63),doubleToFloat(-0.63),doubleToFloat(-0.81),doubleToFloat(-0.34),doubleToFloat(-.90),doubleToFloat(-0.00),doubleToFloat(-0.81),doubleToFloat(0.34)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.63),doubleToFloat(0.63),doubleToFloat(-0.34),doubleToFloat(0.81),doubleToFloat(0.00),doubleToFloat(.90),doubleToFloat(0.38),doubleToFloat(0.81),doubleToFloat(0.63),doubleToFloat(0.63),doubleToFloat(0.81),doubleToFloat(0.34),doubleToFloat(.90),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion spine field, scene-graph level=7, element #137, 51 total numbers made up of 17 3-tuple values */
	this.Extrusion_7_137_spine = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(2.00),doubleToFloat(0.0),doubleToFloat(0.00),doubleToFloat(1.85),doubleToFloat(0.0),doubleToFloat(0.77),doubleToFloat(1.41),doubleToFloat(0.0),doubleToFloat(1.41),doubleToFloat(0.77),doubleToFloat(0.0),doubleToFloat(1.85),doubleToFloat(0.00),doubleToFloat(0.0),doubleToFloat(2.00),doubleToFloat(-0.77),doubleToFloat(0.0),doubleToFloat(1.85),doubleToFloat(-1.41),doubleToFloat(0.0),doubleToFloat(1.41),doubleToFloat(-1.85),doubleToFloat(0.0),doubleToFloat(0.77),doubleToFloat(-2.00),doubleToFloat(0.0),doubleToFloat(0.00),doubleToFloat(-1.85),doubleToFloat(0.0),doubleToFloat(-0.77)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.41),doubleToFloat(0.0),doubleToFloat(-1.41),doubleToFloat(-0.77),doubleToFloat(0.0),doubleToFloat(-1.85),doubleToFloat(0.00),doubleToFloat(0.0),doubleToFloat(-2.00),doubleToFloat(0.77),doubleToFloat(0.0),doubleToFloat(-1.85),doubleToFloat(1.41),doubleToFloat(0.0),doubleToFloat(-1.41),doubleToFloat(1.85),doubleToFloat(0.0),doubleToFloat(-0.77),doubleToFloat(2.00),doubleToFloat(0.0),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #156, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_156_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(.100),doubleToFloat(0.00),doubleToFloat(0.092),doubleToFloat(-0.038),doubleToFloat(0.071),doubleToFloat(-0.071),doubleToFloat(0.038),doubleToFloat(-0.092),doubleToFloat(0.00),doubleToFloat(-.100),doubleToFloat(-0.038),doubleToFloat(-0.092),doubleToFloat(-0.071),doubleToFloat(-0.071),doubleToFloat(-0.092),doubleToFloat(-0.038),doubleToFloat(-.100),doubleToFloat(-0.00),doubleToFloat(-0.092),doubleToFloat(0.038)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.071),doubleToFloat(0.071),doubleToFloat(-0.038),doubleToFloat(0.092),doubleToFloat(0.00),doubleToFloat(.100),doubleToFloat(0.038),doubleToFloat(0.092),doubleToFloat(0.071),doubleToFloat(0.071),doubleToFloat(0.092),doubleToFloat(0.038),doubleToFloat(.100),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #169, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_169_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(.100),doubleToFloat(0.00),doubleToFloat(0.092),doubleToFloat(-0.038),doubleToFloat(0.071),doubleToFloat(-0.071),doubleToFloat(0.038),doubleToFloat(-0.092),doubleToFloat(0.00),doubleToFloat(-.100),doubleToFloat(-0.038),doubleToFloat(-0.092),doubleToFloat(-0.071),doubleToFloat(-0.071),doubleToFloat(-0.092),doubleToFloat(-0.038),doubleToFloat(-.100),doubleToFloat(-0.00),doubleToFloat(-0.092),doubleToFloat(0.038)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.071),doubleToFloat(0.071),doubleToFloat(-0.038),doubleToFloat(0.092),doubleToFloat(0.00),doubleToFloat(.100),doubleToFloat(0.038),doubleToFloat(0.092),doubleToFloat(0.071),doubleToFloat(0.071),doubleToFloat(0.092),doubleToFloat(0.038),doubleToFloat(.100),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #172, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_172_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(.100),doubleToFloat(0.00),doubleToFloat(0.092),doubleToFloat(-0.038),doubleToFloat(0.071),doubleToFloat(-0.071),doubleToFloat(0.038),doubleToFloat(-0.092),doubleToFloat(0.00),doubleToFloat(-.100),doubleToFloat(-0.038),doubleToFloat(-0.092),doubleToFloat(-0.071),doubleToFloat(-0.071),doubleToFloat(-0.092),doubleToFloat(-0.038),doubleToFloat(-.100),doubleToFloat(-0.00),doubleToFloat(-0.092),doubleToFloat(0.038)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.071),doubleToFloat(0.071),doubleToFloat(-0.038),doubleToFloat(0.092),doubleToFloat(0.00),doubleToFloat(.100),doubleToFloat(0.038),doubleToFloat(0.092),doubleToFloat(0.071),doubleToFloat(0.071),doubleToFloat(0.092),doubleToFloat(0.038),doubleToFloat(.100),doubleToFloat(0.00)], Java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=12, element #195, 18 total numbers made up of 9 2-tuple values */
	this.Extrusion_12_195_crossSection = new MFVec2f(Java.to([doubleToFloat(1.00),doubleToFloat(0.00),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.00),doubleToFloat(-1.00),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.00),doubleToFloat(-0.00)], Java.type("float[]")));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("Trebuchet.x3d"))
    .addMeta(new meta().setName("description").setContent("Working model of a 14th century Trebuchet Catapult."))
    .addMeta(new meta().setName("creator").setContent("LT Joe Roth"))
    .addMeta(new meta().setName("created").setContent("20 June 2001"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("version").setContent("7.8"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"))
    .addMeta(new meta().setName("reference").setContent("http://trebuchet.com"))
    .addMeta(new meta().setName("reference").setContent("http://members.home.net/dimona"))
    .addMeta(new meta().setName("subject").setContent("trebuchet catapult Monty Python"))
    .addMeta(new meta().setName("reference").setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"))
    .addMeta(new meta().setName("reference").setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Trebuchet.x3d"))
    .addChild(new Background().setGroundAngle(Java.to([doubleToFloat(1.309),doubleToFloat(1.570796)], Java.type("float[]"))).setGroundColor(new MFColor(Java.to([doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.4),doubleToFloat(0.25),doubleToFloat(0.2),doubleToFloat(0.6),doubleToFloat(0.6),doubleToFloat(0.6)], Java.type("float[]")))).setSkyAngle(Java.to([doubleToFloat(1.309),doubleToFloat(1.57079)], Java.type("float[]"))).setSkyColor(new MFColor(Java.to([doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)], Java.type("float[]")))).setBackUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg\"")).setBottomUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg\"")).setFrontUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg\"")).setLeftUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg\"")).setRightUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg\"")).setTopUrl(new MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg\"")))
    .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
      .setSource(new AudioClip("HolyGrail").setDescription("HolyGrail").setLoop(true).setUrl(new MFString("\"holygral.mp3\" \"http://www.nps.navy.mil/code32/vrml/holygral.mp3\""))))
    .addChild(new Shape()
      .setGeometry(new Box().setSize(doubleToFloat(10000.0),doubleToFloat(1.0),doubleToFloat(10000.0)))
      .setAppearance(new Appearance()
        .setTexture(new ImageTexture().setUrl(new MFString("\"grass.jpg\" \"https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg\"")))))
    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setScale(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)).setTranslation(doubleToFloat(10.5),doubleToFloat(6.5),doubleToFloat(4.5))
      .addChild(new Shape()
        .setAppearance(new Appearance("TextAppearance")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.0))))
        .setGeometry(new Text().setString(new MFString("\"Click Sling to Select Projectile\""))
          .setFontStyle(new FontStyle()))))
    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setScale(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)).setTranslation(doubleToFloat(11.0),doubleToFloat(5.5),doubleToFloat(6.0))
      .addChild(new Switch("Weight").setWhichChoice(0)
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance())
            .setGeometry(new Text().setString(new MFString("\"Click Here to Change Counter Weight (50 lbs)\"")))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance())
            .setGeometry(new Text().setString(new MFString("\"Click Here to Change Counter Weight (500 lbs)\"")))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance())
            .setGeometry(new Text().setString(new MFString("\"Click Here to Change Counter Weight (1000 lbs)\"")))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance())
            .setGeometry(new Text().setString(new MFString("\"Click Here to Change Counter Weight (10000 lbs)\""))))))
      .addChild(new TouchSensor("weightselector").setDescription("weight selector"))
      .addChild(new Transform().setTranslation(doubleToFloat(8.0),doubleToFloat(0.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(doubleToFloat(20.0),doubleToFloat(1.0),doubleToFloat(1.0)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(1))))))
    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(10.0),doubleToFloat(.5),doubleToFloat(4.5))
      .addChild(new Transform("launch").setTranslation(doubleToFloat(0.0),doubleToFloat(2.0),doubleToFloat(5.0))
        .addChild(new Billboard()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))
            .setGeometry(new Text().setString(new MFString("\"LAUNCH\""))
              .setFontStyle(new FontStyle())))
          .addChild(new Transform().setTranslation(doubleToFloat(2.0),doubleToFloat(.3),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(doubleToFloat(5.0),doubleToFloat(1.0),doubleToFloat(1.0)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1)))))
          .addChild(new Switch("PigdogMonk").setWhichChoice(-1)
            .addChild(new Group()
              .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                .setSource(new AudioClip("PigDogSound").setDescription("PigDogSound").setUrl(new MFString("\"pigdog.wav\" \"http://www.nps.navy.mil/code32/vrml/pigdog.wav\"")))))
            .addChild(new Group()
              .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                .setSource(new AudioClip("MonkSound").setDescription("MonkSound").setUrl(new MFString("\"monks.wav\" \"http://www.nps.navy.mil/code32/vrml/monks.wav\"")))))))
        .addChild(new TouchSensor("Launch").setDescription("launch!")))
      .addChild(new Transform()
        .addChild(new Switch("projectilename").setWhichChoice(0)
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance())
              .setGeometry(new Text().setString(new MFString("\"Bowling Ball (10 lbs)\""))
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource(new AudioClip("HolyHandGrenadeSound").setDescription("HolyHandGrenadeSound").setUrl(new MFString("\"grenade.wav\" \"http://www.nps.navy.mil/code32/vrml/grenade.wav\"")))))
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance())
              .setGeometry(new Text().setString(new MFString("\"Cow (1000 lbs)\""))
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
              .setSource(new AudioClip("CowSound").setDescription("CowSound").setUrl(new MFString("\"lavache.wav\" \"http://www.nps.navy.mil/code32/vrml/lavache.wav\"")))))
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance())
              .setGeometry(new Text().setString(new MFString("\"Chicken (5 lbs)\""))
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource(new AudioClip("HamsterSound").setDescription("HamsterSound").setUrl(new MFString("\"hamster.wav\" \"http://www.nps.navy.mil/code32/vrml/hamster.wav\""))))))))
    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.67))
      .addChild(new Transform("aft").setTranslation(doubleToFloat(5.0),doubleToFloat(5.0),doubleToFloat(15.0))
        .addChild(new Transform().setTranslation(doubleToFloat(-2.5),doubleToFloat(-4.5),doubleToFloat(-2.0))
          .addChild(new Transform()))))
    .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(3.0),doubleToFloat(0.0))
      .addChild(new Shape("plank")
        .setGeometry(new Box().setSize(doubleToFloat(25.0),doubleToFloat(1.0),doubleToFloat(1.0)))
        .setAppearance(new Appearance("wood")
          .setTexture(new ImageTexture("woodTexture").setUrl(new MFString("\"wood.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif\"")))))
      .addChild(new Transform("angledsupport").setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(-5.0),doubleToFloat(10.0),doubleToFloat(0.0))
        .addChild(new Shape()))
      .addChild(new Transform("angledsupport2").setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.0)).setTranslation(doubleToFloat(5.0),doubleToFloat(10.0),doubleToFloat(0.0))
        .addChild(new Shape()))
      .addChild(new Transform("verticalsupport").setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57)).setScale(doubleToFloat(.9),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(11.0),doubleToFloat(0.0))
        .addChild(new Shape())
        .addComments(" Main Verticle Support "))
      .addChild(new Transform("horizontalsupport").setScale(doubleToFloat(.4),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(10.0),doubleToFloat(0.0))
        .addChild(new Shape()))
      .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57)).setScale(doubleToFloat(.6),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(10.0))
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(.4))
          .addChild(new Shape())))
      .addChild(new Transform("panel").setTranslation(doubleToFloat(0.0),doubleToFloat(18.2),doubleToFloat(-.3))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(doubleToFloat(5.0),doubleToFloat(5.0),doubleToFloat(.5)))
          .setAppearance(new Appearance())))
      .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.6),doubleToFloat(2.5))
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
          .addChild(new Shape()
            .setGeometry(new Extrusion().setBeginCap(false).setCrossSection(this.Extrusion_7_122_crossSection).setEndCap(false).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(6.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-11.0),doubleToFloat(0.0)], Java.type("float[]")))))
            .setAppearance(new Appearance()))))
      .addChild(new Transform("flinger").setCenter(doubleToFloat(7.0),doubleToFloat(0.0),doubleToFloat(0.0)).setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(.82)).setScale(doubleToFloat(.9),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(-7.0),doubleToFloat(18.0),doubleToFloat(2.5))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Box().setSize(doubleToFloat(35.0),doubleToFloat(1.0),doubleToFloat(1.0)))
            .setAppearance(new Appearance()))
          .addChild(new Transform().setTranslation(doubleToFloat(7.0),doubleToFloat(0.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(doubleToFloat(8.0),doubleToFloat(2.0),doubleToFloat(2.0)))
              .setAppearance(new Appearance()))))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setScale(doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.2)).setTranslation(doubleToFloat(-15.0),doubleToFloat(-1.0),doubleToFloat(0.0))
          .addChild(new Shape("Torus")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
            .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(this.Extrusion_7_137_crossSection).setEndCap(false).setSpine(this.Extrusion_7_137_spine)))
          .addChild(new Transform().setTranslation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(2.0))
            .addChild(new Shape()
              .setAppearance(new Appearance("rope")
                .setTexture(new ImageTexture()))
              .setGeometry(new Sphere().setRadius(1.5)))
            .addComments(" knott ")))
        .addComments(" The Unicorn ")
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.2)).setScale(doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.2)).setTranslation(doubleToFloat(-18.3),doubleToFloat(0.3),doubleToFloat(0.0))
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(10))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-2.5),doubleToFloat(0.0))
            .addChild(new Shape())
            .addComments(" The Unicorn ")
            .addChild(new Transform().setTranslation(doubleToFloat(-2.0),doubleToFloat(-0.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(1.5))
                .setAppearance(new Appearance()))
              .addComments(" Knott ")))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.2)).setTranslation(doubleToFloat(15.0),doubleToFloat(55.0),doubleToFloat(-11.0))
            .addChild(new Transform().setScale(doubleToFloat(5.0),doubleToFloat(5.0),doubleToFloat(5.0))
              .addChild(new Shape()
                .setAppearance(new Appearance())
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_156_crossSection).setEndCap(false).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(-15.2),doubleToFloat(1.4),doubleToFloat(2.2),doubleToFloat(-12.0),doubleToFloat(-.8),doubleToFloat(2.2)], Java.type("float[]")))))))))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.7)).setTranslation(doubleToFloat(-17.0),doubleToFloat(-4.5),doubleToFloat(0.0))
          .addChild(new Transform().setScale(doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.2))
            .addChild(new Shape()
              .addComments(" Knot "))
            .addChild(new Transform().setTranslation(doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(1.7))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(1.5))
                .setAppearance(new Appearance())))))
        .addChild(new Transform("RnS")
          .addChild(new Transform("ropes")
            .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-.82)).setTranslation(doubleToFloat(7.0),doubleToFloat(-26.0),doubleToFloat(-2.5))
              .addChild(new Shape()
                .setAppearance(new Appearance())
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_169_crossSection).setEndCap(false).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(-33.0),doubleToFloat(.9),doubleToFloat(2.5),doubleToFloat(-18.5),doubleToFloat(1.9),doubleToFloat(2.55)], Java.type("float[]"))))))
              .addChild(new Shape()
                .setAppearance(new Appearance())
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_172_crossSection).setEndCap(false).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(-35.7),doubleToFloat(-.8),doubleToFloat(2.5),doubleToFloat(-18.8),doubleToFloat(-.8),doubleToFloat(2.55)], Java.type("float[]"))))))))
          .addChild(new Transform("sling").setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-.82)).setTranslation(doubleToFloat(-4.0),doubleToFloat(-15.3),doubleToFloat(0.0))
            .addChild(new Transform()
              .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setScale(doubleToFloat(1.0),doubleToFloat(1.3),doubleToFloat(1.0)).setTranslation(doubleToFloat(.5),doubleToFloat(0.0),doubleToFloat(-1.0))
                .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
                  .addChild(new Transform().setScale(doubleToFloat(.3),doubleToFloat(.3),doubleToFloat(.3))
                    .addChild(new Shape("halfsling")
                      .setAppearance(new Appearance("clear")
                        .setMaterial(new Material().setTransparency(.5)))
                      .setGeometry(new Extrusion().setCrossSection(new MFVec2f() /* splitting up long array to improve readability */
.append(new MFVec2f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(.5),doubleToFloat(7.0),doubleToFloat(1.0),doubleToFloat(8.0),doubleToFloat(2.0),doubleToFloat(9.0),doubleToFloat(3.0),doubleToFloat(11.0),doubleToFloat(3.5),doubleToFloat(11.2),doubleToFloat(4.0),doubleToFloat(11.0),doubleToFloat(5.0),doubleToFloat(9.0),doubleToFloat(6.0),doubleToFloat(8.0)], Java.type("float[]"))))
.append(new MFVec2f(Java.to([doubleToFloat(6.5),doubleToFloat(7.0),doubleToFloat(6.7),doubleToFloat(5.0),doubleToFloat(6.7),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(.1),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))))
                    .addChild(new Transform().setScale(doubleToFloat(.3),doubleToFloat(.3),doubleToFloat(.3)).setTranslation(doubleToFloat(0.0),doubleToFloat(-3.5),doubleToFloat(11.5))
                      .addChild(new Shape())
                      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.0))
                        .addChild(new Shape()
                          .setAppearance(new Appearance())
                          .setGeometry(new Sphere().setRadius(1.5))))))
                  .addChild(new Transform().setScale(doubleToFloat(.3),doubleToFloat(.3),doubleToFloat(.3)).setTranslation(doubleToFloat(2.0),doubleToFloat(0.0),doubleToFloat(0.0))
                    .addChild(new Shape())
                    .addChild(new Transform().setScale(doubleToFloat(.3),doubleToFloat(.3),doubleToFloat(.3)).setTranslation(doubleToFloat(0.0),doubleToFloat(-3.5),doubleToFloat(11.3))
                      .addChild(new Shape())
                      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.0))
                        .addChild(new Shape()
                          .setAppearance(new Appearance())
                          .setGeometry(new Sphere().setRadius(1.5))))))
                  .addChild(new Transform().setTranslation(doubleToFloat(1.0),doubleToFloat(-1.0),doubleToFloat(0.0))
                    .addChild(new Shape()
                      .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.785).setCrossSection(this.Extrusion_12_195_crossSection).setEndCap(false).setSolid(false).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")))))
                      .setAppearance(new Appearance()))))
                .addChild(new TouchSensor("LauncheeChoice").setDescription("launcher choice")))
              .addChild(new Transform("projectiletransform").setScale(doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(.01))
                .addChild(new Switch("projectile").setWhichChoice(0)
                  .addChild(new Group()
                    .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(.7),doubleToFloat(0.0))
                      .addChild(new Shape()
                        .setGeometry(new Sphere().setRadius(.7))
                        .setAppearance(new Appearance("black")
                          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
                  .addChild(new Group()
                    .addChild(new Transform()
                      .addChild(new Inline().setUrl(new MFString("\"cow.wrl\" \"http://www.uoguelph.ca/~dchiu/cow.wrl\"")))))
                  .addChild(new Group()
                    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setScale(doubleToFloat(.4),doubleToFloat(.4),doubleToFloat(.4)).setTranslation(doubleToFloat(0.0),doubleToFloat(.7),doubleToFloat(0.0))
                      .addChild(new Inline().setUrl(new MFString("\"vrml_ginger.wrl\" \"http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl\"")))))))))))
      .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(18.0),doubleToFloat(2.5))
        .addChild(new Shape()
          .setGeometry(new Cylinder().setHeight(8).setRadius(.4))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))
        .addComments(" Top Pivot "))
      .addChild(new Transform("verticalweight")
        .addChild(new Transform().setTranslation(doubleToFloat(4.0),doubleToFloat(18.0),doubleToFloat(1.8))
          .addChild(new Shape()
            .setGeometry(new Box().setSize(doubleToFloat(1.0),doubleToFloat(10.0),doubleToFloat(.5)))
            .setAppearance(new Appearance())))
        .addChild(new Transform().setTranslation(doubleToFloat(4.0),doubleToFloat(18.0),doubleToFloat(3.2))
          .addChild(new Shape()
            .setGeometry(new Box().setSize(doubleToFloat(1.0),doubleToFloat(10.0),doubleToFloat(.5)))
            .setAppearance(new Appearance())))
        .addChild(new Transform().setTranslation(doubleToFloat(4.0),doubleToFloat(14.0),doubleToFloat(2.5))
          .addComments(" CounterWeight ")
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(4).setRadius(1.5))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(4.0),doubleToFloat(22.0),doubleToFloat(2.5))
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(2.5).setRadius(.3))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
      .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57)).setScale(doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.2)).setTranslation(doubleToFloat(-11.5),doubleToFloat(-1.0),doubleToFloat(2.0))
        .addChild(new Transform("screw").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57))
          .addChild(new Shape())
          .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(7.0))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(10).setRadius(.7))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setSpecularColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(7.0))
          .addChild(new Transform()))
        .addComments(" Release Pin ")
        .addChild(new Transform("Pin").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-3.0))
          .addChild(new Transform())))
      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(5.0))
        .addChild(new Shape())
        .addChild(new Transform())
        .addChild(new Transform())
        .addChild(new Transform())
        .addChild(new Transform())
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setScale(doubleToFloat(.6),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(-11.0),doubleToFloat(-2.5))
          .addChild(new Transform()))
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.57)).setScale(doubleToFloat(.6),doubleToFloat(1.0),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(-10.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(.4))
            .addChild(new Shape())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(.6))
          .addChild(new Transform())))
      .addChild(new Transform().setTranslation(doubleToFloat(10.0),doubleToFloat(-1.0),doubleToFloat(2.5))
        .addChild(new Shape("Axle")
          .setGeometry(new Box().setSize(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(8.0)))
          .setAppearance(new Appearance()))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.5))
          .addChild(new Shape("wheel")
            .setGeometry(new Cylinder().setRadius(2))
            .setAppearance(new Appearance()))
          .addChild(new Shape("tracks")
            .setGeometry(new Sphere().setRadius(1.5))
            .setAppearance(new Appearance()))
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(.55),doubleToFloat(0.0))
            .addChild(new Shape("hub")
              .setGeometry(new Sphere().setRadius(1.5))
              .setAppearance(new Appearance()))))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-4.5))
          .addChild(new Shape())
          .addChild(new Shape())
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-.55),doubleToFloat(0.0))
            .addChild(new Shape()))))
      .addChild(new Transform().setTranslation(doubleToFloat(-10.0),doubleToFloat(-1.0),doubleToFloat(2.5))
        .addChild(new Shape())
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.5))
          .addChild(new Shape())
          .addChild(new Shape())
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(.55),doubleToFloat(0.0))
            .addChild(new Shape())))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-4.5))
          .addChild(new Shape())
          .addChild(new Shape())
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-.55),doubleToFloat(0.0))
            .addChild(new Shape())))
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-.6)).setTranslation(doubleToFloat(0.0),doubleToFloat(100.0),doubleToFloat(400.0))
          .addChild(new Transform().setTranslation(doubleToFloat(1.0),doubleToFloat(3.0),doubleToFloat(0.0))
            .addChild(new Viewpoint().setDescription("Side")))
          .addChild(new Transform())
          .addChild(new Transform()
            .addChild(new TouchSensor())
            .addChild(new Switch().setWhichChoice(-1))
            .addChild(new Transform().setTranslation(doubleToFloat(2.5),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Box().setSize(doubleToFloat(5.0),doubleToFloat(.5),doubleToFloat(.5)))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(1))))))
          .addChild(new Transform().setScale(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)).setTranslation(doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0))
            .addChild(new TouchSensor())
            .addChild(new Switch().setWhichChoice(-1))
            .addChild(new Transform().setTranslation(doubleToFloat(8.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Box().setSize(doubleToFloat(17.0),doubleToFloat(1.0),doubleToFloat(.5)))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(1)))))))
        .addChild(new Transform("ProjectileTransform").setTranslation(doubleToFloat(14.25),doubleToFloat(1.25),doubleToFloat(0.0))
          .addChild(new Switch().setWhichChoice(-1))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
            .addChild(new Viewpoint().setDescription("Projectile Cam").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(15.0)))))
        .addChild(new Transform().setTranslation(doubleToFloat(20.0),doubleToFloat(2.0),doubleToFloat(0.0))
          .addChild(new Transform("Front").setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.57))
            .addChild(new Viewpoint().setDescription("Fore"))))
        .addChild(new Transform().setTranslation(doubleToFloat(-8.0),doubleToFloat(4.0),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.57))
            .addChild(new Viewpoint().setDescription("Aft"))))
        .addChild(new Script("WeightScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	whichchoice =0;" + "\n" + 
"	CounterWeight=100;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_boolean ( boolean_input, eventTime)" + "\n" + 
"{" + "\n" + 
"\n" + 
"	if ( boolean_input== false ) { return; } // ignore the unclick" + "\n" + 
"        whichchoice = whichchoice +1;" + "\n" + 
"	if (whichchoice == 0)CounterWeight=50.00;" + "\n" + 
"	if (whichchoice == 1)CounterWeight=500.00;" + "\n" + 
"	if (whichchoice == 2)CounterWeight=1000.00;" + "\n" + 
"	if (whichchoice == 3)CounterWeight=10000.00;" + "\n" + 
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }" + "\n" + 
"\n" + 
"\n" + 
"        Browser.println ('CounterWeight ='+CounterWeight);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField(new field().setName("whichchoice").setType("SFInt32").setAccessType("outputOnly"))
          .addField(new field().setName("CounterWeight").setType("SFFloat").setAccessType("outputOnly")))
        .addChild(new Script("LauncheeScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (boolean_input, eventTime)" + "\n" + 
"{" + "\n" + 
"	if ( boolean_input== false ) { return; } // ignore unclick" + "\n" + 
"        whichchoice = whichchoice +1;" + "\n" + 
"        if (whichchoice == 0)ProjectileWeight=10.00;" + "\n" + 
"        if (whichchoice == 1)ProjectileWeight=1000.00;" + "\n" + 
"	if (whichchoice == 2)ProjectileWeight=5;" + "\n" + 
"\n" + 
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }" + "\n" + 
"	Browser.println ('Projectile Weight'+ProjectileWeight);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField(new field().setName("whichchoice").setType("SFInt32").setAccessType("outputOnly"))
          .addField(new field().setName("ProjectileWeight").setType("SFFloat").setAccessType("outputOnly")))
        .addChild(new Script("PigdogMonkScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (boolean_input, eventTime)" + "\n" + 
"{" + "\n" + 
"	if ( boolean_input== false ) { return; } // ignore unclick" + "\n" + 
"\n" + 
"        whichchoice = whichchoice +1;" + "\n" + 
"\n" + 
"        if ( whichchoice ==2 )  whichchoice = 0;" + "\n" + 
"\n" + 
"\n" + 
"}" + "\n")
          .addField(new field().setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField(new field().setName("whichchoice").setType("SFInt32").setAccessType("outputOnly")))
        .addChild(new Script("Mover").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	MassCounterWeight=100;" + "\n" + 
"	MassProjectileWeight=10;" + "\n" + 
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);" + "\n" + 
"	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_MassProjectileWeight (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	MassProjectileWeight = value;" + "\n" + 
"	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);" + "\n" + 
"}" + "\n" + 
"function set_MassCounterWeight (value2, timestamp)" + "\n" + 
"{" + "\n" + 
"	MassCounterWeight = value2;" + "\n" + 
"	Browser.println ('new MassCounterWeight =' + MassCounterWeight);" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function set_fraction ( fraction, eventTime )" + "\n" + 
"{" + "\n" + 
"	var TrebuchetHeight=45;" + "\n" + 
"	var Height =25;" + "\n" + 
"      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;" + "\n" + 
"	// start at TrebuchetHeight and keep along z axis (z=zero)" + "\n" + 
"	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);" + "\n" + 
"        z = 0;" + "\n" + 
"        transparent = new SFVec3f (1,1,1);" + "\n" + 
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)" + "\n" + 
"		{" + "\n" + 
"		x=x-10;" + "\n" + 
"		y=y+1;" + "\n" + 
"		transparent = new SFVec3f(.01, .01, .01);" + "\n" + 
"			}" + "\n" + 
"\n" + 
"	value_changed = new SFVec3f (x, y, z);" + "\n" + 
"	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
          .addField(new field().setName("set_MassCounterWeight").setType("SFFloat").setAccessType("inputOnly"))
          .addField(new field().setName("set_MassProjectileWeight").setType("SFFloat").setAccessType("inputOnly"))
          .addField(new field().setName("MassCounterWeight").setType("SFFloat").setAccessType("initializeOnly").setValue("1"))
          .addField(new field().setName("MassProjectileWeight").setType("SFFloat").setAccessType("initializeOnly").setValue("1"))
          .addField(new field().setName("transparent").setType("SFVec3f").setAccessType("outputOnly"))
          .addField(new field().setName("value_changed").setType("SFVec3f").setAccessType("outputOnly")))))
    .addChild(new TimeSensor("clock").setCycleInterval(10))
    .addChild(new PositionInterpolator("verticalweightpath").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(.1),doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.3),doubleToFloat(.9)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(1.4),doubleToFloat(1.6),doubleToFloat(0.0),doubleToFloat(1.),doubleToFloat(-8.0),doubleToFloat(0.0),doubleToFloat(-3.5),doubleToFloat(-12.0),doubleToFloat(0.0),doubleToFloat(-3.5),doubleToFloat(-12.0),doubleToFloat(0.0),doubleToFloat(1.2),doubleToFloat(-8.0),doubleToFloat(0.0),doubleToFloat(1.4),doubleToFloat(1.6),doubleToFloat(0.0)], Java.type("float[]")))))
    .addChild(new OrientationInterpolator("flingerangles").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(.1),doubleToFloat(.2),doubleToFloat(.2),doubleToFloat(.3),doubleToFloat(.9)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(.82),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-.77),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.57),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.57),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-.77),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(.82)], Java.type("float[]")))))
    .addChild(new PositionInterpolator("pinpath").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(.01),doubleToFloat(.95),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-3.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-3.0)], Java.type("float[]")))))
    .addChild(new OrientationInterpolator("RnSAngels").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(.7),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-3.14),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")))))
    .addChild(new PositionInterpolator("invisiable").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(.2),doubleToFloat(.98),doubleToFloat(.99)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(.01),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)], Java.type("float[]")))))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("invisiable").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("invisiable").setFromField("value_changed").setToNode("projectiletransform").setToField("set_scale"))
    .addChild(new ROUTE().setFromNode("WeightScript").setFromField("CounterWeight").setToNode("Mover").setToField("set_MassCounterWeight"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("ProjectileWeight").setToNode("Mover").setToField("set_MassProjectileWeight"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("Mover").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Mover").setFromField("value_changed").setToNode("ProjectileTransform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Mover").setFromField("transparent").setToNode("ProjectileTransform").setToField("set_scale"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("clock").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("isActive").setToNode("PigdogMonkScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("PigDogSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("MonkSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("PigdogMonkScript").setFromField("whichchoice").setToNode("PigdogMonk").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HolyHandGrenadeSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("CowSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HamsterSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("isActive").setToNode("LauncheeScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectile").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectilename").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("weightselector").setFromField("isActive").setToNode("WeightScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("WeightScript").setFromField("whichchoice").setToNode("Weight").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("flingerangles").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("flingerangles").setFromField("value_changed").setToNode("flinger").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("verticalweightpath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("verticalweightpath").setFromField("value_changed").setToNode("verticalweight").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("pinpath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("pinpath").setFromField("value_changed").setToNode("Pin").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Trebuchet model
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
		var testObject = new Trebuchet();
		print ("Trebuchet execution self-validation test results: " + testObject.validateSelf());
	}
}
new Trebuchet().main();