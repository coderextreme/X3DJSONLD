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
 * <p> Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubBushing.java">CatiaHubBushing.java</a> source, <a href="../../../CAD/CatiaHubBushingIndex.html" target="_top">CatiaHubBushing catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubBushing.x3d">CatiaHubBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes. </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing" target="_blank">http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d</a> </td>
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

public class CatiaHubBushing
{
	/** Default constructor to create this object. */
	public CatiaHubBushing ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CatiaHubBushing.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xj3D, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 July 2012"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 November 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D CAD CADInterchange profile"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"File created using CATIA"}).setTitle("CatiaHubBushing.x3d"))
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
            .addChild(new Group("_0272AA28")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("_material0").setDiffuseColor(0.0,1.0,1.0)))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-30.0,1.69966E-14,0.0,-30.0,1.69966E-14,80.0,-29.2478,6.67563,0.0,-29.2478,6.67563,80.0,-27.0291,13.0165,0.0,-27.0291,13.0165,80.0,-23.4549,18.7047,0.0,-23.4549,18.7047,80.0,-18.7047,23.4549,0.0,-18.7047,23.4549,80.0,-13.0165,27.0291,0.0,-13.0165,27.0291,80.0,-6.67563,29.2478,0.0,-6.67563,29.2478,80.0,8.49831E-15,30.0,0.0,8.49831E-15,30.0,80.0,6.67563,29.2478,0.0,6.67563,29.2478,80.0,13.0165,27.0291,0.0,13.0165,27.0291,80.0,18.7047,23.4549,0.0,18.7047,23.4549,80.0,23.4549,18.7047,0.0,23.4549,18.7047,80.0,27.0291,13.0165,0.0,27.0291,13.0165,80.0,29.2478,6.67563,0.0,29.2478,6.67563,80.0,30.0,0.0,0.0,30.0,0.0,80.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0,0.0,0.0,-1.0,0.0,0.0,-0.97493,0.22251,0.0,-0.97493,0.22251,0.0,-0.90097,0.433882,0.0,-0.90097,0.433882,0.0,-0.781853,0.623463,0.0,-0.781853,0.623463,0.0,-0.623463,0.781853,0.0,-0.623463,0.781853,0.0,-0.433882,0.90097,0.0,-0.433882,0.90097,0.0,-0.22251,0.97493,0.0,-0.22251,0.97493,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.22251,0.97493,0.0,0.22251,0.97493,0.0,0.433882,0.90097,0.0,0.433882,0.90097,0.0,0.623463,0.781853,0.0,0.623463,0.781853,0.0,0.781853,0.623463,0.0,0.781853,0.623463,0.0,0.90097,0.433882,0.0,0.90097,0.433882,0.0,0.97493,0.22251,0.0,0.97493,0.22251,0.0,1.0,0.0,0.0,1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {30.0,0.0,0.0,30.0,0.0,80.0,29.2478,-6.67563,0.0,29.2478,-6.67563,80.0,27.0291,-13.0165,0.0,27.0291,-13.0165,80.0,23.4549,-18.7047,0.0,23.4549,-18.7047,80.0,18.7047,-23.4549,0.0,18.7047,-23.4549,80.0,13.0165,-27.0291,0.0,13.0165,-27.0291,80.0,6.67563,-29.2478,0.0,6.67563,-29.2478,80.0,-3.21563E-14,-30.0,0.0,-3.21563E-14,-30.0,80.0,-6.67563,-29.2478,0.0,-6.67563,-29.2478,80.0,-13.0165,-27.0291,0.0,-13.0165,-27.0291,80.0,-18.7047,-23.4549,0.0,-18.7047,-23.4549,80.0,-23.4549,-18.7047,0.0,-23.4549,-18.7047,80.0,-27.0291,-13.0165,0.0,-27.0291,-13.0165,80.0,-29.2478,-6.67563,0.0,-29.2478,-6.67563,80.0,-30.0,1.69966E-14,0.0,-30.0,1.69966E-14,80.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.97493,-0.22251,0.0,0.97493,-0.22251,0.0,0.90097,-0.433882,0.0,0.90097,-0.433882,0.0,0.781853,-0.623463,0.0,0.781853,-0.623463,0.0,0.623463,-0.781853,0.0,0.623463,-0.781853,0.0,0.433882,-0.90097,0.0,0.433882,-0.90097,0.0,0.22251,-0.97493,0.0,0.22251,-0.97493,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.22251,-0.97493,0.0,-0.22251,-0.97493,0.0,-0.433882,-0.90097,0.0,-0.433882,-0.90097,0.0,-0.623463,-0.781853,0.0,-0.623463,-0.781853,0.0,-0.781853,-0.623463,0.0,-0.781853,-0.623463,0.0,-0.90097,-0.433882,0.0,-0.90097,-0.433882,0.0,-0.97493,-0.22251,0.0,-0.97493,-0.22251,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,0.0,80.0,20.0,0.0,0.0,19.3185,-5.17638,80.0,19.3185,-5.17638,0.0,17.3205,-10.0,80.0,17.3205,-10.0,0.0,14.1421,-14.1421,80.0,14.1421,-14.1421,0.0,10.0,-17.3205,80.0,10.0,-17.3205,0.0,5.17638,-19.3185,80.0,5.17638,-19.3185,0.0,-3.67394E-15,-20.0,80.0,-3.67394E-15,-20.0,0.0,-5.17638,-19.3185,80.0,-5.17638,-19.3185,0.0,-10.0,-17.3205,80.0,-10.0,-17.3205,0.0,-14.1421,-14.1421,80.0,-14.1421,-14.1421,0.0,-17.3205,-10.0,80.0,-17.3205,-10.0,0.0,-19.3185,-5.17638,80.0,-19.3185,-5.17638,0.0,-20.0,2.44929E-15,80.0,-20.0,2.44929E-15,0.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0,0.0,0.0,-1.0,0.0,0.0,-0.965932,0.258797,0.0,-0.965932,0.258797,0.0,-0.866034,0.499985,0.0,-0.866034,0.499985,0.0,-0.707083,0.70713,0.0,-0.707083,0.70713,0.0,-0.499985,0.866034,0.0,-0.499985,0.866034,0.0,-0.258797,0.965932,0.0,-0.258797,0.965932,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.258797,0.965932,0.0,0.258797,0.965932,0.0,0.499985,0.866034,0.0,0.499985,0.866034,0.0,0.707083,0.70713,0.0,0.707083,0.70713,0.0,0.866034,0.499985,0.0,0.866034,0.499985,0.0,0.965932,0.258797,0.0,0.965932,0.258797,0.0,1.0,0.0,0.0,1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,2.44929E-15,80.0,-20.0,2.44929E-15,0.0,-19.3185,5.17638,80.0,-19.3185,5.17638,0.0,-17.3205,10.0,80.0,-17.3205,10.0,0.0,-14.1421,14.1421,80.0,-14.1421,14.1421,0.0,-10.0,17.3205,80.0,-10.0,17.3205,0.0,-5.17638,19.3185,80.0,-5.17638,19.3185,0.0,1.22465E-15,20.0,80.0,1.22465E-15,20.0,0.0,5.17638,19.3185,80.0,5.17638,19.3185,0.0,10.0,17.3205,80.0,10.0,17.3205,0.0,14.1421,14.1421,80.0,14.1421,14.1421,0.0,17.3205,10.0,80.0,17.3205,10.0,0.0,19.3185,5.17638,80.0,19.3185,5.17638,0.0,20.0,0.0,80.0,20.0,0.0,0.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.965932,-0.258797,0.0,0.965932,-0.258797,0.0,0.866034,-0.499985,0.0,0.866034,-0.499985,0.0,0.707083,-0.70713,0.0,0.707083,-0.70713,0.0,0.499985,-0.866034,0.0,0.499985,-0.866034,0.0,0.258797,-0.965932,0.0,0.258797,-0.965932,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.258797,-0.965932,0.0,-0.258797,-0.965932,0.0,-0.499985,-0.866034,0.0,-0.499985,-0.866034,0.0,-0.707083,-0.70713,0.0,-0.707083,-0.70713,0.0,-0.866034,-0.499985,0.0,-0.866034,-0.499985,0.0,-0.965932,-0.258797,0.0,-0.965932,-0.258797,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,5,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,12,14,15,-1,14,16,15,-1,15,16,17,-1,15,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,27,26,28,-1,26,29,28,-1,28,29,30,-1,30,29,31,-1,29,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,37,36,38,-1,36,39,38,-1,38,39,40,-1,40,39,19,-1,39,41,19,-1,19,41,21,-1,41,42,21,-1,21,42,43,-1,44,1,0,-1,44,0,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,24,-1,44,24,23,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_52_point()))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,7,6,8,-1,6,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,14,13,15,-1,13,16,15,-1,15,16,17,-1,17,16,18,-1,16,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,25,27,28,-1,27,29,28,-1,28,29,30,-1,28,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,35,37,38,-1,37,39,38,-1,38,39,40,-1,38,40,41,-1,40,18,41,-1,41,18,42,-1,18,20,42,-1,42,20,43,-1,44,24,23,-1,44,23,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,1,-1,44,1,0,-1})
                  .setCoord(new Coordinate().setPoint(getCoordinate_10_57_point()))))))))));
    }
	// end of initialize() method


		/** Large attribute array: Coordinate point field, scene-graph level=10, element #52, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_52_point()
		{
			MFVec3f Coordinate_10_52_point = new MFVec3f(new double[] {-23.4549,18.7047,0.0,-5.17638,19.3185,0.0,-27.0291,13.0165,0.0,-10.0,17.3205,0.0,-14.1421,14.1421,0.0,-29.2478,6.67563,0.0,-17.3205,10.0,0.0,-19.3185,5.17638,0.0,-30.0,1.69966E-14,0.0,-20.0,2.44929E-15,0.0,-29.2478,-6.67563,0.0,-19.3185,-5.17638,0.0,-27.0291,-13.0165,0.0,-17.3205,-10.0,0.0,-14.1421,-14.1421,0.0,-23.4549,-18.7047,0.0,-10.0,-17.3205,0.0,-5.17638,-19.3185,0.0,-18.7047,-23.4549,0.0,-3.67394E-15,-20.0,0.0,-13.0165,-27.0291,0.0,-3.21563E-14,-30.0,0.0,-6.67563,-29.2478,0.0,5.17638,19.3185,0.0,23.4549,18.7047,0.0,10.0,17.3205,0.0,27.0291,13.0165,0.0,14.1421,14.1421,0.0,17.3205,10.0,0.0,29.2478,6.67563,0.0,19.3185,5.17638,0.0,20.0,0.0,0.0,30.0,0.0,0.0,19.3185,-5.17638,0.0,29.2478,-6.67563,0.0,17.3205,-10.0,0.0,27.0291,-13.0165,0.0,14.1421,-14.1421,0.0,10.0,-17.3205,0.0,23.4549,-18.7047,0.0,5.17638,-19.3185,0.0,18.7047,-23.4549,0.0,13.0165,-27.0291,0.0,6.67563,-29.2478,0.0,1.22465E-15,20.0,0.0,-18.7047,23.4549,0.0,-13.0165,27.0291,0.0,-6.67563,29.2478,0.0,8.49831E-15,30.0,0.0,6.67563,29.2478,0.0,13.0165,27.0291,0.0,18.7047,23.4549,0.0});
			return Coordinate_10_52_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=10, element #57, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_10_57_point()
		{
			MFVec3f Coordinate_10_57_point = new MFVec3f(new double[] {-5.17638,19.3185,80.0,-23.4549,18.7047,80.0,-10.0,17.3205,80.0,-27.0291,13.0165,80.0,-14.1421,14.1421,80.0,-17.3205,10.0,80.0,-29.2478,6.67563,80.0,-19.3185,5.17638,80.0,-20.0,2.44929E-15,80.0,-30.0,1.69966E-14,80.0,-19.3185,-5.17638,80.0,-29.2478,-6.67563,80.0,-17.3205,-10.0,80.0,-27.0291,-13.0165,80.0,-14.1421,-14.1421,80.0,-10.0,-17.3205,80.0,-23.4549,-18.7047,80.0,-5.17638,-19.3185,80.0,-3.67394E-15,-20.0,80.0,-18.7047,-23.4549,80.0,-3.21563E-14,-30.0,80.0,-13.0165,-27.0291,80.0,-6.67563,-29.2478,80.0,23.4549,18.7047,80.0,5.17638,19.3185,80.0,27.0291,13.0165,80.0,10.0,17.3205,80.0,14.1421,14.1421,80.0,29.2478,6.67563,80.0,17.3205,10.0,80.0,19.3185,5.17638,80.0,30.0,0.0,80.0,20.0,0.0,80.0,29.2478,-6.67563,80.0,19.3185,-5.17638,80.0,27.0291,-13.0165,80.0,17.3205,-10.0,80.0,14.1421,-14.1421,80.0,23.4549,-18.7047,80.0,10.0,-17.3205,80.0,5.17638,-19.3185,80.0,18.7047,-23.4549,80.0,13.0165,-27.0291,80.0,6.67563,-29.2478,80.0,1.22465E-15,20.0,80.0,18.7047,23.4549,80.0,13.0165,27.0291,80.0,6.67563,29.2478,80.0,8.49831E-15,30.0,80.0,-6.67563,29.2478,80.0,-13.0165,27.0291,80.0,-18.7047,23.4549,80.0});
			return Coordinate_10_57_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CatiaHubBushing model
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
        X3D thisExampleX3dModel = new CatiaHubBushing().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CatiaHubBushing\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CatiaHubBushing\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
