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
 <p> Related links: KoreanCharacter03Hyun.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.KoreanCharacter03Hyun&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter03Hyun.x3d">KoreanCharacter03Hyun.x3d</a> </td>
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
			<td> 12 October 2020 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter03Hyun.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter03Hyun.x3d</a> </td>
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

public class KoreanCharacter03Hyun
{
	/** Default constructor to create this object. */
	public KoreanCharacter03Hyun ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KoreanCharacter03Hyun.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("12 October 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter03Hyun.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Suwon University HAnim Editor"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("KoreanCharacter03Hyun.x3d"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("Hyun").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_Hyun").setName("Hyun").setScale(0.0225,0.0225,0.0225).setVersion("2.0")
      .addComments(" HAnimHumanoid original info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Chul Hee Jung and Myeong Won Lee"}))
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"myeongwonlee@gmail.com"}))
        .setMetadata(new MetadataString().setName("creationDate").setValue(new String[] {"31 March 2011"}))
        .setMetadata(new MetadataString().setName("gender").setValue(new String[] {"male"}))
        .setMetadata(new MetadataString().setName("height").setValue(new String[] {"1.5"}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"2.0"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,31.430000,-0.560100)
        .addChild(new HAnimSegment("hanim_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,31.430000,-0.560100)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                .setTexture(new ImageTexture("HyunTextureAtlas").setUrl(new String[] {"images/Hyun.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Hyun.png"})))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_8_32_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_32_texCoordIndex())
                .setCoord(new Coordinate().setPoint(getCoordinate_9_32_point()))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8893,0.5320,0.8772,0.5320,0.8772,0.4766,0.8772,0.4361,0.8772,0.4213,0.8772,0.4361,0.8772,0.4766,0.8772,0.5320,0.8772,0.4766,0.8772,0.4361,0.8772,0.4212,0.8772,0.4361,0.8772,0.4766,0.8439,0.5320,0.8439,0.4604,0.8439,0.4080,0.8439,0.3888,0.8439,0.4080,0.8439,0.4604,0.8439,0.5320,0.8439,0.4604,0.8439,0.4079,0.8439,0.3887,0.8439,0.4079,0.8439,0.4604,0.7985,0.5320,0.7985,0.4493,0.7985,0.3888,0.7985,0.3666,0.7985,0.3888,0.7985,0.4493,0.7985,0.5320,0.7985,0.4493,0.7985,0.3887,0.7985,0.3666,0.7985,0.3887,0.7985,0.4493,0.7530,0.5320,0.7530,0.4604,0.7530,0.4080,0.7530,0.3888,0.7530,0.4080,0.7530,0.4604,0.7530,0.5320,0.7530,0.4604,0.7530,0.4079,0.7530,0.3887,0.7530,0.4079,0.7530,0.4604,0.7197,0.5320,0.7197,0.4907,0.7197,0.4604,0.7197,0.4493,0.7197,0.4604,0.7197,0.4907,0.7197,0.5320,0.7197,0.4906,0.7197,0.4604,0.7197,0.4493,0.7197,0.4604,0.7197,0.4906,0.7076,0.5320})))))))
        .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(3.551000,29.330000,-0.126700)
          .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
            .addChild(new Transform().setTranslation(3.551000,29.330000,-0.126700)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {31,30,29,-1,31,29,28,-1,28,34,33,-1,31,28,33,-1,31,33,32,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,13,12,5,-1,5,6,13,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,20,19,12,-1,12,13,20,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,27,26,19,-1,19,20,27,-1,21,27,20,-1,20,14,21,-1,1,0,28,-1,28,29,1,-1,2,1,29,-1,29,30,2,-1,3,2,30,-1,30,31,3,-1,4,3,31,-1,31,32,4,-1,5,4,32,-1,32,33,5,-1,6,5,33,-1,33,34,6,-1,0,6,34,-1,34,28,0,-1,35,36,21,-1,21,22,35,-1,37,35,22,-1,22,23,37,-1,38,37,23,-1,23,24,38,-1,39,38,24,-1,24,25,39,-1,40,39,25,-1,25,26,40,-1,41,40,26,-1,26,27,41,-1,36,41,27,-1,27,21,36,-1,36,35,42,-1,35,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,36,42,-1}).setTexCoordIndex(new int[] {3,2,0,-1,3,0,1,-1,1,6,5,-1,3,1,5,-1,3,5,4,-1,8,9,7,-1,7,10,8,-1,11,8,10,-1,10,12,11,-1,13,11,12,-1,12,14,13,-1,15,13,14,-1,14,16,15,-1,17,15,16,-1,16,18,17,-1,19,17,18,-1,18,20,19,-1,9,19,20,-1,20,7,9,-1,21,22,9,-1,9,8,21,-1,23,21,8,-1,8,11,23,-1,24,23,11,-1,11,13,24,-1,25,24,13,-1,13,15,25,-1,26,25,15,-1,15,17,26,-1,27,26,17,-1,17,19,27,-1,22,27,19,-1,19,9,22,-1,28,29,22,-1,22,21,28,-1,30,28,21,-1,21,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,29,34,27,-1,27,22,29,-1,10,7,1,-1,1,0,10,-1,12,10,0,-1,0,2,12,-1,14,12,2,-1,2,3,14,-1,16,14,3,-1,3,4,16,-1,18,16,4,-1,4,5,18,-1,20,18,5,-1,5,6,20,-1,7,20,6,-1,6,1,7,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,36,35,42,-1,35,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,36,42,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.6160,1.9890,0.0000,1.4520,1.9890,2.8360,-1.1630,1.9890,3.5360,-2.9750,1.9890,1.5740,-2.9750,1.9890,-1.5740,-1.1630,1.9890,-3.5360,1.4520,1.9890,-2.8360,2.6160,-1.3250,0.0000,1.4520,-1.3250,2.8360,-1.1630,-1.3250,3.5360,-2.9750,-1.3250,1.5740,-2.9750,-1.3250,-1.5740,-1.1630,-1.3250,-3.5360,1.4520,-1.3250,-2.8360,2.6160,-7.0640,0.0000,1.4520,-7.0640,2.8360,-1.1630,-7.0640,3.5360,-2.9750,-7.0640,1.5740,-2.9750,-7.0640,-1.5740,-1.1630,-7.0640,-3.5360,1.4520,-7.0640,-2.8360,2.9750,-11.9100,0.0000,1.6760,-11.9100,3.1650,-1.2430,-11.9100,3.9470,-2.9640,-11.9100,1.7560,-2.9640,-11.9100,-1.7560,-1.2430,-11.9100,-3.9470,1.6760,-11.9100,-3.1650,1.8120,3.7470,0.0000,0.9506,3.7470,2.0980,-0.9843,3.7470,2.6160,-2.5360,3.7470,1.1640,-2.5360,3.7470,-1.1640,-0.9843,3.7470,-2.6160,0.9506,3.7470,-2.0980,0.9661,-14.8100,2.0270,1.7980,-14.8100,0.0000,-0.9034,-14.8100,2.5280,-2.0060,-14.8100,1.1250,-2.0060,-14.8100,-1.1250,-0.9034,-14.8100,-2.5280,0.9661,-14.8100,-2.0270,-0.2983,-16.1600,0.0000})))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7912,0.3382,0.7912,0.3640,0.7912,0.2804,0.7912,0.2340,0.7912,0.2340,0.7912,0.2804,0.7912,0.3382,0.7762,0.3880,0.7480,0.3532,0.7480,0.3880,0.7762,0.3532,0.7480,0.2750,0.7762,0.2750,0.7480,0.2209,0.7762,0.2209,0.7480,0.2209,0.7762,0.2209,0.7480,0.2750,0.7762,0.2750,0.7480,0.3532,0.7762,0.3532,0.6856,0.3532,0.6856,0.3880,0.6856,0.2750,0.6856,0.2209,0.6856,0.2209,0.6856,0.2750,0.6856,0.3532,0.6315,0.3608,0.6315,0.3996,0.6315,0.2735,0.6315,0.2220,0.6315,0.2220,0.6315,0.2735,0.6315,0.3608,0.6248,0.3387,0.6248,0.3636,0.6248,0.2828,0.6248,0.2498,0.6248,0.2498,0.6248,0.2828,0.6248,0.3387,0.6133,0.3009})))))))
          .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(3.710000,15.480000,-0.144600)
            .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
              .addChild(new Transform().setTranslation(3.710000,15.480000,-0.144600)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_50_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_50_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_50_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_51_point()))))))
            .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(3.388000,3.168000,-0.537000)
              .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                .addChild(new Transform().setTranslation(3.388000,3.168000,-0.537000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1}).setTexCoordIndex(new int[] {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.8503,-0.0167,-1.4920,1.4430,-0.0167,0.3823,0.0000,-0.0167,-1.4920,1.2210,0.6369,0.3141,0.7115,0.6369,-1.2980,0.0000,0.6369,-1.2980,0.0000,0.6368,1.3050,-1.4430,-0.0167,0.3823,-1.2210,0.6369,0.3141,-0.7115,0.6369,-1.2980,-0.8503,-0.0167,-1.4920,0.0000,-0.0167,1.5530,1.4760,-0.2577,1.2680,-1.4760,-0.2577,1.2680,1.2260,-1.6760,-2.5530,1.2260,-3.4360,-1.4920,0.0000,-3.4360,-1.4920,0.9650,-0.5229,-1.8150,0.0000,-0.5229,-1.8150,-1.2260,-1.6760,-2.5530,0.0000,-1.6760,-2.5530,-0.9650,-0.5229,-1.8150,-1.2260,-3.4360,-1.4920,2.5480,-1.6760,0.3823,1.8190,-3.4360,0.3823,1.7800,-0.5229,0.3823,-2.5480,-1.6760,0.3823,-1.7800,-0.5229,0.3823,-1.8190,-3.4360,0.3823,0.0000,-3.4360,0.3823,1.6190,-3.3020,1.2100,2.2120,-1.7090,1.2100,-2.2120,-1.7090,1.2100,-1.6190,-3.3020,1.2100,0.0000,-3.3020,1.2100,1.3930,-0.8117,1.2480,-1.3930,-0.8117,1.2480,0.0000,-0.5730,1.5150})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.4330,0.0595,0.4411,0.0186,0.4244,0.1312,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4244,0.1312})))))))
              .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(3.388000,2.908000,0.744100)
                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(3.388000,2.908000,0.744100)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1}).setTexCoordIndex(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5480,-1.4160,-0.8988,1.8190,-3.1760,-0.8988,0.0000,0.2435,0.2718,1.7800,-0.2627,-0.8989,1.4760,0.0025,-0.0134,-2.5480,-1.4160,-0.8988,-1.7800,-0.2627,-0.8989,-1.8190,-3.1760,-0.8988,-1.4760,0.0025,-0.0134,0.0000,-3.1760,-0.8988,1.8630,-3.1760,0.8155,-1.8630,-3.1760,0.8155,0.0000,-3.1760,0.8155,2.0940,-1.4410,-1.6990,1.5240,-2.5610,-1.6990,0.0000,-2.5610,-1.6990,-1.5240,-2.5610,-1.6990,-2.0940,-1.4410,-1.6990,-1.5160,-0.4945,-1.6990,1.5160,-0.4945,-1.6990,1.5530,-0.5642,2.0690,1.9290,-1.9730,3.6760,1.9290,-3.1760,3.3500,0.0000,-1.9730,4.8470,0.0000,-0.4757,3.5050,1.5140,-0.2808,1.0280,2.3160,-1.6250,0.8155,-1.9290,-1.9730,3.6760,-1.5530,-0.5642,2.0690,0.0000,-3.1760,4.5210,-1.9290,-3.1760,3.3500,-1.5140,-0.2808,1.0280,-2.3160,-1.6250,0.8155,0.0000,-3.1760,3.3500,0.0000,-0.0239,1.4740})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4330,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.5320,0.0980,0.5645,0.0707,0.4885,0.1020,0.5026,0.0440,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.0440,0.4885,0.1020,0.5320,0.0980,0.5945,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432})))))))))))
        .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-3.551000,29.330000,-0.126700)
          .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
            .addChild(new Transform().setTranslation(-3.551000,29.330000,-0.126700)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {31,32,33,-1,33,34,28,-1,31,33,28,-1,31,28,29,-1,31,29,30,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,13,6,5,-1,5,12,13,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,20,13,12,-1,12,19,20,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,27,20,19,-1,19,26,27,-1,21,14,20,-1,20,27,21,-1,1,29,28,-1,28,0,1,-1,2,30,29,-1,29,1,2,-1,3,31,30,-1,30,2,3,-1,4,32,31,-1,31,3,4,-1,5,33,32,-1,32,4,5,-1,6,34,33,-1,33,5,6,-1,0,28,34,-1,34,6,0,-1,35,22,21,-1,21,36,35,-1,37,23,22,-1,22,35,37,-1,38,24,23,-1,23,37,38,-1,39,25,24,-1,24,38,39,-1,40,26,25,-1,25,39,40,-1,41,27,26,-1,26,40,41,-1,36,21,27,-1,27,41,36,-1,36,42,35,-1,35,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,36,-1}).setTexCoordIndex(new int[] {3,4,5,-1,5,6,1,-1,3,5,1,-1,3,1,0,-1,3,0,2,-1,8,10,7,-1,7,9,8,-1,11,12,10,-1,10,8,11,-1,13,14,12,-1,12,11,13,-1,15,16,14,-1,14,13,15,-1,17,18,16,-1,16,15,17,-1,19,20,18,-1,18,17,19,-1,9,7,20,-1,20,19,9,-1,21,8,9,-1,9,22,21,-1,23,11,8,-1,8,21,23,-1,24,13,11,-1,11,23,24,-1,25,15,13,-1,13,24,25,-1,26,17,15,-1,15,25,26,-1,27,19,17,-1,17,26,27,-1,22,9,19,-1,19,27,22,-1,28,21,22,-1,22,29,28,-1,30,23,21,-1,21,28,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,29,22,27,-1,27,34,29,-1,10,0,1,-1,1,7,10,-1,12,2,0,-1,0,10,12,-1,14,3,2,-1,2,12,14,-1,16,4,3,-1,3,14,16,-1,18,5,4,-1,4,16,18,-1,20,6,5,-1,5,18,20,-1,7,1,6,-1,6,20,7,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,36,42,35,-1,35,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,36,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.6160,1.9890,0.0000,-1.4520,1.9890,2.8360,1.1630,1.9890,3.5360,2.9750,1.9890,1.5740,2.9750,1.9890,-1.5740,1.1630,1.9890,-3.5360,-1.4520,1.9890,-2.8360,-2.6160,-1.3250,0.0000,-1.4520,-1.3250,2.8360,1.1630,-1.3250,3.5360,2.9750,-1.3250,1.5740,2.9750,-1.3250,-1.5740,1.1630,-1.3250,-3.5360,-1.4520,-1.3250,-2.8360,-2.6160,-7.0640,0.0000,-1.4520,-7.0640,2.8360,1.1630,-7.0640,3.5360,2.9750,-7.0640,1.5740,2.9750,-7.0640,-1.5740,1.1630,-7.0640,-3.5360,-1.4520,-7.0640,-2.8360,-2.9750,-11.9100,0.0000,-1.6760,-11.9100,3.1650,1.2430,-11.9100,3.9470,2.9640,-11.9100,1.7560,2.9640,-11.9100,-1.7560,1.2430,-11.9100,-3.9470,-1.6760,-11.9100,-3.1650,-1.8120,3.7470,0.0000,-0.9506,3.7470,2.0980,0.9843,3.7470,2.6160,2.5360,3.7470,1.1640,2.5360,3.7470,-1.1640,0.9843,3.7470,-2.6160,-0.9506,3.7470,-2.0980,-0.9661,-14.8100,2.0270,-1.7980,-14.8100,0.0000,0.9034,-14.8100,2.5280,2.0060,-14.8100,1.1250,2.0060,-14.8100,-1.1250,0.9034,-14.8100,-2.5280,-0.9661,-14.8100,-2.0270,0.2983,-16.1600,0.0000})))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7912,0.3382,0.7912,0.3640,0.7912,0.2804,0.7912,0.2340,0.7912,0.2340,0.7912,0.2804,0.7912,0.3382,0.7762,0.3880,0.7480,0.3532,0.7480,0.3880,0.7762,0.3532,0.7480,0.2750,0.7762,0.2750,0.7480,0.2209,0.7762,0.2209,0.7480,0.2209,0.7762,0.2209,0.7480,0.2750,0.7762,0.2750,0.7480,0.3532,0.7762,0.3532,0.6856,0.3532,0.6856,0.3880,0.6856,0.2750,0.6856,0.2209,0.6856,0.2209,0.6856,0.2750,0.6856,0.3532,0.6315,0.3608,0.6315,0.3996,0.6315,0.2735,0.6315,0.2220,0.6315,0.2220,0.6315,0.2735,0.6315,0.3608,0.6248,0.3387,0.6248,0.3636,0.6248,0.2828,0.6248,0.2498,0.6248,0.2498,0.6248,0.2828,0.6248,0.3387,0.6133,0.3009})))))))
          .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-3.710000,15.480000,-0.144600)
            .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
              .addChild(new Transform().setTranslation(-3.710000,15.480000,-0.144600)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_90_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_90_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_90_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_91_point()))))))
            .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-3.388000,3.168000,-0.537000)
              .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                .addChild(new Transform().setTranslation(-3.388000,3.168000,-0.537000)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1}).setTexCoordIndex(new int[] {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.8503,-0.0167,-1.4920,-1.4430,-0.0167,0.3823,0.0000,-0.0167,-1.4920,-1.2210,0.6369,0.3141,-0.7115,0.6369,-1.2980,0.0000,0.6369,-1.2980,0.0000,0.6368,1.3050,1.4430,-0.0167,0.3823,1.2210,0.6369,0.3141,0.7115,0.6369,-1.2980,0.8503,-0.0167,-1.4920,0.0000,-0.0167,1.5530,-1.4760,-0.2577,1.2680,1.4760,-0.2577,1.2680,-1.2260,-1.6760,-2.5530,-1.2260,-3.4360,-1.4920,0.0000,-3.4360,-1.4920,-0.9650,-0.5229,-1.8150,0.0000,-0.5229,-1.8150,1.2260,-1.6760,-2.5530,0.0000,-1.6760,-2.5530,0.9650,-0.5229,-1.8150,1.2260,-3.4360,-1.4920,-2.5480,-1.6760,0.3823,-1.8190,-3.4360,0.3823,-1.7800,-0.5229,0.3823,2.5480,-1.6760,0.3823,1.7800,-0.5229,0.3823,1.8190,-3.4360,0.3823,0.0000,-3.4360,0.3823,-1.6190,-3.3020,1.2100,-2.2120,-1.7090,1.2100,2.2120,-1.7090,1.2100,1.6190,-3.3020,1.2100,0.0000,-3.3020,1.2100,-1.3930,-0.8117,1.2480,1.3930,-0.8117,1.2480,0.0000,-0.5730,1.5150})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.4330,0.0595,0.4411,0.0186,0.4244,0.1312,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4244,0.1312})))))))
              .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-3.388000,2.908000,0.744100)
                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(-3.388000,2.908000,0.744100)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1}).setTexCoordIndex(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.5480,-1.4160,-0.8988,-1.8190,-3.1760,-0.8988,0.0000,0.2435,0.2718,-1.7800,-0.2627,-0.8989,-1.4760,0.0025,-0.0134,2.5480,-1.4160,-0.8988,1.7800,-0.2627,-0.8989,1.8190,-3.1760,-0.8988,1.4760,0.0025,-0.0134,0.0000,-3.1760,-0.8988,-1.8630,-3.1760,0.8155,1.8630,-3.1760,0.8155,0.0000,-3.1760,0.8155,-2.0940,-1.4410,-1.6990,-1.5240,-2.5610,-1.6990,0.0000,-2.5610,-1.6990,1.5240,-2.5610,-1.6990,2.0940,-1.4410,-1.6990,1.5160,-0.4945,-1.6990,-1.5160,-0.4945,-1.6990,-1.5530,-0.5642,2.0690,-1.9290,-1.9730,3.6760,-1.9290,-3.1760,3.3500,0.0000,-1.9730,4.8470,0.0000,-0.4757,3.5050,-1.5140,-0.2808,1.0280,-2.3160,-1.6250,0.8155,1.9290,-1.9730,3.6760,1.5530,-0.5642,2.0690,0.0000,-3.1760,4.5210,1.9290,-3.1760,3.3500,1.5140,-0.2808,1.0280,2.3160,-1.6250,0.8155,0.0000,-3.1760,3.3500,0.0000,-0.0239,1.4740})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4330,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.5320,0.0980,0.5645,0.0707,0.4885,0.1020,0.5026,0.0440,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.0440,0.4885,0.1020,0.5320,0.0980,0.5945,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432})))))))))))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,26.580000,-0.560100)
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,26.580000,-0.560100)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                  .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_9_121_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_121_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_121_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8893,0.5320,0.8772,0.5320,0.8772,0.4766,0.8772,0.4361,0.8772,0.4213,0.8772,0.4361,0.8772,0.4766,0.8772,0.5320,0.8772,0.4766,0.8772,0.4361,0.8772,0.4212,0.8772,0.4361,0.8772,0.4766,0.8439,0.5320,0.8439,0.4604,0.8439,0.4080,0.8439,0.3888,0.8439,0.4080,0.8439,0.4604,0.8439,0.5320,0.8439,0.4604,0.8439,0.4079,0.8439,0.3887,0.8439,0.4079,0.8439,0.4604,0.7985,0.5320,0.7985,0.4493,0.7985,0.3888,0.7985,0.3666,0.7985,0.3888,0.7985,0.4493,0.7985,0.5320,0.7985,0.4493,0.7985,0.3887,0.7985,0.3666,0.7985,0.3887,0.7985,0.4493,0.7530,0.5320,0.7530,0.4604,0.7530,0.4080,0.7530,0.3888,0.7530,0.4080,0.7530,0.4604,0.7530,0.5320,0.7530,0.4604,0.7530,0.4079,0.7530,0.3887,0.7530,0.4079,0.7530,0.4604,0.7197,0.5320,0.7197,0.4907,0.7197,0.4604,0.7197,0.4493,0.7197,0.4604,0.7197,0.4907,0.7197,0.5320,0.7197,0.4906,0.7197,0.4604,0.7197,0.4493,0.7197,0.4604,0.7197,0.4906,0.7076,0.5320})))))))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(5.502000,45.779999,-0.355900)
            .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
              .addChild(new Transform().setTranslation(5.502000,45.779999,-0.355900)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {2,1,0,-1,0,4,3,-1,2,0,3,-1,6,5,0,-1,0,1,6,-1,7,6,1,-1,1,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,5,9,4,-1,4,0,5,-1,11,10,5,-1,5,6,11,-1,12,11,6,-1,6,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,10,14,9,-1,9,5,10,-1,16,15,10,-1,10,11,16,-1,17,16,11,-1,11,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,15,19,14,-1,14,10,15,-1,36,37,38,-1,38,39,35,-1,36,38,35,-1,15,16,21,-1,21,20,15,-1,16,17,22,-1,22,21,16,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,15,20,-1,20,24,19,-1,20,21,26,-1,26,25,20,-1,21,22,27,-1,27,26,21,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,20,25,-1,25,29,24,-1,25,26,31,-1,31,30,25,-1,26,27,32,-1,32,31,26,-1,27,28,33,-1,33,32,27,-1,28,29,34,-1,34,33,28,-1,29,25,30,-1,30,34,29,-1,30,31,36,-1,36,35,30,-1,31,32,37,-1,37,36,31,-1,32,33,38,-1,38,37,32,-1,33,34,39,-1,39,38,33,-1,34,30,35,-1,35,39,34,-1}).setTexCoordIndex(new int[] {2,0,1,-1,1,61,3,-1,2,1,3,-1,5,6,1,-1,1,0,5,-1,7,5,0,-1,0,2,7,-1,8,7,2,-1,2,3,8,-1,9,26,25,-1,25,4,9,-1,6,9,4,-1,4,1,6,-1,10,11,6,-1,6,5,10,-1,12,10,5,-1,5,7,12,-1,13,12,7,-1,7,8,13,-1,14,28,27,-1,27,9,14,-1,11,14,9,-1,9,6,11,-1,15,16,11,-1,11,10,15,-1,17,15,10,-1,10,12,17,-1,18,17,12,-1,12,13,18,-1,19,30,29,-1,29,14,19,-1,16,19,14,-1,14,11,16,-1,54,35,36,-1,36,37,53,-1,54,36,53,-1,16,15,20,-1,20,21,16,-1,15,17,22,-1,22,20,15,-1,17,18,23,-1,23,22,17,-1,31,19,24,-1,24,32,31,-1,19,16,21,-1,21,24,19,-1,38,39,40,-1,40,41,38,-1,55,42,43,-1,43,56,55,-1,42,44,45,-1,45,43,42,-1,44,46,47,-1,47,45,44,-1,46,38,41,-1,41,47,46,-1,41,40,48,-1,48,49,41,-1,57,43,50,-1,50,58,57,-1,43,45,51,-1,51,50,43,-1,45,47,52,-1,52,51,45,-1,47,41,49,-1,49,52,47,-1,49,48,34,-1,34,33,49,-1,59,50,35,-1,35,60,59,-1,50,51,36,-1,36,35,50,-1,51,52,37,-1,37,36,51,-1,52,49,33,-1,33,37,52,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.4410,1.4870,-1.4840,2.4630,1.4950,0.0297,1.3380,1.4860,1.4690,-0.3780,1.4720,0.8443,-0.3143,1.4730,-0.9810,1.6530,0.3707,-2.0410,3.0630,0.3821,0.0504,1.5100,0.3696,2.0380,-0.8597,0.3505,1.1750,-0.7717,0.3512,-1.3450,1.6710,-1.8500,-2.0410,3.0810,-1.8390,0.0504,1.5280,-1.8510,2.0380,-0.8419,-1.8700,1.1750,-0.7538,-1.8690,-1.3450,1.7210,-2.7990,-2.1580,3.2130,-2.7870,0.0547,1.5700,-2.8000,2.1580,-0.9375,-2.8210,1.2450,-0.8444,-2.8200,-1.4220,1.2390,-1.1710,-1.7130,2.3170,-1.1630,-0.4014,1.7590,-1.1670,1.4390,0.3363,-1.1790,1.2650,0.0150,-1.1810,-0.6834,1.3420,-6.3020,-1.3860,2.4620,-6.2930,-0.3340,1.8820,-6.2970,1.1420,0.4045,-6.3090,1.0020,0.0707,-6.3120,-0.5601,1.4060,-9.8800,-1.3350,2.4840,-9.8710,-0.3225,1.9260,-9.8750,1.0990,0.5035,-9.8870,0.9641,0.1822,-9.8890,-0.5403,1.3670,-10.3700,-0.7939,1.9980,-10.3600,-0.2002,1.6710,-10.3700,0.6327,0.8373,-10.3700,0.5538,0.6490,-10.3700,-0.3278})))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3097,0.4881,0.3096,0.5056,0.3098,0.4729,0.3100,0.4583,0.3094,0.5240,0.3306,0.4888,0.3305,0.5058,0.3308,0.4733,0.3309,0.4582,0.3303,0.5237,0.3722,0.4892,0.3721,0.5062,0.3724,0.4737,0.3725,0.4586,0.3719,0.5240,0.3900,0.4894,0.3898,0.5063,0.3901,0.4739,0.3903,0.4587,0.3897,0.5241,0.3594,0.4923,0.3593,0.5086,0.3596,0.4762,0.3597,0.4649,0.3591,0.5256,0.3093,0.5386,0.3302,0.5386,0.3302,0.5386,0.3718,0.5389,0.3718,0.5389,0.3896,0.5391,0.3896,0.5391,0.3590,0.5453,0.2607,0.7074,0.2761,0.7074,0.2071,0.7074,0.2209,0.7074,0.2411,0.7074,0.2580,0.6245,0.2744,0.6245,0.2753,0.6708,0.2589,0.6708,0.2097,0.6245,0.2079,0.6708,0.2216,0.6245,0.2226,0.6708,0.2423,0.6245,0.2411,0.6708,0.2754,0.7030,0.2594,0.7030,0.2076,0.7030,0.2222,0.7030,0.2413,0.7030,0.1777,0.7074,0.1931,0.7074,0.1914,0.6245,0.1923,0.6708,0.1923,0.6708,0.1924,0.7030,0.1924,0.7030,0.1931,0.7074,0.3100,0.4536})))))))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(6.735000,35.669998,-0.448700)
              .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                .addChild(new Transform().setTranslation(6.735000,35.669998,-0.448700)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,2,1,-1,3,1,0,-1,3,0,4,-1,6,5,0,-1,0,1,6,-1,7,6,1,-1,1,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,5,9,4,-1,4,0,5,-1,11,10,5,-1,5,6,11,-1,12,11,6,-1,6,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,10,14,9,-1,9,5,10,-1,16,15,10,-1,10,11,16,-1,17,16,11,-1,11,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,15,19,14,-1,14,10,15,-1,21,22,23,-1,23,24,20,-1,21,23,20,-1,15,16,21,-1,21,20,15,-1,16,17,22,-1,22,21,16,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,15,20,-1,20,24,19,-1}).setTexCoordIndex(new int[] {3,2,25,-1,3,25,26,-1,3,26,4,-1,5,6,1,-1,1,0,5,-1,7,28,27,-1,27,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,6,9,4,-1,4,1,6,-1,10,11,6,-1,6,5,10,-1,12,30,29,-1,29,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,11,14,9,-1,9,6,11,-1,15,16,11,-1,11,10,15,-1,17,32,31,-1,31,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,16,19,14,-1,14,11,16,-1,34,22,23,-1,23,24,33,-1,34,23,33,-1,16,15,21,-1,21,20,16,-1,35,17,22,-1,22,36,35,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,16,20,-1,20,24,19,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1330,0.4969,-1.0180,0.9633,0.5042,-0.2287,0.4907,0.5001,0.9186,-0.6318,0.4904,0.8386,-0.8529,0.4884,-0.3582,0.0877,-0.5196,-1.4360,1.2610,-0.5094,-0.3773,0.5932,-0.5150,1.4360,-0.9931,-0.5288,1.3090,-1.3060,-0.5317,-0.5821,0.1173,-2.8660,-1.4200,1.3700,-2.8550,-0.3733,0.6813,-2.3480,1.4220,-1.0120,-2.3620,1.2970,-1.3700,-2.8790,-0.5760,0.1304,-7.4720,-1.2700,1.0440,-7.4640,-0.1131,0.5240,-7.4680,1.3340,-0.7111,-7.4790,1.2170,-0.9544,-7.4810,-0.3029,0.0956,-8.0230,-0.7824,0.7196,-8.0180,0.0074,0.3644,-8.0210,0.9211,-0.4791,-8.0280,0.8410,-0.6452,-8.0300,-0.1223})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2667,0.6308,0.2522,0.6308,0.2052,0.6308,0.2200,0.6308,0.2355,0.6308,0.2660,0.6397,0.2508,0.6397,0.2066,0.6397,0.2205,0.6397,0.2357,0.6397,0.2662,0.6601,0.2510,0.6601,0.2060,0.6557,0.2208,0.6557,0.2354,0.6601,0.2679,0.7003,0.2509,0.7003,0.2072,0.7003,0.2192,0.7003,0.2343,0.7003,0.2512,0.7051,0.2692,0.7051,0.2072,0.7051,0.2190,0.7051,0.2329,0.7051,0.1923,0.6308,0.1778,0.6308,0.1923,0.6308,0.1916,0.6397,0.1916,0.6397,0.1918,0.6601,0.1918,0.6601,0.1935,0.7003,0.1768,0.7051,0.1948,0.7051,0.1935,0.7003,0.1948,0.7051})))))))
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(6.432000,27.830000,-0.158900)
                .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                  .addChild(new Transform().setTranslation(6.432000,27.830000,-0.158900)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {0,2,4,-1,4,5,0,-1,3,1,6,-1,6,7,3,-1,5,6,1,-1,1,0,5,-1,5,4,8,-1,8,9,5,-1,7,6,10,-1,10,11,7,-1,6,5,9,-1,9,10,6,-1,9,8,12,-1,12,13,9,-1,11,10,14,-1,14,15,11,-1,10,9,13,-1,13,14,10,-1,4,2,16,-1,7,16,2,-1,2,3,7,-1,18,20,17,-1,17,19,18,-1,7,11,21,-1,21,16,7,-1,8,21,12,-1,11,15,12,-1,12,21,11,-1,15,14,13,-1,13,12,15,-1,19,17,8,-1,8,4,19,-1,18,19,4,-1,4,16,18,-1,20,18,16,-1,16,21,20,-1,17,20,21,-1,21,8,17,-1,22,27,23,-1,26,25,24,-1}).setTexCoordIndex(new int[] {5,7,4,-1,4,6,5,-1,1,0,2,-1,2,3,1,-1,15,17,14,-1,14,16,15,-1,6,4,8,-1,8,9,6,-1,39,41,38,-1,38,40,39,-1,36,37,18,-1,18,19,36,-1,9,8,10,-1,10,11,9,-1,40,38,42,-1,42,43,40,-1,19,18,20,-1,20,21,19,-1,22,24,23,-1,25,23,24,-1,24,26,25,-1,28,30,27,-1,27,29,28,-1,25,32,31,-1,31,23,25,-1,33,31,34,-1,32,35,34,-1,34,31,32,-1,35,21,20,-1,20,34,35,-1,12,13,8,-1,8,4,12,-1,28,29,22,-1,22,23,28,-1,30,28,23,-1,23,31,30,-1,27,30,31,-1,31,33,27,-1,14,24,26,-1,14,16,24,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0760,0.3804,0.7047,1.0420,0.3950,-1.1920,-0.6516,0.2878,0.7874,-0.6592,0.2892,-1.1330,-0.8366,-0.2556,1.3060,1.4370,-0.0511,1.2260,1.3850,-0.0228,-1.7570,-0.9384,-0.2412,-1.7530,-0.7136,-1.9390,2.1280,1.7330,-1.7330,1.8380,1.6810,-1.7040,-2.1280,-1.0390,-2.0280,-1.9860,-0.4691,-3.2050,1.4970,0.8189,-3.3980,1.5470,0.7668,-3.3690,-1.8300,-0.6579,-3.2180,-1.7090,-0.9322,-0.2429,-0.1654,-1.4370,-1.9880,1.7150,-1.7330,-0.5679,0.0513,-1.7000,-0.6266,1.6650,-1.4430,-1.9860,0.1217,-0.9271,-2.0220,-0.1780,1.0420,0.3950,-1.1920,-0.6592,0.2892,-1.1330,-0.6516,0.2878,0.7874,1.0760,0.3804,0.7047,1.0420,0.3950,-1.1920,-0.6516,0.2878,0.7874})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.1170,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.1480,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.0110,0.3241,0.0033,0.1730,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.0320,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.1720,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.0640,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.1840,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.1400,0.1857}))))))))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-5.502000,45.779999,-0.355900)
            .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
              .addChild(new Transform().setTranslation(-5.502000,45.779999,-0.355900)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,4,0,-1,2,3,0,-1,2,0,1,-1,6,1,0,-1,0,5,6,-1,7,2,1,-1,1,6,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,5,0,4,-1,4,9,5,-1,11,6,5,-1,5,10,11,-1,12,7,6,-1,6,11,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,10,5,9,-1,9,14,10,-1,16,11,10,-1,10,15,16,-1,17,12,11,-1,11,16,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,15,10,14,-1,14,19,15,-1,35,39,38,-1,36,35,38,-1,36,38,37,-1,15,20,21,-1,21,16,15,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,15,19,-1,20,25,26,-1,26,21,20,-1,21,26,27,-1,27,22,21,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,25,-1,25,20,24,-1,25,30,31,-1,31,26,25,-1,26,31,32,-1,32,27,26,-1,27,32,33,-1,33,28,27,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,25,29,-1,30,35,36,-1,36,31,30,-1,31,36,37,-1,37,32,31,-1,32,37,38,-1,38,33,32,-1,33,38,39,-1,39,34,33,-1,34,39,35,-1,35,30,34,-1}).setTexCoordIndex(new int[] {3,61,1,-1,2,3,1,-1,2,1,0,-1,5,0,1,-1,1,6,5,-1,7,2,0,-1,0,5,7,-1,8,3,2,-1,2,7,8,-1,9,4,25,-1,25,26,9,-1,6,1,4,-1,4,9,6,-1,10,5,6,-1,6,11,10,-1,12,7,5,-1,5,10,12,-1,13,8,7,-1,7,12,13,-1,14,9,27,-1,27,28,14,-1,11,6,9,-1,9,14,11,-1,15,10,11,-1,11,16,15,-1,17,12,10,-1,10,15,17,-1,18,13,12,-1,12,17,18,-1,19,14,29,-1,29,30,19,-1,16,11,14,-1,14,19,16,-1,53,37,36,-1,54,53,36,-1,54,36,35,-1,16,21,20,-1,20,15,16,-1,15,20,22,-1,22,17,15,-1,17,22,23,-1,23,18,17,-1,31,32,24,-1,24,19,31,-1,19,24,21,-1,21,16,19,-1,38,41,40,-1,40,39,38,-1,55,56,43,-1,43,42,55,-1,42,43,45,-1,45,44,42,-1,44,45,47,-1,47,46,44,-1,46,47,41,-1,41,38,46,-1,41,49,48,-1,48,40,41,-1,57,58,50,-1,50,43,57,-1,43,50,51,-1,51,45,43,-1,45,51,52,-1,52,47,45,-1,47,52,49,-1,49,41,47,-1,49,33,34,-1,34,48,49,-1,59,60,35,-1,35,50,59,-1,50,35,36,-1,36,51,50,-1,51,36,37,-1,37,52,51,-1,52,37,33,-1,33,49,52,-1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.4410,1.4870,-1.4840,-2.4630,1.4950,0.0297,-1.3380,1.4860,1.4690,0.3780,1.4720,0.8443,0.3143,1.4730,-0.9810,-1.6530,0.3707,-2.0410,-3.0630,0.3821,0.0504,-1.5100,0.3696,2.0380,0.8597,0.3505,1.1750,0.7717,0.3512,-1.3450,-1.6710,-1.8500,-2.0410,-3.0810,-1.8390,0.0504,-1.5280,-1.8510,2.0380,0.8419,-1.8700,1.1750,0.7538,-1.8690,-1.3450,-1.7210,-2.7990,-2.1580,-3.2130,-2.7870,0.0547,-1.5700,-2.8000,2.1580,0.9375,-2.8210,1.2450,0.8444,-2.8200,-1.4220,-1.2390,-1.1710,-1.7130,-2.3170,-1.1630,-0.4014,-1.7590,-1.1670,1.4390,-0.3363,-1.1790,1.2650,-0.0150,-1.1810,-0.6834,-1.3420,-6.3020,-1.3860,-2.4620,-6.2930,-0.3340,-1.8820,-6.2970,1.1420,-0.4045,-6.3090,1.0020,-0.0707,-6.3120,-0.5601,-1.4060,-9.8800,-1.3350,-2.4840,-9.8710,-0.3225,-1.9260,-9.8750,1.0990,-0.5035,-9.8870,0.9641,-0.1822,-9.8890,-0.5403,-1.3670,-10.3700,-0.7939,-1.9980,-10.3600,-0.2002,-1.6710,-10.3700,0.6327,-0.8374,-10.3700,0.5538,-0.6490,-10.3700,-0.3278})))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3097,0.4881,0.3096,0.5056,0.3098,0.4729,0.3100,0.4583,0.3094,0.5240,0.3306,0.4888,0.3305,0.5058,0.3308,0.4733,0.3309,0.4582,0.3303,0.5237,0.3722,0.4892,0.3721,0.5062,0.3724,0.4737,0.3725,0.4586,0.3719,0.5240,0.3900,0.4894,0.3898,0.5063,0.3901,0.4739,0.3903,0.4587,0.3897,0.5241,0.3594,0.4923,0.3593,0.5086,0.3596,0.4762,0.3597,0.4649,0.3591,0.5256,0.3093,0.5386,0.3302,0.5386,0.3302,0.5386,0.3718,0.5389,0.3718,0.5389,0.3896,0.5391,0.3896,0.5391,0.3590,0.5453,0.2607,0.7074,0.2761,0.7074,0.2071,0.7074,0.2209,0.7074,0.2411,0.7074,0.2580,0.6245,0.2744,0.6245,0.2753,0.6708,0.2589,0.6708,0.2097,0.6245,0.2079,0.6708,0.2216,0.6245,0.2226,0.6708,0.2423,0.6245,0.2411,0.6708,0.2754,0.7030,0.2594,0.7030,0.2076,0.7030,0.2222,0.7030,0.2413,0.7030,0.1777,0.7074,0.1931,0.7074,0.1914,0.6245,0.1923,0.6708,0.1923,0.6708,0.1924,0.7030,0.1924,0.7030,0.1931,0.7074,0.3100,0.4536})))))))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-6.735000,35.669998,-0.448700)
              .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                .addChild(new Transform().setTranslation(-6.735000,35.669998,-0.448700)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {3,4,0,-1,3,0,1,-1,3,1,2,-1,6,1,0,-1,0,5,6,-1,7,2,1,-1,1,6,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,5,0,4,-1,4,9,5,-1,11,6,5,-1,5,10,11,-1,12,7,6,-1,6,11,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,10,5,9,-1,9,14,10,-1,16,11,10,-1,10,15,16,-1,17,12,11,-1,11,16,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,15,10,14,-1,14,19,15,-1,20,24,23,-1,21,20,23,-1,21,23,22,-1,15,20,21,-1,21,16,15,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,15,19,-1}).setTexCoordIndex(new int[] {3,4,26,-1,3,26,25,-1,3,25,2,-1,5,0,1,-1,1,6,5,-1,7,2,27,-1,27,28,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,6,1,4,-1,4,9,6,-1,10,5,6,-1,6,11,10,-1,12,7,29,-1,29,30,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,11,6,9,-1,9,14,11,-1,15,10,11,-1,11,16,15,-1,17,12,31,-1,31,32,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,16,11,14,-1,14,19,16,-1,33,24,23,-1,34,33,23,-1,34,23,22,-1,16,20,21,-1,21,15,16,-1,35,36,22,-1,22,17,35,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,16,19,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1330,0.4969,-1.0180,-0.9633,0.5042,-0.2287,-0.4907,0.5001,0.9186,0.6318,0.4904,0.8386,0.8529,0.4884,-0.3582,-0.0877,-0.5196,-1.4360,-1.2610,-0.5094,-0.3773,-0.5932,-0.5150,1.4360,0.9931,-0.5288,1.3090,1.3060,-0.5317,-0.5821,-0.1173,-2.8660,-1.4200,-1.3700,-2.8550,-0.3733,-0.6813,-2.3480,1.4220,1.0120,-2.3620,1.2970,1.3700,-2.8790,-0.5760,-0.1304,-7.4720,-1.2700,-1.0440,-7.4640,-0.1131,-0.5241,-7.4680,1.3340,0.7111,-7.4790,1.2170,0.9544,-7.4810,-0.3029,-0.0956,-8.0230,-0.7824,-0.7196,-8.0180,0.0074,-0.3644,-8.0210,0.9211,0.4791,-8.0280,0.8410,0.6452,-8.0300,-0.1223})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2667,0.6308,0.2522,0.6308,0.2052,0.6308,0.2200,0.6308,0.2355,0.6308,0.2660,0.6397,0.2508,0.6397,0.2066,0.6397,0.2205,0.6397,0.2357,0.6397,0.2662,0.6601,0.2510,0.6601,0.2060,0.6557,0.2208,0.6557,0.2354,0.6601,0.2679,0.7003,0.2509,0.7003,0.2072,0.7003,0.2192,0.7003,0.2343,0.7003,0.2512,0.7051,0.2692,0.7051,0.2072,0.7051,0.2190,0.7051,0.2329,0.7051,0.1923,0.6308,0.1778,0.6308,0.1923,0.6308,0.1916,0.6397,0.1916,0.6397,0.1918,0.6601,0.1918,0.6601,0.1935,0.7003,0.1768,0.7051,0.1948,0.7051,0.1935,0.7003,0.1948,0.7051})))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-6.432000,27.830000,-0.158900)
                .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                  .addChild(new Transform().setTranslation(-6.432000,27.830000,-0.158900)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                        .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(new int[] {0,5,4,-1,4,2,0,-1,3,7,6,-1,6,1,3,-1,5,0,1,-1,1,6,5,-1,5,9,8,-1,8,4,5,-1,7,11,10,-1,10,6,7,-1,6,10,9,-1,9,5,6,-1,9,13,12,-1,12,8,9,-1,11,15,14,-1,14,10,11,-1,10,14,13,-1,13,9,10,-1,4,16,2,-1,7,3,2,-1,2,16,7,-1,18,19,17,-1,17,20,18,-1,7,16,21,-1,21,11,7,-1,8,12,21,-1,11,21,12,-1,12,15,11,-1,15,12,13,-1,13,14,15,-1,19,4,8,-1,8,17,19,-1,18,16,4,-1,4,19,18,-1,20,21,16,-1,16,18,20,-1,17,8,21,-1,21,20,17,-1,22,23,27,-1,26,24,25,-1}).setTexCoordIndex(new int[] {5,6,4,-1,4,7,5,-1,1,3,2,-1,2,0,1,-1,15,16,14,-1,14,17,15,-1,6,9,8,-1,8,4,6,-1,39,40,38,-1,38,41,39,-1,36,19,18,-1,18,37,36,-1,9,11,10,-1,10,8,9,-1,40,43,42,-1,42,38,40,-1,19,21,20,-1,20,18,19,-1,22,23,24,-1,25,26,24,-1,24,23,25,-1,28,29,27,-1,27,30,28,-1,25,23,31,-1,31,32,25,-1,33,34,31,-1,32,31,34,-1,34,35,32,-1,35,34,20,-1,20,21,35,-1,12,4,8,-1,8,13,12,-1,28,23,22,-1,22,29,28,-1,30,31,23,-1,23,28,30,-1,27,33,31,-1,31,30,27,-1,14,26,24,-1,14,24,16,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.0760,0.3804,0.7047,-1.0420,0.3950,-1.1920,0.6516,0.2878,0.7874,0.6592,0.2892,-1.1330,0.8366,-0.2556,1.3060,-1.4370,-0.0511,1.2260,-1.3850,-0.0228,-1.7570,0.9384,-0.2412,-1.7530,0.7136,-1.9390,2.1280,-1.7330,-1.7330,1.8380,-1.6810,-1.7040,-2.1280,1.0390,-2.0280,-1.9860,0.4691,-3.2050,1.4970,-0.8189,-3.3980,1.5470,-0.7668,-3.3690,-1.8300,0.6579,-3.2180,-1.7090,0.9322,-0.2429,-0.1654,1.4370,-1.9880,1.7150,1.7330,-0.5679,0.0513,1.7000,-0.6266,1.6650,1.4430,-1.9860,0.1217,0.9271,-2.0220,-0.1780,-1.0420,0.3950,-1.1920,0.6592,0.2892,-1.1330,0.6516,0.2878,0.7874,-1.0760,0.3804,0.7047,-1.0420,0.3950,-1.1920,0.6516,0.2878,0.7874})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.1170,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.1480,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.0110,0.3241,0.0033,0.1730,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.0320,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.1720,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.0640,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.1840,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.1400,0.1857}))))))))))
          .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0,35.770000,-0.502800)
            .addChild(new HAnimSegment("hanim_l5").setName("l5")
              .addChild(new Transform().setTranslation(0.0,35.770000,-0.502800)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                    .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setCoordIndex(getIndexedFaceSet_10_190_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_190_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_190_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_191_point()))))))
            .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,49.980000,-0.522800)
              .addChild(new HAnimSegment("hanim_skull").setName("skull")
                .addChild(new Transform().setTranslation(0.0,49.980000,-0.522800)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588000,0.588000,0.588000))
                      .setTexture(new ImageTexture().setUSE("HyunTextureAtlas")))
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
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_32_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_coordIndex_1()
		{
			int[] value = {45,44,43,-1,45,43,42,-1,42,48,47,-1,45,42,47,-1,45,47,46,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,13,12,5,-1,5,6,13,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,20,19,12,-1,12,13,20,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,27,26,19,-1,19,20,27,-1,21,27,20,-1,20,14,21,-1,58,59,60,-1,61,62,56,-1,60,61,56,-1,58,60,56,-1,58,56,57,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,21,28,-1,28,34,27,-1,28,29,36,-1,36,35,28,-1,29,30,37,-1,37,36,29,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,28,35,-1,35,41,34,-1,1,0,42,-1,42,43,1,-1,2,1,43,-1,43,44,2,-1,3,2,44,-1,44,45,3,-1,4,3,45,-1,45,46,4,-1,5,4,46,-1,46,47,5,-1,6,5,47,-1,47,48,6,-1,0,6,48,-1,48,42,0,-1,35,36,50,-1,50,49,35,-1,36,37,51,-1,51,50,36,-1,37,38,52,-1,52,51,37,-1,38,39,53,-1,53,52,38,-1,39,40,54,-1,54,53,39,-1,40,41,55,-1,55,54,40,-1,41,35,49,-1,49,55,41,-1,49,50,57,-1,57,56,49,-1,50,51,58,-1,58,57,50,-1,51,52,59,-1,59,58,51,-1,52,53,60,-1,60,59,52,-1,53,54,61,-1,61,60,53,-1,54,55,62,-1,62,61,54,-1,55,49,56,-1,56,62,55,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_50_texCoordIndex_1()
		{
			int[] value = {56,55,53,-1,56,53,52,-1,52,59,58,-1,56,52,58,-1,56,58,57,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,29,12,5,-1,5,30,29,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,31,19,12,-1,12,32,31,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,33,26,19,-1,19,34,33,-1,21,27,20,-1,20,14,21,-1,71,72,73,-1,74,70,68,-1,73,74,68,-1,71,73,68,-1,71,68,69,-1,21,22,37,-1,37,36,21,-1,22,23,39,-1,39,37,22,-1,23,24,40,-1,40,39,23,-1,24,25,41,-1,41,40,24,-1,25,26,42,-1,42,41,25,-1,26,35,43,-1,43,42,26,-1,27,21,36,-1,36,38,27,-1,36,37,45,-1,45,44,36,-1,37,39,47,-1,47,45,37,-1,39,40,48,-1,48,47,39,-1,40,41,49,-1,49,48,40,-1,41,42,50,-1,50,49,41,-1,42,43,51,-1,51,50,42,-1,38,36,44,-1,44,46,38,-1,1,0,52,-1,52,53,1,-1,2,1,53,-1,53,55,2,-1,3,2,55,-1,55,56,3,-1,4,3,56,-1,56,57,4,-1,5,4,57,-1,57,58,5,-1,28,5,58,-1,58,59,28,-1,0,6,54,-1,54,52,0,-1,44,45,61,-1,61,60,44,-1,45,47,63,-1,63,61,45,-1,47,48,64,-1,64,63,47,-1,48,49,65,-1,65,64,48,-1,49,50,66,-1,66,65,49,-1,50,51,67,-1,67,66,50,-1,46,44,60,-1,60,62,46,-1,60,61,69,-1,69,68,60,-1,61,63,71,-1,71,69,61,-1,63,64,72,-1,72,71,63,-1,64,65,73,-1,73,72,64,-1,65,66,74,-1,74,73,65,-1,66,67,75,-1,75,74,66,-1,62,60,68,-1,68,70,62,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_coordIndex_1()
		{
			int[] value = {45,46,47,-1,47,48,42,-1,45,47,42,-1,45,42,43,-1,45,43,44,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,13,6,5,-1,5,12,13,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,20,13,12,-1,12,19,20,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,27,20,19,-1,19,26,27,-1,21,14,20,-1,20,27,21,-1,58,57,56,-1,56,62,61,-1,56,61,60,-1,58,56,60,-1,58,60,59,-1,21,28,29,-1,29,22,21,-1,22,29,30,-1,30,23,22,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,28,-1,28,21,27,-1,28,35,36,-1,36,29,28,-1,29,36,37,-1,37,30,29,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,35,-1,35,28,34,-1,1,43,42,-1,42,0,1,-1,2,44,43,-1,43,1,2,-1,3,45,44,-1,44,2,3,-1,4,46,45,-1,45,3,4,-1,5,47,46,-1,46,4,5,-1,6,48,47,-1,47,5,6,-1,0,42,48,-1,48,6,0,-1,35,49,50,-1,50,36,35,-1,36,50,51,-1,51,37,36,-1,37,51,52,-1,52,38,37,-1,38,52,53,-1,53,39,38,-1,39,53,54,-1,54,40,39,-1,40,54,55,-1,55,41,40,-1,41,55,49,-1,49,35,41,-1,49,56,57,-1,57,50,49,-1,50,57,58,-1,58,51,50,-1,51,58,59,-1,59,52,51,-1,52,59,60,-1,60,53,52,-1,53,60,61,-1,61,54,53,-1,54,61,62,-1,62,55,54,-1,55,62,56,-1,56,49,55,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_90_texCoordIndex_1()
		{
			int[] value = {56,57,58,-1,58,59,52,-1,56,58,52,-1,56,52,53,-1,56,53,55,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,29,30,5,-1,5,12,29,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,31,32,12,-1,12,19,31,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,33,34,19,-1,19,26,33,-1,21,14,20,-1,20,27,21,-1,71,69,68,-1,68,70,74,-1,68,74,73,-1,71,68,73,-1,71,73,72,-1,21,36,37,-1,37,22,21,-1,22,37,39,-1,39,23,22,-1,23,39,40,-1,40,24,23,-1,24,40,41,-1,41,25,24,-1,25,41,42,-1,42,26,25,-1,26,42,43,-1,43,35,26,-1,27,38,36,-1,36,21,27,-1,36,44,45,-1,45,37,36,-1,37,45,47,-1,47,39,37,-1,39,47,48,-1,48,40,39,-1,40,48,49,-1,49,41,40,-1,41,49,50,-1,50,42,41,-1,42,50,51,-1,51,43,42,-1,38,46,44,-1,44,36,38,-1,1,53,52,-1,52,0,1,-1,2,55,53,-1,53,1,2,-1,3,56,55,-1,55,2,3,-1,4,57,56,-1,56,3,4,-1,5,58,57,-1,57,4,5,-1,28,59,58,-1,58,5,28,-1,0,52,54,-1,54,6,0,-1,44,60,61,-1,61,45,44,-1,45,61,63,-1,63,47,45,-1,47,63,64,-1,64,48,47,-1,48,64,65,-1,65,49,48,-1,49,65,66,-1,66,50,49,-1,50,66,67,-1,67,51,50,-1,46,62,60,-1,60,44,46,-1,60,68,69,-1,69,61,60,-1,61,69,71,-1,71,63,61,-1,63,71,72,-1,72,64,63,-1,64,72,73,-1,73,65,64,-1,65,73,74,-1,74,66,65,-1,66,74,75,-1,75,67,66,-1,62,70,68,-1,68,60,62,-1};
			return value;
		}




		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_121_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_coordIndex_1()
		{
			int[] value = {7,5,3,-1,3,4,7,-1,4,8,7,-1,9,10,1,-1,1,0,9,-1,11,9,0,-1,0,2,11,-1,67,16,15,-1,16,17,14,-1,14,15,16,-1,67,15,8,-1,7,8,15,-1,15,14,7,-1,67,206,16,-1,13,17,16,-1,16,206,13,-1,22,23,21,-1,21,20,22,-1,17,22,20,-1,20,14,17,-1,6,5,20,-1,20,21,6,-1,5,7,14,-1,14,20,5,-1,18,19,23,-1,23,22,18,-1,13,18,22,-1,22,17,13,-1,2,6,11,-1,30,31,28,-1,28,27,30,-1,32,30,27,-1,27,29,32,-1,23,32,29,-1,29,21,23,-1,10,9,27,-1,27,28,10,-1,9,11,29,-1,29,27,9,-1,11,6,21,-1,21,29,11,-1,24,25,31,-1,31,30,24,-1,26,24,30,-1,30,32,26,-1,19,26,32,-1,32,23,19,-1,68,207,206,-1,206,67,68,-1,36,35,24,-1,24,26,36,-1,69,208,207,-1,207,68,69,-1,208,38,34,-1,34,207,208,-1,207,34,39,-1,39,206,207,-1,19,40,26,-1,41,36,26,-1,26,40,41,-1,41,40,39,-1,39,34,41,-1,43,42,35,-1,35,36,43,-1,44,43,36,-1,36,41,44,-1,38,44,41,-1,41,34,38,-1,70,209,208,-1,208,69,70,-1,209,46,38,-1,38,208,209,-1,48,47,42,-1,42,43,48,-1,46,49,44,-1,44,38,46,-1,71,210,209,-1,209,70,71,-1,210,51,46,-1,46,209,210,-1,53,52,47,-1,47,48,53,-1,54,53,48,-1,48,49,54,-1,51,54,49,-1,49,46,51,-1,72,55,210,-1,210,71,72,-1,55,56,51,-1,51,210,55,-1,58,57,52,-1,52,53,58,-1,59,58,53,-1,53,54,59,-1,56,59,54,-1,54,51,56,-1,60,61,19,-1,19,18,60,-1,62,60,18,-1,18,13,62,-1,63,62,13,-1,13,39,63,-1,61,64,40,-1,40,19,61,-1,64,63,39,-1,39,40,64,-1,2,3,5,-1,2,5,6,-1,13,206,39,-1,43,44,49,-1,49,48,43,-1,60,62,63,-1,63,64,60,-1,60,64,61,-1,73,74,65,-1,65,66,73,-1,8,4,74,-1,74,73,8,-1,75,76,73,-1,73,66,75,-1,76,12,8,-1,8,73,76,-1,76,77,33,-1,178,179,212,-1,75,78,77,-1,77,76,75,-1,79,180,181,-1,33,77,213,-1,80,213,77,-1,77,78,80,-1,81,182,183,-1,37,213,214,-1,82,214,213,-1,213,80,82,-1,83,184,185,-1,45,214,215,-1,84,215,214,-1,214,82,84,-1,85,86,50,-1,50,215,85,-1,87,85,215,-1,215,84,87,-1,88,89,86,-1,86,85,88,-1,90,88,85,-1,85,87,90,-1,91,186,187,-1,188,189,216,-1,228,190,191,-1,50,86,230,-1,92,93,211,-1,211,230,92,-1,89,92,230,-1,230,86,89,-1,95,97,99,-1,99,96,95,-1,96,99,100,-1,101,1,10,-1,1,101,102,-1,102,94,1,-1,153,106,107,-1,105,108,107,-1,107,106,105,-1,153,100,106,-1,106,100,99,-1,99,105,106,-1,153,107,217,-1,107,108,104,-1,104,217,107,-1,112,114,113,-1,113,111,112,-1,111,113,108,-1,108,105,111,-1,111,97,98,-1,98,112,111,-1,105,99,97,-1,97,111,105,-1,114,110,109,-1,109,113,114,-1,113,109,104,-1,104,108,113,-1,94,102,98,-1,28,31,119,-1,119,117,28,-1,117,119,120,-1,120,118,117,-1,118,120,114,-1,114,112,118,-1,117,101,10,-1,10,28,117,-1,118,102,101,-1,101,117,118,-1,112,98,102,-1,102,118,112,-1,31,25,115,-1,115,119,31,-1,119,115,116,-1,116,120,119,-1,120,116,110,-1,110,114,120,-1,217,218,154,-1,154,153,217,-1,115,123,124,-1,124,116,115,-1,218,219,155,-1,155,154,218,-1,122,126,219,-1,219,218,122,-1,127,122,218,-1,218,217,127,-1,110,116,128,-1,116,124,129,-1,129,128,116,-1,127,128,129,-1,129,122,127,-1,123,130,131,-1,131,124,123,-1,124,131,132,-1,132,129,124,-1,129,132,126,-1,126,122,129,-1,219,220,156,-1,156,155,219,-1,126,134,220,-1,220,219,126,-1,130,135,136,-1,136,131,130,-1,132,137,134,-1,134,126,132,-1,220,221,157,-1,157,156,220,-1,134,139,221,-1,221,220,134,-1,135,140,141,-1,141,136,135,-1,136,141,142,-1,142,137,136,-1,137,142,139,-1,139,134,137,-1,221,143,158,-1,158,157,221,-1,139,144,143,-1,143,221,139,-1,140,145,146,-1,146,141,140,-1,141,146,147,-1,147,142,141,-1,142,147,144,-1,144,139,142,-1,110,149,148,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_coordIndex_2()
		{
			int[] value = {148,109,110,-1,109,148,150,-1,150,104,109,-1,104,150,151,-1,151,127,104,-1,128,152,149,-1,149,110,128,-1,127,151,152,-1,152,128,127,-1,94,97,95,-1,94,98,97,-1,104,127,217,-1,137,132,131,-1,131,136,137,-1,151,150,148,-1,148,152,151,-1,148,149,152,-1,65,160,159,-1,159,66,65,-1,160,96,100,-1,100,159,160,-1,159,161,75,-1,75,66,159,-1,100,103,161,-1,161,159,100,-1,161,121,162,-1,193,223,192,-1,162,78,75,-1,75,161,162,-1,163,194,195,-1,121,224,162,-1,162,224,80,-1,80,78,162,-1,164,196,197,-1,125,225,224,-1,224,225,82,-1,82,80,224,-1,165,198,199,-1,133,226,225,-1,225,226,84,-1,84,82,225,-1,138,167,166,-1,166,226,138,-1,226,166,87,-1,87,84,226,-1,167,169,168,-1,168,166,167,-1,166,168,90,-1,90,87,166,-1,170,200,201,-1,203,227,202,-1,229,204,205,-1,138,231,167,-1,222,172,171,-1,171,231,222,-1,231,171,169,-1,169,167,231,-1,173,174,35,-1,35,42,173,-1,175,173,42,-1,42,47,175,-1,176,175,47,-1,47,52,176,-1,177,176,52,-1,52,57,177,-1,24,35,174,-1,174,25,24,-1,25,174,123,-1,123,115,25,-1,174,173,130,-1,130,123,174,-1,173,175,135,-1,135,130,173,-1,175,176,140,-1,140,135,175,-1,176,177,145,-1,145,140,176,-1,237,238,233,-1,233,232,237,-1,239,237,232,-1,232,234,239,-1,240,239,234,-1,234,235,240,-1,241,240,235,-1,235,236,241,-1,244,245,242,-1,242,243,244,-1,245,241,236,-1,236,242,245,-1,233,238,250,-1,250,246,233,-1,246,250,251,-1,251,247,246,-1,247,251,252,-1,252,248,247,-1,248,252,253,-1,253,249,248,-1,254,255,244,-1,244,243,254,-1,249,253,255,-1,255,254,249,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_190_texCoordIndex_1()
		{
			int[] value = {179,180,181,-1,181,182,179,-1,182,183,179,-1,0,1,2,-1,2,3,0,-1,4,0,3,-1,3,5,4,-1,6,7,8,-1,7,10,11,-1,11,8,7,-1,9,8,12,-1,13,12,8,-1,8,11,13,-1,14,15,7,-1,16,10,7,-1,7,15,16,-1,17,18,19,-1,19,20,17,-1,10,17,20,-1,20,11,10,-1,21,22,20,-1,20,19,21,-1,22,13,11,-1,11,20,22,-1,23,24,18,-1,18,17,23,-1,16,23,17,-1,17,10,16,-1,5,21,4,-1,71,26,27,-1,27,72,71,-1,29,25,28,-1,28,30,29,-1,18,29,30,-1,30,19,18,-1,74,232,73,-1,73,27,74,-1,0,4,30,-1,30,28,0,-1,4,21,19,-1,19,30,4,-1,75,32,26,-1,26,76,75,-1,33,31,25,-1,25,29,33,-1,24,33,29,-1,29,18,24,-1,34,35,15,-1,15,14,34,-1,36,37,31,-1,31,33,36,-1,38,39,35,-1,35,34,38,-1,39,40,41,-1,41,35,39,-1,35,41,42,-1,42,15,35,-1,24,43,33,-1,44,36,33,-1,33,43,44,-1,44,43,42,-1,42,41,44,-1,45,46,37,-1,37,36,45,-1,47,45,36,-1,36,44,47,-1,40,47,44,-1,44,41,40,-1,48,49,39,-1,39,38,48,-1,49,50,40,-1,40,39,49,-1,51,52,46,-1,46,45,51,-1,50,53,47,-1,47,40,50,-1,54,55,49,-1,49,48,54,-1,55,56,50,-1,50,49,55,-1,57,58,52,-1,52,51,57,-1,59,57,51,-1,51,53,59,-1,56,59,53,-1,53,50,56,-1,60,61,55,-1,55,54,60,-1,61,62,56,-1,56,55,61,-1,63,64,58,-1,58,57,63,-1,65,63,57,-1,57,59,65,-1,62,65,59,-1,59,56,62,-1,66,67,24,-1,24,23,66,-1,68,66,23,-1,23,16,68,-1,69,68,16,-1,16,42,69,-1,67,70,43,-1,43,24,67,-1,70,69,42,-1,42,43,70,-1,184,181,180,-1,5,22,21,-1,16,15,42,-1,45,47,53,-1,53,51,45,-1,66,68,69,-1,69,70,66,-1,66,70,67,-1,185,186,187,-1,187,188,185,-1,183,182,186,-1,186,185,183,-1,189,190,185,-1,185,188,189,-1,190,191,183,-1,183,185,190,-1,190,192,193,-1,193,191,190,-1,189,194,192,-1,192,190,189,-1,195,196,193,-1,193,192,195,-1,197,195,192,-1,192,194,197,-1,198,199,196,-1,196,195,198,-1,200,198,195,-1,195,197,200,-1,201,202,199,-1,199,198,201,-1,203,201,198,-1,198,200,203,-1,204,205,202,-1,202,201,204,-1,206,204,201,-1,201,203,206,-1,207,208,205,-1,205,204,207,-1,209,207,204,-1,204,206,209,-1,79,80,59,-1,59,56,79,-1,81,82,77,-1,77,78,81,-1,83,84,80,-1,80,79,83,-1,85,86,81,-1,81,78,85,-1,211,212,210,-1,210,213,211,-1,213,210,214,-1,87,89,88,-1,90,87,91,-1,91,92,90,-1,93,95,94,-1,98,97,94,-1,94,95,98,-1,96,99,95,-1,95,99,100,-1,100,98,95,-1,101,94,102,-1,94,97,103,-1,103,102,94,-1,106,105,104,-1,104,107,106,-1,107,104,97,-1,97,98,107,-1,107,109,108,-1,108,106,107,-1,98,100,109,-1,109,107,98,-1,105,111,110,-1,110,104,105,-1,104,110,103,-1,103,97,104,-1,92,91,108,-1,114,113,158,-1,158,159,114,-1,115,112,116,-1,116,117,115,-1,117,116,105,-1,105,106,117,-1,160,233,161,-1,161,114,160,-1,117,91,87,-1,87,115,117,-1,106,108,91,-1,91,117,106,-1,113,119,162,-1,162,163,113,-1,112,118,120,-1,120,116,112,-1,116,120,111,-1,111,105,116,-1,102,122,121,-1,121,101,102,-1,118,124,123,-1,123,120,118,-1,122,126,125,-1,125,121,122,-1,128,127,126,-1,126,122,128,-1,129,128,122,-1,122,102,129,-1,111,120,130,-1,120,123,131,-1,131,130,120,-1,129,130,131,-1,131,128,129,-1,124,133,132,-1,132,123,124,-1,123,132,134,-1,134,131,123,-1,131,134,127,-1,127,128,131,-1,126,136,135,-1,135,125,126,-1,127,137,136,-1,136,126,127,-1,133,139,138,-1,138,132,133,-1,134,140,137,-1,137,127,134,-1,136,142,141,-1,141,135,136,-1,137,143,142,-1,142,136,137,-1,139,145,144,-1,144,138,139,-1,138,144,146,-1,146,140,138,-1,140,146,143,-1,143,137,140,-1,142,148,147,-1,147,141,142,-1,143,149,148,-1,148,142,143,-1,145,151,150,-1,150,144,145,-1,144,150,152,-1,152,146,144,-1,146,152,149,-1,149,143,146,-1,111,154,153,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_190_texCoordIndex_2()
		{
			int[] value = {153,110,111,-1,110,153,155,-1,155,103,110,-1,103,155,156,-1,156,129,103,-1,130,157,154,-1,154,111,130,-1,129,156,157,-1,157,130,129,-1,215,212,211,-1,92,108,109,-1,103,129,102,-1,140,134,132,-1,132,138,140,-1,156,155,153,-1,153,157,156,-1,153,154,157,-1,187,217,216,-1,216,188,187,-1,217,213,214,-1,214,216,217,-1,216,218,189,-1,189,188,216,-1,214,219,218,-1,218,216,214,-1,218,220,221,-1,220,218,219,-1,221,194,189,-1,189,218,221,-1,222,220,223,-1,220,222,221,-1,221,222,197,-1,197,194,221,-1,224,223,225,-1,223,224,222,-1,222,224,200,-1,200,197,222,-1,226,225,227,-1,225,226,224,-1,224,226,203,-1,203,200,224,-1,227,229,228,-1,228,226,227,-1,226,228,206,-1,206,203,226,-1,229,231,230,-1,230,228,229,-1,228,230,209,-1,209,206,228,-1,166,146,167,-1,146,166,143,-1,168,164,169,-1,164,168,165,-1,167,171,170,-1,170,166,167,-1,168,173,172,-1,172,165,168,-1,174,175,37,-1,37,46,174,-1,176,174,46,-1,46,52,176,-1,177,176,52,-1,52,58,177,-1,178,177,58,-1,58,64,178,-1,75,37,175,-1,175,32,75,-1,32,175,124,-1,124,162,32,-1,175,174,133,-1,133,124,175,-1,174,176,139,-1,139,133,174,-1,176,177,145,-1,145,139,176,-1,177,178,151,-1,151,145,177,-1,234,235,236,-1,236,237,234,-1,238,234,237,-1,237,239,238,-1,240,238,239,-1,239,241,240,-1,242,240,241,-1,241,243,242,-1,244,245,246,-1,246,247,244,-1,245,242,243,-1,243,246,245,-1,236,235,248,-1,248,249,236,-1,249,248,250,-1,250,251,249,-1,251,250,252,-1,252,253,251,-1,253,252,254,-1,254,255,253,-1,256,257,244,-1,244,247,256,-1,255,254,257,-1,257,256,255,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_11_190_point_1()
		{
			double[] value = {0.6121,12.4200,-1.3020,-0.3060,12.4400,-1.3420,1.2980,12.6100,-0.9894,1.7810,12.5900,0.0631,1.3900,12.3200,0.7954,2.5750,12.1900,0.1088,2.2960,12.9900,-1.4280,2.8160,11.4300,1.1780,1.9780,11.2400,2.0440,0.8508,13.0100,-2.9710,0.0000,12.9900,-3.1160,1.7980,13.0300,-2.6730,2.9300,10.3000,2.4380,4.4940,11.0200,1.5910,2.6340,12.0000,1.7410,1.9840,11.2400,3.1900,2.7670,10.5800,3.2610,3.9060,11.7300,1.6750,4.9490,11.5500,-0.0209,4.8340,10.9600,-1.4680,3.0380,12.9300,0.1389,3.4930,12.1700,-2.1530,4.4820,12.4700,0.1389,4.1130,11.3400,-1.7590,1.6000,8.1070,-2.3330,0.0000,7.8390,-2.4510,3.7470,8.9550,-1.9910,0.9116,10.4900,-4.0970,0.0000,10.5000,-4.2160,2.1110,10.8300,-3.6440,1.4820,7.5380,-2.9660,0.0000,7.2530,-3.0710,3.6400,8.8770,-2.8640,3.6320,6.8750,3.3110,4.9870,7.1600,1.1780,1.8910,6.9980,-2.2720,3.7990,7.0900,-1.8180,3.6180,4.3070,3.1480,5.1360,4.3830,1.1440,5.3860,8.4850,1.2900,5.2170,8.4760,-0.4773,4.8880,7.1190,-0.8743,1.2540,4.2520,-2.7260,3.1630,4.3000,-2.0340,4.2350,4.3440,-0.4054,3.7320,2.4660,3.1720,5.0650,2.6240,1.1630,1.1330,2.3340,-2.8550,3.7480,2.5100,-1.7930,4.8130,2.5750,-0.4505,3.6620,0.4951,3.3080,5.3230,0.5624,1.5760,1.3430,0.3925,-3.4360,3.4900,0.4011,-2.4260,4.9240,0.4940,-0.8391,4.1740,-0.4185,3.5290,5.2330,-0.3904,1.3030,1.4080,-0.5240,-2.5500,3.1810,-0.5041,-1.8170,4.5110,-0.4626,-0.5779,6.5380,11.3100,-0.0209,6.1660,10.5800,-1.4680,6.1830,10.6400,1.4920,5.5650,8.6210,1.2900,5.5590,8.6140,-0.4773,0.0000,12.0900,1.3430,0.0000,10.5700,2.3200,1.4730,9.0390,3.6970,1.9430,6.6940,3.9920,2.5100,4.3230,3.9280,2.8450,2.4080,3.9100,2.6120,0.5037,4.2160,2.6230,-0.4527,4.1380,1.0820,10.5700,2.3200,0.6915,12.0900,1.2390,0.0000,8.8510,2.8420,1.1270,8.8460,2.8420,1.3340,6.9610,3.3110,0.0000,7.0910,3.3110,1.3340,4.3500,3.3110,0.0000,4.4800,3.3110,1.3340,2.4280,3.3110,0.0000,2.5580,3.5270,1.3340,0.5456,3.3110,0.0000,0.6752,3.5020,1.3340,-0.5831,3.1310,3.2260,-0.6336,2.8990,0.0000,-0.4535,3.3650,1.3340,-1.2530,1.5370,3.6620,-1.3030,1.5340,0.0000,-1.1230,1.5370,4.7730,-0.5000,1.5760,4.1470,-1.1790,1.1580,4.1250,-1.0960,-0.4311,-1.2980,12.6100,-0.9894,-1.7810,12.5900,0.0631,-1.3900,12.3200,0.7954,-2.5750,12.1900,0.1088,-2.2960,12.9900,-1.4280,-2.8160,11.4300,1.1780};
			return value;
		}
		private double[] getCoordinate_11_190_point_2()
		{
			double[] value = {-1.9780,11.2400,2.0440,-0.8508,13.0100,-2.9710,-1.7980,13.0300,-2.6730,-2.9300,10.3000,2.4380,-4.4940,11.0200,1.5910,-2.6340,12.0000,1.7410,-1.9840,11.2400,3.1900,-2.7670,10.5800,3.2610,-3.9060,11.7300,1.6750,-4.9490,11.5500,-0.0209,-4.8340,10.9600,-1.4680,-3.0380,12.9300,0.1389,-3.4930,12.1700,-2.1530,-4.4820,12.4700,0.1389,-4.1130,11.3400,-1.7590,-1.6000,8.1070,-2.3330,-3.7470,8.9550,-1.9910,-0.9116,10.4900,-4.0970,-2.1110,10.8300,-3.6440,-1.4820,7.5380,-2.9660,-3.6400,8.8770,-2.8640,-3.6320,6.8750,3.3110,-4.9870,7.1600,1.1780,-1.8910,6.9980,-2.2720,-3.7990,7.0900,-1.8180,-3.6180,4.3070,3.1480,-5.1360,4.3830,1.1440,-5.3860,8.4850,1.2900,-5.2170,8.4760,-0.4773,-4.8880,7.1190,-0.8743,-1.2540,4.2520,-2.7260,-3.1630,4.3000,-2.0340,-4.2350,4.3440,-0.4054,-3.7320,2.4660,3.1720,-5.0650,2.6240,1.1630,-1.1330,2.3340,-2.8550,-3.7480,2.5100,-1.7930,-4.8130,2.5750,-0.4505,-3.6620,0.4951,3.3080,-5.3230,0.5624,1.5760,-1.3430,0.3925,-3.4360,-3.4900,0.4011,-2.4260,-4.9240,0.4940,-0.8391,-4.1740,-0.4185,3.5290,-5.2330,-0.3904,1.3030,-1.4080,-0.5240,-2.5500,-3.1810,-0.5041,-1.8170,-4.5110,-0.4626,-0.5779,-6.5380,11.3100,-0.0209,-6.1660,10.5800,-1.4680,-6.1830,10.6400,1.4920,-5.5650,8.6210,1.2900,-5.5590,8.6140,-0.4773,-1.4730,9.0390,3.6970,-1.9430,6.6940,3.9920,-2.5100,4.3230,3.9280,-2.8450,2.4080,3.9100,-2.6120,0.5037,4.2160,-2.6230,-0.4527,4.1380,-1.0820,10.5700,2.3200,-0.6915,12.0900,1.2390,-1.1270,8.8460,2.8420,-1.3340,6.9610,3.3110,-1.3340,4.3500,3.3110,-1.3340,2.4280,3.3110,-1.3340,0.5456,3.3110,-1.3340,-0.5831,3.1310,-3.2260,-0.6336,2.8990,-1.3340,-1.2530,1.5370,-3.6620,-1.3030,1.5340,-4.7730,-0.5000,1.5760,-4.1470,-1.1790,1.1580,-4.1250,-1.0960,-0.4311,-0.0011,4.2520,-2.7260,-0.0007,6.9980,-2.2720,-0.0012,2.3340,-2.8550,-0.0010,0.3925,-3.4360,-0.0010,-0.5240,-2.5500,3.6320,6.8750,3.3110,2.9300,10.3000,2.4380,3.6180,4.3070,3.1480,3.6320,6.8750,3.3110,3.7320,2.4660,3.1720,3.6180,4.3070,3.1480,3.6620,0.4951,3.3080,3.7320,2.4660,3.1720,4.5110,-0.4626,-0.5779,4.9240,0.4940,-0.8391,4.9240,0.4940,-0.8391,5.3230,0.5624,1.5760,5.3230,0.5624,1.5760,3.6620,0.4951,3.3080,-2.9300,10.3000,2.4380,-3.6320,6.8750,3.3110,-3.6320,6.8750,3.3110,-3.6180,4.3070,3.1480,-3.6180,4.3070,3.1480,-3.7320,2.4660,3.1720,-3.7320,2.4660,3.1720,-3.6620,0.4951,3.3080};
			return value;
		}
		private double[] getCoordinate_11_190_point_3()
		{
			double[] value = {-4.9240,0.4940,-0.8391,-4.5110,-0.4626,-0.5779,-5.3230,0.5624,1.5760,-4.9240,0.4940,-0.8391,-3.6620,0.4951,3.3080,-5.3230,0.5624,1.5760,2.9300,10.3000,2.4380,3.6320,6.8750,3.3110,3.6180,4.3070,3.1480,3.7320,2.4660,3.1720,3.6620,0.4951,3.3080,4.5110,-0.4626,-0.5779,1.1270,8.8460,2.8420,1.3340,4.3500,3.3110,1.3340,2.4280,3.3110,1.3340,0.5456,3.3110,4.7730,-0.5000,1.5760,-2.9300,10.3000,2.4380,-3.6320,6.8750,3.3110,-3.6180,4.3070,3.1480,-3.7320,2.4660,3.1720,-3.6620,0.4951,3.3080,-4.5110,-0.4626,-0.5779,-1.1270,8.8460,2.8420,-1.3340,4.3500,3.3110,-1.3340,2.4280,3.3110,-1.3340,0.5456,3.3110,-4.7730,-0.5000,1.5760,4.7730,-0.5000,1.5760,-4.7730,-0.5000,1.5760,4.7730,-0.5000,1.5760,-4.7730,-0.5000,1.5760,0.6121,15.5500,-1.3020,0.0000,15.5500,-1.3830,1.2980,15.5500,-0.9895,1.7810,15.5500,0.0632,1.3900,15.5500,0.7954,0.6121,11.8000,-1.3020,0.0000,11.8700,-1.3830,1.2980,12.1000,-0.9894,1.7810,12.0700,0.0631,1.3900,11.6500,0.7954,0.6897,15.7000,1.2360,0.0000,15.0600,1.3430,0.0000,11.2700,1.3430,0.6897,11.2800,1.2360,-0.6121,15.5500,-1.3020,-1.2980,15.5500,-0.9895,-1.7810,15.5500,0.0631,-1.3900,15.5500,0.7954,-0.6121,11.8000,-1.3020,-1.2980,12.1000,-0.9895,-1.7810,12.0700,0.0631,-1.3900,11.6500,0.7954,-0.6897,15.7000,1.2360,-0.6897,11.2800,1.2360};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_11_191_point_1()
		{
			double[] value = {0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.2410,0.5920,0.2112,0.5805,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1412,0.5207,0.1108,0.5655,0.0786,0.5849,0.1073,0.5839,0.0877,0.4617,0.1185,0.4741,0.1474,0.4856,0.1724,0.5255,0.2089,0.5196,0.2133,0.5560,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.3470,0.4316,0.3616,0.5328,0.2733,0.5359,0.2380,0.4930,0.2490,0.5451,0.2638,0.4568,0.3214,0.4203,0.2252,0.4828,0.0566,0.3896,0.0976,0.3718,0.2183,0.3850,0.3504,0.3844,0.0529,0.3458,0.1128,0.3440,0.1491,0.3449,0.1525,0.3869,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0518,0.2941,0.1116,0.2965,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.0501,0.2428,0.1011,0.2410,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.2400,0.0553,0.2170,0.1067,0.2154,0.1463,0.2162,0.2270,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.3477,0.4310,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3223,0.4192,0.3477,0.4310,0.0976,0.3718,0.0976,0.3718,0.1445,0.2419,0.1927,0.2400,0.0976,0.3718,0.0976,0.3718,0.1445,0.2419,0.1927,0.2400,0.0976,0.3718,0.0976,0.3718,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.2410,0.5920,0.2112,0.5805,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1412,0.5207,0.1108,0.5655,0.0786,0.5849};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_2()
		{
			double[] value = {0.1073,0.5839,0.0877,0.4617,0.1185,0.4741,0.1474,0.4856,0.1724,0.5255,0.2089,0.5196,0.2133,0.5560,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.3470,0.4316,0.3616,0.5328,0.2733,0.5359,0.2380,0.4930,0.2490,0.5451,0.2638,0.4568,0.3214,0.4203,0.2252,0.4828,0.0566,0.3896,0.0976,0.3718,0.2183,0.3850,0.3504,0.3844,0.0529,0.3458,0.1128,0.3440,0.1491,0.3449,0.1525,0.3869,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0518,0.2941,0.1116,0.2965,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.0501,0.2428,0.1011,0.2410,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.2400,0.0553,0.2170,0.1067,0.2154,0.1463,0.2162,0.2270,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.3477,0.4310,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3223,0.4192,0.3477,0.4310,0.0976,0.3718,0.0976,0.3718,0.1445,0.2419,0.1927,0.2400,0.0976,0.3718,0.0976,0.3718,0.1445,0.2419,0.1927,0.2400,0.0976,0.3718,0.0976,0.3718,0.3608,0.3469,0.3504,0.3844,0.3621,0.2922,0.3561,0.2404,0.3536,0.2151,0.9678,0.9614,0.9599,0.9831,0.9337,0.9943,0.9208,0.9868,0.9402,0.9560,0.9178,0.9949,0.9107,0.9369,0.8978,0.9801,0.8751,0.9801,0.8751,0.9369,0.8751,0.8881,0.9122,0.8880,0.9715,0.9294,0.9190,0.8344,0.9947,0.8319,0.8751,0.8381,0.9190,0.7602,0.9942,0.7589,0.8751,0.7639,0.9190,0.7055,0.9980,0.7066};
			return value;
		}
		private double[] getTextureCoordinate_11_191_point_3()
		{
			double[] value = {0.8751,0.7092,0.9190,0.6520,0.9957,0.6506,0.8751,0.6557,0.9190,0.6199,0.9813,0.6185,0.8751,0.6236,0.9190,0.6009,0.9957,0.5995,0.8751,0.6046,0.7823,0.9614,0.8164,0.9943,0.7903,0.9831,0.8293,0.9868,0.8099,0.9560,0.8323,0.9949,0.8394,0.9369,0.8523,0.9801,0.8379,0.8880,0.7786,0.9294,0.7555,0.8319,0.8311,0.8344,0.8311,0.7602,0.7559,0.7589,0.8311,0.7055,0.7522,0.7066,0.8311,0.6520,0.7545,0.6506,0.8311,0.6199,0.7688,0.6185,0.8311,0.6009,0.7545,0.5995,0.3511,0.5932,0.3511,0.5932,0.2453,0.6431,0.2344,0.6441,0.2344,0.6969,0.2453,0.6969,0.2575,0.6474,0.2575,0.6969,0.2661,0.6469,0.2661,0.6969,0.2592,0.6409,0.2592,0.6969,0.2344,0.6355,0.2467,0.6357,0.2467,0.6990,0.2344,0.6898,0.2235,0.6431,0.2235,0.6969,0.2112,0.6474,0.2112,0.6969,0.2026,0.6469,0.2026,0.6969,0.2096,0.6409,0.2096,0.6969,0.2221,0.6990,0.2221,0.6357};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_coordIndex_1()
		{
			int[] value = {118,28,42,-1,42,25,118,-1,26,40,27,-1,39,38,24,-1,24,23,39,-1,58,22,24,-1,24,38,58,-1,120,41,28,-1,28,118,120,-1,295,56,30,-1,30,32,295,-1,56,37,31,-1,29,31,35,-1,35,33,29,-1,29,33,34,-1,34,30,29,-1,30,34,36,-1,36,32,30,-1,37,35,31,-1,295,32,36,-1,40,33,35,-1,44,36,34,-1,37,40,35,-1,295,36,44,-1,57,58,38,-1,39,40,38,-1,27,39,23,-1,23,20,27,-1,40,39,27,-1,294,48,41,-1,41,19,294,-1,28,41,48,-1,48,49,28,-1,28,49,50,-1,50,42,28,-1,19,293,294,-1,54,48,294,-1,294,17,54,-1,17,294,293,-1,119,52,295,-1,90,93,45,-1,45,92,90,-1,14,81,45,-1,45,93,14,-1,16,72,14,-1,97,96,46,-1,95,97,46,-1,46,88,95,-1,96,90,46,-1,92,46,90,-1,92,87,46,-1,117,91,47,-1,47,103,117,-1,86,47,87,-1,87,102,86,-1,86,116,103,-1,103,47,86,-1,87,47,91,-1,49,53,51,-1,49,48,54,-1,54,53,49,-1,16,22,58,-1,58,72,16,-1,73,68,51,-1,51,53,73,-1,52,51,68,-1,68,295,52,-1,53,54,75,-1,75,74,53,-1,73,53,74,-1,75,54,76,-1,65,69,56,-1,56,69,70,-1,70,37,56,-1,37,70,71,-1,71,57,37,-1,66,64,67,-1,77,67,64,-1,65,64,66,-1,66,69,65,-1,67,59,60,-1,67,82,59,-1,82,111,59,-1,60,59,104,-1,104,59,62,-1,111,61,59,-1,61,63,59,-1,62,59,63,-1,77,64,65,-1,65,78,77,-1,68,73,78,-1,78,65,68,-1,69,66,79,-1,79,70,69,-1,70,79,80,-1,80,71,70,-1,14,72,81,-1,73,74,83,-1,83,78,73,-1,74,75,109,-1,109,83,74,-1,75,76,114,-1,114,109,75,-1,4,115,15,-1,76,15,115,-1,115,114,76,-1,60,66,67,-1,66,60,105,-1,82,67,77,-1,77,84,82,-1,78,83,84,-1,84,77,78,-1,105,106,79,-1,79,66,105,-1,106,100,80,-1,80,79,106,-1,110,111,82,-1,82,84,110,-1,110,84,83,-1,83,109,110,-1,113,85,108,-1,108,107,113,-1,85,99,116,-1,116,86,85,-1,89,88,87,-1,94,95,88,-1,88,89,94,-1,89,91,117,-1,117,94,89,-1,91,89,87,-1,14,93,13,-1,9,12,90,-1,90,96,9,-1,12,13,93,-1,93,90,12,-1,94,11,10,-1,10,95,94,-1,11,94,117,-1,117,0,11,-1,8,97,95,-1,95,10,8,-1,8,9,96,-1,96,97,8,-1,1,99,7,-1,3,6,98,-1,98,112,3,-1,7,99,98,-1,98,6,7,-1,113,112,98,-1,108,101,100,-1,100,106,108,-1,113,98,85,-1,99,85,98,-1,103,116,2,-1,2,5,103,-1,5,0,117,-1,117,103,5,-1,62,113,107,-1,107,104,62,-1,108,106,105,-1,105,107,108,-1,110,109,114,-1,114,115,110,-1,3,112,115,-1,115,4,3,-1,61,111,110,-1,110,115,61,-1,61,115,112,-1,112,63,61,-1,62,63,112,-1,112,113,62,-1,2,116,1,-1,116,99,1,-1,86,102,85,-1,102,101,108,-1,85,102,108,-1,57,38,40,-1,37,57,40,-1,105,60,104,-1,107,105,104,-1,15,76,54,-1,17,15,54,-1,87,88,46,-1,41,120,21,-1,19,41,21,-1,72,58,122,-1,123,100,101,-1,101,121,123,-1,100,123,124,-1,124,80,100,-1,80,124,122,-1,122,71,80,-1,101,87,121,-1,57,71,122,-1,58,57,122,-1,121,92,45,-1,45,123,121,-1,123,45,81,-1,81,124,123,-1,124,81,72,-1,72,122,124,-1,87,92,121,-1,87,101,102,-1,40,26,44,-1,119,295,44,-1,44,34,33,-1,40,44,33,-1,29,30,56,-1,31,29,56,-1,68,65,56,-1,295,68,56,-1,55,147,131,-1,132,131,147,-1,147,140,132,-1,132,140,141,-1,141,133,132,-1,133,141,142,-1,142,134,133,-1,134,142,125,-1,125,130,134,-1,129,135,18,-1,277,278,296,-1,137,279,280,-1,281,282,297,-1,304,136,49,-1,49,136,146,-1,146,52,49,-1,52,146,147,-1,298,283,284,-1,136,145,146,-1,128,126,143,-1,143,144,139,-1,145,139,144,-1,139,128,143,-1,136,139,145,-1,135,138,304,-1,304,43,135,-1,129,127,138,-1,138,135,129,-1,138,139,136,-1,136,304,138,-1,138,127,128,-1,128,139,138,-1,143,126,125,-1,125,142,143,-1,144,143,142,-1,142,141,144,-1,145,144,141,-1,141,140,145,-1,146,145,140,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_2()
		{
			int[] value = {140,147,146,-1,52,119,42,-1,42,50,52,-1,148,149,118,-1,118,25,148,-1,149,150,120,-1,120,118,149,-1,150,151,21,-1,21,120,150,-1,26,152,149,-1,149,148,26,-1,152,153,150,-1,150,149,152,-1,153,154,151,-1,151,150,153,-1,26,27,152,-1,153,152,27,-1,27,20,154,-1,154,153,27,-1,42,119,148,-1,148,25,42,-1,148,119,26,-1,119,44,26,-1,49,52,50,-1,172,158,248,-1,248,155,172,-1,156,157,170,-1,24,168,169,-1,169,23,24,-1,24,22,188,-1,188,168,24,-1,158,171,250,-1,250,248,158,-1,160,186,300,-1,300,162,160,-1,186,161,167,-1,165,161,159,-1,159,163,165,-1,164,163,159,-1,159,160,164,-1,166,164,160,-1,160,162,166,-1,167,161,165,-1,300,166,162,-1,170,165,163,-1,174,164,166,-1,167,165,170,-1,300,174,166,-1,187,168,188,-1,169,168,170,-1,23,169,157,-1,157,20,23,-1,170,157,169,-1,171,178,299,-1,299,19,171,-1,178,171,158,-1,158,179,178,-1,180,179,158,-1,158,172,180,-1,19,299,293,-1,299,178,184,-1,184,17,299,-1,17,293,299,-1,249,300,182,-1,175,223,220,-1,220,222,175,-1,175,211,14,-1,14,223,175,-1,16,14,202,-1,227,176,226,-1,176,227,225,-1,225,218,176,-1,226,176,220,-1,222,220,176,-1,222,176,217,-1,177,221,247,-1,247,233,177,-1,216,217,177,-1,217,216,232,-1,233,246,216,-1,216,177,233,-1,217,221,177,-1,179,181,183,-1,184,178,179,-1,179,183,184,-1,188,22,16,-1,16,202,188,-1,203,181,198,-1,181,203,183,-1,198,181,182,-1,182,300,198,-1,183,205,184,-1,205,183,204,-1,203,204,183,-1,205,206,184,-1,195,186,199,-1,200,199,186,-1,186,167,200,-1,201,200,167,-1,167,187,201,-1,196,197,194,-1,207,194,197,-1,196,194,195,-1,195,199,196,-1,197,190,189,-1,197,189,212,-1,212,189,241,-1,190,234,189,-1,234,192,189,-1,241,189,191,-1,191,189,193,-1,192,193,189,-1,195,194,207,-1,207,208,195,-1,208,203,198,-1,198,195,208,-1,209,196,199,-1,199,200,209,-1,210,209,200,-1,200,201,210,-1,14,211,202,-1,213,204,203,-1,203,208,213,-1,239,205,204,-1,204,213,239,-1,244,206,205,-1,205,239,244,-1,4,15,245,-1,245,15,206,-1,206,244,245,-1,190,197,196,-1,196,235,190,-1,207,197,212,-1,212,214,207,-1,214,213,208,-1,208,207,214,-1,209,236,235,-1,235,196,209,-1,210,230,236,-1,236,209,210,-1,212,241,240,-1,240,214,212,-1,213,214,240,-1,240,239,213,-1,238,215,243,-1,243,237,238,-1,246,229,215,-1,215,216,246,-1,219,217,218,-1,218,225,224,-1,224,219,218,-1,247,221,219,-1,219,224,247,-1,221,217,219,-1,14,13,223,-1,220,12,9,-1,9,226,220,-1,223,13,12,-1,12,220,223,-1,10,11,224,-1,224,225,10,-1,247,224,11,-1,11,0,247,-1,225,227,8,-1,8,10,225,-1,226,9,8,-1,8,227,226,-1,1,7,229,-1,228,6,3,-1,3,242,228,-1,228,229,7,-1,7,6,228,-1,243,228,242,-1,230,231,238,-1,238,236,230,-1,243,215,228,-1,229,228,215,-1,2,246,233,-1,233,5,2,-1,247,0,5,-1,5,233,247,-1,237,243,192,-1,192,234,237,-1,235,236,238,-1,238,237,235,-1,244,239,240,-1,240,245,244,-1,245,242,3,-1,3,4,245,-1,240,241,191,-1,191,245,240,-1,242,245,191,-1,191,193,242,-1,242,193,192,-1,192,243,242,-1,2,1,246,-1,246,1,229,-1,216,215,232,-1,232,238,231,-1,215,238,232,-1,187,170,168,-1,167,170,187,-1,235,234,190,-1,237,234,235,-1,15,184,206,-1,17,184,15,-1,217,176,218,-1,171,21,250,-1,19,21,171,-1,202,252,188,-1,231,230,253,-1,253,251,231,-1,254,253,230,-1,230,210,254,-1,252,254,210,-1,210,201,252,-1,231,251,217,-1,187,252,201,-1,188,252,187,-1,175,222,251,-1,251,253,175,-1,211,175,253,-1,253,254,211,-1,202,211,254,-1,254,252,202,-1,217,251,222,-1,217,232,231,-1,170,174,156,-1,249,174,300,-1,174,163,164,-1,170,163,174,-1,159,186,160,-1,161,186,159,-1,198,186,195,-1,300,186,198,-1,185,255,271,-1,271,255,256,-1,256,264,271,-1,265,264,256,-1,256,257,265,-1,266,265,257,-1,257,258,266,-1,125,266,258,-1,258,130,125,-1,129,18,301,-1,286,259,285,-1,261,287,288,-1,290,302,289,-1,305,179,260,-1,270,260,179,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_coordIndex_3()
		{
			int[] value = {179,182,270,-1,182,271,270,-1,303,291,292,-1,260,270,269,-1,128,267,126,-1,267,263,268,-1,269,268,263,-1,263,267,128,-1,260,269,263,-1,305,262,301,-1,301,173,305,-1,262,127,129,-1,129,301,262,-1,260,263,262,-1,262,305,260,-1,128,127,262,-1,262,263,128,-1,125,126,267,-1,267,266,125,-1,266,267,268,-1,268,265,266,-1,265,268,269,-1,269,264,265,-1,264,269,270,-1,270,271,264,-1,172,249,182,-1,182,180,172,-1,248,273,272,-1,272,155,248,-1,250,274,273,-1,273,248,250,-1,21,151,274,-1,274,250,21,-1,273,275,156,-1,156,272,273,-1,274,276,275,-1,275,273,274,-1,151,154,276,-1,276,274,151,-1,156,275,157,-1,276,157,275,-1,154,20,157,-1,157,276,154,-1,272,249,172,-1,172,155,272,-1,272,156,249,-1,249,156,174,-1,179,180,182,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_11_199_texCoordIndex_1()
		{
			int[] value = {255,256,257,-1,257,258,255,-1,259,260,261,-1,0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,262,263,256,-1,256,255,262,-1,6,7,8,-1,8,9,6,-1,7,10,11,-1,12,11,13,-1,13,14,12,-1,12,14,15,-1,15,8,12,-1,8,15,16,-1,16,9,8,-1,10,13,11,-1,6,9,16,-1,17,14,13,-1,18,16,15,-1,10,17,13,-1,6,16,18,-1,19,4,1,-1,0,17,1,-1,261,264,265,-1,265,266,261,-1,260,264,261,-1,267,268,263,-1,263,269,267,-1,256,263,268,-1,268,270,256,-1,256,270,271,-1,271,257,256,-1,269,272,267,-1,186,187,188,-1,188,189,186,-1,189,188,190,-1,273,274,275,-1,20,21,22,-1,22,23,20,-1,24,25,22,-1,22,21,24,-1,26,27,24,-1,28,29,30,-1,31,28,30,-1,30,32,31,-1,29,20,30,-1,23,30,20,-1,23,33,30,-1,34,35,36,-1,36,37,34,-1,38,36,33,-1,33,39,38,-1,38,40,37,-1,37,36,38,-1,33,36,35,-1,191,192,193,-1,191,187,186,-1,186,192,191,-1,26,5,4,-1,4,27,26,-1,194,195,193,-1,193,192,194,-1,196,193,195,-1,195,197,196,-1,192,186,198,-1,198,199,192,-1,194,192,199,-1,198,186,200,-1,41,42,7,-1,7,42,43,-1,43,10,7,-1,10,43,44,-1,44,19,10,-1,45,46,47,-1,48,47,46,-1,41,46,45,-1,45,42,41,-1,47,49,50,-1,47,51,49,-1,51,52,49,-1,50,49,53,-1,53,49,54,-1,52,55,49,-1,55,56,49,-1,54,49,56,-1,48,46,41,-1,41,57,48,-1,58,59,57,-1,57,41,58,-1,42,45,60,-1,60,43,42,-1,43,60,61,-1,61,44,43,-1,24,27,25,-1,59,62,63,-1,63,57,59,-1,62,64,65,-1,65,63,62,-1,64,66,67,-1,67,65,64,-1,68,69,70,-1,66,70,69,-1,69,67,66,-1,50,45,47,-1,45,50,71,-1,51,47,48,-1,48,72,51,-1,57,63,72,-1,72,48,57,-1,71,73,60,-1,60,45,71,-1,73,74,61,-1,61,60,73,-1,75,52,51,-1,51,72,75,-1,75,72,63,-1,63,65,75,-1,76,77,78,-1,78,79,76,-1,77,80,40,-1,40,38,77,-1,81,32,33,-1,82,31,32,-1,32,81,82,-1,81,35,34,-1,34,82,81,-1,35,81,33,-1,24,21,83,-1,84,85,20,-1,20,29,84,-1,85,83,21,-1,21,20,85,-1,82,86,87,-1,87,31,82,-1,86,82,34,-1,34,88,86,-1,89,28,31,-1,31,87,89,-1,89,84,29,-1,29,28,89,-1,90,80,91,-1,92,93,94,-1,94,95,92,-1,91,80,94,-1,94,93,91,-1,76,95,94,-1,78,96,74,-1,74,73,78,-1,76,94,77,-1,80,77,94,-1,37,40,97,-1,97,98,37,-1,98,88,34,-1,34,37,98,-1,54,76,79,-1,79,53,54,-1,78,73,71,-1,71,79,78,-1,75,65,67,-1,67,69,75,-1,92,95,69,-1,69,68,92,-1,55,52,75,-1,75,69,55,-1,55,69,95,-1,95,56,55,-1,54,56,95,-1,95,76,54,-1,97,40,90,-1,40,80,90,-1,38,39,77,-1,39,96,78,-1,77,39,78,-1,19,1,17,-1,10,19,17,-1,71,50,53,-1,79,71,53,-1,201,200,186,-1,189,201,186,-1,33,32,30,-1,263,262,276,-1,269,263,276,-1,27,4,99,-1,100,74,96,-1,96,101,100,-1,74,100,102,-1,102,61,74,-1,61,102,99,-1,99,44,61,-1,96,33,101,-1,19,44,99,-1,4,19,99,-1,101,23,22,-1,22,100,101,-1,100,22,25,-1,25,102,100,-1,102,25,27,-1,27,99,102,-1,33,23,101,-1,33,96,39,-1,260,259,277,-1,273,275,277,-1,18,15,14,-1,17,18,14,-1,12,8,7,-1,11,12,7,-1,58,41,7,-1,6,58,7,-1,197,202,203,-1,204,203,202,-1,202,205,204,-1,204,205,206,-1,206,207,204,-1,207,206,208,-1,208,209,207,-1,209,208,210,-1,210,211,209,-1,212,213,190,-1,188,190,213,-1,214,187,188,-1,191,187,214,-1,214,215,191,-1,191,215,216,-1,216,196,191,-1,196,216,202,-1,202,197,196,-1,215,217,216,-1,218,219,220,-1,220,221,222,-1,217,222,221,-1,222,218,220,-1,215,222,217,-1,213,223,214,-1,214,188,213,-1,212,224,223,-1,223,213,212,-1,223,222,215,-1,215,214,223,-1,223,224,218,-1,218,222,223,-1,220,219,210,-1,210,208,220,-1,221,220,208,-1,208,206,221,-1,217,221,206,-1,206,205,217,-1,216,217,205,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_2()
		{
			int[] value = {205,202,216,-1,274,273,257,-1,257,271,274,-1,278,279,255,-1,255,258,278,-1,279,280,262,-1,262,255,279,-1,280,281,276,-1,276,262,280,-1,259,282,279,-1,279,278,259,-1,282,283,280,-1,280,279,282,-1,283,284,281,-1,281,280,283,-1,259,261,282,-1,283,282,261,-1,261,266,284,-1,284,283,261,-1,257,273,278,-1,278,258,257,-1,278,273,259,-1,273,277,259,-1,270,274,271,-1,286,287,285,-1,285,288,286,-1,289,290,291,-1,2,104,103,-1,103,3,2,-1,2,5,105,-1,105,104,2,-1,287,293,292,-1,292,285,287,-1,107,108,106,-1,106,109,107,-1,108,110,111,-1,113,110,112,-1,112,114,113,-1,115,114,112,-1,112,107,115,-1,116,115,107,-1,107,109,116,-1,111,110,113,-1,106,116,109,-1,117,113,114,-1,118,115,116,-1,111,113,117,-1,106,118,116,-1,119,104,105,-1,103,104,117,-1,265,294,290,-1,290,266,265,-1,291,290,294,-1,293,296,295,-1,295,269,293,-1,296,293,287,-1,287,297,296,-1,298,297,287,-1,287,286,298,-1,269,295,272,-1,226,227,225,-1,225,189,226,-1,189,190,226,-1,299,300,301,-1,121,122,120,-1,120,123,121,-1,121,124,24,-1,24,122,121,-1,26,24,125,-1,126,127,128,-1,127,126,129,-1,129,130,127,-1,128,127,120,-1,123,120,127,-1,123,127,131,-1,133,134,132,-1,132,135,133,-1,136,131,133,-1,131,136,137,-1,135,138,136,-1,136,133,135,-1,131,134,133,-1,228,229,230,-1,225,227,228,-1,228,230,225,-1,105,5,26,-1,26,125,105,-1,231,229,232,-1,229,231,230,-1,232,229,233,-1,233,234,232,-1,230,235,225,-1,235,230,236,-1,231,236,230,-1,235,237,225,-1,139,108,140,-1,141,140,108,-1,108,111,141,-1,142,141,111,-1,111,119,142,-1,143,144,145,-1,146,145,144,-1,143,145,139,-1,139,140,143,-1,144,147,148,-1,144,148,149,-1,149,148,150,-1,147,151,148,-1,151,152,148,-1,150,148,153,-1,153,148,154,-1,152,154,148,-1,139,145,146,-1,146,155,139,-1,155,157,156,-1,156,139,155,-1,158,143,140,-1,140,141,158,-1,159,158,141,-1,141,142,159,-1,24,124,125,-1,160,161,157,-1,157,155,160,-1,162,163,161,-1,161,160,162,-1,164,165,163,-1,163,162,164,-1,68,70,166,-1,166,70,165,-1,165,164,166,-1,147,144,143,-1,143,167,147,-1,146,144,149,-1,149,168,146,-1,168,160,155,-1,155,146,168,-1,158,169,167,-1,167,143,158,-1,159,170,169,-1,169,158,159,-1,149,150,171,-1,171,168,149,-1,160,168,171,-1,171,162,160,-1,173,174,172,-1,172,175,173,-1,138,176,174,-1,174,136,138,-1,177,131,130,-1,130,129,178,-1,178,177,130,-1,132,134,177,-1,177,178,132,-1,134,131,177,-1,24,83,122,-1,120,85,84,-1,84,128,120,-1,122,83,85,-1,85,120,122,-1,87,86,178,-1,178,129,87,-1,132,178,86,-1,86,88,132,-1,129,126,89,-1,89,87,129,-1,128,84,89,-1,89,126,128,-1,90,91,176,-1,179,93,92,-1,92,180,179,-1,179,176,91,-1,91,93,179,-1,172,179,180,-1,170,181,173,-1,173,169,170,-1,172,174,179,-1,176,179,174,-1,97,138,135,-1,135,98,97,-1,132,88,98,-1,98,135,132,-1,175,172,152,-1,152,151,175,-1,167,169,173,-1,173,175,167,-1,164,162,171,-1,171,166,164,-1,166,180,92,-1,92,68,166,-1,171,150,153,-1,153,166,171,-1,180,166,153,-1,153,154,180,-1,180,154,152,-1,152,172,180,-1,97,90,138,-1,138,90,176,-1,136,174,137,-1,137,173,181,-1,174,173,137,-1,119,117,104,-1,111,117,119,-1,167,151,147,-1,175,151,167,-1,201,225,237,-1,189,225,201,-1,131,127,130,-1,293,276,292,-1,269,276,293,-1,125,182,105,-1,181,170,183,-1,183,184,181,-1,185,183,170,-1,170,159,185,-1,182,185,159,-1,159,142,182,-1,181,184,131,-1,119,182,142,-1,105,182,119,-1,121,123,184,-1,184,183,121,-1,124,121,183,-1,183,185,124,-1,125,124,185,-1,185,182,125,-1,131,184,123,-1,131,137,181,-1,291,302,289,-1,299,302,300,-1,118,114,115,-1,117,114,118,-1,112,108,107,-1,110,108,112,-1,156,108,139,-1,106,108,156,-1,234,238,239,-1,239,238,240,-1,240,241,239,-1,242,241,240,-1,240,243,242,-1,244,242,243,-1,243,245,244,-1,210,244,245,-1,245,211,210,-1,212,190,246,-1,226,246,190,-1,247,226,227,-1,228,247,227,-1,247,228,248,-1,249,248,228,-1};
			return value;
		}
		private int[] getIndexedFaceSet_11_199_texCoordIndex_3()
		{
			int[] value = {228,233,249,-1,233,239,249,-1,239,233,234,-1,248,249,250,-1,218,251,219,-1,251,252,253,-1,250,253,252,-1,252,251,218,-1,248,250,252,-1,247,254,246,-1,246,226,247,-1,254,224,212,-1,212,246,254,-1,248,252,254,-1,254,247,248,-1,218,224,254,-1,254,252,218,-1,210,219,251,-1,251,244,210,-1,244,251,253,-1,253,242,244,-1,242,253,250,-1,250,241,242,-1,241,250,249,-1,249,239,241,-1,286,299,301,-1,301,298,286,-1,285,304,303,-1,303,288,285,-1,292,305,304,-1,304,285,292,-1,276,281,305,-1,305,292,276,-1,304,306,289,-1,289,303,304,-1,305,307,306,-1,306,304,305,-1,281,284,307,-1,307,305,281,-1,289,306,290,-1,307,290,306,-1,284,266,290,-1,290,307,284,-1,303,299,286,-1,286,288,303,-1,303,289,299,-1,299,289,302,-1,297,298,301,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_12_199_point_1()
		{
			double[] value = {0.0000,0.8783,4.8700,0.0000,1.8610,5.6300,0.0000,1.4410,5.3490,0.0000,3.4060,4.5240,0.0000,5.1990,4.7390,0.0000,0.9739,5.0640,0.0000,2.5800,4.8560,0.0000,2.2110,5.2920,0.0000,0.4934,4.6780,0.0000,0.3902,4.3060,0.0000,0.8352,4.7540,0.0000,0.9007,4.5550,0.0000,-0.3768,3.7050,0.0000,-0.9384,3.3190,0.0000,-1.0330,2.9400,0.0000,7.4440,4.6980,0.0000,-0.8666,2.1710,0.0000,10.2600,3.8950,0.0000,11.4300,1.0160,0.0000,11.5700,-3.2400,0.0000,1.1680,-4.0950,0.0000,9.7630,-5.4610,0.0000,-0.6657,1.2430,0.0000,0.1225,-1.9910,0.0000,-0.2918,-0.2247,4.3390,9.0810,-3.7730,3.9450,3.2410,-3.3180,1.9950,1.2870,-3.8660,3.3860,10.7600,-2.8430,4.3990,1.6960,-1.3850,5.1350,4.0150,-1.6760,3.9300,1.3840,-0.5102,5.0120,5.0200,-0.8630,4.1790,1.6200,-1.5770,4.9170,4.0740,-1.8550,3.6890,1.2910,-0.4955,4.7000,5.1880,-0.9110,3.7510,1.8090,0.7529,1.2330,0.0355,-0.2831,1.2560,0.3297,-1.7570,3.7660,1.5920,-0.5620,1.9270,11.3300,-3.1080,4.5410,9.3320,-2.4660,0.7067,11.6700,0.9268,4.0500,3.9930,-1.3190,1.6160,-0.2444,3.2920,0.7396,0.7015,4.3580,0.7307,0.9735,4.6180,2.1340,11.3700,0.7594,3.7720,10.6600,0.4192,4.5810,9.3690,-0.6614,4.3160,8.6340,1.4670,4.7070,7.7680,-0.1583,3.6330,9.5500,2.6560,1.8480,10.1000,3.5520,4.5870,4.8810,-0.1490,4.0500,3.3620,0.5064,2.7630,0.5994,0.9473,1.4150,-0.2675,1.1380,2.4900,3.3990,3.6250,3.6010,2.6230,3.1490,1.5320,4.4900,4.0510,1.5020,2.7160,3.8570,1.0910,3.3360,3.9680,4.0140,3.6830,2.6530,4.0280,4.1550,1.5690,3.9210,2.5990,2.5980,3.7790,3.5530,3.1320,4.2230,5.9170,1.5420,3.9740,2.9590,1.5780,3.7240,1.6920,1.6430,3.3590,0.8142,1.7670,1.6010,-0.3245,2.0400,4.1140,6.6640,2.7600,3.6200,7.0360,3.4600,2.7230,7.3120,4.1980,1.6830,7.3920,4.5570,3.9690,4.5870,3.0360,4.0340,5.4080,2.9030,3.6930,1.5690,2.7790,3.4020,0.8195,2.7220,1.6870,-0.3262,2.8230,3.4850,4.5650,3.4660,3.5720,5.8430,3.5350,3.5720,5.2230,3.5560,1.0420,1.9030,4.8580,0.9314,1.4320,4.9270,0.9418,0.9451,4.3840,0.6963,0.8861,4.4300,0.6638,0.9257,4.3650,0.5502,-0.2755,3.6990,0.7131,0.9050,4.4860,1.3830,0.1309,3.6460,0.3663,-0.8626,3.3320,0.2731,0.9315,4.5010,0.3499,0.8809,4.7000,0.4401,0.4508,4.2830,0.4464,0.5647,4.6210,0.3110,2.5250,4.7250,0.2368,2.0790,5.2440};
			return value;
		}
		private double[] getCoordinate_12_199_point_2()
		{
			double[] value = {3.2190,0.9094,3.3740,2.3970,1.1190,3.8920,1.6200,1.2970,4.5230,0.3865,1.0350,4.9440,2.4110,2.3810,3.5230,3.6620,2.3370,3.2810,3.4760,1.5960,3.4770,2.5230,2.2070,3.7950,2.5130,1.6910,4.0710,2.7000,6.0760,4.2170,2.6650,5.4930,4.1270,2.5540,4.8270,3.8360,0.4560,3.3890,4.4140,1.2340,2.4020,4.2840,1.4600,5.7890,4.6430,0.8218,5.1980,4.6530,0.3528,1.5770,5.2730,0.3591,0.9104,4.7750,3.0730,9.6050,-4.6130,5.2660,6.3780,-1.6090,1.8120,9.5580,-5.3500,1.9940,0.5092,3.6650,2.6440,0.2584,1.8920,2.5560,0.2974,3.2700,2.6950,0.2342,2.7180,0.0000,5.6060,6.3130,0.0000,8.2340,5.9870,0.0000,11.6100,3.7900,0.0000,10.5300,4.9710,0.0000,11.8500,2.1760,0.0000,4.9260,6.0990,5.0440,4.3800,-0.2258,4.8710,4.6980,2.5850,3.9760,4.8460,4.4980,2.3550,4.9910,5.5900,0.7709,11.8800,1.8260,3.9840,10.7800,0.7706,2.6230,11.5900,0.9046,2.0990,11.6600,3.0420,3.1810,10.6400,4.0670,5.2240,5.3700,2.6210,4.1700,5.5210,4.6260,2.4690,5.6690,5.7800,2.4560,8.2760,5.4910,4.0270,8.2000,4.4410,5.0980,8.2180,2.7790,5.2570,8.2190,0.1574,5.4470,5.0130,-0.1112,4.1390,6.4650,-4.7290,3.1130,6.9890,-5.6090,1.4190,5.8720,-6.3070,0.0000,6.0770,-6.3130,3.0500,2.7940,-4.7690,1.8180,2.7540,-5.6210,0.0000,2.9590,-5.7320,-4.3390,9.0810,-3.7730,-3.9450,3.2410,-3.3180,-1.9950,1.2870,-3.8660,-3.3860,10.7600,-2.8430,-4.3990,1.6960,-1.3850,-5.1350,4.0150,-1.6760,-3.9300,1.3840,-0.5102,-5.0120,5.0200,-0.8630,-4.1790,1.6200,-1.5770,-4.9170,4.0740,-1.8550,-3.6890,1.2910,-0.4955,-4.7000,5.1880,-0.9110,-3.7510,1.8090,0.7529,-1.2330,0.0355,-0.2831,-1.2560,0.3297,-1.7570,-3.7660,1.5920,-0.5620,-1.9270,11.3300,-3.1080,-4.5410,9.3320,-2.4660,-0.7067,11.6700,0.9268,-4.0500,3.9930,-1.3190,-1.6160,-0.2444,3.2920,-0.7395,0.7015,4.3580,-0.7307,0.9735,4.6180,-2.1340,11.3700,0.7594,-3.7720,10.6600,0.4192,-4.5810,9.3690,-0.6614,-4.3160,8.6340,1.4670,-4.7070,7.7680,-0.1583,-3.6330,9.5500,2.6560,-1.8480,10.1000,3.5520,-4.5870,4.8810,-0.1490,-4.0500,3.3620,0.5064,-2.7630,0.5994,0.9473,-1.4150,-0.2675,1.1380,-2.4900,3.3990,3.6250,-3.6010,2.6230,3.1490,-1.5320,4.4900,4.0510,-1.5020,2.7160,3.8570,-1.0910,3.3360,3.9680,-4.0140,3.6830,2.6530,-4.0280,4.1550,1.5690,-3.9210,2.5990,2.5980,-3.7790,3.5530,3.1320,-4.2230,5.9170,1.5420,-3.9740,2.9590,1.5780};
			return value;
		}
		private double[] getCoordinate_12_199_point_3()
		{
			double[] value = {-3.7240,1.6920,1.6430,-3.3590,0.8142,1.7670,-1.6010,-0.3245,2.0400,-4.1140,6.6640,2.7600,-3.6200,7.0360,3.4600,-2.7230,7.3120,4.1980,-1.6830,7.3920,4.5570,-3.9690,4.5870,3.0360,-4.0340,5.4080,2.9030,-3.6930,1.5690,2.7790,-3.4020,0.8195,2.7220,-1.6870,-0.3262,2.8230,-3.4850,4.5650,3.4660,-3.5720,5.8430,3.5350,-3.5720,5.2230,3.5560,-1.0420,1.9030,4.8580,-0.9314,1.4320,4.9270,-0.9417,0.9451,4.3840,-0.6963,0.8861,4.4300,-0.6638,0.9257,4.3650,-0.5502,-0.2755,3.6990,-0.7131,0.9050,4.4860,-1.3830,0.1309,3.6460,-0.3663,-0.8626,3.3320,-0.2731,0.9315,4.5010,-0.3499,0.8809,4.7000,-0.4401,0.4508,4.2830,-0.4464,0.5647,4.6210,-0.3110,2.5250,4.7250,-0.2368,2.0790,5.2440,-3.2190,0.9094,3.3740,-2.3970,1.1190,3.8920,-1.6200,1.2970,4.5230,-0.3865,1.0350,4.9440,-2.4110,2.3810,3.5230,-3.6620,2.3370,3.2810,-3.4760,1.5960,3.4770,-2.5230,2.2070,3.7950,-2.5130,1.6910,4.0710,-2.7000,6.0760,4.2170,-2.6650,5.4930,4.1270,-2.5540,4.8270,3.8360,-0.4560,3.3890,4.4140,-1.2340,2.4020,4.2840,-1.4600,5.7890,4.6430,-0.8218,5.1980,4.6530,-0.3528,1.5770,5.2730,-0.3591,0.9104,4.7750,-3.0730,9.6050,-4.6130,-5.2660,6.3780,-1.6090,-1.8120,9.5580,-5.3500,-1.9940,0.5092,3.6650,-2.6440,0.2584,1.8920,-2.5560,0.2974,3.2700,-2.6950,0.2342,2.7180,-5.0440,4.3800,-0.2258,-4.8710,4.6980,2.5850,-3.9760,4.8460,4.4980,-2.3550,4.9910,5.5900,-0.7709,11.8800,1.8260,-3.9840,10.7800,0.7706,-2.6230,11.5900,0.9046,-2.0990,11.6600,3.0420,-3.1810,10.6400,4.0670,-5.2240,5.3700,2.6210,-4.1700,5.5210,4.6260,-2.4690,5.6690,5.7800,-2.4560,8.2760,5.4910,-4.0270,8.2000,4.4410,-5.0980,8.2180,2.7790,-5.2570,8.2190,0.1574,-5.4470,5.0130,-0.1112,-4.1390,6.4650,-4.7290,-3.1130,6.9890,-5.6090,-1.4190,5.8720,-6.3070,-3.0500,2.7940,-4.7690,-1.8180,2.7540,-5.6210,0.7067,11.6700,0.9268,0.0000,11.4300,1.0160,2.1340,11.3700,0.7594,0.7067,11.6700,0.9268,3.7720,10.6600,0.4192,2.1340,11.3700,0.7594,4.5870,4.8810,-0.1490,4.7070,7.7680,-0.1583,0.0000,11.4300,1.0160,-0.7067,11.6700,0.9268,-0.7067,11.6700,0.9268,-2.1340,11.3700,0.7594,-2.1340,11.3700,0.7594,-3.7720,10.6600,0.4192,-4.7070,7.7680,-0.1583,-4.5870,4.8810,-0.1490,0.0000,11.4300,1.0160,0.7067,11.6700,0.9268,4.5870,4.8810,-0.1490,0.7709,11.8800,1.8260,2.6230,11.5900,0.9046,5.4470,5.0130,-0.1112,-0.7067,11.6700,0.9268};
			return value;
		}
		private double[] getCoordinate_12_199_point_4()
		{
			double[] value = {-4.5870,4.8810,-0.1490,-0.7709,11.8800,1.8260,-2.6230,11.5900,0.9046,-5.4470,5.0130,-0.1112,2.6230,11.5900,0.9046,-2.6230,11.5900,0.9046};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_12_200_point_1()
		{
			double[] value = {0.0573,0.6967,0.0565,0.6829,0.0109,0.6680,0.0107,0.6873,0.0634,0.6688,0.0110,0.6506,0.1803,0.9015,0.1606,0.8328,0.2007,0.8632,0.1960,0.9081,0.1497,0.7628,0.1564,0.7441,0.1737,0.7586,0.1475,0.7399,0.1655,0.7552,0.1926,0.8659,0.1844,0.9156,0.1503,0.7535,0.1604,0.8619,0.1133,0.7081,0.0314,0.6673,0.0247,0.6410,0.0709,0.6690,0.0622,0.6857,0.0111,0.6334,0.0735,0.6655,0.0110,0.6412,0.0703,0.6659,0.0275,0.7047,0.0273,0.6997,0.0383,0.7110,0.0239,0.7189,0.0367,0.7193,0.0458,0.7220,0.0242,0.7202,0.0373,0.7201,0.0380,0.7232,0.0252,0.7258,0.0454,0.7437,0.0709,0.7379,0.0239,0.7500,0.1597,0.8681,0.1579,0.8143,0.1488,0.7571,0.1354,0.7175,0.1560,0.7976,0.1593,0.8464,0.1506,0.8404,0.1575,0.8870,0.1028,0.8330,0.1441,0.7985,0.1396,0.8857,0.1050,0.8972,0.1001,0.7872,0.0663,0.8020,0.0672,0.8818,0.0510,0.8298,0.1598,0.9240,0.1667,0.9474,0.1637,0.9518,0.1477,0.7512,0.1370,0.7174,0.1454,0.9682,0.1427,0.9433,0.1121,0.9802,0.1103,0.9533,0.0735,0.9835,0.0644,0.9400,0.0103,0.9132,0.0408,0.9133,0.0111,0.9855,0.1464,0.7855,0.1428,0.9153,0.1397,0.7521,0.1302,0.7212,0.1091,0.9271,0.0564,0.7877,0.0494,0.7650,0.1040,0.7560,0.1043,0.7793,0.0195,0.7726,0.0355,0.7211,0.0210,0.7213,0.0111,0.6375,0.0110,0.6969,0.0110,0.6626,0.0109,0.7198,0.0109,0.7168,0.0109,0.7187,0.0110,0.7014,0.0108,0.7626,0.0107,0.7785,0.0105,0.8326,0.0107,0.7953,0.0222,0.7929,0.0275,0.8319,0.0997,0.7303,0.0108,0.7438,0.0109,0.7229,0.1089,0.6924};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_2()
		{
			double[] value = {0.1057,0.6936,0.0848,0.7029,0.1109,0.6910,0.0573,0.6970,0.0564,0.6832,0.0630,0.6690,0.1814,0.9007,0.2017,0.8622,0.1613,0.8322,0.1972,0.9071,0.1566,0.7436,0.1500,0.7622,0.1741,0.7579,0.1476,0.7394,0.1659,0.7545,0.1936,0.8649,0.1857,0.9148,0.1505,0.7530,0.1614,0.8613,0.1131,0.7079,0.0308,0.6678,0.0704,0.6692,0.0239,0.6416,0.0618,0.6860,0.0730,0.6657,0.0699,0.6661,0.0271,0.7053,0.0380,0.7115,0.0268,0.7003,0.0235,0.7195,0.0364,0.7198,0.0455,0.7224,0.0239,0.7208,0.0377,0.7237,0.0370,0.7206,0.0249,0.7263,0.0452,0.7441,0.0707,0.7381,0.0237,0.7506,0.1605,0.8675,0.1583,0.8136,0.1489,0.7566,0.1353,0.7171,0.1563,0.7970,0.1511,0.8398,0.1599,0.8458,0.1583,0.8864,0.1444,0.7980,0.1033,0.8329,0.1404,0.8853,0.1058,0.8971,0.1002,0.7872,0.0665,0.8022,0.0679,0.8820,0.0514,0.8302,0.1609,0.9234,0.1680,0.9467,0.1651,0.9511,0.1477,0.7507,0.1368,0.7170,0.1438,0.9428,0.1468,0.9677,0.1114,0.9531,0.1136,0.9800,0.0654,0.9402,0.0750,0.9836,0.0416,0.9138,0.1466,0.7850,0.1437,0.9149,0.1396,0.7517,0.1300,0.7208,0.1101,0.9269,0.0566,0.7880,0.1039,0.7559,0.0493,0.7654,0.1043,0.7792,0.0195,0.7733,0.0352,0.7216,0.0207,0.7219,0.0223,0.7935,0.0278,0.8325,0.0995,0.7302,0.1086,0.6922,0.1053,0.6934,0.0845,0.7029,0.1105,0.6908,0.5672,0.9106,0.5766,0.9675,0.5296,0.9775,0.5063,0.9145,0.5063,0.9684,0.6305,0.9446,0.6259,0.8955,0.6485,0.8690,0.6418,0.7943,0.6455,0.7739,0.6614,0.8463,0.6575,0.7455,0.5960,0.8103,0.6256,0.8041};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_3()
		{
			double[] value = {0.5618,0.8114,0.5064,0.8126,0.6858,0.7499,0.6725,0.7284,0.6668,0.7266,0.6784,0.7499,0.6437,0.7459,0.6373,0.7229,0.5876,0.7457,0.5839,0.7229,0.5064,0.7411,0.5064,0.7183,0.5063,0.9780,0.5317,0.9805,0.5927,0.9748,0.6375,0.9469,0.6795,0.8606,0.6742,0.8485,0.5063,0.9189,0.5063,0.8342,0.5872,0.8380,0.6389,0.8402,0.6110,0.9271,0.5754,0.9674,0.5063,0.9620,0.4455,0.9105,0.4831,0.9774,0.4361,0.9675,0.3822,0.9445,0.3643,0.8689,0.3867,0.8954,0.3710,0.7942,0.3674,0.7737,0.3514,0.8461,0.3555,0.7453,0.4167,0.8102,0.3872,0.8040,0.4509,0.8114,0.3404,0.7282,0.3272,0.7498,0.3461,0.7264,0.3344,0.7497,0.3691,0.7458,0.3755,0.7228,0.4251,0.7456,0.4288,0.7229,0.4809,0.9805,0.4200,0.9748,0.3752,0.9468,0.3334,0.8604,0.3385,0.8483,0.4255,0.8379,0.4016,0.9270,0.3738,0.8401,0.4372,0.9673,0.5685,0.6871,0.5861,0.6783,0.5473,0.6455,0.5496,0.6512,0.3982,0.6623,0.3199,0.6645,0.3521,0.7176,0.5721,0.7229,0.6023,0.7197,0.3139,0.7387,0.3101,0.7743,0.3506,0.7743,0.5844,0.7546,0.5777,0.7140,0.6092,0.7745,0.5621,0.6675,0.5363,0.6444,0.5775,0.7746,0.4666,0.6249,0.4923,0.6408,0.4189,0.6442,0.5781,0.7743,0.3814,0.6498,0.4894,0.6568,0.5086,0.6859,0.4848,0.7339,0.4900,0.7742,0.3964,0.6876,0.4010,0.7226,0.4070,0.7742,0.5684,0.6870,0.5473,0.6452,0.5861,0.6780,0.5496,0.6510,0.3981,0.6622,0.3521,0.7177,0.3199,0.6642,0.5721,0.7228,0.6023,0.7194,0.3139,0.7386,0.5844,0.7539,0.5777,0.7134,0.5621,0.6669,0.5363,0.6440,0.4666,0.6246};
			return value;
		}
		private double[] getTextureCoordinate_12_200_point_4()
		{
			double[] value = {0.4189,0.6438,0.4923,0.6404,0.3814,0.6496,0.4894,0.6567,0.5085,0.6859,0.4848,0.7341,0.3964,0.6877,0.4010,0.7227};
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
			MFVec3f Coordinate_9_32_point = new MFVec3f(new double[] {0.0000,0.7566,0.0196,0.0000,0.6552,-0.3888,-0.3142,0.6552,-0.3341,-0.5442,0.6552,-0.2681,-0.6284,0.6552,0.0196,-0.5442,0.6552,0.3073,-0.3142,0.6552,0.3733,0.0000,0.6552,0.4281,0.3142,0.6552,0.3733,0.5442,0.6552,0.3073,0.6284,0.6552,0.0196,0.5442,0.6552,-0.2681,0.3142,0.6552,-0.3341,0.0000,0.3783,-0.6351,-0.4064,0.3783,-0.5474,-0.7039,0.3783,-0.3077,-0.8128,0.3783,0.0196,-0.7039,0.3783,0.3469,-0.4064,0.3783,0.5017,0.0000,0.3783,0.5894,0.4064,0.3783,0.5017,0.7039,0.3783,0.3469,0.8128,0.3783,0.0196,0.7039,0.3783,-0.3077,0.4064,0.3783,-0.5474,0.0000,0.0000,-0.6906,-0.4693,0.0000,-0.5894,-0.8128,0.0000,-0.3127,-0.9385,0.0000,0.0196,-0.8128,0.0000,0.3976,-0.4693,0.0000,0.5894,0.0000,0.0000,0.6906,0.4693,0.0000,0.5894,0.8128,0.0000,0.3976,0.9385,0.0000,0.0196,0.8128,0.0000,-0.3127,0.4693,0.0000,-0.5894,0.0000,-0.3783,-0.5894,-0.4064,-0.3783,-0.5017,-0.7039,-0.3783,-0.2620,-0.8128,-0.3783,0.0196,-0.7039,-0.3783,0.3469,-0.4064,-0.3783,0.5017,0.0000,-0.3783,0.5894,0.4064,-0.3783,0.5017,0.7039,-0.3783,0.3469,0.8128,-0.3783,0.0196,0.7039,-0.3783,-0.2620,0.4064,-0.3783,-0.5017,0.0000,-0.6552,-0.3127,-0.2346,-0.6552,-0.2620,-0.4064,-0.6552,-0.1694,-0.4693,-0.6552,0.0196,-0.4064,-0.6552,0.2086,-0.2346,-0.6552,0.3469,0.0000,-0.6552,0.3976,0.2346,-0.6552,0.3469,0.4064,-0.6552,0.2086,0.4693,-0.6552,0.0196,0.4064,-0.6552,-0.1694,0.2346,-0.6552,-0.2620,0.0000,-0.7566,0.0196});
			return Coordinate_9_32_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #50, 488 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #50, 488 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #50, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_50_point()
		{
			MFVec3f Coordinate_11_50_point = new MFVec3f(new double[] {2.6160,-0.0823,0.0541,1.4520,-0.0823,2.8900,-1.1630,-0.0823,3.5900,-2.9750,-0.0823,1.6280,-2.9750,-0.0823,-1.5200,-1.1630,-0.0823,-3.4820,1.4520,-0.0823,-2.7820,2.6160,-3.3950,0.0541,1.4520,-3.3950,2.8900,-1.1630,-3.3950,3.5900,-2.9750,-3.3950,1.6280,-2.9750,-3.3950,-1.5200,-1.1630,-3.3950,-3.4820,1.4520,-3.3950,-2.7820,2.7080,-6.9100,0.0541,1.5450,-6.9100,2.8900,-1.0710,-6.9100,3.5900,-2.8820,-6.9100,1.6280,-2.8820,-6.9100,-1.5200,-1.0710,-6.9100,-3.4820,1.5450,-6.9100,-2.7820,2.9750,-11.7700,0.0541,1.6760,-11.7700,3.2190,-1.2430,-11.7700,4.0010,-2.9640,-11.7700,1.8100,-2.9640,-11.7700,-1.7020,-1.2430,-11.7700,-3.8920,1.6760,-11.7700,-3.1110,1.8960,-7.7890,0.0541,1.0030,-7.7890,2.2300,-1.0030,-7.7890,2.7670,-2.3260,-7.7890,1.2610,-2.3260,-7.7890,-1.1530,-1.0030,-7.7890,-2.6590,1.0030,-7.7890,-2.1220,1.9050,-9.6800,0.0541,1.0820,-9.6800,1.7820,-0.7654,-9.6800,2.2090,-2.2470,-9.6800,1.0130,-2.2470,-9.6800,-0.9049,-0.7654,-9.6800,-2.1010,1.0820,-9.6800,-1.6740,1.8120,1.6760,0.0541,0.9506,1.6760,2.1520,-0.9843,1.6760,2.6700,-2.5360,1.6760,1.2180,-2.5360,1.6760,-1.1100,-0.9843,1.6760,-2.5620,0.9506,1.6760,-2.0440,1.6280,-12.9300,0.0541,0.9097,-12.9300,1.7090,-0.7038,-12.9300,2.0820,-1.9980,-12.9300,1.0370,-1.9980,-12.9300,-0.7834,-0.7038,-12.9300,-1.8280,0.9097,-12.9300,-1.4550,0.5546,-13.7900,0.0541,0.2406,-13.7900,0.8599,-0.4650,-13.7900,1.0230,-1.0310,-13.7900,0.5662,-1.0310,-13.7900,-0.3121,-0.4650,-13.7900,-0.7688,0.2406,-13.7900,-0.6058});
			return Coordinate_11_50_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #51, 152 total numbers made up of 76 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_51_point()
		{
			MFVec2f TextureCoordinate_11_51_point = new MFVec2f(new double[] {0.6566,0.2462,0.6181,0.2462,0.5796,0.2462,0.5411,0.2462,0.5026,0.2462,0.4641,0.2462,0.6951,0.2462,0.6566,0.2951,0.6181,0.2951,0.5796,0.2951,0.5411,0.2951,0.5026,0.2951,0.4641,0.2951,0.6951,0.2951,0.6566,0.3439,0.6181,0.3439,0.5796,0.3439,0.5411,0.3439,0.5026,0.3439,0.4641,0.3439,0.6951,0.3439,0.6566,0.3927,0.6181,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.6951,0.3927,0.4256,0.2462,0.4256,0.2951,0.4256,0.2462,0.4256,0.3439,0.4256,0.2951,0.4256,0.3927,0.4256,0.3439,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.2462,0.6181,0.2462,0.6951,0.2462,0.5796,0.2462,0.5411,0.2462,0.5026,0.2462,0.4641,0.2462,0.4256,0.2462,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927});
			return TextureCoordinate_11_51_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #90, 488 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #90, 488 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #90, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_90_point()
		{
			MFVec3f Coordinate_11_90_point = new MFVec3f(new double[] {-2.6160,-0.0823,0.0541,-1.4520,-0.0823,2.8900,1.1630,-0.0823,3.5900,2.9750,-0.0823,1.6280,2.9750,-0.0823,-1.5200,1.1630,-0.0823,-3.4820,-1.4520,-0.0823,-2.7820,-2.6160,-3.3950,0.0541,-1.4520,-3.3950,2.8900,1.1630,-3.3950,3.5900,2.9750,-3.3950,1.6280,2.9750,-3.3950,-1.5200,1.1630,-3.3950,-3.4820,-1.4520,-3.3950,-2.7820,-2.7080,-6.9100,0.0541,-1.5450,-6.9100,2.8900,1.0710,-6.9100,3.5900,2.8820,-6.9100,1.6280,2.8820,-6.9100,-1.5200,1.0710,-6.9100,-3.4820,-1.5450,-6.9100,-2.7820,-2.9750,-11.7700,0.0541,-1.6760,-11.7700,3.2190,1.2430,-11.7700,4.0010,2.9640,-11.7700,1.8100,2.9640,-11.7700,-1.7020,1.2430,-11.7700,-3.8920,-1.6760,-11.7700,-3.1110,-1.8960,-7.7890,0.0541,-1.0030,-7.7890,2.2300,1.0030,-7.7890,2.7670,2.3260,-7.7890,1.2610,2.3260,-7.7890,-1.1530,1.0030,-7.7890,-2.6590,-1.0030,-7.7890,-2.1220,-1.9050,-9.6800,0.0541,-1.0820,-9.6800,1.7820,0.7654,-9.6800,2.2090,2.2470,-9.6800,1.0130,2.2470,-9.6800,-0.9049,0.7654,-9.6800,-2.1010,-1.0820,-9.6800,-1.6740,-1.8120,1.6760,0.0541,-0.9506,1.6760,2.1520,0.9843,1.6760,2.6700,2.5360,1.6760,1.2180,2.5360,1.6760,-1.1100,0.9843,1.6760,-2.5620,-0.9506,1.6760,-2.0440,-1.6280,-12.9300,0.0541,-0.9097,-12.9300,1.7090,0.7038,-12.9300,2.0820,1.9980,-12.9300,1.0370,1.9980,-12.9300,-0.7834,0.7038,-12.9300,-1.8280,-0.9097,-12.9300,-1.4550,-0.5546,-13.7900,0.0541,-0.2406,-13.7900,0.8599,0.4650,-13.7900,1.0230,1.0310,-13.7900,0.5662,1.0310,-13.7900,-0.3121,0.4650,-13.7900,-0.7688,-0.2406,-13.7900,-0.6058});
			return Coordinate_11_90_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #91, 152 total numbers made up of 76 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_91_point()
		{
			MFVec2f TextureCoordinate_11_91_point = new MFVec2f(new double[] {0.6566,0.2462,0.6181,0.2462,0.5796,0.2462,0.5411,0.2462,0.5026,0.2462,0.4641,0.2462,0.6951,0.2462,0.6566,0.2951,0.6181,0.2951,0.5796,0.2951,0.5411,0.2951,0.5026,0.2951,0.4641,0.2951,0.6951,0.2951,0.6566,0.3439,0.6181,0.3439,0.5796,0.3439,0.5411,0.3439,0.5026,0.3439,0.4641,0.3439,0.6951,0.3439,0.6566,0.3927,0.6181,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.6951,0.3927,0.4256,0.2462,0.4256,0.2951,0.4256,0.2462,0.4256,0.3439,0.4256,0.2951,0.4256,0.3927,0.4256,0.3439,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.2462,0.6181,0.2462,0.6951,0.2462,0.5796,0.2462,0.5411,0.2462,0.5026,0.2462,0.4641,0.2462,0.4256,0.2462,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927,0.6566,0.3927,0.6181,0.3927,0.6951,0.3927,0.5796,0.3927,0.5411,0.3927,0.5026,0.3927,0.4641,0.3927,0.4256,0.3927});
			return TextureCoordinate_11_91_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #121, 480 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #121, 480 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #121, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_121_point()
		{
			MFVec3f Coordinate_10_121_point = new MFVec3f(new double[] {0.0000,9.7000,0.1258,0.0000,9.0490,-2.4960,-2.0170,9.0490,-2.1450,-3.4940,9.0490,-1.7210,-4.0340,9.0490,0.1258,-3.4940,9.0490,1.9730,-2.0170,9.0490,2.3970,0.0000,9.0490,2.7480,2.0170,9.0490,2.3970,3.4940,9.0490,1.9730,4.0340,9.0490,0.1258,3.4940,9.0490,-1.7210,2.0170,9.0490,-2.1450,0.0000,7.2710,-4.0770,-2.6090,7.2710,-3.5140,-4.5190,7.2710,-1.9750,-5.2180,7.2710,0.1258,-4.5190,7.2710,2.2270,-2.6090,7.2710,3.2200,0.0000,7.2710,3.7830,2.6090,7.2710,3.2200,4.5190,7.2710,2.2270,5.2180,7.2710,0.1258,4.5190,7.2710,-1.9750,2.6090,7.2710,-3.5140,0.0000,4.8430,-4.4340,-3.0120,4.8430,-3.7830,-5.2180,4.8430,-2.0070,-6.0250,4.8430,0.1258,-5.2180,4.8430,2.5520,-3.0120,4.8430,3.7830,0.0000,4.8430,4.4340,3.0120,4.8430,3.7830,5.2180,4.8430,2.5520,6.0250,4.8430,0.1258,5.2180,4.8430,-2.0070,3.0120,4.8430,-3.7830,0.0000,2.4140,-3.7830,-2.6090,2.4140,-3.2200,-4.5190,2.4140,-1.6820,-5.2180,2.4140,0.1258,-4.5190,2.4140,2.2270,-2.6090,2.4140,3.2200,0.0000,2.4140,3.7830,2.6090,2.4140,3.2200,4.5190,2.4140,2.2270,5.2180,2.4140,0.1258,4.5190,2.4140,-1.6820,2.6090,2.4140,-3.2200,0.0000,0.6366,-2.0070,-1.5060,0.6366,-1.6820,-2.6090,0.6366,-1.0870,-3.0120,0.6366,0.1258,-2.6090,0.6366,1.3390,-1.5060,0.6366,2.2270,0.0000,0.6366,2.5520,1.5060,0.6366,2.2270,2.6090,0.6366,1.3390,3.0120,0.6366,0.1258,2.6090,0.6366,-1.0870,1.5060,0.6366,-1.6820,0.0000,-0.0142,0.1258});
			return Coordinate_10_121_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #190, 1404 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #190, 1404 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #190, 768 total numbers made up of 256 3-tuple values.
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
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #191, 516 total numbers made up of 258 2-tuple values.
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
				.append(new MFVec2f(getTextureCoordinate_11_191_point_3()));
			return TextureCoordinate_11_191_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=11, element #199, 2192 total numbers.
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
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=11, element #199, 2192 total numbers.
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
		/** Large attribute array: Coordinate point field, scene-graph level=12, element #199, 918 total numbers made up of 306 3-tuple values.
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
		/** Large attribute array: TextureCoordinate point field, scene-graph level=12, element #200, 616 total numbers made up of 308 2-tuple values.
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
	 * @return KoreanCharacter03Hyun model
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
        X3D thisExampleX3dModel = new KoreanCharacter03Hyun().getX3dModel();

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
			System.out.println("WARNING: \"KoreanCharacter03Hyun\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"KoreanCharacter03Hyun\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}