package net.x3djsonld.data;

import java.util.*;
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
 <p> Related links: BoxManAnimationPanel.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.BoxManAnimationPanel&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanel.x3d">BoxManAnimationPanel.x3d</a> </td>
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
			<td> 9 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanelInclined.png">BoxManAnimationPanelInclined.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanel.mp4">BoxManAnimationPanel.mp4</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxMan.x3d">BoxMan.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/../license.html">../license.html</a> </td>
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("BoxManAnimationPanel.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification, animation panel shows multiple behaviors."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Joe Williams and James Smith - james@vapourtech.com"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("Joe Williams and Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent(".x3d to .x3d translation used BS Contact Geo 8.203"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("1 March 2001"))
    .addMeta(new metaObject().setName("revision").setContent("12 January 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATED ).setContent("14 January 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("9 May 2020"))
    .addMeta(new metaObject().setName(metaObject.NAME_IMAGE      ).setContent("BoxManAnimationPanelInclined.png"))
    .addMeta(new metaObject().setName(metaObject.NAME_MOVINGIMAGE).setContent("BoxManAnimationPanel.mp4"))
    .addMeta(new metaObject().setName(metaObject.NAME_MOVINGIMAGE).setContent("https://www.youtube.com/watch?v=8tI83Rtg_DU"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://twitter.com/Web3DConsortium/status/820638047523913728"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://twitter.com/Web3DConsortium/status/820642726009978881"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("boxman.original.wrl"))
    .addMeta(new metaObject().setName(metaObject.NAME_TODO       ).setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("BoxMan.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org/Models/H-Anim2001/boxman"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org/Specifications/H-Anim2001"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org/Models"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://h-anim.org/Nodes"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
    .addMeta(new metaObject().setName(metaObject.NAME_RIGHTS     ).setContent("(C) 2000 James Smith - james@vapourtech.com"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.vapourtech.com"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("BoxMan H-Anim 2.0"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/BoxManAnimationPanel.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setInfo(new String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"}).setTitle("BoxMan - A Seamless VRML Human"))
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new float[] {0.6f,0.6f,0.6f})).setSkyColor(new MFColorObject(new float[] {0.75f,0.75f,0.75f})))
    .addChild(new HAnimHumanoidObject("boxman_Humanoid").setName("Humanoid").setInfo(new String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"}).setVersion("2.0")
      .addSkeleton(new HAnimJointObject("boxman_HumanoidRoot").setName("humanoid_root").setCenter(0.0f,0.9723f,-0.0728f).setSkinCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
        .addChild(new HAnimSegmentObject("boxman_sacrum").setName("sacrum")
          .addChild(new TransformObject().setTranslation(0.0f,0.9723f,-0.0728f)
            .addChild(new ShapeObject("SphereYellow")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,0.0f)))
              .setGeometry(new SphereObject().setRadius(0.02f)))))
        .addChild(new HAnimJointObject("boxman_l_hip").setName("l_hip").setCenter(0.0956f,0.9364f,0.0f).setSkinCoordIndex(new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f})
          .addChild(new HAnimSegmentObject("boxman_l_thigh").setName("l_thigh")
            .addChild(new TransformObject().setTranslation(0.0956f,0.9364f,0.0f)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_l_knee").setName("l_knee").setCenter(0.0956f,0.5095f,-0.0036f).setSkinCoordIndex(new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
            .addChild(new HAnimSegmentObject("boxman_l_calf").setName("l_calf")
              .addChild(new TransformObject().setTranslation(0.0956f,0.5095f,-0.0036f)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_l_ankle").setName("l_ankle").setCenter(0.0946f,0.0762f,-0.0261f).setSkinCoordIndex(new int[] {64,65,66,67,68,69,70,71}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
              .addChild(new HAnimSegmentObject("boxman_l_hindfoot").setName("l_hindfoot")
                .addChild(new TransformObject().setTranslation(0.0946f,0.0762f,-0.0261f)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_l_midtarsal").setName("l_midtarsal").setCenter(0.1079f,0.0317f,0.0670f).setSkinCoordIndex(new int[] {72,73,74,75,76,77,78,79}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                .addChild(new HAnimSegmentObject("boxman_l_middistal").setName("l_middistal")
                  .addChild(new TransformObject().setTranslation(0.1079f,0.0317f,0.0670f)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_l_middistal_tip").setName("l_middistal_tip").setTranslation(.095f,0.0005f,0.1924f)
                    .addChild(new ShapeObject("SphereRed")
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f)))
                      .setGeometry(new SphereObject().setRadius(0.02f)))))))))
        .addChild(new HAnimJointObject("boxman_r_hip").setName("r_hip").setCenter(-0.0956f,0.9364f,0.0f).setSkinCoordIndex(new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f})
          .addChild(new HAnimSegmentObject("boxman_r_thigh").setName("r_thigh")
            .addChild(new TransformObject().setTranslation(-0.0956f,0.9364f,0.0f)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_r_knee").setName("r_knee").setCenter(-0.0956f,0.5095f,-0.0036f).setSkinCoordIndex(new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
            .addChild(new HAnimSegmentObject("boxman_r_calf").setName("r_calf")
              .addChild(new TransformObject().setTranslation(-0.0956f,0.5095f,-0.0036f)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_r_ankle").setName("r_ankle").setCenter(-0.0946f,0.0762f,-0.0261f).setSkinCoordIndex(new int[] {132,133,134,135,136,137,138,139}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
              .addChild(new HAnimSegmentObject("boxman_r_hindfoot").setName("r_hindfoot")
                .addChild(new TransformObject().setTranslation(-0.0946f,0.0762f,-0.0261f)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_r_midtarsal").setName("r_midtarsal").setCenter(-0.1079f,0.0317f,0.0670f).setSkinCoordIndex(new int[] {140,141,142,143,144,145,146,147}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                .addChild(new HAnimSegmentObject("boxman_r_middistal").setName("r_middistal")
                  .addChild(new TransformObject().setTranslation(-0.1079f,0.0317f,0.0670f)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_r_middistal_tip").setName("r_middistal_tip").setTranslation(-0.095f,0.0005f,0.1924f)
                    .addChild(new ShapeObject().setUSE("SphereRed"))))))))
        .addChild(new HAnimJointObject("boxman_vl5").setName("vl5").setCenter(0.0f,1.0817f,-0.0728f).setSkinCoordIndex(new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
          .addChild(new HAnimSegmentObject("boxman_l5").setName("l5")
            .addChild(new TransformObject().setTranslation(0.0f,1.0817f,-0.0728f)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_skullbase").setName("skullbase").setCenter(0.0f,1.6440f,0.036f).setSkinCoordIndex(new int[] {168,169,170,171,172,173,174,175}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
            .addChild(new HAnimSegmentObject("boxman_skull").setName("skull")
              .addChild(new TransformObject().setTranslation(0.0f,1.6440f,0.036f)
                .addChild(new ShapeObject().setUSE("SphereYellow")))
              .addChild(new HAnimSiteObject("boxman_skull_tip").setName("skull_tip").setTranslation(-0.0029f,1.7771f,0.0274f)
                .addChild(new ShapeObject().setUSE("SphereYellow")))))
          .addChild(new HAnimJointObject("boxman_l_shoulder").setName("l_shoulder").setCenter(0.1968f,1.4642f,-0.0265f).setSkinCoordIndex(new int[] {176,177,178,179,180,181,182,183}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
            .addChild(new HAnimSegmentObject("boxman_l_upperarm").setName("l_upperarm")
              .addChild(new TransformObject().setTranslation(0.1968f,1.4642f,-0.0265f)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_l_elbow").setName("l_elbow").setCenter(0.1982f,1.1622f,-0.0557f).setSkinCoordIndex(new int[] {184,185,186,187,188,189,190,191}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
              .addChild(new HAnimSegmentObject("boxman_l_forearm").setName("l_forearm")
                .addChild(new TransformObject().setTranslation(0.1982f,1.1622f,-0.0557f)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_l_wrist").setName("l_wrist").setCenter(0.1972f,0.8929f,-0.0690f).setSkinCoordIndex(new int[] {192,193,194,195,196,197,198,199}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                .addChild(new HAnimSegmentObject("boxman_l_hand").setName("l_hand")
                  .addChild(new TransformObject().setTranslation(0.1972f,0.8929f,-0.0690f)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_l_hand_tip").setName("l_hand_tip").setTranslation(0.1912f,0.6976f,-0.0710f)
                    .addChild(new ShapeObject().setUSE("SphereRed")))))))
          .addChild(new HAnimJointObject("boxman_r_shoulder").setName("r_shoulder").setCenter(-0.1968f,1.4642f,-0.0265f).setSkinCoordIndex(new int[] {200,201,202,203,204,205,206,207}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
            .addChild(new HAnimSegmentObject("boxman_r_upperarm").setName("r_upperarm")
              .addChild(new TransformObject().setTranslation(-0.1968f,1.4642f,-0.0265f)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_r_elbow").setName("r_elbow").setCenter(-0.1982f,1.1622f,-0.0557f).setSkinCoordIndex(new int[] {208,209,210,211,212,213,214,215}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
              .addChild(new HAnimSegmentObject("boxman_r_forearm").setName("r_forearm")
                .addChild(new TransformObject().setTranslation(-0.1982f,1.1622f,-0.0557f)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_r_wrist").setName("r_wrist").setCenter(-0.1972f,0.8929f,-0.0690f).setSkinCoordIndex(new int[] {216,217,218,219,220,221,222,223}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                .addChild(new HAnimSegmentObject("boxman_r_hand").setName("r_hand")
                  .addChild(new TransformObject().setTranslation(-0.1972f,0.8929f,-0.0690f)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_r_hand_tip").setName("r_hand_tip").setTranslation(-0.1912f,0.6976f,-0.0710f)
                    .addChild(new ShapeObject().setUSE("SphereRed")))))))))
      .addComments(" # sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8) ")
      .setSkinCoord(new CoordinateObject("SKINCOORD").setPoint(getSKINCOORD_4_120_point()))
      .addComments("*** Warning: very large comment found (5259 characters) starting with 'Coordinate DEF='SKINCOORD2' c' split into blocks of 4000 characters")
        .addComments(" Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.6").addComments("56898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/ ")
      .addSkin(new GroupObject()
        .addChild(new ShapeObject("TrouserSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.0f,1.0f).setTransparency(0.5f)))
          .addComments(" # 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(getIndexedFaceSet_6_123_coordIndex())
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("ShoeSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.0f,0.0f).setTransparency(0.5f)))
          .addComments(" # 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1})
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("ShirtSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,0.0f).setTransparency(0.5f)))
          .addComments(" # 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(getIndexedFaceSet_6_133_coordIndex())
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("HeadHandsFleshToneSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.75f,0.75f).setTransparency(0.5f)))
          .addComments(" # 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1})
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("SkinLines")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.0f,0.0f)))
          .addComments(" Combined set of prior IFS coordIndex values ")
          .setGeometry(new IndexedLineSetObject().setCoordIndex(getIndexedLineSet_6_143_coordIndex())
            .setCoord(new CoordinateObject().setUSE("SKINCOORD")))))
      .addComments(" top-level joint references ")
      .addJoints(new HAnimJointObject().setUSE("boxman_r_wrist"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_elbow"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_shoulder"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_wrist"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_elbow"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_shoulder"))
      .addJoints(new HAnimJointObject().setUSE("boxman_skullbase"))
      .addJoints(new HAnimJointObject().setUSE("boxman_vl5"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_midtarsal"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_ankle"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_knee"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_hip"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_midtarsal"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_ankle"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_knee"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_hip"))
      .addJoints(new HAnimJointObject().setUSE("boxman_HumanoidRoot"))
      .addComments(" top-level segment references ")
      .addSegments(new HAnimSegmentObject().setUSE("boxman_sacrum"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_thigh"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_calf"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_hindfoot"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_middistal"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_thigh"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_calf"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_hindfoot"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_middistal"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l5"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_skull"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_upperarm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_forearm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_hand"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_upperarm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_forearm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_hand"))
      .addComments(" top-level site references ")
      .addSites(new HAnimSiteObject().setUSE("boxman_l_middistal_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_r_middistal_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_skull_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_l_hand_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_r_hand_tip"))
      .addViewpoints(new HAnimSiteObject().setName("BoxMan_view")
        .addChild(new ViewpointObject("Inclined_View").setDescription("Inclined View").setOrientation(0.0f,1.0f,0.0f,0.78f).setPosition(2.0f,0.9f,2.0f))
        .addChild(new ViewpointObject("Front_View").setDescription("Front View").setPosition(0.0f,1.0f,3.0f))
        .addChild(new ViewpointObject("Best_View").setDescription("Right-side View").setOrientation(0.0f,1.0f,0.0f,-1.57f).setPosition(-3.0f,1.0f,0.0f))
        .addChild(new ViewpointObject("Side_View").setDescription("Left-side View").setOrientation(0.0f,1.0f,0.0f,1.57f).setPosition(3.0f,1.0f,0.0f))
        .addChild(new ViewpointObject("Top_View").setDescription("Top View").setOrientation(1.0f,0.0f,0.0f,-1.57f).setPosition(0.0f,3.0f,0.0f))))
    .addChild(new GroupObject("StopAnimation")
      .addChild(new TimeSensorObject("StopTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new PositionInterpolatorObject("Stop_HumanoidRootTransInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_HumanoidRootRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_sacroiliacRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_ankleRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_subtalarRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_midtarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_metatarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_ankleRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_subtalarRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_midtarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_metatarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vl5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vl4RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vl3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vl2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vl1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt12RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt11RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt10RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt9RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt8RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt7RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt6RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt4RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vt1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc7RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc6RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc4RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_vc1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_skullbaseRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_eyeball_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_eyeball_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_sternoclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_acromioclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_thumb1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_thumb2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_thumb3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_index0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_index1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_index2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_index3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_middle0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_middle1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_middle2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_middle3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_ring0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_ring1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_ring2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_ring3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_pinky0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_pinky1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_pinky2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_l_pinky3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_sternoclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_acromioclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_thumb1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_thumb2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_thumb3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_index0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_index1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_index2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_index3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_middle0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_middle1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_middle2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_middle3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_ring0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_ring1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_ring2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_ring3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_pinky0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_pinky1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_pinky2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stop_r_pinky3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f}))))
    .addChild(new GroupObject("StandAnimation")
      .addChild(new TimeSensorObject("StandTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Stand_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.015f,1.0f,0.0f,0.0f,0.17f,-1.0f,0.0f,0.0f,0.025f,1.0f,0.0f,0.0f,0.01f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_ankleRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_ankleRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,0.25f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_headRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_neckRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_eyeballRotInterp").setKey(new float[] {0.0f,0.4f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.45f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_eyeballRotInterp").setKey(new float[] {0.0f,0.4f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.45f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_upper_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_whole_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Stand_whole_bodyTransInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.1f,1.0f,0.0f,0.0f,0.27f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_index1Roll").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.1f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.3f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_index2Roll").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.4f,0.0f,0.0f,1.0f,0.32f,0.0f,0.0f,1.0f,0.25f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Stand_r_index3Roll").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.3f,0.0f,0.0f,1.0f,0.35f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.0f}))))
    .addChild(new GroupObject("PitchesAnimation")
      .addChild(new TimeSensorObject("PitchTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Pitch_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.5f,-1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.75f,-1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_r_shoulderRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_l_shoulderRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_headRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_neckRotInterp").setKey(new float[] {0.0f,0.25f,0.55f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.55f,-1.0f,0.0f,0.0f,1.05f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_upper_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitches_whole_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Pitches_whole_bodyTransInterp").setKey(new float[] {0.0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,-0.15f,0.0f,0.0f,-0.7f,0.0f,0.0f,-0.15f,0.0f,0.0f,0.0f,0.0f,0.0f,-0.15f,0.0f,0.0f,-0.7f,0.0f,0.0f,-0.15f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.3f,1.0f,0.0f,0.0f,0.27f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Pitch_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.3f,1.0f,0.0f,0.0f,0.27f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f}))))
    .addChild(new GroupObject("YawsAnimation")
      .addChild(new TimeSensorObject("YawTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Yaw_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_kneeRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_kneeRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_hipRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_r_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_wristRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_l_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_headRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_neckRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_upper_bodyRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaws_whole_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Yaws_whole_bodyTransInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.1f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.24f,0.0f,-1.0f,0.0f,0.4f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Yaw_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f}))))
    .addChild(new GroupObject("RollsAnimation")
      .addChild(new TimeSensorObject("RollTimer").setCycleInterval(5.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Roll_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,-1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_kneeRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_wristRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_r_shoulderRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,-1.0f,3.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_wristRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_l_shoulderRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,3.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_headRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_neckRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.25f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.25f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_upper_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Rolls_whole_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Rolls_whole_bodyTransInterp").setKey(new float[] {0.0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,-0.25f,0.0f,0.0f,-0.8f,0.0f,0.0f,-0.25f,0.0f,0.0f,0.0f,0.0f,0.0f,-0.25f,0.0f,0.0f,-0.8f,0.0f,0.0f,-0.25f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.22f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,-0.22f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Roll_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f}))))
    .addChild(new GroupObject("WalkAnimation")
      .addChild(new TimeSensorObject("WalkTimer").setCycleInterval(1.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Walk_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_ankleRotInterp").setKey(new float[] {0.0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.3533f,-1.0f,0.0f,0.0f,0.1072f,1.0f,0.0f,0.0f,0.2612f,1.0f,0.0f,0.0f,0.1268f,-1.0f,0.0f,0.0f,0.01793f,-1.0f,0.0f,0.0f,0.05824f,-1.0f,0.0f,0.0f,0.2398f,-1.0f,0.0f,0.0f,0.35f,-1.0f,0.0f,0.0f,0.3322f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_kneeRotInterp").setKey(new float[] {0.0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.8573f,1.0f,0.0f,0.0f,0.8926f,1.0f,0.0f,0.0f,0.5351f,1.0f,0.0f,0.0f,0.1756f,1.0f,0.0f,0.0f,0.1194f,1.0f,0.0f,0.0f,0.3153f,1.0f,0.0f,0.0f,0.09354f,1.0f,0.0f,0.0f,0.08558f,1.0f,0.0f,0.0f,0.2475f,1.0f,0.0f,0.0f,0.8573f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_hipRotInterp").setKey(new float[] {0.0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1.0f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1.0f,0.0f,0.0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_ankleRotInterp").setKey(new float[] {0.0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,0.06714f,-1.0f,0.0f,0.0f,0.2152f,-1.0f,0.0f,0.0f,0.3184f,-1.0f,0.0f,0.0f,0.4717f,-1.0f,0.0f,0.0f,0.2912f,1.0f,0.0f,0.0f,0.1222f,-1.0f,0.0f,0.0f,0.06714f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_kneeRotInterp").setKey(new float[] {0.0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.3226f,1.0f,0.0f,0.0f,0.1556f,1.0f,0.0f,0.0f,0.08678f,1.0f,0.0f,0.0f,0.8751f,1.0f,0.0f,0.0f,1.131f,1.0f,0.0f,0.0f,0.09961f,1.0f,0.0f,0.0f,0.3942f,1.0f,0.0f,0.0f,0.3226f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1.0f,0.0f,0.0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f})))
      .addChild(new OrientationInterpolatorObject("Walk_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,-1.0f,0.1056f,0.0f,0.0f,1.0f,0.09018f,0.0f,0.0f,-1.0f,0.1056f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_wristRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_elbowRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,0.411508f,-1.0f,0.0f,0.0f,0.0925011f,-1.0f,0.0f,0.0f,0.572568f,-1.0f,0.0f,0.0f,0.411508f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_shoulderRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,0.09346f,1.0f,0.0f,0.0f,0.3197f,-1.0f,0.0f,0.0f,0.1564f,-1.0f,0.0f,0.0f,0.09346f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_wristRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,-1.0f,0.0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0.0f,-1.0f,0.0f,0.461076f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_elbowRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,0.0659878f,-1.0f,0.0f,0.0f,0.488383f,-1.0f,0.0f,0.0f,0.0177536f,-1.0f,0.0f,0.0f,0.0659878f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_shoulderRotInterp").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.1189f,-1.0f,0.0f,0.0f,0.1861f,1.0f,0.0f,0.0f,0.3357f,1.0f,0.0f,0.0f,0.1189f})))
      .addChild(new OrientationInterpolatorObject("Walk_headRotInterp").setKey(new float[] {0.0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,-1.0f,0.0f,0.08642f,0.0f,1.0f,0.0f,0.1825f,0.0f,1.0f,0.0f,0.1505f,0.0f,1.0f,0.0f,0.1053f,0.0f,1.0f,0.0f,0.04391f,0.0f,-1.0f,0.0f,0.03119f,0.0f,-1.0f,0.0f,0.07936f,0.0f,-1.0f,0.0f,0.1616f,0.0f,-1.0f,0.0f,0.155f,0.0f,-1.0f,0.0f,0.08642f})))
      .addChild(new OrientationInterpolatorObject("Walk_neckRotInterp").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_upper_bodyRotInterp").setKey(new float[] {0.0f,0.2083f,0.375f,0.75f,0.8333f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0.0f,1.0f,0.0f,0.0826f})))
      .addChild(new OrientationInterpolatorObject("Walk_whole_bodyRotInterp").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Walk_whole_bodyTranInterp").setKey(new float[] {0.0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,-0.00928f,0.0f,0.0f,-0.003858f,0.0f,0.0f,-0.008847f,0.0f,0.0f,-0.01486f,0.0f,0.0f,-0.02641f,0.0f,0.0f,-0.03934f,0.0f,0.0f,-0.0502f,0.0f,0.0f,-0.07469f,0.0f,0.0f,-0.02732f,0.0f,0.0f,-0.01608f,0.0f,0.0f,-0.01129f,0.0f,0.0f,-0.005819f,0.0f,0.0f,-0.002004f,0.0f,0.0f,-0.002579f,0.0f,0.0f,-0.0143f,0.0f,0.0f,-0.03799f,0.0f,0.0f,-0.05648f,0.0f,0.0f,-0.045f,0.0f,0.0f,-0.00928f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Walk_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f}))))
    .addChild(new GroupObject("RunAnimation")
      .addChild(new TimeSensorObject("RunTimer").setCycleInterval(0.9).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Run_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_l_hipRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.99f,0.033f,0.04f,1.42f,-0.99f,0.1328f,0.067f,0.42f,0.99f,0.014f,0.009f,0.9f,-0.99f,0.0703f,0.05f,0.7f,-0.99f,0.033f,0.04f,1.42f})))
      .addChild(new OrientationInterpolatorObject("Run_l_kneeRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,1.01f,1.0f,0.0f,0.0f,0.426f,1.0f,0.0f,0.0f,0.705f,1.0f,0.0f,0.0f,2.179f,1.0f,0.0f,0.0f,1.01f})))
      .addChild(new OrientationInterpolatorObject("Run_l_ankleRotInterp_Run").setKey(new float[] {0.0f,0.22f,0.3f,0.4f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0374f,-1.0f,0.0f,0.0f,0.1037f,-1.0f,0.0f,0.0f,0.4328f,1.0f,0.0f,0.0f,0.1929f,1.0f,0.0f,0.0f,0.03574f})))
      .addChild(new OrientationInterpolatorObject("Run_r_hipRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.99f,-0.014f,0.009f,0.9f,-0.99f,-0.0703f,-0.05f,0.7f,-0.99f,-0.033f,0.04f,1.42f,-0.99f,-0.1328f,-0.067f,0.42f,0.99f,-0.014f,0.009f,0.9f})))
      .addChild(new OrientationInterpolatorObject("Run_r_kneeRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.705f,1.0f,0.0f,0.0f,2.179f,1.0f,0.0f,0.0f,1.01f,1.0f,0.0f,0.0f,0.426f,1.0f,0.0f,0.0f,0.705f})))
      .addChild(new OrientationInterpolatorObject("Run_r_ankleRotInterp_Run").setKey(new float[] {0.0f,0.4f,0.71f,0.8f,0.82f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.2323f,-1.0f,0.0f,0.0f,0.07843f,-1.0f,0.0f,0.0f,0.32f,-1.0f,0.0f,0.0f,0.374f,-1.0f,0.0f,0.0f,0.3478f,1.0f,0.0f,0.0f,0.2323f})))
      .addChild(new OrientationInterpolatorObject("Run_l_shoulderRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.99f,-0.074f,0.25f,1.5f,0.99f,-0.092f,0.44f,0.3f,-0.99f,0.136f,0.25f,0.85f,0.99f,-0.081f,0.38f,0.4f,0.99f,-0.074f,0.25f,1.5f})))
      .addChild(new OrientationInterpolatorObject("Run_l_elbowRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,1.85f,-0.99f,-0.19f,0.18f,1.35f,-1.0f,0.0f,0.0f,0.975f,-0.99f,-0.09f,-0.02f,1.55f,-1.0f,0.0f,0.0f,1.85f})))
      .addChild(new OrientationInterpolatorObject("Run_l_wristRotInterp_Run").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.25f,-1.0f,0.08f,0.14f,0.25f,1.0f,0.08f,0.14f,0.0f,0.0f,1.0f,0.0f,-0.25f,1.0f,0.08f,-0.14f,-0.25f,1.0f,0.08f,0.14f})))
      .addChild(new OrientationInterpolatorObject("Run_r_shoulderRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.99f,-0.136f,-0.25f,0.85f,0.99f,0.081f,-0.38f,0.4f,0.99f,0.074f,-0.25f,1.5f,0.99f,0.081f,-0.38f,0.4f,-0.99f,-0.136f,-0.25f,0.85f})))
      .addChild(new OrientationInterpolatorObject("Run_r_elbowRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,0.975f,-0.99f,0.09f,0.02f,1.55f,-1.0f,0.0f,0.0f,1.85f,-0.99f,0.19f,-0.18f,1.35f,-1.0f,0.0f,0.0f,0.975f})))
      .addChild(new OrientationInterpolatorObject("Run_r_wristRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f})))
      .addChild(new OrientationInterpolatorObject("Run_lower_bodyRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,-1.0f,0.0f,0.125f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,0.125f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,0.125f})))
      .addChild(new OrientationInterpolatorObject("Run_headRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.08f,1.0f,0.0f,0.0f,0.12f,1.0f,0.0f,0.0f,0.3f,1.0f,0.0f,0.0f,0.3f,1.0f,0.0f,0.0f,0.08f})))
      .addChild(new OrientationInterpolatorObject("Run_neckRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7091f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.7f,0.0f,0.0f,0.4f,-0.7f,-0.7f,0.0f,0.4f,0.0f,0.0f,0.0f,0.4f,-0.7f,0.7f,0.0f,0.4f,0.7f,0.0f,0.0f,0.4f})))
      .addChild(new OrientationInterpolatorObject("Run_upper_bodyRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7636f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.97f,0.65f,0.086f,0.5f,0.9f,0.003f,-0.02f,0.38f,0.95f,-0.68f,-0.086f,0.5f,0.9f,0.004f,-0.025f,0.4f,0.97f,0.65f,0.086f,0.5f})))
      .addChild(new OrientationInterpolatorObject("Run_whole_bodyRotInterp_Run").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.06f,1.0f,0.0f,0.0f,0.167f,1.0f,0.0f,0.0f,0.06f,1.0f,0.0f,0.0f,0.168f,1.0f,0.0f,0.0f,0.06f})))
      .addChild(new PositionInterpolatorObject("Run_whole_bodyTranInterp_Run").setKey(new float[] {0.0f,0.22f,0.3f,0.31f,0.5f,0.69f,0.7f,0.78f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,-0.01f,0.0f,0.0f,-0.037f,0.0f,0.0f,-0.049f,0.0f,0.0f,-0.037f,0.0f,0.0f,-0.01f,0.0f,0.0f,-0.037f,0.0f,0.0f,-0.049f,0.0f,0.0f,-0.037f,0.0f,0.0f,-0.01f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.27f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Run_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.25f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.27f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f}))))
    .addChild(new GroupObject("JumpAnimation")
      .addChild(new TimeSensorObject("JumpTimer").setCycleInterval(3.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Jump_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_ankleRotInterp").setKey(new float[] {0.0f,0.1f,0.15f,0.25f,0.28f,0.32f,0.35f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.6735f,-1.0f,0.0f,0.0f,0.6735f,-1.0f,0.0f,0.0f,0.3527f,-1.0f,0.0f,0.0f,0.3038f,-1.0f,0.0f,0.0f,0.07964f,1.0f,0.0f,0.0f,1.3f,1.0f,0.0f,0.0f,0.6509f,1.0f,0.0f,0.0f,0.3001f,-1.0f,0.0f,0.0f,0.2087f,-1.0f,0.0f,0.0f,0.3756f,-1.0f,0.0f,0.0f,0.3279f,-1.0f,0.0f,0.0f,0.1193f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_kneeRotInterp").setKey(new float[] {0.0f,0.2f,0.25f,0.3f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,2.5f,1.0f,0.0f,0.0f,1.7f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.9507f,1.0f,0.0f,0.0f,0.5845f,1.0f,0.0f,0.0f,0.9054f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_hipRotInterp").setKey(new float[] {0.0f,0.18f,0.24f,0.26f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.63f,-1.0f,0.0f,0.0f,1.7f,-1.0f,0.0f,0.0f,1.55f,-1.0f,0.0f,0.0f,0.8943f,-1.0f,0.0f,0.0f,0.3698f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.4963f,-1.0f,0.0f,0.0f,0.3829f,-1.0f,0.0f,0.0f,0.5169f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_ankleRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.625f,-1.0f,0.0f,0.0f,0.625f,-1.0f,0.0f,0.0f,0.3364f,-1.0f,0.0f,0.0f,0.2742f,-1.0f,0.0f,0.0f,0.05078f,1.0f,0.0f,0.0f,0.2833f,1.0f,0.0f,0.0f,0.6667f,1.0f,0.0f,0.0f,0.2833f,-1.0f,0.0f,0.0f,0.2108f,-1.0f,0.0f,0.0f,0.375f,-1.0f,0.0f,0.0f,0.3146f,-1.0f,0.0f,0.0f,0.1174f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_kneeRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,2.047f,1.0f,0.0f,0.0f,2.047f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.566f,1.0f,0.0f,0.0f,0.5913f,1.0f,0.0f,0.0f,0.9235f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_hipRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,4.349f,1.0f,0.0f,0.0f,4.349f,1.0f,0.0f,0.0f,4.615f,-1.0f,0.0f,0.0f,0.9136f,-1.0f,0.0f,0.0f,0.3614f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.7869f,-1.0f,0.0f,0.0f,0.3918f,-1.0f,0.0f,0.0f,0.5433f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_lower_bodyRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.1892f,1.0f,0.0f,0.0f,0.1892f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_wristRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0.0f,1.0f,0.0f,0.497349f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_elbowRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.04151f,-1.0f,0.0f,0.0f,0.04151f,-1.0f,0.0f,0.0f,0.5855f,-1.0f,0.0f,0.0f,0.5852f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_shoulderRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_wristRotInterp").setKey(new float[] {0.0f,0.48f,0.52f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0.0f,-1.0f,0.0f,0.655922f,-0.00050618f,-0.999999f,0.0012782f,1.28397f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_elbowRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.58f,0.72f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,1.13f,-1.0f,0.0f,0.0f,1.7f,-1.0f,0.0f,0.0f,1.7f,-1.0f,0.0f,0.0f,0.4f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_shoulderRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1.0f,0.0004113f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_headRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.5989f,-1.0f,0.0f,0.0f,0.5989f,-1.0f,0.0f,0.0f,0.3216f,1.0f,0.0f,0.0f,0.06503f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_neckRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.1942f,-1.0f,0.0f,0.0f,0.1942f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.2284f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_upper_bodyRotInterp").setKey(new float[] {0.0f,0.22f,0.28f,0.34f,0.71f,0.88f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.05f,1.0f,0.0f,0.0f,1.051f,-1.0f,0.0f,0.0f,0.257f,1.0f,0.0f,0.0f,0.2171f,1.0f,0.0f,0.0f,0.3465f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_whole_bodyRotInterp").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.3273f,1.0f,0.0f,0.0f,0.3273f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Jump_whole_bodyTranInterp").setKey(new float[] {0.0f,0.04f,0.07f,0.11f,0.15f,0.19f,0.22f,0.25f,0.27f,0.31f,0.33f,0.35f,0.38f,0.53f,0.544f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,-0.01264f,-0.01289f,0.0f,-0.04712f,-0.03738f,-0.0003345f,-0.1049f,-0.05353f,-0.0005712f,-0.1892f,-0.06561f,-0.0008233f,-0.286f,-0.06276f,-0.0009591f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.25f,-0.1499f,-0.0008616f,-0.05f,-0.06358f,-0.0005128f,0.15f,-0.05488f,0.0004779f,0.55f,0.02732f,0.0001728f,1.385f,0.006873f,0.00017f,1.395f,0.0069f,0.0f,0.35f,0.02148f,0.0f,-0.01299f,-0.01057f,0.0f,-0.06932f,-0.01064f,0.0001365f,-0.1037f,-0.005059f,0.0001279f,-0.07198f,-0.007596f,0.000141f,-0.01626f,-0.004935f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.22f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,-0.22f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.1f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-1.0f,0.24f,0.0f,-1.0f,0.0f,0.4f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,-0.1f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.6f,0.0f,1.0f,0.0f,0.1f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.8f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.6f,0.0f,-1.0f,0.0f,0.8f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,1.1f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Jump_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,1.1f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f}))))
    .addChild(new GroupObject("KickAnimation")
      .addChild(new TimeSensorObject("KickTimer").setCycleInterval(3.73).setLoop(true))
      .addChild(new OrientationInterpolatorObject("Kick_l_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.22f,0.0f,0.0f,1.0f,0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_shoulderRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.76f,-0.25f,0.0f,1.0f,1.76f,0.0f,0.0f,1.0f,1.256f,0.0f,0.0f,1.0f,0.05f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_ForeArmPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,-0.55f,-1.0f,0.25f,0.0f,2.55f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_wristRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,0.55f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,1.1f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_sternoclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,-0.22f,0.0f,0.0f,1.0f,-0.2f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_acromioclavicularRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-0.05f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_shoulderRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-1.76f,0.25f,0.0f,1.0f,-1.76f,0.0f,0.0f,1.0f,-1.256f,0.0f,0.0f,1.0f,-0.05f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_ForeArmPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,-0.55f,1.0f,0.25f,0.0f,-2.55f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_wristRoll").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,-0.55f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_thumb1Pitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,1.1f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_hipPitch").setKey(new float[] {0.0f,0.2f,0.3f,0.5f,0.6f,0.9f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.9f,-1.0f,0.0f,0.0f,1.75f,-1.0f,0.0f,0.0f,2.25f,-1.0f,0.0f,0.0f,2.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_kneePitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.95f,1.0f,0.0f,0.0f,1.75f,-1.0f,0.0f,0.0f,0.28f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_hipPitch").setKey(new float[] {0.0f,0.2f,0.3f,0.5f,0.6f,0.9f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_l_kneePitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_anklePitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.9f,-1.0f,0.0f,0.0f,0.95f,1.0f,0.0f,0.0f,0.75f,-1.0f,0.0f,0.0f,0.05f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_r_metatarsalPitch").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.0f,0.5f,-1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.75f,-1.0f,0.0f,0.0f,0.2f,1.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_sacroiliacYaw").setKey(new float[] {0.0f,0.2f,0.4f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,0.0f,0.1f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,-1.0f,0.24f,0.0f,-1.0f,0.0f,0.4f,0.0f,1.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_vl5Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_vc6Yaw").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_lower_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_upper_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_whole_bodyRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new PositionInterpolatorObject("Kick_whole_bodyTransInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("Kick_neckRotInterp").setKey(new float[] {0.0f,0.25f,0.55f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.7f,1.0f,0.0f,0.0f,0.5f,0.0f,0.0f,1.0f,0.0f}))))
    .addChild(new GroupObject("Interface")
      .addChild(new TransformObject("CoordinateSystemFloor").setScale(0.1f,0.1f,0.1f)
        .addChild(new ShapeObject("AxisLinesShape")
          .addComments(" RGB lines showing XYZ axes ")
          .setGeometry(new IndexedLineSetObject().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f})))
            .setColor(new ColorObject().setColor(new MFColorObject(new float[] {1.0f,0.0f,0.0f,0.0f,0.6f,0.0f,0.0f,0.0f,1.0f}))))))
      .addChild(new ProximitySensorObject("HudProx").setSize(50.0f,50.0f,50.0f))
      .addChild(new TransformObject("HudXform").setRotation(0.0f,1.0f,0.0f,0.78f).setTranslation(2.0f,1.0f,2.0f)
        .addChild(new TransformObject().setScale(0.02f,0.02f,0.02f).setTranslation(-0.4f,-0.01f,-0.75f)
          .addChild(new TransformObject("Stand_Text").setTranslation(0.0f,-0.9f,0.0f)
            .addChild(new TouchSensorObject("Stand_Touch"))
            .addChild(new ShapeObject("StandText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject("text_color").setAmbientIntensity(1f).setDiffuseColor(0.819f,0.521f,0.169f).setEmissiveColor(0.819f,0.521f,0.169f).setSpecularColor(0.819f,0.521f,0.169f)))
              .setGeometry(new TextObject().setString(new String[] {"Stand"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Stand_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject("Clear").setAmbientIntensity(1f).setDiffuseColor(0.0f,0.5f,0.0f).setEmissiveColor(0.0f,0.5f,0.0f).setTransparency(0.8f)))
              .setGeometry(new IndexedFaceSetObject("Backing").setDEF("Backing").setCoordIndex(new int[] {0,1,2,3,-1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.2f,-0.25f,-0.01f,3.0f,-0.25f,-0.01f,3.0f,1.0f,-0.01f,-0.2f,1.0f,-0.01f}))))))
          .addChild(new TransformObject("Pitch_Text").setTranslation(0.0f,-2.4f,0.0f)
            .addChild(new TouchSensorObject("Pitch_Touch"))
            .addChild(new ShapeObject("PitchText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Pitch"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Pitch_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Yaw_Text").setTranslation(0.0f,-3.8f,0.0f)
            .addChild(new TouchSensorObject("Yaw_Touch"))
            .addChild(new ShapeObject("YawText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Yaw"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Yaw_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Roll_Text").setTranslation(0.0f,-5.2f,0.0f)
            .addChild(new TouchSensorObject("Roll_Touch"))
            .addChild(new ShapeObject("RollText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Roll"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Roll_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Walk_Text").setTranslation(0.0f,-6.6f,0.0f)
            .addChild(new TouchSensorObject("Walk_Touch"))
            .addChild(new ShapeObject("WalkText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Walk"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Walk_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Run_Text").setTranslation(0.0f,-8.0f,0.0f)
            .addChild(new TouchSensorObject("Run_Touch"))
            .addChild(new ShapeObject("RunText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Run"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Run_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Jump_Text").setTranslation(0.0f,-9.4f,0.0f)
            .addChild(new TouchSensorObject("Jump_Touch"))
            .addChild(new ShapeObject("JumpText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Jump"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Jump_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Kick_Text").setTranslation(0.0f,-10.8f,0.0f)
            .addChild(new TouchSensorObject("Kick_Touch"))
            .addChild(new ShapeObject("KickText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Kick"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Kick_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("Stop_Text").setTranslation(0.0f,0.4f,0.0f)
            .addChild(new TouchSensorObject("Stop_Touch"))
            .addChild(new ShapeObject("StopText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"Default"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}))))
            .addChild(new ShapeObject("Stop_Back")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("Clear")))
              .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
          .addChild(new TransformObject("SceneLabel").setTranslation(1.3f,3.0f,0.0f)
            .addChild(new ShapeObject("SceneLabelText")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("text_color")))
              .setGeometry(new TextObject().setString(new String[] {"BoxMan","Animation"})
                .setFontStyle(new FontStyleObject().setFamily(new String[] {"SANS"}).setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE))))))))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_sacroiliacRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt12RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt11RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt10RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt9RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt8RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_skullbaseRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Stop_HumanoidRootTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Stop_HumanoidRootRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_midtarsalRotInterp").setFromField("value_changed").setToNode("boxman_l_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_midtarsalRotInterp").setFromField("value_changed").setToNode("boxman_r_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_vl5RotInterp").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_skullbaseRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stop_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_eyeballRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_eyeballRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index1Roll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index2Roll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index3Roll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Stand_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Pitches_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Pitch_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Yaws_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Yaw_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Rolls_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Roll_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyTranInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Walk_whole_bodyTranInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Walk_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_lower_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_headRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_neckRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_upper_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyTranInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Run_r_ankleRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_r_kneeRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_r_hipRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_ankleRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_kneeRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_hipRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_r_wristRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_r_elbowRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_r_shoulderRotInterp_Run").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_wristRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_elbowRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_l_shoulderRotInterp_Run").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_headRotInterp_Run").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_whole_bodyRotInterp_Run").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Run_whole_bodyTranInterp_Run").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Run_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_headRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyTranInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_ankleRotInterp").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_kneeRotInterp").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_hipRotInterp").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_ankleRotInterp").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_kneeRotInterp").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_hipRotInterp").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_wristRotInterp").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_elbowRotInterp").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_r_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_wristRotInterp").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_elbowRotInterp").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_l_shoulderRotInterp").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_headRotInterp").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Jump_whole_bodyTranInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("Jump_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_shoulderRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_ForeArmPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_wristRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_shoulderRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ForeArmPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_wristRoll").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_thumb1Pitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_hipPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_kneePitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_hipPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_kneePitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_anklePitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_metatarsalPitch").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_sacroiliacYaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vl5Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vc6Yaw").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_lower_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_upper_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_neckRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Kick_l_shoulderRoll").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_l_ForeArmPitch").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_l_wristRoll").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_shoulderRoll").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_ForeArmPitch").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_wristRoll").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_hipPitch").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_kneePitch").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_l_hipPitch").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_l_kneePitch").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_vl5Yaw").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_whole_bodyRotInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Kick_whole_bodyTransInterp").setFromField("value_changed").setToNode("boxman_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("HudProx").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_startTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
    .addChild(new ROUTEObject().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_startTime")));
    }
	// end of initialize() method

		/** Define subarrays using type float[] */
		private float[] getSKINCOORD_4_120_point_1()
		{
			float[] value = {-0.05f,1.0f,0.05f,0.05f,1.0f,0.05f,0.03f,0.97f,-0.1f,-0.03f,0.97f,-0.1f,0.03f,0.94f,-0.075f,-0.03f,0.94f,-0.075f,0.0f,0.92f,0.0f,0.0f,0.94f,0.03f,-0.12f,1.06f,0.05f,0.12f,1.06f,0.05f,0.12f,1.06f,-0.1f,-0.12f,1.06f,-0.1f,0.0456f,0.9364f,0.05f,0.1456f,0.9364f,0.05f,0.1456f,0.9364f,-0.05f,0.0456f,0.9364f,-0.05f,0.0456f,0.9f,0.05f,0.1456f,0.9f,0.05f,0.1456f,0.9f,-0.05f,0.0456f,0.9f,-0.05f,0.0456f,0.8f,0.05f,0.1456f,0.8f,0.05f,0.1456f,0.8f,-0.05f,0.0456f,0.8f,-0.05f,0.0456f,0.7f,0.05f,0.1456f,0.7f,0.05f,0.1456f,0.7f,-0.05f,0.0456f,0.7f,-0.05f,0.0456f,0.6f,0.05f,0.1456f,0.6f,0.05f,0.1456f,0.6f,-0.05f,0.0456f,0.6f,-0.05f,0.0456f,0.55f,0.05f,0.1456f,0.55f,0.05f,0.1456f,0.55f,-0.05f,0.0456f,0.55f,-0.05f,0.0456f,0.52f,0.05f,0.1456f,0.52f,0.05f,0.1456f,0.52f,-0.05f,0.0456f,0.52f,-0.05f,0.0456f,0.5f,0.05f,0.1456f,0.5f,0.05f,0.1456f,0.5f,-0.05f,0.0456f,0.5f,-0.05f,0.0454f,0.43f,0.045f,0.1454f,0.43f,0.045f,0.1454f,0.43f,-0.055f,0.0454f,0.43f,-0.055f,0.0452f,0.36f,0.04f,0.1452f,0.36f,0.04f,0.1452f,0.36f,-0.06f,0.0452f,0.36f,-0.06f,0.045f,0.29f,0.035f,0.145f,0.29f,0.035f,0.145f,0.29f,-0.065f,0.045f,0.29f,-0.065f,0.0448f,0.21f,0.03f,0.1448f,0.21f,0.03f,0.1448f,0.21f,-0.07f,0.0448f,0.21f,-0.07f,0.0446f,0.1262f,0.025f,0.1446f,0.1262f,0.025f,0.1446f,0.1262f,-0.075f,0.0446f,0.1262f,-0.075f,0.0446f,0.0762f,0.025f,0.1446f,0.0762f,0.025f,0.1446f,0.0f,-0.075f,0.0446f,0.0f,-0.075f,0.0446f,0.0562f,0.057f,0.1446f,0.0562f,0.057f,0.1446f,0.0f,0.057f,0.0446f,0.0f,0.057f,0.0446f,0.0562f,0.087f,0.1446f,0.0562f,0.087f,0.1446f,0.0f,0.087f,0.0446f,0.0f,0.087f,0.0446f,0.0562f,0.1924f,0.1446f,0.0562f,0.1924f,0.1446f,0.0f,0.1924f,0.0446f,0.0f,0.1924f,-0.0456f,0.9364f,0.05f,-0.1456f,0.9364f,0.05f,-0.1456f,0.9364f,-0.05f,-0.0456f,0.9364f,-0.05f,-0.0456f,0.9f,0.05f,-0.1456f,0.9f,0.05f,-0.1456f,0.9f,-0.05f,-0.0456f,0.9f,-0.05f,-0.0456f,0.8f,0.05f,-0.1456f,0.8f,0.05f,-0.1456f,0.8f,-0.05f,-0.0456f,0.8f,-0.05f,-0.0456f,0.7f,0.05f,-0.1456f,0.7f,0.05f,-0.1456f,0.7f,-0.05f,-0.0456f,0.7f,-0.05f,-0.0456f,0.6f,0.05f,-0.1456f,0.6f,0.05f,-0.1456f,0.6f,-0.05f,-0.0456f,0.6f,-0.05f};
			return value;
		}
		private float[] getSKINCOORD_4_120_point_2()
		{
			float[] value = {-0.0456f,0.55f,0.05f,-0.1456f,0.55f,0.05f,-0.1456f,0.55f,-0.05f,-0.0456f,0.55f,-0.05f,-0.0456f,0.52f,0.05f,-0.1456f,0.52f,0.05f,-0.1456f,0.52f,-0.05f,-0.0456f,0.52f,-0.05f,-0.0456f,0.5f,0.05f,-0.1456f,0.5f,0.05f,-0.1456f,0.5f,-0.05f,-0.0456f,0.5f,-0.05f,-0.0454f,0.43f,0.045f,-0.1454f,0.43f,0.045f,-0.1454f,0.43f,-0.055f,-0.0454f,0.43f,-0.055f,-0.0452f,0.36f,0.04f,-0.1452f,0.36f,0.04f,-0.1452f,0.36f,-0.06f,-0.0452f,0.36f,-0.06f,-0.045f,0.29f,0.035f,-0.145f,0.29f,0.035f,-0.145f,0.29f,-0.065f,-0.045f,0.29f,-0.065f,-0.0448f,0.21f,0.03f,-0.1448f,0.21f,0.03f,-0.1448f,0.21f,-0.07f,-0.0448f,0.21f,-0.07f,-0.0446f,0.1262f,0.025f,-0.1446f,0.1262f,0.025f,-0.1446f,0.1262f,-0.075f,-0.0446f,0.1262f,-0.075f,-0.0446f,0.0762f,0.025f,-0.1446f,0.0762f,0.025f,-0.1446f,0.0f,-0.075f,-0.0446f,0.0f,-0.075f,-0.0446f,0.0562f,0.057f,-0.1446f,0.0562f,0.057f,-0.1446f,0.0f,0.057f,-0.0446f,0.0f,0.057f,-0.0446f,0.0562f,0.087f,-0.1446f,0.0562f,0.087f,-0.1446f,0.0f,0.087f,-0.0446f,0.0f,0.087f,-0.0446f,0.0562f,0.1924f,-0.1446f,0.0562f,0.1924f,-0.1446f,0.0f,0.1924f,-0.0446f,0.0f,0.1924f,-0.12f,1.10f,0.05f,0.12f,1.10f,0.05f,0.12f,1.10f,-0.1f,-0.12f,1.10f,-0.1f,-0.14f,1.42f,0.045f,0.14f,1.42f,0.045f,0.14f,1.42f,-0.09f,-0.14f,1.42f,-0.09f,-0.24f,1.52f,0.035f,0.24f,1.52f,0.035f,0.24f,1.52f,-0.09f,-0.24f,1.52f,-0.09f,-0.05f,1.56f,0.030f,0.05f,1.56f,0.030f,0.05f,1.56f,-0.06f,-0.05f,1.56f,-0.06f,-0.05f,1.60f,0.060f,0.05f,1.60f,0.060f,0.05f,1.62f,-0.03f,-0.05f,1.62f,-0.03f,-0.07f,1.777f,0.13f,0.07f,1.777f,0.13f,0.07f,1.777f,-0.03f,-0.07f,1.777f,-0.03f,-0.07f,1.60f,0.13f,0.07f,1.60f,0.13f,0.07f,1.66f,-0.03f,-0.07f,1.66f,-0.03f,0.16f,1.42f,0.015f,0.24f,1.5f,0.015f,0.24f,1.5f,-0.075f,0.16f,1.42f,-0.075f,0.17f,1.18f,-0.025f,0.23f,1.18f,-0.025f,0.23f,1.18f,-0.085f,0.17f,1.18f,-0.085f,0.17f,1.14f,-0.025f,0.23f,1.14f,-0.025f,0.23f,1.14f,-0.085f,0.17f,1.14f,-0.085f,0.18f,0.91f,-0.05f,0.22f,0.91f,-0.05f,0.22f,0.91f,-0.09f,0.18f,0.91f,-0.09f,0.18f,0.87f,-0.02f,0.22f,0.87f,-0.02f,0.22f,0.87f,-0.1f,0.18f,0.87f,-0.1f,0.18f,0.6976f,-0.02f,0.22f,0.6976f,-0.02f,0.22f,0.6976f,-0.1f,0.18f,0.6976f,-0.1f};
			return value;
		}
		private float[] getSKINCOORD_4_120_point_3()
		{
			float[] value = {-0.16f,1.42f,0.015f,-0.24f,1.5f,0.015f,-0.24f,1.5f,-0.075f,-0.16f,1.42f,-0.075f,-0.17f,1.18f,-0.025f,-0.23f,1.18f,-0.025f,-0.23f,1.18f,-0.085f,-0.17f,1.18f,-0.085f,-0.17f,1.14f,-0.025f,-0.23f,1.14f,-0.025f,-0.23f,1.14f,-0.085f,-0.17f,1.14f,-0.085f,-0.18f,0.91f,-0.05f,-0.22f,0.91f,-0.05f,-0.22f,0.91f,-0.09f,-0.18f,0.91f,-0.09f,-0.18f,0.87f,-0.02f,-0.22f,0.87f,-0.02f,-0.22f,0.87f,-0.1f,-0.18f,0.87f,-0.1f,-0.18f,0.6976f,-0.02f,-0.22f,0.6976f,-0.02f,-0.22f,0.6976f,-0.1f,-0.18f,0.6976f,-0.1f};
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
		private MFVec3fObject getSKINCOORD_4_120_point()
		{
			MFVec3fObject SKINCOORD_4_120_point = new MFVec3fObject()/*2.finalize*/
				.append(new MFVec3fObject(getSKINCOORD_4_120_point_1()))
				.append(new MFVec3fObject(getSKINCOORD_4_120_point_2()))
				.append(new MFVec3fObject(getSKINCOORD_4_120_point_3()));
			return SKINCOORD_4_120_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #123, 888 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_6_123_coordIndex()
		{
			MFInt32Object IndexedFaceSet_6_123_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_6_123_coordIndex_1()));
			return IndexedFaceSet_6_123_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #133, 400 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_6_133_coordIndex()
		{
			MFInt32Object IndexedFaceSet_6_133_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_6_133_coordIndex_1()));
			return IndexedFaceSet_6_133_coordIndex;
		}
		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #143, 1776 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedLineSet_6_143_coordIndex()
		{
			MFInt32Object IndexedLineSet_6_143_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedLineSet_6_143_coordIndex_1()))
				.append(new MFInt32Object(getIndexedLineSet_6_143_coordIndex_2()));
			return IndexedLineSet_6_143_coordIndex;
		}

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return BoxManAnimationPanel model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new BoxManAnimationPanel().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"BoxManAnimationPanel\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"BoxManAnimationPanel\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
