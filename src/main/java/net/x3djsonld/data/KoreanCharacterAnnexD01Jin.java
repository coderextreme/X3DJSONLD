package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/KoreanCharacterAnnexD01Jin.java">KoreanCharacterAnnexD01Jin.java</a> source, <a href="../../../HumanoidAnimation/KoreanCharacterAnnexD01JinIndex.html" target="_top">KoreanCharacterAnnexD01Jin catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d">KoreanCharacterAnnexD01Jin.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Jin Hoon Lee and Min Joo Lee </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Chul Hee Jung and Myeong Won Lee </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 31 March 2011 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 1 November 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 May 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> KoreanCharacter00ReadMe.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HumanoidAnimation/KoreanCharacterHumanMotion_Infotech2014_140706.pdf">KoreanCharacterHumanMotion_Infotech2014_140706.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HumanoidAnimation/KoreanCharactersIllustrated.pdf">KoreanCharactersIllustrated.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> 3DS MAX, <a href="http://www.autodesk.com/products/autodesk-3ds-max/overview" target="_blank">http://www.autodesk.com/products/autodesk-3ds-max/overview</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Suwon HAnim Converter </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Gnu Image Manipulation Program, <a href="http://www.gimp.org" target="_blank">http://www.gimp.org</a> </td>
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

	* @author Jin Hoon Lee and Min Joo Lee
 */

public class KoreanCharacterAnnexD01Jin
{
	/** Default constructor to create this object. */
	public KoreanCharacterAnnexD01Jin ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_4_0)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("HAnim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("KoreanCharacterAnnexD01Jin.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("28 May 2018"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Suwon HAnim Converter"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setSpeed(1.5f))
    .addChild(new ViewpointObject().setDescription("AnnexD01Jin").setCenterOfRotation(0.0f,1.0f,0.0f).setPosition(0.0f,1.0f,3.0f))
    .addChild(new HAnimHumanoidObject("hanim_AnnexD01Jin").setName("AnnexD01Jin").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimHumanoid displayBBox: $isNumeric=false, $attributeType=, value='false']
).setInfo(new String[] {"humanoidVersion=2.0"}).setJointBindingPositions(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f})).setJointBindingRotations(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f})).setJointBindingScales(new MFVec3fObject(new float[] {1.0f,1.0f,1.0f})).setLoa(-1).setScale(0.0225f,0.0225f,0.0225f).setSkeletalConfiguration("BASIC").setVersion("2.0")
      .addSkeleton(new HAnimJointObject("hanim_HumanoidRoot").setName("HumanoidRoot").setCenter(0.0f,30.53f,-0.7076f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
        .addChild(new HAnimSegmentObject("hanim_sacrum").setName("sacrum").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
          .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,30.53f,-0.7076f)
            .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                .setTexture(new ImageTextureObject("Annex01JinTextureAtlas").setUrl(new String[] {"Jin.png","http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/Jin.png"})))
              .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_8_24_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_24_texCoordIndex())
                .setCoord(new CoordinateObject().setPoint(getCoordinate_9_24_point()))
                .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f})))))))
        .addChild(new HAnimJointObject("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0f,35.8f,-0.7076f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
          .addChild(new HAnimSegmentObject("hanim_pelvis").setName("pelvis").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,35.8f,-0.7076f)
              .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                  .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_9_33_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_33_texCoordIndex())
                  .setCoord(new CoordinateObject().setPoint(getCoordinate_10_33_point()))
                  .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f})))))))
          .addChild(new HAnimJointObject("hanim_l_hip").setName("l_hip").setCenter(4.207f,32.02f,-0.8155f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new HAnimSegmentObject("hanim_l_thigh").setName("l_thigh").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(4.207f,32.02f,-0.8155f)
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                    .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                  .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_10_42_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_42_texCoordIndex())
                    .setCoord(new CoordinateObject().setPoint(getCoordinate_11_42_point()))
                    .setTexCoord(new TextureCoordinateObject().setPoint(getTextureCoordinate_11_43_point()))))))
            .addChild(new HAnimJointObject("hanim_l_knee").setName("l_knee").setCenter(4.116f,17.26f,-0.8639f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("hanim_l_calf").setName("l_calf").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(4.116f,17.26f,-0.8639f)
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                      .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                    .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_11_51_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_51_texCoordIndex())
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.7186f,0.9688f,0.0234f,0.3632f,0.9688f,0.9354f,-0.4353f,0.9688f,1.12f,-1.076f,0.9688f,0.603f,-1.076f,0.9688f,-0.3911f,-0.4353f,0.9688f,-0.9079f,0.3632f,0.9688f,-0.7235f,2.337f,-4.613f,0.0234f,1.46f,-3.622f,2.019f,1.236f,-1.628f,2.42f,2.118f,-1.912f,0.0234f,-0.8111f,-3.622f,2.567f,-0.7468f,-1.628f,2.903f,-2.254f,-4.613f,1.255f,-2.337f,-1.912f,0.9793f,-2.254f,-5.383f,-1.368f,-2.337f,-1.912f,-0.9325f,-0.8111f,-5.383f,-2.903f,-0.7468f,-1.912f,-2.368f,1.46f,-5.383f,-2.355f,1.236f,-1.912f,-1.885f,1.121f,-0.0032f,1.896f,1.933f,-0.0032f,0.0234f,-0.7056f,-0.0032f,2.318f,-2.17f,-0.0032f,1.136f,-2.17f,-0.0032f,-0.9244f,-0.7056f,-0.0032f,-2.061f,1.121f,-0.0032f,-1.64f,1.607f,-12.92f,0.0032f,0.9216f,-12.91f,1.565f,-0.619f,-12.91f,1.951f,-1.854f,-12.92f,0.8701f,-1.854f,-12.94f,-0.9762f,-0.619f,-12.94f,-1.742f,0.9216f,-12.94f,-1.356f,0.7072f,-14.53f,0.0239f,0.3604f,-14.53f,0.814f,-0.4188f,-14.53f,1.009f,-1.044f,-14.53f,0.4624f,-1.044f,-14.54f,-0.4714f,-0.4188f,-14.54f,-0.8587f,0.3604f,-14.54f,-0.6635f})))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f})))))))
              .addChild(new HAnimJointObject("hanim_l_talocrural").setName("l_talocrural").setCenter(3.854f,3.939f,-0.7038f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("hanim_l_hindfoot").setName("l_hindfoot").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(3.854f,3.939f,-0.7038f)
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                        .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                      .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_12_60_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_60_texCoordIndex())
                        .setCoord(new CoordinateObject().setPoint(getCoordinate_13_60_point()))
                        .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f})))))))
                .addChild(new HAnimJointObject("hanim_l_metatarsophalangeal").setName("l_metatarsophalangeal").setCenter(3.854f,3.64f,0.7402f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("hanim_l_middistal").setName("l_middistal").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(3.854f,3.64f,0.7402f)
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                          .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                        .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {3,,4,,10,,-1,,3,,10,,11,,-1,,0,,3,,11,,-1,,1,,0,,11,,-1,,11,,12,,1,,-1,,1,,12,,16,,-1,,16,,9,,1,,-1,,2,,17,,10,,-1,,10,,4,,2,,-1,,13,,8,,6,,-1,,14,,13,,6,,-1,,5,,14,,6,,-1,,7,,15,,14,,-1,,14,,5,,7,,-1,,7,,9,,16,,-1,,16,,15,,7,,-1,,2,,8,,13,,-1,,13,,17,,2,,-1,,20,,21,,22,,-1,,20,,22,,23,,-1,,20,,23,,24,,-1,,19,,20,,24,,-1,,19,,24,,18,,-1,,0,,1,,19,,-1,,19,,18,,0,,-1,,1,,9,,20,,-1,,20,,19,,1,,-1,,9,,7,,21,,-1,,21,,20,,9,,-1,,7,,5,,22,,-1,,22,,21,,7,,-1,,5,,6,,23,,-1,,23,,22,,5,,-1,,6,,3,,24,,-1,,24,,23,,6,,-1,,3,,0,,18,,-1,,18,,24,,3,,-1,,6,,8,,2,,-1,,3,,6,,2,,-1,,4,,3,,2,,-1,,28,,26,,25,,-1,,25,,29,,28,,-1,,35,,27,,26,,-1,,26,,28,,35,,-1,,27,,35,,40,,-1,,25,,26,,31,,-1,,31,,30,,25,,-1,,31,,26,,27,,-1,,27,,32,,31,,-1,,32,,27,,40,,-1,,40,,41,,32,,-1,,42,,29,,25,,-1,,25,,30,,42,,-1,,28,,29,,34,,-1,,34,,33,,28,,-1,,35,,28,,33,,-1,,33,,36,,35,,-1,,36,,40,,35,,-1,,34,,37,,38,,-1,,38,,33,,34,,-1,,38,,39,,36,,-1,,36,,33,,38,,-1,,39,,41,,40,,-1,,40,,36,,39,,-1,,42,,37,,34,,-1,,34,,29,,42,,-1}).setTexCoordIndex(getIndexedFaceSet_13_69_texCoordIndex())
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {2.927f,-1.627f,-1.013f,2.089f,-3.648f,-1.013f,0.0f,0.2797f,0.3064f,2.045f,-0.3017f,-1.013f,1.695f,0.0029f,-0.0151f,-2.927f,-1.627f,-1.013f,-2.045f,-0.3017f,-1.013f,-2.089f,-3.648f,-1.013f,-1.695f,0.0029f,-0.0151f,0.0f,-3.648f,-1.013f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,0.0f,-3.648f,0.9192f,0.0f,-0.0274f,1.661f,2.405f,-1.656f,-1.915f,1.75f,-2.942f,-1.915f,0.0f,-2.942f,-1.915f,-1.75f,-2.942f,-1.915f,-2.405f,-1.656f,-1.915f,-1.742f,-0.5681f,-1.915f,1.742f,-0.5681f,-1.915f,1.784f,-0.648f,2.332f,2.216f,-2.267f,4.144f,2.216f,-3.648f,3.776f,0.0f,-2.267f,5.463f,0.0f,-0.5463f,3.95f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,-2.216f,-2.267f,4.144f,-1.784f,-0.648f,2.332f,0.0f,-3.648f,5.096f,-2.216f,-3.648f,3.776f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,0.0f,-3.648f,3.776f,0.0f,-3.648f,0.9192f,0.0f,-0.0274f,1.661f})))
                          .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f})))))))))))
          .addChild(new HAnimJointObject("hanim_r_hip").setName("r_hip").setCenter(-4.207f,32.02f,-0.8155f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new HAnimSegmentObject("hanim_r_thigh").setName("r_thigh").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-4.207f,32.02f,-0.8155f)
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                    .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                  .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_10_82_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_82_texCoordIndex())
                    .setCoord(new CoordinateObject().setPoint(getCoordinate_11_82_point()))
                    .setTexCoord(new TextureCoordinateObject().setPoint(getTextureCoordinate_11_83_point()))))))
            .addChild(new HAnimJointObject("hanim_r_knee").setName("r_knee").setCenter(-4.116f,17.26f,-0.8639f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("hanim_r_calf").setName("r_calf").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-4.116f,17.26f,-0.8639f)
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                      .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                    .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_11_91_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_91_texCoordIndex())
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.7186f,0.9688f,0.0234f,-0.3632f,0.9688f,0.9354f,0.4353f,0.9688f,1.12f,1.076f,0.9688f,0.603f,1.076f,0.9688f,-0.3911f,0.4353f,0.9688f,-0.9079f,-0.3632f,0.9688f,-0.7235f,-2.337f,-4.613f,0.0234f,-1.46f,-3.622f,2.019f,-1.236f,-1.628f,2.42f,-2.118f,-1.912f,0.0234f,0.8111f,-3.622f,2.567f,0.7468f,-1.628f,2.903f,2.254f,-4.613f,1.255f,2.337f,-1.912f,0.9793f,2.254f,-5.383f,-1.368f,2.337f,-1.912f,-0.9325f,0.8111f,-5.383f,-2.903f,0.7468f,-1.912f,-2.368f,-1.46f,-5.383f,-2.355f,-1.236f,-1.912f,-1.885f,-1.121f,-0.0032f,1.896f,-1.933f,-0.0032f,0.0234f,0.7056f,-0.0032f,2.318f,2.17f,-0.0032f,1.136f,2.17f,-0.0032f,-0.9244f,0.7056f,-0.0032f,-2.061f,-1.121f,-0.0032f,-1.64f,-1.607f,-12.92f,0.0032f,-0.9216f,-12.91f,1.565f,0.619f,-12.91f,1.951f,1.854f,-12.92f,0.8701f,1.854f,-12.94f,-0.9762f,0.619f,-12.94f,-1.742f,-0.9216f,-12.94f,-1.356f,-0.7072f,-14.53f,0.0239f,-0.3604f,-14.53f,0.814f,0.4188f,-14.53f,1.009f,1.044f,-14.53f,0.4624f,1.044f,-14.54f,-0.4714f,0.4188f,-14.54f,-0.8587f,-0.3604f,-14.54f,-0.6635f})))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f})))))))
              .addChild(new HAnimJointObject("hanim_r_talocrural").setName("r_talocrural").setCenter(-3.854f,3.939f,-0.7038f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("hanim_r_hindfoot").setName("r_hindfoot").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-3.854f,3.939f,-0.7038f)
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                        .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                      .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_12_100_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_100_texCoordIndex())
                        .setCoord(new CoordinateObject().setPoint(getCoordinate_13_100_point()))
                        .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f})))))))
                .addChild(new HAnimJointObject("hanim_r_metatarsophalangeal").setName("r_metatarsophalangeal").setCenter(-3.854f,3.64f,0.7402f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("hanim_r_middistal").setName("r_middistal").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-3.854f,3.64f,0.7402f)
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                          .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                        .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {10,,4,,3,,-1,,11,,10,,3,,-1,,0,,11,,3,,-1,,1,,12,,11,,-1,,11,,0,,1,,-1,,1,,9,,16,,-1,,16,,12,,1,,-1,,2,,4,,10,,-1,,10,,17,,2,,-1,,6,,8,,13,,-1,,6,,13,,14,,-1,,5,,6,,14,,-1,,7,,5,,14,,-1,,14,,15,,7,,-1,,7,,15,,16,,-1,,16,,9,,7,,-1,,2,,17,,13,,-1,,13,,8,,2,,-1,,19,,18,,24,,-1,,22,,21,,20,,-1,,23,,22,,20,,-1,,24,,23,,20,,-1,,19,,24,,20,,-1,,0,,18,,19,,-1,,19,,1,,0,,-1,,1,,19,,20,,-1,,20,,9,,1,,-1,,9,,20,,21,,-1,,21,,7,,9,,-1,,7,,21,,22,,-1,,22,,5,,7,,-1,,5,,22,,23,,-1,,23,,6,,5,,-1,,6,,23,,24,,-1,,24,,3,,6,,-1,,3,,24,,18,,-1,,18,,0,,3,,-1,,2,,8,,6,,-1,,2,,6,,3,,-1,,4,,2,,3,,-1,,28,,29,,25,,-1,,25,,26,,28,,-1,,35,,28,,26,,-1,,26,,27,,35,,-1,,27,,40,,35,,-1,,25,,30,,31,,-1,,31,,26,,25,,-1,,31,,32,,27,,-1,,27,,26,,31,,-1,,32,,41,,40,,-1,,40,,27,,32,,-1,,42,,30,,25,,-1,,25,,29,,42,,-1,,28,,33,,34,,-1,,34,,29,,28,,-1,,35,,36,,33,,-1,,33,,28,,35,,-1,,36,,35,,40,,-1,,34,,33,,38,,-1,,38,,37,,34,,-1,,38,,33,,36,,-1,,36,,39,,38,,-1,,39,,36,,40,,-1,,40,,41,,39,,-1,,42,,29,,34,,-1,,34,,37,,42,,-1}).setTexCoordIndex(getIndexedFaceSet_13_109_texCoordIndex())
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-2.927f,-1.627f,-1.013f,-2.089f,-3.648f,-1.013f,0.0f,0.2797f,0.3064f,-2.045f,-0.3017f,-1.013f,-1.695f,0.0029f,-0.0151f,2.927f,-1.627f,-1.013f,2.045f,-0.3017f,-1.013f,2.089f,-3.648f,-1.013f,1.695f,0.0029f,-0.0151f,0.0f,-3.648f,-1.013f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,0.0f,-3.648f,0.9192f,0.0f,-0.0274f,1.661f,-2.405f,-1.656f,-1.915f,-1.75f,-2.942f,-1.915f,0.0f,-2.942f,-1.915f,1.75f,-2.942f,-1.915f,2.405f,-1.656f,-1.915f,1.742f,-0.5681f,-1.915f,-1.742f,-0.5681f,-1.915f,-1.784f,-0.648f,2.332f,-2.216f,-2.267f,4.144f,-2.216f,-3.648f,3.776f,0.0f,-2.267f,5.463f,0.0f,-0.5463f,3.95f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,2.216f,-2.267f,4.144f,1.784f,-0.648f,2.332f,0.0f,-3.648f,5.096f,2.216f,-3.648f,3.776f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,0.0f,-3.648f,3.776f,0.0f,-3.648f,0.9192f,0.0f,-0.0274f,1.661f})))
                          .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f})))))))))))
          .addChild(new HAnimJointObject("hanim_vl5").setName("vl5").setCenter(0.0f,40.23f,-0.8527f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new HAnimSegmentObject("hanim_l5").setName("l5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,40.23f,-0.8527f)
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                    .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                  .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_10_122_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_122_texCoordIndex())
                    .setCoord(new CoordinateObject().setPoint(getCoordinate_11_122_point()))
                    .setTexCoord(new TextureCoordinateObject().setPoint(getTextureCoordinate_11_123_point()))))))
            .addChild(new HAnimJointObject("hanim_skullbase").setName("skullbase").setCenter(0.0f,57.43f,-0.6863f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("hanim_skull").setName("skull").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,57.43f,-0.6863f)
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                      .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                    .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_11_131_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_131_texCoordIndex())
                      .setCoord(new CoordinateObject().setPoint(getCoordinate_12_131_point()))
                      .setTexCoord(new TextureCoordinateObject().setPoint(getTextureCoordinate_12_132_point())))))))
            .addChild(new HAnimJointObject("hanim_l_shoulder").setName("l_shoulder").setCenter(5.975f,52.0f,-0.1452f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("hanim_l_upperarm").setName("l_upperarm").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(5.975f,52.0f,-0.1452f)
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                      .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                    .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_11_141_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_141_texCoordIndex())
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {2.525f,1.246f,-1.68f,3.681f,1.236f,0.0337f,2.408f,1.247f,1.663f,0.4657f,1.264f,0.9556f,0.5379f,1.264f,-1.11f,2.743f,-0.0209f,-2.31f,4.339f,-0.0351f,0.057f,2.581f,-0.0195f,2.307f,-0.1009f,0.0044f,1.33f,-0.0013f,0.0035f,-1.523f,2.72f,-2.534f,-2.31f,4.317f,-2.548f,0.057f,2.559f,-2.533f,2.307f,-0.1233f,-2.509f,1.33f,-0.0237f,-2.51f,-1.523f,2.759f,-3.609f,-2.442f,4.448f,-3.624f,0.0619f,2.588f,-3.608f,2.442f,-0.2497f,-3.583f,1.409f,-0.1443f,-3.583f,-1.61f,2.245f,-1.758f,-1.939f,3.465f,-1.769f,-0.4543f,2.834f,-1.763f,1.629f,1.223f,-1.749f,1.432f,0.8596f,-1.746f,-0.7734f,2.263f,-7.566f,-1.569f,3.531f,-7.577f,-0.378f,2.875f,-7.571f,1.293f,1.202f,-7.556f,1.135f,0.8242f,-7.553f,-0.6339f,2.267f,-11.62f,-1.511f,3.487f,-11.63f,-0.3651f,2.856f,-11.62f,1.243f,1.245f,-11.61f,1.091f,0.8817f,-11.6f,-0.6115f,2.213f,-12.17f,-0.8985f,2.928f,-12.17f,-0.2266f,2.558f,-12.17f,0.7161f,1.614f,-12.16f,0.6268f,1.401f,-12.16f,-0.3711f})))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f})))))))
              .addChild(new HAnimJointObject("hanim_l_elbow").setName("l_elbow").setCenter(8.093f,40.38f,-0.2502f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("hanim_l_forearm").setName("l_forearm").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(8.093f,40.38f,-0.2502f)
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                        .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                      .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {2,,1,,0,,-1,,3,,2,,0,,-1,,4,,3,,0,,-1,,0,,1,,6,,-1,,6,,5,,0,,-1,,1,,2,,7,,-1,,7,,6,,1,,-1,,2,,3,,8,,-1,,8,,7,,2,,-1,,3,,4,,9,,-1,,9,,8,,3,,-1,,4,,0,,5,,-1,,5,,9,,4,,-1,,5,,6,,11,,-1,,11,,10,,5,,-1,,6,,7,,12,,-1,,12,,11,,6,,-1,,7,,8,,13,,-1,,13,,12,,7,,-1,,8,,9,,14,,-1,,14,,13,,8,,-1,,9,,5,,10,,-1,,10,,14,,9,,-1,,10,,11,,16,,-1,,16,,15,,10,,-1,,11,,12,,17,,-1,,17,,16,,11,,-1,,12,,13,,18,,-1,,18,,17,,12,,-1,,13,,14,,19,,-1,,19,,18,,13,,-1,,14,,10,,15,,-1,,15,,19,,14,,-1,,21,,22,,23,,-1,,20,,21,,23,,-1,,24,,20,,23,,-1,,21,,20,,15,,-1,,15,,16,,21,,-1,,22,,21,,16,,-1,,16,,17,,22,,-1,,23,,22,,17,,-1,,17,,18,,23,,-1,,24,,23,,18,,-1,,18,,19,,24,,-1,,20,,24,,19,,-1,,19,,15,,20,,-1}).setTexCoordIndex(new int[] {2,,25,,26,,-1,,3,,2,,26,,-1,,4,,3,,26,,-1,,0,,1,,6,,-1,,6,,5,,0,,-1,,27,,2,,7,,-1,,7,,28,,27,,-1,,2,,3,,8,,-1,,8,,7,,2,,-1,,3,,4,,9,,-1,,9,,8,,3,,-1,,4,,0,,5,,-1,,5,,9,,4,,-1,,5,,6,,11,,-1,,11,,10,,5,,-1,,29,,7,,12,,-1,,12,,30,,29,,-1,,7,,8,,13,,-1,,13,,12,,7,,-1,,8,,9,,14,,-1,,14,,13,,8,,-1,,9,,5,,10,,-1,,10,,14,,9,,-1,,10,,11,,16,,-1,,16,,15,,10,,-1,,31,,12,,17,,-1,,17,,32,,31,,-1,,12,,13,,18,,-1,,18,,17,,12,,-1,,13,,14,,19,,-1,,19,,18,,13,,-1,,14,,10,,15,,-1,,15,,19,,14,,-1,,34,,22,,23,,-1,,33,,34,,23,,-1,,24,,33,,23,,-1,,21,,20,,15,,-1,,15,,16,,21,,-1,,22,,36,,35,,-1,,35,,17,,22,,-1,,23,,22,,17,,-1,,17,,18,,23,,-1,,24,,23,,18,,-1,,18,,19,,24,,-1,,20,,24,,19,,-1,,19,,15,,20,,-1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.215f,0.3047f,-1.152f,1.155f,0.2966f,-0.2588f,0.6199f,0.3013f,1.04f,-0.6505f,0.3122f,0.9491f,-0.9008f,0.3143f,-0.4054f,0.1442f,-0.8448f,-1.625f,1.472f,-0.8561f,-0.4271f,0.7164f,-0.8496f,1.625f,-1.079f,-0.8342f,1.482f,-1.433f,-0.8312f,-0.6588f,0.1328f,-3.5f,-1.607f,1.551f,-3.513f,-0.4225f,0.781f,-2.925f,1.61f,-1.136f,-2.909f,1.468f,-1.551f,-3.486f,-0.6519f,0.0592f,-8.713f,-1.437f,1.093f,-8.722f,-0.1279f,0.5047f,-8.716f,1.51f,-0.8932f,-8.704f,1.377f,-1.169f,-8.702f,-0.3428f,0.0092f,-9.336f,-0.8855f,0.7154f,-9.342f,0.0084f,0.3135f,-9.339f,1.043f,-0.6412f,-9.331f,0.9519f,-0.8292f,-9.329f,-0.1383f})))
                        .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f})))))))
                .addChild(new HAnimJointObject("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(7.808f,31.46f,-0.05849f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("hanim_l_hand").setName("l_hand").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(7.808f,31.46f,-0.05849f)
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                          .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                        .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {4,,5,,0,,-1,,0,,2,,4,,-1,,6,,7,,3,,-1,,3,,1,,6,,-1,,1,,0,,5,,-1,,5,,6,,1,,-1,,8,,9,,5,,-1,,5,,4,,8,,-1,,10,,11,,7,,-1,,7,,6,,10,,-1,,9,,10,,6,,-1,,6,,5,,9,,-1,,12,,13,,9,,-1,,9,,8,,12,,-1,,14,,15,,11,,-1,,11,,10,,14,,-1,,13,,14,,10,,-1,,10,,9,,13,,-1,,4,,2,,16,,-1,,2,,3,,7,,-1,,7,,16,,2,,-1,,17,,19,,18,,-1,,18,,20,,17,,-1,,21,,16,,7,,-1,,7,,11,,21,,-1,,8,,21,,12,,-1,,12,,21,,11,,-1,,11,,15,,12,,-1,,13,,12,,15,,-1,,15,,14,,13,,-1,,8,,4,,19,,-1,,19,,17,,8,,-1,,4,,16,,18,,-1,,18,,19,,4,,-1,,16,,21,,20,,-1,,20,,18,,16,,-1,,21,,8,,17,,-1,,17,,20,,21,,-1,,22,,27,,23,,-1,,26,,25,,24,,-1}).setTexCoordIndex(new int[] {4,,6,,5,,-1,,5,,7,,4,,-1,,2,,3,,1,,-1,,1,,0,,2,,-1,,14,,16,,15,,-1,,15,,17,,14,,-1,,8,,9,,6,,-1,,6,,4,,8,,-1,,38,,40,,39,,-1,,39,,41,,38,,-1,,18,,19,,36,,-1,,36,,37,,18,,-1,,10,,11,,9,,-1,,9,,8,,10,,-1,,42,,43,,40,,-1,,40,,38,,42,,-1,,20,,21,,19,,-1,,19,,18,,20,,-1,,22,,24,,23,,-1,,24,,26,,25,,-1,,25,,23,,24,,-1,,27,,29,,28,,-1,,28,,30,,27,,-1,,31,,23,,25,,-1,,25,,32,,31,,-1,,33,,31,,34,,-1,,34,,31,,32,,-1,,32,,35,,34,,-1,,20,,34,,35,,-1,,35,,21,,20,,-1,,8,,4,,12,,-1,,12,,13,,8,,-1,,22,,23,,28,,-1,,28,,29,,22,,-1,,23,,31,,30,,-1,,30,,28,,23,,-1,,31,,33,,27,,-1,,27,,30,,31,,-1,,14,,24,,26,,-1,,14,,16,,24,,-1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {1.247f,0.07f,0.7975f,1.209f,0.0872f,-1.349f,-0.7098f,-0.0015f,0.8912f,-0.7183f,0.0002f,-1.283f,-0.9295f,-0.613f,1.478f,1.647f,-0.4252f,1.388f,1.589f,-0.3921f,-1.989f,-1.044f,-0.5947f,-1.984f,-0.8227f,-2.521f,2.408f,1.951f,-2.334f,2.08f,1.892f,-2.301f,-2.409f,-1.192f,-2.614f,-2.248f,-0.5703f,-3.958f,1.694f,0.8836f,-4.2f,1.75f,0.8251f,-4.167f,-2.071f,-0.7842f,-3.968f,-1.934f,-1.037f,-0.5968f,-0.1872f,-1.642f,-2.561f,1.941f,-1.951f,-0.9492f,0.058f,-1.914f,-1.016f,1.885f,-1.649f,-2.56f,0.1377f,-1.066f,-2.61f,-0.2014f,1.209f,0.0872f,-1.349f,-0.7183f,0.0002f,-1.283f,-0.7098f,-0.0015f,0.8912f,1.247f,0.07f,0.7975f,1.209f,0.0872f,-1.349f,-0.7098f,-0.0015f,0.8912f})))
                          .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.117f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.148f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.011f,0.3241f,0.0033f,0.173f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.032f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.172f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.064f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.184f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.14f,0.1857f}))))))))))
            .addChild(new HAnimJointObject("hanim_r_shoulder").setName("r_shoulder").setCenter(-5.975f,52.0f,-0.1452f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("hanim_r_upperarm").setName("r_upperarm").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-5.975f,52.0f,-0.1452f)
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                      .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                    .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(getIndexedFaceSet_11_171_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_171_texCoordIndex())
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-2.525f,1.246f,-1.68f,-3.681f,1.236f,0.0337f,-2.408f,1.247f,1.663f,-0.4657f,1.264f,0.9556f,-0.5379f,1.264f,-1.11f,-2.743f,-0.0209f,-2.31f,-4.339f,-0.0351f,0.057f,-2.581f,-0.0195f,2.307f,0.1009f,0.0044f,1.33f,0.0013f,0.0035f,-1.523f,-2.72f,-2.534f,-2.31f,-4.317f,-2.548f,0.057f,-2.559f,-2.533f,2.307f,0.1233f,-2.509f,1.33f,0.0237f,-2.51f,-1.523f,-2.759f,-3.609f,-2.442f,-4.448f,-3.624f,0.0619f,-2.588f,-3.608f,2.442f,0.2497f,-3.583f,1.409f,0.1443f,-3.583f,-1.61f,-2.245f,-1.758f,-1.939f,-3.465f,-1.769f,-0.4543f,-2.834f,-1.763f,1.629f,-1.223f,-1.749f,1.432f,-0.8596f,-1.746f,-0.7734f,-2.263f,-7.566f,-1.569f,-3.531f,-7.577f,-0.378f,-2.875f,-7.571f,1.293f,-1.202f,-7.556f,1.135f,-0.8242f,-7.553f,-0.6339f,-2.267f,-11.62f,-1.511f,-3.487f,-11.63f,-0.3651f,-2.856f,-11.62f,1.243f,-1.245f,-11.61f,1.091f,-0.8817f,-11.6f,-0.6115f,-2.213f,-12.17f,-0.8985f,-2.928f,-12.17f,-0.2266f,-2.558f,-12.17f,0.7161f,-1.614f,-12.16f,0.6268f,-1.401f,-12.16f,-0.3711f})))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f})))))))
              .addChild(new HAnimJointObject("hanim_r_elbow").setName("r_elbow").setCenter(-8.093f,40.38f,-0.2502f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("hanim_r_forearm").setName("r_forearm").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-8.093f,40.38f,-0.2502f)
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                        .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                      .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {0,,1,,2,,-1,,0,,2,,3,,-1,,4,,0,,3,,-1,,0,,5,,6,,-1,,6,,1,,0,,-1,,1,,6,,7,,-1,,7,,2,,1,,-1,,2,,7,,8,,-1,,8,,3,,2,,-1,,3,,8,,9,,-1,,9,,4,,3,,-1,,4,,9,,5,,-1,,5,,0,,4,,-1,,5,,10,,11,,-1,,11,,6,,5,,-1,,6,,11,,12,,-1,,12,,7,,6,,-1,,7,,12,,13,,-1,,13,,8,,7,,-1,,8,,13,,14,,-1,,14,,9,,8,,-1,,9,,14,,10,,-1,,10,,5,,9,,-1,,10,,15,,16,,-1,,16,,11,,10,,-1,,11,,16,,17,,-1,,17,,12,,11,,-1,,12,,17,,18,,-1,,18,,13,,12,,-1,,13,,18,,19,,-1,,19,,14,,13,,-1,,14,,19,,15,,-1,,15,,10,,14,,-1,,23,,22,,21,,-1,,23,,21,,20,,-1,,24,,23,,20,,-1,,21,,16,,15,,-1,,15,,20,,21,,-1,,22,,17,,16,,-1,,16,,21,,22,,-1,,23,,18,,17,,-1,,17,,22,,23,,-1,,24,,19,,18,,-1,,18,,23,,24,,-1,,20,,15,,19,,-1,,19,,24,,20,,-1}).setTexCoordIndex(new int[] {26,,25,,2,,-1,,26,,2,,3,,-1,,4,,26,,3,,-1,,0,,5,,6,,-1,,6,,1,,0,,-1,,27,,28,,7,,-1,,7,,2,,27,,-1,,2,,7,,8,,-1,,8,,3,,2,,-1,,3,,8,,9,,-1,,9,,4,,3,,-1,,4,,9,,5,,-1,,5,,0,,4,,-1,,5,,10,,11,,-1,,11,,6,,5,,-1,,29,,30,,12,,-1,,12,,7,,29,,-1,,7,,12,,13,,-1,,13,,8,,7,,-1,,8,,13,,14,,-1,,14,,9,,8,,-1,,9,,14,,10,,-1,,10,,5,,9,,-1,,10,,15,,16,,-1,,16,,11,,10,,-1,,31,,32,,17,,-1,,17,,12,,31,,-1,,12,,17,,18,,-1,,18,,13,,12,,-1,,13,,18,,19,,-1,,19,,14,,13,,-1,,14,,19,,15,,-1,,15,,10,,14,,-1,,23,,22,,34,,-1,,23,,34,,33,,-1,,24,,23,,33,,-1,,21,,16,,15,,-1,,15,,20,,21,,-1,,22,,17,,35,,-1,,35,,36,,22,,-1,,23,,18,,17,,-1,,17,,22,,23,,-1,,24,,19,,18,,-1,,18,,23,,24,,-1,,20,,15,,19,,-1,,19,,24,,20,,-1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.215f,0.3047f,-1.152f,-1.155f,0.2966f,-0.2588f,-0.6199f,0.3013f,1.04f,0.6505f,0.3122f,0.9491f,0.9008f,0.3143f,-0.4054f,-0.1442f,-0.8448f,-1.625f,-1.472f,-0.8561f,-0.4271f,-0.7164f,-0.8496f,1.625f,1.079f,-0.8342f,1.482f,1.433f,-0.8312f,-0.6588f,-0.1328f,-3.5f,-1.607f,-1.551f,-3.513f,-0.4225f,-0.781f,-2.925f,1.61f,1.136f,-2.909f,1.468f,1.551f,-3.486f,-0.6519f,-0.0592f,-8.713f,-1.437f,-1.093f,-8.722f,-0.1279f,-0.5047f,-8.716f,1.51f,0.8932f,-8.704f,1.377f,1.169f,-8.702f,-0.3428f,-0.0092f,-9.336f,-0.8855f,-0.7154f,-9.342f,0.0084f,-0.3135f,-9.339f,1.043f,0.6412f,-9.331f,0.9519f,0.8292f,-9.329f,-0.1383f})))
                        .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f})))))))
                .addChild(new HAnimJointObject("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-7.808f,31.46f,-0.05849f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("hanim_r_hand").setName("r_hand").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-7.808f,31.46f,-0.05849f)
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setDiffuseColor(0.588f,0.588f,0.588f))
                          .setTexture(new ImageTextureObject().setUSE("Annex01JinTextureAtlas")))
                        .setGeometry(new IndexedFaceSetObject().setCreaseAngle(3.14159f).setCoordIndex(new int[] {4,,2,,0,,-1,,0,,5,,4,,-1,,6,,1,,3,,-1,,3,,7,,6,,-1,,1,,6,,5,,-1,,5,,0,,1,,-1,,8,,4,,5,,-1,,5,,9,,8,,-1,,10,,6,,7,,-1,,7,,11,,10,,-1,,9,,5,,6,,-1,,6,,10,,9,,-1,,12,,8,,9,,-1,,9,,13,,12,,-1,,14,,10,,11,,-1,,11,,15,,14,,-1,,13,,9,,10,,-1,,10,,14,,13,,-1,,4,,16,,2,,-1,,2,,16,,7,,-1,,7,,3,,2,,-1,,17,,20,,18,,-1,,18,,19,,17,,-1,,21,,11,,7,,-1,,7,,16,,21,,-1,,8,,12,,21,,-1,,12,,15,,11,,-1,,11,,21,,12,,-1,,13,,14,,15,,-1,,15,,12,,13,,-1,,8,,17,,19,,-1,,19,,4,,8,,-1,,4,,19,,18,,-1,,18,,16,,4,,-1,,16,,18,,20,,-1,,20,,21,,16,,-1,,21,,20,,17,,-1,,17,,8,,21,,-1,,22,,23,,27,,-1,,26,,24,,25,,-1}).setTexCoordIndex(new int[] {4,,7,,5,,-1,,5,,6,,4,,-1,,2,,0,,1,,-1,,1,,3,,2,,-1,,14,,17,,15,,-1,,15,,16,,14,,-1,,8,,4,,6,,-1,,6,,9,,8,,-1,,38,,41,,39,,-1,,39,,40,,38,,-1,,18,,37,,36,,-1,,36,,19,,18,,-1,,10,,8,,9,,-1,,9,,11,,10,,-1,,42,,38,,40,,-1,,40,,43,,42,,-1,,20,,18,,19,,-1,,19,,21,,20,,-1,,22,,23,,24,,-1,,24,,23,,25,,-1,,25,,26,,24,,-1,,27,,30,,28,,-1,,28,,29,,27,,-1,,31,,32,,25,,-1,,25,,23,,31,,-1,,33,,34,,31,,-1,,34,,35,,32,,-1,,32,,31,,34,,-1,,20,,21,,35,,-1,,35,,34,,20,,-1,,8,,13,,12,,-1,,12,,4,,8,,-1,,22,,29,,28,,-1,,28,,23,,22,,-1,,23,,28,,30,,-1,,30,,31,,23,,-1,,31,,30,,27,,-1,,27,,33,,31,,-1,,14,,26,,24,,-1,,14,,24,,16,,-1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-1.247f,0.07f,0.7975f,-1.209f,0.0872f,-1.349f,0.7098f,-0.0015f,0.8912f,0.7183f,0.0002f,-1.283f,0.9295f,-0.613f,1.478f,-1.647f,-0.4252f,1.388f,-1.589f,-0.3921f,-1.989f,1.044f,-0.5947f,-1.984f,0.8227f,-2.521f,2.408f,-1.951f,-2.334f,2.08f,-1.892f,-2.301f,-2.409f,1.192f,-2.614f,-2.248f,0.5703f,-3.958f,1.694f,-0.8836f,-4.2f,1.75f,-0.8251f,-4.167f,-2.071f,0.7842f,-3.968f,-1.934f,1.037f,-0.5968f,-0.1872f,1.642f,-2.561f,1.941f,1.951f,-0.9492f,0.058f,1.914f,-1.016f,1.885f,1.649f,-2.56f,0.1377f,1.066f,-2.61f,-0.2014f,-1.209f,0.0872f,-1.349f,0.7183f,0.0002f,-1.283f,0.7098f,-0.0015f,0.8912f,-1.247f,0.07f,0.7975f,-1.209f,0.0872f,-1.349f,0.7098f,-0.0015f,0.8912f})))
                          .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.117f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.148f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.011f,0.3241f,0.0033f,0.173f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.032f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.172f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.064f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.184f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.14f,0.1857f}))))))))))))))
    .addChild(new HAnimMotionObject().setChannels("6 Xposition Yposition Zposition Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion channels: $isNumeric=false, $attributeType=, value='6 Xposition Yposition Zposition Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation                      3 Zrotation Xrotation Yrotation']
).setEnabled(false).setEndFrame("0"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion endFrame: $isNumeric=true, $attributeType=, value='0']
).setFrameCount("392"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion frameCount: $isNumeric=true, $attributeType=, value='392']
).setFrameDuration("0.1"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion frameDuration: $isNumeric=true, $attributeType=, value='0.1']
).setFrameIncrement("1"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion frameIncrement: $isNumeric=true, $attributeType=, value='1']
).setFrameIndex("0"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion frameIndex: $isNumeric=true, $attributeType=, value='0']
).setFrameTime("0.033333"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion frameTime: $isNumeric=true, $attributeType=, value='0.033333']
).setJoints("HumanoidRoot, l_hip, l_knee, l_talocrural, r_hip,                    r_knee, r_talocrural, vl5, IGNORED, l_shoulder,                    l_elbow, l_radiocarpal, IGNORED, r_shoulder, r_elbow,                    r_radiocarpal, IGNORED, skullbase"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion joints: $isNumeric=false, $attributeType=, value='HumanoidRoot, l_hip, l_knee, l_talocrural, r_hip,                    r_knee, r_talocrural, vl5, IGNORED, l_shoulder,                    l_elbow, l_radiocarpal, IGNORED, r_shoulder, r_elbow,                    r_radiocarpal, IGNORED, skullbase']
).setLoa(-1).setLoop(false).setStartFrame("0"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimMotion startFrame: $isNumeric=true, $attributeType=, value='0']
).setValues(getHAnimMotion_3_202_values())));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_24_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_24_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_33_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_33_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_42_coordIndex_1()
		{
			int[] value = {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_42_texCoordIndex_1()
		{
			int[] value = {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_51_coordIndex_1()
		{
			int[] value = {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_51_texCoordIndex_1()
		{
			int[] value = {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_60_coordIndex_1()
		{
			int[] value = {1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_60_texCoordIndex_1()
		{
			int[] value = {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_13_69_texCoordIndex_1()
		{
			int[] value = {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_82_coordIndex_1()
		{
			int[] value = {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_82_texCoordIndex_1()
		{
			int[] value = {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_91_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_91_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_100_coordIndex_1()
		{
			int[] value = {1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_100_texCoordIndex_1()
		{
			int[] value = {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_13_109_texCoordIndex_1()
		{
			int[] value = {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_122_coordIndex_1()
		{
			int[] value = {3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_122_coordIndex_2()
		{
			int[] value = {79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_122_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_122_texCoordIndex_2()
		{
			int[] value = {93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getCoordinate_11_122_point_1()
		{
			float[] value = {0.6928f,14.56f,-1.263f,0.0f,14.61f,-1.355f,1.47f,14.78f,-0.9099f,2.016f,14.75f,0.2814f,1.573f,14.45f,1.11f,2.914f,14.31f,0.3331f,2.599f,15.21f,-1.406f,3.187f,13.44f,1.543f,2.239f,13.23f,3.23f,0.9629f,15.23f,-3.152f,0.0f,15.21f,-3.317f,2.035f,15.26f,-2.815f,3.316f,12.17f,2.97f,5.086f,12.98f,2.011f,2.982f,14.09f,2.181f,2.245f,13.23f,3.821f,3.131f,12.49f,3.9f,4.42f,13.78f,2.105f,5.602f,13.58f,0.1863f,5.472f,12.91f,-1.452f,3.439f,15.14f,0.3672f,3.953f,14.28f,-2.227f,5.073f,14.62f,0.3672f,4.655f,13.34f,-1.78f,1.811f,9.683f,-2.43f,0.0f,9.378f,-2.564f,4.241f,10.64f,-2.043f,1.032f,12.38f,-4.427f,0.0f,12.39f,-4.562f,2.39f,12.77f,-3.914f,1.677f,9.038f,-3.147f,0.0f,8.716f,-3.266f,4.12f,10.55f,-3.032f,4.272f,7.978f,4.186f,6.354f,8.61f,1.543f,2.14f,8.428f,-2.362f,4.3f,8.531f,-1.848f,3.695f,5.43f,2.768f,5.081f,5.468f,1.505f,6.096f,10.11f,1.67f,5.904f,10.1f,-0.3303f,5.533f,8.564f,-0.7796f,1.419f,5.319f,-2.22f,3.58f,5.374f,-1.434f,4.793f,5.424f,-0.2489f,3.682f,3.438f,2.824f,5.077f,3.477f,1.527f,1.282f,3.149f,-2.365f,3.586f,3.347f,-1.437f,4.792f,3.421f,-0.2999f,4.178f,1.107f,3.951f,5.76f,1.143f,1.994f,1.52f,0.9511f,-3.678f,3.95f,0.9608f,-2.536f,5.309f,1.066f,-0.7397f,3.789f,0.0332f,3.209f,5.166f,0.0649f,1.685f,1.593f,-0.0862f,-2.676f,3.6f,-0.0637f,-1.847f,4.841f,-0.0167f,-0.4441f,7.399f,13.3f,0.1863f,6.979f,12.49f,-1.452f,6.998f,12.55f,1.899f,6.298f,10.26f,1.67f,6.292f,10.26f,-0.3303f,0.0f,14.19f,1.73f,0.7806f,14.19f,1.608f,0.0f,12.0f,3.901f,1.373f,12.54f,3.668f,0.0f,10.9f,3.845f,1.713f,11.65f,3.668f,1.38f,12.54f,4.137f,0.0f,11.29f,4.361f,1.593f,11.97f,4.338f,1.579f,8.583f,4.081f,1.292f,5.399f,3.228f,1.281f,3.232f,3.336f,1.635f,1.077f,4.562f,1.595f,-0.0055f,3.645f,0.0f,12.05f,4.06f,-0.6928f,14.56f,-1.263f,-1.47f,14.78f,-0.9099f,-2.016f,14.75f,0.2814f,-1.573f,14.45f,1.11f,-2.914f,14.31f,0.3331f,-2.599f,15.21f,-1.406f,-3.187f,13.44f,1.543f,-2.239f,13.23f,3.23f,-0.9629f,15.23f,-3.152f,-2.035f,15.26f,-2.815f,-3.316f,12.17f,2.97f,-5.086f,12.98f,2.011f,-2.982f,14.09f,2.181f,-2.245f,13.23f,3.821f,-3.131f,12.49f,3.9f,-4.42f,13.78f,2.105f,-5.602f,13.58f,0.1863f,-5.472f,12.91f,-1.452f,-3.439f,15.14f,0.3672f,-3.953f,14.28f,-2.227f};
			return value;
		}
		private float[] getCoordinate_11_122_point_2()
		{
			float[] value = {-5.073f,14.62f,0.3672f,-4.655f,13.34f,-1.78f,-1.811f,9.683f,-2.43f,-4.241f,10.64f,-2.043f,-1.032f,12.38f,-4.427f,-2.39f,12.77f,-3.914f,-1.677f,9.038f,-3.147f,-4.12f,10.55f,-3.032f,-4.272f,7.978f,4.186f,-6.354f,8.61f,1.543f,-2.14f,8.428f,-2.362f,-4.3f,8.531f,-1.848f,-3.695f,5.43f,2.768f,-5.081f,5.468f,1.505f,-6.096f,10.11f,1.67f,-5.904f,10.1f,-0.3303f,-5.533f,8.564f,-0.7796f,-1.419f,5.319f,-2.22f,-3.58f,5.374f,-1.434f,-4.793f,5.424f,-0.2489f,-3.682f,3.438f,2.824f,-5.077f,3.477f,1.527f,-1.282f,3.149f,-2.365f,-3.586f,3.347f,-1.437f,-4.792f,3.421f,-0.2999f,-4.178f,1.107f,3.951f,-5.76f,1.143f,1.994f,-1.52f,0.9511f,-3.678f,-3.95f,0.9608f,-2.536f,-5.309f,1.066f,-0.7397f,-3.789f,0.0332f,3.209f,-5.166f,0.0649f,1.685f,-1.593f,-0.0862f,-2.676f,-3.6f,-0.0637f,-1.847f,-4.841f,-0.0167f,-0.4441f,-7.399f,13.3f,0.1863f,-6.979f,12.49f,-1.452f,-6.998f,12.55f,1.899f,-6.298f,10.26f,1.67f,-6.292f,10.26f,-0.3303f,-0.7806f,14.19f,1.608f,-1.373f,12.54f,3.668f,-1.713f,11.65f,3.668f,-1.38f,12.54f,4.137f,-1.593f,11.97f,4.338f,-1.579f,8.583f,4.081f,-1.292f,5.399f,3.228f,-1.281f,3.232f,3.336f,-1.635f,1.077f,4.562f,-1.595f,-0.0055f,3.645f,0.5369f,17.62f,-0.941f,0.0f,17.62f,-1.012f,1.139f,17.62f,-0.6672f,1.562f,17.62f,0.2561f,1.219f,17.62f,0.8985f,0.5424f,14.56f,-0.9523f,0.0f,14.61f,-1.024f,1.151f,14.78f,-0.6757f,1.578f,14.75f,0.257f,1.232f,14.45f,0.9059f,0.605f,17.75f,1.285f,0.0f,17.19f,1.379f,0.0f,14.19f,1.391f,0.6111f,14.19f,1.296f,-0.5369f,17.62f,-0.941f,-1.139f,17.62f,-0.6672f,-1.562f,17.62f,0.2561f,-1.219f,17.62f,0.8985f,-0.5424f,14.56f,-0.9523f,-1.151f,14.78f,-0.6757f,-1.578f,14.75f,0.257f,-1.232f,14.45f,0.9059f,-0.605f,17.75f,1.285f,-0.6111f,14.19f,1.296f};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getTextureCoordinate_11_123_point_1()
		{
			float[] value = {0.4756f,0.618f,0.4724f,0.6293f,0.4618f,0.6351f,0.4566f,0.6312f,0.4542f,0.6062f,0.4644f,0.6152f,0.4472f,0.6278f,0.4554f,0.6354f,0.4381f,0.6277f,0.4381f,0.5991f,0.4005f,0.618f,0.4195f,0.6312f,0.4143f,0.6351f,0.4037f,0.6293f,0.4219f,0.6062f,0.4289f,0.6278f,0.4117f,0.6152f,0.4207f,0.6354f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1412f,0.5207f,0.1108f,0.5655f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0639f,0.4488f,0.0877f,0.4617f,0.0525f,0.4715f,0.1185f,0.4741f,0.1474f,0.4856f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.347f,0.4316f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.2638f,0.4568f,0.3214f,0.4203f,0.2252f,0.4828f,0.042f,0.406f,0.0909f,0.398f,0.2183f,0.385f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1525f,0.3869f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.0346f,0.5664f,0.0399f,0.5407f,0.2661f,0.5914f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.0763f,0.4945f,0.0865f,0.5614f};
			return value;
		}
		private float[] getTextureCoordinate_11_123_point_2()
		{
			float[] value = {0.1025f,0.5076f,0.0652f,0.5465f,0.1108f,0.5655f,0.1412f,0.5207f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0877f,0.4617f,0.1185f,0.4741f,0.1474f,0.4857f,0.1724f,0.5255f,0.2133f,0.556f,0.2089f,0.5196f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.2638f,0.4568f,0.2252f,0.4828f,0.042f,0.406f,0.0909f,0.398f,0.2183f,0.385f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1525f,0.3869f,0.1491f,0.3449f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3223f,0.4192f,0.3477f,0.431f,0.3223f,0.4192f,0.3518f,0.3851f,0.3554f,0.5911f,0.3505f,0.5919f,0.3505f,0.5919f,0.3518f,0.3851f,0.3518f,0.3851f,0.3629f,0.3439f,0.3629f,0.3439f,0.3633f,0.2922f,0.3633f,0.2922f,0.3553f,0.2398f,0.3553f,0.2398f,0.3555f,0.2151f,0.3511f,0.5932f,0.3536f,0.2151f,0.4444f,0.6326f,0.4381f,0.6333f,0.4381f,0.6725f,0.4444f,0.6725f,0.4516f,0.6354f,0.4515f,0.6725f,0.4566f,0.6351f,0.4565f,0.6725f,0.4526f,0.6312f,0.4524f,0.6725f,0.4381f,0.6277f,0.4453f,0.6278f,0.4452f,0.6742f,0.4381f,0.6669f,0.4317f,0.6326f,0.4317f,0.6725f,0.4245f,0.6354f};
			return value;
		}
		private float[] getTextureCoordinate_11_123_point_3()
		{
			float[] value = {0.4246f,0.6725f,0.4195f,0.6351f,0.4197f,0.6725f,0.4235f,0.6312f,0.4237f,0.6725f,0.4309f,0.6742f,0.4309f,0.6278f,0.4462f,0.6326f,0.4381f,0.6333f,0.4299f,0.6326f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_131_coordIndex_1()
		{
			int[] value = {58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_131_coordIndex_2()
		{
			int[] value = {141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_131_coordIndex_3()
		{
			int[] value = {279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_131_texCoordIndex_1()
		{
			int[] value = {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_131_texCoordIndex_2()
		{
			int[] value = {203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_131_texCoordIndex_3()
		{
			int[] value = {353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getCoordinate_12_131_point_1()
		{
			float[] value = {4.734f,2.295f,-0.478f,0.0f,7.925f,-7.347f,0.0f,2.738f,-7.551f,2.596f,3.055f,-7.113f,5.82f,3.915f,-2.239f,3.712f,1.225f,-2.29f,3.261f,1.453f,-4.252f,5.658f,2.599f,-1.983f,1.82f,1.289f,-5.164f,0.0f,0.1375f,-3.592f,2.395f,4.95f,6.346f,0.7761f,4.912f,6.883f,0.0f,9.74f,6.859f,4.408f,9.203f,3.673f,0.0f,11.25f,5.65f,2.225f,10.89f,5.304f,5.962f,4.414f,1.165f,4.041f,0.8383f,3.523f,1.972f,9.601f,6.357f,2.537f,7.001f,6.362f,3.694f,6.649f,5.287f,0.4475f,7.341f,7.362f,0.513f,6.698f,7.119f,4.843f,6.188f,3.431f,3.886f,6.593f,4.951f,3.681f,5.194f,5.001f,3.826f,5.001f,4.664f,3.284f,2.472f,4.49f,4.543f,4.124f,3.499f,3.859f,3.861f,4.364f,4.575f,3.792f,4.006f,5.065f,1.183f,1.247f,4.863f,1.73f,2.37f,5.256f,2.695f,2.024f,5.549f,5.532f,2.714f,5.161f,2.035f,2.722f,5.442f,3.878f,2.887f,6.111f,4.389f,0.2634f,4.062f,5.868f,4.221f,6.007f,7.856f,-0.5637f,7.021f,1.661f,-0.9157f,6.568f,4.855f,-0.7308f,6.326f,4.691f,-1.55f,6.23f,0.8303f,-3.441f,4.977f,5.364f,-5.673f,6.326f,4.656f,-2.95f,4.216f,3.427f,-5.131f,3.522f,5.818f,-7.166f,3.424f,1.86f,-7.278f,2.479f,7.925f,-6.757f,1.927f,1.981f,-8.89f,0.0f,3.753f,-8.454f,5.584f,7.691f,-2.78f,5.853f,7.683f,-1.772f,5.181f,8.476f,2.104f,3.038f,10.79f,4.444f,5.123f,3.032f,-5.304f,5.664f,8.061f,0.8754f,4.721f,7.925f,-5.258f,0.0f,5.519f,-7.965f,2.479f,5.82f,-7.483f,5.595f,7.63f,-2.141f,0.0f,0.1227f,-8.281f,1.173f,1.832f,-6.114f,3.978f,2.324f,-4.64f,2.917f,-0.9285f,-7.31f,3.323f,2.08f,-5.371f,1.968f,-1.561f,-5.013f,0.0f,-0.9435f,-6.54f,4.713f,2.444f,-3.477f,4.42f,-0.2924f,-4.477f,1.411f,0.5541f,-3.484f,0.0f,1.035f,-6.031f,2.275f,0.8807f,-3.763f,0.9407f,0.7103f,-4.537f,3.818f,1.729f,-3.139f,4.664f,1.866f,-1.436f,3.657f,9.188f,4.96f,0.0f,7.548f,7.405f,1.559f,7.266f,7.008f,2.791f,5.041f,6.017f,-4.734f,2.295f,-0.478f,-2.596f,3.055f,-7.113f,-5.82f,3.915f,-2.239f,-3.712f,1.225f,-2.29f,-3.261f,1.453f,-4.252f,-5.658f,2.599f,-1.983f,-1.82f,1.289f,-5.164f,-2.395f,4.95f,6.346f,-0.7761f,4.912f,6.883f,-4.408f,9.203f,3.673f,-2.225f,10.89f,5.304f,-5.962f,4.414f,1.165f,-4.041f,0.8383f,3.523f,-1.972f,9.601f,6.357f,-2.537f,7.001f,6.362f,-3.694f,6.649f,5.287f,-0.4475f,7.341f,7.362f,-0.513f,6.698f,7.119f,-4.843f,6.188f,3.431f};
			return value;
		}
		private float[] getCoordinate_12_131_point_2()
		{
			float[] value = {-3.886f,6.593f,4.951f,-3.681f,5.194f,5.001f,-3.826f,5.001f,4.664f,-3.284f,2.472f,4.49f,-4.543f,4.124f,3.499f,-3.859f,3.861f,4.364f,-4.575f,3.792f,4.006f,-5.065f,1.183f,1.247f,-4.863f,1.73f,2.37f,-5.256f,2.695f,2.024f,-5.549f,5.532f,2.714f,-5.161f,2.035f,2.722f,-5.442f,3.878f,2.887f,-6.111f,4.389f,0.2634f,-4.062f,5.868f,4.221f,-6.007f,7.856f,-0.5637f,-7.021f,1.661f,-0.9157f,-6.568f,4.855f,-0.7308f,-6.326f,4.691f,-1.55f,-6.23f,0.8303f,-3.441f,-4.977f,5.364f,-5.673f,-6.326f,4.656f,-2.95f,-4.216f,3.427f,-5.131f,-3.522f,5.818f,-7.166f,-3.424f,1.86f,-7.278f,-2.479f,7.925f,-6.757f,-1.927f,1.981f,-8.89f,-5.584f,7.691f,-2.78f,-5.853f,7.683f,-1.772f,-5.181f,8.476f,2.104f,-3.038f,10.79f,4.444f,-5.123f,3.032f,-5.304f,-5.664f,8.061f,0.8754f,-4.721f,7.925f,-5.258f,-2.479f,5.82f,-7.483f,-5.595f,7.63f,-2.141f,-1.173f,1.832f,-6.114f,-3.978f,2.324f,-4.64f,-2.917f,-0.9285f,-7.31f,-3.323f,2.08f,-5.371f,-1.968f,-1.561f,-5.013f,-4.713f,2.444f,-3.477f,-4.42f,-0.2924f,-4.477f,-1.411f,0.5541f,-3.484f,-2.275f,0.8807f,-3.763f,-0.9407f,0.7103f,-4.537f,-3.818f,1.729f,-3.139f,-4.664f,1.866f,-1.436f,-3.657f,9.188f,4.96f,-1.559f,7.266f,7.008f,-2.791f,5.041f,6.017f,0.0f,12.89f,2.191f,2.479f,12.6f,2.191f,0.0f,12.77f,-3.073f,2.479f,13.01f,-0.5905f,0.0f,13.3f,-0.5905f,2.479f,12.47f,-3.073f,-2.479f,12.6f,2.191f,-2.479f,13.01f,-0.5905f,-2.479f,12.47f,-3.073f,0.0f,12.19f,4.069f,-2.479f,11.8f,3.665f,2.479f,11.8f,3.665f,-4.738f,11.13f,-0.5905f,-4.581f,10.59f,1.893f,4.738f,11.13f,-0.5905f,4.581f,10.59f,1.893f,-4.776f,9.342f,-4.254f,4.776f,9.342f,-4.254f,-4.651f,10.94f,-2.696f,4.651f,10.94f,-2.696f,0.0f,10.91f,-6.064f,-2.479f,10.58f,-5.873f,2.479f,10.58f,-5.873f,5.038f,2.087f,0.2634f,5.351f,2.269f,0.2568f,5.575f,4.993f,0.4877f,5.759f,4.313f,-0.6689f,5.672f,3.119f,-0.6884f,5.054f,4.389f,0.2634f,4.617f,3.919f,1.981f,0.0f,-1.299f,4.283f,2.507f,0.2122f,3.467f,1.252f,-0.7037f,3.753f,2.181f,1.29f,4.703f,1.083f,-0.2065f,4.531f,0.0f,3.949f,5.823f,4.122f,4.752f,3.434f,0.0f,4.457f,6.529f,3.843f,3.486f,3.474f,0.6247f,4.287f,6.217f,3.884f,5.34f,4.144f,0.2615f,3.949f,5.823f,2.103f,4.881f,5.78f,1.599f,4.225f,5.429f,2.103f,4.763f,5.713f,2.175f,4.422f,5.292f,1.061f,2.841f,5.24f,3.345f,2.806f,3.987f,2.536f,2.741f,4.559f};
			return value;
		}
		private float[] getCoordinate_12_131_point_3()
		{
			float[] value = {3.082f,3.581f,4.206f,3.368f,4.077f,4.055f,1.044f,3.885f,5.454f,1.356f,3.642f,5.241f,3.227f,3.707f,4.111f,3.028f,4.567f,4.683f,2.472f,2.023f,4.722f,0.9194f,2.354f,5.382f,0.0f,2.998f,5.872f,3.515f,2.199f,3.631f,3.685f,4.225f,3.891f,1.11f,4.559f,6.074f,0.0f,1.141f,5.968f,0.1458f,1.141f,5.967f,0.4592f,1.442f,5.549f,0.0f,1.753f,6.811f,3.24f,5.132f,4.832f,0.0f,-1.23f,3.575f,3.443f,1.22f,3.201f,0.0f,6.577f,6.529f,1.972f,6.686f,5.769f,3.551f,6.468f,4.66f,1.125f,6.641f,6.224f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,4.342f,2.994f,2.484f,0.0f,9.837f,5.8f,1.972f,10.18f,5.298f,3.829f,8.081f,4.078f,4.754f,5.519f,2.97f,1.641f,0.4521f,4.705f,0.0f,2.206f,6.446f,2.795f,3.568f,4.497f,1.835f,3.587f,5.011f,3.243f,5.188f,4.826f,4.074f,1.813f,1.489f,4.073f,1.537f,-0.251f,4.798f,4.414f,1.165f,3.561f,1.081f,-1.554f,0.0f,0.5923f,5.37f,0.2244f,0.5923f,5.37f,0.0f,-0.2097f,4.949f,0.0f,0.1669f,5.375f,0.0f,0.7989f,5.843f,0.4079f,0.7711f,5.733f,0.2244f,0.7989f,5.843f,1.184f,0.5011f,4.895f,1.695f,4.1f,5.387f,2.183f,4.262f,5.159f,2.937f,4.372f,4.659f,-5.038f,2.087f,0.2634f,-5.351f,2.269f,0.2568f,-5.575f,4.993f,0.4877f,-5.759f,4.313f,-0.6689f,-5.672f,3.119f,-0.6884f,-5.054f,4.389f,0.2634f,-4.617f,3.919f,1.981f,-2.507f,0.2122f,3.467f,-1.252f,-0.7037f,3.753f,-2.181f,1.29f,4.703f,-1.083f,-0.2065f,4.531f,-4.122f,4.752f,3.434f,-3.843f,3.486f,3.474f,-0.6247f,4.287f,6.217f,-3.884f,5.34f,4.144f,-0.2615f,3.949f,5.823f,-2.103f,4.881f,5.78f,-1.599f,4.225f,5.429f,-2.103f,4.763f,5.713f,-2.175f,4.422f,5.292f,-1.061f,2.841f,5.24f,-3.345f,2.806f,3.987f,-2.536f,2.741f,4.559f,-3.082f,3.581f,4.206f,-3.368f,4.077f,4.055f,-1.044f,3.885f,5.454f,-1.356f,3.642f,5.241f,-3.227f,3.707f,4.111f,-3.028f,4.567f,4.683f,-2.472f,2.023f,4.722f,-0.9194f,2.354f,5.382f,-3.515f,2.199f,3.631f,-3.685f,4.225f,3.891f,-1.11f,4.559f,6.074f,-0.1458f,1.141f,5.967f,-0.4592f,1.442f,5.549f,-3.24f,5.132f,4.832f,-3.443f,1.22f,3.201f,-1.972f,6.686f,5.769f,-3.551f,6.468f,4.66f,-1.125f,6.641f,6.224f,-2.799f,0.2961f,1.981f,-1.438f,-0.7799f,2.92f,-2.098f,-0.0622f,0.3894f,-4.342f,2.994f,2.484f,-1.972f,10.18f,5.298f,-3.829f,8.081f,4.078f,-4.754f,5.519f,2.97f,-1.641f,0.4521f,4.705f};
			return value;
		}
		private float[] getCoordinate_12_131_point_4()
		{
			float[] value = {-2.795f,3.568f,4.497f,-1.835f,3.587f,5.011f,-3.243f,5.188f,4.826f,-4.074f,1.813f,1.489f,-4.073f,1.537f,-0.251f,-4.798f,4.414f,1.165f,-3.561f,1.081f,-1.554f,-0.2244f,0.5923f,5.37f,-0.4079f,0.7711f,5.733f,-0.2244f,0.7989f,5.843f,-1.184f,0.5011f,4.895f,-1.695f,4.1f,5.387f,-2.183f,4.262f,5.159f,-2.937f,4.372f,4.659f,0.0f,0.5907f,5.545f,0.2244f,0.5907f,5.545f,-0.2244f,0.5907f,5.545f,-2.091f,-0.0943f,-1.629f,2.091f,-0.0943f,-1.629f,0.0f,-0.6349f,1.532f,0.4475f,7.341f,7.362f,0.7761f,4.912f,6.883f,0.7761f,4.912f,6.883f,0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,-0.4475f,7.341f,7.362f,-0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,4.734f,2.295f,-0.478f,3.712f,1.225f,-2.29f,-3.561f,1.081f,-1.554f,-2.098f,-0.0622f,0.3894f,-1.438f,-0.7799f,2.92f,-2.799f,0.2961f,1.981f,-5.658f,2.599f,-1.983f,-4.734f,2.295f,-0.478f,-3.712f,1.225f,-2.29f,-4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,0.513f,6.698f,7.119f,0.0f,7.548f,7.405f,-5.658f,2.599f,-1.983f,-0.513f,6.698f,7.119f,5.054f,4.389f,0.2634f,3.561f,1.081f,-1.554f,-5.054f,4.389f,0.2634f,-1.438f,-0.7799f,2.92f,-3.561f,1.081f,-1.554f,0.0f,7.548f,7.405f,3.561f,1.081f,-1.554f};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getTextureCoordinate_12_132_point_1()
		{
			float[] value = {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f};
			return value;
		}
		private float[] getTextureCoordinate_12_132_point_2()
		{
			float[] value = {0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.5511f,0.8974f,0.5442f,0.8881f,0.5261f,0.888f,0.5173f,0.916f,0.5142f,0.8897f,0.4859f,0.8861f,0.4859f,0.915f,0.5538f,0.8129f,0.5221f,0.9505f,0.5019f,0.9448f,0.4833f,0.9442f,0.5221f,0.9409f,0.5615f,0.9135f,0.4859f,0.9465f,0.7132f,0.8982f,0.707f,0.9147f,0.6947f,0.9327f,0.6362f,0.8647f,0.6338f,0.9045f,0.6499f,0.8433f,0.7286f,0.8745f,0.7189f,0.8755f,0.7076f,0.8768f,0.7039f,0.8593f,0.6916f,0.8787f,0.7247f,0.8546f,0.709f,0.8565f,0.7314f,0.8736f,0.7292f,0.8706f,0.728f,0.8536f,0.69f,0.8666f,0.6878f,0.8802f,0.6865f,0.8667f,0.6811f,0.8787f,0.6675f,0.8823f,0.6734f,0.9076f,0.6941f,0.9003f,0.6841f,0.8549f,0.6747f,0.8518f,0.6955f,0.8049f,0.6707f,0.8609f,0.65f,0.8054f,0.6247f,0.8655f,0.6555f,0.8741f,0.6826f,0.7876f,0.6628f,0.8252f,0.6579f,0.8538f,0.659f,0.8166f,0.5919f,0.8622f,0.6097f,0.7975f,0.6017f,0.8674f,0.6119f,0.8668f,0.5894f,0.7991f,0.5477f,0.8549f,0.5851f,0.8633f,0.5547f,0.8636f,0.5069f,0.9121f,0.4833f,0.9711f,0.5841f,0.9021f,0.5806f,0.931f,0.5925f,0.9036f,0.5981f,0.9018f,0.6148f,0.9345f,0.6142f,0.902f,0.6513f,0.9068f,0.653f,0.9257f,0.6932f,0.9186f,0.6854f,0.9041f,0.7468f,0.8401f,0.7397f,0.8339f,0.7279f,0.7767f,0.7484f,0.8201f,0.7549f,0.8419f,0.7538f,0.8364f,0.7505f,0.8352f,0.7502f,0.832f,0.7452f,0.8292f,0.7429f,0.8312f,0.7437f,0.8169f,0.753f,0.8334f,0.7524f,0.8309f,0.7267f,0.7703f,0.7224f,0.772f};
			return value;
		}
		private float[] getTextureCoordinate_12_132_point_3()
		{
			float[] value = {0.7146f,0.7762f,0.7175f,0.7748f,0.7116f,0.7661f,0.7574f,0.837f,0.7102f,0.7798f,0.7622f,0.8378f,0.7385f,0.8283f,0.7409f,0.8275f,0.7291f,0.7711f,0.7239f,0.7597f,0.7192f,0.7629f,0.7247f,0.774f,0.7171f,0.778f,0.756f,0.8233f,0.7046f,0.7872f,0.71f,0.779f,0.7054f,0.7806f,0.763f,0.8444f,0.7104f,0.7769f,0.7152f,0.7737f,0.7572f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.6805f,0.9479f,0.6189f,0.9637f,0.5528f,0.9539f,0.4859f,0.9842f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2979f,0.9448f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3384f,0.9469f,0.414f,0.9365f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.258f,0.6076f,0.2606f,0.6259f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2496f,0.7705f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2441f,0.8403f,0.274f,0.8322f,0.2566f,0.816f,0.2949f,0.763f,0.3447f,0.8549f,0.3206f,0.8292f,0.4279f,0.7939f,0.4413f,0.8544f,0.3889f,0.8456f,0.3991f,0.8726f,0.4299f,0.8825f,0.3482f,0.8386f,0.4041f,0.7613f,0.3654f,0.7582f,0.3778f,0.7978f};
			return value;
		}
		private float[] getTextureCoordinate_12_132_point_4()
		{
			float[] value = {0.3319f,0.7987f,0.3916f,0.7984f,0.2943f,0.815f,0.3252f,0.8232f,0.3846f,0.8362f,0.4052f,0.8221f,0.3485f,0.831f,0.309f,0.8013f,0.3985f,0.8044f,0.2937f,0.8109f,0.4204f,0.8292f,0.3447f,0.8606f,0.2972f,0.8452f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3226f,0.6487f,0.3993f,0.8753f,0.2441f,0.6554f,0.2548f,0.6554f,0.2557f,0.6351f,0.4544f,0.6426f,0.1498f,0.9887f,0.1903f,0.9448f,0.1498f,0.9469f,0.0742f,0.9365f,0.2323f,0.6076f,0.1853f,0.6166f,0.1923f,0.626f,0.2275f,0.6259f,0.2371f,0.6816f,0.2334f,0.6653f,0.2246f,0.664f,0.2221f,0.696f,0.1875f,0.651f,0.1398f,0.6888f,0.1258f,0.7239f,0.2001f,0.7397f,0.0364f,0.7703f,0.0759f,0.7323f,0.0794f,0.6855f,0.1242f,0.6372f,0.2386f,0.7705f,0.2316f,0.816f,0.2142f,0.8322f,0.1933f,0.763f,0.1676f,0.8292f,0.1435f,0.8549f,0.0602f,0.7939f,0.0469f,0.8544f,0.0583f,0.8825f,0.0891f,0.8726f,0.0992f,0.8456f,0.14f,0.8386f,0.084f,0.7613f,0.1228f,0.7582f,0.1104f,0.7978f,0.1563f,0.7987f,0.0966f,0.7984f,0.163f,0.8232f,0.1939f,0.815f,0.083f,0.8221f,0.1036f,0.8362f,0.1397f,0.831f,0.1792f,0.8013f,0.0897f,0.8044f,0.1944f,0.8109f,0.0678f,0.8292f,0.1435f,0.8606f,0.191f,0.8452f,0.0166f,0.8911f,0.0646f,0.9594f,0.1656f,0.6487f,0.0889f,0.8753f,0.2325f,0.6351f,0.2334f,0.6554f,0.2548f,0.6553f,0.2441f,0.6553f,0.2334f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_141_coordIndex_1()
		{
			int[] value = {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_141_texCoordIndex_1()
		{
			int[] value = {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_171_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_171_texCoordIndex_1()
		{
			int[] value = {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getHAnimMotion_3_202_values_1()
		{
			float[] value = {102.2373f,37.3864f,-30.7042f,25.99f,9.39f,-76.67f,29.91f,-61.78f,39.39f,0.15f,30.83f,-0.15f,-0.26f,-28.19f,0.29f,3.19f,-14.91f,-9.78f,-0.14f,22.80f,0.13f,-3.32f,-36.05f,-1.04f,0.79f,-28.37f,9.52f,0.00f,-0.00f,0.00f,69.07f,-22.04f,21.58f,0.35f,-54.30f,0.53f,29.27f,-0.43f,-13.04f,-0.00f,-0.00f,-0.00f,-44.97f,18.14f,-34.93f,-0.56f,-68.67f,-0.77f,-31.17f,-1.10f,19.42f,-5.97f,-15.92f,-8.18f,10.67f,17.77f,-18.05f,101.0132f,37.5130f,-29.6601f,26.20f,9.76f,-74.59f,24.96f,-62.35f,33.97f,0.15f,31.90f,-0.16f,-0.85f,-23.93f,0.31f,2.67f,-11.32f,-9.20f,-0.14f,19.06f,0.12f,-1.61f,-32.41f,-0.58f,1.74f,-30.18f,9.77f,0.00f,-0.00f,0.00f,67.84f,-21.19f,21.33f,0.33f,-51.75f,0.51f,27.86f,-0.57f,-11.96f,-0.00f,-0.00f,-0.00f,-46.55f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_2()
		{
			float[] value = {18.10f,-36.70f,-0.51f,-66.51f,-0.72f,-30.61f,-1.04f,18.43f,-7.18f,-15.52f,-8.48f,10.58f,18.63f,-18.73f,99.8019f,37.6292f,-28.4775f,26.15f,9.40f,-72.64f,18.33f,-61.82f,27.66f,0.15f,32.96f,-0.16f,-1.23f,-21.18f,0.38f,1.45f,-7.38f,-9.40f,-0.13f,15.62f,0.11f,1.15f,-27.53f,-0.28f,2.14f,-32.68f,10.00f,0.00f,-0.00f,0.00f,66.23f,-19.31f,19.35f,0.31f,-49.16f,0.49f,26.22f,-0.64f,-10.92f,-0.00f,-0.00f,-0.00f,-47.88f,18.84f,-35.88f,-0.49f,-65.33f,-0.69f,-30.28f,-1.00f,17.89f,-7.84f,-13.32f,-8.37f,10.39f,19.02f,-19.18f,98.5371f,37.8909f,-27.3094f,25.87f,8.50f,-71.67f,16.58f,-58.87f,32.26f,0.15f,33.83f,-0.16f,-1.00f,-19.18f,0.40f,-0.12f,-3.92f,-9.35f,-0.13f,13.48f,0.11f,4.16f,-21.97f,-0.55f,1.31f,-34.00f,10.78f,0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_3()
		{
			float[] value = {0.00f,66.31f,-18.11f,18.20f,0.29f,-46.27f,0.46f,24.47f,-0.58f,-9.83f,-0.00f,-0.00f,-0.00f,-47.65f,18.25f,-36.23f,-0.46f,-63.71f,-0.66f,-29.76f,-0.95f,17.16f,-7.75f,-11.48f,-8.42f,10.67f,19.42f,-20.03f,97.3524f,38.1439f,-26.1283f,25.41f,7.45f,-70.56f,13.04f,-55.97f,32.74f,0.15f,34.22f,-0.17f,-0.68f,-18.05f,0.39f,-1.94f,-2.61f,-9.49f,-0.13f,15.44f,0.11f,6.09f,-17.49f,-1.13f,-0.19f,-34.84f,10.89f,0.00f,-0.00f,0.00f,67.12f,-16.77f,17.43f,0.28f,-43.59f,0.44f,22.94f,-0.46f,-8.88f,-0.00f,-0.00f,-0.00f,-46.90f,17.43f,-37.05f,-0.43f,-61.49f,-0.63f,-28.93f,-0.86f,16.18f,-7.47f,-9.75f,-8.54f,10.76f,19.57f,-20.81f,96.2173f,38.4056f,-24.9244f,24.69f,6.66f,-68.89f,7.37f,-53.15f,27.51f,0.15f,33.76f,-0.16f,-0.61f,-18.05f,0.38f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_4()
		{
			float[] value = {-3.72f,-2.15f,-10.11f,-0.14f,19.14f,0.12f,7.49f,-13.64f,-1.82f,-2.03f,-34.13f,10.04f,0.00f,-0.00f,0.00f,67.56f,-16.62f,19.50f,0.27f,-41.50f,0.43f,21.74f,-0.34f,-8.16f,-0.00f,-0.00f,-0.00f,-45.96f,15.73f,-39.13f,-0.39f,-58.68f,-0.59f,-27.81f,-0.72f,14.98f,-7.27f,-9.14f,-8.81f,10.66f,19.49f,-21.42f,95.1761f,38.6924f,-23.7938f,24.15f,6.42f,-66.71f,2.82f,-50.48f,23.33f,0.15f,32.73f,-0.16f,-0.47f,-18.01f,0.36f,-4.97f,-2.42f,-10.52f,-0.14f,23.12f,0.13f,9.59f,-8.81f,-3.08f,-2.43f,-35.20f,8.98f,0.00f,-0.00f,0.00f,66.08f,-15.05f,19.34f,0.27f,-40.97f,0.43f,21.31f,-0.27f,-7.99f,-0.00f,-0.00f,-0.00f,-46.61f,15.23f,-38.76f,-0.38f,-57.27f,-0.57f,-27.29f,-0.66f,14.38f,-7.51f,-6.45f,-8.69f,10.34f,19.29f,-21.80f,94.1762f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_5()
		{
			float[] value = {38.9317f,-22.7185f,23.12f,5.98f,-64.14f,-0.64f,-46.82f,21.66f,0.15f,31.49f,-0.16f,-0.24f,-18.64f,0.33f,-6.39f,-2.50f,-12.36f,-0.14f,27.19f,0.14f,12.08f,-3.47f,-4.99f,-3.87f,-35.12f,7.85f,0.00f,-0.00f,0.00f,65.09f,-14.87f,19.12f,0.27f,-40.69f,0.43f,21.06f,-0.21f,-7.91f,-0.00f,-0.00f,-0.00f,-46.35f,15.01f,-39.01f,-0.36f,-55.89f,-0.55f,-26.78f,-0.60f,13.80f,-7.31f,-4.03f,-8.75f,10.55f,18.89f,-22.62f,93.2366f,39.1289f,-21.7609f,21.45f,6.18f,-62.86f,-1.97f,-43.09f,19.07f,0.15f,30.63f,-0.15f,-0.37f,-19.86f,0.34f,-6.65f,-2.81f,-12.07f,-0.15f,31.11f,0.16f,13.48f,0.96f,-6.60f,-3.20f,-34.37f,8.50f,0.00f,-0.00f,0.00f,63.73f,-14.81f,18.79f,0.27f,-40.80f,0.43f,20.99f,-0.17f,-7.96f,-0.00f,-0.00f,-0.00f,-45.98f,14.78f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_6()
		{
			float[] value = {-38.15f,-0.35f,-54.48f,-0.54f,-26.16f,-0.51f,13.23f,-7.35f,-2.07f,-8.79f,10.83f,18.39f,-23.36f,92.3888f,39.3091f,-20.8820f,19.91f,6.61f,-61.14f,-2.80f,-39.87f,17.37f,0.15f,30.07f,-0.15f,-0.39f,-20.96f,0.33f,-7.16f,-3.88f,-12.65f,-0.16f,34.78f,0.17f,14.20f,5.59f,-8.07f,-2.13f,-34.16f,8.98f,0.00f,-0.00f,0.00f,62.06f,-14.08f,17.05f,0.27f,-41.44f,0.43f,21.20f,-0.16f,-8.19f,-0.00f,-0.00f,-0.00f,-45.94f,14.76f,-36.67f,-0.35f,-54.30f,-0.53f,-26.12f,-0.51f,13.15f,-7.92f,0.86f,-8.72f,11.42f,17.57f,-24.43f,91.5813f,39.4364f,-20.0691f,18.04f,6.98f,-59.50f,-2.94f,-36.77f,16.03f,0.15f,30.04f,-0.15f,-0.44f,-21.88f,0.33f,-7.09f,-4.66f,-11.68f,-0.16f,38.33f,0.18f,13.82f,9.33f,-8.68f,-0.98f,-33.13f,9.48f,0.00f,-0.00f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_7()
		{
			float[] value = {60.80f,-13.97f,16.16f,0.27f,-41.75f,0.43f,21.16f,-0.09f,-8.32f,-0.00f,-0.00f,-0.00f,-46.05f,14.11f,-36.09f,-0.34f,-53.30f,-0.52f,-25.65f,-0.43f,12.75f,-8.46f,2.90f,-8.66f,12.07f,17.16f,-25.41f,90.8459f,39.3922f,-19.3562f,16.11f,7.21f,-57.54f,-3.34f,-34.04f,13.83f,0.15f,30.45f,-0.15f,-0.54f,-22.99f,0.32f,-7.10f,-4.73f,-11.05f,-0.17f,41.88f,0.19f,10.54f,9.27f,-6.58f,-1.07f,-31.24f,9.59f,0.00f,-0.00f,0.00f,60.87f,-14.60f,15.39f,0.27f,-42.26f,0.44f,21.22f,-0.02f,-8.53f,-0.00f,-0.00f,-0.00f,-45.12f,13.77f,-35.61f,-0.34f,-53.57f,-0.53f,-25.63f,-0.40f,12.88f,-7.97f,3.69f,-9.09f,12.59f,16.74f,-26.65f,90.1361f,39.4038f,-18.6673f,14.17f,6.77f,-56.09f,-3.89f,-31.01f,11.17f,0.15f,30.84f,-0.16f,-0.67f,-24.18f,0.31f,-7.50f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_8()
		{
			float[] value = {-6.13f,-10.33f,-0.18f,46.01f,0.21f,8.78f,11.25f,-5.75f,-1.02f,-28.88f,9.92f,0.00f,-0.00f,0.00f,60.82f,-14.90f,15.28f,0.28f,-42.91f,0.44f,21.37f,0.02f,-8.78f,-0.00f,-0.00f,-0.00f,-44.75f,13.25f,-34.40f,-0.35f,-54.73f,-0.54f,-25.88f,-0.38f,13.38f,-7.81f,4.44f,-9.28f,13.20f,16.07f,-27.54f,89.5959f,39.3571f,-18.1248f,12.97f,6.41f,-54.50f,-3.90f,-28.77f,11.47f,0.15f,31.06f,-0.16f,-0.78f,-25.06f,0.30f,-8.13f,-9.16f,-9.76f,-0.20f,50.94f,0.24f,7.17f,12.89f,-4.87f,-1.43f,-27.90f,10.17f,0.00f,-0.00f,0.00f,60.84f,-14.63f,14.23f,0.28f,-44.13f,0.45f,21.82f,0.02f,-9.23f,-0.00f,-0.00f,-0.00f,-44.10f,13.58f,-31.86f,-0.37f,-56.24f,-0.56f,-26.19f,-0.35f,14.04f,-7.34f,5.95f,-9.60f,13.40f,15.13f,-28.59f,89.2018f,39.2414f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_9()
		{
			float[] value = {-17.5740f,11.79f,5.12f,-52.41f,-4.98f,-26.13f,11.15f,0.15f,31.15f,-0.16f,-0.91f,-25.81f,0.28f,-10.13f,-11.73f,-10.91f,-0.23f,56.18f,0.27f,5.49f,13.09f,-3.75f,-2.60f,-24.79f,9.51f,0.00f,-0.00f,0.00f,60.45f,-14.62f,14.45f,0.29f,-45.61f,0.46f,22.38f,-0.01f,-9.79f,-0.00f,-0.00f,-0.00f,-44.25f,12.52f,-29.24f,-0.38f,-57.59f,-0.57f,-26.52f,-0.35f,14.63f,-7.56f,5.79f,-9.83f,13.87f,14.57f,-29.29f,88.8635f,39.1751f,-17.1212f,10.43f,3.76f,-50.36f,-6.10f,-23.49f,9.21f,0.15f,31.35f,-0.16f,-1.02f,-26.48f,0.26f,-11.78f,-14.49f,-11.76f,-0.27f,61.34f,0.31f,4.62f,12.66f,-3.12f,-3.91f,-21.25f,8.65f,0.00f,-0.00f,0.00f,60.62f,-14.57f,14.82f,0.30f,-46.77f,0.47f,23.00f,-0.12f,-10.20f,-0.00f,-0.00f,-0.00f,-44.37f,11.71f,-26.33f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_10()
		{
			float[] value = {-0.40f,-59.50f,-0.60f,-27.14f,-0.44f,15.45f,-7.72f,5.78f,-9.61f,14.86f,13.92f,-29.53f,88.6095f,39.0886f,-16.8331f,9.11f,2.95f,-48.70f,-6.36f,-21.76f,8.14f,0.15f,32.05f,-0.16f,-1.13f,-27.03f,0.24f,-12.66f,-18.42f,-12.07f,-0.32f,66.47f,0.37f,4.36f,11.81f,-2.88f,-3.85f,-18.38f,8.31f,0.00f,-0.00f,0.00f,59.86f,-14.20f,14.71f,0.30f,-47.82f,0.48f,23.82f,-0.33f,-10.54f,-0.00f,-0.00f,-0.00f,-45.22f,11.37f,-22.42f,-0.43f,-61.81f,-0.63f,-27.88f,-0.56f,16.46f,-8.35f,6.01f,-9.43f,15.42f,13.45f,-29.73f,88.4366f,38.9708f,-16.6867f,8.01f,2.21f,-47.56f,-6.32f,-20.85f,7.49f,0.15f,33.37f,-0.16f,-1.23f,-27.37f,0.23f,-13.58f,-23.40f,-12.14f,-0.40f,71.41f,0.46f,4.19f,12.13f,-2.77f,-3.73f,-14.87f,7.89f,0.00f,-0.00f,0.00f,59.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_11()
		{
			float[] value = {-14.02f,16.38f,0.30f,-48.20f,0.48f,24.61f,-0.53f,-10.62f,-0.00f,-0.00f,-0.00f,-46.17f,9.55f,-19.17f,-0.46f,-63.85f,-0.67f,-28.54f,-0.68f,17.35f,-9.04f,5.08f,-9.44f,15.72f,13.32f,-29.71f,88.3473f,38.7864f,-16.5983f,7.19f,1.65f,-46.29f,-6.38f,-20.61f,6.65f,0.16f,35.24f,-0.17f,-1.39f,-28.15f,0.20f,-15.15f,-28.53f,-13.27f,-0.52f,75.66f,0.58f,4.04f,10.02f,-2.54f,-4.39f,-11.69f,7.02f,0.00f,-0.00f,0.00f,59.23f,-13.66f,17.56f,0.31f,-48.33f,0.48f,25.43f,-0.63f,-10.61f,-0.00f,-0.00f,-0.00f,-46.53f,7.20f,-16.91f,-0.50f,-65.80f,-0.70f,-29.30f,-0.84f,18.20f,-8.96f,4.04f,-9.47f,15.87f,12.90f,-29.36f,88.2985f,38.5674f,-16.6196f,6.57f,1.59f,-45.41f,-5.98f,-21.16f,6.20f,0.16f,37.52f,-0.18f,-1.60f,-29.16f,0.14f,-16.42f,-34.12f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_12()
		{
			float[] value = {-14.39f,-0.65f,78.70f,0.72f,4.04f,8.40f,-2.42f,-4.51f,-9.33f,6.34f,0.00f,-0.00f,0.00f,59.22f,-13.06f,18.94f,0.31f,-48.44f,0.48f,26.18f,-0.60f,-10.63f,-0.00f,-0.00f,-0.00f,-47.24f,4.98f,-14.45f,-0.54f,-67.78f,-0.75f,-30.26f,-1.02f,19.06f,-9.09f,2.88f,-9.39f,15.89f,12.84f,-28.76f,88.2626f,38.3273f,-16.6708f,6.42f,1.63f,-45.74f,-5.51f,-22.23f,7.00f,0.17f,40.02f,-0.19f,-1.81f,-30.35f,0.08f,-17.55f,-40.14f,-14.82f,-0.75f,80.15f,0.82f,4.17f,7.34f,-2.42f,-4.39f,-7.63f,6.08f,0.00f,-0.00f,0.00f,59.03f,-11.63f,21.06f,0.31f,-48.99f,0.49f,26.86f,-0.53f,-10.85f,-0.00f,-0.00f,-0.00f,-48.66f,2.03f,-11.83f,-0.56f,-68.80f,-0.78f,-31.16f,-1.11f,19.48f,-9.68f,1.80f,-9.02f,16.02f,12.65f,-27.73f,88.2208f,38.0047f,-16.7127f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_13()
		{
			float[] value = {6.76f,1.76f,-46.54f,-5.47f,-23.79f,7.61f,0.17f,42.64f,-0.20f,-1.87f,-31.57f,0.03f,-18.80f,-45.41f,-15.44f,-0.71f,79.53f,0.77f,3.07f,3.55f,-1.60f,-4.98f,-6.01f,6.11f,0.00f,-0.00f,0.00f,59.31f,-10.68f,24.32f,0.31f,-49.76f,0.49f,27.48f,-0.46f,-11.17f,-0.00f,-0.00f,-0.00f,-49.75f,-1.61f,-10.26f,-0.57f,-69.22f,-0.79f,-31.92f,-1.08f,19.66f,-9.75f,0.18f,-8.90f,16.05f,12.10f,-26.69f,88.1571f,37.6510f,-16.7239f,7.80f,1.66f,-48.09f,-6.03f,-25.39f,7.93f,0.18f,44.78f,-0.21f,-1.86f,-33.11f,-0.03f,-20.00f,-50.28f,-15.72f,-0.55f,76.59f,0.62f,1.61f,-1.95f,-0.70f,-5.76f,-5.38f,7.10f,0.00f,-0.00f,0.00f,59.22f,-9.57f,26.84f,0.32f,-50.59f,0.50f,28.03f,-0.38f,-11.51f,0.00f,-0.00f,-0.00f,-51.00f,-4.95f,-9.31f,-0.58f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_14()
		{
			float[] value = {-69.49f,-0.79f,-32.52f,-0.97f,19.80f,-10.35f,-1.50f,-8.85f,16.13f,12.23f,-25.94f,88.1025f,37.3989f,-16.7136f,9.48f,2.04f,-50.26f,-6.34f,-27.51f,8.74f,0.19f,46.36f,-0.21f,-1.79f,-34.25f,-0.06f,-21.26f,-55.47f,-16.88f,-0.40f,71.32f,0.46f,0.90f,-4.05f,-0.39f,-6.35f,-6.14f,8.37f,0.00f,-0.00f,0.00f,59.18f,-7.74f,28.88f,0.32f,-51.17f,0.50f,28.47f,-0.29f,-11.76f,-0.00f,-0.00f,-0.00f,-51.65f,-8.25f,-9.21f,-0.58f,-69.48f,-0.79f,-32.93f,-0.85f,19.81f,-10.91f,-2.84f,-8.64f,16.08f,12.33f,-24.93f,87.9962f,37.1696f,-16.6837f,11.40f,2.08f,-52.93f,-6.62f,-29.31f,10.21f,0.19f,47.35f,-0.22f,-1.67f,-35.00f,-0.06f,-22.56f,-59.20f,-19.24f,-0.30f,64.46f,0.35f,0.94f,-5.24f,-0.40f,-7.55f,-6.35f,9.88f,0.00f,-0.00f,0.00f,59.30f,-6.18f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_15()
		{
			float[] value = {31.78f,0.33f,-51.51f,0.51f,28.76f,-0.21f,-11.92f,-0.00f,-0.00f,-0.00f,-51.81f,-12.21f,-9.87f,-0.56f,-68.89f,-0.78f,-33.20f,-0.68f,19.57f,-11.27f,-4.54f,-8.64f,16.02f,11.53f,-23.85f,87.7643f,37.0833f,-16.5464f,12.93f,2.06f,-55.91f,-6.72f,-30.19f,11.53f,0.19f,47.61f,-0.22f,-1.43f,-35.85f,-0.04f,-22.60f,-61.49f,-21.53f,-0.23f,56.34f,0.27f,1.36f,-4.24f,-0.61f,-7.41f,-6.40f,11.40f,0.00f,-0.00f,0.00f,58.14f,-4.32f,34.78f,0.33f,-51.76f,0.51f,28.98f,-0.15f,-12.03f,-0.00f,-0.00f,-0.00f,-53.22f,-16.18f,-10.18f,-0.54f,-68.11f,-0.76f,-33.42f,-0.46f,19.25f,-12.83f,-6.19f,-8.53f,16.29f,11.34f,-22.80f,87.5180f,37.0526f,-16.4667f,14.67f,2.13f,-58.44f,-6.92f,-31.14f,12.33f,0.19f,47.32f,-0.22f,-1.17f,-36.40f,0.01f,-22.81f,-63.61f,-24.10f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_16()
		{
			float[] value = {-0.19f,48.39f,0.22f,2.00f,-2.00f,-0.97f,-8.09f,-7.68f,12.90f,0.00f,-0.00f,0.00f,58.15f,-2.72f,36.53f,0.33f,-51.49f,0.51f,29.02f,-0.08f,-11.93f,-0.00f,-0.00f,-0.00f,-53.19f,-18.96f,-10.25f,-0.53f,-67.29f,-0.74f,-33.58f,-0.23f,18.92f,-12.90f,-7.12f,-8.50f,15.69f,11.21f,-21.93f,87.1980f,37.0751f,-16.3576f,15.97f,2.13f,-60.04f,-7.29f,-31.51f,12.34f,0.19f,46.74f,-0.21f,-0.91f,-36.37f,0.07f,-23.51f,-64.79f,-26.48f,-0.17f,41.71f,0.19f,2.87f,-0.46f,-1.44f,-8.43f,-8.75f,13.60f,0.00f,-0.00f,0.00f,57.72f,-1.27f,38.40f,0.33f,-51.37f,0.51f,29.08f,-0.02f,-11.90f,-0.00f,-0.00f,-0.00f,-53.32f,-21.15f,-8.99f,-0.51f,-66.46f,-0.72f,-33.60f,-0.07f,18.58f,-13.16f,-7.95f,-8.48f,15.29f,11.56f,-21.36f,86.7742f,37.1565f,-16.2769f,16.95f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_17()
		{
			float[] value = {2.36f,-61.67f,-7.26f,-31.48f,12.23f,0.18f,45.76f,-0.21f,-0.76f,-36.12f,0.11f,-21.85f,-65.95f,-24.35f,-0.16f,36.47f,0.17f,4.48f,-0.46f,-2.19f,-8.19f,-9.43f,14.65f,0.00f,-0.00f,0.00f,57.01f,-0.61f,39.98f,0.32f,-51.20f,0.50f,29.08f,0.02f,-11.84f,-0.00f,-0.00f,-0.00f,-53.78f,-22.86f,-7.50f,-0.50f,-66.06f,-0.71f,-33.61f,0.01f,18.41f,-13.44f,-8.82f,-8.63f,15.03f,11.84f,-21.16f,86.2933f,37.2549f,-16.1715f,17.93f,2.39f,-62.86f,-7.67f,-30.98f,11.62f,0.18f,44.30f,-0.20f,-0.54f,-36.16f,0.16f,-19.07f,-67.15f,-17.25f,-0.15f,32.85f,0.16f,6.74f,-1.87f,-3.05f,-8.29f,-10.39f,15.57f,0.00f,-0.00f,0.00f,56.83f,-0.09f,40.20f,0.32f,-51.01f,0.50f,29.00f,0.01f,-11.76f,-0.00f,-0.00f,-0.00f,-53.93f,-23.55f,-5.41f,-0.51f,-66.58f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_18()
		{
			float[] value = {-0.72f,-33.73f,0.00f,18.65f,-13.56f,-9.07f,-8.78f,15.07f,11.98f,-21.35f,85.7143f,37.3685f,-16.0444f,18.56f,2.45f,-63.62f,-8.13f,-29.95f,10.42f,0.17f,42.65f,-0.20f,-0.15f,-36.19f,0.25f,-13.89f,-67.73f,-4.24f,-0.15f,30.65f,0.15f,9.25f,-4.68f,-3.67f,-8.16f,-11.05f,16.12f,0.00f,-0.00f,0.00f,56.55f,0.46f,40.37f,0.32f,-50.93f,0.50f,28.95f,-0.00f,-11.72f,-0.00f,-0.00f,-0.00f,-54.49f,-23.86f,-2.51f,-0.53f,-67.44f,-0.74f,-33.83f,-0.08f,19.03f,-13.43f,-9.63f,-8.99f,14.58f,12.58f,-21.48f,85.0774f,37.4994f,-15.9003f,19.16f,2.77f,-64.17f,-8.43f,-28.90f,8.99f,0.17f,41.02f,-0.19f,0.22f,-36.23f,0.34f,-12.25f,-68.15f,0.61f,-0.15f,29.45f,0.15f,9.94f,-7.66f,-3.39f,-7.75f,-12.17f,16.53f,0.00f,-0.00f,0.00f,56.24f,0.98f,40.69f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_19()
		{
			float[] value = {0.32f,-50.79f,0.50f,28.83f,-0.04f,-11.65f,-0.00f,-0.00f,-0.00f,-54.83f,-23.90f,0.40f,-0.54f,-67.71f,-0.75f,-33.65f,-0.26f,19.12f,-13.25f,-9.94f,-9.15f,14.13f,13.15f,-21.65f,84.3668f,37.5620f,-15.7648f,19.99f,2.94f,-64.76f,-8.50f,-27.85f,8.56f,0.17f,39.40f,-0.18f,0.45f,-36.30f,0.40f,-12.50f,-68.55f,-0.10f,-0.15f,29.07f,0.15f,8.97f,-11.59f,-2.43f,-7.85f,-14.01f,17.13f,0.00f,-0.00f,0.00f,56.73f,1.43f,40.85f,0.32f,-50.24f,0.50f,28.53f,-0.10f,-11.42f,-0.00f,-0.00f,-0.00f,-54.57f,-23.35f,3.70f,-0.54f,-67.95f,-0.75f,-33.28f,-0.51f,19.16f,-12.63f,-9.51f,-9.19f,14.00f,13.28f,-21.97f,83.5838f,37.5840f,-15.6535f,20.91f,3.11f,-65.20f,-8.45f,-26.74f,8.53f,0.16f,37.69f,-0.18f,0.66f,-36.64f,0.45f,-12.45f,-68.96f,-0.64f,-0.15f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_20()
		{
			float[] value = {29.25f,0.15f,7.82f,-14.96f,-1.66f,-7.74f,-15.67f,17.76f,0.00f,-0.00f,0.00f,56.80f,1.64f,41.29f,0.31f,-49.77f,0.49f,28.24f,-0.16f,-11.22f,-0.00f,-0.00f,-0.00f,-55.25f,-22.54f,6.94f,-0.54f,-67.81f,-0.75f,-32.78f,-0.73f,19.05f,-12.68f,-9.58f,-9.41f,14.36f,13.88f,-22.68f,82.7104f,37.6562f,-15.5250f,21.63f,3.34f,-65.48f,-8.24f,-25.35f,8.45f,0.16f,35.86f,-0.17f,0.72f,-36.57f,0.47f,-12.65f,-68.98f,-1.58f,-0.15f,29.59f,0.15f,6.47f,-17.69f,-1.08f,-7.54f,-17.08f,18.28f,0.00f,-0.00f,0.00f,56.90f,1.85f,41.60f,0.31f,-49.53f,0.49f,28.07f,-0.19f,-11.11f,-0.00f,-0.00f,-0.00f,-56.11f,-21.71f,9.53f,-0.51f,-66.72f,-0.72f,-31.87f,-0.92f,18.50f,-12.71f,-9.44f,-9.63f,14.65f,13.69f,-23.21f,81.7785f,37.7181f,-15.4031f,22.16f,3.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_21()
		{
			float[] value = {-65.26f,-7.98f,-23.64f,8.53f,0.15f,34.00f,-0.16f,0.62f,-36.25f,0.44f,-13.95f,-68.33f,-3.71f,-0.15f,29.87f,0.15f,5.06f,-20.09f,-0.67f,-7.78f,-18.52f,18.40f,0.00f,-0.00f,0.00f,57.50f,1.67f,42.11f,0.31f,-49.11f,0.49f,27.77f,-0.26f,-10.94f,-0.00f,-0.00f,-0.00f,-56.67f,-20.67f,11.73f,-0.47f,-64.14f,-0.67f,-30.44f,-0.97f,17.33f,-12.54f,-9.22f,-9.89f,14.89f,14.01f,-24.00f,80.7702f,37.7606f,-15.2427f,22.76f,3.73f,-64.61f,-7.78f,-21.92f,7.98f,0.15f,32.11f,-0.16f,0.47f,-35.70f,0.41f,-16.03f,-67.44f,-6.77f,-0.15f,30.06f,0.15f,3.31f,-23.04f,-0.35f,-8.04f,-20.12f,18.09f,0.00f,-0.00f,0.00f,58.17f,1.52f,42.17f,0.31f,-48.79f,0.48f,27.48f,-0.32f,-10.80f,-0.00f,-0.00f,-0.00f,-57.36f,-19.58f,13.17f,-0.43f,-61.55f,-0.63f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_22()
		{
			float[] value = {-28.97f,-0.87f,16.21f,-12.46f,-8.77f,-10.07f,15.08f,14.24f,-24.71f,79.6064f,37.7910f,-15.0872f,22.97f,4.10f,-64.01f,-7.11f,-19.71f,7.69f,0.15f,30.18f,-0.15f,0.29f,-35.13f,0.36f,-16.83f,-65.97f,-8.87f,-0.15f,30.11f,0.15f,1.10f,-26.62f,-0.23f,-8.31f,-21.41f,18.00f,0.00f,-0.00f,0.00f,59.09f,1.27f,41.63f,0.31f,-48.49f,0.48f,27.17f,-0.39f,-10.67f,-0.00f,-0.00f,-0.00f,-57.94f,-18.27f,13.91f,-0.40f,-59.77f,-0.60f,-27.90f,-0.70f,15.48f,-12.27f,-8.61f,-10.34f,15.22f,14.43f,-25.40f,78.3476f,37.8095f,-14.9414f,23.35f,4.43f,-63.25f,-6.41f,-17.60f,7.90f,0.15f,28.25f,-0.15f,0.05f,-34.18f,0.32f,-17.99f,-64.44f,-11.23f,-0.15f,30.16f,0.15f,-0.73f,-29.56f,-0.36f,-8.27f,-23.17f,17.59f,0.00f,-0.00f,0.00f,59.50f,1.67f,40.77f,0.31f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_23()
		{
			float[] value = {-48.31f,0.48f,26.87f,-0.46f,-10.59f,-0.00f,-0.00f,-0.00f,-59.03f,-16.76f,15.36f,-0.39f,-58.51f,-0.58f,-27.07f,-0.50f,14.99f,-12.28f,-7.95f,-10.35f,15.27f,14.68f,-25.84f,76.9685f,37.7749f,-14.7762f,23.77f,4.61f,-62.55f,-5.83f,-15.33f,7.41f,0.14f,26.37f,-0.14f,-0.12f,-33.03f,0.29f,-19.08f,-62.73f,-13.34f,-0.15f,30.14f,0.15f,-1.80f,-31.45f,-0.53f,-8.58f,-24.85f,17.38f,0.00f,-0.00f,0.00f,60.17f,1.57f,40.17f,0.30f,-48.06f,0.48f,26.61f,-0.50f,-10.48f,-0.00f,-0.00f,-0.00f,-60.13f,-15.12f,16.77f,-0.38f,-58.01f,-0.58f,-26.59f,-0.34f,14.83f,-12.12f,-7.50f,-10.54f,15.19f,14.83f,-26.41f,75.4827f,37.7198f,-14.6104f,24.15f,4.92f,-61.47f,-5.10f,-12.86f,6.17f,0.14f,24.18f,-0.14f,-0.33f,-31.39f,0.27f,-20.43f,-60.93f,-15.97f,-0.15f,30.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_24()
		{
			float[] value = {0.15f,-2.24f,-32.55f,-0.64f,-9.27f,-27.10f,16.76f,0.00f,-0.00f,0.00f,61.30f,1.29f,39.24f,0.30f,-47.74f,0.48f,26.22f,-0.55f,-10.36f,-0.00f,-0.00f,-0.00f,-60.48f,-13.32f,18.47f,-0.38f,-57.72f,-0.57f,-26.19f,-0.16f,14.75f,-11.49f,-6.70f,-10.60f,14.97f,15.14f,-26.89f,73.8344f,37.8540f,-14.4894f,24.10f,5.87f,-60.11f,-3.58f,-10.08f,5.36f,0.14f,21.36f,-0.13f,-0.63f,-28.80f,0.26f,-20.30f,-59.57f,-18.16f,-0.15f,31.78f,0.16f,-1.55f,-31.26f,-0.48f,-8.93f,-30.28f,16.12f,0.00f,-0.00f,0.00f,61.99f,1.35f,37.43f,0.30f,-47.66f,0.47f,25.85f,-0.60f,-10.33f,-0.00f,-0.00f,-0.00f,-60.89f,-10.69f,21.57f,-0.39f,-58.20f,-0.58f,-26.10f,-0.02f,15.01f,-11.24f,-4.96f,-10.42f,15.03f,15.76f,-27.51f,72.1085f,38.1202f,-14.3910f,23.82f,6.85f,-59.44f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_25()
		{
			float[] value = {-1.86f,-7.29f,4.16f,0.14f,18.42f,-0.12f,-1.17f,-24.66f,0.31f,-18.24f,-58.67f,-18.56f,-0.15f,33.14f,0.16f,0.18f,-27.82f,-0.24f,-8.35f,-33.06f,16.11f,0.00f,-0.00f,0.00f,62.86f,0.79f,36.38f,0.30f,-47.64f,0.47f,25.58f,-0.62f,-10.33f,-0.00f,-0.00f,-0.00f,-61.37f,-8.52f,25.13f,-0.40f,-59.45f,-0.60f,-26.34f,0.01f,15.58f,-11.00f,-3.42f,-10.27f,15.28f,16.35f,-28.15f,70.3796f,38.4528f,-14.3253f,23.28f,7.32f,-59.31f,-0.58f,-4.86f,2.27f,0.13f,17.03f,-0.12f,-2.20f,-19.44f,0.52f,-15.57f,-57.18f,-17.90f,-0.15f,34.03f,0.17f,1.85f,-24.18f,-0.24f,-7.59f,-34.75f,16.75f,0.00f,-0.00f,0.00f,63.04f,0.51f,35.54f,0.31f,-48.46f,0.48f,25.55f,-0.63f,-10.66f,-0.00f,-0.00f,-0.00f,-62.00f,-6.58f,28.50f,-0.44f,-62.38f,-0.64f,-27.05f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_26()
		{
			float[] value = {-0.03f,16.89f,-11.20f,-2.67f,-10.20f,15.85f,16.97f,-28.82f,68.6263f,38.6937f,-14.3449f,21.83f,8.04f,-59.18f,1.50f,-3.32f,2.24f,0.14f,18.51f,-0.12f,-3.38f,-14.77f,0.92f,-12.98f,-54.24f,-20.07f,-0.16f,34.37f,0.17f,2.66f,-21.64f,-0.36f,-6.29f,-35.31f,17.03f,0.00f,-0.00f,0.00f,62.91f,0.53f,35.20f,0.31f,-49.45f,0.49f,25.59f,-0.63f,-11.07f,-0.00f,-0.00f,-0.00f,-62.28f,-5.72f,30.79f,-0.48f,-65.00f,-0.69f,-27.62f,-0.07f,18.10f,-10.88f,-2.45f,-10.34f,15.59f,17.17f,-29.03f,66.9122f,38.9690f,-14.4053f,20.22f,8.67f,-58.72f,3.28f,-2.84f,2.18f,0.14f,21.81f,-0.13f,-4.89f,-10.30f,1.60f,-10.89f,-50.84f,-23.53f,-0.16f,34.23f,0.17f,2.48f,-21.28f,-0.37f,-5.29f,-35.53f,17.07f,0.00f,-0.00f,0.00f,62.48f,0.20f,34.64f,0.32f,-50.43f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_27()
		{
			float[] value = {0.50f,25.76f,-0.63f,-11.47f,-0.00f,-0.00f,-0.00f,-62.32f,-4.99f,32.68f,-0.52f,-66.88f,-0.73f,-28.02f,-0.12f,18.97f,-10.15f,-2.07f,-10.49f,15.40f,17.31f,-29.29f,65.3395f,39.2690f,-14.4450f,19.21f,8.58f,-57.89f,3.72f,-3.20f,2.89f,0.14f,25.42f,-0.14f,-6.95f,-5.79f,2.71f,-8.59f,-47.82f,-23.18f,-0.15f,33.85f,0.16f,2.30f,-21.62f,-0.35f,-5.37f,-35.67f,16.58f,0.00f,-0.00f,0.00f,62.00f,-0.28f,33.89f,0.32f,-51.30f,0.51f,26.02f,-0.64f,-11.83f,-0.00f,-0.00f,-0.00f,-62.45f,-3.74f,34.48f,-0.59f,-69.89f,-0.81f,-28.69f,-0.27f,20.36f,-9.60f,-1.50f,-10.57f,15.57f,17.44f,-29.71f,63.9115f,39.5229f,-14.5369f,18.59f,8.27f,-56.96f,3.57f,-4.41f,4.36f,0.15f,28.92f,-0.15f,-8.88f,-2.31f,3.94f,-6.90f,-45.19f,-22.23f,-0.15f,33.53f,0.16f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_28()
		{
			float[] value = {2.14f,-21.99f,-0.33f,-6.74f,-35.26f,15.60f,0.00f,-0.00f,0.00f,62.09f,-1.49f,33.43f,0.33f,-51.72f,0.51f,26.21f,-0.66f,-11.99f,-0.00f,-0.00f,-0.00f,-62.03f,-2.59f,34.86f,-0.68f,-72.75f,-0.91f,-29.31f,-0.45f,21.68f,-8.96f,-1.64f,-10.83f,16.06f,17.35f,-30.27f,62.6141f,39.6352f,-14.7195f,17.19f,8.72f,-56.20f,4.68f,-6.00f,6.74f,0.15f,32.41f,-0.16f,-8.10f,-3.39f,3.46f,-4.00f,-42.70f,-21.02f,-0.15f,33.41f,0.16f,1.82f,-22.75f,-0.28f,-6.66f,-34.55f,14.56f,0.00f,-0.00f,0.00f,61.99f,-2.23f,32.75f,0.33f,-52.01f,0.51f,26.44f,-0.68f,-12.10f,-0.00f,-0.00f,-0.00f,-61.60f,-2.05f,35.31f,-0.78f,-74.99f,-1.01f,-29.94f,-0.70f,22.69f,-8.48f,-1.33f,-10.90f,16.42f,17.04f,-30.60f,61.5609f,39.6687f,-14.9009f,16.57f,8.13f,-55.97f,3.97f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_29()
		{
			float[] value = {-7.76f,8.73f,0.16f,35.12f,-0.17f,-6.38f,-6.81f,2.38f,-2.46f,-41.04f,-19.26f,-0.15f,34.08f,0.17f,1.49f,-23.54f,-0.25f,-7.49f,-33.20f,13.39f,0.00f,-0.00f,0.00f,61.52f,-2.81f,32.43f,0.33f,-52.31f,0.51f,26.76f,-0.70f,-12.21f,-0.00f,-0.00f,-0.00f,-61.39f,-2.43f,35.26f,-0.89f,-76.75f,-1.11f,-30.52f,-0.93f,23.48f,-8.28f,-1.37f,-10.90f,16.45f,16.58f,-30.50f,60.6604f,39.6625f,-15.0743f,15.65f,7.08f,-55.99f,2.69f,-8.81f,10.27f,0.16f,36.89f,-0.17f,-4.84f,-10.60f,1.54f,-1.42f,-39.30f,-17.76f,-0.16f,35.18f,0.17f,1.19f,-24.18f,-0.22f,-7.95f,-30.82f,12.56f,0.00f,-0.00f,0.00f,60.65f,-3.46f,31.71f,0.33f,-52.34f,0.51f,27.01f,-0.70f,-12.21f,-0.00f,-0.00f,-0.00f,-61.77f,-3.21f,35.02f,-1.04f,-78.72f,-1.27f,-31.08f,-1.14f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_30()
		{
			float[] value = {24.38f,-8.56f,-1.42f,-10.77f,16.67f,15.71f,-30.27f,59.8265f,39.7043f,-15.3276f,14.03f,6.74f,-56.34f,2.60f,-9.50f,11.21f,0.16f,37.60f,-0.18f,-3.12f,-14.38f,0.87f,0.33f,-37.69f,-16.77f,-0.16f,36.51f,0.17f,1.33f,-23.50f,-0.23f,-6.88f,-28.21f,11.99f,0.00f,-0.00f,0.00f,59.38f,-4.06f,30.92f,0.33f,-52.33f,0.51f,27.19f,-0.70f,-12.20f,-0.00f,-0.00f,-0.00f,-62.43f,-4.34f,34.99f,-1.28f,-80.85f,-1.51f,-31.72f,-1.35f,25.35f,-8.82f,-1.33f,-10.49f,16.75f,14.80f,-29.72f,59.2182f,39.8128f,-15.6466f,13.09f,5.80f,-56.82f,1.55f,-10.93f,9.80f,0.16f,37.06f,-0.18f,-1.49f,-17.48f,0.49f,1.07f,-37.31f,-15.45f,-0.16f,38.77f,0.18f,1.85f,-21.81f,-0.28f,-6.81f,-25.43f,10.94f,0.00f,-0.00f,0.00f,58.30f,-4.41f,29.76f,0.33f,-52.40f,0.52f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_31()
		{
			float[] value = {27.41f,-0.69f,-12.23f,-0.00f,-0.00f,-0.00f,-63.06f,-6.70f,34.50f,-1.48f,-82.12f,-1.72f,-32.31f,-1.50f,25.92f,-8.93f,-1.45f,-10.16f,16.73f,13.94f,-28.91f,58.8661f,39.9087f,-15.9749f,12.63f,4.57f,-57.34f,-0.34f,-13.19f,6.96f,0.16f,36.09f,-0.17f,-0.51f,-20.41f,0.34f,0.10f,-37.93f,-16.38f,-0.17f,41.80f,0.19f,2.49f,-19.52f,-0.40f,-7.31f,-22.49f,9.61f,0.00f,-0.00f,0.00f,57.24f,-4.85f,28.68f,0.33f,-52.44f,0.52f,27.71f,-0.65f,-12.24f,-0.00f,-0.00f,-0.00f,-63.66f,-9.38f,33.62f,-1.74f,-83.31f,-1.98f,-32.86f,-1.59f,26.46f,-8.88f,-1.75f,-9.81f,16.97f,13.16f,-28.13f,58.7053f,39.9326f,-16.4452f,11.91f,3.89f,-58.46f,-1.58f,-15.74f,3.48f,0.16f,35.46f,-0.17f,-0.36f,-22.26f,0.32f,-0.53f,-39.27f,-18.11f,-0.18f,45.16f,0.21f,3.22f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_32()
		{
			float[] value = {-16.32f,-0.64f,-6.84f,-19.56f,9.34f,0.00f,-0.00f,0.00f,55.96f,-5.93f,27.65f,0.33f,-52.55f,0.52f,28.03f,-0.60f,-12.29f,-0.00f,-0.00f,-0.00f,-64.36f,-11.75f,32.49f,-2.22f,-84.75f,-2.46f,-33.42f,-1.66f,27.14f,-8.91f,-2.17f,-9.72f,17.27f,12.30f,-27.76f,58.7000f,40.0081f,-17.0948f,11.13f,3.38f,-60.54f,-1.87f,-18.36f,0.74f,0.16f,35.64f,-0.17f,-0.28f,-22.27f,0.31f,-0.91f,-41.33f,-19.84f,-0.19f,48.76f,0.22f,3.99f,-11.33f,-1.11f,-6.27f,-15.72f,9.50f,0.00f,-0.00f,0.00f,55.36f,-7.31f,27.66f,0.33f,-52.48f,0.52f,28.24f,-0.55f,-12.26f,-0.00f,-0.00f,-0.00f,-65.13f,-14.85f,30.63f,-3.25f,-86.41f,-3.49f,-33.98f,-1.68f,27.95f,-8.47f,-4.21f,-9.89f,17.32f,11.98f,-27.09f,58.8460f,39.9627f,-17.9005f,10.89f,3.17f,-64.26f,-1.23f,-21.45f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_33()
		{
			float[] value = {-0.90f,0.16f,36.92f,-0.17f,0.10f,-20.86f,0.30f,-1.36f,-44.70f,-21.32f,-0.21f,52.59f,0.25f,3.91f,-4.69f,-1.55f,-5.19f,-12.45f,11.18f,0.00f,-0.00f,0.00f,55.07f,-8.10f,28.18f,0.33f,-52.56f,0.52f,28.51f,-0.47f,-12.30f,-0.00f,-0.00f,-0.00f,-66.53f,-18.34f,28.63f,-4.37f,-87.33f,-4.61f,-34.45f,-1.65f,28.41f,-8.27f,-6.62f,-10.00f,17.29f,11.31f,-26.02f,59.1150f,39.7143f,-18.7173f,11.60f,2.89f,-69.14f,-0.22f,-23.89f,-1.00f,0.16f,38.76f,-0.18f,0.07f,-21.17f,0.30f,-3.11f,-49.00f,-24.08f,-0.23f,56.38f,0.27f,2.07f,2.52f,-1.12f,-4.44f,-10.47f,13.56f,0.00f,-0.00f,0.00f,55.47f,-7.90f,29.29f,0.33f,-52.35f,0.51f,28.67f,-0.39f,-12.23f,-0.00f,-0.00f,-0.00f,-68.38f,-21.95f,26.96f,-7.31f,-88.40f,-7.56f,-34.89f,-1.59f,28.95f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_34()
		{
			float[] value = {-8.48f,-9.20f,-10.16f,17.44f,10.72f,-24.97f,59.4025f,39.2844f,-19.4436f,12.95f,2.39f,-74.27f,0.36f,-25.55f,0.29f,0.17f,40.67f,-0.19f,-0.71f,-24.42f,0.29f,-6.32f,-52.74f,-28.15f,-0.25f,58.46f,0.29f,-2.15f,8.07f,1.16f,-4.50f,-9.63f,16.45f,0.00f,-0.00f,0.00f,56.47f,-7.43f,30.46f,0.33f,-52.13f,0.51f,28.81f,-0.30f,-12.15f,-0.00f,-0.00f,-0.00f,-69.61f,-25.55f,25.21f,-9.12f,-88.72f,-9.37f,-35.22f,-1.49f,29.13f,-8.67f,-11.53f,-10.62f,17.63f,10.07f,-24.53f,59.6259f,38.8554f,-20.0763f,14.52f,1.66f,-78.97f,0.36f,-27.14f,1.57f,0.17f,42.80f,-0.20f,-0.97f,-27.44f,0.23f,-10.50f,-54.95f,-33.52f,-0.24f,57.50f,0.28f,-7.16f,7.84f,4.07f,-5.44f,-9.75f,19.47f,0.00f,-0.00f,0.00f,58.08f,-7.50f,32.45f,0.32f,-50.69f,0.50f,28.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_35()
		{
			float[] value = {-0.21f,-11.58f,-0.00f,-0.00f,-0.00f,-69.03f,-28.87f,23.38f,-5.35f,-87.82f,-5.60f,-35.46f,-1.33f,28.72f,-8.67f,-13.21f,-11.07f,18.10f,9.27f,-24.43f,59.7757f,38.3569f,-20.6441f,16.54f,0.81f,-82.58f,0.26f,-29.34f,2.67f,0.18f,44.75f,-0.21f,-0.80f,-29.93f,0.20f,-15.63f,-56.11f,-40.90f,-0.22f,54.53f,0.26f,-5.01f,-0.93f,2.05f,-6.07f,-10.79f,21.67f,0.00f,-0.00f,0.00f,58.75f,-8.12f,35.34f,0.31f,-48.38f,0.48f,27.78f,-0.12f,-10.67f,-0.00f,-0.00f,-0.00f,-68.07f,-31.87f,21.82f,-2.72f,-85.72f,-2.97f,-35.66f,-1.09f,27.72f,-9.35f,-13.98f,-11.46f,18.30f,8.72f,-24.46f,59.8139f,38.0255f,-21.2329f,18.38f,-0.23f,-85.44f,0.97f,-30.99f,4.39f,0.18f,45.55f,-0.21f,-0.70f,-31.78f,0.19f,-20.47f,-56.48f,-46.83f,-0.20f,50.44f,0.23f,-1.07f,-9.52f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_36()
		{
			float[] value = {0.16f,-7.73f,-11.76f,23.31f,0.00f,-0.00f,0.00f,60.15f,-9.36f,38.85f,0.29f,-45.79f,0.46f,26.92f,-0.04f,-9.68f,-0.00f,-0.00f,-0.00f,-66.09f,-34.78f,19.34f,-1.51f,-82.29f,-1.75f,-35.74f,-0.76f,26.10f,-9.20f,-15.16f,-12.07f,18.42f,8.99f,-25.10f,59.7365f,37.9621f,-21.8784f,19.55f,-1.15f,-87.47f,2.22f,-31.47f,6.53f,0.18f,45.16f,-0.21f,-0.77f,-32.15f,0.17f,-24.55f,-55.86f,-50.55f,-0.18f,45.34f,0.21f,0.98f,-14.00f,-0.35f,-8.61f,-12.40f,23.93f,0.00f,-0.00f,0.00f,60.85f,-9.63f,41.84f,0.28f,-43.41f,0.44f,26.10f,0.04f,-8.80f,-0.00f,-0.00f,-0.00f,-64.00f,-37.13f,17.11f,-1.03f,-78.68f,-1.27f,-35.60f,-0.46f,24.38f,-9.78f,-15.61f,-12.46f,19.30f,9.01f,-25.60f,59.6176f,38.0082f,-22.5451f,20.76f,-2.27f,-89.43f,3.13f,-31.45f,8.63f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_37()
		{
			float[] value = {0.18f,43.78f,-0.20f,-0.80f,-31.89f,0.17f,-26.99f,-55.64f,-49.08f,-0.17f,39.99f,0.19f,2.56f,-16.74f,-0.56f,-9.55f,-13.34f,24.17f,0.00f,-0.00f,0.00f,61.28f,-9.66f,45.15f,0.27f,-41.09f,0.43f,25.15f,0.06f,-7.96f,-0.00f,-0.00f,-0.00f,-61.78f,-38.84f,14.95f,-0.76f,-74.53f,-0.99f,-35.19f,-0.21f,22.41f,-10.33f,-15.95f,-12.63f,19.85f,9.11f,-25.69f,59.4223f,38.1441f,-23.2144f,21.71f,-3.53f,-91.46f,3.71f,-30.45f,10.61f,0.17f,41.33f,-0.19f,-0.78f,-31.68f,0.18f,-27.54f,-55.90f,-41.83f,-0.16f,35.35f,0.17f,4.03f,-18.75f,-0.65f,-10.10f,-14.67f,24.84f,0.00f,-0.00f,0.00f,60.75f,-9.42f,47.26f,0.26f,-39.75f,0.42f,24.45f,-0.00f,-7.48f,-0.00f,-0.00f,-0.00f,-60.40f,-38.54f,13.37f,-0.62f,-70.93f,-0.84f,-34.74f,0.02f,20.73f,-10.88f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_38()
		{
			float[] value = {-16.01f,-12.78f,20.00f,9.45f,-25.91f,59.1306f,38.2451f,-23.9190f,22.50f,-4.83f,-93.10f,3.56f,-29.05f,10.93f,0.16f,38.48f,-0.18f,-0.61f,-31.52f,0.21f,-25.77f,-56.91f,-27.01f,-0.15f,31.99f,0.16f,3.95f,-22.91f,-0.36f,-10.74f,-15.80f,24.83f,0.00f,-0.00f,0.00f,60.72f,-8.80f,48.77f,0.26f,-38.04f,0.41f,23.60f,-0.04f,-6.89f,-0.00f,-0.00f,-0.00f,-59.95f,-37.34f,11.34f,-0.54f,-67.74f,-0.75f,-34.26f,0.22f,19.27f,-11.14f,-16.22f,-12.87f,20.11f,9.51f,-25.93f,58.7591f,38.1628f,-24.7330f,23.23f,-6.28f,-94.87f,3.41f,-27.58f,10.73f,0.16f,36.04f,-0.17f,-0.35f,-31.77f,0.25f,-27.27f,-57.08f,-22.06f,-0.15f,29.89f,0.15f,-2.72f,-32.41f,-0.72f,-11.18f,-17.27f,24.76f,0.00f,-0.00f,0.00f,60.79f,-7.14f,47.19f,0.25f,-36.53f,0.40f,22.97f,-0.02f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_39()
		{
			float[] value = {-6.40f,-0.00f,-0.00f,-0.00f,-59.04f,-35.14f,8.85f,-0.46f,-63.91f,-0.67f,-33.46f,0.35f,17.51f,-11.42f,-16.26f,-12.69f,20.47f,9.91f,-25.70f,58.3187f,37.9867f,-25.6619f,23.88f,-7.54f,-97.11f,3.69f,-25.85f,10.21f,0.15f,33.79f,-0.16f,0.07f,-32.18f,0.31f,-31.62f,-56.41f,-30.67f,-0.15f,29.01f,0.15f,-7.56f,-37.89f,-2.28f,-10.88f,-18.69f,24.60f,0.00f,-0.00f,0.00f,60.33f,-7.05f,50.99f,0.25f,-34.22f,0.39f,21.52f,-0.17f,-5.65f,-0.00f,-0.00f,-0.00f,-58.63f,-32.72f,6.62f,-0.40f,-59.89f,-0.60f,-32.46f,0.45f,15.69f,-11.67f,-16.56f,-12.30f,20.80f,10.46f,-24.97f,57.8055f,37.8835f,-26.6825f,24.74f,-8.88f,-100.17f,4.04f,-23.82f,9.73f,0.15f,30.89f,-0.16f,0.54f,-32.06f,0.39f,-32.76f,-57.16f,-36.69f,-0.15f,30.10f,0.15f,-9.77f,-39.88f,-3.22f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_40()
		{
			float[] value = {-11.26f,-20.80f,24.38f,0.00f,-0.00f,0.00f,61.02f,-6.17f,51.43f,0.24f,-32.19f,0.38f,20.17f,-0.28f,-5.04f,-0.00f,-0.00f,-0.00f,-57.33f,-29.63f,4.44f,-0.37f,-56.78f,-0.56f,-31.60f,0.52f,14.33f,-10.91f,-17.30f,-11.77f,21.18f,11.12f,-24.02f,57.1241f,37.8049f,-27.7955f,24.69f,-10.95f,-103.85f,3.70f,-19.97f,10.46f,0.14f,26.60f,-0.14f,0.55f,-31.00f,0.38f,-32.27f,-58.41f,-40.58f,-0.15f,33.04f,0.16f,-12.45f,-41.64f,-4.42f,-12.10f,-22.66f,24.28f,0.00f,-0.00f,0.00f,61.77f,-4.79f,49.94f,0.24f,-31.04f,0.37f,19.33f,-0.33f,-4.71f,-0.00f,-0.00f,-0.00f,-56.04f,-26.17f,2.68f,-0.34f,-53.64f,-0.53f,-30.63f,0.56f,12.99f,-10.04f,-17.60f,-10.87f,21.32f,11.51f,-22.54f,56.4119f,37.7886f,-29.0674f,24.53f,-13.16f,-107.54f,3.41f,-15.53f,12.03f,0.14f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_41()
		{
			float[] value = {21.21f,-0.13f,-0.23f,-28.44f,0.30f,-32.58f,-60.23f,-45.05f,-0.16f,36.44f,0.17f,-11.75f,-40.80f,-3.98f,-12.98f,-24.78f,23.33f,0.00f,-0.00f,0.00f,62.37f,-3.75f,48.90f,0.23f,-29.91f,0.37f,18.30f,-0.39f,-4.40f,-0.00f,-0.00f,-0.00f,-54.75f,-22.57f,1.66f,-0.32f,-50.45f,-0.50f,-29.56f,0.58f,11.66f,-9.12f,-17.59f,-9.61f,21.37f,12.13f,-20.64f,55.5992f,37.8731f,-30.4708f,23.88f,-15.15f,-111.13f,3.28f,-10.80f,13.00f,0.13f,16.21f,-0.12f,-1.85f,-23.90f,0.33f,-33.01f,-60.67f,-49.57f,-0.16f,39.03f,0.18f,-4.34f,-33.67f,-1.01f,-13.71f,-26.45f,21.93f,0.00f,-0.00f,0.00f,62.58f,-3.54f,47.38f,0.23f,-28.79f,0.36f,17.26f,-0.40f,-4.12f,-0.00f,-0.00f,-0.00f,-53.57f,-18.64f,0.58f,-0.30f,-47.62f,-0.47f,-28.44f,0.51f,10.50f,-8.25f,-17.18f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_42()
		{
			float[] value = {-8.10f,21.41f,12.63f,-18.48f,54.7932f,37.9653f,-31.9957f,22.85f,-16.38f,-115.16f,4.72f,-7.94f,13.49f,0.13f,16.08f,-0.12f,-2.99f,-18.97f,0.62f,-31.09f,-59.72f,-52.52f,-0.17f,40.65f,0.19f,0.81f,-26.56f,-0.17f,-13.99f,-28.34f,20.77f,0.00f,-0.00f,0.00f,62.53f,-4.24f,46.19f,0.23f,-28.41f,0.36f,16.83f,-0.38f,-4.03f,-0.00f,-0.00f,-0.00f,-51.47f,-13.78f,-1.24f,-0.29f,-45.62f,-0.46f,-27.59f,0.44f,9.71f,-6.38f,-16.40f,-6.31f,20.84f,13.34f,-16.05f,54.0626f,38.0846f,-33.5978f,21.31f,-16.73f,-120.06f,8.00f,-7.49f,13.63f,0.14f,22.01f,-0.13f,-3.16f,-13.14f,0.98f,-24.61f,-58.04f,-49.71f,-0.17f,41.05f,0.19f,2.05f,-23.73f,-0.21f,-12.97f,-29.06f,20.18f,0.00f,-0.00f,0.00f,61.51f,-5.60f,46.38f,0.23f,-27.65f,0.36f,16.26f,-0.36f,-3.85f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_43()
		{
			float[] value = {-0.00f,-0.00f,-0.00f,-49.49f,-8.36f,-2.34f,-0.29f,-44.88f,-0.45f,-27.19f,0.36f,9.41f,-4.36f,-16.06f,-4.63f,19.43f,13.94f,-13.24f,53.3530f,38.5164f,-35.2325f,19.35f,-17.22f,-125.29f,10.93f,-8.77f,11.56f,0.15f,30.20f,-0.15f,-2.29f,-3.10f,1.20f,-15.84f,-55.74f,-40.70f,-0.17f,39.91f,0.19f,1.99f,-23.16f,-0.23f,-11.52f,-28.59f,19.73f,0.00f,-0.00f,0.00f,59.92f,-7.40f,46.30f,0.23f,-26.30f,0.35f,15.43f,-0.33f,-3.52f,-0.00f,-0.00f,-0.00f,-48.75f,-3.47f,-6.76f,-0.28f,-43.67f,-0.45f,-26.70f,0.35f,8.95f,-3.36f,-16.10f,-3.08f,18.51f,14.51f,-10.39f,52.9042f,38.8791f,-36.7213f,17.56f,-18.25f,-129.31f,13.22f,-12.61f,9.64f,0.16f,38.82f,-0.18f,1.71f,8.41f,-0.73f,-9.19f,-53.53f,-32.10f,-0.16f,38.46f,0.18f,1.48f,-23.95f,-0.21f,-11.46f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_44()
		{
			float[] value = {-27.96f,17.58f,0.00f,-0.00f,0.00f,58.69f,-9.44f,43.41f,0.23f,-25.79f,0.35f,14.94f,-0.28f,-3.41f,-0.00f,-0.00f,-0.00f,-48.19f,1.51f,-11.08f,-0.28f,-43.09f,-0.44f,-26.41f,0.32f,8.73f,-2.37f,-15.97f,-1.77f,17.72f,14.82f,-7.97f,52.4626f,39.0298f,-38.0505f,15.67f,-19.11f,-134.46f,14.16f,-16.05f,9.20f,0.19f,46.80f,-0.21f,2.96f,9.41f,-1.52f,-3.79f,-51.19f,-25.19f,-0.16f,37.43f,0.18f,0.85f,-25.05f,-0.19f,-11.70f,-27.13f,16.25f,0.00f,-0.00f,0.00f,58.41f,-12.90f,41.63f,0.22f,-25.00f,0.35f,14.16f,-0.18f,-3.25f,-0.00f,-0.00f,-0.00f,-46.89f,6.33f,-16.34f,-0.27f,-42.38f,-0.44f,-26.00f,0.24f,8.46f,-1.28f,-16.35f,-1.08f,17.53f,14.85f,-6.62f,52.1216f,39.0972f,-39.2721f,13.74f,-19.81f,-140.92f,14.67f,-18.99f,10.11f,0.21f,53.06f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_45()
		{
			float[] value = {-0.25f,0.81f,5.11f,-0.16f,0.88f,-48.73f,-19.73f,-0.16f,36.72f,0.17f,0.50f,-25.73f,-0.19f,-10.62f,-25.60f,15.26f,0.00f,-0.00f,0.00f,57.75f,-16.19f,40.81f,0.22f,-24.11f,0.34f,13.38f,-0.06f,-3.07f,-0.00f,-0.00f,-0.00f,-46.71f,9.56f,-21.01f,-0.27f,-41.46f,-0.43f,-25.52f,0.18f,8.11f,-1.02f,-17.00f,-0.80f,17.17f,14.77f,-5.76f,51.8434f,39.1204f,-40.4089f,10.85f,-20.95f,-148.67f,14.26f,-21.69f,12.15f,0.23f,56.42f,-0.27f,-1.23f,-0.23f,0.81f,3.99f,-46.43f,-14.90f,-0.16f,36.37f,0.17f,0.49f,-25.80f,-0.19f,-10.85f,-24.61f,14.20f,0.00f,-0.00f,0.00f,58.12f,-19.15f,38.88f,0.22f,-23.29f,0.34f,12.62f,0.08f,-2.92f,-0.00f,-0.00f,-0.00f,-45.82f,12.27f,-24.94f,-0.27f,-40.69f,-0.43f,-25.01f,0.08f,7.82f,-0.31f,-16.86f,-1.01f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_46()
		{
			float[] value = {17.33f,14.41f,-6.26f,51.6546f,39.1343f,-41.3575f,8.45f,-22.08f,-156.25f,13.98f,-25.43f,13.03f,0.23f,56.79f,-0.27f,-2.15f,-6.27f,1.00f,6.41f,-44.91f,-11.38f,-0.16f,36.23f,0.17f,0.62f,-25.61f,-0.19f,-10.72f,-24.32f,11.82f,0.00f,-0.00f,0.00f,58.75f,-20.99f,35.70f,0.22f,-22.87f,0.34f,12.23f,0.17f,-2.84f,-0.00f,-0.00f,-0.00f,-45.50f,14.06f,-26.89f,-0.26f,-39.42f,-0.42f,-24.24f,-0.03f,7.36f,0.21f,-15.82f,-1.92f,18.09f,13.42f,-8.40f,51.3506f,39.1164f,-42.2798f,4.73f,-22.86f,-165.23f,12.11f,-28.24f,12.49f,0.22f,54.49f,-0.26f,-2.61f,-12.50f,0.85f,7.15f,-43.15f,-8.47f,-0.16f,36.58f,0.17f,0.78f,-25.34f,-0.19f,-9.68f,-24.94f,8.63f,0.00f,-0.00f,0.00f,57.59f,-19.87f,31.34f,0.22f,-23.65f,0.34f,12.54f,0.21f,-3.03f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_47()
		{
			float[] value = {-0.00f,-0.00f,-47.30f,14.95f,-26.01f,-0.26f,-38.41f,-0.41f,-23.64f,-0.11f,7.01f,0.11f,-13.44f,-2.58f,18.42f,13.62f,-10.57f,51.0678f,39.0550f,-43.1676f,1.05f,-22.80f,-175.41f,10.71f,-30.61f,10.68f,0.21f,51.41f,-0.24f,-2.32f,-18.08f,0.55f,8.49f,-41.40f,-4.30f,-0.16f,37.25f,0.18f,0.89f,-25.12f,-0.19f,-7.04f,-25.39f,6.60f,0.00f,-0.00f,0.00f,55.44f,-19.50f,29.49f,0.22f,-24.11f,0.34f,12.54f,0.35f,-3.16f,-0.00f,-0.00f,-0.00f,-50.30f,15.32f,-24.14f,-0.26f,-37.83f,-0.41f,-23.10f,-0.21f,6.80f,-1.60f,-10.66f,-3.40f,19.44f,13.62f,-13.30f,50.7091f,39.0129f,-43.7992f,-2.73f,-22.85f,174.05f,9.32f,-34.07f,7.19f,0.19f,48.50f,-0.22f,-1.34f,-22.40f,0.33f,9.63f,-40.77f,0.64f,-0.16f,37.98f,0.18f,0.98f,-24.64f,-0.19f,-7.71f,-25.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_48()
		{
			float[] value = {5.29f,0.00f,-0.00f,0.00f,56.71f,-21.41f,26.31f,0.22f,-24.81f,0.35f,12.91f,0.34f,-3.32f,-0.00f,-0.00f,-0.00f,-49.54f,15.83f,-24.83f,-0.25f,-36.75f,-0.40f,-22.04f,-0.37f,6.44f,-1.34f,-9.24f,-5.23f,20.94f,12.87f,-17.53f,50.3041f,39.0696f,-44.4118f,-6.94f,-22.08f,162.51f,8.02f,-36.86f,2.36f,0.18f,45.22f,-0.21f,-0.71f,-24.43f,0.29f,10.50f,-40.36f,6.27f,-0.16f,38.78f,0.18f,0.97f,-23.49f,-0.21f,-6.59f,-24.49f,3.80f,0.00f,-0.00f,0.00f,56.06f,-21.43f,24.80f,0.23f,-26.29f,0.35f,13.56f,0.40f,-3.69f,-0.00f,-0.00f,-0.00f,-51.10f,14.12f,-24.59f,-0.25f,-34.89f,-0.39f,-20.53f,-0.44f,5.86f,-2.54f,-8.35f,-6.09f,22.09f,12.41f,-21.25f,49.8465f,39.2330f,-44.9951f,-11.28f,-20.23f,150.70f,7.24f,-38.77f,-1.96f,0.17f,41.01f,-0.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_49()
		{
			float[] value = {-1.00f,-23.25f,0.31f,10.71f,-40.55f,10.93f,-0.17f,40.01f,0.19f,0.66f,-21.46f,-0.22f,-5.35f,-23.40f,3.00f,0.00f,-0.00f,0.00f,55.36f,-21.36f,22.14f,0.23f,-27.63f,0.36f,14.19f,0.41f,-4.03f,-0.00f,-0.00f,-0.00f,-53.16f,12.89f,-22.78f,-0.24f,-33.87f,-0.39f,-19.49f,-0.43f,5.57f,-4.91f,-7.26f,-7.60f,23.73f,11.57f,-24.86f,49.3448f,39.3526f,-45.6078f,-15.90f,-17.53f,138.24f,6.86f,-40.13f,-4.11f,0.16f,36.43f,-0.17f,-0.98f,-22.29f,0.34f,9.90f,-41.79f,12.59f,-0.17f,41.54f,0.19f,0.05f,-19.58f,-0.19f,-6.16f,-23.25f,2.57f,0.00f,-0.00f,0.00f,55.91f,-21.95f,19.61f,0.23f,-28.65f,0.36f,14.70f,0.40f,-4.30f,-0.00f,-0.00f,-0.00f,-53.23f,12.15f,-20.89f,-0.24f,-32.91f,-0.38f,-18.39f,-0.34f,5.32f,-5.52f,-6.40f,-9.00f,25.59f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_50()
		{
			float[] value = {11.80f,-28.73f,48.8816f,39.5165f,-46.2072f,-19.54f,-14.42f,126.22f,7.26f,-41.02f,-4.97f,0.15f,33.61f,-0.16f,-0.89f,-20.98f,0.36f,9.06f,-42.79f,11.19f,-0.17f,42.08f,0.19f,-0.58f,-18.00f,-0.11f,-6.29f,-22.88f,2.04f,0.00f,-0.00f,0.00f,56.89f,-21.86f,17.39f,0.23f,-30.01f,0.37f,15.31f,0.43f,-4.68f,-0.00f,-0.00f,-0.00f,-53.40f,11.04f,-19.16f,-0.24f,-32.39f,-0.38f,-17.62f,-0.19f,5.22f,-5.91f,-5.95f,-10.24f,27.03f,11.63f,-31.80f,48.3814f,39.6968f,-46.8359f,-21.90f,-10.33f,114.74f,7.73f,-40.32f,-4.50f,0.15f,33.82f,-0.16f,-0.92f,-19.41f,0.39f,7.20f,-42.53f,7.93f,-0.17f,40.86f,0.19f,-0.88f,-17.60f,-0.08f,-6.08f,-22.69f,1.81f,0.00f,-0.00f,0.00f,56.93f,-20.73f,14.35f,0.24f,-32.06f,0.38f,16.12f,0.52f,-5.29f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_51()
		{
			float[] value = {-0.00f,-54.32f,10.81f,-16.31f,-0.24f,-32.71f,-0.38f,-17.43f,-0.07f,5.35f,-6.50f,-4.67f,-11.05f,28.22f,11.24f,-34.48f,47.8017f,39.7381f,-47.5066f,-23.52f,-6.26f,102.87f,8.76f,-39.37f,-2.00f,0.16f,35.92f,-0.17f,-1.00f,-19.75f,0.39f,4.68f,-42.27f,3.41f,-0.16f,38.07f,0.18f,-0.31f,-20.22f,-0.18f,-5.16f,-22.30f,2.34f,0.00f,-0.00f,0.00f,56.73f,-19.30f,11.49f,0.25f,-34.67f,0.39f,17.20f,0.59f,-6.10f,-0.00f,-0.00f,-0.00f,-55.51f,9.83f,-14.02f,-0.24f,-33.78f,-0.39f,-17.62f,0.06f,5.70f,-6.97f,-4.57f,-11.90f,29.05f,11.59f,-36.46f,47.2178f,39.6207f,-48.2111f,-24.94f,-1.29f,90.42f,9.29f,-38.17f,1.05f,0.16f,37.24f,-0.18f,-1.11f,-21.86f,0.35f,2.03f,-43.21f,1.19f,-0.16f,35.34f,0.17f,0.98f,-23.74f,-0.23f,-4.23f,-23.22f,3.73f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_52()
		{
			float[] value = {0.00f,-0.00f,0.00f,55.44f,-16.58f,7.50f,0.26f,-37.98f,0.41f,18.56f,0.63f,-7.19f,-0.00f,-0.00f,-0.00f,-57.17f,8.99f,-10.51f,-0.25f,-36.03f,-0.40f,-18.43f,0.15f,6.43f,-7.55f,-3.78f,-12.19f,29.31f,11.62f,-37.59f,46.7302f,39.6142f,-48.9733f,-25.03f,4.68f,78.36f,8.48f,-35.91f,3.84f,0.16f,36.40f,-0.17f,-1.13f,-23.14f,0.32f,-0.44f,-45.48f,1.10f,-0.15f,34.10f,0.17f,1.23f,-24.20f,-0.22f,-5.38f,-23.95f,5.22f,0.00f,-0.00f,0.00f,55.87f,-14.16f,1.92f,0.27f,-41.34f,0.43f,19.92f,0.62f,-8.36f,-0.00f,-0.00f,-0.00f,-57.34f,8.86f,-7.39f,-0.26f,-39.11f,-0.42f,-19.60f,0.21f,7.48f,-6.40f,-3.31f,-12.33f,28.89f,11.32f,-37.81f,46.2300f,39.7185f,-49.4925f,-24.05f,9.29f,67.60f,8.44f,-33.56f,6.73f,0.16f,34.53f,-0.17f,-1.10f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_53()
		{
			float[] value = {-24.02f,0.31f,-0.77f,-47.20f,2.84f,-0.15f,34.02f,0.16f,1.33f,-24.40f,-0.22f,-6.48f,-25.52f,5.61f,0.00f,-0.00f,0.00f,55.27f,-13.04f,-0.56f,0.28f,-42.92f,0.44f,20.35f,0.80f,-8.98f,-0.00f,-0.00f,-0.00f,-56.96f,9.97f,-3.40f,-0.28f,-42.47f,-0.44f,-20.80f,0.27f,8.69f,-4.66f,-1.03f,-11.68f,28.60f,10.32f,-37.69f,45.7788f,39.6966f,-50.0430f,-21.97f,13.58f,57.86f,7.37f,-31.25f,6.85f,0.15f,32.72f,-0.16f,-0.95f,-25.30f,0.29f,-3.07f,-48.11f,-0.29f,-0.16f,34.37f,0.17f,1.61f,-27.58f,-0.12f,-4.27f,-24.10f,4.58f,0.00f,-0.00f,0.00f,50.96f,-12.25f,0.00f,0.29f,-44.73f,0.45f,21.01f,0.80f,-9.66f,-0.00f,-0.00f,-0.00f,-61.01f,7.98f,0.36f,-0.29f,-45.72f,-0.46f,-21.98f,0.27f,9.90f,-7.34f,-3.11f,-10.99f,27.78f,12.16f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_54()
		{
			float[] value = {-35.14f,45.2831f,39.6018f,-50.4975f,-19.64f,16.54f,48.22f,7.63f,-29.40f,7.49f,0.15f,31.55f,-0.16f,-0.87f,-26.36f,0.27f,-4.16f,-48.56f,-2.99f,-0.16f,34.32f,0.17f,0.82f,-29.26f,-0.15f,-5.15f,-23.43f,4.18f,0.00f,-0.00f,0.00f,51.13f,-13.73f,-1.91f,0.29f,-45.82f,0.46f,21.52f,0.69f,-10.04f,-0.00f,-0.00f,-0.00f,-60.60f,8.43f,2.16f,-0.31f,-49.04f,-0.49f,-23.11f,0.26f,11.21f,-5.67f,-4.57f,-10.74f,26.23f,13.49f,-33.23f,44.7979f,39.6763f,-50.9185f,-16.56f,19.43f,38.39f,7.33f,-27.90f,8.16f,0.15f,30.36f,-0.15f,-0.94f,-26.26f,0.27f,-4.09f,-49.07f,-1.08f,-0.15f,34.20f,0.17f,0.54f,-27.49f,-0.19f,-5.29f,-23.26f,3.47f,0.00f,-0.00f,0.00f,50.55f,-14.36f,-3.80f,0.30f,-46.86f,0.47f,22.05f,0.53f,-10.41f,-0.00f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_55()
		{
			float[] value = {-61.72f,8.57f,4.72f,-0.33f,-52.34f,-0.51f,-24.25f,0.17f,12.54f,-5.23f,-5.27f,-9.48f,24.51f,14.30f,-29.86f,44.3631f,39.6863f,-51.2617f,-12.91f,21.60f,28.83f,6.86f,-26.08f,9.56f,0.15f,29.27f,-0.15f,-0.97f,-26.75f,0.26f,-5.45f,-49.47f,-2.04f,-0.15f,34.11f,0.17f,0.86f,-25.92f,-0.20f,-6.00f,-22.98f,2.47f,0.00f,-0.00f,0.00f,51.10f,-15.27f,-6.63f,0.30f,-47.81f,0.48f,22.66f,0.30f,-10.72f,-0.00f,-0.00f,-0.00f,-62.09f,9.09f,6.41f,-0.36f,-55.56f,-0.55f,-25.32f,0.05f,13.87f,-4.37f,-6.06f,-8.09f,22.31f,14.95f,-25.97f,43.8857f,39.5351f,-51.6050f,-8.30f,23.64f,18.21f,5.71f,-24.37f,10.98f,0.15f,28.06f,-0.15f,-0.95f,-27.30f,0.25f,-6.99f,-50.96f,-3.50f,-0.16f,34.37f,0.17f,0.81f,-26.06f,-0.20f,-7.04f,-24.05f,2.32f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_56()
		{
			float[] value = {-0.00f,0.00f,51.43f,-15.51f,-9.49f,0.31f,-49.20f,0.49f,23.47f,0.05f,-11.21f,-0.00f,-0.00f,-0.00f,-62.34f,10.34f,7.52f,-0.39f,-58.71f,-0.59f,-26.44f,-0.17f,15.19f,-3.40f,-5.72f,-6.18f,20.24f,15.03f,-21.61f,43.4761f,39.3586f,-51.8376f,-2.13f,25.04f,7.26f,3.07f,-22.31f,11.32f,0.14f,26.08f,-0.14f,-0.98f,-27.18f,0.26f,-8.79f,-53.00f,-2.47f,-0.16f,35.17f,0.17f,0.50f,-26.92f,-0.20f,-9.04f,-24.92f,1.76f,0.00f,-0.00f,0.00f,51.31f,-16.03f,-10.88f,0.32f,-50.72f,0.50f,24.31f,-0.16f,-11.77f,-0.00f,-0.00f,-0.00f,-62.54f,10.70f,7.54f,-0.42f,-60.98f,-0.62f,-27.41f,-0.43f,16.13f,-2.65f,-6.13f,-4.40f,18.22f,15.65f,-17.26f,42.9655f,39.2546f,-51.8869f,2.46f,25.10f,-2.24f,1.99f,-20.06f,12.19f,0.14f,24.07f,-0.14f,-1.02f,-27.45f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_57()
		{
			float[] value = {0.25f,-8.59f,-54.67f,0.08f,-0.16f,35.65f,0.17f,-0.26f,-28.56f,-0.25f,-9.77f,-24.67f,0.92f,0.00f,-0.00f,0.00f,51.35f,-17.80f,-11.45f,0.33f,-52.23f,0.51f,25.12f,-0.34f,-12.34f,-0.00f,-0.00f,-0.00f,-62.51f,11.64f,6.57f,-0.45f,-63.27f,-0.65f,-28.52f,-0.71f,17.07f,-2.14f,-7.64f,-2.95f,16.42f,16.71f,-13.31f,42.4010f,39.1349f,-51.7870f,6.17f,24.54f,-10.86f,1.52f,-17.73f,12.85f,0.14f,21.99f,-0.13f,-1.07f,-26.95f,0.26f,-9.04f,-56.16f,-2.63f,-0.16f,36.35f,0.17f,-1.72f,-31.51f,-0.46f,-9.80f,-24.88f,0.63f,0.00f,-0.00f,0.00f,51.16f,-20.07f,-13.05f,0.34f,-53.46f,0.53f,25.95f,-0.52f,-12.79f,-0.00f,-0.00f,-0.00f,-62.39f,13.32f,5.38f,-0.47f,-64.47f,-0.68f,-29.45f,-0.91f,17.54f,-2.25f,-8.51f,-1.68f,15.35f,17.33f,-10.26f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_58()
		{
			float[] value = {41.7905f,38.9801f,-51.5714f,9.91f,23.43f,-19.48f,0.52f,-14.82f,14.01f,0.14f,19.57f,-0.12f,-1.10f,-26.88f,0.27f,-11.25f,-57.54f,-9.16f,-0.16f,37.47f,0.18f,-2.09f,-32.06f,-0.53f,-9.94f,-25.47f,0.62f,0.00f,-0.00f,0.00f,50.68f,-21.86f,-14.82f,0.35f,-55.01f,0.54f,27.00f,-0.69f,-13.38f,-0.00f,-0.00f,-0.00f,-62.01f,15.13f,4.36f,-0.48f,-64.82f,-0.68f,-30.23f,-0.99f,17.65f,-2.17f,-9.32f,-0.42f,14.22f,18.02f,-7.27f,41.0324f,39.0249f,-51.2179f,12.82f,22.38f,-27.11f,0.04f,-12.68f,12.97f,0.13f,17.66f,-0.12f,-1.09f,-25.30f,0.30f,-11.75f,-58.21f,-11.35f,-0.16f,37.68f,0.18f,-2.40f,-32.43f,-0.59f,-9.41f,-25.98f,0.18f,0.00f,-0.00f,0.00f,49.31f,-23.49f,-16.22f,0.37f,-56.66f,0.56f,28.04f,-0.79f,-14.04f,-0.00f,-0.00f,-0.00f,-61.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_59()
		{
			float[] value = {17.17f,2.66f,-0.49f,-65.38f,-0.69f,-30.97f,-0.98f,17.88f,-1.88f,-10.72f,0.84f,12.83f,19.09f,-4.08f,40.0884f,38.7883f,-50.7749f,15.19f,20.63f,-34.02f,-0.68f,-10.50f,11.48f,0.13f,17.63f,-0.12f,-1.11f,-25.27f,0.30f,-10.61f,-57.67f,-8.14f,-0.16f,36.49f,0.17f,-3.10f,-34.01f,-0.80f,-9.23f,-25.28f,-1.61f,0.00f,-0.00f,0.00f,49.10f,-24.47f,-16.71f,0.39f,-58.66f,0.59f,29.13f,-0.83f,-14.88f,-0.00f,-0.00f,-0.00f,-59.84f,17.40f,-0.35f,-0.48f,-64.92f,-0.69f,-31.39f,-0.89f,17.68f,0.21f,-13.01f,2.31f,9.50f,20.61f,0.34f,38.9683f,38.5227f,-50.1689f,16.39f,18.54f,-40.33f,-1.23f,-7.63f,10.36f,0.13f,18.31f,-0.12f,-1.17f,-24.85f,0.31f,-9.11f,-55.61f,-4.95f,-0.16f,35.33f,0.17f,-2.97f,-33.84f,-0.78f,-8.46f,-25.52f,-4.17f,0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_60()
		{
			float[] value = {0.00f,48.66f,-23.17f,-17.82f,0.42f,-61.01f,0.62f,30.23f,-0.83f,-15.91f,-0.00f,-0.00f,-0.00f,-59.22f,17.58f,-0.60f,-0.51f,-66.37f,-0.72f,-32.39f,-0.73f,18.37f,3.16f,-12.94f,4.28f,5.10f,21.94f,5.66f,37.7792f,38.3447f,-49.4830f,17.30f,16.50f,-46.71f,-2.32f,-4.56f,9.36f,0.14f,18.45f,-0.12f,-1.35f,-23.27f,0.35f,-11.90f,-53.97f,-18.49f,-0.16f,35.67f,0.17f,-0.41f,-28.54f,-0.26f,-6.62f,-26.44f,-4.42f,0.00f,-0.00f,0.00f,46.58f,-23.29f,-20.05f,0.44f,-62.36f,0.64f,30.95f,-0.79f,-16.52f,-0.00f,-0.00f,-0.00f,-58.66f,18.10f,-4.20f,-0.50f,-66.17f,-0.71f,-32.71f,-0.57f,18.31f,4.01f,-11.25f,5.75f,2.20f,21.82f,9.59f,36.4364f,38.3161f,-48.8838f,17.64f,14.94f,-53.16f,-2.89f,-1.81f,10.12f,0.14f,18.64f,-0.12f,-1.77f,-20.58f,0.44f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_61()
		{
			float[] value = {-10.31f,-52.83f,-23.45f,-0.16f,36.64f,0.17f,1.14f,-23.52f,-0.23f,-3.98f,-26.71f,-3.84f,0.00f,-0.00f,0.00f,44.19f,-24.15f,-21.34f,0.46f,-63.65f,0.66f,31.56f,-0.73f,-17.12f,-0.00f,-0.00f,-0.00f,-58.09f,17.95f,-8.73f,-0.51f,-66.41f,-0.72f,-33.09f,-0.40f,18.47f,4.70f,-10.00f,7.05f,-0.25f,21.50f,13.17f,35.0660f,38.4140f,-48.2974f,17.55f,13.19f,-59.20f,-3.33f,-0.66f,11.07f,0.14f,21.79f,-0.13f,-2.20f,-17.22f,0.61f,-3.77f,-51.57f,-15.41f,-0.16f,37.17f,0.18f,1.08f,-22.39f,-0.24f,-1.00f,-27.72f,-3.91f,0.00f,-0.00f,0.00f,40.17f,-23.54f,-21.98f,0.47f,-64.34f,0.67f,31.97f,-0.66f,-17.44f,-0.00f,-0.00f,-0.00f,-57.78f,17.99f,-12.12f,-0.54f,-67.98f,-0.75f,-33.74f,-0.24f,19.25f,4.46f,-6.24f,8.27f,-2.32f,19.79f,16.76f,33.6678f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_62()
		{
			float[] value = {38.5110f,-47.8135f,16.22f,11.90f,-64.24f,-2.19f,-1.00f,12.18f,0.15f,28.34f,-0.15f,-2.56f,-11.61f,0.92f,4.16f,-48.17f,-3.02f,-0.16f,36.47f,0.17f,0.78f,-23.81f,-0.21f,1.42f,-27.32f,-4.71f,0.00f,-0.00f,0.00f,36.68f,-23.42f,-22.67f,0.47f,-64.16f,0.67f,32.22f,-0.54f,-17.39f,-0.00f,-0.00f,-0.00f,-55.51f,17.74f,-17.01f,-0.57f,-68.97f,-0.78f,-34.21f,-0.07f,19.76f,4.32f,-3.32f,9.12f,-3.73f,18.74f,19.45f,32.3765f,38.6917f,-47.2772f,15.47f,10.36f,-67.60f,-1.37f,-2.97f,13.10f,0.16f,35.66f,-0.17f,-2.61f,-3.83f,1.29f,7.45f,-44.88f,4.74f,-0.16f,35.42f,0.17f,0.97f,-25.09f,-0.19f,0.41f,-25.72f,-7.06f,0.00f,-0.00f,0.00f,35.20f,-25.40f,-23.79f,0.44f,-62.56f,0.64f,32.15f,-0.34f,-16.70f,-0.00f,-0.00f,-0.00f,-51.26f,17.23f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_63()
		{
			float[] value = {-23.21f,-0.57f,-69.00f,-0.78f,-34.46f,0.14f,19.84f,6.15f,-2.68f,9.52f,-5.04f,18.66f,21.25f,31.1465f,38.9194f,-46.7870f,15.30f,8.88f,-70.62f,-0.54f,-5.48f,14.95f,0.17f,41.40f,-0.19f,-2.48f,4.56f,1.58f,9.03f,-42.29f,9.10f,-0.16f,35.00f,0.17f,1.07f,-24.07f,-0.21f,-0.49f,-25.23f,-9.52f,0.00f,-0.00f,0.00f,33.13f,-27.03f,-24.54f,0.41f,-60.06f,0.60f,31.75f,-0.14f,-15.62f,-0.00f,-0.00f,-0.00f,-48.99f,17.66f,-27.46f,-0.56f,-68.63f,-0.77f,-34.56f,0.32f,19.72f,6.51f,-1.41f,10.07f,-5.37f,18.09f,22.75f,30.0458f,39.0551f,-46.3110f,15.37f,7.37f,-73.86f,0.14f,-7.72f,17.62f,0.18f,45.47f,-0.21f,-2.59f,7.29f,1.75f,9.29f,-40.56f,10.15f,-0.16f,35.52f,0.17f,0.76f,-21.91f,-0.24f,-0.82f,-25.05f,-10.83f,0.00f,-0.00f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_64()
		{
			float[] value = {30.75f,-28.86f,-25.27f,0.38f,-58.04f,0.58f,31.32f,-0.02f,-14.75f,-0.00f,-0.00f,-0.00f,-48.44f,19.52f,-30.35f,-0.53f,-67.33f,-0.74f,-34.40f,0.46f,19.14f,5.76f,-0.80f,10.62f,-5.95f,17.64f,24.12f,29.0578f,39.1133f,-45.7945f,15.06f,5.60f,-77.24f,0.53f,-9.42f,20.41f,0.19f,48.86f,-0.23f,-3.86f,2.72f,2.18f,9.12f,-38.87f,11.31f,-0.16f,36.64f,0.17f,0.56f,-20.95f,-0.24f,-2.95f,-23.57f,-10.79f,0.00f,-0.00f,0.00f,30.77f,-31.53f,-27.15f,0.37f,-56.93f,0.56f,31.07f,0.05f,-14.27f,-0.00f,-0.00f,-0.00f,-46.09f,23.06f,-33.74f,-0.49f,-65.66f,-0.70f,-34.07f,0.53f,18.37f,6.60f,-0.91f,10.81f,-6.45f,16.82f,24.76f,28.2042f,39.0912f,-45.2913f,14.88f,4.12f,-79.59f,1.67f,-12.57f,22.67f,0.21f,52.89f,-0.25f,-4.78f,-3.51f,2.12f,9.62f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_65()
		{
			float[] value = {-37.02f,15.73f,-0.16f,37.94f,0.18f,0.91f,-22.45f,-0.22f,-5.06f,-21.71f,-10.66f,0.00f,-0.00f,0.00f,31.18f,-34.34f,-29.01f,0.37f,-56.39f,0.56f,30.92f,0.06f,-14.04f,-0.00f,-0.00f,-0.00f,-43.45f,25.94f,-38.20f,-0.45f,-63.45f,-0.66f,-33.55f,0.57f,17.36f,6.93f,-1.42f,11.10f,-6.23f,15.90f,25.00f,27.4721f,39.1076f,-44.8127f,14.97f,3.88f,-79.88f,4.55f,-17.56f,23.80f,0.24f,57.45f,-0.28f,-4.85f,-7.17f,1.82f,9.90f,-35.91f,17.81f,-0.17f,39.07f,0.18f,1.10f,-23.55f,-0.20f,-5.85f,-20.54f,-11.95f,0.00f,-0.00f,0.00f,30.87f,-36.25f,-30.63f,0.37f,-56.71f,0.56f,30.94f,0.01f,-14.17f,-0.00f,-0.00f,-0.00f,-41.34f,28.83f,-41.34f,-0.45f,-62.86f,-0.65f,-33.40f,0.57f,17.08f,6.44f,-1.80f,11.30f,-6.04f,14.95f,25.06f,26.8197f,39.0918f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_66()
		{
			float[] value = {-44.3227f,14.85f,4.32f,-78.93f,8.21f,-22.96f,24.40f,0.27f,61.35f,-0.31f,-4.05f,-11.53f,1.24f,9.63f,-35.05f,17.34f,-0.17f,39.75f,0.19f,1.21f,-24.63f,-0.17f,-6.31f,-18.69f,-13.60f,0.00f,-0.00f,0.00f,32.08f,-38.11f,-32.45f,0.38f,-57.96f,0.58f,31.25f,-0.05f,-14.70f,-0.00f,-0.00f,-0.00f,-38.48f,31.54f,-44.16f,-0.45f,-62.91f,-0.65f,-33.40f,0.55f,17.10f,6.38f,-2.56f,11.26f,-6.28f,13.59f,24.80f,26.2458f,39.0194f,-43.8361f,14.81f,5.19f,-77.18f,12.19f,-29.23f,24.95f,0.30f,64.33f,-0.35f,-3.59f,-14.32f,0.94f,9.01f,-34.18f,15.83f,-0.17f,40.13f,0.19f,1.33f,-26.30f,-0.13f,-6.08f,-16.84f,-15.64f,0.00f,-0.00f,0.00f,34.28f,-39.43f,-33.21f,0.41f,-60.28f,0.61f,31.77f,-0.17f,-15.71f,-0.00f,-0.00f,-0.00f,-36.62f,31.92f,-47.45f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_67()
		{
			float[] value = {-0.41f,-60.51f,-0.61f,-32.59f,0.41f,15.96f,6.19f,-3.65f,11.10f,-6.77f,12.66f,24.39f,25.6555f,38.9993f,-43.4016f,14.69f,6.35f,-75.39f,16.45f,-35.12f,26.28f,0.31f,65.79f,-0.36f,-3.51f,-14.81f,0.89f,8.92f,-33.38f,13.58f,-0.17f,40.74f,0.19f,1.23f,-26.79f,-0.12f,-5.72f,-15.74f,-17.05f,0.00f,-0.00f,0.00f,36.74f,-39.99f,-33.67f,0.45f,-62.85f,0.65f,32.34f,-0.27f,-16.85f,-0.00f,-0.00f,-0.00f,-35.03f,33.89f,-47.64f,-0.39f,-58.68f,-0.59f,-31.82f,0.20f,15.08f,6.09f,-4.09f,10.67f,-6.64f,11.77f,23.32f,25.1007f,38.8559f,-42.9273f,14.62f,7.25f,-73.33f,19.76f,-40.72f,27.13f,0.30f,64.86f,-0.35f,-2.96f,-16.31f,0.71f,8.60f,-32.44f,11.66f,-0.17f,41.44f,0.19f,1.07f,-28.51f,-0.08f,-5.08f,-15.02f,-18.25f,0.00f,-0.00f,0.00f,39.16f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_68()
		{
			float[] value = {-40.27f,-33.03f,0.49f,-65.49f,0.70f,32.90f,-0.37f,-18.04f,-0.00f,-0.00f,-0.00f,-34.26f,35.53f,-47.98f,-0.37f,-56.55f,-0.56f,-30.93f,0.04f,14.11f,5.54f,-4.46f,10.19f,-6.35f,11.27f,22.17f,24.5440f,38.6200f,-42.4812f,14.76f,8.49f,-70.93f,22.83f,-46.45f,27.97f,0.27f,61.44f,-0.31f,-2.23f,-18.34f,0.52f,8.72f,-31.82f,10.47f,-0.17f,42.02f,0.19f,0.71f,-31.03f,-0.08f,-4.20f,-14.44f,-19.56f,0.00f,-0.00f,0.00f,42.29f,-40.42f,-30.75f,0.54f,-67.78f,0.75f,33.37f,-0.44f,-19.10f,-0.00f,-0.00f,-0.00f,-33.53f,35.66f,-49.98f,-0.35f,-54.33f,-0.53f,-29.90f,-0.14f,13.11f,5.27f,-5.36f,9.73f,-6.03f,11.09f,20.92f,23.9156f,38.3802f,-42.0024f,15.36f,9.45f,-68.99f,25.67f,-51.42f,30.40f,0.23f,55.90f,-0.27f,-1.84f,-19.69f,0.44f,8.54f,-31.65f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_69()
		{
			float[] value = {9.22f,-0.18f,42.95f,0.20f,0.28f,-32.84f,-0.12f,-3.36f,-14.46f,-20.09f,0.00f,-0.00f,0.00f,44.86f,-40.48f,-27.61f,0.56f,-68.83f,0.78f,33.64f,-0.43f,-19.60f,-0.00f,-0.00f,-0.00f,-32.89f,35.63f,-51.71f,-0.34f,-53.89f,-0.53f,-29.45f,-0.29f,12.89f,4.83f,-6.10f,9.27f,-5.42f,10.68f,19.62f,23.2286f,38.1738f,-41.4466f,16.04f,10.18f,-67.67f,28.32f,-55.25f,33.25f,0.20f,49.23f,-0.23f,-1.75f,-20.01f,0.42f,8.20f,-31.53f,7.34f,-0.18f,44.11f,0.20f,-0.21f,-34.46f,-0.20f,-2.85f,-15.31f,-20.20f,0.00f,-0.00f,0.00f,46.78f,-39.26f,-24.16f,0.57f,-69.11f,0.78f,33.77f,-0.40f,-19.74f,-0.00f,-0.00f,-0.00f,-33.37f,35.72f,-52.09f,-0.34f,-53.79f,-0.53f,-29.14f,-0.41f,12.83f,4.40f,-6.09f,8.73f,-4.97f,10.61f,18.43f,22.4888f,37.9068f,-40.8409f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_70()
		{
			float[] value = {16.64f,11.20f,-66.55f,31.01f,-58.53f,35.78f,0.17f,42.62f,-0.20f,-1.64f,-20.97f,0.40f,8.24f,-31.21f,6.36f,-0.18f,44.99f,0.21f,-0.78f,-36.27f,-0.33f,-2.11f,-16.06f,-19.99f,0.00f,-0.00f,0.00f,48.94f,-37.72f,-20.10f,0.56f,-68.87f,0.78f,33.79f,-0.35f,-19.64f,-0.00f,-0.00f,-0.00f,-34.24f,35.66f,-50.96f,-0.35f,-54.24f,-0.53f,-28.98f,-0.52f,13.00f,3.98f,-6.66f,8.23f,-4.41f,11.18f,17.21f,21.6038f,37.5988f,-40.2299f,16.41f,12.74f,-65.56f,34.23f,-60.99f,36.89f,0.16f,36.89f,-0.17f,-1.57f,-22.12f,0.36f,9.36f,-29.84f,6.40f,-0.18f,45.11f,0.21f,-1.45f,-37.93f,-0.53f,-1.22f,-15.63f,-18.86f,0.00f,-0.00f,0.00f,51.76f,-36.81f,-16.08f,0.54f,-67.70f,0.75f,33.55f,-0.32f,-19.10f,-0.00f,-0.00f,-0.00f,-32.97f,35.83f,-49.75f,-0.37f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_71()
		{
			float[] value = {-56.65f,-0.56f,-29.43f,-0.65f,14.01f,4.74f,-8.03f,7.68f,-3.92f,11.67f,15.64f,20.7239f,37.2989f,-39.4687f,16.68f,13.58f,-65.21f,35.34f,-63.09f,34.25f,0.15f,31.89f,-0.16f,-1.30f,-24.39f,0.30f,9.53f,-28.26f,6.47f,-0.18f,44.66f,0.21f,-2.15f,-39.63f,-0.78f,-0.58f,-15.57f,-17.21f,0.00f,-0.00f,0.00f,53.97f,-35.78f,-11.58f,0.49f,-65.39f,0.69f,33.15f,-0.20f,-18.04f,-0.00f,-0.00f,-0.00f,-32.64f,35.20f,-49.24f,-0.39f,-58.84f,-0.59f,-29.77f,-0.76f,14.95f,5.06f,-9.17f,7.05f,-3.70f,11.73f,14.11f,19.8961f,37.0641f,-38.4948f,17.28f,14.33f,-65.27f,37.35f,-64.61f,33.05f,0.14f,27.79f,-0.15f,-0.62f,-26.97f,0.28f,9.18f,-26.44f,6.95f,-0.18f,43.40f,0.20f,-2.78f,-40.95f,-1.04f,0.41f,-15.89f,-15.67f,0.00f,-0.00f,0.00f,55.87f,-34.01f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_72()
		{
			float[] value = {-7.00f,0.45f,-62.94f,0.65f,32.69f,-0.07f,-16.94f,-0.00f,-0.00f,-0.00f,-33.66f,33.99f,-47.49f,-0.41f,-60.70f,-0.61f,-30.03f,-0.84f,15.77f,4.76f,-10.32f,6.67f,-3.13f,11.73f,13.01f,18.8963f,36.8621f,-37.4696f,17.28f,15.20f,-64.94f,41.22f,-64.51f,38.16f,0.14f,24.95f,-0.14f,-0.28f,-28.34f,0.30f,8.70f,-23.76f,6.39f,-0.17f,41.60f,0.19f,-3.03f,-41.87f,-1.18f,1.45f,-16.80f,-14.23f,0.00f,-0.00f,0.00f,56.47f,-31.87f,-3.48f,0.41f,-59.91f,0.60f,32.00f,0.06f,-15.60f,-0.00f,-0.00f,-0.00f,-35.53f,33.34f,-45.61f,-0.44f,-62.36f,-0.64f,-30.17f,-0.91f,16.52f,3.93f,-10.46f,6.16f,-2.60f,11.69f,11.95f,17.8844f,36.6511f,-36.2742f,18.00f,15.46f,-64.63f,41.39f,-64.78f,40.95f,0.14f,23.63f,-0.13f,0.29f,-29.87f,0.36f,7.20f,-21.53f,5.72f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_73()
		{
			float[] value = {-0.17f,40.07f,0.19f,-3.17f,-42.11f,-1.24f,1.56f,-18.59f,-12.76f,0.00f,-0.00f,0.00f,56.41f,-29.60f,-0.47f,0.37f,-56.74f,0.56f,31.19f,0.18f,-14.22f,-0.00f,-0.00f,-0.00f,-37.81f,33.19f,-43.33f,-0.46f,-63.89f,-0.67f,-30.26f,-0.97f,17.21f,3.24f,-10.22f,5.57f,-2.34f,11.88f,10.88f,16.7980f,36.4453f,-34.9399f,18.43f,16.11f,-64.03f,39.66f,-64.62f,41.59f,0.14f,22.80f,-0.13f,0.29f,-30.04f,0.36f,6.05f,-18.96f,4.71f,-0.16f,38.51f,0.18f,-3.17f,-41.75f,-1.23f,1.80f,-19.91f,-11.10f,0.00f,-0.00f,0.00f,57.04f,-28.05f,2.51f,0.34f,-53.48f,0.53f,30.26f,0.28f,-12.85f,-0.00f,-0.00f,-0.00f,-39.38f,32.55f,-41.86f,-0.47f,-64.32f,-0.67f,-30.11f,-0.98f,17.42f,3.02f,-10.79f,4.97f,-2.20f,12.41f,9.67f,15.6205f,36.2541f,-33.3761f,19.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_74()
		{
			float[] value = {16.15f,-63.33f,35.92f,-63.80f,40.84f,0.14f,22.30f,-0.13f,0.23f,-30.32f,0.35f,4.01f,-15.96f,3.69f,-0.16f,36.40f,0.17f,-2.75f,-40.60f,-1.05f,2.11f,-20.72f,-9.69f,0.00f,-0.00f,0.00f,57.28f,-27.03f,6.48f,0.31f,-49.78f,0.49f,29.02f,0.33f,-11.33f,-0.00f,-0.00f,-0.00f,-41.61f,30.63f,-40.35f,-0.47f,-64.16f,-0.67f,-29.80f,-0.96f,17.37f,2.32f,-11.88f,4.48f,-2.32f,12.75f,8.78f,14.3325f,36.1471f,-31.6177f,19.59f,16.06f,-63.26f,34.21f,-63.08f,42.15f,0.14f,23.60f,-0.13f,-0.29f,-28.92f,0.30f,2.05f,-11.80f,3.31f,-0.15f,32.66f,0.16f,-2.19f,-38.78f,-0.82f,2.95f,-22.06f,-8.04f,0.00f,-0.00f,0.00f,57.10f,-24.58f,9.30f,0.30f,-47.16f,0.47f,28.07f,0.35f,-10.29f,-0.00f,-0.00f,-0.00f,-44.57f,28.43f,-38.43f,-0.45f,-63.43f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_75()
		{
			float[] value = {-0.66f,-29.54f,-0.93f,17.04f,1.21f,-12.72f,4.10f,-2.08f,13.30f,8.09f,13.0421f,36.3681f,-29.7537f,21.00f,15.51f,-62.97f,31.84f,-63.87f,43.62f,0.14f,26.40f,-0.14f,-0.94f,-21.82f,0.36f,-0.52f,-7.96f,3.63f,-0.15f,28.10f,0.15f,-1.11f,-34.32f,-0.46f,1.66f,-24.74f,-6.57f,0.00f,-0.00f,0.00f,57.70f,-22.15f,10.59f,0.29f,-44.75f,0.45f,27.11f,0.34f,-9.36f,-0.00f,-0.00f,-0.00f,-45.76f,27.21f,-37.44f,-0.44f,-62.47f,-0.64f,-29.29f,-0.90f,16.61f,0.83f,-13.16f,3.32f,-1.64f,14.37f,6.48f,11.8229f,36.6133f,-27.8353f,22.62f,14.54f,-61.90f,26.84f,-64.59f,42.90f,0.15f,29.02f,-0.15f,-0.88f,-14.26f,0.48f,-3.49f,-4.77f,3.52f,-0.14f,24.74f,0.14f,0.60f,-27.74f,-0.24f,-0.37f,-26.12f,-5.63f,0.00f,-0.00f,0.00f,58.14f,-20.87f,12.74f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_76()
		{
			float[] value = {0.28f,-42.96f,0.44f,26.33f,0.30f,-8.68f,-0.00f,-0.00f,-0.00f,-45.35f,24.99f,-38.51f,-0.42f,-61.07f,-0.62f,-28.93f,-0.86f,15.98f,0.41f,-15.24f,2.44f,-1.22f,15.78f,4.63f,10.5775f,37.0693f,-25.9389f,23.45f,13.56f,-61.07f,22.99f,-63.17f,43.64f,0.15f,31.14f,-0.16f,-0.11f,-8.48f,0.34f,-5.60f,-2.47f,2.62f,-0.14f,23.38f,0.13f,2.75f,-20.06f,-0.51f,-1.58f,-27.70f,-4.28f,0.00f,-0.00f,0.00f,57.42f,-18.97f,14.51f,0.27f,-42.04f,0.43f,25.92f,0.28f,-8.34f,-0.00f,-0.00f,-0.00f,-45.15f,23.35f,-38.41f,-0.40f,-59.60f,-0.60f,-28.59f,-0.83f,15.33f,-0.55f,-15.72f,1.66f,-0.55f,16.81f,3.07f,9.3574f,37.6923f,-24.1436f,23.43f,12.51f,-60.97f,18.76f,-60.59f,41.23f,0.15f,32.58f,-0.16f,0.26f,-7.48f,0.22f,-6.71f,-0.89f,1.13f,-0.14f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_77()
		{
			float[] value = {23.52f,0.13f,5.43f,-11.54f,-1.59f,-2.76f,-28.97f,-2.10f,0.00f,-0.00f,0.00f,57.34f,-17.41f,15.85f,0.27f,-41.25f,0.43f,25.53f,0.24f,-8.05f,-0.00f,-0.00f,-0.00f,-44.15f,22.15f,-38.43f,-0.38f,-57.68f,-0.57f,-28.12f,-0.79f,14.49f,-1.17f,-15.31f,0.79f,0.57f,17.82f,1.13f,8.2295f,38.2984f,-22.5075f,23.19f,12.13f,-60.82f,13.95f,-58.08f,36.26f,0.15f,32.98f,-0.16f,0.04f,-9.05f,0.29f,-6.55f,-0.72f,-1.94f,-0.14f,24.29f,0.14f,9.61f,-2.21f,-4.24f,-2.88f,-29.38f,-0.66f,0.00f,-0.00f,0.00f,57.32f,-15.86f,18.10f,0.27f,-40.63f,0.43f,25.10f,0.14f,-7.81f,-0.00f,-0.00f,-0.00f,-43.41f,19.75f,-38.28f,-0.36f,-55.73f,-0.55f,-27.83f,-0.77f,13.64f,-1.94f,-15.56f,-0.02f,1.25f,18.60f,-0.55f,7.1534f,38.8495f,-21.0311f,22.69f,12.09f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_78()
		{
			float[] value = {-60.83f,10.38f,-55.21f,32.00f,0.15f,32.45f,-0.16f,-0.22f,-10.41f,0.36f,-5.69f,-1.84f,-4.15f,-0.14f,25.82f,0.14f,13.07f,3.68f,-7.05f,-2.78f,-29.75f,0.95f,0.00f,-0.00f,0.00f,57.70f,-14.46f,19.37f,0.27f,-40.80f,0.43f,25.13f,0.11f,-7.87f,-0.00f,-0.00f,-0.00f,-42.50f,17.94f,-38.02f,-0.34f,-53.73f,-0.53f,-27.49f,-0.73f,12.78f,-2.53f,-15.11f,-1.07f,2.46f,19.08f,-2.89f,6.1534f,39.2915f,-19.6330f,22.06f,11.42f,-61.07f,7.12f,-51.74f,28.58f,0.15f,31.73f,-0.16f,-0.50f,-11.99f,0.42f,-5.38f,-3.37f,-5.82f,-0.15f,28.14f,0.15f,13.06f,4.65f,-7.25f,-2.16f,-29.55f,2.81f,0.00f,-0.00f,0.00f,57.59f,-12.89f,19.93f,0.27f,-41.54f,0.43f,25.43f,0.11f,-8.13f,-0.00f,-0.00f,-0.00f,-42.67f,15.95f,-37.76f,-0.33f,-52.38f,-0.52f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_79()
		{
			float[] value = {-27.30f,-0.69f,12.22f,-3.61f,-14.13f,-2.01f,3.49f,19.43f,-5.04f,5.2248f,39.5887f,-18.3249f,21.16f,10.57f,-61.14f,4.85f,-48.22f,27.05f,0.15f,31.39f,-0.16f,-0.58f,-13.26f,0.43f,-4.96f,-4.60f,-8.67f,-0.15f,30.75f,0.15f,12.29f,3.21f,-6.50f,-1.53f,-29.38f,5.49f,0.00f,-0.00f,0.00f,57.49f,-12.65f,20.16f,0.27f,-41.64f,0.43f,25.35f,0.04f,-8.15f,-0.00f,-0.00f,-0.00f,-43.06f,15.11f,-37.91f,-0.33f,-51.69f,-0.51f,-27.40f,-0.65f,11.93f,-5.60f,-12.32f,-3.15f,5.64f,19.34f,-8.15f,4.3925f,39.7717f,-17.1300f,20.26f,9.70f,-60.92f,2.66f,-45.02f,25.53f,0.15f,31.29f,-0.16f,-0.63f,-14.75f,0.42f,-4.63f,-5.88f,-11.11f,-0.15f,33.56f,0.16f,11.48f,1.50f,-5.72f,-1.72f,-29.72f,7.45f,0.00f,-0.00f,0.00f,58.15f,-12.34f,20.20f,0.27f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_80()
		{
			float[] value = {-41.84f,0.43f,25.41f,0.02f,-8.22f,-0.00f,-0.00f,-0.00f,-42.85f,15.00f,-37.15f,-0.33f,-52.42f,-0.52f,-27.92f,-0.61f,12.23f,-6.34f,-9.69f,-4.11f,7.28f,19.02f,-11.09f,3.6606f,39.8947f,-16.0095f,19.38f,8.89f,-59.81f,0.05f,-42.28f,23.12f,0.15f,31.46f,-0.16f,-0.66f,-15.52f,0.42f,-4.30f,-6.99f,-13.05f,-0.16f,36.16f,0.17f,10.08f,-1.16f,-4.54f,-1.88f,-29.71f,7.70f,0.00f,-0.00f,0.00f,58.64f,-11.40f,20.05f,0.28f,-42.46f,0.44f,25.68f,0.03f,-8.45f,-0.00f,-0.00f,-0.00f,-43.00f,14.87f,-35.21f,-0.35f,-54.05f,-0.53f,-28.74f,-0.57f,12.91f,-6.76f,-7.42f,-4.74f,8.27f,18.80f,-13.21f,3.0128f,40.0375f,-15.0004f,18.29f,8.74f,-58.00f,-0.90f,-40.20f,23.05f,0.15f,32.23f,-0.16f,-0.33f,-14.84f,0.37f,-3.34f,-7.77f,-14.37f,-0.16f,37.94f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_81()
		{
			float[] value = {0.18f,8.65f,-3.48f,-3.54f,-1.55f,-29.73f,7.61f,0.00f,-0.00f,0.00f,58.40f,-11.32f,20.03f,0.28f,-42.97f,0.44f,25.84f,0.00f,-8.63f,-0.00f,-0.00f,-0.00f,-43.30f,15.17f,-33.69f,-0.36f,-56.06f,-0.55f,-29.68f,-0.51f,13.78f,-7.47f,-5.01f,-5.25f,9.17f,18.30f,-15.17f,2.4672f,40.1832f,-14.0707f,17.01f,8.47f,-56.20f,-2.03f,-38.29f,21.58f,0.15f,33.38f,-0.16f,-0.23f,-14.59f,0.35f,-2.45f,-8.26f,-14.33f,-0.16f,38.70f,0.18f,6.75f,-5.98f,-2.49f,-1.92f,-28.82f,8.36f,0.00f,-0.00f,0.00f,58.60f,-12.85f,20.08f,0.28f,-43.21f,0.44f,25.97f,0.01f,-8.72f,-0.00f,-0.00f,-0.00f,-42.58f,15.81f,-34.21f,-0.38f,-58.08f,-0.58f,-30.52f,-0.46f,14.67f,-7.91f,-2.94f,-6.06f,10.50f,17.00f,-17.81f,2.0022f,40.2949f,-13.2202f,15.69f,8.22f,-54.85f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_82()
		{
			float[] value = {-2.71f,-36.77f,20.30f,0.16f,34.98f,-0.17f,-0.24f,-14.30f,0.35f,-1.52f,-8.92f,-12.08f,-0.16f,38.15f,0.18f,3.67f,-10.64f,-1.12f,-1.49f,-27.97f,8.85f,0.00f,-0.00f,0.00f,58.40f,-13.10f,20.28f,0.28f,-43.61f,0.45f,26.16f,0.03f,-8.87f,-0.00f,-0.00f,-0.00f,-42.40f,16.27f,-33.70f,-0.41f,-60.63f,-0.61f,-31.48f,-0.39f,15.81f,-8.19f,-1.17f,-6.52f,11.15f,16.09f,-19.45f,1.6324f,40.3547f,-12.4736f,14.54f,7.82f,-53.74f,-3.19f,-35.75f,19.47f,0.16f,37.10f,-0.18f,-0.24f,-13.56f,0.35f,-0.48f,-10.31f,-7.72f,-0.16f,36.52f,0.17f,1.42f,-16.63f,-0.41f,-1.04f,-26.87f,8.88f,0.00f,-0.00f,0.00f,58.18f,-12.73f,20.81f,0.28f,-43.83f,0.45f,26.25f,0.03f,-8.95f,-0.00f,-0.00f,-0.00f,-42.75f,15.57f,-33.26f,-0.44f,-62.22f,-0.64f,-32.11f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_83()
		{
			float[] value = {-0.30f,16.55f,-8.16f,-0.03f,-6.73f,11.20f,15.60f,-20.15f,1.3792f,40.3867f,-11.7935f,13.54f,7.43f,-52.39f,-3.49f,-35.42f,18.98f,0.17f,39.77f,-0.19f,-0.11f,-12.26f,0.32f,0.25f,-12.21f,-4.19f,-0.16f,34.87f,0.17f,0.74f,-21.48f,-0.26f,-0.90f,-25.18f,8.80f,0.00f,-0.00f,0.00f,58.05f,-12.95f,21.38f,0.28f,-43.94f,0.45f,26.25f,0.00f,-8.99f,-0.00f,-0.00f,-0.00f,-42.88f,13.68f,-34.92f,-0.45f,-63.44f,-0.66f,-32.43f,-0.32f,17.11f,-8.37f,0.50f,-6.98f,11.36f,15.18f,-20.85f,1.3087f,40.3520f,-11.1891f,12.40f,7.04f,-50.39f,-3.88f,-35.58f,18.24f,0.18f,42.94f,-0.20f,0.10f,-10.47f,0.27f,0.57f,-14.08f,-2.25f,-0.16f,34.30f,0.17f,0.82f,-25.08f,-0.21f,-1.50f,-23.29f,7.95f,0.00f,-0.00f,0.00f,58.71f,-13.28f,21.72f,0.28f,-44.08f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_84()
		{
			float[] value = {0.45f,26.31f,0.01f,-9.04f,-0.00f,-0.00f,-0.00f,-42.70f,13.73f,-34.14f,-0.48f,-64.94f,-0.69f,-32.96f,-0.25f,17.82f,-8.07f,1.00f,-7.30f,11.56f,14.06f,-21.52f,1.4267f,40.3905f,-10.7002f,11.34f,6.36f,-48.38f,-3.95f,-36.22f,18.78f,0.19f,46.49f,-0.21f,0.57f,-6.83f,0.10f,0.01f,-15.87f,-1.97f,-0.16f,34.94f,0.17f,0.82f,-25.03f,-0.21f,-1.68f,-20.74f,7.53f,0.00f,-0.00f,0.00f,58.64f,-13.73f,21.58f,0.29f,-44.73f,0.45f,26.68f,0.07f,-9.30f,-0.00f,-0.00f,-0.00f,-43.39f,14.30f,-32.96f,-0.50f,-65.99f,-0.71f,-33.39f,-0.14f,18.33f,-8.66f,0.97f,-7.63f,12.18f,13.11f,-22.42f,1.6265f,40.4041f,-10.3868f,9.62f,6.27f,-46.52f,-2.05f,-37.54f,20.98f,0.20f,50.87f,-0.24f,1.27f,-2.24f,-0.24f,0.50f,-16.44f,-2.49f,-0.16f,35.72f,0.17f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_85()
		{
			float[] value = {0.73f,-23.28f,-0.23f,-1.11f,-17.70f,7.66f,0.00f,-0.00f,0.00f,58.65f,-14.77f,21.42f,0.29f,-45.35f,0.46f,27.02f,0.12f,-9.54f,-0.00f,-0.00f,-0.00f,-43.50f,14.52f,-33.18f,-0.51f,-66.72f,-0.72f,-33.66f,-0.08f,18.70f,-8.85f,0.45f,-8.16f,12.68f,12.15f,-23.39f,1.8829f,40.2693f,-10.1995f,8.38f,6.60f,-44.49f,0.93f,-40.00f,25.28f,0.23f,56.06f,-0.27f,1.50f,2.50f,-0.47f,1.53f,-16.10f,-2.91f,-0.16f,36.39f,0.17f,0.77f,-23.76f,-0.21f,0.06f,-14.47f,7.01f,0.00f,-0.00f,0.00f,58.29f,-15.45f,21.86f,0.29f,-46.07f,0.46f,27.33f,0.13f,-9.82f,-0.00f,-0.00f,-0.00f,-44.38f,14.43f,-33.06f,-0.55f,-68.30f,-0.76f,-34.15f,0.01f,19.47f,-9.59f,-1.50f,-8.86f,12.51f,11.22f,-23.71f,2.1953f,39.7628f,-10.1050f,8.24f,7.39f,-42.70f,3.78f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_86()
		{
			float[] value = {-43.30f,30.69f,0.26f,60.66f,-0.31f,0.41f,3.38f,0.06f,2.63f,-16.40f,-3.59f,-0.16f,36.94f,0.17f,0.75f,-26.51f,-0.17f,1.25f,-12.38f,6.21f,0.00f,-0.00f,0.00f,57.87f,-15.52f,21.87f,0.30f,-47.05f,0.47f,27.68f,0.11f,-10.19f,-0.00f,-0.00f,-0.00f,-45.70f,14.63f,-31.83f,-0.61f,-70.47f,-0.82f,-34.62f,-0.00f,20.51f,-11.12f,-3.70f,-9.57f,12.55f,10.10f,-23.88f,2.4501f,39.2585f,-9.9981f,8.55f,8.89f,-41.41f,7.44f,-47.15f,35.55f,0.28f,62.43f,-0.32f,1.34f,2.42f,-0.39f,3.82f,-17.30f,-3.59f,-0.16f,37.36f,0.18f,0.32f,-30.18f,-0.16f,1.54f,-11.63f,5.99f,0.00f,-0.00f,0.00f,58.41f,-15.62f,21.66f,0.30f,-48.24f,0.48f,28.03f,0.04f,-10.65f,-0.00f,-0.00f,-0.00f,-45.05f,14.85f,-31.77f,-0.67f,-72.43f,-0.89f,-34.88f,-0.13f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_87()
		{
			float[] value = {21.42f,-11.29f,-5.94f,-10.33f,12.96f,9.22f,-24.30f,2.7217f,38.7427f,-9.8830f,9.14f,10.62f,-40.84f,11.40f,-50.97f,39.66f,0.26f,60.74f,-0.31f,2.69f,-2.61f,-0.81f,4.33f,-19.02f,-3.99f,-0.16f,38.27f,0.18f,-0.27f,-33.61f,-0.24f,2.44f,-11.97f,5.63f,0.00f,-0.00f,0.00f,57.69f,-14.07f,21.62f,0.32f,-50.24f,0.50f,28.59f,-0.06f,-11.42f,-0.00f,-0.00f,-0.00f,-45.10f,14.28f,-31.14f,-0.73f,-73.82f,-0.95f,-34.95f,-0.30f,22.04f,-11.67f,-7.87f,-10.89f,12.86f,8.74f,-24.27f,2.9500f,38.3257f,-9.6521f,9.62f,11.98f,-40.39f,14.39f,-53.60f,42.43f,0.23f,56.83f,-0.27f,1.39f,-9.30f,-0.11f,4.23f,-20.97f,-4.39f,-0.17f,40.29f,0.19f,-0.62f,-35.75f,-0.32f,3.29f,-11.90f,5.43f,0.00f,-0.00f,0.00f,56.52f,-12.55f,22.33f,0.33f,-52.51f,0.52f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_88()
		{
			float[] value = {29.21f,-0.17f,-12.34f,-0.00f,-0.00f,-0.00f,-45.01f,13.20f,-30.59f,-0.78f,-74.96f,-1.01f,-34.93f,-0.46f,22.55f,-12.25f,-9.61f,-11.51f,12.66f,8.57f,-24.42f,3.1452f,38.0562f,-9.2718f,10.17f,12.87f,-39.52f,15.07f,-54.96f,43.47f,0.21f,51.55f,-0.24f,-0.21f,-14.65f,0.32f,2.92f,-22.71f,-6.34f,-0.17f,42.46f,0.20f,-0.31f,-36.66f,-0.24f,3.18f,-11.66f,5.14f,0.00f,-0.00f,0.00f,55.86f,-11.74f,23.24f,0.35f,-54.06f,0.53f,29.58f,-0.26f,-12.97f,-0.00f,-0.00f,-0.00f,-44.48f,11.81f,-30.80f,-0.78f,-74.97f,-1.01f,-34.77f,-0.57f,22.53f,-12.46f,-10.71f,-11.96f,13.27f,8.60f,-24.93f,3.2698f,38.0080f,-8.7952f,10.19f,13.90f,-38.02f,15.48f,-56.33f,41.39f,0.18f,45.82f,-0.21f,-0.92f,-16.64f,0.42f,2.07f,-23.35f,-8.22f,-0.18f,43.26f,0.20f,-0.08f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_89()
		{
			float[] value = {-36.54f,-0.18f,4.20f,-12.56f,4.62f,0.00f,-0.00f,0.00f,54.53f,-10.40f,22.99f,0.35f,-54.46f,0.54f,29.49f,-0.36f,-13.12f,-0.00f,-0.00f,-0.00f,-45.11f,11.16f,-30.21f,-0.71f,-73.39f,-0.93f,-34.32f,-0.64f,21.74f,-12.89f,-10.37f,-12.10f,13.23f,8.96f,-25.36f,3.2790f,38.0281f,-8.2024f,9.44f,14.93f,-36.00f,15.47f,-57.25f,37.14f,0.17f,40.55f,-0.19f,-1.24f,-18.27f,0.44f,2.17f,-22.57f,-9.53f,-0.17f,42.51f,0.20f,-0.11f,-36.26f,-0.19f,4.66f,-10.74f,4.30f,0.00f,-0.00f,0.00f,55.18f,-11.35f,24.57f,0.34f,-53.77f,0.53f,28.92f,-0.49f,-12.81f,-0.00f,-0.00f,-0.00f,-44.47f,8.43f,-32.50f,-0.62f,-70.85f,-0.84f,-33.65f,-0.69f,20.50f,-13.07f,-11.76f,-13.03f,13.62f,8.76f,-26.46f,3.1839f,38.0107f,-7.4895f,8.56f,16.00f,-34.31f,16.54f,-57.85f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_90()
		{
			float[] value = {34.42f,0.16f,36.06f,-0.17f,-1.30f,-20.11f,0.40f,3.10f,-20.98f,-9.53f,-0.17f,40.69f,0.19f,-0.44f,-36.08f,-0.27f,5.37f,-10.91f,4.29f,0.00f,-0.00f,0.00f,55.90f,-10.28f,24.42f,0.34f,-53.25f,0.52f,28.55f,-0.54f,-12.58f,-0.00f,-0.00f,-0.00f,-44.03f,7.42f,-33.72f,-0.56f,-68.78f,-0.77f,-33.13f,-0.69f,19.51f,-12.81f,-11.53f,-13.46f,13.87f,8.51f,-27.45f,3.0723f,38.0215f,-6.6696f,8.17f,17.25f,-33.24f,18.04f,-58.71f,32.01f,0.15f,32.60f,-0.16f,-1.21f,-22.15f,0.36f,4.05f,-19.24f,-8.88f,-0.16f,37.86f,0.18f,-0.73f,-35.97f,-0.35f,6.09f,-12.09f,5.04f,0.00f,-0.00f,0.00f,56.31f,-8.71f,24.21f,0.34f,-52.77f,0.52f,28.26f,-0.57f,-12.38f,-0.00f,-0.00f,-0.00f,-43.97f,6.84f,-35.00f,-0.51f,-66.42f,-0.72f,-32.49f,-0.70f,18.40f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_91()
		{
			float[] value = {-12.76f,-10.96f,-13.72f,13.99f,8.66f,-28.32f,2.8782f,38.0507f,-5.7301f,7.43f,18.82f,-32.23f,18.28f,-59.77f,24.15f,0.15f,30.49f,-0.15f,-0.86f,-24.91f,0.30f,5.48f,-17.01f,-8.14f,-0.16f,34.31f,0.17f,-1.00f,-35.82f,-0.43f,7.29f,-13.23f,6.45f,0.00f,-0.00f,0.00f,56.61f,-7.85f,24.94f,0.33f,-51.46f,0.51f,27.37f,-0.64f,-11.84f,-0.00f,-0.00f,-0.00f,-43.79f,5.86f,-37.32f,-0.45f,-63.30f,-0.66f,-31.46f,-0.73f,16.96f,-13.06f,-10.67f,-14.21f,14.38f,9.11f,-29.61f,2.7892f,38.0330f,-4.6896f,8.21f,19.57f,-31.79f,19.40f,-60.50f,24.09f,0.15f,29.82f,-0.15f,-0.26f,-26.90f,0.30f,5.37f,-15.05f,-6.29f,-0.15f,30.99f,0.16f,-1.33f,-35.14f,-0.51f,6.66f,-15.49f,8.11f,0.00f,-0.00f,0.00f,57.28f,-6.10f,24.70f,0.31f,-49.84f,0.49f,26.35f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_92()
		{
			float[] value = {-0.65f,-11.19f,-0.00f,-0.00f,-0.00f,-43.12f,6.21f,-38.40f,-0.43f,-61.54f,-0.63f,-30.80f,-0.75f,16.15f,-13.33f,-9.39f,-14.47f,15.13f,9.37f,-31.05f,2.6445f,38.0394f,-3.3093f,8.96f,20.48f,-30.40f,20.18f,-60.19f,29.06f,0.15f,30.41f,-0.15f,0.22f,-28.00f,0.33f,4.40f,-12.64f,-6.72f,-0.14f,27.80f,0.15f,-1.33f,-34.46f,-0.51f,6.00f,-17.89f,8.77f,0.00f,-0.00f,0.00f,57.92f,-4.22f,24.83f,0.30f,-47.85f,0.48f,25.24f,-0.62f,-10.43f,-0.00f,-0.00f,-0.00f,-42.82f,6.07f,-39.53f,-0.41f,-60.21f,-0.61f,-30.33f,-0.75f,15.56f,-14.02f,-8.18f,-14.68f,16.01f,9.48f,-32.35f,2.5369f,37.9125f,-1.8651f,9.61f,21.49f,-28.92f,19.98f,-59.53f,33.11f,0.15f,31.71f,-0.16f,0.16f,-27.76f,0.32f,3.60f,-10.25f,-6.33f,-0.14f,24.64f,0.14f,-1.24f,-33.70f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_93()
		{
			float[] value = {-0.50f,5.01f,-20.84f,9.77f,0.00f,-0.00f,0.00f,59.08f,-2.77f,24.70f,0.29f,-45.71f,0.46f,24.12f,-0.56f,-9.63f,-0.00f,-0.00f,-0.00f,-41.97f,6.57f,-40.63f,-0.40f,-59.57f,-0.60f,-30.04f,-0.76f,15.28f,-14.09f,-6.59f,-14.95f,16.55f,9.78f,-34.05f,2.4491f,37.8452f,-0.1719f,10.22f,22.02f,-27.04f,19.75f,-58.23f,39.25f,0.15f,32.96f,-0.16f,-0.77f,-24.71f,0.30f,2.48f,-7.13f,-6.39f,-0.14f,21.30f,0.13f,-0.64f,-31.75f,-0.40f,3.93f,-22.93f,10.47f,0.00f,-0.00f,0.00f,59.47f,-2.37f,26.58f,0.28f,-43.67f,0.45f,23.11f,-0.49f,-8.89f,-0.00f,-0.00f,-0.00f,-41.66f,6.67f,-41.55f,-0.40f,-59.28f,-0.59f,-29.89f,-0.77f,15.15f,-14.64f,-5.77f,-15.33f,17.51f,10.78f,-35.92f,2.3624f,37.9482f,1.6278f,10.57f,22.61f,-24.57f,18.32f,-57.32f,43.20f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_94()
		{
			float[] value = {0.16f,34.26f,-0.17f,-1.14f,-20.46f,0.39f,1.72f,-3.62f,-6.42f,-0.13f,17.48f,0.12f,0.99f,-27.54f,-0.28f,2.46f,-25.47f,10.41f,0.00f,-0.00f,0.00f,60.08f,-2.20f,29.54f,0.27f,-42.06f,0.43f,22.39f,-0.45f,-8.32f,-0.00f,-0.00f,-0.00f,-41.21f,6.27f,-43.12f,-0.39f,-58.31f,-0.58f,-29.57f,-0.76f,14.72f,-14.22f,-4.57f,-15.67f,17.95f,11.32f,-37.61f,2.3278f,38.0972f,3.4896f,10.39f,22.64f,-21.66f,13.73f,-56.41f,39.59f,0.16f,35.35f,-0.17f,-1.04f,-17.60f,0.43f,0.77f,-0.21f,-6.64f,-0.13f,15.60f,0.11f,3.06f,-22.17f,-0.48f,1.19f,-27.99f,10.52f,0.00f,-0.00f,0.00f,60.29f,-1.66f,30.87f,0.27f,-41.58f,0.43f,22.22f,-0.45f,-8.14f,-0.00f,-0.00f,-0.00f,-40.74f,6.08f,-44.21f,-0.37f,-57.17f,-0.57f,-29.16f,-0.75f,14.23f,-13.49f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_95()
		{
			float[] value = {-1.80f,-15.85f,18.32f,10.65f,-39.53f,2.3872f,38.3100f,5.3158f,10.47f,21.82f,-18.95f,7.30f,-54.11f,33.46f,0.16f,35.88f,-0.17f,-0.91f,-17.39f,0.42f,-1.15f,0.35f,-6.84f,-0.14f,19.80f,0.12f,4.16f,-17.74f,-0.83f,-0.50f,-29.33f,11.33f,0.00f,-0.00f,0.00f,59.93f,-1.46f,31.47f,0.27f,-41.79f,0.43f,22.35f,-0.46f,-8.22f,-0.00f,-0.00f,-0.00f,-40.02f,6.47f,-44.35f,-0.37f,-56.50f,-0.56f,-28.93f,-0.74f,13.94f,-13.03f,0.72f,-16.15f,19.17f,10.35f,-41.88f,2.4305f,38.5984f,7.0077f,9.81f,20.98f,-16.27f,2.81f,-50.82f,28.77f,0.16f,35.44f,-0.17f,-0.76f,-18.32f,0.39f,-2.48f,-0.64f,-7.65f,-0.14f,26.29f,0.14f,5.50f,-11.83f,-1.55f,-0.74f,-29.02f,11.96f,0.00f,-0.00f,0.00f,58.98f,-0.59f,32.17f,0.27f,-41.89f,0.43f,22.52f,-0.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_96()
		{
			float[] value = {-8.24f,-0.00f,-0.00f,-0.00f,-39.40f,5.20f,-44.03f,-0.37f,-56.33f,-0.56f,-28.85f,-0.74f,13.87f,-13.37f,1.66f,-16.33f,19.94f,10.53f,-43.26f,2.4466f,38.9294f,8.5783f,8.17f,20.22f,-13.52f,0.63f,-47.18f,25.65f,0.16f,34.58f,-0.17f,-0.64f,-19.13f,0.37f,-3.09f,-2.45f,-8.56f,-0.15f,33.14f,0.16f,6.90f,-4.26f,-2.79f,0.36f,-28.10f,12.62f,0.00f,-0.00f,0.00f,57.82f,0.45f,33.32f,0.27f,-41.69f,0.43f,22.49f,-0.49f,-8.16f,-0.00f,-0.00f,-0.00f,-39.09f,2.53f,-43.47f,-0.35f,-55.10f,-0.54f,-28.36f,-0.73f,13.35f,-13.68f,2.77f,-16.26f,20.29f,10.35f,-43.99f,2.5398f,39.2093f,10.0645f,6.95f,19.17f,-10.64f,-1.94f,-43.33f,22.01f,0.15f,33.38f,-0.16f,-0.57f,-19.91f,0.35f,-4.39f,-4.80f,-9.51f,-0.17f,39.54f,0.18f,7.30f,3.74f,-3.93f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_97()
		{
			float[] value = {0.57f,-27.47f,13.38f,0.00f,-0.00f,0.00f,57.24f,0.85f,33.83f,0.27f,-41.36f,0.43f,22.41f,-0.49f,-8.05f,-0.00f,-0.00f,-0.00f,-38.44f,1.22f,-41.10f,-0.34f,-53.77f,-0.53f,-27.98f,-0.70f,12.79f,-13.16f,4.60f,-16.20f,20.30f,10.21f,-44.90f,2.6590f,39.3727f,11.3605f,5.88f,18.04f,-7.72f,-4.19f,-39.80f,18.24f,0.15f,32.49f,-0.16f,-0.58f,-20.94f,0.34f,-5.89f,-7.90f,-10.12f,-0.18f,45.29f,0.21f,5.34f,8.17f,-3.28f,0.87f,-26.51f,14.05f,0.00f,-0.00f,0.00f,56.48f,0.83f,34.69f,0.27f,-41.22f,0.43f,22.43f,-0.50f,-7.99f,-0.00f,-0.00f,-0.00f,-37.52f,-0.38f,-39.79f,-0.34f,-52.68f,-0.52f,-27.50f,-0.69f,12.34f,-12.74f,6.20f,-16.04f,20.03f,10.17f,-45.34f,2.8000f,39.4226f,12.4365f,5.08f,17.05f,-4.98f,-5.63f,-37.15f,16.10f,0.15f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_98()
		{
			float[] value = {32.30f,-0.16f,-0.58f,-21.49f,0.34f,-7.75f,-11.71f,-11.27f,-0.20f,50.98f,0.24f,3.58f,8.69f,-2.25f,1.38f,-24.67f,14.64f,0.00f,-0.00f,0.00f,55.23f,0.67f,35.88f,0.27f,-41.11f,0.43f,22.37f,-0.50f,-7.95f,-0.00f,-0.00f,-0.00f,-37.12f,-2.70f,-37.57f,-0.32f,-51.14f,-0.50f,-26.79f,-0.68f,11.72f,-12.88f,6.84f,-15.65f,19.98f,10.17f,-45.00f,2.9641f,39.3767f,13.2908f,4.49f,16.09f,-2.42f,-7.14f,-35.05f,13.28f,0.15f,32.76f,-0.16f,-0.61f,-22.47f,0.33f,-10.06f,-16.05f,-13.05f,-0.24f,56.95f,0.28f,3.78f,6.27f,-2.20f,1.61f,-22.46f,15.22f,0.00f,-0.00f,0.00f,54.45f,0.67f,35.80f,0.27f,-40.79f,0.43f,22.23f,-0.49f,-7.84f,0.00f,-0.00f,-0.00f,-37.08f,-4.93f,-34.53f,-0.31f,-49.79f,-0.49f,-26.26f,-0.65f,11.18f,-12.84f,7.06f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_99()
		{
			float[] value = {-15.00f,19.53f,10.37f,-43.71f,3.1181f,39.2686f,14.0183f,4.13f,14.76f,-0.18f,-8.50f,-32.91f,10.10f,0.15f,33.55f,-0.16f,-0.65f,-23.30f,0.32f,-12.64f,-20.36f,-14.54f,-0.28f,62.34f,0.32f,4.60f,0.91f,-2.21f,1.05f,-19.47f,16.06f,0.00f,-0.00f,0.00f,54.70f,0.38f,34.70f,0.27f,-40.34f,0.42f,22.07f,-0.49f,-7.68f,-0.00f,-0.00f,-0.00f,-36.56f,-7.11f,-31.26f,-0.31f,-48.54f,-0.48f,-25.62f,-0.63f,10.69f,-12.34f,6.85f,-14.30f,18.91f,10.72f,-41.90f,3.2473f,39.1772f,14.6830f,3.85f,13.14f,1.60f,-9.54f,-30.53f,7.43f,0.16f,34.44f,-0.17f,-0.68f,-24.53f,0.30f,-14.69f,-24.88f,-14.69f,-0.32f,66.14f,0.37f,5.13f,-4.52f,-1.95f,1.16f,-16.34f,16.90f,0.00f,-0.00f,0.00f,54.33f,1.25f,33.17f,0.27f,-40.59f,0.43f,22.18f,-0.49f,-7.77f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_100()
		{
			float[] value = {-0.00f,-0.00f,-0.00f,-37.02f,-8.89f,-25.60f,-0.30f,-47.03f,-0.47f,-24.87f,-0.60f,10.12f,-12.30f,6.80f,-12.98f,18.31f,11.94f,-39.33f,3.3836f,39.0366f,15.2776f,4.06f,11.72f,3.45f,-10.73f,-28.53f,5.34f,0.16f,35.49f,-0.17f,-0.70f,-25.65f,0.28f,-16.93f,-29.44f,-14.60f,-0.34f,68.19f,0.40f,5.07f,-9.02f,-1.50f,0.63f,-13.09f,17.43f,0.00f,-0.00f,0.00f,54.09f,1.28f,33.12f,0.27f,-40.60f,0.43f,22.13f,-0.48f,-7.78f,-0.00f,-0.00f,-0.00f,-37.95f,-10.52f,-18.19f,-0.30f,-46.73f,-0.47f,-24.75f,-0.60f,10.00f,-11.73f,6.37f,-11.74f,17.48f,13.72f,-36.56f,3.4224f,38.8236f,15.7680f,3.82f,11.25f,5.60f,-11.39f,-27.99f,3.47f,0.16f,37.05f,-0.18f,-0.71f,-26.81f,0.26f,-18.69f,-34.40f,-14.75f,-0.35f,68.53f,0.40f,4.51f,-11.79f,-1.11f,0.30f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_101()
		{
			float[] value = {-10.88f,17.15f,0.00f,-0.00f,0.00f,54.23f,1.67f,33.84f,0.27f,-40.76f,0.43f,22.18f,-0.48f,-7.83f,-0.00f,-0.00f,-0.00f,-39.00f,-12.32f,-11.01f,-0.30f,-47.52f,-0.47f,-24.98f,-0.60f,10.31f,-11.35f,5.87f,-10.18f,17.40f,16.12f,-33.82f,3.4248f,38.5661f,16.2219f,3.35f,11.22f,7.24f,-11.53f,-28.04f,2.75f,0.16f,38.81f,-0.18f,-0.73f,-28.30f,0.24f,-19.99f,-39.45f,-14.07f,-0.32f,66.44f,0.37f,3.35f,-13.70f,-0.72f,0.10f,-8.85f,17.43f,0.00f,-0.00f,0.00f,54.45f,2.07f,34.78f,0.27f,-40.92f,0.43f,22.32f,-0.50f,-7.88f,-0.00f,-0.00f,-0.00f,-40.47f,-13.77f,-4.56f,-0.31f,-49.33f,-0.49f,-25.52f,-0.63f,11.02f,-11.02f,4.93f,-8.62f,17.44f,18.26f,-30.93f,3.4380f,38.3701f,16.6982f,3.18f,11.44f,8.57f,-11.80f,-28.16f,1.91f,0.17f,40.13f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_102()
		{
			float[] value = {-0.19f,-0.78f,-29.40f,0.22f,-20.78f,-43.96f,-12.63f,-0.27f,61.61f,0.32f,2.47f,-14.41f,-0.54f,0.47f,-7.67f,17.92f,0.00f,-0.00f,0.00f,53.87f,3.49f,35.28f,0.27f,-41.53f,0.43f,22.79f,-0.52f,-8.09f,-0.00f,-0.00f,-0.00f,-43.19f,-14.35f,2.11f,-0.33f,-51.39f,-0.51f,-26.10f,-0.65f,11.86f,-11.00f,4.50f,-7.24f,16.79f,20.07f,-28.17f,3.5157f,38.2403f,17.1326f,3.50f,12.43f,9.53f,-12.71f,-28.50f,0.93f,0.17f,40.55f,-0.19f,-0.85f,-30.24f,0.20f,-21.96f,-48.53f,-11.45f,-0.22f,54.90f,0.26f,2.35f,-12.76f,-0.62f,0.06f,-7.09f,18.38f,0.00f,-0.00f,0.00f,53.24f,5.05f,36.31f,0.27f,-42.24f,0.44f,23.40f,-0.54f,-8.32f,-0.00f,-0.00f,-0.00f,-45.94f,-15.05f,7.96f,-0.34f,-53.92f,-0.53f,-26.76f,-0.68f,12.91f,-10.73f,3.62f,-6.40f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_103()
		{
			float[] value = {15.85f,21.27f,-25.78f,3.5558f,38.2248f,17.5883f,3.37f,13.62f,10.06f,-12.89f,-28.80f,0.63f,0.17f,40.39f,-0.19f,-0.95f,-30.91f,0.17f,-21.66f,-52.46f,-9.21f,-0.19f,46.99f,0.22f,2.95f,-9.71f,-0.96f,-0.72f,-5.96f,19.16f,0.00f,-0.00f,0.00f,53.13f,5.81f,37.98f,0.28f,-42.61f,0.44f,24.02f,-0.51f,-8.44f,-0.00f,-0.00f,-0.00f,-48.17f,-16.43f,11.11f,-0.38f,-57.38f,-0.57f,-27.82f,-0.76f,14.38f,-10.34f,1.53f,-6.03f,15.18f,21.69f,-23.79f,3.5636f,38.2140f,18.0160f,3.08f,15.36f,10.64f,-13.05f,-29.60f,0.31f,0.17f,40.11f,-0.19f,-1.01f,-31.43f,0.15f,-21.40f,-56.27f,-7.27f,-0.17f,39.35f,0.18f,4.37f,-6.65f,-1.64f,-0.93f,-6.93f,19.92f,0.00f,-0.00f,0.00f,52.81f,8.26f,36.99f,0.28f,-43.50f,0.44f,24.81f,-0.45f,-8.76f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_104()
		{
			float[] value = {-0.00f,-0.00f,-50.13f,-16.48f,13.89f,-0.43f,-61.69f,-0.63f,-29.06f,-0.88f,16.26f,-10.29f,0.48f,-5.70f,14.74f,21.82f,-22.51f,3.5920f,38.1795f,18.4557f,2.32f,17.00f,11.41f,-12.90f,-30.45f,-0.32f,0.17f,40.00f,-0.19f,-1.07f,-32.12f,0.13f,-20.60f,-59.72f,-4.71f,-0.15f,33.12f,0.16f,6.16f,-6.14f,-2.33f,-1.15f,-6.99f,21.30f,0.00f,-0.00f,0.00f,52.52f,8.72f,37.72f,0.28f,-43.39f,0.44f,24.94f,-0.41f,-8.72f,-0.00f,-0.00f,-0.00f,-51.90f,-16.38f,13.39f,-0.48f,-65.19f,-0.69f,-30.03f,-0.98f,17.84f,-10.93f,-1.40f,-5.98f,15.11f,21.31f,-22.54f,3.5993f,38.1311f,18.9528f,1.58f,18.50f,11.81f,-12.63f,-31.28f,-0.93f,0.17f,40.08f,-0.19f,-1.07f,-32.70f,0.12f,-16.36f,-62.79f,5.51f,-0.15f,28.78f,0.15f,8.09f,-8.93f,-2.61f,-0.52f,-7.57f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_105()
		{
			float[] value = {21.51f,0.00f,-0.00f,0.00f,51.60f,11.57f,37.16f,0.28f,-43.53f,0.44f,25.29f,-0.33f,-8.78f,-0.00f,-0.00f,-0.00f,-54.22f,-16.92f,14.52f,-0.55f,-68.47f,-0.77f,-31.14f,-1.10f,19.33f,-11.89f,-2.53f,-5.87f,14.98f,20.68f,-21.82f,3.6176f,38.0196f,19.5398f,1.41f,20.09f,11.95f,-12.85f,-31.95f,-1.51f,0.17f,40.17f,-0.19f,-1.08f,-33.54f,0.10f,-16.71f,-65.98f,4.78f,-0.14f,26.31f,0.14f,6.95f,-13.38f,-1.72f,-1.02f,-8.98f,22.14f,0.00f,-0.00f,0.00f,51.65f,13.46f,37.04f,0.28f,-43.27f,0.44f,25.40f,-0.25f,-8.70f,-0.00f,-0.00f,-0.00f,-55.87f,-16.72f,15.72f,-0.62f,-70.94f,-0.84f,-32.11f,-1.14f,20.47f,-11.86f,-3.07f,-6.01f,14.59f,19.95f,-21.39f,3.6149f,37.9031f,20.2047f,0.67f,21.32f,12.46f,-12.44f,-32.24f,-2.02f,0.17f,40.21f,-0.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_106()
		{
			float[] value = {-1.05f,-34.48f,0.09f,-15.31f,-68.06f,4.93f,-0.14f,25.31f,0.14f,5.27f,-18.12f,-0.91f,-0.71f,-9.80f,22.48f,0.00f,-0.00f,0.00f,50.94f,14.14f,38.62f,0.28f,-42.73f,0.44f,25.25f,-0.22f,-8.51f,-0.00f,-0.00f,-0.00f,-57.53f,-16.92f,15.99f,-0.67f,-72.47f,-0.89f,-32.79f,-1.13f,21.19f,-12.14f,-3.89f,-6.31f,14.08f,19.36f,-21.17f,3.6715f,37.8701f,20.9511f,0.24f,22.41f,13.16f,-12.57f,-31.84f,-2.95f,0.17f,39.66f,-0.18f,-0.99f,-35.01f,0.09f,-14.26f,-69.08f,4.88f,-0.14f,25.42f,0.14f,5.02f,-18.83f,-0.82f,-1.02f,-9.94f,22.75f,0.00f,-0.00f,0.00f,50.22f,13.81f,40.10f,0.27f,-42.34f,0.44f,25.20f,-0.18f,-8.37f,-0.00f,-0.00f,-0.00f,-59.09f,-17.22f,15.39f,-0.72f,-73.66f,-0.94f,-33.37f,-1.07f,21.78f,-12.55f,-5.12f,-6.81f,14.26f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_107()
		{
			float[] value = {18.43f,-21.41f,3.7190f,37.8706f,21.8221f,-0.24f,23.29f,14.04f,-12.47f,-30.94f,-3.63f,0.16f,38.74f,-0.18f,-0.95f,-35.33f,0.09f,-13.22f,-69.31f,4.74f,-0.14f,25.86f,0.14f,5.08f,-18.43f,-0.86f,-1.10f,-10.54f,22.79f,0.00f,-0.00f,0.00f,49.56f,13.85f,40.84f,0.27f,-42.08f,0.43f,25.16f,-0.15f,-8.28f,-0.00f,-0.00f,-0.00f,-59.87f,-16.95f,14.88f,-0.77f,-74.75f,-1.00f,-33.83f,-1.01f,22.31f,-12.49f,-5.64f,-7.26f,14.07f,17.50f,-21.61f,3.7728f,37.8436f,22.8402f,-0.99f,24.11f,15.55f,-12.08f,-29.85f,-4.10f,0.16f,37.72f,-0.18f,-1.06f,-35.41f,0.07f,-12.94f,-69.00f,3.48f,-0.14f,26.19f,0.14f,4.18f,-19.90f,-0.64f,-0.59f,-11.82f,22.29f,0.00f,-0.00f,0.00f,48.91f,14.19f,41.41f,0.27f,-41.94f,0.43f,25.13f,-0.13f,-8.23f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_108()
		{
			float[] value = {-0.00f,-60.39f,-16.52f,14.88f,-0.81f,-75.48f,-1.04f,-34.16f,-0.94f,22.68f,-12.56f,-5.41f,-7.52f,13.86f,17.03f,-21.95f,3.8347f,37.8483f,23.9696f,-2.03f,24.84f,17.37f,-11.40f,-28.51f,-4.72f,0.16f,36.67f,-0.17f,-1.18f,-35.72f,0.04f,-12.97f,-68.08f,1.66f,-0.14f,26.20f,0.14f,3.27f,-21.32f,-0.48f,-0.21f,-14.06f,22.54f,0.00f,-0.00f,0.00f,49.51f,14.13f,40.46f,0.27f,-41.85f,0.43f,25.10f,-0.13f,-8.20f,-0.00f,-0.00f,-0.00f,-59.90f,-14.57f,14.72f,-0.85f,-76.20f,-1.08f,-34.44f,-0.89f,23.05f,-12.51f,-4.10f,-7.71f,14.22f,15.60f,-22.68f,3.9437f,37.7229f,25.1989f,-2.40f,25.84f,18.99f,-11.42f,-27.03f,-5.80f,0.16f,35.57f,-0.17f,-1.26f,-35.84f,0.02f,-13.86f,-67.03f,-0.36f,-0.14f,26.07f,0.14f,2.02f,-24.01f,-0.31f,-1.51f,-16.01f,22.84f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_109()
		{
			float[] value = {0.00f,-0.00f,0.00f,50.90f,12.90f,40.13f,0.27f,-41.60f,0.43f,25.03f,-0.11f,-8.12f,-0.00f,-0.00f,-0.00f,-58.71f,-13.01f,13.43f,-0.90f,-76.93f,-1.13f,-34.73f,-0.82f,23.42f,-11.73f,-4.28f,-8.60f,14.58f,15.43f,-24.34f,4.0461f,37.6560f,26.5171f,-2.79f,26.80f,20.52f,-10.99f,-25.48f,-5.92f,0.16f,34.23f,-0.17f,-1.44f,-35.70f,-0.02f,-14.80f,-65.89f,-2.36f,-0.14f,26.00f,0.14f,1.15f,-26.14f,-0.26f,-3.87f,-16.74f,23.14f,0.00f,-0.00f,0.00f,52.61f,9.82f,41.74f,0.27f,-41.08f,0.43f,24.83f,-0.10f,-7.93f,-0.00f,-0.00f,-0.00f,-57.46f,-12.14f,10.70f,-0.91f,-77.04f,-1.13f,-34.86f,-0.76f,23.49f,-11.06f,-5.95f,-9.82f,15.20f,14.98f,-25.96f,4.1307f,37.6234f,27.9755f,-4.03f,27.58f,22.59f,-9.46f,-23.73f,-5.16f,0.15f,32.28f,-0.16f,-1.77f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_110()
		{
			float[] value = {-35.00f,-0.06f,-15.18f,-64.84f,-4.59f,-0.14f,26.59f,0.14f,0.60f,-27.64f,-0.26f,-4.58f,-17.87f,22.87f,0.00f,-0.00f,0.00f,53.61f,7.69f,42.97f,0.27f,-40.78f,0.43f,24.68f,-0.11f,-7.82f,-0.00f,-0.00f,-0.00f,-57.02f,-11.59f,8.86f,-0.89f,-76.75f,-1.11f,-34.93f,-0.69f,23.37f,-11.27f,-7.30f,-10.65f,15.82f,15.12f,-27.15f,4.1955f,37.7839f,29.6154f,-6.08f,27.74f,25.06f,-7.16f,-21.23f,-5.24f,0.15f,29.64f,-0.15f,-1.69f,-33.45f,0.01f,-14.29f,-64.06f,-6.50f,-0.15f,28.01f,0.15f,0.99f,-26.13f,-0.25f,-2.22f,-20.77f,22.17f,0.00f,-0.00f,0.00f,53.30f,8.70f,41.95f,0.27f,-41.12f,0.43f,24.77f,-0.14f,-7.94f,-0.00f,-0.00f,-0.00f,-57.76f,-10.19f,10.37f,-0.87f,-76.50f,-1.10f,-35.00f,-0.61f,23.27f,-11.89f,-6.39f,-10.43f,15.46f,15.29f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_111()
		{
			float[] value = {-27.09f,4.2862f,38.0082f,31.2927f,-7.85f,27.87f,27.31f,-5.17f,-18.44f,-5.31f,0.14f,26.56f,-0.14f,-1.30f,-30.96f,0.14f,-13.51f,-63.75f,-8.28f,-0.15f,30.15f,0.15f,2.03f,-21.75f,-0.36f,-0.19f,-24.58f,21.75f,0.00f,-0.00f,0.00f,53.27f,10.15f,39.94f,0.27f,-41.92f,0.43f,25.04f,-0.17f,-8.22f,-0.00f,-0.00f,-0.00f,-57.76f,-8.22f,12.65f,-0.85f,-76.20f,-1.08f,-34.93f,-0.62f,23.12f,-11.95f,-5.52f,-10.22f,14.77f,16.56f,-27.11f,4.4044f,38.2594f,33.0175f,-9.13f,27.49f,29.57f,-3.65f,-15.29f,-5.14f,0.14f,24.05f,-0.14f,-0.90f,-27.36f,0.26f,-13.40f,-62.68f,-10.54f,-0.15f,32.28f,0.16f,2.95f,-17.50f,-0.62f,0.47f,-26.69f,21.24f,0.00f,-0.00f,0.00f,53.53f,9.62f,39.29f,0.27f,-42.34f,0.44f,25.07f,-0.23f,-8.36f,-0.00f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_112()
		{
			float[] value = {-56.86f,-6.54f,13.27f,-0.83f,-75.85f,-1.06f,-34.82f,-0.65f,22.94f,-12.06f,-5.74f,-10.38f,14.86f,17.77f,-27.67f,4.5273f,38.5699f,34.7730f,-10.83f,26.12f,32.16f,-1.72f,-12.49f,-4.41f,0.14f,23.26f,-0.13f,-0.95f,-23.07f,0.34f,-11.99f,-60.32f,-12.51f,-0.15f,33.61f,0.16f,3.25f,-15.69f,-0.76f,2.18f,-28.02f,20.51f,0.00f,-0.00f,0.00f,53.26f,9.28f,38.13f,0.28f,-42.54f,0.44f,24.93f,-0.31f,-8.43f,-0.00f,-0.00f,-0.00f,-56.46f,-4.91f,14.38f,-0.81f,-75.57f,-1.04f,-34.73f,-0.67f,22.79f,-12.21f,-5.85f,-10.37f,14.63f,19.02f,-27.84f,4.6217f,38.9345f,36.4757f,-12.39f,24.57f,34.95f,-0.09f,-10.86f,-2.95f,0.14f,24.49f,-0.14f,-1.72f,-18.12f,0.51f,-10.71f,-57.14f,-15.16f,-0.15f,34.07f,0.17f,2.98f,-16.37f,-0.67f,3.30f,-29.10f,19.80f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_113()
		{
			float[] value = {-0.00f,0.00f,53.24f,8.50f,35.94f,0.28f,-42.59f,0.44f,24.68f,-0.39f,-8.44f,-0.00f,-0.00f,-0.00f,-56.11f,-3.07f,15.54f,-0.79f,-75.18f,-1.02f,-34.57f,-0.72f,22.59f,-11.67f,-5.64f,-10.48f,14.26f,19.93f,-28.10f,4.7369f,39.3124f,38.0858f,-13.34f,22.98f,38.08f,0.68f,-9.96f,-1.44f,0.14f,26.53f,-0.14f,-3.30f,-13.09f,1.00f,-9.49f,-53.48f,-16.34f,-0.15f,34.05f,0.17f,2.71f,-18.04f,-0.55f,4.07f,-29.74f,18.52f,0.00f,-0.00f,0.00f,52.74f,7.04f,35.31f,0.27f,-41.74f,0.43f,23.86f,-0.48f,-8.13f,-0.00f,-0.00f,-0.00f,-56.51f,-0.69f,17.03f,-0.82f,-75.65f,-1.05f,-34.45f,-0.83f,22.79f,-11.30f,-5.28f,-10.63f,13.97f,20.47f,-28.44f,4.9208f,39.6504f,39.5876f,-13.58f,21.92f,41.67f,0.14f,-9.57f,0.10f,0.15f,28.04f,-0.15f,-5.65f,-8.27f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_114()
		{
			float[] value = {2.00f,-9.44f,-50.16f,-17.15f,-0.15f,34.17f,0.17f,2.49f,-19.76f,-0.44f,3.54f,-29.06f,16.34f,0.00f,-0.00f,0.00f,52.36f,4.44f,35.42f,0.27f,-39.97f,0.42f,22.54f,-0.51f,-7.52f,-0.00f,-0.00f,-0.00f,-57.37f,0.44f,17.16f,-0.82f,-75.66f,-1.05f,-34.13f,-0.97f,22.76f,-11.45f,-5.55f,-10.95f,14.18f,20.34f,-29.01f,5.0441f,39.8583f,40.9975f,-14.20f,20.53f,45.07f,0.22f,-9.68f,2.60f,0.15f,29.35f,-0.15f,-6.78f,-6.19f,2.60f,-7.26f,-47.35f,-14.85f,-0.16f,34.28f,0.17f,2.17f,-21.66f,-0.33f,3.05f,-29.47f,14.25f,0.00f,-0.00f,0.00f,53.40f,2.88f,33.70f,0.26f,-38.65f,0.41f,21.57f,-0.48f,-7.10f,-0.00f,-0.00f,-0.00f,-57.32f,1.07f,17.86f,-0.73f,-73.86f,-0.95f,-33.36f,-1.09f,21.87f,-10.62f,-4.15f,-10.99f,13.92f,20.08f,-29.35f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_115()
		{
			float[] value = {5.1273f,39.9544f,42.2346f,-14.80f,18.80f,47.75f,0.29f,-9.99f,4.88f,0.15f,30.80f,-0.15f,-6.07f,-7.12f,2.25f,-5.47f,-44.78f,-15.05f,-0.16f,34.58f,0.17f,1.74f,-22.93f,-0.27f,2.91f,-29.82f,12.57f,0.00f,-0.00f,0.00f,54.67f,1.55f,31.86f,0.26f,-38.17f,0.41f,21.16f,-0.46f,-6.95f,-0.00f,-0.00f,-0.00f,-57.71f,1.71f,19.36f,-0.67f,-72.38f,-0.89f,-32.46f,-1.17f,21.15f,-9.50f,-2.21f,-10.83f,14.01f,19.89f,-29.68f,5.2267f,40.0289f,43.2729f,-14.98f,17.14f,49.86f,-0.37f,-10.32f,7.06f,0.15f,32.14f,-0.16f,-4.96f,-8.96f,1.72f,-4.73f,-42.59f,-16.95f,-0.16f,35.40f,0.17f,1.47f,-23.44f,-0.24f,3.42f,-29.50f,11.40f,0.00f,-0.00f,0.00f,54.69f,0.12f,30.61f,0.26f,-38.21f,0.41f,21.08f,-0.45f,-6.97f,-0.00f,-0.00f,-0.00f,-58.56f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_116()
		{
			float[] value = {1.45f,19.92f,-0.60f,-70.26f,-0.82f,-31.34f,-1.15f,20.17f,-9.28f,-0.19f,-10.38f,14.38f,19.61f,-29.79f,5.2934f,40.0853f,44.1809f,-14.73f,15.57f,51.58f,-1.51f,-10.56f,8.93f,0.15f,33.17f,-0.16f,-3.77f,-10.57f,1.27f,-4.41f,-40.72f,-19.18f,-0.16f,36.68f,0.17f,1.35f,-23.53f,-0.23f,3.45f,-28.37f,10.48f,0.00f,-0.00f,0.00f,54.66f,-1.93f,30.02f,0.26f,-38.43f,0.41f,21.19f,-0.45f,-7.04f,-0.00f,-0.00f,-0.00f,-58.99f,1.15f,18.90f,-0.55f,-68.45f,-0.77f,-30.42f,-1.04f,19.36f,-8.55f,1.40f,-10.03f,14.40f,19.25f,-29.58f,5.3278f,40.1520f,44.9569f,-14.18f,14.09f,53.68f,-3.10f,-10.81f,9.82f,0.15f,33.85f,-0.16f,-2.44f,-12.06f,0.86f,-4.61f,-39.03f,-21.23f,-0.16f,38.26f,0.18f,1.30f,-23.52f,-0.21f,3.24f,-26.73f,9.21f,0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_117()
		{
			float[] value = {0.00f,54.62f,-3.67f,28.82f,0.26f,-38.97f,0.42f,21.47f,-0.47f,-7.22f,-0.00f,-0.00f,-0.00f,-59.50f,1.21f,17.30f,-0.53f,-67.48f,-0.74f,-29.72f,-0.91f,18.97f,-7.97f,2.94f,-9.68f,14.31f,18.77f,-29.27f,5.2803f,40.1651f,45.6320f,-13.44f,12.30f,56.32f,-4.60f,-11.08f,10.49f,0.16f,34.52f,-0.17f,-1.25f,-13.55f,0.55f,-4.37f,-37.47f,-22.16f,-0.17f,40.16f,0.19f,1.10f,-23.98f,-0.19f,3.18f,-24.70f,7.37f,0.00f,-0.00f,0.00f,54.80f,-4.83f,26.46f,0.26f,-39.55f,0.42f,21.79f,-0.48f,-7.41f,-0.00f,-0.00f,-0.00f,-59.96f,1.83f,16.09f,-0.53f,-67.44f,-0.74f,-29.18f,-0.73f,19.02f,-7.46f,4.47f,-9.24f,14.06f,18.41f,-28.72f,5.1275f,40.0739f,46.2454f,-12.92f,10.24f,58.83f,-5.34f,-11.85f,11.66f,0.16f,35.11f,-0.17f,-0.27f,-15.08f,0.35f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_118()
		{
			float[] value = {-3.84f,-36.42f,-23.22f,-0.17f,42.47f,0.20f,1.18f,-23.65f,-0.18f,3.36f,-22.79f,5.72f,0.00f,-0.00f,0.00f,55.48f,-6.02f,23.92f,0.27f,-39.98f,0.42f,22.06f,-0.49f,-7.55f,-0.00f,-0.00f,-0.00f,-60.23f,2.13f,14.87f,-0.53f,-67.33f,-0.74f,-28.89f,-0.61f,19.01f,-6.75f,6.09f,-8.83f,14.05f,17.89f,-28.30f,4.9142f,40.0413f,46.6999f,-12.21f,8.59f,61.34f,-6.07f,-13.23f,12.73f,0.16f,35.79f,-0.17f,0.38f,-16.49f,0.25f,-4.22f,-35.99f,-24.89f,-0.18f,45.10f,0.21f,1.62f,-22.44f,-0.21f,3.50f,-20.92f,4.02f,0.00f,-0.00f,0.00f,55.92f,-7.05f,21.83f,0.27f,-40.42f,0.42f,22.29f,-0.50f,-7.70f,-0.00f,-0.00f,-0.00f,-60.84f,2.32f,14.24f,-0.54f,-68.10f,-0.76f,-28.88f,-0.55f,19.40f,-6.28f,7.68f,-8.41f,14.20f,16.96f,-27.98f,4.5876f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_119()
		{
			float[] value = {40.0755f,47.0648f,-11.44f,7.15f,63.47f,-6.51f,-14.76f,13.37f,0.16f,37.32f,-0.18f,0.39f,-16.45f,0.24f,-4.69f,-36.05f,-26.29f,-0.19f,47.93f,0.22f,2.39f,-20.27f,-0.31f,3.82f,-17.59f,2.73f,0.00f,-0.00f,0.00f,56.38f,-8.41f,20.91f,0.27f,-41.55f,0.43f,22.84f,-0.52f,-8.09f,-0.00f,-0.00f,-0.00f,-61.48f,2.19f,12.16f,-0.60f,-70.30f,-0.82f,-29.22f,-0.57f,20.45f,-6.32f,6.93f,-8.31f,14.50f,16.39f,-27.72f,4.1273f,40.2354f,47.3057f,-10.60f,5.82f,65.26f,-6.55f,-16.00f,12.49f,0.17f,39.42f,-0.18f,0.32f,-13.53f,0.23f,-5.45f,-37.28f,-26.55f,-0.21f,51.72f,0.24f,3.96f,-15.78f,-0.75f,4.41f,-14.33f,2.01f,0.00f,-0.00f,0.00f,56.93f,-9.59f,19.97f,0.28f,-42.56f,0.44f,23.37f,-0.54f,-8.44f,-0.00f,-0.00f,-0.00f,-62.39f,2.60f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_120()
		{
			float[] value = {10.56f,-0.73f,-73.75f,-0.95f,-29.82f,-0.69f,22.09f,-6.81f,5.86f,-8.19f,15.03f,16.10f,-27.58f,3.5789f,40.1757f,47.4787f,-10.16f,4.83f,66.29f,-6.48f,-16.36f,10.55f,0.17f,40.44f,-0.19f,0.06f,-14.22f,0.29f,-7.03f,-40.45f,-26.58f,-0.24f,57.02f,0.28f,5.68f,-9.80f,-1.64f,5.15f,-11.93f,1.67f,0.00f,-0.00f,0.00f,57.67f,-9.72f,19.44f,0.28f,-43.49f,0.44f,23.88f,-0.56f,-8.77f,-0.00f,-0.00f,-0.00f,-63.57f,2.12f,8.70f,-0.87f,-76.56f,-1.10f,-30.45f,-0.90f,23.39f,-7.45f,4.80f,-7.75f,15.44f,16.01f,-26.80f,3.0221f,39.8305f,47.6265f,-10.26f,4.95f,66.40f,-6.89f,-16.16f,9.72f,0.17f,40.01f,-0.19f,-0.40f,-18.58f,0.34f,-10.02f,-45.35f,-26.74f,-0.28f,62.32f,0.32f,6.36f,-3.50f,-2.54f,4.94f,-10.31f,2.05f,0.00f,-0.00f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_121()
		{
			float[] value = {58.82f,-9.24f,19.83f,0.29f,-44.77f,0.45f,24.57f,-0.57f,-9.24f,-0.00f,-0.00f,-0.00f,-64.45f,0.76f,6.24f,-1.07f,-79.09f,-1.31f,-31.07f,-1.13f,24.56f,-7.73f,2.98f,-7.41f,15.63f,16.32f,-25.68f,2.5153f,39.4198f,47.8171f,-11.05f,5.57f,66.43f,-7.27f,-16.72f,9.08f,0.17f,39.31f,-0.18f,-0.63f,-22.41f,0.32f,-13.20f,-50.15f,-26.73f,-0.30f,64.29f,0.34f,3.77f,-1.63f,-1.65f,3.82f,-9.88f,2.95f,0.00f,-0.00f,0.00f,60.43f,-8.96f,21.12f,0.29f,-46.00f,0.46f,25.25f,-0.57f,-9.70f,-0.00f,-0.00f,-0.00f,-64.19f,-0.41f,3.20f,-1.24f,-80.57f,-1.47f,-31.66f,-1.33f,25.22f,-7.13f,1.46f,-7.29f,15.67f,16.46f,-24.79f,2.0973f,38.9568f,48.0215f,-12.14f,6.28f,66.38f,-7.98f,-16.92f,8.39f,0.16f,38.31f,-0.18f,-0.66f,-27.69f,0.25f,-15.55f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_122()
		{
			float[] value = {-54.29f,-26.12f,-0.27f,61.98f,0.32f,0.90f,-3.15f,-0.43f,3.23f,-10.20f,4.35f,0.00f,-0.00f,0.00f,61.16f,-8.51f,22.20f,0.30f,-47.18f,0.47f,25.93f,-0.56f,-10.14f,-0.00f,-0.00f,-0.00f,-63.93f,-0.75f,0.16f,-1.43f,-81.82f,-1.66f,-32.30f,-1.49f,25.77f,-7.46f,-0.09f,-7.07f,16.34f,17.36f,-24.41f,1.7998f,38.6983f,48.2684f,-13.24f,6.63f,66.01f,-8.33f,-17.13f,7.11f,0.16f,36.87f,-0.17f,-0.36f,-30.48f,0.26f,-15.76f,-56.90f,-24.24f,-0.23f,56.31f,0.27f,0.50f,-4.73f,-0.28f,3.69f,-10.28f,5.99f,0.00f,-0.00f,0.00f,60.75f,-7.83f,24.20f,0.30f,-48.15f,0.48f,26.50f,-0.53f,-10.52f,-0.00f,-0.00f,-0.00f,-64.21f,-1.45f,-2.89f,-1.45f,-81.95f,-1.69f,-32.97f,-1.55f,25.78f,-7.93f,-1.68f,-7.00f,15.66f,17.90f,-23.38f,1.6086f,38.6394f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_123()
		{
			float[] value = {48.5393f,-14.23f,7.50f,65.48f,-8.67f,-17.23f,6.77f,0.16f,34.83f,-0.17f,-0.18f,-31.87f,0.28f,-15.08f,-58.63f,-20.22f,-0.19f,48.78f,0.22f,1.37f,-4.44f,-0.64f,3.07f,-10.46f,7.65f,0.00f,-0.00f,0.00f,60.80f,-7.21f,26.61f,0.31f,-48.80f,0.48f,26.98f,-0.49f,-10.78f,-0.00f,-0.00f,-0.00f,-63.37f,-2.50f,-6.02f,-1.33f,-81.19f,-1.56f,-33.58f,-1.48f,25.39f,-7.95f,-3.03f,-7.07f,15.21f,17.87f,-22.69f,1.4792f,38.6235f,48.8761f,-15.75f,8.21f,65.14f,-8.14f,-17.62f,7.25f,0.15f,32.65f,-0.16f,-0.14f,-32.97f,0.28f,-13.50f,-59.99f,-14.52f,-0.17f,40.73f,0.19f,2.50f,-3.60f,-1.14f,2.34f,-11.62f,8.97f,0.00f,-0.00f,0.00f,61.40f,-6.33f,29.06f,0.31f,-48.81f,0.48f,27.24f,-0.41f,-10.79f,-0.00f,-0.00f,-0.00f,-61.54f,-4.09f,-8.88f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_124()
		{
			float[] value = {-1.13f,-79.61f,-1.36f,-34.02f,-1.31f,24.63f,-7.10f,-4.25f,-7.02f,14.56f,18.45f,-21.77f,1.4713f,38.6182f,49.1977f,-17.40f,8.90f,65.19f,-7.76f,-18.04f,7.40f,0.15f,30.58f,-0.15f,-0.19f,-33.40f,0.27f,-12.15f,-61.20f,-7.63f,-0.15f,34.13f,0.17f,3.80f,-3.85f,-1.67f,2.14f,-13.32f,10.06f,0.00f,-0.00f,0.00f,61.47f,-5.37f,31.38f,0.31f,-48.39f,0.48f,27.30f,-0.33f,-10.64f,-0.00f,-0.00f,-0.00f,-60.34f,-5.26f,-11.44f,-0.98f,-78.08f,-1.21f,-34.42f,-1.07f,23.93f,-6.99f,-5.08f,-6.56f,14.65f,19.51f,-20.85f,1.6190f,38.5672f,49.4851f,-18.02f,10.34f,65.04f,-8.64f,-17.65f,7.29f,0.15f,28.42f,-0.15f,-0.23f,-33.85f,0.27f,-10.92f,-62.11f,2.49f,-0.15f,30.28f,0.15f,5.24f,-6.65f,-1.98f,1.40f,-14.46f,11.35f,0.00f,-0.00f,0.00f,60.97f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_125()
		{
			float[] value = {-4.89f,34.12f,0.30f,-47.32f,0.47f,27.03f,-0.27f,-10.23f,-0.00f,-0.00f,-0.00f,-59.89f,-5.97f,-13.74f,-0.87f,-76.56f,-1.10f,-34.70f,-0.79f,23.25f,-7.49f,-6.10f,-6.14f,14.05f,21.02f,-19.75f,1.8004f,38.4258f,49.8630f,-18.60f,11.41f,64.38f,-8.86f,-17.29f,7.77f,0.14f,26.79f,-0.14f,-0.22f,-34.53f,0.27f,-8.76f,-62.66f,11.71f,-0.15f,28.27f,0.15f,5.26f,-11.73f,-1.51f,1.03f,-15.35f,13.04f,0.00f,-0.00f,0.00f,60.56f,-4.06f,36.28f,0.30f,-46.53f,0.47f,26.87f,-0.21f,-9.93f,-0.00f,-0.00f,-0.00f,-59.76f,-6.68f,-15.77f,-0.79f,-75.03f,-1.01f,-34.84f,-0.54f,22.57f,-7.98f,-7.08f,-5.72f,13.66f,21.87f,-18.67f,2.0684f,38.3156f,50.3002f,-19.28f,12.23f,63.97f,-8.72f,-16.98f,8.43f,0.14f,25.56f,-0.14f,-0.31f,-34.94f,0.25f,-9.05f,-63.02f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_126()
		{
			float[] value = {13.59f,-0.14f,27.29f,0.14f,4.04f,-16.35f,-0.88f,0.57f,-16.16f,14.46f,0.00f,-0.00f,0.00f,60.48f,-3.86f,39.26f,0.29f,-45.39f,0.46f,26.46f,-0.18f,-9.50f,-0.00f,-0.00f,-0.00f,-59.26f,-7.80f,-18.76f,-0.67f,-72.33f,-0.89f,-34.63f,-0.31f,21.31f,-7.75f,-8.52f,-5.36f,12.82f,23.01f,-17.28f,2.4250f,38.2610f,50.7800f,-20.05f,13.05f,63.98f,-8.67f,-16.68f,8.50f,0.14f,24.44f,-0.14f,-0.40f,-34.88f,0.23f,-9.51f,-63.23f,15.05f,-0.14f,27.05f,0.14f,3.26f,-19.11f,-0.60f,0.60f,-18.02f,15.39f,0.00f,-0.00f,0.00f,59.85f,-2.51f,40.44f,0.29f,-44.99f,0.45f,26.37f,-0.15f,-9.35f,-0.00f,-0.00f,-0.00f,-58.76f,-8.17f,-20.83f,-0.59f,-69.70f,-0.80f,-34.35f,-0.09f,20.11f,-7.37f,-8.19f,-4.72f,11.62f,23.15f,-15.62f,2.8712f,38.1955f,51.3315f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_127()
		{
			float[] value = {-21.24f,13.49f,64.68f,-8.15f,-16.56f,8.31f,0.14f,23.70f,-0.13f,-0.51f,-34.80f,0.21f,-9.97f,-63.13f,15.70f,-0.14f,26.96f,0.14f,2.45f,-21.58f,-0.40f,1.11f,-20.51f,15.70f,0.00f,-0.00f,0.00f,59.33f,-0.86f,40.74f,0.29f,-44.67f,0.45f,26.34f,-0.10f,-9.24f,-0.00f,-0.00f,-0.00f,-58.25f,-7.80f,-21.96f,-0.54f,-67.74f,-0.75f,-34.13f,0.10f,19.23f,-7.16f,-7.65f,-4.07f,10.83f,23.65f,-14.28f,3.4017f,38.0932f,52.0120f,-22.55f,13.54f,65.54f,-7.12f,-16.39f,8.09f,0.14f,23.28f,-0.13f,-0.60f,-34.60f,0.19f,-9.56f,-62.54f,16.68f,-0.14f,26.66f,0.14f,1.46f,-24.56f,-0.27f,1.12f,-21.90f,16.43f,0.00f,-0.00f,0.00f,59.47f,-1.54f,42.19f,0.28f,-43.94f,0.45f,26.03f,-0.11f,-8.97f,-0.00f,-0.00f,-0.00f,-57.66f,-7.37f,-24.33f,-0.49f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_128()
		{
			float[] value = {-65.72f,-0.70f,-33.82f,0.26f,18.32f,-6.88f,-8.04f,-3.83f,10.70f,24.28f,-13.76f,4.0453f,37.9331f,52.8088f,-23.77f,13.52f,66.36f,-6.03f,-15.90f,8.10f,0.14f,22.87f,-0.13f,-0.68f,-34.61f,0.18f,-8.94f,-61.51f,17.90f,-0.14f,26.26f,0.14f,0.84f,-27.18f,-0.24f,2.01f,-23.91f,16.84f,0.00f,-0.00f,0.00f,58.81f,-1.12f,42.65f,0.28f,-43.73f,0.45f,25.87f,-0.14f,-8.88f,-0.00f,-0.00f,-0.00f,-57.64f,-6.59f,-24.96f,-0.46f,-63.90f,-0.67f,-33.50f,0.40f,17.51f,-6.87f,-7.82f,-3.27f,10.35f,25.07f,-12.78f,4.8526f,37.7890f,53.6876f,-24.58f,13.47f,67.36f,-5.30f,-14.34f,7.07f,0.14f,21.51f,-0.13f,-0.64f,-33.92f,0.20f,-7.71f,-60.48f,19.59f,-0.14f,26.76f,0.14f,0.74f,-29.00f,-0.21f,1.78f,-25.90f,17.35f,0.00f,0.00f,-0.00f,59.21f,-1.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_129()
		{
			float[] value = {41.97f,0.28f,-43.44f,0.44f,25.68f,-0.17f,-8.77f,0.00f,0.00f,0.00f,-56.88f,-5.11f,-25.69f,-0.44f,-62.59f,-0.64f,-33.26f,0.50f,16.94f,-6.39f,-7.17f,-2.96f,10.14f,25.59f,-12.30f,5.8306f,37.8369f,54.6163f,-25.29f,13.18f,68.39f,-4.56f,-12.09f,5.29f,0.14f,19.32f,-0.12f,-0.58f,-32.26f,0.23f,-5.54f,-59.85f,21.85f,-0.15f,28.01f,0.15f,1.29f,-26.22f,-0.22f,2.11f,-28.19f,17.63f,0.00f,-0.00f,0.00f,59.12f,-1.45f,40.80f,0.28f,-43.50f,0.44f,25.59f,-0.22f,-8.79f,-0.00f,-0.00f,-0.00f,-56.16f,-4.05f,-26.08f,-0.43f,-61.58f,-0.63f,-32.98f,0.49f,16.47f,-6.21f,-6.17f,-2.60f,9.84f,26.44f,-11.87f,6.8577f,37.9418f,55.5889f,-25.64f,12.31f,68.66f,-3.35f,-9.45f,3.25f,0.13f,17.32f,-0.12f,-0.73f,-29.37f,0.25f,-1.75f,-58.95f,25.37f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_130()
		{
			float[] value = {-0.15f,29.34f,0.15f,1.72f,-22.54f,-0.31f,2.54f,-28.93f,19.00f,0.00f,-0.00f,0.00f,58.93f,-3.14f,40.45f,0.28f,-43.80f,0.45f,25.49f,-0.30f,-8.89f,-0.00f,-0.00f,-0.00f,-55.11f,-3.34f,-27.03f,-0.42f,-60.86f,-0.62f,-32.72f,0.43f,16.13f,-5.88f,-6.09f,-2.46f,9.92f,27.21f,-11.75f,7.9273f,38.0802f,56.5295f,-25.00f,11.28f,68.60f,-2.36f,-6.83f,2.17f,0.13f,17.26f,-0.12f,-1.08f,-26.53f,0.28f,-1.13f,-57.55f,21.36f,-0.15f,30.67f,0.15f,1.68f,-20.28f,-0.37f,3.25f,-29.18f,19.96f,0.00f,-0.00f,0.00f,57.76f,-3.67f,39.16f,0.28f,-44.29f,0.45f,25.39f,-0.40f,-9.06f,-0.00f,-0.00f,-0.00f,-53.61f,-3.04f,-26.56f,-0.41f,-60.64f,-0.61f,-32.54f,0.32f,16.00f,-5.09f,-4.88f,-2.13f,8.88f,27.52f,-10.69f,9.0229f,38.2984f,57.4420f,-23.76f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_131()
		{
			float[] value = {10.05f,68.95f,-1.39f,-5.25f,1.34f,0.14f,20.04f,-0.13f,-1.57f,-23.15f,0.35f,-2.27f,-55.05f,14.66f,-0.15f,31.94f,0.16f,1.33f,-20.49f,-0.33f,3.52f,-29.11f,19.88f,0.00f,-0.00f,0.00f,56.56f,-3.37f,37.52f,0.29f,-44.57f,0.45f,25.29f,-0.45f,-9.16f,-0.00f,-0.00f,-0.00f,-51.87f,-2.85f,-25.13f,-0.41f,-60.29f,-0.61f,-32.22f,0.14f,15.79f,-4.25f,-3.25f,-1.81f,8.00f,27.93f,-9.75f,10.1302f,38.6322f,58.2892f,-22.23f,8.95f,70.01f,-0.69f,-5.21f,1.40f,0.14f,25.22f,-0.14f,-2.49f,-17.89f,0.61f,-3.41f,-51.40f,10.19f,-0.15f,32.47f,0.16f,1.24f,-21.93f,-0.29f,4.10f,-27.84f,19.66f,0.00f,-0.00f,0.00f,54.33f,-3.40f,35.78f,0.28f,-44.36f,0.45f,24.92f,-0.51f,-9.08f,-0.00f,-0.00f,-0.00f,-51.59f,-2.75f,-23.36f,-0.40f,-59.56f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_132()
		{
			float[] value = {-0.60f,-31.64f,-0.11f,15.40f,-4.44f,-1.91f,-1.44f,7.38f,28.00f,-9.03f,11.2178f,39.0292f,59.0344f,-20.79f,7.94f,71.62f,-0.20f,-6.65f,1.57f,0.15f,32.17f,-0.16f,-3.75f,-12.14f,1.16f,-4.45f,-47.26f,6.55f,-0.15f,32.17f,0.16f,1.21f,-22.80f,-0.27f,4.16f,-26.44f,18.92f,0.00f,-0.00f,0.00f,53.07f,-3.74f,33.88f,0.28f,-43.23f,0.44f,24.16f,-0.53f,-8.67f,-0.00f,-0.00f,-0.00f,-51.39f,-2.73f,-21.51f,-0.39f,-58.28f,-0.58f,-30.86f,-0.33f,14.78f,-4.33f,-0.63f,-1.37f,6.70f,27.58f,-8.63f,12.2341f,39.3602f,59.7526f,-20.02f,6.34f,73.37f,1.23f,-9.79f,2.38f,0.17f,40.05f,-0.19f,-5.84f,-5.14f,2.38f,-3.85f,-43.40f,4.75f,-0.15f,31.47f,0.16f,1.19f,-23.19f,-0.26f,5.38f,-24.70f,18.00f,0.00f,-0.00f,0.00f,51.85f,-4.51f,33.09f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_133()
		{
			float[] value = {0.27f,-41.79f,0.43f,23.29f,-0.53f,-8.16f,-0.00f,-0.00f,-0.00f,-52.15f,-3.81f,-20.34f,-0.36f,-56.07f,-0.55f,-29.79f,-0.47f,13.79f,-4.87f,0.10f,-1.18f,6.27f,26.84f,-8.22f,13.1666f,39.5168f,60.3715f,-19.18f,4.92f,75.22f,2.43f,-13.58f,3.14f,0.19f,47.56f,-0.22f,-8.03f,1.41f,4.09f,-2.84f,-39.92f,4.65f,-0.15f,31.13f,0.16f,1.20f,-23.65f,-0.26f,5.44f,-23.42f,16.78f,0.00f,-0.00f,0.00f,52.13f,-5.34f,31.89f,0.27f,-40.72f,0.43f,22.64f,-0.52f,-7.79f,-0.00f,-0.00f,-0.00f,-51.91f,-4.81f,-19.66f,-0.34f,-53.82f,-0.53f,-28.66f,-0.57f,12.82f,-4.38f,0.95f,-1.18f,5.92f,26.34f,-7.91f,13.9865f,39.5462f,60.8782f,-18.19f,3.11f,77.26f,3.85f,-17.78f,3.15f,0.22f,54.11f,-0.26f,-7.15f,3.57f,3.93f,-1.88f,-36.76f,3.44f,-0.15f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_134()
		{
			float[] value = {31.25f,0.16f,1.20f,-24.30f,-0.24f,6.02f,-21.72f,16.07f,0.00f,-0.00f,0.00f,52.23f,-6.42f,30.07f,0.27f,-40.45f,0.42f,22.43f,-0.51f,-7.70f,-0.00f,-0.00f,-0.00f,-51.86f,-5.49f,-19.81f,-0.33f,-51.53f,-0.51f,-27.47f,-0.63f,11.87f,-4.28f,1.66f,-1.27f,5.94f,25.75f,-8.11f,14.6954f,39.4877f,61.2919f,-17.10f,1.34f,79.06f,4.92f,-21.93f,3.46f,0.25f,59.25f,-0.29f,-5.13f,0.94f,2.65f,-0.93f,-34.15f,1.90f,-0.15f,32.00f,0.16f,1.19f,-25.21f,-0.21f,6.74f,-19.90f,16.90f,0.00f,-0.00f,0.00f,52.07f,-8.74f,27.82f,0.27f,-40.55f,0.43f,22.29f,-0.50f,-7.75f,-0.00f,-0.00f,-0.00f,-51.54f,-4.61f,-20.54f,-0.32f,-50.08f,-0.49f,-26.52f,-0.65f,11.29f,-4.59f,2.49f,-1.52f,7.04f,25.12f,-9.52f,15.3243f,39.3455f,61.5863f,-15.72f,0.45f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_135()
		{
			float[] value = {80.87f,4.97f,-25.67f,4.72f,0.28f,62.47f,-0.32f,-3.53f,-5.48f,1.50f,-0.54f,-32.17f,1.42f,-0.15f,33.79f,0.16f,1.12f,-26.50f,-0.17f,6.86f,-17.46f,16.83f,0.00f,-0.00f,0.00f,51.63f,-10.52f,26.43f,0.27f,-40.68f,0.43f,22.04f,-0.47f,-7.81f,-0.00f,-0.00f,-0.00f,-51.63f,-4.58f,-20.73f,-0.31f,-48.68f,-0.48f,-25.66f,-0.64f,10.75f,-4.60f,2.92f,-1.77f,6.75f,24.15f,-9.75f,15.8459f,39.1522f,61.8186f,-14.41f,-0.26f,83.09f,4.82f,-29.54f,5.82f,0.29f,63.76f,-0.34f,-2.52f,-12.14f,0.84f,-0.07f,-30.69f,1.37f,-0.16f,36.22f,0.17f,0.92f,-27.88f,-0.14f,7.43f,-14.25f,16.81f,0.00f,-0.00f,0.00f,50.58f,-12.52f,24.54f,0.27f,-41.12f,0.43f,22.03f,-0.44f,-7.98f,-0.00f,-0.00f,-0.00f,-52.50f,-4.69f,-21.07f,-0.30f,-47.65f,-0.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_136()
		{
			float[] value = {-24.97f,-0.60f,10.36f,-5.49f,2.46f,-2.14f,6.39f,23.33f,-10.27f,16.2790f,38.9275f,62.0158f,-13.52f,-1.28f,86.10f,5.04f,-33.63f,6.79f,0.28f,63.26f,-0.33f,-1.92f,-17.27f,0.52f,0.57f,-29.82f,0.44f,-0.16f,38.84f,0.18f,0.58f,-28.92f,-0.14f,7.67f,-11.67f,16.70f,0.00f,-0.00f,0.00f,50.47f,-15.51f,22.57f,0.27f,-41.29f,0.43f,22.01f,-0.43f,-8.05f,-0.00f,-0.00f,-0.00f,-52.56f,-3.86f,-22.03f,-0.30f,-47.27f,-0.47f,-24.52f,-0.56f,10.24f,-5.83f,1.50f,-2.70f,6.65f,23.17f,-11.35f,16.6549f,38.7006f,62.1397f,-12.73f,-2.04f,90.16f,4.88f,-37.63f,7.42f,0.26f,60.70f,-0.31f,-1.44f,-20.50f,0.37f,0.20f,-29.20f,-2.06f,-0.17f,41.38f,0.19f,0.20f,-29.97f,-0.15f,7.53f,-9.15f,15.33f,0.00f,-0.00f,0.00f,50.75f,-18.37f,21.05f,0.27f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_137()
		{
			float[] value = {-42.02f,0.43f,22.24f,-0.42f,-8.31f,-0.00f,-0.00f,-0.00f,-52.80f,-3.07f,-23.24f,-0.30f,-46.73f,-0.47f,-24.05f,-0.50f,10.06f,-5.71f,0.53f,-3.46f,6.86f,22.21f,-12.52f,16.9905f,38.5304f,62.3380f,-12.42f,-4.06f,94.40f,6.57f,-41.82f,8.70f,0.23f,56.34f,-0.27f,-1.21f,-21.89f,0.33f,1.27f,-28.72f,-4.46f,-0.18f,42.95f,0.20f,-0.21f,-30.87f,-0.19f,9.01f,-8.24f,13.93f,0.00f,-0.00f,0.00f,50.93f,-20.21f,18.25f,0.28f,-43.43f,0.44f,22.69f,-0.42f,-8.83f,-0.00f,-0.00f,-0.00f,-52.68f,-1.23f,-23.74f,-0.30f,-47.29f,-0.47f,-23.98f,-0.44f,10.30f,-5.79f,-0.15f,-4.15f,7.43f,21.95f,-14.00f,17.3807f,38.4383f,62.5069f,-11.99f,-5.91f,99.14f,7.67f,-45.41f,9.51f,0.20f,49.94f,-0.23f,-1.41f,-20.47f,0.39f,2.14f,-27.90f,-7.03f,-0.18f,43.90f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_138()
		{
			float[] value = {0.20f,-0.74f,-31.85f,-0.27f,10.66f,-7.95f,12.43f,0.00f,-0.00f,0.00f,50.70f,-22.07f,15.36f,0.29f,-45.16f,0.46f,23.41f,-0.46f,-9.47f,-0.00f,-0.00f,-0.00f,-52.98f,1.43f,-24.42f,-0.31f,-48.44f,-0.48f,-24.16f,-0.39f,10.77f,-6.25f,-0.42f,-4.83f,8.63f,21.79f,-16.04f,17.7798f,38.3209f,62.4744f,-11.93f,-6.10f,104.22f,6.73f,-48.30f,10.92f,0.17f,41.78f,-0.19f,-1.89f,-15.20f,0.62f,0.77f,-27.43f,-10.55f,-0.18f,45.08f,0.21f,-1.29f,-32.96f,-0.37f,10.21f,-7.83f,10.66f,0.00f,-0.00f,0.00f,51.39f,-24.96f,13.49f,0.29f,-46.33f,0.46f,24.08f,-0.53f,-9.89f,-0.00f,-0.00f,-0.00f,-52.89f,4.25f,-24.72f,-0.32f,-51.14f,-0.50f,-24.86f,-0.35f,11.88f,-5.99f,-0.88f,-5.72f,9.27f,21.22f,-17.80f,18.1493f,38.1356f,62.3953f,-12.17f,-6.67f,109.20f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_139()
		{
			float[] value = {6.18f,-51.42f,13.19f,0.15f,33.75f,-0.16f,-1.58f,-7.67f,0.79f,-0.14f,-27.03f,-13.65f,-0.18f,45.76f,0.21f,-2.19f,-34.78f,-0.59f,9.62f,-7.79f,8.53f,0.00f,-0.00f,0.00f,52.82f,-28.23f,12.69f,0.30f,-47.11f,0.47f,24.75f,-0.59f,-10.16f,-0.00f,-0.00f,-0.00f,-52.43f,7.01f,-25.42f,-0.35f,-54.98f,-0.54f,-26.04f,-0.42f,13.47f,-5.01f,-1.80f,-6.67f,9.26f,20.71f,-19.04f,18.5327f,37.9266f,62.3306f,-12.51f,-8.20f,113.70f,7.00f,-55.31f,15.58f,0.14f,27.66f,-0.15f,0.12f,-2.99f,0.26f,0.43f,-26.59f,-15.53f,-0.18f,45.54f,0.21f,-3.55f,-36.99f,-1.01f,10.60f,-8.35f,7.13f,0.00f,-0.00f,0.00f,52.83f,-31.22f,11.79f,0.31f,-48.41f,0.48f,25.56f,-0.63f,-10.64f,-0.00f,-0.00f,-0.00f,-52.34f,9.70f,-28.06f,-0.39f,-58.94f,-0.59f,-27.24f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_140()
		{
			float[] value = {-0.53f,15.17f,-5.38f,-2.33f,-7.31f,10.43f,19.49f,-20.68f,18.8784f,37.7787f,62.1958f,-12.99f,-9.63f,117.48f,6.76f,-59.40f,13.81f,0.14f,24.32f,-0.14f,0.19f,-5.62f,0.25f,0.87f,-26.59f,-17.04f,-0.18f,45.32f,0.21f,-4.74f,-38.36f,-1.43f,11.58f,-10.51f,5.88f,0.00f,-0.00f,0.00f,52.43f,-33.27f,11.28f,0.31f,-48.77f,0.48f,25.99f,-0.63f,-10.77f,-0.00f,-0.00f,-0.00f,-52.74f,12.49f,-29.49f,-0.44f,-62.51f,-0.64f,-28.49f,-0.74f,16.71f,-5.73f,-1.47f,-7.54f,11.08f,18.32f,-21.65f,19.2678f,37.6863f,62.0194f,-12.92f,-10.81f,120.24f,6.79f,-62.39f,10.29f,0.14f,23.66f,-0.13f,-1.47f,-11.91f,0.66f,1.55f,-26.24f,-18.53f,-0.18f,45.51f,0.21f,-5.44f,-38.75f,-1.65f,12.12f,-11.46f,5.04f,0.00f,-0.00f,0.00f,52.62f,-34.98f,11.52f,0.31f,-49.70f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_141()
		{
			float[] value = {0.49f,26.59f,-0.63f,-11.13f,-0.00f,-0.00f,-0.00f,-53.09f,14.68f,-30.19f,-0.48f,-64.75f,-0.68f,-29.45f,-0.90f,17.67f,-5.66f,-1.57f,-7.85f,11.45f,18.12f,-22.37f,19.7018f,37.5851f,61.8244f,-12.64f,-11.59f,122.51f,7.17f,-64.15f,7.58f,0.14f,24.52f,-0.14f,-2.39f,-16.60f,0.66f,2.07f,-25.80f,-19.14f,-0.18f,45.84f,0.21f,-5.94f,-38.83f,-1.80f,11.77f,-10.84f,4.69f,0.00f,-0.00f,0.00f,53.93f,-37.60f,12.55f,0.32f,-50.36f,0.50f,27.07f,-0.61f,-11.39f,-0.00f,-0.00f,-0.00f,-52.30f,15.48f,-33.24f,-0.49f,-65.72f,-0.70f,-30.09f,-0.99f,18.08f,-4.85f,-2.86f,-8.46f,11.60f,18.16f,-23.08f,20.0708f,37.5055f,61.5065f,-12.57f,-12.25f,124.83f,7.18f,-65.74f,4.67f,0.14f,26.08f,-0.14f,-3.12f,-16.09f,0.79f,2.08f,-24.87f,-20.19f,-0.18f,45.28f,0.21f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_142()
		{
			float[] value = {-6.44f,-39.27f,-1.99f,12.25f,-10.68f,3.35f,0.00f,-0.00f,0.00f,54.61f,-38.86f,14.10f,0.32f,-50.55f,0.50f,27.35f,-0.57f,-11.47f,-0.00f,-0.00f,-0.00f,-53.01f,15.70f,-34.61f,-0.50f,-66.24f,-0.71f,-30.73f,-1.03f,18.29f,-4.70f,-3.85f,-8.69f,10.91f,18.04f,-22.80f,20.5723f,37.4686f,61.0863f,-12.60f,-12.67f,126.17f,9.09f,-66.64f,4.10f,0.14f,27.59f,-0.15f,-3.84f,-14.03f,1.05f,2.56f,-23.36f,-20.21f,-0.18f,43.88f,0.20f,-7.28f,-40.00f,-2.34f,12.49f,-11.24f,2.83f,0.00f,-0.00f,0.00f,55.22f,-39.37f,14.93f,0.32f,-50.40f,0.50f,27.47f,-0.53f,-11.41f,-0.00f,-0.00f,-0.00f,-53.75f,16.24f,-35.33f,-0.51f,-66.50f,-0.72f,-31.29f,-1.01f,18.40f,-4.79f,-4.21f,-8.59f,10.63f,18.52f,-22.43f,21.0716f,37.3708f,60.5259f,-13.03f,-13.06f,127.11f,11.43f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_143()
		{
			float[] value = {-66.90f,4.28f,0.15f,28.20f,-0.15f,-3.87f,-13.55f,1.09f,2.51f,-22.07f,-19.72f,-0.17f,42.67f,0.20f,-7.65f,-40.24f,-2.50f,11.43f,-13.00f,3.10f,0.00f,-0.00f,0.00f,56.24f,-39.43f,14.63f,0.32f,-50.42f,0.50f,27.67f,-0.48f,-11.43f,-0.00f,-0.00f,-0.00f,-53.28f,17.38f,-36.17f,-0.51f,-66.57f,-0.72f,-31.73f,-0.94f,18.43f,-4.22f,-3.09f,-8.56f,10.87f,18.22f,-22.74f,21.7041f,37.2631f,59.8828f,-12.75f,-13.89f,127.85f,13.51f,-66.34f,1.95f,0.15f,28.36f,-0.15f,-4.40f,-13.25f,1.22f,3.23f,-20.34f,-19.74f,-0.17f,41.39f,0.19f,-7.83f,-40.21f,-2.55f,11.18f,-14.29f,3.48f,0.00f,-0.00f,0.00f,57.22f,-38.88f,14.19f,0.32f,-50.87f,0.50f,27.95f,-0.44f,-11.61f,-0.00f,-0.00f,-0.00f,-52.86f,18.15f,-37.02f,-0.51f,-66.41f,-0.72f,-32.14f,-0.82f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_144()
		{
			float[] value = {18.38f,-3.81f,-2.43f,-8.56f,11.20f,17.85f,-23.03f,22.2574f,37.1836f,59.0979f,-13.35f,-14.19f,128.37f,13.97f,-65.77f,-0.36f,0.15f,28.31f,-0.15f,-4.57f,-14.28f,1.17f,2.71f,-18.82f,-19.96f,-0.17f,40.02f,0.19f,-7.68f,-39.98f,-2.48f,10.36f,-15.22f,3.59f,0.00f,-0.00f,0.00f,58.22f,-38.26f,14.76f,0.32f,-51.19f,0.50f,28.12f,-0.43f,-11.75f,-0.00f,-0.00f,-0.00f,-52.94f,17.99f,-37.94f,-0.49f,-65.74f,-0.70f,-32.47f,-0.62f,18.10f,-3.54f,-3.05f,-8.60f,11.05f,18.07f,-22.82f,22.8660f,37.0894f,58.2063f,-13.88f,-15.24f,128.92f,14.26f,-65.42f,-2.94f,0.15f,28.05f,-0.15f,-3.78f,-18.23f,0.74f,2.66f,-17.35f,-20.24f,-0.16f,38.12f,0.18f,-7.39f,-39.56f,-2.34f,10.77f,-17.00f,4.18f,0.00f,-0.00f,0.00f,58.00f,-37.59f,14.91f,0.33f,-51.50f,0.51f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_145()
		{
			float[] value = {28.37f,-0.38f,-11.88f,-0.00f,-0.00f,-0.00f,-53.55f,18.26f,-38.35f,-0.49f,-65.48f,-0.70f,-32.92f,-0.36f,18.04f,-3.92f,-3.29f,-8.59f,11.50f,17.96f,-23.02f,23.5245f,36.9678f,57.1564f,-14.36f,-16.08f,129.41f,17.06f,-64.73f,2.29f,0.14f,27.45f,-0.15f,-1.97f,-22.58f,0.37f,2.72f,-15.31f,-19.84f,-0.16f,35.65f,0.17f,-6.88f,-38.65f,-2.09f,11.24f,-19.16f,4.85f,0.00f,-0.00f,0.00f,56.86f,-36.25f,14.30f,0.33f,-52.01f,0.51f,28.67f,-0.34f,-12.10f,-0.00f,-0.00f,-0.00f,-54.20f,18.48f,-39.57f,-0.47f,-64.13f,-0.67f,-32.89f,-0.15f,17.47f,-4.30f,-3.31f,-8.61f,11.60f,17.94f,-23.15f,24.2698f,36.8855f,55.9054f,-14.34f,-17.34f,129.57f,20.37f,-63.58f,7.58f,0.14f,27.10f,-0.14f,-0.64f,-25.90f,0.30f,3.31f,-12.49f,-19.54f,-0.15f,32.46f,0.16f,-5.56f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_146()
		{
			float[] value = {-36.77f,-1.55f,11.89f,-21.18f,6.18f,0.00f,-0.00f,0.00f,56.05f,-35.26f,13.49f,0.33f,-52.23f,0.51f,28.74f,-0.34f,-12.19f,-0.00f,-0.00f,-0.00f,-53.94f,18.84f,-41.14f,-0.44f,-62.54f,-0.64f,-32.76f,0.07f,16.79f,-3.93f,-2.95f,-8.77f,11.47f,17.77f,-23.42f,25.0345f,36.8337f,54.4716f,-14.67f,-18.49f,129.80f,21.64f,-62.69f,11.34f,0.14f,27.79f,-0.15f,-0.03f,-27.84f,0.31f,3.57f,-9.54f,-19.04f,-0.15f,28.60f,0.15f,-3.59f,-33.55f,-0.88f,12.14f,-23.47f,7.48f,0.00f,-0.00f,0.00f,55.23f,-34.35f,12.91f,0.33f,-52.38f,0.52f,28.74f,-0.36f,-12.25f,-0.00f,-0.00f,-0.00f,-53.42f,19.10f,-42.74f,-0.42f,-61.29f,-0.62f,-32.65f,0.26f,16.28f,-3.85f,-2.64f,-8.96f,11.71f,17.99f,-24.00f,25.8538f,37.0016f,52.9102f,-15.18f,-20.24f,129.83f,23.31f,-63.04f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_147()
		{
			float[] value = {15.37f,0.15f,29.65f,-0.15f,-0.74f,-25.43f,0.30f,4.08f,-6.69f,-17.76f,-0.14f,24.15f,0.14f,-0.43f,-27.99f,-0.29f,13.64f,-26.49f,8.60f,0.00f,-0.00f,0.00f,53.96f,-32.24f,12.30f,0.33f,-52.61f,0.52f,28.78f,-0.38f,-12.34f,-0.00f,-0.00f,-0.00f,-53.39f,18.64f,-43.47f,-0.41f,-60.60f,-0.61f,-32.59f,0.38f,15.99f,-4.19f,-2.25f,-8.88f,11.63f,18.50f,-24.02f,26.5806f,37.2304f,51.2077f,-16.24f,-20.88f,130.61f,21.47f,-63.74f,17.03f,0.15f,31.59f,-0.16f,-1.51f,-20.29f,0.42f,3.32f,-4.05f,-17.04f,-0.14f,20.02f,0.13f,3.09f,-21.52f,-0.45f,12.63f,-29.47f,8.61f,0.00f,-0.00f,0.00f,53.48f,-30.69f,11.74f,0.33f,-52.67f,0.52f,28.75f,-0.40f,-12.36f,-0.00f,-0.00f,-0.00f,-52.22f,18.75f,-43.90f,-0.41f,-60.44f,-0.61f,-32.60f,0.43f,15.94f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_148()
		{
			float[] value = {-3.74f,-1.77f,-9.02f,11.68f,19.14f,-24.44f,27.2736f,37.5068f,49.3843f,-17.51f,-20.03f,131.14f,17.22f,-62.64f,17.65f,0.15f,32.35f,-0.16f,-1.58f,-15.64f,0.56f,1.03f,-1.63f,-16.35f,-0.13f,17.47f,0.12f,7.04f,-14.40f,-1.63f,10.71f,-31.04f,8.85f,0.00f,-0.00f,0.00f,52.74f,-29.62f,11.65f,0.34f,-52.75f,0.52f,28.77f,-0.41f,-12.39f,-0.00f,-0.00f,-0.00f,-51.37f,19.32f,-43.55f,-0.42f,-61.33f,-0.62f,-32.84f,0.43f,16.34f,-4.02f,-1.35f,-9.19f,12.12f,18.96f,-25.16f,27.8944f,37.9923f,47.5039f,-19.41f,-17.25f,130.74f,12.89f,-58.94f,22.59f,0.15f,31.90f,-0.16f,-0.75f,-13.02f,0.47f,-3.36f,-0.20f,-14.82f,-0.13f,17.58f,0.12f,11.14f,-7.27f,-3.91f,7.63f,-31.65f,9.35f,0.00f,-0.00f,0.00f,51.99f,-28.33f,12.01f,0.34f,-52.82f,0.52f,28.83f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_149()
		{
			float[] value = {-0.39f,-12.43f,-0.00f,-0.00f,-0.00f,-51.06f,19.34f,-42.33f,-0.44f,-62.24f,-0.64f,-32.98f,0.32f,16.73f,-4.42f,-1.16f,-9.21f,12.28f,19.39f,-25.46f,28.5293f,38.4813f,45.7656f,-20.46f,-15.67f,129.83f,10.24f,-55.63f,25.48f,0.15f,31.43f,-0.16f,-0.11f,-12.27f,0.33f,-6.04f,-0.07f,-12.37f,-0.14f,18.62f,0.12f,15.96f,-0.16f,-7.61f,5.89f,-32.42f,10.31f,0.00f,-0.00f,0.00f,52.09f,-27.10f,12.80f,0.33f,-52.66f,0.52f,28.79f,-0.39f,-12.36f,-0.00f,-0.00f,-0.00f,-50.35f,19.99f,-39.23f,-0.46f,-63.61f,-0.66f,-33.23f,0.22f,17.33f,-4.51f,-0.79f,-9.10f,12.55f,19.82f,-25.60f,29.1749f,38.9516f,44.1918f,-20.61f,-15.28f,129.04f,8.27f,-53.04f,24.85f,0.15f,31.30f,-0.16f,-0.05f,-12.84f,0.32f,-6.79f,-0.26f,-9.06f,-0.14f,19.22f,0.12f,20.40f,5.10f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_150()
		{
			float[] value = {-11.73f,5.75f,-32.94f,11.07f,0.00f,-0.00f,0.00f,52.38f,-25.65f,13.71f,0.34f,-52.79f,0.52f,28.83f,-0.39f,-12.41f,-0.00f,-0.00f,-0.00f,-50.18f,19.66f,-36.79f,-0.45f,-63.14f,-0.65f,-32.89f,0.04f,17.06f,-4.61f,-0.58f,-8.93f,12.93f,20.40f,-25.68f,29.7652f,39.2597f,42.7455f,-20.70f,-14.70f,127.88f,6.60f,-50.47f,24.25f,0.15f,31.15f,-0.16f,-0.24f,-14.35f,0.36f,-7.77f,-0.73f,-6.90f,-0.14f,20.24f,0.13f,19.52f,5.72f,-11.39f,5.81f,-33.29f,11.94f,0.00f,-0.00f,0.00f,52.93f,-23.80f,14.58f,0.34f,-52.84f,0.52f,28.82f,-0.40f,-12.43f,-0.00f,-0.00f,-0.00f,-50.31f,19.28f,-33.62f,-0.44f,-62.29f,-0.64f,-32.31f,-0.20f,16.61f,-4.34f,0.03f,-8.63f,12.83f,20.88f,-25.25f,30.2940f,39.4720f,41.4390f,-20.63f,-14.03f,127.01f,5.50f,-47.83f,24.96f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_151()
		{
			float[] value = {0.15f,30.98f,-0.16f,-0.24f,-15.57f,0.35f,-8.62f,-1.51f,-6.94f,-0.14f,22.18f,0.13f,16.99f,5.89f,-9.89f,5.16f,-33.11f,12.70f,0.00f,-0.00f,0.00f,54.53f,-23.19f,15.69f,0.33f,-52.03f,0.51f,28.49f,-0.41f,-12.10f,-0.00f,-0.00f,-0.00f,-49.90f,19.24f,-31.44f,-0.43f,-61.89f,-0.63f,-32.02f,-0.30f,16.40f,-3.59f,0.32f,-8.59f,12.61f,21.10f,-24.98f,30.7994f,39.6310f,40.2409f,-20.15f,-13.29f,126.92f,3.98f,-45.12f,24.83f,0.15f,30.70f,-0.15f,-0.23f,-16.63f,0.34f,-9.01f,-2.13f,-7.75f,-0.14f,24.68f,0.14f,14.88f,6.23f,-8.70f,5.26f,-32.46f,12.68f,0.00f,-0.00f,0.00f,55.46f,-21.98f,16.92f,0.33f,-51.49f,0.51f,28.19f,-0.45f,-11.87f,-0.00f,-0.00f,-0.00f,-51.06f,18.61f,-29.30f,-0.42f,-60.98f,-0.62f,-31.61f,-0.37f,15.98f,-4.02f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_152()
		{
			float[] value = {0.87f,-8.17f,12.64f,21.04f,-24.50f,31.2515f,39.7589f,39.1071f,-19.76f,-12.64f,127.21f,1.73f,-42.85f,22.83f,0.15f,30.47f,-0.15f,-0.36f,-17.46f,0.36f,-9.11f,-3.01f,-8.74f,-0.14f,27.31f,0.14f,13.47f,6.09f,-7.81f,4.68f,-31.93f,12.69f,0.00f,-0.00f,0.00f,57.10f,-21.67f,17.85f,0.32f,-50.63f,0.50f,27.80f,-0.46f,-11.51f,-0.00f,-0.00f,-0.00f,-51.79f,17.86f,-28.72f,-0.39f,-59.05f,-0.59f,-30.73f,-0.50f,15.08f,-4.00f,1.63f,-7.96f,12.81f,20.58f,-24.43f,31.6598f,39.8458f,38.0846f,-19.17f,-12.20f,127.57f,-0.07f,-40.90f,20.58f,0.15f,30.62f,-0.15f,-0.50f,-17.93f,0.37f,-8.55f,-3.94f,-9.98f,-0.15f,29.73f,0.15f,12.65f,5.03f,-7.10f,4.32f,-31.95f,12.70f,0.00f,-0.00f,0.00f,58.52f,-21.46f,18.35f,0.31f,-49.73f,0.49f,27.51f,-0.44f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_153()
		{
			float[] value = {-11.16f,-0.00f,-0.00f,-0.00f,-52.27f,18.20f,-26.62f,-0.39f,-58.45f,-0.58f,-30.18f,-0.62f,14.80f,-3.42f,3.01f,-7.80f,12.64f,20.28f,-24.26f,32.0174f,39.9494f,37.1567f,-18.68f,-11.61f,127.71f,-1.20f,-39.12f,20.11f,0.15f,30.95f,-0.16f,-0.48f,-17.91f,0.37f,-7.86f,-5.12f,-10.56f,-0.15f,32.23f,0.16f,12.26f,3.63f,-6.57f,3.48f,-31.14f,13.16f,0.00f,-0.00f,0.00f,59.83f,-21.88f,19.28f,0.31f,-49.56f,0.49f,27.50f,-0.43f,-11.09f,-0.00f,-0.00f,-0.00f,-51.83f,18.51f,-25.01f,-0.39f,-59.04f,-0.59f,-30.08f,-0.71f,15.05f,-2.85f,3.69f,-7.75f,12.81f,19.81f,-24.31f,32.2952f,40.0948f,36.3300f,-18.21f,-10.72f,127.97f,-2.23f,-37.38f,20.24f,0.15f,31.31f,-0.16f,-0.34f,-17.23f,0.35f,-7.37f,-6.36f,-10.98f,-0.16f,34.92f,0.17f,11.65f,2.59f,-6.02f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_154()
		{
			float[] value = {0.97f,-30.28f,13.35f,0.00f,-0.00f,0.00f,62.46f,-22.46f,19.48f,0.31f,-49.54f,0.49f,27.48f,-0.43f,-11.08f,-0.00f,-0.00f,-0.00f,-49.52f,18.74f,-24.49f,-0.40f,-59.50f,-0.60f,-29.93f,-0.78f,15.24f,-0.96f,4.45f,-7.98f,13.09f,19.13f,-24.65f,32.5257f,40.2469f,35.6342f,-17.31f,-10.63f,128.55f,-2.23f,-36.10f,20.52f,0.15f,32.00f,-0.16f,-0.16f,-16.40f,0.33f,-5.95f,-7.78f,-11.28f,-0.16f,37.36f,0.18f,10.36f,1.61f,-5.17f,1.60f,-29.13f,13.10f,0.00f,-0.00f,0.00f,62.41f,-21.11f,19.83f,0.32f,-49.95f,0.49f,27.59f,-0.44f,-11.24f,-0.00f,-0.00f,-0.00f,-50.00f,17.48f,-22.99f,-0.39f,-58.81f,-0.59f,-29.48f,-0.80f,14.94f,-1.64f,5.18f,-7.48f,13.31f,19.14f,-24.26f,32.6661f,40.3975f,34.9671f,-16.85f,-10.01f,129.14f,-3.04f,-35.10f,20.15f,0.15f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_155()
		{
			float[] value = {32.82f,-0.16f,0.02f,-15.18f,0.30f,-5.14f,-9.02f,-11.11f,-0.17f,39.32f,0.18f,8.67f,0.02f,-4.09f,1.22f,-27.71f,12.85f,0.00f,-0.00f,0.00f,62.91f,-20.09f,19.82f,0.32f,-49.96f,0.49f,27.55f,-0.46f,-11.24f,-0.00f,-0.00f,-0.00f,-50.27f,16.38f,-21.30f,-0.38f,-57.90f,-0.58f,-28.97f,-0.81f,14.55f,-2.20f,5.63f,-7.05f,13.82f,18.97f,-24.12f,32.7464f,40.4265f,34.4113f,-16.14f,-9.45f,129.85f,-3.50f,-34.42f,20.30f,0.15f,34.20f,-0.17f,0.13f,-14.46f,0.28f,-4.01f,-9.66f,-10.25f,-0.17f,40.09f,0.19f,5.82f,-3.95f,-2.38f,0.88f,-25.87f,12.56f,0.00f,-0.00f,0.00f,63.43f,-19.29f,19.76f,0.32f,-49.97f,0.49f,27.34f,-0.52f,-11.24f,-0.00f,-0.00f,-0.00f,-50.32f,14.99f,-20.47f,-0.37f,-56.80f,-0.56f,-28.27f,-0.80f,14.09f,-2.44f,5.73f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_156()
		{
			float[] value = {-6.77f,13.96f,18.52f,-23.78f,32.7435f,40.4539f,33.8623f,-15.54f,-8.68f,130.67f,-4.25f,-34.13f,19.32f,0.16f,36.19f,-0.17f,0.29f,-13.02f,0.24f,-3.24f,-10.45f,-9.14f,-0.17f,39.88f,0.19f,2.59f,-9.71f,-0.89f,0.27f,-24.07f,12.28f,0.00f,-0.00f,0.00f,64.04f,-18.10f,19.22f,0.32f,-50.04f,0.49f,26.99f,-0.60f,-11.26f,-0.00f,-0.00f,-0.00f,-50.62f,13.78f,-20.21f,-0.36f,-56.15f,-0.55f,-27.74f,-0.77f,13.83f,-2.26f,6.02f,-6.73f,13.78f,17.86f,-23.57f,32.6426f,40.2819f,33.4597f,-14.88f,-7.99f,131.79f,-4.40f,-34.34f,20.69f,0.16f,38.46f,-0.18f,0.54f,-12.13f,0.18f,-1.99f,-12.08f,-7.01f,-0.17f,39.23f,0.18f,0.70f,-15.95f,-0.30f,-0.19f,-22.20f,11.94f,0.00f,-0.00f,0.00f,64.79f,-16.90f,18.49f,0.32f,-49.94f,0.49f,26.65f,-0.64f,-11.23f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_157()
		{
			float[] value = {-0.00f,-0.00f,-0.00f,-51.09f,12.95f,-18.93f,-0.37f,-56.40f,-0.56f,-27.57f,-0.74f,13.96f,-2.47f,6.13f,-6.56f,14.04f,17.46f,-23.51f,32.4531f,40.1653f,33.1296f,-14.47f,-7.09f,132.74f,-4.72f,-34.87f,21.26f,0.17f,40.90f,-0.19f,0.95f,-10.08f,0.04f,-0.93f,-13.97f,-4.61f,-0.16f,38.43f,0.18f,0.53f,-21.29f,-0.23f,-0.90f,-20.20f,11.70f,0.00f,-0.00f,0.00f,65.73f,-15.58f,17.65f,0.31f,-49.77f,0.49f,26.43f,-0.65f,-11.16f,-0.00f,-0.00f,-0.00f,-51.61f,12.00f,-18.11f,-0.37f,-56.93f,-0.56f,-27.58f,-0.73f,14.20f,-2.75f,5.86f,-6.39f,14.22f,17.11f,-23.30f,32.1680f,40.1628f,32.8488f,-13.96f,-6.58f,133.79f,-5.04f,-35.63f,19.95f,0.18f,43.51f,-0.20f,1.54f,-8.00f,-0.17f,-0.31f,-15.50f,-4.08f,-0.16f,37.82f,0.18f,0.75f,-24.14f,-0.20f,-1.92f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_158()
		{
			float[] value = {-17.26f,11.63f,0.00f,-0.00f,0.00f,67.25f,-15.57f,18.32f,0.31f,-49.22f,0.49f,26.17f,-0.64f,-10.95f,-0.00f,-0.00f,-0.00f,-51.46f,10.66f,-18.87f,-0.38f,-57.68f,-0.57f,-27.74f,-0.74f,14.52f,-2.59f,4.42f,-6.50f,14.31f,16.45f,-23.02f,31.7956f,40.1679f,32.6524f,-13.29f,-6.45f,134.69f,-4.38f,-36.74f,20.77f,0.18f,46.05f,-0.21f,2.29f,-5.33f,-0.52f,-0.07f,-16.39f,-4.96f,-0.16f,37.61f,0.18f,0.78f,-24.64f,-0.20f,-1.83f,-14.59f,11.81f,0.00f,-0.00f,0.00f,67.81f,-15.48f,19.34f,0.31f,-48.91f,0.48f,26.20f,-0.63f,-10.82f,-0.00f,-0.00f,-0.00f,-52.03f,9.04f,-20.58f,-0.38f,-58.08f,-0.58f,-27.84f,-0.75f,14.70f,-2.61f,2.88f,-6.71f,13.36f,16.26f,-22.27f,31.3349f,40.1856f,32.5772f,-12.63f,-6.72f,135.56f,-2.91f,-38.64f,22.63f,0.19f,48.87f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_159()
		{
			float[] value = {-0.23f,3.45f,-1.54f,-1.17f,0.58f,-16.45f,-5.21f,-0.16f,36.91f,0.17f,0.77f,-24.17f,-0.21f,-0.70f,-13.40f,12.10f,0.00f,-0.00f,0.00f,67.51f,-14.83f,19.27f,0.31f,-48.67f,0.48f,26.38f,-0.59f,-10.72f,-0.00f,-0.00f,-0.00f,-53.35f,8.94f,-20.71f,-0.40f,-59.15f,-0.59f,-28.28f,-0.80f,15.15f,-3.39f,2.38f,-6.64f,12.94f,16.11f,-21.83f,30.8149f,40.0558f,32.5726f,-12.38f,-7.20f,136.33f,-0.98f,-41.35f,25.18f,0.21f,52.16f,-0.24f,5.03f,2.68f,-2.21f,1.55f,-16.01f,-4.42f,-0.16f,35.45f,0.17f,0.78f,-25.82f,-0.19f,0.12f,-12.31f,12.38f,0.00f,-0.00f,0.00f,67.58f,-14.17f,19.41f,0.31f,-48.49f,0.48f,26.56f,-0.55f,-10.65f,-0.00f,-0.00f,-0.00f,-54.33f,8.52f,-21.72f,-0.41f,-60.05f,-0.60f,-28.81f,-0.85f,15.52f,-4.41f,1.11f,-6.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_160()
		{
			float[] value = {12.86f,16.28f,-21.22f,30.2205f,39.8031f,32.6488f,-12.94f,-8.14f,136.99f,1.15f,-45.27f,28.40f,0.23f,55.59f,-0.27f,6.84f,7.19f,-3.64f,2.42f,-16.44f,-3.27f,-0.15f,34.03f,0.17f,0.57f,-28.06f,-0.18f,0.54f,-12.14f,12.55f,0.00f,-0.00f,0.00f,67.75f,-13.29f,19.56f,0.31f,-48.58f,0.48f,26.87f,-0.49f,-10.69f,-0.00f,-0.00f,-0.00f,-54.90f,8.32f,-23.17f,-0.42f,-61.39f,-0.62f,-29.64f,-0.90f,16.09f,-5.19f,-0.29f,-6.37f,12.26f,16.19f,-20.28f,29.5983f,39.4419f,32.8170f,-13.35f,-9.85f,137.59f,4.98f,-49.81f,32.50f,0.25f,59.01f,-0.29f,8.79f,11.75f,-5.42f,3.71f,-18.08f,-3.01f,-0.15f,33.55f,0.16f,0.12f,-30.40f,-0.21f,2.10f,-12.09f,12.19f,0.00f,-0.00f,0.00f,67.23f,-12.04f,20.56f,0.31f,-48.92f,0.48f,27.28f,-0.41f,-10.83f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_161()
		{
			float[] value = {-0.00f,-0.00f,-56.00f,7.39f,-24.71f,-0.44f,-62.28f,-0.64f,-30.42f,-0.88f,16.48f,-6.28f,-2.08f,-6.09f,11.48f,16.04f,-18.78f,28.9816f,39.0178f,32.9108f,-14.26f,-10.77f,137.52f,9.28f,-52.99f,37.75f,0.27f,61.58f,-0.32f,10.60f,14.11f,-7.01f,3.67f,-20.06f,-2.59f,-0.16f,34.42f,0.17f,-0.55f,-33.58f,-0.32f,2.87f,-11.70f,12.41f,0.00f,-0.00f,0.00f,66.14f,-11.29f,22.22f,0.31f,-49.15f,0.49f,27.62f,-0.32f,-10.94f,-0.00f,-0.00f,-0.00f,-56.70f,6.16f,-26.64f,-0.44f,-62.46f,-0.64f,-31.02f,-0.78f,16.57f,-7.49f,-4.01f,-5.87f,10.79f,15.95f,-17.42f,28.4403f,38.6305f,32.9908f,-15.06f,-11.66f,136.72f,14.98f,-54.70f,43.76f,0.28f,62.47f,-0.32f,10.57f,10.95f,-6.47f,3.78f,-22.32f,-2.13f,-0.16f,35.87f,0.17f,-1.23f,-36.12f,-0.49f,3.43f,-11.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_162()
		{
			float[] value = {13.43f,0.00f,-0.00f,0.00f,65.20f,-10.40f,23.72f,0.31f,-49.19f,0.49f,27.90f,-0.21f,-10.97f,-0.00f,-0.00f,-0.00f,-56.46f,4.86f,-28.98f,-0.43f,-61.72f,-0.63f,-31.33f,-0.60f,16.26f,-8.24f,-5.52f,-5.75f,10.22f,16.26f,-16.48f,28.0119f,38.4446f,33.0100f,-15.66f,-13.06f,135.86f,20.53f,-55.37f,48.59f,0.26f,60.84f,-0.31f,6.09f,1.79f,-2.65f,4.38f,-24.70f,-1.67f,-0.16f,37.18f,0.18f,-1.54f,-37.06f,-0.58f,4.70f,-11.96f,14.10f,0.00f,-0.00f,0.00f,63.97f,-8.40f,25.17f,0.31f,-49.05f,0.49f,28.06f,-0.11f,-10.94f,-0.00f,-0.00f,-0.00f,-56.37f,3.29f,-30.85f,-0.41f,-60.21f,-0.61f,-31.38f,-0.37f,15.63f,-8.56f,-6.62f,-5.38f,8.72f,16.57f,-14.76f,27.5615f,38.4135f,32.8219f,-16.72f,-13.27f,136.01f,21.08f,-55.09f,49.27f,0.23f,56.31f,-0.27f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_163()
		{
			float[] value = {1.65f,-7.56f,-0.24f,3.11f,-26.25f,-1.74f,-0.16f,38.15f,0.18f,-1.75f,-37.50f,-0.64f,4.25f,-11.61f,13.93f,0.00f,-0.00f,0.00f,62.73f,-7.09f,27.46f,0.31f,-48.42f,0.48f,27.95f,-0.03f,-10.70f,-0.00f,-0.00f,-0.00f,-56.10f,2.01f,-32.83f,-0.39f,-58.66f,-0.59f,-31.33f,-0.13f,14.99f,-8.95f,-8.32f,-5.08f,7.70f,16.81f,-13.24f,27.1924f,38.4340f,32.5575f,-17.15f,-14.26f,136.92f,20.88f,-55.10f,46.87f,0.20f,50.37f,-0.23f,-0.52f,-13.32f,0.39f,2.48f,-27.32f,-2.29f,-0.16f,38.25f,0.18f,-2.00f,-37.85f,-0.72f,4.99f,-11.51f,13.27f,0.00f,-0.00f,0.00f,61.00f,-5.66f,29.36f,0.30f,-47.35f,0.47f,27.70f,0.05f,-10.30f,-0.00f,-0.00f,-0.00f,-56.47f,0.77f,-35.08f,-0.37f,-56.37f,-0.56f,-30.88f,0.04f,14.03f,-9.13f,-9.99f,-4.65f,6.43f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_164()
		{
			float[] value = {17.66f,-11.59f,26.8863f,38.4632f,32.1981f,-17.32f,-15.28f,138.34f,20.36f,-55.14f,43.88f,0.18f,44.09f,-0.20f,-1.45f,-16.14f,0.51f,1.65f,-27.72f,-3.64f,-0.16f,37.66f,0.18f,-2.05f,-37.88f,-0.73f,5.54f,-11.63f,13.26f,0.00f,-0.00f,0.00f,59.88f,-4.78f,30.01f,0.29f,-45.78f,0.46f,27.13f,0.08f,-9.70f,-0.00f,-0.00f,-0.00f,-56.58f,0.96f,-37.57f,-0.35f,-54.11f,-0.53f,-30.36f,0.20f,13.10f,-9.10f,-11.16f,-4.53f,5.25f,18.11f,-10.69f,26.6578f,38.5147f,31.7380f,-17.16f,-16.47f,140.16f,19.81f,-55.25f,40.76f,0.16f,38.21f,-0.18f,-1.81f,-18.20f,0.50f,1.10f,-27.49f,-4.87f,-0.16f,36.63f,0.17f,-2.14f,-37.87f,-0.76f,6.68f,-12.00f,13.55f,0.00f,-0.00f,0.00f,58.78f,-3.17f,29.50f,0.28f,-44.26f,0.45f,26.52f,0.08f,-9.12f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_165()
		{
			float[] value = {-0.00f,-57.08f,1.54f,-40.29f,-0.33f,-51.84f,-0.51f,-29.75f,0.32f,12.17f,-9.43f,-11.60f,-4.49f,4.52f,18.12f,-10.21f,26.5240f,38.5079f,31.1817f,-16.32f,-17.84f,142.88f,19.39f,-55.67f,38.65f,0.15f,33.28f,-0.16f,-1.91f,-20.00f,0.46f,1.14f,-26.51f,-6.27f,-0.16f,35.34f,0.17f,-2.41f,-37.96f,-0.84f,7.08f,-12.58f,13.81f,0.00f,-0.00f,0.00f,59.32f,-2.48f,29.83f,0.27f,-41.58f,0.43f,25.32f,0.04f,-8.13f,-0.00f,-0.00f,-0.00f,-56.16f,2.49f,-44.19f,-0.31f,-49.80f,-0.49f,-29.10f,0.39f,11.35f,-8.91f,-12.05f,-4.71f,4.03f,18.48f,-10.43f,26.4147f,38.4718f,30.5179f,-15.37f,-19.09f,145.89f,17.92f,-56.61f,34.96f,0.15f,29.60f,-0.15f,-1.87f,-21.99f,0.39f,1.31f,-25.22f,-7.24f,-0.15f,33.90f,0.16f,-2.91f,-38.10f,-0.99f,7.68f,-13.19f,14.32f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_166()
		{
			float[] value = {0.00f,-0.00f,0.00f,59.09f,-1.46f,30.32f,0.27f,-40.28f,0.42f,24.65f,-0.02f,-7.66f,-0.00f,-0.00f,-0.00f,-55.56f,3.88f,-47.61f,-0.30f,-48.16f,-0.48f,-28.59f,0.47f,10.71f,-8.75f,-12.31f,-4.99f,3.24f,18.61f,-10.62f,26.3540f,38.4308f,29.7643f,-14.16f,-20.28f,148.96f,16.93f,-57.60f,32.92f,0.14f,27.47f,-0.15f,-1.52f,-24.23f,0.31f,1.72f,-23.57f,-8.17f,-0.15f,32.20f,0.16f,-3.44f,-38.26f,-1.15f,8.49f,-13.74f,15.51f,0.00f,-0.00f,0.00f,58.04f,-0.17f,30.11f,0.27f,-40.40f,0.42f,24.58f,-0.08f,-7.70f,-0.00f,-0.00f,-0.00f,-55.17f,5.42f,-51.13f,-0.30f,-46.76f,-0.47f,-28.17f,0.56f,10.18f,-9.47f,-12.37f,-5.43f,3.48f,18.20f,-11.44f,26.3278f,38.3991f,28.9415f,-12.84f,-21.19f,152.06f,16.85f,-57.84f,36.06f,0.14f,26.90f,-0.14f,-0.41f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_167()
		{
			float[] value = {-27.38f,0.29f,2.30f,-21.55f,-8.55f,-0.15f,30.39f,0.15f,-3.88f,-38.01f,-1.26f,9.88f,-15.03f,16.16f,0.00f,-0.00f,0.00f,56.62f,2.41f,30.15f,0.27f,-40.01f,0.42f,24.22f,-0.16f,-7.55f,-0.00f,-0.00f,-0.00f,-55.49f,5.79f,-53.33f,-0.29f,-45.09f,-0.46f,-27.52f,0.55f,9.53f,-10.15f,-12.04f,-5.27f,3.42f,18.61f,-11.28f,26.2832f,38.3676f,28.0625f,-11.31f,-22.60f,155.40f,16.57f,-58.46f,38.78f,0.14f,27.60f,-0.15f,0.76f,-29.87f,0.40f,3.16f,-19.91f,-9.61f,-0.15f,28.56f,0.15f,-4.05f,-37.49f,-1.28f,11.17f,-17.76f,17.25f,0.00f,-0.00f,0.00f,55.92f,5.31f,29.82f,0.27f,-39.98f,0.42f,24.09f,-0.21f,-7.53f,-0.00f,-0.00f,-0.00f,-55.20f,6.82f,-54.20f,-0.28f,-43.31f,-0.44f,-26.71f,0.47f,8.85f,-10.10f,-10.91f,-5.02f,3.24f,19.23f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_168()
		{
			float[] value = {-11.15f,26.2289f,38.2572f,27.0304f,-10.07f,-23.82f,158.21f,16.62f,-58.55f,42.28f,0.15f,29.39f,-0.15f,1.47f,-31.41f,0.52f,3.46f,-18.01f,-11.08f,-0.14f,26.61f,0.14f,-3.79f,-36.75f,-1.17f,10.72f,-19.92f,19.05f,0.00f,-0.00f,0.00f,56.33f,6.89f,29.05f,0.27f,-40.28f,0.42f,24.16f,-0.23f,-7.63f,-0.00f,-0.00f,-0.00f,-53.41f,8.21f,-53.35f,-0.28f,-42.49f,-0.44f,-26.28f,0.40f,8.53f,-9.64f,-10.66f,-5.11f,4.18f,20.26f,-11.98f,26.2533f,38.1557f,25.8334f,-9.12f,-24.41f,160.30f,17.39f,-57.59f,47.23f,0.15f,32.00f,-0.16f,1.57f,-31.85f,0.54f,3.79f,-15.16f,-11.27f,-0.14f,23.99f,0.14f,-3.43f,-35.73f,-1.04f,10.44f,-21.28f,20.98f,0.00f,-0.00f,0.00f,55.86f,8.37f,28.39f,0.27f,-40.30f,0.42f,23.91f,-0.32f,-7.63f,-0.00f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_169()
		{
			float[] value = {-52.01f,8.82f,-51.19f,-0.27f,-42.05f,-0.43f,-25.94f,0.30f,8.35f,-9.76f,-10.77f,-5.11f,4.91f,20.95f,-12.43f,26.2671f,38.1671f,24.5054f,-8.22f,-24.62f,162.32f,17.82f,-56.39f,50.97f,0.16f,34.51f,-0.17f,1.13f,-30.81f,0.45f,4.11f,-11.83f,-11.71f,-0.14f,20.97f,0.13f,-2.47f,-33.65f,-0.75f,9.45f,-22.98f,23.03f,0.00f,-0.00f,0.00f,55.84f,9.30f,28.25f,0.27f,-40.29f,0.42f,23.48f,-0.42f,-7.62f,-0.00f,-0.00f,-0.00f,-49.63f,9.00f,-49.96f,-0.27f,-41.63f,-0.43f,-25.53f,0.14f,8.17f,-9.19f,-10.54f,-5.47f,4.90f,20.68f,-12.48f,26.1875f,38.1702f,23.1836f,-6.95f,-24.90f,165.32f,16.71f,-56.23f,49.58f,0.16f,36.34f,-0.17f,0.30f,-28.43f,0.33f,4.25f,-8.86f,-12.69f,-0.14f,18.94f,0.12f,-0.80f,-30.50f,-0.42f,8.46f,-25.28f,24.80f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_170()
		{
			float[] value = {-0.00f,0.00f,55.08f,9.85f,27.28f,0.27f,-41.69f,0.43f,23.63f,-0.50f,-8.12f,-0.00f,-0.00f,-0.00f,-46.94f,9.57f,-49.01f,-0.27f,-41.00f,-0.43f,-25.02f,0.01f,7.92f,-8.63f,-9.82f,-5.29f,5.06f,19.84f,-12.25f,26.0563f,38.2059f,21.8355f,-5.21f,-24.92f,169.47f,13.43f,-56.20f,44.16f,0.16f,37.75f,-0.18f,-0.43f,-25.40f,0.29f,4.05f,-6.71f,-14.10f,-0.14f,19.30f,0.12f,0.65f,-27.22f,-0.28f,6.99f,-26.80f,25.95f,0.00f,-0.00f,0.00f,53.65f,9.00f,26.82f,0.28f,-43.14f,0.44f,23.86f,-0.55f,-8.64f,-0.00f,-0.00f,-0.00f,-43.88f,10.13f,-48.17f,-0.27f,-40.37f,-0.42f,-24.65f,-0.04f,7.69f,-7.45f,-9.87f,-4.69f,4.94f,19.16f,-11.00f,25.9384f,38.3904f,20.4835f,-2.70f,-24.84f,174.55f,9.73f,-55.25f,37.80f,0.16f,38.49f,-0.18f,-1.07f,-22.30f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_171()
		{
			float[] value = {0.34f,3.88f,-5.93f,-15.19f,-0.14f,22.41f,0.13f,2.17f,-22.59f,-0.35f,6.63f,-27.49f,26.74f,0.00f,-0.00f,0.00f,51.33f,7.51f,27.22f,0.28f,-43.23f,0.44f,23.64f,-0.55f,-8.68f,-0.00f,-0.00f,-0.00f,-41.32f,9.46f,-48.11f,-0.26f,-39.88f,-0.42f,-24.29f,-0.10f,7.51f,-6.72f,-10.50f,-3.67f,4.37f,18.81f,-8.72f,25.7911f,38.6536f,19.0948f,-0.31f,-24.09f,179.36f,5.76f,-52.97f,31.02f,0.16f,38.12f,-0.18f,-1.07f,-21.67f,0.35f,2.50f,-6.24f,-15.40f,-0.15f,28.07f,0.15f,3.51f,-15.92f,-0.79f,5.58f,-28.48f,27.72f,0.00f,-0.00f,0.00f,50.31f,5.84f,27.66f,0.27f,-42.36f,0.44f,23.05f,-0.53f,-8.38f,-0.00f,-0.00f,-0.00f,-37.81f,8.48f,-48.46f,-0.26f,-39.26f,-0.42f,-23.79f,-0.20f,7.29f,-5.10f,-10.88f,-2.32f,4.03f,19.00f,-6.07f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_172()
		{
			float[] value = {25.5588f,38.8839f,17.6704f,2.20f,-22.96f,-175.61f,2.43f,-50.17f,24.55f,0.16f,37.45f,-0.18f,-0.80f,-22.60f,0.33f,-0.06f,-7.35f,-14.80f,-0.16f,34.51f,0.17f,2.50f,-7.27f,-1.00f,4.53f,-28.46f,27.98f,0.00f,-0.00f,0.00f,49.20f,4.39f,29.20f,0.27f,-41.40f,0.43f,22.33f,-0.48f,-8.07f,-0.00f,-0.00f,-0.00f,-35.28f,5.93f,-49.02f,-0.26f,-37.98f,-0.41f,-23.01f,-0.27f,6.85f,-3.54f,-12.32f,-0.57f,3.87f,19.87f,-2.71f,25.2727f,38.9832f,16.3996f,4.34f,-21.88f,-170.65f,-0.22f,-47.76f,19.05f,0.16f,37.21f,-0.18f,-0.69f,-23.12f,0.32f,-3.07f,-9.46f,-13.40f,-0.17f,40.16f,0.19f,-3.03f,2.75f,1.32f,4.47f,-28.51f,29.15f,0.00f,-0.00f,0.00f,47.46f,3.04f,30.50f,0.27f,-40.47f,0.42f,21.63f,-0.41f,-7.77f,-0.00f,-0.00f,-0.00f,-34.08f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_173()
		{
			float[] value = {3.99f,-48.59f,-0.26f,-37.32f,-0.41f,-22.53f,-0.31f,6.62f,-2.76f,-12.73f,1.12f,3.13f,20.29f,0.69f,24.9763f,39.0951f,15.2730f,6.29f,-20.82f,-166.00f,-1.43f,-45.42f,15.91f,0.16f,37.01f,-0.18f,-0.67f,-23.25f,0.31f,-5.55f,-11.15f,-12.71f,-0.18f,44.83f,0.21f,-5.60f,6.98f,3.02f,3.10f,-29.32f,30.40f,0.00f,-0.00f,0.00f,47.40f,1.62f,30.86f,0.27f,-40.28f,0.42f,21.33f,-0.35f,-7.72f,-0.00f,-0.00f,-0.00f,-31.53f,1.81f,-47.79f,-0.25f,-36.81f,-0.40f,-21.99f,-0.38f,6.46f,-0.22f,-12.55f,2.66f,1.88f,20.08f,4.01f,24.5693f,39.1959f,14.2938f,8.37f,-19.76f,-160.04f,-3.09f,-43.37f,12.77f,0.16f,36.07f,-0.17f,-0.70f,-22.80f,0.32f,-8.29f,-12.34f,-13.84f,-0.19f,48.81f,0.22f,-1.88f,5.06f,0.87f,2.13f,-30.33f,30.66f,0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_174()
		{
			float[] value = {0.00f,46.65f,0.09f,30.70f,0.27f,-40.30f,0.42f,21.12f,-0.29f,-7.75f,-0.00f,-0.00f,-0.00f,-29.75f,0.43f,-44.57f,-0.25f,-36.99f,-0.40f,-21.81f,-0.43f,6.52f,1.81f,-11.59f,3.95f,0.19f,20.06f,7.09f,24.2157f,39.4038f,13.4040f,10.80f,-17.83f,-153.51f,-4.06f,-40.71f,8.70f,0.16f,34.72f,-0.17f,-0.72f,-22.20f,0.33f,-10.03f,-13.40f,-13.91f,-0.21f,51.49f,0.24f,1.69f,4.60f,-1.01f,2.04f,-29.72f,30.77f,0.00f,-0.00f,0.00f,44.87f,-2.77f,30.81f,0.27f,-40.31f,0.42f,20.86f,-0.19f,-7.79f,-0.00f,-0.00f,-0.00f,-29.22f,-1.53f,-40.26f,-0.25f,-37.05f,-0.40f,-21.56f,-0.46f,6.54f,2.98f,-11.46f,4.69f,-1.76f,20.61f,9.30f,23.8030f,39.6137f,12.6299f,13.09f,-15.59f,-145.72f,-5.29f,-38.30f,4.04f,0.15f,33.49f,-0.16f,-0.66f,-21.34f,0.34f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_175()
		{
			float[] value = {-11.43f,-14.31f,-13.54f,-0.21f,52.40f,0.24f,4.45f,5.93f,-2.56f,2.16f,-29.43f,30.77f,0.00f,-0.00f,0.00f,42.01f,-5.98f,29.52f,0.27f,-41.22f,0.43f,20.93f,-0.07f,-8.14f,-0.00f,-0.00f,-0.00f,-29.04f,-2.68f,-36.11f,-0.26f,-37.58f,-0.41f,-21.54f,-0.48f,6.72f,2.66f,-10.57f,4.73f,-2.35f,21.10f,9.73f,23.4455f,39.7703f,11.9335f,15.41f,-12.74f,-137.31f,-5.67f,-36.46f,-0.48f,0.15f,33.00f,-0.16f,-0.46f,-20.49f,0.34f,-11.83f,-15.10f,-12.17f,-0.21f,52.13f,0.24f,5.57f,5.67f,-3.15f,1.92f,-29.34f,30.25f,0.00f,-0.00f,0.00f,39.55f,-9.04f,26.15f,0.28f,-42.63f,0.44f,21.27f,0.02f,-8.68f,-0.00f,-0.00f,-0.00f,-28.00f,-3.74f,-32.59f,-0.26f,-38.62f,-0.41f,-21.72f,-0.49f,7.08f,2.78f,-9.43f,4.13f,-2.11f,20.60f,8.63f,23.1333f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_176()
		{
			float[] value = {39.8347f,11.4253f,17.29f,-9.70f,-127.89f,-6.88f,-35.48f,-6.57f,0.15f,33.16f,-0.16f,-0.23f,-19.62f,0.33f,-12.32f,-16.10f,-10.56f,-0.21f,51.54f,0.24f,6.04f,3.76f,-3.22f,0.96f,-28.39f,29.27f,0.00f,-0.00f,0.00f,36.71f,-13.23f,21.19f,0.28f,-44.03f,0.45f,21.69f,0.07f,-9.21f,-0.00f,-0.00f,-0.00f,-27.44f,-4.93f,-29.05f,-0.26f,-39.83f,-0.42f,-21.94f,-0.49f,7.50f,1.77f,-9.21f,2.79f,-0.65f,20.31f,5.45f,22.8629f,39.8676f,10.9472f,18.87f,-5.93f,-117.98f,-7.73f,-34.77f,-12.82f,0.15f,33.79f,-0.16f,0.01f,-19.06f,0.31f,-12.04f,-16.70f,-8.74f,-0.20f,50.71f,0.24f,6.28f,1.50f,-3.10f,1.35f,-27.70f,28.70f,0.00f,-0.00f,0.00f,32.34f,-16.62f,14.42f,0.29f,-46.01f,0.46f,22.26f,0.15f,-9.98f,-0.00f,-0.00f,-0.00f,-27.26f,-4.89f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_177()
		{
			float[] value = {-24.68f,-0.27f,-41.73f,-0.43f,-22.44f,-0.48f,8.18f,-0.50f,-7.69f,1.09f,1.84f,19.19f,1.06f,22.6253f,39.9662f,10.5168f,19.88f,-1.64f,-107.59f,-7.78f,-34.17f,-16.26f,0.16f,34.69f,-0.17f,0.48f,-18.14f,0.25f,-11.53f,-17.35f,-7.21f,-0.20f,49.73f,0.23f,6.27f,1.21f,-3.07f,1.53f,-26.33f,27.12f,0.00f,-0.00f,0.00f,27.80f,-20.30f,7.62f,0.30f,-47.45f,0.47f,22.59f,0.26f,-10.57f,-0.00f,-0.00f,-0.00f,-26.73f,-5.76f,-20.69f,-0.28f,-43.80f,-0.45f,-22.99f,-0.46f,8.95f,-2.42f,-7.06f,-0.85f,3.82f,18.42f,-3.60f,22.4190f,40.1017f,10.0906f,19.99f,3.02f,-97.09f,-6.96f,-33.15f,-15.67f,0.16f,35.69f,-0.17f,0.60f,-17.67f,0.23f,-10.44f,-17.86f,-5.35f,-0.20f,48.96f,0.23f,6.26f,2.09f,-3.17f,1.81f,-25.16f,26.25f,0.00f,-0.00f,0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_178()
		{
			float[] value = {22.91f,-24.21f,-0.26f,0.30f,-48.12f,0.48f,22.72f,0.33f,-10.86f,-0.00f,-0.00f,-0.00f,-25.39f,-5.53f,-16.40f,-0.30f,-46.72f,-0.47f,-23.78f,-0.43f,10.08f,-4.61f,-5.91f,-3.18f,6.66f,17.25f,-9.52f,22.2604f,40.1602f,9.6862f,19.11f,7.46f,-86.71f,-5.55f,-31.54f,-11.23f,0.16f,36.27f,-0.17f,0.25f,-18.19f,0.28f,-9.50f,-18.17f,-3.76f,-0.20f,49.01f,0.23f,5.68f,1.04f,-2.78f,2.48f,-24.73f,24.16f,0.00f,-0.00f,0.00f,18.40f,-24.72f,-7.84f,0.32f,-49.87f,0.49f,23.07f,0.52f,-11.61f,0.00f,-0.00f,-0.00f,-23.99f,-5.90f,-10.07f,-0.31f,-48.64f,-0.48f,-24.21f,-0.38f,10.85f,-6.15f,-3.63f,-4.97f,9.05f,15.57f,-14.46f,22.1453f,40.1918f,9.4551f,17.97f,10.40f,-76.58f,-5.30f,-29.50f,-5.00f,0.16f,36.03f,-0.17f,-0.21f,-19.22f,0.33f,-10.49f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_179()
		{
			float[] value = {-19.32f,-3.30f,-0.20f,50.21f,0.23f,5.32f,0.48f,-2.55f,2.00f,-24.06f,21.89f,0.00f,-0.00f,0.00f,14.42f,-25.21f,-15.27f,0.32f,-51.29f,0.50f,23.34f,0.69f,-12.24f,-0.00f,-0.00f,-0.00f,-23.03f,-7.22f,-4.06f,-0.31f,-49.73f,-0.49f,-24.30f,-0.29f,11.32f,-7.34f,-2.28f,-6.79f,10.94f,14.06f,-19.13f,22.0239f,40.1912f,9.2419f,16.26f,13.90f,-65.62f,-4.69f,-27.98f,-0.38f,0.16f,35.72f,-0.17f,-0.54f,-20.20f,0.35f,-10.96f,-20.28f,-3.87f,-0.21f,51.78f,0.24f,5.26f,0.96f,-2.56f,1.17f,-23.69f,18.64f,0.00f,-0.00f,0.00f,11.67f,-25.92f,-22.75f,0.33f,-51.93f,0.51f,23.42f,0.81f,-12.54f,-0.00f,-0.00f,-0.00f,-21.24f,-8.67f,1.68f,-0.32f,-51.00f,-0.50f,-24.43f,-0.18f,11.88f,-7.67f,-1.08f,-8.66f,12.79f,12.55f,-23.84f,22.0302f,40.1115f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_180()
		{
			float[] value = {9.0939f,14.14f,17.01f,-53.59f,-4.89f,-27.13f,1.95f,0.16f,35.34f,-0.17f,-0.71f,-21.11f,0.35f,-12.25f,-20.83f,-5.58f,-0.22f,53.69f,0.25f,4.68f,0.64f,-2.26f,0.24f,-23.25f,15.43f,0.00f,-0.00f,0.00f,8.76f,-26.75f,-31.35f,0.33f,-52.33f,0.51f,23.40f,0.97f,-12.75f,-0.00f,-0.00f,-0.00f,-20.15f,-9.84f,6.68f,-0.33f,-52.45f,-0.52f,-24.67f,-0.08f,12.51f,-8.51f,0.27f,-10.66f,14.87f,10.85f,-29.03f,22.0498f,40.0369f,8.9058f,11.40f,19.81f,-41.61f,-4.68f,-26.48f,4.36f,0.16f,34.82f,-0.17f,-0.77f,-22.17f,0.33f,-13.12f,-21.77f,-6.41f,-0.23f,56.06f,0.27f,4.36f,0.76f,-2.11f,0.54f,-22.98f,12.56f,0.00f,-0.00f,0.00f,5.70f,-26.98f,-39.94f,0.34f,-52.97f,0.52f,23.53f,1.05f,-13.04f,-0.00f,-0.00f,-0.00f,-20.73f,-10.60f,12.98f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_181()
		{
			float[] value = {-0.35f,-54.27f,-0.53f,-25.11f,-0.04f,13.29f,-9.87f,1.54f,-12.23f,16.92f,9.59f,-33.54f,22.0744f,39.9496f,8.6681f,8.11f,21.95f,-29.90f,-4.44f,-26.01f,6.13f,0.16f,34.28f,-0.17f,-0.81f,-22.97f,0.32f,-13.84f,-22.96f,-6.65f,-0.25f,58.67f,0.29f,4.33f,0.85f,-2.09f,1.59f,-22.52f,10.22f,0.00f,-0.00f,0.00f,2.96f,-26.99f,-47.79f,0.34f,-53.79f,0.53f,23.73f,1.11f,-13.40f,-0.00f,-0.00f,-0.00f,-22.27f,-11.46f,19.61f,-0.37f,-56.30f,-0.56f,-25.60f,-0.01f,14.18f,-11.49f,2.40f,-13.57f,18.76f,8.74f,-37.44f,22.1145f,39.8982f,8.4670f,4.78f,23.31f,-18.20f,-4.76f,-25.70f,6.59f,0.15f,33.72f,-0.16f,-0.85f,-23.28f,0.32f,-14.98f,-24.00f,-7.16f,-0.26f,60.98f,0.31f,4.72f,0.67f,-2.25f,1.48f,-22.12f,8.10f,0.00f,-0.00f,0.00f,2.11f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_182()
		{
			float[] value = {-27.15f,-56.18f,0.35f,-54.95f,0.54f,24.00f,1.20f,-13.92f,-0.00f,-0.00f,-0.00f,-23.42f,-12.18f,25.79f,-0.39f,-58.71f,-0.59f,-26.19f,-0.00f,15.24f,-12.13f,2.82f,-14.75f,20.44f,8.37f,-40.81f,22.1444f,39.9035f,8.3134f,1.43f,23.89f,-6.71f,-5.37f,-25.11f,6.13f,0.15f,33.00f,-0.16f,-0.88f,-23.37f,0.32f,-16.11f,-24.87f,-7.59f,-0.28f,62.98f,0.33f,5.41f,0.60f,-2.56f,1.28f,-21.55f,5.92f,0.00f,-0.00f,0.00f,2.49f,-27.93f,-64.57f,0.37f,-56.36f,0.56f,24.40f,1.19f,-14.53f,-0.00f,-0.00f,-0.00f,-25.18f,-12.91f,31.83f,-0.43f,-61.68f,-0.63f,-26.85f,0.01f,16.59f,-12.27f,3.00f,-15.56f,20.90f,7.83f,-42.55f,22.1339f,39.9090f,8.1595f,-1.79f,24.01f,3.73f,-5.79f,-24.66f,5.83f,0.15f,32.31f,-0.16f,-0.91f,-23.55f,0.32f,-17.01f,-26.42f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_183()
		{
			float[] value = {-7.45f,-0.30f,64.77f,0.35f,6.00f,0.41f,-2.80f,1.34f,-20.58f,4.58f,0.00f,-0.00f,0.00f,4.01f,-29.80f,-72.46f,0.39f,-58.39f,0.58f,25.00f,1.10f,-15.41f,-0.00f,-0.00f,-0.00f,-26.95f,-14.50f,37.21f,-0.47f,-64.39f,-0.68f,-27.44f,-0.02f,17.83f,-12.70f,2.39f,-16.17f,21.06f,7.61f,-43.37f,22.0240f,39.8951f,8.0295f,-4.92f,23.79f,13.30f,-5.77f,-24.46f,6.18f,0.15f,31.83f,-0.16f,-0.93f,-23.67f,0.32f,-17.65f,-28.52f,-7.29f,-0.32f,66.14f,0.37f,6.22f,-0.52f,-2.80f,1.19f,-19.80f,4.42f,0.00f,-0.00f,0.00f,6.37f,-32.42f,-79.82f,0.42f,-61.00f,0.62f,25.73f,0.99f,-16.56f,-0.00f,-0.00f,-0.00f,-28.38f,-15.53f,41.38f,-0.55f,-68.36f,-0.76f,-28.27f,-0.13f,19.67f,-12.92f,1.95f,-16.26f,21.01f,7.67f,-43.26f,21.8457f,39.8550f,8.0101f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_184()
		{
			float[] value = {-8.11f,22.92f,21.97f,-5.28f,-24.12f,6.91f,0.15f,31.67f,-0.16f,-0.90f,-24.52f,0.30f,-17.72f,-30.76f,-7.08f,-0.32f,66.75f,0.38f,6.06f,-2.55f,-2.51f,1.75f,-19.05f,4.26f,0.00f,-0.00f,0.00f,9.10f,-35.01f,-84.12f,0.46f,-63.92f,0.67f,26.59f,0.71f,-17.83f,-0.00f,-0.00f,-0.00f,-29.93f,-16.87f,45.60f,-0.68f,-72.62f,-0.90f,-29.10f,-0.31f,21.66f,-12.72f,0.90f,-15.72f,19.59f,8.44f,-41.05f,21.7194f,39.6710f,7.9317f,-10.47f,22.10f,29.49f,-5.66f,-24.00f,7.07f,0.15f,31.75f,-0.16f,-0.72f,-26.15f,0.28f,-19.17f,-33.60f,-8.39f,-0.32f,66.49f,0.37f,5.42f,-6.03f,-1.91f,1.65f,-19.01f,5.13f,0.00f,-0.00f,0.00f,11.89f,-37.02f,-86.85f,0.53f,-67.45f,0.74f,27.65f,0.29f,-19.36f,-0.00f,-0.00f,-0.00f,-31.46f,-17.36f,48.75f,-0.93f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_185()
		{
			float[] value = {-77.44f,-1.16f,-29.89f,-0.55f,23.96f,-12.22f,0.55f,-14.89f,17.99f,8.84f,-38.55f,21.5138f,39.3800f,7.9104f,-13.08f,21.00f,36.47f,-5.39f,-24.34f,7.47f,0.15f,32.29f,-0.16f,-0.29f,-28.40f,0.28f,-20.34f,-36.77f,-10.11f,-0.30f,64.93f,0.35f,4.12f,-11.21f,-1.07f,2.53f,-19.08f,5.71f,0.00f,-0.00f,0.00f,14.97f,-38.74f,-86.67f,0.62f,-70.98f,0.84f,28.69f,-0.16f,-20.92f,-0.00f,-0.00f,-0.00f,-33.06f,-18.57f,50.94f,-1.49f,-82.19f,-1.73f,-30.51f,-0.80f,26.24f,-11.97f,-0.62f,-13.70f,15.74f,9.80f,-34.73f,21.2717f,39.0405f,8.0445f,-14.57f,20.01f,42.05f,-5.55f,-24.30f,7.67f,0.15f,32.78f,-0.16f,0.41f,-30.80f,0.36f,-21.55f,-39.92f,-10.47f,-0.27f,61.83f,0.32f,2.75f,-16.20f,-0.49f,3.42f,-18.49f,6.60f,0.00f,-0.00f,0.00f,17.77f,-39.98f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_186()
		{
			float[] value = {-84.07f,0.76f,-74.41f,0.98f,29.84f,-0.67f,-22.42f,-0.00f,-0.00f,-0.00f,-35.06f,-20.20f,52.21f,-3.43f,-86.60f,-3.67f,-31.14f,-1.16f,28.34f,-12.71f,-2.40f,-12.34f,14.00f,11.15f,-30.74f,21.1117f,38.7274f,8.3147f,-15.85f,18.99f,47.13f,-5.39f,-24.20f,8.08f,0.15f,33.18f,-0.16f,1.13f,-32.96f,0.49f,-22.62f,-42.74f,-10.79f,-0.24f,56.97f,0.28f,1.82f,-20.06f,-0.24f,3.32f,-18.40f,8.03f,0.00f,-0.00f,0.00f,20.68f,-40.22f,-80.92f,0.94f,-77.47f,1.17f,30.99f,-1.11f,-23.76f,-0.00f,-0.00f,-0.00f,-35.38f,-20.47f,51.97f,-167.03f,-89.10f,-167.28f,-31.73f,-1.55f,30.36f,-12.15f,-3.45f,-10.98f,12.12f,11.91f,-26.93f,21.0080f,38.4352f,8.7134f,-16.89f,18.24f,51.33f,-5.04f,-24.15f,8.82f,0.15f,33.56f,-0.16f,1.74f,-34.78f,0.65f,-23.62f,-45.65f,-10.97f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_187()
		{
			float[] value = {-0.20f,50.78f,0.24f,1.30f,-23.17f,-0.15f,2.99f,-18.36f,9.25f,0.00f,-0.00f,0.00f,23.77f,-39.62f,-76.07f,1.19f,-80.20f,1.43f,32.02f,-1.41f,-24.99f,-0.00f,-0.00f,-0.00f,-34.73f,-20.93f,51.41f,-177.28f,-85.72f,-177.54f,-32.31f,-1.89f,31.94f,-11.60f,-4.55f,-9.45f,10.24f,12.73f,-22.88f,20.9963f,38.2245f,9.1848f,-17.52f,17.92f,54.91f,-4.94f,-23.87f,8.95f,0.15f,33.47f,-0.16f,2.01f,-35.55f,0.74f,-24.44f,-48.37f,-10.07f,-0.18f,43.84f,0.20f,1.23f,-24.42f,-0.16f,1.57f,-18.31f,10.69f,0.00f,-0.00f,0.00f,26.81f,-38.86f,-71.11f,1.45f,-81.96f,1.69f,32.92f,-1.55f,-25.79f,-0.00f,-0.00f,-0.00f,-32.91f,-21.07f,49.74f,-178.28f,-83.24f,-178.54f,-32.90f,-2.13f,33.09f,-10.95f,-5.19f,-8.25f,9.00f,12.82f,-19.81f,21.0559f,38.1626f,9.8399f,-17.98f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_188()
		{
			float[] value = {17.29f,58.34f,-4.64f,-22.82f,8.83f,0.15f,32.55f,-0.16f,2.21f,-35.68f,0.79f,-23.03f,-50.03f,-5.08f,-0.16f,37.42f,0.18f,1.34f,-23.93f,-0.21f,0.10f,-18.20f,11.62f,0.00f,-0.00f,0.00f,29.50f,-37.15f,-65.82f,1.80f,-83.52f,2.04f,33.66f,-1.59f,-26.53f,-0.00f,-0.00f,-0.00f,-30.54f,-20.68f,47.51f,-178.61f,-81.60f,-178.88f,-33.41f,-2.24f,33.84f,-10.21f,-6.39f,-7.12f,7.81f,13.76f,-16.95f,21.1956f,38.1785f,10.6053f,-18.35f,16.23f,62.18f,-4.25f,-21.15f,7.59f,0.15f,30.96f,-0.16f,2.47f,-35.45f,0.84f,-20.73f,-50.41f,1.18f,-0.15f,33.71f,0.16f,1.60f,-22.52f,-0.28f,-0.40f,-18.09f,11.65f,0.00f,-0.00f,0.00f,30.75f,-34.85f,-59.88f,2.11f,-84.48f,2.35f,34.26f,-1.54f,-27.00f,-0.00f,-0.00f,-0.00f,-29.40f,-19.69f,45.45f,-178.84f,-79.92f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_189()
		{
			float[] value = {-179.11f,-33.84f,-2.29f,34.64f,-10.52f,-7.28f,-6.19f,7.33f,15.06f,-14.99f,21.3842f,38.2577f,11.3985f,-18.42f,14.98f,66.13f,-3.67f,-19.15f,5.25f,0.15f,29.27f,-0.15f,2.36f,-34.70f,0.78f,-19.35f,-49.94f,4.17f,-0.15f,34.16f,0.17f,1.71f,-21.23f,-0.33f,-1.39f,-17.94f,11.30f,0.00f,-0.00f,0.00f,32.12f,-32.63f,-54.03f,2.24f,-84.79f,2.48f,34.71f,-1.44f,-27.18f,-0.00f,-0.00f,-0.00f,-28.03f,-17.90f,42.35f,-178.96f,-78.77f,-179.23f,-34.21f,-2.28f,35.20f,-10.32f,-7.08f,-5.67f,7.41f,15.07f,-14.12f,21.5486f,38.2354f,12.2489f,-18.51f,13.82f,69.93f,-2.38f,-17.72f,3.43f,0.15f,28.07f,-0.15f,2.04f,-34.00f,0.69f,-18.61f,-49.12f,3.91f,-0.16f,37.30f,0.18f,1.64f,-22.61f,-0.26f,-2.65f,-18.37f,10.98f,0.00f,-0.00f,0.00f,33.45f,-30.66f,-48.65f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_190()
		{
			float[] value = {2.04f,-84.30f,2.29f,35.02f,-1.30f,-26.96f,-0.00f,-0.00f,-0.00f,-26.86f,-15.67f,38.81f,-178.96f,-78.70f,-179.24f,-34.61f,-2.18f,35.25f,-10.13f,-6.56f,-5.39f,7.95f,15.58f,-14.12f,21.6982f,38.1567f,13.1877f,-18.95f,12.24f,73.20f,-0.42f,-17.04f,1.62f,0.14f,27.58f,-0.15f,2.06f,-33.63f,0.68f,-17.09f,-48.53f,3.08f,-0.17f,40.38f,0.19f,1.42f,-24.76f,-0.17f,-3.36f,-18.90f,10.48f,0.00f,-0.00f,0.00f,34.79f,-28.55f,-42.39f,1.84f,-83.66f,2.08f,35.23f,-1.16f,-26.68f,-0.00f,-0.00f,-0.00f,-26.07f,-13.60f,34.74f,-178.92f,-79.14f,-179.19f,-35.00f,-2.04f,35.06f,-9.71f,-6.59f,-5.24f,8.70f,16.53f,-14.43f,21.8841f,38.0928f,14.1571f,-19.31f,10.46f,75.51f,1.88f,-16.27f,0.04f,0.14f,27.39f,-0.14f,2.11f,-33.42f,0.69f,-14.89f,-47.89f,2.35f,-0.17f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_191()
		{
			float[] value = {42.52f,0.20f,1.11f,-26.64f,-0.12f,-2.85f,-19.14f,9.82f,0.00f,-0.00f,0.00f,35.77f,-26.38f,-35.11f,1.44f,-81.88f,1.68f,35.29f,-0.99f,-25.83f,-0.00f,-0.00f,-0.00f,-26.17f,-12.01f,30.65f,-178.82f,-80.07f,-179.09f,-35.36f,-1.87f,34.64f,-9.50f,-6.56f,-4.85f,9.02f,16.45f,-13.85f,22.0630f,38.0408f,15.1097f,-19.46f,9.13f,76.87f,4.10f,-15.64f,0.43f,0.14f,27.23f,-0.14f,1.96f,-32.67f,0.63f,-12.63f,-47.31f,2.00f,-0.18f,44.03f,0.20f,0.80f,-28.37f,-0.10f,-2.66f,-19.81f,10.10f,0.00f,-0.00f,0.00f,36.57f,-23.93f,-28.34f,1.17f,-79.97f,1.40f,35.22f,-0.85f,-24.92f,-0.00f,-0.00f,-0.00f,-26.31f,-9.62f,26.05f,-178.61f,-81.59f,-178.88f,-35.76f,-1.63f,33.94f,-8.99f,-6.39f,-4.59f,8.99f,16.70f,-13.44f,22.2688f,38.0244f,16.0233f,-19.42f,8.21f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_192()
		{
			float[] value = {77.52f,5.62f,-14.90f,1.24f,0.14f,27.30f,-0.14f,1.91f,-31.78f,0.59f,-10.65f,-46.76f,1.51f,-0.18f,45.10f,0.21f,0.57f,-29.65f,-0.10f,-3.18f,-20.81f,10.97f,0.00f,-0.00f,0.00f,37.92f,-21.24f,-22.24f,1.01f,-78.42f,1.24f,35.10f,-0.76f,-24.17f,-0.00f,-0.00f,-0.00f,-26.05f,-6.28f,21.00f,-178.23f,-83.42f,-178.49f,-36.12f,-1.37f,33.10f,-8.11f,-6.23f,-4.49f,9.07f,17.08f,-13.38f,22.4867f,38.0640f,16.9091f,-19.47f,7.56f,78.07f,6.90f,-14.70f,3.38f,0.15f,27.98f,-0.15f,1.61f,-30.53f,0.51f,-9.02f,-46.16f,0.80f,-0.18f,45.64f,0.21f,0.44f,-30.55f,-0.10f,-3.72f,-20.89f,11.00f,0.00f,-0.00f,0.00f,39.85f,-19.26f,-15.19f,0.83f,-75.89f,1.06f,34.88f,-0.62f,-22.97f,-0.00f,-0.00f,-0.00f,-26.44f,-4.79f,15.88f,-176.56f,-86.61f,-176.82f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_193()
		{
			float[] value = {-36.42f,-1.05f,31.58f,-7.48f,-7.06f,-4.34f,9.54f,17.54f,-13.15f,22.6807f,38.1492f,17.7339f,-19.69f,6.88f,78.67f,8.00f,-15.23f,4.34f,0.15f,29.62f,-0.15f,1.08f,-28.78f,0.41f,-7.40f,-45.41f,0.19f,-0.18f,45.39f,0.21f,0.34f,-31.04f,-0.11f,-3.60f,-21.26f,10.87f,0.00f,-0.00f,0.00f,41.61f,-16.94f,-9.07f,0.67f,-72.40f,0.89f,34.41f,-0.46f,-21.31f,-0.00f,-0.00f,-0.00f,-27.25f,-3.28f,10.36f,-37.17f,-89.66f,-37.42f,-36.59f,-0.73f,29.84f,-7.33f,-7.53f,-4.16f,9.97f,17.89f,-12.95f,22.8953f,38.3277f,18.5113f,-19.75f,5.63f,79.27f,9.45f,-16.35f,4.60f,0.15f,32.47f,-0.16f,0.57f,-27.37f,0.34f,-5.50f,-43.87f,-0.77f,-0.18f,44.23f,0.20f,0.35f,-31.00f,-0.12f,-2.98f,-21.52f,10.84f,0.00f,-0.00f,0.00f,43.55f,-14.94f,-3.92f,0.55f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_194()
		{
			float[] value = {-68.42f,0.77f,33.73f,-0.32f,-19.43f,-0.00f,-0.00f,-0.00f,-28.50f,-1.18f,4.79f,-2.76f,-85.77f,-3.00f,-36.61f,-0.40f,27.95f,-6.90f,-7.66f,-4.05f,9.94f,18.04f,-12.71f,23.1065f,38.5377f,19.2780f,-19.80f,4.41f,79.65f,10.87f,-18.31f,5.14f,0.16f,36.49f,-0.17f,-0.37f,-25.37f,0.29f,-3.26f,-42.12f,-0.87f,-0.17f,42.47f,0.20f,0.37f,-30.72f,-0.13f,-2.20f,-21.47f,11.37f,0.00f,-0.00f,0.00f,45.71f,-13.44f,0.27f,0.47f,-64.42f,0.68f,32.90f,-0.20f,-17.59f,-0.00f,-0.00f,-0.00f,-30.24f,1.00f,-0.34f,-1.44f,-81.88f,-1.68f,-36.41f,-0.16f,26.08f,-6.49f,-8.06f,-4.15f,9.88f,18.15f,-12.74f,23.2970f,38.7691f,19.9520f,-19.45f,3.28f,79.96f,11.95f,-20.61f,4.37f,0.17f,41.32f,-0.19f,-2.00f,-22.12f,0.37f,-1.09f,-40.07f,-0.71f,-0.17f,40.50f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_195()
		{
			float[] value = {0.19f,0.42f,-30.04f,-0.14f,-0.63f,-20.25f,11.50f,0.00f,-0.00f,0.00f,47.11f,-11.58f,4.40f,0.41f,-60.65f,0.61f,31.95f,-0.12f,-15.89f,-0.00f,-0.00f,-0.00f,-33.58f,2.28f,-4.46f,-0.95f,-77.65f,-1.18f,-36.11f,0.14f,24.06f,-7.11f,-9.07f,-4.08f,9.81f,18.39f,-12.35f,23.5309f,38.9767f,20.4916f,-18.70f,2.65f,80.46f,11.72f,-22.88f,2.41f,0.19f,46.28f,-0.21f,-3.20f,-19.13f,0.59f,0.15f,-37.68f,-0.58f,-0.16f,38.73f,0.18f,0.44f,-29.70f,-0.15f,0.24f,-19.28f,11.85f,0.00f,-0.00f,0.00f,48.71f,-9.45f,6.69f,0.38f,-57.57f,0.57f,31.09f,-0.07f,-14.53f,-0.00f,-0.00f,-0.00f,-36.29f,3.66f,-9.44f,-0.66f,-72.10f,-0.88f,-35.37f,0.40f,21.42f,-7.84f,-8.89f,-4.05f,10.00f,18.37f,-12.45f,23.7560f,39.1287f,20.9569f,-18.26f,2.00f,80.96f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_196()
		{
			float[] value = {11.07f,-25.47f,0.65f,0.20f,51.01f,-0.24f,-3.91f,-16.72f,0.83f,1.14f,-35.76f,-0.84f,-0.16f,37.09f,0.18f,0.44f,-29.60f,-0.16f,0.10f,-18.62f,12.05f,0.00f,-0.00f,0.00f,50.93f,-9.40f,10.80f,0.33f,-52.61f,0.52f,29.45f,-0.06f,-12.40f,-0.00f,-0.00f,-0.00f,-38.15f,4.90f,-13.66f,-0.51f,-66.38f,-0.72f,-34.32f,0.61f,18.74f,-7.11f,-8.84f,-4.18f,10.00f,19.14f,-12.85f,23.9996f,39.2795f,21.3769f,-18.03f,1.56f,81.13f,10.04f,-28.08f,-0.46f,0.22f,55.04f,-0.26f,-4.53f,-14.31f,1.12f,1.59f,-34.20f,-1.97f,-0.16f,35.51f,0.17f,0.52f,-29.57f,-0.16f,0.59f,-18.85f,12.56f,0.00f,-0.00f,0.00f,52.54f,-8.68f,14.20f,0.31f,-48.34f,0.48f,27.81f,-0.09f,-10.66f,-0.00f,-0.00f,-0.00f,-40.65f,6.08f,-17.24f,-0.42f,-61.19f,-0.62f,-33.10f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_197()
		{
			float[] value = {0.74f,16.36f,-6.45f,-7.89f,-3.97f,9.96f,20.14f,-12.87f,24.2490f,39.3907f,21.7810f,-17.91f,1.18f,80.62f,9.26f,-30.21f,-0.27f,0.24f,58.05f,-0.28f,-4.81f,-13.16f,1.28f,2.11f,-32.72f,-3.39f,-0.15f,33.94f,0.16f,0.60f,-30.01f,-0.16f,1.09f,-19.38f,13.62f,0.00f,-0.00f,0.00f,54.25f,-7.98f,17.66f,0.29f,-44.73f,0.45f,26.17f,-0.19f,-9.25f,-0.00f,-0.00f,-0.00f,-42.79f,7.03f,-20.94f,-0.37f,-56.45f,-0.56f,-31.74f,0.76f,14.25f,-5.45f,-6.64f,-3.80f,9.70f,20.68f,-12.77f,24.4782f,39.4721f,22.1146f,-17.60f,1.69f,79.26f,7.80f,-31.57f,0.83f,0.25f,59.69f,-0.30f,-5.00f,-12.96f,1.33f,2.01f,-31.69f,-4.03f,-0.15f,32.95f,0.16f,0.71f,-30.44f,-0.14f,1.89f,-19.39f,15.71f,0.00f,-0.00f,0.00f,55.18f,-7.43f,21.10f,0.27f,-41.52f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_198()
		{
			float[] value = {0.43f,24.51f,-0.30f,-8.06f,-0.00f,-0.00f,-0.00f,-45.94f,7.41f,-24.56f,-0.32f,-51.12f,-0.50f,-30.00f,0.78f,11.99f,-5.59f,-5.26f,-3.76f,9.57f,20.67f,-13.01f,24.6045f,39.4789f,22.4041f,-17.39f,2.54f,77.73f,6.57f,-32.87f,2.59f,0.26f,60.09f,-0.30f,-4.54f,-14.09f,1.14f,1.73f,-31.59f,-4.19f,-0.15f,33.03f,0.16f,0.84f,-30.65f,-0.13f,1.76f,-19.43f,17.95f,0.00f,-0.00f,0.00f,56.80f,-7.05f,23.87f,0.26f,-38.80f,0.41f,22.89f,-0.40f,-7.11f,-0.00f,-0.00f,-0.00f,-48.26f,7.61f,-28.58f,-0.30f,-46.77f,-0.47f,-28.33f,0.70f,10.21f,-5.63f,-4.51f,-3.84f,10.01f,20.90f,-13.64f,24.7111f,39.3893f,22.6047f,-16.88f,3.83f,76.76f,4.96f,-33.78f,3.96f,0.25f,59.29f,-0.29f,-3.12f,-17.13f,0.69f,0.74f,-31.91f,-4.09f,-0.16f,34.34f,0.17f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_199()
		{
			float[] value = {0.91f,-31.23f,-0.10f,0.17f,-19.42f,18.98f,0.00f,-0.00f,0.00f,59.53f,-6.17f,25.70f,0.25f,-36.08f,0.40f,21.18f,-0.45f,-6.23f,-0.00f,-0.00f,-0.00f,-49.67f,7.18f,-32.69f,-0.28f,-43.13f,-0.44f,-26.63f,0.47f,8.78f,-4.74f,-4.11f,-3.94f,10.00f,21.18f,-13.84f,24.8620f,39.1769f,22.7840f,-16.29f,4.54f,76.59f,3.81f,-34.35f,4.52f,0.24f,57.71f,-0.28f,-1.81f,-20.55f,0.40f,-0.19f,-32.05f,-4.68f,-0.16f,36.08f,0.17f,0.95f,-32.62f,-0.06f,-0.29f,-19.43f,20.01f,0.00f,-0.00f,0.00f,61.54f,-5.85f,26.12f,0.24f,-33.21f,0.38f,19.45f,-0.44f,-5.36f,-0.00f,-0.00f,-0.00f,-51.96f,7.93f,-35.33f,-0.27f,-40.07f,-0.42f,-24.95f,0.20f,7.63f,-4.97f,-2.80f,-4.04f,10.80f,21.07f,-14.84f,25.0501f,38.9849f,22.9234f,-16.06f,4.56f,77.78f,3.11f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_200()
		{
			float[] value = {-35.20f,4.10f,0.23f,55.61f,-0.27f,-1.07f,-23.10f,0.30f,-0.89f,-31.95f,-6.12f,-0.16f,37.53f,0.18f,0.91f,-34.29f,-0.02f,-0.09f,-19.17f,19.64f,0.00f,-0.00f,0.00f,62.97f,-6.22f,27.05f,0.23f,-30.07f,0.37f,17.53f,-0.39f,-4.48f,-0.00f,-0.00f,-0.00f,-54.84f,8.44f,-36.66f,-0.26f,-37.58f,-0.41f,-23.25f,-0.11f,6.73f,-5.25f,-1.85f,-4.15f,11.32f,21.30f,-15.71f,25.2661f,38.8408f,23.0518f,-16.34f,4.05f,79.68f,2.91f,-36.35f,3.33f,0.21f,53.25f,-0.25f,-0.60f,-25.28f,0.27f,-1.02f,-31.90f,-7.55f,-0.16f,38.39f,0.18f,0.75f,-35.33f,-0.03f,-0.01f,-19.20f,18.56f,0.00f,-0.00f,0.00f,64.82f,-7.49f,30.16f,0.23f,-26.75f,0.35f,15.30f,-0.26f,-3.65f,-0.00f,-0.00f,-0.00f,-57.00f,8.71f,-38.03f,-0.25f,-35.30f,-0.40f,-21.39f,-0.35f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_201()
		{
			float[] value = {5.98f,-5.04f,-1.44f,-4.52f,11.88f,21.94f,-16.90f,25.4480f,38.7616f,23.2618f,-17.14f,2.02f,82.01f,4.65f,-37.96f,2.93f,0.21f,51.50f,-0.24f,-0.27f,-27.07f,0.27f,0.73f,-31.67f,-8.41f,-0.16f,38.35f,0.18f,0.48f,-35.81f,-0.09f,1.36f,-20.18f,17.08f,0.00f,-0.00f,0.00f,66.08f,-7.88f,31.57f,0.23f,-25.71f,0.35f,14.44f,-0.16f,-3.43f,-0.00f,-0.00f,-0.00f,-58.56f,9.86f,-37.79f,-0.24f,-33.25f,-0.38f,-19.67f,-0.43f,5.36f,-4.60f,-0.50f,-4.85f,12.54f,22.42f,-18.14f,25.6208f,38.6970f,23.4515f,-17.79f,-0.22f,84.96f,6.68f,-39.72f,3.26f,0.20f,50.64f,-0.23f,-0.24f,-27.76f,0.27f,2.57f,-31.20f,-9.06f,-0.16f,37.88f,0.18f,-0.01f,-36.44f,-0.20f,2.56f,-20.77f,14.75f,0.00f,-0.00f,0.00f,67.19f,-8.18f,32.27f,0.23f,-25.64f,0.35f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_202()
		{
			float[] value = {14.32f,-0.13f,-3.42f,-0.00f,-0.00f,-0.00f,-60.00f,10.97f,-36.84f,-0.24f,-31.51f,-0.38f,-18.28f,-0.40f,4.88f,-4.16f,-0.06f,-5.25f,13.04f,22.44f,-19.21f,25.8587f,38.5874f,23.5835f,-17.92f,-2.19f,88.07f,8.29f,-41.18f,3.80f,0.20f,50.33f,-0.23f,-0.31f,-28.24f,0.26f,3.58f,-30.36f,-10.69f,-0.16f,37.24f,0.18f,-0.33f,-36.97f,-0.28f,3.87f,-21.15f,12.22f,0.00f,-0.00f,0.00f,67.67f,-8.29f,32.45f,0.23f,-25.83f,0.35f,14.35f,-0.11f,-3.47f,-0.00f,-0.00f,-0.00f,-61.59f,11.79f,-36.80f,-0.23f,-29.88f,-0.37f,-17.12f,-0.34f,4.45f,-4.10f,0.51f,-5.59f,13.39f,22.02f,-20.15f,26.1420f,38.4649f,23.7013f,-17.97f,-4.70f,91.12f,10.28f,-42.86f,3.72f,0.20f,50.28f,-0.23f,-0.49f,-29.20f,0.24f,4.71f,-29.29f,-13.00f,-0.16f,36.34f,0.17f,-0.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_203()
		{
			float[] value = {-37.78f,-0.32f,5.85f,-21.54f,10.30f,0.00f,-0.00f,0.00f,67.68f,-9.17f,32.51f,0.23f,-25.96f,0.35f,14.35f,-0.09f,-3.51f,-0.00f,-0.00f,-0.00f,-62.53f,13.09f,-36.97f,-0.23f,-29.44f,-0.37f,-16.83f,-0.32f,4.34f,-4.02f,1.19f,-6.18f,13.42f,21.68f,-21.38f,26.3963f,38.2861f,23.6894f,-18.18f,-6.26f,93.02f,11.32f,-44.09f,3.62f,0.20f,49.88f,-0.23f,-0.76f,-31.37f,0.18f,5.21f,-28.76f,-14.38f,-0.16f,35.84f,0.17f,-0.58f,-38.72f,-0.36f,7.67f,-22.20f,10.00f,0.00f,-0.00f,0.00f,67.28f,-10.16f,31.27f,0.23f,-26.02f,0.35f,14.32f,-0.07f,-3.53f,-0.00f,-0.00f,-0.00f,-63.42f,14.19f,-37.91f,-0.23f,-29.55f,-0.37f,-16.86f,-0.32f,4.37f,-4.38f,2.36f,-6.57f,13.90f,21.09f,-22.80f,26.6871f,38.1902f,23.5277f,-18.12f,-6.17f,93.91f,10.52f,-44.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_204()
		{
			float[] value = {2.97f,0.19f,48.54f,-0.22f,-1.38f,-33.13f,0.05f,4.57f,-28.34f,-14.67f,-0.16f,36.23f,0.17f,-0.81f,-39.41f,-0.43f,8.11f,-22.07f,10.13f,0.00f,-0.00f,0.00f,66.97f,-10.70f,30.45f,0.23f,-25.92f,0.35f,14.17f,-0.02f,-3.51f,-0.00f,-0.00f,-0.00f,-63.89f,14.41f,-39.19f,-0.23f,-29.61f,-0.37f,-16.81f,-0.31f,4.39f,-4.89f,3.03f,-6.74f,14.28f,20.76f,-23.68f,27.0199f,38.1945f,23.2486f,-17.63f,-5.09f,94.51f,8.32f,-43.30f,1.97f,0.19f,46.50f,-0.21f,-2.37f,-34.33f,-0.17f,3.60f,-27.95f,-13.19f,-0.16f,37.50f,0.18f,-1.46f,-39.54f,-0.62f,6.70f,-21.72f,9.26f,0.00f,-0.00f,0.00f,67.38f,-10.12f,29.51f,0.23f,-26.41f,0.35f,14.45f,-0.04f,-3.63f,-0.00f,-0.00f,-0.00f,-63.19f,14.12f,-40.13f,-0.23f,-29.93f,-0.37f,-16.87f,-0.29f,4.49f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_205()
		{
			float[] value = {-4.15f,3.81f,-6.77f,14.09f,20.67f,-23.64f,27.3237f,38.1730f,22.8893f,-17.15f,-4.02f,95.14f,6.26f,-42.48f,2.27f,0.18f,44.96f,-0.21f,-3.16f,-33.94f,-0.30f,2.68f,-27.84f,-11.86f,-0.17f,39.27f,0.18f,-2.18f,-39.60f,-0.82f,5.19f,-21.44f,8.63f,0.00f,-0.00f,0.00f,68.19f,-10.54f,29.58f,0.23f,-26.61f,0.35f,14.52f,-0.03f,-3.68f,-0.00f,-0.00f,-0.00f,-62.26f,14.59f,-40.23f,-0.24f,-31.18f,-0.37f,-17.40f,-0.28f,4.84f,-4.19f,5.17f,-6.60f,14.65f,19.92f,-24.11f,27.6029f,38.1876f,22.4047f,-16.49f,-1.93f,95.74f,2.34f,-41.14f,1.44f,0.18f,44.19f,-0.20f,-2.66f,-31.22f,-0.07f,0.18f,-27.78f,-11.12f,-0.17f,41.79f,0.19f,-2.86f,-39.94f,-1.03f,2.97f,-20.58f,7.82f,0.00f,-0.00f,0.00f,68.87f,-11.00f,30.76f,0.23f,-26.69f,0.35f,14.45f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_206()
		{
			float[] value = {0.01f,-3.71f,-0.00f,-0.00f,-0.00f,-61.87f,15.19f,-39.14f,-0.24f,-33.07f,-0.38f,-18.20f,-0.28f,5.40f,-5.03f,6.29f,-6.43f,15.05f,19.16f,-24.63f,27.8734f,38.1490f,21.7721f,-15.77f,1.63f,95.59f,-2.59f,-38.99f,0.84f,0.18f,43.27f,-0.20f,-2.14f,-29.29f,0.08f,-3.81f,-28.40f,-9.72f,-0.18f,45.69f,0.21f,-3.34f,-39.89f,-1.15f,-0.98f,-19.23f,7.21f,0.00f,-0.00f,0.00f,70.22f,-10.68f,30.67f,0.23f,-27.18f,0.36f,14.73f,-0.00f,-3.83f,-0.00f,-0.00f,-0.00f,-61.37f,14.68f,-39.52f,-0.25f,-34.43f,-0.39f,-18.63f,-0.23f,5.82f,-5.45f,7.16f,-6.07f,15.67f,18.43f,-24.76f,28.1257f,38.1117f,21.2546f,-15.18f,5.03f,95.15f,-6.01f,-36.92f,2.33f,0.17f,41.98f,-0.19f,-2.11f,-28.70f,0.11f,-7.54f,-29.69f,-8.21f,-0.20f,49.78f,0.23f,-3.31f,-38.54f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_207()
		{
			float[] value = {-1.04f,-4.64f,-17.91f,6.41f,0.00f,-0.00f,0.00f,71.48f,-10.06f,31.48f,0.23f,-27.80f,0.36f,15.00f,0.01f,-4.00f,-0.00f,-0.00f,-0.00f,-60.89f,13.97f,-38.32f,-0.25f,-36.96f,-0.40f,-19.61f,-0.21f,6.64f,-5.59f,7.57f,-5.52f,16.01f,18.11f,-24.18f,28.3897f,38.1114f,20.9591f,-14.52f,7.48f,94.06f,-7.42f,-35.06f,5.11f,0.17f,40.86f,-0.19f,-2.17f,-28.28f,0.12f,-9.01f,-31.17f,-4.64f,-0.21f,51.38f,0.24f,-3.20f,-38.53f,-1.00f,-7.38f,-17.02f,6.32f,0.00f,-0.00f,0.00f,72.21f,-9.40f,31.76f,0.23f,-28.99f,0.36f,15.62f,-0.02f,-4.30f,-0.00f,-0.00f,-0.00f,-59.40f,13.99f,-36.01f,-0.27f,-41.16f,-0.43f,-21.30f,-0.24f,8.07f,-5.48f,8.08f,-5.07f,16.26f,17.84f,-23.67f,28.6441f,38.1904f,20.8512f,-13.97f,7.59f,93.31f,-7.07f,-33.92f,6.38f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_208()
		{
			float[] value = {0.17f,40.55f,-0.19f,-2.10f,-28.00f,0.14f,-7.08f,-32.02f,0.05f,-0.20f,50.19f,0.23f,-3.65f,-39.81f,-1.22f,-7.73f,-15.76f,5.63f,0.00f,-0.00f,0.00f,72.23f,-8.82f,32.96f,0.23f,-30.06f,0.37f,16.15f,-0.03f,-4.59f,-0.00f,-0.00f,-0.00f,-57.90f,13.22f,-34.64f,-0.29f,-44.65f,-0.45f,-22.52f,-0.23f,9.35f,-5.38f,7.44f,-4.91f,16.16f,17.81f,-23.01f,28.7943f,38.2202f,20.8010f,-13.87f,6.86f,92.98f,-6.73f,-33.87f,5.67f,0.17f,40.98f,-0.19f,-1.96f,-27.90f,0.15f,-5.66f,-31.88f,1.48f,-0.19f,48.82f,0.22f,-3.47f,-39.03f,-1.12f,-6.31f,-15.27f,4.67f,0.00f,-0.00f,0.00f,71.11f,-8.29f,34.37f,0.24f,-30.46f,0.37f,16.27f,-0.00f,-4.71f,-0.00f,-0.00f,-0.00f,-58.04f,12.31f,-32.68f,-0.30f,-46.69f,-0.47f,-23.17f,-0.21f,10.14f,-5.91f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_209()
		{
			float[] value = {6.92f,-4.65f,15.87f,17.97f,-22.31f,28.8848f,38.2275f,20.7963f,-13.46f,5.95f,92.90f,-6.19f,-33.77f,4.51f,0.17f,41.51f,-0.19f,-1.80f,-27.61f,0.17f,-5.86f,-31.03f,-0.98f,-0.19f,47.84f,0.22f,-2.75f,-38.65f,-0.91f,-4.74f,-14.94f,3.77f,0.00f,-0.00f,0.00f,70.18f,-7.62f,34.22f,0.24f,-30.69f,0.37f,16.39f,-0.01f,-4.77f,-0.00f,-0.00f,-0.00f,-58.38f,11.83f,-31.16f,-0.30f,-48.04f,-0.48f,-23.58f,-0.20f,10.67f,-5.98f,6.77f,-4.73f,14.71f,17.32f,-21.45f,28.9212f,38.2983f,20.8526f,-13.07f,5.40f,91.84f,-5.24f,-33.32f,4.83f,0.17f,41.39f,-0.19f,-1.75f,-27.74f,0.17f,-5.98f,-30.61f,-2.91f,-0.19f,47.08f,0.22f,-1.91f,-38.05f,-0.66f,-3.38f,-14.11f,3.78f,0.00f,-0.00f,0.00f,69.57f,-7.35f,34.14f,0.24f,-30.47f,0.37f,16.29f,-0.01f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_210()
		{
			float[] value = {-4.71f,-0.00f,-0.00f,-0.00f,-58.57f,10.79f,-30.72f,-0.31f,-48.85f,-0.48f,-23.82f,-0.20f,11.00f,-5.81f,5.73f,-4.89f,13.53f,16.69f,-20.38f,28.8914f,38.3920f,20.9495f,-12.97f,5.68f,90.38f,-4.94f,-32.76f,5.32f,0.17f,40.66f,-0.19f,-1.76f,-28.18f,0.16f,-5.83f,-30.86f,-2.89f,-0.19f,46.73f,0.21f,-1.35f,-36.94f,-0.48f,-2.97f,-13.59f,4.11f,0.00f,-0.00f,0.00f,69.27f,-7.10f,34.39f,0.23f,-29.81f,0.37f,15.93f,0.02f,-4.53f,-0.00f,-0.00f,-0.00f,-58.76f,9.97f,-29.78f,-0.31f,-49.31f,-0.49f,-24.03f,-0.23f,11.17f,-5.97f,4.92f,-4.68f,13.54f,16.19f,-19.70f,28.8126f,38.4839f,21.0772f,-12.95f,5.70f,89.33f,-4.37f,-32.47f,5.73f,0.17f,40.20f,-0.19f,-1.74f,-28.43f,0.15f,-4.82f,-30.91f,-1.47f,-0.19f,46.24f,0.21f,-1.31f,-36.51f,-0.46f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_211()
		{
			float[] value = {-2.79f,-13.09f,4.43f,0.00f,-0.00f,0.00f,69.34f,-7.44f,34.28f,0.23f,-29.38f,0.37f,15.73f,0.02f,-4.42f,-0.00f,-0.00f,-0.00f,-58.50f,9.50f,-29.43f,-0.31f,-49.04f,-0.49f,-23.96f,-0.23f,11.06f,-5.91f,4.07f,-4.72f,13.76f,15.72f,-19.54f,28.6925f,38.4975f,21.2151f,-13.19f,4.67f,89.04f,-3.13f,-33.01f,5.50f,0.17f,40.48f,-0.19f,-1.65f,-28.35f,0.16f,-3.01f,-30.83f,-0.28f,-0.18f,45.34f,0.21f,-1.43f,-36.34f,-0.49f,-1.78f,-13.00f,4.24f,0.00f,-0.00f,0.00f,69.34f,-7.78f,33.76f,0.23f,-29.13f,0.36f,15.59f,0.03f,-4.35f,-0.00f,-0.00f,-0.00f,-58.46f,9.46f,-29.08f,-0.30f,-48.07f,-0.48f,-23.60f,-0.21f,10.68f,-5.59f,3.47f,-4.76f,13.58f,15.31f,-19.16f,28.5611f,38.5198f,21.3083f,-13.64f,3.38f,88.98f,-1.95f,-33.87f,4.79f,0.17f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_212()
		{
			float[] value = {40.81f,-0.19f,-1.59f,-28.40f,0.16f,-1.91f,-31.06f,-1.01f,-0.18f,44.42f,0.20f,-1.25f,-36.06f,-0.45f,-0.40f,-12.92f,4.31f,0.00f,-0.00f,0.00f,69.15f,-8.35f,32.88f,0.23f,-29.02f,0.36f,15.50f,0.04f,-4.33f,-0.00f,-0.00f,-0.00f,-58.75f,9.80f,-29.17f,-0.30f,-46.77f,-0.47f,-23.15f,-0.20f,10.18f,-5.33f,2.59f,-4.94f,13.32f,14.98f,-18.93f,28.4278f,38.5680f,21.3236f,-13.90f,3.26f,88.42f,-1.91f,-34.02f,4.44f,0.17f,40.45f,-0.19f,-1.54f,-28.83f,0.16f,-2.24f,-31.49f,-2.26f,-0.18f,43.97f,0.20f,-0.89f,-35.80f,-0.36f,0.18f,-12.61f,4.34f,0.00f,-0.00f,0.00f,68.41f,-8.23f,32.63f,0.23f,-29.10f,0.36f,15.50f,0.06f,-4.35f,-0.00f,-0.00f,-0.00f,-59.12f,9.16f,-29.24f,-0.29f,-45.25f,-0.46f,-22.65f,-0.20f,9.59f,-5.63f,1.47f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_213()
		{
			float[] value = {-5.10f,13.31f,15.02f,-18.89f,28.2801f,38.6196f,21.3633f,-14.15f,4.01f,87.52f,-2.46f,-33.94f,4.17f,0.17f,39.58f,-0.18f,-1.46f,-29.13f,0.16f,-2.78f,-32.22f,-2.22f,-0.18f,43.97f,0.20f,-0.63f,-35.41f,-0.30f,-0.53f,-12.43f,4.69f,0.00f,-0.00f,0.00f,68.22f,-7.93f,32.74f,0.23f,-28.86f,0.36f,15.27f,0.12f,-4.30f,-0.00f,-0.00f,-0.00f,-58.74f,8.36f,-29.70f,-0.28f,-43.67f,-0.45f,-22.08f,-0.19f,9.00f,-5.53f,0.13f,-5.27f,13.31f,15.53f,-18.79f,28.1109f,38.6731f,21.4354f,-14.72f,4.85f,87.05f,-2.83f,-34.30f,4.68f,0.16f,38.95f,-0.18f,-1.47f,-29.37f,0.15f,-2.86f,-33.10f,-1.03f,-0.18f,43.92f,0.20f,-0.74f,-35.52f,-0.33f,-1.33f,-12.60f,4.60f,0.00f,-0.00f,0.00f,68.11f,-7.76f,32.76f,0.23f,-28.19f,0.36f,14.87f,0.17f,-4.13f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_214()
		{
			float[] value = {-0.00f,-0.00f,-0.00f,-58.60f,7.80f,-30.09f,-0.27f,-41.92f,-0.43f,-21.38f,-0.16f,8.37f,-5.56f,-1.18f,-5.28f,13.15f,15.81f,-18.31f,27.9165f,38.6800f,21.5743f,-15.81f,3.93f,86.81f,-1.53f,-35.76f,4.69f,0.17f,39.33f,-0.18f,-1.39f,-29.27f,0.16f,-1.05f,-33.96f,0.22f,-0.18f,43.14f,0.20f,-0.90f,-35.51f,-0.37f,-0.77f,-13.76f,4.87f,0.00f,-0.00f,0.00f,68.11f,-8.05f,31.77f,0.23f,-27.80f,0.36f,14.71f,0.15f,-4.03f,-0.00f,-0.00f,-0.00f,-58.22f,8.30f,-30.50f,-0.26f,-39.83f,-0.42f,-20.53f,-0.13f,7.63f,-5.23f,-1.95f,-5.46f,13.03f,16.26f,-18.34f,27.7738f,38.7097f,21.6979f,-16.71f,2.32f,86.28f,0.06f,-37.19f,3.36f,0.17f,40.04f,-0.19f,-1.22f,-29.19f,0.18f,0.89f,-34.42f,0.20f,-0.17f,41.95f,0.19f,-0.72f,-35.15f,-0.33f,1.30f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_215()
		{
			float[] value = {-14.24f,6.03f,0.00f,-0.00f,0.00f,67.25f,-9.43f,32.45f,0.23f,-26.96f,0.35f,14.21f,0.20f,-3.82f,-0.00f,-0.00f,-0.00f,-58.82f,9.00f,-31.25f,-0.26f,-37.52f,-0.41f,-19.60f,-0.12f,6.85f,-5.70f,-3.04f,-5.78f,12.73f,16.09f,-18.43f,27.6609f,38.7598f,21.6980f,-17.08f,2.27f,85.54f,0.05f,-37.63f,2.51f,0.17f,39.94f,-0.19f,-1.11f,-29.27f,0.19f,0.89f,-34.93f,-0.21f,-0.17f,41.45f,0.19f,-0.38f,-34.54f,-0.26f,1.68f,-14.16f,6.87f,0.00f,-0.00f,0.00f,66.16f,-9.87f,32.20f,0.23f,-26.62f,0.35f,14.01f,0.22f,-3.74f,-0.00f,-0.00f,-0.00f,-59.01f,8.82f,-32.12f,-0.25f,-35.26f,-0.40f,-18.69f,-0.13f,6.12f,-5.68f,-4.30f,-5.97f,12.31f,15.97f,-18.10f,27.5613f,38.7806f,21.7396f,-17.18f,3.24f,84.90f,-0.71f,-37.43f,2.53f,0.17f,39.23f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_216()
		{
			float[] value = {-0.18f,-1.05f,-29.40f,0.19f,0.11f,-35.55f,-0.41f,-0.17f,41.61f,0.19f,-0.18f,-34.05f,-0.21f,0.72f,-13.72f,7.14f,0.00f,0.00f,-0.00f,65.27f,-9.88f,31.77f,0.23f,-25.84f,0.35f,13.55f,0.27f,-3.55f,0.00f,0.00f,0.00f,-58.63f,7.81f,-33.24f,-0.24f,-33.01f,-0.38f,-17.70f,-0.12f,5.42f,-5.51f,-5.82f,-6.10f,12.05f,16.27f,-17.75f,27.5089f,38.8255f,21.8695f,-17.51f,3.65f,84.79f,-0.66f,-37.47f,3.13f,0.16f,38.69f,-0.18f,-1.04f,-29.23f,0.20f,0.02f,-35.90f,-0.35f,-0.17f,41.47f,0.19f,-0.09f,-33.87f,-0.20f,-0.04f,-13.91f,6.65f,0.00f,-0.00f,0.00f,64.51f,-9.78f,31.29f,0.22f,-24.71f,0.35f,12.90f,0.31f,-3.29f,-0.00f,-0.00f,-0.00f,-57.73f,6.73f,-34.19f,-0.24f,-30.73f,-0.37f,-16.58f,-0.08f,4.77f,-5.33f,-6.55f,-6.19f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_217()
		{
			float[] value = {12.20f,16.00f,-17.70f,27.4930f,38.8904f,22.0353f,-17.83f,2.87f,84.71f,0.32f,-37.70f,2.89f,0.16f,38.67f,-0.18f,-0.95f,-28.61f,0.22f,1.08f,-35.67f,-0.42f,-0.17f,40.60f,0.19f,-0.00f,-33.54f,-0.19f,0.62f,-14.38f,6.56f,0.00f,0.00f,-0.00f,62.55f,-9.74f,28.61f,0.22f,-24.58f,0.34f,12.97f,0.24f,-3.25f,0.00f,0.00f,0.00f,-57.11f,7.02f,-32.49f,-0.23f,-29.06f,-0.36f,-15.80f,-0.08f,4.31f,-5.80f,-6.73f,-6.25f,12.85f,15.59f,-18.01f,27.4537f,38.9670f,22.1202f,-18.22f,2.16f,84.15f,0.69f,-37.98f,1.11f,0.16f,38.64f,-0.18f,-0.77f,-28.40f,0.24f,2.23f,-35.61f,0.09f,-0.17f,39.63f,0.18f,0.09f,-32.94f,-0.17f,1.47f,-14.56f,7.55f,0.00f,-0.00f,0.00f,59.23f,-11.08f,26.58f,0.22f,-24.47f,0.34f,12.98f,0.20f,-3.21f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_218()
		{
			float[] value = {-0.00f,-0.00f,-56.35f,7.98f,-30.03f,-0.23f,-27.67f,-0.36f,-15.18f,-0.09f,3.94f,-6.00f,-7.25f,-6.58f,12.51f,15.19f,-18.21f,27.4298f,39.0193f,22.0888f,-18.42f,2.73f,83.24f,0.04f,-37.86f,0.29f,0.16f,38.13f,-0.18f,-0.66f,-28.32f,0.25f,1.96f,-35.90f,0.35f,-0.17f,39.18f,0.18f,0.22f,-32.31f,-0.16f,1.01f,-14.43f,8.74f,0.00f,-0.00f,0.00f,54.92f,-12.12f,24.15f,0.22f,-24.15f,0.34f,12.73f,0.25f,-3.15f,-0.00f,-0.00f,-0.00f,-54.56f,8.30f,-28.44f,-0.23f,-26.65f,-0.35f,-14.66f,-0.08f,3.68f,-6.17f,-8.34f,-6.95f,12.00f,14.98f,-18.25f,27.4069f,39.0765f,22.0586f,-18.67f,3.47f,82.74f,-0.38f,-37.83f,0.63f,0.16f,37.39f,-0.18f,-0.66f,-27.92f,0.25f,1.52f,-36.26f,0.67f,-0.16f,38.88f,0.18f,0.30f,-31.85f,-0.15f,-0.03f,-14.55f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_219()
		{
			float[] value = {8.86f,0.00f,-0.00f,0.00f,50.08f,-11.49f,19.49f,0.22f,-23.83f,0.34f,12.57f,0.25f,-3.07f,-0.00f,-0.00f,-0.00f,-51.38f,8.05f,-25.73f,-0.23f,-25.50f,-0.35f,-14.09f,-0.08f,3.40f,-6.41f,-9.28f,-7.04f,12.05f,14.94f,-18.11f,27.4224f,39.1507f,22.0999f,-18.83f,3.44f,82.77f,-0.17f,-37.65f,0.92f,0.16f,36.83f,-0.17f,-0.69f,-27.72f,0.25f,1.78f,-36.07f,1.25f,-0.16f,38.36f,0.18f,0.27f,-31.78f,-0.16f,-0.54f,-14.41f,8.18f,0.00f,-0.00f,0.00f,44.25f,-10.95f,15.33f,0.22f,-22.84f,0.34f,12.08f,0.24f,-2.85f,-0.00f,-0.00f,-0.00f,-46.93f,7.07f,-22.61f,-0.22f,-24.36f,-0.34f,-13.52f,-0.07f,3.13f,-6.57f,-10.26f,-7.09f,12.01f,14.80f,-17.81f,27.4059f,39.1853f,22.1048f,-19.11f,3.23f,82.87f,-0.16f,-37.82f,0.37f,0.16f,36.58f,-0.17f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_220()
		{
			float[] value = {-0.67f,-27.52f,0.26f,2.03f,-36.05f,1.40f,-0.16f,37.86f,0.18f,0.25f,-31.84f,-0.17f,-0.72f,-14.33f,7.53f,0.00f,-0.00f,0.00f,37.04f,-10.99f,13.53f,0.22f,-21.47f,0.33f,11.31f,0.28f,-2.57f,-0.00f,-0.00f,-0.00f,-41.34f,5.67f,-19.53f,-0.22f,-23.45f,-0.34f,-13.12f,-0.09f,2.92f,-6.75f,-11.40f,-7.20f,11.94f,14.87f,-17.59f,27.3798f,39.1916f,22.0812f,-19.36f,3.27f,82.49f,-0.07f,-38.02f,0.60f,0.16f,36.49f,-0.17f,-0.65f,-27.56f,0.26f,2.24f,-36.29f,1.84f,-0.16f,37.65f,0.18f,0.26f,-31.77f,-0.17f,-1.14f,-14.27f,7.75f,0.00f,-0.00f,0.00f,28.69f,-11.00f,11.22f,0.22f,-20.78f,0.33f,11.08f,0.21f,-2.41f,-0.00f,-0.00f,-0.00f,-34.42f,4.36f,-17.43f,-0.22f,-22.83f,-0.34f,-12.93f,-0.13f,2.77f,-6.31f,-12.46f,-7.30f,11.14f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_221()
		{
			float[] value = {14.75f,-17.16f,27.3284f,39.1945f,22.0499f,-19.40f,3.61f,81.68f,0.37f,-38.04f,2.15f,0.16f,36.33f,-0.17f,-0.68f,-27.53f,0.26f,2.54f,-36.64f,2.97f,-0.16f,37.78f,0.18f,0.33f,-31.42f,-0.16f,-1.73f,-14.05f,8.37f,0.00f,-0.00f,0.00f,19.39f,-10.48f,8.95f,0.22f,-20.18f,0.33f,11.04f,0.07f,-2.27f,-0.00f,-0.00f,-0.00f,-26.39f,2.91f,-16.14f,-0.22f,-22.52f,-0.34f,-12.95f,-0.19f,2.69f,-6.14f,-13.26f,-7.30f,10.97f,14.64f,-16.85f,27.2779f,39.1985f,21.9557f,-19.30f,4.49f,81.12f,-0.29f,-37.92f,2.65f,0.16f,35.98f,-0.17f,-0.67f,-27.44f,0.26f,1.81f,-37.07f,3.16f,-0.16f,38.12f,0.18f,0.41f,-31.12f,-0.15f,-2.41f,-13.22f,8.19f,0.00f,-0.00f,0.00f,9.59f,-10.80f,7.96f,0.21f,-17.89f,0.32f,10.12f,-0.04f,-1.82f,-0.00f,-0.00f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_222()
		{
			float[] value = {-0.00f,-18.47f,0.51f,-13.18f,-0.22f,-22.13f,-0.33f,-13.13f,-0.27f,2.58f,-6.44f,-14.60f,-7.20f,10.62f,14.57f,-16.07f,27.2434f,39.2111f,21.9123f,-19.04f,4.68f,81.56f,-0.81f,-37.65f,2.37f,0.16f,35.66f,-0.17f,-0.70f,-27.14f,0.26f,1.36f,-36.88f,3.04f,-0.16f,38.20f,0.18f,0.37f,-31.18f,-0.15f,-2.93f,-11.81f,6.99f,0.00f,-0.00f,0.00f,0.67f,-11.80f,5.78f,0.21f,-15.30f,0.31f,8.86f,-0.09f,-1.39f,-0.00f,-0.00f,-0.00f,-10.08f,-2.69f,-10.61f,-0.22f,-21.22f,-0.33f,-12.99f,-0.32f,2.37f,-6.54f,-16.28f,-7.07f,10.57f,14.20f,-15.19f,27.2020f,39.2476f,21.9007f,-18.87f,4.28f,82.39f,-0.99f,-37.55f,1.32f,0.16f,35.51f,-0.17f,-0.72f,-26.74f,0.27f,1.42f,-36.48f,2.81f,-0.16f,38.00f,0.18f,0.28f,-31.34f,-0.16f,-3.08f,-10.38f,5.48f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_223()
		{
			float[] value = {0.00f,-0.00f,0.00f,-7.42f,-12.07f,-2.62f,0.21f,-15.15f,0.31f,9.20f,-0.21f,-1.34f,-0.00f,-0.00f,-0.00f,-1.88f,-6.00f,-6.46f,-0.22f,-20.17f,-0.33f,-12.76f,-0.34f,2.15f,-6.20f,-17.91f,-6.80f,10.19f,13.74f,-14.07f,27.0792f,39.2518f,21.8874f,-19.16f,4.09f,82.58f,-0.86f,-38.00f,1.18f,0.16f,35.50f,-0.17f,-0.72f,-26.60f,0.27f,1.54f,-36.81f,2.64f,-0.16f,37.89f,0.18f,0.30f,-31.26f,-0.16f,-3.32f,-9.30f,4.95f,0.00f,-0.00f,0.00f,-13.95f,-13.30f,-15.16f,0.21f,-15.52f,0.31f,10.06f,-0.31f,-1.36f,-0.00f,-0.00f,-0.00f,5.43f,-9.44f,0.82f,-0.22f,-20.02f,-0.33f,-13.25f,-0.33f,2.10f,-5.28f,-19.73f,-6.21f,9.16f,13.34f,-12.39f,26.8773f,39.2463f,21.8566f,-19.77f,4.53f,81.43f,-0.39f,-38.89f,2.52f,0.16f,35.56f,-0.17f,-0.72f};
			return value;
		}
		private float[] getHAnimMotion_3_202_values_224()
		{
			float[] value = {-26.49f,0.27f,1.65f,-38.04f,3.03f,-0.16f,37.97f,0.18f,0.47f,-30.66f,-0.14f,-3.44f,-9.00f,6.19f,0.00f,-0.00f,0.00f,-18.93f,-15.87f,-30.92f,0.21f,-15.31f,0.31f,10.56f,-0.31f,-1.30f,-0.00f,-0.00f,-0.00f,10.78f,-12.95f,11.45f,-0.22f,-20.59f,-0.33f,-14.22f,-0.23f,2.19f,-4.91f,-21.14f,-5.54f,8.51f,13.49f,-10.77f};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=8, element #24, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_8_24_coordIndex()
		{
			MFInt32Object IndexedFaceSet_8_24_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_8_24_coordIndex_1()));
			return IndexedFaceSet_8_24_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=8, element #24, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_8_24_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_8_24_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_8_24_texCoordIndex_1()));
			return IndexedFaceSet_8_24_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=9, element #24, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_9_24_point()
		{
			MFVec3fObject Coordinate_9_24_point = new MFVec3fObject(new float[] {0.0f,10.79f,0.1424f,0.0f,10.06f,-2.825f,-2.283f,10.06f,-2.428f,-3.954f,10.06f,-1.948f,-4.566f,10.06f,0.1424f,-3.954f,10.06f,2.233f,-2.283f,10.06f,2.712f,0.0f,10.06f,3.11f,2.283f,10.06f,2.712f,3.954f,10.06f,2.233f,4.566f,10.06f,0.1424f,3.954f,10.06f,-1.948f,2.283f,10.06f,-2.428f,0.0f,8.045f,-4.614f,-2.953f,8.045f,-3.977f,-5.114f,8.045f,-2.236f,-5.905f,8.045f,0.1424f,-5.114f,8.045f,2.521f,-2.953f,8.045f,3.645f,0.0f,8.045f,4.282f,2.953f,8.045f,3.645f,5.114f,8.045f,2.521f,5.905f,8.045f,0.1424f,5.114f,8.045f,-2.236f,2.953f,8.045f,-3.977f,0.0f,5.297f,-5.018f,-3.409f,5.297f,-4.282f,-5.905f,5.297f,-2.272f,-6.819f,5.297f,0.1424f,-5.905f,5.297f,2.889f,-3.409f,5.297f,4.282f,0.0f,5.297f,5.018f,3.409f,5.297f,4.282f,5.905f,5.297f,2.889f,6.819f,5.297f,0.1424f,5.905f,5.297f,-2.272f,3.409f,5.297f,-4.282f,0.0f,2.548f,-4.282f,-2.953f,2.548f,-3.645f,-5.114f,2.548f,-1.904f,-5.905f,2.548f,0.1424f,-5.114f,2.548f,2.521f,-2.953f,2.548f,3.645f,0.0f,2.548f,4.282f,2.953f,2.548f,3.645f,5.114f,2.548f,2.521f,5.905f,2.548f,0.1424f,5.114f,2.548f,-1.904f,2.953f,2.548f,-3.645f,0.0f,0.5362f,-2.272f,-1.705f,0.5362f,-1.904f,-2.953f,0.5362f,-1.231f,-3.409f,0.5362f,0.1424f,-2.953f,0.5362f,1.516f,-1.705f,0.5362f,2.521f,0.0f,0.5362f,2.889f,1.705f,0.5362f,2.521f,2.953f,0.5362f,1.516f,3.409f,0.5362f,0.1424f,2.953f,0.5362f,-1.231f,1.705f,0.5362f,-1.904f,0.0f,-0.2003f,0.1424f});
			return Coordinate_9_24_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #33, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_9_33_coordIndex()
		{
			MFInt32Object IndexedFaceSet_9_33_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_9_33_coordIndex_1()));
			return IndexedFaceSet_9_33_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #33, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_9_33_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_9_33_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_9_33_texCoordIndex_1()));
			return IndexedFaceSet_9_33_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #33, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_10_33_point()
		{
			MFVec3fObject Coordinate_10_33_point = new MFVec3fObject(new float[] {0.0f,1.053f,0.0273f,0.0f,0.9123f,-0.5414f,-0.4375f,0.9123f,-0.4652f,-0.7578f,0.9123f,-0.3733f,-0.875f,0.9123f,0.0273f,-0.7578f,0.9123f,0.4279f,-0.4375f,0.9123f,0.5198f,0.0f,0.9123f,0.596f,0.4375f,0.9123f,0.5198f,0.7578f,0.9123f,0.4279f,0.875f,0.9123f,0.0273f,0.7578f,0.9123f,-0.3733f,0.4375f,0.9123f,-0.4652f,0.0f,0.5267f,-0.8842f,-0.5658f,0.5267f,-0.7621f,-0.98f,0.5267f,-0.4285f,-1.132f,0.5267f,0.0273f,-0.98f,0.5267f,0.483f,-0.5658f,0.5267f,0.6985f,0.0f,0.5267f,0.8206f,0.5658f,0.5267f,0.6985f,0.98f,0.5267f,0.483f,1.132f,0.5267f,0.0273f,0.98f,0.5267f,-0.4285f,0.5658f,0.5267f,-0.7621f,0.0f,0.0f,-0.9616f,-0.6534f,0.0f,-0.8206f,-1.132f,0.0f,-0.4353f,-1.307f,0.0f,0.0273f,-1.132f,0.0f,0.5536f,-0.6534f,0.0f,0.8206f,0.0f,0.0f,0.9616f,0.6534f,0.0f,0.8206f,1.132f,0.0f,0.5536f,1.307f,0.0f,0.0273f,1.132f,0.0f,-0.4353f,0.6534f,0.0f,-0.8206f,0.0f,-0.5267f,-0.8206f,-0.5658f,-0.5267f,-0.6985f,-0.98f,-0.5267f,-0.3648f,-1.132f,-0.5267f,0.0273f,-0.98f,-0.5267f,0.483f,-0.5658f,-0.5267f,0.6985f,0.0f,-0.5267f,0.8206f,0.5658f,-0.5267f,0.6985f,0.98f,-0.5267f,0.483f,1.132f,-0.5267f,0.0273f,0.98f,-0.5267f,-0.3648f,0.5658f,-0.5267f,-0.6985f,0.0f,-0.9123f,-0.4353f,-0.3267f,-0.9123f,-0.3648f,-0.5658f,-0.9123f,-0.2358f,-0.6534f,-0.9123f,0.0273f,-0.5658f,-0.9123f,0.2904f,-0.3267f,-0.9123f,0.483f,0.0f,-0.9123f,0.5536f,0.3267f,-0.9123f,0.483f,0.5658f,-0.9123f,0.2904f,0.6534f,-0.9123f,0.0273f,0.5658f,-0.9123f,-0.2358f,0.3267f,-0.9123f,-0.3648f,0.0f,-1.053f,0.0273f});
			return Coordinate_10_33_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #42, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_42_coordIndex()
		{
			MFInt32Object IndexedFaceSet_10_42_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_42_coordIndex_1()));
			return IndexedFaceSet_10_42_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #42, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_42_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_10_42_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_42_texCoordIndex_1()));
			return IndexedFaceSet_10_42_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #42, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_11_42_point()
		{
			MFVec3fObject Coordinate_11_42_point = new MFVec3fObject(new float[] {2.96f,3.738f,0.0f,1.643f,3.738f,3.209f,-1.316f,3.738f,4.002f,-3.367f,3.738f,1.781f,-3.367f,3.738f,-1.781f,-1.316f,3.738f,-4.002f,1.643f,3.738f,-3.209f,2.96f,-0.0114f,0.0f,1.643f,-0.0114f,3.209f,-1.316f,-0.0114f,4.002f,-3.367f,-0.0114f,1.781f,-3.367f,-0.0114f,-1.781f,-1.316f,-0.0114f,-4.002f,1.643f,-0.0114f,-3.209f,2.96f,-6.507f,0.0f,1.643f,-6.507f,3.209f,-1.316f,-6.507f,4.002f,-3.367f,-6.507f,1.781f,-3.367f,-6.507f,-1.781f,-1.316f,-6.507f,-4.002f,1.643f,-6.507f,-3.209f,3.367f,-13.13f,0.0f,1.897f,-13.13f,3.582f,-1.407f,-13.13f,4.467f,-3.355f,-13.13f,1.988f,-3.355f,-13.13f,-1.988f,-1.407f,-13.13f,-4.467f,1.897f,-13.13f,-3.582f,2.146f,-4.985f,0.0f,1.136f,-4.985f,2.462f,-1.135f,-4.985f,3.07f,-2.633f,-4.985f,1.366f,-2.633f,-4.985f,-1.366f,-1.135f,-4.985f,-3.07f,1.136f,-4.985f,-2.462f,2.156f,-11.45f,0.0f,1.225f,-11.45f,1.956f,-0.8662f,-11.45f,2.439f,-2.543f,-11.45f,1.085f,-2.543f,-11.45f,-1.085f,-0.8662f,-11.45f,-2.439f,1.225f,-11.45f,-1.956f,2.051f,5.729f,0.0f,1.076f,5.729f,2.375f,-1.114f,5.729f,2.961f,-2.87f,5.729f,1.318f,-2.87f,5.729f,-1.318f,-1.114f,5.729f,-2.961f,1.076f,5.729f,-2.375f,1.842f,-15.12f,0.0f,1.03f,-15.12f,1.873f,-0.7965f,-15.12f,2.295f,-2.261f,-15.12f,1.113f,-2.261f,-15.12f,-0.9478f,-0.7965f,-15.12f,-2.13f,1.03f,-15.12f,-1.708f,0.6277f,-16.1f,0.0f,0.2723f,-16.1f,0.912f,-0.5262f,-16.1f,1.096f,-1.167f,-16.1f,0.5796f,-1.167f,-16.1f,-0.4145f,-0.5262f,-16.1f,-0.9313f,0.2723f,-16.1f,-0.7469f});
			return Coordinate_11_42_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #43, 140 total numbers made up of 70 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2fObject getTextureCoordinate_11_43_point()
		{
			MFVec2fObject TextureCoordinate_11_43_point = new MFVec2fObject(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
			return TextureCoordinate_11_43_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #51, 300 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_51_coordIndex()
		{
			MFInt32Object IndexedFaceSet_11_51_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_51_coordIndex_1()));
			return IndexedFaceSet_11_51_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #51, 300 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_51_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_11_51_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_51_texCoordIndex_1()));
			return IndexedFaceSet_11_51_texCoordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #60, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_12_60_coordIndex()
		{
			MFInt32Object IndexedFaceSet_12_60_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_12_60_coordIndex_1()));
			return IndexedFaceSet_12_60_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #60, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_12_60_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_12_60_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_12_60_texCoordIndex_1()));
			return IndexedFaceSet_12_60_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #60, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_13_60_point()
		{
			MFVec3fObject Coordinate_13_60_point = new MFVec3fObject(new float[] {0.9768f,-0.0192f,-1.681f,1.657f,-0.0192f,0.4309f,0.0f,-0.0192f,-1.681f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0.0f,0.7316f,-1.463f,0.0f,0.7316f,1.471f,-1.657f,-0.0192f,0.4309f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,-0.9768f,-0.0192f,-1.681f,0.0f,-0.0192f,1.75f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0.0f,-0.6007f,-2.046f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0.0f,-1.207f,-1.841f,1.023f,-1.207f,-1.841f,1.913f,-1.223f,0.5161f,1.601f,-0.9325f,1.406f,0.0f,-0.6582f,1.708f,-1.601f,-0.9325f,1.406f,-1.913f,-1.223f,0.5161f,-1.023f,-1.207f,-1.841f,1.409f,-1.925f,-2.878f,1.409f,-3.947f,-1.681f,0.0f,-3.947f,-1.681f,1.109f,-0.6007f,-2.046f,0.0f,-0.6007f,-2.046f,-1.409f,-1.925f,-2.878f,0.0f,-1.925f,-2.878f,-1.109f,-0.6007f,-2.046f,-1.409f,-3.947f,-1.681f,2.927f,-1.925f,0.4309f,2.089f,-3.947f,0.4309f,2.045f,-0.6007f,0.4309f,-2.927f,-1.925f,0.4309f,-2.045f,-0.6007f,0.4309f,-2.089f,-3.947f,0.4309f,0.0f,-3.947f,0.4309f,0.9442f,-0.3153f,-1.692f,0.0f,-0.3153f,-1.692f,-0.9442f,-0.3153f,-1.692f,-1.7f,-0.3153f,0.3093f,1.7f,-0.3153f,0.3093f,1.86f,-3.793f,1.364f,2.541f,-1.963f,1.364f,1.861f,-0.9431f,1.364f,-1.861f,-0.9431f,1.364f,-2.541f,-1.963f,1.364f,-1.86f,-3.793f,1.364f,0.0f,-3.793f,1.364f});
			return Coordinate_13_60_point;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=13, element #69, 264 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_13_69_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_13_69_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_13_69_texCoordIndex_1()));
			return IndexedFaceSet_13_69_texCoordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #82, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_82_coordIndex()
		{
			MFInt32Object IndexedFaceSet_10_82_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_82_coordIndex_1()));
			return IndexedFaceSet_10_82_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #82, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_82_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_10_82_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_82_texCoordIndex_1()));
			return IndexedFaceSet_10_82_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #82, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_11_82_point()
		{
			MFVec3fObject Coordinate_11_82_point = new MFVec3fObject(new float[] {-2.96f,3.738f,0.0f,-1.643f,3.738f,3.209f,1.316f,3.738f,4.002f,3.367f,3.738f,1.781f,3.367f,3.738f,-1.781f,1.316f,3.738f,-4.002f,-1.643f,3.738f,-3.209f,-2.96f,-0.0114f,0.0f,-1.643f,-0.0114f,3.209f,1.316f,-0.0114f,4.002f,3.367f,-0.0114f,1.781f,3.367f,-0.0114f,-1.781f,1.316f,-0.0114f,-4.002f,-1.643f,-0.0114f,-3.209f,-2.96f,-6.507f,0.0f,-1.643f,-6.507f,3.209f,1.316f,-6.507f,4.002f,3.367f,-6.507f,1.781f,3.367f,-6.507f,-1.781f,1.316f,-6.507f,-4.002f,-1.643f,-6.507f,-3.209f,-3.367f,-13.13f,0.0f,-1.897f,-13.13f,3.582f,1.407f,-13.13f,4.467f,3.355f,-13.13f,1.988f,3.355f,-13.13f,-1.988f,1.407f,-13.13f,-4.467f,-1.897f,-13.13f,-3.582f,-2.146f,-4.985f,0.0f,-1.136f,-4.985f,2.462f,1.135f,-4.985f,3.07f,2.633f,-4.985f,1.366f,2.633f,-4.985f,-1.366f,1.135f,-4.985f,-3.07f,-1.136f,-4.985f,-2.462f,-2.156f,-11.45f,0.0f,-1.225f,-11.45f,1.956f,0.8662f,-11.45f,2.439f,2.543f,-11.45f,1.085f,2.543f,-11.45f,-1.085f,0.8662f,-11.45f,-2.439f,-1.225f,-11.45f,-1.956f,-2.051f,5.729f,0.0f,-1.076f,5.729f,2.375f,1.114f,5.729f,2.961f,2.87f,5.729f,1.318f,2.87f,5.729f,-1.318f,1.114f,5.729f,-2.961f,-1.076f,5.729f,-2.375f,-1.842f,-15.12f,0.0f,-1.03f,-15.12f,1.873f,0.7965f,-15.12f,2.295f,2.261f,-15.12f,1.113f,2.261f,-15.12f,-0.9478f,0.7965f,-15.12f,-2.13f,-1.03f,-15.12f,-1.708f,-0.6277f,-16.1f,0.0f,-0.2723f,-16.1f,0.912f,0.5262f,-16.1f,1.096f,1.167f,-16.1f,0.5796f,1.167f,-16.1f,-0.4145f,0.5262f,-16.1f,-0.9313f,-0.2723f,-16.1f,-0.7469f});
			return Coordinate_11_82_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #83, 140 total numbers made up of 70 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2fObject getTextureCoordinate_11_83_point()
		{
			MFVec2fObject TextureCoordinate_11_83_point = new MFVec2fObject(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
			return TextureCoordinate_11_83_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #91, 300 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_91_coordIndex()
		{
			MFInt32Object IndexedFaceSet_11_91_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_91_coordIndex_1()));
			return IndexedFaceSet_11_91_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #91, 300 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_91_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_11_91_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_91_texCoordIndex_1()));
			return IndexedFaceSet_11_91_texCoordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #100, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_12_100_coordIndex()
		{
			MFInt32Object IndexedFaceSet_12_100_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_12_100_coordIndex_1()));
			return IndexedFaceSet_12_100_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #100, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_12_100_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_12_100_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_12_100_texCoordIndex_1()));
			return IndexedFaceSet_12_100_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #100, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_13_100_point()
		{
			MFVec3fObject Coordinate_13_100_point = new MFVec3fObject(new float[] {-0.9768f,-0.0192f,-1.681f,-1.657f,-0.0192f,0.4309f,0.0f,-0.0192f,-1.681f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,0.0f,0.7316f,-1.463f,0.0f,0.7316f,1.471f,1.657f,-0.0192f,0.4309f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0.9768f,-0.0192f,-1.681f,0.0f,-0.0192f,1.75f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0.0f,-0.6007f,-2.046f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0.0f,-1.207f,-1.841f,-1.023f,-1.207f,-1.841f,-1.913f,-1.223f,0.5161f,-1.601f,-0.9325f,1.406f,0.0f,-0.6582f,1.708f,1.601f,-0.9325f,1.406f,1.913f,-1.223f,0.5161f,1.023f,-1.207f,-1.841f,-1.409f,-1.925f,-2.878f,-1.409f,-3.947f,-1.681f,0.0f,-3.947f,-1.681f,-1.109f,-0.6007f,-2.046f,0.0f,-0.6007f,-2.046f,1.409f,-1.925f,-2.878f,0.0f,-1.925f,-2.878f,1.109f,-0.6007f,-2.046f,1.409f,-3.947f,-1.681f,-2.927f,-1.925f,0.4309f,-2.089f,-3.947f,0.4309f,-2.045f,-0.6007f,0.4309f,2.927f,-1.925f,0.4309f,2.045f,-0.6007f,0.4309f,2.089f,-3.947f,0.4309f,0.0f,-3.947f,0.4309f,-0.9442f,-0.3153f,-1.692f,0.0f,-0.3153f,-1.692f,0.9442f,-0.3153f,-1.692f,1.7f,-0.3153f,0.3093f,-1.7f,-0.3153f,0.3093f,-1.86f,-3.793f,1.364f,-2.541f,-1.963f,1.364f,-1.861f,-0.9431f,1.364f,1.861f,-0.9431f,1.364f,2.541f,-1.963f,1.364f,1.86f,-3.793f,1.364f,0.0f,-3.793f,1.364f});
			return Coordinate_13_100_point;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=13, element #109, 264 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_13_109_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_13_109_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_13_109_texCoordIndex_1()));
			return IndexedFaceSet_13_109_texCoordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #122, 1336 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_122_coordIndex()
		{
			MFInt32Object IndexedFaceSet_10_122_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_122_coordIndex_1()))
				.append(new MFInt32Object(getIndexedFaceSet_10_122_coordIndex_2()));
			return IndexedFaceSet_10_122_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #122, 1336 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_10_122_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_10_122_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_10_122_texCoordIndex_1()))
				.append(new MFInt32Object(getIndexedFaceSet_10_122_texCoordIndex_2()));
			return IndexedFaceSet_10_122_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #122, 522 total numbers made up of 174 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_11_122_point()
		{
			MFVec3fObject Coordinate_11_122_point = new MFVec3fObject()/*2.finalize*/
				.append(new MFVec3fObject(getCoordinate_11_122_point_1()))
				.append(new MFVec3fObject(getCoordinate_11_122_point_2()));
			return Coordinate_11_122_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #123, 420 total numbers made up of 210 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2fObject getTextureCoordinate_11_123_point()
		{
			MFVec2fObject TextureCoordinate_11_123_point = new MFVec2fObject()/*2.finalize*/
				.append(new MFVec2fObject(getTextureCoordinate_11_123_point_1()))
				.append(new MFVec2fObject(getTextureCoordinate_11_123_point_2()))
				.append(new MFVec2fObject(getTextureCoordinate_11_123_point_3()));
			return TextureCoordinate_11_123_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #131, 2368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_131_coordIndex()
		{
			MFInt32Object IndexedFaceSet_11_131_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_131_coordIndex_1()))
				.append(new MFInt32Object(getIndexedFaceSet_11_131_coordIndex_2()))
				.append(new MFInt32Object(getIndexedFaceSet_11_131_coordIndex_3()));
			return IndexedFaceSet_11_131_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #131, 2368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_131_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_11_131_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_131_texCoordIndex_1()))
				.append(new MFInt32Object(getIndexedFaceSet_11_131_texCoordIndex_2()))
				.append(new MFInt32Object(getIndexedFaceSet_11_131_texCoordIndex_3()));
			return IndexedFaceSet_11_131_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #131, 1068 total numbers made up of 356 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getCoordinate_12_131_point()
		{
			MFVec3fObject Coordinate_12_131_point = new MFVec3fObject()/*2.finalize*/
				.append(new MFVec3fObject(getCoordinate_12_131_point_1()))
				.append(new MFVec3fObject(getCoordinate_12_131_point_2()))
				.append(new MFVec3fObject(getCoordinate_12_131_point_3()))
				.append(new MFVec3fObject(getCoordinate_12_131_point_4()));
			return Coordinate_12_131_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #132, 772 total numbers made up of 386 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2fObject getTextureCoordinate_12_132_point()
		{
			MFVec2fObject TextureCoordinate_12_132_point = new MFVec2fObject()/*2.finalize*/
				.append(new MFVec2fObject(getTextureCoordinate_12_132_point_1()))
				.append(new MFVec2fObject(getTextureCoordinate_12_132_point_2()))
				.append(new MFVec2fObject(getTextureCoordinate_12_132_point_3()))
				.append(new MFVec2fObject(getTextureCoordinate_12_132_point_4()));
			return TextureCoordinate_12_132_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #141, 304 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_141_coordIndex()
		{
			MFInt32Object IndexedFaceSet_11_141_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_141_coordIndex_1()));
			return IndexedFaceSet_11_141_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #141, 304 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_141_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_11_141_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_141_texCoordIndex_1()));
			return IndexedFaceSet_11_141_texCoordIndex;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #171, 304 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_171_coordIndex()
		{
			MFInt32Object IndexedFaceSet_11_171_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_171_coordIndex_1()));
			return IndexedFaceSet_11_171_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #171, 304 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getIndexedFaceSet_11_171_texCoordIndex()
		{
			MFInt32Object IndexedFaceSet_11_171_texCoordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getIndexedFaceSet_11_171_texCoordIndex_1()));
			return IndexedFaceSet_11_171_texCoordIndex;
		}
		/** Large attribute array: HAnimMotion values field, scene-graph level=3, element #202, 22344 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private Object getHAnimMotion_3_202_values()
		{
			Object HAnimMotion_3_202_values = new Object()/*2.finalize*/
				.append(new Object(getHAnimMotion_3_202_values_1()))
				.append(new Object(getHAnimMotion_3_202_values_2()))
				.append(new Object(getHAnimMotion_3_202_values_3()))
				.append(new Object(getHAnimMotion_3_202_values_4()))
				.append(new Object(getHAnimMotion_3_202_values_5()))
				.append(new Object(getHAnimMotion_3_202_values_6()))
				.append(new Object(getHAnimMotion_3_202_values_7()))
				.append(new Object(getHAnimMotion_3_202_values_8()))
				.append(new Object(getHAnimMotion_3_202_values_9()))
				.append(new Object(getHAnimMotion_3_202_values_10()))
				.append(new Object(getHAnimMotion_3_202_values_11()))
				.append(new Object(getHAnimMotion_3_202_values_12()))
				.append(new Object(getHAnimMotion_3_202_values_13()))
				.append(new Object(getHAnimMotion_3_202_values_14()))
				.append(new Object(getHAnimMotion_3_202_values_15()))
				.append(new Object(getHAnimMotion_3_202_values_16()))
				.append(new Object(getHAnimMotion_3_202_values_17()))
				.append(new Object(getHAnimMotion_3_202_values_18()))
				.append(new Object(getHAnimMotion_3_202_values_19()))
				.append(new Object(getHAnimMotion_3_202_values_20()))
				.append(new Object(getHAnimMotion_3_202_values_21()))
				.append(new Object(getHAnimMotion_3_202_values_22()))
				.append(new Object(getHAnimMotion_3_202_values_23()))
				.append(new Object(getHAnimMotion_3_202_values_24()))
				.append(new Object(getHAnimMotion_3_202_values_25()))
				.append(new Object(getHAnimMotion_3_202_values_26()))
				.append(new Object(getHAnimMotion_3_202_values_27()))
				.append(new Object(getHAnimMotion_3_202_values_28()))
				.append(new Object(getHAnimMotion_3_202_values_29()))
				.append(new Object(getHAnimMotion_3_202_values_30()))
				.append(new Object(getHAnimMotion_3_202_values_31()))
				.append(new Object(getHAnimMotion_3_202_values_32()))
				.append(new Object(getHAnimMotion_3_202_values_33()))
				.append(new Object(getHAnimMotion_3_202_values_34()))
				.append(new Object(getHAnimMotion_3_202_values_35()))
				.append(new Object(getHAnimMotion_3_202_values_36()))
				.append(new Object(getHAnimMotion_3_202_values_37()))
				.append(new Object(getHAnimMotion_3_202_values_38()))
				.append(new Object(getHAnimMotion_3_202_values_39()))
				.append(new Object(getHAnimMotion_3_202_values_40()))
				.append(new Object(getHAnimMotion_3_202_values_41()))
				.append(new Object(getHAnimMotion_3_202_values_42()))
				.append(new Object(getHAnimMotion_3_202_values_43()))
				.append(new Object(getHAnimMotion_3_202_values_44()))
				.append(new Object(getHAnimMotion_3_202_values_45()))
				.append(new Object(getHAnimMotion_3_202_values_46()))
				.append(new Object(getHAnimMotion_3_202_values_47()))
				.append(new Object(getHAnimMotion_3_202_values_48()))
				.append(new Object(getHAnimMotion_3_202_values_49()))
				.append(new Object(getHAnimMotion_3_202_values_50()))
				.append(new Object(getHAnimMotion_3_202_values_51()))
				.append(new Object(getHAnimMotion_3_202_values_52()))
				.append(new Object(getHAnimMotion_3_202_values_53()))
				.append(new Object(getHAnimMotion_3_202_values_54()))
				.append(new Object(getHAnimMotion_3_202_values_55()))
				.append(new Object(getHAnimMotion_3_202_values_56()))
				.append(new Object(getHAnimMotion_3_202_values_57()))
				.append(new Object(getHAnimMotion_3_202_values_58()))
				.append(new Object(getHAnimMotion_3_202_values_59()))
				.append(new Object(getHAnimMotion_3_202_values_60()))
				.append(new Object(getHAnimMotion_3_202_values_61()))
				.append(new Object(getHAnimMotion_3_202_values_62()))
				.append(new Object(getHAnimMotion_3_202_values_63()))
				.append(new Object(getHAnimMotion_3_202_values_64()))
				.append(new Object(getHAnimMotion_3_202_values_65()))
				.append(new Object(getHAnimMotion_3_202_values_66()))
				.append(new Object(getHAnimMotion_3_202_values_67()))
				.append(new Object(getHAnimMotion_3_202_values_68()))
				.append(new Object(getHAnimMotion_3_202_values_69()))
				.append(new Object(getHAnimMotion_3_202_values_70()))
				.append(new Object(getHAnimMotion_3_202_values_71()))
				.append(new Object(getHAnimMotion_3_202_values_72()))
				.append(new Object(getHAnimMotion_3_202_values_73()))
				.append(new Object(getHAnimMotion_3_202_values_74()))
				.append(new Object(getHAnimMotion_3_202_values_75()))
				.append(new Object(getHAnimMotion_3_202_values_76()))
				.append(new Object(getHAnimMotion_3_202_values_77()))
				.append(new Object(getHAnimMotion_3_202_values_78()))
				.append(new Object(getHAnimMotion_3_202_values_79()))
				.append(new Object(getHAnimMotion_3_202_values_80()))
				.append(new Object(getHAnimMotion_3_202_values_81()))
				.append(new Object(getHAnimMotion_3_202_values_82()))
				.append(new Object(getHAnimMotion_3_202_values_83()))
				.append(new Object(getHAnimMotion_3_202_values_84()))
				.append(new Object(getHAnimMotion_3_202_values_85()))
				.append(new Object(getHAnimMotion_3_202_values_86()))
				.append(new Object(getHAnimMotion_3_202_values_87()))
				.append(new Object(getHAnimMotion_3_202_values_88()))
				.append(new Object(getHAnimMotion_3_202_values_89()))
				.append(new Object(getHAnimMotion_3_202_values_90()))
				.append(new Object(getHAnimMotion_3_202_values_91()))
				.append(new Object(getHAnimMotion_3_202_values_92()))
				.append(new Object(getHAnimMotion_3_202_values_93()))
				.append(new Object(getHAnimMotion_3_202_values_94()))
				.append(new Object(getHAnimMotion_3_202_values_95()))
				.append(new Object(getHAnimMotion_3_202_values_96()))
				.append(new Object(getHAnimMotion_3_202_values_97()))
				.append(new Object(getHAnimMotion_3_202_values_98()))
				.append(new Object(getHAnimMotion_3_202_values_99()))
				.append(new Object(getHAnimMotion_3_202_values_100()))
				.append(new Object(getHAnimMotion_3_202_values_101()))
				.append(new Object(getHAnimMotion_3_202_values_102()))
				.append(new Object(getHAnimMotion_3_202_values_103()))
				.append(new Object(getHAnimMotion_3_202_values_104()))
				.append(new Object(getHAnimMotion_3_202_values_105()))
				.append(new Object(getHAnimMotion_3_202_values_106()))
				.append(new Object(getHAnimMotion_3_202_values_107()))
				.append(new Object(getHAnimMotion_3_202_values_108()))
				.append(new Object(getHAnimMotion_3_202_values_109()))
				.append(new Object(getHAnimMotion_3_202_values_110()))
				.append(new Object(getHAnimMotion_3_202_values_111()))
				.append(new Object(getHAnimMotion_3_202_values_112()))
				.append(new Object(getHAnimMotion_3_202_values_113()))
				.append(new Object(getHAnimMotion_3_202_values_114()))
				.append(new Object(getHAnimMotion_3_202_values_115()))
				.append(new Object(getHAnimMotion_3_202_values_116()))
				.append(new Object(getHAnimMotion_3_202_values_117()))
				.append(new Object(getHAnimMotion_3_202_values_118()))
				.append(new Object(getHAnimMotion_3_202_values_119()))
				.append(new Object(getHAnimMotion_3_202_values_120()))
				.append(new Object(getHAnimMotion_3_202_values_121()))
				.append(new Object(getHAnimMotion_3_202_values_122()))
				.append(new Object(getHAnimMotion_3_202_values_123()))
				.append(new Object(getHAnimMotion_3_202_values_124()))
				.append(new Object(getHAnimMotion_3_202_values_125()))
				.append(new Object(getHAnimMotion_3_202_values_126()))
				.append(new Object(getHAnimMotion_3_202_values_127()))
				.append(new Object(getHAnimMotion_3_202_values_128()))
				.append(new Object(getHAnimMotion_3_202_values_129()))
				.append(new Object(getHAnimMotion_3_202_values_130()))
				.append(new Object(getHAnimMotion_3_202_values_131()))
				.append(new Object(getHAnimMotion_3_202_values_132()))
				.append(new Object(getHAnimMotion_3_202_values_133()))
				.append(new Object(getHAnimMotion_3_202_values_134()))
				.append(new Object(getHAnimMotion_3_202_values_135()))
				.append(new Object(getHAnimMotion_3_202_values_136()))
				.append(new Object(getHAnimMotion_3_202_values_137()))
				.append(new Object(getHAnimMotion_3_202_values_138()))
				.append(new Object(getHAnimMotion_3_202_values_139()))
				.append(new Object(getHAnimMotion_3_202_values_140()))
				.append(new Object(getHAnimMotion_3_202_values_141()))
				.append(new Object(getHAnimMotion_3_202_values_142()))
				.append(new Object(getHAnimMotion_3_202_values_143()))
				.append(new Object(getHAnimMotion_3_202_values_144()))
				.append(new Object(getHAnimMotion_3_202_values_145()))
				.append(new Object(getHAnimMotion_3_202_values_146()))
				.append(new Object(getHAnimMotion_3_202_values_147()))
				.append(new Object(getHAnimMotion_3_202_values_148()))
				.append(new Object(getHAnimMotion_3_202_values_149()))
				.append(new Object(getHAnimMotion_3_202_values_150()))
				.append(new Object(getHAnimMotion_3_202_values_151()))
				.append(new Object(getHAnimMotion_3_202_values_152()))
				.append(new Object(getHAnimMotion_3_202_values_153()))
				.append(new Object(getHAnimMotion_3_202_values_154()))
				.append(new Object(getHAnimMotion_3_202_values_155()))
				.append(new Object(getHAnimMotion_3_202_values_156()))
				.append(new Object(getHAnimMotion_3_202_values_157()))
				.append(new Object(getHAnimMotion_3_202_values_158()))
				.append(new Object(getHAnimMotion_3_202_values_159()))
				.append(new Object(getHAnimMotion_3_202_values_160()))
				.append(new Object(getHAnimMotion_3_202_values_161()))
				.append(new Object(getHAnimMotion_3_202_values_162()))
				.append(new Object(getHAnimMotion_3_202_values_163()))
				.append(new Object(getHAnimMotion_3_202_values_164()))
				.append(new Object(getHAnimMotion_3_202_values_165()))
				.append(new Object(getHAnimMotion_3_202_values_166()))
				.append(new Object(getHAnimMotion_3_202_values_167()))
				.append(new Object(getHAnimMotion_3_202_values_168()))
				.append(new Object(getHAnimMotion_3_202_values_169()))
				.append(new Object(getHAnimMotion_3_202_values_170()))
				.append(new Object(getHAnimMotion_3_202_values_171()))
				.append(new Object(getHAnimMotion_3_202_values_172()))
				.append(new Object(getHAnimMotion_3_202_values_173()))
				.append(new Object(getHAnimMotion_3_202_values_174()))
				.append(new Object(getHAnimMotion_3_202_values_175()))
				.append(new Object(getHAnimMotion_3_202_values_176()))
				.append(new Object(getHAnimMotion_3_202_values_177()))
				.append(new Object(getHAnimMotion_3_202_values_178()))
				.append(new Object(getHAnimMotion_3_202_values_179()))
				.append(new Object(getHAnimMotion_3_202_values_180()))
				.append(new Object(getHAnimMotion_3_202_values_181()))
				.append(new Object(getHAnimMotion_3_202_values_182()))
				.append(new Object(getHAnimMotion_3_202_values_183()))
				.append(new Object(getHAnimMotion_3_202_values_184()))
				.append(new Object(getHAnimMotion_3_202_values_185()))
				.append(new Object(getHAnimMotion_3_202_values_186()))
				.append(new Object(getHAnimMotion_3_202_values_187()))
				.append(new Object(getHAnimMotion_3_202_values_188()))
				.append(new Object(getHAnimMotion_3_202_values_189()))
				.append(new Object(getHAnimMotion_3_202_values_190()))
				.append(new Object(getHAnimMotion_3_202_values_191()))
				.append(new Object(getHAnimMotion_3_202_values_192()))
				.append(new Object(getHAnimMotion_3_202_values_193()))
				.append(new Object(getHAnimMotion_3_202_values_194()))
				.append(new Object(getHAnimMotion_3_202_values_195()))
				.append(new Object(getHAnimMotion_3_202_values_196()))
				.append(new Object(getHAnimMotion_3_202_values_197()))
				.append(new Object(getHAnimMotion_3_202_values_198()))
				.append(new Object(getHAnimMotion_3_202_values_199()))
				.append(new Object(getHAnimMotion_3_202_values_200()))
				.append(new Object(getHAnimMotion_3_202_values_201()))
				.append(new Object(getHAnimMotion_3_202_values_202()))
				.append(new Object(getHAnimMotion_3_202_values_203()))
				.append(new Object(getHAnimMotion_3_202_values_204()))
				.append(new Object(getHAnimMotion_3_202_values_205()))
				.append(new Object(getHAnimMotion_3_202_values_206()))
				.append(new Object(getHAnimMotion_3_202_values_207()))
				.append(new Object(getHAnimMotion_3_202_values_208()))
				.append(new Object(getHAnimMotion_3_202_values_209()))
				.append(new Object(getHAnimMotion_3_202_values_210()))
				.append(new Object(getHAnimMotion_3_202_values_211()))
				.append(new Object(getHAnimMotion_3_202_values_212()))
				.append(new Object(getHAnimMotion_3_202_values_213()))
				.append(new Object(getHAnimMotion_3_202_values_214()))
				.append(new Object(getHAnimMotion_3_202_values_215()))
				.append(new Object(getHAnimMotion_3_202_values_216()))
				.append(new Object(getHAnimMotion_3_202_values_217()))
				.append(new Object(getHAnimMotion_3_202_values_218()))
				.append(new Object(getHAnimMotion_3_202_values_219()))
				.append(new Object(getHAnimMotion_3_202_values_220()))
				.append(new Object(getHAnimMotion_3_202_values_221()))
				.append(new Object(getHAnimMotion_3_202_values_222()))
				.append(new Object(getHAnimMotion_3_202_values_223()))
				.append(new Object(getHAnimMotion_3_202_values_224()));
			return HAnimMotion_3_202_values;
		}

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return KoreanCharacterAnnexD01Jin model
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
        X3DObject thisExampleX3dObject = new KoreanCharacterAnnexD01Jin().getX3dModel();

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
			System.out.println("WARNING: \"KoreanCharacterAnnexD01Jin\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"KoreanCharacterAnnexD01Jin\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}