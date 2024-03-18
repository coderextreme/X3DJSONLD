package net.x3djsonld.data;

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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model. </p>
 <p> Related links: KoreanCharacter12Sun.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.KoreanCharacter12Sun&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter12Sun.x3d">KoreanCharacter12Sun.x3d</a> </td>
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
			<td> 23 December 2021 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacterHumanMotion_Infotech2014_140706.pdf">KoreanCharacterHumanMotion_Infotech2014_140706.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharactersIllustrated.pdf">KoreanCharactersIllustrated.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter12Sun.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter12Sun.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> 3DS MAX, <a href="http://www.autodesk.com/products/autodesk-3ds-max/overview" target="_blank">http://www.autodesk.com/products/autodesk-3ds-max/overview</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Suwon University HAnim Editor </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/../license.html">../license.html</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Jin Hoon Lee and Min Joo Lee
 */

public class KoreanCharacter12Sun
{
	/** Default constructor to create this object. */
	public KoreanCharacter12Sun ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KoreanCharacter12Sun.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 December 2021"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter12Sun.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Suwon University HAnim Editor"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("KoreanCharacter12Sun.x3d"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("Sun").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_Sun").setName("Sun").setScale(0.0225,0.0225,0.0225).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Chul Hee Jung and Myeong Won Lee"}))
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"myeongwonlee@gmail.com"}))
        .setMetadata(new MetadataString().setName("creationDate").setValue(new String[] {"31 March 2011"}))
        .setMetadata(new MetadataString().setName("gender").setValue(new String[] {"female"}))
        .setMetadata(new MetadataFloat().setName("height").setValue(new double[] {1.5}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"2.0"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,29.86,-0.4567).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimSegment("hanim_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,29.86,-0.4567)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                .setTexture(new ImageTexture("SunTextureAtlas").setUrl(new String[] {"images/Sun.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Sun.png"})))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_8_32_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_32_texCoordIndex())
                .setCoord(new Coordinate().setPoint(getCoordinate_9_32_point()))
                .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_9_33_point()))))))
        .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(2.955,28.94,-0.5218).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
            .addChild(new Transform().setTranslation(2.955,28.94,-0.5218)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_41_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_41_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_41_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.918,0.5995,0.9216,0.5192,0.9118,0.5261,0.9076,0.5995,0.9471,0.5995,0.9471,0.5153,0.9763,0.5995,0.9745,0.5192,0.9867,0.5995,0.9841,0.5261,0.9751,0.5995,0.9733,0.5337,0.9471,0.5369,0.9192,0.5995,0.9227,0.5337,0.9178,0.4416,0.9263,0.4416,0.9339,0.4268,0.9271,0.4268,0.9471,0.4416,0.9471,0.4268,0.9697,0.4416,0.9621,0.4268,0.9783,0.4416,0.9689,0.4268,0.9471,0.4144,0.9258,0.4603,0.9166,0.4603,0.9471,0.4603,0.9702,0.4603,0.9794,0.4603,0.9716,0.497,0.9471,0.4986,0.9244,0.497,0.9261,0.4603,0.9186,0.6114,0.9253,0.6114,0.9265,0.6114,0.9471,0.6114,0.9678,0.6114,0.9757,0.6114,0.969,0.6114,0.9471,0.6206,0.9699,0.4603})))))))
          .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(2.948,16.46,-0.5275).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
              .addChild(new Transform().setTranslation(2.948,16.46,-0.5275)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_50_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_50_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_50_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9287,0.342,0.9261,0.3817,0.9166,0.3743,0.9312,0.2839,0.9471,0.2839,0.9471,0.3395,0.9648,0.2839,0.9653,0.3367,0.9721,0.2839,0.9756,0.3608,0.9668,0.3526,0.9471,0.3496,0.9261,0.3638,0.9239,0.2839,0.9178,0.4416,0.9263,0.4416,0.9323,0.4565,0.9255,0.4565,0.9471,0.4416,0.9471,0.4565,0.9697,0.4416,0.9637,0.4565,0.9783,0.4416,0.9705,0.4565,0.9471,0.4689,0.932,0.2704,0.937,0.2704,0.9471,0.2704,0.959,0.2704,0.964,0.2704,0.9471,0.2608,0.9261,0.428,0.9162,0.4243,0.9474,0.428,0.9471,0.3767,0.9684,0.428,0.9669,0.3711,0.9771,0.4243,0.9678,0.4243,0.9471,0.4243,0.9259,0.4243,0.9467,0.3066,0.9291,0.3066,0.9659,0.3066,0.9763,0.3066,0.967,0.3066,0.9459,0.3066,0.9267,0.3066,0.9183,0.3066})))))))
            .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(2.839,3.899,-0.4116).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                .addChild(new Transform().setTranslation(2.839,3.899,-0.4116)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_59_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_59_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_59_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_60_point()))))))
              .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(2.839,3.312,1.078).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(2.839,3.312,1.078)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_68_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_68_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_68_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_13_69_point()))))))))))
        .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-2.955,28.94,-0.5218).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
            .addChild(new Transform().setTranslation(-2.955,28.94,-0.5218)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_81_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_81_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_81_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.918,0.5995,0.9216,0.5192,0.9118,0.5261,0.9076,0.5995,0.9471,0.5995,0.9471,0.5153,0.9763,0.5995,0.9745,0.5192,0.9867,0.5995,0.9841,0.5261,0.9751,0.5995,0.9733,0.5337,0.9471,0.5369,0.9192,0.5995,0.9227,0.5337,0.9178,0.4416,0.9263,0.4416,0.9339,0.4268,0.9271,0.4268,0.9471,0.4416,0.9471,0.4268,0.9697,0.4416,0.9621,0.4268,0.9783,0.4416,0.9689,0.4268,0.9471,0.4144,0.9258,0.4603,0.9166,0.4603,0.9471,0.4603,0.9702,0.4603,0.9794,0.4603,0.9716,0.497,0.9471,0.4986,0.9244,0.497,0.9261,0.4603,0.9186,0.6114,0.9253,0.6114,0.9265,0.6114,0.9471,0.6114,0.9678,0.6114,0.9757,0.6114,0.969,0.6114,0.9471,0.6206,0.9699,0.4603})))))))
          .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-2.948,16.46,-0.5275).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
              .addChild(new Transform().setTranslation(-2.948,16.46,-0.5275)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_90_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_90_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_90_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9287,0.342,0.9261,0.3817,0.9166,0.3743,0.9312,0.2839,0.9471,0.2839,0.9471,0.3395,0.9648,0.2839,0.9653,0.3367,0.9721,0.2839,0.9756,0.3608,0.9668,0.3526,0.9471,0.3496,0.9261,0.3638,0.9239,0.2839,0.9178,0.4416,0.9263,0.4416,0.9323,0.4565,0.9255,0.4565,0.9471,0.4416,0.9471,0.4565,0.9697,0.4416,0.9637,0.4565,0.9783,0.4416,0.9705,0.4565,0.9471,0.4689,0.932,0.2704,0.937,0.2704,0.9471,0.2704,0.959,0.2704,0.964,0.2704,0.9471,0.2608,0.9261,0.428,0.9162,0.4243,0.9474,0.428,0.9471,0.3767,0.9684,0.428,0.9669,0.3711,0.9771,0.4243,0.9678,0.4243,0.9471,0.4243,0.9259,0.4243,0.9467,0.3066,0.9291,0.3066,0.9659,0.3066,0.9763,0.3066,0.967,0.3066,0.9459,0.3066,0.9267,0.3066,0.9183,0.3066})))))))
            .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-2.839,3.899,-0.4116).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                .addChild(new Transform().setTranslation(-2.839,3.899,-0.4116)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_99_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_99_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_99_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_100_point()))))))
              .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-2.839,3.312,1.078).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(-2.839,3.312,1.078)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_108_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_108_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_108_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_13_109_point()))))))))))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,29.86,-0.4567).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,29.86,-0.4567)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_121_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_121_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_121_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_122_point()))))))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(6.077,45.88,-1.319).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(6.077,45.88,-1.319)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_130_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_130_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_130_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7373,1.904,0.7454,1.852,0.7783,1.858,0.7656,1.899,0.7152,1.848,0.71,1.901,0.6826,1.904,0.6851,1.846,0.7419,1.927,0.7284,1.918,0.6909,1.918,0.6244,1.905,0.619,1.855,0.6525,1.846,0.6537,1.912,0.5897,1.865,0.5966,1.902,0.5694,1.905,0.5607,1.866,0.543,1.916,0.5243,1.861,0.5792,1.919,0.6768,1.927,0.7098,1.915,0.7095,1.934,0.7427,1.793,0.5662,1.93,0.5976,1.916,0.6166,1.918,0.6311,1.928,0.5988,1.935,0.6179,1.786,0.652,1.784,0.5894,1.79,0.5606,1.794,0.5257,1.796,0.6213,1.732,0.7737,1.794,0.7122,1.789,0.6812,1.785,0.7323,1.729,0.73,1.719,0.747,1.712,0.7045,1.731,0.7048,1.724,0.6766,1.731,0.6789,1.722,0.6605,1.715,0.7027,1.7,0.6206,1.724,0.6424,1.717,0.594,1.731,0.5953,1.726,0.5704,1.723,0.5669,1.731,0.5513,1.711,0.5972,1.7,0.7577,1.727,0.5392,1.729,0.6505,1.731,0.6254,1.737,0.7371,1.733,0.7608,1.731,0.7076,1.737,0.6768,1.738,0.5953,1.74,0.5651,1.738,0.529,1.733,0.6481,1.738})))))))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(7.076,38.53,-1.385).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(7.076,38.53,-1.385)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_139_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_139_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_139_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_140_point()))))))
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(6.946,30.89,-1.308).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                  .addChild(new Transform().setTranslation(6.946,30.89,-1.308)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,0,1,-1,1,2,3,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,9,12,13,-1,13,10,9,-1,15,16,17,-1,17,14,15,-1,16,15,18,-1,18,19,16,-1,3,11,10,-1,10,0,3,-1,10,13,1,-1,1,0,10,-1,16,20,21,-1,21,17,16,-1,20,16,19,-1,19,2,20,-1,7,6,9,-1,9,8,7,-1,5,12,9,-1,9,6,5,-1,15,14,22,-1,22,23,15,-1,18,15,23,-1,23,4,18,-1,21,20,2,-1,2,1,21,-1,23,22,5,-1,5,4,23,-1,12,14,17,-1,17,13,12,-1,26,27,24,-1,24,25,26,-1,21,1,13,-1,13,17,21,-1,11,3,2,-1,2,19,11,-1,22,14,12,-1,12,5,22,-1,4,7,8,-1,8,18,4,-1,25,24,8,-1,8,11,25,-1,11,19,26,-1,26,25,11,-1,19,18,27,-1,27,26,19,-1,18,8,24,-1,24,27,18,-1}).setTexCoordIndex(new int[] {3,0,1,-1,1,2,3,-1,28,29,4,-1,4,5,28,-1,9,10,11,-1,11,8,9,-1,9,12,13,-1,13,10,9,-1,39,40,41,-1,41,38,39,-1,16,15,18,-1,18,19,16,-1,3,11,10,-1,10,0,3,-1,10,13,1,-1,1,0,10,-1,40,42,43,-1,43,41,40,-1,20,16,19,-1,19,2,20,-1,7,6,9,-1,9,8,7,-1,28,31,30,-1,30,29,28,-1,39,38,22,-1,22,23,39,-1,33,34,32,-1,32,5,33,-1,21,20,2,-1,2,1,21,-1,32,35,28,-1,28,5,32,-1,12,14,17,-1,17,13,12,-1,26,27,24,-1,24,25,26,-1,21,1,13,-1,13,17,21,-1,11,3,2,-1,2,19,11,-1,35,36,31,-1,31,28,35,-1,5,4,37,-1,37,33,5,-1,25,24,8,-1,8,11,25,-1,11,19,26,-1,26,25,11,-1,19,18,27,-1,27,26,19,-1,18,8,24,-1,24,27,18,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.8369,-0.0091,0.7613,1.046,-0.0091,0.2822,-0.7102,-0.0091,0.2822,-0.6365,-0.0091,0.7613,-0.8285,-2.66,0.2822,1.164,-2.992,0.2822,0.9362,-2.714,1.233,-0.7358,-2.435,1.233,-1.07,-1.907,1.233,1.27,-1.907,1.233,1.27,-0.5983,1.233,-1.07,-0.5983,1.233,1.563,-2.03,0.2822,1.563,-0.5489,0.2822,1.338,-1.908,-1.198,-1.002,-1.908,-1.198,-1.002,-0.5991,-1.198,1.338,-0.5991,-1.198,-1.227,-2.03,0.2822,-1.227,-0.5489,0.2822,-0.5688,-0.0091,-0.7263,0.9047,-0.0091,-0.7263,1.004,-2.714,-1.198,-0.668,-2.436,-1.198,-1.552,-1.761,1.073,-1.552,-0.7447,1.073,-1.802,-0.7234,0.4415,-1.802,-1.856,0.4415})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2291,0.4554,0.2379,0.4639,0.1638,0.4639,0.1669,0.4554,0.1055,0.4675,0.0703,0.4694,0.2333,0.3582,0.1628,0.3683,0.1487,0.3875,0.2473,0.3875,0.2473,0.435,0.1487,0.435,0.2598,0.383,0.2598,0.4396,0.2502,0.3875,0.1477,0.3875,0.1477,0.435,0.2502,0.435,0.1383,0.383,0.1383,0.4396,0.1698,0.4554,0.232,0.4554,0.2362,0.3582,0.1657,0.3683,0.1283,0.3928,0.1283,0.4296,0.1178,0.4333,0.1178,0.3894,0.0685,0.4095,0.1043,0.4119,0.1041,0.3824,0.0691,0.3798,0.0184,0.4681,0.0704,0.4904,0.0183,0.4889,0.0176,0.4121,0.018,0.3832,0.1056,0.489,0.2502,0.3875,0.1515,0.3875,0.1515,0.435,0.2502,0.435,0.1698,0.4554,0.232,0.4554}))))))))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-6.077,45.88,-1.319).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-6.077,45.88,-1.319)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_160_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_160_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_160_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7373,1.904,0.7454,1.852,0.7783,1.858,0.7656,1.899,0.7152,1.848,0.71,1.901,0.6826,1.904,0.6851,1.846,0.7419,1.927,0.7284,1.918,0.6909,1.918,0.6244,1.905,0.619,1.855,0.6525,1.846,0.6537,1.912,0.5897,1.865,0.5966,1.902,0.5694,1.905,0.5607,1.866,0.543,1.916,0.5243,1.861,0.5792,1.919,0.6768,1.927,0.7098,1.915,0.7095,1.934,0.7427,1.793,0.5662,1.93,0.5976,1.916,0.6166,1.918,0.6311,1.928,0.5988,1.935,0.6179,1.786,0.652,1.784,0.5894,1.79,0.5606,1.794,0.5257,1.796,0.6213,1.732,0.7737,1.794,0.7122,1.789,0.6812,1.785,0.7323,1.729,0.73,1.719,0.747,1.712,0.7045,1.731,0.7048,1.724,0.6766,1.731,0.6789,1.722,0.6605,1.715,0.7027,1.7,0.6206,1.724,0.6424,1.717,0.594,1.731,0.5953,1.726,0.5704,1.723,0.5669,1.731,0.5513,1.711,0.5972,1.7,0.7577,1.727,0.5392,1.729,0.6505,1.731,0.6254,1.737,0.7371,1.733,0.7608,1.731,0.7076,1.737,0.6768,1.738,0.5953,1.74,0.5651,1.738,0.529,1.733,0.6481,1.738})))))))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-7.076,38.53,-1.385).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-7.076,38.53,-1.385)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_169_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_169_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_169_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_170_point()))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-6.946,30.89,-1.308).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                  .addChild(new Transform().setTranslation(-6.946,30.89,-1.308)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,2,1,-1,1,0,3,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,9,10,13,-1,13,12,9,-1,15,14,17,-1,17,16,15,-1,16,19,18,-1,18,15,16,-1,3,0,10,-1,10,11,3,-1,10,0,1,-1,1,13,10,-1,16,17,21,-1,21,20,16,-1,20,2,19,-1,19,16,20,-1,7,8,9,-1,9,6,7,-1,5,6,9,-1,9,12,5,-1,15,23,22,-1,22,14,15,-1,18,4,23,-1,23,15,18,-1,21,1,2,-1,2,20,21,-1,23,4,5,-1,5,22,23,-1,12,13,17,-1,17,14,12,-1,26,25,24,-1,24,27,26,-1,21,17,13,-1,13,1,21,-1,11,19,2,-1,2,3,11,-1,22,5,12,-1,12,14,22,-1,4,18,8,-1,8,7,4,-1,25,11,8,-1,8,24,25,-1,11,25,26,-1,26,19,11,-1,19,26,27,-1,27,18,19,-1,18,27,24,-1,24,8,18,-1}).setTexCoordIndex(new int[] {3,2,1,-1,1,0,3,-1,28,5,4,-1,4,29,28,-1,9,8,11,-1,11,10,9,-1,9,10,13,-1,13,12,9,-1,39,38,41,-1,41,40,39,-1,16,19,18,-1,18,15,16,-1,3,0,10,-1,10,11,3,-1,10,0,1,-1,1,13,10,-1,40,41,43,-1,43,42,40,-1,20,2,19,-1,19,16,20,-1,7,8,9,-1,9,6,7,-1,28,29,30,-1,30,31,28,-1,39,23,22,-1,22,38,39,-1,33,5,32,-1,32,34,33,-1,21,1,2,-1,2,20,21,-1,32,5,28,-1,28,35,32,-1,12,13,17,-1,17,14,12,-1,26,25,24,-1,24,27,26,-1,21,17,13,-1,13,1,21,-1,11,19,2,-1,2,3,11,-1,35,28,31,-1,31,36,35,-1,5,33,37,-1,37,4,5,-1,25,11,8,-1,8,24,25,-1,11,25,26,-1,26,19,11,-1,19,26,27,-1,27,18,19,-1,18,27,24,-1,24,8,18,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.8369,-0.0091,0.7613,-1.046,-0.0091,0.2822,0.7102,-0.0091,0.2822,0.6365,-0.0091,0.7613,0.8285,-2.66,0.2822,-1.164,-2.992,0.2822,-0.9362,-2.714,1.233,0.7358,-2.435,1.233,1.07,-1.907,1.233,-1.27,-1.907,1.233,-1.27,-0.5983,1.233,1.07,-0.5983,1.233,-1.563,-2.03,0.2822,-1.563,-0.5489,0.2822,-1.338,-1.908,-1.198,1.002,-1.908,-1.198,1.002,-0.5991,-1.198,-1.338,-0.5991,-1.198,1.227,-2.03,0.2822,1.227,-0.5489,0.2822,0.5688,-0.0091,-0.7264,-0.9047,-0.0091,-0.7264,-1.004,-2.714,-1.198,0.668,-2.436,-1.198,1.552,-1.761,1.073,1.552,-0.7447,1.073,1.802,-0.7234,0.4415,1.802,-1.856,0.4415})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2291,0.4554,0.2379,0.4639,0.1638,0.4639,0.1669,0.4554,0.1055,0.4675,0.0703,0.4694,0.2333,0.3582,0.1628,0.3683,0.1487,0.3875,0.2473,0.3875,0.2473,0.435,0.1487,0.435,0.2598,0.383,0.2598,0.4396,0.2502,0.3875,0.1477,0.3875,0.1477,0.435,0.2502,0.435,0.1383,0.383,0.1383,0.4396,0.1698,0.4554,0.232,0.4554,0.2362,0.3582,0.1657,0.3683,0.1283,0.3928,0.1283,0.4296,0.1178,0.4333,0.1178,0.3894,0.0685,0.4095,0.1043,0.4119,0.1041,0.3824,0.0691,0.3798,0.0184,0.4681,0.0704,0.4904,0.0183,0.4889,0.0176,0.4121,0.018,0.3832,0.1056,0.489,0.2502,0.3875,0.1515,0.3875,0.1515,0.435,0.2502,0.435,0.1698,0.4554,0.232,0.4554}))))))))))
          .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.05249,34.13,-0.468).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l5").setName("l5")
              .addChild(new Transform().setTranslation(0.05249,34.13,-0.468)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_190_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_190_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_190_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_191_point()))))))
            .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,51.25,-1.124).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_skull").setName("skull")
                .addChild(new Transform().setTranslation(0.0,51.25,-1.124)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("SunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_199_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_199_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_199_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_200_point()))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addSegments(new HAnimSegment().setUSE("hanim_l5"))
      .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
      .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
      .addSegments(new HAnimSegment().setUSE("hanim_skull"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_coordIndex_1()
		{
			int[] value = {2,30,0,-1,0,1,2,-1,30,36,3,-1,3,0,30,-1,3,36,32,-1,32,4,3,-1,35,5,4,-1,4,32,35,-1,44,6,33,-1,33,34,44,-1,2,28,27,-1,27,30,2,-1,30,27,29,-1,29,36,30,-1,29,7,32,-1,32,36,29,-1,16,15,34,-1,34,33,16,-1,28,10,9,-1,9,27,28,-1,9,11,29,-1,29,27,9,-1,29,11,12,-1,12,7,29,-1,8,7,12,-1,12,13,8,-1,15,16,14,-1,14,60,15,-1,10,18,17,-1,17,9,10,-1,9,17,19,-1,19,11,9,-1,19,20,12,-1,12,11,19,-1,13,12,20,-1,20,21,13,-1,60,14,22,-1,22,23,60,-1,5,35,33,-1,33,6,5,-1,16,8,13,-1,13,14,16,-1,14,13,21,-1,21,22,14,-1,24,21,20,-1,35,8,16,-1,16,33,35,-1,32,7,8,-1,8,35,32,-1,68,1,69,-1,69,1,0,-1,0,3,69,-1,69,3,4,-1,6,69,5,-1,69,6,44,-1,1,68,31,-1,31,2,1,-1,71,25,10,-1,10,28,71,-1,25,26,18,-1,18,10,25,-1,24,18,26,-1,24,17,18,-1,24,19,17,-1,24,20,19,-1,24,22,21,-1,23,22,24,-1,4,5,69,-1,71,28,2,-1,2,31,71,-1,70,38,37,-1,37,39,70,-1,39,37,40,-1,40,49,39,-1,40,41,50,-1,50,49,40,-1,42,50,41,-1,41,43,42,-1,44,34,67,-1,67,45,44,-1,70,39,46,-1,46,47,70,-1,39,49,48,-1,48,46,39,-1,48,49,50,-1,50,51,48,-1,52,67,34,-1,34,15,52,-1,47,46,53,-1,53,54,47,-1,53,46,48,-1,48,55,53,-1,48,51,56,-1,56,55,48,-1,58,57,56,-1,56,51,58,-1,15,60,59,-1,59,52,15,-1,54,53,61,-1,61,62,54,-1,53,55,63,-1,63,61,53,-1,63,55,56,-1,56,64,63,-1,57,65,64,-1,64,56,57,-1,60,23,66,-1,66,59,60,-1,43,45,67,-1,67,42,43,-1,52,59,57,-1,57,58,52,-1,59,66,65,-1,65,57,59,-1,24,64,65,-1,42,67,52,-1,52,58,42,-1,50,42,58,-1,58,51,50,-1,68,69,38,-1,69,37,38,-1,37,69,40,-1,69,41,40,-1,45,43,69,-1,69,44,45,-1,38,70,31,-1,31,68,38,-1,71,47,54,-1,54,25,71,-1,25,54,62,-1,62,26,25,-1,24,26,62,-1,24,62,61,-1,24,61,63,-1,24,63,64,-1,24,65,66,-1,23,24,66,-1,41,69,43,-1,71,31,70,-1,70,47,71,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,5,6,4,-1,4,0,5,-1,4,33,7,-1,7,8,4,-1,35,50,8,-1,8,34,35,-1,54,55,52,-1,52,53,54,-1,11,12,9,-1,9,10,11,-1,15,9,13,-1,13,14,15,-1,13,18,16,-1,16,17,13,-1,19,20,21,-1,21,22,19,-1,12,24,23,-1,23,9,12,-1,23,25,13,-1,13,9,23,-1,13,25,26,-1,26,18,13,-1,28,18,26,-1,26,27,28,-1,20,19,29,-1,29,30,20,-1,24,32,31,-1,31,23,24,-1,23,31,36,-1,36,25,23,-1,36,37,26,-1,26,25,36,-1,27,26,37,-1,37,38,27,-1,30,29,39,-1,39,40,30,-1,50,57,56,-1,56,55,50,-1,19,28,27,-1,27,29,19,-1,29,27,38,-1,38,39,29,-1,41,38,37,-1,42,28,19,-1,19,43,42,-1,45,18,28,-1,28,44,45,-1,58,1,59,-1,59,1,0,-1,0,4,59,-1,59,4,8,-1,55,59,50,-1,59,55,54,-1,1,58,60,-1,60,61,1,-1,46,47,24,-1,24,12,46,-1,47,48,32,-1,32,24,47,-1,41,32,48,-1,41,31,32,-1,41,36,31,-1,41,37,36,-1,41,39,38,-1,40,39,41,-1,8,50,59,-1,46,12,49,-1,49,51,46,-1,64,63,62,-1,62,65,64,-1,67,62,66,-1,66,68,67,-1,66,70,69,-1,69,71,66,-1,73,72,70,-1,70,74,73,-1,77,76,75,-1,75,78,77,-1,81,80,79,-1,79,82,81,-1,85,84,83,-1,83,79,85,-1,83,87,86,-1,86,88,83,-1,89,92,91,-1,91,90,89,-1,82,79,93,-1,93,94,82,-1,93,79,83,-1,83,95,93,-1,83,88,96,-1,96,95,83,-1,98,97,96,-1,96,88,98,-1,90,100,99,-1,99,89,90,-1,94,93,101,-1,101,102,94,-1,93,95,103,-1,103,101,93,-1,103,95,96,-1,96,104,103,-1,97,105,104,-1,104,96,97,-1,100,107,106,-1,106,99,100,-1,74,78,108,-1,108,109,74,-1,89,99,97,-1,97,98,89,-1,99,106,105,-1,105,97,99,-1,110,104,105,-1,111,112,89,-1,89,98,111,-1,114,113,98,-1,98,88,114,-1,115,116,63,-1,116,62,63,-1,62,116,66,-1,116,70,66,-1,78,74,116,-1,116,77,78,-1,63,118,117,-1,117,115,63,-1,119,82,94,-1,94,120,119,-1,120,94,102,-1,102,121,120,-1,110,121,102,-1,110,102,101,-1,110,101,103,-1,110,103,104,-1,110,105,106,-1,107,110,106,-1,70,116,74,-1,119,123,122,-1,122,82,119,-1};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_9_33_point_1()
		{
			double[] value = {0.7918,0.3915,0.7861,0.4125,0.761,0.4016,0.7739,0.359,0.8043,0.381,0.7754,0.3582,0.7971,0.3429,0.8277,0.3444,0.8264,0.3818,0.9221,0.6798,0.9068,0.6634,0.9278,0.6477,0.942,0.668,0.9118,0.6975,0.892,0.6876,0.8997,0.6728,0.8888,0.7144,0.8893,0.6963,0.9102,0.7174,0.9318,0.7543,0.9405,0.7608,0.9219,0.7764,0.9155,0.7699,0.9352,0.6914,0.9514,0.6827,0.9275,0.7025,0.9278,0.7154,0.9353,0.7322,0.9192,0.7392,0.9477,0.7447,0.9543,0.7492,0.9534,0.7016,0.9633,0.697,0.7986,0.3427,0.8292,0.3445,0.861,0.3654,0.9486,0.7096,0.9495,0.7179,0.956,0.7264,0.9627,0.7307,0.9675,0.7332,0.9757,0.7147,0.9016,0.7514,0.9124,0.7668,0.8987,0.7466,0.8902,0.7255,0.9681,0.6588,0.974,0.6751,0.9769,0.6939,0.9357,0.6444,0.8417,0.3914,0.9575,0.6354,0.8761,0.3962,0.8816,0.4112,0.8536,0.4202,0.8501,0.4103,0.8759,0.3959,0.8628,0.3668,0.7883,0.4384,0.8184,0.4313,0.7627,0.4439,0.7605,0.4029,0.7918,0.3915,0.7861,0.4125,0.761,0.4016,0.7739,0.359,0.8043,0.381,0.7754,0.3582,0.7971,0.3429,0.8277,0.3444,0.8264,0.3818,0.7986,0.3427,0.8292,0.3445,0.861,0.3654,0.8417,0.3914,0.8761,0.3962,0.8816,0.4112,0.8536,0.4202,0.8501,0.4103,0.9221,0.6798,0.9068,0.6634,0.9278,0.6477,0.942,0.668,0.9118,0.6975,0.892,0.6876,0.8997,0.6728,0.8888,0.7144,0.8893,0.6963,0.9102,0.7174,0.9318,0.7543,0.9405,0.7608,0.9219,0.7764,0.9155,0.7699,0.9352,0.6914,0.9514,0.6827,0.9275,0.7025,0.9278,0.7154,0.9353,0.7322,0.9192,0.7392,0.9477,0.7447};
			return value;
		}
		private double[] getTextureCoordinate_9_33_point_2()
		{
			double[] value = {0.9543,0.7492,0.9534,0.7016,0.9633,0.697,0.9486,0.7096,0.9495,0.7179,0.956,0.7264,0.9627,0.7307,0.9675,0.7332,0.8759,0.3959,0.8628,0.3668,0.9757,0.7147,0.9016,0.7514,0.9124,0.7668,0.8987,0.7466,0.8902,0.7255,0.7883,0.4384,0.8184,0.4313,0.7627,0.4439,0.7605,0.4029,0.9681,0.6588,0.974,0.6751,0.9769,0.6939,0.9357,0.6444,0.9575,0.6354};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_coordIndex_1()
		{
			int[] value = {3,0,1,-1,1,2,3,-1,0,4,5,-1,5,1,0,-1,5,4,6,-1,6,7,5,-1,7,6,8,-1,8,9,7,-1,9,8,10,-1,10,11,9,-1,12,13,11,-1,11,10,12,-1,15,13,12,-1,12,14,15,-1,3,2,15,-1,15,14,3,-1,19,16,17,-1,17,18,19,-1,18,17,20,-1,20,21,18,-1,23,21,20,-1,20,22,23,-1,25,23,22,-1,22,24,25,-1,27,25,24,-1,24,26,27,-1,28,29,27,-1,27,26,28,-1,31,29,28,-1,28,30,31,-1,30,16,19,-1,19,31,30,-1,19,18,32,-1,18,21,32,-1,21,23,32,-1,23,25,32,-1,25,27,32,-1,27,29,32,-1,29,31,32,-1,31,19,32,-1,34,2,1,-1,1,33,34,-1,33,1,5,-1,5,35,33,-1,7,36,35,-1,35,5,7,-1,9,37,36,-1,36,7,9,-1,11,38,9,-1,11,13,39,-1,39,38,11,-1,39,13,15,-1,15,40,39,-1,41,40,2,-1,2,34,41,-1,42,43,0,-1,0,3,42,-1,42,3,14,-1,14,44,42,-1,14,12,45,-1,45,44,14,-1,46,45,12,-1,12,10,46,-1,8,47,46,-1,46,10,8,-1,8,6,48,-1,48,47,8,-1,6,4,49,-1,49,48,6,-1,4,0,43,-1,43,49,4,-1,43,42,50,-1,42,44,50,-1,44,45,50,-1,45,46,50,-1,46,47,50,-1,47,48,50,-1,48,49,50,-1,49,43,50,-1,16,34,33,-1,33,17,16,-1,17,33,35,-1,35,20,17,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,24,22,-1,26,24,37,-1,37,51,26,-1,52,28,26,-1,26,51,52,-1,28,52,41,-1,41,30,28,-1,41,34,16,-1,16,30,41,-1,52,51,38,-1,38,39,52,-1,40,41,52,-1,52,39,40,-1,38,51,37,-1,37,9,38,-1,40,15,2,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_texCoordIndex_1()
		{
			int[] value = {3,0,1,-1,1,2,3,-1,0,4,5,-1,5,1,0,-1,5,4,6,-1,6,7,5,-1,7,6,8,-1,8,9,7,-1,9,8,10,-1,10,11,9,-1,4,12,11,-1,11,10,4,-1,14,12,4,-1,4,13,14,-1,3,2,14,-1,14,13,3,-1,18,15,16,-1,16,17,18,-1,17,16,19,-1,19,20,17,-1,22,20,19,-1,19,21,22,-1,24,22,21,-1,21,23,24,-1,22,24,23,-1,23,21,22,-1,19,20,22,-1,22,21,19,-1,17,20,19,-1,19,16,17,-1,16,15,18,-1,18,17,16,-1,18,17,25,-1,17,20,25,-1,20,22,25,-1,22,24,25,-1,24,22,25,-1,22,20,25,-1,20,17,25,-1,17,18,25,-1,27,2,1,-1,1,26,27,-1,26,1,5,-1,5,28,26,-1,7,29,28,-1,28,5,7,-1,9,30,29,-1,29,7,9,-1,11,31,9,-1,11,12,32,-1,32,31,11,-1,32,12,14,-1,14,33,32,-1,34,33,2,-1,2,27,34,-1,35,36,0,-1,0,3,35,-1,35,3,13,-1,13,37,35,-1,13,4,38,-1,38,37,13,-1,39,38,4,-1,4,10,39,-1,8,40,39,-1,39,10,8,-1,8,6,41,-1,41,40,8,-1,6,4,38,-1,38,41,6,-1,4,0,36,-1,36,38,4,-1,36,35,42,-1,35,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,38,42,-1,38,36,42,-1,15,27,26,-1,26,16,15,-1,16,26,28,-1,28,19,16,-1,19,28,29,-1,29,21,19,-1,21,29,30,-1,30,23,21,-1,21,23,30,-1,30,43,21,-1,28,19,21,-1,21,43,28,-1,19,28,34,-1,34,16,19,-1,34,27,15,-1,15,16,34,-1,28,43,31,-1,31,32,28,-1,33,34,28,-1,28,32,33,-1,31,43,30,-1,30,9,31,-1,33,14,2,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_coordIndex_1()
		{
			int[] value = {0,1,2,-1,3,4,53,-1,53,54,3,-1,6,55,53,-1,53,4,6,-1,56,55,6,-1,6,8,56,-1,57,56,8,-1,8,10,57,-1,57,58,13,-1,13,11,57,-1,14,59,58,-1,58,12,14,-1,16,60,59,-1,59,14,16,-1,19,20,17,-1,17,18,19,-1,18,21,22,-1,22,19,18,-1,23,24,22,-1,22,21,23,-1,23,25,26,-1,26,24,23,-1,25,27,28,-1,28,26,25,-1,30,28,27,-1,27,29,30,-1,32,30,29,-1,29,31,32,-1,32,31,17,-1,17,20,32,-1,20,19,33,-1,19,22,33,-1,22,24,33,-1,24,26,33,-1,26,28,33,-1,28,30,33,-1,30,32,33,-1,32,20,33,-1,35,3,16,-1,16,34,35,-1,34,16,14,-1,14,36,34,-1,36,14,12,-1,12,37,36,-1,10,38,37,-1,37,12,10,-1,39,38,10,-1,10,8,39,-1,39,8,6,-1,6,40,39,-1,41,40,6,-1,6,4,41,-1,41,4,3,-1,3,35,41,-1,35,34,42,-1,34,36,42,-1,36,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,35,42,-1,1,43,44,-1,44,2,1,-1,45,43,1,-1,1,46,45,-1,47,45,46,-1,46,48,47,-1,49,47,48,-1,48,9,49,-1,11,50,49,-1,49,9,11,-1,50,11,13,-1,13,51,50,-1,15,52,51,-1,51,13,15,-1,15,2,44,-1,44,52,15,-1,17,44,43,-1,43,18,17,-1,43,45,21,-1,21,18,43,-1,45,47,23,-1,23,21,45,-1,47,49,25,-1,25,23,47,-1,27,25,49,-1,49,50,27,-1,51,29,27,-1,27,50,51,-1,29,51,52,-1,52,31,29,-1,31,52,44,-1,44,17,31,-1,1,0,5,-1,5,46,1,-1,7,48,46,-1,46,5,7,-1,16,3,54,-1,54,60,16,-1,9,48,7,-1,5,0,54,-1,54,53,5,-1,55,7,5,-1,5,53,55,-1,9,7,55,-1,55,56,9,-1,11,9,56,-1,56,57,11,-1,10,12,58,-1,58,57,10,-1,59,15,13,-1,13,58,59,-1,60,2,15,-1,15,59,60,-1,0,2,60,-1,60,54,0,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,3,4,41,-1,41,42,3,-1,6,43,41,-1,41,4,6,-1,44,43,6,-1,6,8,44,-1,45,44,8,-1,8,6,45,-1,45,46,11,-1,11,10,45,-1,3,47,46,-1,46,4,3,-1,13,48,47,-1,47,3,13,-1,16,17,14,-1,14,15,16,-1,15,18,19,-1,19,16,15,-1,20,21,19,-1,19,18,20,-1,20,22,23,-1,23,21,20,-1,22,20,21,-1,21,23,22,-1,19,21,20,-1,20,18,19,-1,16,19,18,-1,18,15,16,-1,16,15,14,-1,14,17,16,-1,17,16,24,-1,16,19,24,-1,19,21,24,-1,21,23,24,-1,23,21,24,-1,21,19,24,-1,19,16,24,-1,16,17,24,-1,26,3,13,-1,13,25,26,-1,25,13,3,-1,3,26,25,-1,26,3,4,-1,4,27,26,-1,6,28,27,-1,27,4,6,-1,29,28,6,-1,6,8,29,-1,29,8,6,-1,6,28,29,-1,27,28,6,-1,6,4,27,-1,27,4,3,-1,3,26,27,-1,26,25,30,-1,25,26,30,-1,26,27,30,-1,27,28,30,-1,28,29,30,-1,29,28,30,-1,28,27,30,-1,27,26,30,-1,1,31,32,-1,32,2,1,-1,33,31,1,-1,1,34,33,-1,35,33,34,-1,34,36,35,-1,37,35,36,-1,36,9,37,-1,10,38,37,-1,37,9,10,-1,38,10,11,-1,11,39,38,-1,12,40,39,-1,39,11,12,-1,12,2,32,-1,32,40,12,-1,14,32,31,-1,31,15,14,-1,31,33,18,-1,18,15,31,-1,33,35,20,-1,20,18,33,-1,35,37,22,-1,22,20,35,-1,20,22,37,-1,37,38,20,-1,39,18,20,-1,20,38,39,-1,18,39,40,-1,40,15,18,-1,15,40,32,-1,32,14,15,-1,1,0,5,-1,5,34,1,-1,7,36,34,-1,34,5,7,-1,13,3,42,-1,42,48,13,-1,9,36,7,-1,5,0,42,-1,42,41,5,-1,43,7,5,-1,5,41,43,-1,9,7,43,-1,43,44,9,-1,10,9,44,-1,44,45,10,-1,6,4,46,-1,46,45,6,-1,47,12,11,-1,11,46,47,-1,48,2,12,-1,12,47,48,-1,0,2,48,-1,48,42,0,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_coordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,8,33,32,-1,32,7,8,-1,7,32,31,-1,31,9,7,-1,10,11,0,-1,0,3,10,-1,3,5,12,-1,12,10,3,-1,15,16,13,-1,13,14,15,-1,1,8,7,-1,7,2,1,-1,2,7,9,-1,9,6,2,-1,9,31,30,-1,30,17,9,-1,17,4,6,-1,6,9,17,-1,3,2,6,-1,0,11,13,-1,13,16,0,-1,20,21,18,-1,18,19,20,-1,22,19,5,-1,5,4,22,-1,24,35,34,-1,34,23,24,-1,35,24,25,-1,25,36,35,-1,18,40,26,-1,26,19,18,-1,19,26,12,-1,12,5,19,-1,27,28,15,-1,15,14,27,-1,20,24,23,-1,23,21,20,-1,22,25,24,-1,24,20,22,-1,36,25,17,-1,17,30,36,-1,25,22,4,-1,4,17,25,-1,19,22,20,-1,28,27,40,-1,40,18,28,-1,30,31,32,-1,32,37,30,-1,36,30,37,-1,37,35,36,-1,32,33,29,-1,29,37,32,-1,29,34,35,-1,35,37,29,-1,14,13,38,-1,38,39,14,-1,13,11,38,-1,27,14,39,-1,39,41,27,-1,27,41,40,-1,11,10,42,-1,10,12,42,-1,12,26,42,-1,26,40,42,-1,40,41,42,-1,41,39,42,-1,39,38,42,-1,38,11,42,-1,45,46,47,-1,45,47,48,-1,44,45,48,-1,1,0,44,-1,44,43,1,-1,0,16,45,-1,45,44,0,-1,16,15,46,-1,46,45,16,-1,15,28,47,-1,47,46,15,-1,28,18,48,-1,48,47,28,-1,18,21,49,-1,49,48,18,-1,21,23,50,-1,50,49,21,-1,23,34,51,-1,51,50,23,-1,34,29,52,-1,52,51,34,-1,29,33,53,-1,53,52,29,-1,33,8,54,-1,54,53,33,-1,8,1,43,-1,43,54,8,-1,49,50,54,-1,54,43,44,-1,49,54,44,-1,48,49,44,-1,50,51,52,-1,50,52,53,-1,50,53,54,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,37,10,7,-1,7,36,37,-1,36,7,11,-1,11,38,36,-1,13,14,0,-1,0,3,13,-1,3,5,15,-1,15,13,3,-1,18,19,16,-1,16,17,18,-1,1,9,8,-1,8,2,1,-1,2,8,12,-1,12,6,2,-1,38,11,20,-1,20,39,38,-1,21,4,6,-1,6,12,21,-1,3,2,6,-1,22,23,16,-1,16,19,22,-1,2,1,0,-1,0,3,2,-1,6,3,5,-1,5,4,6,-1,36,7,10,-1,10,37,36,-1,7,36,38,-1,38,11,7,-1,0,14,13,-1,13,3,0,-1,3,13,15,-1,15,5,3,-1,24,25,18,-1,18,17,24,-1,2,8,9,-1,9,1,2,-1,6,12,8,-1,8,2,6,-1,11,38,39,-1,39,20,11,-1,12,6,4,-1,4,21,12,-1,3,6,2,-1,25,24,42,-1,42,26,25,-1,29,30,31,-1,31,27,29,-1,34,29,27,-1,27,33,34,-1,31,32,28,-1,28,27,31,-1,28,35,33,-1,33,27,28,-1,17,16,40,-1,40,41,17,-1,16,23,40,-1,24,17,41,-1,41,43,24,-1,24,43,42,-1,44,45,46,-1,45,47,46,-1,47,48,46,-1,48,49,46,-1,49,50,46,-1,50,51,46,-1,51,52,46,-1,52,44,46,-1,55,56,57,-1,55,57,58,-1,54,55,58,-1,1,0,54,-1,54,53,1,-1,22,19,55,-1,55,54,22,-1,19,18,56,-1,56,55,19,-1,18,25,57,-1,57,56,18,-1,25,26,58,-1,58,57,25,-1,0,1,53,-1,53,58,0,-1,1,9,59,-1,59,53,1,-1,64,65,66,-1,66,67,64,-1,60,61,62,-1,62,73,60,-1,61,74,75,-1,75,62,61,-1,68,69,70,-1,70,71,68,-1,9,1,53,-1,53,63,9,-1,53,59,63,-1,63,53,54,-1,53,63,54,-1,58,53,54,-1,67,66,72,-1,67,72,71,-1,67,71,70,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_coordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,6,7,4,-1,4,5,6,-1,8,9,3,-1,3,4,8,-1,10,11,35,-1,35,34,10,-1,34,33,12,-1,12,10,34,-1,0,50,49,-1,49,1,0,-1,15,16,13,-1,13,14,15,-1,37,13,16,-1,16,32,37,-1,10,7,6,-1,6,11,10,-1,8,7,10,-1,10,12,8,-1,14,47,46,-1,46,50,14,-1,14,13,48,-1,48,47,14,-1,13,37,56,-1,56,48,13,-1,14,50,0,-1,0,15,14,-1,16,17,43,-1,43,32,16,-1,12,17,9,-1,9,8,12,-1,4,7,8,-1,1,18,19,-1,19,2,1,-1,20,21,6,-1,6,5,20,-1,23,19,18,-1,18,22,23,-1,40,35,11,-1,11,24,40,-1,24,25,38,-1,38,40,24,-1,49,54,18,-1,18,1,49,-1,27,28,26,-1,26,22,27,-1,39,26,28,-1,28,41,39,-1,6,21,24,-1,24,11,6,-1,21,29,25,-1,25,24,21,-1,51,52,27,-1,27,54,51,-1,52,53,28,-1,28,27,52,-1,57,41,28,-1,28,53,57,-1,27,22,18,-1,18,54,27,-1,26,39,44,-1,44,30,26,-1,22,26,30,-1,30,23,22,-1,20,29,21,-1,2,5,4,-1,4,3,2,-1,9,15,0,-1,0,3,9,-1,17,12,33,-1,33,43,17,-1,17,16,15,-1,15,9,17,-1,20,5,2,-1,2,19,20,-1,29,20,19,-1,19,23,29,-1,38,25,30,-1,30,44,38,-1,25,29,23,-1,23,30,25,-1,45,43,33,-1,33,42,45,-1,31,36,37,-1,37,32,31,-1,37,36,55,-1,55,56,37,-1,31,45,44,-1,44,39,31,-1,36,31,39,-1,39,41,36,-1,57,55,36,-1,36,41,57,-1,34,35,42,-1,42,33,34,-1,42,35,40,-1,40,38,42,-1,31,32,43,-1,43,45,31,-1,45,42,38,-1,38,44,45,-1,59,60,61,-1,59,61,62,-1,62,63,64,-1,62,64,65,-1,65,66,67,-1,67,68,69,-1,65,67,69,-1,62,65,69,-1,59,62,69,-1,59,69,58,-1,46,47,59,-1,59,58,46,-1,47,48,60,-1,60,59,47,-1,48,56,61,-1,61,60,48,-1,56,55,62,-1,62,61,56,-1,55,57,63,-1,63,62,55,-1,57,53,64,-1,64,63,57,-1,53,52,65,-1,65,64,53,-1,52,51,66,-1,66,65,52,-1,51,54,67,-1,67,66,51,-1,54,49,68,-1,68,67,54,-1,49,50,69,-1,69,68,49,-1,50,46,58,-1,58,69,50,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,6,7,4,-1,4,5,6,-1,8,9,3,-1,3,4,8,-1,25,37,10,-1,10,11,25,-1,11,15,38,-1,38,25,11,-1,0,65,64,-1,64,1,0,-1,18,19,16,-1,16,17,18,-1,21,56,57,-1,57,20,21,-1,12,23,22,-1,22,13,12,-1,24,23,12,-1,12,14,24,-1,26,60,59,-1,59,65,26,-1,17,16,62,-1,62,61,17,-1,56,21,71,-1,71,63,56,-1,26,65,0,-1,0,27,26,-1,57,58,29,-1,29,20,57,-1,14,28,30,-1,30,24,14,-1,4,7,8,-1,1,31,32,-1,32,2,1,-1,33,34,6,-1,6,5,33,-1,36,32,31,-1,31,35,36,-1,11,10,37,-1,37,25,11,-1,25,38,15,-1,15,11,25,-1,64,68,31,-1,31,1,64,-1,17,16,19,-1,19,18,17,-1,20,57,56,-1,56,21,20,-1,22,23,12,-1,12,13,22,-1,23,24,14,-1,14,12,23,-1,66,67,39,-1,39,68,66,-1,61,62,16,-1,16,17,61,-1,71,21,56,-1,56,63,71,-1,39,35,31,-1,31,68,39,-1,57,20,29,-1,29,58,57,-1,18,19,28,-1,28,30,18,-1,33,40,34,-1,2,5,4,-1,4,3,2,-1,9,27,0,-1,0,3,9,-1,58,38,15,-1,15,29,58,-1,28,19,18,-1,18,30,28,-1,33,5,2,-1,2,32,33,-1,40,33,32,-1,32,36,40,-1,15,38,58,-1,58,29,15,-1,14,24,30,-1,30,28,14,-1,42,45,46,-1,46,41,42,-1,43,44,49,-1,49,50,43,-1,49,44,69,-1,69,70,49,-1,43,42,51,-1,51,52,43,-1,44,43,52,-1,52,55,44,-1,72,69,44,-1,44,55,72,-1,48,47,41,-1,41,46,48,-1,41,47,53,-1,53,54,41,-1,43,50,45,-1,45,42,43,-1,42,41,54,-1,54,51,42,-1,74,75,76,-1,74,76,77,-1,77,78,79,-1,77,79,80,-1,80,111,112,-1,112,113,114,-1,80,112,114,-1,77,80,114,-1,74,77,114,-1,74,114,115,-1,99,100,101,-1,101,102,99,-1,100,103,104,-1,104,101,100,-1,91,92,93,-1,93,94,91,-1,85,86,87,-1,87,88,85,-1,86,89,90,-1,90,87,86,-1,95,96,97,-1,97,98,95,-1,105,106,107,-1,107,108,105,-1,106,109,110,-1,110,107,106,-1,66,68,82,-1,82,81,66,-1,68,64,83,-1,83,82,68,-1,64,65,84,-1,84,83,64,-1,65,59,73,-1,73,84,65,-1};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_13_69_point_1()
		{
			double[] value = {0.1645,0.2682,0.119,0.2656,0.119,0.2333,0.1642,0.2355,0.1585,0.1986,0.119,0.1964,0.119,0.1664,0.1572,0.175,0.1786,0.2029,0.1893,0.2321,0.2954,0.0497,0.2633,0.0308,0.2607,0.0443,0.2924,0.0621,0.2275,0.0325,0.2299,0.0183,0.1375,0.0244,0.1392,0.0478,0.1726,0.0473,0.1726,0.0227,0.1726,0.0066,0.1366,0.0058,0.2807,0.084,0.2512,0.067,0.2227,0.0576,0.2601,0.0398,0.2197,0.2888,0.2029,0.2547,0.1996,0.0258,0.2,0.0107,0.1962,0.0514,0.0735,0.2682,0.0739,0.2355,0.0796,0.1986,0.0809,0.175,0.0352,0.2547,0.0488,0.232,0.2918,0.0575,0.2269,0.0279,0.0183,0.2887,0.0595,0.2029,0.9339,0.9522,0.9339,0.9254,0.9339,0.9014,0.9339,0.8697,0.9832,0.9254,0.9789,0.9522,0.9339,0.9904,0.9656,0.9806,0.9857,0.8697,0.9861,0.9014,0.8846,0.9254,0.8818,0.9014,0.9023,0.9806,0.889,0.9522,0.8822,0.8697,0.1368,0.0198,0.172,0.0181,0.1989,0.0212,0.1959,0.3397,0.233,0.3209,0.1086,0.051,0.1073,0.0299,0.1066,0.0253,0.1188,0.3009,0.1607,0.3056,0.042,0.3397,0.0049,0.3208,0.0774,0.3058,0.9339,0.8425,0.9842,0.8425,0.1053,0.0075,0.8836,0.8425,0.1925,0.3379,0.0929,0.0472,0.0926,0.0413,0.0916,0.0386,0.0732,0.0453,0.0548,0.052,0.0558,0.0548,0.0593,0.0595,0.0051,0.3217,0.0786,0.3181,0.1161,0.313,0.1637,0.3136,0.8849,0.8425,0.9342,0.8425,0.9342,0.8153,0.8926,0.8153,0.9835,0.8425,0.9758,0.8153,0.1064,0.0254,0.1052,0.0081,0.09,0.0108,0.0907,0.0265,0.1052,0.0081,0.1064,0.0254,0.0907,0.0265,0.09,0.0108,0.1068,0.0747};
			return value;
		}
		private double[] getTextureCoordinate_13_69_point_2()
		{
			double[] value = {0.1086,0.0517,0.0941,0.0542,0.0982,0.0753,0.1071,0.03,0.0934,0.041,0.1071,0.03,0.1086,0.0517,0.0941,0.0542,0.0934,0.041,0.1068,0.0747,0.0982,0.0754,0.0683,0.0723,0.0739,0.0833,0.0866,0.0821,0.097,0.0748,0.0943,0.0628};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_coordIndex_1()
		{
			int[] value = {3,2,1,-1,1,0,3,-1,0,1,5,-1,5,4,0,-1,5,7,6,-1,6,4,5,-1,7,9,8,-1,8,6,7,-1,9,11,10,-1,10,8,9,-1,12,10,11,-1,11,13,12,-1,15,14,12,-1,12,13,15,-1,3,14,15,-1,15,2,3,-1,19,18,17,-1,17,16,19,-1,18,21,20,-1,20,17,18,-1,23,22,20,-1,20,21,23,-1,25,24,22,-1,22,23,25,-1,27,26,24,-1,24,25,27,-1,28,26,27,-1,27,29,28,-1,31,30,28,-1,28,29,31,-1,30,31,19,-1,19,16,30,-1,19,32,18,-1,18,32,21,-1,21,32,23,-1,23,32,25,-1,25,32,27,-1,27,32,29,-1,29,32,31,-1,31,32,19,-1,34,33,1,-1,1,2,34,-1,33,35,5,-1,5,1,33,-1,7,5,35,-1,35,36,7,-1,9,7,36,-1,36,37,9,-1,11,9,38,-1,11,38,39,-1,39,13,11,-1,39,40,15,-1,15,13,39,-1,41,34,2,-1,2,40,41,-1,42,3,0,-1,0,43,42,-1,42,44,14,-1,14,3,42,-1,14,44,45,-1,45,12,14,-1,46,10,12,-1,12,45,46,-1,8,10,46,-1,46,47,8,-1,8,47,48,-1,48,6,8,-1,6,48,49,-1,49,4,6,-1,4,49,43,-1,43,0,4,-1,43,50,42,-1,42,50,44,-1,44,50,45,-1,45,50,46,-1,46,50,47,-1,47,50,48,-1,48,50,49,-1,49,50,43,-1,16,17,33,-1,33,34,16,-1,17,20,35,-1,35,33,17,-1,20,22,36,-1,36,35,20,-1,22,24,37,-1,37,36,22,-1,26,51,37,-1,37,24,26,-1,52,51,26,-1,26,28,52,-1,28,30,41,-1,41,52,28,-1,41,30,16,-1,16,34,41,-1,52,39,38,-1,38,51,52,-1,40,39,52,-1,52,41,40,-1,38,9,37,-1,37,51,38,-1,40,2,15,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_texCoordIndex_1()
		{
			int[] value = {3,2,1,-1,1,0,3,-1,0,1,5,-1,5,4,0,-1,5,7,6,-1,6,4,5,-1,7,9,8,-1,8,6,7,-1,9,11,10,-1,10,8,9,-1,4,10,11,-1,11,12,4,-1,14,13,4,-1,4,12,14,-1,3,13,14,-1,14,2,3,-1,18,17,16,-1,16,15,18,-1,17,20,19,-1,19,16,17,-1,22,21,19,-1,19,20,22,-1,24,23,21,-1,21,22,24,-1,22,21,23,-1,23,24,22,-1,19,21,22,-1,22,20,19,-1,17,16,19,-1,19,20,17,-1,16,17,18,-1,18,15,16,-1,18,25,17,-1,17,25,20,-1,20,25,22,-1,22,25,24,-1,24,25,22,-1,22,25,20,-1,20,25,17,-1,17,25,18,-1,27,26,1,-1,1,2,27,-1,26,28,5,-1,5,1,26,-1,7,5,28,-1,28,29,7,-1,9,7,29,-1,29,30,9,-1,11,9,31,-1,11,31,32,-1,32,12,11,-1,32,33,14,-1,14,12,32,-1,34,27,2,-1,2,33,34,-1,35,3,0,-1,0,36,35,-1,35,37,13,-1,13,3,35,-1,13,37,38,-1,38,4,13,-1,39,10,4,-1,4,38,39,-1,8,10,39,-1,39,40,8,-1,8,40,41,-1,41,6,8,-1,6,41,38,-1,38,4,6,-1,4,38,36,-1,36,0,4,-1,36,42,35,-1,35,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,38,-1,38,42,36,-1,15,16,26,-1,26,27,15,-1,16,19,28,-1,28,26,16,-1,19,21,29,-1,29,28,19,-1,21,23,30,-1,30,29,21,-1,21,43,30,-1,30,23,21,-1,28,43,21,-1,21,19,28,-1,19,16,34,-1,34,28,19,-1,34,16,15,-1,15,27,34,-1,28,32,31,-1,31,43,28,-1,33,32,28,-1,28,34,33,-1,31,9,30,-1,30,43,31,-1,33,2,14,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_coordIndex_1()
		{
			int[] value = {0,2,1,-1,3,54,53,-1,53,4,3,-1,6,4,53,-1,53,55,6,-1,56,8,6,-1,6,55,56,-1,57,10,8,-1,8,56,57,-1,57,11,13,-1,13,58,57,-1,14,12,58,-1,58,59,14,-1,16,14,59,-1,59,60,16,-1,19,18,17,-1,17,20,19,-1,18,19,22,-1,22,21,18,-1,23,21,22,-1,22,24,23,-1,23,24,26,-1,26,25,23,-1,25,26,28,-1,28,27,25,-1,30,29,27,-1,27,28,30,-1,32,31,29,-1,29,30,32,-1,32,20,17,-1,17,31,32,-1,20,33,19,-1,19,33,22,-1,22,33,24,-1,24,33,26,-1,26,33,28,-1,28,33,30,-1,30,33,32,-1,32,33,20,-1,35,34,16,-1,16,3,35,-1,34,36,14,-1,14,16,34,-1,36,37,12,-1,12,14,36,-1,10,12,37,-1,37,38,10,-1,39,8,10,-1,10,38,39,-1,39,40,6,-1,6,8,39,-1,41,4,6,-1,6,40,41,-1,41,35,3,-1,3,4,41,-1,35,42,34,-1,34,42,36,-1,36,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,35,-1,1,2,44,-1,44,43,1,-1,45,46,1,-1,1,43,45,-1,47,48,46,-1,46,45,47,-1,49,9,48,-1,48,47,49,-1,11,9,49,-1,49,50,11,-1,50,51,13,-1,13,11,50,-1,15,13,51,-1,51,52,15,-1,15,52,44,-1,44,2,15,-1,17,18,43,-1,43,44,17,-1,43,18,21,-1,21,45,43,-1,45,21,23,-1,23,47,45,-1,47,23,25,-1,25,49,47,-1,27,50,49,-1,49,25,27,-1,51,50,27,-1,27,29,51,-1,29,31,52,-1,52,51,29,-1,31,17,44,-1,44,52,31,-1,1,46,5,-1,5,0,1,-1,7,5,46,-1,46,48,7,-1,16,60,54,-1,54,3,16,-1,9,7,48,-1,5,53,54,-1,54,0,5,-1,55,53,5,-1,5,7,55,-1,9,56,55,-1,55,7,9,-1,11,57,56,-1,56,9,11,-1,10,57,58,-1,58,12,10,-1,59,58,13,-1,13,15,59,-1,60,59,15,-1,15,2,60,-1,0,54,60,-1,60,2,0,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_texCoordIndex_1()
		{
			int[] value = {0,2,1,-1,3,42,41,-1,41,4,3,-1,6,4,41,-1,41,43,6,-1,44,8,6,-1,6,43,44,-1,45,6,8,-1,8,44,45,-1,45,10,11,-1,11,46,45,-1,3,4,46,-1,46,47,3,-1,13,3,47,-1,47,48,13,-1,16,15,14,-1,14,17,16,-1,15,16,19,-1,19,18,15,-1,20,18,19,-1,19,21,20,-1,20,21,23,-1,23,22,20,-1,22,23,21,-1,21,20,22,-1,19,18,20,-1,20,21,19,-1,16,15,18,-1,18,19,16,-1,16,17,14,-1,14,15,16,-1,17,24,16,-1,16,24,19,-1,19,24,21,-1,21,24,23,-1,23,24,21,-1,21,24,19,-1,19,24,16,-1,16,24,17,-1,26,25,13,-1,13,3,26,-1,25,26,3,-1,3,13,25,-1,26,27,4,-1,4,3,26,-1,6,4,27,-1,27,28,6,-1,29,8,6,-1,6,28,29,-1,29,28,6,-1,6,8,29,-1,27,4,6,-1,6,28,27,-1,27,26,3,-1,3,4,27,-1,26,30,25,-1,25,30,26,-1,26,30,27,-1,27,30,28,-1,28,30,29,-1,29,30,28,-1,28,30,27,-1,27,30,26,-1,1,2,32,-1,32,31,1,-1,33,34,1,-1,1,31,33,-1,35,36,34,-1,34,33,35,-1,37,9,36,-1,36,35,37,-1,10,9,37,-1,37,38,10,-1,38,39,11,-1,11,10,38,-1,12,11,39,-1,39,40,12,-1,12,40,32,-1,32,2,12,-1,14,15,31,-1,31,32,14,-1,31,15,18,-1,18,33,31,-1,33,18,20,-1,20,35,33,-1,35,20,22,-1,22,37,35,-1,20,38,37,-1,37,22,20,-1,39,38,20,-1,20,18,39,-1,18,15,40,-1,40,39,18,-1,15,14,32,-1,32,40,15,-1,1,34,5,-1,5,0,1,-1,7,5,34,-1,34,36,7,-1,13,48,42,-1,42,3,13,-1,9,7,36,-1,5,41,42,-1,42,0,5,-1,43,41,5,-1,5,7,43,-1,9,44,43,-1,43,7,9,-1,10,45,44,-1,44,9,10,-1,6,45,46,-1,46,4,6,-1,47,46,11,-1,11,12,47,-1,48,47,12,-1,12,2,48,-1,0,42,48,-1,48,2,0,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_coordIndex_1()
		{
			int[] value = {2,1,0,-1,0,3,2,-1,3,5,4,-1,4,6,3,-1,8,7,32,-1,32,33,8,-1,7,9,31,-1,31,32,7,-1,10,3,0,-1,0,11,10,-1,3,10,12,-1,12,5,3,-1,15,14,13,-1,13,16,15,-1,1,2,7,-1,7,8,1,-1,2,6,9,-1,9,7,2,-1,9,17,30,-1,30,31,9,-1,17,9,6,-1,6,4,17,-1,3,6,2,-1,0,16,13,-1,13,11,0,-1,20,19,18,-1,18,21,20,-1,22,4,5,-1,5,19,22,-1,24,23,34,-1,34,35,24,-1,35,36,25,-1,25,24,35,-1,18,19,26,-1,26,40,18,-1,19,5,12,-1,12,26,19,-1,27,14,15,-1,15,28,27,-1,20,21,23,-1,23,24,20,-1,22,20,24,-1,24,25,22,-1,36,30,17,-1,17,25,36,-1,25,17,4,-1,4,22,25,-1,19,20,22,-1,28,18,40,-1,40,27,28,-1,30,37,32,-1,32,31,30,-1,36,35,37,-1,37,30,36,-1,32,37,29,-1,29,33,32,-1,29,37,35,-1,35,34,29,-1,14,39,38,-1,38,13,14,-1,13,38,11,-1,27,41,39,-1,39,14,27,-1,27,40,41,-1,11,42,10,-1,10,42,12,-1,12,42,26,-1,26,42,40,-1,40,42,41,-1,41,42,39,-1,39,42,38,-1,38,42,11,-1,47,46,45,-1,48,47,45,-1,44,48,45,-1,1,43,44,-1,44,0,1,-1,0,44,45,-1,45,16,0,-1,16,45,46,-1,46,15,16,-1,15,46,47,-1,47,28,15,-1,28,47,48,-1,48,18,28,-1,18,48,49,-1,49,21,18,-1,21,49,50,-1,50,23,21,-1,23,50,51,-1,51,34,23,-1,34,51,52,-1,52,29,34,-1,29,52,53,-1,53,33,29,-1,33,53,54,-1,54,8,33,-1,8,54,43,-1,43,1,8,-1,44,43,54,-1,54,50,49,-1,44,54,49,-1,48,44,49,-1,50,54,53,-1,50,53,52,-1,50,52,51,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_texCoordIndex_1()
		{
			int[] value = {2,1,0,-1,0,3,2,-1,3,5,4,-1,4,6,3,-1,37,36,7,-1,7,10,37,-1,36,38,11,-1,11,7,36,-1,13,3,0,-1,0,14,13,-1,3,13,15,-1,15,5,3,-1,18,17,16,-1,16,19,18,-1,1,2,8,-1,8,9,1,-1,2,6,12,-1,12,8,2,-1,38,39,20,-1,20,11,38,-1,21,12,6,-1,6,4,21,-1,3,6,2,-1,22,19,16,-1,16,23,22,-1,2,3,0,-1,0,1,2,-1,6,4,5,-1,5,3,6,-1,36,37,10,-1,10,7,36,-1,7,11,38,-1,38,36,7,-1,0,3,13,-1,13,14,0,-1,3,5,15,-1,15,13,3,-1,24,17,18,-1,18,25,24,-1,2,1,9,-1,9,8,2,-1,6,2,8,-1,8,12,6,-1,11,20,39,-1,39,38,11,-1,12,21,4,-1,4,6,12,-1,3,2,6,-1,25,26,42,-1,42,24,25,-1,29,27,31,-1,31,30,29,-1,34,33,27,-1,27,29,34,-1,31,27,28,-1,28,32,31,-1,28,27,33,-1,33,35,28,-1,17,41,40,-1,40,16,17,-1,16,40,23,-1,24,43,41,-1,41,17,24,-1,24,42,43,-1,44,46,45,-1,45,46,47,-1,47,46,48,-1,48,46,49,-1,49,46,50,-1,50,46,51,-1,51,46,52,-1,52,46,44,-1,57,56,55,-1,58,57,55,-1,54,58,55,-1,1,53,54,-1,54,0,1,-1,22,54,55,-1,55,19,22,-1,19,55,56,-1,56,18,19,-1,18,56,57,-1,57,25,18,-1,25,57,58,-1,58,26,25,-1,0,58,53,-1,53,1,0,-1,1,53,59,-1,59,9,1,-1,64,67,66,-1,66,65,64,-1,60,73,62,-1,62,61,60,-1,61,62,75,-1,75,74,61,-1,68,71,70,-1,70,69,68,-1,9,63,53,-1,53,1,9,-1,54,53,63,-1,63,59,53,-1,54,63,53,-1,58,54,53,-1,67,70,71,-1,67,71,72,-1,67,72,66,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_coordIndex_1()
		{
			int[] value = {1,0,3,-1,3,2,1,-1,6,5,4,-1,4,7,6,-1,8,4,3,-1,3,9,8,-1,10,34,35,-1,35,11,10,-1,34,10,12,-1,12,33,34,-1,0,1,49,-1,49,50,0,-1,15,14,13,-1,13,16,15,-1,37,32,16,-1,16,13,37,-1,10,11,6,-1,6,7,10,-1,8,12,10,-1,10,7,8,-1,14,50,46,-1,46,47,14,-1,14,47,48,-1,48,13,14,-1,13,48,56,-1,56,37,13,-1,14,15,0,-1,0,50,14,-1,16,32,43,-1,43,17,16,-1,12,8,9,-1,9,17,12,-1,4,8,7,-1,1,2,19,-1,19,18,1,-1,20,5,6,-1,6,21,20,-1,23,22,18,-1,18,19,23,-1,40,24,11,-1,11,35,40,-1,24,40,38,-1,38,25,24,-1,49,1,18,-1,18,54,49,-1,27,22,26,-1,26,28,27,-1,39,41,28,-1,28,26,39,-1,6,11,24,-1,24,21,6,-1,21,24,25,-1,25,29,21,-1,51,54,27,-1,27,52,51,-1,52,27,28,-1,28,53,52,-1,57,53,28,-1,28,41,57,-1,27,54,18,-1,18,22,27,-1,26,30,44,-1,44,39,26,-1,22,23,30,-1,30,26,22,-1,20,21,29,-1,2,3,4,-1,4,5,2,-1,9,3,0,-1,0,15,9,-1,17,43,33,-1,33,12,17,-1,17,9,15,-1,15,16,17,-1,20,19,2,-1,2,5,20,-1,29,23,19,-1,19,20,29,-1,38,44,30,-1,30,25,38,-1,25,30,23,-1,23,29,25,-1,45,42,33,-1,33,43,45,-1,31,32,37,-1,37,36,31,-1,37,56,55,-1,55,36,37,-1,31,39,44,-1,44,45,31,-1,36,41,39,-1,39,31,36,-1,57,41,36,-1,36,55,57,-1,34,33,42,-1,42,35,34,-1,42,38,40,-1,40,35,42,-1,31,45,43,-1,43,32,31,-1,45,44,38,-1,38,42,45,-1,59,58,69,-1,69,68,67,-1,67,66,65,-1,69,67,65,-1,64,63,62,-1,65,64,62,-1,69,65,62,-1,59,69,62,-1,59,62,61,-1,59,61,60,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,61,-1,61,56,48,-1,56,61,62,-1,62,55,56,-1,55,62,63,-1,63,57,55,-1,57,63,64,-1,64,53,57,-1,53,64,65,-1,65,52,53,-1,52,65,66,-1,66,51,52,-1,51,66,67,-1,67,54,51,-1,54,67,68,-1,68,49,54,-1,49,68,69,-1,69,50,49,-1,50,69,58,-1,58,46,50,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_texCoordIndex_1()
		{
			int[] value = {1,0,3,-1,3,2,1,-1,6,5,4,-1,4,7,6,-1,8,4,3,-1,3,9,8,-1,25,11,10,-1,10,37,25,-1,11,25,38,-1,38,15,11,-1,0,1,64,-1,64,65,0,-1,18,17,16,-1,16,19,18,-1,21,20,57,-1,57,56,21,-1,12,13,22,-1,22,23,12,-1,24,14,12,-1,12,23,24,-1,26,65,59,-1,59,60,26,-1,17,61,62,-1,62,16,17,-1,56,63,71,-1,71,21,56,-1,26,27,0,-1,0,65,26,-1,57,20,29,-1,29,58,57,-1,14,24,30,-1,30,28,14,-1,4,8,7,-1,1,2,32,-1,32,31,1,-1,33,5,6,-1,6,34,33,-1,36,35,31,-1,31,32,36,-1,11,25,37,-1,37,10,11,-1,25,11,15,-1,15,38,25,-1,64,1,31,-1,31,68,64,-1,17,18,19,-1,19,16,17,-1,20,21,56,-1,56,57,20,-1,22,13,12,-1,12,23,22,-1,23,12,14,-1,14,24,23,-1,66,68,39,-1,39,67,66,-1,61,17,16,-1,16,62,61,-1,71,63,56,-1,56,21,71,-1,39,68,31,-1,31,35,39,-1,57,58,29,-1,29,20,57,-1,18,30,28,-1,28,19,18,-1,33,34,40,-1,2,3,4,-1,4,5,2,-1,9,3,0,-1,0,27,9,-1,58,29,15,-1,15,38,58,-1,28,30,18,-1,18,19,28,-1,33,32,2,-1,2,5,33,-1,40,36,32,-1,32,33,40,-1,15,29,58,-1,58,38,15,-1,14,28,30,-1,30,24,14,-1,42,41,46,-1,46,45,42,-1,43,50,49,-1,49,44,43,-1,49,70,69,-1,69,44,49,-1,43,52,51,-1,51,42,43,-1,44,55,52,-1,52,43,44,-1,72,55,44,-1,44,69,72,-1,48,46,41,-1,41,47,48,-1,41,54,53,-1,53,47,41,-1,43,42,45,-1,45,50,43,-1,42,51,54,-1,54,41,42,-1,74,115,114,-1,114,113,112,-1,112,111,80,-1,114,112,80,-1,79,78,77,-1,80,79,77,-1,114,80,77,-1,74,114,77,-1,74,77,76,-1,74,76,75,-1,99,102,101,-1,101,100,99,-1,100,101,104,-1,104,103,100,-1,91,94,93,-1,93,92,91,-1,85,88,87,-1,87,86,85,-1,86,87,90,-1,90,89,86,-1,95,98,97,-1,97,96,95,-1,105,108,107,-1,107,106,105,-1,106,107,110,-1,110,109,106,-1,66,81,82,-1,82,68,66,-1,68,82,83,-1,83,64,68,-1,64,83,84,-1,84,65,64,-1,65,84,73,-1,73,59,65,-1};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_13_109_point_1()
		{
			double[] value = {0.1645,0.2682,0.119,0.2656,0.119,0.2333,0.1642,0.2355,0.1585,0.1986,0.119,0.1964,0.119,0.1664,0.1572,0.175,0.1786,0.2029,0.1893,0.2321,0.2954,0.0497,0.2633,0.0308,0.2607,0.0443,0.2924,0.0621,0.2275,0.0325,0.2299,0.0183,0.1375,0.0244,0.1392,0.0478,0.1726,0.0473,0.1726,0.0227,0.1726,0.0066,0.1366,0.0058,0.2807,0.084,0.2512,0.067,0.2227,0.0576,0.2601,0.0398,0.2197,0.2888,0.2029,0.2547,0.1996,0.0258,0.2,0.0107,0.1962,0.0514,0.0735,0.2682,0.0739,0.2355,0.0796,0.1986,0.0809,0.175,0.0352,0.2547,0.0488,0.232,0.2918,0.0575,0.2269,0.0279,0.0183,0.2887,0.0595,0.2029,0.9339,0.9522,0.9339,0.9254,0.9339,0.9014,0.9339,0.8697,0.9832,0.9254,0.9789,0.9522,0.9339,0.9904,0.9656,0.9806,0.9857,0.8697,0.9861,0.9014,0.8846,0.9254,0.8818,0.9014,0.9023,0.9806,0.889,0.9522,0.8822,0.8697,0.1368,0.0198,0.172,0.0181,0.1989,0.0212,0.1959,0.3397,0.233,0.3209,0.1086,0.051,0.1073,0.0299,0.1066,0.0253,0.1188,0.3009,0.1607,0.3056,0.042,0.3397,0.0049,0.3208,0.0774,0.3058,0.9339,0.8425,0.9842,0.8425,0.1053,0.0075,0.8836,0.8425,0.1925,0.3379,0.0929,0.0472,0.0926,0.0413,0.0916,0.0386,0.0732,0.0453,0.0548,0.052,0.0558,0.0548,0.0593,0.0595,0.0051,0.3217,0.0786,0.3181,0.1161,0.313,0.1637,0.3136,0.8849,0.8425,0.9342,0.8425,0.9342,0.8153,0.8926,0.8153,0.9835,0.8425,0.9758,0.8153,0.1064,0.0254,0.1052,0.0081,0.09,0.0108,0.0907,0.0265,0.1052,0.0081,0.1064,0.0254,0.0907,0.0265,0.09,0.0108,0.1068,0.0747};
			return value;
		}
		private double[] getTextureCoordinate_13_109_point_2()
		{
			double[] value = {0.1086,0.0517,0.0941,0.0542,0.0982,0.0753,0.1071,0.03,0.0934,0.041,0.1071,0.03,0.1086,0.0517,0.0941,0.0542,0.0934,0.041,0.1068,0.0747,0.0982,0.0754,0.0683,0.0723,0.0739,0.0833,0.0866,0.0821,0.097,0.0748,0.0943,0.0628};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_coordIndex_1()
		{
			int[] value = {2,76,0,-1,0,1,2,-1,77,81,3,-1,3,0,77,-1,3,82,74,-1,74,4,3,-1,83,5,4,-1,4,75,83,-1,111,6,78,-1,78,80,111,-1,70,64,63,-1,63,66,70,-1,87,63,65,-1,65,61,87,-1,65,7,67,-1,67,85,65,-1,16,15,80,-1,80,62,16,-1,64,10,9,-1,9,63,64,-1,9,11,65,-1,65,63,9,-1,65,11,12,-1,12,7,65,-1,8,7,12,-1,12,13,8,-1,15,16,14,-1,14,132,15,-1,10,18,17,-1,17,9,10,-1,9,17,19,-1,19,11,9,-1,19,20,12,-1,12,11,19,-1,13,12,20,-1,20,21,13,-1,132,14,22,-1,22,23,132,-1,5,84,79,-1,79,6,5,-1,16,8,13,-1,13,14,16,-1,14,13,21,-1,21,22,14,-1,24,21,20,-1,68,8,16,-1,16,86,68,-1,88,7,8,-1,8,89,88,-1,29,27,30,-1,30,28,29,-1,25,53,31,-1,31,32,25,-1,25,32,33,-1,33,55,25,-1,26,54,34,-1,34,35,26,-1,27,55,36,-1,36,30,27,-1,37,53,26,-1,26,35,37,-1,39,41,54,-1,54,38,39,-1,39,40,41,-1,54,41,40,-1,40,34,54,-1,165,43,42,-1,42,164,165,-1,165,168,43,-1,90,44,53,-1,53,37,90,-1,53,44,45,-1,45,31,53,-1,46,48,55,-1,55,33,46,-1,46,47,48,-1,55,48,47,-1,47,36,55,-1,175,1,176,-1,176,1,0,-1,0,3,176,-1,176,3,4,-1,6,176,5,-1,176,6,111,-1,1,175,73,-1,73,69,1,-1,178,49,10,-1,10,64,178,-1,49,50,18,-1,18,10,49,-1,24,18,50,-1,24,17,18,-1,24,19,17,-1,24,20,19,-1,24,22,21,-1,23,22,24,-1,4,5,176,-1,54,164,42,-1,42,38,54,-1,51,52,29,-1,29,28,51,-1,52,51,180,-1,164,54,93,-1,93,182,164,-1,53,25,91,-1,91,95,53,-1,25,55,96,-1,96,91,25,-1,26,92,93,-1,93,54,26,-1,27,94,96,-1,96,55,27,-1,53,95,92,-1,92,26,53,-1,27,29,188,-1,188,94,27,-1,178,64,71,-1,71,73,178,-1,45,44,90,-1,72,73,182,-1,182,93,72,-1,56,59,95,-1,95,91,56,-1,60,56,91,-1,91,96,60,-1,57,72,93,-1,93,92,57,-1,94,58,60,-1,60,96,94,-1,95,59,57,-1,57,92,95,-1,80,58,94,-1,94,188,80,-1,99,98,97,-1,97,100,99,-1,102,97,101,-1,101,103,102,-1,101,105,104,-1,104,106,101,-1,108,107,105,-1,105,109,108,-1,111,80,110,-1,110,112,111,-1,115,114,113,-1,113,116,115,-1,119,118,117,-1,117,113,119,-1,117,121,120,-1,120,122,117,-1,123,124,80,-1,80,15,123,-1,116,113,125,-1,125,126,116,-1,125,113,117,-1,117,127,125,-1,117,122,128,-1,128,127,117,-1,130,129,128,-1,128,122,130,-1,15,132,131,-1,131,123,15,-1,126,125,133,-1,133,134,126,-1,125,127,135,-1,135,133,125,-1,135,127,128,-1,128,136,135,-1,129,137,136,-1,136,128,129,-1,132,23,138,-1,138,131,132,-1,109,112,139,-1,139,140,109,-1,123,131,129,-1,129,130,123,-1,131,138,137,-1,137,129,131,-1,24,136,137,-1,141,142,123,-1,123,130,141,-1,144,143,130,-1,130,122,144,-1,29,145,147,-1,147,146,29,-1,150,149,148,-1,148,151,150,-1,150,153,152,-1,152,149,150,-1,156,155,154,-1,154,157,156,-1,146,147,158,-1,158,153,146,-1,159,155,156,-1,156,151,159,-1,161,160,157,-1,157,162,161,-1,161,162,163,-1,157,154,163,-1,163,162,157,-1,165,164,167,-1,167,166,165,-1,165,166,168,-1,169,159,151,-1,151,170,169,-1,151,148,171,-1,171,170,151,-1,172,152,153,-1,153,173,172,-1,172,173,174,-1,153,158,174,-1,174,173,153,-1,175,176,98,-1,176,97,98,-1,97,176,101,-1,176,105,101,-1,112,109,176,-1,176,111,112,-1,98,177,73,-1,73,175,98,-1,178,116,126,-1,126,49,178,-1,49,126,134,-1,134,50,49,-1,24,50,134,-1,24,134,133,-1,24,133,135,-1,24,135,136,-1,24,137,138,-1,23,24,138,-1,105,176,109,-1,157,160,167,-1,167,164,157,-1,179,145,29,-1,29,52,179,-1,52,180,179,-1,164,182,181,-1,181,157,164,-1,151,184,183,-1,183,150,151,-1,150,183,185,-1,185,153,150,-1,156,157,181,-1,181,186,156,-1,146,153,185,-1,185,187,146,-1,151,156,186,-1,186,184,151,-1,146,187,188,-1,188,29,146,-1,178,73,189,-1};
			return value;
		}
		private int[] getIndexedFaceSet_9_121_coordIndex_2()
		{
			int[] value = {189,116,178,-1,171,169,170,-1,190,181,182,-1,182,73,190,-1,191,183,184,-1,184,192,191,-1,193,185,183,-1,183,191,193,-1,194,186,181,-1,181,190,194,-1,187,185,193,-1,193,195,187,-1,184,186,194,-1,194,192,184,-1,80,188,187,-1,187,195,80,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,5,6,4,-1,4,0,5,-1,4,65,7,-1,7,8,4,-1,67,92,8,-1,8,66,67,-1,99,100,94,-1,94,97,99,-1,11,12,9,-1,9,10,11,-1,15,9,13,-1,13,14,15,-1,13,18,16,-1,16,17,13,-1,19,20,21,-1,21,22,19,-1,12,24,23,-1,23,9,12,-1,23,25,13,-1,13,9,23,-1,13,25,26,-1,26,18,13,-1,28,18,26,-1,26,27,28,-1,20,19,29,-1,29,30,20,-1,24,51,31,-1,31,23,24,-1,23,31,68,-1,68,25,23,-1,68,69,26,-1,26,25,68,-1,27,26,69,-1,69,70,27,-1,30,29,71,-1,71,82,30,-1,92,103,102,-1,102,100,92,-1,19,28,27,-1,27,29,19,-1,29,27,70,-1,70,71,29,-1,83,70,69,-1,84,28,19,-1,19,85,84,-1,87,18,28,-1,28,86,87,-1,33,34,35,-1,35,32,33,-1,38,39,36,-1,36,37,38,-1,38,37,40,-1,40,41,38,-1,44,45,42,-1,42,43,44,-1,34,41,46,-1,46,35,34,-1,47,39,44,-1,44,43,47,-1,49,50,45,-1,45,48,49,-1,49,52,50,-1,45,50,52,-1,52,42,45,-1,54,55,56,-1,56,53,54,-1,54,57,55,-1,58,59,39,-1,39,47,58,-1,39,59,60,-1,60,36,39,-1,61,62,41,-1,41,40,61,-1,61,63,62,-1,41,62,63,-1,63,46,41,-1,105,1,106,-1,106,1,0,-1,0,4,106,-1,106,4,8,-1,100,106,92,-1,106,100,99,-1,1,105,107,-1,107,108,1,-1,88,89,24,-1,24,12,88,-1,89,90,51,-1,51,24,89,-1,83,51,90,-1,83,31,51,-1,83,68,31,-1,83,69,68,-1,83,71,70,-1,82,71,83,-1,8,92,106,-1,45,53,56,-1,56,48,45,-1,64,72,33,-1,33,32,64,-1,72,64,73,-1,53,45,74,-1,74,75,53,-1,39,38,76,-1,76,77,39,-1,38,41,78,-1,78,76,38,-1,44,79,74,-1,74,45,44,-1,34,80,78,-1,78,41,34,-1,39,77,79,-1,79,44,39,-1,34,33,81,-1,81,80,34,-1,88,12,91,-1,91,93,88,-1,60,59,58,-1,95,96,75,-1,75,74,95,-1,98,101,77,-1,77,76,98,-1,104,98,76,-1,76,78,104,-1,109,95,74,-1,74,79,109,-1,80,110,104,-1,104,78,80,-1,77,101,109,-1,109,79,77,-1,111,110,80,-1,80,81,111,-1,114,113,112,-1,112,115,114,-1,117,112,116,-1,116,118,117,-1,116,120,119,-1,119,121,116,-1,123,122,120,-1,120,124,123,-1,127,126,125,-1,125,128,127,-1,131,130,129,-1,129,132,131,-1,135,134,133,-1,133,129,135,-1,133,137,136,-1,136,138,133,-1,139,142,141,-1,141,140,139,-1,132,129,143,-1,143,144,132,-1,143,129,133,-1,133,145,143,-1,133,138,146,-1,146,145,133,-1,148,147,146,-1,146,138,148,-1,140,150,149,-1,149,139,140,-1,144,143,151,-1,151,152,144,-1,143,145,153,-1,153,151,143,-1,153,145,146,-1,146,154,153,-1,147,155,154,-1,154,146,147,-1,150,157,156,-1,156,149,150,-1,124,128,158,-1,158,159,124,-1,139,149,147,-1,147,148,139,-1,149,156,155,-1,155,147,149,-1,160,154,155,-1,161,162,139,-1,139,148,161,-1,164,163,148,-1,148,138,164,-1,166,165,168,-1,168,167,166,-1,171,170,169,-1,169,172,171,-1,171,174,173,-1,173,170,171,-1,177,176,175,-1,175,178,177,-1,167,168,179,-1,179,174,167,-1,180,176,177,-1,177,172,180,-1,182,181,178,-1,178,183,182,-1,182,183,184,-1,178,175,184,-1,184,183,178,-1,186,185,188,-1,188,187,186,-1,186,187,189,-1,190,180,172,-1,172,191,190,-1,172,169,192,-1,192,191,172,-1,193,173,174,-1,174,194,193,-1,193,194,195,-1,174,179,195,-1,195,194,174,-1,196,197,113,-1,197,112,113,-1,112,197,116,-1,197,120,116,-1,128,124,197,-1,197,127,128,-1,113,199,198,-1,198,196,113,-1,200,132,144,-1,144,201,200,-1,201,144,152,-1,152,202,201,-1,160,202,152,-1,160,152,151,-1,160,151,153,-1,160,153,154,-1,160,155,156,-1,157,160,156,-1,120,197,124,-1,178,181,188,-1,188,185,178,-1,203,165,166,-1,166,204,203,-1,204,205,203,-1,185,207,206,-1,206,178,185,-1,172,209,208,-1,208,171,172,-1,171,208,210,-1,210,174,171,-1,177,178,206,-1,206,211,177,-1,167,174,210,-1,210,212,167,-1,172,177,211,-1,211,209,172,-1,167,212,213,-1,213,166,167,-1,200,215,214,-1};
			return value;
		}
		private int[] getIndexedFaceSet_9_121_texCoordIndex_2()
		{
			int[] value = {214,132,200,-1,192,190,191,-1,216,206,207,-1,207,217,216,-1,218,208,209,-1,209,219,218,-1,220,210,208,-1,208,218,220,-1,221,211,206,-1,206,216,221,-1,212,210,220,-1,220,222,212,-1,209,211,221,-1,221,219,209,-1,223,213,212,-1,212,222,223,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_10_121_point_1()
		{
			double[] value = {2.809,4.795,1.187,1.622,4.795,1.867,2.542,3.868,2.992,3.243,4.795,0.2585,2.809,4.795,-1.068,1.956,4.795,-1.823,0.6627,4.795,-1.971,5.129,1.401,-1.997,3.059,1.334,-3.368,4.865,-0.7763,1.867,2.809,-0.7763,3.044,5.618,-0.7763,0.0117,4.865,-0.7763,-1.748,3.031,-0.7763,-3.265,0.9023,-0.7763,-3.592,0.0,1.067,-3.814,1.074,1.216,-3.846,2.809,-2.16,1.187,1.622,-2.16,1.867,3.243,-2.16,0.0117,2.809,-2.16,-1.068,1.657,-2.16,-1.823,0.6627,-2.16,-1.971,0.0,-2.16,-1.997,0.0,-2.646,0.0112,5.26,2.063,-2.223,5.348,2.12,1.949,1.063,2.006,-3.996,0.265,-5.379,-5.735,0.0,1.955,-4.049,1.067,-5.379,-5.675,7.509,-5.379,-0.4661,6.619,-5.379,-2.935,4.603,-5.379,-4.823,4.266,-5.379,4.645,6.848,-5.379,2.67,4.085,-5.379,-5.147,7.509,-5.379,0.3354,3.943,-5.379,4.88,3.602,-5.379,4.612,4.27,-5.379,4.271,2.819,2.088,3.472,0.2192,-5.379,5.735,0.532,-5.379,5.286,5.794,2.123,-0.0077,7.166,-5.379,-0.6053,4.48,-5.379,-4.434,3.734,-5.379,-4.846,3.147,2.002,-3.514,0.0,-0.7763,3.475,0.0,-2.16,2.115,0.3689,-5.379,-5.299,0.0,1.952,-3.81,5.958,2.123,-0.0223,2.914,2.088,3.624,3.262,2.031,-3.66,4.857,3.825,-1.724,4.956,3.944,1.566,1.007,3.735,-3.465,5.514,3.944,-0.0133,3.005,3.779,-3.246,5.514,3.944,-0.0133,1.007,3.735,-3.465,5.129,1.401,2.116,3.044,1.166,3.475,5.729,1.401,0.0117,4.956,3.944,1.566,4.857,3.825,-1.724,3.005,3.779,-3.246,2.542,3.868,2.992,2.542,3.868,2.992,2.542,3.868,2.992,2.542,3.868,2.992,0.0,3.878,3.489,4.857,3.825,-1.724,4.857,3.825,-1.724,4.956,3.944,1.566,4.956,3.944,1.566,1.007,3.735,-3.465,1.007,3.735,-3.465,0.0,3.718,-3.5,5.514,3.944,-0.0133,5.514,3.944,-0.0133,3.005,3.779,-3.246,3.005,3.779,-3.246,5.514,3.944,-0.0133,1.007,3.735,-3.465,4.956,3.944,1.566,4.857,3.825,-1.724,3.005,3.779,-3.246,7.166,-5.379,0.4723,5.19,2.367,-2.137,5.276,2.454,1.878,2.848,2.4,3.513,1.054,2.293,-3.908,5.877,2.456,-0.0206,3.218,2.328,-3.59,-2.809,4.795,1.187,-1.622,4.795,1.867,-2.542,3.868,2.992};
			return value;
		}
		private double[] getCoordinate_10_121_point_2()
		{
			double[] value = {-4.956,3.944,1.566,-3.243,4.795,0.2585,-4.956,3.944,1.566,-5.514,3.944,-0.0133,-4.857,3.825,-1.724,-2.809,4.795,-1.068,-5.514,3.944,-0.0133,-4.857,3.825,-1.724,-3.005,3.779,-3.246,-1.956,4.795,-1.823,-1.007,3.735,-3.465,0.0,4.795,-1.997,-0.6627,4.795,-1.971,-5.129,1.401,2.116,-4.956,3.944,1.566,-2.542,3.868,2.992,-3.044,1.166,3.475,-5.729,1.401,0.0117,-5.514,3.944,-0.0133,-4.956,3.944,1.566,-4.857,3.825,-1.724,-5.514,3.944,-0.0133,-5.129,1.401,-1.997,-1.074,1.216,-3.846,-1.007,3.735,-3.465,-4.865,-0.7763,1.867,-2.809,-0.7763,3.044,-5.618,-0.7763,0.0117,-4.865,-0.7763,-1.748,-3.031,-0.7763,-3.265,-3.059,1.334,-3.368,-0.9023,-0.7763,-3.592,0.0,-0.7763,-3.568,-2.809,-2.16,1.187,-1.622,-2.16,1.867,-3.243,-2.16,0.0117,-2.809,-2.16,-1.068,-1.657,-2.16,-1.823,-0.6627,-2.16,-1.971,-1.007,3.735,-3.465,-3.005,3.779,-3.246,-3.005,3.779,-3.246,-1.007,3.735,-3.465,-3.005,3.779,-3.246,-4.857,3.825,-1.724,-0.265,-5.379,-5.735,-1.063,2.006,-3.996,-1.067,-5.379,-5.675,-7.509,-5.379,-0.4661,-6.619,-5.379,-2.935,-5.26,2.063,-2.223,-5.958,2.123,-0.0223,-4.603,-5.379,-4.823,-3.262,2.031,-3.66,-4.266,-5.379,4.645,-6.848,-5.379,2.67,-5.348,2.12,1.949,-2.914,2.088,3.624,-4.085,-5.379,-5.147,-7.509,-5.379,0.3354,-3.943,-5.379,4.88,-3.602,-5.379,4.612,-2.819,2.088,3.472,-4.27,-5.379,4.271,0.0,2.089,4.08,0.0,2.045,3.843,-0.532,-5.379,5.286,-0.2192,-5.379,5.735,0.0,-5.379,5.286,-7.166,-5.379,0.4723,-5.794,2.123,-0.0077,-7.166,-5.379,-0.6053,-4.48,-5.379,-4.434,-3.147,2.002,-3.514,-3.734,-5.379,-4.846,0.0,4.795,2.115,0.0,5.379,0.2579,-2.542,3.868,2.992,0.0,1.017,3.972,-0.3689,-5.379,-5.299,0.0,-5.379,-5.299,-2.848,2.4,3.513,0.0,2.406,3.975,-5.19,2.367,-2.137,-5.877,2.456,-0.0206,-3.218,2.328,-3.59,-5.276,2.454,1.878,-1.054,2.293,-3.908,0.0,2.259,-3.954,-2.542,3.868,2.992,-2.542,3.868,2.992,-4.857,3.825,-1.724,-5.514,3.944,-0.0133,-3.005,3.779,-3.246,-4.956,3.944,1.566,-1.007,3.735,-3.465};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_122_point_1()
		{
			double[] value = {0.7918,0.3915,0.7861,0.4125,0.761,0.4016,0.7739,0.359,0.8043,0.381,0.7754,0.3582,0.7971,0.3429,0.8277,0.3444,0.8264,0.3818,0.9221,0.6798,0.9068,0.6634,0.9278,0.6477,0.942,0.668,0.9118,0.6975,0.892,0.6876,0.8997,0.6728,0.8888,0.7144,0.8893,0.6963,0.9102,0.7174,0.9318,0.7543,0.9405,0.7608,0.9219,0.7764,0.9155,0.7699,0.9352,0.6914,0.9514,0.6827,0.9275,0.7025,0.9278,0.7154,0.9353,0.7322,0.9192,0.7392,0.9477,0.7447,0.9543,0.7492,0.9534,0.7016,0.9689,0.0153,0.9719,0.1999,0.9458,0.2011,0.9492,0.0154,0.7092,0.067,0.769,0.0435,0.8323,0.2185,0.7803,0.2416,0.8338,0.0247,0.8909,0.203,0.5653,0.1778,0.6229,0.123,0.7389,0.2712,0.6865,0.3216,0.8742,0.017,0.671,0.0882,0.5395,0.2048,0.5476,0.1983,0.6869,0.3219,0.9633,0.697,0.5594,0.1844,0.6471,0.3824,0.6446,0.3872,0.483,0.2951,0.4882,0.283,0.4773,0.3069,0.6789,0.0845,0.7806,0.2419,0.7018,0.0717,0.8434,0.0238,0.8908,0.2029,0.8637,0.0204,0.9797,0.0173,0.7986,0.3427,0.8292,0.3445,0.861,0.3654,0.9486,0.7096,0.9495,0.7179,0.956,0.7264,0.9627,0.7307,0.9776,0.2011,0.9887,0.0179,0.6928,0.3274,0.6537,0.3865,0.8339,0.2256,0.7846,0.2494,0.8923,0.2111,0.7444,0.2773,0.946,0.2082,0.9719,0.2073,0.9675,0.7332,0.9757,0.7147,0.9016,0.7514,0.9124,0.7668,0.8987,0.7466,0.8902,0.7255,0.9681,0.6588,0.974,0.6751,0.9769,0.6939,0.9357,0.6444,0.8417,0.3914,0.9575,0.6354,0.8761,0.3962,0.7215,0.3537,0.6862,0.4061,0.8816,0.4112,0.8425,0.2623,0.8536,0.4202};
			return value;
		}
		private double[] getTextureCoordinate_10_122_point_2()
		{
			double[] value = {0.8501,0.4103,0.8029,0.2824,0.8759,0.3959,0.8628,0.3668,0.8988,0.2477,0.7883,0.4384,0.8184,0.4313,0.7627,0.4439,0.7605,0.4029,0.7697,0.3055,0.9474,0.2452,0.972,0.2446,0.7918,0.3915,0.7861,0.4125,0.761,0.4016,0.7739,0.359,0.8043,0.381,0.7754,0.3582,0.7971,0.3429,0.8277,0.3444,0.8264,0.3818,0.7986,0.3427,0.8292,0.3445,0.861,0.3654,0.8417,0.3914,0.8761,0.3962,0.8816,0.4112,0.8536,0.4202,0.8501,0.4103,0.9221,0.6798,0.9068,0.6634,0.9278,0.6477,0.942,0.668,0.9118,0.6975,0.892,0.6876,0.8997,0.6728,0.8888,0.7144,0.8893,0.6963,0.9102,0.7174,0.9318,0.7543,0.9405,0.7608,0.9219,0.7764,0.9155,0.7699,0.9352,0.6914,0.9514,0.6827,0.9275,0.7025,0.9278,0.7154,0.9353,0.7322,0.9192,0.7392,0.9477,0.7447,0.9543,0.7492,0.9534,0.7016,0.9633,0.697,0.9486,0.7096,0.9495,0.7179,0.956,0.7264,0.9627,0.7307,0.9675,0.7332,0.8759,0.3959,0.8628,0.3668,0.9757,0.7147,0.9016,0.7514,0.9124,0.7668,0.8987,0.7466,0.8902,0.7255,0.9689,0.0153,0.9719,0.1999,0.9458,0.2011,0.9492,0.0154,0.7092,0.067,0.769,0.0435,0.8323,0.2185,0.7803,0.2416,0.8338,0.0247,0.8909,0.203,0.5653,0.1778,0.6229,0.123,0.7389,0.2712,0.6865,0.3216,0.8742,0.017,0.671,0.0882,0.5395,0.2048,0.5476,0.1983,0.6869,0.3219,0.5594,0.1844,0.6471,0.3824,0.6446,0.3872,0.483,0.2951,0.4882,0.283,0.4773,0.3069,0.6789,0.0845,0.7806,0.2419,0.7018,0.0717,0.8434,0.0238,0.8908,0.2029,0.8637,0.0204,0.7883,0.4384,0.8184,0.4313,0.7627,0.4439,0.7605,0.4029};
			return value;
		}
		private double[] getTextureCoordinate_10_122_point_3()
		{
			double[] value = {0.9681,0.6588,0.974,0.6751,0.9769,0.6939,0.9797,0.0173,0.9776,0.2011,0.9887,0.0179,0.6928,0.3274,0.6537,0.3865,0.8339,0.2256,0.7846,0.2494,0.8923,0.2111,0.7444,0.2773,0.946,0.2082,0.9719,0.2073,0.9357,0.6444,0.9575,0.6354,0.7215,0.3537,0.6862,0.4061,0.8425,0.2623,0.8029,0.2824,0.8988,0.2477,0.7697,0.3055,0.9474,0.2452,0.972,0.2446};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_coordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,0,5,4,-1,4,1,0,-1,4,5,6,-1,6,7,4,-1,7,6,8,-1,8,9,7,-1,9,8,10,-1,10,11,9,-1,10,13,12,-1,12,11,10,-1,15,12,13,-1,13,14,15,-1,2,15,14,-1,14,3,2,-1,17,0,3,-1,3,16,17,-1,16,3,14,-1,14,18,16,-1,18,14,13,-1,13,19,18,-1,10,20,19,-1,19,13,10,-1,8,21,20,-1,20,10,8,-1,21,8,6,-1,6,22,21,-1,22,6,5,-1,5,23,22,-1,5,0,17,-1,17,23,5,-1,17,16,24,-1,16,18,24,-1,18,19,24,-1,19,20,24,-1,20,21,24,-1,21,22,24,-1,22,23,24,-1,23,17,24,-1,26,2,1,-1,1,25,26,-1,1,4,27,-1,27,25,1,-1,4,7,28,-1,28,27,4,-1,7,9,29,-1,29,28,7,-1,29,9,11,-1,11,30,29,-1,30,11,12,-1,12,31,30,-1,12,15,32,-1,32,31,12,-1,2,26,32,-1,32,15,2,-1,35,36,33,-1,33,34,35,-1,34,33,37,-1,37,38,34,-1,39,40,38,-1,38,37,39,-1,42,40,39,-1,39,41,42,-1,42,41,43,-1,43,44,42,-1,46,44,43,-1,43,45,46,-1,45,48,47,-1,47,46,45,-1,35,47,48,-1,48,36,35,-1,35,34,49,-1,34,38,49,-1,38,40,49,-1,40,42,49,-1,42,44,49,-1,44,46,49,-1,46,47,49,-1,47,35,49,-1,36,26,25,-1,25,33,36,-1,25,27,37,-1,37,33,25,-1,39,37,27,-1,27,28,39,-1,28,29,41,-1,41,39,28,-1,43,41,29,-1,29,30,43,-1,30,31,45,-1,45,43,30,-1,31,32,48,-1,48,45,31,-1,36,48,32,-1,32,26,36,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,0,5,4,-1,4,1,0,-1,4,5,6,-1,6,7,4,-1,7,6,14,-1,14,13,7,-1,13,14,11,-1,11,12,13,-1,11,16,15,-1,15,12,11,-1,18,15,16,-1,16,17,18,-1,20,18,17,-1,17,19,20,-1,9,0,3,-1,3,8,9,-1,26,19,17,-1,17,21,26,-1,21,17,16,-1,16,27,21,-1,11,28,27,-1,27,16,11,-1,14,29,28,-1,28,11,14,-1,22,14,6,-1,6,10,22,-1,10,6,5,-1,5,23,10,-1,5,0,9,-1,9,23,5,-1,9,8,24,-1,26,21,30,-1,21,27,30,-1,27,28,30,-1,28,29,30,-1,22,10,24,-1,10,23,24,-1,23,9,24,-1,37,2,1,-1,1,25,37,-1,1,4,38,-1,38,25,1,-1,4,7,39,-1,39,38,4,-1,7,13,32,-1,32,39,7,-1,32,13,12,-1,12,31,32,-1,31,12,15,-1,15,33,31,-1,15,18,34,-1,34,33,15,-1,20,35,34,-1,34,18,20,-1,42,62,61,-1,61,41,42,-1,41,61,63,-1,63,44,41,-1,64,46,44,-1,44,63,64,-1,47,46,64,-1,64,68,47,-1,50,68,60,-1,60,49,50,-1,52,49,60,-1,60,65,52,-1,65,66,53,-1,53,52,65,-1,55,53,66,-1,66,67,55,-1,42,41,48,-1,41,44,48,-1,44,46,48,-1,46,47,48,-1,50,49,56,-1,49,52,56,-1,52,53,56,-1,53,55,56,-1,57,37,25,-1,25,40,57,-1,25,38,43,-1,43,40,25,-1,45,43,38,-1,38,39,45,-1,39,32,59,-1,59,45,39,-1,36,59,32,-1,32,31,36,-1,31,33,51,-1,51,36,31,-1,33,34,54,-1,54,51,33,-1,58,54,34,-1,34,35,58,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_139_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,0,-1,4,0,3,-1,3,5,4,-1,6,7,8,-1,8,9,6,-1,11,7,6,-1,6,10,11,-1,13,11,10,-1,10,12,13,-1,14,15,16,-1,16,17,14,-1,19,20,21,-1,21,18,19,-1,22,23,2,-1,2,1,22,-1,26,27,24,-1,24,25,26,-1,25,24,28,-1,28,29,25,-1,31,29,28,-1,28,30,31,-1,33,31,30,-1,30,32,33,-1,35,33,32,-1,32,34,35,-1,36,37,35,-1,35,34,36,-1,39,37,36,-1,36,38,39,-1,38,27,26,-1,26,39,38,-1,26,25,40,-1,25,29,40,-1,29,31,40,-1,31,33,40,-1,33,35,40,-1,35,37,40,-1,37,39,40,-1,39,26,40,-1,43,44,41,-1,41,42,43,-1,19,45,43,-1,43,42,19,-1,46,45,19,-1,19,18,46,-1,12,47,46,-1,46,18,12,-1,47,12,10,-1,10,48,47,-1,49,48,10,-1,10,6,49,-1,49,6,9,-1,9,50,49,-1,9,41,44,-1,44,50,9,-1,44,43,51,-1,43,45,51,-1,45,46,51,-1,46,47,51,-1,47,48,51,-1,48,49,51,-1,49,50,51,-1,50,44,51,-1,0,53,52,-1,52,1,0,-1,4,54,53,-1,53,0,4,-1,54,4,55,-1,55,56,54,-1,55,58,57,-1,57,56,55,-1,14,59,57,-1,57,58,14,-1,17,60,59,-1,59,14,17,-1,22,61,60,-1,60,17,22,-1,22,1,52,-1,52,61,22,-1,24,27,52,-1,52,53,24,-1,24,53,54,-1,54,28,24,-1,54,56,30,-1,30,28,54,-1,56,57,32,-1,32,30,56,-1,34,32,57,-1,57,59,34,-1,36,34,59,-1,59,60,36,-1,60,61,38,-1,38,36,60,-1,38,61,52,-1,52,27,38,-1,62,63,3,-1,3,2,62,-1,63,8,5,-1,5,3,63,-1,55,4,5,-1,5,64,55,-1,58,55,64,-1,64,65,58,-1,15,14,58,-1,58,65,15,-1,13,21,16,-1,16,15,13,-1,23,22,17,-1,17,16,23,-1,20,62,2,-1,2,23,20,-1,7,64,5,-1,5,8,7,-1,65,64,7,-1,7,11,65,-1,15,65,11,-1,11,13,15,-1,20,23,16,-1,16,21,20,-1,42,41,63,-1,63,62,42,-1,41,9,8,-1,8,63,41,-1,12,18,21,-1,21,13,12,-1,19,42,62,-1,62,20,19,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_139_texCoordIndex_1()
		{
			int[] value = {21,22,24,-1,24,25,21,-1,26,21,25,-1,25,27,26,-1,28,29,30,-1,30,31,28,-1,44,29,28,-1,28,43,44,-1,5,6,7,-1,7,4,5,-1,8,10,11,-1,11,12,8,-1,14,15,16,-1,16,13,14,-1,17,18,19,-1,19,23,17,-1,48,84,83,-1,83,47,48,-1,47,83,85,-1,85,56,47,-1,57,56,85,-1,85,86,57,-1,58,57,86,-1,86,87,58,-1,32,58,87,-1,87,79,32,-1,80,33,32,-1,32,79,80,-1,34,33,80,-1,80,81,34,-1,81,82,35,-1,35,34,81,-1,48,47,59,-1,47,56,59,-1,56,57,59,-1,57,58,59,-1,58,32,37,-1,32,33,37,-1,33,34,37,-1,34,35,37,-1,62,63,60,-1,60,61,62,-1,14,40,38,-1,38,39,14,-1,41,40,14,-1,14,13,41,-1,4,42,41,-1,41,13,4,-1,42,4,7,-1,7,45,42,-1,64,65,43,-1,43,28,64,-1,64,28,31,-1,31,66,64,-1,31,60,63,-1,63,66,31,-1,63,62,67,-1,38,40,46,-1,40,41,46,-1,41,42,46,-1,42,45,46,-1,65,64,67,-1,64,66,67,-1,66,63,67,-1,21,69,68,-1,68,22,21,-1,26,70,69,-1,69,21,26,-1,70,26,71,-1,71,72,70,-1,71,74,73,-1,73,72,71,-1,8,50,73,-1,73,74,8,-1,12,51,50,-1,50,8,12,-1,17,52,51,-1,51,12,17,-1,17,23,53,-1,53,52,17,-1,20,49,68,-1,68,69,20,-1,20,69,70,-1,70,9,20,-1,70,72,0,-1,0,9,70,-1,72,73,78,-1,78,0,72,-1,3,78,73,-1,73,50,3,-1,2,3,50,-1,50,51,2,-1,51,52,1,-1,1,2,51,-1,1,52,53,-1,53,36,1,-1,75,76,25,-1,25,24,75,-1,76,30,27,-1,27,25,76,-1,71,26,27,-1,27,77,71,-1,74,71,77,-1,77,54,74,-1,10,8,74,-1,74,54,10,-1,5,16,11,-1,11,10,5,-1,18,17,12,-1,12,11,18,-1,15,55,19,-1,19,18,15,-1,29,77,27,-1,27,30,29,-1,54,77,29,-1,29,44,54,-1,10,54,6,-1,6,5,10,-1,15,18,11,-1,11,16,15,-1,61,60,76,-1,76,75,61,-1,60,31,30,-1,30,76,60,-1,4,13,16,-1,16,5,4,-1,14,39,55,-1,55,15,14,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_coordIndex_1()
		{
			int[] value = {2,1,0,-1,0,3,2,-1,0,1,4,-1,4,5,0,-1,4,7,6,-1,6,5,4,-1,7,9,8,-1,8,6,7,-1,9,11,10,-1,10,8,9,-1,10,11,12,-1,12,13,10,-1,15,14,13,-1,13,12,15,-1,2,3,14,-1,14,15,2,-1,17,16,3,-1,3,0,17,-1,16,18,14,-1,14,3,16,-1,18,19,13,-1,13,14,18,-1,10,13,19,-1,19,20,10,-1,8,10,20,-1,20,21,8,-1,21,22,6,-1,6,8,21,-1,22,23,5,-1,5,6,22,-1,5,23,17,-1,17,0,5,-1,17,24,16,-1,16,24,18,-1,18,24,19,-1,19,24,20,-1,20,24,21,-1,21,24,22,-1,22,24,23,-1,23,24,17,-1,26,25,1,-1,1,2,26,-1,1,25,27,-1,27,4,1,-1,4,27,28,-1,28,7,4,-1,7,28,29,-1,29,9,7,-1,29,30,11,-1,11,9,29,-1,30,31,12,-1,12,11,30,-1,12,31,32,-1,32,15,12,-1,2,15,32,-1,32,26,2,-1,35,34,33,-1,33,36,35,-1,34,38,37,-1,37,33,34,-1,39,37,38,-1,38,40,39,-1,42,41,39,-1,39,40,42,-1,42,44,43,-1,43,41,42,-1,46,45,43,-1,43,44,46,-1,45,46,47,-1,47,48,45,-1,35,36,48,-1,48,47,35,-1,35,49,34,-1,34,49,38,-1,38,49,40,-1,40,49,42,-1,42,49,44,-1,44,49,46,-1,46,49,47,-1,47,49,35,-1,36,33,25,-1,25,26,36,-1,25,33,37,-1,37,27,25,-1,39,28,27,-1,27,37,39,-1,28,39,41,-1,41,29,28,-1,43,30,29,-1,29,41,43,-1,30,43,45,-1,45,31,30,-1,31,45,48,-1,48,32,31,-1,36,26,32,-1,32,48,36,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_texCoordIndex_1()
		{
			int[] value = {2,1,0,-1,0,3,2,-1,0,1,4,-1,4,5,0,-1,4,7,6,-1,6,5,4,-1,7,13,14,-1,14,6,7,-1,13,12,11,-1,11,14,13,-1,11,12,15,-1,15,16,11,-1,18,17,16,-1,16,15,18,-1,20,19,17,-1,17,18,20,-1,9,8,3,-1,3,0,9,-1,26,21,17,-1,17,19,26,-1,21,27,16,-1,16,17,21,-1,11,16,27,-1,27,28,11,-1,14,11,28,-1,28,29,14,-1,22,10,6,-1,6,14,22,-1,10,23,5,-1,5,6,10,-1,5,23,9,-1,9,0,5,-1,9,24,8,-1,26,30,21,-1,21,30,27,-1,27,30,28,-1,28,30,29,-1,22,24,10,-1,10,24,23,-1,23,24,9,-1,37,25,1,-1,1,2,37,-1,1,25,38,-1,38,4,1,-1,4,38,39,-1,39,7,4,-1,7,39,32,-1,32,13,7,-1,32,31,12,-1,12,13,32,-1,31,33,15,-1,15,12,31,-1,15,33,34,-1,34,18,15,-1,20,18,34,-1,34,35,20,-1,42,41,61,-1,61,62,42,-1,41,44,63,-1,63,61,41,-1,64,63,44,-1,44,46,64,-1,47,68,64,-1,64,46,47,-1,50,49,60,-1,60,68,50,-1,52,65,60,-1,60,49,52,-1,65,52,53,-1,53,66,65,-1,55,67,66,-1,66,53,55,-1,42,48,41,-1,41,48,44,-1,44,48,46,-1,46,48,47,-1,50,56,49,-1,49,56,52,-1,52,56,53,-1,53,56,55,-1,57,40,25,-1,25,37,57,-1,25,40,43,-1,43,38,25,-1,45,39,38,-1,38,43,45,-1,39,45,59,-1,59,32,39,-1,36,31,32,-1,32,59,36,-1,31,36,51,-1,51,33,31,-1,33,51,54,-1,54,34,33,-1,58,35,34,-1,34,54,58,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_169_coordIndex_1()
		{
			int[] value = {0,3,2,-1,2,1,0,-1,4,5,3,-1,3,0,4,-1,6,9,8,-1,8,7,6,-1,11,10,6,-1,6,7,11,-1,13,12,10,-1,10,11,13,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,22,1,2,-1,2,23,22,-1,26,25,24,-1,24,27,26,-1,25,29,28,-1,28,24,25,-1,31,30,28,-1,28,29,31,-1,33,32,30,-1,30,31,33,-1,35,34,32,-1,32,33,35,-1,36,34,35,-1,35,37,36,-1,39,38,36,-1,36,37,39,-1,38,39,26,-1,26,27,38,-1,26,40,25,-1,25,40,29,-1,29,40,31,-1,31,40,33,-1,33,40,35,-1,35,40,37,-1,37,40,39,-1,39,40,26,-1,43,42,41,-1,41,44,43,-1,19,42,43,-1,43,45,19,-1,46,18,19,-1,19,45,46,-1,12,18,46,-1,46,47,12,-1,47,48,10,-1,10,12,47,-1,49,6,10,-1,10,48,49,-1,49,50,9,-1,9,6,49,-1,9,50,44,-1,44,41,9,-1,44,51,43,-1,43,51,45,-1,45,51,46,-1,46,51,47,-1,47,51,48,-1,48,51,49,-1,49,51,50,-1,50,51,44,-1,0,1,52,-1,52,53,0,-1,4,0,53,-1,53,54,4,-1,54,56,55,-1,55,4,54,-1,55,56,57,-1,57,58,55,-1,14,58,57,-1,57,59,14,-1,17,14,59,-1,59,60,17,-1,22,17,60,-1,60,61,22,-1,22,61,52,-1,52,1,22,-1,24,53,52,-1,52,27,24,-1,24,28,54,-1,54,53,24,-1,54,28,30,-1,30,56,54,-1,56,30,32,-1,32,57,56,-1,34,59,57,-1,57,32,34,-1,36,60,59,-1,59,34,36,-1,60,36,38,-1,38,61,60,-1,38,27,52,-1,52,61,38,-1,62,2,3,-1,3,63,62,-1,63,3,5,-1,5,8,63,-1,55,64,5,-1,5,4,55,-1,58,65,64,-1,64,55,58,-1,15,65,58,-1,58,14,15,-1,13,15,16,-1,16,21,13,-1,23,16,17,-1,17,22,23,-1,20,23,2,-1,2,62,20,-1,7,8,5,-1,5,64,7,-1,65,11,7,-1,7,64,65,-1,15,13,11,-1,11,65,15,-1,20,21,16,-1,16,23,20,-1,42,62,63,-1,63,41,42,-1,41,63,8,-1,8,9,41,-1,12,13,21,-1,21,18,12,-1,19,20,62,-1,62,42,19,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_169_texCoordIndex_1()
		{
			int[] value = {21,25,24,-1,24,22,21,-1,26,27,25,-1,25,21,26,-1,28,31,30,-1,30,29,28,-1,44,43,28,-1,28,29,44,-1,5,4,7,-1,7,6,5,-1,8,12,11,-1,11,10,8,-1,14,13,16,-1,16,15,14,-1,17,23,19,-1,19,18,17,-1,48,47,83,-1,83,84,48,-1,47,56,85,-1,85,83,47,-1,57,86,85,-1,85,56,57,-1,58,87,86,-1,86,57,58,-1,32,79,87,-1,87,58,32,-1,80,79,32,-1,32,33,80,-1,34,81,80,-1,80,33,34,-1,81,34,35,-1,35,82,81,-1,48,59,47,-1,47,59,56,-1,56,59,57,-1,57,59,58,-1,58,37,32,-1,32,37,33,-1,33,37,34,-1,34,37,35,-1,62,61,60,-1,60,63,62,-1,14,39,38,-1,38,40,14,-1,41,13,14,-1,14,40,41,-1,4,13,41,-1,41,42,4,-1,42,45,7,-1,7,4,42,-1,64,28,43,-1,43,65,64,-1,64,66,31,-1,31,28,64,-1,31,66,63,-1,63,60,31,-1,63,67,62,-1,38,46,40,-1,40,46,41,-1,41,46,42,-1,42,46,45,-1,65,67,64,-1,64,67,66,-1,66,67,63,-1,21,22,68,-1,68,69,21,-1,26,21,69,-1,69,70,26,-1,70,72,71,-1,71,26,70,-1,71,72,73,-1,73,74,71,-1,8,74,73,-1,73,50,8,-1,12,8,50,-1,50,51,12,-1,17,12,51,-1,51,52,17,-1,17,52,53,-1,53,23,17,-1,20,69,68,-1,68,49,20,-1,20,9,70,-1,70,69,20,-1,70,9,0,-1,0,72,70,-1,72,0,78,-1,78,73,72,-1,3,50,73,-1,73,78,3,-1,2,51,50,-1,50,3,2,-1,51,2,1,-1,1,52,51,-1,1,36,53,-1,53,52,1,-1,75,24,25,-1,25,76,75,-1,76,25,27,-1,27,30,76,-1,71,77,27,-1,27,26,71,-1,74,54,77,-1,77,71,74,-1,10,54,74,-1,74,8,10,-1,5,10,11,-1,11,16,5,-1,18,11,12,-1,12,17,18,-1,15,18,19,-1,19,55,15,-1,29,30,27,-1,27,77,29,-1,54,44,29,-1,29,77,54,-1,10,5,6,-1,6,54,10,-1,15,16,11,-1,11,18,15,-1,61,75,76,-1,76,60,61,-1,60,76,30,-1,30,31,60,-1,4,5,16,-1,16,13,4,-1,14,15,55,-1,55,39,14,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_coordIndex_1()
		{
			int[] value = {0,1,2,-1,3,2,4,-1,2,3,5,-1,6,7,1,-1,7,3,4,-1,0,8,1,-1,8,6,1,-1,81,7,9,-1,9,80,81,-1,80,9,10,-1,10,83,80,-1,11,12,13,-1,13,85,11,-1,16,17,14,-1,14,15,16,-1,0,18,19,-1,19,8,0,-1,20,21,0,-1,0,2,20,-1,23,21,20,-1,20,22,23,-1,23,24,25,-1,25,21,23,-1,27,10,9,-1,9,26,27,-1,31,28,29,-1,29,30,31,-1,6,26,9,-1,31,26,6,-1,6,28,31,-1,8,28,6,-1,32,17,25,-1,25,24,32,-1,17,32,33,-1,33,14,17,-1,6,9,7,-1,24,23,67,-1,67,55,24,-1,24,55,56,-1,56,32,24,-1,19,29,28,-1,28,8,19,-1,22,68,67,-1,67,23,22,-1,5,36,20,-1,20,2,5,-1,35,22,20,-1,20,36,35,-1,81,3,7,-1,13,15,37,-1,37,85,13,-1,18,0,21,-1,21,25,18,-1,19,18,16,-1,16,38,19,-1,39,40,10,-1,10,27,39,-1,29,41,42,-1,42,30,29,-1,38,41,29,-1,29,19,38,-1,25,17,16,-1,16,18,25,-1,43,83,10,-1,10,40,43,-1,37,15,14,-1,14,116,37,-1,117,116,14,-1,14,33,117,-1,15,13,38,-1,38,16,15,-1,12,40,39,-1,39,45,12,-1,7,4,1,-1,1,4,2,-1,34,44,117,-1,117,33,34,-1,34,33,32,-1,12,11,43,-1,43,40,12,-1,12,45,38,-1,38,13,12,-1,31,30,27,-1,27,26,31,-1,39,27,30,-1,30,42,39,-1,45,39,42,-1,42,41,45,-1,45,41,38,-1,46,47,48,-1,48,49,46,-1,69,70,50,-1,50,51,69,-1,46,49,51,-1,51,50,46,-1,52,53,49,-1,49,48,52,-1,48,128,129,-1,129,52,48,-1,51,49,53,-1,53,54,51,-1,34,32,56,-1,56,57,34,-1,68,22,35,-1,35,132,68,-1,44,34,57,-1,57,58,44,-1,61,62,57,-1,57,56,61,-1,64,68,132,-1,132,63,64,-1,62,65,58,-1,58,57,62,-1,66,60,59,-1,59,64,66,-1,139,66,64,-1,64,63,139,-1,62,66,139,-1,139,65,62,-1,62,61,60,-1,60,66,62,-1,59,60,55,-1,55,67,59,-1,55,60,61,-1,61,56,55,-1,68,64,59,-1,59,67,68,-1,48,47,140,-1,140,128,48,-1,51,54,71,-1,71,69,51,-1,72,74,73,-1,3,75,74,-1,74,5,3,-1,76,73,77,-1,77,75,3,-1,72,73,78,-1,78,73,76,-1,81,80,79,-1,79,77,81,-1,80,83,82,-1,82,79,80,-1,11,85,84,-1,84,86,11,-1,89,88,87,-1,87,90,89,-1,72,78,91,-1,91,92,72,-1,93,74,72,-1,72,94,93,-1,96,95,93,-1,93,94,96,-1,96,94,97,-1,97,98,96,-1,100,99,79,-1,79,82,100,-1,103,102,101,-1,101,104,103,-1,76,79,99,-1,103,104,76,-1,76,99,103,-1,78,76,104,-1,105,98,97,-1,97,90,105,-1,90,87,106,-1,106,105,90,-1,76,77,79,-1,98,108,107,-1,107,96,98,-1,98,105,109,-1,109,108,98,-1,91,78,104,-1,104,101,91,-1,95,96,107,-1,107,110,95,-1,5,74,93,-1,93,36,5,-1,35,36,93,-1,93,95,35,-1,81,77,3,-1,84,85,37,-1,37,88,84,-1,92,97,94,-1,94,72,92,-1,91,111,89,-1,89,92,91,-1,112,100,82,-1,82,113,112,-1,101,102,114,-1,114,115,101,-1,111,91,101,-1,101,115,111,-1,97,92,89,-1,89,90,97,-1,43,113,82,-1,82,83,43,-1,37,116,87,-1,87,88,37,-1,117,106,87,-1,87,116,117,-1,88,89,111,-1,111,84,88,-1,86,118,112,-1,112,113,86,-1,77,73,75,-1,73,74,75,-1,119,106,117,-1,117,44,119,-1,119,105,106,-1,86,113,43,-1,43,11,86,-1,86,84,111,-1,111,118,86,-1,103,99,100,-1,100,102,103,-1,112,114,102,-1,102,100,112,-1,118,115,114,-1,114,112,118,-1,118,111,115,-1,122,121,120,-1,120,123,122,-1,69,124,125,-1,125,70,69,-1,122,125,124,-1,124,121,122,-1,126,120,121,-1,121,127,126,-1,120,126,129,-1,129,128,120,-1,124,130,127,-1,127,121,124,-1,119,131,109,-1,109,105,119,-1,110,132,35,-1,35,95,110,-1,44,58,131,-1,131,119,44,-1,133,109,131,-1,131,134,133,-1,135,63,132,-1,132,110,135,-1,134,131,58,-1,58,65,134,-1,137,135,136,-1,136,138,137,-1,139,63,135,-1,135,137,139,-1,134,65,139,-1,139,137,134,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_2()
		{
			int[] value = {134,137,138,-1,138,133,134,-1,136,107,108,-1,108,138,136,-1,108,109,133,-1,133,138,108,-1,110,107,136,-1,136,135,110,-1,120,128,140,-1,140,123,120,-1,124,69,71,-1,71,130,124,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,3,2,4,-1,2,3,5,-1,6,7,1,-1,7,3,4,-1,0,8,1,-1,8,6,1,-1,11,7,9,-1,9,10,11,-1,10,9,12,-1,12,13,10,-1,11,15,14,-1,14,3,11,-1,18,19,16,-1,16,17,18,-1,0,21,20,-1,20,8,0,-1,22,23,0,-1,0,2,22,-1,25,23,22,-1,22,24,25,-1,25,121,26,-1,26,23,25,-1,29,12,9,-1,9,28,29,-1,32,33,30,-1,30,31,32,-1,6,28,9,-1,32,28,6,-1,6,33,32,-1,8,33,6,-1,34,19,26,-1,26,27,34,-1,19,34,35,-1,35,16,19,-1,6,9,7,-1,121,25,36,-1,36,122,121,-1,27,37,38,-1,38,34,27,-1,20,30,33,-1,33,8,20,-1,24,39,36,-1,36,25,24,-1,5,40,22,-1,22,2,5,-1,41,24,22,-1,22,40,41,-1,11,3,7,-1,14,17,5,-1,5,3,14,-1,21,0,23,-1,23,26,21,-1,20,21,18,-1,18,42,20,-1,43,44,12,-1,12,29,43,-1,30,46,45,-1,45,31,30,-1,42,46,30,-1,30,20,42,-1,26,19,18,-1,18,21,26,-1,47,13,12,-1,12,44,47,-1,5,17,16,-1,16,40,5,-1,48,40,16,-1,16,35,48,-1,17,14,42,-1,42,18,17,-1,15,44,43,-1,43,49,15,-1,7,4,1,-1,1,4,2,-1,50,41,48,-1,48,35,50,-1,50,35,34,-1,15,11,47,-1,47,44,15,-1,15,49,42,-1,42,14,15,-1,32,31,29,-1,29,28,32,-1,43,29,31,-1,31,45,43,-1,49,43,45,-1,45,46,49,-1,49,46,42,-1,51,52,53,-1,53,54,51,-1,84,85,55,-1,55,56,84,-1,51,54,56,-1,56,55,51,-1,53,54,54,-1,54,53,53,-1,53,82,86,-1,86,53,53,-1,56,54,54,-1,54,56,56,-1,50,34,38,-1,38,57,50,-1,39,24,41,-1,41,41,39,-1,41,50,57,-1,57,41,41,-1,58,59,57,-1,57,38,58,-1,61,39,41,-1,41,60,61,-1,59,60,41,-1,41,57,59,-1,63,64,62,-1,62,61,63,-1,65,63,61,-1,61,60,65,-1,59,63,65,-1,65,60,59,-1,59,58,64,-1,64,63,59,-1,62,64,122,-1,122,36,62,-1,37,64,58,-1,58,38,37,-1,39,61,62,-1,62,36,39,-1,53,52,83,-1,83,82,53,-1,56,56,87,-1,87,84,56,-1,66,67,68,-1,3,69,67,-1,67,5,3,-1,70,68,71,-1,71,69,3,-1,66,68,72,-1,72,68,70,-1,11,10,73,-1,73,71,11,-1,10,13,74,-1,74,73,10,-1,11,3,75,-1,75,76,11,-1,79,80,77,-1,77,78,79,-1,66,72,81,-1,81,88,66,-1,90,67,66,-1,66,89,90,-1,91,92,90,-1,90,89,91,-1,91,89,93,-1,93,123,91,-1,95,96,73,-1,73,74,95,-1,99,100,97,-1,97,98,99,-1,70,73,96,-1,99,98,70,-1,70,96,99,-1,72,70,98,-1,101,94,93,-1,93,78,101,-1,78,77,102,-1,102,101,78,-1,70,71,73,-1,123,124,104,-1,104,91,123,-1,94,101,105,-1,105,103,94,-1,81,72,98,-1,98,97,81,-1,92,91,104,-1,104,106,92,-1,5,67,90,-1,90,40,5,-1,41,40,90,-1,90,92,41,-1,11,71,3,-1,75,3,5,-1,5,80,75,-1,88,93,89,-1,89,66,88,-1,81,107,79,-1,79,88,81,-1,109,95,74,-1,74,108,109,-1,97,100,110,-1,110,111,97,-1,107,81,97,-1,97,111,107,-1,93,88,79,-1,79,78,93,-1,47,108,74,-1,74,13,47,-1,5,40,77,-1,77,80,5,-1,48,102,77,-1,77,40,48,-1,80,79,107,-1,107,75,80,-1,76,112,109,-1,109,108,76,-1,71,68,69,-1,68,67,69,-1,113,102,48,-1,48,41,113,-1,113,101,102,-1,76,108,47,-1,47,11,76,-1,76,75,107,-1,107,112,76,-1,99,96,95,-1,95,100,99,-1,109,110,100,-1,100,95,109,-1,112,111,110,-1,110,109,112,-1,112,107,111,-1,127,126,125,-1,125,128,127,-1,130,129,132,-1,132,131,130,-1,127,132,129,-1,129,126,127,-1,125,125,126,-1,126,126,125,-1,125,125,134,-1,134,133,125,-1,129,129,126,-1,126,126,129,-1,113,114,105,-1,105,101,113,-1,106,41,41,-1,41,92,106,-1,41,41,114,-1,114,113,41,-1,115,105,114,-1,114,116,115,-1,117,60,41,-1,41,106,117,-1,116,114,41,-1,41,60,116,-1,120,117,118,-1,118,119,120,-1,65,60,117,-1,117,120,65,-1,116,60,65,-1,65,120,116,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_2()
		{
			int[] value = {116,120,119,-1,119,115,116,-1,118,104,124,-1,124,119,118,-1,103,105,115,-1,115,119,103,-1,106,104,118,-1,118,117,106,-1,125,133,135,-1,135,128,125,-1,129,130,136,-1,136,129,129,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_11_190_point_1()
		{
			double[] value = {4.454,6.394,1.888,4.618,8.543,2.843,2.505,6.424,3.401,-0.0525,8.865,3.058,2.907,8.739,3.501,-0.0525,6.579,3.375,4.503,11.18,1.774,2.559,11.2,2.513,5.288,8.66,1.686,2.572,14.37,0.762,3.084,14.78,-0.7761,-0.0525,11.54,-3.168,2.713,11.37,-3.061,2.519,8.947,-3.394,2.296,3.196,-2.751,2.433,6.093,-3.125,4.443,6.093,-2.609,4.441,3.26,-1.876,4.798,6.24,-0.4598,5.297,8.754,-0.6018,2.586,3.205,3.53,4.405,2.971,2.014,2.546,-0.2983,3.174,5.021,-0.2466,1.609,5.611,-0.256,-0.2087,4.795,3.13,-0.2841,5.182,13.85,0.487,5.182,14.22,-0.7721,6.176,11.13,0.3197,6.431,11.09,-0.7003,6.741,13.76,-0.7542,6.358,13.74,0.3803,4.878,-0.2809,-1.933,2.54,0.2297,-3.055,2.978,-0.3402,-3.459,-0.0525,-0.4079,3.65,-0.0525,3.268,3.731,-0.0525,6.069,-3.502,4.842,8.857,-2.741,5.136,14.02,-1.964,2.907,14.62,-2.194,5.827,11.05,-2.238,5.686,13.4,-1.942,-0.0525,14.9,-2.279,-0.0525,-0.3848,-3.731,5.087,11.17,-2.785,1.708,14.19,-0.6462,1.186,14.19,-1.907,1.074,17.9,-1.793,1.549,17.9,-0.6462,1.186,14.19,0.615,1.074,17.9,0.501,0.6887,18.91,-1.408,1.004,18.91,-0.6462,0.6887,18.91,0.116,5.463,-0.1408,-0.2011,4.733,-0.1408,-1.898,2.827,-0.1408,-3.351,-0.0525,-0.1408,-3.565,4.459,-1.318,1.45,5.0,-1.893,-0.2086,4.585,-1.099,-1.774,2.444,-1.963,-2.571,-0.0525,-2.219,2.353,2.172,-1.976,2.18,-0.0525,-2.219,-2.845,2.308,-2.56,-0.2177,4.727,-0.1408,1.6,2.448,-0.1408,2.936,-0.0525,17.9,0.9675,-0.0525,14.19,1.128,-0.0525,18.91,0.423,-4.559,6.394,1.888,-4.722,8.543,2.843,-2.61,6.424,3.401,-3.012,8.739,3.501,-4.608,11.18,1.774,-2.664,11.2,2.513,-5.393,8.66,1.686,-2.676,14.37,0.762,-0.0525,14.51,1.033,-0.0525,11.36,2.188,-3.189,14.78,-0.7761,-0.0525,15.19,-0.8003,-2.624,8.947,-3.394,-0.0525,9.013,-3.525,-2.818,11.37,-3.061,-2.401,3.196,-2.751,-2.538,6.093,-3.125,-4.548,6.093,-2.609,-4.546,3.26,-1.876,-5.401,8.754,-0.6018,-4.903,6.24,-0.4598,-2.691,3.205,3.53,-4.51,2.971,2.014,-2.651,-0.2983,3.174,-5.126,-0.2466,1.609,-4.899,3.13,-0.2841,-5.716,-0.256,-0.2087,-5.341,13.85,0.487};
			return value;
		}
		private double[] getCoordinate_11_190_point_2()
		{
			double[] value = {-5.341,14.22,-0.7721,-6.589,11.09,-0.7003,-6.741,13.76,-0.7542,-6.358,13.74,0.3803,-6.335,11.13,0.3197,-4.983,-0.2809,-1.933,-2.645,0.2297,-3.055,-4.832,-0.1408,1.6,-5.568,-0.1408,-0.2011,-4.838,-0.1408,-1.898,-2.552,-0.1408,2.936,-4.947,8.857,-2.741,-5.294,14.02,-1.964,-3.012,14.62,-2.194,-6.16,13.69,-1.942,-5.985,11.05,-2.238,-0.0525,3.171,-3.179,-0.0525,0.3216,-3.478,-4.713,11.17,-2.785,-3.083,-0.3402,-3.459,-1.179,17.9,-1.793,-1.654,17.9,-0.6462,-1.813,14.19,-0.6462,-1.291,14.19,-1.907,-1.179,17.9,0.501,-1.291,14.19,0.615,-0.7937,18.91,-1.408,-1.109,18.91,-0.6462,-0.0525,17.9,-2.26,-0.0525,18.91,-1.715,-0.7937,18.91,0.116,-2.932,-0.1408,-3.351,-0.0525,-0.1408,3.431,-4.69,-1.099,-1.774,-2.549,-1.963,-2.571,-2.277,-1.976,2.18,-4.563,-1.318,1.45,-2.413,-2.56,-0.2177,-5.105,-1.893,-0.2086,-0.0525,-2.867,-0.2406,-0.0525,14.19,-2.42};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_11_191_point_1()
		{
			double[] value = {0.5258,0.7375,0.5404,0.7916,0.5892,0.738,0.6514,0.8021,0.5821,0.793,0.6519,0.7393,0.54,0.8589,0.5896,0.8555,0.5114,0.7983,0.587,0.9424,0.6514,0.9431,0.6509,0.8653,0.5677,0.9798,0.6498,0.9901,0.5867,0.8044,0.5828,0.8642,0.5891,0.6629,0.5874,0.7344,0.5358,0.7341,0.5294,0.6606,0.4728,0.7921,0.4823,0.7294,0.5893,0.6621,0.532,0.6516,0.5932,0.5649,0.5467,0.5572,0.4885,0.6535,0.5146,0.5441,0.5095,0.93,0.4974,0.9584,0.4499,0.8695,0.4667,0.9323,0.4925,0.9215,0.4737,0.8685,0.5438,0.5609,0.5871,0.591,0.5509,0.5507,0.5231,0.5335,0.5476,0.5547,0.5922,0.5601,0.6526,0.6648,0.6533,0.5684,0.5263,0.8036,0.5097,0.9327,0.5774,0.947,0.4959,0.919,0.4905,0.8623,0.6489,0.9534,0.6519,0.5959,0.5256,0.8609,0.5802,0.5627,0.2512,0.9262,0.2576,0.9262,0.2576,0.9782,0.2512,0.9782,0.2447,0.9262,0.2447,0.9782,0.5808,0.561,0.5377,0.5438,0.5908,0.5213,0.6539,0.5162,0.5995,0.5198,0.5437,0.5288,0.5808,0.4589,0.5107,0.498,0.6544,0.4462,0.7806,0.7397,0.7172,0.7391,0.7651,0.7935,0.7233,0.7942,0.7643,0.8608,0.7147,0.8566,0.794,0.8008,0.7159,0.9435,0.7321,0.9812,0.7136,0.8055,0.7165,0.8653,0.7135,0.664,0.7695,0.6641,0.7656,0.7361,0.714,0.7354,0.8277,0.7951,0.264,0.9782,0.264,0.9262,0.2383,0.9782,0.2383,0.9262,0.264,0.9782,0.2383,0.9782,0.8192,0.7323,0.7734,0.6523,0.7184,0.6632,0.7662,0.5624,0.7161,0.5662,0.8141,0.6563,0.7955,0.5617,0.8027,0.961,0.7935,0.9324,0.8517,0.8729,0.8305,0.8716,0.8107,0.9243};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_2()
		{
			double[] value = {0.8339,0.9354,0.7591,0.5642,0.7168,0.592,0.7875,0.5273,0.7553,0.554,0.7563,0.5617,0.715,0.5627,0.7739,0.8057,0.7205,0.9482,0.7884,0.935,0.8024,0.9215,0.8088,0.8649,0.7737,0.863,0.722,0.5644,0.721,0.5616,0.7707,0.5413,0.7145,0.5223,0.7104,0.521,0.7664,0.5355,0.7975,0.5007,0.7279,0.4601,0.5093,0.5555,0.5151,0.5256,0.7924,0.547,0.7818,0.5272,0.2576,0.9782,0.2512,0.9782,0.2512,0.9262,0.2576,0.9262,0.2447,0.9782,0.2383,0.9782,0.2383,0.9262,0.2447,0.9262,0.264,0.9782,0.264,0.9782,0.264,0.9262,0.2383,0.9782};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_coordIndex_1()
		{
			int[] value = {1,111,2,-1,2,0,1,-1,118,3,4,-1,4,124,118,-1,8,128,6,-1,6,7,8,-1,9,10,11,-1,11,12,9,-1,14,11,10,-1,10,13,14,-1,17,18,15,-1,15,16,17,-1,24,21,22,-1,22,23,24,-1,24,1,0,-1,0,25,24,-1,27,4,3,-1,3,26,27,-1,30,7,6,-1,6,29,30,-1,150,151,32,-1,32,31,150,-1,34,33,152,-1,152,153,34,-1,156,35,34,-1,34,153,156,-1,33,34,35,-1,35,3,33,-1,152,33,3,-1,3,118,152,-1,32,17,16,-1,16,31,32,-1,24,25,36,-1,36,21,24,-1,37,38,27,-1,27,26,37,-1,40,30,29,-1,29,39,40,-1,29,42,41,-1,41,39,29,-1,44,45,46,-1,46,43,44,-1,19,13,71,-1,71,47,19,-1,110,53,9,-1,9,93,110,-1,128,176,48,-1,48,6,128,-1,48,42,29,-1,29,6,48,-1,4,32,151,-1,151,124,4,-1,20,14,13,-1,13,19,20,-1,17,32,4,-1,4,27,17,-1,38,18,17,-1,17,27,38,-1,44,43,49,-1,49,50,44,-1,92,43,46,-1,51,49,92,-1,92,71,51,-1,13,52,51,-1,51,71,13,-1,10,44,50,-1,9,53,45,-1,45,10,9,-1,8,7,0,-1,0,2,8,-1,36,40,54,-1,54,21,36,-1,14,38,37,-1,37,11,14,-1,12,11,37,-1,37,22,12,-1,7,30,25,-1,25,0,7,-1,36,25,30,-1,30,40,36,-1,18,38,14,-1,14,20,18,-1,112,5,48,-1,48,176,112,-1,28,42,48,-1,48,5,28,-1,93,92,46,-1,46,110,93,-1,45,44,10,-1,50,49,51,-1,51,52,50,-1,52,13,10,-1,10,50,52,-1,49,43,92,-1,1,35,156,-1,156,111,1,-1,35,23,26,-1,26,3,35,-1,9,116,117,-1,117,93,9,-1,9,12,54,-1,54,116,9,-1,22,37,26,-1,26,23,22,-1,22,21,54,-1,54,12,22,-1,35,1,24,-1,24,23,35,-1,57,58,55,-1,55,56,57,-1,104,105,61,-1,61,62,104,-1,63,58,57,-1,57,106,63,-1,65,66,198,-1,198,199,65,-1,67,203,113,-1,113,107,67,-1,66,65,56,-1,56,55,66,-1,68,61,105,-1,105,107,68,-1,58,63,94,-1,94,69,58,-1,66,95,119,-1,119,198,66,-1,70,95,66,-1,66,55,70,-1,58,69,70,-1,70,55,58,-1,57,56,60,-1,60,59,57,-1,59,104,106,-1,106,57,59,-1,65,199,203,-1,203,67,65,-1,65,67,60,-1,60,56,65,-1,63,73,71,-1,71,94,63,-1,64,62,103,-1,103,102,64,-1,64,72,73,-1,73,63,64,-1,219,74,75,-1,75,218,219,-1,76,77,78,-1,78,79,76,-1,83,80,81,-1,81,82,83,-1,84,74,219,-1,219,114,84,-1,83,77,76,-1,76,80,83,-1,231,218,75,-1,75,85,231,-1,78,87,86,-1,86,79,78,-1,75,74,88,-1,88,89,75,-1,114,237,90,-1,90,84,114,-1,84,81,88,-1,88,74,84,-1,91,85,75,-1,75,89,91,-1,90,82,81,-1,81,84,90,-1,89,88,76,-1,76,79,89,-1,76,88,81,-1,81,80,76,-1,86,91,89,-1,89,79,86,-1,78,71,92,-1,92,87,78,-1,69,83,82,-1,82,70,69,-1,69,94,77,-1,77,83,69,-1,95,90,237,-1,237,119,95,-1,82,90,95,-1,95,70,82,-1,71,78,77,-1,77,94,71,-1,112,231,85,-1,85,5,112,-1,109,108,86,-1,86,87,109,-1,91,28,5,-1,5,85,91,-1,108,28,91,-1,91,86,108,-1,62,61,96,-1,96,97,62,-1,68,115,98,-1,98,99,68,-1,61,68,101,-1,101,100,61,-1,59,60,105,-1,105,104,59,-1,115,68,107,-1,107,113,115,-1,60,67,107,-1,107,105,60,-1,104,62,64,-1,64,106,104,-1,106,64,63,-1,120,109,87,-1,87,92,120,-1,41,42,28,-1,28,108,41,-1,92,93,120,-1,46,45,53,-1,53,110,46,-1,116,39,41,-1,41,117,116,-1,39,116,54,-1,54,40,39,-1,41,108,109,-1,109,117,41,-1,93,117,109,-1,109,120,93,-1,122,121,2,-1,2,111,122,-1,118,124,123,-1,123,125,118,-1,8,127,126,-1,126,128,8,-1,131,130,129,-1,129,132,131,-1,134,133,132,-1,132,129,134,-1,137,136,135,-1,135,138,137,-1,141,140,139,-1,139,142,141,-1,141,143,121,-1,121,122,141,-1,145,144,125,-1,125,123,145,-1,147,146,126,-1,126,127,147,-1,150,149,148,-1,148,151,150,-1,154,153,152,-1,152,155,154,-1,156,153,154,-1,154,157,156,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_2()
		{
			int[] value = {157,154,155,-1,155,125,157,-1,152,118,125,-1,125,155,152,-1,148,149,136,-1,136,137,148,-1,141,142,158,-1,158,143,141,-1,159,144,145,-1,145,160,159,-1,162,161,146,-1,146,147,162,-1,146,161,163,-1,163,164,146,-1,167,166,165,-1,165,168,167,-1,171,170,169,-1,169,133,171,-1,173,172,131,-1,131,174,173,-1,128,126,175,-1,175,176,128,-1,175,126,146,-1,146,164,175,-1,123,124,151,-1,151,148,123,-1,177,171,133,-1,133,134,177,-1,137,145,123,-1,123,148,137,-1,160,145,137,-1,137,138,160,-1,167,179,178,-1,178,166,167,-1,180,165,166,-1,181,169,180,-1,180,178,181,-1,133,169,181,-1,181,182,133,-1,132,179,167,-1,131,132,168,-1,168,174,131,-1,8,2,121,-1,121,127,8,-1,158,142,183,-1,183,162,158,-1,134,129,159,-1,159,160,134,-1,130,139,159,-1,159,129,130,-1,127,121,143,-1,143,147,127,-1,158,162,147,-1,147,143,158,-1,138,177,134,-1,134,160,138,-1,112,176,175,-1,175,184,112,-1,185,184,175,-1,175,164,185,-1,172,173,165,-1,165,180,172,-1,168,132,167,-1,179,182,181,-1,181,178,179,-1,182,179,132,-1,132,133,182,-1,178,180,166,-1,122,111,156,-1,156,157,122,-1,157,125,144,-1,144,140,157,-1,131,172,187,-1,187,186,131,-1,131,186,183,-1,183,130,131,-1,139,140,144,-1,144,159,139,-1,139,130,183,-1,183,142,139,-1,157,140,141,-1,141,122,157,-1,190,189,188,-1,188,191,190,-1,193,192,195,-1,195,194,193,-1,196,197,190,-1,190,191,196,-1,200,199,198,-1,198,201,200,-1,202,204,113,-1,113,203,202,-1,201,188,189,-1,189,200,201,-1,205,204,194,-1,194,195,205,-1,191,207,206,-1,206,196,191,-1,201,198,119,-1,119,208,201,-1,209,188,201,-1,201,208,209,-1,191,188,209,-1,209,207,191,-1,190,211,210,-1,210,189,190,-1,211,190,197,-1,197,193,211,-1,200,202,203,-1,203,199,200,-1,200,189,210,-1,210,202,200,-1,196,206,169,-1,169,212,196,-1,215,214,213,-1,213,192,215,-1,215,196,212,-1,212,216,215,-1,219,218,217,-1,217,220,219,-1,223,222,221,-1,221,224,223,-1,227,226,225,-1,225,228,227,-1,229,114,219,-1,219,220,229,-1,227,228,223,-1,223,224,227,-1,231,230,217,-1,217,218,231,-1,221,222,232,-1,232,233,221,-1,217,235,234,-1,234,220,217,-1,114,229,236,-1,236,237,114,-1,229,220,234,-1,234,225,229,-1,238,235,217,-1,217,230,238,-1,236,229,225,-1,225,226,236,-1,235,222,223,-1,223,234,235,-1,223,228,225,-1,225,234,223,-1,232,222,235,-1,235,238,232,-1,221,233,180,-1,180,169,221,-1,207,209,226,-1,226,227,207,-1,207,227,224,-1,224,206,207,-1,208,119,237,-1,237,236,208,-1,226,209,208,-1,208,236,226,-1,169,206,224,-1,224,221,169,-1,112,184,230,-1,230,231,112,-1,239,233,232,-1,232,240,239,-1,238,230,184,-1,184,185,238,-1,240,232,238,-1,238,185,240,-1,192,242,241,-1,241,195,192,-1,205,244,243,-1,243,115,205,-1,195,246,245,-1,245,205,195,-1,211,193,194,-1,194,210,211,-1,115,113,204,-1,204,205,115,-1,210,194,204,-1,204,202,210,-1,193,197,215,-1,215,192,193,-1,197,196,215,-1,247,180,233,-1,233,239,247,-1,163,240,185,-1,185,164,163,-1,180,247,172,-1,165,173,174,-1,174,168,165,-1,186,187,163,-1,163,161,186,-1,161,162,183,-1,183,186,161,-1,163,187,239,-1,239,240,163,-1,172,247,239,-1,239,187,172,-1,251,248,249,-1,249,250,251,-1,249,248,252,-1,252,253,249,-1,255,253,252,-1,252,254,255,-1,254,256,257,-1,257,255,254,-1,256,258,259,-1,259,257,256,-1,261,259,258,-1,258,260,261,-1,262,263,261,-1,261,260,262,-1,250,263,262,-1,262,251,250,-1,265,266,267,-1,267,264,265,-1,267,269,268,-1,268,264,267,-1,270,268,269,-1,269,271,270,-1,272,270,271,-1,271,273,272,-1,272,273,275,-1,275,274,272,-1,277,276,274,-1,274,275,277,-1,277,279,278,-1,278,276,277,-1,266,265,278,-1,278,279,266,-1,249,267,266,-1,266,250,249,-1,267,249,253,-1,253,269,267,-1,269,253,255,-1,255,271,269,-1,273,271,255,-1,255,257,273,-1,275,273,257,-1,257,259,275,-1,259,261,277,-1,277,275,259,-1,277,261,263,-1,263,279,277,-1,279,263,250,-1,250,266,279,-1,248,251,280,-1,251,262,280,-1,262,260,280,-1,260,258,280,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_3()
		{
			int[] value = {258,256,280,-1,256,254,280,-1,254,252,280,-1,252,248,280,-1,265,264,281,-1,264,268,281,-1,268,270,281,-1,270,272,281,-1,272,274,281,-1,274,276,281,-1,276,278,281,-1,278,265,281,-1,282,283,284,-1,282,284,285,-1,282,285,286,-1,282,286,287,-1,282,287,288,-1,282,288,289,-1,282,289,290,-1,282,290,283,-1,283,292,291,-1,291,284,283,-1,291,293,285,-1,285,284,291,-1,285,293,294,-1,294,286,285,-1,294,295,287,-1,287,286,294,-1,295,296,288,-1,288,287,295,-1,288,296,297,-1,297,289,288,-1,289,297,298,-1,298,290,289,-1,298,292,283,-1,283,290,298,-1,299,291,292,-1,292,300,299,-1,299,301,293,-1,291,299,293,-1,301,302,293,-1,293,302,294,-1,294,302,303,-1,303,295,294,-1,303,304,296,-1,296,295,303,-1,296,304,305,-1,305,297,296,-1,297,305,306,-1,306,298,297,-1,298,306,300,-1,300,292,298,-1,307,299,300,-1,299,307,308,-1,308,301,299,-1,301,308,307,-1,307,302,301,-1,307,303,302,-1,307,304,303,-1,307,305,304,-1,307,306,305,-1,307,300,306,-1,309,310,311,-1,309,312,310,-1,309,313,312,-1,309,314,313,-1,309,315,314,-1,309,316,315,-1,309,317,316,-1,309,311,317,-1,319,311,310,-1,310,318,319,-1,318,310,312,-1,312,320,318,-1,320,312,313,-1,313,321,320,-1,322,321,313,-1,313,314,322,-1,322,314,315,-1,315,323,322,-1,316,324,323,-1,323,315,316,-1,317,325,324,-1,324,316,317,-1,319,325,317,-1,317,311,319,-1,326,327,319,-1,319,318,326,-1,328,334,326,-1,326,320,328,-1,318,320,326,-1,321,329,328,-1,328,320,321,-1,329,334,328,-1,322,330,329,-1,329,321,322,-1,330,322,323,-1,323,331,330,-1,323,324,332,-1,332,331,323,-1,325,333,332,-1,332,324,325,-1,333,325,319,-1,319,327,333,-1,335,327,326,-1,335,326,334,-1,334,329,335,-1,335,329,330,-1,335,330,331,-1,335,331,332,-1,335,332,333,-1,335,333,327,-1,339,338,337,-1,337,336,339,-1,337,341,340,-1,340,336,337,-1,343,342,340,-1,340,341,343,-1,342,343,345,-1,345,344,342,-1,344,345,347,-1,347,346,344,-1,349,348,346,-1,346,347,349,-1,350,348,349,-1,349,351,350,-1,338,339,350,-1,350,351,338,-1,353,352,355,-1,355,354,353,-1,355,352,356,-1,356,357,355,-1,358,359,357,-1,357,356,358,-1,360,361,359,-1,359,358,360,-1,360,362,363,-1,363,361,360,-1,365,363,362,-1,362,364,365,-1,365,364,366,-1,366,367,365,-1,354,367,366,-1,366,353,354,-1,337,338,354,-1,354,355,337,-1,355,357,341,-1,341,337,355,-1,357,359,343,-1,343,341,357,-1,361,345,343,-1,343,359,361,-1,363,347,345,-1,345,361,363,-1,347,363,365,-1,365,349,347,-1,365,367,351,-1,351,349,365,-1,367,354,338,-1,338,351,367,-1,336,368,339,-1,339,368,350,-1,350,368,348,-1,348,368,346,-1,346,368,344,-1,344,368,342,-1,342,368,340,-1,340,368,336,-1,353,369,352,-1,352,369,356,-1,356,369,358,-1,358,369,360,-1,360,369,362,-1,362,369,364,-1,364,369,366,-1,366,369,353,-1,370,372,371,-1,370,373,372,-1,370,374,373,-1,370,375,374,-1,370,376,375,-1,370,377,376,-1,370,378,377,-1,370,371,378,-1,371,372,379,-1,379,380,371,-1,379,372,373,-1,373,381,379,-1,373,374,382,-1,382,381,373,-1,382,374,375,-1,375,383,382,-1,383,375,376,-1,376,384,383,-1,376,377,385,-1,385,384,376,-1,377,378,386,-1,386,385,377,-1,386,378,371,-1,371,380,386,-1,387,388,380,-1,380,379,387,-1,387,381,389,-1,379,381,387,-1,389,381,390,-1,381,382,390,-1,382,383,391,-1,391,390,382,-1,391,383,384,-1,384,392,391,-1,384,385,393,-1,393,392,384,-1,385,386,394,-1,394,393,385,-1,386,380,388,-1,388,394,386,-1,395,388,387,-1,387,389,396,-1,396,395,387,-1,389,395,396,-1,395,389,390,-1,395,390,391,-1,395,391,392,-1,395,392,393,-1,395,393,394,-1,395,394,388,-1,397,399,398,-1,397,398,400,-1,397,400,401,-1,397,401,402,-1,397,402,403,-1,397,403,404,-1,397,404,405,-1,397,405,399,-1,407,406,398,-1,398,399,407,-1,406,408,400,-1,400,398,406,-1,408,409,401,-1,401,400,408,-1,410,402,401,-1,401,409,410,-1,410,411,403,-1,403,402,410,-1,404,403,411,-1,411,412,404,-1,405,404,412,-1,412,413,405,-1,407,399,405,-1,405,413,407,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_4()
		{
			int[] value = {414,406,407,-1,407,415,414,-1,416,408,414,-1,414,422,416,-1,406,414,408,-1,409,408,416,-1,416,417,409,-1,417,416,422,-1,410,409,417,-1,417,418,410,-1,418,419,411,-1,411,410,418,-1,411,419,420,-1,420,412,411,-1,413,412,420,-1,420,421,413,-1,421,415,407,-1,407,413,421,-1,423,414,415,-1,423,422,414,-1,422,423,417,-1,423,418,417,-1,423,419,418,-1,423,420,419,-1,423,421,420,-1,423,415,421,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,6,7,4,-1,4,5,6,-1,10,11,8,-1,8,9,10,-1,14,68,12,-1,12,13,14,-1,16,12,68,-1,68,15,16,-1,19,20,17,-1,17,18,19,-1,23,24,21,-1,21,22,23,-1,23,2,1,-1,1,25,23,-1,27,4,7,-1,7,26,27,-1,29,9,8,-1,8,28,29,-1,32,33,30,-1,30,31,32,-1,36,37,34,-1,34,35,36,-1,38,39,36,-1,36,35,38,-1,37,36,39,-1,39,7,37,-1,34,37,7,-1,7,6,34,-1,30,19,18,-1,18,31,30,-1,23,25,40,-1,40,24,23,-1,41,42,27,-1,27,26,41,-1,44,29,28,-1,28,43,44,-1,28,46,45,-1,45,43,28,-1,54,55,56,-1,56,53,54,-1,49,15,47,-1,47,48,49,-1,141,69,14,-1,14,61,141,-1,11,51,50,-1,50,8,11,-1,50,46,28,-1,28,8,50,-1,4,30,33,-1,33,5,4,-1,52,16,15,-1,15,49,52,-1,19,30,4,-1,4,27,19,-1,42,20,19,-1,19,27,42,-1,54,53,62,-1,62,63,54,-1,64,53,56,-1,66,62,64,-1,64,65,66,-1,15,67,66,-1,66,65,15,-1,68,54,63,-1,14,69,55,-1,55,68,14,-1,10,9,1,-1,1,0,10,-1,40,44,57,-1,57,24,40,-1,16,42,41,-1,41,12,16,-1,13,12,41,-1,41,21,13,-1,9,29,25,-1,25,1,9,-1,40,25,29,-1,29,44,40,-1,20,42,16,-1,16,52,20,-1,58,59,50,-1,50,51,58,-1,60,46,50,-1,50,59,60,-1,61,64,56,-1,56,141,61,-1,55,54,68,-1,63,62,66,-1,66,67,63,-1,67,15,68,-1,68,63,67,-1,62,53,64,-1,2,39,38,-1,38,3,2,-1,39,22,26,-1,26,7,39,-1,14,142,143,-1,143,61,14,-1,14,13,57,-1,57,142,14,-1,21,41,26,-1,26,22,21,-1,21,24,57,-1,57,13,21,-1,39,2,23,-1,23,22,39,-1,73,74,71,-1,71,72,73,-1,76,77,78,-1,78,75,76,-1,79,74,73,-1,73,80,79,-1,83,84,81,-1,81,82,83,-1,85,86,87,-1,87,88,85,-1,84,83,72,-1,72,71,84,-1,89,78,77,-1,77,88,89,-1,74,79,144,-1,144,145,74,-1,84,147,146,-1,146,81,84,-1,148,147,84,-1,84,71,148,-1,74,145,148,-1,148,71,74,-1,73,72,95,-1,95,96,73,-1,96,76,80,-1,80,73,96,-1,83,82,86,-1,86,85,83,-1,83,85,95,-1,95,72,83,-1,79,97,149,-1,149,144,79,-1,101,75,99,-1,99,100,101,-1,101,102,97,-1,97,79,101,-1,105,106,103,-1,103,104,105,-1,109,110,107,-1,107,108,109,-1,113,114,111,-1,111,112,113,-1,116,106,105,-1,105,115,116,-1,113,110,109,-1,109,114,113,-1,118,104,103,-1,103,117,118,-1,107,120,119,-1,119,108,107,-1,103,106,121,-1,121,122,103,-1,115,124,123,-1,123,116,115,-1,116,111,121,-1,121,106,116,-1,125,117,103,-1,103,122,125,-1,123,112,111,-1,111,116,123,-1,122,121,109,-1,109,108,122,-1,109,121,111,-1,111,114,109,-1,119,125,122,-1,122,108,119,-1,107,98,126,-1,126,120,107,-1,91,113,112,-1,112,94,91,-1,91,90,110,-1,110,113,91,-1,93,123,124,-1,124,92,93,-1,112,123,93,-1,93,94,112,-1,98,107,110,-1,110,90,98,-1,128,118,117,-1,117,127,128,-1,129,130,119,-1,119,120,129,-1,125,131,127,-1,127,117,125,-1,130,131,125,-1,125,119,130,-1,75,78,132,-1,132,133,75,-1,89,134,135,-1,135,136,89,-1,78,89,137,-1,137,138,78,-1,96,95,77,-1,77,76,96,-1,134,89,88,-1,88,87,134,-1,95,85,88,-1,88,77,95,-1,76,75,101,-1,101,80,76,-1,80,101,79,-1,151,129,120,-1,120,126,151,-1,45,46,60,-1,60,70,45,-1,140,61,150,-1,56,55,69,-1,69,141,56,-1,142,43,45,-1,45,143,142,-1,43,142,57,-1,57,44,43,-1,45,70,139,-1,139,143,45,-1,61,143,139,-1,139,150,61,-1,154,153,152,-1,152,155,154,-1,158,157,156,-1,156,159,158,-1,162,161,160,-1,160,163,162,-1,166,165,164,-1,164,167,166,-1,169,168,167,-1,167,164,169,-1,172,171,170,-1,170,173,172,-1,176,175,174,-1,174,177,176,-1,176,178,153,-1,153,154,176,-1,180,179,159,-1,159,156,180,-1,182,181,160,-1,160,161,182,-1,185,184,183,-1,183,186,185,-1,189,188,187,-1,187,190,189,-1,191,188,189,-1,189,192,191,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_2()
		{
			int[] value = {192,189,190,-1,190,159,192,-1,187,158,159,-1,159,190,187,-1,183,184,171,-1,171,172,183,-1,176,177,193,-1,193,178,176,-1,194,179,180,-1,180,195,194,-1,197,196,181,-1,181,182,197,-1,181,196,198,-1,198,199,181,-1,202,201,200,-1,200,203,202,-1,206,205,204,-1,204,168,206,-1,208,207,166,-1,166,209,208,-1,163,160,210,-1,210,211,163,-1,210,160,181,-1,181,199,210,-1,156,157,186,-1,186,183,156,-1,212,206,168,-1,168,169,212,-1,172,180,156,-1,156,183,172,-1,195,180,172,-1,172,173,195,-1,202,214,213,-1,213,201,202,-1,215,200,201,-1,217,216,215,-1,215,213,217,-1,168,216,217,-1,217,218,168,-1,167,214,202,-1,166,167,203,-1,203,209,166,-1,162,152,153,-1,153,161,162,-1,193,177,219,-1,219,197,193,-1,169,164,194,-1,194,195,169,-1,165,174,194,-1,194,164,165,-1,161,153,178,-1,178,182,161,-1,193,197,182,-1,182,178,193,-1,173,212,169,-1,169,195,173,-1,220,211,210,-1,210,221,220,-1,222,221,210,-1,210,199,222,-1,207,208,200,-1,200,215,207,-1,203,167,202,-1,214,218,217,-1,217,213,214,-1,218,214,167,-1,167,168,218,-1,213,215,201,-1,154,155,191,-1,191,192,154,-1,192,159,179,-1,179,175,192,-1,166,207,224,-1,224,223,166,-1,166,223,219,-1,219,165,166,-1,174,175,179,-1,179,194,174,-1,174,165,219,-1,219,177,174,-1,192,175,176,-1,176,154,192,-1,227,226,225,-1,225,228,227,-1,230,229,232,-1,232,231,230,-1,233,234,227,-1,227,228,233,-1,237,236,235,-1,235,238,237,-1,239,242,241,-1,241,240,239,-1,238,225,226,-1,226,237,238,-1,243,242,231,-1,231,232,243,-1,228,245,244,-1,244,233,228,-1,238,235,246,-1,246,247,238,-1,248,225,238,-1,238,247,248,-1,228,225,248,-1,248,245,228,-1,227,250,249,-1,249,226,227,-1,250,227,234,-1,234,230,250,-1,237,239,240,-1,240,236,237,-1,237,226,249,-1,249,239,237,-1,233,244,252,-1,252,251,233,-1,255,254,253,-1,253,229,255,-1,255,233,251,-1,251,256,255,-1,259,258,257,-1,257,260,259,-1,263,262,261,-1,261,264,263,-1,267,266,265,-1,265,268,267,-1,270,269,259,-1,259,260,270,-1,267,268,263,-1,263,264,267,-1,272,271,257,-1,257,258,272,-1,261,262,273,-1,273,274,261,-1,257,276,275,-1,275,260,257,-1,269,270,277,-1,277,278,269,-1,270,260,275,-1,275,265,270,-1,279,276,257,-1,257,271,279,-1,277,270,265,-1,265,266,277,-1,276,262,263,-1,263,275,276,-1,263,268,265,-1,265,275,263,-1,273,262,276,-1,276,279,273,-1,261,274,281,-1,281,280,261,-1,283,282,266,-1,266,267,283,-1,283,267,264,-1,264,284,283,-1,286,285,278,-1,278,277,286,-1,266,282,286,-1,286,277,266,-1,280,284,264,-1,264,261,280,-1,288,287,271,-1,271,272,288,-1,289,274,273,-1,273,290,289,-1,279,271,287,-1,287,291,279,-1,290,273,279,-1,279,291,290,-1,229,293,292,-1,292,232,229,-1,243,296,295,-1,295,294,243,-1,232,298,297,-1,297,243,232,-1,250,230,231,-1,231,249,250,-1,294,241,242,-1,242,243,294,-1,249,231,242,-1,242,239,249,-1,230,234,255,-1,255,229,230,-1,234,233,255,-1,299,281,274,-1,274,289,299,-1,198,300,222,-1,222,199,198,-1,301,302,207,-1,200,208,209,-1,209,203,200,-1,223,224,198,-1,198,196,223,-1,196,197,219,-1,219,223,196,-1,198,224,303,-1,303,300,198,-1,207,302,303,-1,303,224,207,-1,307,304,305,-1,305,306,307,-1,305,304,308,-1,308,309,305,-1,305,309,308,-1,308,304,305,-1,304,307,306,-1,306,305,304,-1,307,310,311,-1,311,306,307,-1,313,311,310,-1,310,312,313,-1,310,311,313,-1,313,312,310,-1,306,311,310,-1,310,307,306,-1,314,315,316,-1,316,314,314,-1,316,318,317,-1,317,314,316,-1,314,317,318,-1,318,316,314,-1,314,314,316,-1,316,315,314,-1,314,315,319,-1,319,314,314,-1,321,320,314,-1,314,319,321,-1,321,319,322,-1,322,320,321,-1,315,314,322,-1,322,319,315,-1,305,316,315,-1,315,306,305,-1,316,305,309,-1,309,318,316,-1,318,309,305,-1,305,316,318,-1,315,316,305,-1,305,306,315,-1,319,315,306,-1,306,311,319,-1,311,313,321,-1,321,319,311,-1,321,313,311,-1,311,319,321,-1,319,311,306,-1,306,315,319,-1,304,307,323,-1,307,310,323,-1,310,312,323,-1,312,310,323,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_3()
		{
			int[] value = {310,307,323,-1,307,304,323,-1,304,308,323,-1,308,304,323,-1,314,314,324,-1,314,317,324,-1,317,314,324,-1,314,314,324,-1,314,314,324,-1,314,320,324,-1,320,322,324,-1,322,314,324,-1,325,326,327,-1,325,327,328,-1,325,328,329,-1,325,329,330,-1,325,330,331,-1,325,331,332,-1,325,332,333,-1,325,333,326,-1,326,335,334,-1,334,327,326,-1,334,336,328,-1,328,327,334,-1,328,336,337,-1,337,329,328,-1,337,338,330,-1,330,329,337,-1,338,339,331,-1,331,330,338,-1,331,339,340,-1,340,332,331,-1,332,340,341,-1,341,333,332,-1,341,335,326,-1,326,333,341,-1,342,334,335,-1,335,343,342,-1,342,344,336,-1,334,342,336,-1,345,346,336,-1,336,346,337,-1,337,346,347,-1,347,338,337,-1,347,348,339,-1,339,338,347,-1,339,348,349,-1,349,340,339,-1,340,349,350,-1,350,341,340,-1,341,350,343,-1,343,335,341,-1,351,342,343,-1,342,351,352,-1,352,344,342,-1,345,352,351,-1,351,346,345,-1,351,347,346,-1,351,348,347,-1,351,349,348,-1,351,350,349,-1,351,343,350,-1,325,327,326,-1,325,328,327,-1,325,329,328,-1,325,330,329,-1,325,331,330,-1,325,332,331,-1,325,333,332,-1,325,326,333,-1,335,326,327,-1,327,334,335,-1,334,327,328,-1,328,336,334,-1,336,328,329,-1,329,337,336,-1,338,337,329,-1,329,330,338,-1,338,330,331,-1,331,339,338,-1,332,340,339,-1,339,331,332,-1,333,341,340,-1,340,332,333,-1,335,341,333,-1,333,326,335,-1,342,343,335,-1,335,334,342,-1,353,344,342,-1,342,336,353,-1,334,336,342,-1,337,346,353,-1,353,336,337,-1,346,345,353,-1,338,347,346,-1,346,337,338,-1,347,338,339,-1,339,348,347,-1,339,340,349,-1,349,348,339,-1,341,350,349,-1,349,340,341,-1,350,341,335,-1,335,343,350,-1,351,343,342,-1,351,342,344,-1,345,346,351,-1,351,346,347,-1,351,347,348,-1,351,348,349,-1,351,349,350,-1,351,350,343,-1,357,356,355,-1,355,354,357,-1,355,359,358,-1,358,354,355,-1,355,354,358,-1,358,359,355,-1,354,355,356,-1,356,357,354,-1,357,356,361,-1,361,360,357,-1,363,362,360,-1,360,361,363,-1,360,362,363,-1,363,361,360,-1,356,357,360,-1,360,361,356,-1,364,364,366,-1,366,365,364,-1,366,364,367,-1,367,368,366,-1,364,366,368,-1,368,367,364,-1,364,365,366,-1,366,364,364,-1,364,364,369,-1,369,365,364,-1,371,369,364,-1,364,370,371,-1,371,370,372,-1,372,369,371,-1,365,369,372,-1,372,364,365,-1,355,356,365,-1,365,366,355,-1,366,368,359,-1,359,355,366,-1,368,366,355,-1,355,359,368,-1,365,356,355,-1,355,366,365,-1,369,361,356,-1,356,365,369,-1,361,369,371,-1,371,363,361,-1,371,369,361,-1,361,363,371,-1,369,365,356,-1,356,361,369,-1,354,373,357,-1,357,373,360,-1,360,373,362,-1,362,373,360,-1,360,373,357,-1,357,373,354,-1,354,373,358,-1,358,373,354,-1,364,374,364,-1,364,374,367,-1,367,374,364,-1,364,374,364,-1,364,374,364,-1,364,374,370,-1,370,374,372,-1,372,374,364,-1,375,377,376,-1,375,378,377,-1,375,379,378,-1,375,380,379,-1,375,381,380,-1,375,382,381,-1,375,383,382,-1,375,376,383,-1,376,377,384,-1,384,385,376,-1,384,377,378,-1,378,386,384,-1,378,379,387,-1,387,386,378,-1,387,379,380,-1,380,388,387,-1,388,380,381,-1,381,389,388,-1,381,382,390,-1,390,389,381,-1,382,383,391,-1,391,390,382,-1,391,383,376,-1,376,385,391,-1,392,393,385,-1,385,384,392,-1,392,386,394,-1,384,386,392,-1,395,386,396,-1,386,387,396,-1,387,388,397,-1,397,396,387,-1,397,388,389,-1,389,398,397,-1,389,390,399,-1,399,398,389,-1,390,391,400,-1,400,399,390,-1,391,385,393,-1,393,400,391,-1,401,393,392,-1,392,394,402,-1,402,401,392,-1,395,401,402,-1,401,395,396,-1,401,396,397,-1,401,397,398,-1,401,398,399,-1,401,399,400,-1,401,400,393,-1,375,376,377,-1,375,377,378,-1,375,378,379,-1,375,379,380,-1,375,380,381,-1,375,381,382,-1,375,382,383,-1,375,383,376,-1,385,384,377,-1,377,376,385,-1,384,386,378,-1,378,377,384,-1,386,387,379,-1,379,378,386,-1,388,380,379,-1,379,387,388,-1,388,389,381,-1,381,380,388,-1,382,381,389,-1,389,390,382,-1,383,382,390,-1,390,391,383,-1,385,376,383,-1,383,391,385,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_4()
		{
			int[] value = {392,384,385,-1,385,393,392,-1,403,386,392,-1,392,394,403,-1,384,392,386,-1,387,386,403,-1,403,396,387,-1,396,403,395,-1,388,387,396,-1,396,397,388,-1,397,398,389,-1,389,388,397,-1,389,398,399,-1,399,390,389,-1,391,390,399,-1,399,400,391,-1,400,393,385,-1,385,391,400,-1,401,392,393,-1,401,394,392,-1,395,401,396,-1,401,397,396,-1,401,398,397,-1,401,399,398,-1,401,400,399,-1,401,393,400,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_12_199_point_1()
		{
			double[] value = {0.9005,-0.6145,4.151,0.9532,0.1621,4.839,0.0,-0.6867,4.245,0.929,1.885,5.318,0.9789,2.946,5.169,0.9847,0.1758,-2.372,0.8684,-0.7949,0.7211,0.834,-1.015,3.47,0.0,-1.097,3.531,4.388,1.688,0.6199,4.699,2.772,0.5821,4.409,2.567,2.304,4.158,1.51,2.208,4.797,4.23,0.6766,4.479,3.877,2.364,3.395,7.384,4.125,2.387,7.787,4.862,2.437,5.73,5.231,3.658,6.064,4.107,4.777,6.245,0.851,4.476,6.307,2.523,3.476,0.7672,3.645,3.578,1.206,3.744,2.377,0.9448,4.645,2.369,0.4377,4.433,2.278,-0.2885,3.759,2.385,1.808,4.996,2.386,3.002,4.854,2.165,0.4361,-2.077,2.098,-0.3536,0.7104,2.198,-0.5116,2.809,1.154,7.941,5.184,0.9982,5.655,5.654,0.5149,1.585,5.799,0.4902,1.232,5.439,0.9286,1.125,5.211,3.156,0.2681,3.419,3.713,2.083,3.972,3.746,3.354,3.906,3.478,0.5638,0.6931,3.219,0.1947,2.395,3.523,0.8927,-0.5097,2.091,-0.0399,-0.8455,5.674,3.111,-0.8309,5.795,3.115,-0.7085,5.437,2.332,-0.5267,5.351,2.338,-0.6258,4.887,6.131,-0.1991,0.9005,-0.3978,-0.9102,5.666,3.939,-0.6403,5.762,3.929,-0.5133,5.294,4.301,-0.233,5.367,4.311,-0.0354,4.943,1.81,-0.0909,3.959,1.174,2.174,3.12,10.01,1.457,2.96,9.408,3.354,4.168,8.393,2.757,4.385,8.675,1.083,3.526,7.625,4.256,2.72,8.125,4.818,2.696,5.505,5.253,3.66,5.442,4.348,5.034,6.173,0.9192,4.649,5.425,2.482,1.487,9.764,3.712,1.541,10.58,1.636,1.455,8.326,5.261,1.481,5.552,5.668,4.471,8.779,-0.2191,3.192,10.2,-0.2191,5.004,4.301,-0.153,4.641,4.305,2.345,4.927,4.268,0.8143,1.366,5.868,-5.446,1.35,3.777,-5.335,3.821,5.927,-4.185,4.745,6.082,-2.283,4.695,4.15,-2.117,3.783,3.944,-4.083,3.574,7.393,-4.111,2.531,7.885,-4.647,2.999,9.621,-2.588,4.33,8.423,-2.376,1.367,8.138,-4.958,1.169,1.568,-4.469,3.672,2.332,-3.293,4.455,2.711,-1.938,2.747,5.88,-4.933,2.714,3.853,-4.856,1.457,10.14,-2.76,2.44,1.914,-4.064,4.868,3.145,-0.5647,4.475,1.829,-0.1635,5.135,6.181,-0.2191,1.618,10.79,-0.2191,2.724,4.589,5.049,3.591,4.488,4.221,0.1149,4.778,5.713,1.366,4.722,5.562};
			return value;
		}
		private double[] getCoordinate_12_199_point_2()
		{
			double[] value = {2.602,4.621,5.166,1.575,4.708,5.516,4.529,4.351,2.507,3.728,4.429,4.035,3.569,6.668,4.387,2.705,6.791,5.166,4.562,6.59,2.583,1.472,6.791,5.64,3.493,1.22,-1.566,4.216,1.991,-1.124,4.852,1.833,-0.2281,0.0,0.0712,4.922,0.0,0.1217,-2.459,0.0,6.791,5.809,0.0,8.204,-5.027,0.0,5.591,5.846,4.226,1.487,0.633,4.348,1.704,-0.2098,0.0,2.054,5.623,0.0,11.0,-0.2191,4.507,2.505,-0.8744,-0.9005,-0.6145,4.151,-0.9532,0.1621,4.839,-0.979,2.946,5.169,0.0,2.906,5.403,-0.929,1.885,5.318,-0.8685,-0.7949,0.7211,-0.8341,-1.015,3.47,0.0,-0.8828,0.7211,-4.409,2.567,2.304,-4.158,1.51,2.208,-4.388,1.688,0.6199,-4.699,2.772,0.5821,-4.797,4.23,0.6766,-4.479,3.877,2.364,-3.395,7.384,4.125,-2.387,7.787,4.862,-2.437,5.73,5.231,-3.658,6.064,4.107,-3.578,1.206,3.744,-2.377,0.9448,4.645,-2.369,0.4377,4.433,-3.476,0.7672,3.645,-2.278,-0.2885,3.759,-2.385,1.808,4.996,-2.386,3.002,4.854,-2.099,-0.3536,0.7104,-2.198,-0.5116,2.809,-0.9982,5.655,5.654,-1.154,7.941,5.184,0.0,7.969,5.255,0.0,5.613,5.74,0.0,1.616,6.035,0.0,1.154,5.535,-0.4902,1.232,5.439,-0.5149,1.585,5.799,0.0,0.9861,5.283,-0.9287,1.125,5.211,-3.156,0.2681,3.419,-3.713,2.083,3.972,-3.746,3.354,3.906,-3.478,0.5638,0.6931,-3.219,0.1947,2.395,-3.523,0.8927,-0.5097,-2.091,-0.0399,-0.8455,-5.351,2.338,-0.6258,-5.674,3.111,-0.8309,-5.795,3.115,-0.7085,-5.437,2.332,-0.5267,-5.004,4.301,-0.153,-4.887,6.131,-0.1991,-4.777,6.245,0.851,-4.475,1.829,-0.1635,-4.852,1.833,-0.2281,-4.943,1.81,-0.0909,-0.9006,-0.3978,-0.9102,0.0,-0.4855,-0.9159,-4.476,6.307,2.523,-5.666,3.939,-0.6403,-5.762,3.929,-0.5133,-4.868,3.145,-0.5647,-5.294,4.301,-0.233,-5.367,4.311,-0.0354,-3.959,1.174,2.174,-0.9848,0.1758,-2.372,-2.165,0.4361,-2.077,-4.226,1.487,0.633,-4.348,1.704,-0.2098,-3.12,10.01,1.457,-2.96,9.408,3.354,-4.168,8.393,2.757,-4.385,8.675,1.083,-3.66,5.442,4.348,-3.569,6.668,4.387,-2.705,6.791,5.166,-2.696,5.505,5.253,-5.034,6.173,0.9192,-4.562,6.59,2.583,0.0,10.81,1.746,0.0,9.878,3.889};
			return value;
		}
		private double[] getCoordinate_12_199_point_3()
		{
			double[] value = {-1.487,9.764,3.712,-1.541,10.58,1.636,-1.455,8.326,5.261,0.0,8.433,5.392,-1.472,6.791,5.64,-1.481,5.552,5.668,-5.135,6.181,-0.2191,-4.471,8.779,-0.2191,-1.618,10.79,-0.2191,-3.192,10.2,-0.2191,-2.72,8.125,4.818,-3.527,7.625,4.256,-4.927,4.268,0.8143,-3.728,4.429,4.035,-4.529,4.351,2.507,-4.649,5.425,2.482,-4.641,4.305,2.345,-1.35,3.777,-5.335,0.0,3.766,-5.408,0.0,5.903,-5.528,-1.366,5.868,-5.446,-4.695,4.15,-2.117,-3.783,3.944,-4.083,-3.821,5.927,-4.185,-4.745,6.082,-2.283,-2.531,7.885,-4.647,-2.999,9.621,-2.588,-4.33,8.423,-2.376,-3.574,7.393,-4.111,-1.367,8.138,-4.958,-1.169,1.568,-4.469,0.0,1.513,-4.508,-3.672,2.332,-3.293,-4.455,2.711,-1.938,-2.747,5.88,-4.933,-2.714,3.853,-4.856,-1.457,10.14,-2.76,0.0,10.32,-2.867,-2.44,1.914,-4.064,-4.216,1.991,-1.124,-3.493,1.22,-1.566,-2.724,4.589,5.049,-3.591,4.488,4.221,-0.1149,4.778,5.713,-1.366,4.722,5.562,-1.575,4.708,5.516,-2.602,4.621,5.166,-4.507,2.505,-0.8744,6.838,1.545,-2.282,6.602,2.817,-2.029,6.02,2.291,-1.586,6.461,1.29,-1.991,6.917,1.604,-2.832,6.689,2.938,-2.813,6.69,1.445,-3.307,6.326,2.75,-3.516,6.301,1.17,-3.409,5.783,2.283,-3.716,5.861,0.8524,-3.05,5.137,1.745,-3.289,5.798,0.8074,-2.579,5.05,1.624,-2.484,5.974,0.9271,-2.145,5.423,1.814,-1.761,5.043,4.839,-1.955,4.866,4.527,-1.724,5.502,3.159,-1.59,6.049,3.671,-1.969,5.058,4.969,-2.43,6.147,3.845,-2.687,4.902,4.839,-2.87,5.842,3.671,-3.324,4.668,4.527,-3.018,5.313,3.252,-3.506,4.491,4.215,-2.787,4.829,2.809,-3.118,4.476,4.085,-2.312,4.731,2.636,-2.4,4.631,4.215,-1.872,5.036,2.809,-1.763,6.598,0.3401,-2.723,4.537,4.855,-2.325,5.353,5.649,-1.564,5.783,5.473,-1.726,5.603,5.613,-1.998,5.268,5.671,-2.063,4.975,5.613,-1.883,4.896,5.473,-1.563,5.076,5.333,-1.291,5.41,5.275,-1.226,5.703,5.333,-1.407,5.679,5.246,-2.339,5.934,5.048,-1.955,5.2,5.328,-2.466,4.792,5.246,-2.177,4.679,5.048,-1.725,4.934,4.85,-1.34,5.406,4.768,-1.248,5.821,4.85,-1.503,5.537,4.763,-2.388};
			return value;
		}
		private double[] getCoordinate_12_199_point_4()
		{
			double[] value = {5.717,4.623,-2.116,5.198,4.817,-2.477,4.909,4.763,-2.273,4.83,4.623,-1.954,5.01,4.483,-1.682,5.344,4.425,-1.617,5.637,4.483,-1.797,5.259,4.447,-2.116,5.198,4.81,-2.477,4.807,5.649,-3.229,5.184,5.613,-2.91,5.264,5.473,-3.23,4.891,5.671,-2.73,4.557,5.613,-2.795,4.377,5.473,-3.067,4.457,5.333,-3.387,4.749,5.275,-3.567,5.084,5.333,-3.502,5.368,5.246,-2.617,5.481,5.048,-3.069,4.96,5.328,-2.327,4.481,5.246,-2.454,4.226,5.048,-2.838,4.339,4.85,-3.29,4.753,4.768,-3.545,5.226,4.85,-3.453,5.25,4.763,-2.52,5.33,4.623,-2.84,4.961,5.075,-2.316,4.623,4.763,-2.405,4.443,4.623,-2.677,4.523,4.483,-2.997,4.816,4.425,-3.177,5.15,4.483,-3.112,4.961,4.817,-2.316,4.9,4.447,-2.678,-6.838,1.545,-2.282,-6.602,2.817,-2.029,-6.02,2.291,-1.586,-6.461,1.29,-1.991,-6.917,1.604,-2.832,-6.689,2.938,-2.813,-6.69,1.445,-3.307,-6.326,2.75,-3.516,-6.301,1.17,-3.409,-5.783,2.283,-3.716,-5.861,0.8524,-3.05,-5.137,1.745,-3.289,-5.798,0.8074,-2.579,-5.05,1.624,-2.484,-5.974,0.9271,-2.145,-5.423,1.814,-1.761,-5.043,4.839,-1.955,-4.866,4.527,-1.724,-5.502,3.159,-1.59,-6.049,3.671,-1.969,-5.058,4.969,-2.43,-6.147,3.845,-2.687,-4.902,4.839,-2.87,-5.842,3.671,-3.324,-4.668,4.527,-3.018,-5.313,3.252,-3.506,-4.491,4.215,-2.787,-4.829,2.809,-3.118,-4.476,4.085,-2.312,-4.731,2.636,-2.4,-4.631,4.215,-1.872,-5.036,2.809,-1.763,-6.598,0.3401,-2.723,-4.537,4.855,-2.325,-5.353,5.649,-1.564,-5.783,5.473,-1.726,-5.603,5.613,-1.998,-5.268,5.671,-2.063,-4.975,5.613,-1.883,-4.896,5.473,-1.563,-5.076,5.333,-1.291,-5.41,5.275,-1.226,-5.703,5.333,-1.407,-5.679,5.246,-2.339,-5.934,5.048,-1.955,-5.2,5.328,-2.466,-4.792,5.246,-2.177,-4.679,5.048,-1.725,-4.934,4.85,-1.34,-5.406,4.768,-1.248,-5.821,4.85,-1.503,-5.537,4.763,-2.388,-5.717,4.623,-2.116,-5.198,4.817,-2.477,-4.909,4.763,-2.273,-4.83,4.623,-1.954,-5.01,4.483,-1.682,-5.344,4.425,-1.617,-5.637,4.483,-1.797,-5.259,4.447,-2.116,-5.198,4.81,-2.477,-4.807,5.649,-3.229,-5.184,5.613,-2.91,-5.264,5.473,-3.23};
			return value;
		}
		private double[] getCoordinate_12_199_point_5()
		{
			double[] value = {-4.891,5.671,-2.73,-4.557,5.613,-2.795,-4.377,5.473,-3.067,-4.457,5.333,-3.387,-4.749,5.275,-3.567,-5.084,5.333,-3.502,-5.368,5.246,-2.617,-5.481,5.048,-3.069,-4.96,5.328,-2.327,-4.481,5.246,-2.454,-4.226,5.048,-2.838,-4.339,4.85,-3.29,-4.753,4.768,-3.545,-5.226,4.85,-3.453,-5.25,4.763,-2.52,-5.33,4.623,-2.84,-4.961,5.075,-2.316,-4.623,4.763,-2.405,-4.443,4.623,-2.677,-4.523,4.483,-2.997,-4.816,4.425,-3.177,-5.15,4.483,-3.112,-4.961,4.817,-2.316,-4.9,4.447,-2.678};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_12_200_point_1()
		{
			double[] value = {0.0688,0.5877,0.0977,0.611,0.0743,0.6494,0.0415,0.6272,0.0555,0.7752,0.016,0.7731,0.0132,0.7332,0.0543,0.7372,0.219,0.5285,0.1338,0.5737,0.1122,0.5472,0.2012,0.4968,0.2578,0.7563,0.2542,0.7123,0.3174,0.689,0.3433,0.8122,0.2605,0.8105,0.1723,0.9635,0.119,0.9796,0.1136,0.8986,0.1833,0.9073,0.1832,0.711,0.1219,0.6971,0.1281,0.6787,0.1822,0.696,0.1467,0.6461,0.1135,0.7318,0.1161,0.7801,0.2505,0.5799,0.1813,0.615,0.0517,0.8953,0.0645,0.9868,0.0159,0.9897,0.0103,0.8936,0.0085,0.7062,0.0212,0.6733,0.0412,0.6832,0.0277,0.7085,0.0285,0.6585,0.0605,0.6771,0.1839,0.6689,0.1816,0.7447,0.1868,0.7947,0.2771,0.6273,0.2169,0.6536,0.33,0.6037,0.3066,0.5553,0.3749,0.8185,0.3759,0.8941,0.3325,0.9023,0.2799,0.5032,0.2624,0.468,0.261,0.9119,0.3961,0.7402,0.3894,0.7444,0.376,0.7214,0.3809,0.7175,0.2502,0.6974,0.3719,0.4204,0.3904,0.4532,0.3987,0.5102,0.357,0.6782,0.3922,0.7719,0.3864,0.7714,0.4174,0.7307,0.39,0.7955,0.3866,0.7883,0.3721,0.7911,0.3325,0.7496,0.3522,0.6907,0.3998,0.563,0.3068,0.236,0.3081,0.2829,0.346,0.2738,0.3526,0.2339,0.3848,0.3433,0.3616,0.3304,0.3418,0.3508,0.3625,0.3697,0.4133,0.2527,0.3878,0.2875,0.2331,0.2498,0.2449,0.3094,0.2741,0.2963,0.2661,0.2424,0.2934,0.3437,0.2673,0.3609,0.2954,0.396,0.3186,0.3727,0.3381,0.3919,0.4396,0.2105,0.3775,0.1985,0.2661,0.1537,0.296,0.1693,0.3319,0.1838,0.3202,0.3269,0.3435,0.3163,0.4537,0.2676,0.487,0.2177,0.4077,0.3462};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_2()
		{
			double[] value = {0.4301,0.3104,0.4116,0.2965,0.4355,0.3016,0.4927,0.0439,0.4942,0.0108,0.4384,0.0114,0.4441,0.044,0.4924,0.1655,0.4951,0.1112,0.45,0.1093,0.4472,0.16,0.4006,0.0807,0.3563,0.1256,0.3926,0.1484,0.4165,0.106,0.3725,0.0283,0.3869,0.0567,0.5491,0.0508,0.5559,0.0224,0.5393,0.1168,0.528,0.1641,0.4483,0.0787,0.4936,0.0789,0.3278,0.1019,0.3027,0.0782,0.5437,0.0842,0.5211,0.2011,0.5929,0.0593,0.6008,0.0377,0.553,0.1676,0.5749,0.1286,0.5859,0.0948,0.3807,0.3775,0.4007,0.3558,0.3141,0.4158,0.3277,0.426,0.3473,0.4065,0.3532,0.4015,0.3737,0.3844,0.3875,0.6367,0.4149,0.6919,0.3666,0.6933,0.3127,0.6727,0.35,0.6642,0.423,0.2308,0.359,0.2075,0.2287,0.205,0.2649,0.2011,0.3089,0.1998,0.4653,0.2507,0.3966,0.6644,0.5387,0.1826,0.0688,0.5877,0.0977,0.611,0.0743,0.6494,0.0415,0.6272,0.0555,0.7752,0.016,0.7731,0.0132,0.7332,0.0543,0.7372,0.219,0.5285,0.1338,0.5737,0.1122,0.5472,0.2012,0.4968,0.2578,0.7563,0.2542,0.7123,0.3174,0.689,0.3325,0.7496,0.3433,0.8122,0.2605,0.8105,0.1723,0.9635,0.119,0.9796,0.1136,0.8986,0.1833,0.9073,0.1832,0.711,0.1219,0.6971,0.1281,0.6787,0.1822,0.696,0.1467,0.6461,0.1135,0.7318,0.1161,0.7801,0.2505,0.5799,0.1813,0.615,0.0517,0.8953,0.0645,0.9868,0.0159,0.9897,0.0103,0.8936,0.0085,0.7062,0.0212,0.6733,0.0412,0.6832,0.0277,0.7085,0.0285,0.6585,0.0605,0.6771,0.1839,0.6689,0.1816,0.7447,0.1868,0.7947,0.2771,0.6273,0.2169,0.6536,0.33,0.6037,0.3066,0.5553};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_3()
		{
			double[] value = {0.3809,0.7175,0.3961,0.7402,0.3894,0.7444,0.376,0.7214,0.3749,0.8185,0.3759,0.8941,0.3325,0.9023,0.357,0.6782,0.3666,0.6933,0.3522,0.6907,0.2799,0.5032,0.2624,0.468,0.261,0.9119,0.3922,0.7719,0.3864,0.7714,0.4174,0.7307,0.39,0.7955,0.3866,0.7883,0.3721,0.7911,0.2502,0.6974,0.3719,0.4204,0.3904,0.4532,0.3987,0.5102,0.3127,0.6727,0.35,0.6642,0.3068,0.236,0.3081,0.2829,0.346,0.2738,0.3526,0.2339,0.3848,0.3433,0.3616,0.3304,0.3418,0.3508,0.3625,0.3697,0.4133,0.2527,0.3878,0.2875,0.2331,0.2498,0.2449,0.3094,0.2741,0.2963,0.2661,0.2424,0.2934,0.3437,0.2673,0.3609,0.2954,0.396,0.3186,0.3727,0.3381,0.3919,0.423,0.2308,0.359,0.2075,0.2287,0.205,0.2649,0.2011,0.3089,0.1998,0.3202,0.3269,0.3435,0.3163,0.4537,0.2676,0.4653,0.2507,0.4077,0.3462,0.4301,0.3104,0.4116,0.2965,0.4355,0.3016,0.4927,0.0439,0.4942,0.0108,0.4384,0.0114,0.4441,0.044,0.4924,0.1655,0.4951,0.1112,0.45,0.1093,0.4472,0.16,0.4006,0.0807,0.3563,0.1256,0.3926,0.1484,0.4165,0.106,0.3725,0.0283,0.3869,0.0567,0.5491,0.0508,0.5559,0.0224,0.5393,0.1168,0.528,0.1641,0.4483,0.0787,0.4936,0.0789,0.3278,0.1019,0.3027,0.0782,0.5437,0.0842,0.487,0.2177,0.5211,0.2011,0.3319,0.1838,0.3775,0.1985,0.4396,0.2105,0.2661,0.1537,0.296,0.1693,0.5929,0.0593,0.6008,0.0377,0.553,0.1676,0.5749,0.1286,0.5859,0.0948,0.3807,0.3775,0.4007,0.3558,0.3141,0.4158,0.3277,0.426,0.3473,0.4065,0.3532,0.4015,0.3737,0.3844,0.5387,0.1826};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_4()
		{
			double[] value = {0.3998,0.563,0.4149,0.6919,0.3966,0.6644,0.3875,0.6367,0.4501,0.3607,0.4292,0.3913,0.4504,0.3949,0.463,0.3655,0.4396,0.3502,0.4096,0.382,0.4803,0.3671,0.4727,0.3977,0.4932,0.3655,0.4944,0.4021,0.4315,0.4588,0.4417,0.4205,0.4203,0.418,0.4056,0.4657,0.3999,0.4161,0.4603,0.4251,0.4464,0.4677,0.4787,0.4342,0.4372,0.4593,0.4792,0.3385,0.4221,0.4778,0.3225,0.9688,0.3187,0.9638,0.3113,0.9668,0.3095,0.9682,0.3143,0.9671,0.3229,0.9642,0.3303,0.9611,0.3321,0.9599,0.3273,0.9609,0.3034,0.9563,0.3138,0.9521,0.2999,0.9581,0.3076,0.9567,0.3198,0.9527,0.3303,0.9484,0.3328,0.9465,0.326,0.9479,0.3033,0.9435,0.3107,0.9405,0.3008,0.9447,0.301,0.9448,0.3063,0.9438,0.3149,0.9409,0.3223,0.9379,0.3242,0.9365,0.3194,0.9376,0.3112,0.9359,0.3009,0.9445,0.3002,0.9515,0.4501,0.3607,0.4292,0.3913,0.4504,0.3949,0.463,0.3655,0.4396,0.3502,0.4096,0.382,0.4803,0.3671,0.4727,0.3977,0.4932,0.3655,0.4944,0.4021,0.4315,0.4588,0.4417,0.4205,0.4203,0.418,0.4056,0.4657,0.3999,0.4161,0.4603,0.4251,0.4464,0.4677,0.4787,0.4342,0.4372,0.4593,0.4792,0.3385,0.4221,0.4778,0.3225,0.9688,0.3187,0.9638,0.3113,0.9668,0.3095,0.9682,0.3143,0.9671,0.3229,0.9642,0.3303,0.9611,0.3321,0.9599,0.3273,0.9609,0.3034,0.9563,0.3138,0.9521,0.2999,0.9581,0.3076,0.9567,0.3198,0.9527,0.3303,0.9484,0.3328,0.9465,0.326,0.9479,0.3033,0.9435,0.3107,0.9405,0.3008,0.9447,0.301,0.9448,0.3063,0.9438,0.3149,0.9409,0.3223,0.9379,0.3242,0.9365};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_5()
		{
			double[] value = {0.3194,0.9376,0.3112,0.9359,0.3009,0.9445,0.3002,0.9515};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=8, element #32, 560 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_8_32_coordIndex()
		{
			MFInt32 IndexedFaceSet_8_32_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_8_32_coordIndex_1()));
			return IndexedFaceSet_8_32_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=8, element #32, 560 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_8_32_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_8_32_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_8_32_texCoordIndex_1()));
			return IndexedFaceSet_8_32_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=9, element #32, 216 total numbers made up of 72 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_9_32_point()
		{
			MFVec3f Coordinate_9_32_point = new MFVec3f(new double[] {0.7553,1.289,0.3192,0.4361,1.289,0.502,0.6835,1.04,0.8046,0.8722,1.289,0.0695,0.7553,1.289,-0.2872,0.5259,1.289,-0.4902,0.1782,1.289,-0.53,1.379,0.3768,-0.5369,0.8225,0.3588,-0.9058,1.308,-0.2088,0.502,0.7553,-0.2088,0.8186,1.511,-0.2088,0.0031,1.308,-0.2088,-0.47,0.8152,-0.2088,-0.878,0.2426,-0.2088,-0.9658,0.0,0.287,-1.026,0.2889,0.3271,-1.034,0.7553,-0.5809,0.3192,0.4361,-0.5809,0.502,0.8722,-0.5809,0.0031,0.7553,-0.5809,-0.2872,0.4457,-0.5809,-0.4902,0.1782,-0.5809,-0.53,0.0,-0.5809,-0.5369,0.0,-0.7115,0.003,0.0,-0.2088,0.9345,0.0,-0.5809,0.5689,1.379,0.3768,0.5689,0.8185,0.3135,0.9345,1.541,0.3768,0.0031,1.333,1.061,0.4211,0.0,1.043,0.9382,1.306,1.029,-0.4635,0.2707,1.005,-0.9317,0.0,0.9999,-0.9412,0.808,1.016,-0.8729,1.483,1.061,-0.0036,-0.7553,1.289,0.3192,-0.4361,1.289,0.502,-1.333,1.061,0.4211,-0.8722,1.289,0.0695,-0.7553,1.289,-0.2872,-0.808,1.016,-0.8729,-0.5259,1.289,-0.4902,0.0,1.289,-0.5369,-0.1782,1.289,-0.53,-1.379,0.3768,0.5689,-0.8185,0.3135,0.9345,-1.541,0.3768,0.0031,-1.483,1.061,-0.0036,-1.306,1.029,-0.4635,-1.379,0.3768,-0.5369,-0.2889,0.3271,-1.034,-1.308,-0.2088,0.502,-0.7553,-0.2088,0.8186,-1.511,-0.2088,0.0031,-1.308,-0.2088,-0.47,-0.8152,-0.2088,-0.878,-0.8225,0.3588,-0.9058,-0.2426,-0.2088,-0.9658,0.0,-0.2088,-0.9594,-0.7553,-0.5809,0.3192,-0.4361,-0.5809,0.502,-0.8722,-0.5809,0.0031,-0.7553,-0.5809,-0.2872,-0.4457,-0.5809,-0.4902,-0.1782,-0.5809,-0.53,-0.2707,1.005,-0.9317,0.0,1.289,0.5689,0.0,1.447,0.0694,-0.6835,1.04,0.8046,0.0,0.2734,1.068});
			return Coordinate_9_32_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=9, element #33, 248 total numbers made up of 124 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_9_33_point()
		{
			MFVec2f TextureCoordinate_9_33_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_9_33_point_1()))
				.append(new MFVec2f(getTextureCoordinate_9_33_point_2()));
			return TextureCoordinate_9_33_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #41, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_41_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_41_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_41_coordIndex_1()));
			return IndexedFaceSet_9_41_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #41, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_41_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_41_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_41_texCoordIndex_1()));
			return IndexedFaceSet_9_41_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #41, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_41_point()
		{
			MFVec3f Coordinate_10_41_point = new MFVec3f(new double[] {1.812,-0.3087,1.904,1.588,-6.489,1.624,2.192,-5.962,0.1086,2.457,-0.3087,0.0948,0.0,-0.3087,2.766,0.0022,-6.794,2.44,-1.812,-0.3087,1.904,-1.696,-6.489,1.624,-2.457,-0.3087,0.0948,-2.3,-5.962,0.1086,-1.923,-0.3087,-1.955,-1.878,-5.375,-1.791,0.0,-0.3087,-2.766,0.0022,-4.935,-2.745,1.929,-0.3087,-1.955,1.764,-5.375,-1.791,1.824,-12.47,0.1086,1.294,-12.47,1.546,0.8192,-13.62,0.9456,1.244,-13.62,0.1086,0.0,-12.47,2.119,0.0,-13.62,1.371,-1.403,-12.47,1.546,-0.9277,-13.62,0.9456,-1.892,-12.47,0.1086,-1.353,-13.62,0.1086,-1.403,-12.47,-1.203,-0.9277,-13.62,-1.004,0.0,-12.47,-1.776,0.0,-13.62,-1.43,1.294,-12.47,-1.203,0.8192,-13.62,-1.004,0.0,-14.58,0.1086,1.328,-11.04,1.381,1.898,-11.04,0.1086,0.0033,-11.04,1.998,-1.437,-11.04,1.381,-2.006,-11.04,0.1086,-1.674,-7.89,-1.676,0.0028,-8.084,-2.33,1.563,-7.89,-1.676,1.306,-11.04,-1.288,1.775,0.6114,0.1021,1.355,0.6114,1.391,1.282,0.6114,-1.341,0.0,0.6114,-1.85,-1.282,0.6114,-1.341,-1.774,0.6114,0.1021,-1.354,0.6114,1.391,0.0,0.6114,2.036,0.0,1.324,0.0586,-1.415,-11.04,-1.288,0.0033,-11.04,-1.867});
			return Coordinate_10_41_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #50, 472 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_50_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_50_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_50_coordIndex_1()));
			return IndexedFaceSet_10_50_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #50, 472 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_50_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_50_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_50_texCoordIndex_1()));
			return IndexedFaceSet_10_50_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #50, 183 total numbers made up of 61 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_50_point()
		{
			MFVec3f Coordinate_11_50_point = new MFVec3f(new double[] {1.375,-5.834,-1.193,1.477,-4.137,-1.195,1.952,-4.672,0.1143,0.6966,-12.16,-0.8887,-0.0964,-12.16,-1.304,0.0075,-6.489,-1.984,-0.9748,-12.16,-0.8887,-1.329,-6.244,-1.314,-1.339,-12.16,0.1054,-1.761,-6.229,0.1143,-0.9748,-12.16,0.9689,-1.217,-6.865,1.222,-0.0964,-12.16,1.384,0.0075,-7.096,1.879,0.6966,-12.16,0.9689,1.312,-6.004,1.225,1.06,-12.16,0.1054,1.831,0.0045,0.1143,1.301,0.0045,-1.198,0.9277,1.148,-0.902,1.353,1.148,0.1143,0.0071,0.0045,-1.771,0.0071,1.148,-1.327,-1.396,0.0045,-1.198,-1.02,1.148,-0.902,-1.885,0.0045,0.1143,-1.445,1.148,0.1143,-1.396,0.0045,1.551,-1.02,1.148,1.396,0.0071,0.0045,2.125,0.0071,1.148,1.821,1.301,0.0045,1.551,0.9277,1.148,1.396,0.0071,2.106,0.1143,0.7952,-13.2,0.1143,0.5053,-13.2,-0.6746,0.5053,-13.2,0.749,-0.0941,-13.2,1.08,-0.7943,-13.2,0.749,-1.084,-13.2,0.1143,-0.7943,-13.2,-0.6746,-0.0941,-13.2,-1.006,-0.0941,-13.94,0.1143,1.319,-1.205,-1.195,1.928,-1.333,0.1143,-0.0092,-1.051,-1.85,0.0075,-3.792,-2.125,-1.423,-1.205,-1.195,-1.386,-4.758,-1.344,-1.952,-1.333,0.1143,-1.391,-1.333,1.308,0.0071,-1.333,1.881,1.326,-1.333,1.308,-0.0957,-10.22,-1.525,0.8601,-10.22,-0.9874,-1.1,-10.22,-1.026,-1.478,-10.22,0.1083,-1.065,-10.22,1.051,-0.0957,-10.22,1.545,0.8407,-10.22,1.052,1.283,-10.22,0.1083});
			return Coordinate_11_50_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #59, 424 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_59_coordIndex()
		{
			MFInt32 IndexedFaceSet_11_59_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_59_coordIndex_1()));
			return IndexedFaceSet_11_59_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #59, 424 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_59_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_11_59_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_59_texCoordIndex_1()));
			return IndexedFaceSet_11_59_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #59, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_59_point()
		{
			MFVec3f Coordinate_12_59_point = new MFVec3f(new double[] {1.486,-1.104,-0.0121,1.788,-2.384,-0.0121,1.576,-2.288,-1.284,1.215,-1.048,-1.431,0,-2.222,-2.07,0,-0.9763,-1.857,1.109,-2.246,-1.797,1.648,-2.952,-1.227,1.928,-3.172,-0.0121,1.121,-2.825,-1.762,0.9389,0.048,-0.9468,1.158,0.048,-0.0184,-0.0037,0.048,-1.291,0.971,0.0076,1.129,-0.0037,0.048,1.489,-9.0E-4,-0.4231,1.851,1.326,-0.6054,1.493,0,-2.774,-2.014,-1.486,-1.104,-0.0121,-1.215,-1.048,-1.431,-1.576,-2.288,-1.284,-1.788,-2.384,-0.0121,-1.109,-2.246,-1.797,-1.928,-3.172,-0.0121,-1.648,-2.952,-1.227,-1.121,-2.825,-1.762,-1.067,0.048,-0.9145,-1.005,0.0288,1.129,-1.331,-0.5981,1.498,0,-3.751,-0.0121,0,-3.556,-2.192,1.156,-3.584,-1.941,1.746,-3.653,-1.26,1.935,-3.751,-0.0121,-1.934,-3.751,-0.0121,-1.746,-3.653,-1.26,-1.156,-3.584,-1.941,0,-3.657,-1.26,0.8317,0.4142,0.8386,-0.0037,0.5073,1.277,-1.225,0.048,-0.0184,-0.9272,0.4142,0.8135,-0.0359,0.4987,-0.0174,1.181,-2.385,0.7578,0.8758,-1.458,0.7625,0.7742,-0.9835,1.664,-0.0035,-0.9186,1.971,-0.7785,-0.9788,1.669,-0.8761,-1.457,0.7637,-1.182,-2.385,0.7583,-1.307,-3.08,0.7871,-1.305,-3.419,1.057,-4.0E-4,-3.419,1.057,1.304,-3.419,1.056,1.306,-3.08,0.7865});
			return Coordinate_12_59_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #60, 152 total numbers made up of 76 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_60_point()
		{
			MFVec2f TextureCoordinate_12_60_point = new MFVec2f(new double[] {0.1096,0.0871,0.1086,0.051,0.0724,0.0571,0.0703,0.093,0.0235,0.075,0.0389,0.1112,0.0537,0.0629,0.0688,0.0153,0.0719,0.0393,0.1073,0.0299,0.1053,0.0075,0.0438,0.0235,0.0507,0.0468,0.0827,0.1223,0.1079,0.1195,0.0638,0.1406,0.148,0.3335,0.1191,0.3241,0.1188,0.3009,0.1607,0.3056,0.0125,0.0361,0.0195,0.0586,0.1959,0.3397,0.1665,0.356,0.0896,0.3325,0.0774,0.3058,0.042,0.3397,0.9339,0.8099,0.9339,0.8425,0.9339,0.7851,0.9639,0.7918,0.9793,0.8097,0.9842,0.8425,0.8885,0.8098,0.9038,0.7913,0.8836,0.8425,0.0713,0.0347,0.1066,0.0253,0.05,0.0422,0.0189,0.054,0.142,0.3577,0.1187,0.3518,0.0703,0.3561,0.0946,0.3567,0.1006,0.1294,0.0944,0.1279,0.1006,0.121,0.0918,0.1217,0.0937,0.1145,0.0996,0.1127,0.1056,0.1147,0.1091,0.1206,0.1065,0.1264,0.1086,0.051,0.1096,0.0871,0.1607,0.3056,0.1188,0.3009,0.0774,0.3058,0.042,0.3397,0.1073,0.0299,0.8837,0.8428,0.9341,0.8428,0.9341,0.8649,0.1066,0.0253,0.1067,0.025,0.1052,0.0076,0.1262,0.0158,0.122,0.0264,0.1052,0.0076,0.1067,0.025,0.122,0.0264,0.1262,0.0158,0.1262,0.0158,0.9001,0.8648,0.9844,0.8428,0.968,0.8649});
			return TextureCoordinate_12_60_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #68, 544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_68_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_68_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_68_coordIndex_1()));
			return IndexedFaceSet_12_68_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #68, 544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_68_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_68_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_68_texCoordIndex_1()));
			return IndexedFaceSet_12_68_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #68, 210 total numbers made up of 70 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_68_point()
		{
			MFVec3f Coordinate_13_68_point = new MFVec3f(new double[] {1.388,-0.7441,0.9353,0,-0.5418,1.142,0,-1.042,2.002,1.356,-1.234,1.823,1.286,-1.394,3.004,0,-1.212,3.154,0,-1.708,3.962,1.162,-1.8,3.64,1.65,-1.868,2.671,1.806,-1.859,1.688,1.217,-2.657,3.79,0,-2.605,4.159,1.729,-2.767,2.676,1.984,-2.747,-0.4534,1.847,-1.879,-0.4111,1.91,-1.914,0.8074,2.006,-2.83,0.7644,1.895,-2.791,1.697,-1.388,-0.7441,0.9353,-1.356,-1.234,1.823,-1.286,-1.394,3.004,-1.162,-1.8,3.64,-1.91,-1.914,0.8074,-1.806,-1.859,1.688,-1.217,-2.657,3.79,-1.729,-2.767,2.676,-2.006,-2.83,0.7644,-1.847,-1.879,-0.4111,-1.984,-2.747,-0.4534,-1.65,-1.868,2.671,-1.895,-2.791,1.697,0,-3.18,0.7644,2.006,-3.18,0.7644,1.729,-3.137,2.71,1.217,-3.069,3.793,0,-2.997,4.162,0,-3.18,-0.4554,1.99,-3.18,-0.4554,-1.729,-3.137,2.71,-2.006,-3.18,0.7644,-1.217,-3.069,3.793,-1.99,-3.18,-0.4554,0,-3.141,2.71,1.895,-3.164,1.686,-1.895,-3.164,1.686,0,-3.164,1.686,1.486,-0.5175,-1.502,1.788,-1.797,-1.502,1.928,-2.585,-1.502,-9.0E-4,0.1637,0.361,1.326,-0.0186,0.0033,-1.486,-0.5175,-1.502,-1.788,-1.797,-1.502,-1.928,-2.585,-1.502,-1.331,-0.0112,0.0089,0,-3.164,-1.502,1.935,-3.164,-1.502,-1.934,-3.164,-1.502,1.153,-0.3082,-2.015,1.192,-1.388,-2.379,1.307,-1.876,-2.363,1.307,-2.129,-2.356,4.0E-4,-2.129,-2.356,-1.306,-2.129,-2.356,-1.306,-1.876,-2.362,-1.191,-1.388,-2.378,-1.152,-0.3071,-2.014,-1.027,0.2573,-1.173,-0.0025,0.3479,-0.8576,1.023,0.2519,-1.179});
			return Coordinate_13_68_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=13, element #69, 232 total numbers made up of 116 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_13_69_point()
		{
			MFVec2f TextureCoordinate_13_69_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_13_69_point_1()))
				.append(new MFVec2f(getTextureCoordinate_13_69_point_2()));
			return TextureCoordinate_13_69_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #81, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_81_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_81_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_81_coordIndex_1()));
			return IndexedFaceSet_9_81_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #81, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_81_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_81_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_81_texCoordIndex_1()));
			return IndexedFaceSet_9_81_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #81, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_81_point()
		{
			MFVec3f Coordinate_10_81_point = new MFVec3f(new double[] {-1.812,-0.3087,1.904,-1.588,-6.489,1.624,-2.192,-5.962,0.1086,-2.457,-0.3087,0.0948,0.0,-0.3087,2.766,-0.0022,-6.794,2.44,1.812,-0.3087,1.904,1.696,-6.489,1.624,2.457,-0.3087,0.0948,2.3,-5.962,0.1086,1.923,-0.3087,-1.955,1.878,-5.375,-1.791,0.0,-0.3087,-2.766,-0.0022,-4.935,-2.745,-1.929,-0.3087,-1.955,-1.764,-5.375,-1.791,-1.824,-12.47,0.1086,-1.294,-12.47,1.546,-0.8192,-13.62,0.9456,-1.244,-13.62,0.1086,0.0,-12.47,2.119,0.0,-13.62,1.371,1.403,-12.47,1.546,0.9277,-13.62,0.9456,1.892,-12.47,0.1086,1.353,-13.62,0.1086,1.403,-12.47,-1.203,0.9277,-13.62,-1.005,0.0,-12.47,-1.776,0.0,-13.62,-1.43,-1.294,-12.47,-1.203,-0.8192,-13.62,-1.005,0.0,-14.58,0.1086,-1.328,-11.04,1.381,-1.898,-11.04,0.1086,-0.0033,-11.04,1.998,1.437,-11.04,1.381,2.006,-11.04,0.1086,1.674,-7.89,-1.676,-0.0028,-8.084,-2.33,-1.563,-7.89,-1.676,-1.306,-11.04,-1.289,-1.775,0.6114,0.1021,-1.355,0.6114,1.391,-1.282,0.6114,-1.341,0.0,0.6114,-1.85,1.282,0.6114,-1.341,1.774,0.6114,0.1021,1.354,0.6114,1.391,0.0,0.6114,2.036,0.0,1.324,0.0586,1.415,-11.04,-1.289,-0.0033,-11.04,-1.867});
			return Coordinate_10_81_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #90, 472 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_90_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_90_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_90_coordIndex_1()));
			return IndexedFaceSet_10_90_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #90, 472 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_90_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_90_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_90_texCoordIndex_1()));
			return IndexedFaceSet_10_90_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #90, 183 total numbers made up of 61 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_90_point()
		{
			MFVec3f Coordinate_11_90_point = new MFVec3f(new double[] {-1.375,-5.834,-1.193,-1.477,-4.137,-1.195,-1.952,-4.672,0.1143,-0.6966,-12.16,-0.8887,0.0964,-12.16,-1.304,-0.0075,-6.489,-1.984,0.9748,-12.16,-0.8887,1.329,-6.244,-1.314,1.339,-12.16,0.1054,1.761,-6.229,0.1143,0.9748,-12.16,0.9689,1.217,-6.865,1.222,0.0964,-12.16,1.384,-0.0075,-7.096,1.879,-0.6966,-12.16,0.9689,-1.312,-6.004,1.225,-1.06,-12.16,0.1054,-1.831,0.0045,0.1143,-1.301,0.0045,-1.198,-0.9277,1.148,-0.902,-1.353,1.148,0.1143,-0.0071,0.0045,-1.771,-0.0071,1.148,-1.327,1.396,0.0045,-1.198,1.02,1.148,-0.902,1.885,0.0045,0.1143,1.445,1.148,0.1143,1.396,0.0045,1.551,1.02,1.148,1.396,-0.0071,0.0045,2.125,-0.0071,1.148,1.821,-1.301,0.0045,1.551,-0.9277,1.148,1.396,-0.0071,2.106,0.1143,-0.7952,-13.2,0.1143,-0.5053,-13.2,-0.6746,-0.5053,-13.2,0.749,0.0941,-13.2,1.08,0.7943,-13.2,0.749,1.084,-13.2,0.1143,0.7943,-13.2,-0.6746,0.0941,-13.2,-1.006,0.0941,-13.94,0.1143,-1.319,-1.205,-1.195,-1.928,-1.333,0.1143,0.0092,-1.051,-1.85,-0.0075,-3.792,-2.125,1.423,-1.205,-1.195,1.386,-4.758,-1.344,1.952,-1.333,0.1143,1.391,-1.333,1.308,-0.0071,-1.333,1.881,-1.326,-1.333,1.308,0.0957,-10.22,-1.525,-0.8601,-10.22,-0.9874,1.1,-10.22,-1.026,1.478,-10.22,0.1083,1.065,-10.22,1.051,0.0957,-10.22,1.545,-0.8407,-10.22,1.052,-1.283,-10.22,0.1083});
			return Coordinate_11_90_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #99, 424 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_99_coordIndex()
		{
			MFInt32 IndexedFaceSet_11_99_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_99_coordIndex_1()));
			return IndexedFaceSet_11_99_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #99, 424 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_99_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_11_99_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_99_texCoordIndex_1()));
			return IndexedFaceSet_11_99_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #99, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_99_point()
		{
			MFVec3f Coordinate_12_99_point = new MFVec3f(new double[] {-1.486,-1.104,-0.0121,-1.788,-2.384,-0.0121,-1.576,-2.288,-1.284,-1.215,-1.048,-1.431,0,-2.222,-2.07,0,-0.9763,-1.857,-1.109,-2.246,-1.797,-1.648,-2.952,-1.227,-1.928,-3.172,-0.0121,-1.121,-2.825,-1.762,-0.9389,0.0479,-0.9468,-1.158,0.048,-0.0184,0.0037,0.0479,-1.291,-0.971,0.0076,1.129,0.0037,0.048,1.489,9.0E-4,-0.4231,1.851,-1.326,-0.6054,1.493,0,-2.774,-2.014,1.486,-1.104,-0.0121,1.215,-1.048,-1.431,1.576,-2.288,-1.284,1.788,-2.384,-0.0121,1.109,-2.246,-1.797,1.928,-3.172,-0.0121,1.648,-2.952,-1.227,1.121,-2.825,-1.762,1.067,0.0479,-0.9145,1.005,0.0288,1.129,1.331,-0.5981,1.498,0,-3.751,-0.0121,0,-3.556,-2.192,-1.156,-3.584,-1.941,-1.746,-3.653,-1.26,-1.935,-3.751,-0.0121,1.934,-3.751,-0.0121,1.746,-3.653,-1.26,1.156,-3.584,-1.941,0,-3.657,-1.26,-0.8317,0.4142,0.8386,0.0037,0.5073,1.277,1.225,0.048,-0.0184,0.9272,0.4142,0.8135,0.0359,0.4987,-0.0174,-1.181,-2.385,0.7578,-0.8758,-1.458,0.7625,-0.7742,-0.9835,1.664,0.0035,-0.9186,1.971,0.7785,-0.9788,1.669,0.8761,-1.457,0.7637,1.182,-2.385,0.7583,1.307,-3.08,0.7871,1.305,-3.419,1.057,4.0E-4,-3.419,1.057,-1.304,-3.419,1.056,-1.306,-3.08,0.7865});
			return Coordinate_12_99_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #100, 152 total numbers made up of 76 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_100_point()
		{
			MFVec2f TextureCoordinate_12_100_point = new MFVec2f(new double[] {0.1096,0.0871,0.1086,0.051,0.0724,0.0571,0.0703,0.093,0.0235,0.075,0.0389,0.1112,0.0537,0.0629,0.0688,0.0153,0.0719,0.0393,0.1073,0.0299,0.1053,0.0075,0.0438,0.0235,0.0507,0.0468,0.0827,0.1223,0.1079,0.1195,0.0638,0.1406,0.148,0.3335,0.1191,0.3241,0.1188,0.3009,0.1607,0.3056,0.0125,0.0361,0.0195,0.0586,0.1959,0.3397,0.1665,0.356,0.0896,0.3325,0.0774,0.3058,0.042,0.3397,0.9339,0.8099,0.9339,0.8425,0.9339,0.7851,0.9639,0.7918,0.9793,0.8097,0.9842,0.8425,0.8885,0.8098,0.9038,0.7913,0.8836,0.8425,0.0713,0.0347,0.1066,0.0253,0.05,0.0422,0.0189,0.054,0.142,0.3577,0.1187,0.3518,0.0703,0.3561,0.0946,0.3567,0.1006,0.1294,0.0944,0.1279,0.1006,0.121,0.0918,0.1217,0.0937,0.1145,0.0996,0.1127,0.1056,0.1147,0.1091,0.1206,0.1065,0.1264,0.1086,0.051,0.1096,0.0871,0.1607,0.3056,0.1188,0.3009,0.0774,0.3058,0.042,0.3397,0.1073,0.0299,0.8837,0.8428,0.9341,0.8428,0.9341,0.8649,0.1066,0.0253,0.1067,0.025,0.1052,0.0076,0.1262,0.0158,0.122,0.0264,0.1052,0.0076,0.1067,0.025,0.122,0.0264,0.1262,0.0158,0.1262,0.0158,0.9001,0.8648,0.9844,0.8428,0.968,0.8649});
			return TextureCoordinate_12_100_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #108, 544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_108_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_108_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_108_coordIndex_1()));
			return IndexedFaceSet_12_108_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #108, 544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_108_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_108_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_108_texCoordIndex_1()));
			return IndexedFaceSet_12_108_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #108, 210 total numbers made up of 70 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_108_point()
		{
			MFVec3f Coordinate_13_108_point = new MFVec3f(new double[] {-1.388,-0.7441,0.9353,0,-0.5418,1.142,0,-1.042,2.002,-1.356,-1.234,1.823,-1.286,-1.394,3.004,0,-1.212,3.154,0,-1.708,3.962,-1.162,-1.8,3.64,-1.65,-1.868,2.671,-1.806,-1.859,1.688,-1.217,-2.657,3.79,0,-2.605,4.159,-1.729,-2.767,2.676,-1.984,-2.747,-0.4534,-1.847,-1.879,-0.4111,-1.91,-1.914,0.8074,-2.006,-2.83,0.7644,-1.895,-2.791,1.697,1.388,-0.7441,0.9353,1.356,-1.234,1.823,1.286,-1.394,3.004,1.162,-1.8,3.64,1.91,-1.914,0.8074,1.806,-1.859,1.688,1.217,-2.657,3.79,1.729,-2.767,2.676,2.006,-2.83,0.7644,1.847,-1.879,-0.4111,1.984,-2.747,-0.4534,1.65,-1.868,2.671,1.895,-2.791,1.697,0,-3.18,0.7644,-2.006,-3.18,0.7644,-1.729,-3.137,2.71,-1.217,-3.069,3.793,0,-2.997,4.162,0,-3.18,-0.4554,-1.99,-3.18,-0.4554,1.729,-3.137,2.71,2.006,-3.18,0.7644,1.217,-3.069,3.793,1.99,-3.18,-0.4554,0,-3.141,2.71,-1.895,-3.164,1.686,1.895,-3.164,1.686,0,-3.164,1.686,-1.486,-0.5175,-1.502,-1.788,-1.797,-1.502,-1.928,-2.585,-1.502,9.0E-4,0.1637,0.361,-1.326,-0.0186,0.0033,1.486,-0.5175,-1.502,1.788,-1.797,-1.502,1.928,-2.585,-1.502,1.331,-0.0112,0.0089,0,-3.164,-1.502,-1.935,-3.164,-1.502,1.934,-3.164,-1.502,-1.153,-0.3082,-2.015,-1.192,-1.388,-2.379,-1.307,-1.876,-2.363,-1.307,-2.129,-2.356,-4.0E-4,-2.129,-2.356,1.306,-2.129,-2.356,1.306,-1.876,-2.362,1.191,-1.388,-2.378,1.152,-0.3071,-2.014,1.027,0.2573,-1.173,0.0025,0.3479,-0.8576,-1.023,0.2519,-1.179});
			return Coordinate_13_108_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=13, element #109, 232 total numbers made up of 116 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_13_109_point()
		{
			MFVec2f TextureCoordinate_13_109_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_13_109_point_1()))
				.append(new MFVec2f(getTextureCoordinate_13_109_point_2()));
			return TextureCoordinate_13_109_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #121, 1064 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_121_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_121_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_121_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_9_121_coordIndex_2()));
			return IndexedFaceSet_9_121_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #121, 1064 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_121_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_121_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_121_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_9_121_texCoordIndex_2()));
			return IndexedFaceSet_9_121_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #121, 588 total numbers made up of 196 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_121_point()
		{
			MFVec3f Coordinate_10_121_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_10_121_point_1()))
				.append(new MFVec3f(getCoordinate_10_121_point_2()));
			return Coordinate_10_121_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #122, 448 total numbers made up of 224 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_122_point()
		{
			MFVec2f TextureCoordinate_10_122_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_122_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_122_point_2()))
				.append(new MFVec2f(getTextureCoordinate_10_122_point_3()));
			return TextureCoordinate_10_122_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #130, 384 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_130_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_130_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_130_coordIndex_1()));
			return IndexedFaceSet_10_130_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #130, 384 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_130_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_130_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_130_texCoordIndex_1()));
			return IndexedFaceSet_10_130_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #130, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_130_point()
		{
			MFVec3f Coordinate_11_130_point = new MFVec3f(new double[] {1.717,1.309,1.097,1.974,-1.312,1.269,2.5,-1.164,0.0054,2.189,1.309,0.0054,0.9602,-1.482,1.715,0.7596,1.257,1.575,-0.2808,1.309,1.097,-0.1525,-1.651,1.255,-0.7527,1.309,0.0054,-0.7245,-1.721,0.0054,-0.2808,1.309,-1.076,-0.1271,-1.205,-1.321,0.9602,-0.6874,-1.769,0.7596,1.257,-1.553,1.717,1.309,-1.076,1.914,-0.718,-1.323,1.542,1.789,0.0054,1.26,1.789,0.6945,1.26,1.789,-0.6837,0.7596,1.737,-0.9692,0.177,1.789,-0.6837,-0.1052,1.789,0.0054,0.177,1.789,0.6945,0.7596,1.737,0.9799,0.7596,1.988,0.0054,2.046,-4.237,1.121,2.544,-4.107,0.0054,0.9757,-4.461,1.55,-0.0943,-4.686,1.035,-0.592,-4.765,0.0054,-0.0502,-4.676,-1.212,0.9757,-4.461,-1.624,2.002,-4.246,-1.212,1.895,-7.377,0.8552,1.714,-7.897,0.5991,2.019,-7.897,0.0054,2.276,-7.377,0.0054,0.9757,-7.377,1.267,0.9757,-7.897,0.9047,0.0561,-7.377,0.8552,0.2378,-7.897,0.5991,-0.3248,-7.377,0.0054,-0.0678,-7.897,0.0054,0.0561,-7.377,-0.9888,0.2378,-7.897,-0.7325,0.9757,-7.377,-1.401,0.9757,-7.897,-1.038,1.714,-7.897,-0.7325,1.895,-7.377,-0.9888,0.9757,-8.333,0.0054});
			return Coordinate_11_130_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #139, 512 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_139_coordIndex()
		{
			MFInt32 IndexedFaceSet_11_139_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_139_coordIndex_1()));
			return IndexedFaceSet_11_139_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #139, 512 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_139_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_11_139_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_139_texCoordIndex_1()));
			return IndexedFaceSet_11_139_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #139, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_139_point()
		{
			MFVec3f Coordinate_12_139_point = new MFVec3f(new double[] {0.896,-3.458,-0.7733,1.43,-3.283,0.0723,1.163,-7.27,0.0721,0.7935,-7.267,-0.5416,-0.0234,-3.843,-1.144,-0.0262,-7.3,-0.8983,-0.6588,-7.609,-0.4491,-0.7822,-7.049,-0.481,-0.025,-7.07,-0.8149,-0.0233,-7.631,-0.7795,-0.922,-7.614,0.0729,-1.098,-7.053,0.0729,-0.6588,-7.612,0.6263,-0.7823,-7.05,0.6527,-0.9427,-4.174,0.8667,-0.8457,-7.28,0.7082,-0.0234,-7.282,1.066,-0.0234,-3.825,1.273,-0.0233,-7.623,0.9572,0.6122,-7.612,0.6263,0.7325,-7.043,0.6513,-0.0233,-7.057,0.9867,0.896,-3.452,0.8897,0.7936,-7.266,0.7058,0.896,-0.0257,-0.9221,0.7144,0.4948,-0.6658,1.02,0.4948,0.0721,1.277,-0.0257,0.0721,-0.0236,-0.0257,-1.334,-0.0236,0.4948,-0.9714,-0.9432,-0.0257,-0.9221,-0.7615,0.4948,-0.6658,-1.324,-0.0257,0.0721,-1.067,0.4948,0.0721,-0.9432,-0.0257,0.9219,-0.7615,0.4948,0.8099,-0.0236,-0.0257,1.334,-0.0236,0.4948,1.116,0.896,-0.0257,0.9219,0.7144,0.4948,0.8099,-0.0236,0.931,0.0721,0.6122,-7.609,-0.4491,0.8754,-7.614,0.0729,0.583,-8.086,0.0729,0.4054,-8.063,-0.1612,0.4054,-8.076,0.3527,-0.0233,-8.083,0.5759,-0.452,-8.076,0.3527,-0.6297,-8.086,0.0729,-0.452,-8.063,-0.1612,-0.0233,-8.078,-0.3841,-0.0233,-8.424,0.0729,1.403,-0.6344,0.0721,0.9954,-0.506,-0.8653,-0.02,-0.506,-1.277,-0.9426,-4.179,-0.7253,-1.041,-0.506,-0.8653,-1.43,-0.6344,0.0721,-1.323,-4.321,0.0723,-1.018,-0.6344,0.9221,-0.0236,-0.6344,1.334,0.9707,-0.6344,0.9221,1.063,-7.046,0.0729,0.7325,-7.042,-0.4818,-0.8456,-7.281,-0.5402,-1.188,-7.284,0.0721});
			return Coordinate_12_139_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #140, 176 total numbers made up of 88 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_140_point()
		{
			MFVec2f TextureCoordinate_12_140_point = new MFVec2f(new double[] {0.6214,1.732,0.7319,1.729,0.7045,1.73,0.6763,1.731,0.6737,1.57,0.6695,1.581,0.6525,1.578,0.6596,1.565,0.672,1.648,0.5944,1.731,0.669,1.585,0.692,1.585,0.6985,1.654,0.6909,1.571,0.7076,1.568,0.7136,1.579,0.6917,1.581,0.7251,1.66,0.7149,1.583,0.7334,1.58,0.5663,1.733,0.5738,1.66,0.5479,1.661,0.7502,1.661,0.5667,1.581,0.5849,1.584,0.6006,1.655,0.6078,1.585,0.6259,1.57,0.6303,1.581,0.6081,1.582,0.6088,1.572,0.6784,1.72,0.6987,1.718,0.715,1.723,0.7248,1.738,0.7566,1.727,0.6922,1.739,0.7083,1.553,0.7208,1.562,0.7017,1.557,0.69,1.561,0.6778,1.559,0.6394,1.565,0.6467,1.578,0.6707,1.555,0.6891,1.549,0.5851,1.722,0.5744,1.738,0.5383,1.729,0.6749,1.719,0.7035,1.718,0.732,1.717,0.7566,1.715,0.6497,1.584,0.73,1.574,0.6021,1.717,0.6226,1.719,0.6477,1.727,0.6092,1.739,0.5919,1.569,0.5792,1.563,0.5915,1.554,0.5975,1.558,0.6219,1.559,0.6284,1.556,0.6095,1.561,0.6103,1.55,0.5395,1.716,0.5658,1.721,0.5946,1.722,0.6275,1.648,0.6242,1.723,0.6504,1.719,0.6499,1.645,0.5702,1.575,0.5861,1.579,0.6308,1.586,0.6503,1.731,0.6767,1.711,0.7018,1.71,0.7234,1.719,0.7395,1.728,0.577,1.712,0.5523,1.731,0.5995,1.706,0.6239,1.709,0.6527,1.716});
			return TextureCoordinate_12_140_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #160, 384 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_160_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_160_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_160_coordIndex_1()));
			return IndexedFaceSet_10_160_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #160, 384 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_160_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_160_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_160_texCoordIndex_1()));
			return IndexedFaceSet_10_160_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #160, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_160_point()
		{
			MFVec3f Coordinate_11_160_point = new MFVec3f(new double[] {-1.719,1.309,1.097,-1.998,-1.312,1.269,-2.525,-1.164,0.0054,-2.191,1.309,0.0054,-0.9602,-1.482,1.715,-0.7596,1.257,1.575,0.2808,1.309,1.097,0.1525,-1.651,1.255,0.7527,1.309,0.0054,0.7245,-1.721,0.0054,0.2808,1.309,-1.076,0.1271,-1.205,-1.321,-0.9602,-0.6874,-1.769,-0.7596,1.257,-1.553,-1.719,1.309,-1.076,-1.938,-0.718,-1.323,-1.543,1.789,0.0054,-1.261,1.789,0.6945,-1.261,1.789,-0.6837,-0.7596,1.737,-0.9692,-0.177,1.789,-0.6837,0.1052,1.789,0.0054,-0.177,1.789,0.6945,-0.7596,1.737,0.9799,-0.7596,1.988,0.0054,-2.046,-4.237,1.121,-2.544,-4.107,0.0054,-0.9757,-4.461,1.55,0.0943,-4.686,1.035,0.592,-4.765,0.0054,0.0502,-4.676,-1.212,-0.9757,-4.461,-1.624,-2.002,-4.246,-1.212,-1.895,-7.377,0.8552,-1.714,-7.897,0.5991,-2.019,-7.897,0.0054,-2.276,-7.377,0.0054,-0.9757,-7.377,1.267,-0.9757,-7.897,0.9047,-0.0561,-7.377,0.8552,-0.2378,-7.897,0.5991,0.3248,-7.377,0.0054,0.0678,-7.897,0.0054,-0.0561,-7.377,-0.9888,-0.2378,-7.897,-0.7325,-0.9757,-7.377,-1.401,-0.9757,-7.897,-1.038,-1.714,-7.897,-0.7325,-1.895,-7.377,-0.9888,-0.9757,-8.333,0.0054});
			return Coordinate_11_160_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #169, 512 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_169_coordIndex()
		{
			MFInt32 IndexedFaceSet_11_169_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_169_coordIndex_1()));
			return IndexedFaceSet_11_169_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #169, 512 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_169_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_11_169_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_169_texCoordIndex_1()));
			return IndexedFaceSet_11_169_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #169, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_169_point()
		{
			MFVec3f Coordinate_12_169_point = new MFVec3f(new double[] {-0.896,-3.458,-0.7733,-1.43,-3.283,0.0723,-1.163,-7.27,0.0721,-0.7935,-7.267,-0.5416,0.0234,-3.843,-1.144,0.0262,-7.3,-0.8983,0.6588,-7.609,-0.4491,0.7822,-7.049,-0.481,0.025,-7.07,-0.8149,0.0233,-7.631,-0.7795,0.922,-7.614,0.0729,1.098,-7.053,0.0729,0.6588,-7.612,0.6263,0.7823,-7.05,0.6527,0.9427,-4.174,0.8667,0.8457,-7.28,0.7082,0.0234,-7.282,1.066,0.0234,-3.825,1.273,0.0233,-7.623,0.9572,-0.6122,-7.612,0.6263,-0.7325,-7.043,0.6513,0.0233,-7.057,0.9867,-0.896,-3.452,0.8897,-0.7936,-7.266,0.7058,-0.896,-0.0257,-0.9221,-0.7144,0.4948,-0.6658,-1.02,0.4948,0.0721,-1.277,-0.0257,0.0721,0.0236,-0.0257,-1.334,0.0236,0.4948,-0.9714,0.9432,-0.0257,-0.9221,0.7615,0.4948,-0.6658,1.324,-0.0257,0.0721,1.067,0.4948,0.0721,0.9432,-0.0257,0.9219,0.7615,0.4948,0.8099,0.0236,-0.0257,1.334,0.0236,0.4948,1.116,-0.896,-0.0257,0.9219,-0.7144,0.4948,0.8099,0.0236,0.931,0.0721,-0.6122,-7.609,-0.4491,-0.8754,-7.614,0.0729,-0.583,-8.086,0.0729,-0.4054,-8.063,-0.1612,-0.4054,-8.076,0.3527,0.0233,-8.083,0.5759,0.452,-8.076,0.3527,0.6297,-8.086,0.0729,0.452,-8.063,-0.1612,0.0233,-8.078,-0.3841,0.0233,-8.424,0.0729,-1.403,-0.6344,0.0721,-0.9954,-0.506,-0.8653,0.02,-0.506,-1.277,0.9426,-4.179,-0.7253,1.041,-0.506,-0.8653,1.43,-0.6344,0.0721,1.323,-4.321,0.0723,1.018,-0.6344,0.9221,0.0236,-0.6344,1.334,-0.9707,-0.6344,0.9221,-1.063,-7.046,0.0729,-0.7325,-7.042,-0.4818,0.8456,-7.281,-0.5402,1.188,-7.284,0.0721});
			return Coordinate_12_169_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #170, 176 total numbers made up of 88 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_170_point()
		{
			MFVec2f TextureCoordinate_12_170_point = new MFVec2f(new double[] {0.6214,1.732,0.7319,1.729,0.7045,1.73,0.6763,1.731,0.6737,1.57,0.6695,1.581,0.6525,1.578,0.6596,1.565,0.672,1.648,0.5944,1.731,0.669,1.585,0.692,1.585,0.6985,1.654,0.6909,1.571,0.7076,1.568,0.7136,1.579,0.6917,1.581,0.7251,1.66,0.7149,1.583,0.7334,1.58,0.5663,1.733,0.5738,1.66,0.5479,1.661,0.7502,1.661,0.5667,1.581,0.5849,1.584,0.6006,1.655,0.6078,1.585,0.6259,1.57,0.6303,1.581,0.6081,1.582,0.6088,1.572,0.6784,1.72,0.6987,1.718,0.715,1.723,0.7248,1.738,0.7566,1.727,0.6922,1.739,0.7083,1.553,0.7208,1.562,0.7017,1.557,0.69,1.561,0.6778,1.559,0.6394,1.565,0.6467,1.578,0.6707,1.555,0.6891,1.549,0.5851,1.722,0.5744,1.738,0.5383,1.729,0.6749,1.719,0.7035,1.718,0.732,1.717,0.7566,1.715,0.6497,1.584,0.73,1.574,0.6021,1.717,0.6226,1.719,0.6477,1.727,0.6092,1.739,0.5919,1.569,0.5792,1.563,0.5915,1.554,0.5975,1.558,0.6219,1.559,0.6284,1.556,0.6095,1.561,0.6103,1.55,0.5395,1.716,0.5658,1.721,0.5946,1.722,0.6275,1.648,0.6242,1.723,0.6504,1.719,0.6499,1.645,0.5702,1.575,0.5861,1.579,0.6308,1.586,0.6503,1.731,0.6767,1.711,0.7018,1.71,0.7234,1.719,0.7395,1.728,0.577,1.712,0.5523,1.731,0.5995,1.706,0.6239,1.709,0.6527,1.716});
			return TextureCoordinate_12_170_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #190, 1048 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_190_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_190_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_190_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_10_190_coordIndex_2()));
			return IndexedFaceSet_10_190_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #190, 1048 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_190_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_190_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_190_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_10_190_texCoordIndex_2()));
			return IndexedFaceSet_10_190_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #190, 423 total numbers made up of 141 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_190_point()
		{
			MFVec3f Coordinate_11_190_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_11_190_point_1()))
				.append(new MFVec3f(getCoordinate_11_190_point_2()));
			return Coordinate_11_190_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #191, 274 total numbers made up of 137 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_191_point()
		{
			MFVec2f TextureCoordinate_11_191_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_11_191_point_1()))
				.append(new MFVec2f(getTextureCoordinate_11_191_point_2()));
			return TextureCoordinate_11_191_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #199, 3104 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_199_coordIndex()
		{
			MFInt32 IndexedFaceSet_11_199_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_199_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_11_199_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_11_199_coordIndex_3()))
				.append(new MFInt32(getIndexedFaceSet_11_199_coordIndex_4()));
			return IndexedFaceSet_11_199_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #199, 3104 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_11_199_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_11_199_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_11_199_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_11_199_texCoordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_11_199_texCoordIndex_3()))
				.append(new MFInt32(getIndexedFaceSet_11_199_texCoordIndex_4()));
			return IndexedFaceSet_11_199_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #199, 1272 total numbers made up of 424 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_199_point()
		{
			MFVec3f Coordinate_12_199_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_12_199_point_1()))
				.append(new MFVec3f(getCoordinate_12_199_point_2()))
				.append(new MFVec3f(getCoordinate_12_199_point_3()))
				.append(new MFVec3f(getCoordinate_12_199_point_4()))
				.append(new MFVec3f(getCoordinate_12_199_point_5()));
			return Coordinate_12_199_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #200, 808 total numbers made up of 404 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_200_point()
		{
			MFVec2f TextureCoordinate_12_200_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_12_200_point_1()))
				.append(new MFVec2f(getTextureCoordinate_12_200_point_2()))
				.append(new MFVec2f(getTextureCoordinate_12_200_point_3()))
				.append(new MFVec2f(getTextureCoordinate_12_200_point_4()))
				.append(new MFVec2f(getTextureCoordinate_12_200_point_5()));
			return TextureCoordinate_12_200_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return KoreanCharacter12Sun model
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
        X3D thisExampleX3dModel = new KoreanCharacter12Sun().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.KoreanCharacter12Sun\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.KoreanCharacter12Sun self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
