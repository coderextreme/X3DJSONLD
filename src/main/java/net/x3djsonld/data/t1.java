package net.x3djsonld.data;

import java.util.*;
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_INTERCHANGE).setVersion(X3DObject.VERSION_3_0)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new metaObject().setName(metaObject.NAME_SOURCE     ).setContent("t1.wrl")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setAvatarSize(new float[] {200.0f,200.0f,120.0f}).setSpeed(3f).setType(new String[] {"EXAMINE","FLY","WALK"}))
    .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
    .addChild(new ViewpointObject().setDescription("looking North").setFieldOfView(0.785398125648499f).setOrientation(1.0f,0.0f,0.0f,-0.699999988079071f).setPosition(0.0f,60.0f,110.0f))
    .addChild(new ViewpointObject().setDescription("looking East").setFieldOfView(0.785398125648499f).setOrientation(0.0f,0.400000005960464f,0.0f,-1.39999997615814f).setPosition(-140.0f,30.0f,0.0f))
    .addChild(new ViewpointObject().setDescription("Overhead").setFieldOfView(0.785398125648499f).setOrientation(1.0f,0.0f,0.0f,-1.57000005245209f).setPosition(0.0f,150.0f,0.0f))
    .addChild(new ProtoDeclareObject("school").setName("school")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(0.5f,0.0f,1.0f).setTransparency(0.200000002980232f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new int[] {0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1})
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.349999994039536f,-0.349999994039536f,0.349999994039536f,0.349999994039536f,-0.349999994039536f,0.349999994039536f,0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,0.0f,0.349999994039536f,0.0f})))))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("institute").setName("institute")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,0.0f).setTransparency(0.200000002980232f)))
            .setGeometry(new BoxObject().setSize(0.699999988079071f,0.699999988079071f,0.699999988079071f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("disart_org").setName("disart_org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,0.0f)))
            .setGeometry(new SphereObject().setRadius(0.699999988079071f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("org").setName("org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("posi").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f)))
        .addField(new fieldObject().setName("col").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColorObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.400000005960464f)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new SphereObject().setRadius(1.10000002384186f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclareObject("l").setName("l")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue(new SFColorObject(0.0f,0.600000023841858f,0.0f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("r").setName("r")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue(new SFColorObject(0.0f,0.300000011920929f,1.0f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("n").setName("n")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue(new SFColorObject(1.0f,0.0f,0.200000002980232f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject("i").setName("i")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue(new SFColorObject(0.600000023841858f,0.0f,0.600000023841858f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new TransformObject().setTranslation(-468.0f,0.0f,315.0f)
      .addChild(new InlineObject().setUrl(new String[] {"t.wrl"}))
      .addChild(new AnchorObject().setDescription("Derby Women's Centre").setUrl(new String[] {"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(435.299987792969f,0.100000001490116f,-335.600006103516f)))))
      .addChild(new AnchorObject().setDescription("High Peak Community Arts").setUrl(new String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(400.0f,0.100000001490116f,-385.0f)))))
      .addChild(new AnchorObject().setDescription("Charlesworth Primary School").setUrl(new String[] {"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(400.600006103516f,0.100000001490116f,-392.899993896484f)))))
      .addChild(new AnchorObject().setDescription("Hope Valley College").setUrl(new String[] {"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(416.700012207031f,0.100000001490116f,-383.399993896484f)))))
      .addChild(new AnchorObject().setDescription("People Express").setUrl(new String[] {"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(429.899993896484f,0.100000001490116f,-319.600006103516f)))))
      .addChild(new AnchorObject().setDescription("QArts/Studios").setUrl(new String[] {"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(430.0f,0.100000001490116f,-335.0f)))))
      .addChild(new AnchorObject().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new String[] {"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(435.799987792969f,0.100000001490116f,-335.299987792969f)))))
      .addChild(new AnchorObject().setDescription("Park View Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(438.299987792969f,0.100000001490116f,-338.600006103516f)))))
      .addChild(new AnchorObject().setDescription("First Movement").setUrl(new String[] {"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(429.899993896484f,0.100000001490116f,-360.299987792969f)))))
      .addChild(new AnchorObject().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new String[] {"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(434.600006103516f,0.100000001490116f,-338.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Beckett Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(434.799987792969f,0.100000001490116f,-336.0f)))))
      .addChild(new AnchorObject().setDescription("Brackensdale Junior School, Communty Unit").setUrl(new String[] {"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(432.700012207031f,0.100000001490116f,-336.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Moorhead Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(437.600006103516f,0.100000001490116f,-332.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Derby Deaf Club").setUrl(new String[] {"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(434.700012207031f,0.100000001490116f,-336.899993896484f)))))
      .addChild(new AnchorObject().setDescription("Nightingale Junior, Derby").setUrl(new String[] {"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(436.299987792969f,0.100000001490116f,-333.399993896484f)))))
      .addChild(new AnchorObject().setDescription("St Mary's Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(435.200012207031f,0.100000001490116f,-336.799987792969f)))))
      .addChild(new AnchorObject().setDescription("Griffe Field Primary, Derby").setUrl(new String[] {"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(432.5f,0.100000001490116f,-332.5f)))))
      .addChild(new AnchorObject().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new String[] {"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(474.700012207031f,0.100000001490116f,-318.799987792969f)))))
      .addChild(new AnchorObject().setDescription("Ivy House Special School, Derby").setUrl(new String[] {"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(436.100006103516f,0.100000001490116f,-334.899993896484f)))))
      .addChild(new AnchorObject().setDescription("Oakham Day Centre, Rutland").setUrl(new String[] {"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(485.600006103516f,0.100000001490116f,-309.0f)))))
      .addChild(new AnchorObject().setDescription("Parkwood School, Alfreton").setUrl(new String[] {"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(440.5f,0.100000001490116f,-355.5f)))))
      .addChild(new AnchorObject().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new String[] {"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(434.799987792969f,0.100000001490116f,-371.5f)))))
      .addChild(new AnchorObject().setDescription("Ashgate Croft School, Chesterfield").setUrl(new String[] {"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(436.299987792969f,0.100000001490116f,-371.700012207031f)))))
      .addChild(new AnchorObject().setDescription("Highfields School, Matlock").setUrl(new String[] {"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(431.200012207031f,0.100000001490116f,-361.200012207031f)))))
      .addChild(new AnchorObject().setDescription("City Arts").setUrl(new String[] {"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(455.899993896484f,0.100000001490116f,-341.299987792969f)))))
      .addChild(new AnchorObject().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new String[] {"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(456.100006103516f,0.100000001490116f,-341.5f)))))
      .addChild(new AnchorObject().setDescription("Watering Seeds").setUrl(new String[] {"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(454.0f,0.100000001490116f,-361.299987792969f)))))
      .addChild(new AnchorObject().setDescription("Red oaks").setUrl(new String[] {"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(457.399993896484f,0.100000001490116f,-359.600006103516f)))))
      .addChild(new AnchorObject().setDescription("West Notts College").setUrl(new String[] {"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(454.200012207031f,0.100000001490116f,-358.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Willow Wood Day Centre").setUrl(new String[] {"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(450.600006103516f,0.100000001490116f,-358.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Fased In The Arts").setUrl(new String[] {"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(440.0f,0.100000001490116f,-350.0f)))))
      .addChild(new AnchorObject().setDescription("27a Access Artspace").setUrl(new String[] {"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(458.899993896484f,0.100000001490116f,-304.299987792969f)))))
      .addChild(new AnchorObject().setDescription("Roman Way Day Centre, Market Harborough").setUrl(new String[] {"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(473.5f,0.100000001490116f,-287.5f)))))
      .addChild(new AnchorObject().setDescription("Mosaic, Leicester Disability Services").setUrl(new String[] {"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(458.0f,0.100000001490116f,-304.5f)))))
      .addChild(new AnchorObject().setDescription("Bamboozle Theatre Company").setUrl(new String[] {"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(457.100006103516f,0.100000001490116f,-300.799987792969f)))))
      .addChild(new AnchorObject().setDescription("Ellesmere College, Leicester").setUrl(new String[] {"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(456.799987792969f,0.100000001490116f,-302.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Ashmount School, Loughborough").setUrl(new String[] {"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(453.299987792969f,0.100000001490116f,-318.600006103516f)))))
      .addChild(new AnchorObject().setDescription("Mantle Community Arts").setUrl(new String[] {"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(442.399993896484f,0.100000001490116f,-314.5f)))))
      .addChild(new AnchorObject().setDescription("Forrest Way School").setUrl(new String[] {"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(444.600006103516f,0.100000001490116f,-313.700012207031f)))))
      .addChild(new AnchorObject().setDescription("Ibstock Community College").setUrl(new String[] {"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(440.600006103516f,0.100000001490116f,-310.399993896484f)))))
      .addChild(new AnchorObject().setDescription("Artlink East").setUrl(new String[] {"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(491.600006103516f,0.100000001490116f,-335.700012207031f)))))
      .addChild(new AnchorObject().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new String[] {"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(491.399993896484f,0.100000001490116f,-336.799987792969f)))))
      .addChild(new AnchorObject().setDescription("Ancaster Day Centre").setUrl(new String[] {"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(496.899993896484f,0.100000001490116f,-368.899993896484f)))))
      .addChild(new AnchorObject().setDescription("Creations").setUrl(new String[] {"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(467.0f,0.100000001490116f,-243.899993896484f)))))
      .addChild(new AnchorObject().setDescription("Nene Day Centre, Northamtpon").setUrl(new String[] {"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(477.100006103516f,0.100000001490116f,-260.0f)))))
      .addChild(new AnchorObject().setDescription("Delapre Middle School, Northampton").setUrl(new String[] {"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(474.700012207031f,0.100000001490116f,-259.100006103516f)))))
      .addChild(new AnchorObject().setDescription("The Links, Brackley").setUrl(new String[] {"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(459.0f,0.100000001490116f,-236.399993896484f)))))
      .addChild(new AnchorObject().setDescription("New Perspectives").setUrl(new String[] {"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(457.399993896484f,0.100000001490116f,-262.700012207031f)))))
      .addChild(new AnchorObject().setDescription("UKan2").setUrl(new String[] {"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(458.700012207031f,0.100000001490116f,-262.700012207031f)))))
      .addChild(new AnchorObject().setDescription("Silverstone County Infants School").setUrl(new String[] {"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(466.899993896484f,0.100000001490116f,-243.800003051758f)))))
      .addChild(new AnchorObject().setDescription("Riverside Resource Centre, Towcester").setUrl(new String[] {"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(469.5f,0.100000001490116f,-249.800003051758f)))))
      .addChild(new AnchorObject().setDescription("Daventry Tertiary College").setUrl(new String[] {"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstanceObject("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(456.700012207031f,0.100000001490116f,-261.799987792969f)))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,0.0f,0.0f).setTransparency(0.200000002980232f)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1})
          .setCoord(new CoordinateObject().setPoint(getCoordinate_6_248_point()))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setEmissiveColor(0.0f,1.0f,0.0f).setTransparency(0.200000002980232f)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1})
          .setCoord(new CoordinateObject().setPoint(getCoordinate_6_253_point()))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,0.0f,1.0f).setTransparency(0.200000002980232f)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1})
          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {430.0f,0.0199999995529652f,-335.0f,429.899993896484f,0.100000001490116f,-360.299987792969f,442.399993896484f,0.0199999995529652f,-314.5f,429.899993896484f,0.100000001490116f,-319.600006103516f,457.399993896484f,0.0199999995529652f,-262.700012207031f,467.0f,0.100000001490116f,-243.899993896484f,458.700012207031f,0.0199999995529652f,-262.700012207031f,457.399993896484f,0.100000001490116f,-262.700012207031f,458.700012207031f,0.0199999995529652f,-262.700012207031f,467.0f,0.100000001490116f,-243.899993896484f})))))));
    }
	// end of initialize() method


		/** Large attribute array: Coordinate point field, scene-graph level=6, element #248, 108 total numbers made up of 36 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_6_248_point()
		{
			MFVec3fObject Coordinate_6_248_point = new MFVec3fObject(new float[] {430.0f,0.0199999995529652f,-335.0f,435.799987792969f,0.100000001490116f,-335.299987792969f,430.0f,0.0199999995529652f,-335.0f,434.600006103516f,0.100000001490116f,-338.600006103516f,430.0f,0.0199999995529652f,-335.0f,432.700012207031f,0.100000001490116f,-336.600006103516f,430.0f,0.0199999995529652f,-335.0f,434.700012207031f,0.100000001490116f,-336.899993896484f,429.899993896484f,0.0199999995529652f,-360.299987792969f,474.700012207031f,0.100000001490116f,-318.799987792969f,429.899993896484f,0.0199999995529652f,-360.299987792969f,485.600006103516f,0.100000001490116f,-309.0f,429.899993896484f,0.0199999995529652f,-360.299987792969f,434.799987792969f,0.100000001490116f,-371.5f,454.0f,0.0199999995529652f,-361.299987792969f,457.399993896484f,0.100000001490116f,-359.600006103516f,454.0f,0.0199999995529652f,-361.299987792969f,454.200012207031f,0.100000001490116f,-358.600006103516f,454.0f,0.0199999995529652f,-361.299987792969f,450.600006103516f,0.100000001490116f,-358.600006103516f,458.899993896484f,0.0199999995529652f,-304.299987792969f,473.5f,0.100000001490116f,-287.5f,458.899993896484f,0.0199999995529652f,-304.299987792969f,458.0f,0.100000001490116f,-304.5f,491.600006103516f,0.0199999995529652f,-335.700012207031f,491.399993896484f,0.100000001490116f,-336.799987792969f,491.600006103516f,0.0199999995529652f,-335.700012207031f,496.899993896484f,0.100000001490116f,-368.899993896484f,467.0f,0.0199999995529652f,-243.899993896484f,477.100006103516f,0.100000001490116f,-260.0f,467.0f,0.0199999995529652f,-243.899993896484f,459.0f,0.100000001490116f,-236.399993896484f,458.700012207031f,0.0199999995529652f,-262.700012207031f,469.5f,0.100000001490116f,-249.800003051758f,458.700012207031f,0.0199999995529652f,-262.700012207031f,456.700012207031f,0.100000001490116f,-261.799987792969f});
			return Coordinate_6_248_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=6, element #253, 108 total numbers made up of 36 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_6_253_point()
		{
			MFVec3fObject Coordinate_6_253_point = new MFVec3fObject(new float[] {400.0f,0.0199999995529652f,-385.0f,400.600006103516f,0.100000001490116f,-392.899993896484f,400.0f,0.0199999995529652f,-385.0f,416.700012207031f,0.100000001490116f,-383.399993896484f,430.0f,0.0199999995529652f,-335.0f,438.299987792969f,0.100000001490116f,-338.600006103516f,430.0f,0.0199999995529652f,-335.0f,434.799987792969f,0.100000001490116f,-336.0f,430.0f,0.0199999995529652f,-335.0f,437.600006103516f,0.100000001490116f,-332.600006103516f,430.0f,0.0199999995529652f,-335.0f,436.299987792969f,0.100000001490116f,-333.399993896484f,430.0f,0.0199999995529652f,-335.0f,435.200012207031f,0.100000001490116f,-336.799987792969f,430.0f,0.0199999995529652f,-335.0f,432.5f,0.100000001490116f,-332.5f,429.899993896484f,0.0199999995529652f,-360.299987792969f,436.100006103516f,0.100000001490116f,-334.899993896484f,429.899993896484f,0.0199999995529652f,-360.299987792969f,440.5f,0.100000001490116f,-355.5f,429.899993896484f,0.0199999995529652f,-360.299987792969f,436.299987792969f,0.100000001490116f,-371.700012207031f,429.899993896484f,0.0199999995529652f,-360.299987792969f,431.200012207031f,0.100000001490116f,-361.200012207031f,457.100006103516f,0.0199999995529652f,-300.799987792969f,456.799987792969f,0.100000001490116f,-302.600006103516f,457.100006103516f,0.0199999995529652f,-300.799987792969f,453.299987792969f,0.100000001490116f,-318.600006103516f,442.399993896484f,0.0199999995529652f,-314.5f,444.600006103516f,0.100000001490116f,-313.700012207031f,442.399993896484f,0.0199999995529652f,-314.5f,440.600006103516f,0.100000001490116f,-310.399993896484f,467.0f,0.0199999995529652f,-243.899993896484f,474.700012207031f,0.100000001490116f,-259.100006103516f,457.399993896484f,0.0199999995529652f,-262.700012207031f,466.899993896484f,0.100000001490116f,-243.800003051758f});
			return Coordinate_6_253_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return NeedClassName model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new NeedClassName().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"NeedClassName\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"NeedClassName\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
