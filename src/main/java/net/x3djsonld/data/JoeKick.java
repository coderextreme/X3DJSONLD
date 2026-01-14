package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models. </p>
 <p> Related links:  source JoeKick.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JoeKick&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d">JoeKick.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe D. Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 January 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 12 January 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 April 2024 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Roy Walmsley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/../Characters/JoeSkinTexcoordDisplacerKick.x3d">../Characters/JoeSkinTexcoordDisplacerKick.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> BS studio translation from .x3dv by Joe using BS Contact </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/../license.html">../license.html</a> </td>
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

	* @author Joe D. Williams
 */

public class JoeKick
{
	/** Default constructor to create this object. */
	public JoeKick ()
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
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("JoeKick.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe D. Williams"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("9 January 2004"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("12 January 2017"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 April 2024"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Roy Walmsley"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("../Characters/JoeSkinTexcoordDisplacerKick.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("BS studio translation from .x3dv by Joe using BS Contact"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"}).setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"))
    .addChild(new NavigationInfo("Start_NavigationInfo").setSpeed(2.5))
    .addChild(new Background("blue_Background"))
    .addChild(new SpotLight("light1").setAmbientIntensity(0.7).setBeamWidth(1.5).setColor(0.8,0.8,1.0).setCutOffAngle(0.6).setDirection(0.0,0.0,0.0).setLocation(0.0,3.0,3.0).setRadius(10))
    .addChild(new PointLight("light2").setAmbientIntensity(0.7).setColor(0.8,0.8,1.0).setLocation(0.0,10.0,-7.0))
    .addComments(" External from the Humanoid viewpoints ")
    .addChild(new Viewpoint("Scene_InclinedView").setDescription("Scene_Inclined View").setCenterOfRotation(0.0,0.85,0.0).setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,3.06))
    .addChild(new Viewpoint("Scene_IFrontView").setDescription("Scene_Front View").setCenterOfRotation(0.0,0.8,0.0).setPosition(0.0,0.8,2.58))
    .addChild(new Viewpoint("Scene_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0,0.8,0.0).setOrientation(0.0,1.0,0.0,1.5708).setPosition(2.6,0.8,0.0))
    .addChild(new Viewpoint("Scene_BackView").setDescription("Scene_Back View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-3.0))
    .addChild(new Viewpoint("Scene_TopView").setDescription("Scene_Top View").setCenterOfRotation(0.0,1.5,0.0).setOrientation(1.0,0.0,0.0,-1.5708).setPosition(0.0,3.5,0.0))
    .addChild(new Group("Joe_Humanoid")
      .addChild(new HAnimHumanoid("Joe_Kick").setName("Kick").setLoa(4).setVersion("2.0")
        .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
          .setMetadata(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new String[] {"ignore"})))
        .addSkeleton(new HAnimJoint("Joe_humanoid_root").setName("humanoid_root").setCenter(0.0,0.875,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("Joe_sacrum").setName("sacrum")
            .addChild(new HAnimSite("Joe_RootFront_view").setName("RootFront_view")
              .addChild(new Transform("hanimcordsys").setScale(0.175,0.175,0.175)
                .addChild(new Viewpoint("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                .addChild(new Shape("AxisLinesShape")
                  .addComments(" RGB lines showing XYZ axes ")
                  .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0})))
                    .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}))))))))
          .addChild(new HAnimJoint("Joe_sacroiliac").setName("sacroiliac").setCenter(0.0,0.92,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("Joe_l_hip").setName("l_hip").setCenter(0.1,0.92,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {89,90,94,95,96,97}).setSkinCoordWeight(new double[] {0.65,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("Joe_l_knee").setName("l_knee").setCenter(0.115,0.466,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {334,335,336,337,338,339,340,341}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("Joe_l_talocrural").setName("l_talocrural").setCenter(0.115,0.069,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {342,343,344,345}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(0.115,0.031,0.03).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {346,347,348,71}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(0.115,0.037,0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {349,350,351,352}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("Joe_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(0.115,0.02,0.122).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {353,354,355,356,357,358,359,360,361}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))
            .addChild(new HAnimJoint("Joe_r_hip").setName("r_hip").setCenter(-0.1,0.92,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {91,92,98,99,100,101,362,363}).setSkinCoordWeight(new double[] {0.65,1.0,0.8,1.0,1.0,1.0,0.4,0.8}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("Joe_r_knee").setName("r_knee").setCenter(-0.05,0.466,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {362,363,364,365,366,367,368,369,98}).setSkinCoordWeight(new double[] {0.6,0.2,1.0,1.0,1.0,1.0,1.0,1.0,0.2}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("Joe_r_talocrural").setName("r_talocrural").setCenter(-0.115,0.069,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {370,371,372,373}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(-0.1,0.015,-0.01).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {374,375,376}).setSkinCoordWeight(new double[] {1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-0.115,0.037,0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {377,378,379,380}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("Joe_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.1,0.01,0.14).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {381,382,383,384,385,386,387,388,389}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))
          .addChild(new HAnimJoint("Joe_vl5").setName("vl5").setCenter(0.0,1.045,-0.095).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {28,76}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("Joe_vl4").setName("vl4").setCenter(0.0,1.068,-0.085).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("Joe_vl3").setName("vl3").setCenter(0.0,1.092,-0.0725).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("Joe_vl2").setName("vl2").setCenter(0.0,1.12,-0.065).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {16,18,25,83,84,85,86,87,88}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("Joe_vl1").setName("vl1").setCenter(0.0,1.1459,-0.0625).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("Joe_vt12").setName("vt12").setCenter(0.0,1.179,-0.068).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("Joe_vt11").setName("vt11").setCenter(0.0,1.2679,-0.081).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("Joe_vt10").setName("vt10").setCenter(0.0,1.242,-0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {15}).setSkinCoordWeight(new double[] {1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("Joe_vt9").setName("vt9").setCenter(0.0,1.268,-0.1).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {13,14}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                            .addChild(new HAnimJoint("Joe_vt8").setName("vt8").setCenter(0.0,1.294,-0.11).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                              .addChild(new HAnimJoint("Joe_vt7").setName("vt7").setCenter(0.0,1.323,-0.1155).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                .addChild(new HAnimJoint("Joe_vt6").setName("vt6").setCenter(0.0,1.352,-0.12).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                  .addChild(new HAnimJoint("Joe_vt5").setName("vt5").setCenter(0.0,1.381,-0.1235).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                    .addChild(new HAnimJoint("Joe_vt4").setName("vt4").setCenter(0.0,1.41,-0.1235).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {81}).setSkinCoordWeight(new double[] {1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                      .addChild(new HAnimJoint("Joe_vt3").setName("vt3").setCenter(0.0,1.438,-0.12).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                        .addChild(new HAnimJoint("Joe_vt2").setName("vt2").setCenter(0.0,1.468,-0.105).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                          .addChild(new HAnimJoint("Joe_vt1").setName("vt1").setCenter(0.0,1.497,-0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {11,24}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("Joe_vc7").setName("vc7").setCenter(0.0,1.525,-0.072).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {74,75}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("Joe_vc6").setName("vc6").setCenter(0.0,1.54,-0.05).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("Joe_vc5").setName("vc5").setCenter(0.0,1.552,-0.035).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("Joe_vc4").setName("vc4").setCenter(0.0,1.5675,-0.0256).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("Joe_vc3").setName("vc3").setCenter(0.0,1.58225,-0.0185).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("Joe_vc2").setName("vc2").setCenter(0.0,1.595,-0.0175).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_vc1").setName("vc1").setCenter(0.0,1.61,-0.015).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_skullbase").setName("skullbase").setCenter(0.0,1.63,-0.01).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addDisplacers(new HAnimDisplacer("Joe_skull_tip_raiser_action").setName("skull_tip_raiser_action").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9}).setDisplacements(new MFVec3f(new double[] {0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15})))
                                                            .addChild(new HAnimJoint("Joe_l_eyelid_joint").setName("l_eyelid_joint").setCenter(0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_l_eyeball_joint").setName("l_eyeball_joint").setCenter(0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_r_eyelid_joint").setName("r_eyelid_joint").setCenter(-0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_r_eyeball_joint").setName("r_eyeball_joint").setCenter(-0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(-0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                            .addChild(new HAnimJoint("Joe_temporomandibular").setName("temporomandibular").setCenter(0.034,1.659,0.06).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                            .addChild(new HAnimJoint("Joe_l_acromioclavicular").setName("l_acromioclavicular").setCenter(0.082,1.4488,-0.0353).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {12}).setSkinCoordWeight(new double[] {1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("Joe_l_sternoclavicular").setName("l_sternoclavicular").setCenter(0.0962,1.4269,-0.0424).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {79}).setSkinCoordWeight(new double[] {1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("Joe_l_shoulder").setName("l_shoulder").setCenter(0.2,1.44,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {41,42,44,80,102,103,104,105}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("Joe_l_elbow").setName("l_elbow").setCenter(0.2,1.1388,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {45,46,47,109,110,111,112,113,115,116,117,118}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("Joe_l_radiocarpal").setName("l_radiocarpal").setCenter(0.2,0.87,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {119,120,121,122,123,124,125,126}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("Joe_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(0.1924,0.8472,-0.0534).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {127,128}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(0.1951,0.8226,0.0246).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {138,139,140,141,142,143}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(0.1955,0.8159,0.0464).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {144,145,146,147,148,149,150,151,152}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                      .addChild(new HAnimJoint("Joe_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(0.1983,0.8024,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {129,130}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(0.1983,0.7815,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {138,139,140,153,154,155,163}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,1.0,1.0,1.0,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(0.2017,0.7363,-0.0248).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {166,167,168,169}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(0.2028,0.7139,-0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {170,171,172,173,174,175,176,177,178}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(0.1987,0.8029,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {131,132}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(0.1987,0.7818,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {156,157,163,164}).setSkinCoordWeight(new double[] {1.0,1.0,0.5,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(0.2013,0.7273,-0.0503).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {179,180,181,182}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(0.2026,0.7011,-0.0494).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {183,184,185,186,187,188,189,190,191}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(0.1956,0.8019,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {133,134}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(0.1956,0.7815,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {158,159,164,165}).setSkinCoordWeight(new double[] {1.0,1.0,0.5,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(0.1973,0.7287,-0.0777).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {192,193,194,195}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(0.1983,0.7045,-0.0767).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {196,197,198,199,200,201,202,203,204}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(0.1925,0.8066,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {135,136,137,165}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(0.1925,0.7866,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {160,161,162}).setSkinCoordWeight(new double[] {1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(0.1938,0.7452,-0.1024).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {205,206,207,208}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(0.1948,0.7277,-0.1017).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {209,210,211,212,213,214,215,216,217}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                            .addChild(new HAnimJoint("Joe_r_sternoclavicular").setName("r_sternoclavicular").setCenter(-0.03,1.46,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {10}).setSkinCoordWeight(new double[] {1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("Joe_r_acromioclavicular").setName("r_acromioclavicular").setCenter(-0.09,1.41,-0.11).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {77,29}).setSkinCoordWeight(new double[] {1.0,0.9}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("Joe_r_shoulder").setName("r_shoulder").setCenter(-0.2,1.44,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {29,30,32,78,218,219,220,221,86,88}).setSkinCoordWeight(new double[] {0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("Joe_r_elbow").setName("r_elbow").setCenter(-0.2,1.1388,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {33,34,35,225,226,227,228,229,231,232,233,234}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("Joe_r_radiocarpal").setName("r_radiocarpal").setCenter(-0.2,0.89,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {235,236,237,238,239,240,241,242}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("Joe_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(-0.2,0.85,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {243,244}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(-0.2,0.82,0.03).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {254,255,256,257,258,259}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(-0.2,0.8,0.05).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {260,261,262,263,264,265,266,267,268}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                      .addChild(new HAnimJoint("Joe_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(-0.2,0.84,-0.015).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {245,246}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(-0.2,0.793,-0.015).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {254,255,256,269,270,271,279}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,1.0,1.0,1.0,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(-0.2,0.745,-0.015).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {282,283,284,285}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(-0.2,0.72,-0.015).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {286,287,288,289,290,291,292,293,294}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(-0.2,0.835,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {247,248}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(-0.2,0.788,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {272,273,279,280}).setSkinCoordWeight(new double[] {1.0,1.0,0.5,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(-0.2,0.74,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {295,296,297,298}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(-0.2,0.7142,-0.04).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {299,300,301,302,303,304,305,306,307}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(-0.2,0.835,-0.065).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {249,250}).setSkinCoordWeight(new double[] {1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(-0.2,0.793,-0.065).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {274,275,280,281}).setSkinCoordWeight(new double[] {1.0,1.0,0.5,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(-0.2,0.74,-0.065).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {308,309,310,311}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(-0.2,0.7177,-0.065).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {312,313,314,315,316,317,318,319,320}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("Joe_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(-0.2,0.84,-0.085).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {251,252,253,281}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,0.5}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(-0.2,0.79,-0.085).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {276,277,278}).setSkinCoordWeight(new double[] {1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(-0.2,0.755,-0.085).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {321,322,323,324}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("Joe_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(-0.2,0.735,-0.09).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {325,326,327,328,329,330,331,332,333}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))))))))))))))))))))
        .addSkin(new Shape("Joe_Shape")
          .setAppearance(new Appearance("Joe_skin_Appearance")
            .setMaterial(new Material("Joe_skin_Material").setDiffuseColor(0.3,0.3,0.6).setEmissiveColor(0.3,0.3,0.6))
            .setTexture(new ImageTexture("JoeSkinImageTexture").setUrl(new String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"}))
            .setTextureTransform(new TextureTransform("KickTextureTransform")))
          .setGeometry(new IndexedFaceSet("Joe_skin_IndexedFaceSet").setDEF("Joe_skin_IndexedFaceSet").setCreaseAngle(3.14).setCoordIndex(getJoe_skin_IndexedFaceSet_6_137_coordIndex())
            .setCoord(new Coordinate("Joe_SkinCoord").setPoint(getJoe_SkinCoord_7_137_point()))
            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5})))))
        .setSkinCoord(new Coordinate().setUSE("Joe_SkinCoord"))
        .addJoints(new HAnimJoint().setUSE("Joe_humanoid_root"))
        .addJoints(new HAnimJoint().setUSE("Joe_sacroiliac"))
        .addJoints(new HAnimJoint().setUSE("Joe_skullbase"))
        .addJoints(new HAnimJoint().setUSE("Joe_temporomandibular"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc1"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc2"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc3"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc4"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc5"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc6"))
        .addJoints(new HAnimJoint().setUSE("Joe_vc7"))
        .addJoints(new HAnimJoint().setUSE("Joe_vl1"))
        .addJoints(new HAnimJoint().setUSE("Joe_vl2"))
        .addJoints(new HAnimJoint().setUSE("Joe_vl3"))
        .addJoints(new HAnimJoint().setUSE("Joe_vl4"))
        .addJoints(new HAnimJoint().setUSE("Joe_vl5"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt1"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt10"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt11"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt12"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt2"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt3"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt4"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt5"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt6"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt7"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt8"))
        .addJoints(new HAnimJoint().setUSE("Joe_vt9"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_acromioclavicular"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_acromioclavicular"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_interphalangeal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_interphalangeal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_elbow"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_elbow"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_eyeball_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_eyeball_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_eyebrow_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_eyebrow_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_eyelid_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_eyelid_joint"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_hip"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_hip"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_knee"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_knee"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_1"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_3"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_4"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_5"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_metatarsophalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_metatarsophalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_radiocarpal"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_radiocarpal"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_shoulder"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_shoulder"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_sternoclavicular"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_sternoclavicular"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_talocrural"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_talocrural"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_tarsal_distal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_tarsal_distal_interphalangeal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_l_tarsometatarsal_2"))
        .addJoints(new HAnimJoint().setUSE("Joe_r_tarsometatarsal_2"))
        .addSegments(new HAnimSegment().setUSE("Joe_sacrum"))
        .addSites(new HAnimSite().setUSE("Joe_RootFront_view"))))
    .addChild(new Group()
      .addChild(new TimeSensor("KickTimer").setCycleInterval(3.73).setLoop(true))
      .addComments(" Interpolators ")
      .addChild(new OrientationInterpolator("HumanoidRoot_RotationInterpolator").setKey(new double[] {0.0,0.1,0.4,0.6,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.1,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.5})))
      .addChild(new PositionInterpolator("HumanoidRoot_TranslationInterpolator").setKey(new double[] {0.0,0.2,0.6,1.0}).setKeyValue(new MFVec3f(new double[] {1.0,0.3,-1.0,0.4,-0.04,-0.4,-0.18,0.1,0.0,-0.2,0.15,0.15})))
      .addChild(new OrientationInterpolator("sacroiliac_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_hip_RotationInterpolator").setKey(new double[] {0.0,0.1,0.3,0.45,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,1.5,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0})))
      .addChild(new OrientationInterpolator("l_knee_RotationInterpolator").setKey(new double[] {0.0,0.2,0.35,0.5,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,1.0,0.0,1.0,0.5,1.0,0.0,0.0,1.4})))
      .addChild(new OrientationInterpolator("l_ankle_RotationInterpolator").setKey(new double[] {0.0,0.25,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0})))
      .addChild(new OrientationInterpolator("l_subtalar_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_midtarsal_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_metatarsal_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_hip_RotationInterpolator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0})))
      .addChild(new OrientationInterpolator("r_knee_RotationInterpolator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.5})))
      .addChild(new OrientationInterpolator("r_ankle_RotationInterpolator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.5})))
      .addChild(new OrientationInterpolator("r_subtalar_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_midtarsal_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_metatarsal_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vl5_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vl4_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vl3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vl2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vl1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt12_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt11_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt10_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt9_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt8_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt7_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt6_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt5_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt4_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vt1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc7_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc6_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc5_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc4_RotationInterpolator").setKey(new double[] {0.0,0.3,0.4,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,0.35,1.0,0.0,0.0,0.75,1.0,0.0,1.0,0.5})))
      .addChild(new OrientationInterpolator("vc3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("vc1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("skullbase_RotationInterpolator").setKey(new double[] {0.0,0.2,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.35})))
      .addChild(new OrientationInterpolator("l_eyelid_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_eyeball_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_eyebrow_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_eyelid_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_eyeball_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_eyebrow_joint_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("temporomandibular_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_sternoclavicular_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_acromioclavicular_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_shoulder_RotationInterpolator").setKey(new double[] {0.0,0.4,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,-1.0,0.0,1.0,1.75})))
      .addChild(new OrientationInterpolator("l_elbow_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5})))
      .addChild(new OrientationInterpolator("l_wrist_RotationInterpolator").setKey(new double[] {0.0,0.4,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.3,0.0,-0.5,1.0,1.3,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_thumb1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_thumb2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_thumb3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_index0_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_index1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_index2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_index3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_middle0_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_middle1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_middle2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_middle3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_ring0_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_ring1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_ring2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_ring3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_pinky0_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_pinky1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_pinky2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("l_pinky3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_sternoclavicular_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_acromioclavicular_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_shoulder_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,-1.0,2.5,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,1.75})))
      .addChild(new OrientationInterpolator("r_elbow_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5})))
      .addChild(new OrientationInterpolator("r_wrist_RotationInterpolator").setKey(new double[] {0.0,0.5,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.0,0.0,-1.0,0.0,0.3})))
      .addChild(new OrientationInterpolator("r_thumb1_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_thumb2_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_thumb3_RotationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_index0_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_index1_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_index2_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_index3_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_middle0_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_middle1_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_middle2_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_middle3_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_ring0_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_ring1_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_ring2_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_ring3_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_pinky0_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_pinky1_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_pinky2_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("r_pinky3_RotationInterpolator").setKey(new double[] {0.0,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}))))
    .addComments(" TimeSensor to Interpolators ")
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRoot_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("sacroiliac_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_subtalar_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_midtarsal_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_metatarsal_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_subtalar_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_midtarsal_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_metatarsal_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl5_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl4_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt12_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt11_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt10_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt9_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt8_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt7_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt6_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt5_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt4_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc7_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc6_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc5_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc4_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skullbase_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyelid_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyebrow_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyelid_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyebrow_joint_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("temporomandibular_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring3_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky0_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky1_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky2_RotationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky3_RotationInterpolator").setToField("set_fraction"))
    .addComments(" Routes from Interpolators to Joe_ model Joints ")
    .addChild(new ROUTE().setFromNode("HumanoidRoot_RotationInterpolator").setFromField("value_changed").setToNode("Joe_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Joe_humanoid_root").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("sacroiliac_RotationInterpolator").setFromField("value_changed").setToNode("Joe_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_talocrural").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_tarsometatarsal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metatarsophalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_tarsal_distal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_talocrural").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_tarsometatarsal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metatarsophalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_tarsal_distal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vl5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vl4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vl3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vl2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vl1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt12_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt12").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt11_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt11").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt10_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt10").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt9_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt9").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt8_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt8").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt7_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt7").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt6_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt6").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vt1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc7_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc7").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc6_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc6").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("vc1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("skullbase_RotationInterpolator").setFromField("value_changed").setToNode("Joe_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_eyelid_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyelid_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyeball_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_eyebrow_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyebrow_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_eyelid_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyelid_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyeball_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_eyebrow_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyebrow_joint").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("temporomandibular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_temporomandibular").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_sternoclavicular").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_acromioclavicular").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_radiocarpal").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_interphalangeal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_index0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_index1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_index2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_index3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_middle0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_middle1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_middle2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_middle3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ring0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ring1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ring2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ring3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_radiocarpal").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_interphalangeal_1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_index0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_index1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_index2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_index3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_middle0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_middle1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_middle2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_middle3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_ring0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_ring1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_ring2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_ring3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_5").setToField("set_rotation"))
    .addChild(new Group("DisplacersAnimationGroup")
      .addChild(new ScalarInterpolator("skull_tipInterpolator").setKey(new double[] {0.0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1.0}).setKeyValue(new double[] {0.0,0.0,0.0,0.0,0.2,0.4,1.0,0.0,1.0,0.4,0.0}))
      .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skull_tipInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("skull_tipInterpolator").setFromField("value_changed").setToNode("Joe_skull_tip_raiser_action").setToField("weight")))
    .addChild(new Group("SkinTextureTransformAnimationGroup")
      .addChild(new ScalarInterpolator("SkinInterpolator").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.7,0.8,1.0}).setKeyValue(new double[] {0.0,0.0,0.0,0.0,0.0,1.0,2.0,0.0}))
      .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("SkinInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("SkinInterpolator").setFromField("value_changed").setToNode("KickTextureTransform").setToField("rotation")))
    .addChild(new Group()
      .addChild(new Transform("SBall").setRotation(0.7,0.0,0.7,0.1).setScale(0.23,0.23,0.23).setTranslation(-0.916,0.37,-0.92)
        .addChild(new Shape("ball_Shape")
          .setAppearance(new Appearance("ball_Appearance")
            .setMaterial(new Material("ball_Material").setDiffuseColor(0.3,0.3,1.0).setEmissiveColor(0.3,0.3,0.33))
            .setTexture(new ImageTexture().setUSE("JoeSkinImageTexture")))
          .setGeometry(new IndexedFaceSet("ball_IndexedFaceSet").setDEF("ball_IndexedFaceSet").setCoordIndex(getball_IndexedFaceSet_6_538_coordIndex())
            .setCoord(new Coordinate("Ball_Coordinates").setPoint(getBall_Coordinates_7_538_point()))))
        .addChild(new Viewpoint("ballView_1").setDescription("Ball View")))
      .addComments(" Ball Animation interpolators ")
      .addChild(new PositionInterpolator("ball_TranslationInterpolator").setKey(new double[] {0.0,0.4,0.409,1.0}).setKeyValue(new MFVec3f(new double[] {-1.0,0.4,-1.0,0.0,0.07,0.0,0.05,0.06,0.05,2.0,4.0,10.0})))
      .addChild(new OrientationInterpolator("ball_RotationInterpolator").setKey(new double[] {0.0,0.4,0.41,0.71,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,1.35,-1.0,1.0,-1.0,3.35,-1.0,0.2,-1.0,3.0,-1.0,0.2,-1.0,3.0})))
      .addComments(" Ball Animation Routes ")
      .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ball_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("ball_TranslationInterpolator").setFromField("value_changed").setToNode("SBall").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ball_RotationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("ball_RotationInterpolator").setFromField("value_changed").setToNode("SBall").setToField("set_rotation")))
    .addChild(new Group()
      .addChild(new Transform().setScale(0.2,0.2,0.2)
        .addChild(new Shape().setUSE("AxisLinesShape")))
      .addChild(new Transform("Circle0").setScale(1.175,1.0,1.175)
        .addChild(new Shape("circle_Shape")
          .setAppearance(new Appearance("circle0_Appearance")
            .setMaterial(new Material("circle0_Material").setAmbientIntensity(0.9).setDiffuseColor(0.9,0.0,0.7).setEmissiveColor(0.425,0.486,1.0)))
          .setGeometry(new IndexedLineSet("Orbit1").setDEF("Orbit1").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1})
            .setCoord(new Coordinate("circle_Coordinates").setPoint(new MFVec3f(new double[] {1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.994522,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}))))))
      .addChild(new Transform("Circle1").setScale(0.5,1.0,0.5)
        .addChild(new Shape("circle1_Shape")
          .setAppearance(new Appearance("circle1_Appearance")
            .setMaterial(new Material("circle1_Material").setDiffuseColor(0.9,0.0,0.7).setEmissiveColor(0.424956,0.483976,1.0)))
          .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
      .addChild(new Transform("Circle2").setScale(0.25,1.0,0.25)
        .addChild(new Shape("circle2_Shape")
          .setAppearance(new Appearance("circle2_Appearance")
            .setMaterial(new Material("circle2_Material").setDiffuseColor(0.9,0.0,0.7).setEmissiveColor(0.424956,0.483976,1.0)))
          .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getJoe_skin_IndexedFaceSet_6_137_coordIndex_1()
		{
			int[] value = {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1};
			return value;
		}
		private int[] getJoe_skin_IndexedFaceSet_6_137_coordIndex_2()
		{
			int[] value = {209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1};
			return value;
		}
		private int[] getJoe_skin_IndexedFaceSet_6_137_coordIndex_3()
		{
			int[] value = {308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getJoe_SkinCoord_7_137_point_1()
		{
			double[] value = {0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.7890,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.7860,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.110,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.110,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.90,0.077,-0.079,0.92,-0.14,-0.1,0.90,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0};
			return value;
		}
		private double[] getJoe_SkinCoord_7_137_point_2()
		{
			double[] value = {-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.190,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.190,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.80,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549};
			return value;
		}
		private double[] getJoe_SkinCoord_7_137_point_3()
		{
			double[] value = {0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.190,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.190,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.80,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04};
			return value;
		}
		private double[] getJoe_SkinCoord_7_137_point_4()
		{
			double[] value = {-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.090,0.012,0.188,0.110,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.010,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.090,0.012,0.188,-0.110,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.010,0.168};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getball_IndexedFaceSet_6_538_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Large attribute array: IndexedFaceSet DEF='Joe_skin_IndexedFaceSet' coordIndex field, scene-graph level=6, element #137, 2780 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getJoe_skin_IndexedFaceSet_6_137_coordIndex()
		{
			MFInt32 Joe_skin_IndexedFaceSet_6_137_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getJoe_skin_IndexedFaceSet_6_137_coordIndex_1()))
				.append(new MFInt32(getJoe_skin_IndexedFaceSet_6_137_coordIndex_2()))
				.append(new MFInt32(getJoe_skin_IndexedFaceSet_6_137_coordIndex_3()));
			return Joe_skin_IndexedFaceSet_6_137_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='Joe_SkinCoord' point field, scene-graph level=7, element #137, 1170 total numbers made up of 390 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getJoe_SkinCoord_7_137_point()
		{
			MFVec3f Joe_SkinCoord_7_137_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getJoe_SkinCoord_7_137_point_1()))
				.append(new MFVec3f(getJoe_SkinCoord_7_137_point_2()))
				.append(new MFVec3f(getJoe_SkinCoord_7_137_point_3()))
				.append(new MFVec3f(getJoe_SkinCoord_7_137_point_4()));
			return Joe_SkinCoord_7_137_point;
		}
		/** Large attribute array: IndexedFaceSet DEF='ball_IndexedFaceSet' coordIndex field, scene-graph level=6, element #538, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getball_IndexedFaceSet_6_538_coordIndex()
		{
			MFInt32 ball_IndexedFaceSet_6_538_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getball_IndexedFaceSet_6_538_coordIndex_1()));
			return ball_IndexedFaceSet_6_538_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='Ball_Coordinates' point field, scene-graph level=7, element #538, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getBall_Coordinates_7_538_point()
		{
			MFVec3f Ball_Coordinates_7_538_point = new MFVec3f(new double[] {0.0,0.4675,0.0,0.0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0.0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0.0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0.0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0.0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0.0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0.0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0.0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0.0,0.0,-0.4675,-0.2338,0.0,-0.4049,-0.4049,0.0,-0.2338,-0.4675,0.0,0.0,-0.4049,0.0,0.2338,-0.2338,0.0,0.4049,0.0,0.0,0.4675,0.2338,0.0,0.4049,0.4049,0.0,0.2338,0.4675,0.0,0.0,0.4049,0.0,-0.2338,0.2338,0.0,-0.4049,0.0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0.0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0.0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0.0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0.0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0.0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0.0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0.0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0.0,-0.4675,0.0});
			return Ball_Coordinates_7_538_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return JoeKick model
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
        X3D thisExampleX3dModel = new JoeKick().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.JoeKick\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.JoeKick self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./JoeKick_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./JoeKick_JavaExport.x3d"; 
                String filenameX3DV = "./JoeKick_JavaExport.x3dv"; 
                String filenameJSON = "./JoeKick_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
