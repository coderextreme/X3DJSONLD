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
 <p> Related links: JinLOA1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JinLOA1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d">JinLOA1.x3d</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> rescale smaller than 30m! convert inches to meters? what about motion scaling? </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d</a> </td>
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

import net.coderextreme.X3DRoots;
import java.util.List;
import java.util.ArrayList;
public class JinLOA1 implements X3DRoots
{
	/** Default constructor to create this object. */
	public JinLOA1 ()
	{
	  initialize();
	}
        public List<X3D> getRootNodeList() {
                List<X3D> list = new ArrayList<X3D>(1);
                list.add(x3dModel);
                return list;
        }

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("JinLOA1.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jin Hoon Lee and Min Joo Lee"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Chul Hee Jung and Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("31 March 2011"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 November 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 December 2021"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("rescale smaller than 30m! convert inches to meters? what about motion scaling?"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacter00ReadMe.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KoreanCharactersIllustrated.pdf"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Suwon HAnim Converter"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("JinLOA1.x3d"))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("JinLOA1").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("hanim_JinLOA1").setName("JinLOA1").setLoa(1).setScale(0.0225,0.0225,0.0225).setVersion("2.0")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"}))
        .setMetadata(new MetadataString().setName("authorEmail").setValue(new String[] {"myeongwonlee@gmail.com"}))
        .setMetadata(new MetadataString().setName("creationDate").setValue(new String[] {"31 March 2011"}))
        .setMetadata(new MetadataString().setName("gender").setValue(new String[] {"female"}))
        .setMetadata(new MetadataFloat().setName("height").setValue(new double[] {1.5}))
        .setMetadata(new MetadataFloat().setName("weight").setValue(new double[] {50.0}))
        .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new String[] {"validation testing"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(0.0,30.530001,-0.707600).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimSegment("hanim_sacrum").setName("sacrum")
          .addChild(new Transform().setTranslation(0.0,30.530001,-0.707600)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                .setTexture(new ImageTexture("JinLOA1TextureAtlas").setUrl(new String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"})))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_8_34_coordIndex()).setTexCoordIndex(getIndexedFaceSet_8_34_texCoordIndex())
                .setCoord(new Coordinate().setPoint(getCoordinate_9_34_point()))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.6211,0.5754,0.7851,0.5720,0.7614,0.5720,0.6907,0.5698,0.6200,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.6200,0.5698,0.6907,0.5698,0.7614,0.5720,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.5450,0.3974,0.4163,0.4938,0.5450,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.7950,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.6160,0.3695,0.5438,0.3780,0.4160,0.4530,0.5438,0.3780,0.6160,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.6980,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.6980,0.3508,0.7635,0.3451,0.6237,0.3398})))))))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,35.799999,-0.707600).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_pelvis").setName("pelvis")
            .addChild(new Transform().setTranslation(0.0,35.799999,-0.707600)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_9_43_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_43_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_43_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.6211,0.5754,0.7851,0.5720,0.7614,0.5720,0.6907,0.5698,0.6200,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.6200,0.5698,0.6907,0.5698,0.7614,0.5720,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.5450,0.3974,0.4163,0.4938,0.5450,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.7950,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.6160,0.3695,0.5438,0.3780,0.4160,0.4530,0.5438,0.3780,0.6160,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.6980,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.6980,0.3508,0.7635,0.3451,0.6237,0.3398})))))))
          .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(4.207,32.020,-0.815500).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_l_thigh").setName("l_thigh")
              .addChild(new Transform().setTranslation(4.207,32.020,-0.815500)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_10_52_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_52_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_52_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7190,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.2630,0.6284,0.2630,0.7456,0.2630,0.6805,0.2630,0.5762,0.2630,0.5112,0.2630,0.5344,0.2630,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.9170,0.5452,0.9170,0.5266,0.8900,0.5304,0.8900,0.5452,0.9170,0.5220,0.8900,0.5268,0.9170,0.5349,0.8900,0.5370,0.9170,0.5555,0.8900,0.5534,0.9170,0.5684,0.8900,0.5636,0.9170,0.5638,0.8900,0.5600,0.8746,0.5310,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581})))))))
            .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(4.116,17.260,-0.863900).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_calf").setName("l_calf")
                .addChild(new Transform().setTranslation(4.116,17.260,-0.863900)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1}).setTexCoordIndex(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.1200,-1.0760,0.9688,0.6030,-1.0760,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.3370,-4.6130,0.0234,1.4600,-3.6220,2.0190,1.2360,-1.6280,2.4200,2.1180,-1.9120,0.0234,-0.8111,-3.6220,2.5670,-0.7468,-1.6280,2.9030,-2.2540,-4.6130,1.2550,-2.3370,-1.9120,0.9793,-2.2540,-5.3830,-1.3680,-2.3370,-1.9120,-0.9325,-0.8111,-5.3830,-2.9030,-0.7468,-1.9120,-2.3680,1.4600,-5.3830,-2.3550,1.2360,-1.9120,-1.8850,1.1210,-0.0032,1.8960,1.9330,-0.0032,0.0234,-0.7056,-0.0032,2.3180,-2.1700,-0.0032,1.1360,-2.1700,-0.0032,-0.9244,-0.7056,-0.0032,-2.0610,1.1210,-0.0032,-1.6400,1.6070,-12.9200,0.0032,0.9216,-12.9100,1.5650,-0.6190,-12.9100,1.9510,-1.8540,-12.9200,0.8701,-1.8540,-12.9400,-0.9762,-0.6190,-12.9400,-1.7420,0.9216,-12.9400,-1.3560,0.7072,-14.5300,0.0239,0.3604,-14.5300,0.8140,-0.4188,-14.5300,1.0090,-1.0440,-14.5300,0.4624,-1.0440,-14.5400,-0.4714,-0.4188,-14.5400,-0.8587,0.3604,-14.5400,-0.6635})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9309,0.5848,0.9190,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.9190,0.5848,0.9845,0.5321,0.9550,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.5200,0.8291,0.5571,0.8787,0.5200,0.8825,0.5571,0.9550,0.5200,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243})))))))
              .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(3.854,3.939,-0.703800).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_talus").setName("l_talus")
                  .addChild(new Transform().setTranslation(3.854,3.939,-0.703800)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_12_70_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_70_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_70_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.4330,0.0595,0.4411,0.0186,0.4244,0.1312,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186})))))))
                .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(3.854,3.640,0.740200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                    .addComments(" TODO append _2 ")
                    .addChild(new Transform().setTranslation(3.854,3.640,0.740200)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,28,26,25,-1,25,29,28,-1,35,27,26,-1,26,28,35,-1,27,35,40,-1,25,26,31,-1,31,30,25,-1,31,26,27,-1,27,32,31,-1,32,27,40,-1,40,41,32,-1,42,29,25,-1,25,30,42,-1,28,29,34,-1,34,33,28,-1,35,28,33,-1,33,36,35,-1,36,40,35,-1,34,37,38,-1,38,33,34,-1,38,39,36,-1,36,33,38,-1,39,41,40,-1,40,36,39,-1,42,37,34,-1,34,29,42,-1}).setTexCoordIndex(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.9270,-1.6270,-1.0130,2.0890,-3.6480,-1.0130,0.0,0.2797,0.3064,2.0450,-0.3017,-1.0130,1.6950,0.0029,-0.0151,-2.9270,-1.6270,-1.0130,-2.0450,-0.3017,-1.0130,-2.0890,-3.6480,-1.0130,-1.6950,0.0029,-0.0151,0.0,-3.6480,-1.0130,1.7400,-0.3226,1.1580,2.6610,-1.8660,0.9192,2.1400,-3.6480,0.9192,-1.7400,-0.3226,1.1580,-2.6610,-1.8660,0.9192,-2.1400,-3.6480,0.9192,0.0,-3.6480,0.9192,0.0,-0.0274,1.6610,2.4050,-1.6560,-1.9150,1.7500,-2.9420,-1.9150,0.0,-2.9420,-1.9150,-1.7500,-2.9420,-1.9150,-2.4050,-1.6560,-1.9150,-1.7420,-0.5681,-1.9150,1.7420,-0.5681,-1.9150,1.7840,-0.6480,2.3320,2.2160,-2.2670,4.1440,2.2160,-3.6480,3.7760,0.0,-2.2670,5.4630,0.0,-0.5463,3.9500,1.7400,-0.3226,1.1580,2.6610,-1.8660,0.9192,2.1400,-3.6480,0.9192,-2.2160,-2.2670,4.1440,-1.7840,-0.6480,2.3320,0.0,-3.6480,5.0960,-2.2160,-3.6480,3.7760,-1.7400,-0.3226,1.1580,-2.6610,-1.8660,0.9192,-2.1400,-3.6480,0.9192,0.0,-3.6480,3.7760,0.0,-3.6480,0.9192,0.0,-0.0274,1.6610})))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4330,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.5320,0.0980,0.5645,0.0707,0.4885,0.1020,0.5026,0.0440,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.0440,0.4885,0.1020,0.5320,0.0980,0.5945,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432})))))))))))
          .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-4.207,32.020,-0.815500).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_r_thigh").setName("r_thigh")
              .addChild(new Transform().setTranslation(-4.207,32.020,-0.815500)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_10_92_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_92_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_92_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.7190,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.2630,0.6284,0.2630,0.7456,0.2630,0.6805,0.2630,0.5762,0.2630,0.5112,0.2630,0.5344,0.2630,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.9170,0.5452,0.9170,0.5266,0.8900,0.5304,0.8900,0.5452,0.9170,0.5220,0.8900,0.5268,0.9170,0.5349,0.8900,0.5370,0.9170,0.5555,0.8900,0.5534,0.9170,0.5684,0.8900,0.5636,0.9170,0.5638,0.8900,0.5600,0.8746,0.5310,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581})))))))
            .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-4.116,17.260,-0.863900).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_calf").setName("r_calf")
                .addChild(new Transform().setTranslation(-4.116,17.260,-0.863900)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1}).setTexCoordIndex(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.1200,1.0760,0.9688,0.6030,1.0760,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.3370,-4.6130,0.0234,-1.4600,-3.6220,2.0190,-1.2360,-1.6280,2.4200,-2.1180,-1.9120,0.0234,0.8111,-3.6220,2.5670,0.7468,-1.6280,2.9030,2.2540,-4.6130,1.2550,2.3370,-1.9120,0.9793,2.2540,-5.3830,-1.3680,2.3370,-1.9120,-0.9325,0.8111,-5.3830,-2.9030,0.7468,-1.9120,-2.3680,-1.4600,-5.3830,-2.3550,-1.2360,-1.9120,-1.8850,-1.1210,-0.0032,1.8960,-1.9330,-0.0032,0.0234,0.7056,-0.0032,2.3180,2.1700,-0.0032,1.1360,2.1700,-0.0032,-0.9244,0.7056,-0.0032,-2.0610,-1.1210,-0.0032,-1.6400,-1.6070,-12.9200,0.0032,-0.9216,-12.9100,1.5650,0.6190,-12.9100,1.9510,1.8540,-12.9200,0.8701,1.8540,-12.9400,-0.9762,0.6190,-12.9400,-1.7420,-0.9216,-12.9400,-1.3560,-0.7072,-14.5300,0.0239,-0.3604,-14.5300,0.8140,0.4188,-14.5300,1.0090,1.0440,-14.5300,0.4624,1.0440,-14.5400,-0.4714,0.4188,-14.5400,-0.8587,-0.3604,-14.5400,-0.6635})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.9309,0.5848,0.9190,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.9190,0.5848,0.9845,0.5321,0.9550,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.5200,0.8291,0.5571,0.8787,0.5200,0.8825,0.5571,0.9550,0.5200,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243})))))))
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(-3.854,3.939,-0.703800).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
                  .addChild(new Transform().setTranslation(-3.854,3.939,-0.703800)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_12_110_coordIndex()).setTexCoordIndex(getIndexedFaceSet_12_110_texCoordIndex())
                        .setCoord(new Coordinate().setPoint(getCoordinate_13_110_point()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.3819,0.1710,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398,0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.4330,0.0595,0.4411,0.0186,0.4244,0.1312,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186})))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-3.854,3.640,0.740200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                    .addComments(" TODO append _2 ")
                    .addChild(new Transform().setTranslation(-3.854,3.640,0.740200)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,28,29,25,-1,25,26,28,-1,35,28,26,-1,26,27,35,-1,27,40,35,-1,25,30,31,-1,31,26,25,-1,31,32,27,-1,27,26,31,-1,32,41,40,-1,40,27,32,-1,42,30,25,-1,25,29,42,-1,28,33,34,-1,34,29,28,-1,35,36,33,-1,33,28,35,-1,36,35,40,-1,34,33,38,-1,38,37,34,-1,38,33,36,-1,36,39,38,-1,39,36,40,-1,40,41,39,-1,42,29,34,-1,34,37,42,-1}).setTexCoordIndex(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.9270,-1.6270,-1.0130,-2.0890,-3.6480,-1.0130,0.0,0.2797,0.3064,-2.0450,-0.3017,-1.0130,-1.6950,0.0029,-0.0151,2.9270,-1.6270,-1.0130,2.0450,-0.3017,-1.0130,2.0890,-3.6480,-1.0130,1.6950,0.0029,-0.0151,0.0,-3.6480,-1.0130,-1.7400,-0.3226,1.1580,-2.6610,-1.8660,0.9192,-2.1400,-3.6480,0.9192,1.7400,-0.3226,1.1580,2.6610,-1.8660,0.9192,2.1400,-3.6480,0.9192,0.0,-3.6480,0.9192,0.0,-0.0274,1.6610,-2.4050,-1.6560,-1.9150,-1.7500,-2.9420,-1.9150,0.0,-2.9420,-1.9150,1.7500,-2.9420,-1.9150,2.4050,-1.6560,-1.9150,1.7420,-0.5681,-1.9150,-1.7420,-0.5681,-1.9150,-1.7840,-0.6480,2.3320,-2.2160,-2.2670,4.1440,-2.2160,-3.6480,3.7760,0.0,-2.2670,5.4630,0.0,-0.5463,3.9500,-1.7400,-0.3226,1.1580,-2.6610,-1.8660,0.9192,-2.1400,-3.6480,0.9192,2.2160,-2.2670,4.1440,1.7840,-0.6480,2.3320,0.0,-3.6480,5.0960,2.2160,-3.6480,3.7760,1.7400,-0.3226,1.1580,2.6610,-1.8660,0.9192,2.1400,-3.6480,0.9192,0.0,-3.6480,3.7760,0.0,-3.6480,0.9192,0.0,-0.0274,1.6610})))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4330,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.4330,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.4330,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.4330,0.0595,0.4244,0.1312,0.4244,0.1312,0.5320,0.0980,0.5645,0.0707,0.4885,0.1020,0.5026,0.0440,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.0440,0.4885,0.1020,0.5320,0.0980,0.5945,0.0186,0.5487,0.0186,0.4640,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432}))))))))))))
        .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(0.0,40.070,-0.852700).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("hanim_l5").setName("l5")
            .addChild(new Transform().setTranslation(0.0,40.070,-0.852700)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                  .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_9_133_coordIndex()).setTexCoordIndex(getIndexedFaceSet_9_133_texCoordIndex())
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_133_point()))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_134_point()))))))
          .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,57.430,-0.686300).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("hanim_skull").setName("skull")
              .addChild(new Transform().setTranslation(0.0,57.430,-0.686300)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                    .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(getIndexedFaceSet_10_142_coordIndex()).setTexCoordIndex(getIndexedFaceSet_10_142_texCoordIndex())
                    .setCoord(new Coordinate().setPoint(getCoordinate_11_142_point()))
                    .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_11_143_point()))))))
            .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(5.975,52.0,-0.145200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_l_upperarm").setName("l_upperarm")
                .addChild(new Transform().setTranslation(5.975,52.0,-0.145200)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1}).setTexCoordIndex(new int[] {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5250,1.2460,-1.6800,3.6810,1.2360,0.0337,2.4080,1.2470,1.6630,0.4657,1.2640,0.9556,0.5379,1.2640,-1.1100,2.7430,-0.0209,-2.3100,4.3390,-0.0351,0.0570,2.5810,-0.0195,2.3070,-0.1009,0.0044,1.3300,-0.0013,0.0036,-1.5230,2.7200,-2.5340,-2.3100,4.3170,-2.5480,0.0570,2.5590,-2.5330,2.3070,-0.1233,-2.5090,1.3300,-0.0237,-2.5100,-1.5230,2.7590,-3.6090,-2.4420,4.4480,-3.6240,0.0619,2.5880,-3.6080,2.4420,-0.2497,-3.5830,1.4090,-0.1443,-3.5830,-1.6100,2.2450,-1.7580,-1.9390,3.4650,-1.7690,-0.4543,2.8340,-1.7630,1.6290,1.2230,-1.7490,1.4320,0.8596,-1.7460,-0.7734,2.2630,-7.5660,-1.5690,3.5310,-7.5770,-0.3780,2.8750,-7.5710,1.2930,1.2020,-7.5560,1.1350,0.8242,-7.5530,-0.6340,2.2670,-11.6200,-1.5110,3.4870,-11.6300,-0.3651,2.8560,-11.6200,1.2430,1.2450,-11.6100,1.0910,0.8817,-11.6,-0.6115,2.2130,-12.1700,-0.8985,2.9280,-12.1700,-0.2267,2.5580,-12.1700,0.7160,1.6140,-12.1600,0.6268,1.4010,-12.1600,-0.3711})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.3160,0.2834,0.3322,0.2834,0.2450,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.4420,0.6736,0.3947,0.6736,0.4041,0.6736,0.4180,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.4180,0.6485,0.4415,0.6706,0.4306,0.6706,0.3950,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.3840,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114})))))))
              .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(8.093,40.380001,-0.250200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_l_forearm").setName("l_forearm")
                  .addChild(new Transform().setTranslation(8.093,40.380001,-0.250200)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1}).setTexCoordIndex(new int[] {2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.2150,0.3047,-1.1520,1.1550,0.2966,-0.2588,0.6199,0.3013,1.0400,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.6250,1.4720,-0.8561,-0.4271,0.7164,-0.8496,1.6250,-1.0790,-0.8342,1.4820,-1.4330,-0.8312,-0.6588,0.1328,-3.5,-1.6070,1.5510,-3.5130,-0.4225,0.7810,-2.9250,1.6100,-1.1360,-2.9090,1.4680,-1.5510,-3.4860,-0.6519,0.0592,-8.7130,-1.4370,1.0930,-8.7220,-0.1279,0.5047,-8.7160,1.5100,-0.8932,-8.7040,1.3770,-1.1690,-8.7020,-0.3428,0.0092,-9.3360,-0.8855,0.7154,-9.3420,0.0084,0.3135,-9.3390,1.0430,-0.6412,-9.3310,0.9519,-0.8292,-9.3290,-0.1383})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.3990,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.3890,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.6740,0.4346,0.6740,0.3899,0.6740,0.3980,0.6740,0.4083,0.6740,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.6740,0.3806,0.6740,0.3796,0.6705,0.3806,0.6740})))))))
                .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(7.808,31.459999,-0.058490).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
                    .addChild(new Transform().setTranslation(7.808,31.459999,-0.058490)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1}).setTexCoordIndex(new int[] {4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.2470,0.0700,0.7975,1.2090,0.0872,-1.3490,-0.7098,-0.0015,0.8912,-0.7183,0.0002,-1.2830,-0.9295,-0.6130,1.4780,1.6470,-0.4252,1.3880,1.5890,-0.3921,-1.9890,-1.0440,-0.5947,-1.9840,-0.8227,-2.5210,2.4080,1.9510,-2.3340,2.0800,1.8920,-2.3010,-2.4090,-1.1920,-2.6140,-2.2480,-0.5703,-3.9580,1.6940,0.8836,-4.2,1.7500,0.8251,-4.1670,-2.0710,-0.7842,-3.9680,-1.9340,-1.0370,-0.5968,-0.1872,-1.6420,-2.5610,1.9410,-1.9510,-0.9492,0.0580,-1.9140,-1.0160,1.8850,-1.6490,-2.5600,0.1377,-1.0660,-2.6100,-0.2014,1.2090,0.0872,-1.3490,-0.7183,0.0002,-1.2830,-0.7098,-0.0015,0.8912,1.2470,0.0700,0.7975,1.2090,0.0872,-1.3490,-0.7098,-0.0015,0.8912})))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.1170,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.1480,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.0110,0.3241,0.0033,0.1730,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.0320,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.1720,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.0640,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.1840,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.1400,0.1857}))))))))))
            .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-5.975,52.0,-0.145200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment("hanim_r_upperarm").setName("r_upperarm")
                .addChild(new Transform().setTranslation(-5.975,52.0,-0.145200)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1}).setTexCoordIndex(new int[] {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.5250,1.2460,-1.6800,-3.6810,1.2360,0.0337,-2.4080,1.2470,1.6630,-0.4657,1.2640,0.9556,-0.5379,1.2640,-1.1100,-2.7430,-0.0209,-2.3100,-4.3390,-0.0351,0.0570,-2.5810,-0.0195,2.3070,0.1009,0.0044,1.3300,0.0013,0.0036,-1.5230,-2.7200,-2.5340,-2.3100,-4.3170,-2.5480,0.0570,-2.5590,-2.5330,2.3070,0.1233,-2.5090,1.3300,0.0237,-2.5100,-1.5230,-2.7590,-3.6090,-2.4420,-4.4480,-3.6240,0.0619,-2.5880,-3.6080,2.4420,0.2497,-3.5830,1.4090,0.1443,-3.5830,-1.6100,-2.2450,-1.7580,-1.9390,-3.4650,-1.7690,-0.4543,-2.8340,-1.7630,1.6290,-1.2230,-1.7490,1.4320,-0.8596,-1.7460,-0.7734,-2.2630,-7.5660,-1.5690,-3.5310,-7.5770,-0.3780,-2.8750,-7.5710,1.2930,-1.2020,-7.5560,1.1350,-0.8242,-7.5530,-0.6340,-2.2670,-11.6200,-1.5110,-3.4870,-11.6300,-0.3651,-2.8560,-11.6200,1.2430,-1.2450,-11.6100,1.0910,-0.8817,-11.6,-0.6115,-2.2130,-12.1700,-0.8985,-2.9280,-12.1700,-0.2267,-2.5580,-12.1700,0.7160,-1.6140,-12.1600,0.6268,-1.4010,-12.1600,-0.3711})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.3160,0.2834,0.3322,0.2834,0.2450,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.4420,0.6736,0.3947,0.6736,0.4041,0.6736,0.4180,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.4180,0.6485,0.4415,0.6706,0.4306,0.6706,0.3950,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.3840,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114})))))))
              .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-8.093,40.380001,-0.250200).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                .addChild(new HAnimSegment("hanim_r_forearm").setName("r_forearm")
                  .addChild(new Transform().setTranslation(-8.093,40.380001,-0.250200)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1}).setTexCoordIndex(new int[] {26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.2150,0.3047,-1.1520,-1.1550,0.2966,-0.2588,-0.6199,0.3013,1.0400,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.6250,-1.4720,-0.8561,-0.4271,-0.7164,-0.8496,1.6250,1.0790,-0.8342,1.4820,1.4330,-0.8312,-0.6588,-0.1328,-3.5,-1.6070,-1.5510,-3.5130,-0.4225,-0.7810,-2.9250,1.6100,1.1360,-2.9090,1.4680,1.5510,-3.4860,-0.6519,-0.0592,-8.7130,-1.4370,-1.0930,-8.7220,-0.1279,-0.5047,-8.7160,1.5100,0.8932,-8.7040,1.3770,1.1690,-8.7020,-0.3428,-0.0092,-9.3360,-0.8855,-0.7154,-9.3420,0.0084,-0.3135,-9.3390,1.0430,0.6412,-9.3310,0.9519,0.8292,-9.3290,-0.1383})))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.3990,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.3890,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.6740,0.4346,0.6740,0.3899,0.6740,0.3980,0.6740,0.4083,0.6740,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.6740,0.3806,0.6740,0.3796,0.6705,0.3806,0.6740})))))))
                .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(-7.808,31.459999,-0.058490).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
                  .addChild(new HAnimSegment("hanim_r_carpal").setName("r_carpal")
                    .addChild(new Transform().setTranslation(-7.808,31.459999,-0.058490)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.588,0.588,0.588))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159).setCoordIndex(new int[] {4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1}).setTexCoordIndex(new int[] {4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.2470,0.0700,0.7975,-1.2090,0.0872,-1.3490,0.7098,-0.0015,0.8912,0.7183,0.0002,-1.2830,0.9295,-0.6130,1.4780,-1.6470,-0.4252,1.3880,-1.5890,-0.3921,-1.9890,1.0440,-0.5947,-1.9840,0.8227,-2.5210,2.4080,-1.9510,-2.3340,2.0800,-1.8920,-2.3010,-2.4090,1.1920,-2.6140,-2.2480,0.5703,-3.9580,1.6940,-0.8836,-4.2,1.7500,-0.8251,-4.1670,-2.0710,0.7842,-3.9680,-1.9340,1.0370,-0.5968,-0.1872,1.6420,-2.5610,1.9410,1.9510,-0.9492,0.0580,1.9140,-1.0160,1.8850,1.6490,-2.5600,0.1377,1.0660,-2.6100,-0.2014,-1.2090,0.0872,-1.3490,0.7183,0.0002,-1.2830,0.7098,-0.0015,0.8912,-1.2470,0.0700,0.7975,-1.2090,0.0872,-1.3490,0.7098,-0.0015,0.8912})))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.8107,0.9924,0.8122,0.9033,0.7694,0.9912,0.7683,0.9026,0.1329,0.0347,0.0307,0.0051,0.0134,0.0353,0.1366,0.0058,0.1249,0.1081,0.0147,0.1170,0.1349,0.1856,0.0462,0.1842,0.1559,0.0454,0.1480,0.1033,0.3244,0.0096,0.1758,0.0039,0.1759,0.0110,0.3241,0.0033,0.1730,0.1764,0.3074,0.1757,0.1732,0.1519,0.3074,0.1513,0.1756,0.0320,0.2159,0.0368,0.1791,0.0165,0.3169,0.0458,0.3158,0.0193,0.1720,0.0594,0.2087,0.0476,0.1736,0.0504,0.2073,0.0640,0.2362,0.0821,0.3267,0.0796,0.1717,0.0822,0.1726,0.1297,0.3077,0.1289,0.3074,0.1865,0.1742,0.1840,0.0061,0.1086,0.1366,0.0368,0.1241,0.1189,0.0168,0.0309,0.0211,0.1882,0.1400,0.1857})))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
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
      .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
      .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
      .addSegments(new HAnimSegment().setUSE("hanim_l5"))
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
		private int[] getIndexedFaceSet_8_34_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_8_34_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_43_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_43_texCoordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_52_coordIndex_1()
		{
			int[] value = {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_52_texCoordIndex_1()
		{
			int[] value = {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_70_coordIndex_1()
		{
			int[] value = {1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_70_texCoordIndex_1()
		{
			int[] value = {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_92_coordIndex_1()
		{
			int[] value = {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_92_texCoordIndex_1()
		{
			int[] value = {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_110_coordIndex_1()
		{
			int[] value = {1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_12_110_texCoordIndex_1()
		{
			int[] value = {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_133_coordIndex_1()
		{
			int[] value = {3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1};
			return value;
		}
		private int[] getIndexedFaceSet_9_133_coordIndex_2()
		{
			int[] value = {79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_9_133_texCoordIndex_1()
		{
			int[] value = {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1};
			return value;
		}
		private int[] getIndexedFaceSet_9_133_texCoordIndex_2()
		{
			int[] value = {93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_10_133_point_1()
		{
			double[] value = {0.6928,14.7200,-1.2630,0.0,14.7700,-1.3550,1.4700,14.9300,-0.9099,2.0160,14.9100,0.2814,1.5730,14.6100,1.1100,2.9140,14.4600,0.3331,2.5990,15.3600,-1.4060,3.1870,13.6,1.5430,2.2390,13.3800,3.2300,0.9629,15.3900,-3.1520,0.0,15.3600,-3.3170,2.0350,15.4100,-2.8150,3.3160,12.3200,2.9700,5.0860,13.1300,2.0110,2.9820,14.2400,2.1810,2.2450,13.3800,3.8210,3.1310,12.6400,3.9,4.4200,13.9400,2.1050,5.6020,13.7300,0.1863,5.4720,13.0600,-1.4520,3.4390,15.3,0.3672,3.9530,14.4400,-2.2270,5.0730,14.7700,0.3672,4.6550,13.4900,-1.7800,1.8110,9.8370,-2.4300,0.0,9.5330,-2.5640,4.2410,10.8,-2.0430,1.0320,12.5400,-4.4270,0.0,12.5400,-4.5620,2.3900,12.9200,-3.9140,1.6770,9.1920,-3.1470,0.0,8.8700,-3.2660,4.1200,10.7100,-3.0320,4.2720,8.1320,4.1860,6.3540,8.7640,1.5430,2.1400,8.5820,-2.3620,4.3,8.6850,-1.8480,3.6950,5.5850,2.7680,5.0810,5.6220,1.5050,6.0960,10.2600,1.6700,5.9040,10.2500,-0.3303,5.5330,8.7180,-0.7796,1.4190,5.4730,-2.2200,3.5800,5.5280,-1.4340,4.7930,5.5780,-0.2489,3.6820,3.5920,2.8240,5.0770,3.6310,1.5270,1.2820,3.3030,-2.3650,3.5860,3.5010,-1.4370,4.7920,3.5750,-0.2999,4.1780,1.2620,3.9510,5.7600,1.2980,1.9940,1.5200,1.1050,-3.6780,3.9500,1.1150,-2.5360,5.3090,1.2200,-0.7397,3.7890,0.1874,3.2090,5.1660,0.2191,1.6850,1.5930,0.0680,-2.6760,3.6,0.0905,-1.8470,4.8410,0.1375,-0.4441,7.3990,13.4600,0.1863,6.9790,12.6400,-1.4520,6.9980,12.7,1.8990,6.2980,10.4200,1.6700,6.2920,10.4100,-0.3303,0.0,14.3400,1.7300,0.7806,14.3500,1.6080,0.0,12.1500,3.9010,1.3730,12.6900,3.6680,0.0,11.0500,3.8450,1.7130,11.8,3.6680,1.3800,12.6900,4.1370,0.0,11.4500,4.3610,1.5930,12.1200,4.3380,1.5790,8.7370,4.0810,1.2920,5.5540,3.2280,1.2810,3.3860,3.3360,1.6350,1.2310,4.5620,1.5950,0.1486,3.6450,0.0,12.2100,4.0600,-0.6928,14.7200,-1.2630,-1.4700,14.9300,-0.9099,-2.0160,14.9100,0.2814,-1.5730,14.6100,1.1100,-2.9140,14.4600,0.3331,-2.5990,15.3600,-1.4060,-3.1870,13.6,1.5430,-2.2390,13.3800,3.2300,-0.9629,15.3900,-3.1520,-2.0350,15.4100,-2.8150,-3.3160,12.3200,2.9700,-5.0860,13.1300,2.0110,-2.9820,14.2400,2.1810,-2.2450,13.3800,3.8210,-3.1310,12.6400,3.9,-4.4200,13.9400,2.1050,-5.6020,13.7300,0.1863,-5.4720,13.0600,-1.4520,-3.4390,15.3,0.3672,-3.9530,14.4400,-2.2270};
			return value;
		}
		private double[] getCoordinate_10_133_point_2()
		{
			double[] value = {-5.0730,14.7700,0.3672,-4.6550,13.4900,-1.7800,-1.8110,9.8370,-2.4300,-4.2410,10.8,-2.0430,-1.0320,12.5400,-4.4270,-2.3900,12.9200,-3.9140,-1.6770,9.1920,-3.1470,-4.1200,10.7100,-3.0320,-4.2720,8.1320,4.1860,-6.3540,8.7640,1.5430,-2.1400,8.5820,-2.3620,-4.3,8.6850,-1.8480,-3.6950,5.5850,2.7680,-5.0810,5.6220,1.5050,-6.0960,10.2600,1.6700,-5.9040,10.2500,-0.3303,-5.5330,8.7180,-0.7796,-1.4190,5.4730,-2.2200,-3.5800,5.5280,-1.4340,-4.7930,5.5780,-0.2489,-3.6820,3.5920,2.8240,-5.0770,3.6310,1.5270,-1.2820,3.3030,-2.3650,-3.5860,3.5010,-1.4370,-4.7920,3.5750,-0.2999,-4.1780,1.2620,3.9510,-5.7600,1.2980,1.9940,-1.5200,1.1050,-3.6780,-3.9500,1.1150,-2.5360,-5.3090,1.2200,-0.7397,-3.7890,0.1874,3.2090,-5.1660,0.2191,1.6850,-1.5930,0.0680,-2.6760,-3.6,0.0905,-1.8470,-4.8410,0.1375,-0.4441,-7.3990,13.4600,0.1863,-6.9790,12.6400,-1.4520,-6.9980,12.7,1.8990,-6.2980,10.4200,1.6700,-6.2920,10.4100,-0.3303,-0.7806,14.3500,1.6080,-1.3730,12.6900,3.6680,-1.7130,11.8,3.6680,-1.3800,12.6900,4.1370,-1.5930,12.1200,4.3380,-1.5790,8.7370,4.0810,-1.2920,5.5540,3.2280,-1.2810,3.3860,3.3360,-1.6350,1.2310,4.5620,-1.5950,0.1486,3.6450,0.5369,17.7700,-0.9410,0.0,17.7700,-1.0120,1.1390,17.7700,-0.6672,1.5620,17.7700,0.2561,1.2190,17.7700,0.8985,0.5424,14.7200,-0.9523,0.0,14.7700,-1.0240,1.1510,14.9300,-0.6757,1.5780,14.9100,0.2570,1.2320,14.6100,0.9059,0.6050,17.9,1.2850,0.0,17.3400,1.3790,0.0,14.3400,1.3910,0.6111,14.3500,1.2960,-0.5369,17.7700,-0.9410,-1.1390,17.7700,-0.6672,-1.5620,17.7700,0.2561,-1.2190,17.7700,0.8985,-0.5424,14.7200,-0.9523,-1.1510,14.9300,-0.6757,-1.5780,14.9100,0.2570,-1.2320,14.6100,0.9059,-0.6050,17.9,1.2850,-0.6111,14.3500,1.2960};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_134_point_1()
		{
			double[] value = {0.4756,0.6180,0.4724,0.6293,0.4618,0.6351,0.4566,0.6312,0.4542,0.6062,0.4644,0.6152,0.4472,0.6278,0.4554,0.6354,0.4381,0.6277,0.4381,0.5991,0.4005,0.6180,0.4195,0.6312,0.4143,0.6351,0.4037,0.6293,0.4219,0.6062,0.4289,0.6278,0.4117,0.6152,0.4207,0.6354,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.2410,0.5920,0.2112,0.5805,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1412,0.5207,0.1108,0.5655,0.0786,0.5849,0.0516,0.5759,0.1073,0.5839,0.0639,0.4488,0.0877,0.4617,0.0525,0.4715,0.1185,0.4741,0.1474,0.4856,0.1724,0.5255,0.2089,0.5196,0.2133,0.5560,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.3470,0.4316,0.3616,0.5328,0.2733,0.5359,0.2380,0.4930,0.2490,0.5451,0.2638,0.4568,0.3214,0.4203,0.2252,0.4828,0.0420,0.4060,0.0909,0.3980,0.2183,0.3850,0.3504,0.3844,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1525,0.3869,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0177,0.3051,0.0982,0.3020,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.0190,0.2349,0.1011,0.2410,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.2400,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.2270,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.0346,0.5664,0.0399,0.5407,0.2661,0.5914,0.2505,0.5754,0.2410,0.5920,0.2112,0.5805,0.0763,0.4945,0.0865,0.5614};
			return value;
		}
		private double[] getTextureCoordinate_10_134_point_2()
		{
			double[] value = {0.1025,0.5076,0.0652,0.5465,0.1108,0.5655,0.1412,0.5207,0.0786,0.5849,0.0516,0.5759,0.1073,0.5839,0.0877,0.4617,0.1185,0.4741,0.1474,0.4857,0.1724,0.5255,0.2133,0.5560,0.2089,0.5196,0.1645,0.5709,0.2067,0.5908,0.1632,0.5887,0.1708,0.4854,0.1963,0.4863,0.2708,0.4736,0.2733,0.5359,0.2380,0.4930,0.2490,0.5451,0.2638,0.4568,0.2252,0.4828,0.0420,0.4060,0.0909,0.3980,0.2183,0.3850,0.3504,0.3844,0.0206,0.3452,0.0903,0.3446,0.1525,0.3869,0.1491,0.3449,0.1538,0.4251,0.1784,0.4249,0.1911,0.3858,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.0177,0.3051,0.0982,0.3020,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.0190,0.2349,0.1011,0.2410,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.2400,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.2270,0.2131,0.3536,0.2151,0.1879,0.2143,0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1544,0.4288,0.1782,0.4286,0.3477,0.4310,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3223,0.4192,0.3477,0.4310,0.3223,0.4192,0.3518,0.3851,0.3554,0.5911,0.3505,0.5919,0.3505,0.5919,0.3518,0.3851,0.3518,0.3851,0.3629,0.3439,0.3629,0.3439,0.3633,0.2922,0.3633,0.2922,0.3553,0.2398,0.3553,0.2398,0.3555,0.2151,0.3511,0.5932,0.3536,0.2151,0.4444,0.6326,0.4381,0.6333,0.4381,0.6725,0.4444,0.6725,0.4516,0.6354,0.4515,0.6725,0.4566,0.6351,0.4565,0.6725,0.4526,0.6312,0.4524,0.6725,0.4381,0.6277,0.4453,0.6278,0.4452,0.6742,0.4381,0.6669,0.4317,0.6326,0.4317,0.6725,0.4245,0.6354};
			return value;
		}
		private double[] getTextureCoordinate_10_134_point_3()
		{
			double[] value = {0.4246,0.6725,0.4195,0.6351,0.4197,0.6725,0.4235,0.6312,0.4237,0.6725,0.4309,0.6742,0.4309,0.6278,0.4462,0.6326,0.4381,0.6333,0.4299,0.6326};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_142_coordIndex_1()
		{
			int[] value = {58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_142_coordIndex_2()
		{
			int[] value = {141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_142_coordIndex_3()
		{
			int[] value = {279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_10_142_texCoordIndex_1()
		{
			int[] value = {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_142_texCoordIndex_2()
		{
			int[] value = {203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1};
			return value;
		}
		private int[] getIndexedFaceSet_10_142_texCoordIndex_3()
		{
			int[] value = {353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_11_142_point_1()
		{
			double[] value = {4.7340,2.2950,-0.4780,0.0,7.9250,-7.3470,0.0,2.7380,-7.5510,2.5960,3.0550,-7.1130,5.8200,3.9150,-2.2390,3.7120,1.2250,-2.2900,3.2610,1.4530,-4.2520,5.6580,2.5990,-1.9830,1.8200,1.2890,-5.1640,0.0,0.1375,-3.5920,2.3950,4.9500,6.3460,0.7761,4.9120,6.8830,0.0,9.7400,6.8590,4.4080,9.2030,3.6730,0.0,11.2500,5.6500,2.2250,10.8900,5.3040,5.9620,4.4140,1.1650,4.0410,0.8383,3.5230,1.9720,9.6010,6.3570,2.5370,7.0010,6.3620,3.6940,6.6490,5.2870,0.4475,7.3410,7.3620,0.5130,6.6980,7.1190,4.8430,6.1880,3.4310,3.8860,6.5930,4.9510,3.6810,5.1940,5.0010,3.8260,5.0010,4.6640,3.2840,2.4720,4.4900,4.5430,4.1240,3.4990,3.8590,3.8610,4.3640,4.5750,3.7920,4.0060,5.0650,1.1830,1.2470,4.8630,1.7300,2.3700,5.2560,2.6950,2.0240,5.5490,5.5320,2.7140,5.1610,2.0350,2.7220,5.4420,3.8780,2.8870,6.1110,4.3890,0.2634,4.0620,5.8680,4.2210,6.0070,7.8560,-0.5637,7.0210,1.6610,-0.9157,6.5680,4.8550,-0.7308,6.3260,4.6910,-1.5500,6.2300,0.8303,-3.4410,4.9770,5.3640,-5.6730,6.3260,4.6560,-2.9500,4.2160,3.4270,-5.1310,3.5220,5.8180,-7.1660,3.4240,1.8600,-7.2780,2.4790,7.9250,-6.7570,1.9270,1.9810,-8.8900,0.0,3.7530,-8.4540,5.5840,7.6910,-2.7800,5.8530,7.6830,-1.7720,5.1810,8.4760,2.1040,3.0380,10.7900,4.4440,5.1230,3.0320,-5.3040,5.6640,8.0610,0.8754,4.7210,7.9250,-5.2580,0.0,5.5190,-7.9650,2.4790,5.8200,-7.4830,5.5950,7.6300,-2.1410,0.0,0.1227,-8.2810,1.1730,1.8320,-6.1140,3.9780,2.3240,-4.6400,2.9170,-0.9285,-7.3100,3.3230,2.0800,-5.3710,1.9680,-1.5610,-5.0130,0.0,-0.9435,-6.5400,4.7130,2.4440,-3.4770,4.4200,-0.2924,-4.4770,1.4110,0.5541,-3.4840,0.0,1.0350,-6.0310,2.2750,0.8807,-3.7630,0.9407,0.7103,-4.5370,3.8180,1.7290,-3.1390,4.6640,1.8660,-1.4360,3.6570,9.1880,4.9600,0.0,7.5480,7.4050,1.5590,7.2660,7.0080,2.7910,5.0410,6.0170,-4.7340,2.2950,-0.4780,-2.5960,3.0550,-7.1130,-5.8200,3.9150,-2.2390,-3.7120,1.2250,-2.2900,-3.2610,1.4530,-4.2520,-5.6580,2.5990,-1.9830,-1.8200,1.2890,-5.1640,-2.3950,4.9500,6.3460,-0.7761,4.9120,6.8830,-4.4080,9.2030,3.6730,-2.2250,10.8900,5.3040,-5.9620,4.4140,1.1650,-4.0410,0.8383,3.5230,-1.9720,9.6010,6.3570,-2.5370,7.0010,6.3620,-3.6940,6.6490,5.2870,-0.4475,7.3410,7.3620,-0.5130,6.6980,7.1190,-4.8430,6.1880,3.4310};
			return value;
		}
		private double[] getCoordinate_11_142_point_2()
		{
			double[] value = {-3.8860,6.5930,4.9510,-3.6810,5.1940,5.0010,-3.8260,5.0010,4.6640,-3.2840,2.4720,4.4900,-4.5430,4.1240,3.4990,-3.8590,3.8610,4.3640,-4.5750,3.7920,4.0060,-5.0650,1.1830,1.2470,-4.8630,1.7300,2.3700,-5.2560,2.6950,2.0240,-5.5490,5.5320,2.7140,-5.1610,2.0350,2.7220,-5.4420,3.8780,2.8870,-6.1110,4.3890,0.2634,-4.0620,5.8680,4.2210,-6.0070,7.8560,-0.5637,-7.0210,1.6610,-0.9157,-6.5680,4.8550,-0.7308,-6.3260,4.6910,-1.5500,-6.2300,0.8303,-3.4410,-4.9770,5.3640,-5.6730,-6.3260,4.6560,-2.9500,-4.2160,3.4270,-5.1310,-3.5220,5.8180,-7.1660,-3.4240,1.8600,-7.2780,-2.4790,7.9250,-6.7570,-1.9270,1.9810,-8.8900,-5.5840,7.6910,-2.7800,-5.8530,7.6830,-1.7720,-5.1810,8.4760,2.1040,-3.0380,10.7900,4.4440,-5.1230,3.0320,-5.3040,-5.6640,8.0610,0.8754,-4.7210,7.9250,-5.2580,-2.4790,5.8200,-7.4830,-5.5950,7.6300,-2.1410,-1.1730,1.8320,-6.1140,-3.9780,2.3240,-4.6400,-2.9170,-0.9285,-7.3100,-3.3230,2.0800,-5.3710,-1.9680,-1.5610,-5.0130,-4.7130,2.4440,-3.4770,-4.4200,-0.2924,-4.4770,-1.4110,0.5541,-3.4840,-2.2750,0.8807,-3.7630,-0.9407,0.7103,-4.5370,-3.8180,1.7290,-3.1390,-4.6640,1.8660,-1.4360,-3.6570,9.1880,4.9600,-1.5590,7.2660,7.0080,-2.7910,5.0410,6.0170,0.0,12.8900,2.1910,2.4790,12.6,2.1910,0.0,12.7700,-3.0730,2.4790,13.0100,-0.5905,0.0,13.3,-0.5905,2.4790,12.4700,-3.0730,-2.4790,12.6,2.1910,-2.4790,13.0100,-0.5905,-2.4790,12.4700,-3.0730,0.0,12.1900,4.0690,-2.4790,11.8,3.6650,2.4790,11.8,3.6650,-4.7380,11.1300,-0.5905,-4.5810,10.5900,1.8930,4.7380,11.1300,-0.5905,4.5810,10.5900,1.8930,-4.7760,9.3420,-4.2540,4.7760,9.3420,-4.2540,-4.6510,10.9400,-2.6960,4.6510,10.9400,-2.6960,0.0,10.9100,-6.0640,-2.4790,10.5800,-5.8730,2.4790,10.5800,-5.8730,5.0380,2.0870,0.2634,5.3510,2.2690,0.2568,5.5750,4.9930,0.4877,5.7590,4.3130,-0.6689,5.6720,3.1190,-0.6884,5.0540,4.3890,0.2634,4.6170,3.9190,1.9810,0.0,-1.2990,4.2830,2.5070,0.2122,3.4670,1.2520,-0.7037,3.7530,2.1810,1.2900,4.7030,1.0830,-0.2065,4.5310,0.0,3.9490,5.8230,4.1220,4.7520,3.4340,0.0,4.4570,6.5290,3.8430,3.4860,3.4740,0.6247,4.2870,6.2170,3.8840,5.3400,4.1440,0.2615,3.9490,5.8230,2.1030,4.8810,5.7800,1.5990,4.2250,5.4290,2.1030,4.7630,5.7130,2.1750,4.4220,5.2920,1.0610,2.8410,5.2400,3.3450,2.8060,3.9870,2.5360,2.7410,4.5590};
			return value;
		}
		private double[] getCoordinate_11_142_point_3()
		{
			double[] value = {3.0820,3.5810,4.2060,3.3680,4.0770,4.0550,1.0440,3.8850,5.4540,1.3560,3.6420,5.2410,3.2270,3.7070,4.1110,3.0280,4.5670,4.6830,2.4720,2.0230,4.7220,0.9194,2.3540,5.3820,0.0,2.9980,5.8720,3.5150,2.1990,3.6310,3.6850,4.2250,3.8910,1.1100,4.5590,6.0740,0.0,1.1410,5.9680,0.1458,1.1410,5.9670,0.4592,1.4420,5.5490,0.0,1.7530,6.8110,3.2400,5.1320,4.8320,0.0,-1.2300,3.5750,3.4430,1.2200,3.2010,0.0,6.5770,6.5290,1.9720,6.6860,5.7690,3.5510,6.4680,4.6600,1.1250,6.6410,6.2240,2.7990,0.2961,1.9810,1.4380,-0.7799,2.9200,2.0980,-0.0622,0.3894,4.3420,2.9940,2.4840,0.0,9.8370,5.8,1.9720,10.1800,5.2980,3.8290,8.0810,4.0780,4.7540,5.5190,2.9700,1.6410,0.4521,4.7050,0.0,2.2060,6.4460,2.7950,3.5680,4.4970,1.8350,3.5870,5.0110,3.2430,5.1880,4.8260,4.0740,1.8130,1.4890,4.0730,1.5370,-0.2510,4.7980,4.4140,1.1650,3.5610,1.0810,-1.5540,0.0,0.5923,5.3700,0.2244,0.5923,5.3700,0.0,-0.2097,4.9490,0.0,0.1669,5.3750,0.0,0.7989,5.8430,0.4079,0.7711,5.7330,0.2244,0.7989,5.8430,1.1840,0.5011,4.8950,1.6950,4.1,5.3870,2.1830,4.2620,5.1590,2.9370,4.3720,4.6590,-5.0380,2.0870,0.2634,-5.3510,2.2690,0.2568,-5.5750,4.9930,0.4877,-5.7590,4.3130,-0.6689,-5.6720,3.1190,-0.6884,-5.0540,4.3890,0.2634,-4.6170,3.9190,1.9810,-2.5070,0.2122,3.4670,-1.2520,-0.7037,3.7530,-2.1810,1.2900,4.7030,-1.0830,-0.2065,4.5310,-4.1220,4.7520,3.4340,-3.8430,3.4860,3.4740,-0.6247,4.2870,6.2170,-3.8840,5.3400,4.1440,-0.2615,3.9490,5.8230,-2.1030,4.8810,5.7800,-1.5990,4.2250,5.4290,-2.1030,4.7630,5.7130,-2.1750,4.4220,5.2920,-1.0610,2.8410,5.2400,-3.3450,2.8060,3.9870,-2.5360,2.7410,4.5590,-3.0820,3.5810,4.2060,-3.3680,4.0770,4.0550,-1.0440,3.8850,5.4540,-1.3560,3.6420,5.2410,-3.2270,3.7070,4.1110,-3.0280,4.5670,4.6830,-2.4720,2.0230,4.7220,-0.9194,2.3540,5.3820,-3.5150,2.1990,3.6310,-3.6850,4.2250,3.8910,-1.1100,4.5590,6.0740,-0.1458,1.1410,5.9670,-0.4592,1.4420,5.5490,-3.2400,5.1320,4.8320,-3.4430,1.2200,3.2010,-1.9720,6.6860,5.7690,-3.5510,6.4680,4.6600,-1.1250,6.6410,6.2240,-2.7990,0.2961,1.9810,-1.4380,-0.7799,2.9200,-2.0980,-0.0622,0.3894,-4.3420,2.9940,2.4840,-1.9720,10.1800,5.2980,-3.8290,8.0810,4.0780,-4.7540,5.5190,2.9700,-1.6410,0.4521,4.7050};
			return value;
		}
		private double[] getCoordinate_11_142_point_4()
		{
			double[] value = {-2.7950,3.5680,4.4970,-1.8350,3.5870,5.0110,-3.2430,5.1880,4.8260,-4.0740,1.8130,1.4890,-4.0730,1.5370,-0.2510,-4.7980,4.4140,1.1650,-3.5610,1.0810,-1.5540,-0.2244,0.5923,5.3700,-0.4079,0.7711,5.7330,-0.2244,0.7989,5.8430,-1.1840,0.5011,4.8950,-1.6950,4.1,5.3870,-2.1830,4.2620,5.1590,-2.9370,4.3720,4.6590,0.0,0.5907,5.5450,0.2244,0.5907,5.5450,-0.2244,0.5907,5.5450,-2.0910,-0.0943,-1.6290,2.0910,-0.0943,-1.6290,0.0,-0.6349,1.5320,0.4475,7.3410,7.3620,0.7761,4.9120,6.8830,0.7761,4.9120,6.8830,0.4475,7.3410,7.3620,-0.7761,4.9120,6.8830,-0.4475,7.3410,7.3620,-0.4475,7.3410,7.3620,-0.7761,4.9120,6.8830,1.4380,-0.7799,2.9200,2.0980,-0.0622,0.3894,2.7990,0.2961,1.9810,1.4380,-0.7799,2.9200,4.7340,2.2950,-0.4780,5.6580,2.5990,-1.9830,4.7340,2.2950,-0.4780,3.7120,1.2250,-2.2900,-3.5610,1.0810,-1.5540,-2.0980,-0.0622,0.3894,-1.4380,-0.7799,2.9200,-2.7990,0.2961,1.9810,-5.6580,2.5990,-1.9830,-4.7340,2.2950,-0.4780,-3.7120,1.2250,-2.2900,-4.7340,2.2950,-0.4780,5.6580,2.5990,-1.9830,0.5130,6.6980,7.1190,0.0,7.5480,7.4050,-5.6580,2.5990,-1.9830,-0.5130,6.6980,7.1190,5.0540,4.3890,0.2634,3.5610,1.0810,-1.5540,-5.0540,4.3890,0.2634,-1.4380,-0.7799,2.9200,-3.5610,1.0810,-1.5540,0.0,7.5480,7.4050,3.5610,1.0810,-1.5540};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_11_143_point_1()
		{
			double[] value = {0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.9240,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.8090,0.9461,0.9230,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.7400,0.8745,0.7610,0.8768,0.7497,0.8755,0.7770,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.7860,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.8400,0.9824,0.8358,0.8845,0.9021,0.8880,0.9310,0.8761,0.9036,0.8705,0.9018,0.8544,0.9020,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.8320,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.7530,0.7762,0.7452,0.7720,0.7409,0.7703,0.7560,0.7661,0.7502,0.7748,0.7102,0.8370,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283};
			return value;
		}
		private double[] getTextureCoordinate_11_143_point_2()
		{
			double[] value = {0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.8200,0.7437,0.7597,0.7429,0.7740,0.7484,0.7629,0.7505,0.7780,0.7116,0.8233,0.7622,0.7806,0.7576,0.7790,0.7630,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.5511,0.8974,0.5442,0.8881,0.5261,0.8880,0.5173,0.9160,0.5142,0.8897,0.4859,0.8861,0.4859,0.9150,0.5538,0.8129,0.5221,0.9505,0.5019,0.9448,0.4833,0.9442,0.5221,0.9409,0.5615,0.9135,0.4859,0.9465,0.7132,0.8982,0.7070,0.9147,0.6947,0.9327,0.6362,0.8647,0.6338,0.9045,0.6499,0.8433,0.7286,0.8745,0.7189,0.8755,0.7076,0.8768,0.7039,0.8593,0.6916,0.8787,0.7247,0.8546,0.7090,0.8565,0.7314,0.8736,0.7292,0.8706,0.7280,0.8536,0.6900,0.8666,0.6878,0.8802,0.6865,0.8667,0.6811,0.8787,0.6675,0.8823,0.6734,0.9076,0.6941,0.9003,0.6841,0.8549,0.6747,0.8518,0.6955,0.8049,0.6707,0.8609,0.6500,0.8054,0.6247,0.8655,0.6555,0.8741,0.6826,0.7876,0.6628,0.8252,0.6579,0.8538,0.6590,0.8166,0.5919,0.8622,0.6097,0.7975,0.6017,0.8674,0.6119,0.8668,0.5894,0.7991,0.5477,0.8549,0.5851,0.8633,0.5547,0.8636,0.5069,0.9121,0.4833,0.9711,0.5841,0.9021,0.5806,0.9310,0.5925,0.9036,0.5981,0.9018,0.6148,0.9345,0.6142,0.9020,0.6513,0.9068,0.6530,0.9257,0.6932,0.9186,0.6854,0.9041,0.7468,0.8401,0.7397,0.8339,0.7279,0.7767,0.7484,0.8201,0.7549,0.8419,0.7538,0.8364,0.7505,0.8352,0.7502,0.8320,0.7452,0.8292,0.7429,0.8312,0.7437,0.8169,0.7530,0.8334,0.7524,0.8309,0.7267,0.7703,0.7224,0.7720};
			return value;
		}
		private double[] getTextureCoordinate_11_143_point_3()
		{
			double[] value = {0.7146,0.7762,0.7175,0.7748,0.7116,0.7661,0.7574,0.8370,0.7102,0.7798,0.7622,0.8378,0.7385,0.8283,0.7409,0.8275,0.7291,0.7711,0.7239,0.7597,0.7192,0.7629,0.7247,0.7740,0.7171,0.7780,0.7560,0.8233,0.7046,0.7872,0.7100,0.7790,0.7054,0.7806,0.7630,0.8444,0.7104,0.7769,0.7152,0.7737,0.7572,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.6805,0.9479,0.6189,0.9637,0.5528,0.9539,0.4859,0.9842,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.6370,0.4385,0.6390,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.6520,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2979,0.9448,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3384,0.9469,0.4140,0.9365,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.6260,0.3051,0.6166,0.2580,0.6076,0.2606,0.6259,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.6960,0.2636,0.6640,0.3484,0.6888,0.3007,0.6510,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.3640,0.6372,0.2441,0.7326,0.2496,0.7705,0.2441,0.7109,0.2441,0.7705,0.2441,0.8160,0.2441,0.8403,0.2740,0.8322,0.2566,0.8160,0.2949,0.7630,0.3447,0.8549,0.3206,0.8292,0.4279,0.7939,0.4413,0.8544,0.3889,0.8456,0.3991,0.8726,0.4299,0.8825,0.3482,0.8386,0.4041,0.7613,0.3654,0.7582,0.3778,0.7978};
			return value;
		}
		private double[] getTextureCoordinate_11_143_point_4()
		{
			double[] value = {0.3319,0.7987,0.3916,0.7984,0.2943,0.8150,0.3252,0.8232,0.3846,0.8362,0.4052,0.8221,0.3485,0.8310,0.3090,0.8013,0.3985,0.8044,0.2937,0.8109,0.4204,0.8292,0.3447,0.8606,0.2972,0.8452,0.4715,0.8911,0.4310,0.9594,0.4658,0.6252,0.4650,0.6281,0.3226,0.6487,0.3993,0.8753,0.2441,0.6554,0.2548,0.6554,0.2557,0.6351,0.4544,0.6426,0.1498,0.9887,0.1903,0.9448,0.1498,0.9469,0.0742,0.9365,0.2323,0.6076,0.1853,0.6166,0.1923,0.6260,0.2275,0.6259,0.2371,0.6816,0.2334,0.6653,0.2246,0.6640,0.2221,0.6960,0.1875,0.6510,0.1398,0.6888,0.1258,0.7239,0.2001,0.7397,0.0364,0.7703,0.0759,0.7323,0.0794,0.6855,0.1242,0.6372,0.2386,0.7705,0.2316,0.8160,0.2142,0.8322,0.1933,0.7630,0.1676,0.8292,0.1435,0.8549,0.0602,0.7939,0.0469,0.8544,0.0583,0.8825,0.0891,0.8726,0.0992,0.8456,0.1400,0.8386,0.0840,0.7613,0.1228,0.7582,0.1104,0.7978,0.1563,0.7987,0.0966,0.7984,0.1630,0.8232,0.1939,0.8150,0.0830,0.8221,0.1036,0.8362,0.1397,0.8310,0.1792,0.8013,0.0897,0.8044,0.1944,0.8109,0.0678,0.8292,0.1435,0.8606,0.1910,0.8452,0.0166,0.8911,0.0646,0.9594,0.1656,0.6487,0.0889,0.8753,0.2325,0.6351,0.2334,0.6554,0.2548,0.6553,0.2441,0.6553,0.2334,0.6553,0.4156,0.6279,0.3783,0.6250,0.3984,0.6490,0.4325,0.6718,0.4443,0.6446,0.4280,0.6022};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=8, element #34, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_8_34_coordIndex()
		{
			MFInt32 IndexedFaceSet_8_34_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_8_34_coordIndex_1()));
			return IndexedFaceSet_8_34_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=8, element #34, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_8_34_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_8_34_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_8_34_texCoordIndex_1()));
			return IndexedFaceSet_8_34_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=9, element #34, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_9_34_point()
		{
			MFVec3f Coordinate_9_34_point = new MFVec3f(new double[] {0.0,10.7900,0.1424,0.0,10.0600,-2.8250,-2.2830,10.0600,-2.4280,-3.9540,10.0600,-1.9480,-4.5660,10.0600,0.1424,-3.9540,10.0600,2.2330,-2.2830,10.0600,2.7120,0.0,10.0600,3.1100,2.2830,10.0600,2.7120,3.9540,10.0600,2.2330,4.5660,10.0600,0.1424,3.9540,10.0600,-1.9480,2.2830,10.0600,-2.4280,0.0,8.0450,-4.6140,-2.9530,8.0450,-3.9770,-5.1140,8.0450,-2.2360,-5.9050,8.0450,0.1424,-5.1140,8.0450,2.5210,-2.9530,8.0450,3.6450,0.0,8.0450,4.2820,2.9530,8.0450,3.6450,5.1140,8.0450,2.5210,5.9050,8.0450,0.1424,5.1140,8.0450,-2.2360,2.9530,8.0450,-3.9770,0.0,5.2970,-5.0180,-3.4090,5.2970,-4.2820,-5.9050,5.2970,-2.2720,-6.8190,5.2970,0.1424,-5.9050,5.2970,2.8890,-3.4090,5.2970,4.2820,0.0,5.2970,5.0180,3.4090,5.2970,4.2820,5.9050,5.2970,2.8890,6.8190,5.2970,0.1424,5.9050,5.2970,-2.2720,3.4090,5.2970,-4.2820,0.0,2.5480,-4.2820,-2.9530,2.5480,-3.6450,-5.1140,2.5480,-1.9040,-5.9050,2.5480,0.1424,-5.1140,2.5480,2.5210,-2.9530,2.5480,3.6450,0.0,2.5480,4.2820,2.9530,2.5480,3.6450,5.1140,2.5480,2.5210,5.9050,2.5480,0.1424,5.1140,2.5480,-1.9040,2.9530,2.5480,-3.6450,0.0,0.5362,-2.2720,-1.7050,0.5362,-1.9040,-2.9530,0.5362,-1.2310,-3.4090,0.5362,0.1424,-2.9530,0.5362,1.5160,-1.7050,0.5362,2.5210,0.0,0.5362,2.8890,1.7050,0.5362,2.5210,2.9530,0.5362,1.5160,3.4090,0.5362,0.1424,2.9530,0.5362,-1.2310,1.7050,0.5362,-1.9040,0.0,-0.2003,0.1424});
			return Coordinate_9_34_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #43, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_43_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_43_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_43_coordIndex_1()));
			return IndexedFaceSet_9_43_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #43, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_43_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_43_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_43_texCoordIndex_1()));
			return IndexedFaceSet_9_43_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #43, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_43_point()
		{
			MFVec3f Coordinate_10_43_point = new MFVec3f(new double[] {0.0,1.0530,0.0273,0.0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.8750,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0.0,0.9123,0.5960,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.8750,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0.0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.9800,0.5267,-0.4285,-1.1320,0.5267,0.0273,-0.9800,0.5267,0.4830,-0.5658,0.5267,0.6985,0.0,0.5267,0.8206,0.5658,0.5267,0.6985,0.9800,0.5267,0.4830,1.1320,0.5267,0.0273,0.9800,0.5267,-0.4285,0.5658,0.5267,-0.7621,0.0,0.0,-0.9616,-0.6534,0.0,-0.8206,-1.1320,0.0,-0.4353,-1.3070,0.0,0.0273,-1.1320,0.0,0.5536,-0.6534,0.0,0.8206,0.0,0.0,0.9616,0.6534,0.0,0.8206,1.1320,0.0,0.5536,1.3070,0.0,0.0273,1.1320,0.0,-0.4353,0.6534,0.0,-0.8206,0.0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.9800,-0.5267,-0.3648,-1.1320,-0.5267,0.0273,-0.9800,-0.5267,0.4830,-0.5658,-0.5267,0.6985,0.0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.9800,-0.5267,0.4830,1.1320,-0.5267,0.0273,0.9800,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0.0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.4830,0.0,-0.9123,0.5536,0.3267,-0.9123,0.4830,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0.0,-1.0530,0.0273});
			return Coordinate_10_43_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #52, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_52_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_52_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_52_coordIndex_1()));
			return IndexedFaceSet_10_52_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #52, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_52_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_52_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_52_texCoordIndex_1()));
			return IndexedFaceSet_10_52_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #52, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_52_point()
		{
			MFVec3f Coordinate_11_52_point = new MFVec3f(new double[] {2.9600,3.7380,0.0,1.6430,3.7380,3.2090,-1.3160,3.7380,4.0020,-3.3670,3.7380,1.7810,-3.3670,3.7380,-1.7810,-1.3160,3.7380,-4.0020,1.6430,3.7380,-3.2090,2.9600,-0.0114,0.0,1.6430,-0.0114,3.2090,-1.3160,-0.0114,4.0020,-3.3670,-0.0114,1.7810,-3.3670,-0.0114,-1.7810,-1.3160,-0.0114,-4.0020,1.6430,-0.0114,-3.2090,2.9600,-6.5070,0.0,1.6430,-6.5070,3.2090,-1.3160,-6.5070,4.0020,-3.3670,-6.5070,1.7810,-3.3670,-6.5070,-1.7810,-1.3160,-6.5070,-4.0020,1.6430,-6.5070,-3.2090,3.3670,-13.1300,0.0,1.8970,-13.1300,3.5820,-1.4070,-13.1300,4.4670,-3.3550,-13.1300,1.9880,-3.3550,-13.1300,-1.9880,-1.4070,-13.1300,-4.4670,1.8970,-13.1300,-3.5820,2.1460,-4.9850,0.0,1.1360,-4.9850,2.4620,-1.1350,-4.9850,3.0700,-2.6330,-4.9850,1.3660,-2.6330,-4.9850,-1.3660,-1.1350,-4.9850,-3.0700,1.1360,-4.9850,-2.4620,2.1560,-11.4500,0.0,1.2250,-11.4500,1.9560,-0.8662,-11.4500,2.4390,-2.5430,-11.4500,1.0850,-2.5430,-11.4500,-1.0850,-0.8662,-11.4500,-2.4390,1.2250,-11.4500,-1.9560,2.0510,5.7290,0.0,1.0760,5.7290,2.3750,-1.1140,5.7290,2.9610,-2.8700,5.7290,1.3180,-2.8700,5.7290,-1.3180,-1.1140,5.7290,-2.9610,1.0760,5.7290,-2.3750,1.8420,-15.1200,0.0,1.0300,-15.1200,1.8730,-0.7965,-15.1200,2.2950,-2.2610,-15.1200,1.1130,-2.2610,-15.1200,-0.9478,-0.7965,-15.1200,-2.1300,1.0300,-15.1200,-1.7080,0.6277,-16.1,0.0,0.2723,-16.1,0.9120,-0.5262,-16.1,1.0960,-1.1670,-16.1,0.5796,-1.1670,-16.1,-0.4145,-0.5262,-16.1,-0.9313,0.2723,-16.1,-0.7469});
			return Coordinate_11_52_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #70, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_70_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_70_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_70_coordIndex_1()));
			return IndexedFaceSet_12_70_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #70, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_70_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_70_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_70_texCoordIndex_1()));
			return IndexedFaceSet_12_70_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #70, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_70_point()
		{
			MFVec3f Coordinate_13_70_point = new MFVec3f(new double[] {0.9768,-0.0192,-1.6810,1.6570,-0.0192,0.4309,0.0,-0.0192,-1.6810,1.4030,0.7316,0.3540,0.8174,0.7316,-1.4630,0.0,0.7316,-1.4630,0.0,0.7316,1.4710,-1.6570,-0.0192,0.4309,-1.4030,0.7316,0.3540,-0.8174,0.7316,-1.4630,-0.9768,-0.0192,-1.6810,0.0,-0.0192,1.7500,1.1090,-0.6007,-2.0460,2.0450,-0.6007,0.4309,1.6950,-0.2960,1.4290,0.0,-0.6007,-2.0460,-1.1090,-0.6007,-2.0460,-2.0450,-0.6007,0.4309,-1.6950,-0.2960,1.4290,0.0,-1.2070,-1.8410,1.0230,-1.2070,-1.8410,1.9130,-1.2230,0.5161,1.6010,-0.9325,1.4060,0.0,-0.6582,1.7080,-1.6010,-0.9325,1.4060,-1.9130,-1.2230,0.5161,-1.0230,-1.2070,-1.8410,1.4090,-1.9250,-2.8780,1.4090,-3.9470,-1.6810,0.0,-3.9470,-1.6810,1.1090,-0.6007,-2.0460,0.0,-0.6007,-2.0460,-1.4090,-1.9250,-2.8780,0.0,-1.9250,-2.8780,-1.1090,-0.6007,-2.0460,-1.4090,-3.9470,-1.6810,2.9270,-1.9250,0.4309,2.0890,-3.9470,0.4309,2.0450,-0.6007,0.4309,-2.9270,-1.9250,0.4309,-2.0450,-0.6007,0.4309,-2.0890,-3.9470,0.4309,0.0,-3.9470,0.4309,0.9442,-0.3153,-1.6920,0.0,-0.3153,-1.6920,-0.9442,-0.3153,-1.6920,-1.7,-0.3153,0.3093,1.7,-0.3153,0.3093,1.8600,-3.7930,1.3640,2.5410,-1.9630,1.3640,1.8610,-0.9431,1.3640,-1.8610,-0.9431,1.3640,-2.5410,-1.9630,1.3640,-1.8600,-3.7930,1.3640,0.0,-3.7930,1.3640});
			return Coordinate_13_70_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #92, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_92_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_92_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_92_coordIndex_1()));
			return IndexedFaceSet_10_92_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #92, 488 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_92_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_92_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_92_texCoordIndex_1()));
			return IndexedFaceSet_10_92_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #92, 189 total numbers made up of 63 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_92_point()
		{
			MFVec3f Coordinate_11_92_point = new MFVec3f(new double[] {-2.9600,3.7380,0.0,-1.6430,3.7380,3.2090,1.3160,3.7380,4.0020,3.3670,3.7380,1.7810,3.3670,3.7380,-1.7810,1.3160,3.7380,-4.0020,-1.6430,3.7380,-3.2090,-2.9600,-0.0114,0.0,-1.6430,-0.0114,3.2090,1.3160,-0.0114,4.0020,3.3670,-0.0114,1.7810,3.3670,-0.0114,-1.7810,1.3160,-0.0114,-4.0020,-1.6430,-0.0114,-3.2090,-2.9600,-6.5070,0.0,-1.6430,-6.5070,3.2090,1.3160,-6.5070,4.0020,3.3670,-6.5070,1.7810,3.3670,-6.5070,-1.7810,1.3160,-6.5070,-4.0020,-1.6430,-6.5070,-3.2090,-3.3670,-13.1300,0.0,-1.8970,-13.1300,3.5820,1.4070,-13.1300,4.4670,3.3550,-13.1300,1.9880,3.3550,-13.1300,-1.9880,1.4070,-13.1300,-4.4670,-1.8970,-13.1300,-3.5820,-2.1460,-4.9850,0.0,-1.1360,-4.9850,2.4620,1.1350,-4.9850,3.0700,2.6330,-4.9850,1.3660,2.6330,-4.9850,-1.3660,1.1350,-4.9850,-3.0700,-1.1360,-4.9850,-2.4620,-2.1560,-11.4500,0.0,-1.2250,-11.4500,1.9560,0.8662,-11.4500,2.4390,2.5430,-11.4500,1.0850,2.5430,-11.4500,-1.0850,0.8662,-11.4500,-2.4390,-1.2250,-11.4500,-1.9560,-2.0510,5.7290,0.0,-1.0760,5.7290,2.3750,1.1140,5.7290,2.9610,2.8700,5.7290,1.3180,2.8700,5.7290,-1.3180,1.1140,5.7290,-2.9610,-1.0760,5.7290,-2.3750,-1.8420,-15.1200,0.0,-1.0300,-15.1200,1.8730,0.7965,-15.1200,2.2950,2.2610,-15.1200,1.1130,2.2610,-15.1200,-0.9478,0.7965,-15.1200,-2.1300,-1.0300,-15.1200,-1.7080,-0.6277,-16.1,0.0,-0.2723,-16.1,0.9120,0.5262,-16.1,1.0960,1.1670,-16.1,0.5796,1.1670,-16.1,-0.4145,0.5262,-16.1,-0.9313,-0.2723,-16.1,-0.7469});
			return Coordinate_11_92_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=12, element #110, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_110_coordIndex()
		{
			MFInt32 IndexedFaceSet_12_110_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_110_coordIndex_1()));
			return IndexedFaceSet_12_110_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=12, element #110, 408 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_12_110_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_12_110_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_12_110_texCoordIndex_1()));
			return IndexedFaceSet_12_110_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=13, element #110, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_13_110_point()
		{
			MFVec3f Coordinate_13_110_point = new MFVec3f(new double[] {-0.9768,-0.0192,-1.6810,-1.6570,-0.0192,0.4309,0.0,-0.0192,-1.6810,-1.4030,0.7316,0.3540,-0.8174,0.7316,-1.4630,0.0,0.7316,-1.4630,0.0,0.7316,1.4710,1.6570,-0.0192,0.4309,1.4030,0.7316,0.3540,0.8174,0.7316,-1.4630,0.9768,-0.0192,-1.6810,0.0,-0.0192,1.7500,-1.1090,-0.6007,-2.0460,-2.0450,-0.6007,0.4309,-1.6950,-0.2960,1.4290,0.0,-0.6007,-2.0460,1.1090,-0.6007,-2.0460,2.0450,-0.6007,0.4309,1.6950,-0.2960,1.4290,0.0,-1.2070,-1.8410,-1.0230,-1.2070,-1.8410,-1.9130,-1.2230,0.5161,-1.6010,-0.9325,1.4060,0.0,-0.6582,1.7080,1.6010,-0.9325,1.4060,1.9130,-1.2230,0.5161,1.0230,-1.2070,-1.8410,-1.4090,-1.9250,-2.8780,-1.4090,-3.9470,-1.6810,0.0,-3.9470,-1.6810,-1.1090,-0.6007,-2.0460,0.0,-0.6007,-2.0460,1.4090,-1.9250,-2.8780,0.0,-1.9250,-2.8780,1.1090,-0.6007,-2.0460,1.4090,-3.9470,-1.6810,-2.9270,-1.9250,0.4309,-2.0890,-3.9470,0.4309,-2.0450,-0.6007,0.4309,2.9270,-1.9250,0.4309,2.0450,-0.6007,0.4309,2.0890,-3.9470,0.4309,0.0,-3.9470,0.4309,-0.9442,-0.3153,-1.6920,0.0,-0.3153,-1.6920,0.9442,-0.3153,-1.6920,1.7,-0.3153,0.3093,-1.7,-0.3153,0.3093,-1.8600,-3.7930,1.3640,-2.5410,-1.9630,1.3640,-1.8610,-0.9431,1.3640,1.8610,-0.9431,1.3640,2.5410,-1.9630,1.3640,1.8600,-3.7930,1.3640,0.0,-3.7930,1.3640});
			return Coordinate_13_110_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #133, 1336 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_133_coordIndex()
		{
			MFInt32 IndexedFaceSet_9_133_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_133_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_9_133_coordIndex_2()));
			return IndexedFaceSet_9_133_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=9, element #133, 1336 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_9_133_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_9_133_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_9_133_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_9_133_texCoordIndex_2()));
			return IndexedFaceSet_9_133_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #133, 522 total numbers made up of 174 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_133_point()
		{
			MFVec3f Coordinate_10_133_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_10_133_point_1()))
				.append(new MFVec3f(getCoordinate_10_133_point_2()));
			return Coordinate_10_133_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #134, 420 total numbers made up of 210 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_134_point()
		{
			MFVec2f TextureCoordinate_10_134_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_134_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_134_point_2()))
				.append(new MFVec2f(getTextureCoordinate_10_134_point_3()));
			return TextureCoordinate_10_134_point;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=10, element #142, 2368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_142_coordIndex()
		{
			MFInt32 IndexedFaceSet_10_142_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_142_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_10_142_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_10_142_coordIndex_3()));
			return IndexedFaceSet_10_142_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=10, element #142, 2368 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_10_142_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_10_142_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_10_142_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_10_142_texCoordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_10_142_texCoordIndex_3()));
			return IndexedFaceSet_10_142_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=11, element #142, 1068 total numbers made up of 356 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_11_142_point()
		{
			MFVec3f Coordinate_11_142_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_11_142_point_1()))
				.append(new MFVec3f(getCoordinate_11_142_point_2()))
				.append(new MFVec3f(getCoordinate_11_142_point_3()))
				.append(new MFVec3f(getCoordinate_11_142_point_4()));
			return Coordinate_11_142_point;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=11, element #143, 772 total numbers made up of 386 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_11_143_point()
		{
			MFVec2f TextureCoordinate_11_143_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_11_143_point_1()))
				.append(new MFVec2f(getTextureCoordinate_11_143_point_2()))
				.append(new MFVec2f(getTextureCoordinate_11_143_point_3()))
				.append(new MFVec2f(getTextureCoordinate_11_143_point_4()));
			return TextureCoordinate_11_143_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return JinLOA1 model
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
        X3D thisExampleX3dModel = new JinLOA1().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.JinLOA1\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.JinLOA1 self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
