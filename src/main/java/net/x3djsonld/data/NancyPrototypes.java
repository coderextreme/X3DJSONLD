package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Canonical H-Anim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/NancyPrototypes.java">NancyPrototypes.java</a> source, <a href="../../../HumanoidAnimation/NancyPrototypesIndex.html" target="_top">NancyPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/NancyPrototypes.x3d">NancyPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Cindy Ballreich </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translators </i> </td>
			<td> Tom Miller and Don Brutzman, NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 July 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Canonical H-Anim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HumanoidAnimation/NancyNativeTags.x3d">NancyNativeTags.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyPrototypes.x3d</a> </td>
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

	* @author Cindy Ballreich
 */

public class NancyPrototypes
{
	/** Default constructor to create this object. */
	public NancyPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NancyPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Cindy Ballreich"))
    .addMeta(new meta().setName("translators").setContent("Tom Miller and Don Brutzman, NPS"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("9 July 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Canonical H-Anim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("NancyNativeTags.x3d"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("Displacer").setName("Displacer").setAppinfo("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Displacer.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("coordIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("displacements").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"null body node"}))))
    .addChild(new ProtoDeclare("Humanoid").setName("Humanoid").setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html")
      .setProtoInterface(new ProtoInterface()
        .addComments(" H-Anim v1.1 field definitions ")
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1.1").setAppinfo("legal values: 1.1 or 2.0"))
        .addField(new field().setName("humanoidVersion").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Version of the humanoid being modeled. Hint: H-anim version 2.0"))
        .addField(new field().setName("info").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0f,1.0f,1.0f)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0f,-1.0f,-1.0f)))
        .addField(new field().setName("humanoidBody").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("H-Anim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton").setDocumentation("http://H-Anim.org/Specifications/H-Anim1.1/#humanoid"))
        .addField(new field().setName("skeleton").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("H-Anim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html"))
        .addField(new field().setName("joints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Joint nodes"))
        .addField(new field().setName("segments").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Segment nodes"))
        .addField(new field().setName("sites").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Site nodes"))
        .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Viewpoint nodes"))
        .addField(new field().setName("skinCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: H-anim version 2.0")
          .addComments(" NULL node "))
        .addField(new field().setName("skinNormal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: H-anim version 2.0")
          .addComments(" NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("HumanoidTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize")))
          .addChild(new Group("HumanoidGroup1")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new Group("HumanoidGroup2")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("skeleton"))))
          .addChild(new Group("HumanoidGroup3")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("viewpoints")))))))
    .addChild(new ProtoDeclare("Joint").setName("Joint").setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Joint.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("ulimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("llimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("limitOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("skinCoordIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("skinCoordWeight").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("stiffness").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new float[] {0.0f,0.0f,0.0f}))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0f,1.0f,1.0f)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0f,-1.0f,-1.0f)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("JointTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Segment").setName("Segment").setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Segment.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("mass").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0f))
        .addField(new field().setName("centerOfMass").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("momentsOfInertia").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0f,-1.0f,-1.0f)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("contains Coordinate nodes")
          .addComments(" NULL node "))
        .addField(new field().setName("displacers").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("contains Displacer nodes")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group("SegmentGroup")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Site").setName("Site").setAppinfo("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).").setDocumentation("http://H-Anim.org/Specifications/H-Anim2001/part1/Site.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0f,1.0f,1.0f)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0f,0.0f,1.0f,0.0f)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0f,0.0f,0.0f)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0f,-1.0f,-1.0f)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("SiteTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addComments(" Start scene graph. ")
    .addChild(new ProtoInstance("Humanoid", "Humanoid")
      .addFieldValue(new fieldValue().setName("name").setValue("nancy"))
      .addFieldValue(new fieldValue().setName("version").setValue("1.1"))
      .addFieldValue(new fieldValue().setName("info").setValue(new String[] {"humanoidVersion=Nancy V1.2b","authorName=Cindy Ballreich","authorEmail=cindy@ballreich.net","copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.","creationDate=Tue Dec 30 08:30:08 PST 1997","usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/h-anim/small_logo.gif> is present and proper credit is given."}))
      .addFieldValue(new fieldValue().setName("humanoidBody")
        .addChild(new ProtoInstance("Joint", "hanim_HumanoidRoot")
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"))
          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.00405f,0.855f,-0.000113f)))
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new ProtoInstance("Joint", "hanim_sacroiliac")
              .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"))
              .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0f,1.01f,-0.0204f)))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("Segment", "hanim_pelvis")
                  .addFieldValue(new fieldValue().setName("name").setValue("pelvis"))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material("Pants_Color").setAmbientIntensity(0.25f).setDiffuseColor(0.054f,0.233f,0.39f)))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.14f).setCoordIndex(getIndexedFaceSet_12_150_coordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_150_point()))))))
                .addChild(new ProtoInstance("Joint", "hanim_l_hip")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hip"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.122f,0.888271f,-0.0693267f)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_l_thigh")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Pants_Color")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.32f).setCoordIndex(new int[] {0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.0969f,0.804f,-0.0486f,0.101f,0.876f,0.0336f,0.17f,0.894f,-0.00778f,0.17f,0.891f,-0.076f,0.124f,0.858f,-0.129f,0.076f,0.843f,-0.143f,0.025f,0.819f,-0.0889f,0.0507f,0.847f,0.0196f,0.00349f,0.826f,-0.0287f,0.0991f,0.808f,0.0406f,0.161f,0.814f,-0.00187f,0.165f,0.808f,-0.0755f,0.122f,0.788f,-0.126f,0.00993f,0.762f,-0.0937f,0.00993f,0.762f,-0.0309f,0.0491f,0.777f,0.0185f,0.0755f,0.766f,-0.139f,0.13f,0.597f,-0.00618f,0.132f,0.6f,-0.0593f,0.108f,0.603f,-0.105f,0.0722f,0.601f,-0.118f,0.0314f,0.59f,-0.0953f,0.0239f,0.566f,-0.0427f,0.047f,0.566f,0.0051f,0.0878f,0.581f,0.0217f,0.114f,0.499f,-0.0132f,0.116f,0.488f,-0.061f,0.103f,0.567f,-0.0991f,0.0362f,0.557f,-0.0926f,0.025f,0.486f,-0.047f,0.0507f,0.497f,-0.00188f,0.0862f,0.513f,0.018f,0.0733f,0.579f,-0.108f})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_l_knee")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0738f,0.517f,-0.0284f)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_l_calf")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_calf"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57f).setCoordIndex(getIndexedFaceSet_16_170_coordIndex())
                                .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.0883f,0.532f,-0.00349f,0.0609f,0.533f,-0.00833f,0.0814f,0.55f,-0.0395f,0.0529f,0.536f,-0.0368f,0.0577f,0.544f,-0.0577f,0.0722f,0.546f,-0.0717f,0.0975f,0.54f,-0.0647f,0.105f,0.539f,-0.0438f,0.104f,0.539f,-0.0223f,0.0862f,0.506f,0.0158f,0.101f,0.51f,-0.0798f,0.0706f,0.51f,-0.101f,0.0406f,0.513f,-0.0744f,0.0368f,0.51f,-0.0357f,0.0556f,0.506f,-0.000272f,0.117f,0.508f,-0.0169f,0.0878f,0.361f,-0.0126f,0.123f,0.363f,-0.04f,0.123f,0.363f,-0.0663f,0.107f,0.367f,-0.107f,0.0588f,0.365f,-0.122f,0.0228f,0.358f,-0.0926f,0.0239f,0.358f,-0.0475f,0.0497f,0.358f,-0.0234f,0.118f,0.311f,-0.0411f,0.118f,0.309f,-0.0685f,0.105f,0.31f,-0.108f,0.0572f,0.308f,-0.123f,0.0201f,0.309f,-0.0937f,0.0191f,0.311f,-0.0508f,0.0475f,0.307f,-0.0282f,0.0883f,0.309f,-0.018f,0.0959f,0.124f,-0.04f,0.0905f,0.12f,-0.0647f,0.0738f,0.117f,-0.0814f,0.0373f,0.121f,-0.0636f,0.0416f,0.124f,-0.0416f,0.0744f,0.13f,-0.0212f,0.0561f,0.13f,-0.0245f,0.0529f,0.121f,-0.0873f,0.0948f,0.0897f,-0.0368f,0.0916f,0.0779f,-0.0604f,0.0717f,0.0854f,-0.0765f,0.0406f,0.0918f,-0.0626f,0.0384f,0.0881f,-0.0363f,0.054f,0.0972f,-0.0175f,0.0765f,0.11f,-0.0169f,0.0486f,0.0999f,-0.0835f})))))))
                        .addChild(new ProtoInstance("Joint", "hanim_l_ankle")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_ankle"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0645f,0.0719f,-0.048f)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_l_hindfoot")
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material("Shoe_Color").setAmbientIntensity(0.25f)))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57f).setCoordIndex(getIndexedFaceSet_18_180_coordIndex())
                                    .setCoord(new Coordinate().setPoint(getCoordinate_19_180_point()))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_r_hip")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hip"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.11f,0.892362f,-0.0732533f)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_r_thigh")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Pants_Color")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.61f).setCoordIndex(new int[] {5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.0969f,0.804f,-0.0486f,-0.101f,0.876f,0.0336f,-0.17f,0.894f,-0.00778f,-0.17f,0.891f,-0.076f,-0.124f,0.858f,-0.129f,-0.076f,0.843f,-0.143f,-0.025f,0.819f,-0.0889f,-0.0507f,0.847f,0.0196f,-0.00349f,0.826f,-0.0287f,-0.0991f,0.808f,0.0406f,-0.161f,0.814f,-0.00187f,-0.165f,0.808f,-0.0755f,-0.122f,0.788f,-0.126f,-0.00993f,0.762f,-0.0937f,-0.00993f,0.762f,-0.0309f,-0.0491f,0.777f,0.0185f,-0.0755f,0.766f,-0.139f,-0.13f,0.597f,-0.00618f,-0.132f,0.6f,-0.0593f,-0.108f,0.603f,-0.105f,-0.0722f,0.601f,-0.118f,-0.0314f,0.59f,-0.0953f,-0.0239f,0.566f,-0.0427f,-0.047f,0.566f,0.0051f,-0.0878f,0.581f,0.0217f,-0.114f,0.499f,-0.0132f,-0.116f,0.488f,-0.061f,-0.103f,0.567f,-0.0991f,-0.0362f,0.557f,-0.0926f,-0.025f,0.486f,-0.047f,-0.0507f,0.497f,-0.00188f,-0.0862f,0.513f,0.018f})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_r_knee")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.0699f,0.51f,-0.0166f)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_r_calf")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_calf"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57f).setCoordIndex(getIndexedFaceSet_16_206_coordIndex())
                                .setCoord(new Coordinate().setPoint(getCoordinate_17_206_point()))))))
                        .addChild(new ProtoInstance("Joint", "hanim_r_ankle")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_ankle"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.064f,0.0753f,-0.0412f)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_r_hindfoot")
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("Shoe_Color")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57f).setCoordIndex(getIndexedFaceSet_18_216_coordIndex())
                                    .setCoord(new Coordinate().setPoint(getCoordinate_19_216_point()))))))))))))))
            .addChild(new ProtoInstance("Joint", "hanim_vl1")
              .addFieldValue(new fieldValue().setName("name").setValue("vl1"))
              .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.00405f,1.07f,-0.0275f)))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("Segment", "hanim_c7")
                  .addFieldValue(new fieldValue().setName("name").setValue("l1"))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material("Shirt_Color").setAmbientIntensity(0.25f).setDiffuseColor(0.6f,0.0745f,0.1137f))
                        .setTexture(new ImageTexture("small_logo_Tex").setUrl(new String[] {"small_logo.gif","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/small_logo.gif"})))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.59f).setCoordIndex(getIndexedFaceSet_12_235_coordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_235_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(/*0.invocation*/)))))))
                .addChild(new ProtoInstance("Joint", "hanim_l_shoulder")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.167f,1.36f,-0.0518f)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_l_upperarm")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Transform("l_upperarm_adjust").setCenter(0.182f,1.22f,-0.047f).setRotation(1.0f,0.0f,0.0f,0.119f).setTranslation(0.0f,0.0004203f,-0.01665f)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material("Skin_Color").setAmbientIntensity(0.25f).setDiffuseColor(0.749f,0.601f,0.462f)))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(1.65f).setCoordIndex(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1})
                              .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.174f,1.37f,-0.0625f,0.185f,1.38f,-0.0395f,0.156f,1.39f,-0.0464f,0.174f,1.37f,-0.0158f,0.154f,1.37f,-0.0185f,0.157f,1.38f,-0.0733f,0.182f,1.33f,-0.0728f,0.151f,1.33f,-0.0937f,0.15f,1.34f,-0.000787f,0.185f,1.33f,-0.00025f,0.201f,1.33f,-0.0411f,0.189f,1.26f,-0.0808f,0.155f,1.26f,-0.0867f,0.151f,1.26f,-0.000789f,0.19f,1.26f,-0.00401f,0.209f,1.26f,-0.0427f,0.141f,1.26f,-0.0421f,0.203f,1.08f,-0.0744f,0.162f,1.05f,-0.0561f,0.169f,1.08f,-0.00885f,0.208f,1.07f,-0.00133f,0.221f,1.08f,-0.0352f}))))))))
                    .addChild(new ProtoInstance("Joint", "hanim_l_elbow")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.196f,1.07f,-0.0518f)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_l_forearm")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Transform("l_forearm_adjust").setCenter(0.198f,0.961f,-0.0405f).setRotation(-1.0f,0.0f,0.0f,0.1f).setTranslation(0.0f,0.003724f,-0.0236f)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.75f).setCoordIndex(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1})
                                  .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.177f,1.09f,-0.0609f,0.202f,1.1f,-0.0566f,0.189f,1.1f,-0.0395f,0.213f,1.1f,-0.025f,0.203f,1.1f,-0.0158f,0.182f,1.09f,-0.00563f,0.167f,1.09f,-0.0325f,0.176f,1.08f,-0.0781f,0.16f,1.06f,-0.0373f,0.214f,1.07f,-0.00402f,0.228f,1.07f,-0.0319f,0.208f,1.08f,-0.0765f,0.179f,1.07f,-0.00294f,0.21f,0.818f,-0.0615f,0.201f,0.82f,-0.0405f,0.205f,0.819f,-0.00832f,0.224f,0.818f,-0.00778f,0.237f,0.82f,-0.0282f,0.231f,0.819f,-0.0609f}))))))))
                        .addChild(new ProtoInstance("Joint", "hanim_l_wrist")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_wrist"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.213f,0.811f,-0.0338f)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_l_hand")
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hand"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Transform("l_hand_adjust").setCenter(0.213f,0.811f,-0.0338f).setRotation(-0.06361f,-0.9967f,0.04988f,1.333f).setTranslation(0.0f,0.005142f,-0.008662f)
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("Skin_Color")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.48f).setCoordIndex(getIndexedFaceSet_19_268_coordIndex())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.211f,0.828f,-0.0434f,0.194f,0.81f,-0.0445f,0.237f,0.82f,-0.0425f,0.236f,0.82f,-0.0237f,0.194f,0.81f,-0.0254f,0.21f,0.828f,-0.0247f,0.252f,0.801f,-0.0424f,0.252f,0.801f,-0.0231f,0.269f,0.765f,-0.0426f,0.268f,0.765f,-0.0225f,0.273f,0.732f,-0.0395f,0.272f,0.732f,-0.0223f,0.27f,0.704f,-0.0342f,0.27f,0.704f,-0.0224f,0.262f,0.703f,-0.0345f,0.261f,0.703f,-0.0227f,0.256f,0.717f,-0.0389f,0.256f,0.717f,-0.023f,0.255f,0.738f,-0.0408f,0.255f,0.738f,-0.023f,0.251f,0.734f,-0.0406f,0.251f,0.734f,-0.0232f,0.251f,0.692f,-0.0232f,0.248f,0.657f,-0.0233f,0.24f,0.645f,-0.0236f,0.226f,0.637f,-0.0241f,0.213f,0.639f,-0.0246f,0.197f,0.652f,-0.0253f,0.188f,0.669f,-0.0256f,0.184f,0.697f,-0.0258f,0.183f,0.73f,-0.0258f,0.187f,0.77f,-0.0257f,0.244f,0.696f,-0.0375f,0.244f,0.692f,-0.0372f,0.242f,0.661f,-0.0345f,0.241f,0.658f,-0.0343f,0.241f,0.656f,-0.0341f,0.231f,0.646f,-0.0336f,0.206f,0.65f,-0.0349f,0.218f,0.644f,-0.034f,0.205f,0.652f,-0.0352f,0.198f,0.667f,-0.0367f,0.195f,0.691f,-0.039f,0.194f,0.696f,-0.0395f,0.193f,0.725f,-0.042f,0.193f,0.731f,-0.0425f,0.197f,0.765f,-0.0449f,0.197f,0.77f,-0.0453f}))))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_r_shoulder")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.167f,1.36f,-0.0458f)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_r_upperarm")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Transform("r_upperarm_adjust").setCenter(-0.182f,1.22f,-0.047f).setRotation(1.0f,0.0f,0.0f,0.0836f).setTranslation(0.0f,0.000589f,-0.01169f)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("Skin_Color")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(1.53f).setCoordIndex(new int[] {14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1})
                              .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.221f,1.08f,-0.0352f,-0.214f,1.14f,-0.0405f,-0.209f,1.26f,-0.0427f,-0.208f,1.07f,-0.00133f,-0.203f,1.08f,-0.0744f,-0.201f,1.33f,-0.0411f,-0.198f,1.14f,-0.0024f,-0.198f,1.13f,-0.076f,-0.19f,1.26f,-0.00401f,-0.189f,1.26f,-0.0808f,-0.185f,1.38f,-0.0395f,-0.185f,1.33f,-0.00025f,-0.182f,1.33f,-0.0728f,-0.174f,1.37f,-0.0158f,-0.174f,1.37f,-0.0625f,-0.169f,1.08f,-0.00885f,-0.167f,1.13f,-0.0744f,-0.162f,1.05f,-0.0561f,-0.16f,1.13f,-0.000793f,-0.157f,1.38f,-0.0733f,-0.156f,1.39f,-0.0464f,-0.155f,1.26f,-0.0867f,-0.154f,1.37f,-0.0185f,-0.151f,1.26f,-0.000789f,-0.151f,1.33f,-0.0937f,-0.15f,1.34f,-0.000787f,-0.15f,1.13f,-0.0411f,-0.141f,1.26f,-0.0421f}))))))))
                    .addChild(new ProtoInstance("Joint", "hanim_r_elbow")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.192f,1.07f,-0.0498f)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_r_forearm")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Transform("r_forearm_adjust").setCenter(-0.198f,0.961f,-0.0397f).setRotation(-1.0f,0.0f,0.0f,0.1254f).setTranslation(0.0f,0.003466f,-0.01065f)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.73f).setCoordIndex(new int[] {20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1})
                                  .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.237f,0.82f,-0.0282f,-0.235f,1.02f,-0.033f,-0.231f,0.819f,-0.0609f,-0.228f,1.07f,-0.0319f,-0.224f,0.818f,-0.00778f,-0.221f,1.01f,-0.0744f,-0.218f,1.01f,-0.00133f,-0.214f,1.07f,-0.00402f,-0.213f,1.1f,-0.025f,-0.21f,0.818f,-0.0615f,-0.208f,1.08f,-0.0765f,-0.205f,0.819f,-0.00832f,-0.203f,1.1f,-0.0158f,-0.202f,1.1f,-0.0566f,-0.201f,0.82f,-0.0405f,-0.189f,1.1f,-0.0395f,-0.183f,1.01f,-0.00831f,-0.183f,1.01f,-0.0781f,-0.182f,1.09f,-0.00563f,-0.179f,1.07f,-0.00294f,-0.177f,1.09f,-0.0609f,-0.176f,1.08f,-0.0781f,-0.167f,1.09f,-0.0325f,-0.166f,1.0f,-0.0405f,-0.16f,1.06f,-0.0373f}))))))))
                        .addChild(new ProtoInstance("Joint", "hanim_r_wrist")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_wrist"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.217f,0.811f,-0.0338f)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_r_hand")
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hand"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Transform("r_hand_adjust").setCenter(-0.217f,0.811f,-0.0338f).setRotation(-0.09024f,0.994f,-0.0624f,1.216f)
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("Skin_Color")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57f).setCoordIndex(getIndexedFaceSet_19_307_coordIndex())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.237f,0.82f,-0.0425f,-0.252f,0.801f,-0.0424f,-0.269f,0.765f,-0.0426f,-0.273f,0.732f,-0.0395f,-0.27f,0.704f,-0.0342f,-0.262f,0.703f,-0.0345f,-0.256f,0.717f,-0.0389f,-0.255f,0.738f,-0.0408f,-0.251f,0.734f,-0.0406f,-0.194f,0.81f,-0.0445f,-0.211f,0.828f,-0.0434f,-0.236f,0.82f,-0.0237f,-0.252f,0.801f,-0.0231f,-0.268f,0.765f,-0.0225f,-0.272f,0.732f,-0.0223f,-0.27f,0.704f,-0.0224f,-0.261f,0.703f,-0.0227f,-0.256f,0.717f,-0.023f,-0.255f,0.738f,-0.023f,-0.251f,0.734f,-0.0232f,-0.251f,0.692f,-0.0232f,-0.248f,0.657f,-0.0233f,-0.24f,0.645f,-0.0236f,-0.226f,0.637f,-0.0241f,-0.213f,0.639f,-0.0246f,-0.197f,0.652f,-0.0253f,-0.188f,0.669f,-0.0256f,-0.184f,0.697f,-0.0258f,-0.183f,0.73f,-0.0258f,-0.187f,0.77f,-0.0257f,-0.194f,0.81f,-0.0254f,-0.21f,0.828f,-0.0247f,-0.221f,0.641f,-0.0336f,-0.21f,0.65f,-0.0348f,-0.206f,0.652f,-0.0352f,-0.198f,0.667f,-0.0368f,-0.193f,0.692f,-0.0392f,-0.192f,0.696f,-0.0396f,-0.231f,0.646f,-0.0336f,-0.238f,0.656f,-0.0342f,-0.24f,0.658f,-0.0344f,-0.24f,0.662f,-0.0347f,-0.243f,0.692f,-0.0372f,-0.243f,0.696f,-0.0376f,-0.192f,0.725f,-0.0421f,-0.192f,0.73f,-0.0426f,-0.195f,0.766f,-0.0451f,-0.196f,0.77f,-0.0454f}))))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_vc4")
                  .addFieldValue(new fieldValue().setName("name").setValue("vc4"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0f,1.43f,-0.0458f)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_c4")
                      .addFieldValue(new fieldValue().setName("name").setValue("c4"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Skin_Color")))
                          .setGeometry(new IndexedFaceSet("neck").setDEF("neck").setCreaseAngle(1.91f).setCoordIndex(new int[] {6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.0105f,1.54f,-0.1f,0.0357f,1.54f,-0.0685f,0.0382f,1.55f,-0.0474f,0.0105f,1.55f,-0.0204f,0.0373f,1.4f,-0.0593f,0.0577f,1.4f,-0.0266f,0.0158f,1.4f,0.00512f,0.0132f,1.41f,-0.0824f,-0.0158f,1.4f,0.00512f,-0.0577f,1.4f,-0.0266f,-0.0382f,1.55f,-0.0474f,-0.0105f,1.55f,-0.0204f,-0.0373f,1.4f,-0.0593f,-0.0357f,1.54f,-0.0685f,-0.0132f,1.41f,-0.0824f,-0.0105f,1.54f,-0.1f})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_skullbase")
                      .addFieldValue(new fieldValue().setName("name").setValue("skullbase"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0f,1.54f,-0.0409f)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_skull")
                          .addFieldValue(new fieldValue().setName("name").setValue("skull"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Skin_Color")))
                              .setGeometry(new IndexedFaceSet("headIFS").setDEF("headIFS").setCreaseAngle(0.7854f).setColorIndex(getheadIFS_16_334_colorIndex()).setCoordIndex(getheadIFS_16_334_coordIndex())
                                .setCoord(new Coordinate("Face").setPoint(getFace_17_334_point()))
                                .setColor(new Color().setColor(new MFColor(new float[] {0.749f,0.601f,0.462f,0.1735f,0.2602f,0.749f,0.6364f,0.133f,0.1526f,0.4545f,0.2759f,0.1902f})))))))))))))))
        .addChild(new Group()))
      .addFieldValue(new fieldValue().setName("joints")
        .addChild(new ProtoInstance().setUSE("hanim_HumanoidRoot"))
        .addChild(new ProtoInstance().setUSE("hanim_sacroiliac"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hip"))
        .addChild(new ProtoInstance().setUSE("hanim_l_knee"))
        .addChild(new ProtoInstance().setUSE("hanim_l_ankle"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hip"))
        .addChild(new ProtoInstance().setUSE("hanim_r_knee"))
        .addChild(new ProtoInstance().setUSE("hanim_r_ankle"))
        .addChild(new ProtoInstance().setUSE("hanim_vl1"))
        .addChild(new ProtoInstance().setUSE("hanim_l_shoulder"))
        .addChild(new ProtoInstance().setUSE("hanim_l_elbow"))
        .addChild(new ProtoInstance().setUSE("hanim_l_wrist"))
        .addChild(new ProtoInstance().setUSE("hanim_r_shoulder"))
        .addChild(new ProtoInstance().setUSE("hanim_r_elbow"))
        .addChild(new ProtoInstance().setUSE("hanim_r_wrist"))
        .addChild(new ProtoInstance().setUSE("hanim_vc4"))
        .addChild(new ProtoInstance().setUSE("hanim_skullbase")))
      .addFieldValue(new fieldValue().setName("segments")
        .addChild(new ProtoInstance().setUSE("hanim_pelvis"))
        .addChild(new ProtoInstance().setUSE("hanim_l_thigh"))
        .addChild(new ProtoInstance().setUSE("hanim_l_calf"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hindfoot"))
        .addChild(new ProtoInstance().setUSE("hanim_r_thigh"))
        .addChild(new ProtoInstance().setUSE("hanim_r_calf"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hindfoot"))
        .addChild(new ProtoInstance().setUSE("hanim_c7"))
        .addChild(new ProtoInstance().setUSE("hanim_l_upperarm"))
        .addChild(new ProtoInstance().setUSE("hanim_l_forearm"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hand"))
        .addChild(new ProtoInstance().setUSE("hanim_r_upperarm"))
        .addChild(new ProtoInstance().setUSE("hanim_r_forearm"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hand"))
        .addChild(new ProtoInstance().setUSE("hanim_c4"))
        .addChild(new ProtoInstance().setUSE("hanim_skull")))
      .addFieldValue(new fieldValue().setName("viewpoints")
        .addChild(new Viewpoint("InclinedView").setDescription("Inclined View").setOrientation(-0.113f,0.993f,0.0347f,0.671f).setPosition(1.62f,1.05f,2.06f))
        .addChild(new Viewpoint("FrontView").setDescription("Front View").setPosition(0.0f,0.854f,2.57665f))
        .addChild(new Viewpoint("SideView").setDescription("Side View").setOrientation(0.0f,1.0f,0.0f,1.57079f).setPosition(2.5929f,0.854f,0.0f))
        .addChild(new Viewpoint("TopView").setDescription("Top View").setOrientation(1.0f,0.0f,0.0f,-1.57079f).setPosition(0.0f,3.4495f,0.0f))))
    .addChild(new WorldInfo().setInfo(new String[] {"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."}).setTitle("Nancy - an H-Anim compliant avatar by 3Name3D"))
    .addChild(new NavigationInfo().setAvatarSize(new float[] {0.15f,1.53f,0.75f}).setSpeed(0.5f).setType(new String[] {"EXAMINE"}))
    .addChild(new Group("Interface")
      .addChild(new Transform()
        .addChild(new ProximitySensor("HudProx").setCenter(0.0f,20.0f,0.0f).setSize(500.0f,100.0f,500.0f)))
      .addChild(new Collision("HUD").setEnabled(false)
        .addChild(new Transform("HudXform")
          .addChild(new Transform().setScale(0.012f,0.012f,0.012f).setTranslation(0.01107f,-0.025f,-0.08f)
            .addChild(new Transform("Stand_Text")
              .addChild(new TouchSensor("Stand_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Stand")
                .setGeometry(new IndexedFaceSet().setCoordIndex(getIndexedFaceSet_9_396_coordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_396_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material("text_color").setAmbientIntensity(0.0f).setDiffuseColor(0.0f,0.0f,0.0f).setEmissiveColor(0.819f,0.521f,0.169f))))
              .addChild(new Transform().setScale(84.89f,77.52f,77.52f).setTranslation(0.04092f,1.843f,3.826f)
                .addChild(new Shape("Stand_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.02572f,-0.02535f,-0.05f,-0.02578f,-0.02131f,-0.05f,-0.03871f,-0.02131f,-0.05f,-0.03877f,-0.02541f,-0.05f}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material("Clear").setAmbientIntensity(0.0f).setDiffuseColor(0.0f,0.0f,0.0f).setTransparency(1.0f))))))
            .addChild(new Transform("Walk_Text")
              .addChild(new TouchSensor("Walk_Touch").setDescription("click for behavior"))
              .addChild(new Shape("WALK")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-1.88f,-0.101f,0.0f,-1.96f,0.175f,0.0f,-1.91f,0.175f,0.0f,-1.86f,-0.0195f,0.0f,-1.82f,0.175f,0.0f,-1.76f,0.175f,0.0f,-1.72f,-0.0195f,0.0f,-1.67f,0.175f,0.0f,-1.61f,0.175f,0.0f,-1.69f,-0.101f,0.0f,-1.75f,-0.101f,0.0f,-1.79f,0.111f,0.0f,-1.83f,-0.101f,0.0f,-1.38f,-0.101f,0.0f,-1.38f,0.175f,0.0f,-1.32f,0.175f,0.0f,-1.32f,-0.101f,0.0f,-1.27f,-0.101f,0.0f,-1.27f,0.175f,0.0f,-1.22f,0.175f,0.0f,-1.22f,0.0304f,0.0f,-1.16f,0.103f,0.0f,-1.09f,0.103f,0.0f,-1.16f,0.0272f,0.0f,-1.09f,-0.101f,0.0f,-1.15f,-0.101f,0.0f,-1.2f,-0.0141f,0.0f,-1.22f,-0.0363f,0.0f,-1.22f,-0.101f,0.0f,-1.48f,-0.0754f,0.0f,-1.48f,-0.0373f,0.0f,-1.51f,-0.0637f,0.0f,-1.51f,-0.103f,0.0f,-1.47f,-0.101f,0.0f,-1.42f,-0.101f,0.0f,-1.43f,-0.0763f,0.0f,-1.43f,0.0526f,0.0f,-1.48f,-7.98E-4f,0.0f,-1.48f,0.0446f,0.0f,-1.5f,0.0275f,0.0f,-1.55f,0.0201f,0.0f,-1.54f,-0.0195f,0.0f,-1.59f,1.77E-4f,0.0f,-1.61f,-0.0431f,0.0f,-1.55f,-0.0416f,0.0f,-1.59f,-0.0865f,0.0f,-1.54f,-0.0624f,0.0f,-1.56f,-0.106f,0.0f,-1.44f,0.0849f,0.0f,-1.49f,0.0614f,0.0f,-1.48f,0.107f,0.0f,-1.51f,0.0675f,0.0f,-1.52f,0.11f,0.0f,-1.55f,0.105f,0.0f,-1.54f,0.0573f,0.0f,-1.59f,0.0765f,0.0f,-1.6f,0.039f,0.0f,-1.55f,0.039f,0.0f}))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(81.3f,81.3f,81.31f).setTranslation(-0.0414f,1.941f,4.015f)
                .addChild(new Shape("Walk_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,3,0,-1,3,1,2,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.02381f,-0.02541f,-0.05f,-0.0127f,-0.02541f,-0.05f,-0.01263f,-0.02139f,-0.05f,-0.02381f,-0.02146f,-0.05f}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear"))))))
            .addChild(new Transform("Run_Text")
              .addChild(new TouchSensor("Run_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Run")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_422_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(82.47f,82.47f,82.48f).setTranslation(-0.01579f,1.968f,4.074f)
                .addChild(new Shape("Run_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {-0.01009f,-0.02534f,-0.05f,-0.001382f,-0.02541f,-0.05f,-0.001315f,-0.02146f,-0.05f,-0.01022f,-0.02146f,-0.05f}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear"))))))
            .addChild(new Transform("Jump_Text")
              .addChild(new TouchSensor("Jump_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Jump")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_435_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(83.79f,83.79f,83.79f).setTranslation(-0.008979f,1.99f,4.14f)
                .addChild(new Shape("Jump_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new float[] {0.001296f,-0.02541f,-0.05f,0.01335f,-0.02527f,-0.05f,0.01328f,-0.02152f,-0.05f,0.001229f,-0.02146f,-0.05f}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))))))))
      .addChild(new Transform("Floor").setScale(1.0f,0.0125f,1.0f).setTranslation(0.0f,-0.0125f,0.0f)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())))))
    .addChild(new Group("Animations")
      .addChild(new Group("Stand_Animation")
        .addChild(new OrientationInterpolator("r_ankleRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_kneeRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_hipRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_ankleRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_kneeRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_hipRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("lower_bodyRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_wristRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_elbowRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_shoulderRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_wristRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_elbowRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_shoulderRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("headRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("neckRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("upper_bodyRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("whole_bodyRotInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new PositionInterpolator("whole_bodyTranInterp_Stand").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFVec3f(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
        .addChild(new TimeSensor("Stand_Time").setCycleInterval(0.009999999776482582)))
      .addChild(new Group("Walk_Animation")
        .addChild(new OrientationInterpolator("r_ankleRotInterp_BasicWalk").setKey(new float[] {0.0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.3533f,-1.0f,0.0f,0.0f,0.1072f,1.0f,0.0f,0.0f,0.2612f,1.0f,0.0f,0.0f,0.1268f,-1.0f,0.0f,0.0f,0.01793f,-1.0f,0.0f,0.0f,0.05824f,-1.0f,0.0f,0.0f,0.2398f,-1.0f,0.0f,0.0f,0.35f,-1.0f,0.0f,0.0f,0.3322f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_kneeRotInterp_BasicWalk").setKey(new float[] {0.0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.8573f,1.0f,0.0f,0.0f,0.8926f,1.0f,0.0f,0.0f,0.5351f,1.0f,0.0f,0.0f,0.1756f,1.0f,0.0f,0.0f,0.1194f,1.0f,0.0f,0.0f,0.3153f,1.0f,0.0f,0.0f,0.09354f,1.0f,0.0f,0.0f,0.08558f,1.0f,0.0f,0.0f,0.2475f,1.0f,0.0f,0.0f,0.8573f})))
        .addChild(new OrientationInterpolator("r_hipRotInterp_BasicWalk").setKey(new float[] {0.0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1.0f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1.0f,0.0f,0.0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f})))
        .addChild(new OrientationInterpolator("l_ankleRotInterp_BasicWalk").setKey(new float[] {0.0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,0.0f,0.06714f,-1.0f,0.0f,0.0f,0.2152f,-1.0f,0.0f,0.0f,0.3184f,-1.0f,0.0f,0.0f,0.4717f,-1.0f,0.0f,0.0f,0.2912f,1.0f,0.0f,0.0f,0.1222f,-1.0f,0.0f,0.0f,0.06714f})))
        .addChild(new OrientationInterpolator("l_kneeRotInterp_BasicWalk").setKey(new float[] {0.0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.3226f,1.0f,0.0f,0.0f,0.1556f,1.0f,0.0f,0.0f,0.08678f,1.0f,0.0f,0.0f,0.8751f,1.0f,0.0f,0.0f,1.131f,1.0f,0.0f,0.0f,0.09961f,1.0f,0.0f,0.0f,0.3942f,1.0f,0.0f,0.0f,0.3226f})))
        .addChild(new OrientationInterpolator("l_hipRotInterp_BasicWalk").setKey(new float[] {0.0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1.0f,0.0f,0.0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f})))
        .addChild(new OrientationInterpolator("lower_bodyRotInterp_BasicWalk").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,-1.0f,0.1056f,0.0f,0.0f,1.0f,0.09018f,0.0f,0.0f,-1.0f,0.1056f})))
        .addChild(new OrientationInterpolator("r_wristRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f})))
        .addChild(new OrientationInterpolator("r_elbowRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,0.0f,0.411508f,-1.0f,0.0f,0.0f,0.0925011f,-1.0f,0.0f,0.0f,0.572568f,-1.0f,0.0f,0.0f,0.411508f})))
        .addChild(new OrientationInterpolator("r_shoulderRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,0.0f,0.09346f,1.0f,0.0f,0.0f,0.3197f,-1.0f,0.0f,0.0f,0.1564f,-1.0f,0.0f,0.0f,0.09346f})))
        .addChild(new OrientationInterpolator("l_wristRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,-1.0f,0.0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0.0f,-1.0f,0.0f,0.461076f})))
        .addChild(new OrientationInterpolator("l_elbowRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,0.0f,0.0659878f,-1.0f,0.0f,0.0f,0.488383f,-1.0f,0.0f,0.0f,0.0177536f,-1.0f,0.0f,0.0f,0.0659878f})))
        .addChild(new OrientationInterpolator("l_shoulderRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.1189f,-1.0f,0.0f,0.0f,0.1861f,1.0f,0.0f,0.0f,0.3357f,1.0f,0.0f,0.0f,0.1189f})))
        .addChild(new OrientationInterpolator("headRotInterp_BasicWalk").setKey(new float[] {0.0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,-1.0f,0.0f,0.08642f,0.0f,1.0f,0.0f,0.1825f,0.0f,1.0f,0.0f,0.1505f,0.0f,1.0f,0.0f,0.1053f,0.0f,1.0f,0.0f,0.04391f,0.0f,-1.0f,0.0f,0.03119f,0.0f,-1.0f,0.0f,0.07936f,0.0f,-1.0f,0.0f,0.1616f,0.0f,-1.0f,0.0f,0.155f,0.0f,-1.0f,0.0f,0.08642f})))
        .addChild(new OrientationInterpolator("neckRotInterp_BasicWalk").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("upper_bodyRotInterp_BasicWalk").setKey(new float[] {0.0f,0.2083f,0.375f,0.75f,0.8333f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,1.0f,0.0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0.0f,1.0f,0.0f,0.0826f})))
        .addChild(new OrientationInterpolator("whole_bodyRotInterp_BasicWalk").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new PositionInterpolator("whole_bodyTranInterp_BasicWalk").setKey(new float[] {0.0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1.0f}).setKeyValue(new MFVec3f(new float[] {0.0f,-0.00928f,0.0f,0.0f,-0.003858f,0.0f,0.0f,-0.008847f,0.0f,0.0f,-0.01486f,0.0f,0.0f,-0.02641f,0.0f,0.0f,-0.03934f,0.0f,0.0f,-0.0502f,0.0f,0.0f,-0.07469f,0.0f,0.0f,-0.02732f,0.0f,0.0f,-0.01608f,0.0f,0.0f,-0.01129f,0.0f,0.0f,-0.005819f,0.0f,0.0f,-0.002004f,0.0f,0.0f,-0.002579f,0.0f,0.0f,-0.0143f,0.0f,0.0f,-0.03799f,0.0f,0.0f,-0.05648f,0.0f,0.0f,-0.045f,0.0f,0.0f,-0.00928f,0.0f})))
        .addChild(new TimeSensor("Walk_Time").setCycleInterval(2.0).setLoop(true).setStartTime(-1.0)))
      .addChild(new Group("Run_Animation")
        .addChild(new OrientationInterpolator("r_ankleRotInterp_Run").setKey(new float[] {0.0f,0.4909f,0.7091f,0.8f,0.8182f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.2323f,-1.0f,0.0f,0.0f,0.07843f,-1.0f,0.0f,0.0f,0.09676f,-1.0f,0.0f,0.0f,0.3274f,-1.0f,0.0f,0.0f,0.3278f,1.0f,0.0f,0.0f,0.2323f})))
        .addChild(new OrientationInterpolator("r_kneeRotInterp_Run").setKey(new float[] {0.0f,0.03636f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.7004f,1.0f,0.0f,0.0f,1.011f,1.0f,0.0f,0.0f,1.892f,1.0f,0.0f,0.0f,1.188f,1.0f,0.0f,0.0f,0.3964f,1.0f,0.0f,0.0f,0.7004f})))
        .addChild(new OrientationInterpolator("r_hipRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {0.9999f,0.00293f,-0.00989f,0.402f,-1.0f,0.004977f,-0.00497f,0.5943f,-1.0f,0.003265f,-0.001752f,1.178f,-0.9999f,0.00815f,-0.01093f,0.3031f,0.9999f,0.00293f,-0.00989f,0.402f})))
        .addChild(new OrientationInterpolator("l_ankleRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.3091f,0.4909f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.03543f,-1.0f,0.0f,0.0f,0.1037f,-1.0f,0.0f,0.0f,0.4328f,1.0f,0.0f,0.0f,0.1929f,1.0f,0.0f,0.0f,0.03543f})))
        .addChild(new OrientationInterpolator("l_kneeRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,1.108f,1.0f,0.0f,0.0f,0.4265f,1.0f,0.0f,0.0f,0.7052f,1.0f,0.0f,0.0f,2.179f,1.0f,0.0f,0.0f,1.108f})))
        .addChild(new OrientationInterpolator("l_hipRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.9986f,0.03354f,0.04001f,1.212f,-0.9889f,0.1328f,0.06696f,0.4025f,0.9894f,0.1453f,0.009351f,0.4114f,-0.9963f,0.07032f,0.05003f,0.7035f,-0.9986f,0.03354f,0.04001f,1.212f})))
        .addChild(new OrientationInterpolator("lower_bodyRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.9969f,-0.05444f,0.05596f,0.07687f,0.9969f,-0.05444f,0.05596f,0.07687f})))
        .addChild(new OrientationInterpolator("r_wristRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f})))
        .addChild(new OrientationInterpolator("r_elbowRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {0.9353f,-0.2978f,-0.191f,4.222f,-0.9362f,0.2924f,-0.1952f,1.05f,0.9941f,-0.09719f,-0.04725f,4.512f,-0.9594f,0.2653f,0.09579f,1.525f,0.9353f,-0.2978f,-0.191f,4.222f})))
        .addChild(new OrientationInterpolator("r_shoulderRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,0.0f,0.6979f,0.9094f,0.2062f,-0.3613f,0.4157f,0.9637f,0.1537f,-0.2185f,1.353f,0.4864f,0.08841f,-0.8693f,0.1716f,-1.0f,0.0f,0.0f,0.6979f})))
        .addChild(new OrientationInterpolator("l_wristRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {-0.0240995f,-0.999682f,0.00741506f,0.120409f,-0.0240995f,-0.999682f,0.00741506f,0.120409f})))
        .addChild(new OrientationInterpolator("l_elbowRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {0.9985f,0.03887f,0.03802f,4.689f,-0.965f,-0.1889f,-0.1821f,1.415f,0.9758f,0.1563f,0.1529f,4.666f,-0.9956f,-0.0936f,0.009826f,1.126f,0.9985f,0.03887f,0.03802f,4.689f})))
        .addChild(new OrientationInterpolator("l_shoulderRotInterp_Run").setKey(new float[] {0.0f,0.2182f,0.4909f,0.7455f,1.0f}).setKeyValue(new MFRotation(new float[] {0.9907f,-0.07264f,0.115f,1.135f,0.9291f,-0.1222f,0.349f,0.1695f,-0.9892f,0.1364f,-0.05394f,0.5112f,0.9942f,-2.052E-4f,0.1073f,0.4975f,0.9907f,-0.07264f,0.115f,1.135f})))
        .addChild(new OrientationInterpolator("headRotInterp_Run").setKey(new float[] {0.0f,0.4909f,1.0f}).setKeyValue(new MFRotation(new float[] {0.6517f,-0.7559f,0.06211f,0.2508f,0.6467f,0.7527f,-0.1238f,0.2344f,0.6517f,-0.7559f,0.06211f,0.2508f})))
        .addChild(new OrientationInterpolator("neckRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("upper_bodyRotInterp_Run").setKey(new float[] {0.0f,0.2545f,0.4909f,0.7636f,1.0f}).setKeyValue(new MFRotation(new float[] {0.7651f,0.6382f,0.08586f,0.2712f,0.9999f,0.002845f,-0.01547f,0.3756f,0.7459f,-0.6505f,-0.1432f,0.2416f,0.9984f,0.05536f,-0.01154f,0.3488f,0.7651f,0.6382f,0.08586f,0.2712f})))
        .addChild(new OrientationInterpolator("whole_bodyRotInterp_Run").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new PositionInterpolator("whole_bodyTranInterp_Run").setKey(new float[] {0.0f,0.2182f,0.2909f,0.3091f,0.7091f,0.8f,0.8182f,1.0f}).setKeyValue(new MFVec3f(new float[] {0.0f,-0.0351f,0.0f,0.0f,-0.0351f,0.0f,0.0f,-0.04087f,0.0f,0.0f,-0.04886f,0.0f,0.0f,-0.04051f,0.0f,0.0f,-0.03666f,0.0f,0.0f,-0.03666f,0.0f,0.0f,-0.0351f,0.0f})))
        .addChild(new TimeSensor("Run_Time").setLoop(true).setStartTime(-1.0)))
      .addChild(new Group("Jump_Animation")
        .addChild(new OrientationInterpolator("r_ankleRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.6735f,-1.0f,0.0f,0.0f,0.6735f,-1.0f,0.0f,0.0f,0.3527f,-1.0f,0.0f,0.0f,0.3038f,-1.0f,0.0f,0.0f,0.07964f,1.0f,0.0f,0.0f,0.3001f,1.0f,0.0f,0.0f,0.6509f,1.0f,0.0f,0.0f,0.3001f,-1.0f,0.0f,0.0f,0.2087f,-1.0f,0.0f,0.0f,0.3756f,-1.0f,0.0f,0.0f,0.3279f,-1.0f,0.0f,0.0f,0.1193f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_kneeRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,2.005f,1.0f,0.0f,0.0f,2.005f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.9507f,1.0f,0.0f,0.0f,0.5845f,1.0f,0.0f,0.0f,0.9054f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_hipRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,4.433f,1.0f,0.0f,0.0f,4.433f,1.0f,0.0f,0.0f,4.647f,-1.0f,0.0f,0.0f,0.8943f,-1.0f,0.0f,0.0f,0.3698f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.4963f,-1.0f,0.0f,0.0f,0.3829f,-1.0f,0.0f,0.0f,0.5169f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_ankleRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.625f,-1.0f,0.0f,0.0f,0.625f,-1.0f,0.0f,0.0f,0.3364f,-1.0f,0.0f,0.0f,0.2742f,-1.0f,0.0f,0.0f,0.05078f,1.0f,0.0f,0.0f,0.2833f,1.0f,0.0f,0.0f,0.6667f,1.0f,0.0f,0.0f,0.2833f,-1.0f,0.0f,0.0f,0.2108f,-1.0f,0.0f,0.0f,0.375f,-1.0f,0.0f,0.0f,0.3146f,-1.0f,0.0f,0.0f,0.1174f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_kneeRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,2.047f,1.0f,0.0f,0.0f,2.047f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.566f,1.0f,0.0f,0.0f,0.5913f,1.0f,0.0f,0.0f,0.9235f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_hipRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,4.349f,1.0f,0.0f,0.0f,4.349f,1.0f,0.0f,0.0f,4.615f,-1.0f,0.0f,0.0f,0.9136f,-1.0f,0.0f,0.0f,0.3614f,0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.7869f,-1.0f,0.0f,0.0f,0.3918f,-1.0f,0.0f,0.0f,0.5433f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("lower_bodyRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.1892f,1.0f,0.0f,0.0f,0.1892f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_wristRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0.0f,1.0f,0.0f,0.497349f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_elbowRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.04151f,-1.0f,0.0f,0.0f,0.04151f,-1.0f,0.0f,0.0f,0.5855f,-1.0f,0.0f,0.0f,0.5852f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("r_shoulderRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_wristRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0.0f,-1.0f,0.0f,0.655922f,-5.0618E-4f,-0.999999f,0.0012782f,1.28397f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_elbowRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.1229f,-1.0f,0.0f,0.0f,0.1229f,-1.0f,0.0f,0.0f,0.5976f,-1.0f,0.0f,0.0f,0.3917f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("l_shoulderRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.64f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1.0f,4.113E-4f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("headRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.5989f,-1.0f,0.0f,0.0f,0.5989f,-1.0f,0.0f,0.0f,0.3216f,1.0f,0.0f,0.0f,0.06503f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("neckRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,-1.0f,0.0f,0.0f,0.1942f,-1.0f,0.0f,0.0f,0.1942f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.2284f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("upper_bodyRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.76f,0.88f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.038f,1.0f,0.0f,0.0f,1.038f,-1.0f,0.0f,0.0f,0.1057f,1.0f,0.0f,0.0f,0.2171f,1.0f,0.0f,0.0f,0.3465f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new OrientationInterpolator("whole_bodyRotInterp_Jump").setKey(new float[] {0.0f,0.28f,0.32f,0.48f,0.64f,0.76f,1.0f}).setKeyValue(new MFRotation(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.3273f,1.0f,0.0f,0.0f,0.3273f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
        .addChild(new PositionInterpolator("whole_bodyTranInterp_Jump").setKey(new float[] {0.0f,0.04f,0.08f,0.12f,0.16f,0.2f,0.24f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1.0f}).setKeyValue(new MFVec3f(new float[] {0.0f,0.0f,0.0f,0.0f,-0.01264f,-0.01289f,0.0f,-0.04712f,-0.03738f,-3.345E-4f,-0.1049f,-0.05353f,-5.712E-4f,-0.1892f,-0.06561f,-8.233E-4f,-0.286f,-0.06276f,-9.591E-4f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.3269f,-0.1499f,-8.616E-4f,-0.13f,-0.06358f,-5.128E-4f,-0.03123f,-0.05488f,4.779E-4f,0.053f,0.02732f,1.728E-4f,0.4148f,0.006873f,0.0f,0.03045f,0.02148f,0.0f,-0.01299f,-0.01057f,0.0f,-0.06932f,-0.01064f,1.365E-4f,-0.1037f,-0.005059f,1.279E-4f,-0.07198f,-0.007596f,1.41E-4f,-0.01626f,-0.004935f,0.0f,0.0f,0.0f})))
        .addChild(new TimeSensor("Jump_Time").setCycleInterval(2.0).setStartTime(-1.0))))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("Walk_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("Run_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("Jump_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("Stand_Time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("Stand_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("Run_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("Jump_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("Walk_Time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("Stand_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("Walk_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("Jump_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("Run_Time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("Stand_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("Walk_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("Run_Time").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("Jump_Time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_ankleRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_kneeRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_hipRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_ankleRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_kneeRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_hipRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("lower_bodyRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_wristRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_elbowRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_shoulderRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_wristRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_elbowRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_shoulderRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("headRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("neckRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("upper_bodyRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("whole_bodyRotInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("whole_bodyTranInterp_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankleRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_kneeRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hipRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankleRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_kneeRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hipRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_bodyRotInterp_Stand").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wristRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbowRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulderRotInterp_Stand").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wristRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbowRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulderRotInterp_Stand").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("headRotInterp_Stand").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neckRotInterp_Stand").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_bodyRotInterp_Stand").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyRotInterp_Stand").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyTranInterp_Stand").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_ankleRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_kneeRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_hipRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_ankleRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_kneeRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_hipRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("lower_bodyRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_wristRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_elbowRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_shoulderRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_wristRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_elbowRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_shoulderRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("headRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("neckRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("upper_bodyRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("whole_bodyRotInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("whole_bodyTranInterp_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankleRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_kneeRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hipRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankleRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_kneeRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hipRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_bodyRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wristRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbowRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulderRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wristRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbowRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulderRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("headRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neckRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_bodyRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyRotInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyTranInterp_BasicWalk").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_ankleRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_kneeRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_hipRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("lower_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_wristRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_elbowRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_shoulderRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("headRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("neckRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("upper_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("whole_bodyRotInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("whole_bodyTranInterp_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankleRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_kneeRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hipRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankleRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_kneeRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hipRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wristRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbowRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulderRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wristRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbowRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulderRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("headRotInterp_Run").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neckRotInterp_Run").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyTranInterp_Run").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_ankleRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_kneeRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_hipRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_ankleRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_kneeRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_hipRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("lower_bodyRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_wristRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_elbowRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_shoulderRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_wristRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_elbowRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_shoulderRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("headRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("neckRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("upper_bodyRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("whole_bodyRotInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("whole_bodyTranInterp_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankleRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_kneeRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hipRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankleRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_kneeRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hipRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_bodyRotInterp_Jump").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wristRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbowRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulderRotInterp_Jump").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wristRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbowRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulderRotInterp_Jump").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("headRotInterp_Jump").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neckRotInterp_Jump").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_bodyRotInterp_Jump").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyRotInterp_Jump").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_bodyTranInterp_Jump").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation")));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_150_coordIndex_1()
		{
			int[] value = {0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_16_170_coordIndex_1()
		{
			int[] value = {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_18_180_coordIndex_1()
		{
			int[] value = {2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_16_206_coordIndex_1()
		{
			int[] value = {14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_18_216_coordIndex_1()
		{
			int[] value = {6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_235_coordIndex_1()
		{
			int[] value = {0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150};
			return value;
		}
		private int[] getIndexedFaceSet_12_235_coordIndex_2()
		{
			int[] value = {153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getCoordinate_13_235_point_1()
		{
			float[] value = {0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.103f,1.31f,0.0195f,0.021f,1.32f,0.0276f,0.0572f,1.27f,-0.153f,0.0524f,1.15f,-0.134f,0.0f,1.19f,-0.14f,0.0f,1.26f,-0.147f,-0.0572f,1.27f,-0.153f,-0.0228f,1.18f,-0.14f,-0.0524f,1.15f,-0.134f,0.0f,1.13f,-0.126f,-0.0228f,1.13f,-0.124f,0.0f,1.31f,-0.146f,-0.0545f,1.35f,-0.138f,0.0f,1.35f,-0.136f,-0.0593f,1.3f,-0.151f,0.0593f,1.3f,-0.151f,0.0545f,1.35f,-0.138f,-0.0255f,1.3f,-0.146f,0.0975f,1.26f,-0.15f,0.1f,1.3f,-0.148f,-0.1f,1.3f,-0.148f,-0.0975f,1.26f,-0.15f,-0.117f,1.41f,-0.0395f,-0.0674f,1.45f,-0.0314f,-0.0926f,1.41f,-0.0937f,-0.124f,1.4f,-0.0706f,-0.0583f,1.44f,-0.0615f,-0.0228f,1.46f,-0.0872f,-0.0534f,1.42f,-0.112f,-0.0228f,1.42f,0.00351f,-0.0593f,1.43f,-0.0185f,-0.0787f,1.39f,-0.00293f,-0.112f,1.4f,-0.0131f,-0.164f,1.39f,-0.0373f,-0.0153f,1.39f,0.0159f,-0.0953f,1.35f,-0.136f,-0.0545f,1.35f,-0.138f,-0.139f,1.34f,0.00297f,-0.137f,1.34f,-0.0368f,0.0f,1.35f,-0.136f,-0.156f,1.35f,-0.0915f,-0.132f,1.29f,-0.127f,-0.1f,1.3f,-0.148f,-0.0418f,1.35f,0.0168f,-0.013f,1.37f,0.0167f,-0.151f,1.28f,-0.0878f,-0.136f,1.32f,-0.0406f,-0.124f,1.26f,-0.125f,-0.0975f,1.26f,-0.15f,0.00228f,1.37f,0.0167f,-0.00959f,1.32f,0.0276f,-0.0918f,1.31f,0.0195f,-0.141f,1.25f,-0.0744f,-0.0316f,1.25f,0.0614f,-0.00261f,1.25f,0.0458f,-0.0611f,1.25f,0.0668f,-0.0896f,1.25f,0.0614f,-0.126f,1.24f,0.012f,-0.126f,1.22f,0.0141f,-0.129f,1.17f,-0.0523f,-0.115f,1.16f,-0.105f,-0.0851f,1.18f,-0.134f,-0.0524f,1.15f,-0.134f,-0.083f,1.13f,-0.122f,-0.117f,1.15f,-0.018f,-0.11f,1.1f,-0.0846f,-0.0808f,1.1f,-0.111f,-0.0228f,1.13f,-0.124f,-0.0524f,1.1f,-0.119f,0.0f,1.13f,-0.126f,-0.0228f,1.1f,-0.116f,-0.0563f,1.15f,0.0377f,-0.00476f,1.18f,0.0458f,-0.0343f,1.18f,0.0485f,-0.0966f,1.15f,-0.00413f,-0.12f,1.1f,-0.0373f,-0.121f,1.07f,-0.0356f,-0.106f,1.07f,-0.0711f,-0.0475f,1.06f,-0.105f,0.0f,1.08f,0.0556f,-0.0787f,1.08f,0.0347f,-0.103f,1.08f,0.00296f,-0.0975f,1.01f,-0.0873f,-0.134f,0.998f,-0.0314f,-0.0475f,1.02f,-0.109f,-0.0325f,1.02f,0.0529f,0.0f,1.02f,0.0422f,-0.0975f,1.02f,0.0132f,0.0926f,1.41f,-0.0937f,0.0674f,1.45f,-0.0314f,0.117f,1.41f,-0.0395f,0.124f,1.4f,-0.0706f,0.0583f,1.44f,-0.0615f,0.0534f,1.42f,-0.112f,0.0228f,1.46f,-0.0872f,0.0f,1.4f,-0.112f,0.0787f,1.39f,-0.00293f,0.0593f,1.43f,-0.0185f};
			return value;
		}
		private float[] getCoordinate_13_235_point_2()
		{
			float[] value = {0.0228f,1.42f,0.00351f,0.112f,1.4f,-0.0131f,0.164f,1.39f,-0.0373f,0.0153f,1.39f,0.0159f,0.0953f,1.35f,-0.136f,0.0545f,1.35f,-0.138f,0.139f,1.34f,0.00297f,0.156f,1.35f,-0.0915f,0.132f,1.29f,-0.127f,0.151f,1.28f,-0.0878f,0.1f,1.3f,-0.148f,0.137f,1.34f,-0.0368f,0.147f,1.32f,-0.0406f,0.124f,1.26f,-0.125f,0.0975f,1.26f,-0.15f,0.021f,1.32f,0.0276f,0.0532f,1.35f,0.0168f,0.103f,1.31f,0.0195f,0.135f,1.29f,-0.0406f,0.141f,1.25f,-0.0744f,0.132f,1.18f,-0.083f,0.134f,1.19f,-0.0572f,0.014f,1.25f,0.0458f,0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.138f,1.24f,0.012f,0.065f,1.23f,0.0743f,0.115f,1.16f,-0.105f,0.0851f,1.18f,-0.134f,0.0524f,1.15f,-0.134f,0.043f,1.2f,0.0641f,0.127f,1.14f,-0.0427f,0.083f,1.13f,-0.122f,0.0162f,1.18f,0.0458f,0.0457f,1.18f,0.0485f,0.117f,1.15f,-0.018f,0.11f,1.1f,-0.0846f,0.0808f,1.1f,-0.111f,0.0524f,1.1f,-0.119f,0.0228f,1.1f,-0.116f,0.108f,1.15f,-0.00413f,0.12f,1.1f,-0.0373f,0.121f,1.07f,-0.0356f,0.106f,1.07f,-0.0711f,0.0475f,1.06f,-0.105f,0.0787f,1.08f,0.0347f,0.0844f,1.15f,0.0297f,0.103f,1.08f,0.00296f,0.0f,1.07f,-0.11f,0.0975f,1.01f,-0.0873f,0.134f,0.998f,-0.0475f,0.0475f,1.02f,-0.109f,0.0325f,1.02f,0.0529f,0.0975f,1.02f,0.0132f,0.0f,1.02f,-0.117f,0.0f,1.44f,-0.0389f,0.0f,1.01f,-0.0259f,-0.104f,1.19f,0.0423f,-0.0778f,1.19f,0.0642f,-0.078f,1.19f,0.0644f,-0.0493f,1.2f,0.0664f,-0.0281f,1.22f,0.0587f,-0.104f,1.2f,0.0568f,-0.0484f,1.21f,0.0692f,-0.0549f,1.21f,0.0708f,-0.0806f,1.21f,0.0713f,-0.0852f,1.21f,0.0703f,0.116f,1.19f,0.043f,0.114f,1.21f,0.0572f,0.0967f,1.21f,0.0701f,0.11f,1.19f,0.0502f,0.093f,1.19f,0.0622f,0.0832f,1.19f,0.0662f,0.0863f,1.21f,0.0728f,0.0154f,1.21f,0.0458f,-0.00393f,1.21f,0.0458f,-0.0145f,1.2f,0.0512f,0.0534f,1.35f,0.0168f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_19_268_coordIndex_1()
		{
			int[] value = {2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_19_307_coordIndex_1()
		{
			int[] value = {10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getheadIFS_16_334_colorIndex_1()
		{
			int[] value = {1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1};
			return value;
		}
		private int[] getheadIFS_16_334_colorIndex_2()
		{
			int[] value = {3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getheadIFS_16_334_coordIndex_1()
		{
			int[] value = {48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1};
			return value;
		}
		private int[] getheadIFS_16_334_coordIndex_2()
		{
			int[] value = {77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getFace_17_334_point_1()
		{
			float[] value = {0.0f,1.708f,-0.0435f,0.0f,1.655f,0.04322f,0.0f,1.486f,0.02335f,0.0f,1.694f,0.007789f,0.0f,1.631f,0.051f,0.0f,1.524f,-0.102f,0.04f,1.51f,-0.07278f,0.04029f,1.514f,-0.08254f,0.03528f,1.502f,-0.05013f,0.03479f,1.517f,-0.09269f,0.0116f,1.494f,0.03382f,0.01946f,1.52f,0.03421f,0.02204f,1.494f,0.0272f,0.02734f,1.498f,0.02215f,0.02788f,1.528f,0.03084f,0.0338f,1.503f,0.0124f,0.04008f,1.509f,0.002821f,0.05122f,1.518f,-0.02784f,0.05867f,1.544f,-0.03316f,0.06433f,1.563f,-0.03678f,0.06732f,1.583f,-0.03683f,0.06769f,1.617f,-0.03436f,0.06641f,1.637f,-0.03046f,0.06818f,1.637f,-0.04285f,0.06308f,1.666f,-0.04036f,0.05305f,1.685f,-0.03987f,0.03136f,1.7f,-0.0413f,0.02919f,1.688f,0.0091f,0.05272f,1.674f,-0.001657f,0.06061f,1.66f,-0.0101f,0.05254f,1.541f,-0.01363f,0.04099f,1.527f,0.008832f,0.03528f,1.524f,0.02097f,0.05792f,1.557f,-0.004307f,0.04413f,1.539f,0.0149f,0.03746f,1.539f,0.02656f,0.003407f,1.524f,0.04155f,0.01481f,1.526f,0.03912f,0.005112f,1.532f,0.04358f,0.02438f,1.542f,0.03578f,0.02636f,1.55f,0.03808f,0.006135f,1.55f,0.0545f,0.0f,1.559f,0.05502f,0.02958f,1.651f,0.03965f,0.04847f,1.643f,0.02895f,0.05856f,1.63f,0.01803f,0.06182f,1.614f,0.008199f,0.06194f,1.6f,0.002668f,0.01489f,1.583f,0.04109f,0.05282f,1.569f,0.02821f,0.05767f,1.58f,0.0184f,0.04643f,1.625f,0.03705f,0.0264f,1.628f,0.04807f,0.0556f,1.609f,0.02579f,0.05467f,1.599f,0.02153f,0.05316f,1.589f,0.0207f,0.03603f,1.58f,0.03536f,0.04597f,1.586f,0.02904f,0.02106f,1.592f,0.03748f,0.03428f,1.595f,0.03294f,0.06808f,1.617f,-0.06112f,0.06714f,1.564f,-0.07003f,0.06993f,1.594f,-0.08238f,0.05324f,1.536f,-0.05922f,0.04904f,1.521f,-0.05132f,0.04758f,1.514f,-0.03107f,0.03539f,1.503f,-0.00093f,0.02999f,1.498f,0.006194f,0.02308f,1.492f,0.01628f,0.01772f,1.488f,0.02135f,0.01378f,1.488f,0.02484f,0.04349f,1.512f,-0.03987f,0.02308f,1.499f,-0.02088f,0.0f,1.487f,-0.018f,0.04795f,1.531f,-0.08973f,0.05739f,1.555f,-0.0982f,0.06815f,1.622f,-0.107f,0.06872f,1.655f,-0.08466f,0.05233f,1.678f,-0.09642f,0.05334f,1.631f,-0.1239f,0.05011f,1.581f,-0.1193f,0.04359f,1.551f,-0.1067f,0.03839f,1.528f,-0.09652f,0.03399f,1.636f,-0.1304f,0.03224f,1.685f,-0.1024f,0.0f,1.557f,-0.1126f,0.01864f,1.566f,0.04105f,0.0249f,1.58f,0.0387f,0.02735f,1.596f,0.03552f,0.04317f,1.564f,0.03643f,0.01246f,1.577f,0.04276f,0.04354f,1.59f,0.02822f,0.04557f,1.601f,0.03652f,0.0291f,1.603f,0.04274f,0.01856f,1.6f,0.04349f,0.0f,1.579f,0.04893f,0.01064f,1.558f,0.04476f,0.005501f,1.578f,0.04574f,0.01405f,1.531f,0.04152f,0.01037f,1.544f,0.04266f};
			return value;
		}
		private float[] getFace_17_334_point_2()
		{
			float[] value = {0.0f,1.515f,0.03836f,0.00797f,1.515f,0.03774f,0.01824f,1.55f,0.04063f,-0.0249f,1.58f,0.0387f,-0.04354f,1.59f,0.02822f,-0.0291f,1.603f,0.04274f,-0.04317f,1.564f,0.03643f,-0.04597f,1.586f,0.02904f,-0.05316f,1.589f,0.0207f,-0.01824f,1.55f,0.04063f,-0.01246f,1.577f,0.04276f,-0.006135f,1.55f,0.0545f,-0.01037f,1.544f,0.04266f,-0.02636f,1.55f,0.03808f,-0.03428f,1.595f,0.03294f,-0.02735f,1.596f,0.03552f,-0.03603f,1.58f,0.03536f,-0.05282f,1.569f,0.02821f,-0.05767f,1.58f,0.0184f,-0.01864f,1.566f,0.04105f,-0.01489f,1.583f,0.04109f,-0.0556f,1.609f,0.02579f,-0.04557f,1.601f,0.03652f,-0.02106f,1.592f,0.03748f,-0.01856f,1.6f,0.04349f,-0.005501f,1.578f,0.04574f,-0.01064f,1.558f,0.04476f,0.0f,1.592f,0.04694f,-0.06182f,1.614f,0.008199f,-0.05467f,1.599f,0.02153f,-0.06194f,1.6f,0.002668f,-0.05792f,1.557f,-0.004307f,-0.04413f,1.539f,0.0149f,-0.03746f,1.539f,0.02656f,-0.04099f,1.527f,0.008832f,-0.03528f,1.524f,0.02097f,-0.02788f,1.528f,0.03084f,0.0f,1.53f,0.04236f,-0.005112f,1.532f,0.04358f,-0.01481f,1.526f,0.03912f,-0.01946f,1.52f,0.03421f,0.0f,1.495f,0.0348f,-0.0116f,1.494f,0.03382f,-0.02734f,1.498f,0.02215f,-0.0338f,1.503f,0.0124f,-0.01772f,1.488f,0.02135f,-0.02308f,1.492f,0.01628f,-0.02999f,1.498f,0.006194f,-0.01405f,1.531f,0.04152f,-0.003407f,1.524f,0.04155f,-0.02204f,1.494f,0.0272f,-0.00797f,1.515f,0.03774f,-0.02438f,1.542f,0.03578f,0.0f,1.543f,0.04432f,0.0f,1.555f,0.05692f,0.02295f,1.492f,-0.02694f,0.007322f,1.489f,-0.01677f,-0.05254f,1.541f,-0.01363f,-0.04008f,1.509f,0.002821f,-0.05122f,1.518f,-0.02784f,-0.03539f,1.503f,-0.00093f,-0.01378f,1.488f,0.02484f,-0.02308f,1.499f,-0.02088f,-0.04349f,1.512f,-0.03987f,-0.05867f,1.544f,-0.03316f,-0.06433f,1.563f,-0.03678f,-0.06732f,1.583f,-0.03683f,-0.06769f,1.617f,-0.03436f,-0.05856f,1.63f,0.01803f,-0.04847f,1.643f,0.02895f,-0.04643f,1.625f,0.03705f,-0.02958f,1.651f,0.03965f,-0.0264f,1.628f,0.04807f,-0.02919f,1.688f,0.0091f,-0.05272f,1.674f,-0.001657f,-0.06641f,1.637f,-0.03046f,-0.06061f,1.66f,-0.0101f,-0.03136f,1.7f,-0.0413f,-0.05305f,1.685f,-0.03987f,-0.06308f,1.666f,-0.04036f,-0.06818f,1.637f,-0.04285f,-0.06808f,1.617f,-0.06112f,-0.06993f,1.594f,-0.08238f,-0.06714f,1.564f,-0.07003f,-0.05324f,1.536f,-0.05922f,-0.04904f,1.521f,-0.05132f,-0.04795f,1.531f,-0.08973f,-0.05739f,1.555f,-0.0982f,-0.06815f,1.622f,-0.107f,-0.06872f,1.655f,-0.08466f,-0.05233f,1.678f,-0.09642f,-0.03224f,1.685f,-0.1024f,0.0f,1.69f,-0.1047f,0.0f,1.64f,-0.1342f,-0.05334f,1.631f,-0.1239f,-0.05011f,1.581f,-0.1193f,-0.04359f,1.551f,-0.1067f,-0.03839f,1.528f,-0.09652f,-0.03528f,1.502f,-0.05013f,-0.04f,1.51f,-0.07278f};
			return value;
		}
		private float[] getFace_17_334_point_3()
		{
			float[] value = {-0.04029f,1.514f,-0.08254f,-0.03479f,1.517f,-0.09269f,-0.02295f,1.492f,-0.02694f,-0.007322f,1.489f,-0.01677f,0.0f,1.588f,-0.1329f,-0.03399f,1.636f,-0.1304f,-0.04758f,1.514f,-0.03107f,-0.03428f,1.595f,0.03294f,-0.02106f,1.592f,0.03748f,-0.02735f,1.596f,0.03552f,-0.0249f,1.58f,0.0387f,-0.01489f,1.583f,0.04109f,-0.04597f,1.586f,0.02904f,-0.04354f,1.59f,0.02822f,-0.03603f,1.58f,0.03536f,-0.05856f,1.63f,0.01803f,-0.06182f,1.614f,0.008199f,-0.02788f,1.528f,0.03084f,-0.005112f,1.532f,0.04358f,-0.01405f,1.531f,0.04152f,-0.00797f,1.515f,0.03774f,-0.01946f,1.52f,0.03421f,-0.05867f,1.544f,-0.03316f,-0.06433f,1.563f,-0.03678f,-0.06732f,1.583f,-0.03683f,-0.06769f,1.617f,-0.03436f,-0.04847f,1.643f,0.02895f,-0.02958f,1.651f,0.03965f,-0.05324f,1.536f,-0.05922f,-0.04795f,1.531f,-0.08973f,-0.03839f,1.528f,-0.09652f,0.02106f,1.592f,0.03748f,0.01489f,1.583f,0.04109f,0.0249f,1.58f,0.0387f,0.03603f,1.58f,0.03536f,0.04354f,1.59f,0.02822f,0.03428f,1.595f,0.03294f,0.02735f,1.596f,0.03552f,0.02788f,1.528f,0.03084f,0.01405f,1.531f,0.04152f,0.0f,1.53f,0.04236f,0.0f,1.515f,0.03836f,0.00797f,1.515f,0.03774f,0.01946f,1.52f,0.03421f,0.005112f,1.532f,0.04358f,0.0f,1.655f,0.04322f,0.02958f,1.651f,0.03965f,0.04847f,1.643f,0.02895f,0.05856f,1.63f,0.01803f,0.06182f,1.614f,0.008199f,0.06769f,1.617f,-0.03436f,0.06732f,1.583f,-0.03683f,0.06433f,1.563f,-0.03678f,0.05867f,1.544f,-0.03316f,0.05324f,1.536f,-0.05922f,0.04795f,1.531f,-0.08973f,0.03839f,1.528f,-0.09652f,0.0f,1.524f,-0.102f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_396_coordIndex_1()
		{
			int[] value = {1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getCoordinate_10_396_point_1()
		{
			float[] value = {-3.21f,-0.0154f,0.0f,-3.15f,-0.0154f,0.0f,-3.14f,-0.0467f,0.0f,-3.1f,-0.0601f,0.0f,-3.05f,-0.051f,0.0f,-3.04f,-0.0254f,0.0f,-3.05f,-0.00248f,0.0f,-3.1f,0.0122f,0.0f,-3.16f,0.03f,0.0f,-3.2f,0.0684f,0.0f,-3.2f,0.133f,0.0f,-3.16f,0.17f,0.0f,-3.1f,0.182f,0.0f,-3.04f,0.171f,0.0f,-3.01f,0.136f,0.0f,-3.0f,0.095f,0.0f,-3.05f,0.095f,0.0f,-3.06f,0.125f,0.0f,-3.1f,0.136f,0.0f,-3.14f,0.126f,0.0f,-3.15f,0.103f,0.0f,-3.14f,0.0815f,0.0f,-3.1f,0.0689f,0.0f,-3.04f,0.0512f,0.0f,-3.0f,0.0249f,0.0f,-2.99f,-0.0195f,0.0f,-3.0f,-0.0708f,0.0f,-3.05f,-0.104f,0.0f,-3.1f,-0.108f,0.0f,-3.16f,-0.0947f,0.0f,-3.2f,-0.0586f,0.0f,-2.86f,-0.102f,0.0f,-2.9f,-0.102f,0.0f,-2.94f,-0.0832f,0.0f,-2.94f,-0.0457f,0.0f,-2.94f,0.0645f,0.0f,-2.97f,0.0645f,0.0f,-2.97f,0.103f,0.0f,-2.94f,0.103f,0.0f,-2.94f,0.158f,0.0f,-2.89f,0.158f,0.0f,-2.89f,0.103f,0.0f,-2.86f,0.103f,0.0f,-2.86f,0.0645f,0.0f,-2.89f,0.0645f,0.0f,-2.89f,-0.0483f,0.0f,-2.88f,-0.0608f,0.0f,-2.86f,-0.0612f,0.0f,-2.71f,-7.98E-4f,0.0f,-2.71f,-0.0373f,0.0f,-2.74f,-0.0637f,0.0f,-2.77f,-0.0624f,0.0f,-2.78f,-0.0416f,0.0f,-2.77f,-0.0195f,0.0f,-2.71f,-0.0754f,0.0f,-2.74f,-0.103f,0.0f,-2.79f,-0.106f,0.0f,-2.82f,-0.0865f,0.0f,-2.84f,-0.0431f,0.0f,-2.82f,1.77E-4f,0.0f,-2.78f,0.0201f,0.0f,-2.73f,0.0275f,0.0f,-2.71f,0.0446f,0.0f,-2.72f,0.0614f,0.0f,-2.74f,0.0675f,0.0f,-2.77f,0.0573f,0.0f,-2.78f,0.039f,0.0f,-2.83f,0.039f,0.0f,-2.82f,0.0765f,0.0f,-2.78f,0.105f,0.0f,-2.74f,0.11f,0.0f,-2.71f,0.107f,0.0f,-2.67f,0.0849f,0.0f,-2.66f,0.0526f,0.0f,-2.66f,-0.0763f,0.0f,-2.65f,-0.101f,0.0f,-2.7f,-0.101f,0.0f,-2.61f,-0.101f,0.0f,-2.61f,0.103f,0.0f,-2.56f,0.103f,0.0f,-2.56f,0.0787f,0.0f,-2.52f,0.104f,0.0f,-2.47f,0.105f,0.0f,-2.43f,0.0743f,0.0f,-2.43f,0.038f,0.0f,-2.43f,-0.101f,0.0f,-2.48f,-0.101f,0.0f,-2.48f,0.0224f,0.0f,-2.49f,0.0514f,0.0f,-2.52f,0.0627f,0.0f,-2.54f,0.0505f,0.0f,-2.55f,0.02f,0.0f,-2.55f,-0.101f,0.0f,-2.33f,0.0279f,0.0f,-2.31f,0.0587f,0.0f,-2.27f,0.0589f,0.0f,-2.25f,0.0281f,0.0f,-2.25f,-0.0232f,0.0f,-2.27f,-0.0563f,0.0f,-2.31f,-0.057f,0.0f};
			return value;
		}
		private float[] getCoordinate_10_396_point_2()
		{
			float[] value = {-2.33f,-0.0245f,0.0f,-2.19f,0.175f,0.0f,-2.19f,-0.101f,0.0f,-2.25f,-0.101f,0.0f,-2.25f,-0.073f,0.0f,-2.26f,-0.0913f,0.0f,-2.31f,-0.108f,0.0f,-2.35f,-0.0915f,0.0f,-2.38f,-0.0424f,0.0f,-2.39f,0.0243f,0.0f,-2.37f,0.0809f,0.0f,-2.32f,0.108f,0.0f,-2.28f,0.106f,0.0f,-2.25f,0.0776f,0.0f,-2.25f,0.175f,0.0f,-2.48f,0.0224f,0.0f,-2.43f,0.038f,0.0f,-2.49f,0.0514f,0.0f,-2.43f,0.0743f,0.0f,-2.49f,0.0514f,0.0f,-2.47f,0.105f,0.0f,-2.52f,0.0627f,0.0f,-2.52f,0.104f,0.0f,-2.54f,0.0505f,0.0f,-2.56f,0.0787f,0.0f,-2.55f,0.02f,0.0f,-2.56f,0.0787f,0.0f,-2.61f,-0.101f,0.0f,-2.55f,0.02f,0.0f,-2.61f,-0.101f,0.0f,-2.56f,0.0787f,0.0f,-2.89f,0.103f,0.0f,-2.94f,0.103f,0.0f,-2.89f,0.0645f,0.0f,-2.89f,0.103f,0.0f,-2.94f,0.103f,0.0f,-2.94f,0.0645f,0.0f,-2.89f,0.0645f,0.0f,-2.94f,0.0645f,0.0f,-2.89f,-0.0483f,0.0f,-2.94f,-0.0457f,0.0f,-2.89f,-0.0483f,0.0f,-2.94f,-0.0832f,0.0f,-2.88f,-0.0608f,0.0f,-2.9f,-0.102f,0.0f,-3.06f,0.125f,0.0f,-3.01f,0.136f,0.0f,-3.06f,0.125f,0.0f,-3.04f,0.171f,0.0f,-3.1f,0.136f,0.0f,-3.1f,0.182f,0.0f,-3.14f,0.126f,0.0f,-3.16f,0.17f,0.0f,-3.15f,0.103f,0.0f,-3.2f,0.133f,0.0f,-3.14f,0.0815f,0.0f,-3.2f,0.0684f,0.0f,-3.14f,0.0815f,0.0f,-3.16f,0.03f,0.0f,-3.1f,0.0689f,0.0f,-3.1f,0.0122f,0.0f,-3.04f,0.0512f,0.0f,-3.05f,-0.00248f,0.0f,-3.0f,0.0249f,0.0f,-3.05f,-0.00248f,0.0f,-2.99f,-0.0195f,0.0f,-3.04f,-0.0254f,0.0f,-3.0f,-0.0708f,0.0f,-3.05f,-0.051f,0.0f,-3.05f,-0.104f,0.0f,-3.05f,-0.051f,0.0f,-3.1f,-0.108f,0.0f,-3.1f,-0.0601f,0.0f,-3.16f,-0.0947f,0.0f,-3.14f,-0.0467f,0.0f,-3.15f,-0.0154f,0.0f,-3.2f,-0.0586f,0.0f};
			return value;
		}



		/** Define subarrays using type float[] */
		private float[] getCoordinate_10_435_point_1()
		{
			float[] value = {0.108f,0.00195f,0.0f,0.163f,0.00195f,0.0f,0.166f,-0.0473f,0.0f,0.194f,-0.0608f,0.0f,0.222f,-0.0492f,0.0f,0.228f,-0.017f,0.0f,0.228f,0.175f,0.0f,0.284f,0.175f,0.0f,0.284f,-0.02f,0.0f,0.271f,-0.0798f,0.0f,0.23f,-0.104f,0.0f,0.193f,-0.108f,0.0f,0.155f,-0.102f,0.0f,0.117f,-0.0714f,0.0f,0.108f,-0.0357f,0.0f,0.563f,-0.101f,0.0f,0.563f,0.103f,0.0f,0.615f,0.103f,0.0f,0.615f,0.0803f,0.0f,0.649f,0.105f,0.0f,0.696f,0.105f,0.0f,0.728f,0.0788f,0.0f,0.76f,0.104f,0.0f,0.811f,0.104f,0.0f,0.842f,0.081f,0.0f,0.853f,0.0416f,0.0f,0.853f,-0.101f,0.0f,0.799f,-0.101f,0.0f,0.799f,0.0305f,0.0f,0.79f,0.0544f,0.0f,0.767f,0.0616f,0.0f,0.743f,0.0507f,0.0f,0.734f,0.0228f,0.0f,0.734f,-0.101f,0.0f,0.681f,-0.101f,0.0f,0.681f,0.0301f,0.0f,0.673f,0.0532f,0.0f,0.65f,0.0611f,0.0f,0.626f,0.0506f,0.0f,0.617f,0.0224f,0.0f,0.617f,-0.101f,0.0f,0.9f,-0.182f,0.0f,0.9f,0.103f,0.0f,0.952f,0.103f,0.0f,0.952f,0.0751f,0.0f,0.968f,0.0934f,0.0f,1.01f,0.11f,0.0f,1.05f,0.103f,0.0f,1.07f,0.0796f,0.0f,1.1f,0.0251f,0.0f,1.1f,-0.0222f,0.0f,1.07f,-0.0788f,0.0f,1.03f,-0.106f,0.0f,0.988f,-0.103f,0.0f,0.953f,-0.0755f,0.0f,0.953f,-0.182f,0.0f,1.04f,-1.77E-4f,0.0f,1.03f,-0.0446f,0.0f,0.999f,-0.0603f,0.0f,0.966f,-0.0453f,0.0f,0.953f,-1.77E-4f,0.0f,0.963f,0.045f,0.0f,0.998f,0.063f,0.0f,1.03f,0.0462f,0.0f,0.515f,-0.101f,0.0f,0.462f,-0.0764f,0.0f,0.462f,-0.101f,0.0f,0.388f,-0.0201f,0.0f,0.388f,0.103f,0.0f,0.334f,0.103f,0.0f,0.334f,-0.0357f,0.0f,0.394f,-0.0491f,0.0f,0.388f,-0.0201f,0.0f,0.334f,-0.0357f,0.0f,0.339f,-0.072f,0.0f,0.394f,-0.0491f,0.0f,0.339f,-0.072f,0.0f,0.376f,-0.102f,0.0f,0.422f,-0.0604f,0.0f,0.394f,-0.0491f,0.0f,0.376f,-0.102f,0.0f,0.428f,-0.101f,0.0f,0.451f,-0.0482f,0.0f,0.422f,-0.0604f,0.0f,0.428f,-0.101f,0.0f,0.462f,-0.0764f,0.0f,0.461f,-0.0177f,0.0f,0.451f,-0.0482f,0.0f,0.462f,-0.0764f,0.0f,0.515f,0.103f,0.0f,0.461f,0.103f,0.0f,0.461f,-0.0177f,0.0f,0.515f,0.103f,0.0f,0.461f,-0.0177f,0.0f,0.462f,-0.0764f,0.0f,0.515f,-0.101f,0.0f,0.515f,0.103f,0.0f,0.462f,-0.0764f,0.0f,0.284f,-0.02f,0.0f,0.228f,-0.017f,0.0f};
			return value;
		}
		private float[] getCoordinate_10_435_point_2()
		{
			float[] value = {0.271f,-0.0798f,0.0f,0.222f,-0.0492f,0.0f,0.23f,-0.104f,0.0f,0.194f,-0.0608f,0.0f,0.193f,-0.108f,0.0f,0.194f,-0.0608f,0.0f,0.155f,-0.102f,0.0f,0.166f,-0.0473f,0.0f,0.117f,-0.0714f,0.0f,0.166f,-0.0473f,0.0f,0.108f,-0.0357f,0.0f,0.166f,-0.0473f,0.0f,0.799f,0.0305f,0.0f,0.853f,0.0416f,0.0f,0.79f,0.0544f,0.0f,0.842f,0.081f,0.0f,0.79f,0.0544f,0.0f,0.811f,0.104f,0.0f,0.767f,0.0616f,0.0f,0.76f,0.104f,0.0f,0.743f,0.0507f,0.0f,0.728f,0.0788f,0.0f,0.734f,0.0228f,0.0f,0.728f,0.0788f,0.0f,0.681f,0.0301f,0.0f,0.734f,0.0228f,0.0f,0.673f,0.0532f,0.0f,0.728f,0.0788f,0.0f,0.673f,0.0532f,0.0f,0.696f,0.105f,0.0f,0.65f,0.0611f,0.0f,0.649f,0.105f,0.0f,0.626f,0.0506f,0.0f,0.615f,0.0803f,0.0f,0.617f,0.0224f,0.0f,0.615f,0.0803f,0.0f,0.563f,-0.101f,0.0f,0.617f,0.0224f,0.0f,0.563f,-0.101f,0.0f,0.615f,0.0803f,0.0f};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #150, 712 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_150_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_150_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_150_coordIndex_1()));
			return IndexedFaceSet_12_150_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #150, 273 total numbers made up of 91 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_150_point()
		{
			MFVec3f Coordinate_13_150_point = new MFVec3f(new float[] {0.0f,1.06f,0.0218f,0.0561f,1.07f,0.00726f,0.0851f,1.07f,-0.0115f,0.104f,1.07f,-0.0497f,0.0851f,1.07f,-0.0851f,0.032f,1.06f,-0.0985f,0.0873f,1.04f,0.0078f,0.033f,1.04f,0.0395f,0.123f,1.05f,-0.0405f,0.0609f,1.02f,-0.106f,0.0894f,0.996f,-0.106f,0.143f,1.0f,-0.0309f,0.117f,1.0f,0.0164f,0.0314f,0.999f,0.0502f,0.0314f,0.96f,-0.13f,0.156f,0.966f,-0.0405f,0.156f,0.968f,-0.00724f,0.0341f,0.954f,0.0513f,0.115f,0.96f,-0.0916f,0.121f,0.926f,0.0352f,0.0357f,0.92f,0.0497f,0.0314f,0.91f,-0.146f,0.0991f,0.91f,-0.131f,0.169f,0.883f,-0.0448f,0.169f,0.885f,-0.00939f,0.123f,0.873f,0.0384f,0.0926f,0.872f,0.047f,0.0325f,0.873f,0.0287f,0.0293f,0.866f,-0.142f,0.102f,0.869f,-0.131f,0.129f,0.868f,-0.103f,0.0314f,0.84f,-0.125f,0.101f,0.844f,-0.122f,0.133f,0.846f,-0.0878f,0.0653f,0.835f,0.0132f,0.0615f,0.824f,-0.111f,0.0985f,0.823f,-0.101f,0.132f,0.826f,-0.0448f,0.0609f,0.821f,-0.0158f,0.0599f,0.812f,-0.0545f,0.0f,1.08f,-0.0266f,-0.0561f,1.07f,0.00726f,-0.0851f,1.07f,-0.0115f,-0.104f,1.07f,-0.0497f,-0.0851f,1.07f,-0.0851f,-0.032f,1.06f,-0.0985f,-0.0873f,1.04f,0.0078f,-0.033f,1.04f,0.0395f,-0.123f,1.05f,-0.0405f,-0.0609f,1.02f,-0.106f,0.0f,1.02f,-0.108f,-0.0894f,0.996f,-0.106f,-0.143f,1.0f,-0.0309f,-0.144f,1.0f,-0.011f,-0.117f,1.0f,0.0164f,-0.0314f,0.999f,0.0502f,0.0f,0.961f,-0.123f,-0.0314f,0.96f,-0.13f,-0.156f,0.966f,-0.0405f,-0.156f,0.968f,-0.00724f,-0.0341f,0.954f,0.0513f,-0.115f,0.96f,-0.0916f,-0.121f,0.926f,0.0352f,-0.0357f,0.92f,0.0497f,0.0f,0.91f,-0.127f,-0.0314f,0.91f,-0.146f,-0.0991f,0.91f,-0.131f,-0.167f,0.911f,-0.0448f,-0.167f,0.912f,-0.00671f,0.0f,0.883f,-0.129f,-0.123f,0.873f,0.0384f,-0.0926f,0.872f,0.047f,-0.0325f,0.873f,0.0287f,-0.0293f,0.866f,-0.142f,-0.102f,0.869f,-0.131f,-0.129f,0.868f,-0.103f,-0.166f,0.863f,-0.0148f,0.0f,0.863f,-0.00456f,-0.166f,0.862f,-0.0459f,0.0f,0.858f,-0.1f,-0.0314f,0.84f,-0.125f,-0.101f,0.844f,-0.122f,-0.0653f,0.835f,0.0132f,0.0f,0.839f,-0.0217f,0.0f,0.835f,-0.0867f,-0.0615f,0.824f,-0.111f,-0.0985f,0.823f,-0.101f,-0.132f,0.826f,-0.0448f,-0.0609f,0.821f,-0.0158f,0.0f,0.831f,-0.0626f,-0.0599f,0.812f,-0.0545f});
			return Coordinate_13_150_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=16, element #170, 368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_16_170_coordIndex()
		{
			MFInt32 IndexedFaceSet_16_170_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_16_170_coordIndex_1()));
			return IndexedFaceSet_16_170_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=18, element #180, 392 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_18_180_coordIndex()
		{
			MFInt32 IndexedFaceSet_18_180_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_18_180_coordIndex_1()));
			return IndexedFaceSet_18_180_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=19, element #180, 153 total numbers made up of 51 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_19_180_point()
		{
			MFVec3f Coordinate_19_180_point = new MFVec3f(new float[] {0.0529f,0.0f,-0.0923f,0.0863f,0.0f,-0.0862f,0.0727f,0.0f,-0.0994f,0.0863f,0.0219f,-0.0862f,0.0727f,0.0219f,-0.0994f,0.1f,0.0f,-0.0594f,0.1f,0.0219f,-0.0594f,0.113f,0.0f,0.0645f,0.113f,0.0219f,0.0645f,0.112f,0.0f,0.117f,0.112f,0.0156f,0.117f,0.0701f,0.0f,0.146f,0.0701f,0.0156f,0.146f,0.0468f,0.0f,0.153f,0.0468f,0.0156f,0.153f,0.0215f,0.0f,0.146f,0.0215f,0.0156f,0.146f,0.0165f,0.0f,0.125f,0.0165f,0.0156f,0.125f,0.0211f,0.0f,0.0377f,0.0211f,0.0219f,0.0377f,0.0393f,0.0f,-0.0129f,0.0393f,0.0219f,-0.0129f,0.0433f,0.0f,-0.0534f,0.0433f,0.0219f,-0.0534f,0.0529f,0.0219f,-0.0923f,0.0305f,0.0253f,0.0938f,0.0505f,0.0253f,0.099f,0.0854f,0.0253f,0.0834f,0.102f,0.0253f,0.0707f,0.0568f,0.0573f,-0.0918f,0.0492f,0.0573f,-0.0497f,0.0435f,0.0573f,-0.0225f,0.0442f,0.0573f,0.0235f,0.0623f,0.0573f,0.0366f,0.0911f,0.0573f,0.0159f,0.0962f,0.0573f,-0.0121f,0.0911f,0.0573f,-0.0482f,0.0758f,0.0573f,-0.0899f,0.0676f,0.0573f,-0.0962f,0.0578f,0.0953f,-0.0896f,0.0489f,0.0953f,-0.0757f,0.0447f,0.0953f,-0.0432f,0.0451f,0.0953f,-0.0128f,0.0624f,0.0953f,-0.00466f,0.0857f,0.0953f,-0.0134f,0.0953f,0.0953f,-0.038f,0.0843f,0.0953f,-0.0803f,0.0761f,0.0953f,-0.0889f,0.0682f,0.0953f,-0.0929f,0.0675f,0.13f,-0.0608f});
			return Coordinate_19_180_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=16, element #206, 368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_16_206_coordIndex()
		{
			MFInt32 IndexedFaceSet_16_206_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_16_206_coordIndex_1()));
			return IndexedFaceSet_16_206_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=17, element #206, 144 total numbers made up of 48 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_17_206_point()
		{
			MFVec3f Coordinate_17_206_point = new MFVec3f(new float[] {-0.123f,0.363f,-0.0663f,-0.123f,0.363f,-0.04f,-0.118f,0.309f,-0.0685f,-0.118f,0.311f,-0.0411f,-0.117f,0.508f,-0.0169f,-0.107f,0.367f,-0.107f,-0.105f,0.539f,-0.0438f,-0.105f,0.31f,-0.108f,-0.104f,0.539f,-0.0223f,-0.101f,0.51f,-0.0798f,-0.0975f,0.54f,-0.0647f,-0.0948f,0.0897f,-0.0368f,-0.0916f,0.0779f,-0.0604f,-0.0905f,0.12f,-0.0647f,-0.0883f,0.532f,-0.00349f,-0.0883f,0.309f,-0.018f,-0.0878f,0.361f,-0.0126f,-0.0862f,0.506f,0.0158f,-0.0814f,0.55f,-0.0395f,-0.0765f,0.11f,-0.0169f,-0.0744f,0.13f,-0.0212f,-0.0738f,0.117f,-0.0814f,-0.0722f,0.546f,-0.0717f,-0.0717f,0.0854f,-0.0765f,-0.0706f,0.51f,-0.101f,-0.0609f,0.533f,-0.00833f,-0.0588f,0.365f,-0.122f,-0.0577f,0.544f,-0.0577f,-0.0572f,0.308f,-0.123f,-0.0561f,0.13f,-0.0245f,-0.0556f,0.506f,-0.000272f,-0.054f,0.0972f,-0.0175f,-0.0529f,0.536f,-0.0368f,-0.0529f,0.121f,-0.0873f,-0.0497f,0.358f,-0.0234f,-0.0486f,0.0999f,-0.0835f,-0.0475f,0.307f,-0.0282f,-0.0416f,0.124f,-0.0416f,-0.0406f,0.0918f,-0.0626f,-0.0406f,0.513f,-0.0744f,-0.0384f,0.0881f,-0.0363f,-0.0373f,0.121f,-0.0636f,-0.0368f,0.51f,-0.0357f,-0.0239f,0.358f,-0.0475f,-0.0228f,0.358f,-0.0926f,-0.0201f,0.309f,-0.0937f,-0.0191f,0.311f,-0.0508f,-0.0985f,0.125f,-0.0375f});
			return Coordinate_17_206_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=18, element #216, 392 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_18_216_coordIndex()
		{
			MFInt32 IndexedFaceSet_18_216_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_18_216_coordIndex_1()));
			return IndexedFaceSet_18_216_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=19, element #216, 153 total numbers made up of 51 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_19_216_point()
		{
			MFVec3f Coordinate_19_216_point = new MFVec3f(new float[] {-0.0727f,0.0f,-0.0994f,-0.1f,0.0f,-0.0594f,-0.0701f,0.0f,0.146f,-0.0468f,0.0f,0.153f,-0.0215f,0.0f,0.146f,-0.0433f,0.0f,-0.0534f,-0.0529f,0.0f,-0.0923f,-0.0727f,0.0219f,-0.0994f,-0.0863f,0.0219f,-0.0862f,-0.1f,0.0219f,-0.0594f,-0.108f,0.0219f,-0.00479f,-0.112f,0.0156f,0.117f,-0.0701f,0.0156f,0.146f,-0.0468f,0.0156f,0.153f,-0.0215f,0.0156f,0.146f,-0.0165f,0.017f,0.0777f,-0.0433f,0.0219f,-0.0534f,-0.0529f,0.0219f,-0.0923f,-0.0445f,0.0273f,-0.0189f,-0.0265f,0.0253f,0.0549f,-0.0305f,0.0253f,0.0938f,-0.069f,0.0253f,0.0938f,-0.102f,0.0253f,0.0707f,-0.0568f,0.0573f,-0.0918f,-0.0492f,0.0573f,-0.0497f,-0.0424f,0.0573f,-0.00142f,-0.0478f,0.0573f,0.0341f,-0.0623f,0.0573f,0.0366f,-0.0864f,0.0573f,0.0245f,-0.0962f,0.0573f,-0.0121f,-0.0845f,0.0573f,-0.0764f,-0.0758f,0.0573f,-0.0899f,-0.0676f,0.0573f,-0.0962f,-0.0578f,0.0953f,-0.0896f,-0.0489f,0.0953f,-0.0757f,-0.0459f,0.0953f,-0.0615f,-0.0435f,0.0953f,-0.0292f,-0.0485f,0.0953f,-0.00582f,-0.0624f,0.0953f,-0.00466f,-0.0857f,0.0953f,-0.0134f,-0.0953f,0.0953f,-0.038f,-0.0843f,0.0953f,-0.0803f,-0.0761f,0.0953f,-0.0889f,-0.0682f,0.0953f,-0.0929f,-0.0675f,0.13f,-0.0608f,-0.0165f,0.0f,0.125f,-0.112f,0.0f,0.117f,-0.0165f,0.0f,0.0777f,-0.0393f,0.0f,-0.0129f,-0.108f,0.0f,-0.00479f,-0.0863f,0.0f,-0.0862f});
			return Coordinate_19_216_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #235, 1234 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_235_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_235_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_235_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_12_235_coordIndex_2()));
			return IndexedFaceSet_12_235_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #235, 534 total numbers made up of 178 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_235_point()
		{
			MFVec3f Coordinate_13_235_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_13_235_point_1()))
				.append(new MFVec3f(getCoordinate_13_235_point_2()));
			return Coordinate_13_235_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=19, element #268, 368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_19_268_coordIndex()
		{
			MFInt32 IndexedFaceSet_19_268_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_19_268_coordIndex_1()));
			return IndexedFaceSet_19_268_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=19, element #307, 368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_19_307_coordIndex()
		{
			MFInt32 IndexedFaceSet_19_307_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_19_307_coordIndex_1()));
			return IndexedFaceSet_19_307_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='headIFS' colorIndex field, scene-graph level=16, element #334, 1640 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getheadIFS_16_334_colorIndex()
		{
			MFInt32 headIFS_16_334_colorIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getheadIFS_16_334_colorIndex_1()))
				.append(new MFInt32(getheadIFS_16_334_colorIndex_2()));
			return headIFS_16_334_colorIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='headIFS' coordIndex field, scene-graph level=16, element #334, 1640 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getheadIFS_16_334_coordIndex()
		{
			MFInt32 headIFS_16_334_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getheadIFS_16_334_coordIndex_1()))
				.append(new MFInt32(getheadIFS_16_334_coordIndex_2()));
			return headIFS_16_334_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='Face' point field, scene-graph level=17, element #334, 774 total numbers made up of 258 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getFace_17_334_point()
		{
			MFVec3f Face_17_334_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getFace_17_334_point_1()))
				.append(new MFVec3f(getFace_17_334_point_2()))
				.append(new MFVec3f(getFace_17_334_point_3()));
			return Face_17_334_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #396, 448 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_396_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_396_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_396_coordIndex_1()));
			return IndexedFaceSet_9_396_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #396, 531 total numbers made up of 177 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_396_point()
		{
			MFVec3f Coordinate_10_396_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_10_396_point_1()))
				.append(new MFVec3f(getCoordinate_10_396_point_2()));
			return Coordinate_10_396_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #422, 273 total numbers made up of 91 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_422_point()
		{
			MFVec3f Coordinate_10_422_point = new MFVec3f(new float[] {-0.829f,-0.101f,0.0f,-0.829f,0.175f,0.0f,-0.662f,0.172f,0.0f,-0.622f,0.148f,0.0f,-0.607f,0.103f,0.0f,-0.62f,0.0501f,0.0f,-0.648f,0.0316f,0.0f,-0.615f,-0.0063f,0.0f,-0.611f,-0.0764f,0.0f,-0.601f,-0.101f,0.0f,-0.664f,-0.101f,0.0f,-0.671f,-0.0373f,0.0f,-0.68f,-0.00372f,0.0f,-0.712f,0.00648f,0.0f,-0.772f,0.00648f,0.0f,-0.772f,-0.101f,0.0f,-0.772f,0.0546f,0.0f,-0.772f,0.127f,0.0f,-0.703f,0.127f,0.0f,-0.673f,0.118f,0.0f,-0.663f,0.091f,0.0f,-0.674f,0.063f,0.0f,-0.705f,0.0546f,0.0f,-0.379f,0.103f,0.0f,-0.379f,-0.101f,0.0f,-0.432f,-0.101f,0.0f,-0.432f,-0.0764f,0.0f,-0.466f,-0.101f,0.0f,-0.518f,-0.102f,0.0f,-0.555f,-0.072f,0.0f,-0.56f,-0.0357f,0.0f,-0.56f,0.103f,0.0f,-0.506f,0.103f,0.0f,-0.506f,-0.0201f,0.0f,-0.5f,-0.0491f,0.0f,-0.472f,-0.0604f,0.0f,-0.443f,-0.0482f,0.0f,-0.433f,-0.0177f,0.0f,-0.433f,0.103f,0.0f,-0.331f,-0.101f,0.0f,-0.331f,0.103f,0.0f,-0.278f,0.103f,0.0f,-0.278f,0.0787f,0.0f,-0.244f,0.104f,0.0f,-0.192f,0.105f,0.0f,-0.154f,0.0743f,0.0f,-0.149f,0.038f,0.0f,-0.149f,-0.101f,0.0f,-0.203f,-0.101f,0.0f,-0.203f,0.0224f,0.0f,-0.209f,0.0514f,0.0f,-0.238f,0.0627f,0.0f,-0.266f,0.0505f,0.0f,-0.277f,0.02f,0.0f,-0.277f,-0.101f,0.0f,-0.506f,-0.0201f,0.0f,-0.56f,-0.0357f,0.0f,-0.5f,-0.0491f,0.0f,-0.555f,-0.072f,0.0f,-0.5f,-0.0491f,0.0f,-0.518f,-0.102f,0.0f,-0.472f,-0.0604f,0.0f,-0.466f,-0.101f,0.0f,-0.443f,-0.0482f,0.0f,-0.432f,-0.0764f,0.0f,-0.433f,-0.0177f,0.0f,-0.432f,-0.0764f,0.0f,-0.379f,0.103f,0.0f,-0.433f,-0.0177f,0.0f,-0.379f,0.103f,0.0f,-0.432f,-0.0764f,0.0f,-0.379f,-0.101f,0.0f,-0.432f,-0.0764f,0.0f,-0.203f,0.0224f,0.0f,-0.149f,0.038f,0.0f,-0.209f,0.0514f,0.0f,-0.154f,0.0743f,0.0f,-0.209f,0.0514f,0.0f,-0.192f,0.105f,0.0f,-0.238f,0.0627f,0.0f,-0.244f,0.104f,0.0f,-0.266f,0.0505f,0.0f,-0.278f,0.0787f,0.0f,-0.278f,0.0787f,0.0f,-0.331f,0.103f,0.0f,-0.277f,0.02f,0.0f,-0.331f,-0.101f,0.0f,-0.277f,0.02f,0.0f,-0.278f,0.0787f,0.0f,-0.277f,0.02f,0.0f,-0.331f,0.103f,0.0f});
			return Coordinate_10_422_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #435, 420 total numbers made up of 140 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_435_point()
		{
			MFVec3f Coordinate_10_435_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_10_435_point_1()))
				.append(new MFVec3f(getCoordinate_10_435_point_2()));
			return Coordinate_10_435_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NancyPrototypes model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new NancyPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"NancyPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"NancyPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
			System.out.println(validationResults);
		}
    }
}
