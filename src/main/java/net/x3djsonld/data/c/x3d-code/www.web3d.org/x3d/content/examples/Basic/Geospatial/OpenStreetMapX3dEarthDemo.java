package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene OpenStreetMapX3dEarthDemo. </p>
 <p> Related links: <a href="../../../Geospatial/OpenStreetMapX3dEarthDemo.java">OpenStreetMapX3dEarthDemo.java</a> source, <a href="../../../Geospatial/OpenStreetMapX3dEarthDemoIndex.html" target="_top">OpenStreetMapX3dEarthDemo catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/OpenStreetMapX3dEarthDemo.x3d">OpenStreetMapX3dEarthDemo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Byounghyun Yoo </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://x3d-earth.nps.edu" target="_blank">http://x3d-earth.nps.edu</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d-earth" target="_blank">https://www.web3d.org/x3d-earth</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php" target="_blank">http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D-Earth tile </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/OpenStreetMapX3dEarthDemo.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/OpenStreetMapX3dEarthDemo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> OpenStreetMapToX3D.php, <a href="https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
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

	* @author Byounghyun Yoo
 */

public class OpenStreetMapX3dEarthDemo
{
	/** Default constructor to create this object. */
	public OpenStreetMapX3dEarthDemo ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("OpenStreetMapX3dEarthDemo.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Byounghyun Yoo"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://x3d-earth.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d-earth"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D-Earth tile"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/OpenStreetMapX3dEarthDemo.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("OpenStreetMapToX3D.php, https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("OpenStreetMapX3dEarthDemo.x3d"))
    .addChild(new Group()
      .addComments(" 28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level 28.225 0.7 Algeria, Africa 13 level ")
      .addChild(new Inline().setUrl(new String[] {"/osmb0m","https://www.web3d.org/x3d/content/examples/Basic/Geospatial//osmb0m"}))
      .addChild(new GeoViewpoint().setDescription("Default Viewpoint").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin("ORIGIN").setGeoCoords(0.0,0.0,-6378137.0).setGeoSystem(new String[] {"GD"})))
      .addChild(new GeoViewpoint("ZOOM").setDescription("Zoom and Spin").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.500152,-0.126236,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM1").setDescription("Orange County Convention Center, Orlando, FL").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM2").setDescription("Kabul, Afghanistan").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.53258110649095,69.13782119750976,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM3").setDescription("Naval Postgraduate School, Monterey, CA").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM4").setDescription("San Francisco Museum of Modern Art, San Francisco, CA").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM5").setDescription("Narragansett Bay, Newport, RI").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM6").setDescription("King's Cross, London, United Kingdom").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM7").setDescription("Scollay Square, Boston, MA").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM8").setDescription("San Diego Convention Center, San Diego, CA").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM9").setDescription("International Plaza Resort and Spa, Orlando, FL").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM10").setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint("ZOOM11").setDescription("Port of Singapore, Singapore").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,500000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("0E 0N").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("90E 0N").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,89.9,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("90W 0N").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,-89.9,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("180E 0N").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,180.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("North Pole").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(90.0,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("South Pole").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-89.9,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Orange County Convention Center, Orlando, FL: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.424806942669583,-81.46898746490478,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Kabul, Afghanistan: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.53258110649095,69.13782119750976,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Kabul, Afghanistan: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.53258110649095,69.13782119750976,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Kabul, Afghanistan: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.53258110649095,69.13782119750976,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Kabul, Afghanistan: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.53258110649095,69.13782119750976,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Naval Postgraduate School, Monterey, CA: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.596454966540136,-121.87352389097214,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78588957889747,-122.40087300539018,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Narragansett Bay, Newport, RI: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.48692107976417,-71.32715016603471,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("King's Cross, London, United Kingdom: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.5305712322625,-0.12352377176285152,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Scollay Square, Boston, MA: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(42.36027219744271,-71.05916529893875,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("San Diego Convention Center, San Diego, CA: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.70688495899665,-117.16055274009707,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("International Plaza Resort and Spa, Orlando, FL: 200m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.41747302782284,-81.46303564310074,200.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 300m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(-7.137685657416106,-34.845199584960945,300.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 10000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 1000Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,1000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 100Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,100000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 10Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,10000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 1Km").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,1000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("Port of Singapore, Singapore: 500m").setFieldOfView(1.05).setGeoSystem(new String[] {"GD"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(1.26299,103.837398,500.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new TimeSensor("TIMER").setCycleInterval(800).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,28.424806942669583,-81.46898746490478,5000000.0,34.53258110649095,69.13782119750976,5000000.0,36.596454966540136,-121.87352389097214,5000000.0,37.78588957889747,-122.40087300539018,5000000.0,41.48692107976417,-71.32715016603471,5000000.0,51.5305712322625,-0.12352377176285152,5000000.0,0.0,-187.0,5000000.0,0.0,0.0,5000000.0,0.0,180.0,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM").setFromField("isBound").setToNode("TIMER").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("GeoPositionINTERP").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP").setFromField("geovalue_changed").setToNode("ZOOM").setToField("position"))
      .addComments(" 28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL ")
      .addChild(new TimeSensor("TIMER1").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP1").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,28.424806942669583,-81.46898746490478,1000000.0,28.424806942669583,-81.46898746490478,100000.0,28.424806942669583,-81.46898746490478,10000.0,28.424806942669583,-81.46898746490478,1000.0,28.424806942669583,-81.46898746490478,200.0,28.424806942669583,-81.46898746490478,1000.0,28.424806942669583,-81.46898746490478,10000.0,28.424806942669583,-81.46898746490478,100000.0,28.424806942669583,-81.46898746490478,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM1").setFromField("isBound").setToNode("TIMER1").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER1").setFromField("fraction_changed").setToNode("GeoPositionINTERP1").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP1").setFromField("geovalue_changed").setToNode("ZOOM1").setToField("position"))
      .addComments(" 34.53258110649095 69.13782119750976 Kabul, Afghanistan ")
      .addChild(new TimeSensor("TIMER2").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP2").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,34.53258110649095,69.13782119750976,1000000.0,34.53258110649095,69.13782119750976,100000.0,34.53258110649095,69.13782119750976,10000.0,34.53258110649095,69.13782119750976,100000.0,34.53258110649095,69.13782119750976,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM2").setFromField("isBound").setToNode("TIMER2").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER2").setFromField("fraction_changed").setToNode("GeoPositionINTERP2").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP2").setFromField("geovalue_changed").setToNode("ZOOM2").setToField("position"))
      .addComments(" 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA ")
      .addChild(new TimeSensor("TIMER3").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP3").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,36.596454966540136,-121.87352389097214,1000000.0,36.596454966540136,-121.87352389097214,100000.0,36.596454966540136,-121.87352389097214,10000.0,36.596454966540136,-121.87352389097214,1000.0,36.596454966540136,-121.87352389097214,200.0,36.596454966540136,-121.87352389097214,1000.0,36.596454966540136,-121.87352389097214,10000.0,36.596454966540136,-121.87352389097214,100000.0,36.596454966540136,-121.87352389097214,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM3").setFromField("isBound").setToNode("TIMER3").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER3").setFromField("fraction_changed").setToNode("GeoPositionINTERP3").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP3").setFromField("geovalue_changed").setToNode("ZOOM3").setToField("position"))
      .addComments(" 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA ")
      .addChild(new TimeSensor("TIMER4").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP4").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,37.78588957889747,-122.40087300539018,1000000.0,37.78588957889747,-122.40087300539018,100000.0,37.78588957889747,-122.40087300539018,10000.0,37.78588957889747,-122.40087300539018,1000.0,37.78588957889747,-122.40087300539018,200.0,37.78588957889747,-122.40087300539018,1000.0,37.78588957889747,-122.40087300539018,10000.0,37.78588957889747,-122.40087300539018,100000.0,37.78588957889747,-122.40087300539018,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM4").setFromField("isBound").setToNode("TIMER4").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER4").setFromField("fraction_changed").setToNode("GeoPositionINTERP4").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP4").setFromField("geovalue_changed").setToNode("ZOOM4").setToField("position"))
      .addComments(" 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI ")
      .addChild(new TimeSensor("TIMER5").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP5").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,41.48692107976417,-71.32715016603471,1000000.0,41.48692107976417,-71.32715016603471,100000.0,41.48692107976417,-71.32715016603471,10000.0,41.48692107976417,-71.32715016603471,1000.0,41.48692107976417,-71.32715016603471,200.0,41.48692107976417,-71.32715016603471,1000.0,41.48692107976417,-71.32715016603471,10000.0,41.48692107976417,-71.32715016603471,100000.0,41.48692107976417,-71.32715016603471,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM5").setFromField("isBound").setToNode("TIMER5").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER5").setFromField("fraction_changed").setToNode("GeoPositionINTERP5").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP5").setFromField("geovalue_changed").setToNode("ZOOM5").setToField("position"))
      .addComments(" 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom ")
      .addChild(new TimeSensor("TIMER6").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP6").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,51.5305712322625,-0.12352377176285152,1000000.0,51.5305712322625,-0.12352377176285152,100000.0,51.5305712322625,-0.12352377176285152,10000.0,51.5305712322625,-0.12352377176285152,1000.0,51.5305712322625,-0.12352377176285152,200.0,51.5305712322625,-0.12352377176285152,1000.0,51.5305712322625,-0.12352377176285152,10000.0,51.5305712322625,-0.12352377176285152,100000.0,51.5305712322625,-0.12352377176285152,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM6").setFromField("isBound").setToNode("TIMER6").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER6").setFromField("fraction_changed").setToNode("GeoPositionINTERP6").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP6").setFromField("geovalue_changed").setToNode("ZOOM6").setToField("position"))
      .addComments(" 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA ")
      .addChild(new TimeSensor("TIMER7").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP7").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,42.36027219744271,-71.05916529893875,1000000.0,42.36027219744271,-71.05916529893875,100000.0,42.36027219744271,-71.05916529893875,10000.0,42.36027219744271,-71.05916529893875,1000.0,42.36027219744271,-71.05916529893875,200.0,42.36027219744271,-71.05916529893875,1000.0,42.36027219744271,-71.05916529893875,10000.0,42.36027219744271,-71.05916529893875,100000.0,42.36027219744271,-71.05916529893875,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM7").setFromField("isBound").setToNode("TIMER7").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER7").setFromField("fraction_changed").setToNode("GeoPositionINTERP7").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP7").setFromField("geovalue_changed").setToNode("ZOOM7").setToField("position"))
      .addComments(" 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA ")
      .addChild(new TimeSensor("TIMER8").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP8").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,32.70688495899665,-117.16055274009707,1000000.0,32.70688495899665,-117.16055274009707,100000.0,32.70688495899665,-117.16055274009707,10000.0,32.70688495899665,-117.16055274009707,1000.0,32.70688495899665,-117.16055274009707,200.0,32.70688495899665,-117.16055274009707,1000.0,32.70688495899665,-117.16055274009707,10000.0,32.70688495899665,-117.16055274009707,100000.0,32.70688495899665,-117.16055274009707,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM8").setFromField("isBound").setToNode("TIMER8").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER8").setFromField("fraction_changed").setToNode("GeoPositionINTERP8").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP8").setFromField("geovalue_changed").setToNode("ZOOM8").setToField("position"))
      .addComments(" 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL ")
      .addChild(new TimeSensor("TIMER9").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP9").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,28.41747302782284,-81.46303564310074,1000000.0,28.41747302782284,-81.46303564310074,100000.0,28.41747302782284,-81.46303564310074,10000.0,28.41747302782284,-81.46303564310074,1000.0,28.41747302782284,-81.46303564310074,200.0,28.41747302782284,-81.46303564310074,1000.0,28.41747302782284,-81.46303564310074,10000.0,28.41747302782284,-81.46303564310074,100000.0,28.41747302782284,-81.46303564310074,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM9").setFromField("isBound").setToNode("TIMER9").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER9").setFromField("fraction_changed").setToNode("GeoPositionINTERP9").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP9").setFromField("geovalue_changed").setToNode("ZOOM9").setToField("position"))
      .addComments(" -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil ")
      .addChild(new TimeSensor("TIMER10").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP10").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,-100.0,10000000.0,-7.137685657416106,-34.845199584960945,1000000.0,-7.137685657416106,-34.845199584960945,100000.0,-7.137685657416106,-34.845199584960945,10000.0,-7.137685657416106,-34.845199584960945,1000.0,-7.137685657416106,-34.845199584960945,300.0,-7.137685657416106,-34.845199584960945,1000.0,-7.137685657416106,-34.845199584960945,10000.0,-7.137685657416106,-34.845199584960945,100000.0,-7.137685657416106,-34.845199584960945,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM10").setFromField("isBound").setToNode("TIMER10").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER10").setFromField("fraction_changed").setToNode("GeoPositionINTERP10").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP10").setFromField("geovalue_changed").setToNode("ZOOM10").setToField("position"))
      .addComments(" 1.26299 103.837398 Port of Singapore, Singapore ")
      .addChild(new TimeSensor("TIMER11").setCycleInterval(400).setEnabled(false).setLoop(true))
      .addChild(new GeoPositionInterpolator("GeoPositionINTERP11").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3d(new double[] {0.0,0.0,10000000.0,1.26299,103.837398,1000000.0,1.26299,103.837398,100000.0,1.26299,103.837398,10000.0,1.26299,103.837398,1000.0,1.26299,103.837398,500.0,1.26299,103.837398,1000.0,1.26299,103.837398,10000.0,1.26299,103.837398,100000.0,1.26299,103.837398,1000000.0,0.0,0.0,10000000.0})))
      .addChild(new ROUTE().setFromNode("ZOOM11").setFromField("isBound").setToNode("TIMER11").setToField("enabled"))
      .addChild(new ROUTE().setFromNode("TIMER11").setFromField("fraction_changed").setToNode("GeoPositionINTERP11").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("GeoPositionINTERP11").setFromField("geovalue_changed").setToNode("ZOOM11").setToField("position")))
    .addComments(" 28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return OpenStreetMapX3dEarthDemo model
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
        X3D thisExampleX3dModel = new OpenStreetMapX3dEarthDemo().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.OpenStreetMapX3dEarthDemo\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.OpenStreetMapX3dEarthDemo\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
