load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene NeedClassName. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> LOA0ExampleSourceInVRML.wrl </td>
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

 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: fieldValue value field, scene-graph level=4, element #423, 62 total values */
	this.fieldValue_info_4_423_value = new SFStringObject("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@graphics.cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA0\" \"usageRestrictions=
    PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED
    THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL
    AUTHOR IS INCLUDED.  This humanoid scene graph is provided
    'as-is' and without warranty of any kind, express, implied
    or otherwise, including without limitation, any warranty of
    merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"");

	/** Large attribute array: WorldInfo info field, scene-graph level=4, element #425, 74 total values */
	this.WorldInfo_4_425_info = new MFStringObject(new MFStringObject("\"
     HANIM 200x Default Joint Centers, Level-Of-Articulation 0
     ---------------------------------------------------------
     HANIM 200x (VRML97) Author name:
       eMpTy (a.k.a. Matthew T. Beitler)
     HANIM 200x (VRML97) Author email:
       beitler@cis.upenn.edu or beitler@acm.org
     HANIM 200x (VRML97) Author homepage:
       http://www.cis.upenn.edu/~beitler
     HANIM 200x (VRML97) Compliance Date:
       August 12, 2003
     HANIM 200x Compliance Information:
       http://H-Anim.org/Specifications/H-Anim200x
     Construction Info (joint centers):
      The joint centers of this figure are based on the 
      work of Norman Badler, director of the Center for
      Human modelling and Simulation at the University of
      Pennsylvania.  The original document which these
      joint centers are based on can be found at:
        http://www.cis.upenn.edu/~badler/anthro/89-71.ps
   \""));
  this.x3dModel = new X3DObject().setProfile("Interchange").setVersion("4.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new metaObject().setName("source").setContent("LOA0ExampleSourceInVRML.wrl")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("Humanoid")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("humanoidBody").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("info").setType("MFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("joints").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("segments").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("sites").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("version").setType("SFString").setValue("200x"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("viewpoints").setType("MFNode"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("viewpoints"))))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclareObject().setName("Joint")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("limitOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("llimit").setType("MFFloat").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("stiffness").setType("MFFloat").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("ulimit").setType("MFFloat").setValue("")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclareObject().setName("Segment")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("centerOfMass").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("coord").setType("SFNode").setValue("NULL"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("displacers").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("mass").setType("SFFloat").setValue("0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("momentsOfInertia").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclareObject().setName("Site")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoInstanceObject("humanoid_2", "Humanoid").setDEF("humanoid_2").setName("Humanoid")
      .addFieldValue(new fieldValueObject().setName("humanoidBody")
        .setHumanoidBody(new ProtoInstanceObject("hanim_humanoid_root_2", "Joint").setDEF("hanim_humanoid_root_2").setName("Joint")
          .addFieldValue(new fieldValueObject().setName("stiffness").setValue("1 1 1"))
          .addFieldValue(new fieldValueObject().setName("name").setValue("humanoid_root"))
          .addFieldValue(new fieldValueObject().setName("center").setValue("0 0.824000000953674 0.0276999995112419"))
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ProtoInstanceObject("hanim_sacrum_2", "Segment").setDEF("hanim_sacrum_2").setName("Segment")
              .addFieldValue(new fieldValueObject().setName("name").setValue("sacrum"))
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(new ProtoInstanceObject("hanim_skull_tip_2", "Site").setDEF("hanim_skull_tip_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("skull_tip"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")))
                .addChild(new ProtoInstanceObject("hanim_sellion_2", "Site").setDEF("hanim_sellion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("sellion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")))
                .addChild(new ProtoInstanceObject("hanim_r_infraorbitale_2", "Site").setDEF("hanim_r_infraorbitale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_infraorbitale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")))
                .addChild(new ProtoInstanceObject("hanim_l_infraorbitale_2", "Site").setDEF("hanim_l_infraorbitale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_infraorbitale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")))
                .addChild(new ProtoInstanceObject("hanim_supramenton_2", "Site").setDEF("hanim_supramenton_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("supramenton"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")))
                .addChild(new ProtoInstanceObject("hanim_r_tragion_2", "Site").setDEF("hanim_r_tragion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_tragion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")))
                .addChild(new ProtoInstanceObject("hanim_r_gonion_2", "Site").setDEF("hanim_r_gonion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_gonion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")))
                .addChild(new ProtoInstanceObject("hanim_l_tragion_2", "Site").setDEF("hanim_l_tragion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_tragion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")))
                .addChild(new ProtoInstanceObject("hanim_l_gonion_2", "Site").setDEF("hanim_l_gonion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_gonion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")))
                .addChild(new ProtoInstanceObject("hanim_nuchale_2", "Site").setDEF("hanim_nuchale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("nuchale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")))
                .addChild(new ProtoInstanceObject("hanim_r_clavicale_2", "Site").setDEF("hanim_r_clavicale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_clavicale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")))
                .addChild(new ProtoInstanceObject("hanim_suprasternale_2", "Site").setDEF("hanim_suprasternale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("suprasternale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")))
                .addChild(new ProtoInstanceObject("hanim_l_clavicale_2", "Site").setDEF("hanim_l_clavicale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_clavicale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")))
                .addChild(new ProtoInstanceObject("hanim_r_thelion_2", "Site").setDEF("hanim_r_thelion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_thelion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")))
                .addChild(new ProtoInstanceObject("hanim_l_thelion_2", "Site").setDEF("hanim_l_thelion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_thelion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0917999967932701 1.33819997310638 0.119199998676777")))
                .addChild(new ProtoInstanceObject("hanim_substernale_2", "Site").setDEF("hanim_substernale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("substernale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.008500000461936 1.29949998855591 0.114699997007847")))
                .addChild(new ProtoInstanceObject("hanim_r_rib10_2", "Site").setDEF("hanim_r_rib10_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_rib10"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")))
                .addChild(new ProtoInstanceObject("hanim_r_asis_2", "Site").setDEF("hanim_r_asis_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_asis"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.088699996471405 1.00209999084473 0.111199997365475")))
                .addChild(new ProtoInstanceObject("hanim_l_rib10_2", "Site").setDEF("hanim_l_rib10_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_rib10"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0870999991893768 1.19249999523163 0.099200002849102")))
                .addChild(new ProtoInstanceObject("hanim_l_asis_2", "Site").setDEF("hanim_l_asis_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_asis"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0925000011920929 0.998300015926361 0.105200000107288")))
                .addChild(new ProtoInstanceObject("hanim_r_iliocristale_2", "Site").setDEF("hanim_r_iliocristale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_iliocristale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.152500003576279 1.0628000497818 0.00350000010803342")))
                .addChild(new ProtoInstanceObject("hanim_r_trochanterion_2", "Site").setDEF("hanim_r_trochanterion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_trochanterion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.16889999806881 0.841899991035461 0.0351999998092651")))
                .addChild(new ProtoInstanceObject("hanim_l_iliocristale_2", "Site").setDEF("hanim_l_iliocristale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_iliocristale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.161200001835823 1.05369997024536 0.0007999999797903")))
                .addChild(new ProtoInstanceObject("hanim_l_trochanterion_2", "Site").setDEF("hanim_l_trochanterion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_trochanterion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.167699992656708 0.833599984645844 0.0303000006824732")))
                .addChild(new ProtoInstanceObject("hanim_cervicale_2", "Site").setDEF("hanim_cervicale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("cervicale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")))
                .addChild(new ProtoInstanceObject("hanim_spine_2_lower_back_2", "Site").setDEF("hanim_spine_2_lower_back_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("spine_2_lower_back"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")))
                .addChild(new ProtoInstanceObject("hanim_r_psis_2", "Site").setDEF("hanim_r_psis_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_psis"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061")))
                .addChild(new ProtoInstanceObject("hanim_l_psis_2", "Site").setDEF("hanim_l_psis_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_psis"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0773999989032745 1.01900005340576 -0.115099996328354")))
                .addChild(new ProtoInstanceObject("hanim_waist_preferred_posterior_2", "Site").setDEF("hanim_waist_preferred_posterior_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("waist_preferred_posterior"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.28999999165535 1.09150004386902 -0.109099999070168")))
                .addChild(new ProtoInstanceObject("hanim_r_acromion_2", "Site").setDEF("hanim_r_acromion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_acromion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")))
                .addChild(new ProtoInstanceObject("hanim_r_axilla_proximal_2", "Site").setDEF("hanim_r_axilla_proximal_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_axilla_proximal"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")))
                .addChild(new ProtoInstanceObject("hanim_r_radial_styloid_2", "Site").setDEF("hanim_r_radial_styloid_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_radial_styloid"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")))
                .addChild(new ProtoInstanceObject("hanim_r_axilla_distal_2", "Site").setDEF("hanim_r_axilla_distal_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_axilla_distal"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")))
                .addChild(new ProtoInstanceObject("hanim_r_olecranon_2", "Site").setDEF("hanim_r_olecranon_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_olecranon"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")))
                .addChild(new ProtoInstanceObject("hanim_r_humeral_lateral_epicondyles_2", "Site").setDEF("hanim_r_humeral_lateral_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_humeral_lateral_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")))
                .addChild(new ProtoInstanceObject("hanim_r_humeral_medial_epicondyles_2", "Site").setDEF("hanim_r_humeral_medial_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_humeral_medial_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")))
                .addChild(new ProtoInstanceObject("hanim_r_radiale_2", "Site").setDEF("hanim_r_radiale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_radiale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.212999999523163 1.130499958992 -0.109099999070168")))
                .addChild(new ProtoInstanceObject("hanim_r_metacarpal_phalanx3", "Site").setDEF("hanim_r_metacarpal_phalanx3").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_metacarpal_phalanx_2"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")))
                .addChild(new ProtoInstanceObject("hanim_r_dactylion_2", "Site").setDEF("hanim_r_dactylion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_dactylion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")))
                .addChild(new ProtoInstanceObject("hanim_r_ulnar_styloid_2", "Site").setDEF("hanim_r_ulnar_styloid_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_ulnar_styloid"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")))
                .addChild(new ProtoInstanceObject("hanim_r_metacarpal_phalanx6", "Site").setDEF("hanim_r_metacarpal_phalanx6").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_metacarpal_phalanx_5"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")))
                .addChild(new ProtoInstanceObject("hanim_l_acromion_2", "Site").setDEF("hanim_l_acromion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_acromion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")))
                .addChild(new ProtoInstanceObject("hanim_l_axilla_proximal_2", "Site").setDEF("hanim_l_axilla_proximal_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_axilla_proximal"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")))
                .addChild(new ProtoInstanceObject("hanim_l_radial_styloid_2", "Site").setDEF("hanim_l_radial_styloid_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_radial_styloid"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")))
                .addChild(new ProtoInstanceObject("hanim_l_axilla_distal_2", "Site").setDEF("hanim_l_axilla_distal_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_axilla_distal"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")))
                .addChild(new ProtoInstanceObject("hanim_l_olecranon_2", "Site").setDEF("hanim_l_olecranon_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_olecranon"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")))
                .addChild(new ProtoInstanceObject("hanim_l_humeral_lateral_epicondyles_2", "Site").setDEF("hanim_l_humeral_lateral_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_humeral_lateral_epicondyles "))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.228000000119209 1.14820003509521 -0.109999999403954")))
                .addChild(new ProtoInstanceObject("hanim_l_humeral_medial_epicondyles_2", "Site").setDEF("hanim_l_humeral_medial_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_humeral_medial_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.173500001430511 1.12720000743866 -0.111299999058247")))
                .addChild(new ProtoInstanceObject("hanim_l_radiale_2", "Site").setDEF("hanim_l_radiale_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_radiale"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.218199998140335 1.12119996547699 -0.116700001060963")))
                .addChild(new ProtoInstanceObject("hanim_l_metacarpal_phalanx3", "Site").setDEF("hanim_l_metacarpal_phalanx3").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_metacarpal_phalanx_2"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.200900003314018 0.813899993896484 -0.023700000718236")))
                .addChild(new ProtoInstanceObject("hanim_l_dactylion_2", "Site").setDEF("hanim_l_dactylion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_dactylion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.205599993467331 0.674300014972687 -0.048200000077486")))
                .addChild(new ProtoInstanceObject("hanim_l_ulnar_styloid_2", "Site").setDEF("hanim_l_ulnar_styloid_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_ulnar_styloid"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")))
                .addChild(new ProtoInstanceObject("hanim_l_metacarpal_phalanx6", "Site").setDEF("hanim_l_metacarpal_phalanx6").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_metacarpal_phalanx_5"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.192900002002716 0.78600001335144 -0.112199999392033")))
                .addChild(new ProtoInstanceObject("hanim_r_knee_crease_2", "Site").setDEF("hanim_r_knee_crease_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_knee_crease"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679")))
                .addChild(new ProtoInstanceObject("hanim_r_femoral_lateral_epicondyles_2", "Site").setDEF("hanim_r_femoral_lateral_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.142100006341934 0.499199986457825 0.0309999994933605")))
                .addChild(new ProtoInstanceObject("hanim_r_femoral_medial_epicondyles_2", "Site").setDEF("hanim_r_femoral_medial_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082")))
                .addChild(new ProtoInstanceObject("hanim_r_tarsal_interphalangeal_phalanx6", "Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx6").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997")))
                .addChild(new ProtoInstanceObject("hanim_r_lateral_malleolus_2", "Site").setDEF("hanim_r_lateral_malleolus_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_lateral_malleolus"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139")))
                .addChild(new ProtoInstanceObject("hanim_r_medial_malleolus_2", "Site").setDEF("hanim_r_medial_malleolus_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_medial_malleolus"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828")))
                .addChild(new ProtoInstanceObject("hanim_r_sphyrion_2", "Site").setDEF("hanim_r_sphyrion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_sphyrion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079")))
                .addChild(new ProtoInstanceObject("hanim_r_tarsal_interphalangeal_phalanx2", "Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518")))
                .addChild(new ProtoInstanceObject("hanim_r_calcaneus_posterior_2", "Site").setDEF("hanim_r_calcaneus_posterior_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_calcaneus_posterior"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679")))
                .addChild(new ProtoInstanceObject("hanim_r_tarsal_distal_phalanx3", "Site").setDEF("hanim_r_tarsal_distal_phalanx3").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_tarsal_distal_phalanx_2"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.088299997150898 0.013399999588728 0.138300001621246")))
                .addChild(new ProtoInstanceObject("hanim_l_knee_crease_2", "Site").setDEF("hanim_l_knee_crease_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_knee_crease"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338")))
                .addChild(new ProtoInstanceObject("hanim_l_femoral_lateral_epicondyles_2", "Site").setDEF("hanim_l_femoral_lateral_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.159799993038177 0.496699988842011 0.0296999998390675")))
                .addChild(new ProtoInstanceObject("hanim_l_femoral_medial_epicondyles_2", "Site").setDEF("hanim_l_femoral_medial_epicondyles_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0397999994456768 0.494599997997284 0.0303000006824732")))
                .addChild(new ProtoInstanceObject("hanim_l_tarsal_interphalangeal_phalanx6", "Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx6").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.182500004768372 0.00700000021606684 0.092799998819828")))
                .addChild(new ProtoInstanceObject("hanim_l_lateral_malleolus_2", "Site").setDEF("hanim_l_lateral_malleolus_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_lateral_malleolus"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.130799993872643 0.0597000010311604 -0.103200003504753")))
                .addChild(new ProtoInstanceObject("hanim_l_medial_malleolus_2", "Site").setDEF("hanim_l_medial_malleolus_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_medial_malleolus"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348")))
                .addChild(new ProtoInstanceObject("hanim_l_sphyrion_2", "Site").setDEF("hanim_l_sphyrion_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_sphyrion"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649")))
                .addChild(new ProtoInstanceObject("hanim_l_tarsal_interphalangeal_phalanx2", "Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0816000029444695 0.023199999704957 0.0105999996885657")))
                .addChild(new ProtoInstanceObject("hanim_l_calcaneus_posterior_2", "Site").setDEF("hanim_l_calcaneus_posterior_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_calcaneus_posterior"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.09740000218153 0.025900000706315 -0.11710000038147")))
                .addChild(new ProtoInstanceObject("hanim_l_tarsal_distal_phalanx3", "Site").setDEF("hanim_l_tarsal_distal_phalanx3").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_tarsal_distal_phalanx_2"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.119499996304512 0.00789999961853027 0.143299996852875")))
                .addChild(new ProtoInstanceObject("hanim_crotch_2", "Site").setDEF("hanim_crotch_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("crotch"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00340000004507601 0.826600015163422 0.0256999991834164")))
                .addChild(new ProtoInstanceObject("hanim_r_neck_base_2", "Site").setDEF("hanim_r_neck_base_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("r_neck_base"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")))
                .addChild(new ProtoInstanceObject("hanim_l_neck_base_2", "Site").setDEF("hanim_l_neck_base_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("l_neck_base"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")))
                .addChild(new ProtoInstanceObject("hanim_navel_2", "Site").setDEF("hanim_navel_2").setName("Site")
                  .addFieldValue(new fieldValueObject().setName("name").setValue("navel"))
                  .addFieldValue(new fieldValueObject().setName("translation").setValue("0.00689999992027879 1.09660005569458 0.101700000464916"))))))))
      .addFieldValue(new fieldValueObject().setName("joints")
        .setJoints(new ProtoInstanceObject().setUSE("hanim_humanoid_root_2")))
      .addFieldValue(new fieldValueObject().setName("segments")
        .setSegments(new ProtoInstanceObject().setUSE("hanim_sacrum_2")))
      .addFieldValue(new fieldValueObject().setName("sites")
        .addSites(new ProtoInstanceObject().setUSE("hanim_skull_tip_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_sellion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_infraorbitale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_infraorbitale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_supramenton_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_tragion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_gonion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_tragion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_gonion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_nuchale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_clavicale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_suprasternale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_clavicale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_thelion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_thelion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_substernale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_rib10_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_asis_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_rib10_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_asis_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_iliocristale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_trochanterion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_iliocristale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_trochanterion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_cervicale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_spine_2_lower_back_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_psis_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_psis_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_waist_preferred_posterior_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_acromion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_axilla_proximal_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_radial_styloid_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_axilla_distal_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_olecranon_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_humeral_lateral_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_humeral_medial_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_radiale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_metacarpal_phalanx3"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_dactylion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_ulnar_styloid_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_metacarpal_phalanx6"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_acromion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_axilla_proximal_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_radial_styloid_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_axilla_distal_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_olecranon_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_humeral_lateral_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_humeral_medial_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_radiale_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_metacarpal_phalanx3"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_dactylion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_ulnar_styloid_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_metacarpal_phalanx6"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_knee_crease_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_femoral_lateral_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_femoral_medial_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_tarsal_interphalangeal_phalanx6"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_lateral_malleolus_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_medial_malleolus_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_sphyrion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_tarsal_interphalangeal_phalanx2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_calcaneus_posterior_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_tarsal_distal_phalanx3"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_knee_crease_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_femoral_lateral_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_femoral_medial_epicondyles_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_tarsal_interphalangeal_phalanx6"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_lateral_malleolus_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_medial_malleolus_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_sphyrion_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_tarsal_interphalangeal_phalanx2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_calcaneus_posterior_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_tarsal_distal_phalanx3"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_crotch_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_r_neck_base_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_l_neck_base_2"))
        .addSites(new ProtoInstanceObject().setUSE("hanim_navel_2")))
      .addFieldValue(new fieldValueObject().setName("name").setValue("humanoid"))
      .addFieldValue(new fieldValueObject().setName("info").setValue(this.fieldValue_info_4_423_value)))
    .addChild(new GroupObject("JointCenters_WorldInfo")
      .addChild(new WorldInfoObject().setInfo(this.WorldInfo_4_425_info).setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0")))
    .addChild(new NavigationInfoObject().setAvatarSize(Java.to([0.25,1.60000002384186,0.75], Java.type("float[]"))).setSpeed(1.5)));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		print ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();