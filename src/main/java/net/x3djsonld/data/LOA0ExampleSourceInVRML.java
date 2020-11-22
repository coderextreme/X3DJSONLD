package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene LOA0ExampleSourceInVRML. </p>
 <p> Related links: LOA0ExampleSourceInVRML.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

 */

public class LOA0ExampleSourceInVRML
{
	/** Default constructor to create this object. */
	public LOA0ExampleSourceInVRML ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new meta().setName(meta.NAME_SOURCE     ).setContent("LOA0ExampleSourceInVRML.wrl")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("Humanoid").setName("Humanoid")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("humanoidBody").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("info").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {""}))
        .addField(new field().setName("joints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("segments").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("sites").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("200x"))
        .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("viewpoints"))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclare("Joint").setName("Joint")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("limitOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("llimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {.0}))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("stiffness").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {1.0,1.0,1.0}))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("ulimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {.0})))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclare("Segment").setName("Segment")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("centerOfMass").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("displacers").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("mass").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("momentsOfInertia").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Site").setName("Site")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoInstance("Humanoid", "humanoid_2").setContainerField("children")
      .addFieldValue(new fieldValue().setName("humanoidBody")
        .addChild(new ProtoInstance("Joint", "hanim_humanoid_root_2").setContainerField("humanoidBody")
          .addFieldValue(new fieldValue().setName("stiffness").setValue(new double[] {1.0,1.0,1.0}))
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"))
          .addFieldValue(new fieldValue().setName("center").setValue(new SFVec3f(0.0,0.824000000953674,0.0276999995112419)))
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new ProtoInstance("Segment", "hanim_sacrum_2").setContainerField("children")
              .addFieldValue(new fieldValue().setName("name").setValue("sacrum"))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new ProtoInstance("Site", "hanim_skull_tip_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00499999988824129,1.75039994716644,0.00549999997019768))))
                .addChild(new ProtoInstance("Site", "hanim_sellion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("sellion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00579999992623925,1.63160002231598,0.0851999968290329))))
                .addChild(new ProtoInstance("Site", "hanim_r_infraorbitale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.023700000718236,1.61710000038147,0.0751999989151955))))
                .addChild(new ProtoInstance("Site", "hanim_l_infraorbitale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0340999998152256,1.61710000038147,0.0751999989151955))))
                .addChild(new ProtoInstance("Site", "hanim_supramenton_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("supramenton"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00609999988228083,1.54100000858307,0.0804999992251396))))
                .addChild(new ProtoInstance("Site", "hanim_r_tragion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0645999982953072,1.63469994068146,0.0302000008523464))))
                .addChild(new ProtoInstance("Site", "hanim_r_gonion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0520000010728836,1.55289995670319,0.0346999987959862))))
                .addChild(new ProtoInstance("Site", "hanim_l_tragion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0738999992609024,1.63479995727539,0.0282000005245209))))
                .addChild(new ProtoInstance("Site", "hanim_l_gonion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0631000027060509,1.55299997329712,0.0329999998211861))))
                .addChild(new ProtoInstance("Site", "hanim_nuchale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("nuchale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00389999989420176,1.59720003604889,-0.0795999988913536))))
                .addChild(new ProtoInstance("Site", "hanim_r_clavicale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0115000000223517,1.49430000782013,0.0399999991059303))))
                .addChild(new ProtoInstance("Site", "hanim_suprasternale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00839999970048666,1.47140002250671,0.0551000013947487))))
                .addChild(new ProtoInstance("Site", "hanim_l_clavicale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0271000005304813,1.49430000782013,0.0394000001251698))))
                .addChild(new ProtoInstance("Site", "hanim_r_thelion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0736000016331673,1.33850002288818,0.121699996292591))))
                .addChild(new ProtoInstance("Site", "hanim_l_thelion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0917999967932701,1.33819997310638,0.119199998676777))))
                .addChild(new ProtoInstance("Site", "hanim_substernale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("substernale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.008500000461936,1.29949998855591,0.114699997007847))))
                .addChild(new ProtoInstance("Site", "hanim_r_rib10_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0710999965667725,1.19410002231598,0.101599998772144))))
                .addChild(new ProtoInstance("Site", "hanim_r_asis_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_asis"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.088699996471405,1.00209999084473,0.111199997365475))))
                .addChild(new ProtoInstance("Site", "hanim_l_rib10_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0870999991893768,1.19249999523163,0.099200002849102))))
                .addChild(new ProtoInstance("Site", "hanim_l_asis_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_asis"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0925000011920929,0.998300015926361,0.105200000107288))))
                .addChild(new ProtoInstance("Site", "hanim_r_iliocristale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.152500003576279,1.0628000497818,0.00350000010803342))))
                .addChild(new ProtoInstance("Site", "hanim_r_trochanterion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.16889999806881,0.841899991035461,0.0351999998092651))))
                .addChild(new ProtoInstance("Site", "hanim_l_iliocristale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.161200001835823,1.05369997024536,0.0007999999797903))))
                .addChild(new ProtoInstance("Site", "hanim_l_trochanterion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.167699992656708,0.833599984645844,0.0303000006824732))))
                .addChild(new ProtoInstance("Site", "hanim_cervicale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("cervicale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0063999998383224,1.51999998092651,-0.0815000012516975))))
                .addChild(new ProtoInstance("Site", "hanim_spine_2_lower_back_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00490000005811453,1.19079995155334,-0.111299999058247))))
                .addChild(new ProtoInstance("Site", "hanim_r_psis_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_psis"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0715999975800514,1.01900005340576,-0.113799996674061))))
                .addChild(new ProtoInstance("Site", "hanim_l_psis_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_psis"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0773999989032745,1.01900005340576,-0.115099996328354))))
                .addChild(new ProtoInstance("Site", "hanim_waist_preferred_posterior_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.28999999165535,1.09150004386902,-0.109099999070168))))
                .addChild(new ProtoInstance("Site", "hanim_r_acromion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.190500006079674,1.47909998893738,-0.0430999994277954))))
                .addChild(new ProtoInstance("Site", "hanim_r_axilla_proximal_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.162599995732307,1.40719997882843,-0.00310000008903444))))
                .addChild(new ProtoInstance("Site", "hanim_r_radial_styloid_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.188400000333786,0.86760002374649,-0.0359999984502792))))
                .addChild(new ProtoInstance("Site", "hanim_r_axilla_distal_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.160300001502037,1.40980005264282,-0.0825999975204468))))
                .addChild(new ProtoInstance("Site", "hanim_r_olecranon_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.190699994564056,1.14049994945526,-0.106499999761581))))
                .addChild(new ProtoInstance("Site", "hanim_r_humeral_lateral_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.222399994730949,1.15170001983643,-0.103299997746944))))
                .addChild(new ProtoInstance("Site", "hanim_r_humeral_medial_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.167999997735024,1.12979996204376,-0.106200002133846))))
                .addChild(new ProtoInstance("Site", "hanim_r_radiale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.212999999523163,1.130499958992,-0.109099999070168))))
                .addChild(new ProtoInstance("Site", "hanim_r_metacarpal_phalanx3").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.197699993848801,0.816900014877319,-0.0176999997347593))))
                .addChild(new ProtoInstance("Site", "hanim_r_dactylion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.194100007414818,0.677200019359589,-0.0423000007867813))))
                .addChild(new ProtoInstance("Site", "hanim_r_ulnar_styloid_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.21170000731945,0.856199979782104,-0.0584000013768673))))
                .addChild(new ProtoInstance("Site", "hanim_r_metacarpal_phalanx6").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.192900002002716,0.788999974727631,-0.10639999806881))))
                .addChild(new ProtoInstance("Site", "hanim_l_acromion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.203199997544289,1.47599995136261,-0.0489999987185001))))
                .addChild(new ProtoInstance("Site", "hanim_l_axilla_proximal_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.177699998021126,1.40649998188019,-0.00749999983236194))))
                .addChild(new ProtoInstance("Site", "hanim_l_radial_styloid_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.190099999308586,0.864499986171722,-0.0414999984204769))))
                .addChild(new ProtoInstance("Site", "hanim_l_axilla_distal_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.17059999704361,1.40719997882843,-0.0874999985098839))))
                .addChild(new ProtoInstance("Site", "hanim_l_olecranon_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.196199998259544,1.13750004768372,-0.112300001084805))))
                .addChild(new ProtoInstance("Site", "hanim_l_humeral_lateral_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles "))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.228000000119209,1.14820003509521,-0.109999999403954))))
                .addChild(new ProtoInstance("Site", "hanim_l_humeral_medial_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.173500001430511,1.12720000743866,-0.111299999058247))))
                .addChild(new ProtoInstance("Site", "hanim_l_radiale_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.218199998140335,1.12119996547699,-0.116700001060963))))
                .addChild(new ProtoInstance("Site", "hanim_l_metacarpal_phalanx3").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.200900003314018,0.813899993896484,-0.023700000718236))))
                .addChild(new ProtoInstance("Site", "hanim_l_dactylion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.205599993467331,0.674300014972687,-0.048200000077486))))
                .addChild(new ProtoInstance("Site", "hanim_l_ulnar_styloid_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.214200004935265,0.85290002822876,-0.064800001680851))))
                .addChild(new ProtoInstance("Site", "hanim_l_metacarpal_phalanx6").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.192900002002716,0.78600001335144,-0.112199999392033))))
                .addChild(new ProtoInstance("Site", "hanim_r_knee_crease_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0825000032782555,0.4932000041008,-0.032600000500679))))
                .addChild(new ProtoInstance("Site", "hanim_r_femoral_lateral_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.142100006341934,0.499199986457825,0.0309999994933605))))
                .addChild(new ProtoInstance("Site", "hanim_r_femoral_medial_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0220999997109175,0.501399993896484,0.0288999993354082))))
                .addChild(new ProtoInstance("Site", "hanim_r_tarsal_interphalangeal_phalanx6").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.152300000190735,0.0165999997407198,0.0895000025629997))))
                .addChild(new ProtoInstance("Site", "hanim_r_lateral_malleolus_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.100599996745586,0.0658000037074089,-0.107500001788139))))
                .addChild(new ProtoInstance("Site", "hanim_r_medial_malleolus_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0590999983251095,0.0759999975562096,-0.092799998819828))))
                .addChild(new ProtoInstance("Site", "hanim_r_sphyrion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0603000000119209,0.0610000006854534,-0.100199997425079))))
                .addChild(new ProtoInstance("Site", "hanim_r_tarsal_interphalangeal_phalanx2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0520999990403652,0.0260000005364418,0.012699999846518))))
                .addChild(new ProtoInstance("Site", "hanim_r_calcaneus_posterior_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0692000016570091,0.0296999998390675,-0.122100003063679))))
                .addChild(new ProtoInstance("Site", "hanim_r_tarsal_distal_phalanx3").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.088299997150898,0.013399999588728,0.138300001621246))))
                .addChild(new ProtoInstance("Site", "hanim_l_knee_crease_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0992999970912933,0.488099992275238,-0.0308999996632338))))
                .addChild(new ProtoInstance("Site", "hanim_l_femoral_lateral_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.159799993038177,0.496699988842011,0.0296999998390675))))
                .addChild(new ProtoInstance("Site", "hanim_l_femoral_medial_epicondyles_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0397999994456768,0.494599997997284,0.0303000006824732))))
                .addChild(new ProtoInstance("Site", "hanim_l_tarsal_interphalangeal_phalanx6").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.182500004768372,0.00700000021606684,0.092799998819828))))
                .addChild(new ProtoInstance("Site", "hanim_l_lateral_malleolus_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.130799993872643,0.0597000010311604,-0.103200003504753))))
                .addChild(new ProtoInstance("Site", "hanim_l_medial_malleolus_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0890000015497208,0.0715999975800514,-0.0881000012159348))))
                .addChild(new ProtoInstance("Site", "hanim_l_sphyrion_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0890000015497208,0.0575000010430813,-0.0943000018596649))))
                .addChild(new ProtoInstance("Site", "hanim_l_tarsal_interphalangeal_phalanx2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0816000029444695,0.023199999704957,0.0105999996885657))))
                .addChild(new ProtoInstance("Site", "hanim_l_calcaneus_posterior_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.09740000218153,0.025900000706315,-0.11710000038147))))
                .addChild(new ProtoInstance("Site", "hanim_l_tarsal_distal_phalanx3").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.119499996304512,0.00789999961853027,0.143299996852875))))
                .addChild(new ProtoInstance("Site", "hanim_crotch_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("crotch"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00340000004507601,0.826600015163422,0.0256999991834164))))
                .addChild(new ProtoInstance("Site", "hanim_r_neck_base_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0419000014662743,1.51489996910095,-0.0219999998807907))))
                .addChild(new ProtoInstance("Site", "hanim_l_neck_base_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0645999982953072,1.51409995555878,-0.0379999987781048))))
                .addChild(new ProtoInstance("Site", "hanim_navel_2").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("name").setValue("navel"))
                  .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.00689999992027879,1.09660005569458,0.101700000464916)))))))))
      .addFieldValue(new fieldValue().setName("joints")
        .addChild(new ProtoInstance().setUSE("hanim_humanoid_root_2").setContainerField("joints")))
      .addFieldValue(new fieldValue().setName("segments")
        .addChild(new ProtoInstance().setUSE("hanim_sacrum_2").setContainerField("segments")))
      .addFieldValue(new fieldValue().setName("sites")
        .addChild(new ProtoInstance().setUSE("hanim_skull_tip_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_sellion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_infraorbitale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_infraorbitale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_supramenton_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_tragion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_gonion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_tragion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_gonion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_nuchale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_clavicale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_suprasternale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_clavicale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_thelion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_thelion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_substernale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_rib10_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_asis_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_rib10_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_asis_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_iliocristale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_trochanterion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_iliocristale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_trochanterion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_cervicale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_spine_2_lower_back_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_psis_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_psis_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_waist_preferred_posterior_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_acromion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_axilla_proximal_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_radial_styloid_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_axilla_distal_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_olecranon_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_humeral_lateral_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_humeral_medial_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_radiale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx3").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_dactylion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_ulnar_styloid_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx6").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_acromion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_axilla_proximal_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_radial_styloid_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_axilla_distal_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_olecranon_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_humeral_lateral_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_humeral_medial_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_radiale_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx3").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_dactylion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_ulnar_styloid_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx6").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_knee_crease_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_femoral_lateral_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_femoral_medial_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx6").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_lateral_malleolus_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_medial_malleolus_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_sphyrion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_calcaneus_posterior_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_tarsal_distal_phalanx3").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_knee_crease_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_femoral_lateral_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_femoral_medial_epicondyles_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx6").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_lateral_malleolus_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_medial_malleolus_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_sphyrion_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_calcaneus_posterior_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_tarsal_distal_phalanx3").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_crotch_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_r_neck_base_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_l_neck_base_2").setContainerField("sites"))
        .addChild(new ProtoInstance().setUSE("hanim_navel_2").setContainerField("sites")))
      .addFieldValue(new fieldValue().setName("name").setValue("humanoid"))
      .addFieldValue(new fieldValue().setName("info").setValue(new String[] {"authorName=Matthew T. Beitler","authorEmail=beitler@graphics.cis.upenn.edu or beitler@acm.org","creationDate=05/12/99","copyright=Copyright 1999-2003, Matthew T. Beitler","humanoidVersion=JointCenters 200x, LOA0","usageRestrictions=
    PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED
    THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL
    AUTHOR IS INCLUDED.  This humanoid scene graph is provided
    'as-is' and without warranty of any kind, express, implied
    or otherwise, including without limitation, any warranty of
    merchantability or fitness for a particular purpose.","modificationDate=08/12/03"})))
    .addChild(new Group("JointCenters_WorldInfo")
      .addChild(new WorldInfo().setInfo(new String[] {"
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
   "}).setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0")))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.60000002384186,0.75}).setSpeed(1.5)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return LOA0ExampleSourceInVRML model
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
        X3D thisExampleX3dModel = new LOA0ExampleSourceInVRML().getX3dModel();

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
			System.out.println("WARNING: \"LOA0ExampleSourceInVRML\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"LOA0ExampleSourceInVRML\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
