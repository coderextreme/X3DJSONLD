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

// Javadoc annotations follow, see below for source.
/**
 * <p> Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model. </p>
 <p> Related links: KoreanCharacter11Min.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.KoreanCharacter11Min&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d">KoreanCharacter11Min.x3d</a> </td>
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
			<td> 5 July 2020 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Jin Hoon Lee and Min Joo Lee
 */

public class KoreanCharacter11Min
{
	/** Default constructor to create this object. */
	public KoreanCharacter11Min ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KoreanCharacter11Min.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("5 July 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Suwon University HAnim Editor"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("KoreanCharacter11Min.x3d"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("Min").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_Min").setName("Min").setScale(0.0225,0.0225,0.0225).setVersion("2.0")
      .addComments(" HAnimHumanoid original info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Chul Hee Jung and Myeong Won Lee"}))
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"myeongwonlee@gmail.com"}))
        .setMetadata(new MetadataString().setName("creationDate").setValue(new String[] {"31 March 2011"}))
        .setMetadata(new MetadataString().setName("gender").setValue(new String[] {"male"}))
        .setMetadata(new MetadataString().setName("height").setValue(new String[] {"1.5"}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"2.0"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,33.689999,-2.063000)
        .addChild(new HAnimSegment("hanim_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,33.689999,-2.063000)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                .setTexture(new ImageTexture("MinTextureAtlas").setUrl(new String[] {"images/Min.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Min.png"})))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_8_32_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_32_texCoordIndex())
                .setCoord(new Coordinate().setPoint(getCoordinate_9_32_point()))
                .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_9_33_point()))))))
        .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(3.383000,32.919998,-2.063000)
          .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
            .addChild(new Transform().setTranslation(3.383000,32.919998,-2.063000)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_41_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_41_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_41_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.5137,0.5362,0.5435,0.5314,0.4871,0.5460,0.3946,0.5441,0.3574,0.5390,0.4222,0.5494,0.5949,0.5388,0.5640,0.5292,0.5509,0.5109,0.5881,0.5171,0.4869,0.5205,0.5135,0.5161,0.3560,0.5155,0.3920,0.5160,0.4207,0.5192,0.5494,0.4352,0.5806,0.4370,0.4872,0.4382,0.5154,0.4372,0.3588,0.4376,0.3915,0.4370,0.4204,0.4388,0.4853,0.5922,0.4061,0.5828,0.5040,0.5771,0.5152,0.5689,0.5373,0.5612,0.5850,0.5611,0.5540,0.5612,0.3653,0.5645,0.3898,0.5743,0.5605,0.3376,0.4842,0.3445,0.5487,0.3376,0.5125,0.3445,0.5540,0.3454,0.5434,0.3444,0.5689,0.3454,0.5120,0.3376,0.5120,0.3454,0.5726,0.3454,0.4713,0.3376,0.3945,0.3465,0.4642,0.3454,0.4208,0.3461,0.3626,0.3605,0.3943,0.3619,0.4230,0.3606,0.4596,0.3376,0.5270,0.5921,0.4540,0.5585,0.3115,0.5408,0.3182,0.5192,0.4535,0.5221,0.3258,0.4390,0.4543,0.4395,0.4210,0.5943,0.3213,0.5631,0.4720,0.3376,0.4535,0.3447,0.4642,0.3454,0.4506,0.3454,0.5120,0.3375,0.3793,0.5941,0.5120,0.3454,0.5488,0.3376,0.5540,0.3454,0.5120,0.3316,0.3656,0.3470,0.3334,0.3474})))))))
          .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(3.745000,17.990000,-2.063000)
            .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
              .addChild(new Transform().setTranslation(3.745000,17.990000,-2.063000)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {16,22,1,-1,1,0,16,-1,17,16,0,-1,0,2,17,-1,18,23,7,-1,7,3,18,-1,19,18,3,-1,3,4,19,-1,5,20,19,-1,19,4,5,-1,6,21,20,-1,20,5,6,-1,1,22,21,-1,21,6,1,-1,29,10,12,-1,12,44,29,-1,28,39,9,-1,9,8,28,-1,29,28,8,-1,8,10,29,-1,11,40,44,-1,44,12,11,-1,13,25,40,-1,40,11,13,-1,14,26,25,-1,25,13,14,-1,15,27,26,-1,26,14,15,-1,39,43,27,-1,17,23,12,-1,12,10,17,-1,8,9,22,-1,22,16,8,-1,10,8,16,-1,16,17,10,-1,11,12,23,-1,23,18,11,-1,19,13,11,-1,11,18,19,-1,20,14,13,-1,13,19,20,-1,21,15,14,-1,14,20,21,-1,22,9,15,-1,15,21,22,-1,2,7,23,-1,23,17,2,-1,0,1,24,-1,1,6,24,-1,6,5,24,-1,5,4,24,-1,4,3,24,-1,3,7,24,-1,7,2,24,-1,2,0,24,-1,26,42,41,-1,41,25,26,-1,27,43,42,-1,42,26,27,-1,39,27,15,-1,15,9,39,-1,25,41,40,-1,30,39,28,-1,28,31,30,-1,32,31,28,-1,28,29,32,-1,44,40,33,-1,33,37,44,-1,41,34,33,-1,33,40,41,-1,42,35,34,-1,34,41,42,-1,43,36,35,-1,35,42,43,-1,30,36,43,-1,43,39,30,-1,37,32,29,-1,29,44,37,-1,30,31,38,-1,31,32,38,-1,32,37,38,-1,37,33,38,-1,33,34,38,-1,34,35,38,-1,35,36,38,-1,36,30,38,-1}).setTexCoordIndex(new int[] {1,26,2,-1,2,0,1,-1,4,1,0,-1,0,3,4,-1,6,7,8,-1,8,5,6,-1,10,29,28,-1,28,9,10,-1,11,12,10,-1,10,9,11,-1,13,14,12,-1,12,11,13,-1,27,26,14,-1,14,13,27,-1,35,15,16,-1,16,41,35,-1,34,33,30,-1,30,17,34,-1,35,34,17,-1,17,15,35,-1,18,36,41,-1,41,16,18,-1,19,20,37,-1,37,31,19,-1,21,22,20,-1,20,19,21,-1,23,24,22,-1,22,21,23,-1,33,40,24,-1,4,7,16,-1,16,15,4,-1,17,30,26,-1,26,1,17,-1,15,17,1,-1,1,4,15,-1,18,16,7,-1,7,6,18,-1,10,19,31,-1,31,29,10,-1,12,21,19,-1,19,10,12,-1,14,23,21,-1,21,12,14,-1,26,30,23,-1,23,14,26,-1,3,8,7,-1,7,4,3,-1,0,2,25,-1,27,13,32,-1,13,11,32,-1,11,9,32,-1,9,28,32,-1,5,8,25,-1,8,3,25,-1,3,0,25,-1,22,39,38,-1,38,20,22,-1,24,40,39,-1,39,22,24,-1,33,24,23,-1,23,30,33,-1,20,38,37,-1,44,45,42,-1,42,43,44,-1,47,43,42,-1,42,46,47,-1,50,51,48,-1,48,49,50,-1,52,53,48,-1,48,51,52,-1,54,55,53,-1,53,52,54,-1,56,57,55,-1,55,54,56,-1,44,57,56,-1,56,45,44,-1,49,47,46,-1,46,50,49,-1,44,43,58,-1,43,47,58,-1,47,49,58,-1,49,48,58,-1,48,53,58,-1,53,55,58,-1,55,57,58,-1,57,44,58,-1})
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_50_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4947,0.1511,0.4898,0.1553,0.4808,0.1397,0.5148,0.1542,0.5136,0.1567,0.5548,0.1397,0.5624,0.1474,0.5380,0.1540,0.5349,0.1510,0.3767,0.1524,0.3745,0.1561,0.3976,0.1569,0.3988,0.1590,0.4182,0.1525,0.4256,0.1569,0.5115,0.2481,0.5421,0.2420,0.4829,0.2521,0.5687,0.2356,0.3697,0.2448,0.3657,0.3328,0.3981,0.2507,0.3946,0.3320,0.4262,0.2532,0.4217,0.3331,0.5194,0.1371,0.4591,0.1503,0.4304,0.1417,0.3563,0.1417,0.3487,0.1494,0.4545,0.2546,0.3424,0.2376,0.3918,0.1391,0.4535,0.3447,0.4842,0.3445,0.5125,0.3445,0.5726,0.3454,0.3334,0.3474,0.3656,0.3470,0.3945,0.3465,0.4208,0.3461,0.5434,0.3444,0.5540,0.3454,0.5479,0.3523,0.5595,0.3520,0.5689,0.3454,0.5120,0.3454,0.5120,0.3521,0.4589,0.3520,0.4707,0.3520,0.4642,0.3454,0.4506,0.3454,0.4642,0.3454,0.4714,0.3522,0.5120,0.3454,0.5120,0.3519,0.5540,0.3454,0.5477,0.3519,0.5120,0.3564})))))))
            .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(3.701000,4.188000,-1.915000)
              .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                .addChild(new Transform().setTranslation(3.701000,4.188000,-1.915000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_59_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_59_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_59_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_60_point()))))))
              .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(3.701000,3.418000,-0.400900)
                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(3.701000,3.418000,-0.400900)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_68_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_68_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_68_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.1332,0.1110,0.1385,0.0844,0.1146,0.1052,0.0718,0.0975,0.0744,0.0238,0.1384,0.0238,0.0784,0.0045,0.1384,0.0045,0.0777,0.1111,0.1132,0.1179,0.0516,0.0322,0.0558,0.0214,0.0450,0.0628,0.0521,0.0813,0.2264,0.2171,0.2264,0.1898,0.2880,0.1984,0.2792,0.2323,0.1736,0.2323,0.1648,0.1984,0.2556,0.0393,0.2873,0.0895,0.2812,0.0232,0.2651,0.0230,0.2801,0.0044,0.2660,0.0044,0.1808,0.0221,0.1792,0.0644,0.2172,0.0490,0.2181,0.0225,0.1813,0.0044,0.2193,0.0044,0.2268,0.0825,0.2268,0.0640,0.2880,0.0793,0.2988,0.1248,0.2268,0.1162,0.2268,0.1899,0.2268,0.1537,0.2958,0.1609,0.2879,0.1996,0.1662,0.0895,0.1655,0.0793,0.1547,0.1248,0.1656,0.1996,0.1577,0.1609,0.0731,0.0615})))))))))))
        .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-3.383000,32.919998,-2.063000)
          .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
            .addChild(new Transform().setTranslation(-3.383000,32.919998,-2.063000)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_81_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_81_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_81_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.5137,0.5362,0.5435,0.5314,0.4871,0.5460,0.3946,0.5441,0.3574,0.5390,0.4222,0.5494,0.5949,0.5388,0.5640,0.5292,0.5509,0.5109,0.5881,0.5171,0.4869,0.5205,0.5135,0.5161,0.3560,0.5155,0.3920,0.5160,0.4207,0.5192,0.5494,0.4352,0.5806,0.4370,0.4872,0.4382,0.5154,0.4372,0.3588,0.4376,0.3915,0.4370,0.4204,0.4388,0.4853,0.5922,0.4061,0.5828,0.5040,0.5771,0.5152,0.5689,0.5373,0.5612,0.5850,0.5611,0.5540,0.5612,0.3653,0.5645,0.3898,0.5743,0.5605,0.3376,0.4842,0.3445,0.5487,0.3376,0.5125,0.3445,0.5540,0.3454,0.5434,0.3444,0.5689,0.3454,0.5120,0.3376,0.5120,0.3454,0.5726,0.3454,0.4713,0.3376,0.3945,0.3465,0.4642,0.3454,0.4208,0.3461,0.3626,0.3605,0.3943,0.3619,0.4230,0.3606,0.4596,0.3376,0.5270,0.5921,0.4540,0.5585,0.3115,0.5408,0.3182,0.5192,0.4535,0.5221,0.3258,0.4390,0.4543,0.4395,0.4210,0.5943,0.3213,0.5631,0.4720,0.3376,0.4535,0.3447,0.4642,0.3454,0.4506,0.3454,0.5120,0.3375,0.3793,0.5941,0.5120,0.3454,0.5488,0.3376,0.5540,0.3454,0.5120,0.3316,0.3656,0.3470,0.3334,0.3474})))))))
          .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-3.745000,17.990000,-2.063000)
            .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
              .addChild(new Transform().setTranslation(-3.745000,17.990000,-2.063000)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {16,0,1,-1,1,22,16,-1,17,2,0,-1,0,16,17,-1,18,3,7,-1,7,23,18,-1,19,4,3,-1,3,18,19,-1,5,4,19,-1,19,20,5,-1,6,5,20,-1,20,21,6,-1,1,6,21,-1,21,22,1,-1,29,44,12,-1,12,10,29,-1,28,8,9,-1,9,39,28,-1,29,10,8,-1,8,28,29,-1,11,12,44,-1,44,40,11,-1,13,11,40,-1,40,25,13,-1,14,13,25,-1,25,26,14,-1,15,14,26,-1,26,27,15,-1,39,27,43,-1,17,10,12,-1,12,23,17,-1,8,16,22,-1,22,9,8,-1,10,17,16,-1,16,8,10,-1,11,18,23,-1,23,12,11,-1,19,18,11,-1,11,13,19,-1,20,19,13,-1,13,14,20,-1,21,20,14,-1,14,15,21,-1,22,21,15,-1,15,9,22,-1,2,17,23,-1,23,7,2,-1,0,24,1,-1,1,24,6,-1,6,24,5,-1,5,24,4,-1,4,24,3,-1,3,24,7,-1,7,24,2,-1,2,24,0,-1,26,25,41,-1,41,42,26,-1,27,26,42,-1,42,43,27,-1,39,9,15,-1,15,27,39,-1,25,40,41,-1,30,31,28,-1,28,39,30,-1,32,29,28,-1,28,31,32,-1,44,37,33,-1,33,40,44,-1,41,40,33,-1,33,34,41,-1,42,41,34,-1,34,35,42,-1,43,42,35,-1,35,36,43,-1,30,39,43,-1,43,36,30,-1,37,44,29,-1,29,32,37,-1,30,38,31,-1,31,38,32,-1,32,38,37,-1,37,38,33,-1,33,38,34,-1,34,38,35,-1,35,38,36,-1,36,38,30,-1}).setTexCoordIndex(new int[] {1,0,2,-1,2,26,1,-1,4,3,0,-1,0,1,4,-1,6,5,8,-1,8,7,6,-1,10,9,28,-1,28,29,10,-1,11,9,10,-1,10,12,11,-1,13,11,12,-1,12,14,13,-1,27,13,14,-1,14,26,27,-1,35,41,16,-1,16,15,35,-1,34,17,30,-1,30,33,34,-1,35,15,17,-1,17,34,35,-1,18,16,41,-1,41,36,18,-1,19,31,37,-1,37,20,19,-1,21,19,20,-1,20,22,21,-1,23,21,22,-1,22,24,23,-1,33,24,40,-1,4,15,16,-1,16,7,4,-1,17,1,26,-1,26,30,17,-1,15,4,1,-1,1,17,15,-1,18,6,7,-1,7,16,18,-1,10,29,31,-1,31,19,10,-1,12,10,19,-1,19,21,12,-1,14,12,21,-1,21,23,14,-1,26,14,23,-1,23,30,26,-1,3,4,7,-1,7,8,3,-1,0,25,2,-1,27,32,13,-1,13,32,11,-1,11,32,9,-1,9,32,28,-1,5,25,8,-1,8,25,3,-1,3,25,0,-1,22,20,38,-1,38,39,22,-1,24,22,39,-1,39,40,24,-1,33,30,23,-1,23,24,33,-1,20,37,38,-1,44,43,42,-1,42,45,44,-1,47,46,42,-1,42,43,47,-1,50,49,48,-1,48,51,50,-1,52,51,48,-1,48,53,52,-1,54,52,53,-1,53,55,54,-1,56,54,55,-1,55,57,56,-1,44,45,56,-1,56,57,44,-1,49,50,46,-1,46,47,49,-1,44,58,43,-1,43,58,47,-1,47,58,49,-1,49,58,48,-1,48,58,53,-1,53,58,55,-1,55,58,57,-1,57,58,44,-1})
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_90_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4947,0.1511,0.4898,0.1553,0.4808,0.1397,0.5148,0.1542,0.5136,0.1567,0.5548,0.1397,0.5624,0.1474,0.5380,0.1540,0.5349,0.1510,0.3767,0.1524,0.3745,0.1561,0.3976,0.1569,0.3988,0.1590,0.4182,0.1525,0.4256,0.1569,0.5115,0.2481,0.5421,0.2420,0.4829,0.2521,0.5687,0.2356,0.3697,0.2448,0.3657,0.3328,0.3981,0.2507,0.3946,0.3320,0.4262,0.2532,0.4217,0.3331,0.5194,0.1371,0.4591,0.1503,0.4304,0.1417,0.3563,0.1417,0.3487,0.1494,0.4545,0.2546,0.3424,0.2376,0.3918,0.1391,0.4535,0.3447,0.4842,0.3445,0.5125,0.3445,0.5726,0.3454,0.3334,0.3474,0.3656,0.3470,0.3945,0.3465,0.4208,0.3461,0.5434,0.3444,0.5540,0.3454,0.5479,0.3523,0.5595,0.3520,0.5689,0.3454,0.5120,0.3454,0.5120,0.3521,0.4589,0.3520,0.4707,0.3520,0.4642,0.3454,0.4506,0.3454,0.4642,0.3454,0.4714,0.3522,0.5120,0.3454,0.5120,0.3519,0.5540,0.3454,0.5477,0.3519,0.5120,0.3564})))))))
            .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-3.701000,4.188000,-1.915000)
              .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                .addChild(new Transform().setTranslation(-3.701000,4.188000,-1.915000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_99_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_99_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_99_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_100_point()))))))
              .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-3.701000,3.418000,-0.400900)
                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(-3.701000,3.418000,-0.400900)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_108_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_108_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_108_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.1332,0.1110,0.1385,0.0844,0.1146,0.1052,0.0718,0.0975,0.0744,0.0238,0.1384,0.0238,0.0784,0.0045,0.1384,0.0045,0.0777,0.1111,0.1132,0.1179,0.0516,0.0322,0.0558,0.0214,0.0450,0.0628,0.0521,0.0813,0.2264,0.2171,0.2264,0.1898,0.2880,0.1984,0.2792,0.2323,0.1736,0.2323,0.1648,0.1984,0.2556,0.0393,0.2873,0.0895,0.2812,0.0232,0.2651,0.0230,0.2801,0.0044,0.2660,0.0044,0.1808,0.0221,0.1792,0.0644,0.2172,0.0490,0.2181,0.0225,0.1813,0.0044,0.2193,0.0044,0.2268,0.0825,0.2268,0.0640,0.2880,0.0793,0.2988,0.1248,0.2268,0.1162,0.2268,0.1899,0.2268,0.1537,0.2958,0.1609,0.2879,0.1996,0.1662,0.0895,0.1655,0.0793,0.1547,0.1248,0.1656,0.1996,0.1577,0.1609,0.0731,0.0615})))))))))))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,30.980000,-2.063000)
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,30.980000,-2.063000)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_121_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_121_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_121_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_122_point()))))))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(5.199000,51.119999,-2.106000)
            .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(5.199000,51.119999,-2.106000)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_130_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_130_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_130_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_131_point()))))))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(7.024000,42.730000,-2.051000)
              .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(7.024000,42.730000,-2.051000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {14,12,0,-1,0,20,14,-1,13,12,14,-1,14,15,13,-1,1,13,15,-1,15,21,1,-1,2,1,21,-1,21,22,2,-1,3,2,22,-1,22,23,3,-1,18,3,23,-1,23,16,18,-1,18,16,17,-1,17,19,18,-1,20,0,19,-1,19,17,20,-1,0,12,34,-1,34,35,0,-1,12,13,36,-1,36,34,12,-1,36,13,1,-1,1,37,36,-1,37,1,2,-1,2,38,37,-1,38,2,3,-1,3,39,38,-1,39,3,18,-1,18,40,39,-1,41,19,0,-1,0,35,41,-1,18,19,41,-1,41,40,18,-1,4,11,31,-1,31,24,4,-1,11,5,25,-1,25,31,11,-1,5,8,28,-1,28,25,5,-1,10,6,26,-1,26,30,10,-1,7,4,24,-1,24,27,7,-1,8,9,29,-1,29,28,8,-1,9,10,30,-1,30,29,9,-1,6,7,27,-1,27,26,6,-1,24,31,32,-1,31,25,32,-1,25,28,32,-1,28,29,32,-1,29,30,32,-1,30,26,32,-1,26,27,32,-1,27,24,32,-1,14,20,33,-1,20,17,33,-1,17,16,33,-1,16,23,33,-1,23,22,33,-1,22,21,33,-1,21,15,33,-1,15,14,33,-1,35,34,11,-1,11,4,35,-1,34,36,5,-1,5,11,34,-1,5,36,37,-1,37,8,5,-1,8,37,38,-1,38,9,8,-1,9,38,39,-1,39,10,9,-1,10,39,40,-1,40,6,10,-1,7,41,35,-1,35,4,7,-1,40,41,7,-1,7,6,40,-1}).setTexCoordIndex(new int[] {0,1,2,-1,2,3,0,-1,5,1,0,-1,0,4,5,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,13,12,14,-1,14,15,13,-1,3,2,15,-1,15,14,3,-1,2,1,16,-1,16,17,2,-1,1,5,18,-1,18,16,1,-1,18,5,7,-1,7,19,18,-1,19,7,9,-1,9,20,19,-1,20,9,11,-1,11,21,20,-1,21,11,13,-1,13,22,21,-1,23,15,2,-1,2,17,23,-1,13,15,23,-1,23,22,13,-1,24,25,26,-1,26,27,24,-1,25,28,29,-1,29,26,25,-1,28,30,31,-1,31,29,28,-1,32,33,34,-1,34,35,32,-1,36,24,27,-1,27,37,36,-1,30,38,39,-1,39,31,30,-1,38,32,35,-1,35,39,38,-1,33,36,37,-1,37,34,33,-1,27,26,40,-1,26,29,40,-1,29,31,40,-1,31,39,40,-1,39,35,40,-1,35,34,40,-1,34,37,40,-1,37,27,40,-1,0,3,41,-1,3,14,41,-1,14,12,41,-1,12,10,41,-1,10,8,41,-1,8,6,41,-1,6,4,41,-1,4,0,41,-1,17,16,25,-1,25,24,17,-1,16,18,28,-1,28,25,16,-1,28,18,19,-1,19,30,28,-1,30,19,20,-1,20,38,30,-1,38,20,21,-1,21,32,38,-1,32,21,22,-1,22,33,32,-1,36,23,17,-1,17,24,36,-1,22,23,36,-1,36,33,22,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.0285,-0.0014,-1.2730,0.7859,-0.0014,1.0110,-0.0285,-0.0014,1.3930,-0.7518,-0.0014,1.0110,0.3269,-8.4760,-1.1350,1.0720,-8.3750,0.0140,-0.4474,-8.5400,0.0140,-0.2171,-8.5300,-0.8828,0.8740,-8.3820,0.8302,0.3775,-8.4300,1.1890,-0.1689,-8.4940,0.9251,0.8721,-8.4100,-0.7528,0.7859,-0.0014,-0.9986,1.2190,-0.0014,0.0140,0.6257,0.3573,-0.8513,0.9878,0.3723,0.0140,-0.9446,0.3723,0.0140,-0.6206,0.3576,-0.8306,-1.1500,-0.0014,0.0140,-0.7518,-0.0014,-0.9986,-0.0285,0.3525,-1.1300,0.6002,0.3872,0.8762,-0.0285,0.3938,1.2590,-0.6298,0.3874,0.8891,0.3498,-8.9870,-0.9214,0.8782,-8.8960,0.0140,-0.2599,-9.0580,0.0140,-0.0599,-9.0420,-0.7556,0.7651,-8.8990,0.7304,0.3925,-8.9480,1.0000,-0.0474,-9.0130,0.8168,0.7037,-8.9320,-0.6264,0.3461,-8.9710,0.0140,-0.0285,0.6520,0.0140,0.8421,-4.5710,-0.8166,0.0839,-4.7070,-1.2400,1.2030,-4.4590,0.0139,0.9133,-4.5100,0.8922,0.1345,-4.6130,1.3040,-0.4791,-4.6390,0.9406,-0.7499,-4.6280,0.0140,-0.5401,-4.6520,-0.8788})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.6690,0.8210,0.6723,0.8142,0.6553,0.8142,0.6553,0.8209,0.6765,0.8213,0.6814,0.8142,0.6684,0.8216,0.6723,0.8142,0.6553,0.8217,0.6553,0.8142,0.6427,0.8216,0.6402,0.8142,0.6361,0.8213,0.6318,0.8142,0.6429,0.8210,0.6402,0.8142,0.6735,0.7270,0.6576,0.7244,0.6810,0.7291,0.6750,0.7281,0.6587,0.7262,0.6459,0.7257,0.6402,0.7259,0.6446,0.7254,0.6627,0.6524,0.6741,0.6537,0.6706,0.6437,0.6632,0.6427,0.6783,0.6544,0.6742,0.6444,0.6741,0.6542,0.6719,0.6444,0.6523,0.6521,0.6465,0.6512,0.6504,0.6413,0.6549,0.6422,0.6513,0.6514,0.6546,0.6416,0.6638,0.6533,0.6641,0.6434,0.6631,0.6430,0.6553,0.8266})))))))
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(7.221000,34.0,-2.015000)
                .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                  .addChild(new Transform().setTranslation(7.221000,34.0,-2.015000)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,0,1,-1,1,2,3,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,9,12,13,-1,13,10,9,-1,15,16,17,-1,17,14,15,-1,16,15,18,-1,18,19,16,-1,3,11,10,-1,10,0,3,-1,10,13,1,-1,1,0,10,-1,16,20,21,-1,21,17,16,-1,20,16,19,-1,19,2,20,-1,7,6,9,-1,9,8,7,-1,5,12,9,-1,9,6,5,-1,15,14,22,-1,22,23,15,-1,18,15,23,-1,23,4,18,-1,21,20,2,-1,2,1,21,-1,23,22,5,-1,5,4,23,-1,12,14,17,-1,17,13,12,-1,26,27,24,-1,24,25,26,-1,21,1,13,-1,13,17,21,-1,11,3,2,-1,2,19,11,-1,22,14,12,-1,12,5,22,-1,4,7,8,-1,8,18,4,-1,25,24,8,-1,8,11,25,-1,11,19,26,-1,26,25,11,-1,19,18,27,-1,27,26,19,-1,18,8,24,-1,24,27,18,-1}).setTexCoordIndex(new int[] {3,0,1,-1,1,2,3,-1,28,29,4,-1,4,5,28,-1,9,10,11,-1,11,8,9,-1,9,12,13,-1,13,10,9,-1,39,40,41,-1,41,38,39,-1,16,15,18,-1,18,19,16,-1,3,11,10,-1,10,0,3,-1,10,13,1,-1,1,0,10,-1,40,42,43,-1,43,41,40,-1,20,16,19,-1,19,2,20,-1,7,6,9,-1,9,8,7,-1,28,31,30,-1,30,29,28,-1,39,38,22,-1,22,23,39,-1,33,34,32,-1,32,5,33,-1,21,20,2,-1,2,1,21,-1,32,35,28,-1,28,5,32,-1,12,14,17,-1,17,13,12,-1,26,27,24,-1,24,25,26,-1,21,1,13,-1,13,17,21,-1,11,3,2,-1,2,19,11,-1,35,36,31,-1,31,28,35,-1,5,4,37,-1,37,33,5,-1,25,24,8,-1,8,11,25,-1,11,19,26,-1,26,25,11,-1,19,18,27,-1,27,26,19,-1,18,8,24,-1,24,27,18,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.6858,-0.0091,1.0430,0.8572,-0.0091,0.3582,-0.5820,-0.0091,0.3582,-0.5216,-0.0091,1.0430,-0.6790,-2.6600,0.2822,0.9542,-2.9920,0.2822,0.7672,-2.7140,1.2330,-0.6030,-2.4350,1.2330,-0.8768,-1.9070,1.4000,1.0410,-1.9070,1.4000,1.0410,-0.5983,1.4000,-0.8768,-0.5983,1.4000,1.2810,-2.0300,0.2845,1.2810,-0.5489,0.2845,1.0970,-1.9080,-1.4520,-0.8213,-1.9080,-1.4520,-0.8213,-0.5991,-1.4520,1.0970,-0.5991,-1.4520,-1.0050,-2.0300,0.2845,-1.0050,-0.5489,0.2845,-0.4661,-0.0091,-1.0840,0.7414,-0.0091,-1.0840,0.8227,-2.7140,-1.1980,-0.5474,-2.4360,-1.1980,-1.2720,-1.7610,1.2130,-1.2720,-0.7447,1.2130,-1.4760,-0.7234,0.4714,-1.4760,-1.8560,0.4714})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9934,0.0820,0.9951,0.0877,0.9456,0.0877,0.9473,0.0820,0.9034,0.0905,0.8766,0.0919,0.9942,0.0090,0.9450,0.0157,0.9371,0.0285,0.9969,0.0285,0.9969,0.0684,0.9371,0.0684,0.9993,0.0256,0.9993,0.0715,0.9975,0.0285,0.9365,0.0285,0.9365,0.0684,0.9975,0.0684,0.9312,0.0256,0.9312,0.0715,0.9489,0.0820,0.9939,0.0820,0.9948,0.0090,0.9466,0.0157,0.9256,0.0321,0.9256,0.0648,0.9198,0.0672,0.9198,0.0298,0.8753,0.0485,0.9025,0.0502,0.9023,0.0288,0.8757,0.0269,0.8373,0.0909,0.8768,0.1071,0.8372,0.1061,0.8367,0.0504,0.8370,0.0294,0.9035,0.1061,0.9975,0.0285,0.9387,0.0285,0.9387,0.0684,0.9975,0.0684,0.9489,0.0820,0.9939,0.0820}))))))))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-5.199000,51.119999,-2.106000)
            .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-5.199000,51.119999,-2.106000)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_160_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_160_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_160_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_161_point()))))))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-7.024000,42.730000,-2.051000)
              .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-7.024000,42.730000,-2.051000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {14,20,0,-1,0,12,14,-1,13,15,14,-1,14,12,13,-1,1,21,15,-1,15,13,1,-1,2,22,21,-1,21,1,2,-1,3,23,22,-1,22,2,3,-1,18,16,23,-1,23,3,18,-1,18,19,17,-1,17,16,18,-1,20,17,19,-1,19,0,20,-1,0,35,34,-1,34,12,0,-1,12,34,36,-1,36,13,12,-1,36,37,1,-1,1,13,36,-1,37,38,2,-1,2,1,37,-1,38,39,3,-1,3,2,38,-1,39,40,18,-1,18,3,39,-1,41,35,0,-1,0,19,41,-1,18,40,41,-1,41,19,18,-1,4,24,31,-1,31,11,4,-1,11,31,25,-1,25,5,11,-1,5,25,28,-1,28,8,5,-1,10,30,26,-1,26,6,10,-1,7,27,24,-1,24,4,7,-1,8,28,29,-1,29,9,8,-1,9,29,30,-1,30,10,9,-1,6,26,27,-1,27,7,6,-1,24,32,31,-1,31,32,25,-1,25,32,28,-1,28,32,29,-1,29,32,30,-1,30,32,26,-1,26,32,27,-1,27,32,24,-1,14,33,20,-1,20,33,17,-1,17,33,16,-1,16,33,23,-1,23,33,22,-1,22,33,21,-1,21,33,15,-1,15,33,14,-1,35,4,11,-1,11,34,35,-1,34,11,5,-1,5,36,34,-1,5,8,37,-1,37,36,5,-1,8,9,38,-1,38,37,8,-1,9,10,39,-1,39,38,9,-1,10,6,40,-1,40,39,10,-1,7,4,35,-1,35,41,7,-1,40,6,7,-1,7,41,40,-1}).setTexCoordIndex(new int[] {0,3,2,-1,2,1,0,-1,5,4,0,-1,0,1,5,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,13,15,14,-1,14,12,13,-1,3,14,15,-1,15,2,3,-1,2,17,16,-1,16,1,2,-1,1,16,18,-1,18,5,1,-1,18,19,7,-1,7,5,18,-1,19,20,9,-1,9,7,19,-1,20,21,11,-1,11,9,20,-1,21,22,13,-1,13,11,21,-1,23,17,2,-1,2,15,23,-1,13,22,23,-1,23,15,13,-1,24,27,26,-1,26,25,24,-1,25,26,29,-1,29,28,25,-1,28,29,31,-1,31,30,28,-1,32,35,34,-1,34,33,32,-1,36,37,27,-1,27,24,36,-1,30,31,39,-1,39,38,30,-1,38,39,35,-1,35,32,38,-1,33,34,37,-1,37,36,33,-1,27,40,26,-1,26,40,29,-1,29,40,31,-1,31,40,39,-1,39,40,35,-1,35,40,34,-1,34,40,37,-1,37,40,27,-1,0,41,3,-1,3,41,14,-1,14,41,12,-1,12,41,10,-1,10,41,8,-1,8,41,6,-1,6,41,4,-1,4,41,0,-1,17,24,25,-1,25,16,17,-1,16,25,28,-1,28,18,16,-1,28,30,19,-1,19,18,28,-1,30,38,20,-1,20,19,30,-1,38,32,21,-1,21,20,38,-1,32,33,22,-1,22,21,32,-1,36,24,17,-1,17,23,36,-1,22,33,36,-1,36,23,22,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0285,-0.0014,-1.2730,-0.7859,-0.0014,1.0110,0.0285,-0.0014,1.3930,0.7518,-0.0014,1.0110,-0.3269,-8.4760,-1.1350,-1.0720,-8.3750,0.0140,0.4474,-8.5400,0.0140,0.2171,-8.5300,-0.8828,-0.8740,-8.3820,0.8302,-0.3775,-8.4300,1.1890,0.1689,-8.4940,0.9251,-0.8721,-8.4100,-0.7528,-0.7859,-0.0014,-0.9986,-1.2190,-0.0014,0.0140,-0.6257,0.3573,-0.8513,-0.9878,0.3723,0.0140,0.9446,0.3723,0.0140,0.6206,0.3576,-0.8306,1.1500,-0.0014,0.0140,0.7518,-0.0014,-0.9986,0.0285,0.3525,-1.1300,-0.6002,0.3872,0.8762,0.0285,0.3938,1.2590,0.6298,0.3874,0.8891,-0.3498,-8.9870,-0.9214,-0.8782,-8.8960,0.0140,0.2599,-9.0580,0.0140,0.0599,-9.0420,-0.7556,-0.7651,-8.8990,0.7304,-0.3925,-8.9480,1.0000,0.0474,-9.0130,0.8168,-0.7037,-8.9310,-0.6264,-0.3461,-8.9710,0.0140,0.0285,0.6520,0.0140,-0.8421,-4.5710,-0.8166,-0.0839,-4.7070,-1.2400,-1.2030,-4.4590,0.0139,-0.9133,-4.5100,0.8923,-0.1345,-4.6130,1.3040,0.4791,-4.6390,0.9406,0.7499,-4.6280,0.0140,0.5401,-4.6520,-0.8788})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.6690,0.8210,0.6723,0.8142,0.6553,0.8142,0.6553,0.8209,0.6765,0.8213,0.6814,0.8142,0.6684,0.8216,0.6723,0.8142,0.6553,0.8217,0.6553,0.8142,0.6427,0.8216,0.6402,0.8142,0.6361,0.8213,0.6318,0.8142,0.6429,0.8210,0.6402,0.8142,0.6735,0.7270,0.6576,0.7244,0.6810,0.7291,0.6750,0.7281,0.6587,0.7262,0.6459,0.7257,0.6402,0.7259,0.6446,0.7254,0.6627,0.6524,0.6741,0.6537,0.6706,0.6437,0.6632,0.6427,0.6783,0.6544,0.6742,0.6444,0.6741,0.6542,0.6719,0.6444,0.6523,0.6521,0.6465,0.6512,0.6504,0.6413,0.6549,0.6422,0.6513,0.6514,0.6546,0.6416,0.6638,0.6533,0.6641,0.6434,0.6631,0.6430,0.6553,0.8266})))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-7.221000,34.0,-2.015000)
                .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                  .addChild(new Transform().setTranslation(-7.221000,34.0,-2.015000)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,2,1,-1,1,0,3,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,9,10,13,-1,13,12,9,-1,15,14,17,-1,17,16,15,-1,16,19,18,-1,18,15,16,-1,3,0,10,-1,10,11,3,-1,10,0,1,-1,1,13,10,-1,16,17,21,-1,21,20,16,-1,20,2,19,-1,19,16,20,-1,7,8,9,-1,9,6,7,-1,5,6,9,-1,9,12,5,-1,15,23,22,-1,22,14,15,-1,18,4,23,-1,23,15,18,-1,21,1,2,-1,2,20,21,-1,23,4,5,-1,5,22,23,-1,12,13,17,-1,17,14,12,-1,26,25,24,-1,24,27,26,-1,21,17,13,-1,13,1,21,-1,11,19,2,-1,2,3,11,-1,22,5,12,-1,12,14,22,-1,4,18,8,-1,8,7,4,-1,25,11,8,-1,8,24,25,-1,11,25,26,-1,26,19,11,-1,19,26,27,-1,27,18,19,-1,18,27,24,-1,24,8,18,-1}).setTexCoordIndex(new int[] {3,2,1,-1,1,0,3,-1,28,5,4,-1,4,29,28,-1,9,8,11,-1,11,10,9,-1,9,10,13,-1,13,12,9,-1,39,38,41,-1,41,40,39,-1,16,19,18,-1,18,15,16,-1,3,0,10,-1,10,11,3,-1,10,0,1,-1,1,13,10,-1,40,41,43,-1,43,42,40,-1,20,2,19,-1,19,16,20,-1,7,8,9,-1,9,6,7,-1,28,29,30,-1,30,31,28,-1,39,23,22,-1,22,38,39,-1,33,5,32,-1,32,34,33,-1,21,1,2,-1,2,20,21,-1,32,5,28,-1,28,35,32,-1,12,13,17,-1,17,14,12,-1,26,25,24,-1,24,27,26,-1,21,17,13,-1,13,1,21,-1,11,19,2,-1,2,3,11,-1,35,28,31,-1,31,36,35,-1,5,33,37,-1,37,4,5,-1,25,11,8,-1,8,24,25,-1,11,25,26,-1,26,19,11,-1,19,26,27,-1,27,18,19,-1,18,27,24,-1,24,8,18,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.6858,-0.0091,1.0430,-0.8572,-0.0091,0.3582,0.5820,-0.0091,0.3582,0.5216,-0.0091,1.0430,0.6790,-2.6600,0.2822,-0.9542,-2.9920,0.2822,-0.7672,-2.7140,1.2330,0.6030,-2.4350,1.2330,0.8768,-1.9070,1.4000,-1.0410,-1.9070,1.4000,-1.0410,-0.5983,1.4000,0.8768,-0.5983,1.4000,-1.2810,-2.0300,0.2845,-1.2810,-0.5489,0.2845,-1.0970,-1.9080,-1.4520,0.8213,-1.9080,-1.4520,0.8213,-0.5991,-1.4520,-1.0970,-0.5991,-1.4520,1.0050,-2.0300,0.2845,1.0050,-0.5489,0.2845,0.4661,-0.0091,-1.0840,-0.7414,-0.0091,-1.0840,-0.8227,-2.7140,-1.1980,0.5474,-2.4360,-1.1980,1.2720,-1.7610,1.2130,1.2720,-0.7447,1.2130,1.4760,-0.7234,0.4714,1.4760,-1.8560,0.4714})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9934,0.0820,0.9951,0.0877,0.9456,0.0877,0.9473,0.0820,0.9034,0.0905,0.8766,0.0919,0.9942,0.0090,0.9450,0.0157,0.9371,0.0285,0.9969,0.0285,0.9969,0.0684,0.9371,0.0684,0.9993,0.0256,0.9993,0.0715,0.9975,0.0285,0.9365,0.0285,0.9365,0.0684,0.9975,0.0684,0.9312,0.0256,0.9312,0.0715,0.9489,0.0820,0.9939,0.0820,0.9948,0.0090,0.9466,0.0157,0.9256,0.0321,0.9256,0.0648,0.9198,0.0672,0.9198,0.0298,0.8753,0.0485,0.9025,0.0502,0.9023,0.0288,0.8757,0.0269,0.8373,0.0909,0.8768,0.1071,0.8372,0.1061,0.8367,0.0504,0.8370,0.0294,0.9035,0.1061,0.9975,0.0285,0.9387,0.0285,0.9387,0.0684,0.9975,0.0684,0.9489,0.0820,0.9939,0.0820}))))))))))
          .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0,36.290001,-2.197000)
            .addChild(new HAnimSegment("hanim_l5").setName("l5")
              .addChild(new Transform().setTranslation(0.0,36.290001,-2.197000)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_190_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_190_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_190_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_191_point()))))))
            .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,54.840000,-1.903000)
              .addChild(new HAnimSegment("hanim_skull").setName("skull")
                .addChild(new Transform().setTranslation(0.0,54.840000,-1.903000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("MinTextureAtlas")))
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
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_coordIndex_1()
		{
			int[] value = {17,0,6,-1,6,8,17,-1,27,28,10,-1,10,12,27,-1,14,5,3,-1,3,12,14,-1,15,8,6,-1,6,1,15,-1,18,31,29,-1,29,2,18,-1,17,19,4,-1,4,0,17,-1,15,1,5,-1,5,14,15,-1,9,16,18,-1,18,19,9,-1,11,60,61,-1,61,7,11,-1,7,61,30,-1,30,35,7,-1,16,63,31,-1,31,18,16,-1,13,9,19,-1,19,17,13,-1,2,4,19,-1,19,18,2,-1,8,13,17,-1,35,30,63,-1,63,16,35,-1,12,3,65,-1,65,27,12,-1,11,10,28,-1,28,60,11,-1,3,21,67,-1,67,65,3,-1,0,26,20,-1,20,6,0,-1,5,22,21,-1,21,3,5,-1,1,23,22,-1,22,5,1,-1,1,6,20,-1,20,23,1,-1,2,29,32,-1,32,24,2,-1,4,2,24,-1,24,25,4,-1,0,4,25,-1,25,26,0,-1,21,33,67,-1,26,33,20,-1,22,33,21,-1,23,33,22,-1,20,33,23,-1,32,33,24,-1,24,33,25,-1,25,33,26,-1,36,13,8,-1,8,37,36,-1,34,9,13,-1,13,36,34,-1,38,15,14,-1,14,39,38,-1,37,8,15,-1,15,38,37,-1,34,35,16,-1,12,39,14,-1,11,7,40,-1,7,35,40,-1,35,34,40,-1,34,36,40,-1,36,37,40,-1,37,38,40,-1,38,39,40,-1,39,10,40,-1,10,11,40,-1,41,44,43,-1,43,42,41,-1,27,45,46,-1,46,28,27,-1,47,45,49,-1,49,48,47,-1,51,50,43,-1,43,44,51,-1,53,52,29,-1,29,31,53,-1,41,42,55,-1,55,54,41,-1,51,47,48,-1,48,50,51,-1,56,54,53,-1,53,57,56,-1,59,58,61,-1,61,60,59,-1,58,62,30,-1,30,61,58,-1,57,53,31,-1,31,63,57,-1,64,41,54,-1,54,56,64,-1,52,53,54,-1,54,55,52,-1,44,41,64,-1,62,57,63,-1,63,30,62,-1,45,27,65,-1,65,49,45,-1,59,60,28,-1,28,46,59,-1,49,65,67,-1,67,66,49,-1,42,43,69,-1,69,68,42,-1,48,49,66,-1,66,70,48,-1,50,48,70,-1,70,71,50,-1,50,71,69,-1,69,43,50,-1,52,72,32,-1,32,29,52,-1,55,73,72,-1,72,52,55,-1,42,68,73,-1,73,55,42,-1,66,67,33,-1,68,69,33,-1,70,66,33,-1,71,70,33,-1,69,71,33,-1,32,72,33,-1,72,73,33,-1,73,68,33,-1,74,75,44,-1,44,64,74,-1,76,74,64,-1,64,56,76,-1,77,78,47,-1,47,51,77,-1,75,77,51,-1,51,44,75,-1,56,57,76,-1,45,78,46,-1,59,79,58,-1,58,79,62,-1,62,79,76,-1,76,79,74,-1,74,79,75,-1,75,79,77,-1,77,79,78,-1,78,79,46,-1,46,79,59,-1,16,9,34,-1,57,62,76,-1,12,10,39,-1,45,47,78,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,12,0,-1,4,5,6,-1,6,3,4,-1,7,8,9,-1,9,3,7,-1,11,26,27,-1,27,10,11,-1,14,15,16,-1,16,13,14,-1,0,17,18,-1,18,1,0,-1,11,10,8,-1,8,7,11,-1,19,20,14,-1,14,17,19,-1,22,23,24,-1,24,21,22,-1,21,24,29,-1,29,25,21,-1,20,30,15,-1,15,14,20,-1,33,19,17,-1,17,0,33,-1,13,18,17,-1,17,14,13,-1,12,33,0,-1,25,29,30,-1,30,20,25,-1,3,9,28,-1,28,4,3,-1,32,6,5,-1,5,31,32,-1,9,39,40,-1,40,28,9,-1,1,34,35,-1,35,2,1,-1,8,41,39,-1,39,9,8,-1,10,47,41,-1,41,8,10,-1,10,27,48,-1,48,47,10,-1,13,16,36,-1,36,37,13,-1,18,13,37,-1,37,38,18,-1,1,18,38,-1,38,34,1,-1,39,49,40,-1,34,42,35,-1,41,49,39,-1,47,49,41,-1,48,49,47,-1,36,42,37,-1,37,42,38,-1,38,42,34,-1,43,33,12,-1,12,44,43,-1,45,19,33,-1,33,43,45,-1,50,11,7,-1,7,56,50,-1,74,26,11,-1,11,50,74,-1,45,25,20,-1,3,56,7,-1,22,21,46,-1,21,25,46,-1,25,45,46,-1,45,43,46,-1,43,44,46,-1,74,50,75,-1,50,56,75,-1,56,6,75,-1,6,32,75,-1,51,52,53,-1,53,54,51,-1,4,76,77,-1,77,5,4,-1,80,76,78,-1,78,79,80,-1,84,81,82,-1,82,83,84,-1,57,55,16,-1,16,15,57,-1,51,54,58,-1,58,59,51,-1,84,80,79,-1,79,81,84,-1,60,59,57,-1,57,61,60,-1,63,62,24,-1,24,23,63,-1,62,64,29,-1,29,24,62,-1,61,57,15,-1,15,30,61,-1,65,51,59,-1,59,60,65,-1,55,57,59,-1,59,58,55,-1,52,51,65,-1,64,61,30,-1,30,29,64,-1,76,4,28,-1,28,78,76,-1,85,31,5,-1,5,77,85,-1,78,28,40,-1,40,86,78,-1,54,53,66,-1,66,67,54,-1,79,78,86,-1,86,87,79,-1,81,79,87,-1,87,88,81,-1,81,88,89,-1,89,82,81,-1,55,68,36,-1,36,16,55,-1,58,69,68,-1,68,55,58,-1,54,67,69,-1,69,58,54,-1,86,40,49,-1,67,66,42,-1,87,86,49,-1,88,87,49,-1,89,88,49,-1,36,68,42,-1,68,69,42,-1,69,67,42,-1,70,71,52,-1,52,65,70,-1,72,70,65,-1,65,60,72,-1,90,91,80,-1,80,84,90,-1,92,90,84,-1,84,83,92,-1,60,61,72,-1,76,91,77,-1,63,73,62,-1,62,73,64,-1,64,73,72,-1,72,73,70,-1,70,73,71,-1,92,93,90,-1,90,93,91,-1,91,93,77,-1,77,93,85,-1,20,19,45,-1,61,64,72,-1,3,6,56,-1,76,80,91,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_coordIndex_1()
		{
			int[] value = {15,14,6,-1,6,10,15,-1,1,0,7,-1,7,8,1,-1,2,1,8,-1,8,9,2,-1,3,15,10,-1,10,11,3,-1,4,3,11,-1,11,12,4,-1,5,4,12,-1,12,13,5,-1,0,5,13,-1,13,7,0,-1,14,34,6,-1,10,6,32,-1,32,27,10,-1,8,7,24,-1,24,25,8,-1,9,8,25,-1,25,26,9,-1,10,27,28,-1,28,11,10,-1,11,28,29,-1,29,12,11,-1,12,29,30,-1,30,13,12,-1,13,30,24,-1,24,7,13,-1,6,9,26,-1,26,32,6,-1,0,36,35,-1,35,5,0,-1,1,37,36,-1,36,0,1,-1,2,38,37,-1,37,1,2,-1,34,43,38,-1,38,2,34,-1,39,14,15,-1,15,40,39,-1,40,15,3,-1,3,41,40,-1,42,41,3,-1,3,4,42,-1,5,35,42,-1,42,4,5,-1,17,18,51,-1,51,52,17,-1,18,19,47,-1,47,51,18,-1,19,31,50,-1,50,47,19,-1,20,21,54,-1,54,53,20,-1,21,22,48,-1,48,54,21,-1,23,49,48,-1,48,22,23,-1,17,52,49,-1,49,23,17,-1,51,25,24,-1,24,52,51,-1,26,25,51,-1,51,47,26,-1,27,32,50,-1,50,53,27,-1,28,27,53,-1,53,44,28,-1,45,44,54,-1,54,48,45,-1,49,46,45,-1,45,48,49,-1,52,46,49,-1,50,31,20,-1,20,53,50,-1,32,26,47,-1,47,50,32,-1,18,17,33,-1,17,23,33,-1,23,22,33,-1,22,21,33,-1,21,20,33,-1,20,31,33,-1,31,19,33,-1,19,18,33,-1,34,14,39,-1,39,43,34,-1,34,2,9,-1,9,6,34,-1,36,16,35,-1,37,16,36,-1,38,16,37,-1,43,16,38,-1,40,16,39,-1,41,16,40,-1,42,16,41,-1,35,16,42,-1,39,16,43,-1,45,29,28,-1,28,44,45,-1,46,30,29,-1,29,45,46,-1,52,24,30,-1,30,46,52,-1,53,54,44,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_texCoordIndex_1()
		{
			int[] value = {6,7,8,-1,8,9,6,-1,2,50,53,-1,53,10,2,-1,0,2,10,-1,10,11,0,-1,4,51,52,-1,52,12,4,-1,3,4,12,-1,12,13,3,-1,5,3,13,-1,13,14,5,-1,50,5,14,-1,14,53,50,-1,7,1,8,-1,9,8,15,-1,15,16,9,-1,10,53,55,-1,55,17,10,-1,11,10,17,-1,17,18,11,-1,52,54,19,-1,19,12,52,-1,12,19,20,-1,20,13,12,-1,13,20,21,-1,21,14,13,-1,14,21,55,-1,55,53,14,-1,8,11,18,-1,18,15,8,-1,50,56,23,-1,23,5,50,-1,2,24,22,-1,22,50,2,-1,0,25,24,-1,24,2,0,-1,1,26,25,-1,25,0,1,-1,28,7,6,-1,6,27,28,-1,57,51,4,-1,4,29,57,-1,30,29,4,-1,4,3,30,-1,5,23,30,-1,30,3,5,-1,31,33,35,-1,35,37,31,-1,33,38,39,-1,39,35,33,-1,38,41,43,-1,43,39,38,-1,48,58,60,-1,60,61,48,-1,58,62,64,-1,64,60,58,-1,65,66,64,-1,64,62,65,-1,31,37,66,-1,66,65,31,-1,32,17,55,-1,55,59,32,-1,18,17,32,-1,32,34,18,-1,16,15,36,-1,36,40,16,-1,19,54,69,-1,69,45,19,-1,46,45,68,-1,68,42,46,-1,44,47,46,-1,46,42,44,-1,59,47,44,-1,43,41,48,-1,48,61,43,-1,15,18,34,-1,34,36,15,-1,33,31,67,-1,31,65,67,-1,65,62,67,-1,62,58,67,-1,58,48,67,-1,48,41,67,-1,41,38,67,-1,38,33,67,-1,1,7,28,-1,28,26,1,-1,1,0,11,-1,11,8,1,-1,56,63,23,-1,24,49,22,-1,25,49,24,-1,26,49,25,-1,27,49,28,-1,29,63,57,-1,30,63,29,-1,23,63,30,-1,28,49,26,-1,46,20,19,-1,19,45,46,-1,47,21,20,-1,20,46,47,-1,59,55,21,-1,21,47,59,-1,69,68,45,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_coordIndex_1()
		{
			int[] value = {0,35,4,-1,4,6,0,-1,27,12,4,-1,4,35,27,-1,13,28,9,-1,9,5,13,-1,6,5,9,-1,9,0,6,-1,4,29,7,-1,7,6,4,-1,18,29,4,-1,4,12,18,-1,8,20,13,-1,13,5,8,-1,7,8,5,-1,5,6,7,-1,1,2,23,-1,2,24,23,-1,25,3,23,-1,3,1,23,-1,2,1,7,-1,7,29,2,-1,24,2,29,-1,29,18,24,-1,3,25,20,-1,20,8,3,-1,1,3,8,-1,8,7,1,-1,10,11,16,-1,16,38,10,-1,27,38,16,-1,16,12,27,-1,13,15,14,-1,14,28,13,-1,11,10,14,-1,14,15,11,-1,17,30,16,-1,16,11,17,-1,16,30,18,-1,18,12,16,-1,19,15,13,-1,13,20,19,-1,17,11,15,-1,15,19,17,-1,21,23,22,-1,22,23,24,-1,25,23,26,-1,26,23,21,-1,17,21,22,-1,22,30,17,-1,30,22,24,-1,24,18,30,-1,26,19,20,-1,20,25,26,-1,21,17,19,-1,19,26,21,-1,35,37,40,-1,40,27,35,-1,0,36,37,-1,37,35,0,-1,32,45,42,-1,42,34,32,-1,31,32,34,-1,34,33,31,-1,32,31,49,-1,49,48,32,-1,32,48,45,-1,37,34,42,-1,42,40,37,-1,36,33,34,-1,34,37,36,-1,38,27,40,-1,40,39,38,-1,10,38,39,-1,39,41,10,-1,44,43,42,-1,42,45,44,-1,47,46,43,-1,43,44,47,-1,44,48,49,-1,49,47,44,-1,44,45,48,-1,39,40,42,-1,42,43,39,-1,41,39,43,-1,43,46,41,-1,28,52,51,-1,51,9,28,-1,14,53,52,-1,52,28,14,-1,54,53,14,-1,14,10,54,-1,41,55,54,-1,54,10,41,-1,46,56,55,-1,55,41,46,-1,47,57,56,-1,56,46,47,-1,49,58,57,-1,57,47,49,-1,31,59,58,-1,58,49,31,-1,33,60,59,-1,59,31,33,-1,36,61,60,-1,60,33,36,-1,0,62,61,-1,61,36,0,-1,62,0,9,-1,9,51,62,-1,52,50,51,-1,53,50,52,-1,54,50,53,-1,55,50,54,-1,56,50,55,-1,57,50,56,-1,58,50,57,-1,59,50,58,-1,60,50,59,-1,61,50,60,-1,62,50,61,-1,51,50,62,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,12,32,-1,32,33,6,-1,3,8,7,-1,7,0,3,-1,2,30,9,-1,9,3,2,-1,10,30,2,-1,2,5,10,-1,34,35,6,-1,6,33,34,-1,9,11,8,-1,8,3,9,-1,13,14,15,-1,14,16,15,-1,17,18,15,-1,18,13,15,-1,14,13,9,-1,9,30,14,-1,16,14,30,-1,30,10,16,-1,36,37,35,-1,35,34,36,-1,13,18,11,-1,11,9,13,-1,19,20,21,-1,21,22,19,-1,4,22,21,-1,21,5,4,-1,6,38,39,-1,39,12,6,-1,20,19,24,-1,24,23,20,-1,25,31,21,-1,21,20,25,-1,21,31,10,-1,10,5,21,-1,40,38,6,-1,6,35,40,-1,25,20,23,-1,23,26,25,-1,27,15,28,-1,28,15,16,-1,17,15,29,-1,29,15,27,-1,25,27,28,-1,28,31,25,-1,31,28,16,-1,16,10,31,-1,41,40,35,-1,35,37,41,-1,27,25,26,-1,26,29,27,-1,43,44,45,-1,45,42,43,-1,46,47,44,-1,44,43,46,-1,50,51,48,-1,48,49,50,-1,53,50,49,-1,49,52,53,-1,50,53,55,-1,55,54,50,-1,50,54,51,-1,44,49,48,-1,48,45,44,-1,47,52,49,-1,49,44,47,-1,57,42,45,-1,45,56,57,-1,59,57,56,-1,56,58,59,-1,60,61,48,-1,48,51,60,-1,62,63,61,-1,61,60,62,-1,60,54,55,-1,55,62,60,-1,60,51,54,-1,56,45,48,-1,48,61,56,-1,58,56,61,-1,61,63,58,-1,12,67,66,-1,66,32,12,-1,39,68,67,-1,67,12,39,-1,70,69,24,-1,24,19,70,-1,58,72,71,-1,71,59,58,-1,63,73,72,-1,72,58,63,-1,62,74,73,-1,73,63,62,-1,55,75,74,-1,74,62,55,-1,53,76,75,-1,75,55,53,-1,52,77,76,-1,76,53,52,-1,47,78,77,-1,77,52,47,-1,46,79,78,-1,78,47,46,-1,80,0,7,-1,7,65,80,-1,67,64,66,-1,68,64,67,-1,70,64,69,-1,72,64,71,-1,73,64,72,-1,74,64,73,-1,75,64,74,-1,76,64,75,-1,77,64,76,-1,78,64,77,-1,79,64,78,-1,65,64,80,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_coordIndex_1()
		{
			int[] value = {50,0,4,-1,4,21,50,-1,4,0,3,-1,3,0,52,-1,31,1,2,-1,2,32,31,-1,1,31,13,-1,13,12,1,-1,4,3,14,-1,14,15,4,-1,2,1,5,-1,17,18,5,-1,14,3,6,-1,6,20,14,-1,2,5,6,-1,52,2,6,-1,3,52,6,-1,15,21,4,-1,5,18,6,-1,12,17,5,-1,5,1,12,-1,6,18,20,-1,50,21,8,-1,8,7,50,-1,8,9,7,-1,9,53,7,-1,39,40,10,-1,10,11,39,-1,11,12,13,-1,13,39,11,-1,8,15,14,-1,14,9,8,-1,10,16,11,-1,17,16,18,-1,14,20,19,-1,19,9,14,-1,19,16,10,-1,19,10,53,-1,9,19,53,-1,15,8,21,-1,19,18,16,-1,12,11,16,-1,16,17,12,-1,19,20,18,-1,35,30,26,-1,26,34,35,-1,37,27,30,-1,30,35,37,-1,24,29,28,-1,28,22,24,-1,25,48,45,-1,45,23,25,-1,29,25,23,-1,23,28,29,-1,34,26,24,-1,24,49,34,-1,26,30,29,-1,29,24,26,-1,27,37,48,-1,48,25,27,-1,30,27,25,-1,25,29,30,-1,50,51,22,-1,22,0,50,-1,22,51,49,-1,49,24,22,-1,31,23,45,-1,45,13,31,-1,28,23,31,-1,31,32,28,-1,22,28,32,-1,32,0,22,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,36,38,37,-1,43,42,41,-1,41,44,43,-1,47,46,45,-1,45,48,47,-1,44,41,46,-1,46,47,44,-1,34,49,43,-1,43,33,34,-1,33,43,44,-1,44,36,33,-1,38,47,48,-1,48,37,38,-1,36,44,47,-1,47,38,36,-1,50,7,42,-1,42,51,50,-1,42,43,49,-1,49,51,42,-1,39,13,45,-1,45,46,39,-1,41,40,39,-1,39,46,41,-1,42,7,40,-1,40,41,42,-1,10,40,7,-1,7,53,10,-1,32,2,52,-1,52,0,32,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_texCoordIndex_1()
		{
			int[] value = {15,16,17,-1,17,14,15,-1,2,1,3,-1,3,1,46,-1,7,6,4,-1,4,5,7,-1,6,7,7,-1,7,6,6,-1,2,3,8,-1,8,9,2,-1,4,6,10,-1,11,12,10,-1,8,3,13,-1,13,13,8,-1,4,10,13,-1,46,4,13,-1,3,46,13,-1,9,0,2,-1,10,12,13,-1,6,11,10,-1,10,6,6,-1,13,12,13,-1,15,14,18,-1,18,19,15,-1,2,3,1,-1,3,46,1,-1,7,5,4,-1,4,6,7,-1,6,6,7,-1,7,7,6,-1,2,9,8,-1,8,3,2,-1,4,10,6,-1,11,10,12,-1,8,13,13,-1,13,3,8,-1,13,10,4,-1,13,4,46,-1,3,13,46,-1,9,2,0,-1,13,12,10,-1,6,6,10,-1,10,11,6,-1,13,13,12,-1,33,34,21,-1,21,32,33,-1,24,25,23,-1,23,22,24,-1,28,29,26,-1,26,27,28,-1,31,31,30,-1,30,30,31,-1,29,31,30,-1,30,26,29,-1,32,21,35,-1,35,36,32,-1,20,23,29,-1,29,28,20,-1,25,24,31,-1,31,31,25,-1,23,25,31,-1,31,29,23,-1,37,38,39,-1,39,40,37,-1,39,38,36,-1,36,35,39,-1,7,30,30,-1,30,7,7,-1,26,30,7,-1,7,5,26,-1,27,26,5,-1,5,1,27,-1,33,32,41,-1,41,42,33,-1,24,22,23,-1,23,25,24,-1,28,27,26,-1,26,29,28,-1,31,30,30,-1,30,31,31,-1,29,26,30,-1,30,31,29,-1,32,36,43,-1,43,41,32,-1,20,28,29,-1,29,23,20,-1,25,31,31,-1,31,24,25,-1,23,29,31,-1,31,25,23,-1,37,44,45,-1,45,38,37,-1,45,43,36,-1,36,38,45,-1,7,7,30,-1,30,30,7,-1,26,5,7,-1,7,30,26,-1,27,1,5,-1,5,26,27,-1,4,5,1,-1,1,46,4,-1,5,4,46,-1,46,1,5,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_coordIndex_1()
		{
			int[] value = {15,10,6,-1,6,14,15,-1,1,8,7,-1,7,0,1,-1,2,9,8,-1,8,1,2,-1,3,11,10,-1,10,15,3,-1,4,12,11,-1,11,3,4,-1,5,13,12,-1,12,4,5,-1,0,7,13,-1,13,5,0,-1,14,6,34,-1,10,27,32,-1,32,6,10,-1,8,25,24,-1,24,7,8,-1,9,26,25,-1,25,8,9,-1,10,11,28,-1,28,27,10,-1,11,12,29,-1,29,28,11,-1,12,13,30,-1,30,29,12,-1,13,7,24,-1,24,30,13,-1,6,32,26,-1,26,9,6,-1,0,5,35,-1,35,36,0,-1,1,0,36,-1,36,37,1,-1,2,1,37,-1,37,38,2,-1,34,2,38,-1,38,43,34,-1,39,40,15,-1,15,14,39,-1,40,41,3,-1,3,15,40,-1,42,4,3,-1,3,41,42,-1,5,4,42,-1,42,35,5,-1,17,52,51,-1,51,18,17,-1,18,51,47,-1,47,19,18,-1,19,47,50,-1,50,31,19,-1,20,53,54,-1,54,21,20,-1,21,54,48,-1,48,22,21,-1,23,22,48,-1,48,49,23,-1,17,23,49,-1,49,52,17,-1,51,52,24,-1,24,25,51,-1,26,47,51,-1,51,25,26,-1,27,53,50,-1,50,32,27,-1,28,44,53,-1,53,27,28,-1,45,48,54,-1,54,44,45,-1,49,48,45,-1,45,46,49,-1,52,49,46,-1,50,53,20,-1,20,31,50,-1,32,50,47,-1,47,26,32,-1,18,33,17,-1,17,33,23,-1,23,33,22,-1,22,33,21,-1,21,33,20,-1,20,33,31,-1,31,33,19,-1,19,33,18,-1,34,43,39,-1,39,14,34,-1,34,6,9,-1,9,2,34,-1,36,35,16,-1,37,36,16,-1,38,37,16,-1,43,38,16,-1,40,39,16,-1,41,40,16,-1,42,41,16,-1,35,42,16,-1,39,43,16,-1,45,44,28,-1,28,29,45,-1,46,45,29,-1,29,30,46,-1,52,46,30,-1,30,24,52,-1,53,44,54,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_texCoordIndex_1()
		{
			int[] value = {6,9,8,-1,8,7,6,-1,2,10,53,-1,53,50,2,-1,0,11,10,-1,10,2,0,-1,4,12,52,-1,52,51,4,-1,3,13,12,-1,12,4,3,-1,5,14,13,-1,13,3,5,-1,50,53,14,-1,14,5,50,-1,7,8,1,-1,9,16,15,-1,15,8,9,-1,10,17,55,-1,55,53,10,-1,11,18,17,-1,17,10,11,-1,52,12,19,-1,19,54,52,-1,12,13,20,-1,20,19,12,-1,13,14,21,-1,21,20,13,-1,14,53,55,-1,55,21,14,-1,8,15,18,-1,18,11,8,-1,50,5,23,-1,23,56,50,-1,2,50,22,-1,22,24,2,-1,0,2,24,-1,24,25,0,-1,1,0,25,-1,25,26,1,-1,28,27,6,-1,6,7,28,-1,57,29,4,-1,4,51,57,-1,30,3,4,-1,4,29,30,-1,5,3,30,-1,30,23,5,-1,31,37,35,-1,35,33,31,-1,33,35,39,-1,39,38,33,-1,38,39,43,-1,43,41,38,-1,48,61,60,-1,60,58,48,-1,58,60,64,-1,64,62,58,-1,65,62,64,-1,64,66,65,-1,31,65,66,-1,66,37,31,-1,32,59,55,-1,55,17,32,-1,18,34,32,-1,32,17,18,-1,16,40,36,-1,36,15,16,-1,19,45,69,-1,69,54,19,-1,46,42,68,-1,68,45,46,-1,44,42,46,-1,46,47,44,-1,59,44,47,-1,43,61,48,-1,48,41,43,-1,15,36,34,-1,34,18,15,-1,33,67,31,-1,31,67,65,-1,65,67,62,-1,62,67,58,-1,58,67,48,-1,48,67,41,-1,41,67,38,-1,38,67,33,-1,1,26,28,-1,28,7,1,-1,1,8,11,-1,11,0,1,-1,56,23,63,-1,24,22,49,-1,25,24,49,-1,26,25,49,-1,27,28,49,-1,29,57,63,-1,30,29,63,-1,23,30,63,-1,28,26,49,-1,46,45,19,-1,19,20,46,-1,47,46,20,-1,20,21,47,-1,59,47,21,-1,21,55,59,-1,69,45,68,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_coordIndex_1()
		{
			int[] value = {0,6,4,-1,4,35,0,-1,27,35,4,-1,4,12,27,-1,13,5,9,-1,9,28,13,-1,6,0,9,-1,9,5,6,-1,4,6,7,-1,7,29,4,-1,18,12,4,-1,4,29,18,-1,8,5,13,-1,13,20,8,-1,7,6,5,-1,5,8,7,-1,1,23,2,-1,2,23,24,-1,25,23,3,-1,3,23,1,-1,2,29,7,-1,7,1,2,-1,24,18,29,-1,29,2,24,-1,3,8,20,-1,20,25,3,-1,1,7,8,-1,8,3,1,-1,10,38,16,-1,16,11,10,-1,27,12,16,-1,16,38,27,-1,13,28,14,-1,14,15,13,-1,11,15,14,-1,14,10,11,-1,17,11,16,-1,16,30,17,-1,16,12,18,-1,18,30,16,-1,19,20,13,-1,13,15,19,-1,17,19,15,-1,15,11,17,-1,21,22,23,-1,22,24,23,-1,25,26,23,-1,26,21,23,-1,17,30,22,-1,22,21,17,-1,30,18,24,-1,24,22,30,-1,26,25,20,-1,20,19,26,-1,21,26,19,-1,19,17,21,-1,35,27,40,-1,40,37,35,-1,0,35,37,-1,37,36,0,-1,32,34,42,-1,42,45,32,-1,31,33,34,-1,34,32,31,-1,32,48,49,-1,49,31,32,-1,32,45,48,-1,37,40,42,-1,42,34,37,-1,36,37,34,-1,34,33,36,-1,38,39,40,-1,40,27,38,-1,10,41,39,-1,39,38,10,-1,44,45,42,-1,42,43,44,-1,47,44,43,-1,43,46,47,-1,44,47,49,-1,49,48,44,-1,44,48,45,-1,39,43,42,-1,42,40,39,-1,41,46,43,-1,43,39,41,-1,28,9,51,-1,51,52,28,-1,14,28,52,-1,52,53,14,-1,54,10,14,-1,14,53,54,-1,41,10,54,-1,54,55,41,-1,46,41,55,-1,55,56,46,-1,47,46,56,-1,56,57,47,-1,49,47,57,-1,57,58,49,-1,31,49,58,-1,58,59,31,-1,33,31,59,-1,59,60,33,-1,36,33,60,-1,60,61,36,-1,0,36,61,-1,61,62,0,-1,62,51,9,-1,9,0,62,-1,52,51,50,-1,53,52,50,-1,54,53,50,-1,55,54,50,-1,56,55,50,-1,57,56,50,-1,58,57,50,-1,59,58,50,-1,60,59,50,-1,61,60,50,-1,62,61,50,-1,51,62,50,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_texCoordIndex_1()
		{
			int[] value = {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,6,33,32,-1,32,12,6,-1,3,0,7,-1,7,8,3,-1,2,3,9,-1,9,30,2,-1,10,5,2,-1,2,30,10,-1,34,33,6,-1,6,35,34,-1,9,3,8,-1,8,11,9,-1,13,15,14,-1,14,15,16,-1,17,15,18,-1,18,15,13,-1,14,30,9,-1,9,13,14,-1,16,10,30,-1,30,14,16,-1,36,34,35,-1,35,37,36,-1,13,9,11,-1,11,18,13,-1,19,22,21,-1,21,20,19,-1,4,5,21,-1,21,22,4,-1,6,12,39,-1,39,38,6,-1,20,23,24,-1,24,19,20,-1,25,20,21,-1,21,31,25,-1,21,5,10,-1,10,31,21,-1,40,35,6,-1,6,38,40,-1,25,26,23,-1,23,20,25,-1,27,28,15,-1,28,16,15,-1,17,29,15,-1,29,27,15,-1,25,31,28,-1,28,27,25,-1,31,10,16,-1,16,28,31,-1,41,37,35,-1,35,40,41,-1,27,29,26,-1,26,25,27,-1,43,42,45,-1,45,44,43,-1,46,43,44,-1,44,47,46,-1,50,49,48,-1,48,51,50,-1,53,52,49,-1,49,50,53,-1,50,54,55,-1,55,53,50,-1,50,51,54,-1,44,45,48,-1,48,49,44,-1,47,44,49,-1,49,52,47,-1,57,56,45,-1,45,42,57,-1,59,58,56,-1,56,57,59,-1,60,51,48,-1,48,61,60,-1,62,60,61,-1,61,63,62,-1,60,62,55,-1,55,54,60,-1,60,54,51,-1,56,61,48,-1,48,45,56,-1,58,63,61,-1,61,56,58,-1,12,32,66,-1,66,67,12,-1,39,12,67,-1,67,68,39,-1,70,19,24,-1,24,69,70,-1,58,59,71,-1,71,72,58,-1,63,58,72,-1,72,73,63,-1,62,63,73,-1,73,74,62,-1,55,62,74,-1,74,75,55,-1,53,55,75,-1,75,76,53,-1,52,53,76,-1,76,77,52,-1,47,52,77,-1,77,78,47,-1,46,47,78,-1,78,79,46,-1,80,65,7,-1,7,0,80,-1,67,66,64,-1,68,67,64,-1,70,69,64,-1,72,71,64,-1,73,72,64,-1,74,73,64,-1,75,74,64,-1,76,75,64,-1,77,76,64,-1,78,77,64,-1,79,78,64,-1,65,80,64,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_coordIndex_1()
		{
			int[] value = {50,21,4,-1,4,0,50,-1,4,3,0,-1,3,52,0,-1,31,32,2,-1,2,1,31,-1,1,12,13,-1,13,31,1,-1,4,15,14,-1,14,3,4,-1,2,5,1,-1,17,5,18,-1,14,20,6,-1,6,3,14,-1,6,5,2,-1,6,2,52,-1,3,6,52,-1,15,4,21,-1,5,6,18,-1,12,1,5,-1,5,17,12,-1,6,20,18,-1,50,7,8,-1,8,21,50,-1,8,7,9,-1,9,7,53,-1,39,11,10,-1,10,40,39,-1,11,39,13,-1,13,12,11,-1,8,9,14,-1,14,15,8,-1,10,11,16,-1,17,18,16,-1,14,9,19,-1,19,20,14,-1,10,16,19,-1,53,10,19,-1,9,53,19,-1,15,21,8,-1,19,16,18,-1,12,17,16,-1,16,11,12,-1,19,18,20,-1,35,34,26,-1,26,30,35,-1,37,35,30,-1,30,27,37,-1,24,22,28,-1,28,29,24,-1,25,23,45,-1,45,48,25,-1,29,28,23,-1,23,25,29,-1,34,49,24,-1,24,26,34,-1,26,24,29,-1,29,30,26,-1,27,25,48,-1,48,37,27,-1,30,29,25,-1,25,27,30,-1,50,0,22,-1,22,51,50,-1,22,24,49,-1,49,51,22,-1,31,13,45,-1,45,23,31,-1,28,32,31,-1,31,23,28,-1,22,0,32,-1,32,28,22,-1,35,36,33,-1,33,34,35,-1,37,38,36,-1,36,35,37,-1,43,44,41,-1,41,42,43,-1,47,48,45,-1,45,46,47,-1,44,47,46,-1,46,41,44,-1,34,33,43,-1,43,49,34,-1,33,36,44,-1,44,43,33,-1,38,37,48,-1,48,47,38,-1,36,38,47,-1,47,44,36,-1,50,51,42,-1,42,7,50,-1,42,51,49,-1,49,43,42,-1,39,46,45,-1,45,13,39,-1,41,46,39,-1,39,40,41,-1,42,41,40,-1,40,7,42,-1,10,53,7,-1,7,40,10,-1,32,0,52,-1,52,2,32,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_texCoordIndex_1()
		{
			int[] value = {15,14,17,-1,17,16,15,-1,2,3,1,-1,3,46,1,-1,7,5,4,-1,4,6,7,-1,6,6,7,-1,7,7,6,-1,2,9,8,-1,8,3,2,-1,4,10,6,-1,11,10,12,-1,8,13,13,-1,13,3,8,-1,13,10,4,-1,13,4,46,-1,3,13,46,-1,9,2,0,-1,10,13,12,-1,6,6,10,-1,10,11,6,-1,13,13,12,-1,15,19,18,-1,18,14,15,-1,2,1,3,-1,3,1,46,-1,7,6,4,-1,4,5,7,-1,6,7,7,-1,7,6,6,-1,2,3,8,-1,8,9,2,-1,4,6,10,-1,11,12,10,-1,8,3,13,-1,13,13,8,-1,4,10,13,-1,46,4,13,-1,3,46,13,-1,9,0,2,-1,13,10,12,-1,6,11,10,-1,10,6,6,-1,13,12,13,-1,33,32,21,-1,21,34,33,-1,24,22,23,-1,23,25,24,-1,28,27,26,-1,26,29,28,-1,31,30,30,-1,30,31,31,-1,29,26,30,-1,30,31,29,-1,32,36,35,-1,35,21,32,-1,20,28,29,-1,29,23,20,-1,25,31,31,-1,31,24,25,-1,23,29,31,-1,31,25,23,-1,37,40,39,-1,39,38,37,-1,39,35,36,-1,36,38,39,-1,7,7,30,-1,30,30,7,-1,26,5,7,-1,7,30,26,-1,27,1,5,-1,5,26,27,-1,33,42,41,-1,41,32,33,-1,24,25,23,-1,23,22,24,-1,28,29,26,-1,26,27,28,-1,31,31,30,-1,30,30,31,-1,29,31,30,-1,30,26,29,-1,32,41,43,-1,43,36,32,-1,20,23,29,-1,29,28,20,-1,25,24,31,-1,31,31,25,-1,23,25,31,-1,31,29,23,-1,37,38,45,-1,45,44,37,-1,45,38,36,-1,36,43,45,-1,7,30,30,-1,30,7,7,-1,26,30,7,-1,7,5,26,-1,27,26,5,-1,5,1,27,-1,4,46,1,-1,1,5,4,-1,5,1,46,-1,46,4,5,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_coordIndex_1()
		{
			int[] value = {17,0,6,-1,6,8,17,-1,27,28,10,-1,10,12,27,-1,14,5,3,-1,3,12,14,-1,15,8,6,-1,6,1,15,-1,18,31,29,-1,29,2,18,-1,17,19,4,-1,4,0,17,-1,15,1,5,-1,5,14,15,-1,9,16,18,-1,18,19,9,-1,11,60,61,-1,61,7,11,-1,7,61,30,-1,30,35,7,-1,16,63,31,-1,31,18,16,-1,13,9,19,-1,19,17,13,-1,2,4,19,-1,19,18,2,-1,8,13,17,-1,35,30,63,-1,63,16,35,-1,12,3,65,-1,65,27,12,-1,11,10,28,-1,28,60,11,-1,3,21,67,-1,67,65,3,-1,0,26,20,-1,20,6,0,-1,5,22,21,-1,21,3,5,-1,1,23,22,-1,22,5,1,-1,1,6,20,-1,20,23,1,-1,2,29,32,-1,32,24,2,-1,4,2,24,-1,24,25,4,-1,0,4,25,-1,25,26,0,-1,21,33,67,-1,26,33,20,-1,22,33,21,-1,23,33,22,-1,20,33,23,-1,32,33,24,-1,24,33,25,-1,25,33,26,-1,36,13,8,-1,8,37,36,-1,34,9,13,-1,13,36,34,-1,38,15,14,-1,14,39,38,-1,37,8,15,-1,15,38,37,-1,34,35,16,-1,12,39,14,-1,11,7,40,-1,7,35,40,-1,35,34,40,-1,34,36,40,-1,36,37,40,-1,37,38,40,-1,38,39,40,-1,39,10,40,-1,10,11,40,-1,41,44,43,-1,43,42,41,-1,27,45,46,-1,46,28,27,-1,47,45,49,-1,49,48,47,-1,51,50,43,-1,43,44,51,-1,53,52,29,-1,29,31,53,-1,41,42,55,-1,55,54,41,-1,51,47,48,-1,48,50,51,-1,56,54,53,-1,53,57,56,-1,59,58,61,-1,61,60,59,-1,58,62,30,-1,30,61,58,-1,57,53,31,-1,31,63,57,-1,64,41,54,-1,54,56,64,-1,52,53,54,-1,54,55,52,-1,44,41,64,-1,62,57,63,-1,63,30,62,-1,45,27,65,-1,65,49,45,-1,59,60,28,-1,28,46,59,-1,49,65,67,-1,67,66,49,-1,42,43,69,-1,69,68,42,-1,48,49,66,-1,66,70,48,-1,50,48,70,-1,70,71,50,-1,50,71,69,-1,69,43,50,-1,52,72,32,-1,32,29,52,-1,55,73,72,-1,72,52,55,-1,42,68,73,-1,73,55,42,-1,66,67,33,-1,68,69,33,-1,70,66,33,-1,71,70,33,-1,69,71,33,-1,32,72,33,-1,72,73,33,-1,73,68,33,-1,74,75,44,-1,44,64,74,-1,76,74,64,-1,64,56,76,-1,77,78,47,-1,47,51,77,-1,75,77,51,-1,51,44,75,-1,56,57,76,-1,45,78,46,-1,59,79,58,-1,58,79,62,-1,62,79,76,-1,76,79,74,-1,74,79,75,-1,75,79,77,-1,77,79,78,-1,78,79,46,-1,46,79,59,-1,16,9,34,-1,57,62,76,-1,12,10,39,-1,45,47,78,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,12,0,-1,4,5,6,-1,6,3,4,-1,7,8,9,-1,9,3,7,-1,11,26,27,-1,27,10,11,-1,14,15,16,-1,16,13,14,-1,0,17,18,-1,18,1,0,-1,11,10,8,-1,8,7,11,-1,19,20,14,-1,14,17,19,-1,22,23,24,-1,24,21,22,-1,21,24,29,-1,29,25,21,-1,20,30,15,-1,15,14,20,-1,33,19,17,-1,17,0,33,-1,13,18,17,-1,17,14,13,-1,12,33,0,-1,25,29,30,-1,30,20,25,-1,3,9,28,-1,28,4,3,-1,32,6,5,-1,5,31,32,-1,9,39,40,-1,40,28,9,-1,1,34,35,-1,35,2,1,-1,8,41,39,-1,39,9,8,-1,10,47,41,-1,41,8,10,-1,10,27,48,-1,48,47,10,-1,13,16,36,-1,36,37,13,-1,18,13,37,-1,37,38,18,-1,1,18,38,-1,38,34,1,-1,39,49,40,-1,34,42,35,-1,41,49,39,-1,47,49,41,-1,48,49,47,-1,36,42,37,-1,37,42,38,-1,38,42,34,-1,43,33,12,-1,12,44,43,-1,45,19,33,-1,33,43,45,-1,50,11,7,-1,7,56,50,-1,74,26,11,-1,11,50,74,-1,45,25,20,-1,3,56,7,-1,22,21,46,-1,21,25,46,-1,25,45,46,-1,45,43,46,-1,43,44,46,-1,74,50,75,-1,50,56,75,-1,56,6,75,-1,6,32,75,-1,51,52,53,-1,53,54,51,-1,4,76,77,-1,77,5,4,-1,80,76,78,-1,78,79,80,-1,84,81,82,-1,82,83,84,-1,57,55,16,-1,16,15,57,-1,51,54,58,-1,58,59,51,-1,84,80,79,-1,79,81,84,-1,60,59,57,-1,57,61,60,-1,63,62,24,-1,24,23,63,-1,62,64,29,-1,29,24,62,-1,61,57,15,-1,15,30,61,-1,65,51,59,-1,59,60,65,-1,55,57,59,-1,59,58,55,-1,52,51,65,-1,64,61,30,-1,30,29,64,-1,76,4,28,-1,28,78,76,-1,85,31,5,-1,5,77,85,-1,78,28,40,-1,40,86,78,-1,54,53,66,-1,66,67,54,-1,79,78,86,-1,86,87,79,-1,81,79,87,-1,87,88,81,-1,81,88,89,-1,89,82,81,-1,55,68,36,-1,36,16,55,-1,58,69,68,-1,68,55,58,-1,54,67,69,-1,69,58,54,-1,86,40,49,-1,67,66,42,-1,87,86,49,-1,88,87,49,-1,89,88,49,-1,36,68,42,-1,68,69,42,-1,69,67,42,-1,70,71,52,-1,52,65,70,-1,72,70,65,-1,65,60,72,-1,90,91,80,-1,80,84,90,-1,92,90,84,-1,84,83,92,-1,60,61,72,-1,76,91,77,-1,63,73,62,-1,62,73,64,-1,64,73,72,-1,72,73,70,-1,70,73,71,-1,92,93,90,-1,90,93,91,-1,91,93,77,-1,77,93,85,-1,20,19,45,-1,61,64,72,-1,3,6,56,-1,76,80,91,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_coordIndex_1()
		{
			int[] value = {13,12,10,-1,10,5,13,-1,14,13,5,-1,5,4,14,-1,6,19,14,-1,14,4,6,-1,8,11,3,-1,3,1,8,-1,1,0,7,-1,7,8,1,-1,0,1,2,-1,1,3,2,-1,11,9,15,-1,15,3,11,-1,9,10,12,-1,12,15,9,-1,7,0,19,-1,19,6,7,-1,3,15,2,-1,19,0,2,-1,12,16,15,-1,17,16,12,-1,12,13,17,-1,14,18,17,-1,17,13,14,-1,19,18,14,-1,2,15,16,-1,19,14,19,-1,18,19,19,-1,18,19,2,-1,17,18,2,-1,16,17,2,-1,4,5,21,-1,21,20,4,-1,5,10,22,-1,22,21,5,-1,10,9,23,-1,23,22,10,-1,9,11,24,-1,24,23,9,-1,11,8,25,-1,25,24,11,-1,8,7,26,-1,26,25,8,-1,7,6,27,-1,27,26,7,-1,6,4,20,-1,20,27,6,-1,20,21,28,-1,21,22,28,-1,22,23,28,-1,23,24,28,-1,24,25,28,-1,25,26,28,-1,26,27,28,-1,27,20,28,-1,29,30,31,-1,31,32,29,-1,33,34,30,-1,30,29,33,-1,36,34,33,-1,33,35,36,-1,38,36,35,-1,35,37,38,-1,40,38,37,-1,37,39,40,-1,42,40,39,-1,39,41,42,-1,41,44,43,-1,43,42,41,-1,32,31,43,-1,43,44,32,-1,45,29,32,-1,32,46,45,-1,47,33,29,-1,29,45,47,-1,35,33,47,-1,47,48,35,-1,37,35,48,-1,48,49,37,-1,50,39,37,-1,37,49,50,-1,51,41,39,-1,39,50,51,-1,44,41,51,-1,51,52,44,-1,32,44,52,-1,52,46,32,-1,31,30,53,-1,30,34,53,-1,34,36,53,-1,36,38,53,-1,38,40,53,-1,40,42,53,-1,42,43,53,-1,43,31,53,-1,45,46,54,-1,54,55,45,-1,47,45,55,-1,55,56,47,-1,57,48,47,-1,47,56,57,-1,58,49,48,-1,48,57,58,-1,59,50,49,-1,49,58,59,-1,60,51,50,-1,50,59,60,-1,52,51,60,-1,60,61,52,-1,46,52,61,-1,61,54,46,-1,55,54,62,-1,62,63,55,-1,56,55,63,-1,63,64,56,-1,65,57,56,-1,56,64,65,-1,66,58,57,-1,57,65,66,-1,67,59,58,-1,58,66,67,-1,68,60,59,-1,59,67,68,-1,61,60,68,-1,68,69,61,-1,54,61,69,-1,69,62,54,-1,63,62,71,-1,71,70,63,-1,62,69,72,-1,72,71,62,-1,69,68,73,-1,73,72,69,-1,68,67,74,-1,74,73,68,-1,67,66,75,-1,75,74,67,-1,66,65,76,-1,76,75,66,-1,65,64,77,-1,77,76,65,-1,64,63,70,-1,70,77,64,-1,70,71,78,-1,71,72,78,-1,72,73,78,-1,73,74,78,-1,74,75,78,-1,75,76,78,-1,76,77,78,-1,77,70,78,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,5,2,1,-1,1,4,5,-1,6,7,5,-1,5,4,6,-1,8,9,10,-1,10,11,8,-1,30,13,12,-1,12,29,30,-1,13,30,14,-1,11,10,31,-1,9,15,16,-1,16,10,9,-1,15,0,3,-1,3,16,15,-1,12,13,7,-1,7,6,12,-1,10,16,31,-1,7,13,14,-1,3,17,16,-1,18,17,3,-1,3,2,18,-1,5,19,18,-1,18,2,5,-1,7,19,5,-1,31,16,17,-1,7,5,7,-1,19,7,7,-1,19,7,14,-1,18,19,14,-1,17,18,31,-1,4,1,20,-1,20,21,4,-1,1,0,22,-1,22,20,1,-1,0,15,23,-1,23,22,0,-1,15,9,24,-1,24,23,15,-1,9,8,25,-1,25,24,9,-1,29,12,26,-1,26,32,29,-1,12,6,27,-1,27,26,12,-1,6,4,21,-1,21,27,6,-1,21,20,28,-1,20,22,33,-1,22,23,33,-1,23,24,33,-1,24,25,33,-1,32,26,28,-1,26,27,28,-1,27,21,28,-1,34,35,36,-1,36,37,34,-1,38,39,35,-1,35,34,38,-1,41,39,38,-1,38,40,41,-1,43,41,40,-1,40,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,46,49,48,-1,48,47,46,-1,37,36,48,-1,48,49,37,-1,50,34,37,-1,37,51,50,-1,52,38,34,-1,34,50,52,-1,40,38,52,-1,52,53,40,-1,42,40,53,-1,53,54,42,-1,55,44,42,-1,42,54,55,-1,56,46,44,-1,44,55,56,-1,49,46,56,-1,56,57,49,-1,37,49,57,-1,57,51,37,-1,36,35,58,-1,35,39,58,-1,39,41,58,-1,41,43,58,-1,43,45,58,-1,45,47,58,-1,47,48,58,-1,48,36,58,-1,50,51,60,-1,60,59,50,-1,52,50,59,-1,59,61,52,-1,62,53,52,-1,52,61,62,-1,63,54,53,-1,53,62,63,-1,64,55,54,-1,54,63,64,-1,65,56,55,-1,55,64,65,-1,57,56,65,-1,65,66,57,-1,51,57,66,-1,66,60,51,-1,59,60,68,-1,68,67,59,-1,61,59,67,-1,67,69,61,-1,70,62,61,-1,61,69,70,-1,71,63,62,-1,62,70,71,-1,72,64,63,-1,63,71,72,-1,73,65,64,-1,64,72,73,-1,66,65,73,-1,73,74,66,-1,60,66,74,-1,74,68,60,-1,67,68,75,-1,75,76,67,-1,68,74,77,-1,77,75,68,-1,74,73,78,-1,78,77,74,-1,73,72,79,-1,79,78,73,-1,72,71,80,-1,80,79,72,-1,71,70,81,-1,81,80,71,-1,70,69,82,-1,82,81,70,-1,69,67,76,-1,76,82,69,-1,76,75,83,-1,75,77,83,-1,77,78,83,-1,78,79,83,-1,79,80,83,-1,80,81,83,-1,81,82,83,-1,82,76,83,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_coordIndex_1()
		{
			int[] value = {13,5,10,-1,10,12,13,-1,14,4,5,-1,5,13,14,-1,6,4,14,-1,14,19,6,-1,8,1,3,-1,3,11,8,-1,1,8,7,-1,7,0,1,-1,0,2,1,-1,1,2,3,-1,11,3,15,-1,15,9,11,-1,9,15,12,-1,12,10,9,-1,7,6,19,-1,19,0,7,-1,3,2,15,-1,19,2,0,-1,12,15,16,-1,17,13,12,-1,12,16,17,-1,14,13,17,-1,17,18,14,-1,19,14,18,-1,2,16,15,-1,18,2,19,-1,19,14,19,-1,18,19,19,-1,17,2,18,-1,16,2,17,-1,4,20,21,-1,21,5,4,-1,5,21,22,-1,22,10,5,-1,10,22,23,-1,23,9,10,-1,9,23,24,-1,24,11,9,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,7,8,-1,7,26,27,-1,27,6,7,-1,6,27,20,-1,20,4,6,-1,20,28,21,-1,21,28,22,-1,22,28,23,-1,23,28,24,-1,24,28,25,-1,25,28,26,-1,26,28,27,-1,27,28,20,-1,29,32,31,-1,31,30,29,-1,33,29,30,-1,30,34,33,-1,36,35,33,-1,33,34,36,-1,38,37,35,-1,35,36,38,-1,40,39,37,-1,37,38,40,-1,42,41,39,-1,39,40,42,-1,41,42,43,-1,43,44,41,-1,32,44,43,-1,43,31,32,-1,45,46,32,-1,32,29,45,-1,47,45,29,-1,29,33,47,-1,35,48,47,-1,47,33,35,-1,37,49,48,-1,48,35,37,-1,50,49,37,-1,37,39,50,-1,51,50,39,-1,39,41,51,-1,44,52,51,-1,51,41,44,-1,32,46,52,-1,52,44,32,-1,31,53,30,-1,30,53,34,-1,34,53,36,-1,36,53,38,-1,38,53,40,-1,40,53,42,-1,42,53,43,-1,43,53,31,-1,45,55,54,-1,54,46,45,-1,47,56,55,-1,55,45,47,-1,57,56,47,-1,47,48,57,-1,58,57,48,-1,48,49,58,-1,59,58,49,-1,49,50,59,-1,60,59,50,-1,50,51,60,-1,52,61,60,-1,60,51,52,-1,46,54,61,-1,61,52,46,-1,55,63,62,-1,62,54,55,-1,56,64,63,-1,63,55,56,-1,65,64,56,-1,56,57,65,-1,66,65,57,-1,57,58,66,-1,67,66,58,-1,58,59,67,-1,68,67,59,-1,59,60,68,-1,61,69,68,-1,68,60,61,-1,54,62,69,-1,69,61,54,-1,63,70,71,-1,71,62,63,-1,62,71,72,-1,72,69,62,-1,69,72,73,-1,73,68,69,-1,68,73,74,-1,74,67,68,-1,67,74,75,-1,75,66,67,-1,66,75,76,-1,76,65,66,-1,65,76,77,-1,77,64,65,-1,64,77,70,-1,70,63,64,-1,70,78,71,-1,71,78,72,-1,72,78,73,-1,73,78,74,-1,74,78,75,-1,75,78,76,-1,76,78,77,-1,77,78,70,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_texCoordIndex_1()
		{
			int[] value = {2,1,0,-1,0,3,2,-1,5,4,1,-1,1,2,5,-1,6,4,5,-1,5,7,6,-1,8,11,10,-1,10,9,8,-1,30,29,12,-1,12,13,30,-1,13,14,30,-1,11,31,10,-1,9,10,16,-1,16,15,9,-1,15,16,3,-1,3,0,15,-1,12,6,7,-1,7,13,12,-1,10,31,16,-1,7,14,13,-1,3,16,17,-1,18,2,3,-1,3,17,18,-1,5,2,18,-1,18,19,5,-1,7,5,19,-1,31,17,16,-1,19,14,7,-1,7,5,7,-1,19,7,7,-1,18,14,19,-1,17,31,18,-1,4,21,20,-1,20,1,4,-1,1,20,22,-1,22,0,1,-1,0,22,23,-1,23,15,0,-1,15,23,24,-1,24,9,15,-1,9,24,25,-1,25,8,9,-1,29,32,26,-1,26,12,29,-1,12,26,27,-1,27,6,12,-1,6,27,21,-1,21,4,6,-1,21,28,20,-1,20,33,22,-1,22,33,23,-1,23,33,24,-1,24,33,25,-1,32,28,26,-1,26,28,27,-1,27,28,21,-1,34,37,36,-1,36,35,34,-1,38,34,35,-1,35,39,38,-1,41,40,38,-1,38,39,41,-1,43,42,40,-1,40,41,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,46,47,48,-1,48,49,46,-1,37,49,48,-1,48,36,37,-1,50,51,37,-1,37,34,50,-1,52,50,34,-1,34,38,52,-1,40,53,52,-1,52,38,40,-1,42,54,53,-1,53,40,42,-1,55,54,42,-1,42,44,55,-1,56,55,44,-1,44,46,56,-1,49,57,56,-1,56,46,49,-1,37,51,57,-1,57,49,37,-1,36,58,35,-1,35,58,39,-1,39,58,41,-1,41,58,43,-1,43,58,45,-1,45,58,47,-1,47,58,48,-1,48,58,36,-1,50,59,60,-1,60,51,50,-1,52,61,59,-1,59,50,52,-1,62,61,52,-1,52,53,62,-1,63,62,53,-1,53,54,63,-1,64,63,54,-1,54,55,64,-1,65,64,55,-1,55,56,65,-1,57,66,65,-1,65,56,57,-1,51,60,66,-1,66,57,51,-1,59,67,68,-1,68,60,59,-1,61,69,67,-1,67,59,61,-1,70,69,61,-1,61,62,70,-1,71,70,62,-1,62,63,71,-1,72,71,63,-1,63,64,72,-1,73,72,64,-1,64,65,73,-1,66,74,73,-1,73,65,66,-1,60,68,74,-1,74,66,60,-1,67,76,75,-1,75,68,67,-1,68,75,77,-1,77,74,68,-1,74,77,78,-1,78,73,74,-1,73,78,79,-1,79,72,73,-1,72,79,80,-1,80,71,72,-1,71,80,81,-1,81,70,71,-1,70,81,82,-1,82,69,70,-1,69,82,76,-1,76,67,69,-1,76,83,75,-1,75,83,77,-1,77,83,78,-1,78,83,79,-1,79,83,80,-1,80,83,81,-1,81,83,82,-1,82,83,76,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_coordIndex_1()
		{
			int[] value = {2,15,361,-1,361,1,2,-1,3,16,15,-1,15,2,3,-1,4,19,16,-1,16,3,4,-1,6,17,0,-1,0,5,6,-1,7,18,17,-1,17,6,7,-1,1,361,18,-1,18,7,1,-1,2,1,9,-1,9,8,2,-1,1,7,10,-1,10,9,1,-1,7,6,11,-1,11,10,7,-1,6,5,32,-1,32,11,6,-1,4,3,13,-1,13,12,4,-1,3,2,8,-1,8,13,3,-1,8,9,14,-1,9,10,14,-1,10,11,14,-1,11,32,14,-1,12,13,14,-1,13,8,14,-1,21,20,23,-1,23,22,21,-1,24,21,22,-1,22,375,24,-1,4,24,375,-1,375,19,4,-1,25,5,0,-1,0,26,25,-1,27,25,26,-1,26,376,27,-1,20,27,376,-1,376,23,20,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,27,20,-1,27,30,31,-1,31,25,27,-1,25,31,32,-1,32,5,25,-1,4,12,33,-1,33,24,4,-1,24,33,29,-1,29,21,24,-1,29,14,28,-1,28,14,30,-1,30,14,31,-1,31,14,32,-1,12,14,33,-1,33,14,29,-1,43,41,39,-1,39,40,43,-1,40,44,43,-1,112,113,98,-1,98,45,112,-1,38,99,98,-1,98,37,38,-1,36,49,48,-1,49,50,47,-1,47,48,49,-1,36,48,44,-1,43,44,48,-1,48,47,43,-1,36,63,49,-1,46,50,49,-1,49,63,46,-1,42,41,52,-1,50,54,52,-1,52,47,50,-1,41,43,47,-1,47,52,41,-1,51,75,55,-1,55,54,51,-1,46,51,54,-1,54,50,46,-1,65,64,67,-1,97,53,55,-1,57,100,105,-1,105,96,57,-1,58,57,96,-1,96,97,58,-1,56,71,59,-1,59,60,56,-1,60,66,74,-1,75,35,74,-1,41,42,99,-1,61,62,146,-1,146,147,61,-1,44,40,62,-1,62,61,44,-1,150,36,61,-1,61,147,150,-1,44,61,36,-1,34,46,63,-1,64,59,101,-1,101,152,64,-1,60,59,64,-1,64,65,60,-1,55,75,74,-1,74,66,55,-1,66,60,65,-1,65,58,66,-1,52,53,42,-1,54,55,53,-1,53,52,54,-1,39,69,68,-1,68,40,39,-1,38,70,69,-1,69,39,38,-1,37,94,70,-1,70,38,37,-1,37,95,94,-1,146,62,156,-1,62,40,68,-1,68,156,62,-1,64,152,102,-1,102,67,64,-1,67,57,58,-1,58,65,67,-1,71,56,72,-1,72,73,71,-1,56,74,72,-1,63,36,76,-1,34,63,76,-1,35,75,78,-1,78,77,35,-1,75,51,79,-1,79,78,75,-1,51,46,80,-1,80,79,51,-1,46,34,81,-1,81,80,46,-1,77,78,82,-1,78,79,82,-1,79,80,82,-1,80,81,82,-1,36,150,166,-1,166,83,36,-1,73,72,85,-1,85,84,73,-1,72,74,86,-1,86,85,72,-1,74,35,87,-1,87,86,74,-1,35,77,88,-1,88,87,35,-1,77,82,89,-1,89,88,77,-1,82,81,90,-1,90,89,82,-1,81,34,91,-1,91,90,81,-1,34,76,92,-1,92,91,34,-1,76,36,83,-1,83,92,76,-1,83,166,93,-1,84,85,93,-1,85,86,93,-1,86,87,93,-1,87,88,93,-1,88,89,93,-1,89,90,93,-1,90,91,93,-1,91,92,93,-1,92,83,93,-1,45,42,97,-1,97,96,45,-1,66,58,97,-1,97,55,66,-1,42,53,97,-1,99,42,45,-1,45,98,99,-1,38,39,41,-1,41,99,38,-1,74,56,60,-1,100,57,67,-1,67,102,100,-1,59,71,177,-1,177,101,59,-1,71,73,103,-1,103,177,71,-1,73,84,104,-1,104,103,73,-1,104,84,93,-1,45,96,105,-1,105,112,45,-1,95,37,98,-1,98,113,95,-1,108,107,106,-1,106,109,108,-1,107,108,110,-1,112,111,114,-1,114,113,112,-1,116,115,114,-1,114,117,116,-1,118,120,119,-1,119,120,121,-1,121,122,119,-1,118,110,120,-1,108,121,120,-1,120,110,108,-1,118,119,123,-1,124,123,119,-1,119,122,124,-1,125,126,109,-1,122,121,126,-1,126,127,122,-1,109,126,121,-1,121,108,109,-1,129,127,128,-1,128,130,129,-1,124,122,127,-1,127,129,124,-1,131,133,132,-1,134,128,135,-1,136,137,105,-1,105,100,136,-1,138,134,137,-1,137,136,138,-1,141,140,139,-1,139,142,141,-1,140,144,143,-1,130,144,145,-1,109,117,125,-1,148,147,146,-1,146,149,148,-1,110,148,149,-1,149,107,110,-1,150,147,148,-1,148,118,150,-1,110,118,148,-1,151,123,124,-1,132,152,101,-1,101,139,132,-1,140,131,132,-1,132,139,140,-1,128,143,144,-1,144,130,128,-1,143,138,131,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_2()
		{
			int[] value = {131,140,143,-1,126,125,135,-1,127,126,135,-1,135,128,127,-1,106,107,154,-1,154,153,106,-1,116,106,153,-1,153,155,116,-1,115,116,155,-1,155,94,115,-1,115,94,95,-1,146,156,149,-1,149,156,154,-1,154,107,149,-1,132,133,102,-1,102,152,132,-1,133,131,138,-1,138,136,133,-1,142,158,157,-1,157,141,142,-1,141,157,144,-1,123,159,118,-1,151,159,123,-1,145,161,160,-1,160,130,145,-1,130,160,162,-1,162,129,130,-1,129,162,163,-1,163,124,129,-1,124,163,164,-1,164,151,124,-1,161,165,160,-1,160,165,162,-1,162,165,163,-1,163,165,164,-1,118,167,166,-1,166,150,118,-1,158,169,168,-1,168,157,158,-1,157,168,170,-1,170,144,157,-1,144,170,171,-1,171,145,144,-1,145,171,172,-1,172,161,145,-1,161,172,173,-1,173,165,161,-1,165,173,174,-1,174,164,165,-1,164,174,175,-1,175,151,164,-1,151,175,176,-1,176,159,151,-1,159,176,167,-1,167,118,159,-1,167,93,166,-1,169,93,168,-1,168,93,170,-1,170,93,171,-1,171,93,172,-1,172,93,173,-1,173,93,174,-1,174,93,175,-1,175,93,176,-1,176,93,167,-1,111,137,134,-1,134,125,111,-1,143,128,134,-1,134,138,143,-1,125,134,135,-1,117,114,111,-1,111,125,117,-1,116,117,109,-1,109,106,116,-1,144,140,141,-1,100,102,133,-1,133,136,100,-1,139,101,177,-1,177,142,139,-1,142,177,103,-1,103,158,142,-1,158,103,104,-1,104,169,158,-1,104,93,169,-1,111,112,105,-1,105,137,111,-1,95,113,114,-1,114,115,95,-1,200,201,185,-1,185,231,200,-1,184,186,178,-1,178,183,184,-1,188,181,185,-1,185,201,188,-1,186,187,179,-1,179,178,186,-1,231,232,192,-1,192,200,231,-1,179,187,181,-1,181,188,179,-1,182,214,227,-1,227,180,182,-1,182,180,184,-1,184,183,182,-1,182,195,216,-1,216,214,182,-1,195,182,183,-1,183,196,195,-1,183,178,193,-1,193,196,183,-1,178,179,190,-1,190,189,178,-1,179,188,191,-1,191,190,179,-1,188,194,197,-1,197,191,188,-1,193,178,189,-1,189,198,193,-1,189,190,199,-1,190,191,199,-1,191,197,199,-1,198,189,199,-1,200,192,204,-1,204,202,200,-1,201,200,202,-1,202,203,201,-1,201,203,194,-1,194,188,201,-1,205,236,234,-1,234,206,205,-1,242,208,207,-1,207,239,242,-1,209,206,234,-1,234,237,209,-1,239,207,210,-1,210,241,239,-1,236,205,192,-1,192,232,236,-1,210,209,237,-1,237,241,210,-1,213,212,227,-1,227,214,213,-1,213,208,242,-1,242,212,213,-1,213,214,216,-1,216,215,213,-1,215,217,208,-1,208,213,215,-1,208,217,218,-1,218,207,208,-1,207,220,219,-1,219,210,207,-1,210,219,221,-1,221,209,210,-1,209,221,222,-1,222,211,209,-1,218,223,220,-1,220,207,218,-1,220,224,219,-1,219,224,221,-1,221,224,222,-1,223,224,220,-1,205,225,204,-1,204,192,205,-1,206,226,225,-1,225,205,206,-1,206,209,211,-1,211,226,206,-1,180,227,243,-1,243,230,180,-1,252,228,231,-1,231,185,252,-1,251,252,185,-1,185,181,251,-1,186,249,229,-1,229,187,186,-1,228,244,232,-1,232,231,228,-1,187,229,251,-1,251,181,187,-1,230,250,184,-1,184,180,230,-1,184,250,249,-1,249,186,184,-1,212,233,243,-1,243,227,212,-1,257,234,236,-1,236,235,257,-1,238,237,234,-1,234,257,238,-1,239,241,240,-1,240,255,239,-1,235,236,232,-1,232,244,235,-1,241,237,238,-1,238,240,241,-1,233,212,242,-1,242,253,233,-1,242,239,255,-1,255,253,242,-1,250,230,264,-1,264,248,250,-1,249,250,248,-1,248,245,249,-1,228,252,246,-1,246,247,228,-1,252,251,266,-1,266,246,252,-1,229,249,245,-1,245,265,229,-1,230,243,267,-1,267,264,230,-1,244,228,247,-1,247,260,244,-1,229,265,266,-1,266,251,229,-1,253,254,271,-1,271,233,253,-1,255,256,254,-1,254,253,255,-1,235,258,270,-1,270,257,235,-1,257,270,259,-1,259,238,257,-1,240,268,256,-1,256,255,240,-1,233,271,267,-1,267,243,233,-1,244,260,258,-1,258,235,244,-1,240,238,259,-1,259,268,240,-1,277,279,266,-1,266,265,277,-1,279,263,246,-1,246,266,279,-1,264,261,278,-1,278,248,264,-1,248,278,262,-1,262,245,248,-1,263,276,247,-1,247,246,263,-1,262,277,265,-1,265,245,262,-1,287,261,264,-1,264,267,287,-1,276,280,260,-1,260,247,276,-1,286,268,259,-1,259,285,286,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_3()
		{
			int[] value = {285,259,270,-1,270,269,285,-1,271,254,281,-1,281,272,271,-1,254,256,273,-1,273,281,254,-1,269,270,258,-1,258,284,269,-1,273,256,268,-1,268,286,273,-1,287,267,271,-1,271,272,287,-1,284,258,260,-1,260,280,284,-1,274,275,278,-1,278,261,274,-1,275,313,262,-1,262,278,275,-1,311,314,276,-1,276,263,311,-1,263,279,315,-1,315,311,263,-1,313,312,277,-1,277,262,313,-1,288,274,261,-1,261,287,288,-1,317,280,276,-1,276,314,317,-1,279,277,312,-1,312,315,279,-1,282,272,281,-1,281,283,282,-1,283,281,273,-1,273,346,283,-1,345,269,284,-1,284,344,345,-1,269,345,348,-1,348,285,269,-1,346,273,286,-1,286,347,346,-1,288,287,272,-1,272,282,288,-1,317,344,284,-1,284,280,317,-1,285,348,347,-1,347,286,285,-1,318,291,274,-1,274,288,318,-1,320,293,291,-1,291,318,320,-1,295,296,297,-1,297,298,295,-1,294,295,298,-1,298,292,294,-1,289,290,300,-1,300,299,289,-1,302,301,300,-1,300,290,302,-1,316,289,299,-1,299,334,316,-1,302,297,296,-1,296,301,302,-1,293,320,335,-1,335,304,293,-1,334,299,306,-1,306,305,334,-1,299,300,307,-1,307,306,299,-1,300,301,308,-1,308,307,300,-1,301,296,309,-1,309,308,301,-1,296,295,310,-1,310,309,296,-1,295,294,303,-1,303,310,295,-1,303,304,343,-1,304,335,343,-1,305,306,343,-1,306,307,343,-1,307,308,343,-1,308,309,343,-1,309,310,343,-1,310,303,343,-1,317,314,289,-1,289,316,317,-1,291,293,294,-1,294,292,291,-1,293,304,303,-1,303,294,293,-1,289,314,311,-1,311,290,289,-1,274,291,292,-1,292,275,274,-1,292,298,313,-1,313,275,292,-1,312,313,298,-1,298,297,312,-1,297,302,315,-1,315,312,297,-1,315,302,290,-1,290,311,315,-1,318,288,282,-1,282,319,318,-1,320,318,319,-1,319,321,320,-1,324,323,322,-1,322,325,324,-1,327,326,323,-1,323,324,327,-1,328,331,330,-1,330,329,328,-1,332,329,330,-1,330,333,332,-1,316,334,331,-1,331,328,316,-1,332,333,325,-1,325,322,332,-1,321,336,335,-1,335,320,321,-1,334,305,337,-1,337,331,334,-1,331,337,338,-1,338,330,331,-1,330,338,339,-1,339,333,330,-1,333,339,340,-1,340,325,333,-1,325,340,341,-1,341,324,325,-1,324,341,342,-1,342,327,324,-1,342,343,336,-1,336,343,335,-1,305,343,337,-1,337,343,338,-1,338,343,339,-1,339,343,340,-1,340,343,341,-1,341,343,342,-1,317,316,328,-1,328,344,317,-1,319,326,327,-1,327,321,319,-1,321,327,342,-1,342,336,321,-1,328,329,345,-1,345,344,328,-1,282,283,326,-1,326,319,282,-1,326,283,346,-1,346,323,326,-1,347,322,323,-1,323,346,347,-1,322,347,348,-1,348,332,322,-1,348,345,329,-1,329,332,348,-1,349,350,355,-1,355,354,349,-1,350,351,356,-1,356,355,350,-1,351,359,368,-1,368,356,351,-1,369,352,357,-1,357,360,369,-1,352,353,358,-1,358,357,352,-1,353,349,354,-1,354,358,353,-1,354,355,374,-1,355,356,374,-1,356,368,374,-1,360,357,374,-1,357,358,374,-1,358,354,374,-1,15,350,349,-1,349,361,15,-1,16,351,350,-1,350,15,16,-1,19,359,351,-1,351,16,19,-1,17,352,369,-1,369,0,17,-1,18,353,352,-1,352,17,18,-1,361,349,353,-1,353,18,361,-1,362,365,364,-1,364,363,362,-1,363,364,367,-1,367,366,363,-1,366,367,368,-1,368,359,366,-1,369,360,371,-1,371,370,369,-1,370,371,373,-1,373,372,370,-1,372,373,365,-1,365,362,372,-1,365,374,364,-1,364,374,367,-1,367,374,368,-1,360,374,371,-1,371,374,373,-1,373,374,365,-1,22,23,362,-1,362,363,22,-1,375,22,363,-1,363,366,375,-1,19,375,366,-1,366,359,19,-1,26,0,369,-1,369,370,26,-1,376,26,370,-1,370,372,376,-1,23,376,372,-1,372,362,23,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,4,5,2,-1,2,1,4,-1,6,7,5,-1,5,4,6,-1,9,10,11,-1,11,8,9,-1,12,13,10,-1,10,9,12,-1,0,3,13,-1,13,12,0,-1,1,0,14,-1,14,15,1,-1,0,12,16,-1,16,14,0,-1,12,9,17,-1,17,16,12,-1,9,8,18,-1,18,17,9,-1,6,4,19,-1,19,20,6,-1,4,1,15,-1,15,19,4,-1,15,14,21,-1,14,16,21,-1,16,17,21,-1,17,18,21,-1,20,19,21,-1,19,15,21,-1,25,22,23,-1,23,24,25,-1,27,25,24,-1,24,26,27,-1,6,27,26,-1,26,7,6,-1,29,8,11,-1,11,28,29,-1,31,29,28,-1,28,30,31,-1,22,31,30,-1,30,23,22,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,31,22,-1,31,34,35,-1,35,29,31,-1,29,35,18,-1,18,8,29,-1,6,20,36,-1,36,27,6,-1,27,36,32,-1,32,25,27,-1,32,21,33,-1,33,21,34,-1,34,21,35,-1,35,21,18,-1,20,21,36,-1,36,21,32,-1,42,43,37,-1,37,38,42,-1,38,44,42,-1,132,142,40,-1,40,39,132,-1,71,72,73,-1,73,70,71,-1,41,45,46,-1,45,48,47,-1,47,46,45,-1,41,46,49,-1,50,49,46,-1,46,47,50,-1,41,51,45,-1,52,48,45,-1,45,51,52,-1,53,54,55,-1,48,56,55,-1,55,47,48,-1,54,50,47,-1,47,55,54,-1,58,59,57,-1,57,56,58,-1,52,58,56,-1,56,48,52,-1,62,63,61,-1,64,65,57,-1,60,133,141,-1,141,66,60,-1,67,60,66,-1,66,64,67,-1,76,69,68,-1,68,75,76,-1,75,77,78,-1,59,79,78,-1,54,53,88,-1,124,125,74,-1,74,123,124,-1,44,38,125,-1,125,124,44,-1,129,130,124,-1,124,123,129,-1,44,124,130,-1,89,52,51,-1,63,68,134,-1,134,136,63,-1,75,68,63,-1,63,62,75,-1,57,59,78,-1,78,77,57,-1,77,75,62,-1,62,67,77,-1,55,65,53,-1,56,57,65,-1,65,55,56,-1,81,82,83,-1,83,80,81,-1,84,85,82,-1,82,81,84,-1,86,87,85,-1,85,84,86,-1,86,90,87,-1,91,92,93,-1,92,80,83,-1,83,93,92,-1,63,136,137,-1,137,61,63,-1,61,60,67,-1,67,62,61,-1,69,76,95,-1,95,94,69,-1,76,78,95,-1,51,41,96,-1,89,51,96,-1,79,59,120,-1,120,121,79,-1,59,58,122,-1,122,120,59,-1,58,52,126,-1,126,122,58,-1,52,89,127,-1,127,126,52,-1,121,120,128,-1,120,122,128,-1,122,126,128,-1,126,127,128,-1,97,98,99,-1,99,100,97,-1,101,103,104,-1,104,102,101,-1,103,105,106,-1,106,104,103,-1,105,107,108,-1,108,106,105,-1,107,109,110,-1,110,108,107,-1,109,111,112,-1,112,110,109,-1,111,113,114,-1,114,112,111,-1,113,115,116,-1,116,114,113,-1,115,117,118,-1,118,116,115,-1,117,97,100,-1,100,118,117,-1,100,99,119,-1,102,104,119,-1,104,106,119,-1,106,108,119,-1,108,110,119,-1,110,112,119,-1,112,114,119,-1,114,116,119,-1,116,118,119,-1,118,100,119,-1,39,53,64,-1,64,66,39,-1,77,67,64,-1,64,57,77,-1,53,65,64,-1,88,53,39,-1,39,40,88,-1,71,37,43,-1,43,72,71,-1,78,76,75,-1,133,60,61,-1,61,137,133,-1,68,69,135,-1,135,134,68,-1,69,94,139,-1,139,135,69,-1,101,102,140,-1,140,138,101,-1,140,102,119,-1,39,66,141,-1,141,132,39,-1,131,70,73,-1,73,143,131,-1,146,145,144,-1,144,147,146,-1,145,146,148,-1,150,149,152,-1,152,151,150,-1,154,153,156,-1,156,155,154,-1,157,159,158,-1,158,159,160,-1,160,161,158,-1,157,162,159,-1,163,160,159,-1,159,162,163,-1,157,158,164,-1,165,164,158,-1,158,161,165,-1,166,168,167,-1,161,160,168,-1,168,169,161,-1,167,168,160,-1,160,163,167,-1,171,169,170,-1,170,172,171,-1,165,161,169,-1,169,171,165,-1,173,175,174,-1,176,170,177,-1,178,181,180,-1,180,179,178,-1,182,176,181,-1,181,178,182,-1,185,184,183,-1,183,186,185,-1,184,188,187,-1,172,188,189,-1,167,190,166,-1,193,192,191,-1,191,194,193,-1,148,193,194,-1,194,145,148,-1,195,192,193,-1,193,196,195,-1,148,196,193,-1,197,164,165,-1,174,199,198,-1,198,183,174,-1,184,173,174,-1,174,183,184,-1,170,187,188,-1,188,172,170,-1,187,182,173,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_2()
		{
			int[] value = {173,184,187,-1,168,166,177,-1,169,168,177,-1,177,170,169,-1,201,200,203,-1,203,202,201,-1,204,201,202,-1,202,205,204,-1,206,204,205,-1,205,207,206,-1,206,207,208,-1,209,211,210,-1,210,211,203,-1,203,200,210,-1,174,175,212,-1,212,199,174,-1,175,173,182,-1,182,178,175,-1,186,214,213,-1,213,185,186,-1,185,213,188,-1,164,215,157,-1,197,215,164,-1,189,217,216,-1,216,172,189,-1,172,216,218,-1,218,171,172,-1,171,218,219,-1,219,165,171,-1,165,219,220,-1,220,197,165,-1,217,221,216,-1,216,221,218,-1,218,221,219,-1,219,221,220,-1,222,225,224,-1,224,223,222,-1,226,229,228,-1,228,227,226,-1,227,228,231,-1,231,230,227,-1,230,231,233,-1,233,232,230,-1,232,233,235,-1,235,234,232,-1,234,235,237,-1,237,236,234,-1,236,237,239,-1,239,238,236,-1,238,239,241,-1,241,240,238,-1,240,241,243,-1,243,242,240,-1,242,243,225,-1,225,222,242,-1,225,244,224,-1,229,244,228,-1,228,244,231,-1,231,244,233,-1,233,244,235,-1,235,244,237,-1,237,244,239,-1,239,244,241,-1,241,244,243,-1,243,244,225,-1,149,181,176,-1,176,166,149,-1,187,170,176,-1,176,182,187,-1,166,176,177,-1,190,152,149,-1,149,166,190,-1,154,155,147,-1,147,144,154,-1,188,184,185,-1,179,212,175,-1,175,178,179,-1,183,198,245,-1,245,186,183,-1,186,245,246,-1,246,214,186,-1,226,247,248,-1,248,229,226,-1,248,244,229,-1,149,150,180,-1,180,181,149,-1,249,250,156,-1,156,153,249,-1,251,252,253,-1,253,254,251,-1,257,258,255,-1,255,256,257,-1,259,260,253,-1,253,252,259,-1,258,261,262,-1,262,255,258,-1,254,263,264,-1,264,251,254,-1,310,309,260,-1,260,259,310,-1,267,268,269,-1,269,266,267,-1,267,266,257,-1,257,256,267,-1,267,270,271,-1,271,268,267,-1,270,267,256,-1,256,272,270,-1,256,255,273,-1,273,272,256,-1,255,262,274,-1,274,275,255,-1,310,259,276,-1,276,311,310,-1,259,265,277,-1,277,276,259,-1,273,255,275,-1,275,278,273,-1,275,274,279,-1,311,276,312,-1,276,277,312,-1,278,275,279,-1,251,264,280,-1,280,281,251,-1,252,251,281,-1,281,282,252,-1,252,282,265,-1,265,259,252,-1,283,284,285,-1,285,286,283,-1,289,290,287,-1,287,288,289,-1,292,286,285,-1,285,291,292,-1,288,287,293,-1,293,294,288,-1,284,283,264,-1,264,263,284,-1,313,292,291,-1,291,314,313,-1,297,296,269,-1,269,268,297,-1,297,290,289,-1,289,296,297,-1,297,268,271,-1,271,298,297,-1,298,299,290,-1,290,297,298,-1,290,299,300,-1,300,287,290,-1,287,301,302,-1,302,293,287,-1,313,315,303,-1,303,292,313,-1,292,303,304,-1,304,295,292,-1,300,305,301,-1,301,287,300,-1,301,306,302,-1,315,316,303,-1,303,316,304,-1,305,306,301,-1,283,307,280,-1,280,264,283,-1,286,308,307,-1,307,283,286,-1,286,292,295,-1,295,308,286,-1,318,319,320,-1,320,317,318,-1,322,323,324,-1,324,321,322,-1,326,322,321,-1,321,325,326,-1,327,328,329,-1,329,330,327,-1,323,331,332,-1,332,324,323,-1,350,349,326,-1,326,325,350,-1,317,333,334,-1,334,318,317,-1,334,333,328,-1,328,327,334,-1,336,335,320,-1,320,319,336,-1,340,337,338,-1,338,339,340,-1,342,341,337,-1,337,340,342,-1,343,344,345,-1,345,346,343,-1,339,338,332,-1,332,331,339,-1,351,341,342,-1,342,352,351,-1,335,336,347,-1,347,348,335,-1,347,343,346,-1,346,348,347,-1,353,354,355,-1,355,356,353,-1,357,353,356,-1,356,358,357,-1,359,360,361,-1,361,362,359,-1,360,363,364,-1,364,361,360,-1,365,357,358,-1,358,366,365,-1,354,367,368,-1,368,355,354,-1,369,359,362,-1,362,370,369,-1,385,386,364,-1,364,363,385,-1,371,372,373,-1,373,374,371,-1,375,376,372,-1,372,371,375,-1,377,378,379,-1,379,380,377,-1,380,379,381,-1,381,382,380,-1,383,384,376,-1,376,375,383,-1,374,373,368,-1,368,367,374,-1,369,370,378,-1,378,377,369,-1,387,382,381,-1,381,388,387,-1,421,390,391,-1,391,422,421,-1,390,393,394,-1,394,391,390,-1,395,396,397,-1,397,398,395,-1,398,397,399,-1,399,400,398,-1,393,401,402,-1,402,394,393,-1,399,389,392,-1,392,400,399,-1,404,396,395,-1,395,403,404,-1,401,405,406,-1,406,402,401,-1,423,424,409,-1,409,410,423,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_3()
		{
			int[] value = {410,409,411,-1,411,412,410,-1,413,414,415,-1,415,416,413,-1,414,417,418,-1,418,415,414,-1,412,411,419,-1,419,420,412,-1,418,417,408,-1,408,407,418,-1,404,403,413,-1,413,416,404,-1,420,419,406,-1,406,405,420,-1,427,428,425,-1,425,426,427,-1,428,430,429,-1,429,425,428,-1,433,434,431,-1,431,432,433,-1,432,435,436,-1,436,433,432,-1,430,438,437,-1,437,429,430,-1,440,427,426,-1,426,439,440,-1,441,442,431,-1,431,434,441,-1,435,457,458,-1,458,436,435,-1,445,446,443,-1,443,444,445,-1,444,443,447,-1,447,448,444,-1,451,452,449,-1,449,450,451,-1,452,451,453,-1,453,454,452,-1,448,447,455,-1,455,456,448,-1,440,439,446,-1,446,445,440,-1,441,450,449,-1,449,442,441,-1,454,453,460,-1,460,459,454,-1,463,464,461,-1,461,462,463,-1,465,466,464,-1,464,463,465,-1,469,470,467,-1,467,468,469,-1,472,469,468,-1,468,471,472,-1,473,474,475,-1,475,476,473,-1,477,478,475,-1,475,474,477,-1,479,473,476,-1,476,480,479,-1,477,526,527,-1,527,478,477,-1,466,465,481,-1,481,482,466,-1,480,476,483,-1,483,484,480,-1,476,475,485,-1,485,483,476,-1,475,478,486,-1,486,485,475,-1,478,527,528,-1,528,486,478,-1,470,469,488,-1,488,487,470,-1,469,472,489,-1,489,488,469,-1,489,482,490,-1,482,481,490,-1,484,483,529,-1,483,485,529,-1,485,486,529,-1,486,528,529,-1,487,488,490,-1,488,489,490,-1,491,492,473,-1,473,479,491,-1,464,466,472,-1,472,471,464,-1,466,482,489,-1,489,472,466,-1,473,492,493,-1,493,474,473,-1,461,464,471,-1,471,494,461,-1,471,468,495,-1,495,494,471,-1,496,495,468,-1,468,467,496,-1,526,477,497,-1,497,530,526,-1,497,477,474,-1,474,493,497,-1,463,462,498,-1,498,499,463,-1,465,463,499,-1,499,500,465,-1,503,504,501,-1,501,502,503,-1,505,506,504,-1,504,503,505,-1,507,508,509,-1,509,510,507,-1,512,510,509,-1,509,511,512,-1,479,480,508,-1,508,507,479,-1,512,511,532,-1,532,531,512,-1,500,513,481,-1,481,465,500,-1,480,484,514,-1,514,508,480,-1,508,514,515,-1,515,509,508,-1,509,515,516,-1,516,511,509,-1,511,516,533,-1,533,532,511,-1,502,517,518,-1,518,503,502,-1,503,518,519,-1,519,505,503,-1,519,490,513,-1,513,490,481,-1,484,529,514,-1,514,529,515,-1,515,529,516,-1,516,529,533,-1,517,490,518,-1,518,490,519,-1,491,479,507,-1,507,520,491,-1,499,506,505,-1,505,500,499,-1,500,505,519,-1,519,513,500,-1,507,510,521,-1,521,520,507,-1,498,522,506,-1,506,499,498,-1,506,522,523,-1,523,504,506,-1,524,501,504,-1,504,523,524,-1,531,534,525,-1,525,512,531,-1,525,521,510,-1,510,512,525,-1,535,536,537,-1,537,538,535,-1,536,539,540,-1,540,537,536,-1,539,541,542,-1,542,540,539,-1,543,544,545,-1,545,546,543,-1,544,547,548,-1,548,545,544,-1,547,535,538,-1,538,548,547,-1,538,537,549,-1,537,540,549,-1,540,542,549,-1,546,545,549,-1,545,548,549,-1,548,538,549,-1,550,536,535,-1,535,551,550,-1,552,539,536,-1,536,550,552,-1,553,541,539,-1,539,552,553,-1,554,544,543,-1,543,555,554,-1,556,547,544,-1,544,554,556,-1,551,535,547,-1,547,556,551,-1,557,558,559,-1,559,560,557,-1,560,559,561,-1,561,562,560,-1,562,561,542,-1,542,541,562,-1,543,546,563,-1,563,564,543,-1,564,563,565,-1,565,566,564,-1,566,565,558,-1,558,557,566,-1,558,549,559,-1,559,549,561,-1,561,549,542,-1,546,549,563,-1,563,549,565,-1,565,549,558,-1,567,568,557,-1,557,560,567,-1,569,567,560,-1,560,562,569,-1,553,569,562,-1,562,541,553,-1,570,555,543,-1,543,564,570,-1,571,570,564,-1,564,566,571,-1,568,571,566,-1,566,557,568,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_11_190_point_1()
		{
			double[] value = {0.0000,17.7700,1.6390,2.0180,16.4600,0.0675,1.7480,16.6300,-0.7860,1.0090,16.7400,-1.3870,0.0000,16.7500,-1.6070,0.0000,15.9400,1.6530,1.1050,16.0700,1.4010,1.7480,16.2500,0.8554,1.2490,15.8300,-0.5656,1.4470,15.7500,0.0675,1.2490,15.6300,0.6350,0.7846,15.5100,1.0130,0.0000,15.8600,-1.1550,0.7163,15.8700,-0.9986,0.0000,15.4500,0.0676,1.6470,18.0800,-0.6009,0.9518,18.1600,-1.1560,0.9920,17.8000,1.4240,1.6420,17.8700,0.9034,0.0000,18.1900,-1.3560,-2.0180,16.4600,0.0676,-1.7480,16.6300,-0.7860,-1.6470,18.0800,-0.6009,-1.9000,17.9700,0.1855,-1.0090,16.7400,-1.3870,-1.1050,16.0700,1.4010,-0.9920,17.8000,1.4240,-1.7480,16.2500,0.8554,-1.4470,15.7500,0.0676,-1.2490,15.8300,-0.5655,-1.2490,15.6300,0.6350,-0.7846,15.5100,1.0130,0.0000,15.4100,1.2010,-0.7163,15.8700,-0.9985,5.3240,14.6200,2.0510,5.2500,14.6200,-1.9830,1.4370,14.6200,2.6460,0.8468,17.2800,-1.6040,2.0520,17.2200,-1.0750,2.5970,16.9800,0.1593,2.1620,16.3600,1.3210,3.6040,17.0400,0.1289,3.3710,17.3700,-2.1460,3.2860,16.1900,1.5010,2.8150,15.6600,2.2230,1.1650,17.2800,-3.0200,5.2590,16.0100,1.8630,3.3100,16.6700,1.9830,2.5940,15.8600,2.5880,3.4550,14.9700,2.7340,4.7070,16.6400,2.0470,5.7350,16.7600,0.0794,3.7540,17.5200,0.1093,4.2180,17.2000,-2.4330,5.3410,17.4500,0.0763,5.3260,16.7800,-2.3230,4.2090,13.4000,-2.5780,1.4360,15.1600,-4.5320,3.7910,15.1100,-4.0660,1.8600,12.1700,-3.6000,4.1450,13.3900,-3.3940,1.3890,15.2400,2.3450,1.1150,15.9300,1.8520,3.5660,14.9100,2.4830,1.5480,12.5500,-4.2420,3.2320,13.5200,-4.0960,4.9520,14.9000,-3.2330,1.4660,13.3800,-4.5060,0.9936,17.0000,0.6225,1.1000,17.2000,0.1681,0.9203,17.3200,-0.3587,1.7700,12.5400,-2.9540,4.2410,14.6300,-2.5780,1.7700,14.6500,-2.9540,4.9410,14.6200,-2.3160,5.4490,16.1800,-1.7740,3.5880,14.6200,2.5130,5.8620,14.6200,-1.0930,6.0240,15.5500,-1.0260,6.2920,15.8800,0.0357,5.8260,15.4400,1.1080,5.9220,14.6200,1.2170,6.8870,14.6200,0.0730,1.4110,14.2200,2.0000,1.6970,14.2000,-2.3110,4.0730,14.1800,-1.9490,4.5680,14.1700,-1.7670,4.7430,14.1800,-1.5770,5.2590,14.1800,-0.8269,5.4730,14.1900,0.0882,5.3120,14.2000,0.9571,4.9340,14.2200,1.4850,3.4840,14.2200,1.8710,0.0000,13.5500,-0.1494,0.0000,17.3700,-0.5611,0.0000,17.2900,-1.6980,1.4020,16.6400,-3.9610,4.0410,16.7100,-3.1140,1.0060,16.8300,-2.6250,2.7120,16.8700,-1.9230};
			return value;
		}
		private double[] getCoordinate_11_190_point_2()
		{
			double[] value = {0.0000,15.1700,-4.6690,0.0000,11.9500,-3.7150,0.0000,13.2900,-4.6060,0.0000,14.6300,-3.0840,0.0000,14.1800,-2.4350,0.0000,16.6300,-4.0860,-2.5970,16.9800,0.1593,-2.1620,16.3600,1.3210,-3.2860,16.1900,1.5010,-3.6040,17.0400,0.1289,-2.8150,15.6600,2.2230,-1.1650,17.2800,-3.0200,0.0000,17.2600,-3.1310,0.0000,16.8200,-2.7270,-1.0060,16.8300,-2.6250,-0.8468,17.2800,-1.6040,-2.0520,17.2200,-1.0750,-2.7120,16.8700,-1.9230,-1.4370,14.6200,2.6460,-3.4550,14.9700,2.7340,-2.5940,15.8600,2.5880,-3.3100,16.6700,1.9830,-4.7070,16.6400,2.0470,-3.5660,14.9100,2.4830,-5.2590,16.0100,1.8630,-3.3710,17.3700,-2.1460,-3.7540,17.5200,0.1093,-5.3410,17.4500,0.0763,-5.3260,16.7800,-2.3230,-5.7350,16.7600,0.0794,-5.4490,16.1800,-1.7740,-3.2320,13.5200,-4.0960,-1.5480,12.5500,-4.2420,-1.4660,13.3800,-4.5060,-4.0410,16.7100,-3.1140,-4.2180,17.2000,-2.4330,-1.4360,15.1600,-4.5320,-1.4020,16.6400,-3.9610,-3.7910,15.1100,-4.0660,-1.8600,12.1700,-3.6000,-4.1450,13.3900,-3.3940,-4.2090,13.4000,-2.5780,-1.7700,12.5400,-2.9540,-4.9520,14.9000,-3.2330,-4.9410,14.6200,-2.3160,-5.2500,14.6200,-1.9830,0.0000,15.8200,2.0320,0.0000,15.1600,2.4150,-1.3890,15.2400,2.3450,-1.1150,15.9300,1.8520,0.0000,14.6200,2.6730,-5.3240,14.6200,2.0510,0.0000,12.3700,-4.3380,-1.1000,17.2000,0.1681,-0.9936,17.0000,0.6225,-0.9203,17.3200,-0.3587,0.0000,16.8600,0.8664,-4.2410,14.6300,-2.5780,-1.7700,14.6500,-2.9540,-3.5880,14.6200,2.5130,-6.0240,15.5500,-1.0260,-5.8620,14.6200,-1.0930,-6.2920,15.8800,0.0357,-5.8260,15.4400,1.1080,-5.9220,14.6200,1.2170,-6.8870,14.6200,0.0730,0.0000,14.2200,2.0260,-1.4110,14.2200,2.0000,-4.0730,14.1800,-1.9490,-1.6970,14.2000,-2.3110,-4.5680,14.1700,-1.7670,-4.7430,14.1800,-1.5770,-5.2590,14.1800,-0.8269,-5.4730,14.1900,0.0882,-5.3120,14.2000,0.9571,-4.9340,14.2200,1.4850,-3.4840,14.2200,1.8710,0.0000,12.2500,-3.0840,5.3840,13.0100,1.4370,5.4610,12.6700,0.0948,1.5960,12.1200,2.9560,5.1310,12.1200,-1.3750,1.5170,12.8800,2.8400,3.6750,12.9400,2.6360,3.8330,12.1200,2.7080,4.0380,12.1200,-2.5120,5.3250,12.1200,1.5150,5.4120,12.1200,0.1193,5.2370,12.9900,-1.2600,6.0150,13.3700,1.0490,6.1050,13.1700,0.1416,5.8740,13.3800,-0.7272,0.0029,12.8600,-3.0840,5.3230,14.6200,2.0550,5.2520,14.6200,-1.9780,1.4350,14.6200,2.6480,3.5860,14.6200,2.5160,5.8630,14.6200,-1.0880,5.9210,14.6200,1.2220,6.8870,14.6200,0.0781};
			return value;
		}
		private double[] getCoordinate_11_190_point_3()
		{
			double[] value = {1.7720,12.9000,-2.9530,4.2430,12.9600,-2.5750,1.7720,14.6100,-2.9530,4.2430,14.6100,-2.5750,0.0028,14.6200,-3.0840,-1.7670,12.9000,-2.9560,-4.2380,12.9600,-2.5820,-5.3860,13.0100,1.4280,-3.6790,12.9400,2.6290,-5.2340,12.9900,-1.2690,-5.4610,12.6700,0.0853,-5.2480,14.6200,-1.9870,-1.5990,12.1200,2.9550,-1.5220,12.8800,2.8370,-0.0022,12.8200,2.9070,-1.4390,14.6200,2.6450,-0.0020,14.6200,2.6730,-3.5900,14.6200,2.5100,-5.3260,14.6200,2.0460,-6.1040,13.1700,0.1312,-6.0160,13.3700,1.0390,-5.8730,13.3800,-0.7372,-5.8610,14.6200,-1.0980,-5.9230,14.6200,1.2120,-6.8870,14.6200,0.0680,-1.7670,14.6100,-2.9560,-4.2380,14.6100,-2.5820,-0.0012,12.1200,3.0230,1.6460,9.8900,-3.1540,5.4510,9.8900,0.1172,1.7100,9.8900,3.1340,1.7520,12.1200,-2.9690,0.0014,12.1200,-3.0830,-1.7100,9.8900,3.1340,-4.0360,12.1200,-2.5150,-1.6460,9.8900,-3.1540,-1.7490,12.1200,-2.9710,-5.1290,12.1200,-1.3800,-5.0280,9.8900,-1.4570,-5.3260,12.1200,1.5110,-5.4510,9.8900,0.1172,-5.4120,12.1200,0.1136,-3.8360,12.1200,2.7040,0.0000,9.8900,3.2130,0.0000,9.8900,-3.1690,5.4880,7.1900,2.0200,3.5740,7.1900,-2.7280,1.6470,7.1900,-3.3330,4.0740,7.1900,3.2540,5.3020,9.8900,1.7660,3.9640,9.8900,2.9820,5.0280,9.8900,-1.4570,3.6720,9.8900,-2.6360,-3.9640,9.8900,2.9820,-4.0740,7.1900,3.2540,-5.3020,9.8900,1.7660,-5.4880,7.1900,2.0200,-3.6720,9.8900,-2.6360,-1.6470,7.1900,-3.3330,-4.9580,7.1900,-1.5830,0.0000,7.1900,-3.3520,1.9450,4.4460,3.6440,5.6180,4.4460,2.2960,3.5630,4.4460,-2.9670,1.8340,7.1900,3.4110,5.5140,7.1900,0.1172,4.9580,7.1900,-1.5830,0.0000,7.1900,3.5110,-5.5140,7.1900,0.1172,-3.5630,4.4460,-2.9670,-3.5740,7.1900,-2.7280,-1.8340,7.1900,3.4110,-1.9450,4.4460,3.6440,-5.6180,4.4460,2.2960,1.9720,1.7210,3.7910,4.2260,1.7210,3.5580,1.6540,4.4460,-3.5150,5.6600,4.4460,0.1172,4.1680,4.4460,3.4560,5.0170,4.4460,-1.7810,0.0000,4.4460,-3.5580,-4.1680,4.4460,3.4560,-1.9720,1.7210,3.7910,-4.2260,1.7210,3.5580,-1.6540,4.4460,-3.5150,-5.0170,4.4460,-1.7810,-5.6600,4.4460,0.1172,0.0000,4.4460,3.7370,0.0000,1.7210,3.9250,1.7780,0.2744,-3.5250,3.6340,0.2746,-3.0070,1.9740,0.2723,3.7590,4.0990,0.2724,3.4550,1.9890,-0.3951,3.5660,3.9760,-0.3955,3.2360,5.3600,-0.3963,2.1100,5.5310,-0.3968,0.1194,5.8700,0.2723,0.1172,5.7070,0.2724,2.3060,1.7410,-0.3954,-3.2480};
			return value;
		}
		private double[] getCoordinate_11_190_point_4()
		{
			double[] value = {3.4610,-0.3957,-2.6470,4.7930,-0.3960,-1.6280,5.1000,0.2736,-1.9650,3.0660,-1.2190,2.4630,1.6140,-1.2190,2.6700,0.0000,-1.2140,-2.3870,1.5230,-1.2140,-2.2900,2.8780,-1.2150,-1.8250,3.7370,-1.2160,-0.9602,4.2240,-1.2170,0.1172,4.2290,-1.2180,1.5950,3.6700,1.7210,-3.1620,5.9140,1.7210,0.1172,5.7610,1.7210,2.4310,1.6990,1.7210,-3.7230,5.1740,1.7210,-2.0020,0.0000,0.2744,-3.5450,0.0000,1.7210,-3.7790,0.0000,0.2724,3.8900,-1.9740,0.2723,3.7590,0.0000,-0.3950,3.6820,-1.9890,-0.3951,3.5660,-5.8700,0.2723,0.1172,-5.7070,0.2724,2.3060,-5.3600,-0.3964,2.1100,-5.5310,-0.3968,0.1194,-4.0990,0.2725,3.4550,-3.9760,-0.3955,3.2360,-1.7780,0.2744,-3.5250,-3.6340,0.2746,-3.0070,-3.4610,-0.3957,-2.6470,-1.7410,-0.3954,-3.2480,-5.1000,0.2736,-1.9650,-4.7930,-0.3960,-1.6280,0.0000,-0.3954,-3.2790,0.0000,-1.2190,2.7650,-1.6140,-1.2190,2.6700,-1.5230,-1.2140,-2.2900,-2.8780,-1.2150,-1.8250,-3.7370,-1.2160,-0.9602,-4.2240,-1.2170,0.1172,-4.2290,-1.2180,1.5950,-3.0660,-1.2190,2.4630,0.0000,-1.8970,0.1172,-1.6990,1.7210,-3.7230,-3.6700,1.7210,-3.1620,-5.7610,1.7210,2.4310,-5.9140,1.7210,0.1172,-5.1740,1.7210,-2.0020,1.7780,19.5400,0.3077,1.5400,19.6400,-0.4027,0.8891,19.7400,-0.9203,0.8891,19.3700,1.4450,1.5400,19.4400,0.9501,1.2600,20.0700,0.3570,1.0910,20.1500,-0.1653,0.6300,20.1500,-0.4693,0.6300,19.9600,1.1200,1.0910,20.0000,0.8813,0.0000,19.7600,-1.1020,0.0000,19.9500,1.2460,1.9000,17.9700,0.1855,-1.7780,19.5400,0.3077,-1.5400,19.6400,-0.4027,-1.0910,20.1500,-0.1653,-1.2600,20.0700,0.3570,-0.8891,19.7400,-0.9203,-0.6300,20.1500,-0.4693,0.0000,20.1500,-0.5703,0.0000,19.3400,1.6260,-0.8891,19.3700,1.4450,-0.6300,19.9600,1.1200,-1.5400,19.4400,0.9501,-1.0910,20.0000,0.8813,0.0000,20.0700,0.3568,-0.9518,18.1600,-1.1560,-1.6420,17.8700,0.9034};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_11_191_point_1()
		{
			double[] value = {0.2943,0.6873,0.2895,0.6900,0.2878,0.7132,0.2922,0.7115,0.2766,0.6918,0.2756,0.7145,0.2590,0.6920,0.2590,0.7149,0.2590,0.6790,0.2783,0.6811,0.2763,0.7087,0.2590,0.7082,0.2895,0.6840,0.2877,0.7098,0.2843,0.6760,0.2808,0.6773,0.2808,0.6741,0.2727,0.6722,0.2590,0.6705,0.2715,0.6780,0.2590,0.6778,0.2590,0.6712,0.2237,0.6873,0.2258,0.7115,0.2302,0.7132,0.2285,0.6900,0.2424,0.7145,0.2414,0.6918,0.2417,0.7087,0.2397,0.6811,0.2303,0.7098,0.2285,0.6840,0.2372,0.6773,0.2337,0.6760,0.2372,0.6741,0.2453,0.6722,0.2465,0.6780,0.8976,0.3661,0.9270,0.3568,0.6680,0.2430,0.6543,0.2452,0.6070,0.4415,0.9318,0.3816,0.8965,0.3880,0.9517,0.3716,0.6493,0.4315,0.6286,0.4119,0.6424,0.3883,0.6713,0.3933,0.6219,0.4038,0.6305,0.3794,0.6552,0.4350,0.6867,0.4012,0.6794,0.2964,0.6493,0.3410,0.6595,0.3439,0.6904,0.3555,0.7204,0.3193,0.7036,0.3625,0.7332,0.3305,0.7233,0.2218,0.7586,0.2126,0.7667,0.2513,0.7744,0.2118,0.7094,0.2909,0.6992,0.3033,0.6920,0.2346,0.7408,0.2701,0.7866,0.2195,0.7981,0.2245,0.8591,0.3268,0.8707,0.3533,0.8514,0.3687,0.8348,0.3316,0.9460,0.3095,0.7774,0.2727,0.7870,0.2812,0.7558,0.2983,0.7737,0.3142,0.7683,0.3328,0.2417,0.6020,0.2514,0.6323,0.2206,0.6337,0.2177,0.6210,0.2397,0.6614,0.2164,0.6473,0.2130,0.6739,0.1951,0.6527,0.6617,0.2886,0.6978,0.4281,0.1939,0.6759,0.1931,0.5826,0.2180,0.5865,0.1948,0.6146,0.8375,0.2455,0.8014,0.2999,0.6569,0.4408,0.6897,0.5085,0.6901,0.5256,0.6813,0.5255};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_2()
		{
			double[] value = {0.6809,0.5090,0.6199,0.5049,0.6291,0.5059,0.6248,0.4758,0.6337,0.4782,0.6282,0.4672,0.6359,0.4725,0.6323,0.4632,0.6381,0.4704,0.6432,0.4559,0.6468,0.4644,0.6573,0.4527,0.6575,0.4619,0.6711,0.4553,0.6675,0.4637,0.6812,0.4626,0.6737,0.4680,0.6875,0.4831,0.6787,0.4848,0.6551,0.5259,0.7387,0.3555,0.7582,0.3610,0.7213,0.3727,0.9628,0.3095,0.9605,0.3401,0.9421,0.3341,0.7112,0.3978,0.7216,0.4125,0.7423,0.3891,0.9758,0.3094,0.9757,0.3410,0.8563,0.3083,0.6602,0.2174,0.7145,0.1924,0.7890,0.1808,0.8022,0.1855,0.7741,0.1791,0.7541,0.1812,0.6187,0.5260,0.8512,0.2023,0.6278,0.5258,0.6827,0.2059,0.6478,0.2210,0.8314,0.3097,0.8976,0.3661,0.9270,0.3568,0.9318,0.3816,0.8965,0.3880,0.9517,0.3716,0.6680,0.2430,0.6602,0.2174,0.6478,0.2210,0.6543,0.2452,0.8591,0.3268,0.8707,0.3533,0.8514,0.3687,0.8348,0.3316,0.6070,0.4415,0.6493,0.4315,0.6286,0.4119,0.6424,0.3883,0.6713,0.3933,0.6219,0.4038,0.6305,0.3794,0.6552,0.4350,0.6867,0.4012,0.6794,0.2964,0.6493,0.3410,0.6595,0.3439,0.6904,0.3555,0.7204,0.3193,0.7036,0.3625,0.7332,0.3305,0.7667,0.2513,0.7744,0.2118,0.7586,0.2126,0.7094,0.2909,0.6992,0.3033,0.7233,0.2218,0.7145,0.1924,0.6827,0.2059,0.6920,0.2346,0.7408,0.2701,0.7866,0.2195,0.7774,0.2727,0.7870,0.2812,0.7981,0.2245,0.7558,0.2983,0.7737,0.3142,0.7683,0.3328,0.6617,0.2886,0.9460,0.3095,0.9628,0.3095,0.9605,0.3401,0.9421,0.3341,0.9758,0.3094,0.9757,0.3410,0.6978,0.4281,0.7890,0.1808,0.7741,0.1791};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_3()
		{
			double[] value = {0.2417,0.6020,0.2514,0.6323,0.2206,0.6337,0.2177,0.6210,0.2397,0.6614,0.2164,0.6473,0.2130,0.6739,0.1951,0.6527,0.1939,0.6759,0.1931,0.5826,0.2180,0.5865,0.1948,0.6146,0.7541,0.1812,0.8014,0.2999,0.8375,0.2455,0.6569,0.4408,0.7387,0.3555,0.7582,0.3610,0.7213,0.3727,0.7112,0.3978,0.7216,0.4125,0.7423,0.3891,0.6897,0.5085,0.6901,0.5256,0.6813,0.5255,0.6809,0.5090,0.6199,0.5049,0.6248,0.4758,0.6337,0.4782,0.6291,0.5059,0.6282,0.4672,0.6359,0.4725,0.6323,0.4632,0.6381,0.4704,0.6432,0.4559,0.6468,0.4644,0.6573,0.4527,0.6575,0.4619,0.6711,0.4553,0.6675,0.4637,0.6812,0.4626,0.6737,0.4680,0.6875,0.4831,0.6787,0.4848,0.6551,0.5259,0.8022,0.1855,0.8512,0.2023,0.6187,0.5260,0.6278,0.5258,0.8563,0.3083,0.8314,0.3097,0.8837,0.6433,0.9305,0.6444,0.9267,0.6307,0.8834,0.6307,0.9497,0.9459,0.9144,0.9447,0.9144,0.9313,0.9494,0.9313,0.9735,0.6473,0.9474,0.6307,0.9756,0.9313,0.9767,0.9402,0.8502,0.6307,0.8502,0.6428,0.9738,0.6717,0.8723,0.9313,0.8725,0.9437,0.8486,0.9428,0.8486,0.9313,0.8837,0.9723,0.8485,0.9723,0.9129,0.9723,0.9735,0.9723,0.9918,0.9484,0.9897,0.9517,0.9884,0.6512,0.9882,0.6717,0.9875,0.9723,0.9925,0.9723,0.8506,0.6717,0.8921,0.6714,0.9501,0.6714,0.8167,0.6433,0.8171,0.6307,0.7738,0.6307,0.7700,0.6444,0.7442,0.9459,0.7478,0.9313,0.7771,0.9313,0.7784,0.9447,0.7531,0.6307,0.7277,0.6473,0.7203,0.9402,0.7215,0.9313,0.7273,0.6717,0.8231,0.9313,0.8228,0.9437,0.8181,0.9723,0.7752,0.9723};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_4()
		{
			double[] value = {0.7235,0.9723,0.7073,0.9517,0.7052,0.9484,0.7127,0.6512,0.7130,0.6717,0.7095,0.9723,0.7045,0.9723,0.8090,0.6714,0.7510,0.6714,0.9776,0.6307,0.9788,0.6395,0.9939,0.6478,0.9946,0.6717,0.7224,0.6395,0.7235,0.6307,0.7073,0.6478,0.7066,0.6717,0.8759,0.8947,0.8723,0.9313,0.8486,0.9313,0.8486,0.8947,0.9267,0.6307,0.9198,0.5940,0.8814,0.5940,0.8834,0.6307,0.9474,0.6307,0.9454,0.5940,0.9494,0.9313,0.9490,0.8947,0.9765,0.8947,0.9756,0.9313,0.8502,0.5940,0.8502,0.6307,0.9167,0.8947,0.9144,0.9313,0.8213,0.8947,0.8231,0.9313,0.7738,0.6307,0.8171,0.6307,0.8191,0.5940,0.7807,0.5940,0.7531,0.6307,0.7550,0.5940,0.7478,0.9313,0.7215,0.9313,0.7206,0.8947,0.7482,0.8947,0.7771,0.9313,0.7805,0.8947,0.9785,0.5940,0.9776,0.6307,0.7235,0.6307,0.7226,0.5940,0.9167,0.8947,0.8759,0.8947,0.8833,0.8504,0.9257,0.8504,0.9490,0.8947,0.9525,0.8504,0.8814,0.5940,0.9198,0.5940,0.9179,0.5497,0.8814,0.5497,0.9454,0.5940,0.9441,0.5497,0.9765,0.8947,0.9780,0.8504,0.8486,0.8947,0.8486,0.8504,0.8502,0.5940,0.8502,0.5497,0.7805,0.8947,0.7715,0.8504,0.8139,0.8504,0.8213,0.8947,0.7482,0.8947,0.7447,0.8504,0.8191,0.5940,0.8190,0.5497,0.7826,0.5497,0.7807,0.5940,0.7564,0.5497,0.7550,0.5940,0.7206,0.8947,0.7191,0.8504,0.9785,0.5940,0.9800,0.5497,0.7226,0.5940,0.7211,0.5497,0.9814,0.8054,0.9452,0.5047,0.9441,0.5497,0.9780,0.8504,0.9177,0.5047,0.9179,0.5497,0.8833,0.8504,0.8854,0.8054,0.9275,0.8054,0.9257,0.8504,0.9550,0.8054};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_5()
		{
			double[] value = {0.9525,0.8504,0.8816,0.5047,0.8814,0.5497,0.8486,0.8504,0.8486,0.8054,0.8502,0.5047,0.8502,0.5497,0.7157,0.8054,0.7191,0.8504,0.7564,0.5497,0.7552,0.5047,0.7826,0.5497,0.7828,0.5047,0.8139,0.8504,0.7715,0.8504,0.7697,0.8054,0.8118,0.8054,0.7447,0.8504,0.7422,0.8054,0.8190,0.5497,0.8189,0.5047,0.9834,0.5047,0.9800,0.5497,0.7177,0.5047,0.7211,0.5497,0.9275,0.8054,0.8854,0.8054,0.8859,0.7607,0.9286,0.7607,0.9550,0.8054,0.9577,0.7607,0.8816,0.5047,0.9177,0.5047,0.9197,0.4600,0.8824,0.4600,0.9452,0.5047,0.9482,0.4600,0.9814,0.8054,0.9874,0.7607,0.8486,0.8054,0.8486,0.7607,0.8502,0.4600,0.8502,0.5047,0.7697,0.8054,0.7686,0.7607,0.8113,0.7607,0.8118,0.8054,0.7422,0.8054,0.7395,0.7607,0.8189,0.5047,0.8181,0.4600,0.7808,0.4600,0.7828,0.5047,0.7523,0.4600,0.7552,0.5047,0.7157,0.8054,0.7097,0.7607,0.9834,0.5047,0.9894,0.4600,0.7177,0.5047,0.7117,0.4600,0.8859,0.7607,0.8486,0.7607,0.8486,0.7369,0.8860,0.7369,0.8486,0.7260,0.8863,0.7260,0.9863,0.7369,0.9566,0.7369,0.9501,0.7260,0.9784,0.7260,0.9262,0.7369,0.9239,0.7260,0.8839,0.4363,0.9190,0.4363,0.9158,0.4253,0.8832,0.4253,0.9468,0.4363,0.9410,0.4253,0.8502,0.4363,0.8502,0.4253,0.8485,0.7125,0.8864,0.7125,0.8863,0.4119,0.8506,0.4119,0.9181,0.4119,0.9383,0.4119,0.9477,0.7125,0.9478,0.7125,0.9205,0.7125,0.8485,0.7014,0.8502,0.4600,0.8824,0.4600,0.9197,0.4600,0.9286,0.7607,0.9577,0.7607,0.9874,0.7607,0.9482,0.4600,0.8113,0.7607,0.8112,0.7369};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_6()
		{
			double[] value = {0.8109,0.7260,0.7107,0.7369,0.7187,0.7260,0.7471,0.7260,0.7405,0.7369,0.7733,0.7260,0.7710,0.7369,0.8166,0.4363,0.8173,0.4253,0.7847,0.4253,0.7814,0.4363,0.7595,0.4253,0.7537,0.4363,0.8106,0.7125,0.8148,0.4119,0.7830,0.4119,0.7628,0.4119,0.7494,0.7125,0.7492,0.7125,0.7765,0.7125,0.8181,0.4600,0.7808,0.4600,0.7686,0.7607,0.7399,0.7607,0.7097,0.7607,0.7523,0.4600,0.9884,0.4363,0.9804,0.4253,0.9497,0.4119,0.8506,0.4007,0.9894,0.4600,0.7127,0.4363,0.7207,0.4253,0.7514,0.4119,0.7117,0.4600,0.2901,0.7364,0.2859,0.7381,0.2781,0.7445,0.2810,0.7434,0.2745,0.7396,0.2700,0.7453,0.2590,0.7400,0.2590,0.7456,0.2590,0.7333,0.2745,0.7337,0.2700,0.7448,0.2590,0.7445,0.2859,0.7349,0.2781,0.7455,0.2590,0.7454,0.2878,0.7132,0.2922,0.7115,0.2756,0.7145,0.2590,0.7149,0.2763,0.7087,0.2590,0.7082,0.2877,0.7098,0.2279,0.7364,0.2370,0.7434,0.2399,0.7445,0.2321,0.7381,0.2480,0.7453,0.2435,0.7396,0.2480,0.7448,0.2435,0.7337,0.2399,0.7455,0.2321,0.7349,0.2302,0.7132,0.2258,0.7115,0.2424,0.7145,0.2417,0.7087,0.2303,0.7098};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_coordIndex_1()
		{
			int[] value = {41,42,17,-1,17,7,41,-1,62,65,14,-1,14,6,62,-1,5,9,15,-1,15,16,5,-1,9,22,23,-1,23,15,9,-1,21,43,44,-1,44,4,21,-1,12,161,162,-1,162,7,12,-1,6,30,64,-1,64,62,6,-1,5,11,10,-1,10,9,5,-1,17,23,22,-1,22,7,17,-1,26,24,29,-1,29,0,26,-1,25,172,173,-1,173,52,25,-1,45,137,161,-1,161,12,45,-1,2,63,66,-1,66,70,2,-1,46,44,10,-1,10,11,46,-1,162,181,41,-1,41,7,162,-1,23,17,25,-1,25,28,23,-1,14,26,27,-1,27,13,14,-1,13,27,18,-1,18,20,13,-1,67,187,38,-1,38,0,67,-1,37,27,26,-1,26,49,37,-1,3,45,43,-1,43,21,3,-1,29,50,67,-1,67,0,29,-1,16,51,24,-1,24,65,16,-1,15,28,51,-1,51,16,15,-1,15,23,28,-1,19,18,40,-1,40,39,19,-1,27,37,40,-1,40,18,27,-1,8,31,34,-1,34,6,8,-1,92,32,54,-1,92,75,33,-1,33,32,92,-1,31,54,53,-1,53,34,31,-1,35,32,33,-1,33,36,35,-1,92,8,47,-1,29,24,51,-1,51,52,29,-1,8,6,14,-1,14,13,8,-1,41,138,42,-1,42,138,68,-1,3,208,137,-1,137,45,3,-1,1,4,44,-1,44,46,1,-1,11,64,66,-1,66,46,11,-1,19,39,61,-1,61,60,19,-1,69,17,42,-1,42,68,69,-1,25,17,69,-1,69,172,25,-1,138,41,181,-1,70,36,33,-1,33,75,70,-1,43,45,12,-1,12,48,43,-1,12,7,22,-1,22,48,12,-1,9,10,48,-1,48,22,9,-1,43,48,10,-1,10,44,43,-1,38,49,26,-1,26,0,38,-1,50,29,52,-1,52,173,50,-1,28,25,52,-1,52,51,28,-1,36,70,30,-1,30,35,36,-1,30,6,34,-1,34,53,30,-1,54,32,35,-1,35,53,54,-1,53,35,30,-1,54,31,8,-1,8,92,54,-1,49,38,56,-1,56,55,49,-1,38,187,139,-1,139,56,38,-1,61,39,57,-1,57,214,61,-1,39,40,58,-1,58,57,39,-1,40,37,59,-1,59,58,40,-1,37,49,55,-1,55,59,37,-1,55,56,140,-1,56,139,140,-1,214,57,140,-1,57,58,140,-1,58,59,140,-1,59,55,140,-1,5,16,65,-1,65,62,5,-1,11,5,62,-1,62,64,11,-1,63,1,46,-1,46,66,63,-1,64,30,70,-1,70,66,64,-1,26,14,65,-1,65,24,26,-1,47,8,13,-1,13,20,47,-1,87,88,78,-1,78,70,87,-1,70,75,87,-1,98,72,91,-1,91,99,98,-1,98,99,224,-1,224,121,98,-1,122,119,105,-1,105,104,122,-1,76,91,72,-1,72,71,76,-1,136,133,88,-1,88,130,136,-1,78,132,84,-1,84,86,78,-1,93,92,116,-1,116,107,93,-1,130,79,95,-1,95,126,130,-1,101,100,95,-1,95,96,101,-1,101,96,97,-1,97,102,101,-1,121,246,103,-1,103,98,121,-1,72,81,80,-1,80,71,72,-1,131,128,90,-1,90,89,131,-1,125,100,123,-1,123,254,125,-1,123,100,101,-1,101,256,123,-1,102,257,256,-1,256,101,102,-1,70,78,86,-1,86,85,70,-1,84,77,83,-1,83,86,84,-1,86,83,82,-1,82,85,86,-1,79,130,88,-1,88,87,79,-1,73,132,133,-1,133,89,73,-1,71,80,79,-1,79,87,71,-1,72,98,103,-1,103,81,72,-1,128,129,263,-1,263,90,128,-1,102,103,246,-1,246,257,102,-1,93,94,91,-1,91,76,93,-1,74,104,105,-1,105,94,74,-1,76,75,92,-1,92,93,76,-1,224,99,105,-1,105,119,224,-1,107,74,94,-1,94,93,107,-1,99,91,94,-1,94,105,99,-1,100,125,126,-1,126,95,100,-1,96,80,81,-1,81,97,96,-1,79,80,96,-1,96,95,79,-1,97,81,103,-1,103,102,97,-1,75,76,71,-1,71,87,75,-1,263,137,106,-1,106,90,263,-1,89,90,106,-1,106,73,89,-1,74,113,114,-1,114,104,74,-1,104,114,269,-1,269,122,104,-1,107,115,113,-1,113,74,107,-1,108,117,118,-1,118,109,108,-1,110,116,117,-1,117,108,110,-1,113,108,109,-1,109,114,113,-1,114,109,141,-1,141,269,114,-1,115,110,108,-1,108,113,115,-1,117,111,112,-1,112,118,117,-1,118,112,278,-1,278,120,118,-1,116,92,111,-1,111,117,116,-1,116,110,115,-1,115,107,116,-1,127,135,134,-1,134,124,127,-1,124,134,283,-1,283,284,124,-1,124,284,129,-1,129,128,124,-1,135,136,130,-1,130,126,135,-1,127,124,128,-1,128,131,127,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_2()
		{
			int[] value = {136,131,89,-1,89,133,136,-1,132,78,88,-1,88,133,132,-1,135,126,125,-1,125,134,135,-1,134,125,254,-1,254,283,134,-1,127,131,136,-1,136,135,127,-1,132,73,84,-1,109,118,120,-1,120,141,109,-1,143,142,145,-1,145,144,143,-1,147,146,149,-1,149,148,147,-1,150,153,152,-1,152,151,150,-1,151,152,155,-1,155,154,151,-1,157,156,159,-1,159,158,157,-1,160,142,162,-1,162,161,160,-1,146,147,164,-1,164,163,146,-1,150,151,166,-1,166,165,150,-1,145,142,154,-1,154,155,145,-1,167,170,169,-1,169,168,167,-1,171,174,173,-1,173,172,171,-1,175,160,161,-1,161,137,175,-1,177,176,179,-1,179,178,177,-1,180,165,166,-1,166,159,180,-1,162,142,143,-1,143,181,162,-1,155,182,171,-1,171,145,155,-1,149,183,184,-1,184,167,149,-1,183,186,185,-1,185,184,183,-1,67,170,188,-1,188,187,67,-1,190,189,167,-1,167,184,190,-1,191,157,158,-1,158,175,191,-1,169,170,67,-1,67,50,169,-1,153,148,168,-1,168,192,153,-1,152,153,192,-1,192,182,152,-1,152,182,155,-1,193,195,194,-1,194,185,193,-1,184,185,194,-1,194,190,184,-1,196,146,198,-1,198,197,196,-1,199,201,200,-1,199,200,203,-1,203,202,199,-1,197,198,204,-1,204,201,197,-1,205,206,203,-1,203,200,205,-1,199,207,196,-1,169,174,192,-1,192,168,169,-1,196,183,149,-1,149,146,196,-1,143,144,138,-1,144,68,138,-1,191,175,137,-1,137,208,191,-1,209,180,159,-1,159,156,209,-1,165,180,179,-1,179,164,165,-1,193,60,61,-1,61,195,193,-1,69,68,144,-1,144,145,69,-1,171,172,69,-1,69,145,171,-1,138,181,143,-1,176,202,203,-1,203,206,176,-1,158,210,160,-1,160,175,158,-1,160,210,154,-1,154,142,160,-1,151,154,210,-1,210,166,151,-1,158,159,166,-1,166,210,158,-1,188,170,167,-1,167,189,188,-1,50,173,174,-1,174,169,50,-1,182,192,174,-1,174,171,182,-1,206,205,163,-1,163,176,206,-1,163,204,198,-1,198,146,163,-1,201,204,205,-1,205,200,201,-1,204,163,205,-1,201,199,196,-1,196,197,201,-1,189,212,211,-1,211,188,189,-1,188,211,139,-1,139,187,188,-1,61,214,213,-1,213,195,61,-1,195,213,215,-1,215,194,195,-1,194,215,216,-1,216,190,194,-1,190,216,212,-1,212,189,190,-1,212,140,211,-1,211,140,139,-1,214,140,213,-1,213,140,215,-1,215,140,216,-1,216,140,212,-1,150,147,148,-1,148,153,150,-1,165,164,147,-1,147,150,165,-1,178,179,180,-1,180,209,178,-1,164,179,176,-1,176,163,164,-1,167,168,148,-1,148,149,167,-1,207,186,183,-1,183,196,207,-1,217,176,219,-1,219,218,217,-1,176,217,202,-1,221,220,223,-1,223,222,221,-1,221,121,224,-1,224,220,221,-1,122,225,226,-1,226,119,122,-1,227,228,222,-1,222,223,227,-1,230,229,218,-1,218,231,230,-1,219,234,233,-1,233,232,219,-1,235,237,236,-1,236,199,235,-1,229,240,239,-1,239,238,229,-1,242,241,239,-1,239,243,242,-1,242,244,245,-1,245,241,242,-1,121,221,247,-1,247,246,121,-1,222,228,249,-1,249,248,222,-1,250,253,252,-1,252,251,250,-1,255,254,123,-1,123,243,255,-1,123,256,242,-1,242,243,123,-1,244,242,256,-1,256,257,244,-1,176,258,234,-1,234,219,176,-1,233,234,260,-1,260,259,233,-1,234,258,261,-1,261,260,234,-1,238,217,218,-1,218,229,238,-1,262,253,231,-1,231,232,262,-1,228,217,238,-1,238,249,228,-1,222,248,247,-1,247,221,222,-1,251,252,263,-1,263,129,251,-1,244,257,246,-1,246,247,244,-1,235,227,223,-1,223,264,235,-1,265,264,226,-1,226,225,265,-1,227,235,199,-1,199,202,227,-1,224,119,226,-1,226,220,224,-1,237,235,264,-1,264,265,237,-1,220,226,264,-1,264,223,220,-1,243,239,240,-1,240,255,243,-1,241,245,248,-1,248,249,241,-1,238,239,241,-1,241,249,238,-1,245,244,247,-1,247,248,245,-1,202,217,228,-1,228,227,202,-1,263,252,266,-1,266,137,263,-1,253,262,266,-1,266,252,253,-1,265,225,268,-1,268,267,265,-1,225,122,269,-1,269,268,225,-1,237,265,267,-1,267,270,237,-1,272,271,274,-1,274,273,272,-1,275,272,273,-1,273,236,275,-1,267,268,271,-1,271,272,267,-1,268,269,141,-1,141,271,268,-1,270,267,272,-1,272,275,270,-1,273,274,277,-1,277,276,273,-1,274,120,278,-1,278,277,274,-1,236,273,276,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_3()
		{
			int[] value = {276,199,236,-1,236,237,270,-1,270,275,236,-1,280,279,282,-1,282,281,280,-1,279,284,283,-1,283,282,279,-1,279,251,129,-1,129,284,279,-1,281,240,229,-1,229,230,281,-1,280,250,251,-1,251,279,280,-1,230,231,253,-1,253,250,230,-1,232,231,218,-1,218,219,232,-1,281,282,255,-1,255,240,281,-1,282,283,254,-1,254,255,282,-1,280,281,230,-1,230,250,280,-1,232,233,262,-1,271,141,120,-1,120,274,271,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,78,80,81,-1,81,4,78,-1,5,7,8,-1,8,6,5,-1,7,11,12,-1,12,8,7,-1,14,15,16,-1,16,13,14,-1,17,18,19,-1,19,0,17,-1,4,20,79,-1,79,78,4,-1,5,21,22,-1,22,7,5,-1,3,12,11,-1,11,0,3,-1,23,24,25,-1,25,26,23,-1,27,28,67,-1,67,66,27,-1,29,30,18,-1,18,17,29,-1,32,84,85,-1,85,31,32,-1,34,16,22,-1,22,21,34,-1,19,35,1,-1,1,0,19,-1,12,3,27,-1,27,36,12,-1,81,23,37,-1,37,82,81,-1,82,37,38,-1,38,83,82,-1,41,64,42,-1,42,26,41,-1,43,37,23,-1,23,63,43,-1,44,29,15,-1,15,14,44,-1,25,45,41,-1,41,26,25,-1,6,65,24,-1,24,80,6,-1,8,36,65,-1,65,6,8,-1,8,12,36,-1,39,38,46,-1,46,47,39,-1,37,43,46,-1,46,38,37,-1,10,48,49,-1,49,4,10,-1,50,51,69,-1,50,60,52,-1,52,51,50,-1,48,69,68,-1,68,49,48,-1,53,51,52,-1,52,54,53,-1,55,10,9,-1,25,24,65,-1,65,66,25,-1,10,4,81,-1,81,82,10,-1,1,56,2,-1,2,56,57,-1,44,58,30,-1,30,29,44,-1,33,13,16,-1,16,34,33,-1,21,79,85,-1,85,34,21,-1,39,47,61,-1,61,40,39,-1,59,3,2,-1,2,57,59,-1,27,3,59,-1,59,28,27,-1,56,1,35,-1,31,54,52,-1,52,60,31,-1,15,29,17,-1,17,62,15,-1,17,0,11,-1,11,62,17,-1,7,22,62,-1,62,11,7,-1,15,62,22,-1,22,16,15,-1,42,63,23,-1,23,26,42,-1,45,25,66,-1,66,67,45,-1,36,27,66,-1,66,65,36,-1,54,31,20,-1,20,53,54,-1,20,4,49,-1,49,68,20,-1,69,51,53,-1,53,68,69,-1,68,53,20,-1,69,48,10,-1,10,50,69,-1,63,42,71,-1,71,70,63,-1,42,64,72,-1,72,71,42,-1,61,47,74,-1,74,73,61,-1,47,46,75,-1,75,74,47,-1,46,43,76,-1,76,75,46,-1,43,63,70,-1,70,76,43,-1,70,71,77,-1,71,72,77,-1,73,74,77,-1,74,75,77,-1,75,76,77,-1,76,70,77,-1,5,6,80,-1,80,78,5,-1,21,5,78,-1,78,79,21,-1,84,33,34,-1,34,85,84,-1,79,20,31,-1,31,85,79,-1,23,81,80,-1,80,24,23,-1,9,10,82,-1,82,83,9,-1,87,88,89,-1,89,86,87,-1,86,92,87,-1,90,94,96,-1,96,95,90,-1,90,95,101,-1,101,91,90,-1,100,102,103,-1,103,99,100,-1,104,96,94,-1,94,93,104,-1,163,159,88,-1,88,112,163,-1,89,158,107,-1,107,108,89,-1,110,111,109,-1,109,97,110,-1,112,113,114,-1,114,115,112,-1,120,121,114,-1,114,119,120,-1,120,119,123,-1,123,122,120,-1,91,124,125,-1,125,90,91,-1,94,127,126,-1,126,93,94,-1,118,116,138,-1,138,105,118,-1,128,121,130,-1,130,129,128,-1,130,121,120,-1,120,132,130,-1,122,133,132,-1,132,120,122,-1,86,89,108,-1,108,134,86,-1,107,135,136,-1,136,108,107,-1,108,136,137,-1,137,134,108,-1,113,112,88,-1,88,87,113,-1,106,158,159,-1,159,105,106,-1,93,126,113,-1,113,87,93,-1,94,90,125,-1,125,127,94,-1,116,131,117,-1,117,138,116,-1,122,125,124,-1,124,133,122,-1,110,139,96,-1,96,104,110,-1,98,99,103,-1,103,139,98,-1,104,92,111,-1,111,110,104,-1,101,95,103,-1,103,102,101,-1,97,98,139,-1,139,110,97,-1,95,96,139,-1,139,103,95,-1,121,128,115,-1,115,114,121,-1,119,126,127,-1,127,123,119,-1,113,126,119,-1,119,114,113,-1,123,127,125,-1,125,122,123,-1,92,104,93,-1,93,87,92,-1,117,140,141,-1,141,138,117,-1,105,138,141,-1,141,106,105,-1,98,142,143,-1,143,99,98,-1,99,143,144,-1,144,100,99,-1,97,145,142,-1,142,98,97,-1,147,148,149,-1,149,146,147,-1,151,109,148,-1,148,147,151,-1,142,147,146,-1,146,143,142,-1,143,146,164,-1,164,144,143,-1,145,151,147,-1,147,142,145,-1,148,152,153,-1,153,149,148,-1,149,153,154,-1,154,150,149,-1,109,111,152,-1,152,148,109,-1,109,151,145,-1,145,97,109,-1,156,161,160,-1,160,155,156,-1,155,160,162,-1,162,157,155,-1,155,157,131,-1,131,116,155,-1,161,163,112,-1,112,115,161,-1,156,155,116,-1,116,118,156,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_2()
		{
			int[] value = {163,118,105,-1,105,159,163,-1,158,89,88,-1,88,159,158,-1,161,115,128,-1,128,160,161,-1,160,128,129,-1,129,162,160,-1,156,118,163,-1,163,161,156,-1,158,106,107,-1,146,149,150,-1,150,164,146,-1,166,165,168,-1,168,167,166,-1,170,169,172,-1,172,171,170,-1,173,176,175,-1,175,174,173,-1,174,175,178,-1,178,177,174,-1,180,179,182,-1,182,181,180,-1,183,165,185,-1,185,184,183,-1,169,170,187,-1,187,186,169,-1,173,174,189,-1,189,188,173,-1,168,165,177,-1,177,178,168,-1,190,193,192,-1,192,191,190,-1,194,197,196,-1,196,195,194,-1,198,183,184,-1,184,199,198,-1,201,200,203,-1,203,202,201,-1,204,188,189,-1,189,182,204,-1,185,165,166,-1,166,205,185,-1,178,206,194,-1,194,168,178,-1,172,207,208,-1,208,190,172,-1,207,210,209,-1,209,208,207,-1,211,193,213,-1,213,212,211,-1,215,214,190,-1,190,208,215,-1,216,180,181,-1,181,198,216,-1,192,193,211,-1,211,217,192,-1,176,171,191,-1,191,218,176,-1,175,176,218,-1,218,206,175,-1,175,206,178,-1,219,221,220,-1,220,209,219,-1,208,209,220,-1,220,215,208,-1,222,169,224,-1,224,223,222,-1,225,227,226,-1,225,226,229,-1,229,228,225,-1,223,224,230,-1,230,227,223,-1,231,232,229,-1,229,226,231,-1,233,234,222,-1,192,197,218,-1,218,191,192,-1,222,207,172,-1,172,169,222,-1,166,167,235,-1,167,236,235,-1,216,198,199,-1,199,237,216,-1,238,204,182,-1,182,179,238,-1,188,204,203,-1,203,187,188,-1,219,240,239,-1,239,221,219,-1,241,236,167,-1,167,168,241,-1,194,195,241,-1,241,168,194,-1,235,205,166,-1,200,228,229,-1,229,232,200,-1,181,242,183,-1,183,198,181,-1,183,242,177,-1,177,165,183,-1,174,177,242,-1,242,189,174,-1,181,182,189,-1,189,242,181,-1,213,193,190,-1,190,214,213,-1,217,196,197,-1,197,192,217,-1,206,218,197,-1,197,194,206,-1,232,231,186,-1,186,200,232,-1,186,230,224,-1,224,169,186,-1,227,230,231,-1,231,226,227,-1,230,186,231,-1,227,225,222,-1,222,223,227,-1,214,244,243,-1,243,213,214,-1,213,243,245,-1,245,212,213,-1,239,247,246,-1,246,221,239,-1,221,246,248,-1,248,220,221,-1,220,248,249,-1,249,215,220,-1,215,249,244,-1,244,214,215,-1,244,250,243,-1,243,250,245,-1,247,250,246,-1,246,250,248,-1,248,250,249,-1,249,250,244,-1,173,170,171,-1,171,176,173,-1,188,187,170,-1,170,173,188,-1,202,203,204,-1,204,238,202,-1,187,203,200,-1,200,186,187,-1,190,191,171,-1,171,172,190,-1,234,210,207,-1,207,222,234,-1,252,251,254,-1,254,253,252,-1,251,252,255,-1,257,256,259,-1,259,258,257,-1,257,260,261,-1,261,256,257,-1,263,262,265,-1,265,264,263,-1,266,267,258,-1,258,259,266,-1,269,268,253,-1,253,270,269,-1,254,273,272,-1,272,271,254,-1,274,277,276,-1,276,275,274,-1,268,280,279,-1,279,278,268,-1,282,281,279,-1,279,283,282,-1,282,284,285,-1,285,281,282,-1,260,257,287,-1,287,286,260,-1,258,267,289,-1,289,288,258,-1,290,293,292,-1,292,291,290,-1,295,294,296,-1,296,283,295,-1,296,297,282,-1,282,283,296,-1,284,282,297,-1,297,298,284,-1,251,299,273,-1,273,254,251,-1,272,273,301,-1,301,300,272,-1,273,299,302,-1,302,301,273,-1,278,252,253,-1,253,268,278,-1,303,293,270,-1,270,271,303,-1,267,252,278,-1,278,289,267,-1,258,288,287,-1,287,257,258,-1,291,292,305,-1,305,304,291,-1,284,298,286,-1,286,287,284,-1,274,266,259,-1,259,306,274,-1,307,306,265,-1,265,262,307,-1,266,274,275,-1,275,255,266,-1,261,264,265,-1,265,256,261,-1,277,274,306,-1,306,307,277,-1,256,265,306,-1,306,259,256,-1,283,279,280,-1,280,295,283,-1,281,285,288,-1,288,289,281,-1,278,279,281,-1,281,289,278,-1,285,284,287,-1,287,288,285,-1,255,252,267,-1,267,266,255,-1,305,292,309,-1,309,308,305,-1,293,303,309,-1,309,292,293,-1,307,262,311,-1,311,310,307,-1,262,263,312,-1,312,311,262,-1,277,307,310,-1,310,313,277,-1,315,314,317,-1,317,316,315,-1,318,315,316,-1,316,276,318,-1,310,311,314,-1,314,315,310,-1,311,312,319,-1,319,314,311,-1,313,310,315,-1,315,318,313,-1,316,317,321,-1,321,320,316,-1,317,323,322,-1,322,321,317,-1,276,316,320,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_3()
		{
			int[] value = {320,275,276,-1,276,277,313,-1,313,318,276,-1,325,324,327,-1,327,326,325,-1,324,329,328,-1,328,327,324,-1,324,291,304,-1,304,329,324,-1,326,280,268,-1,268,269,326,-1,325,290,291,-1,291,324,325,-1,269,270,293,-1,293,290,269,-1,271,270,253,-1,253,254,271,-1,326,327,295,-1,295,280,326,-1,327,328,294,-1,294,295,327,-1,325,326,269,-1,269,290,325,-1,271,272,303,-1,314,319,323,-1,323,317,314,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_12_199_point_1()
		{
			double[] value = {1.0100,0.2606,1.6860,4.3200,6.2650,2.7520,4.8610,5.9370,-0.2956,0.8391,6.8220,4.8630,3.5640,6.5150,3.7990,3.8630,2.9200,2.5150,4.1070,2.8590,0.1893,0.8265,3.0620,4.7300,4.1110,2.8930,-0.1586,3.2560,2.9260,3.5820,3.4460,4.1880,3.6210,4.0960,4.1380,2.5790,0.8125,4.2220,4.6020,3.2800,1.3640,-0.2629,3.2910,1.3570,0.5764,2.9010,1.8020,3.7130,3.2190,1.5810,2.7120,0.7970,2.1070,4.7520,2.3100,0.8337,-1.6750,1.3920,0.9176,-2.6170,3.2920,1.6450,-1.3780,2.2880,6.7320,4.5010,2.1870,2.9750,4.4390,2.1220,2.0050,4.4030,2.3440,0.6905,2.1490,0.8489,0.9212,4.3590,2.4150,0.6353,1.1120,2.4720,0.7634,-0.0987,2.0020,1.2550,4.1440,1.0220,0.2694,2.5540,4.6390,4.0280,0.0209,4.5780,3.0880,-0.5623,5.1730,4.3520,-1.2010,5.1150,5.0870,-0.8764,4.6950,3.0860,-0.4211,5.3060,4.3600,-1.0450,5.2130,5.1030,-0.6857,1.8940,0.4791,-0.0621,0.9860,0.1174,1.3000,1.0030,0.4362,-1.5430,1.6460,0.4648,-0.8986,0.5655,2.7500,5.1030,0.5458,2.3690,5.1680,2.2660,5.5020,4.4020,3.4830,5.4020,3.7310,0.8159,5.5210,4.8120,4.2690,5.2470,2.6550,4.1780,2.9630,-1.2150,2.2930,4.2220,4.3310,1.7640,0.3298,0.7501,0.0000,0.1588,2.6580,2.2040,0.8597,3.2850,0.9370,0.4803,3.7470,5.1050,3.5480,-0.7329,4.9800,3.5440,-0.8815,1.4080,-0.1113,0.2968,0.8508,-0.2869,0.6094,0.8071,-0.0807,-0.8579,1.2540,-0.0317,-0.4868,1.5190,-0.0345,-0.0256,0.0000,0.9352,-2.8010,0.0000,0.4310,-1.6940,4.0460,2.8910,1.4120,4.8370,5.9600,-0.1402,4.4390,4.0890,1.3390,3.2970,1.4560,1.6820,4.7890,5.1720,0.2839,0.0000,0.1186,1.8130,0.0000,2.2440,5.2470,0.0000,2.0290,4.9210,4.8360,5.1620,0.0226,4.5980,6.0480,-2.0860,3.4810,6.0260,-3.9680,3.4540,5.3460,3.9790,2.9970,2.2690,-3.3640,4.8780,5.1370,-0.5536,4.5510,5.1130,-2.0600,3.9500,2.7490,2.0400,4.8050,5.1620,1.1840,4.8360,7.7690,-0.3588,4.4830,7.7710,-2.0890,3.3670,7.7140,-3.7830,4.1920,2.7770,0.3081,4.1390,2.5800,1.2960,4.1750,4.1120,2.6090,4.6320,4.0300,0.1254,4.6410,4.0170,1.2070,5.0070,6.1140,-0.3905,4.9100,6.1030,1.1730,3.4220,6.1100,4.2420,1.5270,6.1160,4.9900,3.4230,5.0050,-3.9760,4.7840,4.2020,-1.2370,4.4140,3.9840,-2.0560,3.2630,3.7330,-3.8200,3.6910,9.9150,-0.3475,3.5100,9.5170,-2.2140,3.0080,8.9570,-3.2650,1.7420,5.9480,-4.7390,1.6670,4.8650,-4.7590};
			return value;
		}
		private double[] getCoordinate_12_199_point_2()
		{
			double[] value = {1.7840,10.9800,-0.3520,1.6420,10.4900,-2.3540,1.5520,9.3940,-3.8630,1.7160,7.6270,-4.5470,1.4310,2.1430,-4.1170,1.5610,3.6500,-4.5820,1.5130,5.5780,4.7920,3.9350,2.5090,-2.0510,2.4640,0.5524,-1.5920,1.2360,0.2977,-2.0620,3.2060,1.0100,-1.2090,3.1110,3.6080,-1.4350,1.8480,3.4740,-1.7250,2.5400,0.6815,-2.5150,1.2520,0.4058,-3.1220,3.1890,1.0460,-1.9540,4.1480,2.7010,-1.2480,2.8170,2.1080,-1.5140,1.5620,1.9160,-1.8660,0.0000,3.5820,-4.7990,0.0000,1.8720,-2.2640,0.0000,5.8890,-4.9930,0.0000,2.1310,-4.3300,0.0000,11.2100,-0.3565,1.5520,9.3190,4.2440,1.7310,10.9200,1.3580,3.6300,9.8130,1.3040,3.0080,8.9570,3.9040,1.5670,7.6940,4.9140,0.0000,7.6900,5.1230,4.7300,7.7790,1.2140,3.3270,7.6380,4.2790,4.3770,5.2550,2.6640,4.4370,6.1080,2.7350,1.6420,10.3600,2.9930,3.3820,9.4800,2.9190,4.2820,7.7250,2.8620,0.0000,5.5480,4.9380,0.0000,2.4950,5.3270,0.0000,-0.4119,0.7020,0.0000,-0.3444,-0.0886,0.0000,0.2852,-2.2590,-0.8265,3.0620,4.7300,-0.5655,2.7500,5.1030,-0.5458,2.3690,5.1680,-0.7970,2.1070,4.7520,-4.1070,2.8590,0.1893,-4.0460,2.8910,1.4120,-3.2970,1.4560,1.6820,-3.2910,1.3570,0.5764,-3.8630,2.9200,2.5150,-3.2560,2.9260,3.5820,-2.9010,1.8020,3.7130,-3.2190,1.5810,2.7120,-2.1870,2.9750,4.4390,-2.1220,2.0050,4.4030,-3.5640,6.5150,3.7990,-2.2880,6.7320,4.5010,-2.2660,5.5020,4.4020,-3.4830,5.4020,3.7310,-0.8125,4.2220,4.6020,0.0000,4.2220,4.7270,0.0000,3.3180,4.9290,-4.6390,4.0280,0.0209,-4.4390,4.0890,1.3390,-4.0960,4.1380,2.5790,-3.4460,4.1880,3.6210,-2.4150,0.6353,1.1120,-2.3440,0.6905,2.1490,-1.0220,0.2694,2.5540,-1.0100,0.2606,1.6860,-0.8489,0.9212,4.3590,0.0000,0.8615,4.4730,0.0000,0.3620,3.8960,-0.9370,0.4803,3.7470,-0.8158,5.5210,4.8120,-4.8360,5.1620,0.0226,-4.8610,5.9370,-0.2957,-4.8370,5.9600,-0.1402,-4.7890,5.1720,0.2839,-4.2690,5.2470,2.6550,0.0000,2.9180,5.1730,-2.0020,1.2550,4.1440,-3.2800,1.3640,-0.2629,-2.4720,0.7634,-0.0987,-2.3100,0.8337,-1.6750,-3.2920,1.6450,-1.3780,0.0000,-0.0148,1.4390,-0.9860,0.1174,1.3000,-1.7640,0.3298,0.7501,-1.8940,0.4791,-0.0621,-0.8391,6.8220,4.8630,-2.2040,0.8597,3.2850,-1.3920,0.9176,-2.6170,-1.6460,0.4648,-0.8986,-1.0030,0.4362,-1.5430,-4.1110,2.8930,-0.1586,-4.5780,3.0880,-0.5623,-4.6950,3.0860,-0.4210,-4.7840,4.2020,-1.2370};
			return value;
		}
		private double[] getCoordinate_12_199_point_3()
		{
			double[] value = {-5.1730,4.3520,-1.2010,-4.9800,3.5440,-0.8815,-4.8780,5.1370,-0.5536,-5.1150,5.0870,-0.8764,-5.1050,3.5480,-0.7329,-5.3060,4.3600,-1.0450,-5.2130,5.1030,-0.6857,-4.1780,2.9630,-1.2150,0.0000,6.8350,4.9720,-4.3200,6.2650,2.7520,-2.2930,4.2220,4.3310,-0.8508,-0.2869,0.6094,-1.4080,-0.1113,0.2968,-0.8071,-0.0807,-0.8579,0.0000,-0.0937,-0.9581,-1.2540,-0.0317,-0.4868,-1.5190,-0.0345,-0.0256,-5.0070,6.1140,-0.3905,-4.9100,6.1030,1.1730,-4.8050,5.1620,1.1840,-1.6670,4.8650,-4.7590,-1.7420,5.9480,-4.7390,-3.4810,6.0260,-3.9680,-3.4230,5.0050,-3.9760,0.0000,4.7710,-4.9670,-1.4310,2.1430,-4.1170,-1.5610,3.6500,-4.5820,-4.5510,5.1130,-2.0600,-4.5980,6.0480,-2.0860,-4.7300,7.7790,1.2140,-4.2820,7.7250,2.8620,-4.4370,6.1080,2.7350,-4.3770,5.2550,2.6640,-4.1750,4.1120,2.6090,-4.6410,4.0170,1.2070,-4.4140,3.9840,-2.0560,-4.1480,2.7010,-1.2480,-3.9350,2.5090,-2.0510,-4.8360,7.7690,-0.3588,-3.6910,9.9150,-0.3474,-3.6300,9.8130,1.3040,-3.5100,9.5170,-2.2140,-1.6420,10.4900,-2.3540,-1.7840,10.9800,-0.3520,-1.5520,9.3940,-3.8630,-3.0080,8.9570,-3.2650,0.0000,7.5820,-4.8110,-1.7160,7.6270,-4.5470,-3.3670,7.7140,-3.7830,-4.4830,7.7710,-2.0890,-3.3270,7.6380,4.2790,-1.5670,7.6940,4.9140,-1.5270,6.1160,4.9900,-3.4220,6.1100,4.2420,0.0000,11.1100,1.4000,-1.7310,10.9200,1.3580,0.0000,10.7100,-2.3580,0.0000,9.5450,-4.0070,-4.6320,4.0300,0.1254,-3.9500,2.7490,2.0400,-4.1390,2.5800,1.2960,-4.1920,2.7770,0.3081,-3.4540,5.3460,3.9790,0.0000,6.1280,5.1790,-3.2630,3.7330,-3.8200,-2.9970,2.2690,-3.3640,-1.5130,5.5780,4.7920,-2.5400,0.6815,-2.5150,-1.2520,0.4058,-3.1220,0.0000,0.3427,-3.3240,-3.1890,1.0460,-1.9540,-1.2360,0.2977,-2.0620,-2.4640,0.5524,-1.5920,-2.8170,2.1080,-1.5140,-1.5620,1.9160,-1.8660,-3.2060,1.0100,-1.2090,-3.1110,3.6080,-1.4350,-1.8480,3.4740,-1.7250,0.0000,3.3950,-2.2640,-1.5520,9.3190,4.2440,-3.0080,8.9570,3.9040,-3.3820,9.4800,2.9190,-1.6420,10.3600,2.9930,0.0000,10.5300,3.0500,0.0000,9.4790,4.3880};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_12_200_point_1()
		{
			double[] value = {0.0372,0.4684,0.0249,0.4542,0.0241,0.4415,0.0388,0.4335,0.2247,0.4452,0.1629,0.4745,0.1434,0.4351,0.1252,0.4757,0.1141,0.4438,0.2647,0.4342,0.2347,0.4419,0.0815,0.4733,0.0808,0.4432,0.1466,0.5909,0.0935,0.6006,0.0907,0.5593,0.1389,0.5550,0.0390,0.5132,0.0122,0.5126,0.0095,0.4772,0.2430,0.4804,0.1735,0.5118,0.1336,0.5167,0.1688,0.3756,0.1393,0.3869,0.1065,0.3532,0.1322,0.3388,0.0536,0.3978,0.0302,0.3850,0.0399,0.5582,0.0126,0.5563,0.2591,0.5120,0.2630,0.5348,0.1928,0.5723,0.1845,0.5425,0.0066,0.4603,0.0873,0.4167,0.2069,0.3662,0.2569,0.3479,0.2786,0.3131,0.2789,0.2666,0.1110,0.3112,0.1451,0.3315,0.1993,0.3476,0.0408,0.6017,0.0835,0.3282,0.2269,0.3316,0.2435,0.3053,0.2503,0.4501,0.2480,0.4526,0.2896,0.4632,0.2847,0.4724,0.2779,0.4930,0.2805,0.4753,0.2751,0.4955,0.2662,0.4451,0.0054,0.4443,0.0076,0.4342,0.0115,0.6002,0.0146,0.4211,0.2804,0.5029,0.2437,0.2708,0.0884,0.5164,0.1727,0.3498,0.1261,0.3036,0.1083,0.4016,0.0728,0.3763,0.0488,0.3588,0.2634,0.4615,0.2662,0.4593,0.1826,0.3288,0.1667,0.3148,0.1531,0.2901,0.2106,0.2740,0.2127,0.3004,0.2052,0.3173,0.1932,0.3293,0.1795,0.2807,0.1922,0.4606,0.2084,0.4958,0.1719,0.4221,0.2003,0.4106,0.2236,0.4017,0.2546,0.3886,0.2307,0.5524,0.2218,0.5270,0.3845,0.7969,0.4084,0.8030,0.3864,0.8314,0.3694,0.8215,0.5223,0.7377,0.5577,0.7215,0.3982,0.7818,0.4405,0.7791,0.4842,0.7563,0.5123,0.7151,0.4760,0.7392,0.4206,0.7099,0.4498,0.6909,0.4759,0.6634};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_2()
		{
			double[] value = {0.4958,0.6390,0.5433,0.6943,0.5245,0.6680,0.4983,0.6912,0.4305,0.7633,0.3521,0.9011,0.3376,0.8898,0.3308,0.8418,0.3467,0.8112,0.4059,0.7165,0.4224,0.7420,0.4007,0.7518,0.4151,0.8536,0.4345,0.8295,0.4738,0.8653,0.4521,0.8881,0.3783,0.9535,0.3384,0.9802,0.3822,0.9143,0.4952,0.8347,0.5351,0.8559,0.5104,0.8948,0.5452,0.8153,0.5101,0.8139,0.5724,0.7633,0.5359,0.7734,0.4624,0.8077,0.4995,0.7871,0.4848,0.9229,0.5083,0.9525,0.5417,0.9181,0.3752,0.9878,0.5679,0.8700,0.5788,0.8177,0.3578,0.7892,0.3097,0.8154,0.3154,0.7987,0.3290,0.7806,0.3435,0.9461,0.4651,0.7171,0.3254,0.9764,0.3313,0.9417,0.4282,0.6600,0.4402,0.6350,0.4485,0.6108,0.4191,0.6751,0.4150,0.6357,0.4106,0.6599,0.3936,0.6872,0.3852,0.6587,0.3746,0.6244,0.4077,0.6759,0.3738,0.7126,0.3584,0.6814,0.3424,0.6395,0.4179,0.9552,0.4106,0.9233,0.4238,0.9886,0.3527,0.8541,0.3678,0.8633,0.4526,0.9442,0.4287,0.9099,0.4676,0.9767,0.3964,0.8826,0.4143,0.6105,0.0372,0.4684,0.0249,0.4542,0.0241,0.4415,0.0388,0.4335,0.2247,0.4452,0.1922,0.4606,0.1719,0.4221,0.2003,0.4106,0.1629,0.4745,0.1252,0.4757,0.1141,0.4438,0.1434,0.4351,0.0815,0.4733,0.0808,0.4432,0.1466,0.5909,0.0935,0.6006,0.0907,0.5593,0.1389,0.5550,0.0390,0.5132,0.0122,0.5126,0.0095,0.4772,0.2430,0.4804,0.2084,0.4958,0.1735,0.5118,0.1336,0.5167,0.1688,0.3756,0.1393,0.3869,0.1065,0.3532,0.1322,0.3388,0.0536,0.3978,0.0302,0.3850,0.0488,0.3588,0.0728,0.3763,0.0399,0.5582,0.0126,0.5563};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_3()
		{
			double[] value = {0.2591,0.5120,0.2630,0.5348,0.2307,0.5524,0.2218,0.5270,0.1845,0.5425,0.0066,0.4603,0.0873,0.4167,0.2236,0.4017,0.2069,0.3662,0.2569,0.3479,0.2546,0.3886,0.1110,0.3112,0.1261,0.3036,0.1451,0.3315,0.1727,0.3498,0.1993,0.3476,0.0408,0.6017,0.0835,0.3282,0.1083,0.4016,0.2786,0.3131,0.2269,0.3316,0.2435,0.3053,0.2347,0.4419,0.2503,0.4501,0.2480,0.4526,0.2896,0.4632,0.2847,0.4724,0.2662,0.4593,0.2804,0.5029,0.2779,0.4930,0.2634,0.4615,0.2805,0.4753,0.2751,0.4955,0.2662,0.4451,0.2647,0.4342,0.0054,0.4443,0.0076,0.4342,0.0115,0.6002,0.1928,0.5723,0.2437,0.2708,0.2789,0.2666,0.0146,0.4211,0.0884,0.5164,0.1667,0.3148,0.1826,0.3288,0.1531,0.2901,0.2127,0.3004,0.2106,0.2740,0.2052,0.3173,0.1932,0.3293,0.1795,0.2807,0.3845,0.7969,0.4084,0.8030,0.3864,0.8314,0.3694,0.8215,0.3982,0.7818,0.5123,0.7151,0.5223,0.7377,0.4842,0.7563,0.4760,0.7392,0.5577,0.7215,0.5433,0.6943,0.4759,0.6634,0.4958,0.6390,0.5245,0.6680,0.4983,0.6912,0.4305,0.7633,0.4405,0.7791,0.4151,0.8536,0.3964,0.8826,0.3678,0.8633,0.3527,0.8541,0.3308,0.8418,0.3467,0.8112,0.4224,0.7420,0.4007,0.7518,0.4059,0.7165,0.4206,0.7099,0.4345,0.8295,0.4738,0.8653,0.4521,0.8881,0.4952,0.8347,0.5351,0.8559,0.5104,0.8948,0.5452,0.8153,0.5101,0.8139,0.5724,0.7633,0.5359,0.7734,0.4995,0.7871,0.4624,0.8077,0.3822,0.9143,0.3783,0.9535,0.3435,0.9461,0.3521,0.9011,0.5083,0.9525,0.4848,0.9229,0.5417,0.9181,0.5679,0.8700,0.5788,0.8177,0.3578,0.7892};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_4()
		{
			double[] value = {0.3097,0.8154,0.3154,0.7987,0.3290,0.7806,0.3376,0.8898,0.3752,0.9878,0.3384,0.9802,0.4651,0.7171,0.4498,0.6909,0.3254,0.9764,0.3313,0.9417,0.4282,0.6600,0.4402,0.6350,0.4485,0.6108,0.4191,0.6751,0.4150,0.6357,0.4106,0.6599,0.3936,0.6872,0.3852,0.6587,0.4077,0.6759,0.4143,0.6105,0.3738,0.7126,0.3584,0.6814,0.3424,0.6395,0.3746,0.6244,0.4179,0.9552,0.4106,0.9233,0.4287,0.9099,0.4526,0.9442,0.4676,0.9767,0.4238,0.9886};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=8, element #32, 624 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=8, element #32, 624 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=9, element #32, 240 total numbers made up of 80 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_9_32_point()
		{
			MFVec3f Coordinate_9_32_point = new MFVec3f(new double[] {1.0650,0.4278,-0.4753,1.1570,0.4279,0.4804,0.3800,0.4279,-0.7942,0.4327,0.4280,0.8379,0.7564,0.4279,-0.6706,0.8493,0.4280,0.7485,1.2360,0.4279,0.0276,0.1891,-0.6124,-0.4081,1.3140,0.0475,0.0276,0.7922,-0.2644,-0.7720,0.3243,-0.4708,0.6320,0.1487,-0.6933,0.0276,0.4321,-0.0582,0.8517,1.1090,-0.1342,-0.5169,0.8493,-0.0340,0.7754,1.2120,0.0133,0.5223,0.4022,-0.3056,-0.8220,1.0890,0.1786,-0.5113,0.3911,0.1084,-0.8711,0.7658,0.1372,-0.7490,1.0980,0.6332,0.0276,0.3576,0.6335,0.7143,0.7709,0.6335,0.6183,1.0900,0.6333,0.3331,0.3233,0.6330,-0.5737,0.6544,0.6330,-0.4902,0.9160,0.6331,-0.3319,0.0000,-0.0753,0.8711,-0.0000,-0.5237,0.6522,0.0000,0.4278,-0.8027,0.0000,-0.5042,-0.6412,0.0000,0.0984,-0.8582,0.0000,0.6330,-0.5976,0.0000,0.7811,0.0276,0.8079,-0.4859,-0.7545,0.3777,-0.5158,-0.6424,1.1670,-0.3819,-0.5223,1.3380,-0.3144,0.0276,1.2220,-0.3169,0.5626,0.8493,-0.3389,0.7954,0.8539,-0.7811,0.0223,-1.0890,0.1786,-0.5113,-1.0650,0.4278,-0.4753,-1.2360,0.4279,0.0276,-1.3140,0.0475,0.0276,-0.4321,-0.0582,0.8517,-0.3243,-0.4708,0.6320,-0.8493,-0.0340,0.7754,-0.8493,0.4280,0.7485,-0.4327,0.4280,0.8379,-1.1570,0.4279,0.4804,-1.2120,0.0133,0.5223,-0.3800,0.4279,-0.7942,-0.3911,0.1084,-0.8711,-0.7658,0.1372,-0.7490,-0.7564,0.4279,-0.6706,-0.7922,-0.2644,-0.7720,-0.4022,-0.3056,-0.8220,-0.1891,-0.6124,-0.4081,-0.1487,-0.6933,0.0276,0.0000,-0.6758,0.0276,0.0000,-0.5948,-0.4427,-0.3777,-0.5158,-0.6424,0.0000,-0.2427,-0.8343,-1.1090,-0.1342,-0.5169,0.0000,0.4280,0.8585,-0.3576,0.6335,0.7143,0.0000,0.6335,0.7001,-0.9160,0.6331,-0.3319,-1.0980,0.6332,0.0276,-0.7709,0.6335,0.6183,-1.0900,0.6333,0.3331,-0.3233,0.6330,-0.5737,-0.6544,0.6330,-0.4902,-1.1670,-0.3819,-0.5223,-1.3380,-0.3144,0.0276,-0.8079,-0.4859,-0.7545,-1.2220,-0.3169,0.5626,-0.8493,-0.3389,0.7954,-0.8539,-0.7811,0.0223});
			return Coordinate_9_32_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=9, element #33, 188 total numbers made up of 94 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_9_33_point()
		{
			MFVec2f TextureCoordinate_9_33_point = new MFVec2f(new double[] {0.5818,0.0856,0.5841,0.1063,0.5680,0.1063,0.4728,0.0659,0.4321,0.0645,0.4321,0.0274,0.4626,0.0318,0.5120,0.0680,0.5120,0.1061,0.4728,0.1061,0.5409,0.1061,0.5462,0.0719,0.5606,0.0748,0.6485,0.1063,0.6475,0.0798,0.6843,0.0790,0.6843,0.1063,0.6122,0.0822,0.6131,0.1063,0.6097,0.0490,0.6464,0.0456,0.6665,0.0202,0.6703,0.0135,0.6843,0.0149,0.6843,0.0216,0.6487,0.0282,0.5558,0.0747,0.5484,0.1062,0.4321,0.1061,0.6843,0.0291,0.6843,0.0508,0.4321,0.0148,0.4461,0.0134,0.5799,0.0597,0.5981,0.1233,0.5809,0.1233,0.6843,0.1233,0.6539,0.1233,0.6227,0.1233,0.4657,0.1231,0.4321,0.1231,0.5046,0.1231,0.6843,0.1355,0.5745,0.0392,0.5584,0.0448,0.6083,0.0306,0.6039,0.0062,0.5347,0.1231,0.5354,0.1232,0.4321,0.1354,0.5471,0.0445,0.7867,0.0856,0.8080,0.0748,0.8006,0.1063,0.7845,0.1063,0.7200,0.1063,0.5120,0.0427,0.7211,0.0798,0.7555,0.1063,0.7563,0.0822,0.7588,0.0490,0.7221,0.0456,0.7021,0.0202,0.6983,0.0135,0.7198,0.0282,0.7886,0.0597,0.7876,0.1233,0.7705,0.1233,0.7147,0.1233,0.7459,0.1233,0.7941,0.0392,0.8102,0.0448,0.7603,0.0306,0.7646,0.0062,0.5580,0.0447,0.5125,0.0061,0.3914,0.0659,0.4016,0.0318,0.3914,0.1061,0.3522,0.1061,0.3522,0.0680,0.3233,0.1061,0.3158,0.1062,0.3084,0.0747,0.3180,0.0719,0.4181,0.0134,0.3984,0.1231,0.3595,0.1231,0.3295,0.1231,0.3287,0.1232,0.3171,0.0445,0.3522,0.0427,0.3062,0.0447,0.3517,0.0061});
			return TextureCoordinate_9_33_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #41, 424 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #41, 424 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #41, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_41_point()
		{
			MFVec3f Coordinate_10_41_point = new MFVec3f(new double[] {2.6720,-0.3788,0.1246,1.8980,-0.6834,-2.3580,0.2782,-1.1530,-3.4070,-1.9050,-1.0760,2.8540,0.4654,-0.4893,3.5920,2.1500,-0.3899,2.5400,-1.9080,-3.1770,-2.4250,2.7090,-2.6900,0.1246,1.9760,-2.8080,-2.2680,0.3775,-2.9970,-3.1890,-2.4460,-3.1930,0.1246,-1.8800,-3.1460,2.7210,0.4072,-2.9460,3.4930,2.1910,-2.7550,2.5310,-2.5150,-1.7060,-1.8430,-2.7020,-1.7070,0.1246,-0.6965,2.9790,0.1569,2.0990,-15.6000,0.1207,1.6760,-15.6000,-1.3530,0.3545,-15.6000,-1.9720,-1.5300,-15.6000,0.1510,-1.0840,-15.6000,1.8020,0.3545,-15.6000,2.3710,1.6790,-15.6000,1.8670,2.6320,-8.3740,0.1246,1.9810,-8.4460,-1.9850,0.3067,-8.5130,-2.7710,-2.1580,-8.6990,0.1246,-1.6830,-8.6590,2.3270,0.3670,-8.5810,3.0880,2.1810,-8.4270,2.3750,-1.1100,-15.6000,-1.3380,-1.7500,-8.6940,-1.9160,0.3545,-16.0500,0.1404,-1.6640,-1.5210,-2.9010,0.9279,2.8850,1.7240,1.2840,2.9970,0.1569,0.6394,2.6720,-1.7400,-0.0838,2.3020,-2.4790,-2.0830,1.0440,-1.6180,-2.4640,0.6629,0.1614,-1.5010,1.6140,2.5280,-0.0381,2.4620,2.4480,-1.5090,1.6060,-2.5090,-1.5240,-13.9900,2.0190,0.3608,-13.8100,2.7570,2.0230,-13.8700,2.0430,0.3545,-14.9900,-2.2670,0.3545,-15.0000,2.8260,1.8650,-14.9900,2.1100,-1.3660,-14.9900,-1.5970,1.8650,-14.9900,-1.5970,2.4030,-14.9900,0.1287,-1.8560,-14.9900,0.1287,-1.3660,-14.9900,2.1100});
			return Coordinate_10_41_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #50, 135 total numbers made up of 45 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_50_point()
		{
			MFVec3f Coordinate_11_50_point = new MFVec3f(new double[] {1.0210,-13.7900,-1.0710,1.4180,-13.7900,0.1246,-0.1011,-13.7900,-1.4780,-1.5030,-13.7900,0.1245,-1.1110,-13.7900,1.2620,-0.1011,-13.7900,1.8000,0.9931,-13.7900,1.2650,-1.1410,-13.7900,-1.0730,1.2980,-6.4970,-1.3650,1.8400,-6.3180,0.1245,-0.0526,-6.7970,-2.1880,-1.9790,-7.2060,0.1245,-1.5770,-7.0860,-1.3600,-1.5460,-7.0790,1.6790,-0.0424,-6.7970,2.2850,1.4010,-6.5510,1.6540,1.0860,-13.2600,-1.2220,-0.1011,-13.2600,-1.7410,-1.7390,-13.2600,0.1246,-1.3380,-13.2600,1.4840,-0.1011,-13.2600,2.0710,1.1780,-13.2600,1.4620,1.6610,-13.2600,0.1246,-1.4200,-13.2600,-1.2240,-0.1011,-13.9700,0.1246,-1.6380,-1.0840,1.9610,-0.0255,-1.1680,2.5940,1.4520,-1.0450,1.9490,1.5020,-0.0626,-1.5970,-0.0086,-0.0623,-2.2670,1.7000,0.4427,0.1149,1.2850,0.4687,-1.3680,-0.0086,0.4513,-1.9770,-1.9200,0.4436,0.1541,-1.4680,0.4591,1.7780,-0.0086,0.4334,2.3640,1.2780,0.4363,1.8390,-1.4960,0.4475,-1.3280,-0.0086,0.7828,0.2482,2.0400,-0.0635,0.1287,-2.2190,-0.0635,0.1287,-1.7290,-0.0644,2.1100,-0.0085,-0.0648,2.8260,1.5020,-0.0645,2.1100,-1.7290,-0.0627,-1.5970});
			return Coordinate_11_50_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #59, 488 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #59, 488 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #59, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_59_point()
		{
			MFVec3f Coordinate_12_59_point = new MFVec3f(new double[] {1.8470,-1.0160,0.0389,1.4570,0.5491,0.0251,1.0070,0.5497,-0.9288,1.1180,0.5485,0.8556,1.1260,-0.0530,-1.0970,1.2630,-0.0531,1.1380,1.5670,-0.0531,0.0087,1.4640,-0.0107,0.0128,1.1320,-0.0107,1.0200,1.5160,-0.7508,1.4960,-1.8470,-1.0160,0.0389,-1.5670,-0.0531,0.0086,0.0000,-0.0530,-1.7730,0.0000,-0.0531,1.7960,-1.5160,-0.7508,1.4960,-1.2630,-0.0531,1.1380,-1.1260,-0.0530,-1.0970,-1.4640,-0.0107,0.0127,0.0000,-0.0106,-1.6610,-1.1320,-0.0107,1.0200,0.0000,-0.0107,1.5560,-1.4570,0.5491,0.0251,-1.0070,0.5497,-0.9288,0.0000,1.1520,-0.0027,0.0000,0.5499,-1.3380,0.0000,0.5482,1.3970,-1.1180,0.5485,0.8556,0.0000,-1.0670,-2.1150,0.0000,-0.5525,2.1300,1.0200,-0.0106,-1.0720,-1.0210,-0.0106,-1.0730,1.7580,-4.1960,0.2651,1.2430,-4.1950,-1.3700,2.0660,-3.6100,0.1277,1.5480,-3.6090,-1.4960,1.3490,-1.0690,-1.3970,1.9560,-2.2390,0.0850,1.4480,-2.2630,-1.5510,-1.3490,-1.0690,-1.3970,-1.4480,-2.2630,-1.5510,0.0000,-2.2730,-2.2790,-1.9560,-2.2390,0.0850,0.0000,-3.6080,-2.2340,-1.5480,-3.6090,-1.4960,-1.2430,-4.1950,-1.3700,0.0000,-4.1940,-2.0500,-2.0660,-3.6100,0.1277,-1.7580,-4.1960,0.2651,0.0000,-4.1950,-1.3700,0.0000,-4.1970,0.2651,0.0000,-3.3400,2.0000,0.9560,-2.9580,1.8600,0.0000,-3.2040,1.9500,-0.9560,-2.9580,1.8600,-1.1640,-2.7130,1.7710,-1.2340,-3.3240,2.6400,-1.3030,-3.6470,2.6620,-1.1090,-3.8280,2.7710,0.0000,-3.8930,3.0000,1.1090,-3.8280,2.7710,1.3030,-3.6470,2.6620,1.2340,-3.3240,2.6400,1.1640,-2.7130,1.7710});
			return Coordinate_12_59_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #60, 162 total numbers made up of 81 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_60_point()
		{
			MFVec2f TextureCoordinate_12_60_point = new MFVec2f(new double[] {0.0718,0.0975,0.0297,0.0959,0.0385,0.1261,0.0709,0.1255,0.0086,0.0960,0.0186,0.1255,0.2264,0.2407,0.1146,0.1052,0.1041,0.1255,0.0710,0.1267,0.0219,0.1267,0.1006,0.1267,0.2264,0.2171,0.0714,0.1432,0.0434,0.1432,0.0706,0.1608,0.0314,0.1432,0.1117,0.1432,0.0958,0.1432,0.0718,0.0975,0.0709,0.1255,0.0385,0.1261,0.0297,0.0959,0.1041,0.1255,0.1146,0.1052,0.0710,0.1267,0.1006,0.1267,0.0714,0.1432,0.0434,0.1432,0.0958,0.1432,0.0392,0.1286,0.0391,0.1285,0.2791,0.2323,0.2703,0.2485,0.2658,0.2539,0.2264,0.2538,0.2653,0.2613,0.2264,0.2613,0.1824,0.2485,0.1736,0.2323,0.1870,0.2539,0.1875,0.2613,0.0086,0.0960,0.0297,0.0959,0.0251,0.0611,0.0038,0.0608,0.0718,0.0975,0.0732,0.0620,0.0051,0.0217,0.0267,0.0217,0.0305,0.0046,0.0105,0.0046,0.0744,0.0217,0.0784,0.0046,0.0305,0.0046,0.0784,0.0045,0.0251,0.0611,0.0297,0.0959,0.0732,0.0620,0.0718,0.0975,0.0305,0.0046,0.0267,0.0217,0.0784,0.0046,0.0744,0.0217,0.0991,0.0776,0.1068,0.0914,0.1891,0.1549,0.1627,0.1473,0.1363,0.1549,0.1068,0.0914,0.0854,0.0875,0.0854,0.0875,0.0861,0.0698,0.0867,0.0496,0.0887,0.0411,0.0887,0.0410,0.0887,0.0411,0.0867,0.0496,0.0861,0.0698,0.0854,0.0875,0.0854,0.0875});
			return TextureCoordinate_12_60_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #68, 416 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #68, 416 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #68, 162 total numbers made up of 54 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_68_point()
		{
			MFVec3f Coordinate_13_68_point = new MFVec3f(new double[] {1.7690,-0.6918,0.7987,1.7580,-3.4270,-1.2490,2.0660,-2.7660,-1.3860,1.8470,-0.2455,-1.4750,1.5160,0.0194,-0.0180,1.3010,-2.6290,-2.1640,1.1910,-0.8667,-2.2090,-1.7690,-0.6918,0.7987,-1.5160,0.0194,-0.0180,-1.8470,-0.2455,-1.4750,-2.0660,-2.7660,-1.3860,-1.7580,-3.4270,-1.2490,0.0000,-3.4260,-1.2490,0.0000,-3.4180,0.8189,0.0000,0.2209,-1.2720,0.0000,0.4548,-0.0643,-1.3010,-2.6290,-2.1640,0.0000,-2.9960,-2.0200,0.0000,-1.4330,-2.3870,-1.1910,-0.8667,-2.2090,0.0000,-0.6593,-2.0200,0.0000,0.2177,0.6159,1.9990,-1.3800,2.1850,2.1760,-3.4300,2.2550,2.0860,-1.9040,3.4810,2.1350,-3.4300,3.5500,1.7520,-2.2360,4.7890,1.8220,-3.4300,5.1420,2.2680,-2.7930,2.2380,2.1960,-2.8120,3.5110,1.8960,-2.7950,5.1100,1.8240,-3.4270,0.8189,2.0060,-2.7670,0.7950,-1.7520,-2.2360,4.7890,0.0000,-2.0100,5.2040,0.0000,-2.7900,5.6600,-1.8960,-2.7950,5.1100,0.0000,-3.4300,5.6220,-1.8220,-3.4300,5.1420,-1.8240,-3.4270,0.8189,-2.0060,-2.7670,0.7950,-2.2680,-2.7930,2.2380,-2.1630,-1.3800,2.1850,-2.0860,-1.9040,3.4810,-2.1960,-2.8120,3.5110,0.0000,-3.4300,2.2550,-2.0130,-3.4300,2.2550,-2.1350,-3.4300,3.5500,0.0000,-3.4300,3.5500,0.0000,-1.5360,3.7890,0.0000,-0.2974,1.2960,0.0000,-0.9464,2.4410,1.9540,-1.4690,-1.4320,-1.9540,-1.4690,-1.4310});
			return Coordinate_13_68_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #81, 424 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #81, 424 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #81, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_81_point()
		{
			MFVec3f Coordinate_10_81_point = new MFVec3f(new double[] {-2.6720,-0.3788,0.1245,-1.8980,-0.6834,-2.3580,-0.2782,-1.1530,-3.4070,1.9050,-1.0760,2.8540,-0.4654,-0.4893,3.5920,-2.1500,-0.3899,2.5400,1.9080,-3.1770,-2.4250,-2.7090,-2.6900,0.1246,-1.9760,-2.8080,-2.2680,-0.3775,-2.9970,-3.1890,2.4460,-3.1930,0.1246,1.8800,-3.1460,2.7210,-0.4072,-2.9460,3.4930,-2.1910,-2.7550,2.5310,2.5150,-1.7060,-1.8430,2.7020,-1.7070,0.1246,0.6965,2.9790,0.1569,-2.0990,-15.6000,0.1207,-1.6760,-15.6000,-1.3530,-0.3545,-15.6000,-1.9720,1.5300,-15.6000,0.1510,1.0840,-15.6000,1.8020,-0.3545,-15.6000,2.3710,-1.6790,-15.6000,1.8670,-2.6320,-8.3740,0.1246,-1.9810,-8.4460,-1.9850,-0.3067,-8.5130,-2.7710,2.1580,-8.6990,0.1246,1.6830,-8.6590,2.3270,-0.3670,-8.5810,3.0880,-2.1810,-8.4270,2.3750,1.1100,-15.6000,-1.3380,1.7500,-8.6940,-1.9160,-0.3545,-16.0500,0.1404,1.6640,-1.5210,-2.9010,-0.9279,2.8850,1.7240,-1.2840,2.9970,0.1569,-0.6394,2.6720,-1.7400,0.0838,2.3020,-2.4790,2.0830,1.0440,-1.6180,2.4640,0.6629,0.1614,1.5010,1.6140,2.5280,0.0381,2.4620,2.4480,1.5090,1.6060,-2.5090,1.5240,-13.9900,2.0190,-0.3608,-13.8100,2.7570,-2.0230,-13.8700,2.0430,-0.3545,-14.9900,-2.2670,-0.3545,-15.0000,2.8260,-1.8650,-14.9900,2.1100,1.3660,-14.9900,-1.5970,-1.8650,-14.9900,-1.5970,-2.4030,-14.9900,0.1287,1.8560,-14.9900,0.1287,1.3660,-14.9900,2.1100});
			return Coordinate_10_81_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #90, 135 total numbers made up of 45 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_90_point()
		{
			MFVec3f Coordinate_11_90_point = new MFVec3f(new double[] {-1.0210,-13.7900,-1.0710,-1.3680,-13.7900,0.1246,0.1011,-13.7900,-1.4780,1.4510,-13.7900,0.1246,1.1110,-13.7900,1.2620,0.1011,-13.7900,1.8000,-0.9931,-13.7900,1.2650,1.1410,-13.7900,-1.0730,-1.2980,-6.4970,-1.3650,-1.8400,-6.3180,0.1245,0.0526,-6.7970,-2.1880,1.9790,-7.2060,0.1246,1.5770,-7.0860,-1.3600,1.5460,-7.0790,1.6790,0.0424,-6.7970,2.2850,-1.4010,-6.5510,1.6540,-1.0860,-13.2600,-1.2220,0.1011,-13.2600,-1.7410,1.7390,-13.2600,0.1246,1.3380,-13.2600,1.4840,0.1011,-13.2600,2.0710,-1.1780,-13.2600,1.4620,-1.6610,-13.2600,0.1246,1.4200,-13.2600,-1.2240,0.1011,-13.9700,0.1246,1.6380,-1.0840,1.9610,0.0255,-1.1680,2.5940,-1.4520,-1.0450,1.9490,-1.5020,-0.0626,-1.5970,0.0086,-0.0622,-2.2670,-1.7000,0.4427,0.1149,-1.2850,0.4687,-1.3680,0.0086,0.4514,-1.9770,1.9200,0.4436,0.1541,1.4680,0.4591,1.7780,0.0086,0.4334,2.3640,-1.2780,0.4363,1.8390,1.4960,0.4475,-1.3280,0.0086,0.7828,0.2482,-2.0400,-0.0635,0.1287,2.2190,-0.0635,0.1287,1.7290,-0.0645,2.1100,0.0085,-0.0649,2.8260,-1.5020,-0.0645,2.1100,1.7290,-0.0626,-1.5970});
			return Coordinate_11_90_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #99, 488 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #99, 488 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #99, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_99_point()
		{
			MFVec3f Coordinate_12_99_point = new MFVec3f(new double[] {-1.8470,-1.0160,0.0389,-1.4570,0.5491,0.0251,-1.0070,0.5497,-0.9288,-1.1180,0.5485,0.8556,-1.1260,-0.0530,-1.0970,-1.2630,-0.0531,1.1380,-1.5670,-0.0531,0.0087,-1.4640,-0.0107,0.0128,-1.1320,-0.0107,1.0200,-1.5160,-0.7508,1.4960,1.8470,-1.0160,0.0389,1.5670,-0.0531,0.0086,0.0000,-0.0530,-1.7730,0.0000,-0.0531,1.7960,1.5160,-0.7508,1.4960,1.2630,-0.0531,1.1380,1.1260,-0.0530,-1.0970,1.4640,-0.0107,0.0127,0.0000,-0.0106,-1.6610,1.1320,-0.0107,1.0200,0.0000,-0.0107,1.5560,1.4570,0.5491,0.0251,1.0070,0.5497,-0.9288,0.0000,1.1520,-0.0027,0.0000,0.5499,-1.3380,0.0000,0.5482,1.3970,1.1180,0.5485,0.8556,0.0000,-1.0670,-2.1150,0.0000,-0.5525,2.1300,-1.0200,-0.0106,-1.0720,1.0210,-0.0106,-1.0730,-1.7580,-4.1960,0.2651,-1.2430,-4.1950,-1.3700,-2.0660,-3.6100,0.1277,-1.5480,-3.6090,-1.4960,-1.3490,-1.0690,-1.3970,-1.9560,-2.2390,0.0850,-1.4480,-2.2630,-1.5510,1.3490,-1.0690,-1.3970,1.4480,-2.2630,-1.5510,0.0000,-2.2730,-2.2790,1.9560,-2.2390,0.0850,0.0000,-3.6080,-2.2340,1.5480,-3.6090,-1.4960,1.2430,-4.1950,-1.3700,-0.0000,-4.1940,-2.0500,2.0660,-3.6100,0.1277,1.7580,-4.1960,0.2651,-0.0000,-4.1950,-1.3700,-0.0000,-4.1970,0.2651,0.0000,-3.3400,2.0000,-0.9560,-2.9580,1.8600,0.0000,-3.2040,1.9500,0.9560,-2.9580,1.8600,1.1640,-2.7130,1.7710,1.2340,-3.3240,2.6400,1.3030,-3.6470,2.6620,1.1090,-3.8280,2.7710,0.0000,-3.8930,3.0000,-1.1090,-3.8280,2.7710,-1.3030,-3.6470,2.6620,-1.2340,-3.3240,2.6400,-1.1640,-2.7130,1.7710});
			return Coordinate_12_99_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #100, 162 total numbers made up of 81 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_100_point()
		{
			MFVec2f TextureCoordinate_12_100_point = new MFVec2f(new double[] {0.0718,0.0975,0.0297,0.0959,0.0385,0.1261,0.0709,0.1255,0.0086,0.0960,0.0186,0.1255,0.2264,0.2407,0.1146,0.1052,0.1041,0.1255,0.0710,0.1267,0.0219,0.1267,0.1006,0.1267,0.2264,0.2171,0.0714,0.1432,0.0434,0.1432,0.0706,0.1608,0.0314,0.1432,0.1117,0.1432,0.0958,0.1432,0.0718,0.0975,0.0709,0.1255,0.0385,0.1261,0.0297,0.0959,0.1041,0.1255,0.1146,0.1052,0.0710,0.1267,0.1006,0.1267,0.0714,0.1432,0.0434,0.1432,0.0958,0.1432,0.0392,0.1286,0.0391,0.1285,0.2791,0.2323,0.2703,0.2485,0.2658,0.2539,0.2264,0.2538,0.2653,0.2613,0.2264,0.2613,0.1824,0.2485,0.1736,0.2323,0.1870,0.2539,0.1875,0.2613,0.0086,0.0960,0.0297,0.0959,0.0251,0.0611,0.0038,0.0608,0.0718,0.0975,0.0732,0.0620,0.0051,0.0217,0.0267,0.0217,0.0305,0.0046,0.0105,0.0046,0.0744,0.0217,0.0784,0.0046,0.0305,0.0046,0.0784,0.0045,0.0251,0.0611,0.0297,0.0959,0.0732,0.0620,0.0718,0.0975,0.0305,0.0046,0.0267,0.0217,0.0784,0.0046,0.0744,0.0217,0.0991,0.0776,0.1068,0.0914,0.1891,0.1549,0.1627,0.1473,0.1363,0.1549,0.1068,0.0914,0.0854,0.0875,0.0854,0.0875,0.0861,0.0698,0.0867,0.0496,0.0887,0.0411,0.0887,0.0410,0.0887,0.0411,0.0867,0.0496,0.0861,0.0698,0.0854,0.0875,0.0854,0.0875});
			return TextureCoordinate_12_100_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #108, 416 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #108, 416 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #108, 162 total numbers made up of 54 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_108_point()
		{
			MFVec3f Coordinate_13_108_point = new MFVec3f(new double[] {-1.7690,-0.6918,0.7987,-1.7580,-3.4270,-1.2490,-2.0660,-2.7660,-1.3860,-1.8470,-0.2455,-1.4750,-1.5160,0.0194,-0.0180,-1.3010,-2.6290,-2.1640,-1.1910,-0.8667,-2.2090,1.7690,-0.6918,0.7987,1.5160,0.0194,-0.0180,1.8470,-0.2455,-1.4750,2.0660,-2.7660,-1.3860,1.7580,-3.4270,-1.2490,-0.0000,-3.4260,-1.2490,0.0000,-3.4180,0.8189,0.0000,0.2209,-1.2720,0.0000,0.4548,-0.0643,1.3010,-2.6290,-2.1640,-0.0000,-2.9960,-2.0200,0.0000,-1.4330,-2.3870,1.1910,-0.8667,-2.2090,0.0000,-0.6593,-2.0200,0.0000,0.2177,0.6159,-1.9990,-1.3800,2.1850,-2.1760,-3.4300,2.2550,-2.0860,-1.9040,3.4810,-2.1350,-3.4300,3.5500,-1.7520,-2.2360,4.7890,-1.8220,-3.4300,5.1420,-2.2680,-2.7930,2.2380,-2.1960,-2.8120,3.5110,-1.8960,-2.7950,5.1100,-1.8240,-3.4270,0.8189,-2.0060,-2.7670,0.7950,1.7520,-2.2360,4.7890,0.0000,-2.0100,5.2040,0.0000,-2.7900,5.6600,1.8960,-2.7950,5.1100,0.0000,-3.4300,5.6220,1.8220,-3.4300,5.1420,1.8240,-3.4270,0.8189,2.0060,-2.7670,0.7950,2.2680,-2.7930,2.2380,2.1630,-1.3800,2.1850,2.0860,-1.9040,3.4810,2.1960,-2.8120,3.5110,0.0000,-3.4300,2.2550,2.0130,-3.4300,2.2550,2.1350,-3.4300,3.5500,0.0000,-3.4300,3.5500,0.0000,-1.5360,3.7890,0.0000,-0.2974,1.2960,0.0000,-0.9464,2.4410,-1.9540,-1.4690,-1.4320,1.9540,-1.4690,-1.4310});
			return Coordinate_13_108_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #121, 624 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_121_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_121_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_121_coordIndex_1()));
			return IndexedFaceSet_9_121_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #121, 624 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_121_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_121_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_121_texCoordIndex_1()));
			return IndexedFaceSet_9_121_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #121, 240 total numbers made up of 80 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_121_point()
		{
			MFVec3f Coordinate_10_121_point = new MFVec3f(new double[] {4.8080,4.9310,-2.1460,5.2220,4.9310,2.1690,1.7160,4.9310,-3.5860,1.9540,4.9310,3.7840,3.4150,4.9310,-3.0280,3.8350,4.9310,3.3800,5.5800,4.9310,0.1246,0.8538,0.2331,-1.8430,5.9350,3.2130,0.1245,3.5770,1.8050,-3.4860,1.4650,0.8727,2.8540,0.6716,-0.1321,0.1246,1.9510,2.7360,3.8460,5.0080,2.3930,-2.3340,3.8350,2.8450,3.5020,5.4750,3.0590,2.3580,1.8160,1.6190,-3.7120,4.9170,3.8050,-2.3090,1.7660,3.4880,-3.9340,3.4580,3.6180,-3.3820,4.9590,5.8580,0.1246,1.6150,5.8590,3.2250,3.4810,5.8590,2.7920,4.9220,5.8580,1.5040,1.4600,5.8570,-2.5910,2.9550,5.8570,-2.2140,4.1370,5.8570,-1.4990,0.0000,2.6590,3.9340,-0.0001,0.6338,2.9450,0.0000,4.9310,-3.6250,0.0000,0.7220,-2.8960,0.0000,3.4430,-3.8750,0.0000,5.8570,-2.6990,0.0000,6.5260,0.1246,3.6480,0.8046,-3.4070,1.7060,0.6696,-2.9010,5.2680,1.2740,-2.3580,6.0420,1.5790,0.1246,5.5200,1.5680,2.5400,3.8350,1.4680,3.5920,3.8560,-0.5285,0.1008,-4.9170,3.8050,-2.3090,-4.8080,4.9310,-2.1460,-5.5800,4.9310,0.1246,-5.9350,3.2130,0.1245,-1.9510,2.7360,3.8460,-1.4650,0.8727,2.8540,-3.8350,2.8450,3.5020,-3.8350,4.9310,3.3800,-1.9540,4.9310,3.7840,-5.2220,4.9310,2.1690,-5.4750,3.0590,2.3580,-1.7160,4.9310,-3.5860,-1.7660,3.4880,-3.9340,-3.4580,3.6180,-3.3820,-3.4150,4.9310,-3.0280,-3.5770,1.8050,-3.4860,-1.8160,1.6190,-3.7120,-0.8538,0.2331,-1.8430,-0.6716,-0.1321,0.1246,0.0000,-0.0530,0.1246,0.0000,0.3128,-1.9990,-1.7060,0.6696,-2.9010,0.0000,1.9030,-3.7670,-5.0080,2.3930,-2.3340,0.0000,4.9310,3.8770,-1.6150,5.8590,3.2250,0.0000,5.8590,3.1620,-4.1370,5.8570,-1.4990,-4.9590,5.8580,0.1246,-3.4810,5.8590,2.7920,-4.9220,5.8580,1.5040,-1.4600,5.8570,-2.5910,-2.9550,5.8570,-2.2140,-5.2680,1.2740,-2.3580,-6.0420,1.5790,0.1246,-3.6480,0.8046,-3.4070,-5.5200,1.5680,2.5400,-3.8350,1.4680,3.5920,-3.8560,-0.5285,0.1008});
			return Coordinate_10_121_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #122, 188 total numbers made up of 94 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_122_point()
		{
			MFVec2f TextureCoordinate_10_122_point = new MFVec2f(new double[] {0.5818,0.0856,0.5841,0.1063,0.5680,0.1063,0.4728,0.0659,0.4321,0.0645,0.4321,0.0274,0.4626,0.0318,0.5120,0.0680,0.5120,0.1061,0.4728,0.1061,0.5409,0.1061,0.5462,0.0719,0.5606,0.0748,0.6485,0.1063,0.6475,0.0798,0.6843,0.0790,0.6843,0.1063,0.6122,0.0822,0.6131,0.1063,0.6097,0.0490,0.6464,0.0456,0.6665,0.0202,0.6703,0.0135,0.6843,0.0149,0.6843,0.0216,0.6487,0.0282,0.5558,0.0747,0.5484,0.1062,0.4321,0.1061,0.6843,0.0291,0.6843,0.0508,0.4321,0.0148,0.4461,0.0134,0.5799,0.0597,0.5981,0.1233,0.5809,0.1233,0.6843,0.1233,0.6539,0.1233,0.6227,0.1233,0.4657,0.1231,0.4321,0.1231,0.5046,0.1231,0.6843,0.1355,0.5745,0.0392,0.5584,0.0448,0.6083,0.0306,0.6039,0.0062,0.5347,0.1231,0.5354,0.1232,0.4321,0.1354,0.5471,0.0445,0.7867,0.0856,0.8080,0.0748,0.8006,0.1063,0.7845,0.1063,0.7200,0.1063,0.5120,0.0427,0.7211,0.0798,0.7555,0.1063,0.7563,0.0822,0.7588,0.0490,0.7221,0.0456,0.7021,0.0202,0.6983,0.0135,0.7198,0.0282,0.7886,0.0597,0.7876,0.1233,0.7705,0.1233,0.7147,0.1233,0.7459,0.1233,0.7941,0.0392,0.8102,0.0448,0.7603,0.0306,0.7646,0.0062,0.5580,0.0447,0.5125,0.0061,0.3914,0.0659,0.4016,0.0318,0.3914,0.1061,0.3522,0.1061,0.3522,0.0680,0.3233,0.1061,0.3158,0.1062,0.3084,0.0747,0.3180,0.0719,0.4181,0.0134,0.3984,0.1231,0.3595,0.1231,0.3295,0.1231,0.3287,0.1232,0.3171,0.0445,0.3522,0.0427,0.3062,0.0447,0.3517,0.0061});
			return TextureCoordinate_10_122_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #130, 608 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #130, 608 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #130, 237 total numbers made up of 79 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_130_point()
		{
			MFVec3f Coordinate_11_130_point = new MFVec3f(new double[] {1.7670,-1.1610,1.1720,2.1470,-1.5320,-0.0447,2.3510,-0.2901,-0.0389,1.7950,-1.2660,-1.2230,0.0596,1.1790,1.7720,0.5362,1.9240,-0.0115,0.1264,-0.2452,1.9900,0.1859,-1.8300,1.3350,0.2617,-2.1930,-0.0009,0.0485,-0.2483,-2.0760,0.2495,1.3470,-1.8650,0.0362,-1.8380,-1.3530,2.0310,1.0330,-1.3120,2.3790,1.2440,-0.0167,1.9550,0.9369,1.2760,1.5290,-0.1076,-1.6800,2.2520,0.2082,-1.2740,2.7510,0.4162,-0.0026,2.2530,0.2116,1.3200,1.4920,-0.1767,1.5680,-0.6647,1.1070,1.6380,-0.6310,1.7970,-0.0150,-0.6357,1.2660,-1.7220,-0.8298,-0.1909,-1.9150,-0.7613,-1.5470,-1.3160,-0.6881,-1.8070,0.0125,-0.6891,-1.4740,1.5390,-0.7549,-0.2064,1.8400,-1.2370,-0.1103,-0.0007,2.6110,-8.3890,-0.9438,2.2560,-9.0340,-0.7256,1.7970,-9.0340,-0.9829,1.7970,-8.3890,-1.2180,3.0540,-8.3890,0.0688,2.7200,-9.0340,0.0715,2.6110,-8.3890,1.0660,2.2910,-9.0340,0.8983,1.7970,-8.3890,1.4480,1.7970,-9.0340,1.2010,1.0740,-8.3890,1.0660,1.2630,-9.0340,0.8963,0.6698,-8.3890,0.0688,0.9696,-9.0340,0.0715,1.2980,-9.0340,-0.7088,1.0740,-8.3890,-0.9438,2.5690,-5.1110,-1.0440,1.7190,-5.2540,-1.4160,2.9670,-5.0500,0.0688,2.5210,-5.1260,1.1880,1.6830,-5.2620,1.5180,0.8179,-5.3400,1.2150,0.3515,-5.3770,0.0688,0.7857,-5.3230,-1.0330,1.7970,-9.5200,0.0715,1.5150,-1.0330,-1.6480,2.4370,-0.8613,-1.2510,2.9430,-0.8246,-0.0030,2.4300,-0.8639,1.3240,1.4750,-1.0470,1.6650,0.4746,-1.3020,1.2020,-0.0299,-1.4690,-0.0050,0.4862,-1.2780,-1.0650,1.5480,-0.1070,-1.6630,2.2400,0.2082,-1.2740,2.7390,0.4162,-0.0026,2.2410,0.2116,1.3200,1.5030,-0.1733,1.5880,0.4003,-0.5019,1.2380,-0.1000,-0.6640,-0.0078,0.4167,-0.4852,-1.0710,1.9560,0.4708,-0.9897,1.5250,0.3302,-1.2230,0.6903,-0.0093,-0.7764,0.3054,-0.1320,0.0087,0.6728,-0.0140,0.9228,1.4930,0.3035,1.1760,1.9660,0.4903,0.9942,2.3410,0.6409,0.0007,1.3580,0.5602,0.0126});
			return Coordinate_11_130_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #131, 168 total numbers made up of 84 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_131_point()
		{
			MFVec2f TextureCoordinate_11_131_point = new MFVec2f(new double[] {0.9511,0.2077,0.9350,0.2198,0.9206,0.1937,0.9340,0.1916,0.9169,0.2296,0.9109,0.2043,0.9019,0.2306,0.8990,0.2124,0.9892,0.1709,0.9767,0.1844,0.9553,0.1714,0.9561,0.1559,0.8848,0.2349,0.8854,0.2117,0.8909,0.1883,0.9635,0.1960,0.9475,0.1844,0.9356,0.1821,0.9135,0.1812,0.9039,0.2015,0.9450,0.2364,0.9197,0.2361,0.9561,0.2144,0.9690,0.2041,0.9817,0.1943,0.9972,0.1927,0.8919,0.2437,0.9056,0.2404,0.9154,0.2635,0.8657,0.2399,0.8704,0.2036,0.9315,0.1649,0.8809,0.2586,0.9841,0.2244,0.6723,0.8142,0.6649,0.8018,0.6553,0.8018,0.6553,0.8142,0.6816,0.8142,0.6746,0.8018,0.6723,0.8142,0.6656,0.8018,0.6553,0.8142,0.6553,0.8018,0.6402,0.8142,0.6441,0.8018,0.6317,0.8142,0.6380,0.8018,0.6448,0.8018,0.6402,0.8142,0.6714,0.8767,0.6536,0.8740,0.6797,0.8779,0.6704,0.8764,0.6529,0.8738,0.6348,0.8723,0.6251,0.8716,0.6341,0.8727,0.6553,0.7926,0.6687,0.9578,0.6494,0.9545,0.6792,0.9585,0.6685,0.9578,0.6485,0.9543,0.6276,0.9494,0.6171,0.9462,0.6279,0.9499,0.6645,0.9782,0.6501,0.9722,0.6750,0.9822,0.6646,0.9783,0.6491,0.9709,0.6261,0.9647,0.6156,0.9616,0.6264,0.9650,0.6496,0.9806,0.6586,0.9832,0.6321,0.9741,0.6241,0.9717,0.6318,0.9740,0.6489,0.9800,0.6588,0.9836,0.6667,0.9865,0.6461,0.9849});
			return TextureCoordinate_11_131_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #160, 608 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #160, 608 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #160, 237 total numbers made up of 79 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_160_point()
		{
			MFVec3f Coordinate_11_160_point = new MFVec3f(new double[] {-1.7670,-1.1610,1.1720,-2.1470,-1.5320,-0.0447,-2.3510,-0.2901,-0.0389,-1.7950,-1.2660,-1.2230,-0.0596,1.1790,1.7720,-0.5362,1.9240,-0.0115,-0.1264,-0.2452,1.9900,-0.1859,-1.8300,1.3350,-0.2617,-2.1930,-0.0009,-0.0485,-0.2483,-2.0760,-0.2495,1.3470,-1.8650,-0.0362,-1.8380,-1.3530,-2.0310,1.0330,-1.3120,-2.3790,1.2440,-0.0167,-1.9550,0.9369,1.2760,-1.5290,-0.1076,-1.6800,-2.2520,0.2082,-1.2740,-2.7510,0.4162,-0.0026,-2.2530,0.2116,1.3200,-1.4920,-0.1767,1.5680,0.6647,1.1070,1.6380,0.6310,1.7970,-0.0150,0.6357,1.2660,-1.7220,0.8298,-0.1909,-1.9150,0.7613,-1.5470,-1.3160,0.6881,-1.8070,0.0125,0.6891,-1.4740,1.5390,0.7549,-0.2064,1.8400,1.2370,-0.1103,-0.0007,-2.6110,-8.3890,-0.9438,-2.2560,-9.0340,-0.7256,-1.7970,-9.0340,-0.9829,-1.7970,-8.3890,-1.2180,-3.0540,-8.3890,0.0688,-2.7200,-9.0340,0.0715,-2.6110,-8.3890,1.0660,-2.2910,-9.0340,0.8983,-1.7970,-8.3890,1.4480,-1.7970,-9.0340,1.2010,-1.0740,-8.3890,1.0660,-1.2630,-9.0340,0.8963,-0.6698,-8.3890,0.0688,-0.9696,-9.0340,0.0715,-1.2980,-9.0340,-0.7088,-1.0740,-8.3890,-0.9438,-2.5690,-5.1110,-1.0440,-1.7190,-5.2540,-1.4160,-2.9670,-5.0500,0.0688,-2.5210,-5.1260,1.1880,-1.6830,-5.2620,1.5180,-0.8179,-5.3400,1.2150,-0.3515,-5.3770,0.0688,-0.7857,-5.3230,-1.0330,-1.7970,-9.5200,0.0715,-1.5150,-1.0330,-1.6480,-2.4370,-0.8613,-1.2510,-2.9430,-0.8246,-0.0030,-2.4300,-0.8639,1.3240,-1.4750,-1.0470,1.6650,-0.4746,-1.3020,1.2020,0.0299,-1.4690,-0.0050,-0.4862,-1.2780,-1.0650,-1.5480,-0.1070,-1.6630,-2.2400,0.2082,-1.2740,-2.7390,0.4162,-0.0026,-2.2410,0.2116,1.3200,-1.5030,-0.1733,1.5880,-0.4003,-0.5019,1.2380,0.1000,-0.6640,-0.0078,-0.4167,-0.4852,-1.0710,-1.9560,0.4708,-0.9897,-1.5250,0.3302,-1.2230,-0.6903,-0.0093,-0.7764,-0.3054,-0.1320,0.0087,-0.6728,-0.0140,0.9228,-1.4930,0.3035,1.1760,-1.9660,0.4903,0.9942,-2.3410,0.6409,0.0007,-1.3580,0.5602,0.0126});
			return Coordinate_11_160_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #161, 168 total numbers made up of 84 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_161_point()
		{
			MFVec2f TextureCoordinate_11_161_point = new MFVec2f(new double[] {0.9511,0.2077,0.9350,0.2198,0.9206,0.1937,0.9340,0.1916,0.9169,0.2296,0.9109,0.2043,0.9019,0.2306,0.8990,0.2124,0.9892,0.1709,0.9767,0.1844,0.9553,0.1714,0.9561,0.1559,0.8848,0.2349,0.8854,0.2117,0.8909,0.1883,0.9635,0.1960,0.9475,0.1844,0.9356,0.1821,0.9135,0.1812,0.9039,0.2015,0.9450,0.2364,0.9197,0.2361,0.9561,0.2144,0.9690,0.2041,0.9817,0.1943,0.9972,0.1927,0.8919,0.2437,0.9056,0.2404,0.9154,0.2635,0.8657,0.2399,0.8704,0.2036,0.9315,0.1649,0.8809,0.2586,0.9841,0.2244,0.6723,0.8142,0.6649,0.8018,0.6553,0.8018,0.6553,0.8142,0.6816,0.8142,0.6746,0.8018,0.6723,0.8142,0.6656,0.8018,0.6553,0.8142,0.6553,0.8018,0.6402,0.8142,0.6441,0.8018,0.6317,0.8142,0.6380,0.8018,0.6448,0.8018,0.6402,0.8142,0.6714,0.8767,0.6536,0.8740,0.6797,0.8779,0.6704,0.8764,0.6529,0.8738,0.6348,0.8723,0.6251,0.8716,0.6341,0.8727,0.6553,0.7926,0.6687,0.9578,0.6494,0.9545,0.6792,0.9585,0.6685,0.9578,0.6485,0.9543,0.6276,0.9494,0.6171,0.9462,0.6279,0.9499,0.6645,0.9782,0.6501,0.9722,0.6750,0.9822,0.6646,0.9783,0.6491,0.9709,0.6261,0.9647,0.6156,0.9616,0.6264,0.9650,0.6496,0.9806,0.6586,0.9832,0.6321,0.9741,0.6241,0.9717,0.6318,0.9740,0.6489,0.9800,0.6588,0.9836,0.6667,0.9865,0.6461,0.9849});
			return TextureCoordinate_11_161_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #190, 2872 total numbers.
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
				.append(new MFInt32(getIndexedFaceSet_10_190_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_10_190_coordIndex_3()));
			return IndexedFaceSet_10_190_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #190, 2872 total numbers.
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
				.append(new MFInt32(getIndexedFaceSet_10_190_texCoordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_10_190_texCoordIndex_3()));
			return IndexedFaceSet_10_190_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #190, 1131 total numbers made up of 377 3-tuple values.
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
				.append(new MFVec3f(getCoordinate_11_190_point_2()))
				.append(new MFVec3f(getCoordinate_11_190_point_3()))
				.append(new MFVec3f(getCoordinate_11_190_point_4()));
			return Coordinate_11_190_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #191, 1144 total numbers made up of 572 2-tuple values.
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
				.append(new MFVec2f(getTextureCoordinate_11_191_point_2()))
				.append(new MFVec2f(getTextureCoordinate_11_191_point_3()))
				.append(new MFVec2f(getTextureCoordinate_11_191_point_4()))
				.append(new MFVec2f(getTextureCoordinate_11_191_point_5()))
				.append(new MFVec2f(getTextureCoordinate_11_191_point_6()));
			return TextureCoordinate_11_191_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #199, 2104 total numbers.
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
				.append(new MFInt32(getIndexedFaceSet_11_199_coordIndex_3()));
			return IndexedFaceSet_11_199_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #199, 2104 total numbers.
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
				.append(new MFInt32(getIndexedFaceSet_11_199_texCoordIndex_3()));
			return IndexedFaceSet_11_199_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #199, 855 total numbers made up of 285 3-tuple values.
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
				.append(new MFVec3f(getCoordinate_12_199_point_3()));
			return Coordinate_12_199_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #200, 660 total numbers made up of 330 2-tuple values.
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
				.append(new MFVec2f(getTextureCoordinate_12_200_point_4()));
			return TextureCoordinate_12_200_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return KoreanCharacter11Min model
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
        X3D thisExampleX3dModel = new KoreanCharacter11Min().getX3dModel();

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
			System.out.println("WARNING: \"KoreanCharacter11Min\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"KoreanCharacter11Min\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}