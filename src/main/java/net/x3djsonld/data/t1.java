package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene . </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> t1.wrl </td>
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

public class NeedClassName
{
	/** Default constructor to create this object. */
	public NeedClassName ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("Networking").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new meta().setName(meta.NAME_SOURCE     ).setContent("t1.wrl")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setAvatarSize(new double[] {200.0,200.0,120.0}).setSpeed(3).setType(new String[] {"EXAMINE","FLY","WALK"}))
    .addChild(new WorldInfo().setTitle("Arts Mapper"))
    .addChild(new Viewpoint().setDescription("looking North").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071).setPosition(0.0,60.0,110.0))
    .addChild(new Viewpoint().setDescription("looking East").setFieldOfView(0.785398125648499).setOrientation(0.0,0.400000005960464,0.0,-1.39999997615814).setPosition(-140.0,30.0,0.0))
    .addChild(new Viewpoint().setDescription("Overhead").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-1.57000005245209).setPosition(0.0,150.0,0.0))
    .addChild(new ProtoDeclare("school").setName("school")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.5,0.0,1.0).setTransparency(0.200000002980232)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0.0,0.349999994039536,0.0})))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("institute").setName("institute")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0).setTransparency(0.200000002980232)))
            .setGeometry(new Box().setSize(0.699999988079071,0.699999988079071,0.699999988079071)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("disart_org").setName("disart_org")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry(new Sphere().setRadius(0.699999988079071)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("org").setName("org")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("posi").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("col").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.400000005960464)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new Sphere().setRadius(1.10000002384186)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclare("l").setName("l")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(0.0,0.600000023841858,0.0)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("r").setName("r")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(0.0,0.300000011920929,1.0)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("n").setName("n")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(1.0,0.0,0.200000002980232)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("i").setName("i")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(0.600000023841858,0.0,0.600000023841858)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new Transform().setTranslation(-468.0,0.0,315.0)
      .addChild(new Inline().setUrl(new String[] {"t.wrl"}))
      .addChild(new Anchor().setDescription("Derby Women's Centre").setUrl(new String[] {"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(435.299987792969,0.100000001490116,-335.600006103516)))))
      .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(new String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(400.0,0.100000001490116,-385.0)))))
      .addChild(new Anchor().setDescription("Charlesworth Primary School").setUrl(new String[] {"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(400.600006103516,0.100000001490116,-392.899993896484)))))
      .addChild(new Anchor().setDescription("Hope Valley College").setUrl(new String[] {"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(416.700012207031,0.100000001490116,-383.399993896484)))))
      .addChild(new Anchor().setDescription("People Express").setUrl(new String[] {"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(429.899993896484,0.100000001490116,-319.600006103516)))))
      .addChild(new Anchor().setDescription("QArts/Studios").setUrl(new String[] {"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(430.0,0.100000001490116,-335.0)))))
      .addChild(new Anchor().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new String[] {"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(435.799987792969,0.100000001490116,-335.299987792969)))))
      .addChild(new Anchor().setDescription("Park View Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(438.299987792969,0.100000001490116,-338.600006103516)))))
      .addChild(new Anchor().setDescription("First Movement").setUrl(new String[] {"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(429.899993896484,0.100000001490116,-360.299987792969)))))
      .addChild(new Anchor().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new String[] {"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(434.600006103516,0.100000001490116,-338.600006103516)))))
      .addChild(new Anchor().setDescription("Beckett Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(434.799987792969,0.100000001490116,-336.0)))))
      .addChild(new Anchor().setDescription("Brackensdale Junior School, Communty Unit").setUrl(new String[] {"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(432.700012207031,0.100000001490116,-336.600006103516)))))
      .addChild(new Anchor().setDescription("Moorhead Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(437.600006103516,0.100000001490116,-332.600006103516)))))
      .addChild(new Anchor().setDescription("Derby Deaf Club").setUrl(new String[] {"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(434.700012207031,0.100000001490116,-336.899993896484)))))
      .addChild(new Anchor().setDescription("Nightingale Junior, Derby").setUrl(new String[] {"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(436.299987792969,0.100000001490116,-333.399993896484)))))
      .addChild(new Anchor().setDescription("St Mary's Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(435.200012207031,0.100000001490116,-336.799987792969)))))
      .addChild(new Anchor().setDescription("Griffe Field Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(432.5,0.100000001490116,-332.5)))))
      .addChild(new Anchor().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new String[] {"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(474.700012207031,0.100000001490116,-318.799987792969)))))
      .addChild(new Anchor().setDescription("Ivy House Special School, Derby").setUrl(new String[] {"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(436.100006103516,0.100000001490116,-334.899993896484)))))
      .addChild(new Anchor().setDescription("Oakham Day Centre, Rutland").setUrl(new String[] {"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(485.600006103516,0.100000001490116,-309.0)))))
      .addChild(new Anchor().setDescription("Parkwood School, Alfreton").setUrl(new String[] {"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(440.5,0.100000001490116,-355.5)))))
      .addChild(new Anchor().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new String[] {"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(434.799987792969,0.100000001490116,-371.5)))))
      .addChild(new Anchor().setDescription("Ashgate Croft School, Chesterfield").setUrl(new String[] {"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(436.299987792969,0.100000001490116,-371.700012207031)))))
      .addChild(new Anchor().setDescription("Highfields School, Matlock").setUrl(new String[] {"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(431.200012207031,0.100000001490116,-361.200012207031)))))
      .addChild(new Anchor().setDescription("City Arts").setUrl(new String[] {"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(455.899993896484,0.100000001490116,-341.299987792969)))))
      .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new String[] {"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(456.100006103516,0.100000001490116,-341.5)))))
      .addChild(new Anchor().setDescription("Watering Seeds").setUrl(new String[] {"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(454.0,0.100000001490116,-361.299987792969)))))
      .addChild(new Anchor().setDescription("Red oaks").setUrl(new String[] {"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(457.399993896484,0.100000001490116,-359.600006103516)))))
      .addChild(new Anchor().setDescription("West Notts College").setUrl(new String[] {"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(454.200012207031,0.100000001490116,-358.600006103516)))))
      .addChild(new Anchor().setDescription("Willow Wood Day Centre").setUrl(new String[] {"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(450.600006103516,0.100000001490116,-358.600006103516)))))
      .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(new String[] {"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(440.0,0.100000001490116,-350.0)))))
      .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(new String[] {"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(458.899993896484,0.100000001490116,-304.299987792969)))))
      .addChild(new Anchor().setDescription("Roman Way Day Centre, Market Harborough").setUrl(new String[] {"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(473.5,0.100000001490116,-287.5)))))
      .addChild(new Anchor().setDescription("Mosaic, Leicester Disability Services").setUrl(new String[] {"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(458.0,0.100000001490116,-304.5)))))
      .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(new String[] {"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(457.100006103516,0.100000001490116,-300.799987792969)))))
      .addChild(new Anchor().setDescription("Ellesmere College, Leicester").setUrl(new String[] {"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(456.799987792969,0.100000001490116,-302.600006103516)))))
      .addChild(new Anchor().setDescription("Ashmount School, Loughborough").setUrl(new String[] {"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(453.299987792969,0.100000001490116,-318.600006103516)))))
      .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(new String[] {"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(442.399993896484,0.100000001490116,-314.5)))))
      .addChild(new Anchor().setDescription("Forrest Way School").setUrl(new String[] {"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(444.600006103516,0.100000001490116,-313.700012207031)))))
      .addChild(new Anchor().setDescription("Ibstock Community College").setUrl(new String[] {"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(440.600006103516,0.100000001490116,-310.399993896484)))))
      .addChild(new Anchor().setDescription("Artlink East").setUrl(new String[] {"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(491.600006103516,0.100000001490116,-335.700012207031)))))
      .addChild(new Anchor().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new String[] {"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(491.399993896484,0.100000001490116,-336.799987792969)))))
      .addChild(new Anchor().setDescription("Ancaster Day Centre").setUrl(new String[] {"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(496.899993896484,0.100000001490116,-368.899993896484)))))
      .addChild(new Anchor().setDescription("Creations").setUrl(new String[] {"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(467.0,0.100000001490116,-243.899993896484)))))
      .addChild(new Anchor().setDescription("Nene Day Centre, Northamtpon").setUrl(new String[] {"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(477.100006103516,0.100000001490116,-260.0)))))
      .addChild(new Anchor().setDescription("Delapre Middle School, Northampton").setUrl(new String[] {"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(474.700012207031,0.100000001490116,-259.100006103516)))))
      .addChild(new Anchor().setDescription("The Links, Brackley").setUrl(new String[] {"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(459.0,0.100000001490116,-236.399993896484)))))
      .addChild(new Anchor().setDescription("New Perspectives").setUrl(new String[] {"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(457.399993896484,0.100000001490116,-262.700012207031)))))
      .addChild(new Anchor().setDescription("UKan2").setUrl(new String[] {"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(458.700012207031,0.100000001490116,-262.700012207031)))))
      .addChild(new Anchor().setDescription("Silverstone County Infants School").setUrl(new String[] {"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(466.899993896484,0.100000001490116,-243.800003051758)))))
      .addChild(new Anchor().setDescription("Riverside Resource Centre, Towcester").setUrl(new String[] {"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("institute").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(469.5,0.100000001490116,-249.800003051758)))))
      .addChild(new Anchor().setDescription("Daventry Tertiary College").setUrl(new String[] {"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("school").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(456.700012207031,0.100000001490116,-261.799987792969)))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0).setTransparency(0.200000002980232)))
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1})
          .setCoord(new Coordinate().setPoint(getCoordinate_6_249_point()))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0).setTransparency(0.200000002980232)))
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1})
          .setCoord(new Coordinate().setPoint(getCoordinate_6_254_point()))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,1.0).setTransparency(0.200000002980232)))
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {430.0,0.0199999995529652,-335.0,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484})))))));
    }
	// end of initialize() method


		/** Large attribute array: Coordinate point field, scene-graph level=6, element #249, 108 total numbers made up of 36 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_249_point()
		{
			MFVec3f Coordinate_6_249_point = new MFVec3f(new double[] {430.0,0.0199999995529652,-335.0,435.799987792969,0.100000001490116,-335.299987792969,430.0,0.0199999995529652,-335.0,434.600006103516,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,432.700012207031,0.100000001490116,-336.600006103516,430.0,0.0199999995529652,-335.0,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969,429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309.0,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454.0,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454.0,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454.0,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516,458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458.0,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467.0,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260.0,467.0,0.0199999995529652,-243.899993896484,459.0,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969});
			return Coordinate_6_249_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=6, element #254, 108 total numbers made up of 36 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_254_point()
		{
			MFVec3f Coordinate_6_254_point = new MFVec3f(new double[] {400.0,0.0199999995529652,-385.0,400.600006103516,0.100000001490116,-392.899993896484,400.0,0.0199999995529652,-385.0,416.700012207031,0.100000001490116,-383.399993896484,430.0,0.0199999995529652,-335.0,438.299987792969,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,434.799987792969,0.100000001490116,-336.0,430.0,0.0199999995529652,-335.0,437.600006103516,0.100000001490116,-332.600006103516,430.0,0.0199999995529652,-335.0,436.299987792969,0.100000001490116,-333.399993896484,430.0,0.0199999995529652,-335.0,435.200012207031,0.100000001490116,-336.799987792969,430.0,0.0199999995529652,-335.0,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5,429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031,442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467.0,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758});
			return Coordinate_6_254_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NeedClassName model
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
        X3D thisExampleX3dModel = new NeedClassName().getX3dModel();

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
			System.out.println("WARNING: \"NeedClassName\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"NeedClassName\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
