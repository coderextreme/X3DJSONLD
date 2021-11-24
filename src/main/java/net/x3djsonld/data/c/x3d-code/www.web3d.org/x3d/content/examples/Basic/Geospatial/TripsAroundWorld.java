package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This GeoVRML scene has a model of the earth which you can drag to rotate. Dotted on the surface of the planet are a number of pointers to places that I have travelled to recently, many with hyperlinks into my on-line photo album so you can see pictures of the places by just clicking on the red pointers. The GeoVRML for the pointers was generated automatically by the text2geovrml utility that is packaged with the tsmApi library. </p>
 <p> Related links: <a href="../../../Geospatial/TripsAroundWorld.java">TripsAroundWorld.java</a> source, <a href="../../../Geospatial/TripsAroundWorldIndex.html" target="_top">TripsAroundWorld catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/TripsAroundWorld.x3d">TripsAroundWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This GeoVRML scene has a model of the earth which you can drag to rotate. Dotted on the surface of the planet are a number of pointers to places that I have travelled to recently, many with hyperlinks into my on-line photo album so you can see pictures of the places by just clicking on the red pointers. The GeoVRML for the pointers was generated automatically by the text2geovrml utility that is packaged with the tsmApi library. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Reddy, SRI </td>
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
			<td> <a href="../../../Geospatial/TripsAroundWorld.png">TripsAroundWorld.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/examples" target="_blank">http://www.geovrml.org/examples</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D geospatial example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsAroundWorld.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsAroundWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author Martin Reddy, SRI
 */

