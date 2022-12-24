package net.x3djsonld.data;

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

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces. </p>
 <p> Related links: NancyPrototypes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.NancyPrototypes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d">NancyPrototypes.x3d</a> </td>
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
			<td> 4 July 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyNativeTags.x3d">NancyNativeTags.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/../license.html">../license.html</a> </td>
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
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("4 July 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("NancyNativeTags.x3d"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("Displacer").setName("Displacer").setAppinfo("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("coordIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("displacements").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"null body node"}))))
    .addChild(new ProtoDeclare("Humanoid").setName("Humanoid").setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")
      .setProtoInterface(new ProtoInterface()
        .addComments(" HAnim v1.1 field definitions ")
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1.1").setAppinfo("legal values: 1.1 or 2.0"))
        .addField(new field().setName("humanoidVersion").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0"))
        .addField(new field().setName("info").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
        .addField(new field().setName("humanoidBody").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton").setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid"))
        .addField(new field().setName("skeleton").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"))
        .addField(new field().setName("joints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Joint nodes"))
        .addField(new field().setName("segments").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Segment nodes"))
        .addField(new field().setName("sites").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Site nodes"))
        .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Viewpoint nodes"))
        .addField(new field().setName("skinCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0")
          .addComments(" NULL node "))
        .addField(new field().setName("skinNormal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0")
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
    .addChild(new ProtoDeclare("Joint").setName("Joint").setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("ulimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("llimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("limitOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("skinCoordIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("skinCoordWeight").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("stiffness").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {0.0,0.0,0.0}))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
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
    .addChild(new ProtoDeclare("Segment").setName("Segment").setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("mass").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("centerOfMass").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("momentsOfInertia").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
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
    .addChild(new ProtoDeclare("Site").setName("Site").setAppinfo("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Site.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
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
    .addChild(new ProtoInstance("Humanoid", "Humanoid").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("nancy"))
      .addFieldValue(new fieldValue().setName("version").setValue("1.1"))
      .addFieldValue(new fieldValue().setName("info").setValue(new String[] {"humanoidVersion=Nancy V1.2b","authorName=Cindy Ballreich","authorEmail=cindy@ballreich.net","copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.","creationDate=Tue Dec 30 08:30:08 PST 1997","usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."}))
      .addFieldValue(new fieldValue().setName("humanoidBody")
        .addChild(new ProtoInstance("Joint", "hanim_humanoid_root").setContainerField("children")
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"))
          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.00405,0.855,-0.000113)))
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new ProtoInstance("Joint", "hanim_sacroiliac").setContainerField("children")
              .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"))
              .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0,1.01,-0.0204)))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("Segment", "hanim_pelvis").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("pelvis"))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material("Pants_Color").setAmbientIntensity(0.25).setDiffuseColor(0.054,0.233,0.39)))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.14).setCoordIndex(getIndexedFaceSet_12_150_coordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_150_point()))))))
                .addChild(new ProtoInstance("Joint", "hanim_l_hip").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hip"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.122,0.888271,-0.0693267)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_l_thigh").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Pants_Color")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.32).setCoordIndex(new int[] {0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_l_knee").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0738,0.517,-0.0284)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_l_calf").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_calf"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_16_170_coordIndex())
                                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835})))))))
                        .addChild(new ProtoInstance("Joint", "hanim_l_ankle").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_ankle"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0645,0.0719,-0.048)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_l_hindfoot").setContainerField("children")
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material("Shoe_Color").setAmbientIntensity(0.25)))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_18_180_coordIndex())
                                    .setCoord(new Coordinate().setPoint(getCoordinate_19_180_point()))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_r_hip").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hip"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.11,0.892362,-0.0732533)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_r_thigh").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Pants_Color")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.61).setCoordIndex(new int[] {5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_r_knee").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.0699,0.51,-0.0166)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_r_calf").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_calf"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_16_206_coordIndex())
                                .setCoord(new Coordinate().setPoint(getCoordinate_17_206_point()))))))
                        .addChild(new ProtoInstance("Joint", "hanim_r_ankle").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_ankle"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.064,0.0753,-0.0412)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_r_hindfoot").setContainerField("children")
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("Shoe_Color")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_18_216_coordIndex())
                                    .setCoord(new Coordinate().setPoint(getCoordinate_19_216_point()))))))))))))))
            .addChild(new ProtoInstance("Joint", "hanim_vl1").setContainerField("children")
              .addFieldValue(new fieldValue().setName("name").setValue("vl1"))
              .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.00405,1.07,-0.0275)))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("Segment", "hanim_c7").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l1"))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material("Shirt_Color").setAmbientIntensity(0.25).setDiffuseColor(0.6,0.0745,0.1137))
                        .setTexture(new ImageTexture("small_logo_Tex").setUrl(new String[] {"small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"})))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.59).setCoordIndex(getIndexedFaceSet_12_235_coordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_235_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(/*0.invocation*/)))))))
                .addChild(new ProtoInstance("Joint", "hanim_l_shoulder").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.167,1.36,-0.0518)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_l_upperarm").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Transform("l_upperarm_adjust").setCenter(0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.119).setTranslation(0.0,0.0004203,-0.01665)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material("Skin_Color").setAmbientIntensity(0.25).setDiffuseColor(0.749,0.601,0.462)))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(1.65).setCoordIndex(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1})
                              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}))))))))
                    .addChild(new ProtoInstance("Joint", "hanim_l_elbow").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.196,1.07,-0.0518)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_l_forearm").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Transform("l_forearm_adjust").setCenter(0.198,0.961,-0.0405).setRotation(-1.0,0.0,0.0,0.1).setTranslation(0.0,0.003724,-0.0236)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.75).setCoordIndex(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1})
                                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}))))))))
                        .addChild(new ProtoInstance("Joint", "hanim_l_wrist").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("l_wrist"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.213,0.811,-0.0338)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_l_hand").setContainerField("children")
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hand"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Transform("l_hand_adjust").setCenter(0.213,0.811,-0.0338).setRotation(-0.06361,-0.9967,0.04988,1.333).setTranslation(0.0,0.005142,-0.008662)
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("Skin_Color")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.48).setCoordIndex(getIndexedFaceSet_19_268_coordIndex())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}))))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_r_shoulder").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.167,1.36,-0.0458)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_r_upperarm").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Transform("r_upperarm_adjust").setCenter(-0.182,1.22,-0.047).setRotation(1.0,0.0,0.0,0.0836).setTranslation(0.0,0.000589,-0.01169)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("Skin_Color")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(1.53).setCoordIndex(new int[] {14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1})
                              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}))))))))
                    .addChild(new ProtoInstance("Joint", "hanim_r_elbow").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.192,1.07,-0.0498)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_r_forearm").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Transform("r_forearm_adjust").setCenter(-0.198,0.961,-0.0397).setRotation(-1.0,0.0,0.0,0.1254).setTranslation(0.0,0.003466,-0.01065)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.73).setCoordIndex(new int[] {20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1})
                                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}))))))))
                        .addChild(new ProtoInstance("Joint", "hanim_r_wrist").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("r_wrist"))
                          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(-0.217,0.811,-0.0338)))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new ProtoInstance("Segment", "hanim_r_hand").setContainerField("children")
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hand"))
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(new Transform("r_hand_adjust").setCenter(-0.217,0.811,-0.0338).setRotation(-0.09024,0.994,-0.0624,1.216)
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("Skin_Color")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_19_307_coordIndex())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}))))))))))))))
                .addChild(new ProtoInstance("Joint", "hanim_vc4").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("vc4"))
                  .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0,1.43,-0.0458)))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new ProtoInstance("Segment", "hanim_c4").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("c4"))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("Skin_Color")))
                          .setGeometry(new IndexedFaceSet("neck").setDEF("neck").setCreaseAngle(1.91).setCoordIndex(new int[] {6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1})))))))
                    .addChild(new ProtoInstance("Joint", "hanim_skullbase").setContainerField("children")
                      .addFieldValue(new fieldValue().setName("name").setValue("skullbase"))
                      .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0,1.54,-0.0409)))
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(new ProtoInstance("Segment", "hanim_skull").setContainerField("children")
                          .addFieldValue(new fieldValue().setName("name").setValue("skull"))
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Skin_Color")))
                              .setGeometry(new IndexedFaceSet("headIFS").setDEF("headIFS").setCreaseAngle(0.7854).setColorIndex(getheadIFS_16_334_colorIndex()).setCoordIndex(getheadIFS_16_334_coordIndex())
                                .setCoord(new Coordinate("Face").setPoint(getFace_17_334_point()))
                                .setColor(new Color().setColor(new MFColor(new double[] {0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902})))))))))))))))
        .addChild(new Group()))
      .addFieldValue(new fieldValue().setName("joints")
        .addChild(new ProtoInstance().setUSE("hanim_humanoid_root").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_sacroiliac").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hip").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_knee").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_ankle").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hip").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_knee").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_ankle").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_vl1").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_shoulder").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_elbow").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_wrist").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_shoulder").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_elbow").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_wrist").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_vc4").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_skullbase").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("segments")
        .addChild(new ProtoInstance().setUSE("hanim_pelvis").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_thigh").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_calf").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hindfoot").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_thigh").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_calf").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hindfoot").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_c7").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_upperarm").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_forearm").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_l_hand").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_upperarm").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_forearm").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_r_hand").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_c4").setContainerField("children"))
        .addChild(new ProtoInstance().setUSE("hanim_skull").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("viewpoints")
        .addChild(new Viewpoint("InclinedView").setDescription("Inclined View").setOrientation(-0.113,0.993,0.0347,0.671).setPosition(1.62,1.05,2.06))
        .addChild(new Viewpoint("FrontView").setDescription("Front View").setPosition(0.0,0.854,2.57665))
        .addChild(new Viewpoint("SideView").setDescription("Side View").setOrientation(0.0,1.0,0.0,1.57079).setPosition(2.5929,0.854,0.0))
        .addChild(new Viewpoint("TopView").setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57079).setPosition(0.0,3.4495,0.0))))
    .addChild(new WorldInfo().setInfo(new String[] {"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."}).setTitle("Nancy - an HAnim compliant avatar by 3Name3D"))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.15,1.53,0.75}).setSpeed(0.5).setType("\"EXAMINE\""))
    .addChild(new Group("Interface")
      .addChild(new Transform()
        .addChild(new ProximitySensor("HudProx").setCenter(0.0,20.0,0.0).setSize(500.0,100.0,500.0)))
      .addChild(new Collision("HUD").setEnabled(false)
        .addChild(new Transform("HudXform")
          .addChild(new Transform().setScale(0.012,0.012,0.012).setTranslation(0.01107,-0.025,-0.08)
            .addChild(new Transform("Stand_Text")
              .addChild(new TouchSensor("Stand_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Stand")
                .setGeometry(new IndexedFaceSet().setCoordIndex(getIndexedFaceSet_9_396_coordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_396_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material("text_color").setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.819,0.521,0.169))))
              .addChild(new Transform().setScale(84.89,77.52,77.52).setTranslation(0.04092,1.843,3.826)
                .addChild(new Shape("Stand_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material("Clear").setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setTransparency(1.0))))))
            .addChild(new Transform("Walk_Text")
              .addChild(new TouchSensor("Walk_Touch").setDescription("click for behavior"))
              .addChild(new Shape("WALK")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.88,-0.101,0.0,-1.96,0.175,0.0,-1.91,0.175,0.0,-1.86,-0.0195,0.0,-1.82,0.175,0.0,-1.76,0.175,0.0,-1.72,-0.0195,0.0,-1.67,0.175,0.0,-1.61,0.175,0.0,-1.69,-0.101,0.0,-1.75,-0.101,0.0,-1.79,0.111,0.0,-1.83,-0.101,0.0,-1.38,-0.101,0.0,-1.38,0.175,0.0,-1.32,0.175,0.0,-1.32,-0.101,0.0,-1.27,-0.101,0.0,-1.27,0.175,0.0,-1.22,0.175,0.0,-1.22,0.0304,0.0,-1.16,0.103,0.0,-1.09,0.103,0.0,-1.16,0.0272,0.0,-1.09,-0.101,0.0,-1.15,-0.101,0.0,-1.2,-0.0141,0.0,-1.22,-0.0363,0.0,-1.22,-0.101,0.0,-1.48,-0.0754,0.0,-1.48,-0.0373,0.0,-1.51,-0.0637,0.0,-1.51,-0.103,0.0,-1.47,-0.101,0.0,-1.42,-0.101,0.0,-1.43,-0.0763,0.0,-1.43,0.0526,0.0,-1.48,-7.98E-4,0.0,-1.48,0.0446,0.0,-1.5,0.0275,0.0,-1.55,0.0201,0.0,-1.54,-0.0195,0.0,-1.59,1.77E-4,0.0,-1.61,-0.0431,0.0,-1.55,-0.0416,0.0,-1.59,-0.0865,0.0,-1.54,-0.0624,0.0,-1.56,-0.106,0.0,-1.44,0.0849,0.0,-1.49,0.0614,0.0,-1.48,0.107,0.0,-1.51,0.0675,0.0,-1.52,0.11,0.0,-1.55,0.105,0.0,-1.54,0.0573,0.0,-1.59,0.0765,0.0,-1.6,0.039,0.0,-1.55,0.039,0.0}))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(81.3,81.3,81.31).setTranslation(-0.0414,1.941,4.015)
                .addChild(new Shape("Walk_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,3,0,-1,3,1,2,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear"))))))
            .addChild(new Transform("Run_Text")
              .addChild(new TouchSensor("Run_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Run")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_422_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(82.47,82.47,82.48).setTranslation(-0.01579,1.968,4.074)
                .addChild(new Shape("Run_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear"))))))
            .addChild(new Transform("Jump_Text")
              .addChild(new TouchSensor("Jump_Touch").setDescription("click for behavior"))
              .addChild(new Shape("Jump")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_435_point())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("text_color"))))
              .addChild(new Transform().setScale(83.79,83.79,83.79).setTranslation(-0.008979,1.99,4.14)
                .addChild(new Shape("Jump_Back")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,2,3,-1,2,0,1,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05}))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))))))))
      .addChild(new Transform("Floor").setScale(1.0,0.0125,1.0).setTranslation(0.0,-0.0125,0.0)
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setMaterial(new Material())))))
    .addChild(new Group("Animations")
      .addChild(new Group("Stand_Animation")
        .addChild(new OrientationInterpolator("r_ankle_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_knee_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_hip_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_ankle_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_knee_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_hip_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("lower_body_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_wrist_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_elbow_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_shoulder_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_wrist_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_elbow_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_shoulder_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("head_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("neck_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("upper_body_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("whole_body_RotationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new PositionInterpolator("whole_body_TranslationInterpolator_Stand").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
        .addChild(new TimeSensor("Stand_Time").setCycleInterval(0.009999999776482582)))
      .addChild(new Group("Walk_Animation")
        .addChild(new OrientationInterpolator("r_ankle_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,0.0,0.0,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_knee_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573})))
        .addChild(new OrientationInterpolator("r_hip_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481})))
        .addChild(new OrientationInterpolator("l_ankle_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714})))
        .addChild(new OrientationInterpolator("l_knee_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226})))
        .addChild(new OrientationInterpolator("l_hip_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865})))
        .addChild(new OrientationInterpolator("lower_body_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056})))
        .addChild(new OrientationInterpolator("r_wrist_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346})))
        .addChild(new OrientationInterpolator("r_elbow_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.411508,-1.0,0.0,0.0,0.0925011,-1.0,0.0,0.0,0.572568,-1.0,0.0,0.0,0.411508})))
        .addChild(new OrientationInterpolator("r_shoulder_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.09346,1.0,0.0,0.0,0.3197,-1.0,0.0,0.0,0.1564,-1.0,0.0,0.0,0.09346})))
        .addChild(new OrientationInterpolator("l_wrist_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.0,-1.0,0.0,0.461076})))
        .addChild(new OrientationInterpolator("l_elbow_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.0659878,-1.0,0.0,0.0,0.488383,-1.0,0.0,0.0,0.0177536,-1.0,0.0,0.0,0.0659878})))
        .addChild(new OrientationInterpolator("l_shoulder_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.1189,-1.0,0.0,0.0,0.1861,1.0,0.0,0.0,0.3357,1.0,0.0,0.0,0.1189})))
        .addChild(new OrientationInterpolator("head_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642})))
        .addChild(new OrientationInterpolator("neck_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("upper_body_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,0.2083,0.375,0.75,0.8333,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826})))
        .addChild(new OrientationInterpolator("whole_body_RotationInterpolator_BasicWalk").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new PositionInterpolator("whole_body_TranslationInterpolator_BasicWalk").setKey(new double[] {0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0})))
        .addChild(new TimeSensor("Walk_Time").setCycleInterval(2.0).setLoop(true).setStartTime(-1.0)))
      .addChild(new Group("Run_Animation")
        .addChild(new OrientationInterpolator("r_ankle_RotationInterpolator_Run").setKey(new double[] {0.0,0.4909,0.7091,0.8,0.8182,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.09676,-1.0,0.0,0.0,0.3274,-1.0,0.0,0.0,0.3278,1.0,0.0,0.0,0.2323})))
        .addChild(new OrientationInterpolator("r_knee_RotationInterpolator_Run").setKey(new double[] {0.0,0.03636,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.7004,1.0,0.0,0.0,1.011,1.0,0.0,0.0,1.892,1.0,0.0,0.0,1.188,1.0,0.0,0.0,0.3964,1.0,0.0,0.0,0.7004})))
        .addChild(new OrientationInterpolator("r_hip_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.9999,0.00293,-0.00989,0.402,-1.0,0.004977,-0.00497,0.5943,-1.0,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402})))
        .addChild(new OrientationInterpolator("l_ankle_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.3091,0.4909,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.03543,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03543})))
        .addChild(new OrientationInterpolator("l_knee_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,1.108,1.0,0.0,0.0,0.4265,1.0,0.0,0.0,0.7052,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.108})))
        .addChild(new OrientationInterpolator("l_hip_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212})))
        .addChild(new OrientationInterpolator("lower_body_RotationInterpolator_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687})))
        .addChild(new OrientationInterpolator("r_wrist_RotationInterpolator_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273})))
        .addChild(new OrientationInterpolator("r_elbow_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222})))
        .addChild(new OrientationInterpolator("r_shoulder_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {-1.0,0.0,0.0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1.0,0.0,0.0,0.6979})))
        .addChild(new OrientationInterpolator("l_wrist_RotationInterpolator_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409})))
        .addChild(new OrientationInterpolator("l_elbow_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689})))
        .addChild(new OrientationInterpolator("l_shoulder_RotationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.4909,0.7455,1.0}).setKeyValue(new MFRotation(new double[] {0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-2.052E-4,0.1073,0.4975,0.9907,-0.07264,0.115,1.135})))
        .addChild(new OrientationInterpolator("head_RotationInterpolator_Run").setKey(new double[] {0.0,0.4909,1.0}).setKeyValue(new MFRotation(new double[] {0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508})))
        .addChild(new OrientationInterpolator("neck_RotationInterpolator_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("upper_body_RotationInterpolator_Run").setKey(new double[] {0.0,0.2545,0.4909,0.7636,1.0}).setKeyValue(new MFRotation(new double[] {0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712})))
        .addChild(new OrientationInterpolator("whole_body_RotationInterpolator_Run").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new PositionInterpolator("whole_body_TranslationInterpolator_Run").setKey(new double[] {0.0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,-0.0351,0.0,0.0,-0.0351,0.0,0.0,-0.04087,0.0,0.0,-0.04886,0.0,0.0,-0.04051,0.0,0.0,-0.03666,0.0,0.0,-0.03666,0.0,0.0,-0.0351,0.0})))
        .addChild(new TimeSensor("Run_Time").setLoop(true).setStartTime(-1.0)))
      .addChild(new Group("Jump_Animation")
        .addChild(new OrientationInterpolator("r_ankle_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,0.3001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087,-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_knee_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.005,1.0,0.0,0.0,2.005,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_hip_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.647,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_ankle_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108,-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_knee_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_hip_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("lower_body_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_wrist_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_elbow_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("r_shoulder_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_wrist_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-5.0618E-4,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_elbow_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("l_shoulder_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.64,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,4.113E-4,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("head_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("neck_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1942,-1.0,0.0,0.0,0.1942,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.2284,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("upper_body_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.76,0.88,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.038,1.0,0.0,0.0,1.038,-1.0,0.0,0.0,0.1057,1.0,0.0,0.0,0.2171,1.0,0.0,0.0,0.3465,0.0,0.0,1.0,0.0})))
        .addChild(new OrientationInterpolator("whole_body_RotationInterpolator_Jump").setKey(new double[] {0.0,0.28,0.32,0.48,0.64,0.76,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})))
        .addChild(new PositionInterpolator("whole_body_TranslationInterpolator_Jump").setKey(new double[] {0.0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-3.345E-4,-0.1049,-0.05353,-5.712E-4,-0.1892,-0.06561,-8.233E-4,-0.286,-0.06276,-9.591E-4,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-8.616E-4,-0.13,-0.06358,-5.128E-4,-0.03123,-0.05488,4.779E-4,0.053,0.02732,1.728E-4,0.4148,0.006873,0.0,0.03045,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,1.365E-4,-0.1037,-0.005059,1.279E-4,-0.07198,-0.007596,1.41E-4,-0.01626,-0.004935,0.0,0.0,0.0})))
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
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("lower_body_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("head_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("neck_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("upper_body_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("whole_body_RotationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Stand_Time").setFromField("fraction_changed").setToNode("whole_body_TranslationInterpolator_Stand").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_body_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("head_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neck_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_body_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_RotationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_TranslationInterpolator_Stand").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("lower_body_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("head_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("neck_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("upper_body_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("whole_body_RotationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Walk_Time").setFromField("fraction_changed").setToNode("whole_body_TranslationInterpolator_BasicWalk").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_body_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("head_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neck_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_body_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_RotationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_TranslationInterpolator_BasicWalk").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("lower_body_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("head_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("neck_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("upper_body_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("whole_body_RotationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Run_Time").setFromField("fraction_changed").setToNode("whole_body_TranslationInterpolator_Run").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("head_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neck_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_TranslationInterpolator_Run").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("lower_body_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("head_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("neck_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("upper_body_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("whole_body_RotationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Jump_Time").setFromField("fraction_changed").setToNode("whole_body_TranslationInterpolator_Jump").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("lower_body_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("head_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("neck_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("upper_body_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_RotationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("whole_body_TranslationInterpolator_Jump").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation")));
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


		/** Define subarrays using type double[] */
		private double[] getCoordinate_13_235_point_1()
		{
			double[] value = {0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185};
			return value;
		}
		private double[] getCoordinate_13_235_point_2()
		{
			double[] value = {0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168};
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


		/** Define subarrays using type double[] */
		private double[] getFace_17_334_point_1()
		{
			double[] value = {0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266};
			return value;
		}
		private double[] getFace_17_334_point_2()
		{
			double[] value = {0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278};
			return value;
		}
		private double[] getFace_17_334_point_3()
		{
			double[] value = {-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_396_coordIndex_1()
		{
			int[] value = {1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_10_396_point_1()
		{
			double[] value = {-3.21,-0.0154,0.0,-3.15,-0.0154,0.0,-3.14,-0.0467,0.0,-3.1,-0.0601,0.0,-3.05,-0.051,0.0,-3.04,-0.0254,0.0,-3.05,-0.00248,0.0,-3.1,0.0122,0.0,-3.16,0.03,0.0,-3.2,0.0684,0.0,-3.2,0.133,0.0,-3.16,0.17,0.0,-3.1,0.182,0.0,-3.04,0.171,0.0,-3.01,0.136,0.0,-3.0,0.095,0.0,-3.05,0.095,0.0,-3.06,0.125,0.0,-3.1,0.136,0.0,-3.14,0.126,0.0,-3.15,0.103,0.0,-3.14,0.0815,0.0,-3.1,0.0689,0.0,-3.04,0.0512,0.0,-3.0,0.0249,0.0,-2.99,-0.0195,0.0,-3.0,-0.0708,0.0,-3.05,-0.104,0.0,-3.1,-0.108,0.0,-3.16,-0.0947,0.0,-3.2,-0.0586,0.0,-2.86,-0.102,0.0,-2.9,-0.102,0.0,-2.94,-0.0832,0.0,-2.94,-0.0457,0.0,-2.94,0.0645,0.0,-2.97,0.0645,0.0,-2.97,0.103,0.0,-2.94,0.103,0.0,-2.94,0.158,0.0,-2.89,0.158,0.0,-2.89,0.103,0.0,-2.86,0.103,0.0,-2.86,0.0645,0.0,-2.89,0.0645,0.0,-2.89,-0.0483,0.0,-2.88,-0.0608,0.0,-2.86,-0.0612,0.0,-2.71,-7.98E-4,0.0,-2.71,-0.0373,0.0,-2.74,-0.0637,0.0,-2.77,-0.0624,0.0,-2.78,-0.0416,0.0,-2.77,-0.0195,0.0,-2.71,-0.0754,0.0,-2.74,-0.103,0.0,-2.79,-0.106,0.0,-2.82,-0.0865,0.0,-2.84,-0.0431,0.0,-2.82,1.77E-4,0.0,-2.78,0.0201,0.0,-2.73,0.0275,0.0,-2.71,0.0446,0.0,-2.72,0.0614,0.0,-2.74,0.0675,0.0,-2.77,0.0573,0.0,-2.78,0.039,0.0,-2.83,0.039,0.0,-2.82,0.0765,0.0,-2.78,0.105,0.0,-2.74,0.11,0.0,-2.71,0.107,0.0,-2.67,0.0849,0.0,-2.66,0.0526,0.0,-2.66,-0.0763,0.0,-2.65,-0.101,0.0,-2.7,-0.101,0.0,-2.61,-0.101,0.0,-2.61,0.103,0.0,-2.56,0.103,0.0,-2.56,0.0787,0.0,-2.52,0.104,0.0,-2.47,0.105,0.0,-2.43,0.0743,0.0,-2.43,0.038,0.0,-2.43,-0.101,0.0,-2.48,-0.101,0.0,-2.48,0.0224,0.0,-2.49,0.0514,0.0,-2.52,0.0627,0.0,-2.54,0.0505,0.0,-2.55,0.02,0.0,-2.55,-0.101,0.0,-2.33,0.0279,0.0,-2.31,0.0587,0.0,-2.27,0.0589,0.0,-2.25,0.0281,0.0,-2.25,-0.0232,0.0,-2.27,-0.0563,0.0,-2.31,-0.057,0.0};
			return value;
		}
		private double[] getCoordinate_10_396_point_2()
		{
			double[] value = {-2.33,-0.0245,0.0,-2.19,0.175,0.0,-2.19,-0.101,0.0,-2.25,-0.101,0.0,-2.25,-0.073,0.0,-2.26,-0.0913,0.0,-2.31,-0.108,0.0,-2.35,-0.0915,0.0,-2.38,-0.0424,0.0,-2.39,0.0243,0.0,-2.37,0.0809,0.0,-2.32,0.108,0.0,-2.28,0.106,0.0,-2.25,0.0776,0.0,-2.25,0.175,0.0,-2.48,0.0224,0.0,-2.43,0.038,0.0,-2.49,0.0514,0.0,-2.43,0.0743,0.0,-2.49,0.0514,0.0,-2.47,0.105,0.0,-2.52,0.0627,0.0,-2.52,0.104,0.0,-2.54,0.0505,0.0,-2.56,0.0787,0.0,-2.55,0.02,0.0,-2.56,0.0787,0.0,-2.61,-0.101,0.0,-2.55,0.02,0.0,-2.61,-0.101,0.0,-2.56,0.0787,0.0,-2.89,0.103,0.0,-2.94,0.103,0.0,-2.89,0.0645,0.0,-2.89,0.103,0.0,-2.94,0.103,0.0,-2.94,0.0645,0.0,-2.89,0.0645,0.0,-2.94,0.0645,0.0,-2.89,-0.0483,0.0,-2.94,-0.0457,0.0,-2.89,-0.0483,0.0,-2.94,-0.0832,0.0,-2.88,-0.0608,0.0,-2.9,-0.102,0.0,-3.06,0.125,0.0,-3.01,0.136,0.0,-3.06,0.125,0.0,-3.04,0.171,0.0,-3.1,0.136,0.0,-3.1,0.182,0.0,-3.14,0.126,0.0,-3.16,0.17,0.0,-3.15,0.103,0.0,-3.2,0.133,0.0,-3.14,0.0815,0.0,-3.2,0.0684,0.0,-3.14,0.0815,0.0,-3.16,0.03,0.0,-3.1,0.0689,0.0,-3.1,0.0122,0.0,-3.04,0.0512,0.0,-3.05,-0.00248,0.0,-3.0,0.0249,0.0,-3.05,-0.00248,0.0,-2.99,-0.0195,0.0,-3.04,-0.0254,0.0,-3.0,-0.0708,0.0,-3.05,-0.051,0.0,-3.05,-0.104,0.0,-3.05,-0.051,0.0,-3.1,-0.108,0.0,-3.1,-0.0601,0.0,-3.16,-0.0947,0.0,-3.14,-0.0467,0.0,-3.15,-0.0154,0.0,-3.2,-0.0586,0.0};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getCoordinate_10_435_point_1()
		{
			double[] value = {0.108,0.00195,0.0,0.163,0.00195,0.0,0.166,-0.0473,0.0,0.194,-0.0608,0.0,0.222,-0.0492,0.0,0.228,-0.017,0.0,0.228,0.175,0.0,0.284,0.175,0.0,0.284,-0.02,0.0,0.271,-0.0798,0.0,0.23,-0.104,0.0,0.193,-0.108,0.0,0.155,-0.102,0.0,0.117,-0.0714,0.0,0.108,-0.0357,0.0,0.563,-0.101,0.0,0.563,0.103,0.0,0.615,0.103,0.0,0.615,0.0803,0.0,0.649,0.105,0.0,0.696,0.105,0.0,0.728,0.0788,0.0,0.76,0.104,0.0,0.811,0.104,0.0,0.842,0.081,0.0,0.853,0.0416,0.0,0.853,-0.101,0.0,0.799,-0.101,0.0,0.799,0.0305,0.0,0.79,0.0544,0.0,0.767,0.0616,0.0,0.743,0.0507,0.0,0.734,0.0228,0.0,0.734,-0.101,0.0,0.681,-0.101,0.0,0.681,0.0301,0.0,0.673,0.0532,0.0,0.65,0.0611,0.0,0.626,0.0506,0.0,0.617,0.0224,0.0,0.617,-0.101,0.0,0.9,-0.182,0.0,0.9,0.103,0.0,0.952,0.103,0.0,0.952,0.0751,0.0,0.968,0.0934,0.0,1.01,0.11,0.0,1.05,0.103,0.0,1.07,0.0796,0.0,1.1,0.0251,0.0,1.1,-0.0222,0.0,1.07,-0.0788,0.0,1.03,-0.106,0.0,0.988,-0.103,0.0,0.953,-0.0755,0.0,0.953,-0.182,0.0,1.04,-1.77E-4,0.0,1.03,-0.0446,0.0,0.999,-0.0603,0.0,0.966,-0.0453,0.0,0.953,-1.77E-4,0.0,0.963,0.045,0.0,0.998,0.063,0.0,1.03,0.0462,0.0,0.515,-0.101,0.0,0.462,-0.0764,0.0,0.462,-0.101,0.0,0.388,-0.0201,0.0,0.388,0.103,0.0,0.334,0.103,0.0,0.334,-0.0357,0.0,0.394,-0.0491,0.0,0.388,-0.0201,0.0,0.334,-0.0357,0.0,0.339,-0.072,0.0,0.394,-0.0491,0.0,0.339,-0.072,0.0,0.376,-0.102,0.0,0.422,-0.0604,0.0,0.394,-0.0491,0.0,0.376,-0.102,0.0,0.428,-0.101,0.0,0.451,-0.0482,0.0,0.422,-0.0604,0.0,0.428,-0.101,0.0,0.462,-0.0764,0.0,0.461,-0.0177,0.0,0.451,-0.0482,0.0,0.462,-0.0764,0.0,0.515,0.103,0.0,0.461,0.103,0.0,0.461,-0.0177,0.0,0.515,0.103,0.0,0.461,-0.0177,0.0,0.462,-0.0764,0.0,0.515,-0.101,0.0,0.515,0.103,0.0,0.462,-0.0764,0.0,0.284,-0.02,0.0,0.228,-0.017,0.0};
			return value;
		}
		private double[] getCoordinate_10_435_point_2()
		{
			double[] value = {0.271,-0.0798,0.0,0.222,-0.0492,0.0,0.23,-0.104,0.0,0.194,-0.0608,0.0,0.193,-0.108,0.0,0.194,-0.0608,0.0,0.155,-0.102,0.0,0.166,-0.0473,0.0,0.117,-0.0714,0.0,0.166,-0.0473,0.0,0.108,-0.0357,0.0,0.166,-0.0473,0.0,0.799,0.0305,0.0,0.853,0.0416,0.0,0.79,0.0544,0.0,0.842,0.081,0.0,0.79,0.0544,0.0,0.811,0.104,0.0,0.767,0.0616,0.0,0.76,0.104,0.0,0.743,0.0507,0.0,0.728,0.0788,0.0,0.734,0.0228,0.0,0.728,0.0788,0.0,0.681,0.0301,0.0,0.734,0.0228,0.0,0.673,0.0532,0.0,0.728,0.0788,0.0,0.673,0.0532,0.0,0.696,0.105,0.0,0.65,0.0611,0.0,0.649,0.105,0.0,0.626,0.0506,0.0,0.615,0.0803,0.0,0.617,0.0224,0.0,0.615,0.0803,0.0,0.563,-0.101,0.0,0.617,0.0224,0.0,0.563,-0.101,0.0,0.615,0.0803,0.0};
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
			MFVec3f Coordinate_13_150_point = new MFVec3f(new double[] {0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545});
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
			MFVec3f Coordinate_19_180_point = new MFVec3f(new double[] {0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608});
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
			MFVec3f Coordinate_17_206_point = new MFVec3f(new double[] {-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375});
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
			MFVec3f Coordinate_19_216_point = new MFVec3f(new double[] {-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862});
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
			MFVec3f Coordinate_10_422_point = new MFVec3f(new double[] {-0.829,-0.101,0.0,-0.829,0.175,0.0,-0.662,0.172,0.0,-0.622,0.148,0.0,-0.607,0.103,0.0,-0.62,0.0501,0.0,-0.648,0.0316,0.0,-0.615,-0.0063,0.0,-0.611,-0.0764,0.0,-0.601,-0.101,0.0,-0.664,-0.101,0.0,-0.671,-0.0373,0.0,-0.68,-0.00372,0.0,-0.712,0.00648,0.0,-0.772,0.00648,0.0,-0.772,-0.101,0.0,-0.772,0.0546,0.0,-0.772,0.127,0.0,-0.703,0.127,0.0,-0.673,0.118,0.0,-0.663,0.091,0.0,-0.674,0.063,0.0,-0.705,0.0546,0.0,-0.379,0.103,0.0,-0.379,-0.101,0.0,-0.432,-0.101,0.0,-0.432,-0.0764,0.0,-0.466,-0.101,0.0,-0.518,-0.102,0.0,-0.555,-0.072,0.0,-0.56,-0.0357,0.0,-0.56,0.103,0.0,-0.506,0.103,0.0,-0.506,-0.0201,0.0,-0.5,-0.0491,0.0,-0.472,-0.0604,0.0,-0.443,-0.0482,0.0,-0.433,-0.0177,0.0,-0.433,0.103,0.0,-0.331,-0.101,0.0,-0.331,0.103,0.0,-0.278,0.103,0.0,-0.278,0.0787,0.0,-0.244,0.104,0.0,-0.192,0.105,0.0,-0.154,0.0743,0.0,-0.149,0.038,0.0,-0.149,-0.101,0.0,-0.203,-0.101,0.0,-0.203,0.0224,0.0,-0.209,0.0514,0.0,-0.238,0.0627,0.0,-0.266,0.0505,0.0,-0.277,0.02,0.0,-0.277,-0.101,0.0,-0.506,-0.0201,0.0,-0.56,-0.0357,0.0,-0.5,-0.0491,0.0,-0.555,-0.072,0.0,-0.5,-0.0491,0.0,-0.518,-0.102,0.0,-0.472,-0.0604,0.0,-0.466,-0.101,0.0,-0.443,-0.0482,0.0,-0.432,-0.0764,0.0,-0.433,-0.0177,0.0,-0.432,-0.0764,0.0,-0.379,0.103,0.0,-0.433,-0.0177,0.0,-0.379,0.103,0.0,-0.432,-0.0764,0.0,-0.379,-0.101,0.0,-0.432,-0.0764,0.0,-0.203,0.0224,0.0,-0.149,0.038,0.0,-0.209,0.0514,0.0,-0.154,0.0743,0.0,-0.209,0.0514,0.0,-0.192,0.105,0.0,-0.238,0.0627,0.0,-0.244,0.104,0.0,-0.266,0.0505,0.0,-0.278,0.0787,0.0,-0.278,0.0787,0.0,-0.331,0.103,0.0,-0.277,0.02,0.0,-0.331,-0.101,0.0,-0.277,0.02,0.0,-0.278,0.0787,0.0,-0.277,0.02,0.0,-0.331,0.103,0.0});
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

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NancyPrototypes model
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
			System.out.println("WARNING: \"net.x3djsonld.data.NancyPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NancyPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
