package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This GeoVRML scene was converted from an original ESRI Shape file by the Bashir Research ShapeViz tool. This particular example shows a number of layers for Mexico, including state boundaries, rivers, roads, lakes, and cities. The ShapeViz tool with GeoVRML export is freely available from http://www.my3d.com/ShapeViz.htm. </p>
 <p> Related links: <a href="../../../Geospatial/Mexico.java">Mexico.java</a> source, <a href="../../../Geospatial/MexicoIndex.html" target="_top">Mexico catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/Mexico.x3d">Mexico.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This GeoVRML scene was converted from an original ESRI Shape file by the Bashir Research ShapeViz tool. This particular example shows a number of layers for Mexico, including state boundaries, rivers, roads, lakes, and cities. The ShapeViz tool with GeoVRML export is freely available from <a href="http://www.my3d.com/ShapeViz.htm." target="_blank">http://www.my3d.com/ShapeViz.htm.</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Matt Fadoul, Bashir Reasearch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 22 April 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Geospatial/Mexico.png">Mexico.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/examples" target="_blank">http://www.geovrml.org/examples</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.my3d.com/ShapeViz.htm" target="_blank">http://www.my3d.com/ShapeViz.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D geospatial example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Mexico.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Mexico.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Geospatial/../license.html">../license.html</a> </td>
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

	* @author Matt Fadoul, Bashir Reasearch
 */