public class TripsAroundWorld
{
	/** Default constructor to create this object. */
	public TripsAroundWorld ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TripsAroundWorld.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This GeoVRML scene has a model of the earth which you can drag to rotate. Dotted on the surface of the planet are a number of pointers to places that I have travelled to recently, many with hyperlinks into my on-line photo album so you can see pictures of the places by just clicking on the red pointers. The GeoVRML for the pointers was generated automatically by the text2geovrml utility that is packaged with the tsmApi library."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Reddy, SRI"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("TripsAroundWorld.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsAroundWorld.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TripsAroundWorld.x3d"))
    .addChild(new Group()
      .addChild(new GeoViewpoint().setDescription("Initial GeoViewpoint").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.0,-70.0,8000000.0))
      .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,1.0})).setSkyAngle(new double[] {1.57}).setSkyColor(new MFColor(new double[] {0.0,1.0,1.0,0.0,0.0,0.18})))
      .addChild(new GeoLocation().setGeoCoords(25.0,-63.5,4000000.0)
        .addChild(new Transform().setTranslation(-1000000.0,0.0,-600000.0)
          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
            .addChild(new Anchor().setDescription("Trip photographs").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"http://www.ai.sri.com/~reddy/photos"})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                .setGeometry(new Text().setString(new String[] {"Martin's trips","http://www.ai.sri.com/~reddy/photos"})
                  .setFontStyle(new FontStyle().setFamily(new String[] {"SANSERIF"}).setSize(100000.0))))))))
      .addChild(new SphereSensor("GeoSphere").setDescription("Click and drag to rotate"))
      .addChild(new Transform("GeoXform")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.75,0.75,0.75))
            .setTexture(new ImageTexture("TEX").setUrl(new String[] {"images/earthTrips.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earthTrips.gif"})))
          .setGeometry(new GeoElevationGrid("GEOEG").setGeoGridOrigin(-90.0,-180.0,0.0).setSolid(false).setXDimension(84).setXSpacing(4.34).setYScale(25.0).setZDimension(42).setZSpacing(4.34).setHeight(getGEOEG_6_32_height())))
        .addChild(new Inline().setUrl(new String[] {"TripsModel.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d","TripsModel.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.wrl"}))))
    .addChild(new ROUTE().setFromNode("GeoSphere").setFromField("rotation_changed").setToNode("GeoXform").setToField("set_rotation")));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getGEOEG_6_32_height_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2632.0,2777.0,2826.0,1692.0,833.0,858.0,1097.0,1115.0,1255.0,1812.0,1168.0,3404.0,2970.0,2584.0,2389.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_2()
		{
			double[] value = {2397.0,2504.0,2550.0,2040.0,1980.0,1913.0,1563.0,1636.0,1389.0,1332.0,1419.0,1562.0,1748.0,1767.0,1788.0,1799.0,1854.0,1923.0,2042.0,2126.0,2169.0,2308.0,2405.0,2484.0,2531.0,2576.0,2604.0,2634.0,2666.0,2697.0,2710.0,2727.0,2770.0,2858.0,2968.0,3093.0,3160.0,3202.0,3242.0,3278.0,3296.0,3305.0,3312.0,3309.0,3300.0,3291.0,3274.0,3247.0,3218.0,3186.0,3152.0,3114.0,3098.0,3085.0,3051.0,3017.0,2996.0,2942.0,2893.0,2854.0,2817.0,2807.0,2772.0,2681.0,2543.0,2497.0,2401.0,2567.0,0.0,0.0,0.0,0.0,0.0,0.0,67.0,550.0,435.0,358.0,497.0,677.0,838.0,997.0,1189.0,1437.0,1706.0,1996.0,2092.0,2208.0,2070.0,1777.0,1377.0,942.0,403.0,259.0,315.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_3()
		{
			double[] value = {0.0,456.0,778.0,839.0,1069.0,1288.0,1609.0,1800.0,1939.0,2012.0,2114.0,2292.0,2463.0,2524.0,2611.0,2769.0,2968.0,3075.0,3239.0,3411.0,3524.0,3626.0,3700.0,3744.0,3796.0,3891.0,3963.0,4002.0,4031.0,3983.0,3869.0,3755.0,3667.0,3598.0,3446.0,3358.0,3236.0,3141.0,3034.0,2914.0,2709.0,2637.0,2524.0,2371.0,2216.0,2044.0,1652.0,1981.0,225.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,322.0,0.0,37.0,1228.0,1681.0,2041.0,2173.0,2024.0,1885.0,1524.0,1282.0,1221.0,1282.0,1372.0,1435.0,1448.0,1019.0,535.0,717.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,598.0,1404.0,1551.0,1795.0,1945.0,2227.0,2352.0,2553.0,2865.0,2959.0,3173.0,3298.0,3383.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_4()
		{
			double[] value = {3538.0,3618.0,3718.0,3793.0,3700.0,3562.0,3453.0,3254.0,3007.0,2883.0,2810.0,2857.0,2990.0,3144.0,3427.0,3615.0,3714.0,3697.0,3580.0,3493.0,3377.0,3263.0,3180.0,3101.0,3020.0,2864.0,2706.0,2612.0,2534.0,2504.0,2417.0,2299.0,1341.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,297.0,0.0,0.0,5.0,0.0,0.0,0.0,0.0,0.0,1443.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,39.0,1220.0,2018.0,1763.0,2713.0,3086.0,3016.0,2961.0,2668.0,3135.0,2431.0,2599.0,2898.0,2976.0,2987.0,3121.0,2927.0,2529.0,1546.0,107.0,1395.0,2135.0,2760.0,3163.0,3367.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_5()
		{
			double[] value = {3449.0,3383.0,3249.0,2992.0,2899.0,2957.0,3022.0,3096.0,3190.0,3046.0,2822.0,2622.0,2375.0,2334.0,2309.0,2300.0,1847.0,2476.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0,1003.0,1508.0,1734.0,2013.0,2027.0,1685.0,1091.0,0.0,0.0,1257.0,1723.0,1848.0,2153.0,2267.0,2164.0,2236.0,2003.0,1686.0,1641.0,2005.0,2047.0,2054.0,2341.0,2022.0,1226.0,626.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_6()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1544.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_7()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_8()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,295.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_9()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1225.0,930.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_10()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,847.0,9.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_11()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,47.0,555.0,152.0,25.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_12()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1520.0,236.0,60.0,19.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,34.0,0.0,0.0,0.0,151.0,83.0,69.0,343.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_13()
		{
			double[] value = {0.0,0.0,2080.0,230.0,41.0,152.0,128.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,929.0,1261.0,1427.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,489.0,440.0,234.0,239.0,173.0,6.0,90.0,156.0,570.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,3490.0,939.0,104.0,147.0,677.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_14()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,1331.0,959.0,1146.0,1572.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,43.0,555.0,486.0,616.0,700.0,168.0,72.0,273.0,504.0,104.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2855.0,2083.0,142.0,392.0,317.0,589.0,792.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1320.0,1280.0,969.0,655.0,147.0,0.0,0.0,723.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_15()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,253.0,308.0,495.0,617.0,339.0,298.0,276.0,300.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,4016.0,1245.0,298.0,121.0,800.0,921.0,773.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,460.0,1109.0,1104.0,919.0,850.0,816.0,7.0,0.0,299.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,133.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_16()
		{
			double[] value = {641.0,198.0,235.0,0.0,380.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,3058.0,467.0,139.0,476.0,357.0,359.0,416.0,425.0,187.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1580.0,1303.0,1125.0,1275.0,1197.0,609.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,167.0,28.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_17()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,4575.0,219.0,203.0,97.0,97.0,200.0,305.0,316.0,560.0,353.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1120.0,934.0,1129.0,967.0,1344.0,461.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_18()
		{
			double[] value = {0.0,0.0,0.0,0.0,320.0,109.0,87.0,72.0,46.0,91.0,192.0,228.0,60.0,220.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,48.0,555.0,609.0,588.0,1488.0,1229.0,771.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,146.0,0.0,0.0,0.0,3312.0,34.0,0.0,304.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1988.0,153.0,92.0,57.0,100.0,302.0,195.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_19()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,520.0,314.0,409.0,457.0,2134.0,1133.0,1487.0,13.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,105.0,0.0,318.0,614.0,0.0,0.0,437.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,266.0,91.0,1005.0,174.0,192.0,85.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,715.0,487.0,456.0,605.0,707.0,847.0,716.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_20()
		{
			double[] value = {243.0,177.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1539.0,1234.0,0.0,0.0,91.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,51.0,1823.0,73.0,143.0,37.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,583.0,304.0,96.0,305.0,227.0,627.0,549.0,464.0,893.0,393.0,323.0,1085.0,933.0,725.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_21()
		{
			double[] value = {0.0,0.0,0.0,148.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,64.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,114.0,301.0,309.0,304.0,212.0,601.0,309.0,293.0,449.0,837.0,590.0,439.0,2082.0,627.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,880.0,0.0,0.0,0.0,0.0,0.0,0.0,92.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_22()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,116.0,553.0,164.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,68.0,183.0,327.0,337.0,356.0,455.0,436.0,256.0,414.0,652.0,460.0,373.0,499.0,0.0,948.0,939.0,0.0,0.0,0.0,0.0,0.0,579.0,31.0,0.0,0.0,0.0,0.0,860.0,288.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_23()
		{
			double[] value = {0.0,0.0,1874.0,2200.0,0.0,0.0,0.0,0.0,50.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,145.0,282.0,206.0,363.0,608.0,571.0,559.0,1135.0,573.0,659.0,354.0,329.0,0.0,1393.0,652.0,208.0,62.0,0.0,0.0,0.0,0.0,293.0,321.0,157.0,0.0,66.0,1483.0,1336.0,22.0,7.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,47.0,191.0,1562.0,153.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_24()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,202.0,327.0,304.0,317.0,473.0,1249.0,820.0,608.0,325.0,304.0,216.0,340.0,497.0,847.0,840.0,88.0,0.0,0.0,0.0,240.0,44.0,253.0,136.0,66.0,26.0,432.0,166.0,1881.0,496.0,156.0,142.0,506.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,202.0,1907.0,1030.0,298.0,1.0,1.0,0.0,46.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1241.0,597.0,400.0,328.0,385.0,644.0,558.0,41.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_25()
		{
			double[] value = {6.0,208.0,673.0,803.0,582.0,277.0,0.0,2354.0,468.0,1176.0,343.0,109.0,215.0,878.0,4548.0,4629.0,5201.0,4052.0,4100.0,373.0,529.0,182.0,49.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,853.0,628.0,2316.0,1250.0,362.0,102.0,39.0,176.0,195.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1343.0,1084.0,693.0,23.0,0.0,0.0,0.0,0.0,0.0,0.0,796.0,366.0,1344.0,1763.0,872.0,1866.0,2290.0,3269.0,909.0,4633.0,4397.0,4795.0,5100.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_26()
		{
			double[] value = {4767.0,4470.0,3575.0,1189.0,717.0,45.0,14.0,0.0,0.0,0.0,650.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,943.0,1481.0,2986.0,3002.0,1219.0,612.0,243.0,254.0,139.0,436.0,91.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,400.0,38.0,0.0,0.0,0.0,0.0,0.0,0.0,387.0,1053.0,1569.0,581.0,1510.0,-28.0,59.0,127.0,190.0,578.0,2985.0,2929.0,1214.0,1252.0,3839.0,2668.0,4832.0,2986.0,1262.0,1107.0,69.0,2.0,0.0,119.0,0.0,0.0,300.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_27()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2092.0,1768.0,1648.0,2027.0,1313.0,667.0,366.0,180.0,206.0,175.0,365.0,270.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,770.0,568.0,0.0,0.0,235.0,0.0,362.0,173.0,0.0,0.0,0.0,13.0,3422.0,-28.0,164.0,52.0,160.0,230.0,2431.0,2131.0,5436.0,2864.0,1453.0,450.0,1577.0,972.0,1081.0,1160.0,1402.0,795.0,54.0,581.0,0.0,0.0,300.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_28()
		{
			double[] value = {0.0,0.0,426.0,1008.0,1304.0,913.0,854.0,550.0,427.0,287.0,276.0,321.0,365.0,380.0,365.0,29.0,374.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,100.0,255.0,1977.0,2462.0,165.0,88.0,345.0,174.0,31.0,0.0,22.0,1.0,-28.0,-8.0,132.0,95.0,230.0,501.0,325.0,405.0,1907.0,798.0,2072.0,1822.0,2448.0,1530.0,1256.0,1048.0,979.0,181.0,171.0,136.0,340.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1515.0,922.0,1163.0,714.0,711.0,578.0,268.0,395.0,381.0,203.0,79.0,232.0,421.0,540.0,609.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_29()
		{
			double[] value = {153.0,81.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,16.0,21.0,232.0,310.0,432.0,227.0,225.0,159.0,188.0,146.0,128.0,44.0,27.0,106.0,225.0,220.0,321.0,415.0,346.0,342.0,1986.0,1928.0,1537.0,1746.0,1464.0,722.0,1139.0,819.0,767.0,640.0,130.0,728.0,588.0,680.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,103.0,0.0,0.0,0.0,0.0,0.0,0.0,243.0,623.0,1219.0,975.0,754.0,618.0,476.0,366.0,252.0,175.0,126.0,65.0,0.0,152.0,426.0,476.0,512.0,79.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_30()
		{
			double[] value = {0.0,42.0,0.0,0.0,141.0,129.0,206.0,141.0,132.0,134.0,146.0,136.0,530.0,179.0,130.0,112.0,108.0,147.0,201.0,955.0,727.0,684.0,565.0,619.0,973.0,1419.0,1076.0,1122.0,460.0,909.0,0.0,0.0,0.0,0.0,0.0,407.0,746.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,129.0,243.0,0.0,0.0,0.0,1110.0,1297.0,1872.0,596.0,448.0,764.0,264.0,210.0,414.0,305.0,0.0,0.0,0.0,0.0,9.0,158.0,0.0,79.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,885.0,146.0,24.0,0.0,56.0,98.0,71.0,184.0,121.0,190.0,178.0,201.0,490.0,72.0,46.0,89.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_31()
		{
			double[] value = {92.0,33.0,125.0,118.0,477.0,368.0,351.0,655.0,487.0,1309.0,441.0,564.0,497.0,208.0,438.0,693.0,0.0,601.0,175.0,0.0,668.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,61.0,879.0,1219.0,706.0,678.0,560.0,1273.0,1896.0,319.0,390.0,283.0,464.0,361.0,320.0,158.0,134.0,0.0,0.0,0.0,0.0,0.0,198.0,318.0,0.0,0.0,0.0,2120.0,2563.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,600.0,257.0,0.0,143.0,96.0,157.0,92.0,11.0,242.0,197.0,139.0,784.0,143.0,23.0,104.0,88.0,68.0,94.0,273.0,498.0,345.0,451.0,339.0,307.0,347.0,117.0,155.0,108.0,233.0,1126.0,1577.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_32()
		{
			double[] value = {1707.0,1185.0,471.0,1125.0,576.0,1009.0,135.0,97.0,546.0,0.0,0.0,0.0,164.0,483.0,1268.0,1300.0,856.0,490.0,887.0,218.0,158.0,257.0,548.0,173.0,0.0,121.0,24.0,0.0,75.0,189.0,122.0,0.0,0.0,0.0,365.0,0.0,0.0,0.0,21.0,1168.0,2546.0,2897.0,2119.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,517.0,432.0,184.0,280.0,159.0,262.0,0.0,50.0,41.0,40.0,151.0,148.0,116.0,29.0,25.0,54.0,117.0,442.0,657.0,911.0,206.0,321.0,400.0,362.0,217.0,52.0,251.0,432.0,156.0,316.0,56.0,286.0,38.0,80.0,36.0,203.0,298.0,404.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_33()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,151.0,175.0,198.0,275.0,81.0,0.0,101.0,313.0,0.0,0.0,152.0,0.0,0.0,0.0,0.0,0.0,0.0,1857.0,2357.0,2752.0,3054.0,3004.0,2215.0,1577.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,311.0,0.0,0.0,0.0,28.0,0.0,5.0,52.0,18.0,13.0,51.0,71.0,155.0,134.0,115.0,49.0,62.0,214.0,0.0,0.0,15.0,13.0,2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,77.0,0.0,0.0,0.0,94.0,19.0,100.0,0.0,310.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_34()
		{
			double[] value = {0.0,0.0,278.0,640.0,568.0,1033.0,1747.0,2306.0,2570.0,2481.0,2393.0,2257.0,2345.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,272.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,11.0,276.0,184.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,181.0,519.0,600.0,1844.0,971.0,609.0,378.0,1194.0,1228.0,1152.0,1378.0,1783.0,1183.0,913.0,339.0,967.0,745.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_35()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,276.0,0.0,0.0,41.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,36.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] getGEOEG_6_32_height_36()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}

		/** Large attribute array: GeoElevationGrid DEF='GEOEG' height field, scene-graph level=6, element #32, 3528 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGEOEG_6_32_height()
		{
			MFDouble GEOEG_6_32_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGEOEG_6_32_height_1()))
				.append(new MFDouble(getGEOEG_6_32_height_2()))
				.append(new MFDouble(getGEOEG_6_32_height_3()))
				.append(new MFDouble(getGEOEG_6_32_height_4()))
				.append(new MFDouble(getGEOEG_6_32_height_5()))
				.append(new MFDouble(getGEOEG_6_32_height_6()))
				.append(new MFDouble(getGEOEG_6_32_height_7()))
				.append(new MFDouble(getGEOEG_6_32_height_8()))
				.append(new MFDouble(getGEOEG_6_32_height_9()))
				.append(new MFDouble(getGEOEG_6_32_height_10()))
				.append(new MFDouble(getGEOEG_6_32_height_11()))
				.append(new MFDouble(getGEOEG_6_32_height_12()))
				.append(new MFDouble(getGEOEG_6_32_height_13()))
				.append(new MFDouble(getGEOEG_6_32_height_14()))
				.append(new MFDouble(getGEOEG_6_32_height_15()))
				.append(new MFDouble(getGEOEG_6_32_height_16()))
				.append(new MFDouble(getGEOEG_6_32_height_17()))
				.append(new MFDouble(getGEOEG_6_32_height_18()))
				.append(new MFDouble(getGEOEG_6_32_height_19()))
				.append(new MFDouble(getGEOEG_6_32_height_20()))
				.append(new MFDouble(getGEOEG_6_32_height_21()))
				.append(new MFDouble(getGEOEG_6_32_height_22()))
				.append(new MFDouble(getGEOEG_6_32_height_23()))
				.append(new MFDouble(getGEOEG_6_32_height_24()))
				.append(new MFDouble(getGEOEG_6_32_height_25()))
				.append(new MFDouble(getGEOEG_6_32_height_26()))
				.append(new MFDouble(getGEOEG_6_32_height_27()))
				.append(new MFDouble(getGEOEG_6_32_height_28()))
				.append(new MFDouble(getGEOEG_6_32_height_29()))
				.append(new MFDouble(getGEOEG_6_32_height_30()))
				.append(new MFDouble(getGEOEG_6_32_height_31()))
				.append(new MFDouble(getGEOEG_6_32_height_32()))
				.append(new MFDouble(getGEOEG_6_32_height_33()))
				.append(new MFDouble(getGEOEG_6_32_height_34()))
				.append(new MFDouble(getGEOEG_6_32_height_35()))
				.append(new MFDouble(getGEOEG_6_32_height_36()));
			return GEOEG_6_32_height;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TripsAroundWorld model
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
        X3D thisExampleX3dModel = new TripsAroundWorld().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TripsAroundWorld\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TripsAroundWorld\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
