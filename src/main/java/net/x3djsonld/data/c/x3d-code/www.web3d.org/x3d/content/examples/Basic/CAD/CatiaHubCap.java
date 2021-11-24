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
 * <p> Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubCap.java">CatiaHubCap.java</a> source, <a href="../../../CAD/CatiaHubCapIndex.html" target="_top">CatiaHubCap catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubCap.x3d">CatiaHubCap.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d</a> </td>
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

public class CatiaHubCap
{
	/** Default constructor to create this object. */
	public CatiaHubCap ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CatiaHubCap.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xj3D, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 July 2012"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 November 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D CAD CADInterchange profile"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"File created using CATIA"}).setTitle("CatiaHubCap.x3d"))
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
            .addChild(new Group("_03E3C7E8")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("_material0").setDiffuseColor(0.94902,0.635294,0.341176)))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-75.0,0.0,0.0,-75.0,0.0,20.0,-74.2366,10.6736,0.0,-74.2366,10.6736,20.0,-71.962,21.1299,0.0,-71.962,21.1299,20.0,-68.2224,31.1561,0.0,-68.2224,31.1561,20.0,-63.094,40.5481,0.0,-63.094,40.5481,20.0,-56.6812,49.1146,0.0,-56.6812,49.1146,20.0,-49.1146,56.6812,0.0,-49.1146,56.6812,20.0,-40.5481,63.094,0.0,-40.5481,63.094,20.0,-31.1561,68.2224,0.0,-31.1561,68.2224,20.0,-21.1299,71.962,0.0,-21.1299,71.962,20.0,-10.6736,74.2366,0.0,-10.6736,74.2366,20.0,0.0,75.0,0.0,0.0,75.0,20.0,10.6736,74.2366,0.0,10.6736,74.2366,20.0,21.1299,71.962,0.0,21.1299,71.962,20.0,31.1561,68.2224,0.0,31.1561,68.2224,20.0,40.5481,63.094,0.0,40.5481,63.094,20.0,49.1146,56.6812,0.0,49.1146,56.6812,20.0,56.6812,49.1146,0.0,56.6812,49.1146,20.0,63.094,40.5481,0.0,63.094,40.5481,20.0,68.2224,31.1561,0.0,68.2224,31.1561,20.0,71.962,21.1299,0.0,71.962,21.1299,20.0,74.2366,10.6736,0.0,74.2366,10.6736,20.0,75.0,0.0,0.0,75.0,0.0,20.0})))
                  .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0,0.0,0.0,-1.0,0.0,0.0,-0.989822,0.142308,0.0,-0.989822,0.142308,0.0,-0.959498,0.281716,0.0,-0.959498,0.281716,0.0,-0.909645,0.415387,0.0,-0.909645,0.415387,0.0,-0.841257,0.540635,0.0,-0.841257,0.540635,0.0,-0.755771,0.654836,0.0,-0.755771,0.654836,0.0,-0.654836,0.755771,0.0,-0.654836,0.755771,0.0,-0.540635,0.841257,0.0,-0.540635,0.841257,0.0,-0.415387,0.909645,0.0,-0.415387,0.909645,0.0,-0.281716,0.959498,0.0,-0.281716,0.959498,0.0,-0.142308,0.989822,0.0,-0.142308,0.989822,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.142308,0.989822,0.0,0.142308,0.989822,0.0,0.281716,0.959498,0.0,0.281716,0.959498,0.0,0.415387,0.909645,0.0,0.415387,0.909645,0.0,0.540635,0.841257,0.0,0.540635,0.841257,0.0,0.654836,0.755771,0.0,0.654836,0.755771,0.0,0.755771,0.654836,0.0,0.755771,0.654836,0.0,0.841257,0.540635,0.0,0.841257,0.540635,0.0,0.909645,0.415387,0.0,0.909645,0.415387,0.0,0.959498,0.281716,0.0,0.959498,0.281716,0.0,0.989822,0.142308,0.0,0.989822,0.142308,0.0,1.0,0.0,0.0,1.0,0.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {75.0,0.0,0.0,75.0,0.0,20.0,74.2366,-10.6736,0.0,74.2366,-10.6736,20.0,71.962,-21.1299,0.0,71.962,-21.1299,20.0,68.2224,-31.1561,0.0,68.2224,-31.1561,20.0,63.094,-40.5481,0.0,63.094,-40.5481,20.0,56.6812,-49.1146,0.0,56.6812,-49.1146,20.0,49.1146,-56.6812,0.0,49.1146,-56.6812,20.0,40.5481,-63.094,0.0,40.5481,-63.094,20.0,31.1561,-68.2224,0.0,31.1561,-68.2224,20.0,21.1299,-71.962,0.0,21.1299,-71.962,20.0,10.6736,-74.2366,0.0,10.6736,-74.2366,20.0,0.0,-75.0,0.0,0.0,-75.0,20.0,-10.6736,-74.2366,0.0,-10.6736,-74.2366,20.0,-21.1299,-71.962,0.0,-21.1299,-71.962,20.0,-31.1561,-68.2224,0.0,-31.1561,-68.2224,20.0,-40.5481,-63.094,0.0,-40.5481,-63.094,20.0,-49.1146,-56.6812,0.0,-49.1146,-56.6812,20.0,-56.6812,-49.1146,0.0,-56.6812,-49.1146,20.0,-63.094,-40.5481,0.0,-63.094,-40.5481,20.0,-68.2224,-31.1561,0.0,-68.2224,-31.1561,20.0,-71.962,-21.1299,0.0,-71.962,-21.1299,20.0,-74.2366,-10.6736,0.0,-74.2366,-10.6736,20.0,-75.0,0.0,0.0,-75.0,0.0,20.0})))
                  .setNormal(new Normal().setVector(getNormal_10_34_vector()))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,75.0,0.0,10.6736,74.2366,0.0,-10.6736,74.2366,0.0,-21.1299,71.962,0.0,21.1299,71.962,0.0,-31.1561,68.2224,0.0,31.1561,68.2224,0.0,-40.5481,63.094,0.0,40.5481,63.094,0.0,-49.1146,56.6812,0.0,49.1146,56.6812,0.0,-56.6812,49.1146,0.0,56.6812,49.1146,0.0,-63.094,40.5481,0.0,63.094,40.5481,0.0,-68.2224,31.1561,0.0,68.2224,31.1561,0.0,-71.962,21.1299,0.0,71.962,21.1299,0.0,-74.2366,10.6736,0.0,74.2366,10.6736,0.0,-75.0,0.0,0.0,75.0,0.0,0.0,-74.2366,-10.6736,0.0,74.2366,-10.6736,0.0,-71.962,-21.1299,0.0,71.962,-21.1299,0.0,-68.2224,-31.1561,0.0,68.2224,-31.1561,0.0,-63.094,-40.5481,0.0,63.094,-40.5481,0.0,-56.6812,-49.1146,0.0,56.6812,-49.1146,0.0,-49.1146,-56.6812,0.0,49.1146,-56.6812,0.0,-40.5481,-63.094,0.0,40.5481,-63.094,0.0,-31.1561,-68.2224,0.0,31.1561,-68.2224,0.0,-21.1299,-71.962,0.0,21.1299,-71.962,0.0,-10.6736,-74.2366,0.0,10.6736,-74.2366,0.0,0.0,-75.0,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("_material0")))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.6736,74.2366,20.0,10.6736,74.2366,20.0,0.0,75.0,20.0,21.1299,71.962,20.0,-21.1299,71.962,20.0,31.1561,68.2224,20.0,-31.1561,68.2224,20.0,40.5481,63.094,20.0,-40.5481,63.094,20.0,49.1146,56.6812,20.0,-49.1146,56.6812,20.0,56.6812,49.1146,20.0,-56.6812,49.1146,20.0,63.094,40.5481,20.0,-63.094,40.5481,20.0,68.2224,31.1561,20.0,-68.2224,31.1561,20.0,71.962,21.1299,20.0,-71.962,21.1299,20.0,74.2366,10.6736,20.0,-74.2366,10.6736,20.0,75.0,0.0,20.0,-75.0,0.0,20.0,74.2366,-10.6736,20.0,-74.2366,-10.6736,20.0,71.962,-21.1299,20.0,-71.962,-21.1299,20.0,68.2224,-31.1561,20.0,-68.2224,-31.1561,20.0,63.094,-40.5481,20.0,-63.094,-40.5481,20.0,56.6812,-49.1146,20.0,-56.6812,-49.1146,20.0,49.1146,-56.6812,20.0,-49.1146,-56.6812,20.0,40.5481,-63.094,20.0,-40.5481,-63.094,20.0,31.1561,-68.2224,20.0,-31.1561,-68.2224,20.0,21.1299,-71.962,20.0,-21.1299,-71.962,20.0,10.6736,-74.2366,20.0,-10.6736,-74.2366,20.0,0.0,-75.0,20.0})))))))))));
    }
	// end of initialize() method

		/** Large attribute array: Normal vector field, scene-graph level=10, element #34, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_10_34_vector()
		{
			MFVec3f Normal_10_34_vector = new MFVec3f(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.989822,-0.142308,0.0,0.989822,-0.142308,0.0,0.959498,-0.281716,0.0,0.959498,-0.281716,0.0,0.909645,-0.415387,0.0,0.909645,-0.415387,0.0,0.841257,-0.540635,0.0,0.841257,-0.540635,0.0,0.755771,-0.654836,0.0,0.755771,-0.654836,0.0,0.654836,-0.755771,0.0,0.654836,-0.755771,0.0,0.540635,-0.841257,0.0,0.540635,-0.841257,0.0,0.415387,-0.909645,0.0,0.415387,-0.909645,0.0,0.281716,-0.959498,0.0,0.281716,-0.959498,0.0,0.142308,-0.989822,0.0,0.142308,-0.989822,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.142308,-0.989822,0.0,-0.142308,-0.989822,0.0,-0.281716,-0.959498,0.0,-0.281716,-0.959498,0.0,-0.415387,-0.909645,0.0,-0.415387,-0.909645,0.0,-0.540635,-0.841257,0.0,-0.540635,-0.841257,0.0,-0.654836,-0.755771,0.0,-0.654836,-0.755771,0.0,-0.755771,-0.654836,0.0,-0.755771,-0.654836,0.0,-0.841257,-0.540635,0.0,-0.841257,-0.540635,0.0,-0.909645,-0.415387,0.0,-0.909645,-0.415387,0.0,-0.959498,-0.281716,0.0,-0.959498,-0.281716,0.0,-0.989822,-0.142308,0.0,-0.989822,-0.142308,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0});
			return Normal_10_34_vector;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CatiaHubCap model
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
        X3D thisExampleX3dModel = new CatiaHubCap().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CatiaHubCap\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CatiaHubCap\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