public class Mexico
{
	/** Default constructor to create this object. */
	public Mexico ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Mexico.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This GeoVRML scene was converted from an original ESRI Shape file by the Bashir Research ShapeViz tool. This particular example shows a number of layers for Mexico, including state boundaries, rivers, roads, lakes, and cities. The ShapeViz tool with GeoVRML export is freely available from http://www.my3d.com/ShapeViz.htm."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Matt Fadoul, Bashir Reasearch"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Mexico.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.my3d.com/ShapeViz.htm"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Mexico.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Mexico.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.4,0.4,1.0})))
    .addChild(new Group("ViewpointGroup")
      .addChild(new GeoViewpoint().setDescription("states").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(23.635678291,-101.928688049,3668080.629822409)
        .setGeoOrigin(new GeoOrigin("GEOORIGIN").setGeoCoords(23.63569,-101.92869,0.0)))
      .addChild(new GeoViewpoint().setDescription("rivers").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(24.080378532,-102.849819183,2943331.220375903)
        .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))
      .addChild(new GeoViewpoint().setDescription("roads_rt").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(23.617524147,-101.940013885,3644597.341377297)
        .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))
      .addChild(new GeoViewpoint().setDescription("lakes").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(19.216386795,-99.892372131,853055.157236008)
        .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))
      .addChild(new GeoViewpoint().setDescription("cities").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(24.625250816,-101.779296875,3262794.748839078)
        .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN"))))
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,0,-1,14,15,16,17,18,19,20,21,22,14,-1,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,23,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_30_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,0,-1,8,9,10,11,12,13,14,15,16,17,18,19,8,-1,20,21,22,23,24,25,20,-1,26,27,28,29,30,31,26,-1,32,33,34,35,32,-1,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,36,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_35_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,0,-1,7,8,9,10,11,12,7,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,13,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_40_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_45_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.011761,-101.846199,0.000000,21.883051,-101.965302,0.000000,21.851669,-102.046097,0.000000,21.768610,-102.083298,0.000000,21.655550,-102.240303,0.000000,21.687220,-102.493103,0.000000,21.763889,-102.644997,0.000000,21.724171,-102.741402,0.000000,21.823330,-102.851700,0.000000,21.930269,-102.844704,0.000000,22.083330,-102.706902,0.000000,22.278330,-102.635002,0.000000,22.337219,-102.450600,0.000000,22.458891,-102.325798,0.000000,22.456390,-102.287201,0.000000,22.355829,-102.273598,0.000000,22.372219,-102.219200,0.000000,22.324169,-102.155800,0.000000,22.285271,-102.154404,0.000000,22.251940,-102.024200,0.000000,22.137779,-102.056396,0.000000,22.114441,-101.936401,0.000000,22.011761,-101.846199,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_55_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_60_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_65_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_70_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_75_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.142441,-99.284866,0.000000,19.357780,-99.340561,0.000000,19.405830,-99.224457,0.000000,19.540831,-99.113068,0.000000,19.475830,-99.085281,0.000000,19.454439,-99.031677,0.000000,19.372219,-99.028343,0.000000,19.306110,-98.967506,0.000000,19.137779,-98.939178,0.000000,19.089029,-98.963852,0.000000,19.061390,-99.031403,0.000000,19.116110,-99.133621,0.000000,19.142441,-99.284866,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.688068,-103.745483,0.000000,18.896385,-104.004463,0.000000,19.008053,-104.315002,0.000000,19.095276,-104.327789,0.000000,19.090832,-104.448334,0.000000,19.143499,-104.594597,0.000000,19.253889,-104.540001,0.000000,19.230270,-104.473099,0.000000,19.284719,-104.429497,0.000000,19.271111,-104.386902,0.000000,19.319160,-104.255600,0.000000,19.383051,-104.129204,0.000000,19.463890,-104.146698,0.000000,19.518330,-104.067802,0.000000,19.392500,-103.822800,0.000000,19.480270,-103.644203,0.000000,19.325279,-103.491997,0.000000,19.072781,-103.524696,0.000000,18.967220,-103.479599,0.000000,18.881660,-103.577499,0.000000,18.889999,-103.610802,0.000000,18.791941,-103.631104,0.000000,18.775829,-103.683098,0.000000,18.688068,-103.745483,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.996759,-98.662231,0.000000,18.905001,-98.656403,0.000000,18.798330,-98.744743,0.000000,18.692499,-98.665283,0.000000,18.719021,-98.749924,0.000000,18.438610,-98.671112,0.000000,18.418329,-98.695282,0.000000,18.495001,-98.819168,0.000000,18.415001,-98.922501,0.000000,18.370790,-99.050491,0.000000,18.533890,-99.149437,0.000000,18.526661,-99.227783,0.000000,18.459721,-99.256393,0.000000,18.463329,-99.311684,0.000000,18.666710,-99.496536,0.000000,18.882219,-99.429733,0.000000,18.972500,-99.304169,0.000000,19.090549,-99.324448,0.000000,19.142441,-99.284866,0.000000,19.116110,-99.133621,0.000000,19.061390,-99.031403,0.000000,19.089029,-98.963852,0.000000,18.968889,-98.753891,0.000000,18.996759,-98.662231,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_95_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,0,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,11,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_100_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_105_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,0,-1,99,100,101,102,103,104,105,106,99,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_110_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.672779,-98.143066,0.000000,19.677780,-98.001106,0.000000,19.616110,-98.011124,0.000000,19.626390,-97.964172,0.000000,19.541389,-97.845573,0.000000,19.509720,-97.882782,0.000000,19.435551,-97.847229,0.000000,19.456390,-97.775009,0.000000,19.374439,-97.684174,0.000000,19.356390,-97.613342,0.000000,19.286110,-97.656403,0.000000,19.281670,-97.834167,0.000000,19.204439,-97.843903,0.000000,19.156389,-97.901947,0.000000,19.202770,-97.993622,0.000000,19.120831,-98.082497,0.000000,19.095551,-98.198624,0.000000,19.366940,-98.460564,0.000000,19.421940,-98.468338,0.000000,19.475760,-98.627983,0.000000,19.577499,-98.712784,0.000000,19.585400,-98.659409,0.000000,19.644720,-98.492233,0.000000,19.589439,-98.343903,0.000000,19.640551,-98.315002,0.000000,19.713890,-98.257507,0.000000,19.672779,-98.143066,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_120_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_125_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_130_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_135_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,0,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,11,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_140_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_145_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_150_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_155_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_160_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_165_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_170_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_175_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_180_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_185_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN"))))))
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.275204,-98.745834,0.000000,21.180553,-98.781403,0.000000,21.074997,-98.956116,0.000000,21.011944,-98.962509,0.000000,21.018055,-99.003616,0.000000,20.945000,-99.056122,0.000000,20.846943,-99.022232,0.000000,20.816387,-98.961395,0.000000,20.581944,-98.888626,0.000000,20.522221,-98.835281,0.000000,20.334999,-98.811401,0.000000,20.325832,-98.730835,0.000000,20.283886,-98.697784,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,-1,57,58,59,60,61,62,63,64,65,66,67,68,69,70,-1,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,-1,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,-1,125,126,127,128,129,130,131,132,133,134,135,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,-1,57,58,59,60,61,62,63,64,65,66,67,68,69,70,-1,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,-1,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,-1,125,126,127,128,129,130,131,132,133,134,135,-1})
          .setColor(new Color().setColor(getColor_6_195_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_196_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_201_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {32.720833,-114.721245,0.000000,32.720810,-114.721260,0.000000,32.615993,-114.808601,0.000000,32.504448,-114.819305,0.000000,32.473049,-114.936699,0.000000,32.368610,-114.964203,0.000000,32.254669,-115.041496,0.000000,32.136108,-114.998901,0.000000,31.947489,-115.017899,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_211_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.546547,-101.160309,0.000000,20.488888,-101.150558,0.000000,20.470276,-101.085281,0.000000,20.387218,-101.013336,0.000000,20.288330,-101.011124,0.000000,20.267498,-100.920837,0.000000,20.140553,-100.883896,0.000000,20.059166,-100.759735,0.000000,20.026386,-100.670563,0.000000,20.071388,-100.519730,0.000000,19.953331,-100.410004,0.000000,19.911942,-100.318344,0.000000,20.088608,-100.168335,0.000000,20.020554,-100.068069,0.000000,19.863331,-99.977234,0.000000,19.851665,-99.920563,0.000000,19.829998,-99.935562,0.000000,19.733887,-99.864182,0.000000,19.645832,-99.862503,0.000000,19.596107,-99.779175,0.000000,19.501110,-99.749176,0.000000,19.369164,-99.541397,0.000000,19.129997,-99.502792,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_221_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {16.144279,-91.147797,0.000000,16.098610,-91.029175,0.000000,16.136665,-90.911957,0.000000,16.177219,-90.882507,0.000000,16.204720,-90.908890,0.000000,16.217777,-90.851669,0.000000,16.313610,-90.870010,0.000000,16.336941,-90.763336,0.000000,16.425831,-90.761124,0.000000,16.470833,-90.722778,0.000000,16.416386,-90.719452,0.000000,16.459999,-90.676392,0.000000,16.494164,-90.696396,0.000000,16.505554,-90.665283,0.000000,16.577221,-90.683899,0.000000,16.644274,-90.658142,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_231_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,-1,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1,52,53,54,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,-1,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1,52,53,54,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_236_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {30.528889,-109.573059,0.000000,30.308331,-109.635284,0.000000,30.165833,-109.795013,0.000000,30.008053,-109.782791,0.000000,29.961941,-109.741959,0.000000,29.874722,-109.743622,0.000000,29.799999,-109.681396,0.000000,29.533333,-109.616959,0.000000,29.446941,-109.664169,0.000000,29.386108,-109.651123,0.000000,29.355831,-109.758621,0.000000,29.106110,-109.710854,0.000000,28.904055,-109.619186,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.035831,-105.097229,0.000000,24.244442,-105.186951,0.000000,24.302776,-105.151947,0.000000,24.359444,-105.192230,0.000000,24.433331,-105.161118,0.000000,24.759998,-105.327515,0.000000,24.818886,-105.313065,0.000000,24.876663,-105.362793,0.000000,25.216389,-105.448059,0.000000,25.544167,-105.153061,0.000000,25.519444,-105.096954,0.000000,25.581944,-105.006119,0.000000,25.584999,-104.939178,0.000000,25.495831,-104.881668,0.000000,25.457497,-104.892502,0.000000,25.312775,-104.697510,0.000000,25.308887,-104.620010,0.000000,25.139164,-104.528900,0.000000,25.126942,-104.325287,0.000000,25.266941,-104.044174,0.000000,25.269722,-103.728897,0.000000,25.449165,-103.729172,0.000000,25.539444,-103.495010,0.000000,25.678055,-103.349731,0.000000,25.691944,-103.265564,0.000000,25.751389,-103.204178,0.000000,25.679996,-103.039459,0.000000,25.692776,-102.878616,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1}).setCoordIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_251_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {25.238052,-100.269180,0.000000,25.137775,-100.144180,0.000000,25.045277,-100.123901,0.000000,25.014164,-100.029724,0.000000,25.038055,-99.932510,0.000000,25.165833,-99.859726,0.000000,25.156666,-99.800568,0.000000,25.251110,-99.658890,0.000000,25.362221,-99.563614,0.000000,25.489719,-99.529175,0.000000,25.494164,-99.446671,0.000000,25.522778,-99.430283,0.000000,25.503609,-99.358612,0.000000,25.536663,-99.323059,0.000000,25.685276,-99.287506,0.000000,25.719166,-99.218063,0.000000,25.781944,-99.233063,0.000000,25.801666,-99.175568,0.000000,26.073330,-99.188339,0.000000,26.056389,-99.134445,0.000000,26.101944,-99.041946,0.000000,26.064442,-99.003067,0.000000,26.112499,-98.987228,0.000000,26.126942,-98.937225,0.000000,26.180832,-98.958344,0.000000,26.200275,-98.915283,0.000000,26.374718,-98.821960,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_261_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,-1,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,-1,139,140,141,142,143,144,145,146,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,-1,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,-1,139,140,141,142,143,144,145,146,-1})
          .setColor(new Color().setColor(getColor_6_265_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_266_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,-1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1}).setCoordIndex(new int[] {0,1,2,-1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.313457,-102.776718,0.000000,20.259720,-102.720840,0.000000,20.196892,-102.772400,0.000000,21.202572,-104.078079,0.000000,21.148609,-104.049454,0.000000,21.086388,-103.884171,0.000000,21.006107,-103.882507,0.000000,20.933887,-103.771393,0.000000,20.926941,-103.650284,0.000000,20.996944,-103.526398,0.000000,21.049721,-103.517227,0.000000,21.054996,-103.429459,0.000000,20.735275,-103.277786,0.000000,20.617775,-103.135010,0.000000,20.456108,-103.159729,0.000000,20.407219,-103.100281,0.000000,20.388332,-102.808060,0.000000,20.349442,-102.767792,0.000000,20.313457,-102.776718,0.000000,20.339996,-103.029449,0.000000,20.280552,-103.171112,0.000000,20.282776,-103.362793,0.000000,20.254444,-103.425842,0.000000,20.161388,-103.173889,0.000000,20.195553,-103.055847,0.000000,20.167774,-102.899437,0.000000,20.103886,-102.810013,0.000000,20.169167,-102.686684,0.000000,20.200832,-102.692497,0.000000,20.196892,-102.772400,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_276_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_281_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,14,15,16,17,18,-1,19,20,21,22,23,24,25,-1,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,14,15,16,17,18,-1,19,20,21,22,23,24,25,-1,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_286_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {31.221386,-110.494736,0.000000,31.168331,-110.463348,0.000000,31.082497,-110.476395,0.000000,31.004444,-110.568344,0.000000,30.809444,-110.703613,0.000000,30.693886,-110.669174,0.000000,30.223610,-110.720001,0.000000,29.821388,-110.579178,0.000000,29.601387,-110.554459,0.000000,29.514442,-110.726959,0.000000,29.295277,-110.859451,0.000000,29.190552,-110.859726,0.000000,29.074791,-110.919052,0.000000,29.116108,-111.072784,0.000000,29.102776,-111.170837,0.000000,28.902222,-111.480011,0.000000,28.881107,-111.635834,0.000000,28.791664,-111.782501,0.000000,28.798885,-111.854446,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.600555,-95.663620,0.000000,18.513054,-95.585556,0.000000,18.429443,-95.587509,0.000000,18.359165,-95.531952,0.000000,18.235554,-95.508621,0.000000,18.257774,-95.471115,0.000000,18.176666,-95.417236,0.000000,18.104721,-95.239731,0.000000,18.037498,-95.236679,0.000000,17.941666,-95.141678,0.000000,17.819878,-95.156845,0.000000,17.793053,-95.121948,0.000000,17.745277,-95.122223,0.000000,17.621666,-95.249176,0.000000,17.504997,-95.302505,0.000000,17.438610,-95.414734,0.000000,17.396111,-95.582504,0.000000,17.217777,-95.719727,0.000000,17.181110,-95.710556,0.000000,17.174721,-95.756119,0.000000,17.114166,-95.807510,0.000000,17.013054,-95.834457,0.000000,17.019165,-95.965012,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {23.938610,-99.982788,0.000000,24.004166,-99.796112,0.000000,24.110832,-99.818619,0.000000,24.156387,-99.776398,0.000000,24.134441,-99.697784,0.000000,24.176388,-99.639175,0.000000,24.139999,-99.560013,0.000000,24.171387,-99.506119,0.000000,24.148052,-99.422501,0.000000,24.189442,-99.336395,0.000000,24.170555,-99.285278,0.000000,24.117222,-99.279449,0.000000,24.083885,-99.190292,0.000000,24.066666,-98.956680,0.000000,24.020554,-98.772507,0.000000,23.965832,-98.686401,0.000000,23.991386,-98.621124,0.000000,23.937222,-98.587234,0.000000,23.968887,-98.514725,0.000000,23.916943,-98.483902,0.000000,23.968887,-98.482788,0.000000,23.962219,-98.437500,0.000000,24.014721,-98.424728,0.000000,24.052498,-98.362793,0.000000,23.986664,-98.260559,0.000000,23.838333,-98.204178,0.000000,23.802776,-98.245010,0.000000,23.716942,-98.193344,0.000000,23.776665,-98.162781,0.000000,23.722778,-98.042526,0.000000,23.792221,-97.980835,0.000000,23.783928,-97.817978,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,-1,23,24,25,26,-1,27,28,29,30,31,-1}).setCoordIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,-1,23,24,25,26,-1,27,28,29,30,31,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.705862,-106.484642,0.000000,24.730553,-106.404449,0.000000,24.847500,-106.275848,0.000000,24.851944,-106.168335,0.000000,25.015274,-106.004730,0.000000,24.705862,-106.484642,0.000000,24.631107,-106.392792,0.000000,24.654163,-106.333618,0.000000,24.592499,-106.190292,0.000000,24.525555,-106.128616,0.000000,24.572220,-105.845001,0.000000,24.254166,-107.417786,0.000000,24.299999,-107.400284,0.000000,24.377220,-107.269455,0.000000,24.446110,-107.102234,0.000000,24.458332,-106.940567,0.000000,24.491386,-106.951950,0.000000,24.528889,-106.890289,0.000000,24.527222,-106.803345,0.000000,24.598610,-106.781677,0.000000,24.629997,-106.705841,0.000000,24.658607,-106.711670,0.000000,24.705862,-106.484642,0.000000,24.572220,-105.845001,0.000000,24.708611,-105.785278,0.000000,24.779163,-105.788895,0.000000,24.951385,-105.887222,0.000000,24.572220,-105.845001,0.000000,24.643055,-105.725006,0.000000,24.630833,-105.619171,0.000000,24.538055,-105.573898,0.000000,24.548332,-105.476669,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_311_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.755833,-100.960556,0.000000,21.843052,-100.901123,0.000000,21.898052,-100.814728,0.000000,21.867775,-100.750839,0.000000,21.803886,-100.725006,0.000000,21.758610,-100.532227,0.000000,21.679996,-100.411118,0.000000,21.639164,-100.267792,0.000000,21.467777,-100.051117,0.000000,21.456944,-99.867157,0.000000,21.511387,-99.726959,0.000000,21.480000,-99.646118,0.000000,21.318333,-99.495010,0.000000,21.166664,-99.423340,0.000000,21.145832,-99.290283,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.645710,-99.198563,0.000000,21.678055,-99.165009,0.000000,21.709442,-99.181396,0.000000,21.811665,-99.140015,0.000000,21.816944,-98.996948,0.000000,21.842220,-99.000565,0.000000,21.831665,-98.965561,0.000000,21.859444,-98.955292,0.000000,21.853054,-98.818893,0.000000,21.942497,-98.813614,0.000000,21.922775,-98.758347,0.000000,21.988331,-98.750000,0.000000,22.002499,-98.627502,0.000000,21.975260,-98.588562,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {16.998055,-92.186401,0.000000,16.885277,-92.060562,0.000000,16.888885,-91.985291,0.000000,16.836109,-91.899170,0.000000,16.828331,-91.819458,0.000000,16.869442,-91.808624,0.000000,16.874443,-91.760834,0.000000,16.779720,-91.621674,0.000000,16.705555,-91.576126,0.000000,16.575832,-91.574448,0.000000,16.523888,-91.531403,0.000000,16.484722,-91.418335,0.000000,16.424721,-91.400009,0.000000,16.384720,-91.338898,0.000000,16.321941,-91.340836,0.000000,16.308052,-91.305557,0.000000,16.242496,-91.289459,0.000000,16.207222,-91.200836,0.000000,16.144279,-91.147797,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,-1,55,56,57,58,59,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,-1,55,56,57,58,59,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_331_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {28.904055,-109.619186,0.000000,28.752220,-109.636673,0.000000,28.600277,-109.552505,0.000000,28.530830,-109.550568,0.000000,28.534164,-109.521393,0.000000,28.468330,-109.520004,0.000000,28.173611,-109.682510,0.000000,28.143055,-109.798065,0.000000,28.168331,-109.832230,0.000000,28.132500,-109.878891,0.000000,27.989719,-109.789726,0.000000,27.942497,-109.802231,0.000000,27.905830,-109.870827,0.000000,27.958611,-109.917793,0.000000,27.834181,-109.894508,0.000000,27.637775,-109.922226,0.000000,27.542500,-110.113068,0.000000,27.571663,-110.131393,0.000000,27.594166,-110.298340,0.000000,27.641941,-110.369446,0.000000,27.592499,-110.463348,0.000000,27.657776,-110.599167,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN"))))))
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,-1,2,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,-1,75,76,77,78,79,80,81,82,83,84,-1}).setCoordIndex(new int[] {0,1,-1,2,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,-1,75,76,77,78,79,80,81,82,83,84,-1})
          .setColor(new Color().setColor(getColor_6_341_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_342_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1})
          .setColor(new Color().setColor(getColor_6_346_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_347_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,-1,2,3,4,5,6,7,8,9,-1}).setCoordIndex(new int[] {0,1,-1,2,3,4,5,6,7,8,9,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {32.663681,-115.484230,0.000000,32.616192,-115.441002,0.000000,31.094307,-114.994446,0.000000,31.459946,-115.069580,0.000000,31.725409,-115.134689,0.000000,32.000000,-115.227364,0.000000,32.152256,-115.301880,0.000000,32.179638,-115.315277,0.000000,32.364883,-115.336418,0.000000,32.616192,-115.441002,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,-1,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,-1,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,-1,103,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1}).setCoordIndex(new int[] {0,1,2,-1,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,-1,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,-1,103,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1})
          .setColor(new Color().setColor(getColor_6_356_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_357_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {23.070078,-109.673195,0.000000,22.997831,-109.717316,0.000000,22.943350,-109.793320,0.000000,23.056536,-109.881607,0.000000,23.376068,-109.981598,0.000000,23.454323,-110.033768,0.000000,23.637312,-110.212059,0.000000,23.870314,-110.237244,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.799131,-101.790466,0.000000,19.724541,-101.843620,0.000000,19.579763,-101.834503,0.000000,19.491081,-101.875458,0.000000,19.462227,-102.008812,0.000000,19.398840,-102.060547,0.000000,19.086586,-102.063240,0.000000,18.828720,-102.142357,0.000000,18.729322,-102.250862,0.000000,18.460737,-102.082695,0.000000,18.445805,-102.115463,0.000000,18.420746,-102.107101,0.000000,18.356106,-102.290848,0.000000,18.217785,-102.256866,0.000000,18.144608,-102.280098,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_372_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,-1,40,41,42,43,44,45,46,-1,47,48,49,50,51,52,-1,53,54,55,56,57,58,59,60,61,62,63,64,65,-1,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,-1,85,86,87,88,89,-1,90,91,-1,92,93,-1,94,95,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,-1,40,41,42,43,44,45,46,-1,47,48,49,50,51,52,-1,53,54,55,56,57,58,59,60,61,62,63,64,65,-1,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,-1,85,86,87,88,89,-1,90,91,-1,92,93,-1,94,95,-1})
          .setColor(new Color().setColor(getColor_6_376_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_377_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,-1,2,3,4,5,-1,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,22,23,24,25,26,-1}).setCoordIndex(new int[] {0,1,-1,2,3,4,5,-1,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,22,23,24,25,26,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {23.301493,-102.955460,0.000000,22.860922,-102.606789,0.000000,27.127773,-104.929451,0.000000,26.766773,-104.345673,0.000000,26.087996,-103.694946,0.000000,25.586136,-103.493820,0.000000,23.301493,-102.955460,0.000000,23.601339,-102.933815,0.000000,23.711967,-102.961525,0.000000,24.000000,-103.213020,0.000000,24.281029,-103.405823,0.000000,24.381063,-103.397491,0.000000,24.495949,-103.337265,0.000000,24.598242,-103.346947,0.000000,24.685823,-103.220757,0.000000,24.728739,-103.282570,0.000000,24.785429,-103.276978,0.000000,24.810911,-103.358337,0.000000,24.983570,-103.468666,0.000000,25.038723,-103.561996,0.000000,25.355120,-103.484673,0.000000,25.586136,-103.493820,0.000000,22.860922,-102.606789,0.000000,22.588581,-101.662354,0.000000,22.422155,-101.467026,0.000000,22.314558,-101.165009,0.000000,22.150076,-100.958588,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_387_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,-1,20,21,22,23,24,25,-1,26,27,28,29,30,31,-1,32,33,34,35,36,37,-1,38,39,-1,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,-1,20,21,22,23,24,25,-1,26,27,28,29,30,31,-1,32,33,34,35,36,37,-1,38,39,-1,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1})
          .setColor(new Color().setColor(getColor_6_391_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_392_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,-1}).setCoordIndex(new int[] {0,1,2,3,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.552048,-98.139206,0.000000,23.240459,-98.806984,0.000000,23.284264,-98.863060,0.000000,23.316828,-99.001144,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,-1,47,48,-1,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,-1,47,48,-1,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1})
          .setColor(new Color().setColor(getColor_6_401_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_402_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.661514,-103.401123,0.000000,20.630972,-103.335098,0.000000,20.648970,-103.302322,0.000000,20.605377,-103.284157,0.000000,20.565752,-103.207840,0.000000,20.568527,-103.137581,0.000000,20.626701,-103.044334,0.000000,20.542063,-102.792984,0.000000,20.536898,-102.533905,0.000000,20.564648,-102.418266,0.000000,20.439716,-102.130661,0.000000,20.367588,-102.100578,0.000000,20.341768,-102.033562,0.000000,20.461500,-101.505623,0.000000,21.493214,-104.892281,0.000000,21.355833,-104.698128,0.000000,21.302744,-104.662804,0.000000,21.198561,-104.655235,0.000000,21.062811,-104.535851,0.000000,21.023954,-104.389977,0.000000,21.078365,-104.230293,0.000000,20.915455,-103.974144,0.000000,20.921545,-103.838478,0.000000,20.890976,-103.841148,0.000000,20.869661,-103.769577,0.000000,20.752672,-103.645012,0.000000,20.718145,-103.491615,0.000000,20.661514,-103.401123,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1,15,16,17,18,19,20,-1,21,22,23,24,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1,15,16,17,18,19,20,-1,21,22,23,24,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.575291,-99.406898,0.000000,18.548277,-99.444046,0.000000,18.478022,-99.433578,0.000000,18.360361,-99.538109,0.000000,18.302540,-99.507301,0.000000,18.177538,-99.554832,0.000000,18.027479,-99.548294,0.000000,17.948101,-99.594398,0.000000,17.572342,-99.524986,0.000000,17.469566,-99.464890,0.000000,17.299700,-99.480263,0.000000,17.167742,-99.535995,0.000000,17.177837,-99.589317,0.000000,17.072594,-99.764061,0.000000,16.973055,-99.788254,0.000000,19.048128,-99.248398,0.000000,19.032898,-99.269493,0.000000,18.880486,-99.228859,0.000000,18.777821,-99.243256,0.000000,18.650505,-99.303459,0.000000,18.575291,-99.406898,0.000000,19.048128,-99.248398,0.000000,19.225410,-99.157684,0.000000,19.332987,-99.223442,0.000000,19.413570,-99.193520,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,-1,9,10,11,12,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,-1,9,10,11,12,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.590441,-100.144630,0.000000,22.998074,-99.720909,0.000000,23.164762,-99.688164,0.000000,23.381365,-99.526474,0.000000,23.414675,-99.382187,0.000000,23.621468,-99.288574,0.000000,23.620636,-99.198792,0.000000,23.711945,-99.175018,0.000000,23.731661,-99.129700,0.000000,24.215221,-98.482697,0.000000,24.113234,-98.618385,0.000000,24.083220,-98.835922,0.000000,23.731661,-99.129700,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.805984,-99.109367,0.000000,19.771376,-98.969696,0.000000,19.680708,-98.983902,0.000000,19.634996,-98.908195,0.000000,19.675167,-98.894913,0.000000,19.715181,-98.791824,0.000000,19.862965,-98.624435,0.000000,20.066603,-98.447701,0.000000,20.168119,-98.269272,0.000000,20.120255,-98.107719,0.000000,20.220081,-98.038231,0.000000,20.244551,-97.979568,0.000000,20.370296,-97.936493,0.000000,20.446707,-97.801117,0.000000,20.500025,-97.541389,0.000000,20.553864,-97.473671,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.085230,-98.179771,0.000000,19.037792,-97.885719,0.000000,18.820150,-97.497185,0.000000,18.887980,-97.387329,0.000000,18.819281,-97.161865,0.000000,18.909960,-96.945564,0.000000,18.803608,-96.694603,0.000000,18.754721,-96.656860,0.000000,18.745605,-96.561478,0.000000,18.820313,-96.318474,0.000000,18.909311,-96.195236,0.000000,19.021902,-96.127014,0.000000,19.085230,-98.179771,0.000000,19.352221,-98.613258,0.000000,19.308344,-98.697372,0.000000,19.295914,-98.924278,0.000000,19.410889,-99.068184,0.000000,19.413570,-99.193520,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,-1}).setCoordIndex(new int[] {0,1,2,3,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.597588,-98.457626,0.000000,18.758331,-98.885590,0.000000,18.959896,-99.074524,0.000000,19.048128,-99.248398,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,-1,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,-1,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,-1,95,96,97,98,99,100,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,-1,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,-1,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,-1,95,96,97,98,99,100,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1})
          .setColor(new Color().setColor(getColor_6_436_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_437_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {17.939884,-94.910530,0.000000,17.722456,-95.061859,0.000000,17.391521,-95.049347,0.000000,17.310980,-95.085251,0.000000,17.039845,-94.984329,0.000000,16.789190,-95.021255,0.000000,16.653492,-94.953468,0.000000,16.549036,-94.943344,0.000000,16.429951,-95.020432,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,-1,10,11,12,13,14,15,16,17,18,19,20,21,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,-1,10,11,12,13,14,15,16,17,18,19,20,21,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.615751,-90.735664,0.000000,18.571600,-90.440063,0.000000,18.654247,-90.349014,0.000000,18.700626,-89.984428,0.000000,18.666136,-89.826050,0.000000,18.505243,-89.450172,0.000000,18.450397,-89.209167,0.000000,18.476088,-88.701736,0.000000,18.526745,-88.467751,0.000000,18.498857,-88.308769,0.000000,18.000158,-93.366920,0.000000,18.031494,-93.232971,0.000000,17.995743,-93.154686,0.000000,17.995392,-92.973969,0.000000,17.947151,-92.850967,0.000000,17.685812,-92.548058,0.000000,17.685146,-92.035683,0.000000,17.793982,-91.832817,0.000000,17.963949,-91.734299,0.000000,18.335466,-91.262138,0.000000,18.639891,-91.024651,0.000000,18.615751,-90.735664,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,-1,6,7,8,9,10,-1,11,12,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,-1,45,46,47,48,49,-1,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,-1,6,7,8,9,10,-1,11,12,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,-1,45,46,47,48,49,-1,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1})
          .setColor(new Color().setColor(getColor_6_451_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_452_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1,30,31,32,33,34,35,36,37,38,39,40,-1,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,-1}).setCoordIndex(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1,30,31,32,33,34,35,36,37,38,39,40,-1,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,-1})
          .setColor(new Color().setColor(getColor_6_456_color()))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_457_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {15.127095,-92.446632,0.000000,15.046827,-92.361229,0.000000,15.073133,-92.302330,0.000000,15.172206,-92.326050,0.000000,15.121696,-92.276833,0.000000,15.132233,-92.245087,0.000000,15.221604,-92.188744,0.000000,15.236886,-92.229866,0.000000,15.258617,-92.207130,0.000000,15.310030,-92.235451,0.000000,15.444288,-92.115601,0.000000,15.519155,-92.111244,0.000000,15.581017,-92.152855,0.000000,15.660292,-92.141098,0.000000,15.700028,-92.088043,0.000000,15.679814,-92.002853,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.344090,-90.739265,0.000000,19.186144,-90.734428,0.000000,19.087061,-90.698013,0.000000,18.993145,-90.742775,0.000000,18.865164,-90.687386,0.000000,18.662304,-90.754066,0.000000,18.615751,-90.735664,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.153467,-86.874031,0.000000,21.156889,-86.843597,0.000000,20.831976,-86.893883,0.000000,20.615273,-87.100624,0.000000,20.478672,-87.280624,0.000000,20.245478,-87.432922,0.000000,20.177200,-87.584038,0.000000,20.018738,-87.638832,0.000000,19.945473,-87.779297,0.000000,19.605963,-88.028534,0.000000,19.463673,-88.040497,0.000000,19.258795,-88.132408,0.000000,18.956121,-88.174500,0.000000,18.737715,-88.363083,0.000000,18.526745,-88.467751,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,2,3,4,-1}).setCoordIndex(new int[] {0,1,2,3,4,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.671610,-107.290001,0.000000,24.990499,-107.567886,0.000000,25.224886,-107.889015,0.000000,25.335003,-107.943054,0.000000,25.472294,-108.098274,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN"))))))
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(getGeoCoordinate_6_483_point())
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.313457,-102.776718,0.000000,20.259720,-102.720840,0.000000,20.196892,-102.772400,0.000000,20.200832,-102.692497,0.000000,20.169167,-102.686684,0.000000,20.103886,-102.810013,0.000000,20.167774,-102.899437,0.000000,20.195553,-103.055847,0.000000,20.161388,-103.173889,0.000000,20.254444,-103.425842,0.000000,20.282776,-103.362793,0.000000,20.280552,-103.171112,0.000000,20.339996,-103.029449,0.000000,20.313457,-102.776718,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1}).setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.236664,-96.396660,0.000000,18.194721,-96.358902,0.000000,18.224442,-96.433624,0.000000,18.173611,-96.385834,0.000000,18.092777,-96.409180,0.000000,18.160275,-96.425003,0.000000,18.128330,-96.505280,0.000000,18.196663,-96.601959,0.000000,18.297222,-96.641953,0.000000,18.303055,-96.604446,0.000000,18.338375,-96.647049,0.000000,18.340832,-96.589737,0.000000,18.402775,-96.686951,0.000000,18.419998,-96.567505,0.000000,18.381664,-96.537231,0.000000,18.373055,-96.601395,0.000000,18.315552,-96.463058,0.000000,18.236664,-96.396660,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN"))))))
    .addChild(new Group()
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {25.677353,-100.317085,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {23.203833,-106.416069,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.673592,-103.343796,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.243235,-97.842628,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.427046,-99.127571,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.048632,-98.192947,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.006832,-96.085243,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {16.907431,-96.951347,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.821869,-89.552864,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {32.620205,-115.294235,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.853348,-102.186340,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.803988,-90.544662,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.189831,-110.253860,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {16.630297,-92.995163,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {28.560297,-105.975159,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {25.441856,-100.995827,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.210365,-103.684097,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.020000,-104.400002,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.010000,-101.150002,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {17.357059,-99.383369,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.097059,-98.700447,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.663355,-101.073204,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.320496,-99.531281,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.950079,-99.181175,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {21.530447,-104.782417,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {20.500740,-100.241173,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {18.551239,-88.264359,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.136719,-100.969238,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {24.713339,-107.455559,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {29.020445,-110.834221,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {17.967558,-92.862549,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.277630,-98.197227,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {19.467730,-96.925476,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {22.759216,-102.722939,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {23.735147,-99.148109,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,1.0})))
          .setCoord(new GeoCoordinate().setPoint(new MFVec3d(new double[] {16.974386,-99.931496,0.000000}))
            .setGeoOrigin(new GeoOrigin().setUSE("GEOORIGIN")))))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_30_point_1()
		{
			double[] value = {29.017776,-113.139717,0.000000,29.067776,-113.240570,0.000000,29.286663,-113.450844,0.000000,29.303055,-113.511948,0.000000,29.439163,-113.600281,0.000000,29.505833,-113.573898,0.000000,29.583611,-113.588623,0.000000,29.482498,-113.405289,0.000000,29.403332,-113.365013,0.000000,29.320000,-113.381958,0.000000,29.294167,-113.184174,0.000000,29.141109,-113.189453,0.000000,29.058887,-113.124451,0.000000,29.017776,-113.139717,0.000000,28.024719,-115.179459,0.000000,28.098888,-115.303886,0.000000,28.090275,-115.355293,0.000000,28.228333,-115.249733,0.000000,28.315830,-115.280563,0.000000,28.370552,-115.240837,0.000000,28.308887,-115.178886,0.000000,28.178886,-115.146118,0.000000,28.024719,-115.179459,0.000000,31.947489,-115.017899,0.000000,31.957222,-115.035278,0.000000,31.907776,-115.014450,0.000000,31.896385,-114.953056,0.000000,31.805553,-114.873901,0.000000,31.796665,-114.823898,0.000000,31.643608,-114.779449,0.000000,31.526386,-114.851120,0.000000,31.154720,-114.881119,0.000000,31.059998,-114.818069,0.000000,30.996109,-114.829727,0.000000,30.924999,-114.705292,0.000000,30.651108,-114.693893,0.000000,30.487778,-114.624451,0.000000,30.198608,-114.659729,0.000000,30.001110,-114.545288,0.000000,29.919167,-114.413353,0.000000,29.798054,-114.376953,0.000000,29.759163,-114.304459,0.000000,29.784721,-114.263344,0.000000,29.758610,-114.206123,0.000000,29.595833,-114.056122,0.000000,29.357220,-113.728348,0.000000,29.261665,-113.650848,0.000000,29.208611,-113.654716,0.000000,29.110275,-113.548340,0.000000,28.956387,-113.546402,0.000000,28.891388,-113.504730,0.000000,28.892498,-113.453056,0.000000,28.939163,-113.463623,0.000000,28.964996,-113.412514,0.000000,28.908607,-113.348343,0.000000,28.795830,-113.343338,0.000000,28.830276,-113.231667,0.000000,28.814442,-113.194168,0.000000,28.479721,-113.111954,0.000000,28.437496,-113.018066,0.000000,28.433331,-112.862793,0.000000,28.275555,-112.872513,0.000000,28.193054,-112.787781,0.000000,28.029720,-112.778633,0.000000,28.002220,-112.721947,0.000000,27.999741,-112.722397,0.000000,28.000540,-114.140823,0.000000,28.023888,-114.128616,0.000000,28.178333,-114.111954,0.000000,28.261665,-114.182793,0.000000,28.398888,-114.097504,0.000000,28.527222,-114.063606,0.000000,28.594444,-114.143066,0.000000,28.671665,-114.161957,0.000000,28.683609,-114.264183,0.000000,28.713608,-114.261673,0.000000,28.829998,-114.392502,0.000000,28.885830,-114.405289,0.000000,28.938610,-114.490837,0.000000,28.929165,-114.541122,0.000000,28.975277,-114.557510,0.000000,29.021942,-114.613617,0.000000,29.114441,-114.648064,0.000000,29.134998,-114.710007,0.000000,29.199444,-114.744453,0.000000,29.377499,-114.950287,0.000000,29.427757,-115.187500,0.000000,29.489166,-115.232513,0.000000,29.626389,-115.469452,0.000000,29.628330,-115.526123,0.000000,29.696388,-115.572777,0.000000,29.768330,-115.693893,0.000000,29.866943,-115.694458,0.000000,29.930275,-115.729172,0.000000,29.954441,-115.808327,0.000000,30.107498,-115.783073,0.000000,30.331944,-115.826401,0.000000,30.384441,-115.868057,0.000000,30.398052,-115.968063,0.000000,30.445553,-115.929169,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_30_point_2()
		{
			double[] value = {30.496666,-115.980560,0.000000,30.444721,-115.957779,0.000000,30.438889,-116.013344,0.000000,30.373055,-115.991386,0.000000,30.442776,-116.036392,0.000000,30.797775,-116.054169,0.000000,30.892220,-116.206947,0.000000,30.957775,-116.257507,0.000000,30.973610,-116.326683,0.000000,31.089722,-116.301682,0.000000,31.213886,-116.336937,0.000000,31.424999,-116.494453,0.000000,31.469997,-116.593338,0.000000,31.555275,-116.677513,0.000000,31.586666,-116.637512,0.000000,31.658886,-116.635277,0.000000,31.748055,-116.721680,0.000000,31.738609,-116.625839,0.000000,31.840275,-116.603058,0.000000,31.916943,-116.744171,0.000000,31.983887,-116.784180,0.000000,31.996109,-116.848892,0.000000,32.228333,-116.909729,0.000000,32.299995,-117.026672,0.000000,32.455826,-117.122223,0.000000,32.535332,-117.122375,0.000000,32.619408,-116.106125,0.000000,32.720810,-114.721260,0.000000,32.615993,-114.808601,0.000000,32.504448,-114.819305,0.000000,32.473049,-114.936699,0.000000,32.368610,-114.964203,0.000000,32.254669,-115.041496,0.000000,32.136108,-114.998901,0.000000,31.947489,-115.017899,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_35_point_1()
		{
			double[] value = {25.802776,-111.206123,0.000000,25.834164,-111.230293,0.000000,26.038887,-111.191391,0.000000,26.074444,-111.086670,0.000000,26.004444,-111.099457,0.000000,25.971386,-111.069168,0.000000,26.003609,-111.142227,0.000000,25.802776,-111.206123,0.000000,25.281109,-112.133621,0.000000,24.844997,-112.202507,0.000000,24.714722,-112.132782,0.000000,24.647778,-112.142227,0.000000,24.594719,-112.070847,0.000000,24.518055,-112.052231,0.000000,24.662498,-112.179169,0.000000,24.708885,-112.153343,0.000000,24.784164,-112.180557,0.000000,24.810555,-112.304169,0.000000,24.914997,-112.236679,0.000000,25.281109,-112.133621,0.000000,25.088840,-110.696091,0.000000,25.033886,-110.578903,0.000000,24.884720,-110.532227,0.000000,24.931110,-110.643890,0.000000,25.042500,-110.708893,0.000000,25.088840,-110.696091,0.000000,24.328331,-111.708069,0.000000,24.532497,-112.016678,0.000000,24.541111,-111.836937,0.000000,24.492496,-111.826134,0.000000,24.391666,-111.694733,0.000000,24.328331,-111.708069,0.000000,24.131943,-109.788353,0.000000,24.187496,-109.871399,0.000000,24.368889,-109.915558,0.000000,24.131943,-109.788353,0.000000,27.999741,-112.722397,0.000000,27.834721,-112.752502,0.000000,27.806942,-112.705841,0.000000,27.721386,-112.673340,0.000000,27.712776,-112.625839,0.000000,27.630554,-112.572777,0.000000,27.627220,-112.503891,0.000000,27.539997,-112.344452,0.000000,27.341663,-112.292793,0.000000,27.238609,-112.203339,0.000000,27.232777,-112.230011,0.000000,27.197498,-112.221680,0.000000,27.101944,-111.955292,0.000000,27.076942,-111.947510,0.000000,27.053333,-112.004181,0.000000,27.001110,-112.030838,0.000000,26.839443,-111.898064,0.000000,26.738888,-111.917236,0.000000,26.563889,-111.761948,0.000000,26.552776,-111.730293,0.000000,26.602219,-111.685287,0.000000,26.707222,-111.806122,0.000000,26.872498,-111.868622,0.000000,26.901108,-111.847778,0.000000,26.723610,-111.560837,0.000000,26.564999,-111.556953,0.000000,26.513611,-111.442230,0.000000,26.417774,-111.479446,0.000000,26.345554,-111.401398,0.000000,26.236942,-111.395569,0.000000,26.107777,-111.321121,0.000000,25.958332,-111.361954,0.000000,25.844719,-111.325012,0.000000,25.836388,-111.293327,0.000000,25.780277,-111.299728,0.000000,25.715832,-111.228058,0.000000,25.577499,-111.165283,0.000000,25.525555,-111.018341,0.000000,25.419167,-111.019447,0.000000,25.308887,-110.946121,0.000000,25.173054,-110.911118,0.000000,25.088333,-110.855011,0.000000,25.019722,-110.746674,0.000000,24.908886,-110.690842,0.000000,24.796944,-110.668327,0.000000,24.674164,-110.726669,0.000000,24.578331,-110.734177,0.000000,24.380554,-110.688904,0.000000,24.284443,-110.612793,0.000000,24.221664,-110.505836,0.000000,24.188889,-110.304169,0.000000,24.160000,-110.340012,0.000000,24.182220,-110.398903,0.000000,24.115833,-110.354172,0.000000,24.189163,-110.269447,0.000000,24.334442,-110.300003,0.000000,24.351944,-110.213623,0.000000,24.249443,-110.139450,0.000000,24.164165,-110.003342,0.000000,24.043888,-109.958893,0.000000,24.022499,-109.920288,0.000000,24.053055,-109.819458,0.000000,24.021385,-109.794449,0.000000,23.916386,-109.823624,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_35_point_2()
		{
			double[] value = {23.797775,-109.697777,0.000000,23.660000,-109.686401,0.000000,23.575554,-109.478348,0.000000,23.454166,-109.404167,0.000000,23.232777,-109.435013,0.000000,23.155552,-109.488342,0.000000,23.053886,-109.665558,0.000000,22.989441,-109.705002,0.000000,22.917774,-109.813057,0.000000,22.863888,-109.951950,0.000000,22.902496,-110.025009,0.000000,22.986664,-110.080566,0.000000,23.328331,-110.171951,0.000000,23.415276,-110.248611,0.000000,23.567497,-110.316681,0.000000,23.731667,-110.634453,0.000000,24.112221,-111.041672,0.000000,24.334442,-111.470840,0.000000,24.310276,-111.377792,0.000000,24.459721,-111.602783,0.000000,24.579720,-111.655006,0.000000,24.593887,-111.685287,0.000000,24.546944,-111.706123,0.000000,24.562496,-111.793617,0.000000,24.522778,-111.765556,0.000000,24.513611,-111.808327,0.000000,24.642498,-111.826950,0.000000,24.746666,-111.931122,0.000000,24.886387,-112.001953,0.000000,24.757500,-111.973892,0.000000,24.760830,-112.034180,0.000000,24.853054,-112.041397,0.000000,24.769722,-112.051964,0.000000,24.735832,-112.094452,0.000000,24.768608,-112.070847,0.000000,24.878052,-112.125839,0.000000,24.956387,-112.078613,0.000000,25.025833,-112.096123,0.000000,24.901108,-112.148903,0.000000,24.894165,-112.179459,0.000000,25.053886,-112.124184,0.000000,25.167500,-112.128067,0.000000,25.272221,-112.068069,0.000000,25.685276,-112.070847,0.000000,25.717777,-112.078903,0.000000,25.698330,-112.088348,0.000000,25.568333,-112.085281,0.000000,25.524166,-112.113342,0.000000,25.773609,-112.112503,0.000000,26.014721,-112.228348,0.000000,26.093609,-112.309174,0.000000,26.082497,-112.341949,0.000000,26.254997,-112.378342,0.000000,26.291386,-112.430008,0.000000,26.268887,-112.486389,0.000000,26.295830,-112.541672,0.000000,26.325832,-112.536957,0.000000,26.329166,-112.670837,0.000000,26.412220,-112.781113,0.000000,26.436386,-112.770844,0.000000,26.644997,-113.103348,0.000000,26.689442,-113.079727,0.000000,26.672222,-113.116669,0.000000,26.711388,-113.229172,0.000000,26.780552,-113.231667,0.000000,26.880554,-113.128067,0.000000,26.958885,-113.128342,0.000000,26.970276,-113.178619,0.000000,26.874996,-113.185013,0.000000,26.817497,-113.241386,0.000000,26.822220,-113.203613,0.000000,26.796108,-113.243347,0.000000,26.742775,-113.250290,0.000000,26.821663,-113.445847,0.000000,26.824165,-113.401123,0.000000,26.844719,-113.438606,0.000000,26.745831,-113.532791,0.000000,26.736942,-113.597504,0.000000,26.836666,-113.730293,0.000000,26.974163,-113.835564,0.000000,27.000553,-113.908340,0.000000,26.982777,-114.001404,0.000000,27.096664,-114.087784,0.000000,27.147499,-114.170013,0.000000,27.165554,-114.243896,0.000000,27.143887,-114.281113,0.000000,27.184719,-114.410568,0.000000,27.231941,-114.433617,0.000000,27.242222,-114.478622,0.000000,27.413609,-114.513634,0.000000,27.487499,-114.608337,0.000000,27.533886,-114.736679,0.000000,27.621944,-114.799454,0.000000,27.646111,-114.862793,0.000000,27.658054,-114.843903,0.000000,27.694443,-114.872223,0.000000,27.670555,-114.908340,0.000000,27.720833,-114.950844,0.000000,27.722221,-115.006668,0.000000,27.831108,-115.059723,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_35_point_3()
		{
			double[] value = {27.862778,-115.041122,0.000000,27.831665,-114.998611,0.000000,27.836388,-114.855827,0.000000,27.767220,-114.613617,0.000000,27.769444,-114.501404,0.000000,27.878887,-114.347229,0.000000,27.781387,-114.332230,0.000000,27.732498,-114.278900,0.000000,27.693054,-114.165848,0.000000,27.714722,-114.048340,0.000000,27.686665,-114.002228,0.000000,27.719997,-113.971390,0.000000,27.770554,-114.036118,0.000000,27.716942,-114.161118,0.000000,27.769444,-114.225853,0.000000,27.832775,-114.237228,0.000000,27.865555,-114.310562,0.000000,27.946388,-114.285004,0.000000,28.000210,-114.218269,0.000000,28.049442,-114.157227,0.000000,28.000549,-114.159302,0.000000,27.962776,-114.160568,0.000000,28.000540,-114.140823,0.000000,27.999741,-112.722397,0.000000};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_45_point_1()
		{
			double[] value = {21.856640,-101.524902,0.000000,21.772779,-101.588303,0.000000,21.656940,-101.543602,0.000000,21.533331,-101.632004,0.000000,21.326660,-101.576401,0.000000,21.243050,-101.658302,0.000000,21.150551,-101.839996,0.000000,21.102221,-101.848297,0.000000,20.813890,-102.074699,0.000000,20.773609,-102.091904,0.000000,20.591110,-101.978302,0.000000,20.464439,-102.089203,0.000000,20.389080,-102.108803,0.000000,20.343050,-102.211700,0.000000,20.338051,-102.443604,0.000000,20.229160,-102.622200,0.000000,20.196890,-102.772400,0.000000,20.163910,-102.888100,0.000000,20.092220,-103.048897,0.000000,20.023890,-103.096397,0.000000,19.989170,-103.086403,0.000000,19.981390,-103.038902,0.000000,19.899719,-103.022003,0.000000,19.952450,-102.929001,0.000000,19.931379,-102.915100,0.000000,19.899590,-102.807602,0.000000,19.899740,-102.789703,0.000000,19.882401,-102.741501,0.000000,19.818609,-102.726997,0.000000,19.757050,-102.830002,0.000000,19.706680,-102.823799,0.000000,19.592501,-102.763100,0.000000,19.473610,-102.748100,0.000000,19.491390,-102.609200,0.000000,19.406940,-102.573097,0.000000,19.224440,-102.674500,0.000000,19.254999,-102.768097,0.000000,19.175280,-102.968903,0.000000,19.096661,-102.975601,0.000000,19.036110,-103.095001,0.000000,18.955000,-103.132797,0.000000,19.066669,-103.285301,0.000000,18.974440,-103.348297,0.000000,18.967220,-103.479599,0.000000,19.072781,-103.524696,0.000000,19.325279,-103.491997,0.000000,19.480270,-103.644203,0.000000,19.392500,-103.822800,0.000000,19.518330,-104.067802,0.000000,19.463890,-104.146698,0.000000,19.383051,-104.129204,0.000000,19.319160,-104.255600,0.000000,19.271111,-104.386902,0.000000,19.284719,-104.429497,0.000000,19.230270,-104.473099,0.000000,19.253889,-104.540001,0.000000,19.143499,-104.594597,0.000000,19.168053,-104.662781,0.000000,19.230000,-104.735001,0.000000,19.220833,-104.809723,0.000000,19.288609,-104.796951,0.000000,19.280277,-104.885277,0.000000,19.344997,-104.992508,0.000000,19.448330,-105.069733,0.000000,19.564999,-105.102509,0.000000,19.679722,-105.269997,0.000000,20.026108,-105.518623,0.000000,20.219166,-105.561951,0.000000,20.371666,-105.674728,0.000000,20.424164,-105.676964,0.000000,20.489998,-105.560287,0.000000,20.513054,-105.351959,0.000000,20.574165,-105.244171,0.000000,20.644444,-105.238068,0.000000,20.693254,-105.271591,0.000000,20.925280,-105.083298,0.000000,20.925550,-104.948898,0.000000,21.020550,-104.769997,0.000000,21.012779,-104.721901,0.000000,20.923611,-104.625000,0.000000,20.916109,-104.535004,0.000000,20.829720,-104.467201,0.000000,20.708050,-104.285599,0.000000,20.860830,-104.275002,0.000000,20.978050,-104.209999,0.000000,21.177731,-104.227699,0.000000,21.211390,-104.042503,0.000000,21.287781,-103.961403,0.000000,21.374969,-103.944901,0.000000,21.547220,-104.207199,0.000000,21.598049,-104.152802,0.000000,21.785830,-104.093597,0.000000,22.076389,-104.402802,0.000000,22.264540,-104.329597,0.000000,22.342220,-104.144203,0.000000,22.368050,-103.950302,0.000000,22.510830,-103.921700,0.000000,22.581940,-104.029404,0.000000,22.658609,-103.994202,0.000000,22.764721,-104.007004,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_45_point_2()
		{
			double[] value = {22.723049,-103.802002,0.000000,22.636669,-103.770599,0.000000,22.577221,-103.870796,0.000000,22.489441,-103.833603,0.000000,22.461109,-103.883904,0.000000,22.183889,-103.868599,0.000000,22.576389,-103.741402,0.000000,22.573330,-103.658897,0.000000,22.524719,-103.614998,0.000000,22.145990,-103.700897,0.000000,22.112780,-103.682503,0.000000,22.081671,-103.638298,0.000000,22.117290,-103.522301,0.000000,22.327499,-103.371696,0.000000,22.435551,-103.409203,0.000000,22.505831,-103.372498,0.000000,22.368610,-103.179497,0.000000,22.307779,-103.201401,0.000000,22.286110,-103.055603,0.000000,22.147779,-103.127800,0.000000,22.090269,-103.091103,0.000000,21.975281,-103.170799,0.000000,21.982500,-103.293098,0.000000,21.933331,-103.394203,0.000000,21.848049,-103.446999,0.000000,21.785549,-103.547798,0.000000,21.731939,-103.509499,0.000000,21.593050,-103.514198,0.000000,21.461390,-103.650299,0.000000,21.516390,-103.733597,0.000000,21.386940,-103.702797,0.000000,21.251659,-103.753098,0.000000,21.223890,-103.765602,0.000000,21.203329,-103.737000,0.000000,21.241940,-103.646103,0.000000,21.188049,-103.601700,0.000000,21.198059,-103.542801,0.000000,21.054440,-103.055801,0.000000,21.187500,-103.085602,0.000000,21.306660,-103.034401,0.000000,21.284719,-102.962196,0.000000,21.328609,-102.906700,0.000000,21.320551,-102.833603,0.000000,21.381941,-102.687202,0.000000,21.546940,-102.639198,0.000000,21.617769,-102.769699,0.000000,21.724171,-102.741402,0.000000,21.763889,-102.644997,0.000000,21.687220,-102.493103,0.000000,21.655550,-102.240303,0.000000,21.768610,-102.083298,0.000000,21.851669,-102.046097,0.000000,21.883051,-101.965302,0.000000,22.011761,-101.846199,0.000000,22.015270,-101.800301,0.000000,21.856640,-101.524902,0.000000};
			return value;
		}





		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_70_point_1()
		{
			double[] value = {18.967220,-103.479599,0.000000,18.974440,-103.348297,0.000000,19.066669,-103.285301,0.000000,18.955000,-103.132797,0.000000,19.036110,-103.095001,0.000000,19.096661,-102.975601,0.000000,19.175280,-102.968903,0.000000,19.254999,-102.768097,0.000000,19.224440,-102.674500,0.000000,19.406940,-102.573097,0.000000,19.491390,-102.609200,0.000000,19.473610,-102.748100,0.000000,19.592501,-102.763100,0.000000,19.706680,-102.823799,0.000000,19.757050,-102.830002,0.000000,19.818609,-102.726997,0.000000,19.882401,-102.741501,0.000000,19.899740,-102.789703,0.000000,19.899590,-102.807602,0.000000,19.931379,-102.915100,0.000000,19.952450,-102.929001,0.000000,19.899719,-103.022003,0.000000,19.981390,-103.038902,0.000000,19.989170,-103.086403,0.000000,20.023890,-103.096397,0.000000,20.092220,-103.048897,0.000000,20.163910,-102.888100,0.000000,20.196890,-102.772400,0.000000,20.229160,-102.622200,0.000000,20.338051,-102.443604,0.000000,20.343050,-102.211700,0.000000,20.389080,-102.108803,0.000000,20.403049,-101.995598,0.000000,20.326941,-101.994202,0.000000,20.367290,-101.980598,0.000000,20.364441,-101.950600,0.000000,20.211109,-101.920303,0.000000,20.191111,-101.888901,0.000000,20.211941,-101.820801,0.000000,20.190830,-101.673897,0.000000,20.318050,-101.606903,0.000000,20.333679,-101.460602,0.000000,20.178610,-101.399399,0.000000,20.080000,-101.409203,0.000000,20.035271,-101.361099,0.000000,20.023890,-101.274399,0.000000,20.086390,-101.154404,0.000000,20.059719,-100.984497,0.000000,20.036659,-100.915298,0.000000,19.941111,-100.898399,0.000000,19.927500,-100.841400,0.000000,19.985279,-100.679199,0.000000,19.907780,-100.481400,0.000000,20.057220,-100.348602,0.000000,20.204510,-100.280296,0.000000,20.082220,-100.182503,0.000000,19.938040,-100.122803,0.000000,19.877220,-100.056999,0.000000,19.827221,-100.144203,0.000000,19.641390,-100.186996,0.000000,19.415831,-100.138901,0.000000,19.334721,-100.297203,0.000000,19.262779,-100.284203,0.000000,18.983330,-100.533897,0.000000,18.940550,-100.529404,0.000000,18.859720,-100.586403,0.000000,18.786070,-100.682602,0.000000,18.860189,-100.728104,0.000000,18.791109,-100.769699,0.000000,18.525551,-100.720596,0.000000,18.402241,-100.593597,0.000000,18.353331,-100.624496,0.000000,18.387501,-100.685600,0.000000,18.472219,-100.793098,0.000000,18.477501,-100.915298,0.000000,18.450001,-100.909401,0.000000,18.441940,-100.946701,0.000000,18.517220,-101.011101,0.000000,18.501110,-101.087502,0.000000,18.533609,-101.295601,0.000000,18.479204,-101.451614,0.000000,18.485439,-101.509819,0.000000,18.524933,-101.574257,0.000000,18.608080,-101.619987,0.000000,18.595608,-101.844475,0.000000,18.537405,-101.877739,0.000000,18.290047,-101.863182,0.000000,18.261391,-101.900299,0.000000,18.202221,-101.987503,0.000000,18.174160,-102.146103,0.000000,17.921894,-102.180855,0.000000,17.922497,-102.188904,0.000000,18.023331,-102.487503,0.000000,18.065830,-102.745010,0.000000,18.189999,-103.029449,0.000000,18.313610,-103.450012,0.000000,18.500832,-103.579178,0.000000,18.577499,-103.698624,0.000000,18.621387,-103.686951,0.000000,18.688068,-103.745483,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_70_point_2()
		{
			double[] value = {18.775829,-103.683098,0.000000,18.791941,-103.631104,0.000000,18.889999,-103.610802,0.000000,18.881660,-103.577499,0.000000,18.967220,-103.479599,0.000000};
			return value;
		}





		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_105_point_1()
		{
			double[] value = {18.430830,-96.750633,0.000000,18.385000,-96.726387,0.000000,18.284719,-96.787514,0.000000,18.240829,-96.886673,0.000000,18.150551,-96.962784,0.000000,18.138330,-97.080002,0.000000,18.179440,-97.206680,0.000000,18.160271,-97.281403,0.000000,18.102779,-97.369743,0.000000,17.977779,-97.449448,0.000000,18.172779,-97.641403,0.000000,18.293329,-97.613892,0.000000,18.340549,-97.648064,0.000000,18.309441,-97.719177,0.000000,18.172779,-97.796402,0.000000,17.992769,-97.738892,0.000000,17.924999,-97.844452,0.000000,17.998791,-97.922623,0.000000,18.032780,-97.942780,0.000000,18.025000,-98.159180,0.000000,17.909719,-98.246948,0.000000,17.923050,-98.309723,0.000000,17.892220,-98.347778,0.000000,17.994160,-98.448624,0.000000,17.973330,-98.616959,0.000000,18.011391,-98.763062,0.000000,18.134439,-98.831680,0.000000,18.125271,-98.904167,0.000000,18.202221,-98.927231,0.000000,18.237780,-99.031403,0.000000,18.370790,-99.050491,0.000000,18.415001,-98.922501,0.000000,18.495001,-98.819168,0.000000,18.418329,-98.695282,0.000000,18.438610,-98.671112,0.000000,18.719021,-98.749924,0.000000,18.692499,-98.665283,0.000000,18.798330,-98.744743,0.000000,18.905001,-98.656403,0.000000,18.996759,-98.662231,0.000000,19.165279,-98.636948,0.000000,19.405830,-98.666122,0.000000,19.475760,-98.627983,0.000000,19.421940,-98.468338,0.000000,19.366940,-98.460564,0.000000,19.095551,-98.198624,0.000000,19.120831,-98.082497,0.000000,19.202770,-97.993622,0.000000,19.156389,-97.901947,0.000000,19.204439,-97.843903,0.000000,19.281670,-97.834167,0.000000,19.286110,-97.656403,0.000000,19.356390,-97.613342,0.000000,19.374439,-97.684174,0.000000,19.456390,-97.775009,0.000000,19.435551,-97.847229,0.000000,19.509720,-97.882782,0.000000,19.541389,-97.845573,0.000000,19.626390,-97.964172,0.000000,19.616110,-98.011124,0.000000,19.677780,-98.001106,0.000000,19.672779,-98.143066,0.000000,19.846109,-98.258057,0.000000,20.105000,-98.095840,0.000000,20.198891,-98.134171,0.000000,20.217220,-98.244743,0.000000,20.276939,-98.245827,0.000000,20.313890,-98.238068,0.000000,20.324720,-98.162514,0.000000,20.432171,-98.098183,0.000000,20.519720,-97.963058,0.000000,20.666660,-97.948624,0.000000,20.706390,-97.883057,0.000000,20.805000,-97.873901,0.000000,20.793051,-97.733902,0.000000,20.650551,-97.742233,0.000000,20.588610,-97.579178,0.000000,20.490299,-97.570648,0.000000,20.417770,-97.628891,0.000000,20.469721,-97.693336,0.000000,20.439899,-97.758873,0.000000,20.255280,-97.752792,0.000000,20.176109,-97.692497,0.000000,20.168329,-97.614731,0.000000,20.106670,-97.564453,0.000000,20.121111,-97.515007,0.000000,20.239719,-97.470573,0.000000,20.262220,-97.412231,0.000000,20.263729,-97.381447,0.000000,20.147221,-97.146393,0.000000,20.117500,-97.137222,0.000000,19.895550,-97.309448,0.000000,19.750000,-97.285278,0.000000,19.683889,-97.308899,0.000000,19.619720,-97.354446,0.000000,19.585831,-97.440002,0.000000,19.538330,-97.353348,0.000000,19.401390,-97.334457,0.000000,19.373610,-97.246399,0.000000,19.306660,-97.185562,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_105_point_2()
		{
			double[] value = {19.307779,-97.056122,0.000000,19.267500,-97.001678,0.000000,19.183050,-97.079727,0.000000,19.193609,-97.170013,0.000000,19.160000,-97.264717,0.000000,19.026390,-97.250839,0.000000,18.887220,-97.247787,0.000000,18.769440,-97.345291,0.000000,18.632500,-97.272781,0.000000,18.643330,-97.144180,0.000000,18.476669,-97.038620,0.000000,18.552780,-96.807510,0.000000,18.430830,-96.750633,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_110_point_1()
		{
			double[] value = {18.482929,-88.299500,0.000000,18.477612,-88.483948,0.000000,18.235832,-88.600021,0.000000,18.185555,-88.681122,0.000000,18.061195,-88.710587,0.000000,17.936951,-88.837570,0.000000,17.877560,-88.840973,0.000000,18.005833,-89.035843,0.000000,17.956066,-89.143051,0.000000,17.818886,-89.141953,0.000000,17.819162,-89.430443,0.000000,19.651939,-89.418327,0.000000,20.662500,-87.753891,0.000000,21.024719,-87.540558,0.000000,21.502314,-87.539154,0.000000,21.493889,-87.501953,0.000000,21.463886,-87.486389,0.000000,21.436943,-87.240845,0.000000,21.487778,-87.141113,0.000000,21.554722,-87.129181,0.000000,21.567219,-87.170013,0.000000,21.527496,-87.256668,0.000000,21.552219,-87.341675,0.000000,21.504166,-87.396118,0.000000,21.526943,-87.414459,0.000000,21.579720,-87.360291,0.000000,21.561665,-87.268890,0.000000,21.623333,-87.112503,0.000000,21.578331,-87.003342,0.000000,21.429443,-86.908066,0.000000,21.430275,-86.828339,0.000000,21.183331,-86.813339,0.000000,21.151386,-86.738892,0.000000,21.032497,-86.783066,0.000000,21.012497,-86.825287,0.000000,20.838333,-86.878342,0.000000,20.614719,-87.067505,0.000000,20.503887,-87.226395,0.000000,20.214722,-87.430008,0.000000,20.092777,-87.471954,0.000000,19.895554,-87.433334,0.000000,19.868399,-87.434532,0.000000,19.847431,-87.442871,0.000000,19.776386,-87.472229,0.000000,19.831665,-87.480011,0.000000,19.853632,-87.447334,0.000000,19.909164,-87.441391,0.000000,19.943054,-87.484451,0.000000,19.876110,-87.459732,0.000000,19.802219,-87.520569,0.000000,19.796665,-87.585007,0.000000,19.627220,-87.664459,0.000000,19.678333,-87.657227,0.000000,19.674721,-87.738892,0.000000,19.592777,-87.730286,0.000000,19.561943,-87.660843,0.000000,19.505276,-87.670013,0.000000,19.560276,-87.566956,0.000000,19.542500,-87.446121,0.000000,19.580666,-87.418442,0.000000,19.600277,-87.432510,0.000000,19.571663,-87.436676,0.000000,19.581387,-87.527237,0.000000,19.579441,-87.444458,0.000000,19.634163,-87.437500,0.000000,19.578888,-87.411667,0.000000,19.447220,-87.465561,0.000000,19.400276,-87.531677,0.000000,19.395554,-87.570557,0.000000,19.434444,-87.542511,0.000000,19.399998,-87.626404,0.000000,19.318054,-87.676392,0.000000,19.247776,-87.687500,0.000000,19.210831,-87.640289,0.000000,19.316666,-87.552231,0.000000,19.326385,-87.500000,0.000000,19.282219,-87.511398,0.000000,19.313889,-87.461121,0.000000,19.215275,-87.539734,0.000000,18.764999,-87.652237,0.000000,18.667774,-87.729736,0.000000,18.412498,-87.759171,0.000000,18.310833,-87.828064,0.000000,18.190830,-87.847504,0.000000,18.235554,-87.853897,0.000000,18.241108,-87.891113,0.000000,18.320274,-87.857513,0.000000,18.286388,-87.885559,0.000000,18.438053,-87.924728,0.000000,18.517220,-88.080841,0.000000,18.681389,-88.001114,0.000000,18.869442,-88.037506,0.000000,18.720833,-88.122513,0.000000,18.782219,-88.130280,0.000000,18.684719,-88.253067,0.000000,18.733330,-88.188614,0.000000,18.670555,-88.194458,0.000000,18.686665,-88.150848,0.000000,18.482929,-88.299500,0.000000,20.255554,-86.993347,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_110_point_2()
		{
			double[] value = {20.391666,-87.020004,0.000000,20.539444,-86.938904,0.000000,20.564442,-86.900284,0.000000,20.541664,-86.828903,0.000000,20.590553,-86.735001,0.000000,20.353886,-86.885559,0.000000,20.255554,-86.993347,0.000000};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_125_point_1()
		{
			double[] value = {18.430830,-96.750633,0.000000,18.522221,-96.635559,0.000000,18.681110,-96.674179,0.000000,18.541109,-96.405838,0.000000,18.388611,-96.356949,0.000000,18.291660,-96.254730,0.000000,18.213921,-96.236687,0.000000,18.180269,-96.205292,0.000000,18.185551,-96.161392,0.000000,18.141670,-96.150284,0.000000,18.164080,-96.094650,0.000000,18.119160,-95.862228,0.000000,18.051390,-95.804459,0.000000,17.941111,-95.799454,0.000000,17.779160,-95.915558,0.000000,17.524719,-95.790283,0.000000,17.501659,-95.725014,0.000000,17.533051,-95.560013,0.000000,17.633051,-95.439178,0.000000,17.641390,-95.364182,0.000000,17.733330,-95.210281,0.000000,17.648190,-95.205582,0.000000,17.594770,-95.251709,0.000000,17.346661,-95.069168,0.000000,17.335831,-95.001106,0.000000,17.222500,-94.967216,0.000000,17.172779,-94.328056,0.000000,17.150280,-93.873428,0.000000,17.012220,-93.868057,0.000000,17.013050,-93.905289,0.000000,16.881941,-93.909180,0.000000,16.800550,-94.041397,0.000000,16.653049,-94.035843,0.000000,16.510000,-94.123062,0.000000,16.283331,-94.036392,0.000000,16.150949,-94.083435,0.000000,16.226944,-94.136673,0.000000,16.196941,-94.205292,0.000000,16.219997,-94.295288,0.000000,16.294441,-94.368057,0.000000,16.278889,-94.424454,0.000000,16.200554,-94.416122,0.000000,16.134163,-94.271118,0.000000,16.176388,-94.341675,0.000000,16.162220,-94.221954,0.000000,16.118889,-94.181671,0.000000,16.095171,-94.090172,0.000000,16.089443,-94.068069,0.000000,15.996387,-93.962509,0.000000,16.036648,-94.062775,0.000000,16.170277,-94.395569,0.000000,16.187222,-94.528900,0.000000,16.196663,-94.724731,0.000000,16.258053,-94.615845,0.000000,16.318333,-94.578064,0.000000,16.361942,-94.667236,0.000000,16.257774,-94.789734,0.000000,16.286388,-94.808624,0.000000,16.331944,-94.773056,0.000000,16.427498,-94.861954,0.000000,16.274719,-95.067230,0.000000,16.251942,-94.870834,0.000000,16.283607,-94.835007,0.000000,16.256107,-94.831680,0.000000,16.240833,-94.931671,0.000000,16.224720,-94.778336,0.000000,16.194164,-94.756958,0.000000,16.202499,-95.135010,0.000000,16.164719,-95.145004,0.000000,16.149719,-95.220291,0.000000,16.056110,-95.359177,0.000000,16.013054,-95.366394,0.000000,15.978054,-95.420288,0.000000,15.818609,-95.944458,0.000000,15.691666,-96.181946,0.000000,15.688610,-96.436111,0.000000,15.643610,-96.476120,0.000000,15.727499,-96.839447,0.000000,15.913332,-97.196671,0.000000,15.968611,-97.785004,0.000000,16.021385,-97.871124,0.000000,16.061943,-97.870010,0.000000,16.196941,-98.167236,0.000000,16.183887,-98.064453,0.000000,16.214165,-98.098068,0.000000,16.261387,-98.398895,0.000000,16.319344,-98.554688,0.000000,16.383329,-98.468613,0.000000,16.405001,-98.328056,0.000000,16.545000,-98.329727,0.000000,16.645281,-98.206123,0.000000,16.702669,-98.240372,0.000000,16.700830,-98.167793,0.000000,16.760000,-98.081680,0.000000,16.884159,-98.056671,0.000000,17.041109,-98.013344,0.000000,17.112499,-98.075012,0.000000,17.248329,-98.290848,0.000000,17.411659,-98.303337,0.000000,17.532499,-98.379730,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_125_point_2()
		{
			double[] value = {17.688610,-98.379730,0.000000,17.865829,-98.321121,0.000000,17.892220,-98.347778,0.000000,17.923050,-98.309723,0.000000,17.909719,-98.246948,0.000000,18.025000,-98.159180,0.000000,18.032780,-97.942780,0.000000,17.998791,-97.922623,0.000000,17.924999,-97.844452,0.000000,17.992769,-97.738892,0.000000,18.172779,-97.796402,0.000000,18.309441,-97.719177,0.000000,18.340549,-97.648064,0.000000,18.293329,-97.613892,0.000000,18.172779,-97.641403,0.000000,17.977779,-97.449448,0.000000,18.102779,-97.369743,0.000000,18.160271,-97.281403,0.000000,18.179440,-97.206680,0.000000,18.138330,-97.080002,0.000000,18.150551,-96.962784,0.000000,18.240829,-96.886673,0.000000,18.284719,-96.787514,0.000000,18.385000,-96.726387,0.000000,18.430830,-96.750633,0.000000};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_135_point_1()
		{
			double[] value = {17.241108,-91.437500,0.000000,17.176388,-91.352783,0.000000,17.178333,-91.277237,0.000000,17.035553,-91.184448,0.000000,17.010277,-91.118347,0.000000,16.902775,-91.062790,0.000000,16.868053,-90.985840,0.000000,16.903053,-90.983337,0.000000,16.899166,-90.955292,0.000000,16.871944,-90.966125,0.000000,16.829720,-90.921112,0.000000,16.804996,-90.803345,0.000000,16.726460,-90.714279,0.000000,16.644165,-90.658066,0.000000,16.583054,-90.665283,0.000000,16.581387,-90.631668,0.000000,16.519165,-90.645004,0.000000,16.510555,-90.611115,0.000000,16.483887,-90.634171,0.000000,16.484997,-90.546402,0.000000,16.458332,-90.481674,0.000000,16.426109,-90.480835,0.000000,16.415554,-90.395844,0.000000,16.365276,-90.378891,0.000000,16.359722,-90.420288,0.000000,16.340832,-90.391113,0.000000,16.252777,-90.459457,0.000000,16.237221,-90.436401,0.000000,16.190830,-90.459732,0.000000,16.167500,-90.427505,0.000000,16.106388,-90.460846,0.000000,16.102219,-90.431671,0.000000,16.074718,-90.458069,0.000000,16.074997,-91.729172,0.000000,15.262220,-92.211395,0.000000,15.077776,-92.065842,0.000000,14.994444,-92.149734,0.000000,14.897499,-92.141678,0.000000,14.843611,-92.185837,0.000000,14.675833,-92.154449,0.000000,14.588333,-92.187225,0.000000,14.550547,-92.246780,0.000000,15.105555,-92.798340,0.000000,15.170555,-92.844452,0.000000,15.151943,-92.775284,0.000000,15.086666,-92.743896,0.000000,15.171110,-92.769180,0.000000,15.208887,-92.845566,0.000000,15.181665,-92.851395,0.000000,15.259165,-92.976120,0.000000,15.481388,-93.194168,0.000000,15.759722,-93.546402,0.000000,15.994720,-93.928894,0.000000,16.016109,-93.929459,0.000000,15.998610,-93.881958,0.000000,16.021664,-93.855835,0.000000,16.087776,-93.894180,0.000000,16.136944,-94.073624,0.000000,16.150949,-94.083435,0.000000,16.283331,-94.036392,0.000000,16.510000,-94.123062,0.000000,16.653049,-94.035843,0.000000,16.800550,-94.041397,0.000000,16.881941,-93.909180,0.000000,17.013050,-93.905289,0.000000,17.012220,-93.868057,0.000000,17.150280,-93.873428,0.000000,17.307501,-93.626953,0.000000,17.375460,-93.589401,0.000000,17.508610,-93.526672,0.000000,17.607780,-93.391953,0.000000,17.959721,-93.309448,0.000000,17.991390,-93.264183,0.000000,17.943609,-93.142227,0.000000,17.918890,-92.994743,0.000000,17.730270,-93.013062,0.000000,17.544720,-92.986107,0.000000,17.530279,-92.905563,0.000000,17.404440,-92.832230,0.000000,17.361660,-92.761673,0.000000,17.667770,-92.386673,0.000000,17.716940,-92.365837,0.000000,17.789440,-92.153633,0.000000,17.788610,-92.068619,0.000000,17.832781,-92.077789,0.000000,17.912220,-91.989899,0.000000,17.895550,-91.950562,0.000000,17.854719,-91.945557,0.000000,17.887220,-91.912514,0.000000,17.889160,-91.823334,0.000000,17.855551,-91.786667,0.000000,17.773689,-91.772873,0.000000,17.726669,-91.793617,0.000000,17.714161,-91.698624,0.000000,17.644720,-91.664169,0.000000,17.505550,-91.665283,0.000000,17.469900,-91.507584,0.000000,17.404160,-91.496117,0.000000,17.386940,-91.426392,0.000000,17.326660,-91.388062,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_135_point_2()
		{
			double[] value = {17.241108,-91.437500,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_140_point_1()
		{
			double[] value = {28.756386,-112.296402,0.000000,28.878330,-112.564178,0.000000,28.961388,-112.486389,0.000000,29.065830,-112.496948,0.000000,29.186108,-112.456947,0.000000,29.253052,-112.268623,0.000000,29.146942,-112.264183,0.000000,28.981667,-112.200844,0.000000,28.811665,-112.264450,0.000000,28.781666,-112.248062,0.000000,28.756386,-112.296402,0.000000,31.343348,-109.045006,0.000000,31.343451,-108.827309,0.000000,31.192221,-108.891403,0.000000,31.156940,-108.836098,0.000000,31.205000,-108.798103,0.000000,30.632500,-108.735001,0.000000,30.575830,-108.677803,0.000000,29.992769,-108.558098,0.000000,29.401110,-108.613602,0.000000,29.400829,-108.707802,0.000000,28.771111,-108.623901,0.000000,28.696390,-108.689499,0.000000,28.289169,-108.565598,0.000000,28.212219,-108.652496,0.000000,28.298330,-108.880798,0.000000,28.305550,-108.976997,0.000000,28.275829,-109.022003,0.000000,28.299160,-109.055801,0.000000,28.175831,-109.146400,0.000000,27.785000,-108.913902,0.000000,27.711670,-108.809700,0.000000,27.599440,-108.775002,0.000000,27.520000,-108.655296,0.000000,27.404160,-108.667503,0.000000,27.319160,-108.636398,0.000000,27.151939,-108.665298,0.000000,27.038059,-108.604202,0.000000,26.961330,-108.471298,0.000000,26.865829,-108.476997,0.000000,26.831940,-108.486397,0.000000,26.338423,-109.143547,0.000000,26.376389,-109.158340,0.000000,26.332775,-109.248337,0.000000,26.448055,-109.241119,0.000000,26.535831,-109.276947,0.000000,26.686943,-109.473343,0.000000,26.703888,-109.434448,0.000000,26.729443,-109.505569,0.000000,26.764999,-109.517502,0.000000,26.733608,-109.566681,0.000000,26.682220,-109.508904,0.000000,26.702774,-109.627502,0.000000,26.675278,-109.698624,0.000000,26.736385,-109.806671,0.000000,26.986385,-109.946953,0.000000,26.941666,-109.882233,0.000000,27.105274,-109.962509,0.000000,27.095833,-110.063339,0.000000,27.155277,-110.314728,0.000000,27.264164,-110.414726,0.000000,27.299164,-110.509743,0.000000,27.311665,-110.446404,0.000000,27.384163,-110.490280,0.000000,27.367496,-110.553886,0.000000,27.533886,-110.577217,0.000000,27.656109,-110.635834,0.000000,27.678886,-110.569168,0.000000,27.678608,-110.601669,0.000000,27.719166,-110.591400,0.000000,27.738052,-110.544449,0.000000,27.747776,-110.601120,0.000000,27.822777,-110.609451,0.000000,27.840832,-110.516113,0.000000,27.866386,-110.509743,0.000000,27.887218,-110.603622,0.000000,27.859997,-110.610001,0.000000,27.917500,-110.775558,0.000000,27.905277,-110.847778,0.000000,27.924721,-110.810013,0.000000,27.986385,-110.850281,0.000000,27.895832,-110.891678,0.000000,27.894444,-110.859177,0.000000,27.835552,-110.879181,0.000000,27.967499,-110.995010,0.000000,27.935555,-111.101120,0.000000,28.056389,-111.238892,0.000000,28.327499,-111.456680,0.000000,28.379166,-111.435837,0.000000,28.464722,-111.695557,0.000000,28.588333,-111.763344,0.000000,28.761665,-111.947243,0.000000,28.783886,-111.904449,0.000000,28.747219,-111.863617,0.000000,28.799721,-111.855293,0.000000,28.833054,-111.968903,0.000000,28.963608,-112.110291,0.000000,28.972500,-112.164726,0.000000,29.134720,-112.166122,0.000000,29.184998,-112.223068,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_140_point_2()
		{
			double[] value = {29.301941,-112.210564,0.000000,29.335278,-112.288620,0.000000,29.323330,-112.336403,0.000000,29.292774,-112.339447,0.000000,29.329720,-112.391678,0.000000,29.380276,-112.410278,0.000000,29.500553,-112.377228,0.000000,29.713333,-112.577789,0.000000,29.900276,-112.663620,0.000000,29.916943,-112.743057,0.000000,30.208611,-112.756119,0.000000,30.276943,-112.818336,0.000000,30.278610,-112.860840,0.000000,30.342777,-112.842789,0.000000,30.431664,-112.871674,0.000000,30.698887,-113.081390,0.000000,30.814442,-113.117233,0.000000,30.949444,-113.080566,0.000000,31.068607,-113.120293,0.000000,31.000000,-113.068069,0.000000,31.173885,-113.042236,0.000000,31.232220,-113.096680,0.000000,31.230553,-113.142227,0.000000,31.202774,-113.106117,0.000000,31.199718,-113.136398,0.000000,31.288887,-113.238892,0.000000,31.266941,-113.271667,0.000000,31.243889,-113.217789,0.000000,31.241108,-113.253067,0.000000,31.349442,-113.635834,0.000000,31.352776,-113.611679,0.000000,31.496944,-113.638344,0.000000,31.609165,-113.885559,0.000000,31.601387,-113.943336,0.000000,31.660275,-113.960007,0.000000,31.572498,-113.981949,0.000000,31.568054,-113.945557,0.000000,31.517776,-113.990570,0.000000,31.492775,-114.046677,0.000000,31.504444,-114.169724,0.000000,31.760830,-114.583893,0.000000,31.767776,-114.696953,0.000000,31.947489,-115.017899,0.000000,32.136108,-114.998901,0.000000,32.254669,-115.041496,0.000000,32.368610,-114.964203,0.000000,32.473049,-114.936699,0.000000,32.504448,-114.819305,0.000000,32.487114,-114.820969,0.000000,32.043560,-113.328377,0.000000,31.431438,-111.368866,0.000000,31.335535,-111.071320,0.000000,31.337559,-110.451942,0.000000,31.343348,-109.045006,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_145_point_1()
		{
			double[] value = {26.961330,-108.471298,0.000000,27.038059,-108.604202,0.000000,27.151939,-108.665298,0.000000,27.319160,-108.636398,0.000000,27.404160,-108.667503,0.000000,27.520000,-108.655296,0.000000,27.599440,-108.775002,0.000000,27.711670,-108.809700,0.000000,27.785000,-108.913902,0.000000,28.175831,-109.146400,0.000000,28.299160,-109.055801,0.000000,28.275829,-109.022003,0.000000,28.305550,-108.976997,0.000000,28.298330,-108.880798,0.000000,28.212219,-108.652496,0.000000,28.289169,-108.565598,0.000000,28.696390,-108.689499,0.000000,28.771111,-108.623901,0.000000,29.400829,-108.707802,0.000000,29.401110,-108.613602,0.000000,29.992769,-108.558098,0.000000,30.575830,-108.677803,0.000000,30.632500,-108.735001,0.000000,31.205000,-108.798103,0.000000,31.156940,-108.836098,0.000000,31.192221,-108.891403,0.000000,31.343451,-108.827309,0.000000,31.343742,-108.210060,0.000000,31.786804,-108.202660,0.000000,31.784981,-107.282997,0.000000,31.786198,-106.538971,0.000000,31.733763,-106.383041,0.000000,31.478128,-106.212753,0.000000,31.393818,-105.998360,0.000000,31.170780,-105.769730,0.000000,31.086428,-105.603218,0.000000,30.998285,-105.554382,0.000000,30.902510,-105.409065,0.000000,30.853081,-105.390312,0.000000,30.816507,-105.313782,0.000000,30.831949,-105.287598,0.000000,30.797653,-105.258186,0.000000,30.812086,-105.214340,0.000000,30.687870,-105.060562,0.000000,30.684334,-104.997543,0.000000,30.641325,-104.986931,0.000000,30.570557,-104.890678,0.000000,30.392263,-104.852997,0.000000,30.376448,-104.806473,0.000000,30.350470,-104.813957,0.000000,30.238489,-104.702614,0.000000,30.148964,-104.674759,0.000000,30.057302,-104.696495,0.000000,29.909283,-104.674370,0.000000,29.807936,-104.577560,0.000000,29.679466,-104.535248,0.000000,29.550611,-104.377594,0.000000,29.484041,-104.204735,0.000000,29.400715,-104.164383,0.000000,29.328119,-104.045631,0.000000,29.267260,-103.786995,0.000000,29.281240,-103.767761,0.000000,29.229795,-103.782158,0.000000,29.230349,-103.739853,0.000000,29.190632,-103.720314,0.000000,29.146646,-103.526237,0.000000,29.072134,-103.474075,0.000000,29.032108,-103.375450,0.000000,29.050339,-103.335518,0.000000,28.997732,-103.290146,0.000000,27.870550,-103.954697,0.000000,26.661079,-103.630898,0.000000,26.728889,-103.844200,0.000000,26.756390,-104.188301,0.000000,26.350559,-104.551102,0.000000,26.355551,-104.607498,0.000000,26.450550,-104.725601,0.000000,26.433331,-104.796700,0.000000,26.492769,-104.843903,0.000000,26.459440,-105.010002,0.000000,26.521391,-105.121902,0.000000,26.541389,-105.138298,0.000000,26.458891,-105.326103,0.000000,26.587780,-105.585297,0.000000,26.662781,-105.636902,0.000000,26.655001,-105.753899,0.000000,26.838610,-106.027496,0.000000,26.735001,-106.091904,0.000000,26.769440,-106.126999,0.000000,26.752220,-106.153297,0.000000,26.591391,-106.172203,0.000000,26.415001,-106.239502,0.000000,26.368891,-106.344704,0.000000,26.376390,-106.449997,0.000000,26.147499,-106.367500,0.000000,26.080000,-106.403099,0.000000,26.021111,-106.520798,0.000000,25.789169,-106.533600,0.000000,25.622499,-106.740303,0.000000,25.606091,-107.084099,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_145_point_2()
		{
			double[] value = {25.775551,-107.151703,0.000000,25.943331,-107.299698,0.000000,26.115280,-107.366402,0.000000,26.200279,-107.784401,0.000000,26.639999,-107.846703,0.000000,26.819719,-108.003899,0.000000,26.947500,-108.035599,0.000000,26.972771,-108.220596,0.000000,27.040831,-108.248901,0.000000,27.061390,-108.305298,0.000000,27.030830,-108.404999,0.000000,26.961330,-108.471298,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_150_point_1()
		{
			double[] value = {28.997732,-103.290146,0.000000,28.986374,-103.280350,0.000000,29.007454,-103.266586,0.000000,28.978682,-103.153465,0.000000,29.190863,-102.988098,0.000000,29.229036,-102.866173,0.000000,29.269203,-102.908325,0.000000,29.353371,-102.883011,0.000000,29.411844,-102.822205,0.000000,29.530146,-102.804726,0.000000,29.744225,-102.676361,0.000000,29.732338,-102.637611,0.000000,29.778248,-102.576500,0.000000,29.749500,-102.551949,0.000000,29.785456,-102.503098,0.000000,29.767946,-102.384796,0.000000,29.845289,-102.367561,0.000000,29.880116,-102.324333,0.000000,29.784571,-102.063995,0.000000,29.818773,-101.973320,0.000000,29.788502,-101.924225,0.000000,29.814125,-101.819099,0.000000,29.779999,-101.805206,0.000000,29.787167,-101.759094,0.000000,29.756960,-101.639671,0.000000,29.765150,-101.581490,0.000000,29.810120,-101.543953,0.000000,29.763018,-101.538345,0.000000,29.788691,-101.470467,0.000000,29.760586,-101.448425,0.000000,29.769905,-101.401276,0.000000,29.745434,-101.416100,0.000000,29.657162,-101.368401,0.000000,29.652431,-101.305862,0.000000,29.580910,-101.308929,0.000000,29.628750,-101.254585,0.000000,29.526474,-101.261429,0.000000,29.473553,-101.067360,0.000000,29.373255,-101.009056,0.000000,29.242502,-100.796989,0.000000,29.166571,-100.768608,0.000000,29.080072,-100.668770,0.000000,28.922350,-100.647224,0.000000,28.894222,-100.589790,0.000000,28.660988,-100.497910,0.000000,28.589733,-100.403175,0.000000,28.544191,-100.419533,0.000000,28.500811,-100.345802,0.000000,28.478651,-100.376770,0.000000,28.394182,-100.351570,0.000000,28.320360,-100.292892,0.000000,28.280354,-100.297920,0.000000,28.241457,-100.223465,0.000000,28.201935,-100.214073,0.000000,28.154282,-100.096924,0.000000,28.003460,-99.993309,0.000000,27.986881,-99.941856,0.000000,27.797686,-99.874733,0.000000,27.780107,-99.815727,0.000000,27.770838,-99.807816,0.000000,27.635281,-99.973068,0.000000,27.794170,-100.182503,0.000000,27.709999,-100.311401,0.000000,27.400829,-100.428299,0.000000,27.395000,-100.584999,0.000000,27.235279,-100.822800,0.000000,27.026390,-100.795303,0.000000,27.046671,-100.759201,0.000000,27.010281,-100.699997,0.000000,27.071110,-100.658600,0.000000,27.030550,-100.549698,0.000000,26.867220,-100.532799,0.000000,26.771940,-100.565598,0.000000,26.750830,-100.615799,0.000000,26.628330,-100.694702,0.000000,26.707781,-100.794197,0.000000,26.370550,-101.218597,0.000000,26.149441,-101.035797,0.000000,26.111389,-100.949402,0.000000,26.056940,-100.913399,0.000000,25.987780,-100.917503,0.000000,25.918051,-100.832497,0.000000,25.743891,-100.819702,0.000000,25.611660,-100.709999,0.000000,25.608330,-100.642197,0.000000,25.553329,-100.634499,0.000000,25.528330,-100.571999,0.000000,25.498610,-100.577797,0.000000,25.536390,-100.674500,0.000000,25.490000,-100.691704,0.000000,25.444160,-100.581703,0.000000,25.327221,-100.441704,0.000000,25.325001,-100.302803,0.000000,25.275829,-100.189697,0.000000,25.254999,-100.259201,0.000000,25.190929,-100.190903,0.000000,25.213631,-100.229202,0.000000,25.157499,-100.374702,0.000000,25.211941,-100.437202,0.000000,25.228331,-100.543602,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_150_point_2()
		{
			double[] value = {25.198610,-100.708603,0.000000,25.155550,-100.773102,0.000000,25.038891,-100.825302,0.000000,24.931110,-100.698303,0.000000,24.892780,-100.787201,0.000000,24.559999,-100.823898,0.000000,24.601391,-100.872200,0.000000,24.589720,-100.996399,0.000000,24.810280,-101.242203,0.000000,24.778610,-101.321098,0.000000,24.821110,-101.360298,0.000000,24.761391,-101.445297,0.000000,24.754440,-101.579697,0.000000,24.788330,-101.610001,0.000000,24.858061,-101.585602,0.000000,24.905830,-101.746399,0.000000,25.026939,-101.837502,0.000000,25.155550,-102.257202,0.000000,25.118050,-102.665802,0.000000,25.075830,-102.666901,0.000000,24.861660,-102.829201,0.000000,24.696659,-102.811401,0.000000,24.798611,-102.951698,0.000000,24.849720,-103.160301,0.000000,24.904440,-103.238899,0.000000,25.058889,-103.259201,0.000000,25.150551,-103.398598,0.000000,25.275961,-103.504700,0.000000,25.333611,-103.428902,0.000000,25.385281,-103.412804,0.000000,25.465269,-103.484497,0.000000,25.541941,-103.484703,0.000000,25.743330,-103.325798,0.000000,26.075550,-103.336098,0.000000,26.284439,-103.278900,0.000000,26.383890,-103.322502,0.000000,26.661079,-103.630898,0.000000,27.870550,-103.954697,0.000000,28.997732,-103.290146,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_155_point_1()
		{
			double[] value = {23.067459,-105.402100,0.000000,23.040831,-105.462799,0.000000,22.971109,-105.487801,0.000000,22.903891,-105.444199,0.000000,22.836941,-105.541702,0.000000,22.753050,-105.575302,0.000000,22.681391,-105.479401,0.000000,22.548889,-105.454498,0.000000,22.486179,-105.644302,0.000000,22.473110,-105.694702,0.000000,22.468361,-105.714577,0.000000,22.524441,-105.720573,0.000000,22.532497,-105.756393,0.000000,22.660275,-105.816963,0.000000,22.816109,-106.000839,0.000000,22.850555,-105.983902,0.000000,22.827221,-106.028900,0.000000,23.047497,-106.218338,0.000000,23.184444,-106.378616,0.000000,23.180553,-106.424728,0.000000,23.401108,-106.522507,0.000000,23.647499,-106.802231,0.000000,23.868889,-106.919167,0.000000,24.203609,-107.374733,0.000000,24.248608,-107.396393,0.000000,24.493889,-107.795837,0.000000,24.515553,-107.779716,0.000000,24.340015,-107.497414,0.000000,24.380276,-107.551964,0.000000,24.356941,-107.495010,0.000000,24.392776,-107.475281,0.000000,24.520275,-107.525009,0.000000,24.521942,-107.585281,0.000000,24.500000,-107.595573,0.000000,24.498333,-107.553337,0.000000,24.451664,-107.635834,0.000000,24.495552,-107.670013,0.000000,24.498608,-107.741669,0.000000,24.587219,-107.808327,0.000000,24.635830,-107.934723,0.000000,24.525276,-107.811401,0.000000,24.645275,-107.992233,0.000000,24.778053,-108.060013,0.000000,24.750000,-107.991959,0.000000,24.768608,-107.974457,0.000000,24.835278,-108.010559,0.000000,24.961941,-107.989464,0.000000,24.998886,-108.050293,0.000000,24.831108,-108.040558,0.000000,24.819443,-108.101387,0.000000,25.027496,-108.228622,0.000000,25.098610,-108.326134,0.000000,25.102497,-108.278633,0.000000,24.980831,-108.179169,0.000000,24.972500,-108.127502,0.000000,25.017776,-108.132233,0.000000,25.028053,-108.163353,0.000000,25.056942,-108.142792,0.000000,25.014164,-108.100571,0.000000,25.004444,-107.999733,0.000000,25.086941,-108.058060,0.000000,25.123886,-108.125839,0.000000,25.108055,-108.167236,0.000000,25.169998,-108.219177,0.000000,25.167221,-108.352509,0.000000,25.203331,-108.355827,0.000000,25.186665,-108.314453,0.000000,25.241386,-108.316963,0.000000,25.263054,-108.363068,0.000000,25.142776,-108.398621,0.000000,25.205830,-108.393623,0.000000,25.263054,-108.436951,0.000000,25.355274,-108.728058,0.000000,25.344528,-108.590683,0.000000,25.394444,-108.652786,0.000000,25.379444,-108.770279,0.000000,25.401943,-108.726669,0.000000,25.442497,-108.747223,0.000000,25.431942,-108.775558,0.000000,25.542221,-108.767792,0.000000,25.561386,-108.898903,0.000000,25.507221,-108.877792,0.000000,25.456108,-108.920013,0.000000,25.498886,-108.945557,0.000000,25.495552,-109.012222,0.000000,25.459999,-109.029449,0.000000,25.526108,-109.108902,0.000000,25.577499,-109.056953,0.000000,25.569443,-108.996674,0.000000,25.536942,-108.979446,0.000000,25.589443,-108.971390,0.000000,25.670277,-108.878342,0.000000,25.798332,-108.828056,0.000000,25.695000,-108.900848,0.000000,25.587776,-109.067780,0.000000,25.578053,-109.136948,0.000000,25.647778,-109.172234,0.000000,25.679722,-109.257782,0.000000,25.555275,-109.156952,0.000000,25.630276,-109.249733,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_155_point_2()
		{
			double[] value = {25.641109,-109.406113,0.000000,25.658886,-109.300293,0.000000,25.708885,-109.287514,0.000000,25.763611,-109.373611,0.000000,25.678608,-109.399727,0.000000,25.759441,-109.408340,0.000000,25.790276,-109.443336,0.000000,25.860287,-109.416748,0.000000,26.014442,-109.430283,0.000000,26.306664,-109.256393,0.000000,26.153610,-109.285278,0.000000,26.339165,-109.214737,0.000000,26.325275,-109.165283,0.000000,26.276943,-109.152786,0.000000,26.264721,-109.175293,0.000000,26.209164,-109.101120,0.000000,26.281666,-109.081947,0.000000,26.307220,-109.131393,0.000000,26.338423,-109.143547,0.000000,26.831940,-108.486397,0.000000,26.865829,-108.476997,0.000000,26.961330,-108.471298,0.000000,27.030830,-108.404999,0.000000,27.061390,-108.305298,0.000000,27.040831,-108.248901,0.000000,26.972771,-108.220596,0.000000,26.947500,-108.035599,0.000000,26.819719,-108.003899,0.000000,26.639999,-107.846703,0.000000,26.200279,-107.784401,0.000000,26.115280,-107.366402,0.000000,25.943331,-107.299698,0.000000,25.775551,-107.151703,0.000000,25.606091,-107.084099,0.000000,25.294439,-107.124702,0.000000,25.148609,-107.107498,0.000000,24.841940,-106.948898,0.000000,24.770281,-106.885002,0.000000,24.763330,-106.821098,0.000000,24.572500,-106.638603,0.000000,24.301941,-106.519203,0.000000,24.284719,-106.396103,0.000000,24.390270,-106.249199,0.000000,24.211941,-106.002197,0.000000,24.098890,-105.959702,0.000000,24.055269,-105.908096,0.000000,23.759720,-105.885803,0.000000,23.556660,-105.763298,0.000000,23.469721,-105.716400,0.000000,23.287220,-105.684196,0.000000,23.253441,-105.633904,0.000000,23.144440,-105.528900,0.000000,23.147221,-105.416702,0.000000,23.067459,-105.402100,0.000000};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_165_point_1()
		{
			double[] value = {21.856640,-101.524902,0.000000,22.015270,-101.800301,0.000000,22.011761,-101.846199,0.000000,22.114441,-101.936401,0.000000,22.137779,-102.056396,0.000000,22.251940,-102.024200,0.000000,22.285271,-102.154404,0.000000,22.324169,-102.155800,0.000000,22.372219,-102.219200,0.000000,22.355829,-102.273598,0.000000,22.456390,-102.287201,0.000000,22.458891,-102.325798,0.000000,22.337219,-102.450600,0.000000,22.278330,-102.635002,0.000000,22.083330,-102.706902,0.000000,21.930269,-102.844704,0.000000,21.823330,-102.851700,0.000000,21.724171,-102.741402,0.000000,21.617769,-102.769699,0.000000,21.546940,-102.639198,0.000000,21.381941,-102.687202,0.000000,21.320551,-102.833603,0.000000,21.328609,-102.906700,0.000000,21.284719,-102.962196,0.000000,21.306660,-103.034401,0.000000,21.187500,-103.085602,0.000000,21.054440,-103.055801,0.000000,21.198059,-103.542801,0.000000,21.188049,-103.601700,0.000000,21.241940,-103.646103,0.000000,21.203329,-103.737000,0.000000,21.223890,-103.765602,0.000000,21.251659,-103.753098,0.000000,21.386940,-103.702797,0.000000,21.516390,-103.733597,0.000000,21.461390,-103.650299,0.000000,21.593050,-103.514198,0.000000,21.731939,-103.509499,0.000000,21.785549,-103.547798,0.000000,21.848049,-103.446999,0.000000,21.933331,-103.394203,0.000000,21.982500,-103.293098,0.000000,21.975281,-103.170799,0.000000,22.090269,-103.091103,0.000000,22.147779,-103.127800,0.000000,22.286110,-103.055603,0.000000,22.307779,-103.201401,0.000000,22.368610,-103.179497,0.000000,22.505831,-103.372498,0.000000,22.435551,-103.409203,0.000000,22.327499,-103.371696,0.000000,22.117290,-103.522301,0.000000,22.081671,-103.638298,0.000000,22.112780,-103.682503,0.000000,22.145990,-103.700897,0.000000,22.524719,-103.614998,0.000000,22.573330,-103.658897,0.000000,22.576389,-103.741402,0.000000,22.183889,-103.868599,0.000000,22.461109,-103.883904,0.000000,22.489441,-103.833603,0.000000,22.577221,-103.870796,0.000000,22.636669,-103.770599,0.000000,22.723049,-103.802002,0.000000,22.764721,-104.007004,0.000000,22.658609,-103.994202,0.000000,22.581940,-104.029404,0.000000,22.510830,-103.921700,0.000000,22.368050,-103.950302,0.000000,22.342220,-104.144203,0.000000,22.264540,-104.329597,0.000000,22.319210,-104.311401,0.000000,22.421940,-104.258598,0.000000,23.062771,-104.201103,0.000000,23.142780,-104.169701,0.000000,23.195829,-104.096100,0.000000,23.447500,-104.078102,0.000000,23.573059,-103.936699,0.000000,23.623329,-103.919701,0.000000,23.674721,-103.808296,0.000000,23.736940,-103.858597,0.000000,23.861389,-103.875603,0.000000,24.073059,-103.850899,0.000000,24.182501,-103.600601,0.000000,24.275551,-103.612503,0.000000,24.476110,-103.267502,0.000000,24.433889,-102.767197,0.000000,24.458891,-102.735298,0.000000,24.452221,-102.513603,0.000000,24.828609,-102.504997,0.000000,25.075830,-102.666901,0.000000,25.118050,-102.665802,0.000000,25.155550,-102.257202,0.000000,25.026939,-101.837502,0.000000,24.905830,-101.746399,0.000000,24.858061,-101.585602,0.000000,24.788330,-101.610001,0.000000,24.754440,-101.579697,0.000000,24.761391,-101.445297,0.000000,24.821110,-101.360298,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_165_point_2()
		{
			double[] value = {24.778610,-101.321098,0.000000,24.810280,-101.242203,0.000000,24.589720,-100.996399,0.000000,24.601391,-100.872200,0.000000,24.559999,-100.823898,0.000000,24.398609,-100.981903,0.000000,24.113331,-101.173103,0.000000,23.898050,-101.402199,0.000000,23.693890,-101.685303,0.000000,23.610001,-101.734703,0.000000,23.548050,-101.870300,0.000000,23.373610,-102.057503,0.000000,23.388611,-102.192802,0.000000,23.333611,-102.193604,0.000000,23.217501,-102.280602,0.000000,23.113050,-102.194504,0.000000,23.002220,-102.245003,0.000000,22.810280,-102.142799,0.000000,22.755831,-102.081398,0.000000,22.620550,-101.934402,0.000000,22.493130,-101.870796,0.000000,22.460831,-101.708298,0.000000,22.598049,-101.570801,0.000000,22.618610,-101.481102,0.000000,22.594170,-101.375000,0.000000,22.535271,-101.311401,0.000000,22.454439,-101.298897,0.000000,22.395550,-101.360603,0.000000,22.079170,-101.328598,0.000000,21.856640,-101.524902,0.000000};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_175_point_1()
		{
			double[] value = {27.665857,-99.718163,0.000000,27.523050,-99.915848,0.000000,27.447500,-99.894997,0.000000,27.456940,-99.800293,0.000000,27.413059,-99.748337,0.000000,27.159161,-99.699173,0.000000,26.913610,-99.733063,0.000000,26.899170,-99.633904,0.000000,26.852501,-99.566391,0.000000,26.662220,-99.631119,0.000000,26.673050,-99.501106,0.000000,26.628330,-99.415009,0.000000,26.510000,-99.382507,0.000000,26.453609,-99.446671,0.000000,26.355000,-99.387222,0.000000,26.360830,-99.316116,0.000000,26.291109,-99.248611,0.000000,26.290001,-99.176964,0.000000,26.077780,-99.113739,0.000000,26.095480,-99.012077,0.000000,26.088720,-98.996490,0.000000,25.993891,-98.896667,0.000000,26.057779,-98.815292,0.000000,26.040831,-98.585007,0.000000,25.987221,-98.556396,0.000000,25.520550,-98.569168,0.000000,25.493050,-98.450562,0.000000,25.422779,-98.443893,0.000000,25.073750,-98.904716,0.000000,25.076660,-98.924850,0.000000,25.074169,-98.992783,0.000000,25.122499,-99.041397,0.000000,25.046671,-99.106117,0.000000,25.051390,-99.150558,0.000000,25.012220,-99.142502,0.000000,24.876110,-99.195282,0.000000,24.775829,-99.163887,0.000000,24.804159,-99.258904,0.000000,24.756660,-99.413887,0.000000,24.643049,-99.567780,0.000000,24.654440,-99.592789,0.000000,24.528610,-99.731667,0.000000,24.473890,-99.674179,0.000000,24.497219,-99.627228,0.000000,24.368050,-99.557243,0.000000,24.217501,-99.611954,0.000000,24.076941,-99.606400,0.000000,23.993610,-99.491119,0.000000,23.893610,-99.450562,0.000000,23.894720,-99.498901,0.000000,23.763330,-99.597778,0.000000,23.746670,-99.838623,0.000000,23.531670,-99.956390,0.000000,23.372499,-99.888344,0.000000,23.410271,-100.024200,0.000000,23.355000,-100.071999,0.000000,23.316111,-100.042801,0.000000,23.241110,-100.057198,0.000000,23.248051,-100.303299,0.000000,23.194441,-100.371902,0.000000,23.216391,-100.434402,0.000000,23.278330,-100.455299,0.000000,23.412220,-100.427803,0.000000,23.610830,-100.468102,0.000000,23.747499,-100.417198,0.000000,23.959999,-100.601402,0.000000,24.137501,-100.562202,0.000000,24.290831,-100.589699,0.000000,24.559999,-100.823898,0.000000,24.892780,-100.787201,0.000000,24.931110,-100.698303,0.000000,25.038891,-100.825302,0.000000,25.155550,-100.773102,0.000000,25.198610,-100.708603,0.000000,25.228331,-100.543602,0.000000,25.211941,-100.437202,0.000000,25.157499,-100.374702,0.000000,25.213631,-100.229202,0.000000,25.190929,-100.190903,0.000000,25.254999,-100.259201,0.000000,25.275829,-100.189697,0.000000,25.325001,-100.302803,0.000000,25.327221,-100.441704,0.000000,25.444160,-100.581703,0.000000,25.490000,-100.691704,0.000000,25.536390,-100.674500,0.000000,25.498610,-100.577797,0.000000,25.528330,-100.571999,0.000000,25.553329,-100.634499,0.000000,25.608330,-100.642197,0.000000,25.611660,-100.709999,0.000000,25.743891,-100.819702,0.000000,25.918051,-100.832497,0.000000,25.987780,-100.917503,0.000000,26.056940,-100.913399,0.000000,26.111389,-100.949402,0.000000,26.149441,-101.035797,0.000000,26.370550,-101.218597,0.000000,26.707781,-100.794197,0.000000,26.628330,-100.694702,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_175_point_2()
		{
			double[] value = {26.750830,-100.615799,0.000000,26.771940,-100.565598,0.000000,26.867220,-100.532799,0.000000,27.030550,-100.549698,0.000000,27.071110,-100.658600,0.000000,27.010281,-100.699997,0.000000,27.046671,-100.759201,0.000000,27.026390,-100.795303,0.000000,27.235279,-100.822800,0.000000,27.395000,-100.584999,0.000000,27.400829,-100.428299,0.000000,27.709999,-100.311401,0.000000,27.794170,-100.182503,0.000000,27.635281,-99.973068,0.000000,27.770838,-99.807816,0.000000,27.665857,-99.718163,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_180_point_1()
		{
			double[] value = {25.954569,-97.172218,0.000000,25.707497,-97.168625,0.000000,25.432499,-97.290558,0.000000,25.124165,-97.480286,0.000000,24.784721,-97.584167,0.000000,24.322498,-97.688065,0.000000,23.789719,-97.726959,0.000000,23.783886,-97.818069,0.000000,23.765831,-97.755844,0.000000,23.647499,-97.753342,0.000000,23.750553,-97.723343,0.000000,23.300831,-97.766403,0.000000,22.905830,-97.741394,0.000000,22.849442,-97.755569,0.000000,22.924999,-97.758896,0.000000,22.773609,-97.805847,0.000000,22.733887,-97.872513,0.000000,22.708611,-97.847778,0.000000,22.606667,-97.890289,0.000000,22.581108,-97.865845,0.000000,22.662220,-97.828064,0.000000,22.518055,-97.845840,0.000000,22.268055,-97.776871,0.000000,22.268049,-97.776871,0.000000,22.221310,-97.876129,0.000000,22.271940,-97.925568,0.000000,22.326389,-97.913353,0.000000,22.382771,-98.101959,0.000000,22.471390,-98.193069,0.000000,22.468611,-98.293327,0.000000,22.398331,-98.313904,0.000000,22.440281,-98.490013,0.000000,22.418489,-98.616089,0.000000,22.419170,-98.686111,0.000000,22.340549,-98.879463,0.000000,22.446110,-99.231117,0.000000,22.679440,-99.378067,0.000000,22.633430,-99.424438,0.000000,22.726669,-99.536118,0.000000,22.615000,-99.530563,0.000000,22.803890,-100.016701,0.000000,22.838890,-100.048599,0.000000,22.930550,-99.936401,0.000000,23.002220,-99.908073,0.000000,23.127220,-100.025803,0.000000,23.120831,-100.089203,0.000000,23.241110,-100.057198,0.000000,23.316111,-100.042801,0.000000,23.355000,-100.071999,0.000000,23.410271,-100.024200,0.000000,23.372499,-99.888344,0.000000,23.531670,-99.956390,0.000000,23.746670,-99.838623,0.000000,23.763330,-99.597778,0.000000,23.894720,-99.498901,0.000000,23.893610,-99.450562,0.000000,23.993610,-99.491119,0.000000,24.076941,-99.606400,0.000000,24.217501,-99.611954,0.000000,24.368050,-99.557243,0.000000,24.497219,-99.627228,0.000000,24.473890,-99.674179,0.000000,24.528610,-99.731667,0.000000,24.654440,-99.592789,0.000000,24.643049,-99.567780,0.000000,24.756660,-99.413887,0.000000,24.804159,-99.258904,0.000000,24.775829,-99.163887,0.000000,24.876110,-99.195282,0.000000,25.012220,-99.142502,0.000000,25.051390,-99.150558,0.000000,25.046671,-99.106117,0.000000,25.122499,-99.041397,0.000000,25.074169,-98.992783,0.000000,25.076660,-98.924850,0.000000,25.073750,-98.904716,0.000000,25.422779,-98.443893,0.000000,25.493050,-98.450562,0.000000,25.520550,-98.569168,0.000000,25.987221,-98.556396,0.000000,26.040831,-98.585007,0.000000,26.057779,-98.815292,0.000000,25.993891,-98.896667,0.000000,26.088720,-98.996490,0.000000,26.095480,-99.012077,0.000000,26.077780,-99.113739,0.000000,26.290001,-99.176964,0.000000,26.291109,-99.248611,0.000000,26.360830,-99.316116,0.000000,26.355000,-99.387222,0.000000,26.453609,-99.446671,0.000000,26.510000,-99.382507,0.000000,26.628330,-99.415009,0.000000,26.673050,-99.501106,0.000000,26.662220,-99.631119,0.000000,26.852501,-99.566391,0.000000,26.899170,-99.633904,0.000000,26.913610,-99.733063,0.000000,27.159161,-99.699173,0.000000,27.413059,-99.748337,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_180_point_2()
		{
			double[] value = {27.456940,-99.800293,0.000000,27.447500,-99.894997,0.000000,27.523050,-99.915848,0.000000,27.665857,-99.718163,0.000000,27.661558,-99.714493,0.000000,27.612627,-99.549187,0.000000,27.504284,-99.526741,0.000000,27.490755,-99.490494,0.000000,27.318653,-99.543587,0.000000,27.269884,-99.465271,0.000000,27.199198,-99.437157,0.000000,27.028648,-99.455063,0.000000,26.995550,-99.392715,0.000000,26.946630,-99.390518,0.000000,26.857361,-99.285522,0.000000,26.579889,-99.165817,0.000000,26.545729,-99.168678,0.000000,26.488340,-99.101471,0.000000,26.419531,-99.106728,0.000000,26.395309,-98.939270,0.000000,26.360329,-98.908897,0.000000,26.375071,-98.819832,0.000000,26.242056,-98.677917,0.000000,26.260454,-98.599968,0.000000,26.201544,-98.488518,0.000000,26.220911,-98.453392,0.000000,26.156031,-98.384521,0.000000,26.158680,-98.347191,0.000000,26.111647,-98.327934,0.000000,26.132809,-98.292274,0.000000,26.120895,-98.271355,0.000000,26.098104,-98.291946,0.000000,26.055376,-98.200691,0.000000,26.065758,-98.083214,0.000000,26.034626,-98.076347,0.000000,26.059395,-98.040070,0.000000,26.060141,-97.867432,0.000000,26.023445,-97.647972,0.000000,25.962002,-97.612923,0.000000,25.954172,-97.574936,0.000000,25.933231,-97.590088,0.000000,25.845198,-97.434349,0.000000,25.845362,-97.385643,0.000000,25.917021,-97.380989,0.000000,25.938663,-97.304436,0.000000,25.965124,-97.307144,0.000000,25.954569,-97.172218,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_185_point_1()
		{
			double[] value = {17.375460,-93.589401,0.000000,17.307501,-93.626953,0.000000,17.150280,-93.873428,0.000000,17.172779,-94.328056,0.000000,17.222500,-94.967216,0.000000,17.335831,-95.001106,0.000000,17.346661,-95.069168,0.000000,17.594770,-95.251709,0.000000,17.648190,-95.205582,0.000000,17.733330,-95.210281,0.000000,17.641390,-95.364182,0.000000,17.633051,-95.439178,0.000000,17.533051,-95.560013,0.000000,17.501659,-95.725014,0.000000,17.524719,-95.790283,0.000000,17.779160,-95.915558,0.000000,17.941111,-95.799454,0.000000,18.051390,-95.804459,0.000000,18.119160,-95.862228,0.000000,18.164080,-96.094650,0.000000,18.141670,-96.150284,0.000000,18.185551,-96.161392,0.000000,18.180269,-96.205292,0.000000,18.213921,-96.236687,0.000000,18.291660,-96.254730,0.000000,18.388611,-96.356949,0.000000,18.541109,-96.405838,0.000000,18.681110,-96.674179,0.000000,18.522221,-96.635559,0.000000,18.430830,-96.750633,0.000000,18.552780,-96.807510,0.000000,18.476669,-97.038620,0.000000,18.643330,-97.144180,0.000000,18.632500,-97.272781,0.000000,18.769440,-97.345291,0.000000,18.887220,-97.247787,0.000000,19.026390,-97.250839,0.000000,19.160000,-97.264717,0.000000,19.193609,-97.170013,0.000000,19.183050,-97.079727,0.000000,19.267500,-97.001678,0.000000,19.307779,-97.056122,0.000000,19.306660,-97.185562,0.000000,19.373610,-97.246399,0.000000,19.401390,-97.334457,0.000000,19.538330,-97.353348,0.000000,19.585831,-97.440002,0.000000,19.619720,-97.354446,0.000000,19.683889,-97.308899,0.000000,19.750000,-97.285278,0.000000,19.895550,-97.309448,0.000000,20.117500,-97.137222,0.000000,20.147221,-97.146393,0.000000,20.263729,-97.381447,0.000000,20.262220,-97.412231,0.000000,20.239719,-97.470573,0.000000,20.121111,-97.515007,0.000000,20.106670,-97.564453,0.000000,20.168329,-97.614731,0.000000,20.176109,-97.692497,0.000000,20.255280,-97.752792,0.000000,20.439899,-97.758873,0.000000,20.469721,-97.693336,0.000000,20.417770,-97.628891,0.000000,20.490299,-97.570648,0.000000,20.588610,-97.579178,0.000000,20.650551,-97.742233,0.000000,20.793051,-97.733902,0.000000,20.805000,-97.873901,0.000000,20.706390,-97.883057,0.000000,20.666660,-97.948624,0.000000,20.519720,-97.963058,0.000000,20.432171,-98.098183,0.000000,20.506941,-98.042793,0.000000,20.606939,-98.029449,0.000000,20.642500,-98.030838,0.000000,20.661659,-98.095291,0.000000,20.434999,-98.335007,0.000000,20.441111,-98.402237,0.000000,20.359171,-98.452789,0.000000,20.376390,-98.494743,0.000000,20.501659,-98.566116,0.000000,20.718611,-98.424454,0.000000,20.712500,-98.498901,0.000000,20.756390,-98.510834,0.000000,20.790279,-98.421112,0.000000,20.858610,-98.366959,0.000000,20.830830,-98.230560,0.000000,20.961941,-98.220001,0.000000,21.027500,-98.176392,0.000000,21.019440,-98.153061,0.000000,21.074720,-98.130569,0.000000,21.157221,-98.212509,0.000000,21.129780,-98.288162,0.000000,21.183611,-98.272903,0.000000,21.213051,-98.263062,0.000000,21.233891,-98.298889,0.000000,21.152220,-98.337509,0.000000,21.154160,-98.410568,0.000000,21.241940,-98.487228,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_185_point_2()
		{
			double[] value = {21.352221,-98.477226,0.000000,21.398890,-98.515007,0.000000,21.528330,-98.524437,0.000000,21.608891,-98.642227,0.000000,21.694719,-98.612793,0.000000,21.689440,-98.562790,0.000000,21.728331,-98.562790,0.000000,21.720551,-98.525284,0.000000,21.782221,-98.450844,0.000000,21.851940,-98.490280,0.000000,21.836670,-98.521118,0.000000,21.884439,-98.563904,0.000000,21.911659,-98.537231,0.000000,21.933331,-98.555008,0.000000,21.951389,-98.518623,0.000000,21.941111,-98.573334,0.000000,21.975269,-98.588562,0.000000,21.974131,-98.499947,0.000000,21.998680,-98.481369,0.000000,22.017139,-98.469254,0.000000,22.228331,-98.345573,0.000000,22.418489,-98.616089,0.000000,22.440281,-98.490013,0.000000,22.398331,-98.313904,0.000000,22.468611,-98.293327,0.000000,22.471390,-98.193069,0.000000,22.382771,-98.101959,0.000000,22.326389,-97.913353,0.000000,22.271940,-97.925568,0.000000,22.221310,-97.876129,0.000000,22.268049,-97.776871,0.000000,22.157776,-97.779175,0.000000,21.976944,-97.699173,0.000000,21.774998,-97.556122,0.000000,21.564163,-97.317230,0.000000,21.467777,-97.328613,0.000000,21.271111,-97.416672,0.000000,21.434166,-97.476669,0.000000,21.471943,-97.386948,0.000000,21.538055,-97.369736,0.000000,21.789165,-97.620285,0.000000,21.899166,-97.653900,0.000000,22.088608,-97.781403,0.000000,21.934719,-97.714737,0.000000,21.671108,-97.670288,0.000000,21.487778,-97.568069,0.000000,21.483608,-97.486679,0.000000,21.371944,-97.483337,0.000000,20.812775,-97.200562,0.000000,20.676109,-97.171402,0.000000,20.157219,-96.676392,0.000000,19.861664,-96.447784,0.000000,19.314720,-96.276947,0.000000,19.228611,-96.166946,0.000000,19.223610,-96.116119,0.000000,19.101665,-96.084457,0.000000,19.060276,-96.039459,0.000000,19.058331,-95.970566,0.000000,18.871944,-95.902237,0.000000,18.811943,-95.780289,0.000000,18.803608,-95.753067,0.000000,18.763332,-95.757507,0.000000,18.863888,-95.949722,0.000000,18.746109,-95.808899,0.000000,18.754166,-95.875839,0.000000,18.715553,-95.846115,0.000000,18.744442,-95.774734,0.000000,18.671944,-95.571671,0.000000,18.750553,-95.732788,0.000000,18.795555,-95.731674,0.000000,18.717499,-95.574173,0.000000,18.711109,-95.212784,0.000000,18.613052,-95.051392,0.000000,18.558052,-95.018890,0.000000,18.522499,-94.802231,0.000000,18.190331,-94.579788,0.000000,18.146664,-94.478897,0.000000,18.198608,-94.168060,0.000000,18.209143,-94.137825,0.000000,18.155830,-94.094452,0.000000,18.068609,-94.092789,0.000000,17.991659,-94.051392,0.000000,17.880550,-94.075287,0.000000,17.831390,-93.968063,0.000000,17.745831,-93.923889,0.000000,17.749720,-93.864731,0.000000,17.722219,-93.857788,0.000000,17.683611,-93.741959,0.000000,17.561371,-93.689362,0.000000,17.522499,-93.653900,0.000000,17.452770,-93.667511,0.000000,17.375460,-93.589401,0.000000};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getColor_6_195_color_1()
		{
			double[] value = {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0};
			return value;
		}
		private double[] getColor_6_195_color_2()
		{
			double[] value = {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_196_point_1()
		{
			double[] value = {19.930553,-102.915558,0.000000,19.899151,-102.807343,0.000000,19.830830,-102.891403,0.000000,19.771942,-102.829453,0.000000,19.473053,-102.780289,0.000000,19.424999,-102.745010,0.000000,19.377777,-102.781403,0.000000,19.298862,-102.778625,0.000000,19.356941,-102.812225,0.000000,19.447498,-103.067230,0.000000,19.556942,-103.064728,0.000000,19.298862,-102.778625,0.000000,19.174721,-102.771393,0.000000,19.053055,-102.637222,0.000000,19.013611,-102.487228,0.000000,18.899441,-102.317780,0.000000,18.853886,-102.131958,0.000000,18.848610,-102.072510,0.000000,18.892220,-102.080292,0.000000,18.913330,-102.052231,0.000000,18.818607,-102.024727,0.000000,18.901386,-102.001106,0.000000,18.886665,-101.973068,0.000000,18.912498,-101.950287,0.000000,18.798054,-102.000839,0.000000,18.761665,-101.966667,0.000000,18.794167,-101.935013,0.000000,18.758053,-101.933617,0.000000,18.752499,-101.870293,0.000000,18.730831,-101.892502,0.000000,18.692497,-101.871117,0.000000,18.742222,-101.809448,0.000000,18.628330,-101.852783,0.000000,18.670555,-101.705566,0.000000,18.618332,-101.683060,0.000000,18.617496,-101.651123,0.000000,18.676388,-101.621948,0.000000,18.594166,-101.603348,0.000000,18.599163,-101.561684,0.000000,18.534721,-101.559174,0.000000,18.498608,-101.513344,0.000000,18.533607,-101.295563,0.000000,18.853886,-102.131958,0.000000,18.783886,-102.016403,0.000000,18.731667,-102.000290,0.000000,18.715275,-101.926392,0.000000,18.679996,-101.937500,0.000000,18.675278,-101.876106,0.000000,18.649998,-101.911392,0.000000,18.619999,-101.877228,0.000000,18.514442,-101.918060,0.000000,18.494442,-101.888344,0.000000,18.439999,-101.888634,0.000000,18.475277,-101.994743,0.000000,18.407776,-101.896118,0.000000,18.317219,-101.870293,0.000000,18.261387,-101.900284,0.000000,18.533607,-101.295563,0.000000,18.462219,-101.347229,0.000000,18.466110,-101.436111,0.000000,18.427219,-101.427231,0.000000,18.515831,-101.587784,0.000000,18.592220,-101.634171,0.000000,18.532219,-101.725853,0.000000,18.576942,-101.769180,0.000000,18.547775,-101.847778,0.000000,18.491665,-101.870010,0.000000,18.295830,-101.851120,0.000000,18.289444,-101.787231,0.000000,18.239166,-101.836403,0.000000,18.261387,-101.900284,0.000000,18.533607,-101.295563,0.000000,18.501110,-101.087509,0.000000,18.517220,-101.011124,0.000000,18.441944,-100.946671,0.000000,18.449997,-100.909454,0.000000,18.477497,-100.915283,0.000000,18.472221,-100.793060,0.000000,18.406387,-100.732788,0.000000,18.415276,-100.692230,0.000000,18.305832,-100.695557,0.000000,18.334442,-100.628067,0.000000,18.202499,-100.540848,0.000000,18.198330,-100.493347,0.000000,18.148888,-100.496948,0.000000,18.170277,-100.330002,0.000000,18.109997,-100.335556,0.000000,18.124996,-100.270279,0.000000,18.050831,-100.111115,0.000000,17.969719,-100.040283,0.000000,17.954166,-99.960846,0.000000,17.994999,-99.763062,0.000000,17.921665,-99.536118,0.000000,17.952499,-99.394455,0.000000,17.905830,-99.257507,0.000000,17.890831,-99.033890,0.000000,17.972221,-98.932785,0.000000,18.025555,-98.929459,0.000000,18.035275,-98.830002,0.000000,18.120472,-98.756485,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_196_point_2()
		{
			double[] value = {18.075275,-98.636124,0.000000,18.108055,-98.634171,0.000000,18.111111,-98.579178,0.000000,18.189781,-98.480087,0.000000,18.261387,-101.900284,0.000000,18.202221,-101.987503,0.000000,18.174164,-102.146118,0.000000,17.921665,-102.179749,0.000000,18.189781,-98.480087,0.000000,18.323055,-98.401398,0.000000,18.401943,-98.271393,0.000000,18.506664,-98.253616,0.000000,18.588608,-98.190842,0.000000,18.679722,-97.994736,0.000000,18.761665,-97.906113,0.000000,18.812775,-97.920288,0.000000,18.830830,-97.995560,0.000000,18.936386,-98.115845,0.000000,18.921665,-98.155289,0.000000,18.964443,-98.273056,0.000000,19.041386,-98.222778,0.000000,19.124722,-98.218338,0.000000,19.283054,-98.283615,0.000000,19.344997,-98.132782,0.000000,19.428886,-98.025848,0.000000,18.189781,-98.480087,0.000000,18.199165,-98.404449,0.000000,18.162777,-98.335007,0.000000,18.036110,-98.292786,0.000000,17.972500,-98.160004,0.000000,17.673885,-98.108337,0.000000,17.614166,-98.005569,0.000000,17.463055,-97.946671,0.000000,17.440830,-97.886124,0.000000,17.257221,-97.778336,0.000000,17.052776,-97.773346,0.000000};
			return value;
		}









		/** Define subarrays using type double[] */
		private double[] getColor_6_265_color_1()
		{
			double[] value = {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0};
			return value;
		}
		private double[] getColor_6_265_color_2()
		{
			double[] value = {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_266_point_1()
		{
			double[] value = {31.786207,-106.538994,0.000000,31.786198,-106.538971,0.000000,31.733763,-106.383041,0.000000,31.478128,-106.212753,0.000000,31.393818,-105.998360,0.000000,31.170780,-105.769730,0.000000,31.086428,-105.603218,0.000000,30.998285,-105.554382,0.000000,30.902510,-105.409065,0.000000,30.853081,-105.390312,0.000000,30.816507,-105.313782,0.000000,30.831949,-105.287598,0.000000,30.797653,-105.258186,0.000000,30.812086,-105.214340,0.000000,30.687870,-105.060562,0.000000,30.684334,-104.997543,0.000000,30.641325,-104.986931,0.000000,30.570557,-104.890678,0.000000,30.392263,-104.852997,0.000000,30.376448,-104.806473,0.000000,30.350470,-104.813957,0.000000,30.238489,-104.702614,0.000000,30.148964,-104.674759,0.000000,30.057302,-104.696495,0.000000,29.909283,-104.674370,0.000000,29.807936,-104.577560,0.000000,29.679466,-104.535248,0.000000,29.598488,-104.436172,0.000000,29.550611,-104.377594,0.000000,29.484041,-104.204735,0.000000,29.400715,-104.164383,0.000000,29.328119,-104.045631,0.000000,29.267260,-103.786995,0.000000,29.281240,-103.767761,0.000000,29.229795,-103.782158,0.000000,29.230349,-103.739853,0.000000,29.190632,-103.720314,0.000000,29.146646,-103.526237,0.000000,29.072134,-103.474075,0.000000,29.032108,-103.375450,0.000000,29.050339,-103.335518,0.000000,28.986374,-103.280350,0.000000,29.007454,-103.266586,0.000000,28.978682,-103.153465,0.000000,29.190863,-102.988098,0.000000,29.229036,-102.866173,0.000000,29.269203,-102.908325,0.000000,29.353371,-102.883011,0.000000,29.411844,-102.822205,0.000000,29.530146,-102.804726,0.000000,29.744225,-102.676361,0.000000,29.732338,-102.637611,0.000000,29.778248,-102.576500,0.000000,29.749500,-102.551949,0.000000,29.785456,-102.503098,0.000000,29.767946,-102.384796,0.000000,29.845289,-102.367561,0.000000,29.880116,-102.324333,0.000000,29.784571,-102.063995,0.000000,29.818773,-101.973320,0.000000,29.788502,-101.924225,0.000000,29.814125,-101.819099,0.000000,29.779999,-101.805206,0.000000,29.787167,-101.759094,0.000000,29.756960,-101.639671,0.000000,29.765150,-101.581490,0.000000,29.810120,-101.543953,0.000000,29.763018,-101.538345,0.000000,29.788691,-101.470467,0.000000,29.760586,-101.448425,0.000000,29.769905,-101.401276,0.000000,29.745434,-101.416100,0.000000,29.661259,-101.370613,0.000000,29.657162,-101.368401,0.000000,29.652431,-101.305862,0.000000,29.580910,-101.308929,0.000000,29.628750,-101.254585,0.000000,29.526474,-101.261429,0.000000,29.473553,-101.067360,0.000000,29.373255,-101.009056,0.000000,29.242502,-100.796989,0.000000,29.166571,-100.768608,0.000000,29.080072,-100.668770,0.000000,28.922350,-100.647224,0.000000,28.894222,-100.589790,0.000000,28.660988,-100.497910,0.000000,28.589733,-100.403175,0.000000,28.544191,-100.419533,0.000000,28.500811,-100.345802,0.000000,28.478651,-100.376770,0.000000,28.394182,-100.351570,0.000000,28.320360,-100.292892,0.000000,28.280354,-100.297920,0.000000,28.241457,-100.223465,0.000000,28.201935,-100.214073,0.000000,28.154282,-100.096924,0.000000,28.003460,-99.993309,0.000000,27.986881,-99.941856,0.000000,27.797686,-99.874733,0.000000,27.780107,-99.815727,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_266_point_2()
		{
			double[] value = {27.661558,-99.714493,0.000000,27.612627,-99.549187,0.000000,27.504284,-99.526741,0.000000,27.490755,-99.490494,0.000000,27.318653,-99.543587,0.000000,27.269884,-99.465271,0.000000,27.199198,-99.437157,0.000000,27.028648,-99.455063,0.000000,26.995550,-99.392715,0.000000,26.946630,-99.390518,0.000000,26.857361,-99.285522,0.000000,26.855658,-99.284790,0.000000,26.374718,-98.821960,0.000000,26.375071,-98.819832,0.000000,26.242056,-98.677917,0.000000,26.260454,-98.599968,0.000000,26.201544,-98.488518,0.000000,26.220911,-98.453392,0.000000,26.156031,-98.384521,0.000000,26.158680,-98.347191,0.000000,26.111647,-98.327934,0.000000,26.132809,-98.292274,0.000000,26.120895,-98.271355,0.000000,26.098104,-98.291946,0.000000,26.055376,-98.200691,0.000000,26.065758,-98.083214,0.000000,26.034626,-98.076347,0.000000,26.059395,-98.040070,0.000000,26.060141,-97.867432,0.000000,26.023445,-97.647972,0.000000,25.962002,-97.612923,0.000000,25.954172,-97.574936,0.000000,25.933231,-97.590088,0.000000,25.845198,-97.434349,0.000000,25.845362,-97.385643,0.000000,25.917021,-97.380989,0.000000,25.938663,-97.304436,0.000000,25.965124,-97.307144,0.000000,25.954569,-97.172226,0.000000,26.855658,-99.284790,0.000000,26.579889,-99.165817,0.000000,26.545729,-99.168678,0.000000,26.488340,-99.101471,0.000000,26.419531,-99.106728,0.000000,26.395309,-98.939270,0.000000,26.360329,-98.908897,0.000000,26.374718,-98.821960,0.000000};
			return value;
		}











		/** Define subarrays using type double[] */
		private double[] getColor_6_356_color_1()
		{
			double[] value = {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0};
			return value;
		}
		private double[] getColor_6_356_color_2()
		{
			double[] value = {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_357_point_1()
		{
			double[] value = {30.541180,-111.112427,0.000000,30.679808,-110.888161,0.000000,30.784163,-110.853111,0.000000,31.335670,-110.940628,0.000000,31.201580,-110.975006,0.000000,30.956421,-110.850159,0.000000,30.784163,-110.853111,0.000000,23.224892,-106.168228,0.000000,23.187336,-106.129333,0.000000,23.161917,-106.092873,0.000000,22.985418,-105.844131,0.000000,22.836628,-105.792519,0.000000,22.703089,-105.604469,0.000000,22.567677,-105.592606,0.000000,22.498989,-105.366966,0.000000,22.120592,-105.212959,0.000000,21.944927,-105.218536,0.000000,21.832077,-105.119667,0.000000,21.676146,-105.053596,0.000000,21.639311,-104.977318,0.000000,21.493214,-104.892281,0.000000,20.275204,-103.450874,0.000000,20.221594,-103.424881,0.000000,20.140547,-103.171112,0.000000,20.166700,-103.040405,0.000000,20.144951,-102.878304,0.000000,20.095583,-102.831764,0.000000,20.064245,-102.719322,0.000000,19.989132,-102.718239,0.000000,20.023218,-102.552696,0.000000,19.954714,-102.422874,0.000000,19.957161,-102.315712,0.000000,19.990507,-102.289902,0.000000,19.863182,-102.184608,0.000000,19.799131,-101.790466,0.000000,25.472294,-108.098274,0.000000,25.495544,-108.300308,0.000000,25.816797,-108.819824,0.000000,25.808027,-108.980591,0.000000,25.957237,-109.055954,0.000000,26.020258,-109.017097,0.000000,26.024868,-109.018288,0.000000,26.279146,-108.841064,0.000000,26.492893,-108.964241,0.000000,26.810253,-109.358795,0.000000,26.944801,-109.431816,0.000000,27.104483,-109.450546,0.000000,27.481644,-109.932358,0.000000,27.590359,-109.920486,0.000000,27.617018,-109.957748,0.000000,27.599201,-110.088982,0.000000,27.642542,-110.295845,0.000000,27.750015,-110.282951,0.000000,27.873190,-110.362656,0.000000,27.952892,-110.543793,0.000000,28.036219,-110.851738,0.000000,28.098986,-110.964722,0.000000,28.279699,-111.039276,0.000000,28.524342,-111.050034,0.000000,28.817974,-110.957779,0.000000,29.039721,-110.958710,0.000000,29.035095,-110.840439,0.000000,29.105139,-110.835930,0.000000,29.140160,-110.861412,0.000000,29.114822,-110.915421,0.000000,29.808159,-111.058899,0.000000,29.913309,-111.115501,0.000000,30.429050,-111.089874,0.000000,30.541180,-111.112427,0.000000,23.224892,-106.168228,0.000000,23.227858,-106.171303,0.000000,23.374748,-106.286354,0.000000,23.408033,-106.322533,0.000000,23.649204,-106.586037,0.000000,23.871372,-106.623314,0.000000,23.892450,-106.684471,0.000000,24.100832,-106.838203,0.000000,24.166582,-107.010742,0.000000,24.296494,-107.091942,0.000000,24.450788,-107.097580,0.000000,24.671610,-107.290001,0.000000,19.799131,-101.790466,0.000000,19.624350,-101.472679,0.000000,19.704283,-101.231194,0.000000,19.687668,-101.021667,0.000000,19.647865,-100.963089,0.000000,19.682077,-100.837311,0.000000,19.629675,-100.788612,0.000000,19.670914,-100.731392,0.000000,19.627232,-100.706406,0.000000,19.582884,-100.726334,0.000000,19.512527,-100.679329,0.000000,19.439211,-100.551018,0.000000,19.452835,-100.496826,0.000000,19.491589,-100.490280,0.000000,19.496439,-100.377029,0.000000,19.426846,-100.348625,0.000000,19.454340,-100.281395,0.000000,19.399708,-100.079399,0.000000,19.424067,-99.874313,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_357_point_2()
		{
			double[] value = {19.288778,-99.715317,0.000000,19.302246,-99.359688,0.000000,19.413570,-99.193520,0.000000,24.671610,-107.290001,0.000000,24.990499,-107.567886,0.000000,25.224886,-107.889015,0.000000,25.335003,-107.943054,0.000000,25.472294,-108.098274,0.000000,21.493214,-104.892281,0.000000,21.355833,-104.698128,0.000000,21.302744,-104.662804,0.000000,21.198561,-104.655235,0.000000,21.062811,-104.535851,0.000000,21.023954,-104.389977,0.000000,21.078365,-104.230293,0.000000,20.915455,-103.974144,0.000000,20.921545,-103.838478,0.000000,20.890976,-103.841148,0.000000,20.869661,-103.769577,0.000000,20.752672,-103.645012,0.000000,20.718145,-103.491615,0.000000,20.661514,-103.401123,0.000000,20.424953,-103.551392,0.000000,20.275204,-103.450874,0.000000};
			return value;
		}










		/** Define subarrays using type double[] */
		private double[] getColor_6_436_color_1()
		{
			double[] value = {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0};
			return value;
		}
		private double[] getColor_6_436_color_2()
		{
			double[] value = {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoCoordinate_6_437_point_1()
		{
			double[] value = {20.868940,-89.211723,0.000000,20.712622,-88.831978,0.000000,20.697565,-88.585876,0.000000,20.636906,-88.501091,0.000000,20.627832,-88.411438,0.000000,20.702188,-88.116859,0.000000,20.665300,-87.928345,0.000000,20.881950,-87.642769,0.000000,20.881342,-87.513733,0.000000,21.018162,-87.146080,0.000000,21.144850,-86.950653,0.000000,21.153467,-86.874031,0.000000,25.883553,-97.502464,0.000000,25.820112,-97.516495,0.000000,25.559734,-97.666901,0.000000,25.473478,-97.800728,0.000000,25.405941,-97.843803,0.000000,25.351694,-97.872910,0.000000,25.272974,-97.863312,0.000000,25.070154,-98.067566,0.000000,24.861349,-98.136253,0.000000,24.734112,-98.258232,0.000000,24.527622,-98.308548,0.000000,24.215221,-98.482697,0.000000,17.939884,-94.910530,0.000000,17.935884,-94.756737,0.000000,17.995174,-94.648735,0.000000,17.989706,-94.558357,0.000000,18.092995,-94.449791,0.000000,17.991005,-94.135719,0.000000,17.969498,-93.824997,0.000000,17.986191,-93.575592,0.000000,22.552048,-98.139206,0.000000,22.500866,-98.093765,0.000000,22.471405,-97.989594,0.000000,22.337139,-97.874229,0.000000,22.172544,-97.804863,0.000000,21.538063,-97.656395,0.000000,21.264650,-97.720596,0.000000,21.068329,-97.733643,0.000000,20.943687,-97.687492,0.000000,20.809071,-97.555901,0.000000,20.553864,-97.473671,0.000000,20.525909,-97.425392,0.000000,20.587448,-97.237930,0.000000,20.540451,-97.170601,0.000000,20.473280,-97.168716,0.000000,20.456907,-97.099007,0.000000,20.487619,-97.029152,0.000000,20.465519,-96.982559,0.000000,20.264511,-96.798889,0.000000,20.054998,-96.623894,0.000000,19.997725,-96.624718,0.000000,19.856476,-96.452431,0.000000,19.768435,-96.423698,0.000000,19.395088,-96.354507,0.000000,19.359386,-96.386688,0.000000,19.338140,-96.493210,0.000000,19.308132,-96.482460,0.000000,19.260933,-96.366074,0.000000,19.197392,-96.339447,0.000000,19.134657,-96.131004,0.000000,19.103949,-96.097252,0.000000,19.021902,-96.127014,0.000000,17.986191,-93.575592,0.000000,18.000158,-93.366920,0.000000,18.050104,-93.353287,0.000000,18.167370,-93.395493,0.000000,18.232862,-93.344139,0.000000,18.275938,-93.214264,0.000000,18.321667,-93.114883,0.000000,18.408590,-93.074997,0.000000,18.424953,-92.666962,0.000000,18.655306,-92.431908,0.000000,18.616743,-92.220963,0.000000,18.368708,-91.800781,0.000000,18.403479,-91.480698,0.000000,18.644823,-91.171860,0.000000,19.022383,-91.117584,0.000000,19.168417,-90.848701,0.000000,19.344090,-90.739265,0.000000,19.443964,-90.693642,0.000000,19.757013,-90.643776,0.000000,19.837225,-90.540260,0.000000,19.854727,-90.465454,0.000000,19.815163,-90.375740,0.000000,19.823214,-90.251915,0.000000,20.029461,-90.227814,0.000000,20.320906,-90.050720,0.000000,20.471540,-90.075218,0.000000,20.574766,-90.042519,0.000000,20.645630,-89.895027,0.000000,20.838844,-89.784897,0.000000,20.953684,-89.648926,0.000000,20.960619,-89.563545,0.000000,22.552048,-98.139206,0.000000,22.714354,-98.095413,0.000000,22.831110,-98.102768,0.000000,22.871113,-98.040947,0.000000,22.913448,-98.067474,0.000000};
			return value;
		}
		private double[] getGeoCoordinate_6_437_point_2()
		{
			double[] value = {23.210781,-98.009369,0.000000,23.462679,-98.030922,0.000000,24.001862,-98.265152,0.000000,24.060282,-98.380791,0.000000,24.215221,-98.482697,0.000000,20.960619,-89.563545,0.000000,20.903982,-89.436180,0.000000,20.886251,-89.253777,0.000000,20.868940,-89.211723,0.000000,17.939884,-94.910530,0.000000,18.077738,-94.948494,0.000000,18.127485,-95.149895,0.000000,18.202795,-95.275223,0.000000,18.195469,-95.320450,0.000000,18.255165,-95.350014,0.000000,18.282200,-95.408539,0.000000,18.422756,-95.322929,0.000000,18.406250,-95.354996,0.000000,18.466917,-95.436882,0.000000,18.588509,-95.438889,0.000000,18.634838,-95.529205,0.000000,18.648184,-95.574722,0.000000,18.698786,-95.864273,0.000000,19.021902,-96.127014,0.000000};
			return value;
		}






		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #30, 405 total numbers made up of 135 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_30_point()
		{
			MFVec3d GeoCoordinate_6_30_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_30_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_30_point_2()));
			return GeoCoordinate_6_30_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #35, 672 total numbers made up of 224 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_35_point()
		{
			MFVec3d GeoCoordinate_6_35_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_35_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_35_point_2()))
				.append(new MFVec3d(getGeoCoordinate_6_35_point_3()));
			return GeoCoordinate_6_35_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #40, 216 total numbers made up of 72 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_40_point()
		{
			MFVec3d GeoCoordinate_6_40_point = new MFVec3d(new double[] {21.565311,-106.621078,0.000000,21.693886,-106.647507,0.000000,21.715832,-106.585564,0.000000,21.690830,-106.530006,0.000000,21.612778,-106.485291,0.000000,21.513054,-106.515007,0.000000,21.565311,-106.621078,0.000000,21.419720,-106.399170,0.000000,21.450275,-106.511398,0.000000,21.510555,-106.471680,0.000000,21.503052,-106.346390,0.000000,21.468609,-106.327217,0.000000,21.419720,-106.399170,0.000000,20.693254,-105.271591,0.000000,20.767776,-105.322777,0.000000,20.753887,-105.417236,0.000000,20.785000,-105.544449,0.000000,20.819721,-105.467506,0.000000,21.017498,-105.318619,0.000000,21.064720,-105.241386,0.000000,21.227776,-105.213058,0.000000,21.347775,-105.238617,0.000000,21.450275,-105.180847,0.000000,21.520275,-105.221123,0.000000,21.521664,-105.279716,0.000000,21.607777,-105.436401,0.000000,21.775276,-105.497513,0.000000,21.987778,-105.654167,0.000000,22.286663,-105.640289,0.000000,22.468361,-105.714577,0.000000,22.473110,-105.694702,0.000000,22.486179,-105.644302,0.000000,22.548889,-105.454498,0.000000,22.681391,-105.479401,0.000000,22.753050,-105.575302,0.000000,22.836941,-105.541702,0.000000,22.903891,-105.444199,0.000000,22.971109,-105.487801,0.000000,23.040831,-105.462799,0.000000,23.067459,-105.402100,0.000000,23.034719,-105.312500,0.000000,23.039721,-105.171997,0.000000,22.924721,-104.914703,0.000000,22.783051,-104.879997,0.000000,22.678890,-104.998100,0.000000,22.548330,-104.998100,0.000000,22.676670,-104.757500,0.000000,22.624439,-104.660599,0.000000,22.472500,-104.612503,0.000000,22.410271,-104.491402,0.000000,22.451389,-104.345001,0.000000,22.319210,-104.311401,0.000000,22.264540,-104.329597,0.000000,22.076389,-104.402802,0.000000,21.785830,-104.093597,0.000000,21.598049,-104.152802,0.000000,21.547220,-104.207199,0.000000,21.374969,-103.944901,0.000000,21.287781,-103.961403,0.000000,21.211390,-104.042503,0.000000,21.177731,-104.227699,0.000000,20.978050,-104.209999,0.000000,20.860830,-104.275002,0.000000,20.708050,-104.285599,0.000000,20.829720,-104.467201,0.000000,20.916109,-104.535004,0.000000,20.923611,-104.625000,0.000000,21.012779,-104.721901,0.000000,21.020550,-104.769997,0.000000,20.925550,-104.948898,0.000000,20.925280,-105.083298,0.000000,20.693254,-105.271591,0.000000});
			return GeoCoordinate_6_40_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #45, 468 total numbers made up of 156 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_45_point()
		{
			MFVec3d GeoCoordinate_6_45_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_45_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_45_point_2()));
			return GeoCoordinate_6_45_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #55, 192 total numbers made up of 64 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_55_point()
		{
			MFVec3d GeoCoordinate_6_55_point = new MFVec3d(new double[] {20.204510,-100.280296,0.000000,20.057220,-100.348602,0.000000,19.907780,-100.481400,0.000000,19.985279,-100.679199,0.000000,19.927500,-100.841400,0.000000,19.941111,-100.898399,0.000000,20.036659,-100.915298,0.000000,20.059719,-100.984497,0.000000,20.086390,-101.154404,0.000000,20.023890,-101.274399,0.000000,20.035271,-101.361099,0.000000,20.080000,-101.409203,0.000000,20.178610,-101.399399,0.000000,20.333679,-101.460602,0.000000,20.318050,-101.606903,0.000000,20.190830,-101.673897,0.000000,20.211941,-101.820801,0.000000,20.191111,-101.888901,0.000000,20.211109,-101.920303,0.000000,20.364441,-101.950600,0.000000,20.367290,-101.980598,0.000000,20.326941,-101.994202,0.000000,20.403049,-101.995598,0.000000,20.389080,-102.108803,0.000000,20.464439,-102.089203,0.000000,20.591110,-101.978302,0.000000,20.773609,-102.091904,0.000000,20.813890,-102.074699,0.000000,21.102221,-101.848297,0.000000,21.150551,-101.839996,0.000000,21.243050,-101.658302,0.000000,21.326660,-101.576401,0.000000,21.533331,-101.632004,0.000000,21.656940,-101.543602,0.000000,21.772779,-101.588303,0.000000,21.856640,-101.524902,0.000000,21.834999,-101.426697,0.000000,21.861389,-101.322800,0.000000,21.767500,-101.203903,0.000000,21.745001,-100.968597,0.000000,21.568890,-100.751701,0.000000,21.506390,-100.608101,0.000000,21.515551,-100.549698,0.000000,21.650551,-100.432503,0.000000,21.648890,-100.296997,0.000000,21.586260,-100.193199,0.000000,21.419180,-99.790543,0.000000,21.303610,-99.777512,0.000000,21.238890,-99.724731,0.000000,21.174160,-99.823334,0.000000,21.201389,-99.961121,0.000000,21.180269,-100.009499,0.000000,21.090000,-100.029404,0.000000,21.048330,-100.080597,0.000000,20.902220,-100.110001,0.000000,20.925831,-100.368103,0.000000,20.946659,-100.405296,0.000000,20.924999,-100.466103,0.000000,20.691111,-100.600601,0.000000,20.609171,-100.493301,0.000000,20.373610,-100.449203,0.000000,20.331110,-100.388100,0.000000,20.290831,-100.404404,0.000000,20.204510,-100.280296,0.000000});
			return GeoCoordinate_6_55_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #60, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_60_point()
		{
			MFVec3d GeoCoordinate_6_60_point = new MFVec3d(new double[] {19.938040,-100.122803,0.000000,20.082220,-100.182503,0.000000,20.204510,-100.280296,0.000000,20.290831,-100.404404,0.000000,20.331110,-100.388100,0.000000,20.373610,-100.449203,0.000000,20.609171,-100.493301,0.000000,20.691111,-100.600601,0.000000,20.924999,-100.466103,0.000000,20.946659,-100.405296,0.000000,20.925831,-100.368103,0.000000,20.902220,-100.110001,0.000000,21.048330,-100.080597,0.000000,21.090000,-100.029404,0.000000,21.180269,-100.009499,0.000000,21.201389,-99.961121,0.000000,21.174160,-99.823334,0.000000,21.238890,-99.724731,0.000000,21.303610,-99.777512,0.000000,21.419180,-99.790543,0.000000,21.521660,-99.743057,0.000000,21.554720,-99.690567,0.000000,21.423889,-99.579727,0.000000,21.461109,-99.411957,0.000000,21.556660,-99.366959,0.000000,21.563890,-99.296677,0.000000,21.625830,-99.255280,0.000000,21.643890,-99.200012,0.000000,21.287220,-99.087784,0.000000,21.268320,-99.043259,0.000000,21.157101,-99.034607,0.000000,21.181660,-99.065292,0.000000,21.112499,-99.218613,0.000000,21.148701,-99.294373,0.000000,21.101391,-99.317497,0.000000,21.098049,-99.373901,0.000000,21.045280,-99.345001,0.000000,20.915279,-99.390289,0.000000,20.815550,-99.494453,0.000000,20.719440,-99.519180,0.000000,20.661131,-99.489906,0.000000,20.512501,-99.819458,0.000000,20.270000,-99.829102,0.000000,20.242769,-99.950287,0.000000,20.129999,-99.962227,0.000000,19.938040,-100.122803,0.000000});
			return GeoCoordinate_6_60_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #65, 240 total numbers made up of 80 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_65_point()
		{
			MFVec3d GeoCoordinate_6_65_point = new MFVec3d(new double[] {19.585400,-98.659409,0.000000,19.595551,-98.655563,0.000000,19.738890,-98.581390,0.000000,19.838890,-98.695007,0.000000,19.849720,-98.872627,0.000000,19.803329,-98.914459,0.000000,19.807501,-98.958069,0.000000,19.867220,-98.976669,0.000000,19.992500,-98.942780,0.000000,20.041941,-99.030838,0.000000,19.976940,-99.203613,0.000000,19.820271,-99.277786,0.000000,19.776110,-99.381958,0.000000,19.883051,-99.428337,0.000000,19.951941,-99.519447,0.000000,20.081940,-99.485573,0.000000,20.145000,-99.559174,0.000000,20.138611,-99.663353,0.000000,20.270000,-99.829102,0.000000,20.512501,-99.819458,0.000000,20.661131,-99.489906,0.000000,20.719440,-99.519180,0.000000,20.815550,-99.494453,0.000000,20.915279,-99.390289,0.000000,21.045280,-99.345001,0.000000,21.098049,-99.373901,0.000000,21.101391,-99.317497,0.000000,21.148701,-99.294373,0.000000,21.112499,-99.218613,0.000000,21.181660,-99.065292,0.000000,21.157101,-99.034607,0.000000,21.268320,-99.043259,0.000000,21.293610,-98.943069,0.000000,21.216110,-98.905563,0.000000,21.184999,-98.811111,0.000000,21.215000,-98.620010,0.000000,21.334440,-98.605827,0.000000,21.398890,-98.515007,0.000000,21.352221,-98.477226,0.000000,21.241940,-98.487228,0.000000,21.154160,-98.410568,0.000000,21.152220,-98.337509,0.000000,21.233891,-98.298889,0.000000,21.213051,-98.263062,0.000000,21.183611,-98.272903,0.000000,21.129780,-98.288162,0.000000,21.157221,-98.212509,0.000000,21.074720,-98.130569,0.000000,21.019440,-98.153061,0.000000,21.027500,-98.176392,0.000000,20.961941,-98.220001,0.000000,20.830830,-98.230560,0.000000,20.858610,-98.366959,0.000000,20.790279,-98.421112,0.000000,20.756390,-98.510834,0.000000,20.712500,-98.498901,0.000000,20.718611,-98.424454,0.000000,20.501659,-98.566116,0.000000,20.376390,-98.494743,0.000000,20.359171,-98.452789,0.000000,20.441111,-98.402237,0.000000,20.434999,-98.335007,0.000000,20.661659,-98.095291,0.000000,20.642500,-98.030838,0.000000,20.606939,-98.029449,0.000000,20.506941,-98.042793,0.000000,20.432171,-98.098183,0.000000,20.324720,-98.162514,0.000000,20.313890,-98.238068,0.000000,20.276939,-98.245827,0.000000,20.217220,-98.244743,0.000000,20.198891,-98.134171,0.000000,20.105000,-98.095840,0.000000,19.846109,-98.258057,0.000000,19.672779,-98.143066,0.000000,19.713890,-98.257507,0.000000,19.640551,-98.315002,0.000000,19.589439,-98.343903,0.000000,19.644720,-98.492233,0.000000,19.585400,-98.659409,0.000000});
			return GeoCoordinate_6_65_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #70, 315 total numbers made up of 105 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_70_point()
		{
			MFVec3d GeoCoordinate_6_70_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_70_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_70_point_2()));
			return GeoCoordinate_6_70_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #75, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_75_point()
		{
			MFVec3d GeoCoordinate_6_75_point = new MFVec3d(new double[] {19.475760,-98.627983,0.000000,19.405830,-98.666122,0.000000,19.165279,-98.636948,0.000000,18.996759,-98.662231,0.000000,18.968889,-98.753891,0.000000,19.089029,-98.963852,0.000000,19.137779,-98.939178,0.000000,19.306110,-98.967506,0.000000,19.372219,-99.028343,0.000000,19.454439,-99.031677,0.000000,19.475830,-99.085281,0.000000,19.540831,-99.113068,0.000000,19.405830,-99.224457,0.000000,19.357780,-99.340561,0.000000,19.142441,-99.284866,0.000000,19.090549,-99.324448,0.000000,18.972500,-99.304169,0.000000,18.882219,-99.429733,0.000000,18.666710,-99.496536,0.000000,18.764999,-99.650558,0.000000,18.633890,-99.795837,0.000000,18.657780,-99.888634,0.000000,18.607220,-100.093300,0.000000,18.516109,-100.122498,0.000000,18.397499,-100.259499,0.000000,18.390829,-100.305603,0.000000,18.528330,-100.386101,0.000000,18.809999,-100.455002,0.000000,18.844450,-100.527802,0.000000,18.859720,-100.586403,0.000000,18.940550,-100.529404,0.000000,18.983330,-100.533897,0.000000,19.262779,-100.284203,0.000000,19.334721,-100.297203,0.000000,19.415831,-100.138901,0.000000,19.641390,-100.186996,0.000000,19.827221,-100.144203,0.000000,19.877220,-100.056999,0.000000,19.938040,-100.122803,0.000000,20.129999,-99.962227,0.000000,20.242769,-99.950287,0.000000,20.270000,-99.829102,0.000000,20.138611,-99.663353,0.000000,20.145000,-99.559174,0.000000,20.081940,-99.485573,0.000000,19.951941,-99.519447,0.000000,19.883051,-99.428337,0.000000,19.776110,-99.381958,0.000000,19.820271,-99.277786,0.000000,19.976940,-99.203613,0.000000,20.041941,-99.030838,0.000000,19.992500,-98.942780,0.000000,19.867220,-98.976669,0.000000,19.807501,-98.958069,0.000000,19.803329,-98.914459,0.000000,19.849720,-98.872627,0.000000,19.838890,-98.695007,0.000000,19.738890,-98.581390,0.000000,19.595551,-98.655563,0.000000,19.585400,-98.659409,0.000000,19.577499,-98.712784,0.000000,19.475760,-98.627983,0.000000});
			return GeoCoordinate_6_75_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #95, 105 total numbers made up of 35 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_95_point()
		{
			MFVec3d GeoCoordinate_6_95_point = new MFVec3d(new double[] {20.845297,-90.373375,0.000000,20.941666,-90.338898,0.000000,20.863230,-90.386696,0.000000,20.781666,-90.436401,0.000000,20.863230,-90.407791,0.000000,20.925831,-90.385834,0.000000,21.025276,-90.335846,0.000000,21.160275,-90.106400,0.000000,21.189472,-90.000000,0.000000,21.284443,-89.771118,0.000000,21.411663,-88.848618,0.000000,21.447777,-88.708069,0.000000,21.533886,-88.601669,0.000000,21.568886,-88.451401,0.000000,21.553608,-88.271118,0.000000,21.584999,-88.086395,0.000000,21.567219,-88.243347,0.000000,21.606667,-88.156952,0.000000,21.602776,-87.994171,0.000000,21.536663,-87.707230,0.000000,21.551388,-87.865280,0.000000,21.505554,-87.754456,0.000000,21.498333,-87.616669,0.000000,21.520275,-87.689453,0.000000,21.528610,-87.655289,0.000000,21.502314,-87.539154,0.000000,21.024719,-87.540558,0.000000,20.662500,-87.753891,0.000000,19.651939,-89.418327,0.000000,20.494440,-90.028343,0.000000,20.443050,-90.065002,0.000000,20.489719,-90.226959,0.000000,20.557779,-90.206680,0.000000,20.553890,-90.378067,0.000000,20.845297,-90.373375,0.000000});
			return GeoCoordinate_6_95_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #100, 240 total numbers made up of 80 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_100_point()
		{
			MFVec3d GeoCoordinate_6_100_point = new MFVec3d(new double[] {18.638054,-91.834457,0.000000,18.659443,-91.841949,0.000000,18.753609,-91.646118,0.000000,18.788330,-91.553345,0.000000,18.770554,-91.523895,0.000000,18.748608,-91.524445,0.000000,18.736664,-91.622513,0.000000,18.657497,-91.691391,0.000000,18.659443,-91.723343,0.000000,18.695553,-91.703064,0.000000,18.638054,-91.834457,0.000000,18.651676,-92.478287,0.000000,18.728333,-91.981400,0.000000,18.611111,-91.858902,0.000000,18.581108,-91.878342,0.000000,18.591663,-91.940567,0.000000,18.628052,-91.946396,0.000000,18.614719,-92.005005,0.000000,18.590553,-91.991669,0.000000,18.594719,-92.034454,0.000000,18.544720,-92.050568,0.000000,18.543331,-91.956680,0.000000,18.500832,-91.886124,0.000000,18.583885,-91.970840,0.000000,18.575275,-91.903061,0.000000,18.528889,-91.870560,0.000000,18.516666,-91.889725,0.000000,18.495831,-91.825562,0.000000,18.430553,-91.857224,0.000000,18.379997,-91.803345,0.000000,18.442776,-91.814178,0.000000,18.441387,-91.771118,0.000000,18.484444,-91.801956,0.000000,18.439442,-91.475006,0.000000,18.492496,-91.481949,0.000000,18.461388,-91.538345,0.000000,18.518055,-91.490845,0.000000,18.565277,-91.334167,0.000000,18.618889,-91.303345,0.000000,18.644165,-91.189728,0.000000,18.628330,-91.297501,0.000000,18.740833,-91.263626,0.000000,18.811108,-91.414459,0.000000,18.957222,-91.237228,0.000000,18.882500,-91.375290,0.000000,18.820000,-91.420288,0.000000,18.808609,-91.511124,0.000000,18.897221,-91.430008,0.000000,19.002777,-91.174454,0.000000,19.118610,-90.997513,0.000000,19.315830,-90.756668,0.000000,19.762218,-90.681122,0.000000,19.881386,-90.523346,0.000000,19.975277,-90.454727,0.000000,20.085278,-90.500565,0.000000,20.398052,-90.465012,0.000000,20.520832,-90.491119,0.000000,20.727776,-90.458618,0.000000,20.816666,-90.383621,0.000000,20.845297,-90.373375,0.000000,20.553890,-90.378067,0.000000,20.557779,-90.206680,0.000000,20.489719,-90.226959,0.000000,20.443050,-90.065002,0.000000,20.494440,-90.028343,0.000000,19.651939,-89.418327,0.000000,17.819162,-89.430443,0.000000,17.820652,-90.982422,0.000000,17.967779,-90.983063,0.000000,17.976110,-91.188606,0.000000,18.063330,-91.321121,0.000000,18.099440,-91.453903,0.000000,18.096661,-91.609177,0.000000,17.950830,-91.626404,0.000000,17.951389,-91.855293,0.000000,18.017780,-91.979446,0.000000,18.157221,-92.157791,0.000000,18.511940,-92.153061,0.000000,18.513050,-92.421677,0.000000,18.651676,-92.478287,0.000000});
			return GeoCoordinate_6_100_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #105, 339 total numbers made up of 113 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_105_point()
		{
			MFVec3d GeoCoordinate_6_105_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_105_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_105_point_2()));
			return GeoCoordinate_6_105_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #110, 321 total numbers made up of 107 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_110_point()
		{
			MFVec3d GeoCoordinate_6_110_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_110_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_110_point_2()));
			return GeoCoordinate_6_110_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #120, 264 total numbers made up of 88 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_120_point()
		{
			MFVec3d GeoCoordinate_6_120_point = new MFVec3d(new double[] {18.370790,-99.050491,0.000000,18.237780,-99.031403,0.000000,18.202221,-98.927231,0.000000,18.125271,-98.904167,0.000000,18.134439,-98.831680,0.000000,18.011391,-98.763062,0.000000,17.973330,-98.616959,0.000000,17.994160,-98.448624,0.000000,17.892220,-98.347778,0.000000,17.865829,-98.321121,0.000000,17.688610,-98.379730,0.000000,17.532499,-98.379730,0.000000,17.411659,-98.303337,0.000000,17.248329,-98.290848,0.000000,17.112499,-98.075012,0.000000,17.041109,-98.013344,0.000000,16.884159,-98.056671,0.000000,16.760000,-98.081680,0.000000,16.700830,-98.167793,0.000000,16.702669,-98.240372,0.000000,16.645281,-98.206123,0.000000,16.545000,-98.329727,0.000000,16.405001,-98.328056,0.000000,16.383329,-98.468613,0.000000,16.319344,-98.554688,0.000000,16.553055,-98.782227,0.000000,16.524441,-98.864731,0.000000,16.596943,-99.036957,0.000000,16.708332,-99.692230,0.000000,16.787498,-99.849731,0.000000,16.814442,-99.837784,0.000000,16.870277,-99.878067,0.000000,16.825554,-99.900009,0.000000,16.882221,-99.938904,0.000000,16.941666,-100.078339,0.000000,16.955555,-100.186401,0.000000,17.266941,-101.048607,0.000000,17.358887,-101.104446,0.000000,17.518608,-101.417793,0.000000,17.621944,-101.497787,0.000000,17.617775,-101.556122,0.000000,17.666943,-101.633057,0.000000,17.876110,-101.787781,0.000000,17.977497,-101.950012,0.000000,17.988888,-102.047234,0.000000,17.919167,-102.144447,0.000000,17.921894,-102.180855,0.000000,18.174160,-102.146103,0.000000,18.202221,-101.987503,0.000000,18.261391,-101.900299,0.000000,18.290047,-101.863182,0.000000,18.537405,-101.877739,0.000000,18.595608,-101.844475,0.000000,18.608080,-101.619987,0.000000,18.524933,-101.574257,0.000000,18.485439,-101.509819,0.000000,18.479204,-101.451614,0.000000,18.533609,-101.295601,0.000000,18.501110,-101.087502,0.000000,18.517220,-101.011101,0.000000,18.441940,-100.946701,0.000000,18.450001,-100.909401,0.000000,18.477501,-100.915298,0.000000,18.472219,-100.793098,0.000000,18.387501,-100.685600,0.000000,18.353331,-100.624496,0.000000,18.402241,-100.593597,0.000000,18.525551,-100.720596,0.000000,18.791109,-100.769699,0.000000,18.860189,-100.728104,0.000000,18.786070,-100.682602,0.000000,18.859720,-100.586403,0.000000,18.844450,-100.527802,0.000000,18.809999,-100.455002,0.000000,18.528330,-100.386101,0.000000,18.390829,-100.305603,0.000000,18.397499,-100.259499,0.000000,18.516109,-100.122498,0.000000,18.607220,-100.093300,0.000000,18.657780,-99.888634,0.000000,18.633890,-99.795837,0.000000,18.764999,-99.650558,0.000000,18.666710,-99.496536,0.000000,18.463329,-99.311684,0.000000,18.459721,-99.256393,0.000000,18.526661,-99.227783,0.000000,18.533890,-99.149437,0.000000,18.370790,-99.050491,0.000000});
			return GeoCoordinate_6_120_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #125, 375 total numbers made up of 125 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_125_point()
		{
			MFVec3d GeoCoordinate_6_125_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_125_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_125_point_2()));
			return GeoCoordinate_6_125_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #130, 243 total numbers made up of 81 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_130_point()
		{
			MFVec3d GeoCoordinate_6_130_point = new MFVec3d(new double[] {17.375460,-93.589401,0.000000,17.452770,-93.667511,0.000000,17.522499,-93.653900,0.000000,17.561371,-93.689362,0.000000,17.683611,-93.741959,0.000000,17.722219,-93.857788,0.000000,17.749720,-93.864731,0.000000,17.745831,-93.923889,0.000000,17.831390,-93.968063,0.000000,17.880550,-94.075287,0.000000,17.991659,-94.051392,0.000000,18.068609,-94.092789,0.000000,18.155830,-94.094452,0.000000,18.209143,-94.137825,0.000000,18.303333,-93.867508,0.000000,18.254166,-93.886673,0.000000,18.261944,-93.793900,0.000000,18.333611,-93.739182,0.000000,18.352219,-93.580002,0.000000,18.407776,-93.570282,0.000000,18.311665,-93.843613,0.000000,18.423054,-93.578064,0.000000,18.439163,-93.153336,0.000000,18.372776,-93.172226,0.000000,18.388054,-93.117783,0.000000,18.338886,-93.126953,0.000000,18.403610,-93.087784,0.000000,18.432220,-93.138901,0.000000,18.445831,-92.926117,0.000000,18.539997,-92.767227,0.000000,18.583885,-92.703613,0.000000,18.429165,-92.668900,0.000000,18.551666,-92.660568,0.000000,18.619442,-92.687225,0.000000,18.651676,-92.478287,0.000000,18.513050,-92.421677,0.000000,18.511940,-92.153061,0.000000,18.157221,-92.157791,0.000000,18.017780,-91.979446,0.000000,17.951389,-91.855293,0.000000,17.950830,-91.626404,0.000000,18.096661,-91.609177,0.000000,18.099440,-91.453903,0.000000,18.063330,-91.321121,0.000000,17.976110,-91.188606,0.000000,17.967779,-90.983063,0.000000,17.820652,-90.982422,0.000000,17.256107,-90.983902,0.000000,17.241108,-91.437500,0.000000,17.326660,-91.388062,0.000000,17.386940,-91.426392,0.000000,17.404160,-91.496117,0.000000,17.469900,-91.507584,0.000000,17.505550,-91.665283,0.000000,17.644720,-91.664169,0.000000,17.714161,-91.698624,0.000000,17.726669,-91.793617,0.000000,17.773689,-91.772873,0.000000,17.855551,-91.786667,0.000000,17.889160,-91.823334,0.000000,17.887220,-91.912514,0.000000,17.854719,-91.945557,0.000000,17.895550,-91.950562,0.000000,17.912220,-91.989899,0.000000,17.832781,-92.077789,0.000000,17.788610,-92.068619,0.000000,17.789440,-92.153633,0.000000,17.716940,-92.365837,0.000000,17.667770,-92.386673,0.000000,17.361660,-92.761673,0.000000,17.404440,-92.832230,0.000000,17.530279,-92.905563,0.000000,17.544720,-92.986107,0.000000,17.730270,-93.013062,0.000000,17.918890,-92.994743,0.000000,17.943609,-93.142227,0.000000,17.991390,-93.264183,0.000000,17.959721,-93.309448,0.000000,17.607780,-93.391953,0.000000,17.508610,-93.526672,0.000000,17.375460,-93.589401,0.000000});
			return GeoCoordinate_6_130_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #135, 303 total numbers made up of 101 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_135_point()
		{
			MFVec3d GeoCoordinate_6_135_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_135_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_135_point_2()));
			return GeoCoordinate_6_135_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #140, 462 total numbers made up of 154 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_140_point()
		{
			MFVec3d GeoCoordinate_6_140_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_140_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_140_point_2()));
			return GeoCoordinate_6_140_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #145, 336 total numbers made up of 112 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_145_point()
		{
			MFVec3d GeoCoordinate_6_145_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_145_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_145_point_2()));
			return GeoCoordinate_6_145_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #150, 417 total numbers made up of 139 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_150_point()
		{
			MFVec3d GeoCoordinate_6_150_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_150_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_150_point_2()));
			return GeoCoordinate_6_150_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #155, 462 total numbers made up of 154 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_155_point()
		{
			MFVec3d GeoCoordinate_6_155_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_155_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_155_point_2()));
			return GeoCoordinate_6_155_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #160, 291 total numbers made up of 97 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_160_point()
		{
			MFVec3d GeoCoordinate_6_160_point = new MFVec3d(new double[] {22.319210,-104.311401,0.000000,22.451389,-104.345001,0.000000,22.410271,-104.491402,0.000000,22.472500,-104.612503,0.000000,22.624439,-104.660599,0.000000,22.676670,-104.757500,0.000000,22.548330,-104.998100,0.000000,22.678890,-104.998100,0.000000,22.783051,-104.879997,0.000000,22.924721,-104.914703,0.000000,23.039721,-105.171997,0.000000,23.034719,-105.312500,0.000000,23.067459,-105.402100,0.000000,23.147221,-105.416702,0.000000,23.144440,-105.528900,0.000000,23.253441,-105.633904,0.000000,23.287220,-105.684196,0.000000,23.469721,-105.716400,0.000000,23.556660,-105.763298,0.000000,23.759720,-105.885803,0.000000,24.055269,-105.908096,0.000000,24.098890,-105.959702,0.000000,24.211941,-106.002197,0.000000,24.390270,-106.249199,0.000000,24.284719,-106.396103,0.000000,24.301941,-106.519203,0.000000,24.572500,-106.638603,0.000000,24.763330,-106.821098,0.000000,24.770281,-106.885002,0.000000,24.841940,-106.948898,0.000000,25.148609,-107.107498,0.000000,25.294439,-107.124702,0.000000,25.606091,-107.084099,0.000000,25.622499,-106.740303,0.000000,25.789169,-106.533600,0.000000,26.021111,-106.520798,0.000000,26.080000,-106.403099,0.000000,26.147499,-106.367500,0.000000,26.376390,-106.449997,0.000000,26.368891,-106.344704,0.000000,26.415001,-106.239502,0.000000,26.591391,-106.172203,0.000000,26.752220,-106.153297,0.000000,26.769440,-106.126999,0.000000,26.735001,-106.091904,0.000000,26.838610,-106.027496,0.000000,26.655001,-105.753899,0.000000,26.662781,-105.636902,0.000000,26.587780,-105.585297,0.000000,26.458891,-105.326103,0.000000,26.541389,-105.138298,0.000000,26.521391,-105.121902,0.000000,26.459440,-105.010002,0.000000,26.492769,-104.843903,0.000000,26.433331,-104.796700,0.000000,26.450550,-104.725601,0.000000,26.355551,-104.607498,0.000000,26.350559,-104.551102,0.000000,26.756390,-104.188301,0.000000,26.728889,-103.844200,0.000000,26.661079,-103.630898,0.000000,26.383890,-103.322502,0.000000,26.284439,-103.278900,0.000000,26.075550,-103.336098,0.000000,25.743330,-103.325798,0.000000,25.541941,-103.484703,0.000000,25.465269,-103.484497,0.000000,25.385281,-103.412804,0.000000,25.333611,-103.428902,0.000000,25.275961,-103.504700,0.000000,25.150551,-103.398598,0.000000,25.058889,-103.259201,0.000000,24.904440,-103.238899,0.000000,24.849720,-103.160301,0.000000,24.798611,-102.951698,0.000000,24.696659,-102.811401,0.000000,24.861660,-102.829201,0.000000,25.075830,-102.666901,0.000000,24.828609,-102.504997,0.000000,24.452221,-102.513603,0.000000,24.458891,-102.735298,0.000000,24.433889,-102.767197,0.000000,24.476110,-103.267502,0.000000,24.275551,-103.612503,0.000000,24.182501,-103.600601,0.000000,24.073059,-103.850899,0.000000,23.861389,-103.875603,0.000000,23.736940,-103.858597,0.000000,23.674721,-103.808296,0.000000,23.623329,-103.919701,0.000000,23.573059,-103.936699,0.000000,23.447500,-104.078102,0.000000,23.195829,-104.096100,0.000000,23.142780,-104.169701,0.000000,23.062771,-104.201103,0.000000,22.421940,-104.258598,0.000000,22.319210,-104.311401,0.000000});
			return GeoCoordinate_6_160_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #165, 390 total numbers made up of 130 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_165_point()
		{
			MFVec3d GeoCoordinate_6_165_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_165_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_165_point_2()));
			return GeoCoordinate_6_165_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #170, 294 total numbers made up of 98 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_170_point()
		{
			MFVec3d GeoCoordinate_6_170_point = new MFVec3d(new double[] {23.241110,-100.057198,0.000000,23.120831,-100.089203,0.000000,23.127220,-100.025803,0.000000,23.002220,-99.908073,0.000000,22.930550,-99.936401,0.000000,22.838890,-100.048599,0.000000,22.803890,-100.016701,0.000000,22.615000,-99.530563,0.000000,22.726669,-99.536118,0.000000,22.633430,-99.424438,0.000000,22.679440,-99.378067,0.000000,22.446110,-99.231117,0.000000,22.340549,-98.879463,0.000000,22.419170,-98.686111,0.000000,22.418489,-98.616089,0.000000,22.228331,-98.345573,0.000000,22.017139,-98.469254,0.000000,21.998680,-98.481369,0.000000,21.974131,-98.499947,0.000000,21.975269,-98.588562,0.000000,21.941111,-98.573334,0.000000,21.951389,-98.518623,0.000000,21.933331,-98.555008,0.000000,21.911659,-98.537231,0.000000,21.884439,-98.563904,0.000000,21.836670,-98.521118,0.000000,21.851940,-98.490280,0.000000,21.782221,-98.450844,0.000000,21.720551,-98.525284,0.000000,21.728331,-98.562790,0.000000,21.689440,-98.562790,0.000000,21.694719,-98.612793,0.000000,21.608891,-98.642227,0.000000,21.528330,-98.524437,0.000000,21.398890,-98.515007,0.000000,21.334440,-98.605827,0.000000,21.215000,-98.620010,0.000000,21.184999,-98.811111,0.000000,21.216110,-98.905563,0.000000,21.293610,-98.943069,0.000000,21.268320,-99.043259,0.000000,21.287220,-99.087784,0.000000,21.643890,-99.200012,0.000000,21.625830,-99.255280,0.000000,21.563890,-99.296677,0.000000,21.556660,-99.366959,0.000000,21.461109,-99.411957,0.000000,21.423889,-99.579727,0.000000,21.554720,-99.690567,0.000000,21.521660,-99.743057,0.000000,21.419180,-99.790543,0.000000,21.586260,-100.193199,0.000000,21.648890,-100.296997,0.000000,21.650551,-100.432503,0.000000,21.515551,-100.549698,0.000000,21.506390,-100.608101,0.000000,21.568890,-100.751701,0.000000,21.745001,-100.968597,0.000000,21.767500,-101.203903,0.000000,21.861389,-101.322800,0.000000,21.834999,-101.426697,0.000000,21.856640,-101.524902,0.000000,22.079170,-101.328598,0.000000,22.395550,-101.360603,0.000000,22.454439,-101.298897,0.000000,22.535271,-101.311401,0.000000,22.594170,-101.375000,0.000000,22.618610,-101.481102,0.000000,22.598049,-101.570801,0.000000,22.460831,-101.708298,0.000000,22.493130,-101.870796,0.000000,22.620550,-101.934402,0.000000,22.755831,-102.081398,0.000000,22.810280,-102.142799,0.000000,23.002220,-102.245003,0.000000,23.113050,-102.194504,0.000000,23.217501,-102.280602,0.000000,23.333611,-102.193604,0.000000,23.388611,-102.192802,0.000000,23.373610,-102.057503,0.000000,23.548050,-101.870300,0.000000,23.610001,-101.734703,0.000000,23.693890,-101.685303,0.000000,23.898050,-101.402199,0.000000,24.113331,-101.173103,0.000000,24.398609,-100.981903,0.000000,24.559999,-100.823898,0.000000,24.290831,-100.589699,0.000000,24.137501,-100.562202,0.000000,23.959999,-100.601402,0.000000,23.747499,-100.417198,0.000000,23.610830,-100.468102,0.000000,23.412220,-100.427803,0.000000,23.278330,-100.455299,0.000000,23.216391,-100.434402,0.000000,23.194441,-100.371902,0.000000,23.248051,-100.303299,0.000000,23.241110,-100.057198,0.000000});
			return GeoCoordinate_6_170_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #175, 348 total numbers made up of 116 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_175_point()
		{
			MFVec3d GeoCoordinate_6_175_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_175_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_175_point_2()));
			return GeoCoordinate_6_175_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #180, 441 total numbers made up of 147 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_180_point()
		{
			MFVec3d GeoCoordinate_6_180_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_180_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_180_point_2()));
			return GeoCoordinate_6_180_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #185, 576 total numbers made up of 192 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_185_point()
		{
			MFVec3d GeoCoordinate_6_185_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_185_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_185_point_2()));
			return GeoCoordinate_6_185_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #195, 408 total numbers made up of 136 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_195_color()
		{
			MFColor Color_6_195_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_195_color_1()))
				.append(new MFColor(getColor_6_195_color_2()));
			return Color_6_195_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #196, 408 total numbers made up of 136 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_196_point()
		{
			MFVec3d GeoCoordinate_6_196_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_196_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_196_point_2()));
			return GeoCoordinate_6_196_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #201, 117 total numbers made up of 39 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_201_point()
		{
			MFVec3d GeoCoordinate_6_201_point = new MFVec3d(new double[] {28.904055,-109.619186,0.000000,28.930832,-109.583618,0.000000,29.101665,-109.655563,0.000000,29.128330,-109.579178,0.000000,29.102219,-109.410278,0.000000,29.234444,-109.235001,0.000000,29.424999,-109.227509,0.000000,29.441109,-109.258347,0.000000,29.540955,-109.233902,0.000000,29.847775,-109.301956,0.000000,29.985275,-109.259171,0.000000,30.009163,-109.293625,0.000000,30.026943,-109.260010,0.000000,30.076111,-109.259171,0.000000,30.116943,-109.316116,0.000000,30.211666,-109.309723,0.000000,30.334164,-109.376114,0.000000,30.514999,-109.338623,0.000000,30.646664,-109.374725,0.000000,30.684998,-109.316956,0.000000,30.713608,-109.341675,0.000000,30.736664,-109.290848,0.000000,30.809719,-109.253342,0.000000,30.826111,-109.173340,0.000000,30.813889,-109.113342,0.000000,30.614441,-108.957504,0.000000,30.542500,-108.965836,0.000000,30.438053,-108.917786,0.000000,30.293053,-108.962509,0.000000,30.275276,-108.892792,0.000000,30.221943,-108.901123,0.000000,30.185276,-108.813904,0.000000,30.017220,-108.757233,0.000000,29.970276,-108.683624,0.000000,29.850830,-108.628616,0.000000,29.806110,-108.569458,0.000000,29.674442,-108.552505,0.000000,29.567219,-108.423889,0.000000,29.503887,-108.418060,0.000000});
			return GeoCoordinate_6_201_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #211, 201 total numbers made up of 67 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_211_point()
		{
			MFVec3d GeoCoordinate_6_211_point = new MFVec3d(new double[] {27.844444,-106.904175,0.000000,27.816109,-106.622513,0.000000,27.846943,-106.484451,0.000000,27.890553,-106.425842,0.000000,27.823055,-106.252228,0.000000,27.878052,-106.197784,0.000000,27.917221,-106.083344,0.000000,27.907497,-105.924179,0.000000,27.988888,-105.765839,0.000000,28.044167,-105.768066,0.000000,28.148888,-105.676964,0.000000,28.179996,-105.543625,0.000000,28.347050,-105.395676,0.000000,28.468887,-105.431396,0.000000,28.602776,-105.388901,0.000000,28.636944,-105.462784,0.000000,28.743610,-105.459167,0.000000,28.791386,-105.488892,0.000000,28.830276,-105.461121,0.000000,28.875832,-105.311401,0.000000,28.921108,-105.328339,0.000000,28.921387,-105.298615,0.000000,29.008610,-105.266403,0.000000,29.048332,-105.149170,0.000000,29.162777,-105.055008,0.000000,29.246387,-105.055283,0.000000,29.256107,-104.998611,0.000000,29.316109,-104.961945,0.000000,29.338608,-104.904449,0.000000,29.376389,-104.921402,0.000000,29.421944,-104.877228,0.000000,29.495831,-104.865005,0.000000,29.551109,-104.902237,0.000000,29.502220,-104.715286,0.000000,29.570274,-104.595001,0.000000,29.529442,-104.480560,0.000000,29.598488,-104.436172,0.000000,28.347050,-105.395676,0.000000,28.236111,-105.274170,0.000000,28.153332,-105.310287,0.000000,28.044167,-105.270279,0.000000,27.924721,-105.175003,0.000000,27.701942,-105.158340,0.000000,27.640553,-105.222504,0.000000,27.542221,-105.435287,0.000000,27.558331,-105.550003,0.000000,27.528332,-105.585564,0.000000,27.530830,-105.710281,0.000000,27.566109,-105.737793,0.000000,27.404720,-105.853348,0.000000,27.413609,-105.877228,0.000000,27.325554,-105.956680,0.000000,27.348331,-106.034729,0.000000,27.419720,-106.103622,0.000000,27.408333,-106.141113,0.000000,27.445831,-106.209457,0.000000,27.406502,-106.276276,0.000000,27.241108,-106.290558,0.000000,27.209999,-106.332504,0.000000,27.031109,-106.341400,0.000000,26.763885,-106.282501,0.000000,26.701942,-106.221390,0.000000,26.507500,-106.244446,0.000000,26.366108,-106.195007,0.000000,26.305832,-106.330841,0.000000,26.396664,-106.428894,0.000000,26.433052,-106.429169,0.000000});
			return GeoCoordinate_6_211_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #221, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_221_point()
		{
			MFVec3d GeoCoordinate_6_221_point = new MFVec3d(new double[] {18.224968,-92.217453,0.000000,18.226109,-92.306671,0.000000,18.289997,-92.479172,0.000000,18.384720,-92.580566,0.000000,18.406712,-92.665619,0.000000,18.171108,-92.730286,0.000000,18.159721,-92.692505,0.000000,18.123333,-92.701126,0.000000,18.073887,-92.757233,0.000000,18.045830,-92.873901,0.000000,17.958332,-92.911118,0.000000,17.966663,-92.978058,0.000000,17.923960,-93.024986,0.000000,17.943609,-93.142227,0.000000,17.991390,-93.264183,0.000000,17.959721,-93.309448,0.000000,17.607780,-93.391953,0.000000,17.515640,-93.517120,0.000000,17.378330,-93.449448,0.000000,17.362778,-93.408066,0.000000,17.324718,-93.430008,0.000000,17.366943,-93.499176,0.000000,17.352219,-93.543335,0.000000,17.240276,-93.534729,0.000000,17.184692,-93.596085,0.000000,17.161663,-93.575012,0.000000,17.181942,-93.505844,0.000000,17.131664,-93.494171,0.000000,17.094444,-93.394455,0.000000,17.041664,-93.388626,0.000000,17.006386,-93.283340,0.000000,17.035831,-93.207230,0.000000,16.966942,-93.107513,0.000000,16.873608,-93.113617,0.000000,16.841110,-93.068619,0.000000,16.799164,-93.074173,0.000000,16.719166,-93.021957,0.000000,16.576385,-92.899170,0.000000,16.517220,-92.763901,0.000000,16.404720,-92.756119,0.000000,16.297775,-92.823898,0.000000,16.182777,-92.596954,0.000000,16.251389,-92.498901,0.000000,16.147499,-92.536118,0.000000,15.912498,-92.103058,0.000000,15.854166,-92.065567,0.000000,15.896666,-92.138901,0.000000,15.784166,-92.235001,0.000000,15.690277,-92.153061,0.000000,15.597221,-92.160278,0.000000,15.539165,-92.116394,0.000000,15.439924,-92.106071,0.000000});
			return GeoCoordinate_6_221_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #231, 99 total numbers made up of 33 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_231_point()
		{
			MFVec3d GeoCoordinate_6_231_point = new MFVec3d(new double[] {20.196892,-102.772400,0.000000,20.229164,-102.622223,0.000000,20.338055,-102.443619,0.000000,20.343052,-102.211670,0.000000,20.389080,-102.108803,0.000000,20.403053,-101.995560,0.000000,20.326942,-101.994171,0.000000,20.367367,-101.980637,0.000000,20.364441,-101.950562,0.000000,20.211094,-101.920303,0.000000,20.191103,-101.888863,0.000000,20.211752,-101.820625,0.000000,20.190830,-101.673889,0.000000,20.318054,-101.606949,0.000000,20.333693,-101.460594,0.000000,20.345833,-101.437500,0.000000,20.423611,-101.384171,0.000000,20.480000,-101.389450,0.000000,20.546108,-101.325562,0.000000,20.539719,-101.280563,0.000000,20.583054,-101.236954,0.000000,20.546547,-101.160309,0.000000,20.479721,-100.807785,0.000000,20.521385,-100.756958,0.000000,20.554996,-100.773346,0.000000,20.615276,-100.737228,0.000000,20.831665,-100.836945,0.000000,20.909721,-100.783615,0.000000,21.050831,-100.799454,0.000000,21.129166,-100.818893,0.000000,21.313332,-100.994736,0.000000,21.364166,-101.148346,0.000000,21.315277,-101.284729,0.000000});
			return GeoCoordinate_6_231_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #236, 165 total numbers made up of 55 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_236_point()
		{
			MFVec3d GeoCoordinate_6_236_point = new MFVec3d(new double[] {22.268055,-97.777512,0.000000,22.213886,-97.849167,0.000000,22.208885,-97.994736,0.000000,22.146111,-98.011948,0.000000,22.143887,-98.051956,0.000000,22.107498,-98.035843,0.000000,22.101944,-98.065292,0.000000,22.078888,-98.028336,0.000000,22.077499,-98.107224,0.000000,22.032776,-98.113892,0.000000,22.066387,-98.144180,0.000000,22.053608,-98.173065,0.000000,22.102776,-98.151123,0.000000,22.085552,-98.183060,0.000000,22.111664,-98.201401,0.000000,22.044441,-98.280838,0.000000,22.065277,-98.334457,0.000000,22.020275,-98.365845,0.000000,22.041111,-98.402512,0.000000,21.957497,-98.426392,0.000000,21.975260,-98.588562,0.000000,21.941109,-98.573334,0.000000,21.951385,-98.518616,0.000000,21.933331,-98.555008,0.000000,21.911663,-98.537231,0.000000,21.884441,-98.563904,0.000000,21.836666,-98.521118,0.000000,21.851944,-98.490280,0.000000,21.782219,-98.450836,0.000000,21.720554,-98.525284,0.000000,21.728333,-98.562790,0.000000,21.689442,-98.562790,0.000000,21.694721,-98.612793,0.000000,21.608828,-98.642265,0.000000,21.476109,-98.815567,0.000000,21.413887,-98.810562,0.000000,21.309998,-98.715836,0.000000,21.275204,-98.745834,0.000000,21.145832,-99.290283,0.000000,21.101387,-99.317505,0.000000,21.093609,-99.376404,0.000000,21.045277,-99.345001,0.000000,20.925831,-99.386124,0.000000,20.867775,-99.426392,0.000000,20.852219,-99.478897,0.000000,20.725830,-99.519180,0.000000,20.626942,-99.454178,0.000000,20.535553,-99.246948,0.000000,20.455555,-99.206680,0.000000,20.251110,-99.199448,0.000000,20.159164,-99.351959,0.000000,19.968887,-99.309448,0.000000,21.275204,-98.745834,0.000000,21.113888,-99.206680,0.000000,21.145832,-99.290283,0.000000});
			return GeoCoordinate_6_236_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #251, 99 total numbers made up of 33 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_251_point()
		{
			MFVec3d GeoCoordinate_6_251_point = new MFVec3d(new double[] {28.967545,-108.739258,0.000000,28.905830,-108.709167,0.000000,28.820454,-108.720795,0.000000,28.707222,-108.663620,0.000000,28.631664,-108.562500,0.000000,29.540955,-109.233902,0.000000,29.527775,-109.170837,0.000000,29.367222,-109.011948,0.000000,29.376663,-108.964172,0.000000,29.182777,-108.881393,0.000000,29.163887,-108.806946,0.000000,28.967545,-108.739258,0.000000,28.976665,-108.692505,0.000000,29.083611,-108.703613,0.000000,29.184719,-108.570007,0.000000,29.317776,-108.583344,0.000000,29.388332,-108.485001,0.000000,29.384441,-108.381668,0.000000,29.346664,-108.346390,0.000000,29.226387,-108.348618,0.000000,29.042500,-108.269730,0.000000,29.009998,-108.220001,0.000000,28.784721,-108.095840,0.000000,28.773609,-107.959167,0.000000,28.955555,-107.933334,0.000000,29.009720,-107.862793,0.000000,28.906944,-107.778625,0.000000,28.722221,-107.693893,0.000000,28.640831,-107.505844,0.000000,28.295277,-107.428345,0.000000,28.134720,-107.519180,0.000000,28.120831,-107.623901,0.000000,28.182499,-107.641678,0.000000});
			return GeoCoordinate_6_251_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #261, 102 total numbers made up of 34 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_261_point()
		{
			MFVec3d GeoCoordinate_6_261_point = new MFVec3d(new double[] {25.866386,-109.414169,0.000000,25.838333,-109.346680,0.000000,25.954720,-109.246399,0.000000,25.934719,-109.129456,0.000000,25.958332,-109.045013,0.000000,25.924721,-108.956680,0.000000,26.023888,-108.880844,0.000000,26.091110,-108.758621,0.000000,26.175552,-108.734451,0.000000,26.281666,-108.779724,0.000000,26.342220,-108.682236,0.000000,26.513460,-108.574432,0.000000,26.545555,-108.520279,0.000000,26.643330,-108.500000,0.000000,26.824444,-108.549454,0.000000,26.811665,-108.415009,0.000000,26.854721,-108.356125,0.000000,26.920277,-108.332230,0.000000,26.888611,-108.268616,0.000000,26.904442,-108.193069,0.000000,26.877499,-108.170013,0.000000,26.898609,-108.055847,0.000000,26.945274,-107.993347,0.000000,26.891388,-107.923889,0.000000,26.893330,-107.874176,0.000000,26.812496,-107.788071,0.000000,26.718609,-107.503616,0.000000,26.731941,-107.427780,0.000000,26.638580,-107.260986,0.000000,26.674999,-107.049454,0.000000,26.653332,-106.967514,0.000000,26.543053,-106.827789,0.000000,26.473888,-106.848892,0.000000,26.008888,-106.658890,0.000000});
			return GeoCoordinate_6_261_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #265, 441 total numbers made up of 147 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_265_color()
		{
			MFColor Color_6_265_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_265_color_1()))
				.append(new MFColor(getColor_6_265_color_2()));
			return Color_6_265_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #266, 441 total numbers made up of 147 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_266_point()
		{
			MFVec3d GeoCoordinate_6_266_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_266_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_266_point_2()));
			return GeoCoordinate_6_266_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #276, 99 total numbers made up of 33 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_276_point()
		{
			MFVec3d GeoCoordinate_6_276_point = new MFVec3d(new double[] {28.913330,-102.473892,0.000000,28.916664,-102.401947,0.000000,28.875275,-102.353897,0.000000,28.651665,-102.258347,0.000000,28.613331,-102.121948,0.000000,28.560276,-102.083069,0.000000,28.539444,-101.925842,0.000000,28.468330,-101.850845,0.000000,28.362778,-101.601959,0.000000,28.201111,-101.488617,0.000000,28.155830,-101.367233,0.000000,27.967499,-101.311951,0.000000,27.968330,-101.250290,0.000000,27.847221,-101.131119,0.000000,27.817219,-101.051682,0.000000,27.695831,-100.951126,0.000000,27.631386,-100.711670,0.000000,27.549442,-100.711670,0.000000,27.499443,-100.661118,0.000000,27.529720,-100.615570,0.000000,27.481941,-100.498611,0.000000,27.314442,-100.342224,0.000000,27.238888,-100.128067,0.000000,27.178608,-100.090836,0.000000,27.168610,-99.969452,0.000000,27.134720,-99.951126,0.000000,27.058331,-99.995010,0.000000,27.003609,-99.958618,0.000000,26.964996,-99.858063,0.000000,26.899719,-99.854736,0.000000,26.899166,-99.633896,0.000000,26.779999,-99.463348,0.000000,26.855658,-99.284790,0.000000});
			return GeoCoordinate_6_276_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #281, 105 total numbers made up of 35 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_281_point()
		{
			MFVec3d GeoCoordinate_6_281_point = new MFVec3d(new double[] {21.202572,-104.078079,0.000000,21.287777,-103.961395,0.000000,21.359722,-103.955841,0.000000,21.531109,-103.850845,0.000000,21.738609,-103.776123,0.000000,21.928055,-103.790848,0.000000,22.018887,-103.701675,0.000000,22.121422,-103.680511,0.000000,22.217499,-103.741669,0.000000,22.396111,-103.726959,0.000000,22.469166,-103.675842,0.000000,22.606110,-103.675293,0.000000,22.708332,-103.568619,0.000000,22.887497,-103.481125,0.000000,22.974442,-103.456955,0.000000,23.013332,-103.496948,0.000000,21.673054,-105.448334,0.000000,21.679996,-105.362228,0.000000,21.722775,-105.313614,0.000000,21.707222,-105.286118,0.000000,21.750000,-105.271393,0.000000,21.728886,-105.234726,0.000000,21.799164,-105.217514,0.000000,21.804996,-105.063606,0.000000,21.725830,-105.013062,0.000000,21.778889,-104.833069,0.000000,21.823330,-104.814453,0.000000,21.853054,-104.730286,0.000000,21.716110,-104.621399,0.000000,21.475277,-104.516953,0.000000,21.471943,-104.457230,0.000000,21.269165,-104.326401,0.000000,21.244720,-104.263062,0.000000,21.177776,-104.227509,0.000000,21.202572,-104.078079,0.000000});
			return GeoCoordinate_6_281_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #286, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_286_point()
		{
			MFVec3d GeoCoordinate_6_286_point = new MFVec3d(new double[] {18.338375,-96.647049,0.000000,18.340832,-96.589737,0.000000,18.402775,-96.686951,0.000000,18.419998,-96.567505,0.000000,18.381664,-96.537231,0.000000,18.373055,-96.601395,0.000000,18.315552,-96.463058,0.000000,18.236664,-96.396660,0.000000,18.338375,-96.647049,0.000000,18.303055,-96.604446,0.000000,18.297222,-96.641953,0.000000,18.196663,-96.601959,0.000000,18.128330,-96.505280,0.000000,18.160275,-96.425003,0.000000,18.092777,-96.409180,0.000000,18.173611,-96.385834,0.000000,18.224442,-96.433624,0.000000,18.194721,-96.358902,0.000000,18.236664,-96.396660,0.000000,18.643608,-96.966675,0.000000,18.674442,-96.901947,0.000000,18.584442,-96.858337,0.000000,18.543331,-96.790558,0.000000,18.473053,-96.784454,0.000000,18.384998,-96.726395,0.000000,18.338375,-96.647049,0.000000,18.236664,-96.396660,0.000000,18.300278,-96.327515,0.000000,18.213797,-96.236572,0.000000,18.180269,-96.205292,0.000000,18.185551,-96.161392,0.000000,18.141670,-96.150284,0.000000,18.164080,-96.094650,0.000000,18.162281,-96.085342,0.000000,18.177498,-96.067230,0.000000,18.161110,-96.035278,0.000000,18.219166,-96.024445,0.000000,18.186665,-95.998337,0.000000,18.256386,-95.982513,0.000000,18.218609,-95.957230,0.000000,18.250000,-95.944733,0.000000,18.236942,-95.899734,0.000000,18.265831,-95.908066,0.000000,18.322220,-95.811401,0.000000,18.370831,-95.803345,0.000000,18.314442,-95.751404,0.000000,18.368332,-95.760010,0.000000,18.379997,-95.709732,0.000000,18.546665,-95.724731,0.000000,18.600830,-95.696671,0.000000,18.600555,-95.663620,0.000000,18.641388,-95.631958,0.000000,18.698055,-95.638901,0.000000});
			return GeoCoordinate_6_286_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #311, 102 total numbers made up of 34 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_311_point()
		{
			MFVec3d GeoCoordinate_6_311_point = new MFVec3d(new double[] {24.192497,-104.658890,0.000000,24.196941,-104.609177,0.000000,24.128330,-104.583344,0.000000,24.084721,-104.445282,0.000000,24.025276,-104.398895,0.000000,24.029442,-104.329453,0.000000,23.932220,-104.308624,0.000000,23.881386,-104.258896,0.000000,23.791111,-104.290848,0.000000,23.724720,-104.245285,0.000000,23.633331,-104.339737,0.000000,23.217220,-104.474731,0.000000,23.184719,-104.534454,0.000000,23.168888,-104.743347,0.000000,23.112221,-104.796112,0.000000,23.020554,-105.008057,0.000000,22.849720,-105.001114,0.000000,22.821941,-104.921677,0.000000,22.741386,-104.894180,0.000000,22.679996,-104.918625,0.000000,22.584442,-104.881393,0.000000,22.503330,-104.925003,0.000000,22.494720,-104.999176,0.000000,22.434166,-105.040558,0.000000,22.324718,-105.036957,0.000000,22.079998,-104.920837,0.000000,21.969166,-104.947235,0.000000,21.945274,-104.980011,0.000000,21.980274,-105.056122,0.000000,21.937222,-105.085846,0.000000,21.972775,-105.118622,0.000000,21.933609,-105.408066,0.000000,21.841473,-105.464523,0.000000,21.815926,-105.527229,0.000000});
			return GeoCoordinate_6_311_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #331, 180 total numbers made up of 60 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_331_point()
		{
			MFVec3d GeoCoordinate_6_331_point = new MFVec3d(new double[] {18.656666,-92.480835,0.000000,18.493053,-92.410278,0.000000,18.406666,-92.275558,0.000000,18.327221,-92.276947,0.000000,18.224968,-92.217453,0.000000,18.118610,-92.184448,0.000000,18.088486,-92.121872,0.000000,18.002220,-92.140839,0.000000,17.963055,-92.116394,0.000000,17.911940,-91.990211,0.000000,17.912220,-91.989899,0.000000,17.895550,-91.950562,0.000000,17.854719,-91.945557,0.000000,17.887220,-91.912514,0.000000,17.889160,-91.823334,0.000000,17.855551,-91.786667,0.000000,17.773689,-91.772873,0.000000,17.726669,-91.793617,0.000000,17.714161,-91.698624,0.000000,17.714056,-91.698570,0.000000,17.738331,-91.620285,0.000000,17.771664,-91.657501,0.000000,17.781387,-91.620560,0.000000,17.826664,-91.616119,0.000000,17.813610,-91.569168,0.000000,17.746944,-91.551956,0.000000,17.802498,-91.513626,0.000000,17.760830,-91.479446,0.000000,17.764954,-91.424698,0.000000,17.700832,-91.452515,0.000000,17.702499,-91.376114,0.000000,17.642498,-91.402786,0.000000,17.591389,-91.357788,0.000000,17.565277,-91.406403,0.000000,17.583332,-91.511124,0.000000,17.488331,-91.430557,0.000000,17.486111,-91.504456,0.000000,17.469774,-91.507561,0.000000,17.404160,-91.496117,0.000000,17.386940,-91.426392,0.000000,17.326660,-91.388062,0.000000,17.241108,-91.437500,0.000000,17.176388,-91.352783,0.000000,17.178333,-91.277237,0.000000,17.035553,-91.184448,0.000000,17.010277,-91.118347,0.000000,16.902775,-91.062790,0.000000,16.868053,-90.985840,0.000000,16.903053,-90.983337,0.000000,16.899166,-90.955292,0.000000,16.871944,-90.966125,0.000000,16.829720,-90.921112,0.000000,16.804996,-90.803345,0.000000,16.726460,-90.714279,0.000000,16.644274,-90.658142,0.000000,18.088486,-92.121872,0.000000,18.121666,-92.081680,0.000000,18.237778,-92.084732,0.000000,18.355000,-91.901123,0.000000,18.429165,-91.857788,0.000000});
			return GeoCoordinate_6_331_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #341, 255 total numbers made up of 85 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_341_color()
		{
			MFColor Color_6_341_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_341_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #342, 255 total numbers made up of 85 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_342_point()
		{
			MFVec3d GeoCoordinate_6_342_point = new MFVec3d(new double[] {32.439590,-116.885757,0.000000,32.543209,-117.036430,0.000000,31.896618,-116.385307,0.000000,31.968904,-116.444038,0.000000,32.305485,-116.830315,0.000000,32.431988,-116.882271,0.000000,32.439590,-116.885757,0.000000,23.870314,-110.237244,0.000000,24.143749,-110.315926,0.000000,24.093601,-110.377701,0.000000,24.117935,-110.467201,0.000000,24.052151,-110.573074,0.000000,24.093901,-110.642754,0.000000,24.088165,-110.721504,0.000000,24.143246,-110.787010,0.000000,24.161293,-110.918495,0.000000,24.362677,-111.021622,0.000000,24.587080,-111.464470,0.000000,25.249636,-111.774185,0.000000,25.387354,-111.563606,0.000000,25.579559,-111.400673,0.000000,25.673662,-111.243713,0.000000,25.814568,-111.356651,0.000000,25.999163,-111.371185,0.000000,26.063721,-111.367966,0.000000,26.311281,-111.521507,0.000000,26.507710,-111.686951,0.000000,26.538803,-111.755272,0.000000,26.724468,-111.932243,0.000000,26.847898,-111.907677,0.000000,26.917139,-112.026085,0.000000,27.144161,-112.155815,0.000000,27.192501,-112.225853,0.000000,27.295702,-112.282539,0.000000,27.390583,-112.320915,0.000000,27.414722,-112.626450,0.000000,27.319918,-112.801674,0.000000,27.297045,-113.058197,0.000000,27.429310,-113.262093,0.000000,27.658258,-113.385422,0.000000,27.724733,-113.453476,0.000000,27.908989,-113.878326,0.000000,28.058762,-113.879868,0.000000,28.385597,-113.814224,0.000000,28.508675,-113.892174,0.000000,28.678246,-114.001579,0.000000,28.805994,-114.105667,0.000000,28.827322,-114.105751,0.000000,28.929380,-114.156456,0.000000,29.236906,-114.152481,0.000000,29.383621,-114.381020,0.000000,29.721819,-114.676506,0.000000,29.734533,-114.727013,0.000000,29.894936,-114.878860,0.000000,29.965479,-115.167435,0.000000,30.060726,-115.288330,0.000000,30.068340,-115.430153,0.000000,30.135904,-115.406448,0.000000,30.147312,-115.426849,0.000000,30.151155,-115.574112,0.000000,30.306892,-115.639229,0.000000,30.314381,-115.647255,0.000000,30.369352,-115.829399,0.000000,30.388498,-115.861313,0.000000,30.773729,-115.918274,0.000000,30.857912,-115.934517,0.000000,31.098640,-116.119125,0.000000,31.143026,-116.125931,0.000000,31.268017,-116.177338,0.000000,31.392353,-116.319237,0.000000,31.499413,-116.355293,0.000000,31.569332,-116.388100,0.000000,31.691055,-116.416931,0.000000,31.822073,-116.394341,0.000000,31.896618,-116.385307,0.000000,23.870314,-110.237244,0.000000,23.815990,-110.036758,0.000000,23.700369,-109.877739,0.000000,23.691715,-109.698799,0.000000,23.485506,-109.668381,0.000000,23.409185,-109.539650,0.000000,23.316252,-109.490097,0.000000,23.295511,-109.431870,0.000000,23.140821,-109.524490,0.000000,23.070078,-109.673195,0.000000});
			return GeoCoordinate_6_342_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #346, 183 total numbers made up of 61 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_346_color()
		{
			MFColor Color_6_346_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_346_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #347, 183 total numbers made up of 61 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_347_point()
		{
			MFVec3d GeoCoordinate_6_347_point = new MFVec3d(new double[] {32.439590,-116.885757,0.000000,32.470196,-116.731171,0.000000,32.571735,-116.622414,0.000000,32.568512,-116.486961,0.000000,32.473213,-116.132484,0.000000,32.547771,-116.030319,0.000000,32.572636,-116.036514,0.000000,32.542397,-115.996605,0.000000,32.599739,-115.664093,0.000000,32.596684,-115.577354,0.000000,32.616192,-115.441002,0.000000,30.541180,-111.112427,0.000000,30.679808,-110.888161,0.000000,30.784163,-110.853111,0.000000,32.616192,-115.441002,0.000000,32.551559,-115.281265,0.000000,32.519333,-115.001297,0.000000,32.272617,-114.124580,0.000000,32.129677,-113.887253,0.000000,31.887037,-112.859627,0.000000,31.723276,-112.865250,0.000000,31.270943,-112.515839,0.000000,30.969397,-112.363396,0.000000,30.730307,-112.168503,0.000000,30.680529,-112.055031,0.000000,30.711977,-111.829559,0.000000,30.598764,-111.557106,0.000000,30.541180,-111.112427,0.000000,30.784163,-110.853111,0.000000,30.898882,-110.704315,0.000000,30.877583,-110.644997,0.000000,30.997288,-110.561745,0.000000,31.015898,-110.204285,0.000000,31.066158,-110.124832,0.000000,31.159840,-110.077156,0.000000,31.184343,-109.950241,0.000000,31.269310,-109.816849,0.000000,31.268726,-109.719040,0.000000,31.322495,-109.556908,0.000000,31.229496,-109.381332,0.000000,31.126078,-109.354744,0.000000,31.078344,-109.297218,0.000000,30.825306,-109.223557,0.000000,30.861403,-109.150322,0.000000,30.732306,-109.057899,0.000000,30.745899,-109.006844,0.000000,30.788086,-109.010605,0.000000,30.901699,-108.930893,0.000000,30.756287,-108.384811,0.000000,30.870306,-108.273994,0.000000,30.924532,-108.144119,0.000000,31.035378,-108.136757,0.000000,31.171463,-107.892174,0.000000,31.299740,-107.777931,0.000000,31.383419,-107.745422,0.000000,31.382990,-107.627380,0.000000,31.480352,-107.305252,0.000000,31.623533,-106.899857,0.000000,31.671961,-106.856094,0.000000,31.714188,-106.593849,0.000000,31.648981,-106.430351,0.000000});
			return GeoCoordinate_6_347_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #356, 372 total numbers made up of 124 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_356_color()
		{
			MFColor Color_6_356_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_356_color_1()))
				.append(new MFColor(getColor_6_356_color_2()));
			return Color_6_356_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #357, 372 total numbers made up of 124 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_357_point()
		{
			MFVec3d GeoCoordinate_6_357_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_357_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_357_point_2()));
			return GeoCoordinate_6_357_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #372, 162 total numbers made up of 54 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_372_point()
		{
			MFVec3d GeoCoordinate_6_372_point = new MFVec3d(new double[] {24.024342,-104.660835,0.000000,24.032331,-104.650497,0.000000,24.091698,-104.573700,0.000000,24.139606,-104.594421,0.000000,24.225914,-104.472549,0.000000,24.366438,-104.376244,0.000000,24.498625,-104.027138,0.000000,24.586128,-103.924782,0.000000,24.731934,-103.843620,0.000000,24.781229,-103.739624,0.000000,24.856518,-103.700005,0.000000,24.934017,-103.708008,0.000000,25.026827,-103.771454,0.000000,25.104204,-103.766754,0.000000,25.194582,-103.697754,0.000000,25.237925,-103.617470,0.000000,25.479076,-103.686096,0.000000,25.586136,-103.493820,0.000000,25.423786,-100.985268,0.000000,25.576700,-100.902924,0.000000,25.693258,-100.642288,0.000000,25.695953,-100.521721,0.000000,25.645479,-100.424919,0.000000,25.661518,-100.315491,0.000000,23.224892,-106.168228,0.000000,23.329090,-105.986488,0.000000,23.431519,-105.904549,0.000000,23.467356,-105.925484,0.000000,23.532267,-105.849083,0.000000,23.546982,-105.871788,0.000000,23.563587,-105.837318,0.000000,23.632105,-105.842552,0.000000,23.642336,-105.757652,0.000000,23.734167,-105.670197,0.000000,23.750202,-105.520332,0.000000,23.725809,-105.484245,0.000000,23.863384,-105.242661,0.000000,23.881601,-105.025124,0.000000,23.852272,-104.991249,0.000000,23.933325,-104.943947,0.000000,23.937710,-104.852753,0.000000,24.024342,-104.660835,0.000000,25.586136,-103.493820,0.000000,25.767546,-103.327164,0.000000,25.785414,-103.113213,0.000000,25.756607,-102.967339,0.000000,25.628334,-102.874825,0.000000,25.582762,-102.712219,0.000000,25.679468,-102.414024,0.000000,25.647137,-102.007973,0.000000,25.665314,-101.564018,0.000000,25.445992,-101.297379,0.000000,25.457779,-101.044319,0.000000,25.423786,-100.985268,0.000000});
			return GeoCoordinate_6_372_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #376, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_376_color()
		{
			MFColor Color_6_376_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_376_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #377, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_377_point()
		{
			MFVec3d GeoCoordinate_6_377_point = new MFVec3d(new double[] {30.375763,-106.528961,0.000000,29.966570,-106.356911,0.000000,29.863655,-106.387070,0.000000,29.562792,-106.321785,0.000000,29.533701,-106.375275,0.000000,29.435904,-106.419907,0.000000,29.030767,-106.332344,0.000000,28.852625,-106.211212,0.000000,28.785900,-106.205513,0.000000,28.627302,-106.052208,0.000000,28.588751,-105.962372,0.000000,28.517448,-105.934052,0.000000,28.447113,-105.714027,0.000000,28.273399,-105.487144,0.000000,28.245090,-105.364212,0.000000,28.175879,-105.364128,0.000000,28.086439,-105.288208,0.000000,27.980944,-105.290298,0.000000,27.853680,-105.192032,0.000000,27.671978,-105.158600,0.000000,27.616222,-105.108162,0.000000,30.914660,-106.461983,0.000000,30.751783,-106.516068,0.000000,30.375763,-106.528961,0.000000,24.024342,-104.660835,0.000000,23.994865,-104.372620,0.000000,23.899738,-104.338875,0.000000,23.842047,-104.238251,0.000000,23.837915,-104.163452,0.000000,23.751865,-104.043961,0.000000,23.776722,-103.851929,0.000000,23.675238,-103.667809,0.000000,23.663448,-103.448700,0.000000,23.625690,-103.338478,0.000000,23.550045,-103.228378,0.000000,23.533430,-103.129074,0.000000,23.301493,-102.955460,0.000000,27.616222,-105.108162,0.000000,27.433376,-104.942749,0.000000,27.127773,-104.929451,0.000000,20.571350,-100.254082,0.000000,20.597322,-100.385635,0.000000,20.523989,-100.635132,0.000000,20.507996,-101.010437,0.000000,20.588995,-101.228096,0.000000,20.654287,-101.290390,0.000000,20.645681,-101.383125,0.000000,20.571350,-100.254082,0.000000,20.284483,-99.749786,0.000000,20.237417,-99.595963,0.000000,20.250240,-99.511459,0.000000,20.176903,-99.352173,0.000000,20.213205,-99.226784,0.000000,20.645681,-101.383125,0.000000,20.823408,-101.328453,0.000000,20.879549,-101.337814,0.000000,21.118149,-101.688690,0.000000,21.356747,-101.894547,0.000000,21.497101,-102.091034,0.000000,21.515814,-102.217354,0.000000,21.642132,-102.264137,0.000000,22.329859,-102.287529,0.000000,22.516996,-102.376419,0.000000,22.540388,-102.474670,0.000000,22.732203,-102.479347,0.000000,22.860922,-102.606789,0.000000,27.127773,-104.929451,0.000000,26.927877,-105.642357,0.000000,26.880972,-105.600662,0.000000,26.834066,-105.605873,0.000000,26.688135,-105.543335,0.000000,26.448393,-105.491211,0.000000,26.370216,-105.308800,0.000000,26.307674,-105.162872,0.000000,25.541542,-104.573936,0.000000,25.312223,-104.636482,0.000000,25.207987,-104.579147,0.000000,25.009939,-104.490547,0.000000,24.858797,-104.469704,0.000000,24.759773,-104.532242,0.000000,24.676384,-104.636482,0.000000,24.462700,-104.699020,0.000000,24.254229,-104.699020,0.000000,24.103086,-104.688599,0.000000,24.024342,-104.660835,0.000000,31.648981,-106.430351,0.000000,31.510700,-106.472038,0.000000,31.392599,-106.454376,0.000000,31.284790,-106.502052,0.000000,30.914660,-106.461983,0.000000,31.766573,-106.487953,0.000000,31.648981,-106.430351,0.000000,20.645681,-101.383125,0.000000,20.461500,-101.505623,0.000000,23.301493,-102.955460,0.000000,22.860922,-102.606789,0.000000});
			return GeoCoordinate_6_377_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #387, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_387_point()
		{
			MFVec3d GeoCoordinate_6_387_point = new MFVec3d(new double[] {20.661514,-103.401123,0.000000,20.742765,-103.284332,0.000000,20.818914,-103.334175,0.000000,20.837465,-103.262131,0.000000,20.965343,-103.185692,0.000000,21.210663,-103.190208,0.000000,21.460262,-103.098869,0.000000,21.513769,-103.108261,0.000000,21.615784,-103.060249,0.000000,21.616909,-103.001236,0.000000,21.646088,-102.985168,0.000000,21.785721,-102.977707,0.000000,21.883698,-102.896576,0.000000,22.028128,-102.876518,0.000000,22.135408,-102.824547,0.000000,22.340126,-102.890503,0.000000,22.637173,-102.727257,0.000000,22.860922,-102.606789,0.000000,23.367022,-102.247009,0.000000,23.827105,-101.747009,0.000000,23.977531,-101.676712,0.000000,24.022009,-101.589798,0.000000,24.218184,-101.449539,0.000000,24.458008,-101.373405,0.000000,24.586679,-101.357048,0.000000,24.617489,-101.381737,0.000000,24.742405,-101.170006,0.000000,24.855642,-101.076584,0.000000,25.038427,-101.066246,0.000000,25.106113,-101.111847,0.000000,25.271309,-101.090424,0.000000,25.423786,-100.985268,0.000000,20.661514,-103.401123,0.000000,20.424953,-103.551392,0.000000,20.275204,-103.450874,0.000000,19.008768,-103.801155,0.000000,19.244282,-103.732910,0.000000,19.320915,-103.604965,0.000000,19.380632,-103.553040,0.000000,19.455811,-103.487679,0.000000,19.498274,-103.526970,0.000000,19.537647,-103.511230,0.000000,19.530596,-103.454704,0.000000,19.624609,-103.427261,0.000000,19.661642,-103.481712,0.000000,19.802940,-103.481392,0.000000,19.853539,-103.514015,0.000000,19.886969,-103.599808,0.000000,20.106674,-103.434906,0.000000,20.275204,-103.450874,0.000000});
			return GeoCoordinate_6_387_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #391, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_391_color()
		{
			MFColor Color_6_391_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_391_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #392, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_392_point()
		{
			MFVec3d GeoCoordinate_6_392_point = new MFVec3d(new double[] {28.687895,-100.507858,0.000000,28.576075,-100.603363,0.000000,28.375847,-100.851273,0.000000,28.342655,-100.837280,0.000000,28.260691,-101.036057,0.000000,28.157881,-101.111534,0.000000,27.938107,-101.207726,0.000000,27.838095,-101.118759,0.000000,27.651119,-101.186050,0.000000,27.202919,-101.225555,0.000000,26.902363,-101.423370,0.000000,26.790661,-101.422913,0.000000,26.589436,-101.349068,0.000000,26.057337,-101.358406,0.000000,25.925846,-101.218658,0.000000,25.920883,-101.155441,0.000000,25.776947,-101.108986,0.000000,25.608295,-101.101852,0.000000,25.516914,-100.989365,0.000000,25.423786,-100.985268,0.000000,21.155891,-100.578461,0.000000,21.006674,-100.444450,0.000000,20.914978,-100.410767,0.000000,20.821438,-100.456139,0.000000,20.693626,-100.244087,0.000000,20.571350,-100.254082,0.000000,21.646311,-100.729752,0.000000,21.609833,-100.761345,0.000000,21.536938,-100.753700,0.000000,21.378288,-100.687027,0.000000,21.327749,-100.605309,0.000000,21.155891,-100.578461,0.000000,22.150076,-100.958588,0.000000,22.074324,-100.867599,0.000000,21.894302,-100.790955,0.000000,21.752676,-100.684731,0.000000,21.699160,-100.683983,0.000000,21.646311,-100.729752,0.000000,22.150076,-100.958588,0.000000,22.397240,-100.770203,0.000000,25.423786,-100.985268,0.000000,25.430450,-100.799637,0.000000,25.286919,-100.785332,0.000000,25.228416,-100.816521,0.000000,25.000124,-100.515259,0.000000,24.801102,-100.321220,0.000000,24.586952,-100.262642,0.000000,24.499142,-100.289322,0.000000,24.381418,-100.393639,0.000000,24.099627,-100.377472,0.000000,23.652328,-100.644066,0.000000,22.963512,-100.472076,0.000000,22.928789,-100.405396,0.000000,22.691181,-100.242348,0.000000,22.648630,-100.163574,0.000000,22.590441,-100.144630,0.000000,22.397240,-100.770203,0.000000,22.442316,-100.688705,0.000000,22.567307,-100.642822,0.000000,22.625837,-100.528450,0.000000,22.603907,-100.454987,0.000000,22.640717,-100.339783,0.000000,22.565733,-100.263611,0.000000,22.433073,-100.280258,0.000000,22.484570,-100.181580,0.000000,22.590441,-100.144630,0.000000});
			return GeoCoordinate_6_392_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #401, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_401_color()
		{
			MFColor Color_6_401_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_401_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #402, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_402_point()
		{
			MFVec3d GeoCoordinate_6_402_point = new MFVec3d(new double[] {25.182058,-99.825386,0.000000,24.888042,-99.675850,0.000000,24.851357,-99.549240,0.000000,24.598148,-99.530495,0.000000,24.553719,-99.552185,0.000000,24.475384,-99.487030,0.000000,24.353951,-99.503288,0.000000,24.201632,-99.374725,0.000000,24.067932,-99.122108,0.000000,23.865622,-99.099861,0.000000,23.731661,-99.129700,0.000000,20.213205,-99.226784,0.000000,20.248194,-99.193428,0.000000,20.364769,-99.209770,0.000000,20.446262,-99.169304,0.000000,20.483980,-99.216835,0.000000,20.480146,-99.285919,0.000000,20.525040,-99.315994,0.000000,20.574461,-99.342583,0.000000,20.745178,-99.343338,0.000000,20.857513,-99.229851,0.000000,20.999046,-99.206131,0.000000,21.065790,-99.033119,0.000000,21.126606,-99.006805,0.000000,21.132895,-98.965027,0.000000,21.258003,-98.926682,0.000000,21.254196,-98.954224,0.000000,21.368958,-98.995796,0.000000,21.413019,-98.982307,0.000000,21.432686,-98.902275,0.000000,21.517632,-98.999367,0.000000,21.873034,-98.937073,0.000000,21.994200,-99.012428,0.000000,22.056784,-98.974785,0.000000,22.170750,-98.968033,0.000000,22.544601,-99.085342,0.000000,22.618355,-99.015785,0.000000,22.691832,-99.018112,0.000000,22.729034,-98.963905,0.000000,22.806900,-98.953896,0.000000,22.840504,-99.017517,0.000000,22.940926,-99.021027,0.000000,23.116316,-99.116783,0.000000,23.236368,-99.098038,0.000000,23.316828,-99.001144,0.000000,23.511118,-98.970161,0.000000,23.731661,-99.129700,0.000000,27.495365,-99.505257,0.000000,26.973494,-99.764336,0.000000,19.413570,-99.193520,0.000000,19.518841,-99.104202,0.000000,19.542397,-99.215279,0.000000,19.783434,-99.217712,0.000000,19.805984,-99.109367,0.000000,20.064898,-99.221558,0.000000,20.213205,-99.226784,0.000000,26.973494,-99.764336,0.000000,26.798080,-99.854614,0.000000,26.511772,-100.170555,0.000000,26.266239,-100.086716,0.000000,26.003197,-100.118904,0.000000,25.802551,-100.274178,0.000000,25.661518,-100.315491,0.000000,25.296284,-100.043930,0.000000,25.198332,-99.903748,0.000000,25.182058,-99.825386,0.000000});
			return GeoCoordinate_6_402_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #436, 372 total numbers made up of 124 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_436_color()
		{
			MFColor Color_6_436_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_436_color_1()))
				.append(new MFColor(getColor_6_436_color_2()));
			return Color_6_436_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #437, 372 total numbers made up of 124 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_437_point()
		{
			MFVec3d GeoCoordinate_6_437_point = new MFVec3d()/*2.finalize*/
				.append(new MFVec3d(getGeoCoordinate_6_437_point_1()))
				.append(new MFVec3d(getGeoCoordinate_6_437_point_2()));
			return GeoCoordinate_6_437_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #451, 222 total numbers made up of 74 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_451_color()
		{
			MFColor Color_6_451_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_451_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #452, 222 total numbers made up of 74 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_452_point()
		{
			MFVec3d GeoCoordinate_6_452_point = new MFVec3d(new double[] {15.679814,-92.002853,0.000000,15.624648,-91.973312,0.000000,15.609671,-91.868225,0.000000,15.456043,-91.783806,0.000000,15.384430,-91.608521,0.000000,15.338550,-91.586662,0.000000,16.429951,-95.020432,0.000000,16.480515,-94.787132,0.000000,16.558390,-94.613464,0.000000,16.483866,-94.373947,0.000000,16.373005,-94.217224,0.000000,16.318861,-95.227936,0.000000,16.429951,-95.020432,0.000000,18.597588,-98.457626,0.000000,18.231064,-98.192993,0.000000,18.223942,-98.128731,0.000000,18.178593,-98.079948,0.000000,18.206940,-98.055412,0.000000,18.141006,-97.976654,0.000000,17.748631,-97.745461,0.000000,17.651411,-97.475342,0.000000,17.576334,-97.437195,0.000000,17.447424,-97.227951,0.000000,17.334009,-97.169701,0.000000,17.304653,-97.082413,0.000000,17.220715,-97.042435,0.000000,17.285149,-96.954460,0.000000,17.280510,-96.875153,0.000000,17.230774,-96.803749,0.000000,17.077991,-96.728851,0.000000,16.908539,-96.333450,0.000000,16.689621,-96.291710,0.000000,16.565197,-96.360123,0.000000,16.554066,-96.317352,0.000000,16.428566,-96.247955,0.000000,16.519722,-96.186531,0.000000,16.483879,-96.062004,0.000000,16.540174,-96.023277,0.000000,16.499414,-95.908516,0.000000,16.396528,-95.821381,0.000000,16.407925,-95.572365,0.000000,16.443705,-95.494957,0.000000,16.427877,-95.423889,0.000000,16.362221,-95.370941,0.000000,16.318861,-95.227936,0.000000,19.085230,-98.179771,0.000000,19.047203,-98.208977,0.000000,19.012741,-98.326492,0.000000,18.903294,-98.447144,0.000000,18.597588,-98.457626,0.000000,15.679814,-92.002853,0.000000,15.749850,-91.959908,0.000000,15.834765,-91.956581,0.000000,15.876572,-91.987976,0.000000,16.050711,-92.010185,0.000000,16.249224,-92.123886,0.000000,16.500332,-92.308899,0.000000,16.571320,-92.515366,0.000000,16.618788,-92.518715,0.000000,16.742098,-92.633812,0.000000,16.745964,-92.796021,0.000000,16.714258,-92.842064,0.000000,16.760284,-92.954086,0.000000,16.702497,-93.009041,0.000000,16.739128,-93.016678,0.000000,16.748276,-93.150635,0.000000,16.801481,-93.242867,0.000000,16.748333,-93.328880,0.000000,16.776560,-93.420662,0.000000,16.740021,-93.503418,0.000000,16.682997,-93.537361,0.000000,16.683010,-93.719582,0.000000,16.534420,-93.893890,0.000000,16.373005,-94.217224,0.000000});
			return GeoCoordinate_6_452_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #456, 270 total numbers made up of 90 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_456_color()
		{
			MFColor Color_6_456_color = new MFColor(new double[] {0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0,0.0,0.666667,0.0});
			return Color_6_456_color;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #457, 270 total numbers made up of 90 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_457_point()
		{
			MFVec3d GeoCoordinate_6_457_point = new MFVec3d(new double[] {16.429951,-95.020432,0.000000,16.480515,-94.787132,0.000000,16.558390,-94.613464,0.000000,16.483866,-94.373947,0.000000,16.373005,-94.217224,0.000000,21.493214,-104.892281,0.000000,21.383429,-104.900276,0.000000,21.333410,-104.935654,0.000000,21.209827,-104.893776,0.000000,21.147600,-104.960922,0.000000,21.152859,-104.967896,0.000000,20.844645,-105.156799,0.000000,20.679756,-105.010231,0.000000,20.514866,-105.046867,0.000000,20.469063,-105.175117,0.000000,20.075161,-105.138474,0.000000,19.791185,-104.955269,0.000000,19.818666,-104.891144,0.000000,19.672098,-104.799538,0.000000,19.470566,-104.543045,0.000000,19.498047,-104.442276,0.000000,19.397282,-104.350670,0.000000,19.223232,-104.094177,0.000000,19.168268,-103.975090,0.000000,19.049181,-103.846840,0.000000,19.008768,-103.801155,0.000000,18.838490,-103.608665,0.000000,18.783525,-103.498741,0.000000,18.462908,-103.288048,0.000000,18.144608,-102.280098,0.000000,16.373005,-94.217224,0.000000,16.333509,-94.123131,0.000000,16.352427,-94.015182,0.000000,15.887415,-93.528130,0.000000,15.672867,-93.180313,0.000000,15.472094,-93.012817,0.000000,15.476068,-92.953285,0.000000,15.417994,-92.896896,0.000000,15.326547,-92.667076,0.000000,15.173183,-92.546120,0.000000,15.127095,-92.446632,0.000000,18.144608,-102.280098,0.000000,18.133129,-102.243752,0.000000,18.151449,-102.133820,0.000000,18.123968,-101.785721,0.000000,17.812510,-101.446785,0.000000,17.656780,-101.153648,0.000000,17.537693,-101.043716,0.000000,17.482731,-100.952110,0.000000,17.418608,-100.887993,0.000000,17.345324,-100.658974,0.000000,17.381966,-100.512405,0.000000,17.299520,-100.448288,0.000000,17.152952,-100.200951,0.000000,17.107149,-100.100182,0.000000,17.125469,-100.054382,0.000000,16.988062,-99.834526,0.000000,16.973055,-99.788254,0.000000,16.878136,-99.495590,0.000000,16.933100,-99.403984,0.000000,16.841494,-99.321541,0.000000,16.868975,-99.138329,0.000000,16.685764,-98.680305,0.000000,16.332382,-98.042252,0.000000,16.292742,-97.836288,0.000000,16.132320,-97.720634,0.000000,16.062849,-97.315384,0.000000,16.081169,-96.994766,0.000000,15.861317,-96.564217,0.000000,15.879638,-96.381012,0.000000,15.879638,-96.178879,0.000000,15.901526,-96.135475,0.000000,15.933111,-96.072845,0.000000,15.903186,-95.806862,0.000000,15.977557,-95.696358,0.000000,15.975620,-95.630959,0.000000,16.112514,-95.371048,0.000000,16.179623,-95.250000,0.000000,16.199068,-95.214188,0.000000,16.318861,-95.227936,0.000000,16.429951,-95.020432,0.000000,15.127095,-92.446632,0.000000,14.922773,-92.366173,0.000000,14.887837,-92.236244,0.000000,14.968704,-92.149193,0.000000,14.911367,-92.090904,0.000000,14.708068,-92.097382,0.000000,14.694201,-91.797836,0.000000,14.571367,-91.771904,0.000000,14.573575,-91.643166,0.000000});
			return GeoCoordinate_6_457_point;
		}
		/** Large attribute array: GeoCoordinate point field, scene-graph level=6, element #483, 159 total numbers made up of 53 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3d getGeoCoordinate_6_483_point()
		{
			MFVec3d GeoCoordinate_6_483_point = new MFVec3d(new double[] {18.261387,-101.900284,0.000000,18.317219,-101.870293,0.000000,18.407776,-101.896118,0.000000,18.475277,-101.994743,0.000000,18.439999,-101.888634,0.000000,18.494442,-101.888344,0.000000,18.514442,-101.918060,0.000000,18.619999,-101.877228,0.000000,18.649998,-101.911392,0.000000,18.675278,-101.876106,0.000000,18.679996,-101.937500,0.000000,18.715275,-101.926392,0.000000,18.731667,-102.000290,0.000000,18.783886,-102.016403,0.000000,18.853886,-102.131958,0.000000,18.848610,-102.072510,0.000000,18.892220,-102.080292,0.000000,18.913330,-102.052231,0.000000,18.818607,-102.024727,0.000000,18.901386,-102.001106,0.000000,18.886665,-101.973068,0.000000,18.912498,-101.950287,0.000000,18.798054,-102.000839,0.000000,18.761665,-101.966667,0.000000,18.794167,-101.935013,0.000000,18.758053,-101.933617,0.000000,18.752499,-101.870293,0.000000,18.730831,-101.892502,0.000000,18.692497,-101.871117,0.000000,18.742222,-101.809448,0.000000,18.628330,-101.852783,0.000000,18.670555,-101.705566,0.000000,18.618332,-101.683060,0.000000,18.617496,-101.651123,0.000000,18.676388,-101.621948,0.000000,18.594166,-101.603348,0.000000,18.599163,-101.561684,0.000000,18.534721,-101.559174,0.000000,18.498608,-101.513344,0.000000,18.533607,-101.295563,0.000000,18.462219,-101.347229,0.000000,18.466110,-101.436111,0.000000,18.427219,-101.427231,0.000000,18.515831,-101.587784,0.000000,18.592220,-101.634171,0.000000,18.532219,-101.725853,0.000000,18.576942,-101.769180,0.000000,18.547775,-101.847778,0.000000,18.491665,-101.870010,0.000000,18.295830,-101.851120,0.000000,18.289444,-101.787231,0.000000,18.239166,-101.836403,0.000000,18.261387,-101.900284,0.000000});
			return GeoCoordinate_6_483_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Mexico model
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
        X3D thisExampleX3dModel = new Mexico().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Mexico\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Mexico\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
