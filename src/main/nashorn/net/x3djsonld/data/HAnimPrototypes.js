load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes. </p>
 <p> Related links: HAnimPrototypes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Ozan APAYDIN, Don Brutzman
 */

function HAnimPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #23, 45 total values */
	this.ProtoDeclare_Humanoid1_1_3_23_appinfo = new SFStringObject("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #63, 45 total values */
	this.ProtoDeclare_Joint_3_63_appinfo = new SFStringObject("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #95, 36 total values */
	this.ProtoDeclare_Segment_3_95_appinfo = new SFStringObject("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #116, 71 total values */
	this.ProtoDeclare_Site_3_116_appinfo = new SFStringObject("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).");

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #142, 49 total values */
	this.ProtoDeclare_Displacer_3_142_appinfo = new SFStringObject("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.");
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComments(" Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d ")
    .addMeta(new metaObject().setName("title").setContent("HAnimPrototypes.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."))
    .addMeta(new metaObject().setName("warning").setContent("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."))
    .addMeta(new metaObject().setName("warning").setContent("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."))
    .addMeta(new metaObject().setName("warning").setContent("Need support for skin"))
    .addMeta(new metaObject().setName("creator").setContent("Ozan APAYDIN, Don Brutzman"))
    .addMeta(new metaObject().setName("translator").setContent("Ozan APAYDIN, Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("15 November 2001"))
    .addMeta(new metaObject().setName("modified").setContent("23 May 2020"))
    .addMeta(new metaObject().setName("TODO").setContent("upgrade to match support requirements for HAnim 2.2"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Specifications"))
    .addMeta(new metaObject().setName("reference").setContent("InterchangableActorsViaDynamicRoutingPrototypes.x3d"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addComments(" **********Human Model Protypes********* ")
    .addChild(new ProtoDeclareObject().setName("Humanoid1_1").setAppinfo(this.ProtoDeclare_Humanoid1_1_3_23_appinfo).setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addComments(" HAnim v1.1 field definitions ")
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("version").setType("SFString").setValue("1.1").setAppinfo("legal values: 1.1 or 2.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("humanoidVersion").setType("SFString").setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("info").setType("MFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("humanoidBody").setType("MFNode").setAppinfo("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.").setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("skeleton").setType("MFNode").setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("joints").setType("MFNode").setAppinfo("Container field for Joint nodes"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("segments").setType("MFNode").setAppinfo("Container field for Segment nodes"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("sites").setType("MFNode").setAppinfo("Container field for Site nodes"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("viewpoints").setType("MFNode").setAppinfo("Container field for Viewpoint nodes"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("skinCoord").setType("SFNode").setAppinfo("Hint: HAnim version 2.0")
          .addComments(" NULL "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("skinNormal").setType("SFNode").setAppinfo("Hint: HAnim version 2.0")
          .addComments(" NULL ")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("HumanoidTransform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize")))
          .addChild(new GroupObject("HumanoidGroup1")
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new GroupObject("HumanoidGroup2")
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("skeleton"))))
          .addChild(new GroupObject("HumanoidGroup3")
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("viewpoints")))))))
    .addChild(new ProtoDeclareObject().setName("Joint").setAppinfo(this.ProtoDeclare_Joint_3_63_appinfo).setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("ulimit").setType("MFFloat"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("llimit").setType("MFFloat"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("limitOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("skinCoordIndex").setType("MFInt32"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("skinCoordWeight").setType("MFFloat"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("stiffness").setType("MFFloat").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("JointTransform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclareObject().setName("Segment").setAppinfo(this.ProtoDeclare_Segment_3_95_appinfo).setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("mass").setType("SFFloat").setValue("0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("centerOfMass").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("momentsOfInertia").setType("MFFloat").setValue("0 0 0 0 0 0 0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("coord").setType("SFNode").setAppinfo("contains Coordinate nodes")
          .addComments(" NULL "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("displacers").setType("MFNode").setAppinfo("contains Displacer nodes")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject("SegmentGroup")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclareObject().setName("Site").setAppinfo(this.ProtoDeclare_Site_3_116_appinfo).setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Site.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("SiteTransform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclareObject().setName("Displacer").setAppinfo(this.ProtoDeclare_Displacer_3_142_appinfo).setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("coordIndex").setType("MFInt32"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("displacements").setType("MFVec3f")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject("\"null body node\"")))))
    .addChild(new ShapeObject()
      .setGeometry(new TextObject().setString(new MFStringObject("\"Humanoid Animation\" \"(HAnim) prototype\" \"implementations\""))
        .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject().setAmbientIntensity(0.25).setShininess(0.39).setDiffuseColor(0.795918,0.505869,0.093315).setSpecularColor(0.923469,0.428866,0.006369)
          .addComments(" Universal Media Library: Autumn 9 ")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimPrototypes model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new HAnimPrototypes();
		print ("HAnimPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimPrototypes().main();