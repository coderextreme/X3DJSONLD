package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubGasket.java">CatiaHubGasket.java</a> source, <a href="../../../CAD/CatiaHubGasketIndex.html" target="_top">CatiaHubGasket catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubGasket.x3d">CatiaHubGasket.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Hyokwang Lee, PartDB Co., Ltd. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 July 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 November 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D CAD CADInterchange profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> CATIA V5 R18 and PartDB Converter with Xj3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Hyokwang Lee, PartDB Co., Ltd.
 */

public class CatiaHubGasket
{
	/** Default constructor to create this object. */
	public CatiaHubGasket ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CatiaHubGasket.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xj3D, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 July 2012"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 November 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D CAD CADInterchange profile"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"File created using CATIA"}).setTitle("CatiaHubGasket.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\""))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new Viewpoint().setDescription("Main Viewpoint").setFieldOfView(0.471225).setOrientation(0.326678,0.502925,0.800218,2.185925).setPosition(0.411502,0.183945,0.216403))
    .addChild(new Viewpoint().setDescription("Iso View").setFieldOfView(0.471225).setOrientation(0.187053,0.451587,0.872399,2.448076).setPosition(0.288675,0.288675,0.288675))
    .addChild(new Viewpoint().setDescription("Front View").setFieldOfView(0.471225).setOrientation(0.57735,0.57735,0.57735,2.094395).setPosition(0.5,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Back View").setFieldOfView(0.471225).setOrientation(0.57735,-0.57735,-0.57735,2.094395).setPosition(-0.5,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Left View").setFieldOfView(0.471225).setOrientation(1.0,-1.73E-4,1.73E-4,1.570796).setPosition(0.0,-0.5,0.0))
    .addChild(new Viewpoint().setDescription("Right View").setFieldOfView(0.471225).setOrientation(-1.22E-4,-0.707107,-0.707107,3.141348).setPosition(0.0,0.5,0.0))
    .addChild(new Viewpoint().setDescription("Top View").setFieldOfView(0.471225).setOrientation(0.0,0.0,1.0,1.570796).setPosition(0.0,0.0,0.5))
    .addChild(new Viewpoint().setDescription("Bottom View").setFieldOfView(0.471225).setOrientation(0.707107,0.707107,0.0,3.141593).setPosition(0.0,0.0,-0.5))
    .addChild(new Transform().setScale(0.001,0.001,0.001)
      .addChild(new Group()
        .addChild(new Group()
          .addChild(new Group()
            .addChild(new Group("_025EA748")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("_material0").setDiffuseColor(0.0,1.0,0.0)))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-45.0,0.0,0.0,-45.0,0.0,35.0,-44.2338,8.26873,0.0,-44.2338,8.26873,35.0,-41.9613,16.2559,0.0,-41.9613,16.2559,35.0,-38.2598,23.6894,0.0,-38.2598,23.6894,35.0,-33.2554,30.3163,0.0,-33.2554,30.3163,35.0,-27.1186,35.9108,0.0,-27.1186,35.9108,35.0,-20.0582,40.2823,0.0,-20.0582,40.2823,35.0,-12.3148,43.2822,0.0,-12.3148,43.2822,35.0,-4.15208,44.808,0.0,-4.15208,44.808,35.0,4.15208,44.808,0.0,4.15208,44.808,35.0,12.3148,43.2822,0.0,12.3148,43.2822,35.0,20.0582,40.2823,0.0,20.0582,40.2823,35.0,27.1186,35.9108,0.0,27.1186,35.9108,35.0,33.2554,30.3163,0.0,33.2554,30.3163,35.0,38.2598,23.6894,0.0,38.2598,23.6894,35.0,41.9613,16.2559,0.0,41.9613,16.2559,35.0,44.2338,8.26873,0.0,44.2338,8.26873,35.0,45.0,0.0,0.0,45.0,0.0,35.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0,0.0,0.0,-1.0,0.0,0.0,-0.982978,0.183721,0.0,-0.982978,0.183721,0.0,-0.932482,0.361217,0.0,-0.932482,0.361217,0.0,-0.850228,0.526414,0.0,-0.850228,0.526414,0.0,-0.739036,0.673666,0.0,-0.739036,0.673666,0.0,-0.602619,0.798029,0.0,-0.602619,0.798029,0.0,-0.445723,0.895171,0.0,-0.445723,0.895171,0.0,-0.273659,0.961827,0.0,-0.273659,0.961827,0.0,-0.0922575,0.995735,0.0,-0.0922575,0.995735,0.0,0.0922575,0.995735,0.0,0.0922575,0.995735,0.0,0.273659,0.961827,0.0,0.273659,0.961827,0.0,0.445723,0.895171,0.0,0.445723,0.895171,0.0,0.602619,0.798029,0.0,0.602619,0.798029,0.0,0.739036,0.673666,0.0,0.739036,0.673666,0.0,0.850228,0.526414,0.0,0.850228,0.526414,0.0,0.932482,0.361217,0.0,0.932482,0.361217,0.0,0.982978,0.183721,0.0,0.982978,0.183721,0.0,1.0,0.0,0.0,1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {45.0,0.0,0.0,45.0,0.0,35.0,44.2338,-8.26873,0.0,44.2338,-8.26873,35.0,41.9613,-16.2559,0.0,41.9613,-16.2559,35.0,38.2598,-23.6894,0.0,38.2598,-23.6894,35.0,33.2554,-30.3163,0.0,33.2554,-30.3163,35.0,27.1186,-35.9108,0.0,27.1186,-35.9108,35.0,20.0582,-40.2823,0.0,20.0582,-40.2823,35.0,12.3148,-43.2822,0.0,12.3148,-43.2822,35.0,4.15208,-44.808,0.0,4.15208,-44.808,35.0,-4.15208,-44.808,0.0,-4.15208,-44.808,35.0,-12.3148,-43.2822,0.0,-12.3148,-43.2822,35.0,-20.0582,-40.2823,0.0,-20.0582,-40.2823,35.0,-27.1186,-35.9108,0.0,-27.1186,-35.9108,35.0,-33.2554,-30.3163,0.0,-33.2554,-30.3163,35.0,-38.2598,-23.6894,0.0,-38.2598,-23.6894,35.0,-41.9613,-16.2559,0.0,-41.9613,-16.2559,35.0,-44.2338,-8.26873,0.0,-44.2338,-8.26873,35.0,-45.0,0.0,0.0,-45.0,0.0,35.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.982978,-0.183721,0.0,0.982978,-0.183721,0.0,0.932482,-0.361217,0.0,0.932482,-0.361217,0.0,0.850228,-0.526414,0.0,0.850228,-0.526414,0.0,0.739036,-0.673666,0.0,0.739036,-0.673666,0.0,0.602619,-0.798029,0.0,0.602619,-0.798029,0.0,0.445723,-0.895171,0.0,0.445723,-0.895171,0.0,0.273659,-0.961827,0.0,0.273659,-0.961827,0.0,0.0922575,-0.995735,0.0,0.0922575,-0.995735,0.0,-0.0922575,-0.995735,0.0,-0.0922575,-0.995735,0.0,-0.273659,-0.961827,0.0,-0.273659,-0.961827,0.0,-0.445723,-0.895171,0.0,-0.445723,-0.895171,0.0,-0.602619,-0.798029,0.0,-0.602619,-0.798029,0.0,-0.739036,-0.673666,0.0,-0.739036,-0.673666,0.0,-0.850228,-0.526414,0.0,-0.850228,-0.526414,0.0,-0.932482,-0.361217,0.0,-0.932482,-0.361217,0.0,-0.982978,-0.183721,0.0,-0.982978,-0.183721,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {30.0,0.0,35.0,30.0,0.0,0.0,29.2478,-6.67563,35.0,29.2478,-6.67563,0.0,27.0291,-13.0165,35.0,27.0291,-13.0165,0.0,23.4549,-18.7047,35.0,23.4549,-18.7047,0.0,18.7047,-23.4549,35.0,18.7047,-23.4549,0.0,13.0165,-27.0291,35.0,13.0165,-27.0291,0.0,6.67563,-29.2478,35.0,6.67563,-29.2478,0.0,0.0,-30.0,35.0,0.0,-30.0,0.0,-6.67563,-29.2478,35.0,-6.67563,-29.2478,0.0,-13.0165,-27.0291,35.0,-13.0165,-27.0291,0.0,-18.7047,-23.4549,35.0,-18.7047,-23.4549,0.0,-23.4549,-18.7047,35.0,-23.4549,-18.7047,0.0,-27.0291,-13.0165,35.0,-27.0291,-13.0165,0.0,-29.2478,-6.67563,35.0,-29.2478,-6.67563,0.0,-30.0,0.0,35.0,-30.0,0.0,0.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0,0.0,0.0,-1.0,0.0,0.0,-0.97493,0.22251,0.0,-0.97493,0.22251,0.0,-0.90097,0.433882,0.0,-0.90097,0.433882,0.0,-0.781853,0.623463,0.0,-0.781853,0.623463,0.0,-0.623463,0.781853,0.0,-0.623463,0.781853,0.0,-0.433882,0.90097,0.0,-0.433882,0.90097,0.0,-0.22251,0.97493,0.0,-0.22251,0.97493,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.22251,0.97493,0.0,0.22251,0.97493,0.0,0.433882,0.90097,0.0,0.433882,0.90097,0.0,0.623463,0.781853,0.0,0.623463,0.781853,0.0,0.781853,0.623463,0.0,0.781853,0.623463,0.0,0.90097,0.433882,0.0,0.90097,0.433882,0.0,0.97493,0.22251,0.0,0.97493,0.22251,0.0,1.0,0.0,0.0,1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-30.0,0.0,35.0,-30.0,0.0,0.0,-29.2478,6.67563,35.0,-29.2478,6.67563,0.0,-27.0291,13.0165,35.0,-27.0291,13.0165,0.0,-23.4549,18.7047,35.0,-23.4549,18.7047,0.0,-18.7047,23.4549,35.0,-18.7047,23.4549,0.0,-13.0165,27.0291,35.0,-13.0165,27.0291,0.0,-6.67563,29.2478,35.0,-6.67563,29.2478,0.0,0.0,30.0,35.0,0.0,30.0,0.0,6.67563,29.2478,35.0,6.67563,29.2478,0.0,13.0165,27.0291,35.0,13.0165,27.0291,0.0,18.7047,23.4549,35.0,18.7047,23.4549,0.0,23.4549,18.7047,35.0,23.4549,18.7047,0.0,27.0291,13.0165,35.0,27.0291,13.0165,0.0,29.2478,6.67563,35.0,29.2478,6.67563,0.0,30.0,0.0,35.0,30.0,0.0,0.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.97493,-0.22251,0.0,0.97493,-0.22251,0.0,0.90097,-0.433882,0.0,0.90097,-0.433882,0.0,0.781853,-0.623463,0.0,0.781853,-0.623463,0.0,0.623463,-0.781853,0.0,0.623463,-0.781853,0.0,0.433882,-0.90097,0.0,0.433882,-0.90097,0.0,0.22251,-0.97493,0.0,0.22251,-0.97493,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.22251,-0.97493,0.0,-0.22251,-0.97493,0.0,-0.433882,-0.90097,0.0,-0.433882,-0.90097,0.0,-0.623463,-0.781853,0.0,-0.623463,-0.781853,0.0,-0.781853,-0.623463,0.0,-0.781853,-0.623463,0.0,-0.90097,-0.433882,0.0,-0.90097,-0.433882,0.0,-0.97493,-0.22251,0.0,-0.97493,-0.22251,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,7,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,16,-1,18,14,16,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,23,22,24,-1,22,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,28,27,29,-1,27,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,35,34,36,-1,34,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,18,17,-1,41,17,42,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,44,40,39,-1,44,39,50,-1,44,50,51,-1,44,51,52,-1,44,52,45,-1,53,1,0,-1,53,0,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,20,-1,53,20,19,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_51_point()))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,9,8,10,-1,8,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,15,-1,18,16,15,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,21,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,26,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,33,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,41,49,18,-1,41,18,17,-1,47,46,50,-1,47,50,51,-1,47,51,52,-1,47,52,38,-1,47,38,40,-1,53,20,19,-1,53,19,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,1,-1,53,1,0,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_56_point()))))))))));
    }
	// end of initialize() method


		/** Large attribute array: Coordinate point field, scene-graph level=10, element #51, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_51_point()
		{
			MFVec3f Coordinate_10_51_point = new MFVec3f(new double[] {-33.2554,30.3163,0.0,-6.67563,29.2478,0.0,-38.2598,23.6894,0.0,-13.0165,27.0291,0.0,-18.7047,23.4549,0.0,-41.9613,16.2559,0.0,-23.4549,18.7047,0.0,-44.2338,8.26873,0.0,-27.0291,13.0165,0.0,-29.2478,6.67563,0.0,-45.0,0.0,0.0,-30.0,0.0,0.0,-44.2338,-8.26873,0.0,-29.2478,-6.67563,0.0,-41.9613,-16.2559,0.0,-27.0291,-13.0165,0.0,-23.4549,-18.7047,0.0,-18.7047,-23.4549,0.0,-38.2598,-23.6894,0.0,6.67563,29.2478,0.0,33.2554,30.3163,0.0,13.0165,27.0291,0.0,38.2598,23.6894,0.0,18.7047,23.4549,0.0,23.4549,18.7047,0.0,41.9613,16.2559,0.0,27.0291,13.0165,0.0,44.2338,8.26873,0.0,29.2478,6.67563,0.0,30.0,0.0,0.0,45.0,0.0,0.0,29.2478,-6.67563,0.0,44.2338,-8.26873,0.0,27.0291,-13.0165,0.0,41.9613,-16.2559,0.0,23.4549,-18.7047,0.0,18.7047,-23.4549,0.0,38.2598,-23.6894,0.0,13.0165,-27.0291,0.0,33.2554,-30.3163,0.0,6.67563,-29.2478,0.0,-33.2554,-30.3163,0.0,-13.0165,-27.0291,0.0,-6.67563,-29.2478,0.0,0.0,-30.0,0.0,4.15208,-44.808,0.0,-4.15208,-44.808,0.0,-12.3148,-43.2822,0.0,-20.0582,-40.2823,0.0,-27.1186,-35.9108,0.0,27.1186,-35.9108,0.0,20.0582,-40.2823,0.0,12.3148,-43.2822,0.0,0.0,30.0,0.0,-27.1186,35.9108,0.0,-20.0582,40.2823,0.0,-12.3148,43.2822,0.0,-4.15208,44.808,0.0,4.15208,44.808,0.0,12.3148,43.2822,0.0,20.0582,40.2823,0.0,27.1186,35.9108,0.0});
			return Coordinate_10_51_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #56, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_56_point()
		{
			MFVec3f Coordinate_10_56_point = new MFVec3f(new double[] {-6.67563,29.2478,35.0,-33.2554,30.3163,35.0,-13.0165,27.0291,35.0,-38.2598,23.6894,35.0,-18.7047,23.4549,35.0,-23.4549,18.7047,35.0,-41.9613,16.2559,35.0,-27.0291,13.0165,35.0,-44.2338,8.26873,35.0,-29.2478,6.67563,35.0,-30.0,0.0,35.0,-45.0,0.0,35.0,-29.2478,-6.67563,35.0,-44.2338,-8.26873,35.0,-27.0291,-13.0165,35.0,-41.9613,-16.2559,35.0,-23.4549,-18.7047,35.0,-38.2598,-23.6894,35.0,-18.7047,-23.4549,35.0,33.2554,30.3163,35.0,6.67563,29.2478,35.0,38.2598,23.6894,35.0,13.0165,27.0291,35.0,18.7047,23.4549,35.0,41.9613,16.2559,35.0,23.4549,18.7047,35.0,44.2338,8.26873,35.0,27.0291,13.0165,35.0,29.2478,6.67563,35.0,45.0,0.0,35.0,30.0,0.0,35.0,44.2338,-8.26873,35.0,29.2478,-6.67563,35.0,41.9613,-16.2559,35.0,27.0291,-13.0165,35.0,23.4549,-18.7047,35.0,38.2598,-23.6894,35.0,18.7047,-23.4549,35.0,33.2554,-30.3163,35.0,13.0165,-27.0291,35.0,6.67563,-29.2478,35.0,-33.2554,-30.3163,35.0,-27.1186,-35.9108,35.0,-20.0582,-40.2823,35.0,-12.3148,-43.2822,35.0,-4.15208,-44.808,35.0,4.15208,-44.808,35.0,0.0,-30.0,35.0,-6.67563,-29.2478,35.0,-13.0165,-27.0291,35.0,12.3148,-43.2822,35.0,20.0582,-40.2823,35.0,27.1186,-35.9108,35.0,0.0,30.0,35.0,27.1186,35.9108,35.0,20.0582,40.2823,35.0,12.3148,43.2822,35.0,4.15208,44.808,35.0,-4.15208,44.808,35.0,-12.3148,43.2822,35.0,-20.0582,40.2823,35.0,-27.1186,35.9108,35.0});
			return Coordinate_10_56_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CatiaHubGasket model
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
        X3D thisExampleX3dModel = new CatiaHubGasket().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CatiaHubGasket\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CatiaHubGasket\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
