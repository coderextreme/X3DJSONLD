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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> An attempt at a standard LOA-4 skeleton. </p>
 <p> Related links: JohnJoint2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JohnJoint2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d">JohnJoint2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d</a> </td>
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

public class JohnJoint2
{
	/** Default constructor to create this object. */
	public JohnJoint2 ()
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
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("JohnJoint2.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("h2.pl"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 Jan 2023"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("9 November 2020"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Transform()
      .addChild(new Shape("AxisLinesShape")
        .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0})))
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}))))))
    .addChild(new Group()
      .addChild(new Transform()
        .addChild(new Transform().setTranslation(0.0,2.1,0.0)
          .addChild(new Shape("HAnimJointShape")
            .setAppearance(new Appearance()
              .setMaterial(new Material("HAnimJointMaterial").setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3)))
            .setGeometry(new Sphere().setRadius(0.02))))
        .addChild(new Transform().setTranslation(0.0,2.05,0.0)
          .addChild(new Shape("HAnimSegmentLine")
            .setGeometry(new LineSet().setVertexCount(new int[] {2})
              .setColor(new ColorRGBA("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,0.0,0.0,0.05,0.0,0.0}))))))))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("default"))
    .addChild(new HAnimHumanoid("hanim_HAnim").setName("HAnim").setInfo(new String[] {"humanoidVersion=2.0"}).setVersion("2.0")
      .addChild(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,0.824,0.0277).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,0.9149,0.0016).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(0.0961,0.9124,-1.0E-4).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(0.104,0.4867,0.0308).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_interphalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))
                .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_tarsometatarsal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
          .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-0.095,0.9171,0.0029).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-0.0867,0.4913,0.0318).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))
                .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))))))
        .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0028,1.0568,-0.0776).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimJoint("hanim_vl4").setName("vl4").setCenter(0.0035,1.0925,-0.0787).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimJoint("hanim_vl3").setName("vl3").setCenter(0.0041,1.1276,-0.0796).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimJoint("hanim_vl2").setName("vl2").setCenter(0.0045,1.1546,-0.08).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimJoint("hanim_vl1").setName("vl1").setCenter(0.0048,1.1912,-0.0805).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimJoint("hanim_vt12").setName("vt12").setCenter(0.0051,1.2278,-0.0808).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                    .addChild(new HAnimJoint("hanim_vt11").setName("vt11").setCenter(0.0053,1.2679,-0.081).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                      .addChild(new HAnimJoint("hanim_vt10").setName("vt10").setCenter(0.0056,1.2848,-0.0822).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                        .addChild(new HAnimJoint("hanim_vt9").setName("vt9").setCenter(0.0057,1.3126,-0.0838).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                          .addChild(new HAnimJoint("hanim_vt8").setName("vt8").setCenter(0.0057,1.3382,-0.0845).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                            .addChild(new HAnimJoint("hanim_vt7").setName("vt7").setCenter(0.0058,1.3625,-0.0833).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                              .addChild(new HAnimJoint("hanim_vt6").setName("vt6").setCenter(0.0059,1.3866,-0.08).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                .addChild(new HAnimJoint("hanim_vt5").setName("vt5").setCenter(0.006,1.4102,-0.0745).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                  .addChild(new HAnimJoint("hanim_vt4").setName("vt4").setCenter(0.0061,1.432,-0.0675).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                    .addChild(new HAnimJoint("hanim_vt3").setName("vt3").setCenter(0.0062,1.4583,-0.057).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                      .addChild(new HAnimJoint("hanim_vt2").setName("vt2").setCenter(0.0063,1.4761,-0.0484).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                        .addChild(new HAnimJoint("hanim_vt1").setName("vt1").setCenter(0.0065,1.4951,-0.0387).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                          .addChild(new HAnimJoint("hanim_vc7").setName("vc7").setCenter(0.0066,1.5132,-0.0301).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_vc6").setName("vc6").setCenter(0.0066,1.5357,-0.0143).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_vc5").setName("vc5").setCenter(0.0066,1.552,-0.0082).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_vc4").setName("vc4").setCenter(0.0066,1.5662,-0.0084).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_vc3").setName("vc3").setCenter(0.0066,1.58,-0.0103).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_vc2").setName("vc2").setCenter(0.0066,1.5928,-0.0103).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_vc1").setName("vc1").setCenter(0.0066,1.6144,-0.0034).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0044,1.6209,0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
                                                          .addChild(new HAnimJoint("hanim_temporomandibular").setName("temporomandibular").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))))))
                                          .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(0.082,1.4488,-0.0353).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(0.0962,1.4269,-0.0424).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(0.2014,1.1357,-0.0682).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(0.1924,0.8472,-0.0534).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(0.1951,0.8226,0.0246).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(0.1955,0.8159,0.0464).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(0.1983,0.8024,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(0.1983,0.7815,-0.028).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(0.2017,0.7363,-0.0248).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(0.2028,0.7139,-0.0236).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(0.1987,0.8029,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(0.1987,0.7818,-0.053).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(0.2013,0.7273,-0.0503).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(0.2026,0.7011,-0.0494).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_midcarpal_4_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(0.1956,0.8019,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(0.1956,0.7815,-0.0794).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(0.1973,0.7287,-0.0777).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(0.1983,0.7045,-0.0767).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(0.1925,0.8066,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(0.1925,0.7866,-0.1036).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(0.1938,0.7452,-0.1024).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(0.1948,0.7277,-0.1017).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))))))
                                          .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(-0.0694,1.46,-0.033).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                            .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(-0.0836,1.4281,-0.0401).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                              .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-0.1949,1.1388,-0.062).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(-0.1899,0.8502,-0.0473).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(-0.1874,0.8256,0.0306).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(-0.1864,0.819,0.0506).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(-0.1961,0.8055,-0.0218).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(-0.1961,0.7846,-0.0218).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(-0.1954,0.7393,-0.0185).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(-0.1945,0.7169,-0.0173).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(-0.1972,0.806,-0.0468).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(-0.1972,0.7849,-0.0468).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(-0.195,0.7304,-0.0441).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(-0.1939,0.7042,-0.0432).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_midcarpal_4_5").setCenter(0.0,1.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(-0.1951,0.8049,-0.0732).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(-0.1951,0.7845,-0.0732).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(-0.192,0.7318,-0.0716).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(-0.1908,0.7077,-0.0706).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(-0.1926,0.8096,-0.0975).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(-0.1926,0.7896,-0.0975).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(-0.1902,0.7483,-0.0963).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(-0.1908,0.754,-0.096).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))))))))))))))))))))))))))
      .addChild(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addChild(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addChild(new HAnimJoint().setUSE("hanim_l_hip"))
      .addChild(new HAnimJoint().setUSE("hanim_l_knee"))
      .addChild(new HAnimJoint().setUSE("hanim_l_talocrural"))
      .addChild(new HAnimJoint().setUSE("hanim_l_talocalcaneonavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_l_cuneonavicular_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_interphalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_cuneonavicular_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_cuneonavicular_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_calcaneocuboid"))
      .addChild(new HAnimJoint().setUSE("hanim_l_transversetarsal"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_hip"))
      .addChild(new HAnimJoint().setUSE("hanim_r_knee"))
      .addChild(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addChild(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_interphalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
      .addChild(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_vl5"))
      .addChild(new HAnimJoint().setUSE("hanim_vl4"))
      .addChild(new HAnimJoint().setUSE("hanim_vl3"))
      .addChild(new HAnimJoint().setUSE("hanim_vl2"))
      .addChild(new HAnimJoint().setUSE("hanim_vl1"))
      .addChild(new HAnimJoint().setUSE("hanim_vt12"))
      .addChild(new HAnimJoint().setUSE("hanim_vt11"))
      .addChild(new HAnimJoint().setUSE("hanim_vt10"))
      .addChild(new HAnimJoint().setUSE("hanim_vt9"))
      .addChild(new HAnimJoint().setUSE("hanim_vt8"))
      .addChild(new HAnimJoint().setUSE("hanim_vt7"))
      .addChild(new HAnimJoint().setUSE("hanim_vt6"))
      .addChild(new HAnimJoint().setUSE("hanim_vt5"))
      .addChild(new HAnimJoint().setUSE("hanim_vt4"))
      .addChild(new HAnimJoint().setUSE("hanim_vt3"))
      .addChild(new HAnimJoint().setUSE("hanim_vt2"))
      .addChild(new HAnimJoint().setUSE("hanim_vt1"))
      .addChild(new HAnimJoint().setUSE("hanim_vc7"))
      .addChild(new HAnimJoint().setUSE("hanim_vc6"))
      .addChild(new HAnimJoint().setUSE("hanim_vc5"))
      .addChild(new HAnimJoint().setUSE("hanim_vc4"))
      .addChild(new HAnimJoint().setUSE("hanim_vc3"))
      .addChild(new HAnimJoint().setUSE("hanim_vc2"))
      .addChild(new HAnimJoint().setUSE("hanim_vc1"))
      .addChild(new HAnimJoint().setUSE("hanim_skullbase"))
      .addChild(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
      .addChild(new HAnimJoint().setUSE("hanim_temporomandibular"))
      .addChild(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addChild(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addChild(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addChild(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
      .addChild(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addChild(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addChild(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
      .addChild(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
      .addChild(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
      .addChild(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
      .addChild(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
      .addChild(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))));
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
	 * @return JohnJoint2 model
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
        X3D thisExampleX3dModel = new JohnJoint2().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.JohnJoint2\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.JohnJoint2 self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}