package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A Seamless VRML Human, demonstrating the H-Anim 2001 Specification, animation panel shows multiple behaviors. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/BoxManAnimationPanel.java">BoxManAnimationPanel.java</a> source, <a href="../../../HumanoidAnimation/BoxManAnimationPanelIndex.html" target="_top">BoxManAnimationPanel catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/BoxManAnimationPanel.x3d">BoxManAnimationPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A Seamless VRML Human, demonstrating the H-Anim 2001 Specification, animation panel shows multiple behaviors. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams and James Smith - james@vapourtech.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joe Williams and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> .x3d to .x3d translation used BS Contact Geo 8.203 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 March 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> revision </i> </td>
			<td> 12 January 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 14 January 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../HumanoidAnimation/BoxManAnimationPanelInclined.png">BoxManAnimationPanelInclined.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../HumanoidAnimation/BoxManAnimationPanel.mp4">BoxManAnimationPanel.mp4</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="https://www.youtube.com/watch?v=8tI83Rtg_DU" target="_blank">https://www.youtube.com/watch?v=8tI83Rtg_DU</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://twitter.com/Web3DConsortium/status/820638047523913728" target="_blank">https://twitter.com/Web3DConsortium/status/820638047523913728</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://twitter.com/Web3DConsortium/status/820642726009978881" target="_blank">https://twitter.com/Web3DConsortium/status/820642726009978881</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org" target="_blank">http://h-anim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> boxman.original.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. <a href="http://forum.instantreality.org" target="_blank">http://forum.instantreality.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HumanoidAnimation/BoxMan.x3d">BoxMan.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models/H-Anim2001/boxman" target="_blank">http://h-anim.org/Models/H-Anim2001/boxman</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl" target="_blank">http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.vapourtech.com/team/james/boxman.wrl" target="_blank">http://www.vapourtech.com/team/james/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Specifications/H-Anim2001" target="_blank">http://h-anim.org/Specifications/H-Anim2001</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models" target="_blank">http://h-anim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Nodes" target="_blank">http://h-anim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/X3dToVrml97.xslt" target="_blank">https://www.web3d.org/x3d/content/X3dToVrml97.xslt</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> (C) 2000 James Smith - james@vapourtech.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.vapourtech.com" target="_blank">http://www.vapourtech.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BoxMan H-Anim 2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxManAnimationPanel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxManAnimationPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../HumanoidAnimation/../license.html">../license.html</a> </td>
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

	* @author Joe Williams and James Smith - james@vapourtech.com
 */

