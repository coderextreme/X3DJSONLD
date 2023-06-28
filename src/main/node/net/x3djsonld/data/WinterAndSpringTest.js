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
 * <p> 3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections. </p>
 <p> Related links: WinterAndSpringTest.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.WinterAndSpringTest&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d">WinterAndSpringTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> May through September 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 2 June 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/../license.html">../license.html</a> </td>
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

	* @author Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman
 */

function WinterAndSpringTest
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
WinterAndSpringTest.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: HAnimDisplacer DEF='Joe_skull_tip_raiser_action' displacements field, scene-graph level=32, element #61, 30 total numbers made up of 10 3-tuple values */
	this.Joe_skull_tip_raiser_action_32_61_displacements = new autoclass.MFVec3f(java.newArray("float", [0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("WinterAndSpringTest.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("May through September 2023"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("2 June 2023"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"X3D Humanoid LOA3 skeleton plus others\" \"Lots points\"")).setTitle("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"))
    .addChild((new autoclass.NavigationInfo("Start_NavigationInfo")).setHeadlight(false))
    .addChild((new autoclass.Viewpoint()).setDescription("Male").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,-2.0))
    .addChild((new autoclass.Background("gray_Background")))
    .addChild((new autoclass.Background("dark_gray_Background")))
    .addChild((new autoclass.Background("black_Background")))
    .addChild((new autoclass.Background("blue_Background")))
    .addChild((new autoclass.SpotLight("light1")).setAmbientIntensity(0.7).setBeamWidth(1.5).setColor(0.8,0.8,1.0).setCutOffAngle(0.6).setDirection(0.0,0.0,0.0).setLocation(0.0,3.0,3.0).setRadius(10))
    .addChild((new autoclass.PointLight("light2")).setAmbientIntensity(0.7).setColor(0.8,0.8,1.0).setLocation(0.0,10.0,-7.0))
    .addComments(" External from the Humanoid viewpoints ")
    .addChild((new autoclass.Viewpoint("Scene_InclinedView")).setDescription("Scene_Inclined View").setCenterOfRotation(0.0,0.85,0.0).setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,3.06))
    .addChild((new autoclass.Viewpoint("Scene_IFrontView")).setDescription("Scene_Front View").setCenterOfRotation(0.0,0.8,0.0).setPosition(0.0,0.8,2.58))
    .addChild((new autoclass.Viewpoint("Scene_OldMan_ISideView")).setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-2.6,1.5,1.0))
    .addChild((new autoclass.Viewpoint("Scene_ISideView")).setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-5.0,1.5,1.0))
    .addChild((new autoclass.Viewpoint("Scene_Full_ISideView")).setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-10.0,1.5,1.0))
    .addChild((new autoclass.Viewpoint("Scene_OneBush_ISideView")).setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-20.0,1.5,1.0))
    .addChild((new autoclass.Viewpoint("Scene_TwoBush_ISideView")).setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-10.0,1.5,1.0))
    .addChild((new autoclass.Viewpoint("Scene_BackView")).setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-5.0))
    .addChild((new autoclass.Viewpoint("Scene_OldMan_BackView")).setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-2.5))
    .addChild((new autoclass.Viewpoint("Scene_Full_BackView")).setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,15.0,3.14).setPosition(0.0,1.5,-20.0))
    .addChild((new autoclass.Viewpoint("Scene_TopView")).setDescription("Scene_Top View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(1.0,0.0,0.0,-1.5708).setPosition(0.0,3.5,0.0))
    .addChild((new autoclass.Group("OldMan_Humanoid"))
      .addChild((new autoclass.HAnimHumanoid("OldMan")).setName("Walk").setLoa(3).setVersion("2.0")
        .addChild((new autoclass.MetadataSet()).setName("warnings").setReference("HAnim")
          .addValue((new autoclass.MetadataString()).setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new autoclass.MFString("\"ignore\""))))
        .addSkeleton((new autoclass.HAnimJoint("OldMan_humanoid_root")).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addComments(" TODO center='x 0.9155 z' ")
          .addChild((new autoclass.HAnimSegment("OldMan_sacrum")).setName("sacrum")
            .addChild((new autoclass.HAnimSite("OldMan_RootBack_view")).setName("RootBack_view")
              .addChild((new autoclass.Transform("hanimcordsys")).setScale(0.175,0.175,0.175)
                .addChild((new autoclass.Viewpoint("ViewBodyRootAxes")).setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                .addChild((new autoclass.Shape("AxisLinesShape"))
                  .addComments(" RGB lines showing XYZ axes ")
                  .setGeometry((new autoclass.IndexedLineSet()).setColorPerVertex(false).setColorIndex(java.newArray("int", [0,1,2])).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0]))))
                    .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0]))))))
                .setSkin((new autoclass.Shape("OldMan_Shape"))
                  .setAppearance((new autoclass.Appearance("OldMan_skin_Appearance"))
                    .setMaterial((new autoclass.Material("OldMan_skin_Material")).setDiffuseColor(0.3,0.3,0.6).setEmissiveColor(0.3,0.3,0.6))
                    .setTexture((new autoclass.ImageTexture("OldManSkinImageTexture")).setUrl(new autoclass.MFString("\"OldManBodyTexture29.png\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png\"")))
                    .setTextureTransform((new autoclass.TextureTransform("KickTextureTransform"))))
                  .setGeometry((new autoclass.IndexedFaceSet("OldMan_skin_IndexedFaceSet")).setDEF("OldMan_skin_IndexedFaceSet"))))))
          .addChild((new autoclass.HAnimJoint("OldMan_sacroiliac")).setName("sacroiliac").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addComments(" TODO center='x 0.952 z' ")
            .addComments(" High hip ")
            .addChild((new autoclass.HAnimJoint("OldMan_l_hip")).setName("l_hip").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addComments(" TODO center='x 0.879 z' Low hip ")
              .addChild((new autoclass.HAnimJoint("OldMan_l_knee")).setName("l_knee").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addComments(" center='x 0.461 z' ")
                .addChild((new autoclass.HAnimJoint("OldMan_l_talocrural")).setName("l_talocrural").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addComments(" Ankle ")
                  .addChild((new autoclass.HAnimJoint("Joe_l_tarsometatarsal_2")).setName("l_tarsometatarsal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("Joe_l_metatarsophalangeal_2")).setName("l_metatarsophalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("Joe_l_tarsal_distal_interphalangeal_2")).setName("l_tarsal_distal_interphalangeal_2").setCenter(0.115,0.02,0.122).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
              .addChild((new autoclass.HAnimJoint("OldMan_r_hip")).setName("l_hip").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addComments(" Low hip ")
                .addChild((new autoclass.HAnimJoint("OldMan_r_knee")).setName("l_knee").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                .addChild((new autoclass.HAnimJoint("OldMan_r_talocrural")).setName("l_talocrural").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addComments(" Ankle ")
                  .addChild((new autoclass.HAnimJoint("Joe_r_tarsometatarsal_2")).setName("r_tarsometatarsal_2").setCenter(-0.1,0.015,-0.01).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [374,375,376])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("Joe_r_metatarsophalangeal_2")).setName("r_metatarsophalangeal_2").setCenter(-0.115,0.037,0.09).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [377,378,379,380])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("Joe_r_tarsal_distal_interphalangeal_2")).setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.1,0.01,0.14).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [381,382,383,384,385,386,387,388,389])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))
            .addChild((new autoclass.HAnimJoint("OldMan_vl5")).setName("vl5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addComments(" Abdomen ")
              .addChild((new autoclass.HAnimJoint("MeshName_vl4")).setName("vl4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimJoint("OldMan_vl3")).setName("vl3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addComments(" center='x 1.098 z' ")
                  .addComments(" Low=' ist=' ")
                  .addChild((new autoclass.HAnimJoint("MeshName_vl2")).setName("vl2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("OldMan_vl1")).setName("vl1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addComments(" center='x 1.171 z' ")
                      .addComments(" High waist ")
                      .addChild((new autoclass.HAnimJoint("MeshName_vt12")).setName("vt12").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("OldMan_vt11")).setName("vt11").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addComments(" Ribcage=' ")
                          .addChild((new autoclass.HAnimJoint("MeshName_vt10")).setName("vt10").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                            .addChild((new autoclass.HAnimJoint("MeshName_vt9")).setName("vt9").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                              .addChild((new autoclass.HAnimJoint("MeshName_vt8")).setName("vt8").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                .addChild((new autoclass.HAnimJoint("OldMan_vt7")).setName("vt7").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                  .addComments(" Sternum=' ")
                                  .addChild((new autoclass.HAnimJoint("MeshName_vt6")).setName("vt6").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                    .addChild((new autoclass.HAnimJoint("MeshName_vt5")).setName("vt5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                      .addChild((new autoclass.HAnimJoint("OldMan_vt4")).setName("vt4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                        .addComments(" Chest ")
                                        .addChild((new autoclass.HAnimJoint("MeshName_vt3")).setName("vt3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                          .addChild((new autoclass.HAnimJoint("OldMan_vt2")).setName("vt2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                            .addComments(" High Chest ")
                                            .addChild((new autoclass.HAnimJoint("MeshName_vt1")).setName("vt1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.HAnimJoint("OldMan_vc7")).setName("vc7").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addComments(" Low neck ")
                                                .addChild((new autoclass.HAnimJoint("MeshName_vc6")).setName("vc6").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.HAnimJoint("MeshName_vc5")).setName("vc5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.HAnimJoint("OldMan_vc4")).setName("vc4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addComments(" Mid=' ck=' ")
                                                      .addChild((new autoclass.HAnimJoint("MeshName_vc3")).setName("vc3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("MeshName_vc2")).setName("vc2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("OldMan_vc1")).setName("vc1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addComments(" High=' ck=' ")
                                                            .addChild((new autoclass.HAnimJoint("OldMan_skullbase")).setName("skullbase").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .setDisplacers((new autoclass.HAnimDisplacer("Joe_skull_tip_raiser_action")).setName("skull_tip_raiser_action").setCoordIndex(java.newArray("int", [0,1,2,3,4,5,6,7,8,9])).setDisplacements(this.Joe_skull_tip_raiser_action_32_61_displacements))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_eyelid_joint")).setName("l_eyelid_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_eyeball_joint")).setName("l_eyeball_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_eyebrow_joint")).setName("l_eyebrow_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_eyelid_joint")).setName("r_eyelid_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_eyeball_joint")).setName("r_eyeball_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_eyebrow_joint")).setName("r_eyebrow_joint").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_temporomandibular")).setName("temporomandibular").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))))))
                                              .addChild((new autoclass.HAnimJoint("OldMan_l_acromioclavicular")).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.HAnimJoint("OldMan_l_sternoclavicular")).setName("l_acromioclavicular").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.HAnimJoint("OldMan_l_shoulder")).setName("l_shoulder").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.HAnimJoint("OldMan_l_elbow")).setName("l_elbow").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("OldMan_l_radiocarpal")).setName("l_radiocarpal").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("OldMan_l_carpometacarpal_1")).setName("l_carpometacarpal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("OldMan_l_metacarpophalangeal_1")).setName("l_metacarpophalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_interphalangeal_1")).setName("l_carpal_interphalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))
                                                          .addChild((new autoclass.HAnimJoint("OldMan_l_carpometacarpal_2")).setName("l_carpometacarpal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("OldMan_l_metacarpophalangeal_2")).setName("l_metacarpophalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_2")).setName("l_carpal_proximal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_distal_interphalangeal_2")).setName("l_carpal_distal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                            .addChild((new autoclass.HAnimJoint("OldMan_l_carpometacarpal_3")).setName("l_carpometacarpal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_metacarpophalangeal_3")).setName("l_metacarpophalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_3")).setName("l_carpal_proximal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                  .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_distal_interphalangeal_3")).setName("l_carpal_distal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_l_carpometacarpal_4")).setName("l_carpometacarpal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.HAnimJoint("OldMan_l_metacarpophalangeal_4")).setName("l_metacarpophalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                  .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_4")).setName("l_carpal_proximal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                    .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_distal_interphalangeal_4")).setName("l_carpal_distal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                                .addChild((new autoclass.HAnimJoint("OldMan_l_carpometacarpal_5")).setName("l_carpometacarpal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                  .addChild((new autoclass.HAnimJoint("OldMan_l_metacarpophalangeal_5")).setName("l_metacarpophalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                    .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_5")).setName("l_carpal_proximal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                      .addChild((new autoclass.HAnimJoint("OldMan_l_carpal_distal_interphalangeal_5")).setName("l_carpal_distal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))))
                                                        .addChild((new autoclass.HAnimJoint("OldMan_r_sternoclavicular")).setName("r_sternoclavicular").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("OldMan_r_acromioclavicular")).setName("r_acromioclavicular").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("OldMan_r_shoulder")).setName("r_shoulder").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_elbow")).setName("r_elbow").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.HAnimJoint("OldMan_r_radiocarpal")).setName("r_radiocarpal").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                  .addChild((new autoclass.HAnimJoint("OldMan_r_carpometacarpal_1")).setName("r_carpometacarpal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                    .addChild((new autoclass.HAnimJoint("OldMan_r_metacarpophalangeal_1")).setName("r_metacarpophalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                      .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_interphalangeal_1")).setName("r_carpal_interphalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))
                                                                    .addChild((new autoclass.HAnimJoint("OldMan_r_carpometacarpal_2")).setName("r_carpometacarpal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                      .addChild((new autoclass.HAnimJoint("OldMan_r_metacarpophalangeal_2")).setName("r_metacarpophalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                        .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_2")).setName("r_carpal_proximal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                          .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_distal_interphalangeal_2")).setName("r_carpal_distal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                                      .addChild((new autoclass.HAnimJoint("OldMan_r_carpometacarpal_3")).setName("r_carpometacarpal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                        .addChild((new autoclass.HAnimJoint("OldMan_r_metacarpophalangeal_3")).setName("r_metacarpophalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                          .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_3")).setName("r_carpal_proximal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                            .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_distal_interphalangeal_3")).setName("r_carpal_distal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                                        .addChild((new autoclass.HAnimJoint("OldMan_r_carpometacarpal_4")).setName("r_carpometacarpal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                          .addChild((new autoclass.HAnimJoint("OldMan_r_metacarpophalangeal_4")).setName("r_metacarpophalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                            .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_4")).setName("r_carpal_proximal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_distal_interphalangeal_4")).setName("r_carpal_distal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))
                                                                          .addChild((new autoclass.HAnimJoint("OldMan_r_carpometacarpal_5")).setName("r_carpometacarpal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                            .addChild((new autoclass.HAnimJoint("OldMan_r_metacarpophalangeal_5")).setName("r_metacarpophalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                              .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_5")).setName("r_carpal_proximal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                                .addChild((new autoclass.HAnimJoint("OldMan_r_carpal_distal_interphalangeal_5")).setName("r_carpal_distal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))))))))))))))))))))))))))))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return WinterAndSpringTest model
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
		var testObject = new WinterAndSpringTest();
		console.log ("WinterAndSpringTest execution self-validation test results: " + testObject.validateSelf());
	}
}
new WinterAndSpringTest().main();