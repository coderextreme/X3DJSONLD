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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
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
Trebuchet.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=7, element #122, 24 total numbers made up of 12 2-tuple values */
	this.Extrusion_7_122_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,-.38,.92,-.38,.71,-.71,.38,-.92,0.0,-1.0,-.38,-.92,-.71,-.71,-.92,-.38,-1.0,-.38,-1.0,-1.1])))
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,-1.1,1.0,-.38])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=7, element #137, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_7_137_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [.90,0.00,0.81,-0.34,0.63,-0.63,0.34,-0.83,0.00,-.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-.90,-0.00,-0.81,0.34])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.63,0.63,-0.34,0.81,0.00,.90,0.38,0.81,0.63,0.63,0.81,0.34,.90,0.00])));

	/** Large attribute array: Extrusion spine field, scene-graph level=7, element #137, 51 total numbers made up of 17 3-tuple values */
	this.Extrusion_7_137_spine = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #156, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_156_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #169, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_169_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=9, element #172, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_9_172_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=12, element #195, 18 total numbers made up of 9 2-tuple values */
	this.Extrusion_12_195_crossSection = new autoclass.MFVec2f(java.newArray("float", [1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Trebuchet.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Working model of a 14th century Trebuchet Catapult."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("LT Joe Roth"))
    .addMeta((new autoclass.meta()).setName("created").setContent("20 June 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("version").setContent("7.8"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://trebuchet.com"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://members.home.net/dimona"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("trebuchet catapult Monty Python"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("Trebuchet.x3d"))
    .addChild((new autoclass.Background()).setGroundAngle(java.newArray("float", [1.309,1.570796])).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.1,0.1,0.0,0.4,0.25,0.2,0.6,0.6,0.6]))).setSkyAngle(java.newArray("float", [1.309,1.57079])).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.2,0.7,0.0,0.5,1.0,1.0,1.0,1.0]))).setBackUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg\"")).setBottomUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg\"")).setFrontUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg\"")).setLeftUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg\"")).setRightUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg\"")).setTopUrl(new autoclass.MFString("\"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg\"")))
    .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000)
      .setSource((new autoclass.AudioClip("HolyGrail")).setDescription("HolyGrail").setLoop(true).setUrl(new autoclass.MFString("\"holygral.mp3\" \"http://www.nps.navy.mil/code32/vrml/holygral.mp3\""))))
    .addChild((new autoclass.Shape())
      .setGeometry((new autoclass.Box()).setSize(10000.0,1.0,10000.0))
      .setAppearance((new autoclass.Appearance())
        .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"grass.jpg\" \"https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg\"")))))
    .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setScale(.5,.5,.5).setTranslation(10.5,6.5,4.5)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("TextAppearance"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,1.0,0.0)))
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click Sling to Select Projectile\""))
          .setFontStyle((new autoclass.FontStyle())))))
    .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setScale(.5,.5,.5).setTranslation(11.0,5.5,6.0)
      .addChild((new autoclass.Switch("Weight")).setWhichChoice(0)
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click Here to Change Counter Weight (50 lbs)\"")))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click Here to Change Counter Weight (500 lbs)\"")))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click Here to Change Counter Weight (1000 lbs)\"")))))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Click Here to Change Counter Weight (10000 lbs)\""))))))
      .addChild((new autoclass.TouchSensor("weightselector")).setDescription("weight selector"))
      .addChild((new autoclass.Transform()).setTranslation(8.0,0.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()).setSize(20.0,1.0,1.0))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(1))))))
    .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setTranslation(10.0,.5,4.5)
      .addChild((new autoclass.Transform("launch")).setTranslation(0.0,2.0,5.0)
        .addChild((new autoclass.Billboard())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"LAUNCH\""))
              .setFontStyle((new autoclass.FontStyle()))))
          .addChild((new autoclass.Transform()).setTranslation(2.0,.3,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(5.0,1.0,1.0))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setTransparency(1)))))
          .addChild((new autoclass.Switch("PigdogMonk")).setWhichChoice(-1)
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000)
                .setSource((new autoclass.AudioClip("PigDogSound")).setDescription("PigDogSound").setUrl(new autoclass.MFString("\"pigdog.wav\" \"http://www.nps.navy.mil/code32/vrml/pigdog.wav\"")))))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000)
                .setSource((new autoclass.AudioClip("MonkSound")).setDescription("MonkSound").setUrl(new autoclass.MFString("\"monks.wav\" \"http://www.nps.navy.mil/code32/vrml/monks.wav\"")))))))
        .addChild((new autoclass.TouchSensor("Launch")).setDescription("launch!")))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Switch("projectilename")).setWhichChoice(0)
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Bowling Ball (10 lbs)\""))
                .setFontStyle((new autoclass.FontStyle()).setSize(.5))))
            .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource((new autoclass.AudioClip("HolyHandGrenadeSound")).setDescription("HolyHandGrenadeSound").setUrl(new autoclass.MFString("\"grenade.wav\" \"http://www.nps.navy.mil/code32/vrml/grenade.wav\"")))))
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Cow (1000 lbs)\""))
                .setFontStyle((new autoclass.FontStyle()).setSize(.5))))
            .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000)
              .setSource((new autoclass.AudioClip("CowSound")).setDescription("CowSound").setUrl(new autoclass.MFString("\"lavache.wav\" \"http://www.nps.navy.mil/code32/vrml/lavache.wav\"")))))
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Chicken (5 lbs)\""))
                .setFontStyle((new autoclass.FontStyle()).setSize(.5))))
            .addChild((new autoclass.Sound()).setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource((new autoclass.AudioClip("HamsterSound")).setDescription("HamsterSound").setUrl(new autoclass.MFString("\"hamster.wav\" \"http://www.nps.navy.mil/code32/vrml/hamster.wav\""))))))))
    .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,-1.67)
      .addChild((new autoclass.Transform("aft")).setTranslation(5.0,5.0,15.0)
        .addChild((new autoclass.Transform()).setTranslation(-2.5,-4.5,-2.0)
          .addChild((new autoclass.Transform()).setUSE("launch")))))
    .addChild((new autoclass.Transform()).setTranslation(0.0,3.0,0.0)
      .addChild((new autoclass.Shape("plank"))
        .setGeometry((new autoclass.Box()).setSize(25.0,1.0,1.0))
        .setAppearance((new autoclass.Appearance("wood"))
          .setTexture((new autoclass.ImageTexture("woodTexture")).setUrl(new autoclass.MFString("\"wood.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif\"")))))
      .addChild((new autoclass.Transform("angledsupport")).setRotation(0.0,0.0,1.0,1.0).setTranslation(-5.0,10.0,0.0)
        .addChild((new autoclass.Shape()).setUSE("plank")))
      .addChild((new autoclass.Transform("angledsupport2")).setRotation(0.0,0.0,1.0,-1.0).setTranslation(5.0,10.0,0.0)
        .addChild((new autoclass.Shape()).setUSE("plank")))
      .addChild((new autoclass.Transform("verticalsupport")).setRotation(0.0,0.0,1.0,1.57).setScale(.9,1.0,1.0).setTranslation(0.0,11.0,0.0)
        .addChild((new autoclass.Shape()).setUSE("plank"))
        .addComments(" Main Verticle Support "))
      .addChild((new autoclass.Transform("horizontalsupport")).setScale(.4,1.0,1.0).setTranslation(0.0,10.0,0.0)
        .addChild((new autoclass.Shape()).setUSE("plank")))
      .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57).setScale(.6,1.0,1.0).setTranslation(0.0,5.0,10.0)
        .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,.4)
          .addChild((new autoclass.Shape()).setUSE("plank"))))
      .addChild((new autoclass.Transform("panel")).setTranslation(0.0,18.2,-.3)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()).setSize(5.0,5.0,.5))
          .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.6,2.5)
        .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCrossSection(this.Extrusion_7_122_crossSection).setEndCap(false).setSolid(false).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,6.0,0.0,0.0,-11.0,0.0]))))
            .setAppearance((new autoclass.Appearance()).setUSE("wood")))))
      .addChild((new autoclass.Transform("flinger")).setCenter(7.0,0.0,0.0).setRotation(0.0,0.0,1.0,.82).setScale(.9,1.0,1.0).setTranslation(-7.0,18.0,2.5)
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()).setSize(35.0,1.0,1.0))
            .setAppearance((new autoclass.Appearance()).setUSE("wood")))
          .addChild((new autoclass.Transform()).setTranslation(7.0,0.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(8.0,2.0,2.0))
              .setAppearance((new autoclass.Appearance()).setUSE("wood")))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setScale(.2,.2,.2).setTranslation(-15.0,-1.0,0.0)
          .addChild((new autoclass.Shape("Torus"))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setSpecularColor(1.0,1.0,1.0)))
            .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(this.Extrusion_7_137_crossSection).setEndCap(false).setSpine(this.Extrusion_7_137_spine)))
          .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,2.0)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance("rope"))
                .setTexture((new autoclass.ImageTexture()).setUSE("woodTexture")))
              .setGeometry((new autoclass.Sphere()).setRadius(1.5)))
            .addComments(" knott ")))
        .addComments(" The Unicorn ")
        .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.2).setScale(.2,.2,.2).setTranslation(-18.3,0.3,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Cylinder()).setHeight(10))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setSpecularColor(1.0,1.0,1.0))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,-2.5,0.0)
            .addComments(" The Unicorn ")
            .addChild((new autoclass.Shape()).setUSE("Torus"))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,-0.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(1.5))
                .setAppearance((new autoclass.Appearance()).setUSE("rope")))
              .addComments(" Knott ")))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.2).setTranslation(15.0,55.0,-11.0)
            .addChild((new autoclass.Transform()).setScale(5.0,5.0,5.0)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_156_crossSection).setEndCap(false).setSolid(false).setSpine(new autoclass.MFVec3f(java.newArray("float", [-15.2,1.4,2.2,-12.0,-.8,2.2]))))))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.7).setTranslation(-17.0,-4.5,0.0)
          .addChild((new autoclass.Transform()).setScale(.2,.2,.2)
            .addComments(" Knot ")
            .addChild((new autoclass.Shape()).setUSE("Torus"))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,1.7)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(1.5))
                .setAppearance((new autoclass.Appearance()).setUSE("rope"))))))
        .addChild((new autoclass.Transform("RnS"))
          .addChild((new autoclass.Transform("ropes"))
            .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-.82).setTranslation(7.0,-26.0,-2.5)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_169_crossSection).setEndCap(false).setSolid(false).setSpine(new autoclass.MFVec3f(java.newArray("float", [-33.0,.9,2.5,-18.5,1.9,2.55])))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(0.76).setCrossSection(this.Extrusion_9_172_crossSection).setEndCap(false).setSolid(false).setSpine(new autoclass.MFVec3f(java.newArray("float", [-35.7,-.8,2.5,-18.8,-.8,2.55])))))))
          .addChild((new autoclass.Transform("sling")).setRotation(0.0,0.0,1.0,-.82).setTranslation(-4.0,-15.3,0.0)
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,-1.57).setScale(1.0,1.3,1.0).setTranslation(.5,0.0,-1.0)
                .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
                  .addChild((new autoclass.Transform()).setScale(.3,.3,.3)
                    .addChild((new autoclass.Shape("halfsling"))
                      .setAppearance((new autoclass.Appearance("clear"))
                        .setMaterial((new autoclass.Material()).setTransparency(.5)))
                      .setGeometry((new autoclass.Extrusion()).setCrossSection(new autoclass.MFVec2f() /* splitting up long array to improve readability */
.append(new autoclass.MFVec2f(java.newArray("float", [0.0,0.0,0.0,5.0,.5,7.0,1.0,8.0,2.0,9.0,3.0,11.0,3.5,11.2,4.0,11.0,5.0,9.0,6.0,8.0])))
.append(new autoclass.MFVec2f(java.newArray("float", [6.5,7.0,6.7,5.0,6.7,0.0,0.0,0.0])))).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,.1,0.0,0.0])))))
                    .addChild((new autoclass.Transform()).setScale(.3,.3,.3).setTranslation(0.0,-3.5,11.5)
                      .addChild((new autoclass.Shape()).setUSE("Torus"))
                      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,2.0)
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                          .setGeometry((new autoclass.Sphere()).setRadius(1.5))))))
                  .addChild((new autoclass.Transform()).setScale(.3,.3,.3).setTranslation(2.0,0.0,0.0)
                    .addChild((new autoclass.Shape()).setUSE("halfsling"))
                    .addChild((new autoclass.Transform()).setScale(.3,.3,.3).setTranslation(0.0,-3.5,11.3)
                      .addChild((new autoclass.Shape()).setUSE("Torus"))
                      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,2.0)
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                          .setGeometry((new autoclass.Sphere()).setRadius(1.5))))))
                  .addChild((new autoclass.Transform()).setTranslation(1.0,-1.0,0.0)
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(0.785).setCrossSection(this.Extrusion_12_195_crossSection).setEndCap(false).setSolid(false).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,-1.0,0.0,0.0,1.0,0.0]))))
                      .setAppearance((new autoclass.Appearance()).setUSE("clear")))))
                .addChild((new autoclass.TouchSensor("LauncheeChoice")).setDescription("launcher choice")))
              .addChild((new autoclass.Transform("projectiletransform")).setScale(.01,.01,.01)
                .addChild((new autoclass.Switch("projectile")).setWhichChoice(0)
                  .addChild((new autoclass.Group())
                    .addChild((new autoclass.Transform()).setTranslation(0.0,.7,0.0)
                      .addChild((new autoclass.Shape())
                        .setGeometry((new autoclass.Sphere()).setRadius(.7))
                        .setAppearance((new autoclass.Appearance("black"))
                          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))))
                  .addChild((new autoclass.Group())
                    .addChild((new autoclass.Transform())
                      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"cow.wrl\" \"http://www.uoguelph.ca/~dchiu/cow.wrl\"")))))
                  .addChild((new autoclass.Group())
                    .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setScale(.4,.4,.4).setTranslation(0.0,.7,0.0)
                      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"vrml_ginger.wrl\" \"http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl\"")))))))))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,18.0,2.5)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Cylinder()).setHeight(8).setRadius(.4))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))
        .addComments(" Top Pivot "))
      .addChild((new autoclass.Transform("verticalweight"))
        .addChild((new autoclass.Transform()).setTranslation(4.0,18.0,1.8)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()).setSize(1.0,10.0,.5))
            .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
        .addChild((new autoclass.Transform()).setTranslation(4.0,18.0,3.2)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()).setSize(1.0,10.0,.5))
            .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
        .addChild((new autoclass.Transform()).setTranslation(4.0,14.0,2.5)
          .addComments(" CounterWeight ")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Cylinder()).setHeight(4).setRadius(1.5))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0)))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(4.0,22.0,2.5)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.3))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))))
      .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57).setScale(.2,.2,.2).setTranslation(-11.5,-1.0,2.0)
        .addChild((new autoclass.Transform("screw")).setRotation(1.0,0.0,0.0,1.57)
          .addChild((new autoclass.Shape()).setUSE("Torus"))
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,7.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(10).setRadius(.7))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setSpecularColor(1.0,1.0,1.0))))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,7.0)
          .addChild((new autoclass.Transform()).setUSE("screw")))
        .addComments(" Release Pin ")
        .addChild((new autoclass.Transform("Pin")).setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,-3.0)
          .addChild((new autoclass.Transform()).setUSE("screw"))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,5.0)
        .addChild((new autoclass.Shape()).setUSE("plank"))
        .addChild((new autoclass.Transform()).setUSE("angledsupport"))
        .addChild((new autoclass.Transform()).setUSE("angledsupport2"))
        .addChild((new autoclass.Transform()).setUSE("verticalsupport"))
        .addChild((new autoclass.Transform()).setUSE("horizontalsupport"))
        .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setScale(.6,1.0,1.0).setTranslation(0.0,-11.0,-2.5)
          .addChild((new autoclass.Transform()).setUSE("horizontalsupport")))
        .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-1.57).setScale(.6,1.0,1.0).setTranslation(0.0,5.0,-10.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,.4)
            .addChild((new autoclass.Shape()).setUSE("plank"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,.6)
          .addChild((new autoclass.Transform()).setUSE("panel"))))
      .addChild((new autoclass.Transform()).setTranslation(10.0,-1.0,2.5)
        .addChild((new autoclass.Shape("Axle"))
          .setGeometry((new autoclass.Box()).setSize(1.0,1.0,8.0))
          .setAppearance((new autoclass.Appearance()).setUSE("wood")))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,4.5)
          .addChild((new autoclass.Shape("wheel"))
            .setGeometry((new autoclass.Cylinder()).setRadius(2))
            .setAppearance((new autoclass.Appearance()).setUSE("wood")))
          .addChild((new autoclass.Shape("tracks"))
            .setGeometry((new autoclass.Sphere()).setRadius(1.5))
            .setAppearance((new autoclass.Appearance()).setUSE("black")))
          .addChild((new autoclass.Transform()).setTranslation(0.0,.55,0.0)
            .addChild((new autoclass.Shape("hub"))
              .setGeometry((new autoclass.Sphere()).setRadius(1.5))
              .setAppearance((new autoclass.Appearance()).setUSE("black")))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-4.5)
          .addChild((new autoclass.Shape()).setUSE("wheel"))
          .addChild((new autoclass.Shape()).setUSE("tracks"))
          .addChild((new autoclass.Transform()).setTranslation(0.0,-.55,0.0)
            .addChild((new autoclass.Shape()).setUSE("hub")))))
      .addChild((new autoclass.Transform()).setTranslation(-10.0,-1.0,2.5)
        .addChild((new autoclass.Shape()).setUSE("Axle"))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,4.5)
          .addChild((new autoclass.Shape()).setUSE("wheel"))
          .addChild((new autoclass.Shape()).setUSE("tracks"))
          .addChild((new autoclass.Transform()).setTranslation(0.0,.55,0.0)
            .addChild((new autoclass.Shape()).setUSE("hub"))))
        .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-4.5)
          .addChild((new autoclass.Shape()).setUSE("wheel"))
          .addChild((new autoclass.Shape()).setUSE("tracks"))
          .addChild((new autoclass.Transform()).setTranslation(0.0,-.55,0.0)
            .addChild((new autoclass.Shape()).setUSE("hub"))))
        .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,-.6).setTranslation(0.0,100.0,400.0)
          .addChild((new autoclass.Transform()).setTranslation(1.0,3.0,0.0)
            .addChild((new autoclass.Viewpoint()).setDescription("Side")))
          .addChild((new autoclass.Transform()).setUSE("launch"))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.TouchSensor()).setUSE("LauncheeChoice"))
            .addChild((new autoclass.Switch()).setUSE("projectilename").setWhichChoice(-1))
            .addChild((new autoclass.Transform()).setTranslation(2.5,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()).setSize(5.0,.5,.5))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(1))))))
          .addChild((new autoclass.Transform()).setScale(.5,.5,.5).setTranslation(0.0,-1.0,0.0)
            .addChild((new autoclass.TouchSensor()).setUSE("weightselector"))
            .addChild((new autoclass.Switch()).setUSE("Weight").setWhichChoice(-1))
            .addChild((new autoclass.Transform()).setTranslation(8.0,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()).setSize(17.0,1.0,.5))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setTransparency(1)))))))
        .addChild((new autoclass.Transform("ProjectileTransform")).setTranslation(14.25,1.25,0.0)
          .addChild((new autoclass.Switch()).setUSE("projectile").setWhichChoice(-1))
          .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,1.57).setTranslation(0.0,1.0,0.0)
            .addChild((new autoclass.Viewpoint()).setDescription("Projectile Cam").setPosition(0.0,0.0,15.0))))
        .addChild((new autoclass.Transform()).setTranslation(20.0,2.0,0.0)
          .addChild((new autoclass.Transform("Front")).setRotation(0.0,1.0,0.0,1.57)
            .addChild((new autoclass.Viewpoint()).setDescription("Fore"))))
        .addChild((new autoclass.Transform()).setTranslation(-8.0,4.0,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,-1.57)
            .addChild((new autoclass.Viewpoint()).setDescription("Aft"))))
        .addChild((new autoclass.Script("WeightScript")).setSourceCode("\n" + 
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
          .addField((new autoclass.field()).setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("whichchoice").setType("SFInt32").setAccessType("outputOnly"))
          .addField((new autoclass.field()).setName("CounterWeight").setType("SFFloat").setAccessType("outputOnly")))
        .addChild((new autoclass.Script("LauncheeScript")).setSourceCode("\n" + 
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
          .addField((new autoclass.field()).setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("whichchoice").setType("SFInt32").setAccessType("outputOnly"))
          .addField((new autoclass.field()).setName("ProjectileWeight").setType("SFFloat").setAccessType("outputOnly")))
        .addChild((new autoclass.Script("PigdogMonkScript")).setSourceCode("\n" + 
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
          .addField((new autoclass.field()).setName("set_boolean").setType("SFBool").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("whichchoice").setType("SFInt32").setAccessType("outputOnly")))
        .addChild((new autoclass.Script("Mover")).setSourceCode("\n" + 
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
          .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("set_MassCounterWeight").setType("SFFloat").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("set_MassProjectileWeight").setType("SFFloat").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("MassCounterWeight").setType("SFFloat").setAccessType("initializeOnly").setValue("1"))
          .addField((new autoclass.field()).setName("MassProjectileWeight").setType("SFFloat").setAccessType("initializeOnly").setValue("1"))
          .addField((new autoclass.field()).setName("transparent").setType("SFVec3f").setAccessType("outputOnly"))
          .addField((new autoclass.field()).setName("value_changed").setType("SFVec3f").setAccessType("outputOnly")))))
    .addChild((new autoclass.TimeSensor("clock")).setCycleInterval(10))
    .addChild((new autoclass.PositionInterpolator("verticalweightpath")).setKey(java.newArray("float", [0.0,.1,.2,.2,.3,.9])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [1.4,1.6,0.0,1.,-8.0,0.0,-3.5,-12.0,0.0,-3.5,-12.0,0.0,1.2,-8.0,0.0,1.4,1.6,0.0]))))
    .addChild((new autoclass.OrientationInterpolator("flingerangles")).setKey(java.newArray("float", [0.0,.1,.2,.2,.3,.9])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,.82,0.0,0.0,1.0,-.77,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-.77,0.0,0.0,1.0,.82]))))
    .addChild((new autoclass.PositionInterpolator("pinpath")).setKey(java.newArray("float", [0.0,.01,.95,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,-3.0,0.0,0.0,-10.0,0.0,0.0,-10.0,0.0,0.0,-3.0]))))
    .addChild((new autoclass.OrientationInterpolator("RnSAngels")).setKey(java.newArray("float", [0.0,.7,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,-3.14,0.0,0.0,1.0,0.0]))))
    .addChild((new autoclass.PositionInterpolator("invisiable")).setKey(java.newArray("float", [0.0,.2,.98,.99])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [1.0,1.0,1.0,.01,.01,.01,.01,.01,.01,1.0,1.0,1.0]))))
    .addChild((new autoclass.ROUTE()).setFromNode("clock").setFromField("fraction_changed").setToNode("invisiable").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("invisiable").setFromField("value_changed").setToNode("projectiletransform").setToField("set_scale"))
    .addChild((new autoclass.ROUTE()).setFromNode("WeightScript").setFromField("CounterWeight").setToNode("Mover").setToField("set_MassCounterWeight"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeScript").setFromField("ProjectileWeight").setToNode("Mover").setToField("set_MassProjectileWeight"))
    .addChild((new autoclass.ROUTE()).setFromNode("clock").setFromField("fraction_changed").setToNode("Mover").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Mover").setFromField("value_changed").setToNode("ProjectileTransform").setToField("set_translation"))
    .addChild((new autoclass.ROUTE()).setFromNode("Mover").setFromField("transparent").setToNode("ProjectileTransform").setToField("set_scale"))
    .addChild((new autoclass.ROUTE()).setFromNode("Launch").setFromField("touchTime").setToNode("clock").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("Launch").setFromField("isActive").setToNode("PigdogMonkScript").setToField("set_boolean"))
    .addChild((new autoclass.ROUTE()).setFromNode("Launch").setFromField("touchTime").setToNode("PigDogSound").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("Launch").setFromField("touchTime").setToNode("MonkSound").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("PigdogMonkScript").setFromField("whichchoice").setToNode("PigdogMonk").setToField("whichChoice"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HolyHandGrenadeSound").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("CowSound").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HamsterSound").setToField("set_startTime"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeChoice").setFromField("isActive").setToNode("LauncheeScript").setToField("set_boolean"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectile").setToField("whichChoice"))
    .addChild((new autoclass.ROUTE()).setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectilename").setToField("whichChoice"))
    .addChild((new autoclass.ROUTE()).setFromNode("weightselector").setFromField("isActive").setToNode("WeightScript").setToField("set_boolean"))
    .addChild((new autoclass.ROUTE()).setFromNode("WeightScript").setFromField("whichchoice").setToNode("Weight").setToField("whichChoice"))
    .addChild((new autoclass.ROUTE()).setFromNode("clock").setFromField("fraction_changed").setToNode("flingerangles").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("flingerangles").setFromField("value_changed").setToNode("flinger").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("clock").setFromField("fraction_changed").setToNode("verticalweightpath").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("verticalweightpath").setFromField("value_changed").setToNode("verticalweight").setToField("set_translation"))
    .addChild((new autoclass.ROUTE()).setFromNode("clock").setFromField("fraction_changed").setToNode("pinpath").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("pinpath").setFromField("value_changed").setToNode("Pin").setToField("set_translation")));
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
		var testObject = new Trebuchet();
		console.log ("Trebuchet execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new Trebuchet().main();