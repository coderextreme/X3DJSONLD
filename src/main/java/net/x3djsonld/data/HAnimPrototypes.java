package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes. </p>
 <p> Related links:  source HAnimPrototypes.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimPrototypes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d">HAnimPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint). </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Need support for skin </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Ozan APAYDIN, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Ozan APAYDIN, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 November 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> upgrade to match support requirements for HAnim 2.2 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl" target="_blank">http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim2001" target="_blank">http://HAnim.org/Specifications/HAnim2001</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org" target="_blank">http://www.HAnim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models" target="_blank">http://HAnim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications" target="_blank">http://HAnim.org/Specifications</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRoutingPrototypes.x3d">InterchangableActorsViaDynamicRoutingPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Ozan APAYDIN, Don Brutzman
 */

public class HAnimPrototypes
{
	/** Default constructor to create this object. */
	public HAnimPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComments(" Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d ")
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Need support for skin"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Ozan APAYDIN, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Ozan APAYDIN, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("15 November 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 May 2020"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("upgrade to match support requirements for HAnim 2.2"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Specifications/HAnim2001"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.HAnim.org"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Specifications"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("InterchangableActorsViaDynamicRoutingPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" **********Human Model Protypes********* ")
    .addChild(new ProtoDeclare("Humanoid1_1").setName("Humanoid1_1").setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")
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
        .addField(new field().setName("humanoidBody").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.").setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid"))
        .addField(new field().setName("skeleton").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"))
        .addField(new field().setName("joints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Joint nodes"))
        .addField(new field().setName("segments").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Segment nodes"))
        .addField(new field().setName("sites").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Site nodes"))
        .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Viewpoint nodes"))
        .addField(new field().setName("skinCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0")
          .addComments(" NULL "))
        .addField(new field().setName("skinNormal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0")
          .addComments(" NULL ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("HumanoidTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
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
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Segment").setName("Segment").setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html")
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
          .addComments(" NULL "))
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
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Displacer").setName("Displacer").setAppinfo("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("coordIndex").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("displacements").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"null body node"}))))
    .addChild(new Shape()
      .setGeometry(new Text().setString(new String[] {"Humanoid Animation","(HAnim) prototype","implementations"})
        .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
      .setAppearance(new Appearance()
        .setMaterial(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.795918,0.505869,0.093315).setShininess(0.39).setSpecularColor(0.923469,0.428866,0.006369)
          .addComments(" Universal Media Library: Autumn 9 ")))));
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
	 * @return HAnimPrototypes model
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
        X3D thisExampleX3dModel = new HAnimPrototypes().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimPrototypes self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./HAnimPrototypes_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./HAnimPrototypes_JavaExport.x3d"; 
                String filenameX3DV = "./HAnimPrototypes_JavaExport.x3dv"; 
                String filenameJSON = "./HAnimPrototypes_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
