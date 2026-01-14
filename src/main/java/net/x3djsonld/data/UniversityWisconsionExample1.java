package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
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
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> BVH file conversion: *enter description here, short-sentence summaries preferred*. </p>
 <p> Related links:  source UniversityWisconsionExample1.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.UniversityWisconsionExample1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="BvhUniversityWisconsionExample1.x3d">BvhUniversityWisconsionExample1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> BVH file conversion: *enter description here, short-sentence summaries preferred* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> *enter name of original author here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> *enter date of initial version here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 2 September 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 18 December 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BvhUniversityWIsconsionExample1.bvh </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://TODO/UniversityWIsconsionExample1.bvh" target="_blank">https://TODO/UniversityWIsconsionExample1.bvh</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP" target="_blank">https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> *enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../license.html">../license.html</a> </td>
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

	* @author *enter name of original author here*
 */

public class UniversityWisconsionExample1
{
	/** Default constructor to create this object. */
	public UniversityWisconsionExample1 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(3))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BvhUniversityWisconsionExample1.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("BVH file conversion: *enter description here, short-sentence summaries preferred*"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("*enter name of original author here*"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("*enter date of initial version here*"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("2 September 2023"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("18 December 2023"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BvhUniversityWIsconsionExample1.bvh"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://TODO/UniversityWIsconsionExample1.bvh"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BvhUniversityWisconsionExample1.x3d"))
    .addChild(new NavigationInfo())
    .addChild(new Group("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation")
      .addComments(" 17 BVH JOINT definitions found, following a single HIERARCHY ROOT ")
      .addComments(" BVH HIERARCHY model size computations: minX=0.0, maxX=0.0, width=0.0; minY=-7.0, maxY=3.87, height=10.870000000000001; minZ=0.0, maxZ=4.9E-324, depth=4.9E-324 ")
      .addComments(" Estimated rescaling to meters based on height: scaleFactor=0.1 for modified height of 1.087m ")
      .addComments(" Vertical offset to move bottom of BVH figure to ground plane (adjusted in HAnimJoint containerField='skeleton'): heightOffset=0.7000000000000001m ")
      .setMetadata(new MetadataSet().setName("BvhToHAnimNameConversionTable")
        .addComments(" key: MetadataString name='bvhName' reference='bvhType ROOT|JOINT|Site' value='\"jointName\" \"segmentName\"' (HAnimSite nodes have no segmentName) ")
        .setMetadata(new MetadataString().setName("ROOT_Hips").setReference("ROOT").setValue(new String[] {"humanoid_root","sacrum"}))
        .setMetadata(new MetadataString().setName("Chest").setReference("JOINT").setValue(new String[] {"vl5","l5"}))
        .setMetadata(new MetadataString().setName("Neck").setReference("JOINT").setValue(new String[] {"Neck","vl5_to_Neck"}))
        .setMetadata(new MetadataString().setName("Head").setReference("JOINT").setValue(new String[] {"skullbase","skull"}))
        .setMetadata(new MetadataString().setName("HeadSite").setReference("Site").setValue(new String[] {"skullbase_tip"}))
        .setMetadata(new MetadataString().setName("LeftCollar").setReference("JOINT").setValue(new String[] {"LeftCollar","vl5_to_LeftCollar"}))
        .setMetadata(new MetadataString().setName("LeftUpArm").setReference("JOINT").setValue(new String[] {"LeftUpArm","LeftCollar_to_LeftUpArm"}))
        .setMetadata(new MetadataString().setName("LeftLowArm").setReference("JOINT").setValue(new String[] {"LeftLowArm","LeftUpArm_to_LeftLowArm"}))
        .setMetadata(new MetadataString().setName("LeftHand").setReference("JOINT").setValue(new String[] {"LeftHand","LeftLowArm_to_LeftHand"}))
        .setMetadata(new MetadataString().setName("LeftHandSite").setReference("Site").setValue(new String[] {"LeftHand_tip"}))
        .setMetadata(new MetadataString().setName("RightCollar").setReference("JOINT").setValue(new String[] {"RightCollar","vl5_to_RightCollar"}))
        .setMetadata(new MetadataString().setName("RightUpArm").setReference("JOINT").setValue(new String[] {"RightUpArm","RightCollar_to_RightUpArm"}))
        .setMetadata(new MetadataString().setName("RightLowArm").setReference("JOINT").setValue(new String[] {"RightLowArm","RightUpArm_to_RightLowArm"}))
        .setMetadata(new MetadataString().setName("RightHand").setReference("JOINT").setValue(new String[] {"RightHand","RightLowArm_to_RightHand"}))
        .setMetadata(new MetadataString().setName("RightHandSite").setReference("Site").setValue(new String[] {"RightHand_tip"}))
        .setMetadata(new MetadataString().setName("LeftUpLeg").setReference("JOINT").setValue(new String[] {"LeftUpLeg","humanoid_root_to_LeftUpLeg"}))
        .setMetadata(new MetadataString().setName("LeftLowLeg").setReference("JOINT").setValue(new String[] {"LeftLowLeg","LeftUpLeg_to_LeftLowLeg"}))
        .setMetadata(new MetadataString().setName("LeftFoot").setReference("JOINT").setValue(new String[] {"LeftFoot","LeftLowLeg_to_LeftFoot"}))
        .setMetadata(new MetadataString().setName("LeftFootSite").setReference("Site").setValue(new String[] {"LeftFoot_tip"}))
        .setMetadata(new MetadataString().setName("RightUpLeg").setReference("JOINT").setValue(new String[] {"RightUpLeg","humanoid_root_to_RightUpLeg"}))
        .setMetadata(new MetadataString().setName("RightLowLeg").setReference("JOINT").setValue(new String[] {"RightLowLeg","RightUpLeg_to_RightLowLeg"}))
        .setMetadata(new MetadataString().setName("RightFoot").setReference("JOINT").setValue(new String[] {"RightFoot","RightLowLeg_to_RightFoot"}))
        .setMetadata(new MetadataString().setName("RightFootSite").setReference("Site").setValue(new String[] {"RightFoot_tip"}))))
    .addComments(" initialPositionOffset computation: 0.000 6.135 0.000, initialPositionScaled computation: 0.000 1.244 0.000 ")
    .addChild(new Transform("InitialPositionScaled").setTranslation(0.000,1.244,0.000)
      .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m").setPosition(0.0,0.0,8.0))
      .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 initial motion position").setPosition(0.803,3.501,16.836))
      .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 final motion position").setPosition(0.781,3.510,16.647)))
    .addChild(new HAnimHumanoid("BvhUniversityWisconsionExample1_ROOT_Hips").setName("ROOT_Hips").setVersion("2.0")
      .addComments(" info='\"authorEmail=*TODO*\" \"authorName=*TODO*\" \"copyright=Copyright (c) 2022\" \"humanoidVersion=*TODO*\" \"usageRestrictions=*TODO*\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"*TODO*"}))
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"*TODO*"}))
        .setMetadata(new MetadataString().setName("copyright").setValue(new String[] {"Copyright (c) 2023"}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"*TODO*"}))
        .setMetadata(new MetadataString().setName("usageDescription").setValue(new String[] {"*TODO*"})))
      .addComments(" Top-level HAnimSite/Viewpoint attached to HAnimHumanoid is unaffected by motion animation ")
      .addViewpoints(new HAnimSite("BvhUniversityWisconsionExample1_humanoid_root_view").setName("humanoid_root_view")
        .addChild(new Viewpoint("BvhUniversityWisconsionExample1_humanoid_root_viewpoint").setDescription("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center").setPosition(0.0,0.0,80.0)))
      .addComments(" insert pseudo Joint for humanoid_root skeleton (matching root HIERARCHY in original BVH mocap model, but appearing as skeleton field in X3D HAnimHumanoid) ")
      .addSkeleton(new HAnimJoint("BvhUniversityWisconsionExample1_humanoid_root").setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setScale(0.1,0.1,0.1).setTranslation(0.000,1.244,0.000).setUlimit(new double[] {0.0,0.0,0.0})
        .addComments(" BVH ROOT_Hips, OFFSET 0.0 5.21 0.0, CHANNELS 6 Xposition Yposition Zposition Zrotation Xrotation Yrotation ")
        .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_sacrum").setName("sacrum")
          .addComments(" humanoid_root child HAnimSegment with visualization root shape plus hidden DEF geometry for later use (radius 1 inch) ")
          .addChild(new Switch().setWhichChoice(0)
            .addChild(new Group()
              .addChild(new TouchSensor().setDescription("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"))
              .addChild(new Shape("HAnimRootShape")
                .setGeometry(new Sphere("HAnimJointSphere").setRadius(0.25399999999999995))
                .setAppearance(new Appearance()
                  .setMaterial(new Material("HAnimRootMaterial").setDiffuseColor(0.8,0.0,0.0).setTransparency(0.3)))))
            .addChild(new Shape("HAnimJointShape")
              .setGeometry(new Sphere().setUSE("HAnimJointSphere"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("HAnimJointMaterial").setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3))))
            .addChild(new Shape()
              .setGeometry(new LineSet().setVertexCount(new int[] {2})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
                .setColor(new ColorRGBA("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))))
            .addChild(new Shape("HAnimSiteShape")
              .setGeometry(new IndexedFaceSet("DiamondIFS").setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.25399999999999995,0.0,-0.25399999999999995,0.0,0.0,0.0,0.0,0.25399999999999995,0.25399999999999995,0.0,0.0,0.0,0.0,-0.25399999999999995,0.0,-0.25399999999999995,0.0}))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.5,0.0).setTransparency(0.3))))
            .addChild(new Shape()
              .setGeometry(new LineSet().setVertexCount(new int[] {2})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
                .setColor(new ColorRGBA("HAnimSiteLineColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,0.5,0.0,1.0,1.0,0.5,0.0,0.1}))))))
          .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/> ")
          .addChild(new Shape()
            .setGeometry(new LineSet().setVertexCount(new int[] {2})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.21,0.0})))
              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
          .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='LeftUpLeg'/> ")
          .addChild(new Shape()
            .setGeometry(new LineSet().setVertexCount(new int[] {2})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,3.91,0.0,0.0})))
              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
          .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='RightUpLeg'/> ")
          .addChild(new Shape()
            .setGeometry(new LineSet().setVertexCount(new int[] {2})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-3.91,0.0,0.0})))
              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
        .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_vl5").setName("vl5").setCenter(0.0,5.21,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addComments(" BVH JOINT Chest, OFFSET 0.0 5.21 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
          .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_l5").setName("l5")
            .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
            .addChild(new Transform().setTranslation(0.0,5.21,0.0)
              .addComments(" Visualization sphere for <HAnimJoint name='vl5'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_l5'> ")
              .addChild(new TouchSensor().setDescription("HAnimJoint Chest vl5, HAnimSegment l5"))
              .addChild(new Shape().setUSE("HAnimJointShape"))
              .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='Neck'/> ")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new int[] {2})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,18.65,0.0})))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='LeftCollar'/> ")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new int[] {2})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,1.12,16.23,1.87})))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='RightCollar'/> ")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new int[] {2})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-1.12,16.23,1.87})))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
          .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_Neck").setName("Neck").setCenter(0.0,23.86,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" BVH JOINT Neck, OFFSET 0.0 18.65 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_vl5_to_Neck").setName("vl5_to_Neck")
              .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
              .addChild(new Transform().setTranslation(0.0,23.86,0.0)
                .addComments(" Visualization sphere for <HAnimJoint name='Neck'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_Neck'> ")
                .addChild(new TouchSensor().setDescription("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"))
                .addChild(new Shape().setUSE("HAnimJointShape"))
                .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='Neck'/> to child <HAnimJoint name='skullbase'/> ")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new int[] {2})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.45,0.0})))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_skullbase").setName("skullbase").setCenter(0.0,29.31,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" BVH JOINT Head, OFFSET 0.0 5.45 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_skull").setName("skull")
                .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                .addChild(new Transform().setTranslation(0.0,29.31,0.0)
                  .addChild(new HAnimSite("BvhUniversityWisconsionExample1_skull_tip").setName("skull_tip").setTranslation(0.0,3.87,0.0)
                    .addComments(" BVH End Site OFFSET (0.0, 3.87, 0.0) ")
                    .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addComments(" HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='skullbase'/> to current <HAnimSite name='skull_tip'/> ")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new int[] {2})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-3.87,0.0,0.0,0.0,0.0})))
                        .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA")))))
                  .addComments(" Visualization sphere for <HAnimJoint name='skullbase'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_skull'> ")
                  .addChild(new TouchSensor().setDescription("HAnimJoint Head skullbase, HAnimSegment skull"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))))))
          .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftCollar").setName("LeftCollar").setCenter(1.12,21.44,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" BVH JOINT LeftCollar, OFFSET 1.12 16.23 1.87, CHANNELS 3 Zrotation Xrotation Yrotation ")
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_vl5_to_LeftCollar").setName("vl5_to_LeftCollar")
              .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
              .addChild(new Transform().setTranslation(1.12,21.44,1.87)
                .addComments(" Visualization sphere for <HAnimJoint name='LeftCollar'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_LeftCollar'> ")
                .addChild(new TouchSensor().setDescription("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"))
                .addChild(new Shape().setUSE("HAnimJointShape"))
                .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftCollar'/> to child <HAnimJoint name='LeftUpArm'/> ")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new int[] {2})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,5.54,0.0,0.0})))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftUpArm").setName("LeftUpArm").setCenter(6.66,21.44,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" BVH JOINT LeftUpArm, OFFSET 5.54 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm").setName("LeftCollar_to_LeftUpArm")
                .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                .addChild(new Transform().setTranslation(6.66,21.44,1.87)
                  .addComments(" Visualization sphere for <HAnimJoint name='LeftUpArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm'> ")
                  .addChild(new TouchSensor().setDescription("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))
                  .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftUpArm'/> to child <HAnimJoint name='LeftLowArm'/> ")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new int[] {2})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-11.96,0.0})))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftLowArm").setName("LeftLowArm").setCenter(6.66,9.48,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addComments(" BVH JOINT LeftLowArm, OFFSET 0.0 -11.96 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm").setName("LeftUpArm_to_LeftLowArm")
                  .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                  .addChild(new Transform().setTranslation(6.66,9.48,1.87)
                    .addComments(" Visualization sphere for <HAnimJoint name='LeftLowArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm'> ")
                    .addChild(new TouchSensor().setDescription("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftLowArm'/> to child <HAnimJoint name='LeftHand'/> ")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new int[] {2})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-9.93,0.0})))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftHand").setName("LeftHand").setCenter(6.66,-0.4499999999999993,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addComments(" BVH JOINT LeftHand, OFFSET 0.0 -9.93 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand").setName("LeftLowArm_to_LeftHand")
                    .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                    .addChild(new Transform().setTranslation(6.66,-0.4499999999999993,1.87)
                      .addChild(new HAnimSite("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip").setName("LeftLowArm_to_LeftHand_tip").setTranslation(0.0,-7.0,0.0)
                        .addComments(" BVH End Site OFFSET (0.0, -7.0, 0.0) ")
                        .addChild(new TouchSensor().setDescription("HAnimSite LeftLowArm_to_LeftHand_tip"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addComments(" HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='LeftHand'/> to current <HAnimSite name='LeftLowArm_to_LeftHand_tip'/> ")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new int[] {2})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,7.0,0.0,0.0,0.0,0.0})))
                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA")))))
                      .addComments(" Visualization sphere for <HAnimJoint name='LeftHand'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand'> ")
                      .addChild(new TouchSensor().setDescription("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))))))
          .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightCollar").setName("RightCollar").setCenter(-1.12,21.44,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" BVH JOINT RightCollar, OFFSET -1.12 16.23 1.87, CHANNELS 3 Zrotation Xrotation Yrotation ")
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_vl5_to_RightCollar").setName("vl5_to_RightCollar")
              .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
              .addChild(new Transform().setTranslation(-1.12,21.44,1.87)
                .addComments(" Visualization sphere for <HAnimJoint name='RightCollar'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_RightCollar'> ")
                .addChild(new TouchSensor().setDescription("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"))
                .addChild(new Shape().setUSE("HAnimJointShape"))
                .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightCollar'/> to child <HAnimJoint name='RightUpArm'/> ")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new int[] {2})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-6.07,0.0,0.0})))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightUpArm").setName("RightUpArm").setCenter(-7.19,21.44,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" BVH JOINT RightUpArm, OFFSET -6.07 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm").setName("RightCollar_to_RightUpArm")
                .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                .addChild(new Transform().setTranslation(-7.19,21.44,1.87)
                  .addComments(" Visualization sphere for <HAnimJoint name='RightUpArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm'> ")
                  .addChild(new TouchSensor().setDescription("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))
                  .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightUpArm'/> to child <HAnimJoint name='RightLowArm'/> ")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new int[] {2})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-11.82,0.0})))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightLowArm").setName("RightLowArm").setCenter(-7.19,9.620000000000001,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addComments(" BVH JOINT RightLowArm, OFFSET 0.0 -11.82 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm").setName("RightUpArm_to_RightLowArm")
                  .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                  .addChild(new Transform().setTranslation(-7.19,9.620000000000001,1.87)
                    .addComments(" Visualization sphere for <HAnimJoint name='RightLowArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm'> ")
                    .addChild(new TouchSensor().setDescription("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightLowArm'/> to child <HAnimJoint name='RightHand'/> ")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new int[] {2})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-10.65,0.0})))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightHand").setName("RightHand").setCenter(-7.19,-1.0299999999999994,1.87).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addComments(" BVH JOINT RightHand, OFFSET 0.0 -10.65 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand").setName("RightLowArm_to_RightHand")
                    .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                    .addChild(new Transform().setTranslation(-7.19,-1.0299999999999994,1.87)
                      .addChild(new HAnimSite("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip").setName("RightLowArm_to_RightHand_tip").setTranslation(0.0,-7.0,0.0)
                        .addComments(" BVH End Site OFFSET (0.0, -7.0, 0.0) ")
                        .addChild(new TouchSensor().setDescription("HAnimSite RightLowArm_to_RightHand_tip"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addComments(" HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='RightHand'/> to current <HAnimSite name='RightLowArm_to_RightHand_tip'/> ")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new int[] {2})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,7.0,0.0,0.0,0.0,0.0})))
                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA")))))
                      .addComments(" Visualization sphere for <HAnimJoint name='RightHand'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand'> ")
                      .addChild(new TouchSensor().setDescription("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"))
                      .addChild(new Shape().setUSE("HAnimJointShape")))))))))
        .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftUpLeg").setName("LeftUpLeg").setCenter(3.91,0.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addComments(" BVH JOINT LeftUpLeg, OFFSET 3.91 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
          .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg").setName("humanoid_root_to_LeftUpLeg")
            .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
            .addChild(new Transform().setTranslation(3.91,0.0,0.0)
              .addComments(" Visualization sphere for <HAnimJoint name='LeftUpLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg'> ")
              .addChild(new TouchSensor().setDescription("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"))
              .addChild(new Shape().setUSE("HAnimJointShape"))
              .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftUpLeg'/> to child <HAnimJoint name='LeftLowLeg'/> ")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new int[] {2})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-18.34,0.0})))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
          .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftLowLeg").setName("LeftLowLeg").setCenter(3.91,-18.34,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" BVH JOINT LeftLowLeg, OFFSET 0.0 -18.34 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg").setName("LeftUpLeg_to_LeftLowLeg")
              .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
              .addChild(new Transform().setTranslation(3.91,-18.34,0.0)
                .addComments(" Visualization sphere for <HAnimJoint name='LeftLowLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg'> ")
                .addChild(new TouchSensor().setDescription("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"))
                .addChild(new Shape().setUSE("HAnimJointShape"))
                .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftLowLeg'/> to child <HAnimJoint name='LeftFoot'/> ")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new int[] {2})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-17.37,0.0})))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftFoot").setName("LeftFoot").setCenter(3.91,-35.71,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" BVH JOINT LeftFoot, OFFSET 0.0 -17.37 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot").setName("LeftLowLeg_to_LeftFoot")
                .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                .addChild(new Transform().setTranslation(3.91,-35.71,0.0)
                  .addChild(new HAnimSite("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip").setName("LeftLowLeg_to_LeftFoot_tip").setTranslation(0.0,-3.46,0.0)
                    .addComments(" BVH End Site OFFSET (0.0, -3.46, 0.0) ")
                    .addChild(new TouchSensor().setDescription("HAnimSite LeftLowLeg_to_LeftFoot_tip"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addComments(" HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='LeftFoot'/> to current <HAnimSite name='LeftLowLeg_to_LeftFoot_tip'/> ")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new int[] {2})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,3.46,0.0,0.0,0.0,0.0})))
                        .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA")))))
                  .addComments(" Visualization sphere for <HAnimJoint name='LeftFoot'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot'> ")
                  .addChild(new TouchSensor().setDescription("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"))
                  .addChild(new Shape().setUSE("HAnimJointShape")))))))
        .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightUpLeg").setName("RightUpLeg").setCenter(-3.91,0.0,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addComments(" BVH JOINT RightUpLeg, OFFSET -3.91 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
          .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg").setName("humanoid_root_to_RightUpLeg")
            .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
            .addChild(new Transform().setTranslation(-3.91,0.0,0.0)
              .addComments(" Visualization sphere for <HAnimJoint name='RightUpLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg'> ")
              .addChild(new TouchSensor().setDescription("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"))
              .addChild(new Shape().setUSE("HAnimJointShape"))
              .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightUpLeg'/> to child <HAnimJoint name='RightLowLeg'/> ")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new int[] {2})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-17.63,0.0})))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
          .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightLowLeg").setName("RightLowLeg").setCenter(-3.91,-17.63,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addComments(" BVH JOINT RightLowLeg, OFFSET 0.0 -17.63 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg").setName("RightUpLeg_to_RightLowLeg")
              .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
              .addChild(new Transform().setTranslation(-3.91,-17.63,0.0)
                .addComments(" Visualization sphere for <HAnimJoint name='RightLowLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg'> ")
                .addChild(new TouchSensor().setDescription("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"))
                .addChild(new Shape().setUSE("HAnimJointShape"))
                .addComments(" HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightLowLeg'/> to child <HAnimJoint name='RightFoot'/> ")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new int[] {2})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-17.14,0.0})))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightFoot").setName("RightFoot").setCenter(-3.91,-34.769999999999996,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addComments(" BVH JOINT RightFoot, OFFSET 0.0 -17.14 0.0, CHANNELS 3 Zrotation Xrotation Yrotation ")
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot").setName("RightLowLeg_to_RightFoot")
                .addComments(" Transform to establish local-origin reference frame at center of current Joint ")
                .addChild(new Transform().setTranslation(-3.91,-34.769999999999996,0.0)
                  .addChild(new HAnimSite("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip").setName("RightLowLeg_to_RightFoot_tip").setTranslation(0.0,-3.75,0.0)
                    .addComments(" BVH End Site OFFSET (0.0, -3.75, 0.0) ")
                    .addChild(new TouchSensor().setDescription("HAnimSite RightLowLeg_to_RightFoot_tip"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addComments(" HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='RightFoot'/> to current <HAnimSite name='RightLowLeg_to_RightFoot_tip'/> ")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new int[] {2})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,3.75,0.0,0.0,0.0,0.0})))
                        .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA")))))
                  .addComments(" Visualization sphere for <HAnimJoint name='RightFoot'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot'> ")
                  .addChild(new TouchSensor().setDescription("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))))))))
      .addComments(" top-level USE nodes follow DEF declarations and can be employed by inverse-kinematics (IK) engines or other HAnim tools ")
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_vl5"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_Neck"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_skullbase"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftCollar"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftUpArm"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftLowArm"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftHand"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightCollar"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightUpArm"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightLowArm"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightHand"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftUpLeg"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftLowLeg"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_LeftFoot"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightUpLeg"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightLowLeg"))
      .addJoints(new HAnimJoint().setUSE("BvhUniversityWisconsionExample1_RightFoot"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_sacrum"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_l5"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_vl5_to_Neck"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_skull"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_vl5_to_RightCollar"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"))
      .addSegments(new HAnimSegment().setUSE("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_humanoid_root_view"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_skull_tip"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"))
      .addSites(new HAnimSite().setUSE("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip")))
    .addComments(" ============================================================= ")
    .addComments(" testAxisAngleRotation() results compared to RotationTests.x3d ")
    .addComments(" getAxisAngleRotation(-4.40030,-0.38161,-1.82953) = (0.4067064033441406, -0.7164490591980798, -0.566825058596618, 2.6752961450535095), expected rotation: 0.40671 -0.71645 -0.56683 2.6753 ")
    .addComments(" getAxisAngleRotation(5.80115,2.55377,2.83223) = (-0.9645827419506009, 0.07774106101143803, 0.2520643992393143, 2.59673649727989), expected rotation: -0.96458 0.07774 0.25206 2.59674 ")
    .addComments(" getAxisAngleRotation(-3.76620,-3.47408,-3.93998) = (0.4075772844419879, -0.491492223290994, -0.7696207843161272, 1.1286216623422884), expected rotation: 0.40758 -0.49149 -0.76962 1.12862 ")
    .addComments(" ============================================================= ")
    .addChild(new Group("BvhUniversityWisconsionExample1_MotionGroup")
      .addComments(" BVH MOTION ")
      .addComments(" BVH Frames: 2 ")
      .addComments(" BVH Frame Time: 0.033333 seconds (30.01 frames per second) ")
      .addComments(" Expected frame count: 2, actual frame count: 2, animation total duration: 0.067 seconds ")
      .addComments(" Frame width: 19 triplet values ")
      .addComments(" Total count: 57 * 2 = 114 recorded motion values ")
      .addComments(" Animation playback: enable RealTimer for continuous motion at 30.010 frames/second (fps) ")
      .addChild(new TimeSensor("RealTimer").setCycleInterval(0.067).setLoop(true))
      .addComments(" Alternative replay: enable StepTimer for discrete time-step motion at 1 fps ")
      .addChild(new TimeSensor("StepTimer").setCycleInterval(2).setEnabled(false).setLoop(true))
      .addChild(new ScalarInterpolator("FrameStepper").setKey(new double[] {0.0000,1.0,1.0}).setKeyValue(new double[] {0.0000,0.0000,1.0}))
      .addChild(new ROUTE().setFromNode("StepTimer").setFromField("fraction_changed").setToNode("FrameStepper").setToField("set_fraction"))
      .addComments(" Interpolator0_humanoid_root channels [0..2] sends animation values to BVH JOINT ROOT_Hips = <HAnimJoint DEF='BvhUniversityWisconsionExample1_ROOT_Hips' name='humanoid_root'/> ")
      .addChild(new PositionInterpolator("Interpolator0_humanoid_root").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFVec3f(new double[] {0.8030,3.5010,8.8360,0.7810,3.5100,8.6470})))
      .addComments(" Position triplet values, CHANNELS Xposition Yposition Zposition Zrotation Xrotation Yrotation, with min/max ranges [1.7976931348623157E308,4.9E-324], [1.7976931348623157E308,4.9E-324], [1.7976931348623157E308,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 8.030000 35.010000 88.360000, 7.810000 35.100000 86.470000 ")
      .addComments(" Interpolator1_humanoid_root channels [3..5] sends animation values to BVH JOINT ROOT_Hips = <HAnimJoint DEF='BvhUniversityWisconsionExample1_ROOT_Hips' name='humanoid_root'/> ")
      .addChild(new OrientationInterpolator("Interpolator1_humanoid_root").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.9930,-0.1163,2.9232})))
      .addComments(" Euler angle triplet values, CHANNELS Xposition Yposition Zposition Zrotation Xrotation Yrotation, with min/max ranges [-3.78,4.9E-324], [12.94,14.78], [-166.97,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -3.410000 14.780000 -164.350000, -3.780000 12.940000 -166.970000 ")
      .addComments(" Interpolator2_vl5 channels [6..8] sends animation values to BVH JOINT Chest = <HAnimJoint DEF='BvhUniversityWisconsionExample1_vl5' name='vl5'/> ")
      .addChild(new OrientationInterpolator("Interpolator2_vl5").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.8240})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [12.64,13.09], [40.3,42.57], [-24.6,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 13.090000 40.300000 -24.600000, 12.640000 42.570000 -22.340000 ")
      .addComments(" Interpolator3_Neck channels [9..11] sends animation values to BVH JOINT Neck = <HAnimJoint DEF='BvhUniversityWisconsionExample1_Neck' name='Neck'/> ")
      .addChild(new OrientationInterpolator("Interpolator3_Neck").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.9834,0.0677,0.1685,0.7761,0.9841,0.0660,0.1649,0.7723})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [7.67,7.88], [43.61,43.8], [0.0,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 7.880000 43.800000 0.000000, 7.670000 43.610000 0.000000 ")
      .addComments(" Interpolator4_skullbase channels [12..14] sends animation values to BVH JOINT Head = <HAnimJoint DEF='BvhUniversityWisconsionExample1_skullbase' name='skullbase'/> ")
      .addChild(new OrientationInterpolator("Interpolator4_skullbase").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.9778,0.1629,-0.1317,0.7360,-0.9794,0.1474,-0.1381,0.7342})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-4.23,4.9E-324], [-41.45,4.9E-324], [4.89,5.82] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -3.610000 -41.450000 5.820000, -4.230000 -41.410000 4.890000 ")
      .addComments(" Interpolator5_LeftCollar channels [15..17] sends animation values to BVH JOINT LeftCollar = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftCollar' name='LeftCollar'/> ")
      .addChild(new OrientationInterpolator("Interpolator5_LeftCollar").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [10.08,19.1], [0.0,4.9E-324], [4.16,10.21] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 10.080000 0.000000 10.210000, 19.100000 0.000000 4.160000 ")
      .addComments(" Interpolator6_LeftUpArm channels [18..20] sends animation values to BVH JOINT LeftUpArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftUpArm' name='LeftUpArm'/> ")
      .addChild(new OrientationInterpolator("Interpolator6_LeftUpArm").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [93.12,97.95], [-23.53,4.9E-324], [-9.43,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 97.950000 -23.530000 -2.140000, 93.120000 -9.690000 -9.430000 ")
      .addComments(" Interpolator7_LeftLowArm channels [21..23] sends animation values to BVH JOINT LeftLowArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftLowArm' name='LeftLowArm'/> ")
      .addChild(new OrientationInterpolator("Interpolator7_LeftLowArm").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.9933,-0.0526,-0.1030,1.6066,-0.9965,0.0822,0.0138,1.6744})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-101.86,132.67], [-81.86,4.9E-324], [-98.91,136.8] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -101.860000 -80.770000 -98.910000, 132.670000 -81.860000 136.800000 ")
      .addComments(" Interpolator8_LeftHand channels [24..26] sends animation values to BVH JOINT LeftHand = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftHand' name='LeftHand'/> ")
      .addChild(new OrientationInterpolator("Interpolator8_LeftHand").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.69,0.7], [0.03,0.37], [0.0,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 0.690000 0.030000 0.000000, 0.700000 0.370000 0.000000 ")
      .addComments(" Interpolator9_RightCollar channels [27..29] sends animation values to BVH JOINT RightCollar = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightCollar' name='RightCollar'/> ")
      .addChild(new OrientationInterpolator("Interpolator9_RightCollar").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.0734,-0.5964,-0.7993,0.3057,-0.0700,-0.9291,-0.3633,0.4091})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-14.04,4.9E-324], [0.0,4.9E-324], [-21.82,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -14.040000 0.000000 -10.500000, -8.620000 0.000000 -21.820000 ")
      .addComments(" Interpolator10_RightUpArm channels [30..32] sends animation values to BVH JOINT RightUpArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightUpArm' name='RightUpArm'/> ")
      .addChild(new OrientationInterpolator("Interpolator10_RightUpArm").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.6801,-0.6074,-0.4106,2.0536,-0.7650,-0.5303,-0.3654,1.9107})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-87.31,4.9E-324], [-27.57,4.9E-324], [-102.93,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -85.520000 -13.720000 -102.930000, -87.310000 -27.570000 -100.090000 ")
      .addComments(" Interpolator11_RightLowArm channels [33..35] sends animation values to BVH JOINT RightLowArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightLowArm' name='RightLowArm'/> ")
      .addChild(new OrientationInterpolator("Interpolator11_RightLowArm").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [56.17,61.91], [-61.56,4.9E-324], [58.72,65.18] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 61.910000 -61.180000 65.180000, 56.170000 -61.560000 58.720000 ")
      .addComments(" Interpolator12_RightHand channels [36..38] sends animation values to BVH JOINT RightHand = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightHand' name='RightHand'/> ")
      .addChild(new OrientationInterpolator("Interpolator12_RightHand").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-1.63,4.9E-324], [0.69,0.95], [0.02,0.03] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -1.570000 0.690000 0.020000, -1.630000 0.950000 0.030000 ")
      .addComments(" Interpolator13_LeftUpLeg channels [39..41] sends animation values to BVH JOINT LeftUpLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftUpLeg' name='LeftUpLeg'/> ")
      .addChild(new OrientationInterpolator("Interpolator13_LeftUpLeg").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [13.16,15.0], [15.44,22.78], [-5.92,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 15.000000 22.780000 -5.920000, 13.160000 15.440000 -3.560000 ")
      .addComments(" Interpolator14_LeftLowLeg channels [42..44] sends animation values to BVH JOINT LeftLowLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftLowLeg' name='LeftLowLeg'/> ")
      .addChild(new OrientationInterpolator("Interpolator14_LeftLowLeg").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [7.97,14.93], [49.99,59.29], [4.97,6.6] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 14.930000 49.990000 6.600000, 7.970000 59.290000 4.970000 ")
      .addComments(" Interpolator15_LeftFoot channels [45..47] sends animation values to BVH JOINT LeftFoot = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftFoot' name='LeftFoot'/> ")
      .addChild(new OrientationInterpolator("Interpolator15_LeftFoot").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-1.0000,0.0000,0.0000,0.0199,1.0000,0.0000,0.0000,0.0286})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.0,4.9E-324], [-1.14,1.64], [0.0,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 0.000000 -1.140000 0.000000, 0.000000 1.640000 0.000000 ")
      .addComments(" Interpolator16_RightUpLeg channels [48..50] sends animation values to BVH JOINT RightUpLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightUpLeg' name='RightUpLeg'/> ")
      .addChild(new OrientationInterpolator("Interpolator16_RightUpLeg").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-17.18,4.9E-324], [-10.51,4.9E-324], [-3.11,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: -16.580000 -10.510000 -3.110000, -17.180000 -10.020000 -3.080000 ")
      .addComments(" Interpolator17_RightLowLeg channels [51..53] sends animation values to BVH JOINT RightLowLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightLowLeg' name='RightLowLeg'/> ")
      .addChild(new OrientationInterpolator("Interpolator17_RightLowLeg").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {0.9694,-0.2340,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [13.56,15.38], [52.66,53.38], [-21.8,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 15.380000 52.660000 -21.800000, 13.560000 53.380000 -18.070000 ")
      .addComments(" Interpolator18_RightFoot channels [54..56] sends animation values to BVH JOINT RightFoot = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightFoot' name='RightFoot'/> ")
      .addChild(new OrientationInterpolator("Interpolator18_RightFoot").setKey(new double[] {0.0000,1.0}).setKeyValue(new MFRotation(new double[] {-1.0000,0.0000,0.0000,0.4180,-1.0000,0.0000,0.0000,0.4526})))
      .addComments(" Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.0,4.9E-324], [-25.93,4.9E-324], [0.0,4.9E-324] degrees ")
      .addComments(" Vertical channel slice of 3 Euler angles from BVH motion array: 0.000000 -23.950000 0.000000, 0.000000 -25.930000 0.000000 ")
      .addComments(" Overall angle min/max range [-166.97,136.8] degrees ")
      .addComments(" Corresponding ROUTE statements to send animation values ")
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator0_humanoid_root").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator0_humanoid_root").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator0_humanoid_root").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_humanoid_root").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator1_humanoid_root").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator1_humanoid_root").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator1_humanoid_root").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_humanoid_root").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator2_vl5").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator2_vl5").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator2_vl5").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_vl5").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator3_Neck").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator3_Neck").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator3_Neck").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_Neck").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator4_skullbase").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator4_skullbase").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator4_skullbase").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_skullbase").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator5_LeftCollar").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator5_LeftCollar").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator5_LeftCollar").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftCollar").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator6_LeftUpArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator6_LeftUpArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator6_LeftUpArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftUpArm").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator7_LeftLowArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator7_LeftLowArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator7_LeftLowArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftLowArm").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator8_LeftHand").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator8_LeftHand").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator8_LeftHand").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftHand").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator9_RightCollar").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator9_RightCollar").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator9_RightCollar").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightCollar").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator10_RightUpArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator10_RightUpArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator10_RightUpArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightUpArm").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator11_RightLowArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator11_RightLowArm").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator11_RightLowArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightLowArm").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator12_RightHand").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator12_RightHand").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator12_RightHand").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightHand").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator13_LeftUpLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator13_LeftUpLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator13_LeftUpLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftUpLeg").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator14_LeftLowLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator14_LeftLowLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator14_LeftLowLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftLowLeg").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator15_LeftFoot").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator15_LeftFoot").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator15_LeftFoot").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftFoot").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator16_RightUpLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator16_RightUpLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator16_RightUpLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightUpLeg").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator17_RightLowLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator17_RightLowLeg").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator17_RightLowLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightLowLeg").setToField("set_rotation"))
      .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator18_RightFoot").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator18_RightFoot").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("Interpolator18_RightFoot").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightFoot").setToField("set_rotation")))
    .addComments(" All frame data: 8.030 35.010 88.360 -3.410 14.780 -164.350 13.090 40.300 -24.600 7.880 43.800 0.000 -3.610 -41.450 5.820 10.080 0.000 10.210 97.950 -23.530 -2.140 -101.860 -80.770 -98.910 0.690 0.030 0.000 -14.040 0.000 -10.500 -85.520 -13.720 -102.930 61.910 -61.180 65.180 -1.570 0.690 0.020 15.000 22.780 -5.920 14.930 49.990 6.600 0.000 -1.140 0.000 -16.580 -10.510 -3.110 15.380 52.660 -21.800 0.000 -23.950 0.000 7.810 35.100 86.470 -3.780 12.940 -166.970 12.640 42.570 -22.340 7.670 43.610 0.000 -4.230 -41.410 4.890 19.100 0.000 4.160 93.120 -9.690 -9.430 132.670 -81.860 136.800 0.700 0.370 0.000 -8.620 0.000 -21.820 -87.310 -27.570 -100.090 56.170 -61.560 58.720 -1.630 0.950 0.030 13.160 15.440 -3.560 7.970 59.290 4.970 0.000 1.640 0.000 -17.180 -10.020 -3.080 13.560 53.380 -18.070 0.000 -25.930 0.000 "));
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
	 * @return UniversityWisconsionExample1 model
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
        X3D thisExampleX3dModel = new UniversityWisconsionExample1().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.UniversityWisconsionExample1\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.UniversityWisconsionExample1 self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./UniversityWisconsionExample1_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./UniversityWisconsionExample1_JavaExport.x3d"; 
                String filenameX3DV = "./UniversityWisconsionExample1_JavaExport.x3dv"; 
                String filenameJSON = "./UniversityWisconsionExample1_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
