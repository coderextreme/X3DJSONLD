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
 <p> Related links: KoreanCharacter07No.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.KoreanCharacter07No&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter07No.x3d">KoreanCharacter07No.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter07No.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter07No.x3d</a> </td>
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

public class KoreanCharacter07No
{
	/** Default constructor to create this object. */
	public KoreanCharacter07No ()
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
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KoreanCharacter07No.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 December 2021"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter07No.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Suwon University HAnim Editor"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("KoreanCharacter07No.x3d"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("No").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_No").setName("No").setScale(0.0225,0.0225,0.0225).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Chul Hee Jung and Myeong Won Lee"}))
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"myeongwonlee@gmail.com"}))
        .setMetadata(new MetadataString().setName("creationDate").setValue(new String[] {"31 March 2011"}))
        .setMetadata(new MetadataString().setName("gender").setValue(new String[] {"male"}))
        .setMetadata(new MetadataFloat().setName("height").setValue(new double[] {1.5}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"2.0"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,34.79,-1.299).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimSegment("hanim_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,34.79,-1.299)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                .setTexture(new ImageTexture("NoTextureAtlas").setUrl(new String[] {"images/No.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/No.png"})))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_8_32_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_32_texCoordIndex())
                .setCoord(new Coordinate().setPoint(getCoordinate_9_32_point()))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8186,0.5634,0.8987,0.5617,0.8871,0.5617,0.8526,0.5606,0.8181,0.5606,0.816,0.5609,0.7815,0.5609,0.7188,0.5606,0.7815,0.5609,0.816,0.5609,0.8181,0.5606,0.8526,0.5606,0.8871,0.5617,0.9077,0.5435,0.8943,0.5435,0.8566,0.5187,0.819,0.4986,0.8158,0.4991,0.7835,0.5089,0.7188,0.5435,0.7835,0.5089,0.8158,0.4991,0.819,0.4986,0.8566,0.5187,0.8943,0.5435,0.9017,0.4799,0.8882,0.4799,0.8592,0.4741,0.8178,0.4732,0.8155,0.4732,0.7814,0.4765,0.7186,0.5235,0.7814,0.4765,0.8155,0.4732,0.8178,0.4732,0.8592,0.4741,0.8882,0.4799,0.9035,0.4666,0.8895,0.4666,0.8545,0.4604,0.8198,0.4629,0.8161,0.4629,0.7809,0.467,0.7185,0.5036,0.7809,0.467,0.8161,0.4629,0.8198,0.4629,0.8545,0.4604,0.8895,0.4666,0.9004,0.451,0.8882,0.451,0.8562,0.4537,0.8211,0.4537,0.8228,0.4535,0.7785,0.4535,0.7195,0.4721,0.7785,0.4535,0.8228,0.4535,0.8211,0.4537,0.8562,0.4537,0.8882,0.451,0.8199,0.4484})))))))
        .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(3.785,34.07,-1.57).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
            .addChild(new Transform().setTranslation(3.785,34.07,-1.57)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_41_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_41_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_41_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8112,0.1978,0.7928,0.198,0.8249,0.1977,0.8374,0.1943,0.7528,0.1934,0.7357,0.1864,0.7651,0.1959,0.7783,0.1968,0.8266,0.2736,0.7988,0.2698,0.8418,0.2733,0.8787,0.2649,0.8586,0.2704,0.7368,0.2642,0.7588,0.2631,0.7794,0.2665,0.8232,0.3468,0.7985,0.342,0.8402,0.3517,0.878,0.3584,0.8605,0.3541,0.7419,0.3502,0.7594,0.3447,0.7789,0.3418,0.851,0.1871,0.714,0.2658,0.7234,0.3577,0.9517,0.1696,0.9373,0.1675,0.9627,0.1723,0.8889,0.1769,0.8764,0.1822,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8429,0.368,0.7988,0.3576,0.8205,0.3655,0.8283,0.3651,0.7546,0.3699,0.7696,0.3606,0.8588,0.3834,0.742,0.3846,0.7838,0.3576,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8764,0.1822,0.9517,0.1696,0.9373,0.1675,0.9236,0.1679,0.9136,0.1687,0.9037,0.1713,0.8889,0.1769,0.8764,0.1822,0.9627,0.1723,0.9197,0.1721,0.8429,0.368,0.8588,0.3834,0.7546,0.3699,0.7696,0.3606,0.7838,0.3576,0.7988,0.3576,0.8205,0.3655,0.8283,0.3651,0.8072,0.366})))))))
          .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(3.838,18.4,-1.212).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
              .addChild(new Transform().setTranslation(3.838,18.4,-1.212)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_50_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_50_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_50_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.932,0.0281,0.9375,0.0382,0.9285,0.0402,0.9254,0.0312,0.9374,0.024,0.9462,0.0354,0.8988,0.0252,0.8904,0.038,0.8808,0.0336,0.8942,0.0184,0.9057,0.0303,0.9022,0.0409,0.9104,0.0324,0.9093,0.0416,0.9182,0.0316,0.9191,0.0408,0.9517,0.1696,0.9373,0.1675,0.9627,0.1723,0.8764,0.1822,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9644,0.1089,0.9758,0.1044,0.9513,0.1129,0.9366,0.1157,0.881,0.1091,0.8973,0.1096,0.9098,0.1121,0.9231,0.1139,0.9177,0.0179,0.9548,0.03,0.9408,0.0161,0.9745,0.1762,0.8679,0.1104,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8764,0.1822,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.9745,0.1762,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.932,0.1713})))))))
            .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(3.826,4.044,-1.361).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                .addChild(new Transform().setTranslation(3.826,4.044,-1.361)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_59_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_59_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_59_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_60_point()))))))
              .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(3.826,3.118,-0.2867).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(3.826,3.118,-0.2867)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_68_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_68_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_68_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.5046,0.9061,0.4664,0.9061,0.3813,0.8655,0.3794,0.8893,0.368,0.869,0.3703,0.8986,0.3591,0.8766,0.3794,0.8891,0.368,0.8691,0.4666,0.8883,0.5046,0.8883,0.5509,0.9061,0.3967,0.963,0.3877,0.9702,0.562,0.9285,0.5046,0.9285,0.4059,0.9781,0.4144,0.966,0.4542,0.9285,0.5657,0.9535,0.5046,0.9535,0.4506,0.9535,0.5561,0.9717,0.397,0.9616,0.4144,0.966,0.4224,0.8577,0.4263,0.8811,0.4134,0.9791,0.4208,0.9685,0.4208,0.9685,0.4291,0.8577,0.4329,0.8811,0.3769,0.9239,0.3855,0.9182,0.3855,0.9183,0.502,0.9815,0.4591,0.9717,0.4263,0.8811,0.4263,0.9104,0.4263,0.9104,0.5498,0.8883,0.4329,0.8811,0.4329,0.9104,0.4329,0.9104,0.3843,0.9558,0.3913,0.9496,0.4741,0.8664,0.5046,0.8664,0.4263,0.9431,0.3913,0.9494,0.4263,0.9431,0.4329,0.9431,0.4329,0.9431,0.3813,0.8654,0.4224,0.8577,0.4291,0.8577,0.3704,0.8386,0.38,0.8357,0.4179,0.8293,0.4204,0.8297,0.4204,0.8297,0.4204,0.8297,0.4179,0.8293,0.38,0.8357,0.3704,0.8386,0.3666,0.8532,0.4291,0.8577})))))))))))
        .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-3.785,34.07,-1.57).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
            .addChild(new Transform().setTranslation(-3.785,34.07,-1.57)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_81_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_81_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_81_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8112,0.1978,0.7928,0.198,0.8249,0.1977,0.8374,0.1943,0.7528,0.1934,0.7357,0.1864,0.7651,0.1959,0.7783,0.1968,0.8266,0.2736,0.7988,0.2698,0.8418,0.2733,0.8787,0.2649,0.8586,0.2704,0.7368,0.2642,0.7588,0.2631,0.7794,0.2665,0.8232,0.3468,0.7985,0.342,0.8402,0.3517,0.878,0.3584,0.8605,0.3541,0.7419,0.3502,0.7594,0.3447,0.7789,0.3418,0.851,0.1871,0.714,0.2658,0.7234,0.3577,0.9517,0.1696,0.9373,0.1675,0.9627,0.1723,0.8889,0.1769,0.8764,0.1822,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8429,0.368,0.7988,0.3576,0.8205,0.3655,0.8283,0.3651,0.7546,0.3699,0.7696,0.3606,0.8588,0.3834,0.742,0.3846,0.7838,0.3576,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8764,0.1822,0.9517,0.1696,0.9373,0.1675,0.9236,0.1679,0.9136,0.1687,0.9037,0.1713,0.8889,0.1769,0.8764,0.1822,0.9627,0.1723,0.9197,0.1721,0.8429,0.368,0.8588,0.3834,0.7546,0.3699,0.7696,0.3606,0.7838,0.3576,0.7988,0.3576,0.8205,0.3655,0.8283,0.3651,0.8072,0.366})))))))
          .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-3.838,18.4,-1.212).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
              .addChild(new Transform().setTranslation(-3.838,18.4,-1.212)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_90_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_90_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_90_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.932,0.0281,0.9375,0.0382,0.9285,0.0402,0.9254,0.0312,0.9374,0.024,0.9462,0.0354,0.8988,0.0252,0.8904,0.038,0.8808,0.0336,0.8942,0.0184,0.9057,0.0303,0.9022,0.0409,0.9104,0.0324,0.9093,0.0416,0.9182,0.0316,0.9191,0.0408,0.9517,0.1696,0.9373,0.1675,0.9627,0.1723,0.8764,0.1822,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9644,0.1089,0.9758,0.1044,0.9513,0.1129,0.9366,0.1157,0.881,0.1091,0.8973,0.1096,0.9098,0.1121,0.9231,0.1139,0.9177,0.0179,0.9548,0.03,0.9408,0.0161,0.9745,0.1762,0.8679,0.1104,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.9745,0.1762,0.8764,0.1822,0.9373,0.1675,0.9517,0.1696,0.9627,0.1723,0.9745,0.1762,0.8889,0.1769,0.9037,0.1713,0.9136,0.1687,0.9236,0.1679,0.932,0.1713})))))))
            .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-3.826,4.044,-1.361).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                .addChild(new Transform().setTranslation(-3.826,4.044,-1.361)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_11_99_coordIndex()).setTexCoordIndex(getIndexedFaceSet_11_99_texCoordIndex())
                      .setCoord(new Coordinate().setPoint(getCoordinate_12_99_point()))
                      .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_12_100_point()))))))
              .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-3.826,3.118,-0.2867).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(-3.826,3.118,-0.2867)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_108_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_108_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_108_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.5046,0.9061,0.4664,0.9061,0.3813,0.8655,0.3794,0.8893,0.368,0.869,0.3703,0.8986,0.3591,0.8766,0.3794,0.8891,0.368,0.8691,0.4666,0.8883,0.5046,0.8883,0.5509,0.9061,0.3967,0.963,0.3877,0.9702,0.562,0.9285,0.5046,0.9285,0.4059,0.9781,0.4144,0.966,0.4542,0.9285,0.5657,0.9535,0.5046,0.9535,0.4506,0.9535,0.5561,0.9717,0.397,0.9616,0.4144,0.966,0.4224,0.8577,0.4263,0.8811,0.4134,0.9791,0.4208,0.9685,0.4208,0.9685,0.4291,0.8577,0.4329,0.8811,0.3769,0.9239,0.3855,0.9182,0.3855,0.9183,0.502,0.9815,0.4591,0.9717,0.4263,0.8811,0.4263,0.9104,0.4263,0.9104,0.5498,0.8883,0.4329,0.8811,0.4329,0.9104,0.4329,0.9104,0.3843,0.9558,0.3913,0.9496,0.4741,0.8664,0.5046,0.8664,0.4263,0.9431,0.3913,0.9494,0.4263,0.9431,0.4329,0.9431,0.4329,0.9431,0.3813,0.8654,0.4224,0.8577,0.4291,0.8577,0.3704,0.8386,0.38,0.8357,0.4179,0.8293,0.4204,0.8297,0.4204,0.8297,0.4204,0.8297,0.4179,0.8293,0.38,0.8357,0.3704,0.8386,0.3666,0.8532,0.4291,0.8577})))))))))))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,32.91,-1.57).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,32.91,-1.57)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_121_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_121_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_121_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_122_point()))))))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(7.266,54.05,-1.79).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(7.266,54.05,-1.79)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_130_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_130_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_130_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_131_point()))))))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(7.834,43.39,-1.651).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(7.834,43.39,-1.651)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {0,12,11,-1,11,4,0,-1,12,13,5,-1,5,11,12,-1,13,1,8,-1,8,5,13,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,14,6,-1,6,10,3,-1,15,0,4,-1,4,7,15,-1,14,15,7,-1,7,6,14,-1,4,11,23,-1,23,16,4,-1,11,5,17,-1,17,23,11,-1,5,8,20,-1,20,17,5,-1,10,6,18,-1,18,22,10,-1,7,4,16,-1,16,19,7,-1,8,9,21,-1,21,20,8,-1,9,10,22,-1,22,21,9,-1,6,7,19,-1,19,18,6,-1,16,23,24,-1,23,17,24,-1,17,20,24,-1,20,21,24,-1,21,22,24,-1,22,18,24,-1,18,19,24,-1,19,16,24,-1,12,0,25,-1,25,29,12,-1,13,30,26,-1,26,1,13,-1,1,26,27,-1,27,2,1,-1,2,27,28,-1,28,3,2,-1,3,28,31,-1,31,14,3,-1,0,15,32,-1,32,25,0,-1,13,12,29,-1,29,30,13,-1,15,14,31,-1,31,32,15,-1,29,25,34,-1,34,33,29,-1,25,32,35,-1,35,34,25,-1,32,31,36,-1,36,35,32,-1,31,28,37,-1,37,36,31,-1,28,27,38,-1,38,37,28,-1,27,26,39,-1,39,38,27,-1,26,30,40,-1,40,39,26,-1,30,29,33,-1,33,40,30,-1,33,34,41,-1,34,35,41,-1,35,36,41,-1,36,37,41,-1,37,38,41,-1,38,39,41,-1,39,40,41,-1,40,33,41,-1}).setTexCoordIndex(new int[] {1,0,8,-1,8,9,1,-1,0,2,10,-1,10,8,0,-1,2,3,11,-1,11,10,2,-1,3,4,12,-1,12,11,3,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,7,1,9,-1,9,15,7,-1,25,7,15,-1,15,26,25,-1,9,8,16,-1,16,17,9,-1,8,10,18,-1,18,16,8,-1,10,11,19,-1,19,18,10,-1,13,14,20,-1,20,21,13,-1,15,9,17,-1,17,22,15,-1,11,12,23,-1,23,19,11,-1,12,13,21,-1,21,23,12,-1,26,15,22,-1,22,27,26,-1,17,16,24,-1,16,18,24,-1,18,19,24,-1,19,23,24,-1,23,21,24,-1,21,20,24,-1,27,22,24,-1,22,17,24,-1,0,1,28,-1,28,32,0,-1,2,33,29,-1,29,3,2,-1,3,29,30,-1,30,4,3,-1,4,30,31,-1,31,5,4,-1,5,31,35,-1,35,6,5,-1,1,7,36,-1,36,28,1,-1,2,0,32,-1,32,33,2,-1,7,25,34,-1,34,36,7,-1,32,28,38,-1,38,37,32,-1,28,36,39,-1,39,38,28,-1,36,34,40,-1,40,39,36,-1,35,31,41,-1,41,40,35,-1,31,30,42,-1,42,41,31,-1,30,29,43,-1,43,42,30,-1,29,33,44,-1,44,43,29,-1,33,32,37,-1,37,44,33,-1,37,38,45,-1,38,39,45,-1,39,40,45,-1,40,41,45,-1,41,42,45,-1,42,43,45,-1,43,44,45,-1,44,37,45,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.0407,-0.8376,-1.221,0.7331,-0.5933,0.8017,-0.0176,-0.6645,1.182,-0.7221,-0.7616,0.9014,-0.0602,-7.36,-0.7594,0.7233,-7.36,0.0564,-0.7878,-7.36,0.0568,-0.5288,-7.365,-0.5335,0.4165,-7.365,0.6592,-0.0602,-7.36,0.9907,-0.5288,-7.365,0.6609,0.4165,-7.365,-0.4678,0.6188,-0.6937,-0.9942,1.126,-0.5903,1.0E-4,-1.1,-0.8178,0.0254,-0.5969,-0.8537,-1.073,-0.0602,-7.92,-0.6297,0.5422,-7.92,0.0623,-0.6846,-7.92,0.0627,-0.4317,-7.915,-0.4625,0.3194,-7.915,0.6006,-0.0602,-7.92,0.8486,-0.4317,-7.915,0.6022,0.3194,-7.915,-0.398,-0.0602,-8.182,0.065,-0.0299,-0.0952,-1.393,0.7675,0.0555,0.847,-0.0065,-0.0143,1.165,-0.7382,-0.1075,0.8559,0.7086,0.015,-1.16,1.198,0.0615,-0.0132,-1.198,-0.2053,-2.0E-4,-0.6672,-0.1246,-1.202,0.4447,0.8519,-0.9853,-0.1246,0.7619,-1.165,-0.5954,0.7485,-1.024,-1.032,0.6748,-0.0338,-0.6669,0.7576,0.6468,-0.0988,0.8314,0.8871,0.5047,0.8844,0.639,0.8466,0.8853,-0.0438,-0.1526,1.367,-0.1493})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0471,0.5348,0.0457,0.5477,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.1806,0.5707,0.1797,0.5783,0.1804,0.5567,0.1838,0.5503,0.1875,0.5412,0.1933,0.5295,0.2007,0.5198,0.175,0.5862,0.19,0.5703,0.1907,0.5757,0.1892,0.5587,0.1918,0.5533,0.2114,0.539,0.2025,0.5422,0.1895,0.5821,0.1949,0.5468,0.2041,0.5636,0.0292,0.5765,0.1758,0.5987,0.1959,0.5888,0.0457,0.5477,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0471,0.5348,0.0517,0.5187,0.0292,0.5765,0.0673,0.4552,0.0409,0.557,0.0471,0.5348,0.0457,0.5477,0.0409,0.557,0.0292,0.5765,0.0657,0.4747,0.0625,0.4884,0.0571,0.5017,0.0517,0.5187,0.05,0.5249})))))))
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(7.738,35.43,-1.558).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                  .addChild(new Transform().setTranslation(7.738,35.43,-1.558)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_148_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_148_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_148_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_13_149_point())))))))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-7.266,54.05,-1.79).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-7.266,54.05,-1.79)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_160_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_160_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_160_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_161_point()))))))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-7.834,43.39,-1.651).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-7.834,43.39,-1.651)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {0,4,11,-1,11,12,0,-1,12,11,5,-1,5,13,12,-1,13,5,8,-1,8,1,13,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,6,-1,6,14,3,-1,15,7,4,-1,4,0,15,-1,14,6,7,-1,7,15,14,-1,4,16,23,-1,23,11,4,-1,11,23,17,-1,17,5,11,-1,5,17,20,-1,20,8,5,-1,10,22,18,-1,18,6,10,-1,7,19,16,-1,16,4,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,6,18,19,-1,19,7,6,-1,16,24,23,-1,23,24,17,-1,17,24,20,-1,20,24,21,-1,21,24,22,-1,22,24,18,-1,18,24,19,-1,19,24,16,-1,12,29,25,-1,25,0,12,-1,13,1,26,-1,26,30,13,-1,1,2,27,-1,27,26,1,-1,2,3,28,-1,28,27,2,-1,3,14,31,-1,31,28,3,-1,0,25,32,-1,32,15,0,-1,13,30,29,-1,29,12,13,-1,15,32,31,-1,31,14,15,-1,29,33,34,-1,34,25,29,-1,25,34,35,-1,35,32,25,-1,32,35,36,-1,36,31,32,-1,31,36,37,-1,37,28,31,-1,28,37,38,-1,38,27,28,-1,27,38,39,-1,39,26,27,-1,26,39,40,-1,40,30,26,-1,30,40,33,-1,33,29,30,-1,33,41,34,-1,34,41,35,-1,35,41,36,-1,36,41,37,-1,37,41,38,-1,38,41,39,-1,39,41,40,-1,40,41,33,-1}).setTexCoordIndex(new int[] {1,9,8,-1,8,0,1,-1,0,8,10,-1,10,2,0,-1,2,10,11,-1,11,3,2,-1,3,11,12,-1,12,4,3,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,7,15,9,-1,9,1,7,-1,25,26,15,-1,15,7,25,-1,9,17,16,-1,16,8,9,-1,8,16,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,13,21,20,-1,20,14,13,-1,15,22,17,-1,17,9,15,-1,11,19,23,-1,23,12,11,-1,12,23,21,-1,21,13,12,-1,26,27,22,-1,22,15,26,-1,17,24,16,-1,16,24,18,-1,18,24,19,-1,19,24,23,-1,23,24,21,-1,21,24,20,-1,27,24,22,-1,22,24,17,-1,0,32,28,-1,28,1,0,-1,2,3,29,-1,29,33,2,-1,3,4,30,-1,30,29,3,-1,4,5,31,-1,31,30,4,-1,5,6,35,-1,35,31,5,-1,1,28,36,-1,36,7,1,-1,2,33,32,-1,32,0,2,-1,7,36,34,-1,34,25,7,-1,32,37,38,-1,38,28,32,-1,28,38,39,-1,39,36,28,-1,36,39,40,-1,40,34,36,-1,35,40,41,-1,41,31,35,-1,31,41,42,-1,42,30,31,-1,30,42,43,-1,43,29,30,-1,29,43,44,-1,44,33,29,-1,33,44,37,-1,37,32,33,-1,37,45,38,-1,38,45,39,-1,39,45,40,-1,40,45,41,-1,41,45,42,-1,42,45,43,-1,43,45,44,-1,44,45,37,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0407,-0.8376,-1.221,-0.7331,-0.5933,0.8017,0.0176,-0.6645,1.182,0.7221,-0.7616,0.9014,0.0602,-7.36,-0.7594,-0.7233,-7.36,0.0564,0.7878,-7.36,0.0568,0.5288,-7.365,-0.5335,-0.4165,-7.365,0.6592,0.0602,-7.36,0.9907,0.5288,-7.365,0.6609,-0.4165,-7.365,-0.4678,-0.6188,-0.6937,-0.9942,-1.126,-0.5903,1.0E-4,1.1,-0.8178,0.0254,0.5969,-0.8537,-1.073,0.0602,-7.92,-0.6297,-0.5422,-7.92,0.0623,0.6846,-7.92,0.0627,0.4317,-7.915,-0.4625,-0.3194,-7.915,0.6006,0.0602,-7.92,0.8486,0.4317,-7.915,0.6022,-0.3194,-7.915,-0.398,0.0602,-8.182,0.065,0.0299,-0.0952,-1.393,-0.7675,0.0555,0.847,0.0065,-0.0143,1.165,0.7382,-0.1075,0.8559,-0.7086,0.015,-1.16,-1.198,0.0615,-0.0132,1.198,-0.2053,-2.0E-4,0.6672,-0.1246,-1.202,-0.4447,0.8519,-0.9853,0.1246,0.7619,-1.165,0.5954,0.7485,-1.024,1.032,0.6748,-0.0338,0.6669,0.7576,0.6468,0.0988,0.8314,0.8871,-0.5047,0.8844,0.639,-0.8466,0.8853,-0.0438,0.1526,1.367,-0.1493})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0471,0.5348,0.0457,0.5477,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.1806,0.5707,0.1797,0.5783,0.1804,0.5567,0.1838,0.5503,0.1875,0.5412,0.1933,0.5295,0.2007,0.5198,0.175,0.5862,0.19,0.5703,0.1907,0.5757,0.1892,0.5587,0.1918,0.5533,0.2114,0.539,0.2025,0.5422,0.1895,0.5821,0.1949,0.5468,0.2041,0.5636,0.0292,0.5765,0.1758,0.5987,0.1959,0.5888,0.0457,0.5477,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0471,0.5348,0.0517,0.5187,0.0292,0.5765,0.0673,0.4552,0.0409,0.557,0.0471,0.5348,0.0457,0.5477,0.0409,0.557,0.0292,0.5765,0.0657,0.4747,0.0625,0.4884,0.0571,0.5017,0.0517,0.5187,0.05,0.5249})))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-7.738,35.43,-1.558).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                  .addChild(new Transform().setTranslation(-7.738,35.43,-1.558)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_12_178_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_178_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_178_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_13_179_point())))))))))
          .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0,37.06,-1.409).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l5").setName("l5")
              .addChild(new Transform().setTranslation(0.0,37.06,-1.409)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_190_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_190_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_190_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_191_point()))))))
            .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,37.06,-1.409).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_skull").setName("skull")
                .addChild(new Transform().setTranslation(0.0,37.06,-1.409)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("NoTextureAtlas")))
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
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_coordIndex_1()
		{
			int[] value = {0,14,20,-1,20,1,0,-1,15,14,0,-1,0,2,15,-1,16,23,21,-1,21,3,16,-1,17,16,3,-1,3,4,17,-1,18,17,4,-1,4,5,18,-1,6,19,18,-1,18,5,6,-1,1,20,19,-1,19,6,1,-1,8,26,25,-1,25,7,8,-1,27,26,8,-1,8,9,27,-1,30,24,22,-1,22,10,30,-1,11,28,30,-1,30,10,11,-1,12,29,28,-1,28,11,12,-1,13,31,29,-1,29,12,13,-1,7,25,31,-1,31,13,7,-1,14,8,7,-1,7,20,14,-1,9,8,14,-1,14,15,9,-1,10,22,23,-1,23,16,10,-1,11,10,16,-1,16,17,11,-1,12,11,17,-1,17,18,12,-1,19,13,12,-1,12,18,19,-1,20,7,13,-1,13,19,20,-1,23,15,2,-1,2,21,23,-1,22,9,15,-1,15,23,22,-1,9,22,24,-1,24,27,9,-1,0,1,32,-1,32,33,0,-1,34,2,0,-1,0,33,34,-1,3,21,39,-1,39,35,3,-1,4,3,35,-1,35,36,4,-1,37,5,4,-1,4,36,37,-1,6,5,37,-1,37,38,6,-1,1,6,38,-1,38,32,1,-1,39,21,2,-1,2,34,39,-1,33,32,41,-1,41,40,33,-1,32,38,42,-1,42,41,32,-1,38,37,43,-1,43,42,38,-1,37,36,44,-1,44,43,37,-1,36,35,45,-1,45,44,36,-1,35,39,46,-1,46,45,35,-1,39,34,47,-1,47,46,39,-1,34,33,40,-1,40,47,34,-1,40,41,48,-1,41,42,48,-1,42,43,48,-1,43,44,48,-1,44,45,48,-1,45,46,48,-1,46,47,48,-1,47,40,48,-1,24,30,50,-1,50,49,24,-1,30,28,51,-1,51,50,30,-1,28,29,52,-1,52,51,28,-1,29,31,53,-1,53,52,29,-1,31,25,54,-1,54,53,31,-1,25,26,55,-1,55,54,25,-1,26,27,56,-1,56,55,26,-1,27,24,49,-1,49,56,27,-1,49,50,57,-1,50,51,57,-1,51,52,57,-1,52,53,57,-1,53,54,57,-1,54,55,57,-1,55,56,57,-1,56,49,57,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_41_texCoordIndex_1()
		{
			int[] value = {0,8,9,-1,9,1,0,-1,10,8,0,-1,0,2,10,-1,11,12,3,-1,3,24,11,-1,13,25,5,-1,5,4,13,-1,14,13,4,-1,4,6,14,-1,7,15,14,-1,14,6,7,-1,1,9,15,-1,15,7,1,-1,16,38,37,-1,37,17,16,-1,39,38,16,-1,16,18,39,-1,42,36,20,-1,20,19,42,-1,21,40,43,-1,43,26,21,-1,22,41,40,-1,40,21,22,-1,23,44,41,-1,41,22,23,-1,17,37,44,-1,44,23,17,-1,8,16,17,-1,17,9,8,-1,18,16,8,-1,8,10,18,-1,19,20,12,-1,12,11,19,-1,21,26,25,-1,25,13,21,-1,22,21,13,-1,13,14,22,-1,15,23,22,-1,22,14,15,-1,9,17,23,-1,23,15,9,-1,12,10,2,-1,2,3,12,-1,20,18,10,-1,10,12,20,-1,18,20,36,-1,36,39,18,-1,27,28,45,-1,45,46,27,-1,47,29,27,-1,27,46,47,-1,30,31,53,-1,53,48,30,-1,32,30,48,-1,48,49,32,-1,50,33,32,-1,32,49,50,-1,34,33,50,-1,50,51,34,-1,28,34,51,-1,51,45,28,-1,52,35,29,-1,29,47,52,-1,46,45,55,-1,55,54,46,-1,45,51,56,-1,56,55,45,-1,51,50,57,-1,57,56,51,-1,50,49,58,-1,58,57,50,-1,49,48,59,-1,59,58,49,-1,48,53,60,-1,60,59,48,-1,52,47,61,-1,61,60,52,-1,47,46,54,-1,54,61,47,-1,54,55,62,-1,55,56,62,-1,56,57,62,-1,57,58,62,-1,58,59,62,-1,59,60,62,-1,60,61,62,-1,61,54,62,-1,36,42,64,-1,64,63,36,-1,43,40,65,-1,65,64,43,-1,40,41,66,-1,66,65,40,-1,41,44,67,-1,67,66,41,-1,44,37,68,-1,68,67,44,-1,37,38,69,-1,69,68,37,-1,38,39,70,-1,70,69,38,-1,39,36,63,-1,63,70,39,-1,63,64,71,-1,64,65,71,-1,65,66,71,-1,66,67,71,-1,67,68,71,-1,68,69,71,-1,69,70,71,-1,70,63,71,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_coordIndex_1()
		{
			int[] value = {24,30,1,-1,1,0,24,-1,25,24,0,-1,0,2,25,-1,26,31,14,-1,14,3,26,-1,27,26,3,-1,3,4,27,-1,5,28,27,-1,27,4,5,-1,6,29,28,-1,28,5,6,-1,1,30,29,-1,29,6,1,-1,9,18,20,-1,20,15,9,-1,8,7,17,-1,17,16,8,-1,9,8,16,-1,16,18,9,-1,19,10,15,-1,15,20,19,-1,21,11,10,-1,10,19,21,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,7,13,23,-1,23,17,7,-1,25,31,20,-1,20,18,25,-1,16,17,30,-1,30,24,16,-1,18,16,24,-1,24,25,18,-1,19,20,31,-1,31,26,19,-1,27,21,19,-1,19,26,27,-1,28,22,21,-1,21,27,28,-1,29,23,22,-1,22,28,29,-1,30,17,23,-1,23,29,30,-1,2,14,31,-1,31,25,2,-1,0,1,32,-1,1,6,32,-1,6,5,32,-1,5,4,32,-1,4,3,32,-1,3,14,32,-1,14,2,32,-1,2,0,32,-1,8,34,33,-1,33,7,8,-1,9,35,34,-1,34,8,9,-1,10,36,40,-1,40,15,10,-1,10,11,37,-1,37,36,10,-1,12,38,37,-1,37,11,12,-1,13,39,38,-1,38,12,13,-1,7,33,39,-1,39,13,7,-1,15,40,35,-1,35,9,15,-1,33,34,42,-1,42,41,33,-1,34,35,43,-1,43,42,34,-1,35,40,44,-1,44,43,35,-1,40,36,45,-1,45,44,40,-1,36,37,46,-1,46,45,36,-1,37,38,47,-1,47,46,37,-1,38,39,48,-1,48,47,38,-1,39,33,41,-1,41,48,39,-1,41,42,49,-1,42,43,49,-1,43,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,41,49,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,5,1,0,-1,0,4,5,-1,7,8,9,-1,9,6,7,-1,11,7,6,-1,6,10,11,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,3,2,15,-1,15,14,3,-1,18,24,25,-1,25,35,18,-1,16,17,27,-1,27,26,16,-1,18,16,26,-1,26,24,18,-1,28,20,19,-1,19,36,28,-1,29,21,20,-1,20,28,29,-1,30,22,21,-1,21,29,30,-1,31,23,22,-1,22,30,31,-1,17,23,31,-1,31,27,17,-1,5,33,25,-1,25,24,5,-1,26,27,2,-1,2,1,26,-1,24,26,1,-1,1,5,24,-1,28,36,8,-1,8,7,28,-1,11,29,28,-1,28,7,11,-1,13,30,29,-1,29,11,13,-1,15,31,30,-1,30,13,15,-1,2,27,31,-1,31,15,2,-1,4,34,33,-1,33,5,4,-1,0,3,32,-1,3,14,32,-1,14,12,32,-1,12,10,32,-1,10,6,32,-1,6,9,32,-1,34,4,32,-1,4,0,32,-1,16,38,37,-1,37,17,16,-1,18,39,38,-1,38,16,18,-1,20,40,45,-1,45,19,20,-1,20,21,41,-1,41,40,20,-1,22,42,41,-1,41,21,22,-1,23,43,42,-1,42,22,23,-1,17,37,43,-1,43,23,17,-1,35,44,39,-1,39,18,35,-1,37,38,47,-1,47,46,37,-1,38,39,48,-1,48,47,38,-1,39,44,49,-1,49,48,39,-1,45,40,50,-1,50,49,45,-1,40,41,51,-1,51,50,40,-1,41,42,52,-1,52,51,41,-1,42,43,53,-1,53,52,42,-1,43,37,46,-1,46,53,43,-1,46,47,54,-1,47,48,54,-1,48,49,54,-1,49,50,54,-1,50,51,54,-1,51,52,54,-1,52,53,54,-1,53,46,54,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_coordIndex_1()
		{
			int[] value = {0,1,10,-1,10,16,0,-1,2,11,10,-1,10,1,2,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,41,0,16,-1,16,15,41,-1,0,41,44,-1,44,18,0,-1,17,19,4,-1,4,3,17,-1,20,17,3,-1,3,2,20,-1,21,20,2,-1,2,1,21,-1,18,21,1,-1,1,0,18,-1,18,44,42,-1,42,6,18,-1,8,7,19,-1,19,17,8,-1,23,8,17,-1,17,20,23,-1,9,23,20,-1,20,21,9,-1,6,9,21,-1,21,18,6,-1,10,24,26,-1,26,16,10,-1,11,25,24,-1,24,10,11,-1,12,27,25,-1,25,11,12,-1,13,28,27,-1,27,12,13,-1,5,28,13,-1,13,14,5,-1,30,29,39,-1,39,15,30,-1,26,30,15,-1,15,16,26,-1,8,23,22,-1,22,7,8,-1,9,6,22,-1,22,23,9,-1,6,42,46,-1,46,22,6,-1,33,34,35,-1,35,36,37,-1,37,38,31,-1,35,37,31,-1,33,35,31,-1,32,33,31,-1,28,5,32,-1,32,31,28,-1,5,29,33,-1,33,32,5,-1,29,30,34,-1,34,33,29,-1,30,26,35,-1,35,34,30,-1,26,24,36,-1,36,35,26,-1,24,25,37,-1,37,36,24,-1,25,27,38,-1,38,37,25,-1,27,28,31,-1,31,38,27,-1,39,29,5,-1,5,14,39,-1,7,22,46,-1,46,43,7,-1,4,19,45,-1,45,40,4,-1,19,7,43,-1,43,45,19,-1,4,40,14,-1,14,13,4,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,53,54,55,-1,52,53,55,-1,48,52,55,-1,48,55,56,-1,48,56,47,-1,15,39,48,-1,48,47,15,-1,39,14,49,-1,49,48,39,-1,14,40,50,-1,50,49,14,-1,40,45,51,-1,51,50,40,-1,45,43,52,-1,52,51,45,-1,43,46,53,-1,53,52,43,-1,46,42,54,-1,54,53,46,-1,42,44,55,-1,55,54,42,-1,44,41,56,-1,56,55,44,-1,41,15,47,-1,47,56,41,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_59_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,5,-1,5,4,6,-1,10,11,7,-1,7,6,10,-1,12,0,3,-1,3,13,12,-1,0,12,14,-1,14,15,0,-1,16,17,10,-1,10,6,16,-1,18,16,6,-1,6,4,18,-1,19,18,4,-1,4,1,19,-1,15,19,1,-1,1,0,15,-1,15,14,20,-1,20,21,15,-1,22,23,17,-1,17,16,22,-1,24,22,16,-1,16,18,24,-1,25,24,18,-1,18,19,25,-1,21,25,19,-1,19,15,21,-1,67,26,27,-1,27,68,67,-1,69,71,26,-1,26,67,69,-1,80,29,28,-1,28,79,80,-1,81,30,29,-1,29,80,81,-1,32,30,81,-1,81,82,32,-1,33,72,73,-1,73,70,33,-1,27,33,70,-1,70,68,27,-1,9,38,39,-1,39,8,9,-1,41,42,39,-1,39,38,41,-1,42,62,63,-1,63,39,42,-1,37,40,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,37,43,47,-1,36,37,47,-1,30,32,36,-1,36,47,30,-1,32,34,37,-1,37,36,32,-1,72,33,75,-1,75,74,72,-1,33,27,76,-1,76,75,33,-1,27,26,77,-1,77,76,27,-1,26,71,78,-1,78,77,26,-1,28,29,46,-1,46,45,28,-1,29,30,47,-1,47,46,29,-1,83,34,32,-1,32,82,83,-1,8,39,63,-1,63,64,8,-1,10,17,49,-1,49,48,10,-1,17,23,50,-1,50,49,17,-1,10,48,31,-1,31,11,10,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,56,57,58,-1,55,56,58,-1,51,55,58,-1,51,58,59,-1,51,59,60,-1,13,35,51,-1,51,60,13,-1,35,31,52,-1,52,51,35,-1,31,48,53,-1,53,52,31,-1,48,49,54,-1,54,53,48,-1,49,50,55,-1,55,54,49,-1,50,61,56,-1,56,55,50,-1,63,62,65,-1,65,66,63,-1,20,14,58,-1,58,57,20,-1,14,12,59,-1,59,58,14,-1,12,13,60,-1,60,59,12,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_coordIndex_1()
		{
			int[] value = {36,0,33,-1,1,35,33,-1,33,0,1,-1,34,35,1,-1,1,2,34,-1,5,39,42,-1,42,4,5,-1,25,31,18,-1,18,19,25,-1,32,25,19,-1,19,20,32,-1,36,41,26,-1,26,0,36,-1,22,21,31,-1,31,25,22,-1,23,22,25,-1,25,32,23,-1,41,39,5,-1,5,26,41,-1,7,6,2,-1,2,1,7,-1,8,7,1,-1,1,0,8,-1,9,10,4,-1,4,3,9,-1,10,11,5,-1,5,4,10,-1,6,27,24,-1,24,2,6,-1,28,8,0,-1,0,26,28,-1,27,9,3,-1,3,24,27,-1,11,28,26,-1,26,5,11,-1,13,12,6,-1,6,7,13,-1,12,29,27,-1,27,6,12,-1,14,13,7,-1,7,8,14,-1,30,14,8,-1,8,28,30,-1,15,16,10,-1,10,9,15,-1,29,15,9,-1,9,27,29,-1,17,30,28,-1,28,11,17,-1,16,17,11,-1,11,10,16,-1,19,18,12,-1,12,13,19,-1,18,31,29,-1,29,12,18,-1,20,19,13,-1,13,14,20,-1,32,20,14,-1,14,30,32,-1,21,22,16,-1,16,15,21,-1,31,21,15,-1,15,29,31,-1,23,32,30,-1,30,17,23,-1,22,23,17,-1,17,16,22,-1,37,2,24,-1,24,40,37,-1,40,24,3,-1,3,38,40,-1,38,3,4,-1,4,42,38,-1,34,2,37,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,46,50,52,-1,44,46,52,-1,44,52,43,-1,35,34,44,-1,44,43,35,-1,34,37,45,-1,45,44,34,-1,37,40,46,-1,46,45,37,-1,40,38,47,-1,47,46,40,-1,38,42,48,-1,48,47,38,-1,42,39,49,-1,49,48,42,-1,39,41,50,-1,50,49,39,-1,41,36,51,-1,51,50,41,-1,36,33,52,-1,52,51,36,-1,33,35,43,-1,43,52,33,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_68_texCoordIndex_1()
		{
			int[] value = {2,3,4,-1,5,6,4,-1,4,3,5,-1,8,6,5,-1,5,7,8,-1,1,9,10,-1,10,0,1,-1,16,17,12,-1,12,13,16,-1,24,16,13,-1,13,23,24,-1,2,25,26,-1,26,3,2,-1,27,28,17,-1,17,16,27,-1,29,27,16,-1,16,24,29,-1,25,30,31,-1,31,26,25,-1,32,33,7,-1,7,5,32,-1,34,32,5,-1,5,3,34,-1,14,15,0,-1,0,11,14,-1,15,18,1,-1,1,0,15,-1,33,38,37,-1,37,7,33,-1,39,34,3,-1,3,26,39,-1,38,42,41,-1,41,37,38,-1,43,39,26,-1,26,31,43,-1,44,45,33,-1,33,32,44,-1,45,48,38,-1,38,33,45,-1,49,44,32,-1,32,34,49,-1,50,49,34,-1,34,39,50,-1,19,20,15,-1,15,14,19,-1,48,51,42,-1,42,38,48,-1,52,50,39,-1,39,43,52,-1,20,21,18,-1,18,15,20,-1,13,12,45,-1,45,44,13,-1,12,17,48,-1,48,45,12,-1,23,13,44,-1,44,49,23,-1,24,23,49,-1,49,50,24,-1,22,35,20,-1,20,19,22,-1,17,28,51,-1,51,48,17,-1,29,24,50,-1,50,52,29,-1,35,36,21,-1,21,20,35,-1,53,7,37,-1,37,54,53,-1,54,37,41,-1,41,55,54,-1,40,11,0,-1,0,10,40,-1,8,7,53,-1,56,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,64,-1,58,62,64,-1,56,58,64,-1,56,64,65,-1,6,8,56,-1,56,65,6,-1,8,53,57,-1,57,56,8,-1,53,54,58,-1,58,57,53,-1,54,55,59,-1,59,58,54,-1,55,66,60,-1,60,59,55,-1,10,9,46,-1,46,47,10,-1,30,25,62,-1,62,61,30,-1,25,2,63,-1,63,62,25,-1,2,4,64,-1,64,63,2,-1,4,6,65,-1,65,64,4,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_coordIndex_1()
		{
			int[] value = {0,1,20,-1,20,14,0,-1,15,2,0,-1,0,14,15,-1,16,3,21,-1,21,23,16,-1,17,4,3,-1,3,16,17,-1,18,5,4,-1,4,17,18,-1,6,5,18,-1,18,19,6,-1,1,6,19,-1,19,20,1,-1,8,7,25,-1,25,26,8,-1,27,9,8,-1,8,26,27,-1,30,10,22,-1,22,24,30,-1,11,10,30,-1,30,28,11,-1,12,11,28,-1,28,29,12,-1,13,12,29,-1,29,31,13,-1,7,13,31,-1,31,25,7,-1,14,20,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,10,16,23,-1,23,22,10,-1,11,17,16,-1,16,10,11,-1,12,18,17,-1,17,11,12,-1,19,18,12,-1,12,13,19,-1,20,19,13,-1,13,7,20,-1,23,21,2,-1,2,15,23,-1,22,23,15,-1,15,9,22,-1,9,27,24,-1,24,22,9,-1,0,33,32,-1,32,1,0,-1,34,33,0,-1,0,2,34,-1,3,35,39,-1,39,21,3,-1,4,36,35,-1,35,3,4,-1,37,36,4,-1,4,5,37,-1,6,38,37,-1,37,5,6,-1,1,32,38,-1,38,6,1,-1,39,34,2,-1,2,21,39,-1,33,40,41,-1,41,32,33,-1,32,41,42,-1,42,38,32,-1,38,42,43,-1,43,37,38,-1,37,43,44,-1,44,36,37,-1,36,44,45,-1,45,35,36,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,34,39,-1,34,47,40,-1,40,33,34,-1,40,48,41,-1,41,48,42,-1,42,48,43,-1,43,48,44,-1,44,48,45,-1,45,48,46,-1,46,48,47,-1,47,48,40,-1,24,49,50,-1,50,30,24,-1,30,50,51,-1,51,28,30,-1,28,51,52,-1,52,29,28,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,25,31,-1,25,54,55,-1,55,26,25,-1,26,55,56,-1,56,27,26,-1,27,56,49,-1,49,24,27,-1,49,57,50,-1,50,57,51,-1,51,57,52,-1,52,57,53,-1,53,57,54,-1,54,57,55,-1,55,57,56,-1,56,57,49,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_81_texCoordIndex_1()
		{
			int[] value = {0,1,9,-1,9,8,0,-1,10,2,0,-1,0,8,10,-1,11,24,3,-1,3,12,11,-1,13,4,5,-1,5,25,13,-1,14,6,4,-1,4,13,14,-1,7,6,14,-1,14,15,7,-1,1,7,15,-1,15,9,1,-1,16,17,37,-1,37,38,16,-1,39,18,16,-1,16,38,39,-1,42,19,20,-1,20,36,42,-1,21,26,43,-1,43,40,21,-1,22,21,40,-1,40,41,22,-1,23,22,41,-1,41,44,23,-1,17,23,44,-1,44,37,17,-1,8,9,17,-1,17,16,8,-1,18,10,8,-1,8,16,18,-1,19,11,12,-1,12,20,19,-1,21,13,25,-1,25,26,21,-1,22,14,13,-1,13,21,22,-1,15,14,22,-1,22,23,15,-1,9,15,23,-1,23,17,9,-1,12,3,2,-1,2,10,12,-1,20,12,10,-1,10,18,20,-1,18,39,36,-1,36,20,18,-1,27,46,45,-1,45,28,27,-1,47,46,27,-1,27,29,47,-1,30,48,53,-1,53,31,30,-1,32,49,48,-1,48,30,32,-1,50,49,32,-1,32,33,50,-1,34,51,50,-1,50,33,34,-1,28,45,51,-1,51,34,28,-1,52,47,29,-1,29,35,52,-1,46,54,55,-1,55,45,46,-1,45,55,56,-1,56,51,45,-1,51,56,57,-1,57,50,51,-1,50,57,58,-1,58,49,50,-1,49,58,59,-1,59,48,49,-1,48,59,60,-1,60,53,48,-1,52,60,61,-1,61,47,52,-1,47,61,54,-1,54,46,47,-1,54,62,55,-1,55,62,56,-1,56,62,57,-1,57,62,58,-1,58,62,59,-1,59,62,60,-1,60,62,61,-1,61,62,54,-1,36,63,64,-1,64,42,36,-1,43,64,65,-1,65,40,43,-1,40,65,66,-1,66,41,40,-1,41,66,67,-1,67,44,41,-1,44,67,68,-1,68,37,44,-1,37,68,69,-1,69,38,37,-1,38,69,70,-1,70,39,38,-1,39,70,63,-1,63,36,39,-1,63,71,64,-1,64,71,65,-1,65,71,66,-1,66,71,67,-1,67,71,68,-1,68,71,69,-1,69,71,70,-1,70,71,63,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_coordIndex_1()
		{
			int[] value = {24,0,1,-1,1,30,24,-1,25,2,0,-1,0,24,25,-1,26,3,14,-1,14,31,26,-1,27,4,3,-1,3,26,27,-1,5,4,27,-1,27,28,5,-1,6,5,28,-1,28,29,6,-1,1,6,29,-1,29,30,1,-1,9,15,20,-1,20,18,9,-1,8,16,17,-1,17,7,8,-1,9,18,16,-1,16,8,9,-1,19,20,15,-1,15,10,19,-1,21,19,10,-1,10,11,21,-1,22,21,11,-1,11,12,22,-1,23,22,12,-1,12,13,23,-1,7,17,23,-1,23,13,7,-1,25,18,20,-1,20,31,25,-1,16,24,30,-1,30,17,16,-1,18,25,24,-1,24,16,18,-1,19,26,31,-1,31,20,19,-1,27,26,19,-1,19,21,27,-1,28,27,21,-1,21,22,28,-1,29,28,22,-1,22,23,29,-1,30,29,23,-1,23,17,30,-1,2,25,31,-1,31,14,2,-1,0,32,1,-1,1,32,6,-1,6,32,5,-1,5,32,4,-1,4,32,3,-1,3,32,14,-1,14,32,2,-1,2,32,0,-1,8,7,33,-1,33,34,8,-1,9,8,34,-1,34,35,9,-1,10,15,40,-1,40,36,10,-1,10,36,37,-1,37,11,10,-1,12,11,37,-1,37,38,12,-1,13,12,38,-1,38,39,13,-1,7,13,39,-1,39,33,7,-1,15,9,35,-1,35,40,15,-1,33,41,42,-1,42,34,33,-1,34,42,43,-1,43,35,34,-1,35,43,44,-1,44,40,35,-1,40,44,45,-1,45,36,40,-1,36,45,46,-1,46,37,36,-1,37,46,47,-1,47,38,37,-1,38,47,48,-1,48,39,38,-1,39,48,41,-1,41,33,39,-1,41,49,42,-1,42,49,43,-1,43,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,41,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_texCoordIndex_1()
		{
			int[] value = {1,0,3,-1,3,2,1,-1,5,4,0,-1,0,1,5,-1,7,6,9,-1,9,8,7,-1,11,10,6,-1,6,7,11,-1,12,10,11,-1,11,13,12,-1,14,12,13,-1,13,15,14,-1,3,14,15,-1,15,2,3,-1,18,35,25,-1,25,24,18,-1,16,26,27,-1,27,17,16,-1,18,24,26,-1,26,16,18,-1,28,36,19,-1,19,20,28,-1,29,28,20,-1,20,21,29,-1,30,29,21,-1,21,22,30,-1,31,30,22,-1,22,23,31,-1,17,27,31,-1,31,23,17,-1,5,24,25,-1,25,33,5,-1,26,1,2,-1,2,27,26,-1,24,5,1,-1,1,26,24,-1,28,7,8,-1,8,36,28,-1,11,7,28,-1,28,29,11,-1,13,11,29,-1,29,30,13,-1,15,13,30,-1,30,31,15,-1,2,15,31,-1,31,27,2,-1,4,5,33,-1,33,34,4,-1,0,32,3,-1,3,32,14,-1,14,32,12,-1,12,32,10,-1,10,32,6,-1,6,32,9,-1,34,32,4,-1,4,32,0,-1,16,17,37,-1,37,38,16,-1,18,16,38,-1,38,39,18,-1,20,19,45,-1,45,40,20,-1,20,40,41,-1,41,21,20,-1,22,21,41,-1,41,42,22,-1,23,22,42,-1,42,43,23,-1,17,23,43,-1,43,37,17,-1,35,18,39,-1,39,44,35,-1,37,46,47,-1,47,38,37,-1,38,47,48,-1,48,39,38,-1,39,48,49,-1,49,44,39,-1,45,49,50,-1,50,40,45,-1,40,50,51,-1,51,41,40,-1,41,51,52,-1,52,42,41,-1,42,52,53,-1,53,43,42,-1,43,53,46,-1,46,37,43,-1,46,54,47,-1,47,54,48,-1,48,54,49,-1,49,54,50,-1,50,54,51,-1,51,54,52,-1,52,54,53,-1,53,54,46,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_coordIndex_1()
		{
			int[] value = {0,16,10,-1,10,1,0,-1,2,1,10,-1,10,11,2,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,41,15,16,-1,16,0,41,-1,0,18,44,-1,44,41,0,-1,17,3,4,-1,4,19,17,-1,20,2,3,-1,3,17,20,-1,21,1,2,-1,2,20,21,-1,18,0,1,-1,1,21,18,-1,18,6,42,-1,42,44,18,-1,8,17,19,-1,19,7,8,-1,23,20,17,-1,17,8,23,-1,9,21,20,-1,20,23,9,-1,6,18,21,-1,21,9,6,-1,10,16,26,-1,26,24,10,-1,11,10,24,-1,24,25,11,-1,12,11,25,-1,25,27,12,-1,13,12,27,-1,27,28,13,-1,5,14,13,-1,13,28,5,-1,30,15,39,-1,39,29,30,-1,26,16,15,-1,15,30,26,-1,8,7,22,-1,22,23,8,-1,9,23,22,-1,22,6,9,-1,6,22,46,-1,46,42,6,-1,31,38,37,-1,37,36,35,-1,31,37,35,-1,35,34,33,-1,31,35,33,-1,32,31,33,-1,28,31,32,-1,32,5,28,-1,5,32,33,-1,33,29,5,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,26,30,-1,26,35,36,-1,36,24,26,-1,24,36,37,-1,37,25,24,-1,25,37,38,-1,38,27,25,-1,27,38,31,-1,31,28,27,-1,39,14,5,-1,5,29,39,-1,7,43,46,-1,46,22,7,-1,4,40,45,-1,45,19,4,-1,19,45,43,-1,43,7,19,-1,4,13,14,-1,14,40,4,-1,48,47,56,-1,48,56,55,-1,55,54,53,-1,55,53,52,-1,48,55,52,-1,52,51,50,-1,48,52,50,-1,48,50,49,-1,15,47,48,-1,48,39,15,-1,39,48,49,-1,49,14,39,-1,14,49,50,-1,50,40,14,-1,40,50,51,-1,51,45,40,-1,45,51,52,-1,52,43,45,-1,43,52,53,-1,53,46,43,-1,46,53,54,-1,54,42,46,-1,42,54,55,-1,55,44,42,-1,44,55,56,-1,56,41,44,-1,41,56,47,-1,47,15,41,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_99_texCoordIndex_1()
		{
			int[] value = {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,6,4,5,-1,5,7,6,-1,10,6,7,-1,7,11,10,-1,12,13,3,-1,3,0,12,-1,0,15,14,-1,14,12,0,-1,16,6,10,-1,10,17,16,-1,18,4,6,-1,6,16,18,-1,19,1,4,-1,4,18,19,-1,15,0,1,-1,1,19,15,-1,15,21,20,-1,20,14,15,-1,22,16,17,-1,17,23,22,-1,24,18,16,-1,16,22,24,-1,25,19,18,-1,18,24,25,-1,21,15,19,-1,19,25,21,-1,67,68,27,-1,27,26,67,-1,69,67,26,-1,26,71,69,-1,80,79,28,-1,28,29,80,-1,81,80,29,-1,29,30,81,-1,32,82,81,-1,81,30,32,-1,33,70,73,-1,73,72,33,-1,27,68,70,-1,70,33,27,-1,9,8,39,-1,39,38,9,-1,41,38,39,-1,39,42,41,-1,42,39,63,-1,63,62,42,-1,47,46,45,-1,45,44,43,-1,47,45,43,-1,43,40,37,-1,47,43,37,-1,36,47,37,-1,30,47,36,-1,36,32,30,-1,32,36,37,-1,37,34,32,-1,72,74,75,-1,75,33,72,-1,33,75,76,-1,76,27,33,-1,27,76,77,-1,77,26,27,-1,26,77,78,-1,78,71,26,-1,28,45,46,-1,46,29,28,-1,29,46,47,-1,47,30,29,-1,83,82,32,-1,32,34,83,-1,8,64,63,-1,63,39,8,-1,10,48,49,-1,49,17,10,-1,17,49,50,-1,50,23,17,-1,10,11,31,-1,31,48,10,-1,51,60,59,-1,51,59,58,-1,58,57,56,-1,58,56,55,-1,51,58,55,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,13,60,51,-1,51,35,13,-1,35,51,52,-1,52,31,35,-1,31,52,53,-1,53,48,31,-1,48,53,54,-1,54,49,48,-1,49,54,55,-1,55,50,49,-1,50,55,56,-1,56,61,50,-1,63,66,65,-1,65,62,63,-1,20,57,58,-1,58,14,20,-1,14,58,59,-1,59,12,14,-1,12,59,60,-1,60,13,12,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_coordIndex_1()
		{
			int[] value = {36,33,0,-1,1,0,33,-1,33,35,1,-1,34,2,1,-1,1,35,34,-1,5,4,42,-1,42,39,5,-1,25,19,18,-1,18,31,25,-1,32,20,19,-1,19,25,32,-1,36,0,26,-1,26,41,36,-1,22,25,31,-1,31,21,22,-1,23,32,25,-1,25,22,23,-1,41,26,5,-1,5,39,41,-1,7,1,2,-1,2,6,7,-1,8,0,1,-1,1,7,8,-1,9,3,4,-1,4,10,9,-1,10,4,5,-1,5,11,10,-1,6,2,24,-1,24,27,6,-1,28,26,0,-1,0,8,28,-1,27,24,3,-1,3,9,27,-1,11,5,26,-1,26,28,11,-1,13,7,6,-1,6,12,13,-1,12,6,27,-1,27,29,12,-1,14,8,7,-1,7,13,14,-1,30,28,8,-1,8,14,30,-1,15,9,10,-1,10,16,15,-1,29,27,9,-1,9,15,29,-1,17,11,28,-1,28,30,17,-1,16,10,11,-1,11,17,16,-1,19,13,12,-1,12,18,19,-1,18,12,29,-1,29,31,18,-1,20,14,13,-1,13,19,20,-1,32,30,14,-1,14,20,32,-1,21,15,16,-1,16,22,21,-1,31,29,15,-1,15,21,31,-1,23,17,30,-1,30,32,23,-1,22,16,17,-1,17,23,22,-1,37,40,24,-1,24,2,37,-1,40,38,3,-1,3,24,40,-1,38,42,4,-1,4,3,38,-1,34,37,2,-1,44,43,52,-1,52,51,50,-1,50,49,48,-1,48,47,46,-1,50,48,46,-1,52,50,46,-1,44,52,46,-1,44,46,45,-1,35,43,44,-1,44,34,35,-1,34,44,45,-1,45,37,34,-1,37,45,46,-1,46,40,37,-1,40,46,47,-1,47,38,40,-1,38,47,48,-1,48,42,38,-1,42,48,49,-1,49,39,42,-1,39,49,50,-1,50,41,39,-1,41,50,51,-1,51,36,41,-1,36,51,52,-1,52,33,36,-1,33,52,43,-1,43,35,33,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_108_texCoordIndex_1()
		{
			int[] value = {2,4,3,-1,5,3,4,-1,4,6,5,-1,8,7,5,-1,5,6,8,-1,1,0,10,-1,10,9,1,-1,16,13,12,-1,12,17,16,-1,24,23,13,-1,13,16,24,-1,2,3,26,-1,26,25,2,-1,27,16,17,-1,17,28,27,-1,29,24,16,-1,16,27,29,-1,25,26,31,-1,31,30,25,-1,32,5,7,-1,7,33,32,-1,34,3,5,-1,5,32,34,-1,14,11,0,-1,0,15,14,-1,15,0,1,-1,1,18,15,-1,33,7,37,-1,37,38,33,-1,39,26,3,-1,3,34,39,-1,38,37,41,-1,41,42,38,-1,43,31,26,-1,26,39,43,-1,44,32,33,-1,33,45,44,-1,45,33,38,-1,38,48,45,-1,49,34,32,-1,32,44,49,-1,50,39,34,-1,34,49,50,-1,19,14,15,-1,15,20,19,-1,48,38,42,-1,42,51,48,-1,52,43,39,-1,39,50,52,-1,20,15,18,-1,18,21,20,-1,13,44,45,-1,45,12,13,-1,12,45,48,-1,48,17,12,-1,23,49,44,-1,44,13,23,-1,24,50,49,-1,49,23,24,-1,22,19,20,-1,20,35,22,-1,17,48,51,-1,51,28,17,-1,29,52,50,-1,50,24,29,-1,35,20,21,-1,21,36,35,-1,53,54,37,-1,37,7,53,-1,54,55,41,-1,41,37,54,-1,40,10,0,-1,0,11,40,-1,8,53,7,-1,56,65,64,-1,64,63,62,-1,62,61,60,-1,60,59,58,-1,62,60,58,-1,64,62,58,-1,56,64,58,-1,56,58,57,-1,6,65,56,-1,56,8,6,-1,8,56,57,-1,57,53,8,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,60,-1,60,66,55,-1,10,47,46,-1,46,9,10,-1,30,61,62,-1,62,25,30,-1,25,62,63,-1,63,2,25,-1,2,63,64,-1,64,4,2,-1,4,64,65,-1,65,6,4,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_coordIndex_1()
		{
			int[] value = {17,0,6,-1,6,8,17,-1,33,34,32,-1,32,16,33,-1,26,4,2,-1,2,25,26,-1,18,5,3,-1,3,16,18,-1,22,23,6,-1,6,0,22,-1,19,8,6,-1,6,1,19,-1,20,35,73,-1,73,2,20,-1,24,75,76,-1,76,3,24,-1,17,9,4,-1,4,0,17,-1,21,27,5,-1,5,1,21,-1,18,16,32,-1,32,10,18,-1,22,0,4,-1,4,26,22,-1,19,1,5,-1,5,18,19,-1,9,20,2,-1,2,4,9,-1,27,24,3,-1,3,5,27,-1,23,21,1,-1,1,6,23,-1,81,35,20,-1,20,29,81,-1,12,17,8,-1,8,11,12,-1,13,9,17,-1,17,12,13,-1,20,9,13,-1,13,29,20,-1,14,10,30,-1,15,18,10,-1,10,14,15,-1,31,19,18,-1,18,15,31,-1,11,8,19,-1,19,31,11,-1,90,25,2,-1,2,73,90,-1,16,3,76,-1,76,33,16,-1,91,30,10,-1,10,28,91,-1,30,91,81,-1,81,7,30,-1,29,7,81,-1,29,13,7,-1,28,10,32,-1,32,34,28,-1,23,22,37,-1,37,36,23,-1,22,26,38,-1,38,37,22,-1,26,25,39,-1,39,38,26,-1,25,90,40,-1,40,39,25,-1,75,24,42,-1,42,41,75,-1,24,27,43,-1,43,42,24,-1,27,21,44,-1,44,43,27,-1,21,23,36,-1,36,44,21,-1,36,37,45,-1,37,38,45,-1,38,39,45,-1,39,40,45,-1,41,42,45,-1,42,43,45,-1,43,44,45,-1,44,36,45,-1,30,7,47,-1,47,46,30,-1,7,13,48,-1,48,47,7,-1,13,12,49,-1,49,48,13,-1,12,11,50,-1,50,49,12,-1,11,31,51,-1,51,50,11,-1,31,15,52,-1,52,51,31,-1,15,14,53,-1,53,52,15,-1,14,30,46,-1,46,53,14,-1,46,47,54,-1,47,48,54,-1,48,49,54,-1,49,50,54,-1,50,51,54,-1,51,52,54,-1,52,53,54,-1,53,46,54,-1,55,58,57,-1,57,56,55,-1,33,59,60,-1,60,34,33,-1,62,61,64,-1,64,63,62,-1,65,59,67,-1,67,66,65,-1,68,56,57,-1,57,69,68,-1,71,70,57,-1,57,58,71,-1,72,64,73,-1,73,35,72,-1,74,67,76,-1,76,75,74,-1,55,56,63,-1,63,77,55,-1,78,70,66,-1,66,79,78,-1,65,80,60,-1,60,59,65,-1,68,62,63,-1,63,56,68,-1,71,65,66,-1,66,70,71,-1,77,63,64,-1,64,72,77,-1,79,66,67,-1,67,74,79,-1,69,57,70,-1,70,78,69,-1,81,82,72,-1,72,35,81,-1,83,84,58,-1,58,55,83,-1,85,83,55,-1,55,77,85,-1,72,82,85,-1,85,77,72,-1,86,87,80,-1,88,86,80,-1,80,65,88,-1,89,88,65,-1,65,71,89,-1,84,89,71,-1,71,58,84,-1,90,73,64,-1,64,61,90,-1,59,33,76,-1,76,67,59,-1,91,28,80,-1,80,87,91,-1,87,92,81,-1,81,91,87,-1,82,81,92,-1,82,92,85,-1,28,34,60,-1,60,80,28,-1,69,94,93,-1,93,68,69,-1,68,93,95,-1,95,62,68,-1,62,95,96,-1,96,61,62,-1,61,96,40,-1,40,90,61,-1,75,41,97,-1,97,74,75,-1,74,97,98,-1,98,79,74,-1,79,98,99,-1,99,78,79,-1,78,99,94,-1,94,69,78,-1,94,45,93,-1,93,45,95,-1,95,45,96,-1,96,45,40,-1,41,45,97,-1,97,45,98,-1,98,45,99,-1,99,45,94,-1,87,101,100,-1,100,92,87,-1,92,100,102,-1,102,85,92,-1,85,102,103,-1,103,83,85,-1,83,103,104,-1,104,84,83,-1,84,104,105,-1,105,89,84,-1,89,105,106,-1,106,88,89,-1,88,106,107,-1,107,86,88,-1,86,107,101,-1,101,87,86,-1,101,108,100,-1,100,108,102,-1,102,108,103,-1,103,108,104,-1,104,108,105,-1,105,108,106,-1,106,108,107,-1,107,108,101,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,0,-1,5,44,43,-1,43,4,5,-1,9,10,11,-1,11,8,9,-1,12,13,14,-1,14,4,12,-1,15,16,2,-1,2,1,15,-1,18,3,2,-1,2,17,18,-1,19,20,21,-1,21,11,19,-1,22,23,24,-1,24,14,22,-1,0,25,10,-1,10,1,0,-1,26,27,13,-1,13,17,26,-1,12,4,43,-1,43,7,12,-1,15,1,10,-1,10,9,15,-1,18,17,13,-1,13,12,18,-1,25,19,11,-1,11,10,25,-1,27,22,14,-1,14,13,27,-1,16,26,17,-1,17,2,16,-1,30,20,19,-1,19,31,30,-1,32,0,3,-1,3,33,32,-1,34,25,0,-1,0,32,34,-1,19,25,34,-1,34,31,19,-1,35,7,29,-1,36,12,7,-1,7,35,36,-1,37,18,12,-1,12,36,37,-1,33,3,18,-1,18,37,33,-1,39,8,11,-1,11,21,39,-1,4,14,24,-1,24,5,4,-1,38,29,7,-1,7,6,38,-1,29,38,30,-1,30,28,29,-1,31,28,30,-1,41,40,42,-1,6,7,43,-1,43,44,6,-1,16,15,46,-1,46,45,16,-1,15,9,47,-1,47,46,15,-1,9,8,48,-1,48,47,9,-1,8,39,49,-1,49,48,8,-1,23,22,51,-1,51,50,23,-1,22,27,52,-1,52,51,22,-1,27,26,53,-1,53,52,27,-1,26,16,45,-1,45,53,26,-1,45,46,54,-1,46,47,54,-1,47,48,54,-1,48,49,54,-1,50,51,54,-1,51,52,54,-1,52,53,54,-1,53,45,54,-1,29,28,56,-1,56,55,29,-1,42,40,57,-1,57,56,42,-1,34,32,58,-1,58,57,34,-1,32,33,59,-1,59,58,32,-1,33,37,60,-1,60,59,33,-1,37,36,61,-1,61,60,37,-1,36,35,62,-1,62,61,36,-1,35,29,55,-1,55,62,35,-1,55,56,63,-1,56,57,63,-1,57,58,63,-1,58,59,63,-1,59,60,63,-1,60,61,63,-1,61,62,63,-1,62,55,63,-1,64,67,66,-1,66,65,64,-1,69,68,71,-1,71,70,69,-1,73,72,75,-1,75,74,73,-1,76,68,78,-1,78,77,76,-1,79,65,66,-1,66,80,79,-1,82,81,66,-1,66,67,82,-1,83,75,85,-1,85,84,83,-1,86,78,88,-1,88,87,86,-1,64,65,74,-1,74,89,64,-1,90,81,77,-1,77,91,90,-1,76,92,71,-1,71,68,76,-1,79,73,74,-1,74,65,79,-1,82,76,77,-1,77,81,82,-1,89,74,75,-1,75,83,89,-1,91,77,78,-1,78,86,91,-1,80,66,81,-1,81,90,80,-1,93,94,83,-1,83,84,93,-1,95,96,67,-1,67,64,95,-1,97,95,64,-1,64,89,97,-1,83,94,97,-1,97,89,83,-1,98,99,92,-1,100,98,92,-1,92,76,100,-1,101,100,76,-1,76,82,101,-1,96,101,82,-1,82,67,96,-1,102,85,75,-1,75,72,102,-1,68,69,88,-1,88,78,68,-1,103,104,92,-1,92,99,103,-1,99,105,93,-1,93,103,99,-1,94,93,105,-1,106,108,107,-1,104,70,71,-1,71,92,104,-1,80,110,109,-1,109,79,80,-1,79,109,111,-1,111,73,79,-1,73,111,112,-1,112,72,73,-1,72,112,113,-1,113,102,72,-1,87,115,114,-1,114,86,87,-1,86,114,116,-1,116,91,86,-1,91,116,117,-1,117,90,91,-1,90,117,110,-1,110,80,90,-1,110,118,109,-1,109,118,111,-1,111,118,112,-1,112,118,113,-1,115,118,114,-1,114,118,116,-1,116,118,117,-1,117,118,110,-1,99,120,119,-1,119,105,99,-1,108,119,121,-1,121,107,108,-1,97,121,122,-1,122,95,97,-1,95,122,123,-1,123,96,95,-1,96,123,124,-1,124,101,96,-1,101,124,125,-1,125,100,101,-1,100,125,126,-1,126,98,100,-1,98,126,120,-1,120,99,98,-1,120,127,119,-1,119,127,121,-1,121,127,122,-1,122,127,123,-1,123,127,124,-1,124,127,125,-1,125,127,126,-1,126,127,120,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_10_121_point_1()
		{
			double[] value = {5.212,4.698,-2.625,4.968,5.032,3.07,1.016,3.867,-4.34,1.414,4.761,4.266,3.286,4.268,-3.787,3.252,4.915,3.882,6.124,4.989,0.2487,1.788,0.2033,-2.461,6.602,3.814,0.2487,3.411,2.56,-3.752,1.257,0.7206,2.619,6.722,1.679,0.2487,5.664,1.414,-2.456,3.431,0.8837,-3.397,1.644,0.3036,2.623,3.78,1.051,3.623,1.586,3.057,4.017,5.47,3.114,-2.5,3.595,3.243,3.846,5.468,3.614,2.996,1.243,2.27,-4.133,4.376,6.066,2.741,4.779,5.968,-2.335,5.552,5.964,0.2487,1.179,6.089,3.825,0.7451,5.522,-4.031,2.93,5.756,-3.387,2.869,6.128,3.512,0.0,1.166,2.697,1.475,0.789,-3.371,0.8571,-0.4369,0.2487,5.705,1.611,2.778,1.421,2.148,3.585,0.0,2.915,4.073,0.0,2.15,3.754,0.0,2.312,-3.745,4.526,7.154,0.1312,3.936,7.188,-1.89,2.568,6.989,-2.721,0.6541,6.759,-3.283,0.0,6.735,-3.224,0.0,7.189,3.068,1.03,7.24,2.98,2.505,7.28,2.699,3.611,7.229,2.119,0.0,8.165,-0.0491,1.567,-0.6144,0.2735,2.327,-0.4803,-2.027,3.513,-0.2713,-2.719,5.231,0.0316,-1.991,6.112,0.187,0.2797,5.272,0.0389,2.373,3.839,-0.2137,3.009,2.18,-0.5063,2.22,4.1,-1.264,0.1736,-5.47,3.114,-2.5,-5.212,4.698,-2.625,-6.124,4.989,0.2487,-6.602,3.814,0.2487,-1.586,3.057,4.017,-1.421,2.148,3.585,-0.7451,5.522,-4.031,-2.93,5.756,-3.387,-3.286,4.268,-3.787,-1.016,3.867,-4.34,-3.595,3.243,3.846,-3.252,4.915,3.882,-1.414,4.761,4.266,-4.779,5.968,-2.335,-5.552,5.964,0.2487,-4.968,5.032,3.07,-5.468,3.614,2.996,-1.243,2.27,-4.133,0.0,3.839,-3.995,-1.179,6.089,3.825,0.0,6.039,3.923,0.0,4.691,4.34,-3.411,2.56,-3.752,-4.376,6.066,2.741,-2.869,6.128,3.512,-1.257,0.7206,2.619,0.0,0.7395,-2.939,-1.475,0.789,-3.371,-5.664,1.414,-2.456,-6.722,1.679,0.2487,-3.431,0.8837,-3.397,-1.644,0.3036,2.623,-0.8571,-0.4369,0.2487,-3.78,1.051,3.623,-5.705,1.611,2.778,0.0,5.498,-3.963,0.0,-0.0013,0.2487,-1.788,0.2033,-2.461,-3.936,7.188,-1.89,-4.526,7.154,0.1312,-2.568,6.989,-2.721,-0.6541,6.759,-3.283,-1.03,7.24,2.98,-2.505,7.28,2.699,-3.611,7.229,2.119};
			return value;
		}
		private double[] getCoordinate_10_121_point_2()
		{
			double[] value = {-2.327,-0.4803,-2.027,-1.567,-0.6144,0.2735,-3.513,-0.2713,-2.719,-5.231,0.0316,-1.991,-6.112,0.187,0.2797,-5.272,0.0389,2.373,-3.839,-0.2137,3.009,-2.18,-0.5063,2.22,-4.1,-1.264,0.1736};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_122_point_1()
		{
			double[] value = {0.8787,0.5482,0.8879,0.5725,0.8253,0.5851,0.8261,0.5676,0.7471,0.4942,0.7327,0.4737,0.7752,0.4415,0.7864,0.4566,0.9667,0.5468,0.9322,0.5756,0.919,0.55,0.9483,0.5193,0.7595,0.5178,0.7459,0.5473,0.7237,0.5237,0.8882,0.5972,0.8277,0.6032,0.7744,0.5696,0.7846,0.5515,0.923,0.4984,0.9378,0.4748,0.9617,0.5071,0.706,0.5449,0.691,0.5316,0.7069,0.5075,0.9018,0.528,0.7676,0.5885,0.7308,0.5664,0.8725,0.4621,0.836,0.4464,0.8759,0.4302,0.887,0.4797,0.8684,0.519,0.8283,0.5351,0.8815,0.5033,0.8027,0.4614,0.7871,0.4954,0.8005,0.5251,0.8295,0.4283,0.9776,0.5387,0.8283,0.3651,0.836,0.3623,0.8429,0.368,0.7667,0.4754,0.754,0.4576,0.8277,0.6032,0.8882,0.5972,0.9322,0.5756,0.9667,0.5468,0.9776,0.5387,0.691,0.5316,0.706,0.5449,0.7308,0.5664,0.7676,0.5885,0.8317,0.5697,0.836,0.4464,0.8725,0.4621,0.8283,0.3651,0.8684,0.519,0.8283,0.5351,0.8005,0.5251,0.7871,0.4954,0.8027,0.4614,0.828,0.4762,0.8787,0.5482,0.8879,0.5725,0.8253,0.5851,0.8261,0.5676,0.7471,0.4942,0.7327,0.4737,0.754,0.4576,0.7667,0.4754,0.9667,0.5468,0.9322,0.5756,0.919,0.55,0.9483,0.5193,0.7595,0.5178,0.7459,0.5473,0.7237,0.5237,0.8882,0.5972,0.8277,0.6032,0.7744,0.5696,0.7846,0.5515,0.923,0.4984,0.9378,0.4748,0.9617,0.5071,0.706,0.5449,0.691,0.5316,0.7069,0.5075,0.9018,0.528,0.7676,0.5885,0.7308,0.5664,0.7864,0.4566,0.8759,0.4302,0.887,0.4797,0.8684,0.519,0.8283,0.5351,0.8815,0.5033,0.8027,0.4614,0.836,0.4464};
			return value;
		}
		private double[] getTextureCoordinate_10_122_point_2()
		{
			double[] value = {0.7871,0.4954,0.8005,0.5251,0.9776,0.5387,0.8295,0.4283,0.7752,0.4415,0.8725,0.4621,0.836,0.3623,0.8283,0.3651,0.8429,0.368,0.8882,0.5972,0.8277,0.6032,0.9322,0.5756,0.9667,0.5468,0.9776,0.5387,0.706,0.5449,0.691,0.5316,0.7308,0.5664,0.7676,0.5885,0.8317,0.5697,0.8725,0.4621,0.836,0.4464,0.8283,0.3651,0.8684,0.519,0.8283,0.5351,0.8005,0.5251,0.7871,0.4954,0.8027,0.4614,0.828,0.4762};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_coordIndex_1()
		{
			int[] value = {8,0,1,-1,1,9,8,-1,10,2,0,-1,0,8,10,-1,3,2,10,-1,10,11,3,-1,4,3,11,-1,11,12,4,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,7,6,14,-1,14,15,7,-1,1,7,15,-1,15,9,1,-1,8,9,17,-1,17,16,8,-1,10,8,16,-1,16,18,10,-1,19,11,10,-1,10,18,19,-1,20,12,11,-1,11,19,20,-1,21,13,12,-1,12,20,21,-1,22,14,13,-1,13,21,22,-1,15,14,22,-1,22,23,15,-1,9,15,23,-1,23,17,9,-1,24,25,26,-1,26,27,24,-1,25,28,29,-1,29,26,25,-1,30,31,29,-1,29,28,30,-1,32,33,31,-1,31,30,32,-1,32,34,35,-1,35,33,32,-1,36,24,27,-1,27,37,36,-1,38,39,35,-1,35,34,38,-1,37,39,38,-1,38,36,37,-1,27,26,40,-1,40,41,27,-1,26,29,42,-1,42,40,26,-1,29,31,43,-1,43,42,29,-1,31,33,44,-1,44,43,31,-1,33,35,45,-1,45,44,33,-1,35,39,46,-1,46,45,35,-1,37,27,41,-1,41,47,37,-1,39,37,47,-1,47,46,39,-1,28,25,48,-1,25,24,48,-1,24,36,48,-1,36,38,48,-1,38,34,48,-1,34,32,48,-1,32,30,48,-1,30,28,48,-1,40,49,50,-1,50,41,40,-1,42,51,49,-1,49,40,42,-1,43,52,51,-1,51,42,43,-1,44,53,52,-1,52,43,44,-1,45,54,53,-1,53,44,45,-1,46,55,54,-1,54,45,46,-1,41,50,56,-1,56,47,41,-1,47,56,55,-1,55,46,47,-1,1,0,61,-1,61,57,1,-1,62,2,3,-1,3,58,62,-1,58,3,4,-1,4,59,58,-1,59,4,5,-1,5,60,59,-1,60,5,6,-1,6,63,60,-1,7,1,57,-1,57,64,7,-1,0,2,62,-1,62,61,0,-1,6,7,64,-1,64,63,6,-1,57,61,66,-1,66,65,57,-1,61,62,67,-1,67,66,61,-1,62,58,68,-1,68,67,62,-1,58,59,69,-1,69,68,58,-1,59,60,70,-1,70,69,59,-1,60,63,71,-1,71,70,60,-1,63,64,72,-1,72,71,63,-1,64,57,65,-1,65,72,64,-1,65,66,73,-1,66,67,73,-1,67,68,73,-1,68,69,73,-1,69,70,73,-1,70,71,73,-1,71,72,73,-1,72,65,73,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_130_texCoordIndex_1()
		{
			int[] value = {9,0,1,-1,1,10,9,-1,11,2,0,-1,0,9,11,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,14,5,4,-1,4,13,14,-1,15,6,5,-1,5,14,15,-1,8,7,17,-1,17,16,8,-1,1,8,16,-1,16,10,1,-1,9,10,19,-1,19,18,9,-1,11,9,18,-1,18,20,11,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,16,17,26,-1,26,25,16,-1,10,16,25,-1,25,19,10,-1,27,28,29,-1,29,30,27,-1,28,31,32,-1,32,29,28,-1,33,34,32,-1,32,31,33,-1,35,36,34,-1,34,33,35,-1,35,37,38,-1,38,36,35,-1,39,27,30,-1,30,40,39,-1,41,42,38,-1,38,37,41,-1,40,43,44,-1,44,39,40,-1,30,29,45,-1,45,46,30,-1,29,32,47,-1,47,45,29,-1,32,34,48,-1,48,47,32,-1,34,36,49,-1,49,48,34,-1,36,38,50,-1,50,49,36,-1,38,42,51,-1,51,50,38,-1,40,30,46,-1,46,52,40,-1,43,40,52,-1,52,53,43,-1,31,28,54,-1,28,27,54,-1,27,39,54,-1,39,44,54,-1,41,37,54,-1,37,35,54,-1,35,33,54,-1,33,31,54,-1,45,56,55,-1,55,46,45,-1,47,57,56,-1,56,45,47,-1,48,58,57,-1,57,47,48,-1,49,59,58,-1,58,48,49,-1,50,60,59,-1,59,49,50,-1,51,61,60,-1,60,50,51,-1,46,55,62,-1,62,52,46,-1,52,62,63,-1,63,53,52,-1,64,65,77,-1,77,73,64,-1,78,66,67,-1,67,74,78,-1,74,67,68,-1,68,75,74,-1,75,68,69,-1,69,76,75,-1,76,69,70,-1,70,80,76,-1,71,64,73,-1,73,81,71,-1,65,66,78,-1,78,77,65,-1,72,71,81,-1,81,79,72,-1,73,77,83,-1,83,82,73,-1,77,78,84,-1,84,83,77,-1,78,74,85,-1,85,84,78,-1,74,75,86,-1,86,85,74,-1,75,76,87,-1,87,86,75,-1,76,80,88,-1,88,87,76,-1,79,81,89,-1,89,88,79,-1,81,73,82,-1,82,89,81,-1,82,83,90,-1,83,84,90,-1,84,85,90,-1,85,86,90,-1,86,87,90,-1,87,88,90,-1,88,89,90,-1,89,82,90,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_148_coordIndex_1()
		{
			int[] value = {14,17,18,-1,18,13,14,-1,12,19,20,-1,20,11,12,-1,4,8,6,-1,6,0,4,-1,21,22,9,-1,9,10,21,-1,16,18,17,-1,17,15,16,-1,2,6,8,-1,8,5,2,-1,13,20,19,-1,19,14,13,-1,3,5,8,-1,8,7,3,-1,15,22,21,-1,21,16,15,-1,8,4,1,-1,1,7,8,-1,2,5,17,-1,17,14,2,-1,18,32,28,-1,28,13,18,-1,12,0,6,-1,6,19,12,-1,20,35,24,-1,24,11,20,-1,26,36,21,-1,21,10,26,-1,22,7,1,-1,1,9,22,-1,30,32,18,-1,18,16,30,-1,17,5,3,-1,3,15,17,-1,28,35,20,-1,20,13,28,-1,19,6,2,-1,2,14,19,-1,3,7,22,-1,22,15,3,-1,21,36,30,-1,30,16,21,-1,28,32,33,-1,33,27,28,-1,24,35,34,-1,34,23,24,-1,26,25,37,-1,37,36,26,-1,30,29,33,-1,33,32,30,-1,31,23,34,-1,34,38,31,-1,29,37,38,-1,38,33,29,-1,28,27,34,-1,34,35,28,-1,29,30,36,-1,36,37,29,-1,27,33,38,-1,38,34,27,-1,31,38,37,-1,37,25,31,-1,40,42,9,-1,9,1,40,-1,4,0,39,-1,39,41,4,-1,11,24,47,-1,47,53,11,-1,1,4,41,-1,41,40,1,-1,10,9,42,-1,42,43,10,-1,26,10,43,-1,43,62,26,-1,0,12,64,-1,64,39,0,-1,25,56,50,-1,50,31,25,-1,25,26,62,-1,62,56,25,-1,24,23,44,-1,44,47,24,-1,31,50,44,-1,44,23,31,-1,44,45,47,-1,47,45,51,-1,51,53,47,-1,45,46,52,-1,52,51,45,-1,48,54,52,-1,52,46,48,-1,49,55,54,-1,54,48,49,-1,49,50,55,-1,42,40,58,-1,58,60,42,-1,41,39,57,-1,57,59,41,-1,40,41,59,-1,59,58,40,-1,43,42,60,-1,60,61,43,-1,64,65,57,-1,57,39,64,-1,62,63,55,-1,55,56,62,-1,66,67,60,-1,60,58,66,-1,67,68,61,-1,61,60,67,-1,75,63,61,-1,61,68,75,-1,69,70,54,-1,54,55,69,-1,71,52,54,-1,54,70,71,-1,71,72,51,-1,51,52,71,-1,76,65,51,-1,51,72,76,-1,73,74,59,-1,59,57,73,-1,74,66,58,-1,58,59,74,-1,62,43,61,-1,61,63,62,-1,69,55,63,-1,63,75,69,-1,50,56,55,-1,53,51,65,-1,65,64,53,-1,73,57,65,-1,65,76,73,-1,12,11,53,-1,53,64,12,-1,67,66,77,-1,66,74,77,-1,74,73,77,-1,73,76,77,-1,76,72,77,-1,72,71,77,-1,71,70,77,-1,70,69,77,-1,69,75,77,-1,75,68,77,-1,68,67,77,-1,81,82,83,-1,83,80,81,-1,46,45,79,-1,79,78,46,-1,45,44,80,-1,80,79,45,-1,44,50,81,-1,81,80,44,-1,50,49,82,-1,82,81,50,-1,49,48,83,-1,83,82,49,-1,48,46,78,-1,78,83,48,-1,83,78,79,-1,79,80,83,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_148_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,14,15,12,-1,12,13,14,-1,17,82,81,-1,81,16,17,-1,19,11,10,-1,10,18,19,-1,0,7,6,-1,6,1,0,-1,21,85,84,-1,84,20,21,-1,16,15,14,-1,14,17,16,-1,84,83,22,-1,22,20,84,-1,19,18,2,-1,2,1,19,-1,3,23,24,-1,24,0,3,-1,5,8,11,-1,11,6,5,-1,7,25,26,-1,26,4,7,-1,27,28,14,-1,14,13,27,-1,15,20,22,-1,22,12,15,-1,29,86,82,-1,82,17,29,-1,81,85,21,-1,21,16,81,-1,24,25,7,-1,7,0,24,-1,6,11,19,-1,19,1,6,-1,21,20,15,-1,15,16,21,-1,14,28,29,-1,29,17,14,-1,24,23,31,-1,31,30,24,-1,26,25,33,-1,33,32,26,-1,27,34,35,-1,35,28,27,-1,29,36,87,-1,87,86,29,-1,37,32,33,-1,33,39,37,-1,36,35,38,-1,38,87,36,-1,24,30,33,-1,33,25,24,-1,36,29,28,-1,28,35,36,-1,30,31,39,-1,39,33,30,-1,88,38,35,-1,35,34,88,-1,40,41,12,-1,12,22,40,-1,9,8,42,-1,42,43,9,-1,4,26,44,-1,44,47,4,-1,22,83,89,-1,89,40,22,-1,13,12,41,-1,41,45,13,-1,27,13,45,-1,45,46,27,-1,8,5,50,-1,50,42,8,-1,34,48,49,-1,49,88,34,-1,34,27,46,-1,46,48,34,-1,26,32,51,-1,51,44,26,-1,37,52,51,-1,51,32,37,-1,51,55,44,-1,44,55,61,-1,61,47,44,-1,55,56,63,-1,63,61,55,-1,53,57,91,-1,91,90,53,-1,54,58,57,-1,57,53,54,-1,54,49,58,-1,41,40,59,-1,59,60,41,-1,43,42,72,-1,72,73,43,-1,40,89,92,-1,92,59,40,-1,45,41,60,-1,60,62,45,-1,50,74,72,-1,72,42,50,-1,46,64,58,-1,58,48,46,-1,65,66,60,-1,60,59,65,-1,66,67,62,-1,62,60,66,-1,68,64,62,-1,62,67,68,-1,69,70,57,-1,57,58,69,-1,71,91,57,-1,57,70,71,-1,75,76,61,-1,61,63,75,-1,77,74,61,-1,61,76,77,-1,78,79,73,-1,73,72,78,-1,93,65,59,-1,59,92,93,-1,46,45,62,-1,62,64,46,-1,69,58,64,-1,64,68,69,-1,49,48,58,-1,47,61,74,-1,74,50,47,-1,78,72,74,-1,74,77,78,-1,5,4,47,-1,47,50,5,-1,66,65,94,-1,65,93,94,-1,79,78,80,-1,78,77,80,-1,77,76,80,-1,76,75,80,-1,71,70,94,-1,70,69,94,-1,69,68,94,-1,68,67,94,-1,67,66,94,-1,98,99,100,-1,100,97,98,-1,56,55,102,-1,102,101,56,-1,55,51,103,-1,103,102,55,-1,51,52,104,-1,104,103,51,-1,49,54,99,-1,99,98,49,-1,54,53,100,-1,100,99,54,-1,53,90,95,-1,95,100,53,-1,100,95,96,-1,96,97,100,-1};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_13_149_point_1()
		{
			double[] value = {0.2854,0.417,0.2772,0.41,0.2831,0.408,0.2903,0.4146,0.265,0.4285,0.2586,0.4199,0.2705,0.4138,0.2773,0.4212,0.2523,0.4135,0.2473,0.4093,0.2624,0.4028,0.2621,0.4091,0.1715,0.4268,0.1606,0.427,0.1557,0.4048,0.1661,0.4058,0.1642,0.3989,0.1542,0.3981,0.2716,0.4031,0.2696,0.4063,0.1787,0.4088,0.1762,0.4019,0.1834,0.4266,0.2945,0.4248,0.2904,0.4267,0.2831,0.4307,0.2689,0.439,0.147,0.4291,0.1436,0.4079,0.1429,0.4003,0.2923,0.4372,0.2958,0.4382,0.2727,0.4496,0.2874,0.4405,0.1356,0.4327,0.133,0.4126,0.1318,0.4062,0.2758,0.4563,0.1279,0.4134,0.2905,0.4451,0.1841,0.4441,0.173,0.4428,0.2336,0.4239,0.232,0.4181,0.2553,0.4468,0.1634,0.4452,0.1514,0.4479,0.2509,0.4359,0.1412,0.4529,0.1367,0.4599,0.2432,0.4272,0.2531,0.4616,0.2586,0.4664,0.1365,0.476,0.1366,0.4681,0.241,0.4558,0.2368,0.4586,0.1496,0.4794,0.1502,0.4711,0.1836,0.4592,0.1761,0.4601,0.2253,0.4494,0.1684,0.463,0.2261,0.4579,0.1588,0.4664,0.1796,0.4752,0.1737,0.474,0.1709,0.4735,0.1663,0.4756,0.162,0.4762,0.1602,0.4819,0.1617,0.4895,0.2206,0.4327,0.2187,0.4259,0.2227,0.4378,0.2131,0.456,0.2115,0.4515,0.2119,0.4457,0.2094,0.4437,0.2061,0.4411,0.2017,0.4524,0.1652,0.3951,0.1534,0.3946,0.1894,0.4248,0.1835,0.4079,0.1786,0.3986,0.1411,0.3973,0.1285,0.4039,0.1298,0.4342,0.193,0.4435,0.1346,0.4831,0.1474,0.4881,0.1921,0.4603,0.1832,0.4783,0.1721,0.4818,0.1111,0.4765,0.1087,0.4729,0.1098,0.4688,0.1162,0.467,0.1174,0.4712};
			return value;
		}
		private double[] getTextureCoordinate_13_149_point_2()
		{
			double[] value = {0.114,0.4745,0.2355,0.48,0.239,0.4794,0.241,0.4768,0.2455,0.4762};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_coordIndex_1()
		{
			int[] value = {8,9,1,-1,1,0,8,-1,10,8,0,-1,0,2,10,-1,3,11,10,-1,10,2,3,-1,4,12,11,-1,11,3,4,-1,13,12,4,-1,4,5,13,-1,14,13,5,-1,5,6,14,-1,7,15,14,-1,14,6,7,-1,1,9,15,-1,15,7,1,-1,8,16,17,-1,17,9,8,-1,10,18,16,-1,16,8,10,-1,19,18,10,-1,10,11,19,-1,20,19,11,-1,11,12,20,-1,21,20,12,-1,12,13,21,-1,22,21,13,-1,13,14,22,-1,15,23,22,-1,22,14,15,-1,9,17,23,-1,23,15,9,-1,24,27,26,-1,26,25,24,-1,25,26,29,-1,29,28,25,-1,30,28,29,-1,29,31,30,-1,32,30,31,-1,31,33,32,-1,32,33,35,-1,35,34,32,-1,36,37,27,-1,27,24,36,-1,38,34,35,-1,35,39,38,-1,37,36,38,-1,38,39,37,-1,27,41,40,-1,40,26,27,-1,26,40,42,-1,42,29,26,-1,29,42,43,-1,43,31,29,-1,31,43,44,-1,44,33,31,-1,33,44,45,-1,45,35,33,-1,35,45,46,-1,46,39,35,-1,37,47,41,-1,41,27,37,-1,39,46,47,-1,47,37,39,-1,28,48,25,-1,25,48,24,-1,24,48,36,-1,36,48,38,-1,38,48,34,-1,34,48,32,-1,32,48,30,-1,30,48,28,-1,40,41,50,-1,50,49,40,-1,42,40,49,-1,49,51,42,-1,43,42,51,-1,51,52,43,-1,44,43,52,-1,52,53,44,-1,45,44,53,-1,53,54,45,-1,46,45,54,-1,54,55,46,-1,41,47,56,-1,56,50,41,-1,47,46,55,-1,55,56,47,-1,1,57,61,-1,61,0,1,-1,62,58,3,-1,3,2,62,-1,58,59,4,-1,4,3,58,-1,59,60,5,-1,5,4,59,-1,60,63,6,-1,6,5,60,-1,7,64,57,-1,57,1,7,-1,0,61,62,-1,62,2,0,-1,6,63,64,-1,64,7,6,-1,57,65,66,-1,66,61,57,-1,61,66,67,-1,67,62,61,-1,62,67,68,-1,68,58,62,-1,58,68,69,-1,69,59,58,-1,59,69,70,-1,70,60,59,-1,60,70,71,-1,71,63,60,-1,63,71,72,-1,72,64,63,-1,64,72,65,-1,65,57,64,-1,65,73,66,-1,66,73,67,-1,67,73,68,-1,68,73,69,-1,69,73,70,-1,70,73,71,-1,71,73,72,-1,72,73,65,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_160_texCoordIndex_1()
		{
			int[] value = {9,10,1,-1,1,0,9,-1,11,9,0,-1,0,2,11,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,14,13,4,-1,4,5,14,-1,15,14,5,-1,5,6,15,-1,8,16,17,-1,17,7,8,-1,1,10,16,-1,16,8,1,-1,9,18,19,-1,19,10,9,-1,11,20,18,-1,18,9,11,-1,21,20,11,-1,11,12,21,-1,22,21,12,-1,12,13,22,-1,23,22,13,-1,13,14,23,-1,24,23,14,-1,14,15,24,-1,16,25,26,-1,26,17,16,-1,10,19,25,-1,25,16,10,-1,27,30,29,-1,29,28,27,-1,28,29,32,-1,32,31,28,-1,33,31,32,-1,32,34,33,-1,35,33,34,-1,34,36,35,-1,35,36,38,-1,38,37,35,-1,39,40,30,-1,30,27,39,-1,41,37,38,-1,38,42,41,-1,40,39,44,-1,44,43,40,-1,30,46,45,-1,45,29,30,-1,29,45,47,-1,47,32,29,-1,32,47,48,-1,48,34,32,-1,34,48,49,-1,49,36,34,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,42,38,-1,40,52,46,-1,46,30,40,-1,43,53,52,-1,52,40,43,-1,31,54,28,-1,28,54,27,-1,27,54,39,-1,39,54,44,-1,41,54,37,-1,37,54,35,-1,35,54,33,-1,33,54,31,-1,45,46,55,-1,55,56,45,-1,47,45,56,-1,56,57,47,-1,48,47,57,-1,57,58,48,-1,49,48,58,-1,58,59,49,-1,50,49,59,-1,59,60,50,-1,51,50,60,-1,60,61,51,-1,46,52,62,-1,62,55,46,-1,52,53,63,-1,63,62,52,-1,64,73,77,-1,77,65,64,-1,78,74,67,-1,67,66,78,-1,74,75,68,-1,68,67,74,-1,75,76,69,-1,69,68,75,-1,76,80,70,-1,70,69,76,-1,71,81,73,-1,73,64,71,-1,65,77,78,-1,78,66,65,-1,72,79,81,-1,81,71,72,-1,73,82,83,-1,83,77,73,-1,77,83,84,-1,84,78,77,-1,78,84,85,-1,85,74,78,-1,74,85,86,-1,86,75,74,-1,75,86,87,-1,87,76,75,-1,76,87,88,-1,88,80,76,-1,79,88,89,-1,89,81,79,-1,81,89,82,-1,82,73,81,-1,82,90,83,-1,83,90,84,-1,84,90,85,-1,85,90,86,-1,86,90,87,-1,87,90,88,-1,88,90,89,-1,89,90,82,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_178_coordIndex_1()
		{
			int[] value = {14,13,18,-1,18,17,14,-1,12,11,20,-1,20,19,12,-1,4,0,6,-1,6,8,4,-1,21,10,9,-1,9,22,21,-1,16,15,17,-1,17,18,16,-1,2,5,8,-1,8,6,2,-1,13,14,19,-1,19,20,13,-1,3,7,8,-1,8,5,3,-1,15,16,21,-1,21,22,15,-1,8,7,1,-1,1,4,8,-1,2,14,17,-1,17,5,2,-1,18,13,28,-1,28,32,18,-1,12,19,6,-1,6,0,12,-1,20,11,24,-1,24,35,20,-1,26,10,21,-1,21,36,26,-1,22,9,1,-1,1,7,22,-1,30,16,18,-1,18,32,30,-1,17,15,3,-1,3,5,17,-1,28,13,20,-1,20,35,28,-1,19,14,2,-1,2,6,19,-1,3,15,22,-1,22,7,3,-1,21,16,30,-1,30,36,21,-1,28,27,33,-1,33,32,28,-1,24,23,34,-1,34,35,24,-1,26,36,37,-1,37,25,26,-1,30,32,33,-1,33,29,30,-1,31,38,34,-1,34,23,31,-1,29,33,38,-1,38,37,29,-1,28,35,34,-1,34,27,28,-1,29,37,36,-1,36,30,29,-1,27,34,38,-1,38,33,27,-1,31,25,37,-1,37,38,31,-1,40,1,9,-1,9,42,40,-1,4,41,39,-1,39,0,4,-1,11,53,47,-1,47,24,11,-1,1,40,41,-1,41,4,1,-1,10,43,42,-1,42,9,10,-1,26,62,43,-1,43,10,26,-1,0,39,64,-1,64,12,0,-1,25,31,50,-1,50,56,25,-1,25,56,62,-1,62,26,25,-1,24,47,44,-1,44,23,24,-1,31,23,44,-1,44,50,31,-1,44,47,45,-1,47,53,51,-1,51,45,47,-1,45,51,52,-1,52,46,45,-1,48,46,52,-1,52,54,48,-1,49,48,54,-1,54,55,49,-1,49,55,50,-1,42,60,58,-1,58,40,42,-1,41,59,57,-1,57,39,41,-1,40,58,59,-1,59,41,40,-1,43,61,60,-1,60,42,43,-1,64,39,57,-1,57,65,64,-1,62,56,55,-1,55,63,62,-1,66,58,60,-1,60,67,66,-1,67,60,61,-1,61,68,67,-1,75,68,61,-1,61,63,75,-1,69,55,54,-1,54,70,69,-1,71,70,54,-1,54,52,71,-1,71,52,51,-1,51,72,71,-1,76,72,51,-1,51,65,76,-1,73,57,59,-1,59,74,73,-1,74,59,58,-1,58,66,74,-1,62,63,61,-1,61,43,62,-1,69,75,63,-1,63,55,69,-1,50,55,56,-1,53,64,65,-1,65,51,53,-1,73,76,65,-1,65,57,73,-1,12,64,53,-1,53,11,12,-1,67,77,66,-1,66,77,74,-1,74,77,73,-1,73,77,76,-1,76,77,72,-1,72,77,71,-1,71,77,70,-1,70,77,69,-1,69,77,75,-1,75,77,68,-1,68,77,67,-1,81,80,83,-1,83,82,81,-1,46,78,79,-1,79,45,46,-1,45,79,80,-1,80,44,45,-1,44,80,81,-1,81,50,44,-1,50,81,82,-1,82,49,50,-1,49,82,83,-1,83,48,49,-1,48,83,78,-1,78,46,48,-1,83,80,79,-1,79,78,83,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_178_texCoordIndex_1()
		{
			int[] value = {1,0,3,-1,3,2,1,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,14,13,12,-1,12,15,14,-1,17,16,81,-1,81,82,17,-1,19,18,10,-1,10,11,19,-1,0,1,6,-1,6,7,0,-1,21,20,84,-1,84,85,21,-1,16,17,14,-1,14,15,16,-1,84,20,22,-1,22,83,84,-1,19,1,2,-1,2,18,19,-1,3,0,24,-1,24,23,3,-1,5,6,11,-1,11,8,5,-1,7,4,26,-1,26,25,7,-1,27,13,14,-1,14,28,27,-1,15,12,22,-1,22,20,15,-1,29,17,82,-1,82,86,29,-1,81,16,21,-1,21,85,81,-1,24,0,7,-1,7,25,24,-1,6,1,19,-1,19,11,6,-1,21,16,15,-1,15,20,21,-1,14,17,29,-1,29,28,14,-1,24,30,31,-1,31,23,24,-1,26,32,33,-1,33,25,26,-1,27,28,35,-1,35,34,27,-1,29,86,87,-1,87,36,29,-1,37,39,33,-1,33,32,37,-1,36,87,38,-1,38,35,36,-1,24,25,33,-1,33,30,24,-1,36,35,28,-1,28,29,36,-1,30,33,39,-1,39,31,30,-1,88,34,35,-1,35,38,88,-1,40,22,12,-1,12,41,40,-1,9,43,42,-1,42,8,9,-1,4,47,44,-1,44,26,4,-1,22,40,89,-1,89,83,22,-1,13,45,41,-1,41,12,13,-1,27,46,45,-1,45,13,27,-1,8,42,50,-1,50,5,8,-1,34,88,49,-1,49,48,34,-1,34,48,46,-1,46,27,34,-1,26,44,51,-1,51,32,26,-1,37,32,51,-1,51,52,37,-1,51,44,55,-1,44,47,61,-1,61,55,44,-1,55,61,63,-1,63,56,55,-1,53,90,91,-1,91,57,53,-1,54,53,57,-1,57,58,54,-1,54,58,49,-1,41,60,59,-1,59,40,41,-1,43,73,72,-1,72,42,43,-1,40,59,92,-1,92,89,40,-1,45,62,60,-1,60,41,45,-1,50,42,72,-1,72,74,50,-1,46,48,58,-1,58,64,46,-1,65,59,60,-1,60,66,65,-1,66,60,62,-1,62,67,66,-1,68,67,62,-1,62,64,68,-1,69,58,57,-1,57,70,69,-1,71,70,57,-1,57,91,71,-1,75,63,61,-1,61,76,75,-1,77,76,61,-1,61,74,77,-1,78,72,73,-1,73,79,78,-1,93,92,59,-1,59,65,93,-1,46,64,62,-1,62,45,46,-1,69,68,64,-1,64,58,69,-1,49,58,48,-1,47,50,74,-1,74,61,47,-1,78,77,74,-1,74,72,78,-1,5,50,47,-1,47,4,5,-1,66,94,65,-1,65,94,93,-1,79,80,78,-1,78,80,77,-1,77,80,76,-1,76,80,75,-1,71,94,70,-1,70,94,69,-1,69,94,68,-1,68,94,67,-1,67,94,66,-1,98,97,100,-1,100,99,98,-1,56,101,102,-1,102,55,56,-1,55,102,103,-1,103,51,55,-1,51,103,104,-1,104,52,51,-1,49,98,99,-1,99,54,49,-1,54,99,100,-1,100,53,54,-1,53,100,95,-1,95,90,53,-1,100,97,96,-1,96,95,100,-1};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_13_179_point_1()
		{
			double[] value = {0.2854,0.417,0.2772,0.41,0.2831,0.408,0.2903,0.4146,0.265,0.4285,0.2586,0.4199,0.2705,0.4138,0.2773,0.4212,0.2523,0.4135,0.2473,0.4093,0.2624,0.4028,0.2621,0.4091,0.1715,0.4268,0.1606,0.427,0.1557,0.4048,0.1661,0.4058,0.1642,0.3989,0.1542,0.3981,0.2716,0.4031,0.2696,0.4063,0.1787,0.4088,0.1762,0.4019,0.1834,0.4266,0.2945,0.4248,0.2904,0.4267,0.2831,0.4307,0.2689,0.439,0.147,0.4291,0.1436,0.4079,0.1429,0.4003,0.2923,0.4372,0.2958,0.4382,0.2727,0.4496,0.2874,0.4405,0.1356,0.4327,0.133,0.4126,0.1318,0.4062,0.2758,0.4563,0.1279,0.4134,0.2905,0.4451,0.1841,0.4441,0.173,0.4428,0.2336,0.4239,0.232,0.4181,0.2553,0.4468,0.1634,0.4452,0.1514,0.4479,0.2509,0.4359,0.1412,0.4529,0.1367,0.4599,0.2432,0.4272,0.2531,0.4616,0.2586,0.4664,0.1365,0.476,0.1366,0.4681,0.241,0.4558,0.2368,0.4586,0.1496,0.4794,0.1502,0.4711,0.1836,0.4592,0.1761,0.4601,0.2253,0.4494,0.1684,0.463,0.2261,0.4579,0.1588,0.4664,0.1796,0.4752,0.1737,0.474,0.1709,0.4735,0.1663,0.4756,0.162,0.4762,0.1602,0.4819,0.1617,0.4895,0.2206,0.4327,0.2187,0.4259,0.2227,0.4378,0.2131,0.456,0.2115,0.4515,0.2119,0.4457,0.2094,0.4437,0.2061,0.4411,0.2017,0.4524,0.1652,0.3951,0.1534,0.3946,0.1894,0.4248,0.1835,0.4079,0.1786,0.3986,0.1411,0.3973,0.1285,0.4039,0.1298,0.4342,0.193,0.4435,0.1346,0.4831,0.1474,0.4881,0.1921,0.4603,0.1832,0.4783,0.1721,0.4818,0.1111,0.4765,0.1087,0.4729,0.1098,0.4688,0.1162,0.467,0.1174,0.4712};
			return value;
		}
		private double[] getTextureCoordinate_13_179_point_2()
		{
			double[] value = {0.114,0.4745,0.2355,0.48,0.239,0.4794,0.241,0.4768,0.2455,0.4762};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_coordIndex_1()
		{
			int[] value = {28,6,7,-1,7,29,28,-1,49,50,5,-1,5,0,49,-1,33,34,19,-1,19,18,33,-1,6,25,23,-1,23,37,6,-1,7,35,36,-1,36,4,7,-1,6,37,38,-1,32,17,19,-1,19,34,32,-1,28,27,25,-1,25,6,28,-1,30,29,7,-1,7,4,30,-1,16,8,51,-1,51,52,16,-1,49,53,10,-1,10,9,49,-1,51,157,158,-1,158,13,51,-1,54,52,11,-1,11,12,54,-1,55,50,15,-1,15,14,55,-1,19,5,3,-1,3,18,19,-1,17,0,5,-1,5,19,17,-1,18,3,75,-1,75,95,18,-1,4,26,31,-1,31,30,4,-1,22,20,17,-1,17,32,22,-1,21,0,17,-1,17,20,21,-1,54,53,21,-1,21,1,54,-1,47,1,21,-1,21,20,47,-1,23,33,76,-1,76,173,23,-1,25,34,33,-1,33,23,25,-1,62,26,4,-1,4,66,62,-1,27,32,34,-1,34,25,27,-1,24,2,178,-1,178,179,24,-1,18,95,76,-1,76,33,18,-1,36,35,118,-1,118,119,36,-1,46,36,119,-1,119,120,46,-1,122,38,37,-1,37,121,122,-1,118,35,38,-1,38,122,118,-1,67,68,41,-1,41,40,67,-1,42,69,263,-1,263,77,42,-1,39,70,71,-1,71,45,39,-1,44,43,72,-1,72,73,44,-1,39,41,68,-1,68,70,39,-1,40,44,73,-1,73,67,40,-1,45,71,69,-1,69,42,45,-1,36,66,4,-1,38,35,7,-1,7,6,38,-1,9,15,50,-1,50,49,9,-1,13,11,52,-1,52,51,13,-1,0,21,53,-1,53,49,0,-1,8,78,157,-1,157,51,8,-1,1,16,52,-1,52,54,1,-1,55,3,5,-1,5,50,55,-1,12,10,53,-1,53,54,12,-1,55,14,97,-1,97,201,55,-1,28,29,56,-1,29,30,56,-1,30,31,56,-1,31,48,56,-1,48,22,56,-1,22,32,56,-1,32,27,56,-1,27,28,56,-1,37,23,173,-1,173,96,37,-1,3,55,201,-1,201,75,3,-1,2,46,204,-1,204,178,2,-1,46,120,124,-1,124,204,46,-1,97,14,257,-1,257,259,97,-1,31,26,57,-1,57,48,31,-1,24,179,74,-1,74,58,24,-1,207,60,58,-1,58,74,207,-1,16,64,59,-1,59,8,16,-1,58,63,62,-1,62,24,58,-1,59,99,78,-1,78,8,59,-1,57,63,65,-1,65,61,57,-1,99,59,60,-1,60,207,99,-1,20,22,61,-1,61,47,20,-1,61,22,48,-1,48,57,61,-1,65,64,47,-1,47,61,65,-1,63,57,26,-1,26,62,63,-1,63,58,60,-1,60,65,63,-1,65,60,59,-1,59,64,65,-1,16,1,47,-1,47,64,16,-1,46,2,66,-1,66,36,46,-1,2,24,62,-1,62,66,2,-1,9,10,253,-1,253,252,9,-1,13,158,192,-1,192,254,13,-1,255,12,11,-1,11,256,255,-1,14,15,258,-1,258,257,14,-1,10,12,255,-1,255,253,10,-1,15,9,252,-1,252,258,15,-1,256,11,13,-1,13,254,256,-1,43,100,98,-1,98,72,43,-1,80,81,82,-1,82,79,80,-1,84,90,89,-1,89,83,84,-1,86,87,79,-1,79,85,86,-1,90,84,101,-1,101,225,90,-1,82,85,79,-1,89,81,80,-1,80,83,89,-1,85,91,86,-1,92,86,93,-1,93,94,92,-1,88,93,86,-1,86,91,88,-1,251,94,93,-1,93,88,251,-1,102,103,107,-1,107,111,102,-1,103,104,108,-1,108,107,103,-1,104,238,239,-1,239,108,104,-1,106,110,109,-1,109,105,106,-1,102,111,110,-1,110,106,102,-1,112,116,111,-1,111,107,112,-1,113,112,107,-1,107,108,113,-1,114,248,249,-1,249,109,114,-1,114,109,110,-1,110,115,114,-1,115,110,111,-1,111,116,115,-1,119,118,116,-1,116,112,119,-1,120,119,112,-1,112,113,120,-1,115,122,121,-1,121,114,115,-1,116,118,122,-1,122,115,116,-1,105,109,249,-1,249,117,105,-1,123,113,108,-1,108,239,123,-1,120,113,123,-1,123,124,120,-1,121,125,248,-1,248,114,121,-1,121,37,96,-1,96,125,121,-1,85,82,91,-1,126,129,128,-1,128,127,126,-1,131,130,133,-1,133,132,131,-1,134,137,136,-1,136,135,134,-1,127,138,140,-1,140,139,127,-1,128,141,143,-1,143,142,128,-1,127,144,138,-1,145,135,136,-1,136,146,145,-1,126,127,139,-1,139,147,126,-1,148,141,128,-1,128,129,148,-1,149,152,151,-1,151,150,149,-1,131,153,155,-1,155,154,131,-1,151,156,158,-1,158,157,151,-1,160,159,161,-1,161,152,160,-1,163,162,164,-1,164,132,163,-1,136,137,165,-1,165,133,136,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_2()
		{
			int[] value = {146,136,133,-1,133,130,146,-1,137,95,75,-1,75,165,137,-1,141,148,167,-1,167,166,141,-1,168,145,146,-1,146,169,168,-1,170,169,146,-1,146,130,170,-1,160,171,170,-1,170,154,160,-1,172,169,170,-1,170,171,172,-1,140,173,76,-1,76,134,140,-1,139,140,134,-1,134,135,139,-1,175,174,141,-1,141,166,175,-1,147,139,135,-1,135,145,147,-1,176,179,178,-1,178,177,176,-1,137,134,76,-1,76,95,137,-1,143,180,181,-1,181,142,143,-1,183,182,180,-1,180,143,183,-1,184,185,138,-1,138,144,184,-1,181,184,144,-1,144,142,181,-1,187,186,189,-1,189,188,187,-1,190,77,263,-1,263,191,190,-1,193,196,195,-1,195,194,193,-1,197,200,199,-1,199,198,197,-1,193,194,188,-1,188,189,193,-1,186,187,200,-1,200,197,186,-1,196,190,191,-1,191,195,196,-1,143,141,174,-1,144,127,128,-1,128,142,144,-1,153,131,132,-1,132,164,153,-1,156,151,152,-1,152,161,156,-1,130,131,154,-1,154,170,130,-1,150,151,157,-1,157,78,150,-1,171,160,152,-1,152,149,171,-1,163,132,133,-1,133,165,163,-1,159,160,154,-1,154,155,159,-1,163,201,97,-1,97,162,163,-1,126,202,129,-1,129,202,148,-1,148,202,167,-1,167,202,203,-1,203,202,168,-1,168,202,145,-1,145,202,147,-1,147,202,126,-1,138,96,173,-1,173,140,138,-1,165,75,201,-1,201,163,165,-1,177,178,204,-1,204,183,177,-1,183,204,124,-1,124,182,183,-1,97,259,266,-1,266,162,97,-1,167,203,205,-1,205,166,167,-1,176,206,74,-1,74,179,176,-1,207,74,206,-1,206,208,207,-1,149,150,210,-1,210,209,149,-1,206,176,175,-1,175,211,206,-1,210,150,78,-1,78,99,210,-1,205,213,212,-1,212,211,205,-1,99,207,208,-1,208,210,99,-1,169,172,213,-1,213,168,169,-1,213,205,203,-1,203,168,213,-1,212,213,172,-1,172,209,212,-1,211,175,166,-1,166,205,211,-1,211,212,208,-1,208,206,211,-1,212,209,210,-1,210,208,212,-1,149,209,172,-1,172,171,149,-1,183,143,174,-1,174,177,183,-1,177,174,175,-1,175,176,177,-1,153,260,261,-1,261,155,153,-1,156,262,192,-1,192,158,156,-1,264,265,161,-1,161,159,264,-1,162,266,267,-1,267,164,162,-1,155,261,264,-1,264,159,155,-1,164,267,260,-1,260,153,164,-1,265,262,156,-1,156,161,265,-1,198,199,98,-1,98,100,198,-1,215,214,217,-1,217,216,215,-1,219,218,221,-1,221,220,219,-1,223,222,214,-1,214,224,223,-1,220,225,101,-1,101,219,220,-1,217,214,222,-1,221,218,215,-1,215,216,221,-1,222,223,226,-1,229,228,227,-1,227,223,229,-1,230,226,223,-1,223,227,230,-1,231,230,227,-1,227,228,231,-1,232,235,234,-1,234,233,232,-1,233,234,237,-1,237,236,233,-1,236,237,239,-1,239,238,236,-1,241,240,243,-1,243,242,241,-1,232,241,242,-1,242,235,232,-1,244,234,235,-1,235,245,244,-1,246,237,234,-1,234,244,246,-1,247,243,249,-1,249,248,247,-1,247,250,242,-1,242,243,247,-1,250,245,235,-1,235,242,250,-1,180,244,245,-1,245,181,180,-1,182,246,244,-1,244,180,182,-1,250,247,185,-1,185,184,250,-1,245,250,184,-1,184,181,245,-1,240,117,249,-1,249,243,240,-1,123,239,237,-1,237,246,123,-1,182,124,123,-1,123,246,182,-1,185,247,248,-1,248,125,185,-1,185,125,96,-1,96,138,185,-1,222,226,217,-1,67,73,72,-1,67,72,98,-1,98,199,200,-1,200,187,188,-1,98,200,188,-1,67,98,188,-1,188,194,195,-1,195,191,263,-1,188,195,263,-1,67,188,263,-1,263,69,71,-1,67,263,71,-1,67,71,70,-1,67,70,68,-1,259,257,269,-1,269,268,259,-1,257,258,270,-1,270,269,257,-1,258,252,271,-1,271,270,258,-1,252,253,272,-1,272,271,252,-1,253,255,273,-1,273,272,253,-1,255,256,274,-1,274,273,255,-1,256,254,275,-1,275,274,256,-1,254,192,276,-1,276,275,254,-1,192,262,277,-1,277,276,192,-1,262,265,278,-1,278,277,262,-1,265,264,279,-1,279,278,265,-1,264,261,280,-1,280,279,264,-1,261,260,281,-1,281,280,261,-1,260,267,282,-1,282,281,260,-1,267,266,283,-1,283,282,267,-1,266,259,268,-1,268,283,266,-1,268,269,284,-1,269,270,284,-1,270,271,284,-1,271,272,284,-1,272,273,284,-1,273,274,284,-1,274,275,284,-1,275,276,284,-1,276,277,284,-1,277,278,284,-1,278,279,284,-1,279,280,284,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_3()
		{
			int[] value = {280,281,284,-1,281,282,284,-1,282,283,284,-1,283,268,284,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,2,3,0,-1,5,6,7,-1,7,4,5,-1,8,9,10,-1,10,11,8,-1,1,13,14,-1,14,12,1,-1,2,18,19,-1,19,17,2,-1,1,12,20,-1,21,22,10,-1,10,9,21,-1,0,23,13,-1,13,1,0,-1,24,3,2,-1,2,17,24,-1,25,26,27,-1,27,28,25,-1,5,31,32,-1,32,30,5,-1,27,34,35,-1,35,33,27,-1,37,28,38,-1,38,36,37,-1,40,6,41,-1,41,39,40,-1,10,7,43,-1,43,11,10,-1,22,4,7,-1,7,10,22,-1,11,43,44,-1,44,45,11,-1,17,15,46,-1,46,24,17,-1,48,49,22,-1,22,21,48,-1,50,4,22,-1,22,49,50,-1,37,31,50,-1,50,47,37,-1,52,47,50,-1,50,49,52,-1,14,8,53,-1,53,54,14,-1,13,9,8,-1,8,14,13,-1,86,15,17,-1,17,90,86,-1,23,21,9,-1,9,13,23,-1,16,55,56,-1,56,29,16,-1,11,45,53,-1,53,8,11,-1,19,18,58,-1,58,57,19,-1,60,19,57,-1,57,59,60,-1,61,20,12,-1,12,62,61,-1,58,18,20,-1,20,61,58,-1,91,92,64,-1,64,63,91,-1,65,93,98,-1,98,66,65,-1,67,94,95,-1,95,68,67,-1,69,70,96,-1,96,97,69,-1,67,64,92,-1,92,94,67,-1,63,69,97,-1,97,91,63,-1,68,95,93,-1,93,65,68,-1,19,90,17,-1,20,18,2,-1,2,1,20,-1,30,41,6,-1,6,5,30,-1,33,38,28,-1,28,27,33,-1,4,50,31,-1,31,5,4,-1,26,42,34,-1,34,27,26,-1,47,25,28,-1,28,37,47,-1,40,43,7,-1,7,6,40,-1,36,32,31,-1,31,37,36,-1,40,39,72,-1,72,73,40,-1,0,3,74,-1,3,24,74,-1,24,46,74,-1,46,51,74,-1,51,48,74,-1,48,21,74,-1,21,23,74,-1,23,0,74,-1,12,14,54,-1,54,71,12,-1,43,40,73,-1,73,44,43,-1,55,60,75,-1,75,56,55,-1,60,59,76,-1,76,75,60,-1,72,39,96,-1,96,99,72,-1,46,15,78,-1,78,51,46,-1,16,29,79,-1,79,81,16,-1,83,84,81,-1,81,79,83,-1,25,88,82,-1,82,26,25,-1,81,87,86,-1,86,16,81,-1,82,80,42,-1,42,26,82,-1,78,87,89,-1,89,85,78,-1,80,82,84,-1,84,83,80,-1,49,48,85,-1,85,52,49,-1,85,48,51,-1,51,78,85,-1,89,88,52,-1,52,85,89,-1,87,78,15,-1,15,86,87,-1,87,81,84,-1,84,89,87,-1,89,84,82,-1,82,88,89,-1,25,47,52,-1,52,88,25,-1,60,55,90,-1,90,19,60,-1,55,16,86,-1,86,90,55,-1,30,32,92,-1,92,91,30,-1,33,35,98,-1,98,93,33,-1,94,36,38,-1,38,95,94,-1,39,41,97,-1,97,96,39,-1,32,36,94,-1,94,92,32,-1,41,30,91,-1,91,97,41,-1,95,38,33,-1,33,93,95,-1,70,77,99,-1,99,96,70,-1,101,102,103,-1,103,100,101,-1,105,106,107,-1,107,104,105,-1,109,110,100,-1,100,108,109,-1,106,105,111,-1,111,112,106,-1,103,108,100,-1,107,102,101,-1,101,104,107,-1,147,149,150,-1,116,148,114,-1,114,115,116,-1,117,114,148,-1,148,113,117,-1,118,115,114,-1,114,117,118,-1,119,120,121,-1,121,122,119,-1,120,123,124,-1,124,121,120,-1,123,125,126,-1,126,124,123,-1,128,129,130,-1,130,127,128,-1,119,122,129,-1,129,128,119,-1,131,132,122,-1,122,121,131,-1,133,131,121,-1,121,124,133,-1,134,135,136,-1,136,130,134,-1,134,130,129,-1,129,137,134,-1,137,129,122,-1,122,132,137,-1,138,139,132,-1,132,131,138,-1,140,138,131,-1,131,133,140,-1,137,141,142,-1,142,134,137,-1,132,139,141,-1,141,137,132,-1,127,130,136,-1,136,143,127,-1,144,133,124,-1,124,126,144,-1,140,133,144,-1,144,145,140,-1,142,151,135,-1,135,134,142,-1,62,12,71,-1,71,152,62,-1,147,146,149,-1,153,156,155,-1,155,154,153,-1,158,157,160,-1,160,159,158,-1,161,164,163,-1,163,162,161,-1,154,165,167,-1,167,166,154,-1,155,168,170,-1,170,169,155,-1,154,171,165,-1,172,162,163,-1,163,173,172,-1,153,154,166,-1,166,174,153,-1,175,168,155,-1,155,156,175,-1,176,179,178,-1,178,177,176,-1,158,180,182,-1,182,181,158,-1,178,183,185,-1,185,184,178,-1,187,186,188,-1,188,179,187,-1,190,189,191,-1,191,159,190,-1,163,164,192,-1,192,160,163,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_2()
		{
			int[] value = {173,163,160,-1,160,157,173,-1,164,194,193,-1,193,192,164,-1,168,175,196,-1,196,195,168,-1,197,172,173,-1,173,198,197,-1,199,198,173,-1,173,157,199,-1,187,200,199,-1,199,181,187,-1,201,198,199,-1,199,200,201,-1,167,203,202,-1,202,161,167,-1,166,167,161,-1,161,162,166,-1,205,204,168,-1,168,195,205,-1,174,166,162,-1,162,172,174,-1,206,209,208,-1,208,207,206,-1,164,161,202,-1,202,194,164,-1,170,210,211,-1,211,169,170,-1,213,212,210,-1,210,170,213,-1,214,215,165,-1,165,171,214,-1,211,214,171,-1,171,169,211,-1,217,216,219,-1,219,218,217,-1,220,223,222,-1,222,221,220,-1,224,227,226,-1,226,225,224,-1,228,231,230,-1,230,229,228,-1,224,225,218,-1,218,219,224,-1,216,217,231,-1,231,228,216,-1,227,220,221,-1,221,226,227,-1,170,168,204,-1,171,154,155,-1,155,169,171,-1,180,158,159,-1,159,191,180,-1,183,178,179,-1,179,188,183,-1,157,158,181,-1,181,199,157,-1,177,178,184,-1,184,232,177,-1,200,187,179,-1,179,176,200,-1,190,159,160,-1,160,192,190,-1,186,187,181,-1,181,182,186,-1,190,234,233,-1,233,189,190,-1,153,235,156,-1,156,235,175,-1,175,235,196,-1,196,235,236,-1,236,235,197,-1,197,235,172,-1,172,235,174,-1,174,235,153,-1,165,237,203,-1,203,167,165,-1,192,193,234,-1,234,190,192,-1,207,208,238,-1,238,213,207,-1,213,238,239,-1,239,212,213,-1,233,240,230,-1,230,189,233,-1,196,236,241,-1,241,195,196,-1,206,243,242,-1,242,209,206,-1,244,242,243,-1,243,245,244,-1,176,177,247,-1,247,246,176,-1,243,206,205,-1,205,248,243,-1,247,177,232,-1,232,249,247,-1,241,251,250,-1,250,248,241,-1,249,244,245,-1,245,247,249,-1,198,201,251,-1,251,197,198,-1,251,241,236,-1,236,197,251,-1,250,251,201,-1,201,246,250,-1,248,205,195,-1,195,241,248,-1,248,250,245,-1,245,243,248,-1,250,246,247,-1,247,245,250,-1,176,246,201,-1,201,200,176,-1,213,170,204,-1,204,207,213,-1,207,204,205,-1,205,206,207,-1,180,217,218,-1,218,182,180,-1,183,221,222,-1,222,185,183,-1,225,226,188,-1,188,186,225,-1,189,230,231,-1,231,191,189,-1,182,218,225,-1,225,186,182,-1,191,231,217,-1,217,180,191,-1,226,221,183,-1,183,188,226,-1,229,230,240,-1,240,252,229,-1,254,253,256,-1,256,255,254,-1,258,257,260,-1,260,259,258,-1,262,261,253,-1,253,263,262,-1,259,265,264,-1,264,258,259,-1,256,253,261,-1,260,257,254,-1,254,255,260,-1,266,268,267,-1,272,271,270,-1,270,269,272,-1,274,273,269,-1,269,270,274,-1,275,274,270,-1,270,271,275,-1,276,279,278,-1,278,277,276,-1,277,278,281,-1,281,280,277,-1,280,281,283,-1,283,282,280,-1,285,284,287,-1,287,286,285,-1,276,285,286,-1,286,279,276,-1,288,278,279,-1,279,289,288,-1,290,281,278,-1,278,288,290,-1,291,287,293,-1,293,292,291,-1,291,294,286,-1,286,287,291,-1,294,289,279,-1,279,286,294,-1,295,288,289,-1,289,296,295,-1,297,290,288,-1,288,295,297,-1,294,291,299,-1,299,298,294,-1,289,294,298,-1,298,296,289,-1,284,300,293,-1,293,287,284,-1,301,283,281,-1,281,290,301,-1,297,302,301,-1,301,290,297,-1,299,291,292,-1,292,303,299,-1,215,304,237,-1,237,165,215,-1,266,267,305,-1,91,97,96,-1,91,96,99,-1,99,230,231,-1,231,217,218,-1,99,231,218,-1,91,99,218,-1,218,225,226,-1,226,221,222,-1,218,226,222,-1,91,218,222,-1,222,93,95,-1,91,222,95,-1,91,95,94,-1,91,94,92,-1,99,96,307,-1,307,306,99,-1,96,97,308,-1,308,307,96,-1,97,91,309,-1,309,308,97,-1,91,92,310,-1,310,309,91,-1,92,94,311,-1,311,310,92,-1,94,95,312,-1,312,311,94,-1,95,93,313,-1,313,312,95,-1,93,98,314,-1,314,313,93,-1,222,221,315,-1,315,314,222,-1,221,226,316,-1,316,315,221,-1,226,225,317,-1,317,316,226,-1,225,218,318,-1,318,317,225,-1,218,217,319,-1,319,318,218,-1,217,231,320,-1,320,319,217,-1,231,230,321,-1,321,320,231,-1,230,240,306,-1,306,321,230,-1,306,307,322,-1,307,308,322,-1,308,309,322,-1,309,310,322,-1,310,311,322,-1,311,312,322,-1,312,313,322,-1,313,314,322,-1,314,315,322,-1,315,316,322,-1,316,317,322,-1,317,318,322,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_3()
		{
			int[] value = {318,319,322,-1,319,320,322,-1,320,321,322,-1,321,306,322,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_11_190_point_1()
		{
			double[] value = {5.653,10.76,-2.032,4.491,10.66,2.208,0.6339,17.89,2.418,1.861,10.99,-3.976,4.209,18.42,1.834,3.714,10.91,-3.568,4.446,19.43,-2.415,4.34,19.6,-0.3738,0.8673,10.77,3.572,5.675,4.808,-2.228,6.13,4.835,0.5932,3.162,5.049,3.686,5.076,4.964,2.775,1.35,5.142,4.077,1.552,4.551,-4.356,3.698,4.669,-3.801,2.548,10.62,3.241,5.918,12.87,-2.169,1.992,12.62,-3.965,3.889,12.68,-3.569,5.76,12.83,0.4019,5.779,10.76,0.7375,6.441,14.67,0.1005,2.287,17.92,-3.528,0.4984,15.89,3.124,4.385,17.53,-3.184,4.646,16.39,2.492,7.103,16.97,-2.548,8.124,18.67,-2.069,8.525,18.87,-0.3882,8.059,18.55,1.388,6.734,16.65,1.984,6.553,15.02,-2.428,2.138,15.7,-3.957,4.244,15.45,-3.486,2.81,19.85,-0.3558,2.373,19.43,0.6618,2.128,19.72,-2.573,2.44,20.03,-1.69,5.741,-0.6607,3.145,6.162,-0.8553,-2.552,6.956,-0.7272,0.4152,1.697,-0.5528,4.404,1.722,-1.261,-4.654,4.412,-1.136,-3.878,3.713,-0.568,3.977,0.6293,19.04,1.436,4.477,12.22,2.138,6.379,15.01,1.598,5.61,7.967,-1.958,3.698,7.844,-3.672,1.069,8.059,3.819,2.817,7.944,3.406,5.868,7.953,0.7283,4.818,7.923,2.475,1.715,7.893,-4.053,6.324,17.2,-0.1978,4.792,14.12,2.395,0.5769,14.05,3.467,0.7572,12.18,3.449,0.5876,13.45,3.455,4.774,13.46,2.283,2.486,16.04,3.085,2.663,13.83,3.223,2.514,12.11,3.253,2.659,13.25,3.176,2.437,18.14,2.21,5.848,2.503,-2.421,6.474,2.515,0.4493,1.504,2.746,4.241,5.35,2.64,2.941,3.441,2.753,3.83,1.556,2.087,-4.665,3.933,2.34,-3.983,0.0,14.17,3.432,0.0,10.92,-3.965,0.0,15.84,-3.866,0.0,-0.6334,4.547,0.0,10.84,3.675,4.434,18.54,1.834,4.34,19.62,-0.3738,2.219,20.24,-0.3649,2.272,19.54,0.6133,3.612,19.85,-2.135,2.128,19.76,-2.694,2.437,18.16,2.21,2.365,17.38,2.77,4.646,16.8,2.683,0.7229,16.72,3.156,1.81,20.42,-1.343,1.234,20.51,-1.9,1.714,18.23,2.252,2.901,16.67,2.925,1.182,16.43,3.061,1.451,16.08,3.136,0.0,12.56,-3.823,0.0,19.77,-2.637,0.0,4.518,-4.39,0.0,2.061,-4.658,0.0,12.46,3.505};
			return value;
		}
		private double[] getCoordinate_11_190_point_2()
		{
			double[] value = {0.0,-1.276,-4.613,0.0,19.67,-2.898,2.029,23.12,0.2404,1.481,22.84,1.295,0.7848,22.6,2.112,0.928,23.45,-1.684,1.568,23.32,-0.8373,1.204,22.03,0.9589,0.5753,21.9,1.543,0.9464,22.43,-1.559,1.456,22.35,-0.8756,1.661,22.21,0.0384,1.129,20.89,0.5567,0.5268,20.79,1.133,0.9102,21.28,-1.569,1.35,21.2,-1.042,1.553,21.06,-0.231,0.0,23.44,-1.96,1.685,20.48,-0.3138,1.243,20.31,0.4307,0.5932,20.18,0.9903,0.8927,20.71,-1.683,1.399,20.62,-1.113,0.0,20.77,1.266,0.0,20.16,1.165,0.0,20.71,-1.877,-8.124,18.67,-2.069,-4.446,19.43,-2.415,-4.34,19.6,-0.3738,-8.525,18.87,-0.3882,-5.653,10.76,-2.032,-5.61,7.967,-1.958,-3.698,7.844,-3.672,-3.714,10.91,-3.568,-2.138,15.7,-3.957,-4.244,15.45,-3.486,-3.889,12.68,-3.569,-1.992,12.62,-3.965,-2.128,19.72,-2.573,-4.385,17.53,-3.184,-2.287,17.92,-3.528,-4.209,18.42,1.834,-2.81,19.85,-0.3558,-2.373,19.43,0.6618,-2.44,20.03,-1.69,-6.553,15.02,-2.428,-5.918,12.87,-2.169,-7.103,16.97,-2.548,-8.059,18.55,1.388,-2.548,10.62,3.241,-0.8673,10.77,3.572,-1.069,8.059,3.819,-2.817,7.944,3.406,-5.675,4.808,-2.228,-5.868,7.953,0.7283,-6.13,4.835,0.5932,-1.35,5.142,4.077,0.0,8.057,4.002,0.0,5.254,4.196,-5.076,4.964,2.775,-4.818,7.923,2.475,-3.162,5.049,3.686,-1.552,4.551,-4.356,-1.715,7.893,-4.053,-3.698,4.669,-3.801,-1.861,10.99,-3.976,-4.646,16.39,2.492,-6.734,16.65,1.984,-6.441,14.67,0.1005,-5.76,12.83,0.4019,-5.779,10.76,0.7375,-4.491,10.66,2.208,-4.477,12.22,2.138,0.0,17.91,-3.504,-2.437,18.14,2.21,-2.486,16.04,3.085,-0.4984,15.89,3.124,-0.6339,17.89,2.418,0.0,17.83,2.45,0.0,15.77,3.074,-1.243,20.31,0.4307,-1.685,20.48,-0.3138,-0.5932,20.18,0.9903,-0.6293,19.04,1.436,-1.399,20.62,-1.113,-0.8927,20.71,-1.683,-6.162,-0.8553,-2.552,-5.848,2.503,-2.421,-6.474,2.515,0.4493,-6.956,-0.7272,0.4152,-1.697,-0.5528,4.404,-1.504,2.746,4.241,0.0,2.754,4.383,-5.741,-0.6607,3.145,-5.35,2.64,2.941,-3.441,2.753,3.83,-3.713,-0.568,3.977,-4.412,-1.136,-3.878,-1.722,-1.261,-4.654,-1.556,2.087,-4.665};
			return value;
		}
		private double[] getCoordinate_11_190_point_3()
		{
			double[] value = {-3.933,2.34,-3.983,0.0,7.846,-4.05,-6.324,17.2,-0.1978,-6.379,15.01,1.598,0.0,18.98,1.513,-4.792,14.12,2.395,-0.5769,14.05,3.467,0.0,13.64,3.442,-0.5876,13.45,3.455,-2.514,12.11,3.253,-0.7572,12.18,3.449,-2.663,13.83,3.223,-2.659,13.25,3.176,-4.774,13.46,2.283,-4.434,18.54,1.834,-4.34,19.62,-0.3738,-2.219,20.24,-0.3649,-2.272,19.54,0.6133,-3.612,19.85,-2.135,-2.128,19.76,-2.694,-1.234,20.51,-1.9,-1.81,20.42,-1.343,-2.437,18.16,2.21,-2.365,17.38,2.77,-4.646,16.8,2.683,0.0,20.51,-2.142,-1.714,18.23,2.252,-1.182,16.43,3.061,-1.451,16.08,3.136,-2.901,16.67,2.925,-0.7229,16.72,3.156,0.0,15.68,3.187,-2.029,23.12,0.2404,-1.481,22.84,1.295,-1.204,22.03,0.9589,-1.661,22.21,0.0384,-0.7848,22.6,2.112,-0.5753,21.9,1.543,0.0,22.44,2.495,0.0,21.79,1.701,-0.928,23.45,-1.684,-1.568,23.32,-0.8373,-1.456,22.35,-0.8756,-0.9464,22.43,-1.559,-1.129,20.89,0.5567,-1.553,21.06,-0.231,-0.5268,20.79,1.133,-0.9102,21.28,-1.569,0.0,21.29,-1.754,0.0,22.44,-1.745,-1.35,21.2,-1.042,0.0,15.68,3.187,5.848,2.503,-2.421,6.474,2.515,0.4493,1.504,2.746,4.241,5.35,2.64,2.941,3.441,2.753,3.83,1.556,2.087,-4.665,3.933,2.34,-3.983,0.0,2.061,-4.658,-5.848,2.503,-2.421,-6.474,2.515,0.4493,-1.504,2.746,4.241,0.0,2.754,4.383,-5.35,2.64,2.941,-3.441,2.753,3.83,-1.556,2.087,-4.665,-3.933,2.34,-3.983,0.0,-0.6295,-3.092,1.368,-0.6301,-3.099,3.3,-0.5819,-2.548,4.648,-0.4862,-1.454,5.082,-0.3126,0.5295,4.341,-0.1694,2.167,3.016,-0.1157,2.781,1.303,-0.084,3.142,0.0,-0.0733,3.266,-1.303,-0.084,3.142,-3.016,-0.1157,2.781,-4.341,-0.1694,2.167,-5.082,-0.3126,0.5295,-4.648,-0.4862,-1.454,-3.3,-0.5819,-2.548,-1.368,-0.6301,-3.099,0.0,-1.967,0.2489};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_11_191_point_1()
		{
			double[] value = {0.56,0.5116,0.573,0.5408,0.5399,0.5517,0.5436,0.5152,0.5622,0.4121,0.5626,0.3879,0.5993,0.388,0.5994,0.4167,0.6248,0.4956,0.598,0.4839,0.6002,0.4429,0.6282,0.447,0.5897,0.5625,0.5921,0.5147,0.6119,0.5309,0.4877,0.4977,0.4406,0.5142,0.4986,0.5308,0.5387,0.569,0.5135,0.5642,0.5682,0.5692,0.5643,0.4675,0.5643,0.4413,0.5666,0.4964,0.5145,0.5083,0.4607,0.4172,0.436,0.4251,0.4376,0.4008,0.4638,0.3935,0.4349,0.5153,0.5664,0.3605,0.5244,0.3867,0.5254,0.3607,0.4345,0.3779,0.4202,0.4043,0.416,0.3839,0.4909,0.3645,0.4925,0.388,0.4614,0.3707,0.6351,0.362,0.63,0.3916,0.6019,0.3607,0.4234,0.4281,0.6273,0.4211,0.6565,0.4217,0.6573,0.449,0.502,0.4938,0.4952,0.4104,0.5322,0.4596,0.5274,0.4378,0.5241,0.41,0.5109,0.4681,0.4969,0.4322,0.6534,0.5052,0.6395,0.5454,0.4631,0.5469,0.4523,0.549,0.5137,0.5853,0.5385,0.5849,0.4943,0.5849,0.484,0.568,0.5638,0.5904,0.5819,0.5996,0.5719,0.286,0.5285,0.2874,0.4191,0.3039,0.3943,0.3092,0.4837,0.2899,0.4494,0.2968,0.6132,0.2849,0.6468,0.2871,0.6147,0.5799,0.6581,0.3639,0.6561,0.3928,0.5393,0.4885,0.4718,0.5711,0.4841,0.5879,0.6694,0.2902,0.4941,0.4596,0.4281,0.4861,0.4263,0.4532,0.435,0.4824,0.4368,0.4479,0.4269,0.4739,0.4351,0.4698,0.5,0.4482,0.4646,0.5047,0.4628,0.4687,0.4629,0.4403,0.465,0.4578,0.4835,0.5385,0.5707,0.3239,0.528,0.324,0.4253,0.3406,0.4851,0.3279,0.4539,0.3342,0.6412,0.3242,0.608,0.3242,0.4044,0.3461,0.6638,0.327};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_2()
		{
			double[] value = {0.2156,0.1571,0.2141,0.2527,0.1481,0.2614,0.1498,0.2193,0.1966,0.328,0.1443,0.3601,0.0873,0.3274,0.1175,0.3103,0.1465,0.1381,0.1418,0.0997,0.2242,0.0824,0.0657,0.3853,0.0546,0.3394,0.1411,0.0969,0.2007,0.1535,0.218,0.1509,0.2215,0.0884,0.1819,0.1635,0.2136,0.2112,0.1459,0.6846,0.1322,0.6817,0.1345,0.6643,0.1468,0.6665,0.1092,0.6744,0.1199,0.6584,0.0954,0.6632,0.1082,0.6532,0.1804,0.6847,0.1594,0.6867,0.1596,0.6667,0.1738,0.667,0.1395,0.6458,0.1506,0.6487,0.1279,0.6419,0.1746,0.6514,0.1808,0.6512,0.1813,0.6659,0.1625,0.6517,0.1421,0.6314,0.1526,0.6337,0.1306,0.6274,0.1633,0.6341,0.175,0.6318,0.1912,0.681,0.1185,0.6385,0.1208,0.6244,0.1791,0.2083,0.1877,0.1273,0.1868,0.0936,0.1595,0.1234,0.1914,0.0904,0.1837,0.6369,0.5924,0.6058,0.56,0.5116,0.573,0.5408,0.5399,0.5517,0.5436,0.5152,0.5622,0.4121,0.5626,0.3879,0.5993,0.388,0.5994,0.4167,0.6248,0.4956,0.598,0.4839,0.6002,0.4429,0.6282,0.447,0.5897,0.5625,0.5921,0.5147,0.6119,0.5309,0.4986,0.5308,0.5387,0.569,0.5135,0.5642,0.5682,0.5692,0.5643,0.4675,0.5643,0.4413,0.5666,0.4964,0.5145,0.5083,0.4607,0.4172,0.436,0.4251,0.4376,0.4008,0.4638,0.3935,0.5664,0.3605,0.5244,0.3867,0.5254,0.3607,0.4345,0.3779,0.4202,0.4043,0.416,0.3839,0.4909,0.3645,0.4925,0.388,0.4614,0.3707,0.6351,0.362,0.63,0.3916,0.6019,0.3607,0.6273,0.4211,0.6565,0.4217,0.6573,0.449,0.4877,0.4977,0.502,0.4938,0.5322,0.4596,0.5274,0.4378,0.5241,0.41};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_3()
		{
			double[] value = {0.4952,0.4104,0.4969,0.4322,0.6534,0.5052,0.6395,0.5454,0.4835,0.5385,0.4646,0.5047,0.4406,0.5142,0.4631,0.5469,0.4523,0.549,0.4349,0.5153,0.5137,0.5853,0.5385,0.5849,0.4943,0.5849,0.484,0.568,0.5638,0.5904,0.5819,0.5996,0.5719,0.286,0.5707,0.3239,0.528,0.324,0.5285,0.2874,0.4191,0.3039,0.4253,0.3406,0.4044,0.3461,0.3943,0.3092,0.4837,0.2899,0.4851,0.3279,0.4539,0.3342,0.4494,0.2968,0.6132,0.2849,0.6468,0.2871,0.6412,0.3242,0.608,0.3242,0.4234,0.4281,0.6581,0.3639,0.6561,0.3928,0.5393,0.4885,0.5109,0.4681,0.6147,0.5799,0.4718,0.5711,0.4841,0.5879,0.6638,0.327,0.4941,0.4596,0.4281,0.4861,0.435,0.4824,0.4269,0.4739,0.4351,0.4698,0.4629,0.4403,0.4368,0.4479,0.4628,0.4687,0.4263,0.4532,0.465,0.4578,0.5,0.4482,0.6694,0.2902,0.2156,0.1571,0.2141,0.2527,0.1481,0.2614,0.1498,0.2193,0.1966,0.328,0.1443,0.3601,0.0873,0.3274,0.1175,0.3103,0.1465,0.1381,0.1418,0.0997,0.2242,0.0824,0.0657,0.3853,0.0546,0.3394,0.1877,0.1273,0.1595,0.1234,0.1914,0.0904,0.1868,0.0936,0.2007,0.1535,0.218,0.1509,0.2215,0.0884,0.1411,0.0969,0.1819,0.1635,0.2136,0.2112,0.1459,0.6846,0.1322,0.6817,0.1345,0.6643,0.1468,0.6665,0.1092,0.6744,0.1199,0.6584,0.0954,0.6632,0.1082,0.6532,0.1804,0.6847,0.1594,0.6867,0.1596,0.6667,0.1738,0.667,0.1395,0.6458,0.1506,0.6487,0.1279,0.6419,0.1746,0.6514,0.1808,0.6512,0.1813,0.6659,0.1625,0.6517,0.1421,0.6314,0.1526,0.6337,0.1306,0.6274,0.1633,0.6341,0.175,0.6318};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_4()
		{
			double[] value = {0.1912,0.681,0.1185,0.6385,0.1208,0.6244,0.1837,0.6369,0.5924,0.6058,0.1791,0.2083,0.6638,0.327,0.6412,0.3242,0.608,0.3242,0.5707,0.3239,0.528,0.324,0.4851,0.3279,0.4539,0.3342,0.4253,0.3406,0.4044,0.3461,0.4253,0.3406,0.4539,0.3342,0.4851,0.3279,0.528,0.324,0.5707,0.3239,0.608,0.3242,0.6412,0.3242,0.5308,0.3294};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_coordIndex_1()
		{
			int[] value = {59,60,20,-1,20,9,59,-1,8,7,19,-1,19,17,8,-1,11,18,19,-1,19,7,11,-1,16,67,10,-1,26,28,18,-1,18,11,26,-1,25,61,62,-1,62,6,25,-1,15,69,65,-1,65,9,15,-1,8,36,14,-1,14,7,8,-1,7,14,13,-1,13,11,7,-1,49,50,52,-1,52,51,49,-1,20,28,26,-1,26,9,20,-1,31,29,35,-1,35,0,31,-1,32,5,35,-1,35,29,32,-1,30,70,111,-1,111,5,30,-1,15,9,26,-1,26,27,15,-1,63,114,69,-1,69,15,63,-1,2,1,64,-1,64,37,2,-1,64,62,13,-1,13,14,64,-1,65,119,59,-1,59,9,65,-1,28,20,30,-1,30,34,28,-1,17,31,33,-1,33,16,17,-1,16,33,21,-1,21,23,16,-1,23,21,22,-1,22,24,23,-1,24,22,126,-1,126,71,24,-1,66,127,56,-1,56,0,66,-1,55,33,31,-1,31,303,55,-1,3,63,61,-1,61,25,3,-1,11,13,27,-1,27,26,11,-1,35,131,66,-1,66,0,35,-1,5,111,131,-1,131,35,5,-1,31,17,19,-1,19,29,31,-1,29,19,18,-1,18,32,29,-1,32,18,28,-1,28,34,32,-1,22,21,58,-1,58,57,22,-1,33,55,58,-1,58,21,33,-1,4,2,37,-1,37,38,4,-1,10,40,45,-1,45,39,10,-1,10,12,41,-1,41,40,10,-1,12,38,42,-1,42,41,12,-1,38,37,43,-1,37,36,44,-1,44,43,37,-1,36,8,39,-1,39,44,36,-1,45,40,41,-1,41,46,45,-1,46,41,42,-1,42,47,46,-1,12,10,67,-1,67,48,12,-1,38,12,48,-1,48,4,38,-1,47,49,51,-1,51,46,47,-1,47,43,50,-1,50,49,47,-1,43,44,52,-1,52,50,43,-1,44,39,53,-1,53,52,44,-1,39,45,54,-1,54,53,39,-1,45,46,51,-1,51,54,45,-1,5,32,34,-1,34,30,5,-1,10,8,17,-1,17,16,10,-1,73,74,60,-1,60,59,73,-1,72,60,74,-1,74,75,72,-1,61,27,13,-1,13,62,61,-1,3,151,114,-1,114,63,3,-1,1,6,62,-1,62,64,1,-1,15,27,61,-1,61,63,15,-1,14,36,37,-1,37,64,14,-1,22,57,152,-1,152,126,22,-1,153,20,60,-1,60,72,153,-1,30,20,153,-1,153,70,30,-1,51,52,53,-1,53,54,51,-1,43,47,42,-1,42,38,43,-1,39,8,10,-1,16,23,68,-1,68,67,16,-1,73,76,75,-1,75,74,73,-1,119,76,73,-1,73,59,119,-1,78,77,80,-1,80,79,78,-1,81,84,83,-1,83,82,81,-1,85,82,83,-1,83,86,85,-1,87,89,88,-1,90,85,86,-1,86,91,90,-1,93,92,95,-1,95,94,93,-1,96,77,65,-1,65,69,96,-1,81,82,98,-1,98,97,81,-1,82,85,99,-1,99,98,82,-1,101,100,103,-1,103,102,101,-1,80,77,90,-1,90,91,80,-1,104,107,106,-1,106,105,104,-1,108,105,106,-1,106,109,108,-1,110,109,111,-1,111,70,110,-1,96,112,90,-1,90,77,96,-1,113,96,69,-1,69,114,113,-1,116,115,118,-1,118,117,116,-1,118,98,99,-1,99,95,118,-1,65,77,78,-1,78,119,65,-1,91,120,110,-1,110,80,91,-1,84,87,121,-1,121,104,84,-1,87,123,122,-1,122,121,87,-1,123,125,124,-1,124,122,123,-1,125,71,126,-1,126,124,125,-1,66,107,128,-1,128,127,66,-1,104,304,128,-1,128,107,104,-1,130,93,94,-1,94,113,130,-1,85,90,112,-1,112,99,85,-1,106,107,66,-1,66,131,106,-1,109,106,131,-1,131,111,109,-1,104,105,83,-1,83,84,104,-1,105,108,86,-1,86,83,105,-1,108,120,91,-1,91,86,108,-1,124,133,132,-1,132,122,124,-1,121,122,132,-1,132,129,121,-1,135,134,115,-1,115,116,135,-1,89,138,137,-1,137,136,89,-1,89,136,140,-1,140,139,89,-1,139,140,141,-1,141,134,139,-1,134,142,115,-1,115,142,143,-1,143,97,115,-1,97,143,138,-1,138,81,97,-1,137,144,140,-1,140,136,137,-1,144,145,141,-1,141,140,144,-1,139,146,88,-1,88,89,139,-1,134,135,146,-1,146,139,134,-1,145,144,100,-1,100,101,145,-1,145,101,102,-1,102,142,145,-1,142,102,103,-1,103,143,142,-1,143,103,147,-1,147,138,143,-1,138,147,148,-1,148,137,138,-1,137,148,100,-1,100,144,137,-1,109,110,120,-1,120,108,109,-1,89,87,84,-1,84,81,89,-1,149,78,79,-1,79,150,149,-1,72,75,150,-1,150,79,72,-1,94,95,99,-1,99,112,94,-1,130,113,114,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_2()
		{
			int[] value = {114,151,130,-1,117,118,95,-1,95,92,117,-1,96,113,94,-1,94,112,96,-1,98,118,115,-1,115,97,98,-1,124,126,152,-1,152,133,124,-1,153,72,79,-1,79,80,153,-1,110,70,153,-1,153,80,110,-1,100,148,147,-1,147,103,100,-1,142,134,141,-1,141,145,142,-1,138,89,81,-1,87,88,154,-1,154,123,87,-1,149,150,75,-1,75,76,149,-1,119,78,149,-1,149,76,119,-1,191,192,168,-1,168,158,191,-1,197,198,291,-1,291,279,197,-1,165,166,159,-1,158,165,159,-1,158,159,191,-1,160,185,184,-1,184,159,160,-1,160,279,291,-1,291,185,160,-1,279,160,207,-1,207,280,279,-1,162,163,169,-1,230,203,282,-1,282,294,230,-1,279,280,199,-1,199,197,279,-1,281,282,203,-1,203,204,281,-1,281,204,233,-1,233,295,281,-1,166,207,160,-1,160,159,166,-1,156,193,192,-1,192,157,156,-1,161,188,190,-1,190,168,161,-1,170,164,162,-1,210,209,164,-1,164,170,210,-1,171,172,274,-1,274,275,171,-1,176,276,286,-1,286,175,176,-1,287,195,254,-1,254,200,287,-1,172,171,157,-1,157,155,172,-1,171,177,156,-1,156,157,171,-1,181,173,274,-1,274,277,181,-1,289,182,278,-1,198,262,292,-1,292,291,198,-1,184,180,172,-1,172,155,184,-1,185,183,180,-1,180,184,185,-1,178,174,205,-1,205,201,178,-1,177,171,275,-1,275,276,177,-1,177,176,196,-1,196,156,177,-1,182,181,277,-1,277,278,182,-1,176,175,293,-1,293,196,176,-1,174,283,264,-1,264,205,174,-1,285,178,201,-1,201,202,285,-1,264,283,288,-1,288,206,264,-1,289,265,266,-1,266,290,289,-1,206,288,290,-1,290,266,206,-1,158,168,190,-1,190,189,158,-1,188,167,187,-1,187,190,188,-1,190,187,186,-1,186,189,190,-1,155,157,192,-1,192,191,155,-1,193,161,168,-1,168,192,193,-1,159,184,155,-1,155,191,159,-1,185,291,292,-1,292,183,185,-1,156,196,194,-1,194,193,156,-1,285,202,254,-1,254,195,285,-1,179,194,196,-1,196,293,179,-1,289,292,262,-1,262,265,289,-1,210,211,207,-1,207,166,210,-1,162,169,208,-1,208,170,162,-1,281,295,211,-1,211,208,281,-1,169,282,281,-1,281,208,169,-1,282,169,163,-1,163,294,282,-1,166,165,209,-1,209,210,166,-1,199,280,295,-1,295,233,199,-1,210,170,208,-1,208,211,210,-1,280,207,211,-1,211,295,280,-1,213,212,215,-1,215,214,213,-1,197,216,217,-1,217,198,197,-1,212,213,220,-1,220,219,218,-1,212,220,218,-1,221,220,223,-1,223,222,221,-1,221,222,217,-1,217,216,221,-1,216,224,225,-1,225,221,216,-1,226,228,227,-1,230,229,231,-1,231,203,230,-1,216,197,199,-1,199,224,216,-1,232,204,203,-1,203,231,232,-1,232,234,233,-1,233,204,232,-1,219,220,221,-1,221,225,219,-1,236,235,214,-1,214,237,236,-1,296,215,239,-1,239,238,296,-1,240,226,241,-1,242,240,241,-1,241,243,242,-1,244,247,246,-1,246,245,244,-1,251,250,249,-1,249,248,251,-1,252,200,254,-1,254,253,252,-1,245,255,235,-1,235,244,245,-1,244,235,236,-1,236,250,244,-1,256,245,246,-1,246,257,256,-1,260,259,258,-1,258,261,260,-1,198,217,261,-1,261,262,198,-1,223,255,245,-1,245,256,223,-1,222,223,256,-1,256,260,222,-1,251,201,205,-1,205,247,251,-1,247,244,250,-1,250,251,247,-1,250,236,263,-1,263,249,250,-1,257,259,260,-1,260,256,257,-1,249,263,253,-1,253,248,249,-1,247,205,264,-1,264,246,247,-1,248,202,201,-1,201,251,248,-1,264,206,257,-1,257,246,264,-1,258,259,266,-1,266,265,258,-1,206,266,259,-1,259,257,206,-1,212,267,239,-1,239,215,212,-1,238,239,269,-1,269,268,238,-1,239,267,270,-1,270,269,239,-1,255,213,214,-1,214,235,255,-1,237,214,215,-1,215,296,237,-1,220,213,255,-1,255,223,220,-1,222,260,261,-1,261,217,222,-1,236,237,271,-1,271,263,236,-1,248,253,254,-1,254,202,248,-1,252,253,263,-1,263,271,252,-1,258,265,262,-1,262,261,258,-1,242,219,225,-1,225,272,242,-1,226,240,273,-1,273,228,226,-1,232,273,272,-1,272,234,232,-1,228,273,232,-1,232,231,228,-1,231,229,227,-1,227,228,231,-1,219,242,243,-1,243,218,219,-1,199,233,234,-1,234,224,199,-1,242,272,273,-1,273,240,242,-1,224,234,272,-1,272,225,224,-1,173,284,275,-1,275,274,173,-1,275,284,286,-1,286,276,275,-1,176,177,276,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_3()
		{
			int[] value = {277,180,183,-1,183,278,277,-1,172,180,277,-1,277,274,172,-1,278,183,292,-1,292,289,278,-1,173,283,174,-1,174,284,173,-1,286,178,285,-1,285,175,286,-1,287,179,293,-1,293,195,287,-1,181,288,283,-1,283,173,181,-1,178,286,284,-1,284,174,178,-1,182,290,288,-1,288,181,182,-1,195,293,175,-1,175,285,195,-1,289,290,182,-1,299,271,237,-1,237,296,299,-1,200,252,298,-1,298,297,200,-1,252,271,301,-1,301,298,252,-1,200,297,300,-1,300,287,200,-1,300,179,287,-1,271,299,301,-1,55,303,302,-1,56,127,302,-1,127,128,302,-1,128,304,302,-1,129,132,302,-1,132,133,302,-1,133,152,302,-1,152,57,302,-1,57,58,302,-1,58,55,302,-1,56,303,31,-1,31,0,56,-1,303,56,302,-1,104,121,129,-1,129,304,104,-1,304,129,302,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_texCoordIndex_1()
		{
			int[] value = {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,8,9,6,-1,6,5,8,-1,10,11,12,-1,13,14,9,-1,9,8,13,-1,16,17,18,-1,18,15,16,-1,19,20,21,-1,21,0,19,-1,4,22,23,-1,23,5,4,-1,5,23,24,-1,24,8,5,-1,26,27,28,-1,28,25,26,-1,3,14,13,-1,13,0,3,-1,29,30,31,-1,31,32,29,-1,33,34,31,-1,31,30,33,-1,35,36,37,-1,37,34,35,-1,19,0,13,-1,13,38,19,-1,39,40,20,-1,20,19,39,-1,42,43,44,-1,44,41,42,-1,44,18,24,-1,24,23,44,-1,21,45,1,-1,1,0,21,-1,14,3,35,-1,35,46,14,-1,7,29,47,-1,47,10,7,-1,10,47,48,-1,48,49,10,-1,49,48,50,-1,50,51,49,-1,51,50,52,-1,52,53,51,-1,54,83,55,-1,55,32,54,-1,56,47,29,-1,29,328,56,-1,57,39,17,-1,17,16,57,-1,8,24,38,-1,38,13,8,-1,31,58,54,-1,54,32,31,-1,34,37,58,-1,58,31,34,-1,29,7,6,-1,6,30,29,-1,30,6,9,-1,9,33,30,-1,33,9,14,-1,14,46,33,-1,50,48,59,-1,59,60,50,-1,47,56,59,-1,59,48,47,-1,62,42,41,-1,41,61,62,-1,79,63,64,-1,64,65,79,-1,79,66,67,-1,67,63,79,-1,66,80,68,-1,68,67,66,-1,80,41,69,-1,41,22,70,-1,70,69,41,-1,22,4,65,-1,65,70,22,-1,64,63,67,-1,67,71,64,-1,71,67,68,-1,68,72,71,-1,81,12,11,-1,11,73,81,-1,61,81,73,-1,73,62,61,-1,72,26,25,-1,25,71,72,-1,72,69,27,-1,27,26,72,-1,69,70,28,-1,28,27,69,-1,70,65,74,-1,74,28,70,-1,65,64,75,-1,75,74,65,-1,64,71,25,-1,25,75,64,-1,34,33,46,-1,46,35,34,-1,12,4,7,-1,7,10,12,-1,86,87,2,-1,2,1,86,-1,76,2,87,-1,87,88,76,-1,17,38,24,-1,24,18,17,-1,57,77,40,-1,40,39,57,-1,43,15,18,-1,18,44,43,-1,19,38,17,-1,17,39,19,-1,23,22,41,-1,41,44,23,-1,50,60,82,-1,82,52,50,-1,78,3,2,-1,2,76,78,-1,35,3,78,-1,78,36,35,-1,25,28,74,-1,74,75,25,-1,69,72,68,-1,68,80,69,-1,65,4,79,-1,10,49,84,-1,84,85,10,-1,86,89,88,-1,88,87,86,-1,45,89,86,-1,86,1,45,-1,91,90,93,-1,93,92,91,-1,94,97,96,-1,96,95,94,-1,98,95,96,-1,96,99,98,-1,100,102,101,-1,103,98,99,-1,99,104,103,-1,106,105,108,-1,108,107,106,-1,109,90,111,-1,111,110,109,-1,94,95,113,-1,113,112,94,-1,95,98,114,-1,114,113,95,-1,116,115,118,-1,118,117,116,-1,93,90,103,-1,103,104,93,-1,119,122,121,-1,121,120,119,-1,123,120,121,-1,121,124,123,-1,125,124,127,-1,127,126,125,-1,109,128,103,-1,103,90,109,-1,129,109,110,-1,110,130,129,-1,132,131,134,-1,134,133,132,-1,134,113,114,-1,114,108,134,-1,111,90,91,-1,91,135,111,-1,104,136,125,-1,125,93,104,-1,97,100,137,-1,137,119,97,-1,100,139,138,-1,138,137,100,-1,139,141,140,-1,140,138,139,-1,141,143,142,-1,142,140,141,-1,144,122,146,-1,146,145,144,-1,119,329,146,-1,146,122,119,-1,148,106,107,-1,107,129,148,-1,98,103,128,-1,128,114,98,-1,121,122,144,-1,144,149,121,-1,124,121,149,-1,149,127,124,-1,119,120,96,-1,96,97,119,-1,120,123,99,-1,99,96,120,-1,123,136,104,-1,104,99,123,-1,140,151,150,-1,150,138,140,-1,137,138,150,-1,150,147,137,-1,153,152,131,-1,131,132,153,-1,154,157,156,-1,156,155,154,-1,154,155,159,-1,159,158,154,-1,158,159,161,-1,161,160,158,-1,160,162,131,-1,131,162,163,-1,163,112,131,-1,112,163,157,-1,157,94,112,-1,156,164,159,-1,159,155,156,-1,164,165,161,-1,161,159,164,-1,167,166,101,-1,101,102,167,-1,152,153,166,-1,166,167,152,-1,165,164,115,-1,115,116,165,-1,165,116,117,-1,117,162,165,-1,162,117,118,-1,118,163,162,-1,163,118,168,-1,168,157,163,-1,157,168,169,-1,169,156,157,-1,156,169,115,-1,115,164,156,-1,124,125,136,-1,136,123,124,-1,102,100,97,-1,97,94,102,-1,170,91,92,-1,92,171,170,-1,173,172,171,-1,171,92,173,-1,107,108,114,-1,114,128,107,-1,148,129,130,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_2()
		{
			int[] value = {130,174,148,-1,133,134,108,-1,108,105,133,-1,109,129,107,-1,107,128,109,-1,113,134,131,-1,131,112,113,-1,140,142,175,-1,175,151,140,-1,176,173,92,-1,92,93,176,-1,125,126,176,-1,176,93,125,-1,115,169,168,-1,168,118,115,-1,162,160,161,-1,161,165,162,-1,157,154,94,-1,100,178,177,-1,177,139,100,-1,170,171,172,-1,172,179,170,-1,135,91,170,-1,170,179,135,-1,181,182,183,-1,183,180,181,-1,185,186,187,-1,187,184,185,-1,188,189,190,-1,180,188,190,-1,180,190,181,-1,191,192,193,-1,193,190,191,-1,191,184,187,-1,187,192,191,-1,184,191,195,-1,195,194,184,-1,196,197,198,-1,200,201,202,-1,202,199,200,-1,184,194,203,-1,203,185,184,-1,205,202,201,-1,201,204,205,-1,205,204,206,-1,206,207,205,-1,189,195,191,-1,191,190,189,-1,209,210,182,-1,182,208,209,-1,211,212,213,-1,213,183,211,-1,214,215,196,-1,216,217,215,-1,215,214,216,-1,218,219,220,-1,220,221,218,-1,223,224,225,-1,225,222,223,-1,226,227,228,-1,228,229,226,-1,219,218,208,-1,208,230,219,-1,218,231,209,-1,209,208,218,-1,233,234,220,-1,220,232,233,-1,235,236,237,-1,186,238,239,-1,239,187,186,-1,193,240,219,-1,219,230,193,-1,192,241,240,-1,240,193,192,-1,242,243,244,-1,244,245,242,-1,231,218,221,-1,221,224,231,-1,231,223,246,-1,246,209,231,-1,236,233,232,-1,232,237,236,-1,223,222,247,-1,247,246,223,-1,243,248,249,-1,249,244,243,-1,251,242,245,-1,245,250,251,-1,249,248,252,-1,252,253,249,-1,235,255,256,-1,256,254,235,-1,253,252,254,-1,254,256,253,-1,180,183,213,-1,213,257,180,-1,212,258,259,-1,259,213,212,-1,213,259,260,-1,260,257,213,-1,230,208,182,-1,182,181,230,-1,210,211,183,-1,183,182,210,-1,190,193,230,-1,230,181,190,-1,192,187,239,-1,239,241,192,-1,209,246,261,-1,261,210,209,-1,251,250,228,-1,228,227,251,-1,262,261,246,-1,246,247,262,-1,235,239,238,-1,238,255,235,-1,216,263,195,-1,195,189,216,-1,196,198,264,-1,264,214,196,-1,205,207,263,-1,263,264,205,-1,198,202,205,-1,205,264,198,-1,202,198,197,-1,197,199,202,-1,189,188,217,-1,217,216,189,-1,203,194,207,-1,207,206,203,-1,216,214,264,-1,264,263,216,-1,194,195,263,-1,263,207,194,-1,268,265,266,-1,266,267,268,-1,185,269,270,-1,270,186,185,-1,265,268,271,-1,271,272,273,-1,265,271,273,-1,276,271,274,-1,274,275,276,-1,276,275,270,-1,270,269,276,-1,269,277,278,-1,278,276,269,-1,279,280,281,-1,200,282,283,-1,283,201,200,-1,269,185,203,-1,203,277,269,-1,284,204,201,-1,201,283,284,-1,284,285,206,-1,206,204,284,-1,272,271,276,-1,276,278,272,-1,288,286,267,-1,267,287,288,-1,291,266,289,-1,289,290,291,-1,292,279,293,-1,294,292,293,-1,293,295,294,-1,296,297,298,-1,298,299,296,-1,301,302,303,-1,303,300,301,-1,304,229,228,-1,228,305,304,-1,299,306,286,-1,286,296,299,-1,296,286,288,-1,288,302,296,-1,307,299,298,-1,298,308,307,-1,311,312,309,-1,309,310,311,-1,186,270,310,-1,310,238,186,-1,274,306,299,-1,299,307,274,-1,275,274,307,-1,307,311,275,-1,301,245,244,-1,244,297,301,-1,297,296,302,-1,302,301,297,-1,302,288,313,-1,313,303,302,-1,308,312,311,-1,311,307,308,-1,303,313,305,-1,305,300,303,-1,297,244,249,-1,249,298,297,-1,300,250,245,-1,245,301,300,-1,249,253,308,-1,308,298,249,-1,309,312,256,-1,256,255,309,-1,253,256,312,-1,312,308,253,-1,265,314,289,-1,289,266,265,-1,290,289,315,-1,315,316,290,-1,289,314,317,-1,317,315,289,-1,306,268,267,-1,267,286,306,-1,287,267,266,-1,266,291,287,-1,271,268,306,-1,306,274,271,-1,275,311,310,-1,310,270,275,-1,288,287,318,-1,318,313,288,-1,300,305,228,-1,228,250,300,-1,304,305,313,-1,313,318,304,-1,309,255,238,-1,238,310,309,-1,294,272,278,-1,278,319,294,-1,279,292,320,-1,320,280,279,-1,284,320,319,-1,319,285,284,-1,280,320,284,-1,284,283,280,-1,283,282,281,-1,281,280,283,-1,272,294,295,-1,295,273,272,-1,203,206,285,-1,285,277,203,-1,294,319,320,-1,320,292,294,-1,277,285,319,-1,319,278,277,-1,234,321,221,-1,221,220,234,-1,221,321,225,-1,225,224,221,-1,223,231,224,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_3()
		{
			int[] value = {232,240,241,-1,241,237,232,-1,219,240,232,-1,232,220,219,-1,237,241,239,-1,239,235,237,-1,234,248,243,-1,243,321,234,-1,225,242,251,-1,251,222,225,-1,226,262,247,-1,247,227,226,-1,233,252,248,-1,248,234,233,-1,242,225,321,-1,321,243,242,-1,236,254,252,-1,252,233,236,-1,227,247,222,-1,222,251,227,-1,235,254,236,-1,322,318,287,-1,287,291,322,-1,229,304,323,-1,323,324,229,-1,304,318,326,-1,326,323,304,-1,229,324,325,-1,325,226,229,-1,325,262,226,-1,318,322,326,-1,56,328,327,-1,55,83,327,-1,145,146,327,-1,146,329,327,-1,147,150,327,-1,150,151,327,-1,151,175,327,-1,82,60,327,-1,60,59,327,-1,59,56,327,-1,55,328,29,-1,29,32,55,-1,328,55,327,-1,119,137,147,-1,147,329,119,-1,329,147,327,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_12_199_point_1()
		{
			double[] value = {1.623,22.09,2.029,5.015,29.52,3.006,5.109,28.22,0.6911,1.112,29.69,6.122,5.072,27.79,-1.319,1.273,22.48,4.761,4.251,29.69,5.056,4.235,24.9,2.987,4.373,24.86,0.717,0.9649,25.33,5.707,4.422,24.97,0.3467,3.561,25.22,4.672,4.87,26.15,-0.0502,3.903,26.58,4.779,4.669,26.33,3.012,1.056,26.53,5.611,3.564,23.84,-1.026,3.803,23.83,0.9251,3.072,24.1,4.704,3.605,23.73,3.158,0.8434,24.54,5.673,1.952,22.8,-1.826,0.9968,22.92,-2.856,2.923,23.79,-2.466,1.427,23.87,-3.926,2.768,29.73,5.536,2.121,25.27,5.252,2.518,26.58,5.18,2.102,24.35,5.226,2.586,22.69,3.568,1.016,23.21,5.426,2.772,22.76,1.477,2.295,23.13,4.761,2.482,22.73,-0.6433,1.729,23.43,5.128,1.562,22.07,3.909,4.839,26.1,0.3411,4.989,27.32,0.5255,5.018,27.31,0.1283,4.494,24.88,0.661,4.747,25.11,-0.1465,5.466,26.45,-0.8798,5.395,27.24,-0.5072,5.11,27.31,0.4876,4.985,26.09,0.2699,4.888,25.11,0.0159,5.627,26.46,-0.7007,5.514,27.26,-0.2882,4.632,26.29,-1.383,5.483,27.16,-0.2554,5.154,27.23,0.3866,5.586,26.5,-0.6194,5.031,26.09,0.1835,4.6,25.0,0.5204,4.86,25.19,0.067,1.668,22.14,-0.3496,1.235,21.83,1.136,0.5246,22.16,-1.496,1.27,22.17,-1.148,0.5368,25.09,6.203,0.504,24.71,6.278,2.643,27.68,5.358,4.077,27.57,4.918,1.083,27.74,5.851,4.842,27.37,3.009,-0.0101,25.5,6.055,-0.0101,21.57,2.52,3.783,24.98,-1.4,2.928,25.0,-3.258,-0.0101,26.48,5.947,-0.0101,23.05,5.536,-0.0101,23.9,-4.302,-0.0101,24.52,6.368,0.21,24.92,6.362,0.1922,24.83,6.403,-0.0101,24.73,6.448,-0.0101,24.98,6.449,-0.985,25.33,5.707,-0.557,25.09,6.203,-0.5242,24.71,6.278,-0.8636,24.54,5.673,-4.393,24.86,0.717,-4.255,24.9,2.987,-3.625,23.73,3.158,-3.823,23.83,0.9251,-3.581,25.22,4.672,-3.092,24.1,4.704,-3.584,23.84,-1.026,-3.803,24.98,-1.4,-4.442,24.97,0.3467,-2.141,25.27,5.252,-2.122,24.35,5.226,-4.271,29.69,5.056,-2.789,29.73,5.536,-2.663,27.68,5.358,-4.097,27.57,4.918,-1.076,26.53,5.611,-4.86,26.1,0.3411,-4.689,26.33,3.012,-3.923,26.58,4.779};
			return value;
		}
		private double[] getCoordinate_12_199_point_2()
		{
			double[] value = {-5.606,26.5,-0.6194,-5.503,27.16,-0.2554,-5.175,27.23,0.3866,-5.051,26.09,0.1835,-2.792,22.76,1.477,-2.606,22.69,3.568,-1.582,22.07,3.909,-1.643,22.09,2.029,-2.315,23.13,4.761,-1.293,22.48,4.761,-1.036,23.21,5.426,-0.0101,22.1,4.882,-2.538,26.58,5.18,-1.104,27.74,5.851,-0.0101,27.78,6.148,-5.01,27.32,0.5255,-5.13,28.22,0.6911,-5.036,29.52,3.006,-4.862,27.37,3.009,-0.0101,25.15,6.376,-1.749,23.43,5.128,-2.502,22.73,-0.6433,-1.972,22.8,-1.826,-2.943,23.79,-2.466,-1.017,22.92,-2.856,-1.447,23.87,-3.926,-0.0101,22.94,-3.0,-0.0101,21.55,1.64,-1.255,21.83,1.136,-1.688,22.14,-0.3496,-1.132,29.69,6.122,-0.0101,21.57,4.209,-1.291,22.17,-1.148,-0.5447,22.16,-1.496,-5.039,27.31,0.1283,-5.092,27.79,-1.319,-4.767,25.11,-0.1465,-4.908,25.11,0.0159,-4.514,24.88,0.661,-4.89,26.15,-0.0502,-5.486,26.45,-0.8798,-5.415,27.24,-0.5072,-5.13,27.31,0.4876,-5.006,26.09,0.2699,-5.647,26.46,-0.7007,-5.534,27.26,-0.2882,-4.653,26.29,-1.383,-4.62,25.0,0.5204,-4.88,25.19,0.067,-0.2302,24.92,6.362,-0.2123,24.83,6.403,-0.0101,29.69,6.359,-0.0101,22.15,-1.574,-0.0101,24.2,5.82,-2.948,25.0,-3.258,5.516,30.37,0.6831,4.539,29.93,4.875,5.311,30.27,2.774,5.344,27.36,0.5552,5.222,28.56,-1.915,4.247,28.36,-3.86,4.6,27.18,4.046,3.574,23.89,-1.388,2.383,23.28,-2.613,4.613,24.99,-0.5099,5.17,27.33,-0.5034,4.993,27.34,-1.884,4.203,25.29,3.582,5.087,27.31,2.682,2.841,23.73,-2.894,4.393,24.91,-1.749,4.849,31.99,3.134,5.161,32.16,0.8294,2.791,34.02,0.8196,1.464,34.35,3.513,2.351,31.33,6.193,3.094,31.14,5.932,3.938,31.49,5.059,1.404,33.01,5.174,2.409,28.81,6.369,4.8,32.03,-1.731,2.635,33.78,-1.675,2.394,33.51,-3.163,3.822,31.73,-3.543,5.164,30.22,-1.892,4.229,29.91,-3.799,4.542,25.11,0.8889,4.429,25.17,2.797,4.407,26.06,3.808,4.946,26.11,0.4174,4.807,26.12,2.721,5.647,28.72,0.6137,5.284,28.6,2.678,4.577,28.34,4.527,3.311,28.38,5.864,1.443,29.58,6.321,3.275,29.75,5.907,-0.0101,28.05,-5.405,-0.0101,29.32,-5.437,-0.0101,26.87,-5.289};
			return value;
		}
		private double[] getCoordinate_12_199_point_3()
		{
			double[] value = {-0.3707,28.29,6.662,-0.1268,33.41,5.286,-0.0101,31.91,6.45,-0.0101,23.55,-4.273,-0.0101,24.63,-4.778,-0.1769,34.53,3.563,-0.1769,34.86,-1.633,4.174,27.13,-3.784,3.455,24.8,-3.209,5.038,26.17,-0.7534,4.812,26.13,-1.88,3.969,25.97,-3.602,-5.36,27.36,0.5552,-5.561,28.45,0.6137,-5.298,28.3,2.678,-5.118,26.93,2.682,-2.386,28.23,-5.093,-2.368,29.55,-5.089,-5.185,27.32,-0.5111,-4.973,27.34,-1.884,-5.214,28.66,-1.915,-4.13,28.36,-3.86,-4.024,29.91,-3.799,-5.086,30.22,-1.892,-2.245,26.99,-5.032,-4.018,27.13,-3.784,-3.606,23.83,-1.382,-2.333,23.29,-2.587,-2.837,23.71,-2.876,-1.082,22.96,-3.131,-0.0101,22.82,-3.394,-1.491,23.62,-3.963,-1.884,24.69,-4.487,-0.0101,25.81,-5.092,-2.109,25.89,-4.824,-5.277,30.27,2.774,-4.627,29.87,4.79,-4.737,28.17,4.527,-4.397,25.93,3.808,-4.779,26.12,2.721,-4.217,24.91,-1.749,-4.529,25.0,-0.5137,-4.737,26.13,-1.88,-4.976,26.17,-0.7378,-4.836,31.99,3.134,-5.053,32.14,0.8294,-3.097,34.16,0.8225,-2.825,33.72,3.473,-1.85,31.55,6.22,-3.344,30.61,5.836,-4.088,31.66,5.059,-2.457,32.89,5.124,-2.081,28.02,6.395,-1.777,29.12,6.307,-0.0922,29.35,6.558,-5.469,30.37,0.6831,-4.787,32.02,-1.731,-2.907,33.93,-1.674,-1.723,32.49,-4.134,-2.514,33.49,-3.152,-3.823,31.73,-3.458,-2.216,31.22,-4.749,-0.0101,31.09,-5.081,-3.651,29.21,5.81,-0.1769,35.19,0.8138,-0.0101,32.9,-4.328,-0.1769,33.92,-3.144,-5.071,26.11,0.4072,-4.185,25.29,3.582,-4.397,25.17,2.797,-4.572,25.11,0.8889,-3.803,27.89,5.767,-3.783,25.97,-3.602,-3.382,24.8,-3.209,3.6,33.78,0.8244,3.541,33.27,3.322,3.403,32.21,5.114,3.679,33.35,-1.696,3.134,32.81,-3.295,2.258,28.22,-5.108,2.116,26.99,-5.044,1.756,24.7,-4.5,1.364,23.63,-3.979,1.591,34.94,0.8191,2.669,33.44,3.499,1.412,31.71,6.233,2.431,32.51,5.164,1.304,28.59,6.409,1.565,34.71,-1.672,1.797,32.62,-4.173,1.761,33.82,-3.151,2.24,29.54,-5.105,1.95,31.21,-4.797,2.379,29.86,6.286,0.9559,22.94,-3.157,1.98,25.88,-4.838,-4.542,26.5,4.046,-0.6666,27.47,6.58,-2.319,27.18,6.112,-4.033,26.73,5.067};
			return value;
		}
		private double[] getCoordinate_12_199_point_4()
		{
			double[] value = {1.049,28.09,6.438,-3.509,26.84,5.333,-0.0101,21.56,-0.026,1.492,22.02,0.5296,-1.449,22.02,0.5296};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_12_200_point_1()
		{
			double[] value = {0.0536,0.8577,0.0288,0.846,0.0262,0.8372,0.0448,0.8348,0.2245,0.8377,0.167,0.8528,0.1574,0.8233,0.205,0.8102,0.1196,0.8678,0.1082,0.8311,0.2435,0.7908,0.2708,0.8206,0.2333,0.8379,0.0887,0.8612,0.0763,0.8332,0.1274,0.9833,0.0941,0.966,0.0924,0.9154,0.1246,0.9182,0.052,0.8807,0.0273,0.8724,0.0238,0.8503,0.2416,0.8686,0.1763,0.8915,0.1235,0.8917,0.2746,0.8771,0.266,0.8948,0.2471,0.8988,0.248,0.8687,0.1711,0.7658,0.1207,0.7851,0.0837,0.7601,0.1249,0.7468,0.0877,0.7965,0.0646,0.775,0.0465,0.8002,0.0275,0.7888,0.0404,0.7615,0.093,0.8873,0.0485,0.9118,0.0246,0.9054,0.2416,0.9006,0.2393,0.9253,0.1861,0.9714,0.1805,0.918,0.0165,0.8443,0.0645,0.8092,0.1989,0.7507,0.23,0.7286,0.2616,0.7472,0.2378,0.7088,0.2725,0.7129,0.2373,0.6899,0.2744,0.6852,0.08,0.7302,0.1581,0.7331,0.1771,0.7321,0.0456,0.9611,0.0505,0.7396,0.1952,0.7242,0.2051,0.7057,0.2505,0.8975,0.2774,0.8972,0.2493,0.8401,0.2481,0.8425,0.2276,0.8388,0.2505,0.8671,0.2782,0.873,0.2701,0.8941,0.2443,0.9011,0.2454,0.8689,0.2769,0.8759,0.2673,0.8972,0.2825,0.8559,0.2325,0.8414,0.2466,0.8448,0.0158,0.829,0.0225,0.953,0.0225,0.8162,0.2333,0.8379,0.2505,0.8975,0.2505,0.8671,0.207,0.6951,0.1044,0.7212,0.2616,0.7472,0.2435,0.7908,0.0209,0.8424,0.0195,0.8379,0.0143,0.8338,0.0147,0.8416,0.0536,0.8577,0.0288,0.846,0.0262,0.8372,0.0448,0.8348,0.2245,0.8377,0.167,0.8528,0.1574,0.8233,0.205,0.8102,0.1196,0.8678,0.1082,0.8311};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_2()
		{
			double[] value = {0.2435,0.7908,0.2708,0.8206,0.2333,0.8379,0.0887,0.8612,0.0763,0.8332,0.1274,0.9833,0.0941,0.966,0.0924,0.9154,0.1246,0.9182,0.052,0.8807,0.0273,0.8724,0.0238,0.8503,0.2416,0.8686,0.1763,0.8915,0.1235,0.8917,0.2746,0.8771,0.266,0.8948,0.2471,0.8988,0.248,0.8687,0.1711,0.7658,0.1207,0.7851,0.0837,0.7601,0.1249,0.7468,0.0877,0.7965,0.0646,0.775,0.0465,0.8002,0.0275,0.7888,0.0404,0.7615,0.093,0.8873,0.0485,0.9118,0.0246,0.9054,0.2416,0.9006,0.2393,0.9253,0.1861,0.9714,0.1805,0.918,0.0165,0.8443,0.0645,0.8092,0.1989,0.7507,0.23,0.7286,0.2616,0.7472,0.2378,0.7088,0.2725,0.7129,0.2373,0.6899,0.2744,0.6852,0.08,0.7302,0.1044,0.7212,0.1581,0.7331,0.1771,0.7321,0.0456,0.9611,0.0505,0.7396,0.1952,0.7242,0.2051,0.7057,0.2505,0.8975,0.2774,0.8972,0.2333,0.8379,0.2493,0.8401,0.2481,0.8425,0.2276,0.8388,0.2505,0.8671,0.2782,0.873,0.2505,0.8975,0.2701,0.8941,0.2443,0.9011,0.2454,0.8689,0.2769,0.8759,0.2673,0.8972,0.2825,0.8559,0.2505,0.8671,0.2325,0.8414,0.2466,0.8448,0.0209,0.8424,0.0195,0.8379,0.0143,0.8338,0.0158,0.829,0.0225,0.953,0.207,0.6951,0.0225,0.8162,0.2616,0.7472,0.2435,0.7908,0.0147,0.8416,0.9438,0.8319,0.927,0.8245,0.9266,0.7875,0.9423,0.7929,0.8424,0.9101,0.8091,0.9169,0.8093,0.9063,0.8409,0.9004,0.9356,0.8612,0.908,0.882,0.9008,0.8665,0.8754,0.8912,0.8695,0.8792,0.8919,0.8527,0.8412,0.9203,0.8755,0.9025,0.8963,0.9437,0.8613,0.9615,0.8659,0.9533,0.8331,0.9741};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_3()
		{
			double[] value = {0.807,0.976,0.8076,0.9613,0.8341,0.9589,0.8088,0.9264,0.808,0.9475,0.8373,0.9436,0.8085,0.9352,0.8396,0.9302,0.9071,0.7827,0.8989,0.7452,0.9238,0.7472,0.947,0.7669,0.9662,0.7755,0.9599,0.7941,0.9006,0.9215,0.9195,0.9211,0.9057,0.9014,0.9267,0.8964,0.8856,0.7768,0.8873,0.8083,0.8623,0.8054,0.8634,0.7738,0.8488,0.7239,0.8675,0.7307,0.8668,0.7471,0.8479,0.7428,0.8287,0.6872,0.8324,0.6989,0.8031,0.6976,0.796,0.6869,0.9068,0.8159,0.8772,0.747,0.8618,0.8384,0.8488,0.8381,0.8518,0.8048,0.833,0.8723,0.8411,0.856,0.8496,0.859,0.8101,0.8874,0.8354,0.8862,0.8788,0.842,0.8586,0.8649,0.8337,0.7451,0.8338,0.7706,0.8192,0.7714,0.816,0.7486,0.8799,0.7203,0.8535,0.7074,0.8375,0.8047,0.822,0.8046,0.8119,0.7284,0.8325,0.7256,0.8352,0.8351,0.8203,0.8322,0.8369,0.8548,0.8127,0.8657,0.8169,0.85,0.96,0.8269,0.9756,0.7799,0.9751,0.7927,0.9765,0.821,0.8925,0.708,0.8544,0.694,0.8741,0.9157,0.8712,0.9336,0.6816,0.8228,0.6802,0.7774,0.6964,0.7811,0.6943,0.8209,0.7754,0.9062,0.7779,0.8956,0.7195,0.8586,0.7132,0.8722,0.6891,0.8467,0.73,0.8494,0.7511,0.8758,0.7442,0.8876,0.7757,0.917,0.7433,0.8987,0.7205,0.9386,0.7502,0.9498,0.7557,0.9597,0.7797,0.972,0.7791,0.9577,0.7771,0.9416,0.7765,0.9273,0.719,0.7825,0.7082,0.746,0.7283,0.7505,0.6717,0.7738,0.6714,0.7525,0.6837,0.7426,0.7173,0.9162,0.6985,0.9148,0.7142,0.8936,0.6914,0.8676,0.7446,0.7799,0.7821,0.7747,0.7812,0.8039,0.7417,0.8072};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_4()
		{
			double[] value = {0.7851,0.7321,0.7826,0.7525,0.7524,0.7537,0.7602,0.7317,0.7624,0.695,0.7728,0.7041,0.7163,0.8134,0.7485,0.8375,0.7829,0.8299,0.7913,0.8647,0.7847,0.8799,0.7627,0.8611,0.7854,0.8472,0.7441,0.7223,0.6629,0.8067,0.6577,0.7685,0.6604,0.7543,0.6488,0.7959,0.7279,0.7164,0.744,0.912,0.7461,0.93,0.8494,0.7675,0.7088,0.7116,0.7523,0.6878,0.7877,0.678,0.8225,0.6784,0.728,0.7011,0.1783,0.7207,0.1694,0.7325,0.1666,0.7326};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=8, element #32, 480 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=8, element #32, 480 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=9, element #32, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_9_32_point()
		{
			MFVec3f Coordinate_9_32_point = new MFVec3f(new double[] {0.0,1.053,0.0273,0.0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0.0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0.0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0.0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0.0,0.0,-0.9616,-0.6534,0.0,-0.8206,-1.132,0.0,-0.4353,-1.307,0.0,0.0273,-1.132,0.0,0.5536,-0.6534,0.0,0.8206,0.0,0.0,0.9616,0.6534,0.0,0.8206,1.132,0.0,0.5536,1.307,0.0,0.0273,1.132,0.0,-0.4353,0.6534,0.0,-0.8206,0.0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0.0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0.0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0.0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0.0,-1.053,0.0273});
			return Coordinate_9_32_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #41, 448 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #41, 448 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #41, 174 total numbers made up of 58 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_41_point()
		{
			MFVec3f Coordinate_10_41_point = new MFVec3f(new double[] {1.162,-14.04,-1.359,1.979,-14.04,0.2402,-0.0057,-14.01,-1.93,-1.868,-13.98,0.1731,-1.157,-13.99,1.802,6.0E-4,-14.01,2.628,1.222,-14.03,1.842,2.86,-1.295,0.2487,1.7,-1.378,-2.333,-0.2513,-1.731,-3.188,-2.72,-2.654,0.2487,-1.961,-2.387,2.505,-0.0094,-1.813,3.505,1.88,-1.402,2.639,1.51,-7.87,-1.817,-0.0134,-8.129,-2.572,-2.277,-8.867,0.3315,-1.557,-8.95,2.222,-0.0134,-8.805,2.976,1.751,-8.336,2.168,2.411,-8.045,0.3315,-1.157,-13.99,-1.434,-1.945,-2.238,-2.277,-1.725,-8.485,-1.721,-1.997,-0.9593,-2.461,2.937,0.5163,0.2487,1.88,0.251,-2.456,-0.3535,-0.2789,-3.397,-2.141,-0.859,2.623,-0.0042,-0.1116,3.623,-2.928,-1.599,0.2487,1.92,0.4484,2.778,2.0,-15.65,0.2549,1.137,-15.65,-1.175,-0.0135,-15.63,-1.707,-1.893,-15.6,0.187,-1.199,-15.63,1.775,-0.0034,-15.66,2.495,1.172,-15.64,1.807,-1.157,-15.61,-1.282,0.6957,-17.02,-0.7517,1.31,-17.02,0.2656,0.7015,-17.01,1.406,-0.0153,-17.02,1.825,-0.7385,-17.0,1.39,-1.26,-16.98,0.1966,-0.738,-16.99,-0.846,-0.0561,-17.0,-1.099,-0.0203,-17.53,0.3051,-1.738,0.2246,-1.968,-2.469,-0.3593,0.2259,-1.889,0.2993,2.062,-0.3216,0.8479,2.795,1.011,1.213,2.214,1.822,1.224,0.2337,0.9695,1.04,-1.924,-0.6483,0.7244,-2.598,-0.716,1.584,0.109});
			return Coordinate_10_41_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #50, 384 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #50, 384 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #50, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_50_point()
		{
			MFVec3f Coordinate_11_50_point = new MFVec3f(new double[] {0.6802,-14.47,-1.046,1.131,-14.47,-0.1321,-0.1728,-14.47,-1.461,-1.44,-14.47,-0.177,-0.9948,-14.47,0.7524,-0.2093,-14.47,1.433,0.6826,-14.47,0.8297,1.766,-1.607,-0.121,0.9594,-1.594,-1.515,-0.047,-1.58,-2.136,-1.778,-1.557,-0.1829,-1.169,-1.603,1.193,-0.0665,-1.637,1.901,0.954,-1.596,1.204,-0.8812,-14.47,-0.9886,-1.076,-1.566,-1.642,0.8712,-6.987,-1.462,1.58,-6.82,-0.1242,-0.2167,-7.265,-2.016,-1.685,-7.632,-0.1812,-1.054,-7.528,-1.491,-1.107,-7.553,1.106,-0.1228,-7.253,1.773,0.9062,-7.028,1.167,0.7544,-13.44,-1.12,-0.1636,-13.42,-1.601,-1.465,-13.45,-0.1774,-1.002,-13.47,0.7811,-0.2213,-13.46,1.483,0.6466,-13.47,0.8065,1.197,-13.45,-0.1309,-0.9586,-13.47,-1.084,-0.184,-14.79,-0.155,1.947,0.0101,-0.1035,1.083,0.0162,-1.534,-0.0672,0.0385,-2.065,-1.947,0.0623,-0.1715,-1.253,0.0335,1.416,-0.0571,0.0079,2.136,1.119,0.0202,1.449,-1.211,0.0535,-1.641,1.68,1.544,-0.09,0.9219,1.548,-1.346,-0.0599,1.568,-1.799,-1.008,1.581,-1.447,-1.654,1.589,-0.1584,-1.033,1.562,1.263,-0.0368,1.539,1.862,0.9449,1.553,1.288,-0.0222,2.153,-0.0477});
			return Coordinate_11_50_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #59, 440 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #59, 440 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #59, 171 total numbers made up of 57 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_59_point()
		{
			MFVec3f Coordinate_12_59_point = new MFVec3f(new double[] {1.731,-1.878,0.029,1.222,-1.878,-1.495,-0.1851,-1.878,-1.825,-1.363,-1.878,-1.501,-1.883,-1.878,0.029,-0.9249,-0.0082,0.7476,1.502,-4.021,0.029,-1.633,-4.021,0.029,-1.266,-4.021,-1.51,1.131,-4.021,-1.504,0.9183,-1.002,-1.283,-0.1851,-0.9421,-1.604,-1.202,-0.9993,-1.283,-1.721,-1.025,0.029,-1.52,-0.9401,1.079,1.206,-0.9401,1.08,1.395,-1.025,0.029,-1.383,-3.557,-1.518,1.652,-3.557,0.029,-1.788,-3.557,0.029,-0.1851,-3.557,-1.914,1.246,-3.557,-1.516,-0.1851,-4.021,0.029,-0.1851,-4.021,-1.886,0.6003,-0.0082,-0.7875,-0.1851,-0.0082,-1.132,1.019,-0.0082,0.029,-0.8784,-0.0082,-0.8046,-1.274,-0.0082,0.029,-0.1851,-0.0082,1.203,0.6064,-0.0082,0.7351,-0.9328,0.8725,0.0232,-0.6695,0.8725,0.538,-0.1788,0.8725,0.8317,0.3605,0.8725,0.5208,0.6667,0.8725,0.0213,0.3805,0.8725,-0.5818,-0.1786,0.8725,-0.8408,-0.657,0.8725,-0.6004,-0.1851,-0.5691,1.74,-1.796,-1.86,0.9221,1.592,-1.86,0.9179,1.541,-4.021,0.9221,-1.639,-4.021,0.9221,1.708,-3.557,0.9221,-1.82,-3.557,0.9221,-0.1851,-4.021,0.9221,1.084,-1.469,1.63,-0.4507,-0.8535,1.908,-1.352,-1.469,1.635,-1.508,-1.986,1.539,-1.527,-3.593,1.555,-1.442,-3.815,1.585,-0.1848,-3.815,1.585,1.338,-3.815,1.585,1.413,-3.593,1.554,1.298,-1.986,1.54});
			return Coordinate_12_59_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #60, 168 total numbers made up of 84 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_60_point()
		{
			MFVec2f TextureCoordinate_12_60_point = new MFVec2f(new double[] {0.3815,0.8453,0.3815,0.8109,0.3624,0.829,0.3685,0.8453,0.3815,0.8034,0.3528,0.8194,0.3815,0.8107,0.3623,0.8291,0.4668,0.873,0.4763,0.8464,0.3815,0.8453,0.3685,0.8453,0.3813,0.8654,0.368,0.8691,0.4224,0.8577,0.4224,0.8376,0.4224,0.8026,0.4224,0.8376,0.4224,0.7937,0.4224,0.8026,0.4291,0.8577,0.4291,0.8376,0.4291,0.8028,0.4291,0.8376,0.4291,0.7943,0.4291,0.8029,0.3433,0.8314,0.3514,0.8453,0.3396,0.8261,0.3431,0.8311,0.3514,0.8453,0.368,0.869,0.352,0.8609,0.352,0.8606,0.3472,0.8677,0.3591,0.8766,0.3419,0.8568,0.3419,0.8634,0.5046,0.84,0.5046,0.873,0.3419,0.8564,0.539,0.8465,0.5488,0.873,0.3419,0.8451,0.3434,0.8311,0.3404,0.826,0.3431,0.8307,0.3419,0.8452,0.3813,0.8655,0.4224,0.8577,0.4291,0.8577,0.3684,0.8871,0.3756,0.8816,0.3831,0.8794,0.4229,0.872,0.4261,0.8727,0.4261,0.8727,0.4261,0.8727,0.4229,0.872,0.3831,0.8794,0.3756,0.8815,0.4291,0.8577,0.5498,0.8883,0.5046,0.8883,0.4666,0.8883,0.5445,0.8996,0.5046,0.8996,0.3624,0.829,0.3685,0.8453,0.3528,0.8194,0.368,0.8691,0.3396,0.8261,0.3472,0.8677,0.3591,0.8766,0.3419,0.8634,0.3419,0.8564,0.3419,0.8451,0.3434,0.8311,0.3404,0.826,0.3528,0.8194,0.3623,0.8291,0.3685,0.8453,0.368,0.869,0.3591,0.8766});
			return TextureCoordinate_12_60_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #68, 408 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #68, 408 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #68, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_68_point()
		{
			MFVec3f Coordinate_13_68_point = new MFVec3f(new double[] {-1.696,-0.8024,0.901,-0.1851,-0.1712,1.313,1.433,-0.8024,0.8928,1.585,-3.095,0.8819,-0.1851,-3.095,0.8819,-1.646,-3.095,0.8819,1.846,-1.229,2.182,-0.2812,-0.6275,2.435,-1.968,-1.229,2.184,2.007,-3.095,2.178,-0.1851,-3.095,2.178,-2.112,-3.095,2.178,1.931,-1.633,3.572,-0.2858,-1.142,3.845,-2.059,-1.633,3.562,2.148,-3.095,3.628,-0.1851,-3.095,3.628,-2.25,-3.095,3.628,1.486,-2.129,4.51,-0.2858,-1.597,4.893,-1.797,-2.129,4.446,1.781,-3.095,4.687,-0.2858,-3.095,5.256,-1.925,-3.095,4.687,1.772,-2.631,0.8819,-0.2858,-2.631,5.412,-1.857,-2.631,0.8819,2.223,-2.631,2.178,-2.293,-2.631,2.178,2.341,-2.631,3.628,-2.394,-2.631,3.628,1.84,-2.631,4.756,-2.017,-2.631,4.756,-1.52,-0.0134,0.0048,1.206,-0.0134,0.0061,-0.1851,0.3576,0.6662,-1.796,-0.9332,-0.1518,1.592,-0.9332,-0.1559,1.541,-3.095,-0.1518,-1.639,-3.095,-0.1518,1.708,-2.631,-0.1518,-1.82,-2.631,-0.1518,-0.1851,-3.095,-0.1518,-0.1828,0.0846,-0.6939,0.8905,-0.1781,-1.341,1.175,-0.8458,-1.468,1.281,-2.321,-1.412,1.245,-2.492,-1.394,-0.1856,-2.492,-1.394,-1.352,-2.492,-1.394,-1.398,-2.321,-1.412,-1.375,-0.8458,-1.468,-1.178,-0.1781,-1.341});
			return Coordinate_13_68_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #81, 448 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #81, 448 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #81, 174 total numbers made up of 58 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_81_point()
		{
			MFVec3f Coordinate_10_81_point = new MFVec3f(new double[] {-1.162,-14.04,-1.359,-1.979,-14.04,0.2402,0.0057,-14.01,-1.93,1.868,-13.98,0.1731,1.157,-13.99,1.802,-6.0E-4,-14.01,2.628,-1.222,-14.03,1.842,-2.86,-1.295,0.2487,-1.7,-1.378,-2.333,0.2513,-1.731,-3.188,2.72,-2.654,0.2487,1.961,-2.387,2.505,0.0094,-1.813,3.505,-1.88,-1.402,2.639,-1.51,-7.87,-1.817,0.0134,-8.129,-2.572,2.277,-8.867,0.3315,1.557,-8.95,2.222,0.0134,-8.805,2.976,-1.751,-8.336,2.168,-2.411,-8.045,0.3315,1.157,-13.99,-1.434,1.945,-2.238,-2.277,1.725,-8.485,-1.721,1.997,-0.9593,-2.461,-2.937,0.5163,0.2487,-1.88,0.251,-2.456,0.3535,-0.2789,-3.397,2.141,-0.859,2.623,0.0042,-0.1116,3.623,2.928,-1.599,0.2487,-1.92,0.4484,2.778,-2.0,-15.65,0.2549,-1.137,-15.65,-1.175,0.0135,-15.63,-1.707,1.893,-15.6,0.187,1.199,-15.63,1.775,0.0034,-15.66,2.495,-1.172,-15.64,1.807,1.157,-15.61,-1.282,-0.6957,-17.02,-0.7517,-1.31,-17.02,0.2656,-0.7015,-17.01,1.406,0.0153,-17.02,1.825,0.7385,-17.0,1.39,1.26,-16.98,0.1966,0.738,-16.99,-0.846,0.0561,-17.0,-1.099,0.0203,-17.53,0.3051,1.738,0.2246,-1.968,2.469,-0.3593,0.2259,1.889,0.2993,2.062,0.3216,0.8479,2.795,-1.011,1.213,2.214,-1.822,1.224,0.2337,-0.9695,1.04,-1.924,0.6483,0.7244,-2.598,0.716,1.584,0.109});
			return Coordinate_10_81_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #90, 384 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #90, 384 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #90, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_90_point()
		{
			MFVec3f Coordinate_11_90_point = new MFVec3f(new double[] {-0.6802,-14.47,-1.046,-1.131,-14.47,-0.1321,0.1728,-14.47,-1.461,1.44,-14.47,-0.177,0.9948,-14.47,0.7524,0.2093,-14.47,1.433,-0.6826,-14.47,0.8297,-1.766,-1.607,-0.121,-0.9594,-1.594,-1.515,0.047,-1.58,-2.136,1.778,-1.557,-0.1829,1.169,-1.603,1.193,0.0665,-1.637,1.901,-0.954,-1.596,1.204,0.8812,-14.47,-0.9886,1.076,-1.566,-1.642,-0.8712,-6.987,-1.462,-1.58,-6.82,-0.1242,0.2167,-7.265,-2.016,1.685,-7.632,-0.1812,1.054,-7.528,-1.491,1.107,-7.553,1.106,0.1228,-7.253,1.773,-0.9062,-7.028,1.167,-0.7544,-13.44,-1.12,0.1636,-13.42,-1.601,1.465,-13.45,-0.1774,1.002,-13.47,0.7811,0.2213,-13.46,1.483,-0.6466,-13.47,0.8065,-1.197,-13.45,-0.1309,0.9586,-13.47,-1.084,0.184,-14.79,-0.155,-1.947,0.0101,-0.1035,-1.083,0.0162,-1.534,0.0672,0.0385,-2.065,1.947,0.0623,-0.1715,1.253,0.0335,1.416,0.0571,0.0079,2.136,-1.119,0.0202,1.449,1.211,0.0535,-1.641,-1.68,1.544,-0.09,-0.9219,1.548,-1.346,0.0599,1.568,-1.799,1.008,1.581,-1.447,1.654,1.589,-0.1584,1.033,1.562,1.263,0.0368,1.539,1.862,-0.9449,1.553,1.288,0.0222,2.153,-0.0477});
			return Coordinate_11_90_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #99, 440 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #99, 440 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #99, 171 total numbers made up of 57 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_12_99_point()
		{
			MFVec3f Coordinate_12_99_point = new MFVec3f(new double[] {-1.731,-1.878,0.029,-1.222,-1.878,-1.495,0.1851,-1.878,-1.825,1.363,-1.878,-1.501,1.883,-1.878,0.029,0.9249,-0.0082,0.7476,-1.502,-4.021,0.029,1.633,-4.021,0.029,1.266,-4.021,-1.51,-1.131,-4.021,-1.504,-0.9183,-1.002,-1.283,0.1851,-0.9421,-1.604,1.202,-0.9993,-1.283,1.721,-1.025,0.029,1.52,-0.9401,1.079,-1.206,-0.9401,1.08,-1.395,-1.025,0.029,1.383,-3.557,-1.518,-1.652,-3.557,0.029,1.788,-3.557,0.029,0.1851,-3.557,-1.914,-1.246,-3.557,-1.516,0.1851,-4.021,0.029,0.1851,-4.021,-1.886,-0.6003,-0.0082,-0.7875,0.1851,-0.0082,-1.132,-1.019,-0.0082,0.029,0.8784,-0.0082,-0.8046,1.274,-0.0082,0.029,0.1851,-0.0082,1.203,-0.6064,-0.0082,0.7351,0.9328,0.8725,0.0232,0.6695,0.8725,0.538,0.1788,0.8725,0.8317,-0.3605,0.8725,0.5208,-0.6667,0.8725,0.0213,-0.3805,0.8725,-0.5818,0.1786,0.8725,-0.8408,0.657,0.8725,-0.6004,0.1851,-0.5691,1.74,1.796,-1.86,0.9221,-1.592,-1.86,0.9179,-1.541,-4.021,0.9221,1.639,-4.021,0.9221,-1.708,-3.557,0.9221,1.82,-3.557,0.9221,0.1851,-4.021,0.9221,-1.084,-1.469,1.63,0.4507,-0.8535,1.908,1.352,-1.469,1.635,1.508,-1.986,1.539,1.527,-3.593,1.555,1.442,-3.815,1.585,0.1848,-3.815,1.585,-1.338,-3.815,1.585,-1.413,-3.593,1.554,-1.298,-1.986,1.54});
			return Coordinate_12_99_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #100, 168 total numbers made up of 84 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_12_100_point()
		{
			MFVec2f TextureCoordinate_12_100_point = new MFVec2f(new double[] {0.3815,0.8453,0.3815,0.8109,0.3624,0.829,0.3685,0.8453,0.3815,0.8034,0.3528,0.8194,0.3815,0.8107,0.3623,0.8291,0.4668,0.873,0.4763,0.8464,0.3815,0.8453,0.3685,0.8453,0.3813,0.8654,0.368,0.8691,0.4224,0.8577,0.4224,0.8376,0.4224,0.8026,0.4224,0.8376,0.4224,0.7937,0.4224,0.8026,0.4291,0.8577,0.4291,0.8376,0.4291,0.8028,0.4291,0.8376,0.4291,0.7943,0.4291,0.8029,0.3433,0.8314,0.3514,0.8453,0.3396,0.8261,0.3431,0.8311,0.3514,0.8453,0.368,0.869,0.352,0.8609,0.352,0.8606,0.3472,0.8677,0.3591,0.8766,0.3419,0.8568,0.3419,0.8634,0.5046,0.84,0.5046,0.873,0.3419,0.8564,0.539,0.8465,0.5488,0.873,0.3419,0.8451,0.3434,0.8311,0.3404,0.826,0.3431,0.8307,0.3419,0.8452,0.3813,0.8655,0.4224,0.8577,0.4291,0.8577,0.3684,0.8871,0.3756,0.8816,0.3831,0.8794,0.4229,0.872,0.4261,0.8727,0.4261,0.8727,0.4261,0.8727,0.4229,0.872,0.3831,0.8794,0.3756,0.8815,0.4291,0.8577,0.5498,0.8883,0.5046,0.8883,0.4666,0.8883,0.5445,0.8996,0.5046,0.8996,0.3624,0.829,0.3685,0.8453,0.3528,0.8194,0.368,0.8691,0.3396,0.8261,0.3472,0.8677,0.3591,0.8766,0.3419,0.8634,0.3419,0.8564,0.3419,0.8451,0.3434,0.8311,0.3404,0.826,0.3528,0.8194,0.3623,0.8291,0.3685,0.8453,0.368,0.869,0.3591,0.8766});
			return TextureCoordinate_12_100_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #108, 408 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #108, 408 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #108, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_108_point()
		{
			MFVec3f Coordinate_13_108_point = new MFVec3f(new double[] {1.696,-0.8024,0.901,0.1851,-0.1712,1.313,-1.433,-0.8024,0.8928,-1.585,-3.095,0.8819,0.1851,-3.095,0.8819,1.646,-3.095,0.8819,-1.846,-1.229,2.182,0.2812,-0.6275,2.435,1.968,-1.229,2.184,-2.007,-3.095,2.178,0.1851,-3.095,2.178,2.112,-3.095,2.178,-1.931,-1.633,3.572,0.2858,-1.142,3.845,2.059,-1.633,3.562,-2.148,-3.095,3.628,0.1851,-3.095,3.628,2.25,-3.095,3.628,-1.486,-2.129,4.51,0.2858,-1.597,4.893,1.797,-2.129,4.446,-1.781,-3.095,4.687,0.2858,-3.095,5.256,1.925,-3.095,4.687,-1.772,-2.631,0.8819,0.2858,-2.631,5.412,1.857,-2.631,0.8819,-2.223,-2.631,2.178,2.293,-2.631,2.178,-2.341,-2.631,3.628,2.394,-2.631,3.628,-1.84,-2.631,4.756,2.017,-2.631,4.756,1.52,-0.0134,0.0048,-1.206,-0.0134,0.0061,0.1851,0.3576,0.6662,1.796,-0.9332,-0.1518,-1.592,-0.9332,-0.1559,-1.541,-3.095,-0.1518,1.639,-3.095,-0.1518,-1.708,-2.631,-0.1518,1.82,-2.631,-0.1518,0.1851,-3.095,-0.1518,0.1828,0.0846,-0.6939,-0.8905,-0.1781,-1.341,-1.175,-0.8458,-1.468,-1.281,-2.321,-1.412,-1.245,-2.492,-1.394,0.1856,-2.492,-1.394,1.352,-2.492,-1.394,1.398,-2.321,-1.412,1.375,-0.8458,-1.468,1.178,-0.1781,-1.341});
			return Coordinate_13_108_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #121, 856 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #121, 856 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #121, 327 total numbers made up of 109 3-tuple values.
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
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #122, 256 total numbers made up of 128 2-tuple values.
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
				.append(new MFVec2f(getTextureCoordinate_10_122_point_2()));
			return TextureCoordinate_10_122_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #130, 512 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #130, 512 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #130, 222 total numbers made up of 74 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_130_point()
		{
			MFVec3f Coordinate_11_130_point = new MFVec3f(new double[] {1.368,-9.721,-1.075,0.5554,-9.627,-1.323,1.697,-9.897,0.0871,1.37,-9.961,0.9966,0.5722,-10.03,1.401,-0.1728,-10.12,1.029,-0.5888,-10.15,0.0951,-0.1549,-9.857,-1.083,1.515,-5.201,-1.218,0.6263,-5.266,-1.527,1.964,-5.133,0.0302,1.424,-5.144,1.327,0.5103,-5.244,1.701,-0.3415,-5.296,1.393,-0.9295,-5.321,0.1721,-0.2188,-5.361,-1.227,1.425,-0.1998,-1.296,0.5195,-0.6168,-1.758,1.89,-0.0318,-0.0615,1.445,-0.2217,1.407,0.4413,-0.6502,1.913,-0.3607,-0.9925,1.358,-1.068,-1.294,0.1351,-0.4203,-1.018,-1.326,-0.0087,0.9247,-1.888,0.8381,1.677,-1.7,1.274,0.682,-1.606,0.0986,0.1637,-2.066,1.254,1.865,-0.0092,1.904,0.7808,-0.0329,0.8112,1.565,1.759,1.261,0.6935,1.832,-0.2175,1.07,1.96,0.055,0.2851,2.17,-0.9228,0.622,1.646,-1.001,-0.0973,1.703,-1.019,0.6054,-1.572,-0.9724,-0.2436,-1.642,-1.322,0.4084,-0.0629,-1.46,-0.5337,-0.0223,1.482,-1.046,-1.674,0.3106,-1.259,-2.163,2.16,-0.9553,-0.0259,1.486,-1.078,1.804,0.2797,-1.333,2.23,-0.9142,-1.685,1.672,-1.394,-1.825,-0.0013,-0.8917,-1.602,-1.736,-0.466,1.569,-0.0085,1.676,-3.535,-1.681,0.4959,-3.63,-2.197,2.36,-3.499,-0.0084,1.688,-3.559,1.804,0.4978,-3.666,2.23,-0.7557,-3.808,1.672,-1.233,-3.898,0.0128,-0.6796,-3.767,-1.736,0.5376,-10.76,-1.254,1.335,-10.61,0.9861,0.5611,-10.68,1.304,-0.1707,-10.77,0.995,1.276,-10.65,-1.021,1.765,-10.6,0.1259,-0.6302,-10.87,0.1389,-0.0997,-10.79,-1.063,0.6361,-11.54,-0.8631,1.142,-11.46,-0.7039,1.516,-11.43,0.1719,1.205,-11.43,0.792,0.6643,-11.48,1.014,0.1567,-11.54,0.7997,-0.1747,-11.62,0.1807,0.2316,-11.55,-0.7427,0.6986,-11.76,0.0849});
			return Coordinate_11_130_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #131, 182 total numbers made up of 91 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_131_point()
		{
			MFVec2f TextureCoordinate_11_131_point = new MFVec2f(new double[] {0.6228,0.0712,0.6294,0.0658,0.6103,0.0743,0.5995,0.0746,0.5896,0.0727,0.5805,0.0665,0.5699,0.0593,0.6451,0.0476,0.636,0.0584,0.6367,0.133,0.6484,0.1281,0.6193,0.1388,0.6011,0.1395,0.5876,0.137,0.573,0.1337,0.5541,0.1297,0.6614,0.1198,0.6799,0.1111,0.6551,0.2133,0.6704,0.1973,0.6305,0.2194,0.5996,0.2186,0.5801,0.21,0.5697,0.2048,0.5466,0.1979,0.6876,0.1846,0.7073,0.1738,0.4207,0.1763,0.4282,0.1674,0.4485,0.1712,0.4385,0.1896,0.4305,0.1519,0.4504,0.1509,0.431,0.1243,0.4437,0.1205,0.4234,0.1092,0.4341,0.1033,0.408,0.1043,0.4182,0.0866,0.4054,0.1873,0.4126,0.2016,0.3918,0.1029,0.4004,0.0777,0.3835,0.2094,0.3826,0.1833,0.4688,0.181,0.4508,0.2023,0.4777,0.1525,0.4696,0.1144,0.4553,0.0896,0.4387,0.0714,0.4187,0.0548,0.4258,0.2203,0.3963,0.2357,0.4009,0.1445,0.4778,0.2309,0.5052,0.199,0.519,0.1542,0.5073,0.1007,0.4866,0.0666,0.4662,0.0468,0.4451,0.0281,0.4475,0.2511,0.4157,0.268,0.0457,0.5477,0.0471,0.5348,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.0292,0.5765,0.0457,0.5477,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0471,0.5348,0.0517,0.5187,0.0292,0.5765,0.0673,0.4552,0.0409,0.557,0.0457,0.5477,0.0471,0.5348,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.0548,0.5098});
			return TextureCoordinate_11_131_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #148, 656 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_148_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_148_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_148_coordIndex_1()));
			return IndexedFaceSet_12_148_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #148, 656 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_148_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_148_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_148_texCoordIndex_1()));
			return IndexedFaceSet_12_148_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #148, 252 total numbers made up of 84 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_148_point()
		{
			MFVec3f Coordinate_13_148_point = new MFVec3f(new double[] {-0.4043,-3.207,-1.378,0.4128,-2.968,-1.473,-0.2797,-4.439,-1.289,0.1832,-4.593,-1.405,-0.0421,-3.004,-1.559,-0.1308,-4.617,-1.397,-0.3408,-3.913,-1.358,0.3758,-4.16,-1.523,0.0124,-4.066,-1.559,0.8293,-3.133,-0.7949,1.016,-3.286,-0.1119,-0.2604,-3.534,-0.1595,-0.3253,-3.393,-0.837,-0.0163,-5.016,-0.2094,-0.09,-4.738,-0.8515,0.5302,-5.003,-0.7804,0.5697,-5.193,-0.1607,0.2221,-5.027,-0.7658,0.2882,-5.238,-0.1569,-0.1799,-4.254,-0.8409,-0.0702,-4.437,-0.2076,0.8565,-4.796,-0.1534,0.7574,-4.564,-0.8292,-0.2845,-3.357,1.304,-0.1969,-3.468,0.5586,0.633,-3.3,1.52,0.8956,-3.358,0.7774,-0.4199,-4.856,1.144,-0.1634,-5.048,0.4861,0.1131,-4.963,1.294,0.3684,-5.183,0.552,0.196,-3.265,1.588,0.1067,-5.202,0.5371,-0.2033,-4.982,1.286,-0.3224,-4.461,1.197,-0.1814,-4.515,0.5129,0.6181,-4.745,0.6589,0.3549,-4.593,1.367,-0.0071,-4.49,1.429,-0.511,-1.809,-1.269,0.5069,-1.863,-1.291,-0.1385,-1.88,-1.433,0.8834,-2.065,-0.6619,1.084,-2.041,-0.022,-0.4454,-2.04,1.241,-0.8595,-1.439,0.8284,-0.9394,-1.167,1.129,-0.4703,-2.492,0.5589,-0.5852,-1.133,1.494,-0.2387,-1.35,1.691,0.0662,-1.692,1.461,-0.7589,-0.6824,0.1014,-0.7016,-0.5391,0.6842,-0.5615,-2.528,-0.1514,-0.2145,-0.417,1.097,0.2343,-0.6792,1.151,0.5466,-1.944,1.397,-0.6186,-0.782,-1.082,0.4937,-0.8981,-1.119,-0.1599,-0.9475,-1.256,0.7682,-0.9026,-0.6282,0.8526,-0.8017,-0.0674,0.9273,-2.063,0.7753,0.7028,-0.7443,0.6125,-0.5058,-2.279,-0.8314,-0.6034,-0.7674,-0.6877,0.1927,0.058,-0.616,0.5424,0.058,-0.3011,0.6496,0.058,-0.083,0.3722,0.058,0.5801,-0.0857,0.058,0.6207,-0.5588,0.058,0.2743,-0.535,0.058,-0.0465,-0.4787,0.058,-0.6034,-0.1506,0.058,-0.6883,0.5294,0.058,0.2886,-0.416,0.058,-0.386,0.0434,0.3889,-0.0832,-1.548,-2.417,1.676,-1.411,-2.58,1.542,-1.135,-2.619,1.525,-0.8304,-2.413,1.71,-0.9952,-2.239,1.903,-1.34,-2.312,1.813});
			return Coordinate_13_148_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=13, element #149, 210 total numbers made up of 105 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_13_149_point()
		{
			MFVec2f TextureCoordinate_13_149_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_13_149_point_1()))
				.append(new MFVec2f(getTextureCoordinate_13_149_point_2()));
			return TextureCoordinate_13_149_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #160, 512 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #160, 512 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #160, 222 total numbers made up of 74 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_160_point()
		{
			MFVec3f Coordinate_11_160_point = new MFVec3f(new double[] {-1.368,-9.721,-1.075,-0.5554,-9.627,-1.323,-1.697,-9.897,0.0871,-1.37,-9.961,0.9966,-0.5722,-10.03,1.401,0.1728,-10.12,1.029,0.5888,-10.15,0.0951,0.1549,-9.857,-1.083,-1.515,-5.201,-1.218,-0.6263,-5.266,-1.527,-1.964,-5.133,0.0302,-1.424,-5.144,1.327,-0.5103,-5.244,1.701,0.3415,-5.296,1.393,0.9295,-5.321,0.1721,0.2188,-5.361,-1.227,-1.425,-0.1998,-1.296,-0.5195,-0.6168,-1.758,-1.89,-0.0318,-0.0615,-1.445,-0.2217,1.407,-0.4413,-0.6502,1.913,0.3607,-0.9925,1.358,1.068,-1.294,0.1351,0.4203,-1.018,-1.326,0.0087,0.9247,-1.888,-0.8381,1.677,-1.7,-1.274,0.682,-1.606,-0.0986,0.1637,-2.066,-1.254,1.865,-0.0092,-1.904,0.7808,-0.0329,-0.8112,1.565,1.759,-1.261,0.6935,1.832,0.2175,1.07,1.96,-0.055,0.2851,2.17,0.9228,0.622,1.646,1.001,-0.0973,1.703,1.019,0.6054,-1.572,0.9724,-0.2436,-1.642,1.322,0.4084,-0.0629,1.46,-0.5337,-0.0223,-1.482,-1.046,-1.674,-0.3106,-1.259,-2.163,-2.16,-0.9553,-0.0259,-1.486,-1.078,1.804,-0.2797,-1.333,2.23,0.9142,-1.685,1.672,1.394,-1.825,-0.0013,0.8917,-1.602,-1.736,0.466,1.569,-0.0085,-1.676,-3.535,-1.681,-0.4959,-3.63,-2.197,-2.36,-3.499,-0.0084,-1.688,-3.559,1.804,-0.4978,-3.666,2.23,0.7557,-3.808,1.672,1.233,-3.898,0.0128,0.6796,-3.767,-1.736,-0.5376,-10.76,-1.254,-1.335,-10.61,0.9861,-0.5611,-10.68,1.304,0.1707,-10.77,0.995,-1.276,-10.65,-1.021,-1.765,-10.6,0.1259,0.6302,-10.87,0.1389,0.0997,-10.79,-1.063,-0.6361,-11.54,-0.8631,-1.142,-11.46,-0.7039,-1.516,-11.43,0.1719,-1.205,-11.43,0.792,-0.6643,-11.48,1.014,-0.1567,-11.54,0.7997,0.1747,-11.62,0.1807,-0.2316,-11.55,-0.7427,-0.6986,-11.76,0.0849});
			return Coordinate_11_160_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #161, 182 total numbers made up of 91 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_161_point()
		{
			MFVec2f TextureCoordinate_11_161_point = new MFVec2f(new double[] {0.6228,0.0712,0.6294,0.0658,0.6103,0.0743,0.5995,0.0746,0.5896,0.0727,0.5805,0.0665,0.5699,0.0593,0.6451,0.0476,0.636,0.0584,0.6367,0.133,0.6484,0.1281,0.6193,0.1388,0.6011,0.1395,0.5876,0.137,0.573,0.1337,0.5541,0.1297,0.6614,0.1198,0.6799,0.1111,0.6551,0.2133,0.6704,0.1973,0.6305,0.2194,0.5996,0.2186,0.5801,0.21,0.5697,0.2048,0.5466,0.1979,0.6876,0.1846,0.7073,0.1738,0.4207,0.1763,0.4282,0.1674,0.4485,0.1712,0.4385,0.1896,0.4305,0.1519,0.4504,0.1509,0.431,0.1243,0.4437,0.1205,0.4234,0.1092,0.4341,0.1033,0.408,0.1043,0.4182,0.0866,0.4054,0.1873,0.4126,0.2016,0.3918,0.1029,0.4004,0.0777,0.3835,0.2094,0.3826,0.1833,0.4688,0.181,0.4508,0.2023,0.4777,0.1525,0.4696,0.1144,0.4553,0.0896,0.4387,0.0714,0.4187,0.0548,0.4258,0.2203,0.3963,0.2357,0.4009,0.1445,0.4778,0.2309,0.5052,0.199,0.519,0.1542,0.5073,0.1007,0.4866,0.0666,0.4662,0.0468,0.4451,0.0281,0.4475,0.2511,0.4157,0.268,0.0457,0.5477,0.0471,0.5348,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.0292,0.5765,0.0457,0.5477,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0471,0.5348,0.0517,0.5187,0.0292,0.5765,0.0673,0.4552,0.0409,0.557,0.0457,0.5477,0.0471,0.5348,0.0517,0.5187,0.0571,0.5017,0.0625,0.4884,0.0657,0.4747,0.0673,0.4552,0.0409,0.557,0.0548,0.5098});
			return TextureCoordinate_11_161_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #178, 656 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_178_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_178_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_178_coordIndex_1()));
			return IndexedFaceSet_12_178_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #178, 656 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_178_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_178_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_178_texCoordIndex_1()));
			return IndexedFaceSet_12_178_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #178, 252 total numbers made up of 84 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_178_point()
		{
			MFVec3f Coordinate_13_178_point = new MFVec3f(new double[] {0.4043,-3.207,-1.378,-0.4128,-2.968,-1.473,0.2797,-4.439,-1.289,-0.1832,-4.593,-1.405,0.0421,-3.004,-1.559,0.1308,-4.617,-1.397,0.3408,-3.913,-1.358,-0.3758,-4.16,-1.523,-0.0124,-4.066,-1.559,-0.8293,-3.133,-0.7949,-1.016,-3.286,-0.1119,0.2604,-3.534,-0.1595,0.3253,-3.393,-0.837,0.0163,-5.016,-0.2094,0.09,-4.738,-0.8515,-0.5302,-5.003,-0.7804,-0.5697,-5.193,-0.1607,-0.2221,-5.027,-0.7658,-0.2882,-5.238,-0.1569,0.1799,-4.254,-0.8409,0.0702,-4.437,-0.2076,-0.8565,-4.796,-0.1534,-0.7574,-4.564,-0.8292,0.2845,-3.357,1.304,0.1969,-3.468,0.5586,-0.633,-3.3,1.52,-0.8956,-3.358,0.7774,0.4199,-4.856,1.144,0.1634,-5.048,0.4861,-0.1131,-4.963,1.294,-0.3684,-5.183,0.552,-0.196,-3.265,1.588,-0.1067,-5.202,0.5371,0.2033,-4.982,1.286,0.3224,-4.461,1.197,0.1814,-4.515,0.5129,-0.6181,-4.745,0.6589,-0.3549,-4.593,1.367,0.0071,-4.49,1.429,0.511,-1.809,-1.269,-0.5069,-1.863,-1.291,0.1385,-1.88,-1.433,-0.8834,-2.065,-0.6619,-1.084,-2.041,-0.022,0.4454,-2.04,1.241,0.8595,-1.439,0.8284,0.9394,-1.167,1.129,0.4703,-2.492,0.5589,0.5852,-1.133,1.494,0.2387,-1.35,1.691,-0.0662,-1.692,1.461,0.7589,-0.6824,0.1014,0.7016,-0.5391,0.6842,0.5615,-2.528,-0.1514,0.2145,-0.417,1.097,-0.2343,-0.6792,1.151,-0.5466,-1.944,1.397,0.6186,-0.782,-1.082,-0.4937,-0.8981,-1.119,0.1599,-0.9475,-1.256,-0.7682,-0.9026,-0.6282,-0.8526,-0.8017,-0.0674,-0.9273,-2.063,0.7753,-0.7028,-0.7443,0.6125,0.5058,-2.279,-0.8314,0.6034,-0.7674,-0.6877,-0.1927,0.058,-0.616,-0.5424,0.058,-0.3011,-0.6496,0.058,-0.083,-0.3722,0.058,0.5801,0.0857,0.058,0.6207,0.5588,0.058,0.2743,0.535,0.058,-0.0465,0.4787,0.058,-0.6034,0.1506,0.058,-0.6883,-0.5294,0.058,0.2886,0.416,0.058,-0.386,-0.0434,0.3889,-0.0832,1.548,-2.417,1.676,1.411,-2.58,1.542,1.135,-2.619,1.525,0.8304,-2.413,1.71,0.9952,-2.239,1.903,1.34,-2.312,1.813});
			return Coordinate_13_178_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=13, element #179, 210 total numbers made up of 105 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_13_179_point()
		{
			MFVec2f TextureCoordinate_13_179_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_13_179_point_1()))
				.append(new MFVec2f(getTextureCoordinate_13_179_point_2()));
			return TextureCoordinate_13_179_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #190, 2016 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #190, 2016 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #190, 855 total numbers made up of 285 3-tuple values.
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
				.append(new MFVec3f(getCoordinate_11_190_point_3()));
			return Coordinate_11_190_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #191, 646 total numbers made up of 323 2-tuple values.
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
				.append(new MFVec2f(getTextureCoordinate_11_191_point_4()));
			return TextureCoordinate_11_191_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #199, 2188 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #199, 2188 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #199, 915 total numbers made up of 305 3-tuple values.
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
				.append(new MFVec3f(getCoordinate_12_199_point_4()));
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
	 * @return KoreanCharacter07No model
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
        X3D thisExampleX3dModel = new KoreanCharacter07No().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.KoreanCharacter07No\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.KoreanCharacter07No self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}