public class BoxManAnimationPanel
{
	/** Default constructor to create this object. */
	public BoxManAnimationPanel ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("H-Anim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BoxManAnimationPanel.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification, animation panel shows multiple behaviors."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe Williams and James Smith - james@vapourtech.com"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Joe Williams and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent(".x3d to .x3d translation used BS Contact Geo 8.203"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 March 2001"))
    .addMeta(new meta().setName("revision").setContent("12 January 2017"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("14 January 2017"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("BoxManAnimationPanelInclined.png"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("BoxManAnimationPanel.mp4"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("https://www.youtube.com/watch?v=8tI83Rtg_DU"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://twitter.com/Web3DConsortium/status/820638047523913728"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://twitter.com/Web3DConsortium/status/820642726009978881"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("boxman.original.wrl"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BoxMan.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org/Models/H-Anim2001/boxman"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org/Specifications/H-Anim2001"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org/Models"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://h-anim.org/Nodes"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("(C) 2000 James Smith - james@vapourtech.com"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.vapourtech.com"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("BoxMan H-Anim 2.0"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxManAnimationPanel.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"}).setTitle("BoxMan - A Seamless VRML Human"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.6,0.6,0.6})).setSkyColor(new MFColor(new double[] {0.75,0.75,0.75})))
    .addChild(new HAnimHumanoid("boxman_Humanoid").setName("Humanoid").setInfo(new String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"}).setVersion("2.0")
      .addSkeleton(new HAnimJoint("boxman_HumanoidRoot").setName("humanoid_root").setCenter(0.0,0.9723,-0.0728).setSkinCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
        .addChild(new HAnimSegment("boxman_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,0.9723,-0.0728)
            .addChild(new Shape("SphereYellow")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
              .setGeometry(new Sphere().setRadius(0.02)))))
        .addChild(new HAnimJoint("boxman_l_hip").setName("l_hip").setCenter(0.0956,0.9364,0.0).setSkinCoordIndex(new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5})
          .addChild(new HAnimSegment("boxman_l_thigh").setName("l_thigh")
            .addChild(new Transform().setTranslation(0.0956,0.9364,0.0)
              .addChild(new Shape().setUSE("SphereYellow"))))
          .addChild(new HAnimJoint("boxman_l_knee").setName("l_knee").setCenter(0.0956,0.5095,-0.0036).setSkinCoordIndex(new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
            .addChild(new HAnimSegment("boxman_l_calf").setName("l_calf")
              .addChild(new Transform().setTranslation(0.0956,0.5095,-0.0036)
                .addChild(new Shape().setUSE("SphereYellow"))))
            .addChild(new HAnimJoint("boxman_l_ankle").setName("l_ankle").setCenter(0.0946,0.0762,-0.0261).setSkinCoordIndex(new int[] {64,65,66,67,68,69,70,71}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
              .addChild(new HAnimSegment("boxman_l_hindfoot").setName("l_hindfoot")
                .addChild(new Transform().setTranslation(0.0946,0.0762,-0.0261)
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_l_midtarsal").setName("l_midtarsal").setCenter(0.1079,0.0317,0.0670).setSkinCoordIndex(new int[] {72,73,74,75,76,77,78,79}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
                .addChild(new HAnimSegment("boxman_l_middistal").setName("l_middistal")
                  .addChild(new Transform().setTranslation(0.1079,0.0317,0.0670)
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite("boxman_l_middistal_tip").setName("l_middistal_tip").setTranslation(.095,0.0005,0.1924)
                    .addChild(new Shape("SphereRed")
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                      .setGeometry(new Sphere().setRadius(0.02)))))))))
        .addChild(new HAnimJoint("boxman_r_hip").setName("r_hip").setCenter(-0.0956,0.9364,0.0).setSkinCoordIndex(new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5})
          .addChild(new HAnimSegment("boxman_r_thigh").setName("r_thigh")
            .addChild(new Transform().setTranslation(-0.0956,0.9364,0.0)
              .addChild(new Shape().setUSE("SphereYellow"))))
          .addChild(new HAnimJoint("boxman_r_knee").setName("r_knee").setCenter(-0.0956,0.5095,-0.0036).setSkinCoordIndex(new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}).setSkinCoordWeight(new double[] {0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
            .addChild(new HAnimSegment("boxman_r_calf").setName("r_calf")
              .addChild(new Transform().setTranslation(-0.0956,0.5095,-0.0036)
                .addChild(new Shape().setUSE("SphereYellow"))))
            .addChild(new HAnimJoint("boxman_r_ankle").setName("r_ankle").setCenter(-0.0946,0.0762,-0.0261).setSkinCoordIndex(new int[] {132,133,134,135,136,137,138,139}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
              .addChild(new HAnimSegment("boxman_r_hindfoot").setName("r_hindfoot")
                .addChild(new Transform().setTranslation(-0.0946,0.0762,-0.0261)
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_r_midtarsal").setName("r_midtarsal").setCenter(-0.1079,0.0317,0.0670).setSkinCoordIndex(new int[] {140,141,142,143,144,145,146,147}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
                .addChild(new HAnimSegment("boxman_r_middistal").setName("r_middistal")
                  .addChild(new Transform().setTranslation(-0.1079,0.0317,0.0670)
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite("boxman_r_middistal_tip").setName("r_middistal_tip").setTranslation(-0.095,0.0005,0.1924)
                    .addChild(new Shape().setUSE("SphereRed"))))))))
        .addChild(new HAnimJoint("boxman_vl5").setName("vl5").setCenter(0.0,1.0817,-0.0728).setSkinCoordIndex(new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
          .addChild(new HAnimSegment("boxman_l5").setName("l5")
            .addChild(new Transform().setTranslation(0.0,1.0817,-0.0728)
              .addChild(new Shape().setUSE("SphereYellow"))))
          .addChild(new HAnimJoint("boxman_skullbase").setName("skullbase").setCenter(0.0,1.6440,0.036).setSkinCoordIndex(new int[] {168,169,170,171,172,173,174,175}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
            .addChild(new HAnimSegment("boxman_skull").setName("skull")
              .addChild(new Transform().setTranslation(0.0,1.6440,0.036)
                .addChild(new Shape().setUSE("SphereYellow")))
              .addChild(new HAnimSite("boxman_skull_tip").setName("skull_tip").setTranslation(-0.0029,1.7771,0.0274)
                .addChild(new Shape().setUSE("SphereYellow")))))
          .addChild(new HAnimJoint("boxman_l_shoulder").setName("l_shoulder").setCenter(0.1968,1.4642,-0.0265).setSkinCoordIndex(new int[] {176,177,178,179,180,181,182,183}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
            .addChild(new HAnimSegment("boxman_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(0.1968,1.4642,-0.0265)
                .addChild(new Shape().setUSE("SphereYellow"))))
            .addChild(new HAnimJoint("boxman_l_elbow").setName("l_elbow").setCenter(0.1982,1.1622,-0.0557).setSkinCoordIndex(new int[] {184,185,186,187,188,189,190,191}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
              .addChild(new HAnimSegment("boxman_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(0.1982,1.1622,-0.0557)
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_l_wrist").setName("l_wrist").setCenter(0.1972,0.8929,-0.0690).setSkinCoordIndex(new int[] {192,193,194,195,196,197,198,199}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
                .addChild(new HAnimSegment("boxman_l_hand").setName("l_hand")
                  .addChild(new Transform().setTranslation(0.1972,0.8929,-0.0690)
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite("boxman_l_hand_tip").setName("l_hand_tip").setTranslation(0.1912,0.6976,-0.0710)
                    .addChild(new Shape().setUSE("SphereRed")))))))
          .addChild(new HAnimJoint("boxman_r_shoulder").setName("r_shoulder").setCenter(-0.1968,1.4642,-0.0265).setSkinCoordIndex(new int[] {200,201,202,203,204,205,206,207}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
            .addChild(new HAnimSegment("boxman_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-0.1968,1.4642,-0.0265)
                .addChild(new Shape().setUSE("SphereYellow"))))
            .addChild(new HAnimJoint("boxman_r_elbow").setName("r_elbow").setCenter(-0.1982,1.1622,-0.0557).setSkinCoordIndex(new int[] {208,209,210,211,212,213,214,215}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
              .addChild(new HAnimSegment("boxman_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-0.1982,1.1622,-0.0557)
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_r_wrist").setName("r_wrist").setCenter(-0.1972,0.8929,-0.0690).setSkinCoordIndex(new int[] {216,217,218,219,220,221,222,223}).setSkinCoordWeight(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})
                .addChild(new HAnimSegment("boxman_r_hand").setName("r_hand")
                  .addChild(new Transform().setTranslation(-0.1972,0.8929,-0.0690)
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite("boxman_r_hand_tip").setName("r_hand_tip").setTranslation(-0.1912,0.6976,-0.0710)
                    .addChild(new Shape().setUSE("SphereRed")))))))))
      .addComments(" # sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8) ")
      .setSkinCoord(new Coordinate("SKINCOORD").setPoint(getSKINCOORD_4_120_point()))
      .addComments("*** Warning: extra large comment found (5259 characters) starting with 'Coordinate DEF='SKINCOORD2' c'")
      .addSkin(new Group()
        .addChild(new Shape("TrouserSkin")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0).setTransparency(0.5)))
          .addComments(" # 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40) ")
          .setGeometry(new IndexedFaceSet().setCoordIndex(getIndexedFaceSet_6_123_coordIndex())
            .setCoord(new Coordinate().setUSE("SKINCOORD"))))
        .addChild(new Shape("ShoeSkin")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setTransparency(0.5)))
          .addComments(" # 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10) ")
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1})
            .setCoord(new Coordinate().setUSE("SKINCOORD"))))
        .addChild(new Shape("ShirtSkin")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0).setTransparency(0.5)))
          .addComments(" # 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8) ")
          .setGeometry(new IndexedFaceSet().setCoordIndex(getIndexedFaceSet_6_133_coordIndex())
            .setCoord(new Coordinate().setUSE("SKINCOORD"))))
        .addChild(new Shape("HeadHandsFleshToneSkin")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.75,0.75).setTransparency(0.5)))
          .addComments(" # 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10) ")
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1})
            .setCoord(new Coordinate().setUSE("SKINCOORD"))))
        .addChild(new Shape("SkinLines")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
          .addComments(" Combined set of prior IFS coordIndex values ")
          .setGeometry(new IndexedLineSet().setCoordIndex(getIndexedLineSet_6_143_coordIndex())
            .setCoord(new Coordinate().setUSE("SKINCOORD")))))
      .addComments(" top-level joint references ")
      .addJoints(new HAnimJoint().setUSE("boxman_r_wrist"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_wrist"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("boxman_skullbase"))
      .addJoints(new HAnimJoint().setUSE("boxman_vl5"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_midtarsal"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_ankle"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_knee"))
      .addJoints(new HAnimJoint().setUSE("boxman_r_hip"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_midtarsal"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_ankle"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_knee"))
      .addJoints(new HAnimJoint().setUSE("boxman_l_hip"))
      .addJoints(new HAnimJoint().setUSE("boxman_HumanoidRoot"))
      .addComments(" top-level segment references ")
      .addSegments(new HAnimSegment().setUSE("boxman_sacrum"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_thigh"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_calf"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_hindfoot"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_middistal"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_thigh"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_calf"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_hindfoot"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_middistal"))
      .addSegments(new HAnimSegment().setUSE("boxman_l5"))
      .addSegments(new HAnimSegment().setUSE("boxman_skull"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_upperarm"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_forearm"))
      .addSegments(new HAnimSegment().setUSE("boxman_l_hand"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_upperarm"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_forearm"))
      .addSegments(new HAnimSegment().setUSE("boxman_r_hand"))
      .addComments(" top-level site references ")
      .addSites(new HAnimSite().setUSE("boxman_l_middistal_tip"))
      .addSites(new HAnimSite().setUSE("boxman_r_middistal_tip"))
      .addSites(new HAnimSite().setUSE("boxman_skull_tip"))
      .addSites(new HAnimSite().setUSE("boxman_l_hand_tip"))
      .addSites(new HAnimSite().setUSE("boxman_r_hand_tip"))
      .addViewpoints(new HAnimSite().setName("BoxMan_view")
        .addChild(new Viewpoint("Inclined_View").setDescription("Inclined View").setOrientation(0.0,1.0,0.0,0.78).setPosition(2.0,0.9,2.0))
        .addChild(new Viewpoint("Front_View").setDescription("Front View").setPosition(0.0,1.0,3.0))
        .addChild(new Viewpoint("Best_View").setDescription("Right-side View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-3.0,1.0,0.0))
        .addChild(new Viewpoint("Side_View").setDescription("Left-side View").setOrientation(0.0,1.0,0.0,1.57).setPosition(3.0,1.0,0.0))
        .addChild(new Viewpoint("Top_View").setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,3.0,0.0))))
    .addChild(new Group("StopAnimation")
      .addChild(new TimeSensor("StopTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new PositionInterpolator("Stop_HumanoidRootTransInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_HumanoidRootRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_sacroiliacRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_ankleRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_subtalarRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_midtarsalRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_metatarsalRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_ankleRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_subtalarRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_midtarsalRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_metatarsalRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vl5RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vl4RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vl3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vl2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vl1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt12RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt11RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt10RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt9RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt8RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt7RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt6RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt5RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt4RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vt1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc7RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc6RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc5RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc4RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_vc1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_skullbaseRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_eyeball_jointRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_eyeball_jointRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_sternoclavicularRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_acromioclavicularRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_thumb1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_thumb2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_thumb3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_index0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_index1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_index2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_index3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_middle0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_middle1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_middle2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_middle3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_ring0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_ring1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_ring2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_ring3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_pinky0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_pinky1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_pinky2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_l_pinky3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_sternoclavicularRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_acromioclavicularRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_thumb1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_thumb2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_thumb3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_index0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_index1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_index2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_index3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_middle0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_middle1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_middle2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_middle3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_ring0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_ring1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_ring2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_ring3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_pinky0RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_pinky1RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_pinky2RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stop_r_pinky3RotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}))))
    .addChild(new Group("StandAnimation")
      .addChild(new TimeSensor("StandTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolator("Stand_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.015,1.0,0.0,0.0,0.17,-1.0,0.0,0.0,0.025,1.0,0.0,0.0,0.01,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_ankleRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_ankleRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.25,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_headRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_neckRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_eyeballRotInterp").setKey(new double[] {0.0,0.4,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_eyeballRotInterp").setKey(new double[] {0.0,0.4,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_upper_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_whole_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Stand_whole_bodyTransInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_index1Roll").setKey(new double[] {0.0,0.2,0.4,0.5,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_index2Roll").setKey(new double[] {0.0,0.2,0.4,0.5,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.4,0.0,0.0,1.0,0.32,0.0,0.0,1.0,0.25,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Stand_r_index3Roll").setKey(new double[] {0.0,0.2,0.4,0.5,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.35,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0}))))
    .addChild(new Group("PitchesAnimation")
      .addChild(new TimeSensor("PitchTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolator("Pitch_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_hipRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_hipRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_r_shoulderRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_l_shoulderRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_headRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_neckRotInterp").setKey(new double[] {0.0,0.25,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.55,-1.0,0.0,0.0,1.05,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_upper_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitches_whole_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Pitches_whole_bodyTransInterp").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Pitch_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}))))
    .addChild(new Group("YawsAnimation")
      .addChild(new TimeSensor("YawTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolator("Yaw_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_kneeRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_kneeRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_hipRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_r_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_wristRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_l_shoulderRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_headRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_neckRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_upper_bodyRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaws_whole_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Yaws_whole_bodyTransInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Yaw_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}))))
    .addChild(new Group("RollsAnimation")
      .addChild(new TimeSensor("RollTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolator("Roll_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_hipRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,-1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_ankleRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_kneeRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_hipRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_wristRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_r_shoulderRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,3.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_wristRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_elbowRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_l_shoulderRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,3.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_headRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_neckRotInterp").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.25,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.25,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_upper_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Rolls_whole_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Rolls_whole_bodyTransInterp").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Roll_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}))))
    .addChild(new Group("WalkAnimation")
      .addChild(new TimeSensor("WalkTimer").setCycleInterval(1.73).setLoop(true))
      .addChild(new OrientationInterpolator("Walk_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_r_ankleRotInterp").setKey(new double[] {0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,0.0,0.0,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_r_kneeRotInterp").setKey(new double[] {0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573})))
      .addChild(new OrientationInterpolator("Walk_r_hipRotInterp").setKey(new double[] {0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481})))
      .addChild(new OrientationInterpolator("Walk_l_ankleRotInterp").setKey(new double[] {0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714})))
      .addChild(new OrientationInterpolator("Walk_l_kneeRotInterp").setKey(new double[] {0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226})))
      .addChild(new OrientationInterpolator("Walk_l_hipRotInterp").setKey(new double[] {0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865})))
      .addChild(new OrientationInterpolator("Walk_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056})))
      .addChild(new OrientationInterpolator("Walk_r_wristRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346})))
      .addChild(new OrientationInterpolator("Walk_r_elbowRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.411508,-1.0,0.0,0.0,0.0925011,-1.0,0.0,0.0,0.572568,-1.0,0.0,0.0,0.411508})))
      .addChild(new OrientationInterpolator("Walk_r_shoulderRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.09346,1.0,0.0,0.0,0.3197,-1.0,0.0,0.0,0.1564,-1.0,0.0,0.0,0.09346})))
      .addChild(new OrientationInterpolator("Walk_l_wristRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.0,-1.0,0.0,0.461076})))
      .addChild(new OrientationInterpolator("Walk_l_elbowRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.0659878,-1.0,0.0,0.0,0.488383,-1.0,0.0,0.0,0.0177536,-1.0,0.0,0.0,0.0659878})))
      .addChild(new OrientationInterpolator("Walk_l_shoulderRotInterp").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.1189,-1.0,0.0,0.0,0.1861,1.0,0.0,0.0,0.3357,1.0,0.0,0.0,0.1189})))
      .addChild(new OrientationInterpolator("Walk_headRotInterp").setKey(new double[] {0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642})))
      .addChild(new OrientationInterpolator("Walk_neckRotInterp").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_upper_bodyRotInterp").setKey(new double[] {0.0,0.2083,0.375,0.75,0.8333,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826})))
      .addChild(new OrientationInterpolator("Walk_whole_bodyRotInterp").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Walk_whole_bodyTranInterp").setKey(new double[] {0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0})))
      .addChild(new OrientationInterpolator("Walk_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Walk_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}))))
    .addChild(new Group("RunAnimation")
      .addChild(new TimeSensor("RunTimer").setCycleInterval(0.9).setLoop(true))
      .addChild(new OrientationInterpolator("Run_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_l_hipRotInterp_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42})))
      .addChild(new OrientationInterpolator("Run_l_kneeRotInterp_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01})))
      .addChild(new OrientationInterpolator("Run_l_ankleRotInterp_Run").setKey(new double[] {0.0,0.22,0.3,0.4,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0374,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03574})))
      .addChild(new OrientationInterpolator("Run_r_hipRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9})))
      .addChild(new OrientationInterpolator("Run_r_kneeRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705})))
      .addChild(new OrientationInterpolator("Run_r_ankleRotInterp_Run").setKey(new double[] {0.0,0.4,0.71,0.8,0.82,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.32,-1.0,0.0,0.0,0.374,-1.0,0.0,0.0,0.3478,1.0,0.0,0.0,0.2323})))
      .addChild(new OrientationInterpolator("Run_l_shoulderRotInterp_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5})))
      .addChild(new OrientationInterpolator("Run_l_elbowRotInterp_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,1.85,-0.99,-0.19,0.18,1.35,-1.0,0.0,0.0,0.975,-0.99,-0.09,-0.02,1.55,-1.0,0.0,0.0,1.85})))
      .addChild(new OrientationInterpolator("Run_l_wristRotInterp_Run").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {-0.25,-1.0,0.08,0.14,0.25,1.0,0.08,0.14,0.0,0.0,1.0,0.0,-0.25,1.0,0.08,-0.14,-0.25,1.0,0.08,0.14})))
      .addChild(new OrientationInterpolator("Run_r_shoulderRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85})))
      .addChild(new OrientationInterpolator("Run_r_elbowRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.975,-0.99,0.09,0.02,1.55,-1.0,0.0,0.0,1.85,-0.99,0.19,-0.18,1.35,-1.0,0.0,0.0,0.975})))
      .addChild(new OrientationInterpolator("Run_r_wristRotInterp_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273})))
      .addChild(new OrientationInterpolator("Run_lower_bodyRotInterp_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.125})))
      .addChild(new OrientationInterpolator("Run_headRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.08,1.0,0.0,0.0,0.12,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.08})))
      .addChild(new OrientationInterpolator("Run_neckRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7091,1.0}).setKeyValue(new MFRotation(new double[] {0.7,0.0,0.0,0.4,-0.7,-0.7,0.0,0.4,0.0,0.0,0.0,0.4,-0.7,0.7,0.0,0.4,0.7,0.0,0.0,0.4})))
      .addChild(new OrientationInterpolator("Run_upper_bodyRotInterp_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7636,1.0}).setKeyValue(new MFRotation(new double[] {0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5})))
      .addChild(new OrientationInterpolator("Run_whole_bodyRotInterp_Run").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.167,1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.168,1.0,0.0,0.0,0.06})))
      .addChild(new PositionInterpolator("Run_whole_bodyTranInterp_Run").setKey(new double[] {0.0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0})))
      .addChild(new OrientationInterpolator("Run_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Run_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Run_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}))))
    .addChild(new Group("JumpAnimation")
      .addChild(new TimeSensor("JumpTimer").setCycleInterval(3.73).setLoop(true))
      .addChild(new OrientationInterpolator("Jump_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_ankleRotInterp").setKey(new double[] {0.0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,1.3,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087,-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_kneeRotInterp").setKey(new double[] {0.0,0.2,0.25,0.3,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.5,1.0,0.0,0.0,1.7,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_hipRotInterp").setKey(new double[] {0.0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.63,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.55,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_ankleRotInterp").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108,-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_kneeRotInterp").setKey(new double[] {0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_hipRotInterp").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_lower_bodyRotInterp").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_wristRotInterp").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_elbowRotInterp").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_shoulderRotInterp").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_wristRotInterp").setKey(new double[] {0.0,0.48,0.52,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_elbowRotInterp").setKey(new double[] {0.0,0.28,0.32,0.58,0.72,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.13,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,0.4,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_shoulderRotInterp").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_headRotInterp").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_neckRotInterp").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1942,-1.0,0.0,0.0,0.1942,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.2284,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_upper_bodyRotInterp").setKey(new double[] {0.0,0.22,0.28,0.34,0.71,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.05,1.0,0.0,0.0,1.051,-1.0,0.0,0.0,0.257,1.0,0.0,0.0,0.2171,1.0,0.0,0.0,0.3465,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_whole_bodyRotInterp").setKey(new double[] {0.0,0.28,0.32,0.48,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Jump_whole_bodyTranInterp").setKey(new double[] {0.0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0.0,0.35,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.6,0.0,1.0,0.0,0.1,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.8,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.6,0.0,-1.0,0.0,0.8,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Jump_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}))))
    .addChild(new Group("KickAnimation")
      .addChild(new TimeSensor("KickTimer").setCycleInterval(3.73).setLoop(true))
      .addChild(new OrientationInterpolator("Kick_l_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_shoulderRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.76,-0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.256,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_ForeArmPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,-1.0,0.25,0.0,2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_wristRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_sternoclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_acromioclavicularRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_shoulderRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,-1.76,0.25,0.0,1.0,-1.76,0.0,0.0,1.0,-1.256,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_ForeArmPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,1.0,0.25,0.0,-2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_wristRoll").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_thumb1Pitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_hipPitch").setKey(new double[] {0.0,0.2,0.3,0.5,0.6,0.9,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.75,-1.0,0.0,0.0,2.25,-1.0,0.0,0.0,2.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_kneePitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.95,1.0,0.0,0.0,1.75,-1.0,0.0,0.0,0.28,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_hipPitch").setKey(new double[] {0.0,0.2,0.3,0.5,0.6,0.9,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_l_kneePitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_anklePitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.95,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.05,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_r_metatarsalPitch").setKey(new double[] {0.0,0.2,0.4,0.6,0.7,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_sacroiliacYaw").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_vl5Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_vc6Yaw").setKey(new double[] {0.0,0.2,0.4,0.5,0.6,0.8,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_lower_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_upper_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_whole_bodyRotInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
      .addChild(new PositionInterpolator("Kick_whole_bodyTransInterp").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
      .addChild(new OrientationInterpolator("Kick_neckRotInterp").setKey(new double[] {0.0,0.25,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}))))
    .addChild(new Group("Interface")
      .addChild(new Transform("CoordinateSystemFloor").setScale(0.1,0.1,0.1)
        .addChild(new Shape("AxisLinesShape")
          .addComments(" RGB lines showing XYZ axes ")
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0})))
            .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}))))))
      .addChild(new ProximitySensor("HudProx").setSize(50.0,50.0,50.0))
      .addChild(new Transform("HudXform").setRotation(0.0,1.0,0.0,0.78).setTranslation(2.0,1.0,2.0)
        .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(-0.4,-0.01,-0.75)
          .addChild(new Transform("Stand_Text").setTranslation(0.0,-0.9,0.0)
            .addChild(new TouchSensor("Stand_Touch"))
            .addChild(new Shape("StandText")
              .setAppearance(new Appearance()
                .setMaterial(new Material("text_color").setAmbientIntensity(1).setDiffuseColor(0.819,0.521,0.169).setEmissiveColor(0.819,0.521,0.169).setSpecularColor(0.819,0.521,0.169)))
              .setGeometry(new Text().setString(new String[] {"Stand"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Stand_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material("Clear").setAmbientIntensity(1).setDiffuseColor(0.0,0.5,0.0).setEmissiveColor(0.0,0.5,0.0).setTransparency(0.8)))
              .setGeometry(new IndexedFaceSet("Backing").setDEF("Backing").setCoordIndex(new int[] {0,1,2,3,-1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.2,-0.25,-0.01,3.0,-0.25,-0.01,3.0,1.0,-0.01,-0.2,1.0,-0.01}))))))
          .addChild(new Transform("Pitch_Text").setTranslation(0.0,-2.4,0.0)
            .addChild(new TouchSensor("Pitch_Touch"))
            .addChild(new Shape("PitchText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Pitch"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Pitch_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Yaw_Text").setTranslation(0.0,-3.8,0.0)
            .addChild(new TouchSensor("Yaw_Touch"))
            .addChild(new Shape("YawText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Yaw"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Yaw_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Roll_Text").setTranslation(0.0,-5.2,0.0)
            .addChild(new TouchSensor("Roll_Touch"))
            .addChild(new Shape("RollText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Roll"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Roll_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Walk_Text").setTranslation(0.0,-6.6,0.0)
            .addChild(new TouchSensor("Walk_Touch"))
            .addChild(new Shape("WalkText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Walk"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Walk_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Run_Text").setTranslation(0.0,-8.0,0.0)
            .addChild(new TouchSensor("Run_Touch"))
            .addChild(new Shape("RunText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Run"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Run_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Jump_Text").setTranslation(0.0,-9.4,0.0)
            .addChild(new TouchSensor("Jump_Touch"))
            .addChild(new Shape("JumpText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Jump"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Jump_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Kick_Text").setTranslation(0.0,-10.8,0.0)
            .addChild(new TouchSensor("Kick_Touch"))
            .addChild(new Shape("KickText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Kick"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Kick_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("Stop_Text").setTranslation(0.0,0.4,0.0)
            .addChild(new TouchSensor("Stop_Touch"))
            .addChild(new Shape("StopText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"Default"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}))))
            .addChild(new Shape("Stop_Back")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Clear")))
              .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
          .addChild(new Transform("SceneLabel").setTranslation(1.3,3.0,0.0)
            .addChild(new Shape("SceneLabelText")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("text_color")))
              .setGeometry(new Text().setString(new String[] {"BoxMan","Animation"})
                .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))))))))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_sacroiliacRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt12RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt11RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt10RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt9RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt8RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_skullbaseRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stop_HumanoidRootTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Stop_HumanoidRootRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_midtarsalRotInterp").setFromField("value_changed").setToNode("boxman_l_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_midtarsalRotInterp").setFromField("value_changed").setToNode("boxman_r_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_vl5RotInterp").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_skullbaseRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stop_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_eyeballRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_eyeballRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index1Roll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index2Roll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index3Roll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Stand_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Pitches_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Pitches_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Pitch_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Yaws_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Yaws_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Yaw_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Rolls_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Rolls_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Roll_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyTranInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Walk_whole_bodyTranInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Walk_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_lower_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_headRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_neckRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_upper_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyTranInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_r_ankleRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_r_kneeRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_r_hipRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_ankleRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_kneeRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_hipRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_r_wristRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_r_elbowRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_r_shoulderRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_wristRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_elbowRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_l_shoulderRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_headRotInterp_Run").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_whole_bodyRotInterp_Run").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Run_whole_bodyTranInterp_Run").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Run_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyTranInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Jump_whole_bodyTranInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Jump_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_shoulderRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_ForeArmPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_wristRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_shoulderRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ForeArmPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_wristRoll").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_hipPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_kneePitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_hipPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_kneePitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_anklePitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Kick_l_shoulderRoll").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_l_ForeArmPitch").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_l_wristRoll").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_shoulderRoll").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_ForeArmPitch").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_wristRoll").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_hipPitch").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_kneePitch").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_l_hipPitch").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_l_kneePitch").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Kick_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_startTime")));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getSKINCOORD_4_120_point_1()
		{
			double[] value = {-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05};
			return value;
		}
		private double[] getSKINCOORD_4_120_point_2()
		{
			double[] value = {-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.10,0.05,0.12,1.10,0.05,0.12,1.10,-0.1,-0.12,1.10,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.030,0.05,1.56,0.030,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.60,0.060,0.05,1.60,0.060,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.60,0.13,0.07,1.60,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1};
			return value;
		}
		private double[] getSKINCOORD_4_120_point_3()
		{
			double[] value = {-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_123_coordIndex_1()
		{
			int[] value = {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_133_coordIndex_1()
		{
			int[] value = {148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_143_coordIndex_1()
		{
			int[] value = {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1};
			return value;
		}
		private int[] getIndexedLineSet_6_143_coordIndex_2()
		{
			int[] value = {74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1};
			return value;
		}

		/** Large attribute array: Coordinate DEF='SKINCOORD' point field, scene-graph level=4, element #120, 672 total numbers made up of 224 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getSKINCOORD_4_120_point()
		{
			MFVec3f SKINCOORD_4_120_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getSKINCOORD_4_120_point_1()))
				.append(new MFVec3f(getSKINCOORD_4_120_point_2()))
				.append(new MFVec3f(getSKINCOORD_4_120_point_3()));
			return SKINCOORD_4_120_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #123, 888 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_123_coordIndex()
		{
			MFInt32 IndexedFaceSet_6_123_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_123_coordIndex_1()));
			return IndexedFaceSet_6_123_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #133, 400 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_133_coordIndex()
		{
			MFInt32 IndexedFaceSet_6_133_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_133_coordIndex_1()));
			return IndexedFaceSet_6_133_coordIndex;
		}
		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #143, 1776 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_143_coordIndex()
		{
			MFInt32 IndexedLineSet_6_143_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_143_coordIndex_1()))
				.append(new MFInt32(getIndexedLineSet_6_143_coordIndex_2()));
			return IndexedLineSet_6_143_coordIndex;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BoxManAnimationPanel model
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
        X3D thisExampleX3dModel = new BoxManAnimationPanel().getX3dModel();

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
			System.out.println("WARNING: \"BoxManAnimationPanel\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"BoxManAnimationPanel\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
