package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> 3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections. </p>
 <p> Related links:  source WinterAndSpringTest.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
			<td> 1 May 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 24 September 2023 </td>
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
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman
 */

public class WinterAndSpringTest
{
	/** Default constructor to create this object. */
	public WinterAndSpringTest ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("WinterAndSpringTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 May 2023"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("24 September 2023"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"X3D Humanoid LOA3 skeleton plus others","Lots points"}).setTitle("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"))
    .addChild(new NavigationInfo("Start_NavigationInfo"))
    .addChild(new Viewpoint().setDescription("Male").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,-2.0))
    .addChild(new Background("gray_Background"))
    .addChild(new Background("dark_gray_Background"))
    .addChild(new Background("black_Background"))
    .addChild(new Background("blue_Background"))
    .addChild(new SpotLight("light1").setAmbientIntensity(0.7).setBeamWidth(1.5).setColor(0.8,0.8,1.0).setCutOffAngle(0.6).setDirection(0.0,0.0,0.0).setLocation(0.0,3.0,3.0).setRadius(10))
    .addChild(new PointLight("light2").setAmbientIntensity(0.7).setColor(0.8,0.8,1.0).setLocation(0.0,10.0,-7.0))
    .addComments(" External from the Humanoid viewpoints ")
    .addChild(new Viewpoint("Scene_InclinedView").setDescription("Scene_Inclined View").setCenterOfRotation(0.0,0.85,0.0).setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,3.06))
    .addChild(new Viewpoint("Scene_IFrontView").setDescription("Scene_Front View").setCenterOfRotation(0.0,0.8,0.0).setPosition(0.0,0.8,2.58))
    .addChild(new Viewpoint("Scene_OldMan_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-2.6,1.5,1.0))
    .addChild(new Viewpoint("Scene_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-5.0,1.5,1.0))
    .addChild(new Viewpoint("Scene_Full_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-10.0,1.5,1.0))
    .addChild(new Viewpoint("Scene_OneBush_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-20.0,1.5,1.0))
    .addChild(new Viewpoint("Scene_TwoBush_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(-10.0,1.5,1.0))
    .addChild(new Viewpoint("Scene_BackView").setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-5.0))
    .addChild(new Viewpoint("Scene_OldMan_BackView").setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-2.5))
    .addChild(new Viewpoint("Scene_Full_BackView").setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,15.0,3.14).setPosition(0.0,1.5,-20.0))
    .addChild(new Viewpoint("Scene_TopView").setDescription("Scene_Top View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(1.0,0.0,0.0,-1.5708).setPosition(0.0,3.5,0.0))
    .addChild(new Group("OldMan_Humanoid")
      .addChild(new HAnimHumanoid("OldMan").setName("Walk").setLoa(3).setVersion("2.0")
        .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
          .setMetadata(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new String[] {"ignore"})))
        .addSkeleton(new HAnimJoint("OldMan_humanoid_root").setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addComments(" TODO center='x 0.9155 z' ")
          .addChild(new HAnimSegment("OldMan_sacrum").setName("sacrum")
            .addChild(new HAnimSite("OldMan_RootBack_view").setName("RootBack_view")
              .addChild(new Transform("hanimcordsys").setScale(0.175,0.175,0.175)
                .addChild(new Viewpoint("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                .addChild(new Shape("AxisLinesShape")
                  .addComments(" RGB lines showing XYZ axes ")
                  .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0})))
                    .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0})))))
                .addChild(new Shape("OldMan_Shape")
                  .setAppearance(new Appearance("OldMan_skin_Appearance")
                    .setMaterial(new Material("OldMan_skin_Material").setDiffuseColor(0.3,0.3,0.6).setEmissiveColor(0.3,0.3,0.6))
                    .setTexture(new ImageTexture("OldManSkinImageTexture").setUrl(new String[] {"OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"}))
                    .setTextureTransform(new TextureTransform("KickTextureTransform")))
                  .setGeometry(new IndexedFaceSet("OldMan_skin_IndexedFaceSet").setDEF("OldMan_skin_IndexedFaceSet"))))))
          .addChild(new HAnimJoint("OldMan_sacroiliac").setName("sacroiliac").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" TODO center='x 0.952 z' ")
            .addComments(" High hip ")
            .addChild(new HAnimJoint("OldMan_l_hip").setName("l_hip").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" TODO center='x 0.879 z' Low hip ")
              .addChild(new HAnimJoint("OldMan_l_knee").setName("l_knee").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addComments(" center='x 0.461 z' ")
                .addChild(new HAnimJoint("OldMan_l_talocrural").setName("l_talocrural").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addComments(" Ankle ")
                  .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("Joe_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(0.115,0.02,0.122).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
              .addChild(new HAnimJoint("OldMan_r_hip").setName("l_hip").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addComments(" Low hip ")
                .addChild(new HAnimJoint("OldMan_r_knee").setName("l_knee").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                .addChild(new HAnimJoint("OldMan_r_talocrural").setName("l_talocrural").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addComments(" Ankle ")
                  .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(-0.1,0.015,-0.01).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {374,375,376}).setSkinCoordWeight(new double[] {1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-0.115,0.037,0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {377,378,379,380}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("Joe_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.1,0.01,0.14).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {381,382,383,384,385,386,387,388,389}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))
            .addChild(new HAnimJoint("OldMan_vl5").setName("vl5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" Abdomen ")
              .addChild(new HAnimJoint("MeshName_vl4").setName("vl4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("OldMan_vl3").setName("vl3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addComments(" center='x 1.098 z' ")
                  .addComments(" Low=' ist=' ")
                  .addChild(new HAnimJoint("MeshName_vl2").setName("vl2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("OldMan_vl1").setName("vl1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addComments(" center='x 1.171 z' ")
                      .addComments(" High waist ")
                      .addChild(new HAnimJoint("MeshName_vt12").setName("vt12").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("OldMan_vt11").setName("vt11").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addComments(" Ribcage=' ")
                          .addChild(new HAnimJoint("MeshName_vt10").setName("vt10").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                            .addChild(new HAnimJoint("MeshName_vt9").setName("vt9").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                              .addChild(new HAnimJoint("MeshName_vt8").setName("vt8").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                .addChild(new HAnimJoint("OldMan_vt7").setName("vt7").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                  .addComments(" Sternum=' ")
                                  .addChild(new HAnimJoint("MeshName_vt6").setName("vt6").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                    .addChild(new HAnimJoint("MeshName_vt5").setName("vt5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                      .addChild(new HAnimJoint("OldMan_vt4").setName("vt4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                        .addComments(" Chest ")
                                        .addChild(new HAnimJoint("MeshName_vt3").setName("vt3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                          .addChild(new HAnimJoint("OldMan_vt2").setName("vt2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addComments(" High Chest ")
                                            .addChild(new HAnimJoint("MeshName_vt1").setName("vt1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("OldMan_vc7").setName("vc7").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addComments(" Low neck ")
                                                .addChild(new HAnimJoint("MeshName_vc6").setName("vc6").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("MeshName_vc5").setName("vc5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("OldMan_vc4").setName("vc4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addComments(" Mid=' ck=' ")
                                                      .addChild(new HAnimJoint("MeshName_vc3").setName("vc3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("MeshName_vc2").setName("vc2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("OldMan_vc1").setName("vc1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addComments(" High=' ck=' ")
                                                            .addChild(new HAnimJoint("OldMan_skullbase").setName("skullbase").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                              .addDisplacers(new HAnimDisplacer("Joe_skull_tip_raiser_action").setName("skull_tip_raiser_action").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9}).setDisplacements(new MFVec3f(new double[] {0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15})))
                                                              .addChild(new HAnimJoint("OldMan_l_eyelid_joint").setName("l_eyelid_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_l_eyeball_joint").setName("l_eyeball_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_l_eyebrow_joint").setName("l_eyebrow_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_r_eyelid_joint").setName("r_eyelid_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_r_eyeball_joint").setName("r_eyeball_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_r_eyebrow_joint").setName("r_eyebrow_joint").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                              .addChild(new HAnimJoint("OldMan_temporomandibular").setName("temporomandibular").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                              .addChild(new HAnimJoint("OldMan_l_acromioclavicular").setName("l_acromioclavicular").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("OldMan_l_sternoclavicular").setName("l_sternoclavicular").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("OldMan_l_shoulder").setName("l_shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("OldMan_l_elbow").setName("l_elbow").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("OldMan_l_radiocarpal").setName("l_radiocarpal").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("OldMan_l_carpometacarpal_1").setName("l_carpometacarpal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("OldMan_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))
                                                          .addChild(new HAnimJoint("OldMan_l_carpometacarpal_2").setName("l_carpometacarpal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                              .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                .addChild(new HAnimJoint("OldMan_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                            .addChild(new HAnimJoint("OldMan_l_carpometacarpal_3").setName("l_carpometacarpal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                              .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                  .addChild(new HAnimJoint("OldMan_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                              .addChild(new HAnimJoint("OldMan_l_carpometacarpal_4").setName("l_carpometacarpal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                  .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                    .addChild(new HAnimJoint("OldMan_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                                .addChild(new HAnimJoint("OldMan_l_carpometacarpal_5").setName("l_carpometacarpal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                  .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                    .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                      .addChild(new HAnimJoint("OldMan_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))))
                                                        .addChild(new HAnimJoint("OldMan_r_sternoclavicular").setName("r_sternoclavicular").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("OldMan_r_acromioclavicular").setName("r_acromioclavicular").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("OldMan_r_shoulder").setName("r_shoulder").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                              .addChild(new HAnimJoint("OldMan_r_elbow").setName("r_elbow").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                .addChild(new HAnimJoint("OldMan_r_radiocarpal").setName("r_radiocarpal").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                  .addChild(new HAnimJoint("OldMan_r_carpometacarpal_1").setName("r_carpometacarpal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                    .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                      .addChild(new HAnimJoint("OldMan_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))
                                                                    .addChild(new HAnimJoint("OldMan_r_carpometacarpal_2").setName("r_carpometacarpal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                      .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                        .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                          .addChild(new HAnimJoint("OldMan_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                                      .addChild(new HAnimJoint("OldMan_r_carpometacarpal_3").setName("r_carpometacarpal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                        .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                          .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                            .addChild(new HAnimJoint("OldMan_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                                        .addChild(new HAnimJoint("OldMan_r_carpometacarpal_4").setName("r_carpometacarpal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                          .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                            .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                              .addChild(new HAnimJoint("OldMan_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                                          .addChild(new HAnimJoint("OldMan_r_carpometacarpal_5").setName("r_carpometacarpal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                            .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                              .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                                                .addChild(new HAnimJoint("OldMan_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))))))))))))))))))))))))))))))))))));
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
	 * @return WinterAndSpringTest model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new WinterAndSpringTest().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.WinterAndSpringTest\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.WinterAndSpringTest self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./WinterAndSpringTest_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./WinterAndSpringTest_JavaExport.x3d"; 
                String filenameX3DV = "./WinterAndSpringTest_JavaExport.x3dv"; 
                String filenameJSON = "./WinterAndSpringTest_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
