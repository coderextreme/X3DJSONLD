package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> An attempt at a standard LOA-4 skeleton. </p>
 <p> Related links: Humanoid3NoSegSite.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Humanoid3NoSegSite&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3NoSegSite.x3d">Humanoid3NoSegSite.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3NoSegSite.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3NoSegSite.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> An attempt at a standard LOA-4 skeleton </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> h2.pl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 Jan 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 November 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/../license.html">../license.html</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author John Carlson
 */

public class Humanoid3NoSegSite
{
	/** Default constructor to create this object. */
	public Humanoid3NoSegSite ()
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
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Humanoid3NoSegSite.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3NoSegSite.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("h2.pl"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 Jan 2023"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("9 November 2020"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Transform()
      .addComments(" DEF for markerfor XYZ axes ")
      .addChild(new Shape("AxisLinesShape")
        .addComments(" RGB lines showing XYZ axes ")
        .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0})))
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}))))))
    .addChild(new Group()
      .addComments(" DEFS for markers of skeleton joints, segments, and sites ")
      .addChild(new Transform()
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Shape("HAnimRootShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material("HAnimRootMaterial").setDiffuseColor(0.8,0.0,0.0).setTransparency(0.3)))
            .setGeometry(new Sphere().setRadius(0.02))))
        .addChild(new Transform().setTranslation(0.0,2.1,0.0)
          .addChild(new Shape("HAnimJointShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material("HAnimJointMaterial").setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3)))
            .setGeometry(new Sphere().setRadius(0.02))))
        .addChild(new Transform().setTranslation(0.0,2.05,0.0)
          .addChild(new Shape("HAnimSegmentLine")
            .setGeometry(new LineSet().setVertexCount(new int[] {2})
              .setColor(new ColorRGBA("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,0.0,0.0,0.05,0.0,0.0}))))))
        .addChild(new Transform().setTranslation(0.0,2.1,0.0)
          .addChild(new Shape("HAnimSiteShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0).setTransparency(0.3)))
            .setGeometry(new IndexedFaceSet("DiamondIFS").setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1})
              .setColor(new ColorRGBA("HAnimSiteColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}))))))))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("default"))
    .addChild(new HAnimHumanoid("hanim_HAnim").setName("HAnim").setInfo(new String[] {"humanoidVersion=2.0"}).setVersion("2.0")
      .addComments(" <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) ")
      .addComments(" </LOD> ")
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,0.824,0.0277).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,0.9149,0.0016).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(0.0961,0.9124,-1.0E-4).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(0.104,0.4867,0.0308).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(0.08,0.0175,-0.0608).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(0.0824,0.0064,-0.004).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(0.0841,0.0013,0.0216).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))
          .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-0.095,0.9171,0.0029).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-0.0867,0.4913,0.0318).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(-0.08,0.0175,-0.0608).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-0.0823,0.0064,-0.004).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.0841,0.0013,0.0216).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))
        .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0028,1.0568,-0.0776).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimJoint("hanim_vl4").setName("vl4").setCenter(0.0035,1.0925,-0.0787).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_vl3").setName("vl3").setCenter(0.0041,1.1276,-0.0796).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_vl2").setName("vl2").setCenter(0.0045,1.1546,-0.08).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_vl1").setName("vl1").setCenter(0.0048,1.1912,-0.0805).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_vt12").setName("vt12").setCenter(0.0051,1.2278,-0.0808).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_vt11").setName("vt11").setCenter(0.0053,1.2679,-0.081).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_vt10").setName("vt10").setCenter(0.0056,1.2848,-0.0822).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_vt9").setName("vt9").setCenter(0.0057,1.3126,-0.0838).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_vt8").setName("vt8").setCenter(0.0057,1.3382,-0.0845).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                            .addChild(new HAnimJoint("hanim_vt7").setName("vt7").setCenter(0.0058,1.3625,-0.0833).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                              .addChild(new HAnimJoint("hanim_vt6").setName("vt6").setCenter(0.0059,1.3866,-0.08).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                .addChild(new HAnimJoint("hanim_vt5").setName("vt5").setCenter(0.006,1.4102,-0.0745).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                  .addChild(new HAnimJoint("hanim_vt4").setName("vt4").setCenter(0.0061,1.432,-0.0675).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                    .addChild(new HAnimJoint("hanim_vt3").setName("vt3").setCenter(0.0062,1.4583,-0.057).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                      .addChild(new HAnimJoint("hanim_vt2").setName("vt2").setCenter(0.0063,1.4761,-0.0484).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                        .addChild(new HAnimJoint("hanim_vt1").setName("vt1").setCenter(0.0065,1.4951,-0.0387).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                          .addChild(new HAnimJoint("hanim_vc7").setName("vc7").setCenter(0.0066,1.5132,-0.0301).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_vc6").setName("vc6").setCenter(0.0066,1.5357,-0.0143).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_vc5").setName("vc5").setCenter(0.0066,1.552,-0.0082).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_vc4").setName("vc4").setCenter(0.0066,1.5662,-0.0084).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_vc3").setName("vc3").setCenter(0.0066,1.58,-0.0103).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_vc2").setName("vc2").setCenter(0.0066,1.5928,-0.0103).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_vc1").setName("vc1").setCenter(0.0066,1.6144,-0.0034).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0044,1.6209,0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(0.0503,1.4157,-0.0689).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(-0.0507,1.4157,-0.0689).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(0.0479,1.3963,-0.0188).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(-0.0483,1.3963,-0.0188).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(0.0216,1.4053,0.0051).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(-0.0219,1.4053,0.0051).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_temporomandibular").setName("temporomandibular").setCenter(-2.0E-4,1.3043,-0.0865).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                          .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(0.082,1.4488,-0.0353).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(0.0962,1.4269,-0.0424).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(0.2014,1.1357,-0.0682).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(0.1924,0.8472,-0.0534).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(0.1951,0.8226,0.0246).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(0.1955,0.8159,0.0464).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(0.1983,0.8024,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(0.1983,0.7815,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(0.2017,0.7363,-0.0248).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(0.2028,0.7139,-0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(0.1987,0.8029,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(0.1987,0.7818,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(0.2013,0.7273,-0.0503).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(0.2026,0.7011,-0.0494).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(0.1956,0.8019,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(0.1956,0.7815,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(0.1973,0.7287,-0.0777).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(0.1983,0.7045,-0.0767).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(0.1925,0.8066,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(0.1925,0.7866,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(0.1938,0.7452,-0.1024).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(0.1948,0.7277,-0.1017).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                          .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(-0.0694,1.46,-0.033).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(-0.0836,1.4281,-0.0401).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-0.1949,1.1388,-0.062).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(-0.1899,0.8502,-0.0473).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(-0.1874,0.8256,0.0306).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(-0.1864,0.819,0.0506).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
                                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(-0.1961,0.8055,-0.0218).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(-0.1961,0.7846,-0.0218).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(-0.1954,0.7393,-0.0185).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(-0.1945,0.7169,-0.0173).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(-0.1972,0.806,-0.0468).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(-0.1972,0.7849,-0.0468).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(-0.195,0.7304,-0.0441).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(-0.1939,0.7042,-0.0432).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(-0.1951,0.8049,-0.0732).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(-0.1951,0.7845,-0.0732).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(-0.192,0.7318,-0.0716).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(-0.1908,0.7077,-0.0706).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(-0.1926,0.8096,-0.0975).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(-0.1926,0.7896,-0.0975).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(-0.1902,0.7483,-0.0963).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(-0.1908,0.754,-0.096).setLlimit(new double[] {0.0,0.0,0.0}).setSkinCoordIndex(new int[] {0}).setSkinCoordWeight(new double[] {0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))))))))))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt12"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt11"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt10"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt9"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt8"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt7"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt6"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt1"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc7"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc6"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_temporomandibular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))
      .addSkin(new Shape("SkinShape")
        .setAppearance(new Appearance("SkinAppearance")
          .setMaterial(new Material("SkinMaterial").setAmbientIntensity(0.6).setDiffuseColor(1.0,1.0,1.0).setShininess(0.6).setTransparency(0.2))
          .setTexture(new ImageTexture("zBlueSpiralBkg2").setDescription("Blue Spiral Pattern").setUrl(new String[] {"../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"})))
        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.1).setCoordIndex(getIndexedFaceSet_5_233_coordIndex())
          .setColor(new Color().setColor(getColor_6_233_color()))
          .setCoord(new Coordinate("TheSkinCoord").setPoint(getTheSkinCoord_6_234_point()))))
      .setSkinCoord(new Coordinate().setUSE("TheSkinCoord"))));
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
		private int[] getIndexedFaceSet_5_233_coordIndex_1()
		{
			int[] value = {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1};
			return value;
		}
		private int[] getIndexedFaceSet_5_233_coordIndex_2()
		{
			int[] value = {209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1};
			return value;
		}
		private int[] getIndexedFaceSet_5_233_coordIndex_3()
		{
			int[] value = {308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getColor_6_233_color_1()
		{
			double[] value = {1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0};
			return value;
		}
		private double[] getColor_6_233_color_2()
		{
			double[] value = {1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_6_233_color_3()
		{
			double[] value = {0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0};
			return value;
		}
		private double[] getColor_6_233_color_4()
		{
			double[] value = {1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0};
			return value;
		}
		private double[] getColor_6_233_color_5()
		{
			double[] value = {1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0};
			return value;
		}
		private double[] getColor_6_233_color_6()
		{
			double[] value = {0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0};
			return value;
		}
		private double[] getColor_6_233_color_7()
		{
			double[] value = {0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTheSkinCoord_6_234_point_1()
		{
			double[] value = {0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0};
			return value;
		}
		private double[] getTheSkinCoord_6_234_point_2()
		{
			double[] value = {-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549};
			return value;
		}
		private double[] getTheSkinCoord_6_234_point_3()
		{
			double[] value = {0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04};
			return value;
		}
		private double[] getTheSkinCoord_6_234_point_4()
		{
			double[] value = {-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=5, element #233, 2780 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_5_233_coordIndex()
		{
			MFInt32 IndexedFaceSet_5_233_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_5_233_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_5_233_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_5_233_coordIndex_3()));
			return IndexedFaceSet_5_233_coordIndex;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #233, 2079 total numbers made up of 693 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_233_color()
		{
			MFColor Color_6_233_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_233_color_1()))
				.append(new MFColor(getColor_6_233_color_2()))
				.append(new MFColor(getColor_6_233_color_3()))
				.append(new MFColor(getColor_6_233_color_4()))
				.append(new MFColor(getColor_6_233_color_5()))
				.append(new MFColor(getColor_6_233_color_6()))
				.append(new MFColor(getColor_6_233_color_7()));
			return Color_6_233_color;
		}
		/** Large attribute array: Coordinate DEF='TheSkinCoord' point field, scene-graph level=6, element #234, 1170 total numbers made up of 390 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getTheSkinCoord_6_234_point()
		{
			MFVec3f TheSkinCoord_6_234_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getTheSkinCoord_6_234_point_1()))
				.append(new MFVec3f(getTheSkinCoord_6_234_point_2()))
				.append(new MFVec3f(getTheSkinCoord_6_234_point_3()))
				.append(new MFVec3f(getTheSkinCoord_6_234_point_4()));
			return TheSkinCoord_6_234_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Humanoid3NoSegSite model
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
        X3D thisExampleX3dModel = new Humanoid3NoSegSite().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.Humanoid3NoSegSite\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Humanoid3NoSegSite self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}