package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Viewpoints and tour of California campuses. </p>
 <p> Related links: <a href="../../../Geospatial/CaliforniaCampusesTour5Altitudes.java">CaliforniaCampusesTour5Altitudes.java</a> source, <a href="../../../Geospatial/CaliforniaCampusesTour5AltitudesIndex.html" target="_top">CaliforniaCampusesTour5Altitudes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/CaliforniaCampusesTour5Altitudes.x3d">CaliforniaCampusesTour5Altitudes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Viewpoints and tour of California campuses </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 March 2010 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CaliforniaCampuses.kml </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d-earth" target="_blank">https://www.web3d.org/x3d-earth</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://x3d-earth.nps.edu" target="_blank">http://x3d-earth.nps.edu</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://hamming.uc.nps.edu" target="_blank">http://hamming.uc.nps.edu</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D Earth </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour5Altitudes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour5Altitudes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://mmog.ern.nps.edu/California/California.x3d" target="_blank">http://mmog.ern.nps.edu/California/California.x3d</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> mmog.ern.nps.edu restricted to internal access within NPS firewall only </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> KmlToX3dViewpoints.xslt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/license.html" target="_blank">https://savage.nps.edu/Savage/license.html</a> </td>
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

	* @author Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor
 */

public class CaliforniaCampusesTour5Altitudes
{
	/** Default constructor to create this object. */
	public CaliforniaCampusesTour5Altitudes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CaliforniaCampusesTour5Altitudes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Viewpoints and tour of California campuses"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 March 2010"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CaliforniaCampuses.kml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d-earth"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://x3d-earth.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://hamming.uc.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Earth"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour5Altitudes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://mmog.ern.nps.edu/California/California.x3d"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("KmlToX3dViewpoints.xslt"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://savage.nps.edu/Savage/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CaliforniaCampusesTour5Altitudes.x3d"))
    .addChild(new Group("LightGroup"))
    .addChild(new Switch("SwitchGlobes").setWhichChoice(-1)
      .addComments(" Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. ")
      .addComments(" <Inline load='true' url='\"CaliforniaDemo.x3d\"'/> ")
      .addComments(" <Inline load='true' url='\"http://x3d-earth.nps.edu/osmdemo.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/> "))
    .addChild(new NavigationInfo().setTransitionType(new String[] {"ANIMATE"}))
    .addChild(new Group("PlacemarkGroup")
      .addChild(new GeoViewpoint("View01a").setDescription("Naval Postgraduate School 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,200000.0))
      .addChild(new GeoViewpoint("View01b").setDescription("Naval Postgraduate School 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,100000.0))
      .addChild(new GeoViewpoint("View01c").setDescription("Naval Postgraduate School 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,50000.0))
      .addChild(new GeoViewpoint("View01d").setDescription("Naval Postgraduate School 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,25000.0))
      .addChild(new GeoViewpoint("View01e").setDescription("Naval Postgraduate School 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,10000.0))
      .addChild(new GeoViewpoint("View02a").setDescription("University of California Davis 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,200000.0))
      .addChild(new GeoViewpoint("View02b").setDescription("University of California Davis 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,100000.0))
      .addChild(new GeoViewpoint("View02c").setDescription("University of California Davis 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,50000.0))
      .addChild(new GeoViewpoint("View02d").setDescription("University of California Davis 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,25000.0))
      .addChild(new GeoViewpoint("View02e").setDescription("University of California Davis 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,10000.0))
      .addChild(new GeoViewpoint("View03a").setDescription("University of California Berkeley 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,200000.0))
      .addChild(new GeoViewpoint("View03b").setDescription("University of California Berkeley 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,100000.0))
      .addChild(new GeoViewpoint("View03c").setDescription("University of California Berkeley 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,50000.0))
      .addChild(new GeoViewpoint("View03d").setDescription("University of California Berkeley 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,25000.0))
      .addChild(new GeoViewpoint("View03e").setDescription("University of California Berkeley 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,10000.0))
      .addChild(new GeoViewpoint("View04a").setDescription("University of California San Francisco 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,200000.0))
      .addChild(new GeoViewpoint("View04b").setDescription("University of California San Francisco 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,100000.0))
      .addChild(new GeoViewpoint("View04c").setDescription("University of California San Francisco 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,50000.0))
      .addChild(new GeoViewpoint("View04d").setDescription("University of California San Francisco 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,25000.0))
      .addChild(new GeoViewpoint("View04e").setDescription("University of California San Francisco 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,10000.0))
      .addChild(new GeoViewpoint("View05a").setDescription("University of California Santa Cruz 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,200000.0))
      .addChild(new GeoViewpoint("View05b").setDescription("University of California Santa Cruz 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,100000.0))
      .addChild(new GeoViewpoint("View05c").setDescription("University of California Santa Cruz 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,50000.0))
      .addChild(new GeoViewpoint("View05d").setDescription("University of California Santa Cruz 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,25000.0))
      .addChild(new GeoViewpoint("View05e").setDescription("University of California Santa Cruz 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,10000.0))
      .addChild(new GeoViewpoint("View06a").setDescription("University of California Merced 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,200000.0))
      .addChild(new GeoViewpoint("View06b").setDescription("University of California Merced 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,100000.0))
      .addChild(new GeoViewpoint("View06c").setDescription("University of California Merced 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,50000.0))
      .addChild(new GeoViewpoint("View06d").setDescription("University of California Merced 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,25000.0))
      .addChild(new GeoViewpoint("View06e").setDescription("University of California Merced 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,10000.0))
      .addChild(new GeoViewpoint("View07a").setDescription("University of California Santa Barbara 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,200000.0))
      .addChild(new GeoViewpoint("View07b").setDescription("University of California Santa Barbara 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,100000.0))
      .addChild(new GeoViewpoint("View07c").setDescription("University of California Santa Barbara 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,50000.0))
      .addChild(new GeoViewpoint("View07d").setDescription("University of California Santa Barbara 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,25000.0))
      .addChild(new GeoViewpoint("View07e").setDescription("University of California Santa Barbara 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,10000.0))
      .addChild(new GeoViewpoint("View08a").setDescription("University of California Los Angeles 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,200000.0))
      .addChild(new GeoViewpoint("View08b").setDescription("University of California Los Angeles 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,100000.0))
      .addChild(new GeoViewpoint("View08c").setDescription("University of California Los Angeles 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,50000.0))
      .addChild(new GeoViewpoint("View08d").setDescription("University of California Los Angeles 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,25000.0))
      .addChild(new GeoViewpoint("View08e").setDescription("University of California Los Angeles 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,10000.0))
      .addChild(new GeoViewpoint("View09a").setDescription("University of California Irvine 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,200000.0))
      .addChild(new GeoViewpoint("View09b").setDescription("University of California Irvine 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,100000.0))
      .addChild(new GeoViewpoint("View09c").setDescription("University of California Irvine 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,50000.0))
      .addChild(new GeoViewpoint("View09d").setDescription("University of California Irvine 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,25000.0))
      .addChild(new GeoViewpoint("View09e").setDescription("University of California Irvine 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,10000.0))
      .addChild(new GeoViewpoint("View10a").setDescription("University of California Riverside 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,200000.0))
      .addChild(new GeoViewpoint("View10b").setDescription("University of California Riverside 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,100000.0))
      .addChild(new GeoViewpoint("View10c").setDescription("University of California Riverside 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,50000.0))
      .addChild(new GeoViewpoint("View10d").setDescription("University of California Riverside 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,25000.0))
      .addChild(new GeoViewpoint("View10e").setDescription("University of California Riverside 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,10000.0))
      .addChild(new GeoViewpoint("View11a").setDescription("University of California San Diego 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,200000.0))
      .addChild(new GeoViewpoint("View11b").setDescription("University of California San Diego 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,100000.0))
      .addChild(new GeoViewpoint("View11c").setDescription("University of California San Diego 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,50000.0))
      .addChild(new GeoViewpoint("View11d").setDescription("University of California San Diego 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,25000.0))
      .addChild(new GeoViewpoint("View11e").setDescription("University of California San Diego 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,10000.0))
      .addChild(new GeoViewpoint("View12a").setDescription("Humboldt State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,200000.0))
      .addChild(new GeoViewpoint("View12b").setDescription("Humboldt State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,100000.0))
      .addChild(new GeoViewpoint("View12c").setDescription("Humboldt State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,50000.0))
      .addChild(new GeoViewpoint("View12d").setDescription("Humboldt State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,25000.0))
      .addChild(new GeoViewpoint("View12e").setDescription("Humboldt State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,10000.0))
      .addChild(new GeoViewpoint("View13a").setDescription("California State University, Chico 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,200000.0))
      .addChild(new GeoViewpoint("View13b").setDescription("California State University, Chico 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,100000.0))
      .addChild(new GeoViewpoint("View13c").setDescription("California State University, Chico 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,50000.0))
      .addChild(new GeoViewpoint("View13d").setDescription("California State University, Chico 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,25000.0))
      .addChild(new GeoViewpoint("View13e").setDescription("California State University, Chico 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,10000.0))
      .addChild(new GeoViewpoint("View14a").setDescription("California State University Sacramento 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,200000.0))
      .addChild(new GeoViewpoint("View14b").setDescription("California State University Sacramento 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,100000.0))
      .addChild(new GeoViewpoint("View14c").setDescription("California State University Sacramento 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,50000.0))
      .addChild(new GeoViewpoint("View14d").setDescription("California State University Sacramento 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,25000.0))
      .addChild(new GeoViewpoint("View14e").setDescription("California State University Sacramento 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,10000.0))
      .addChild(new GeoViewpoint("View15a").setDescription("Sonoma State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,200000.0))
      .addChild(new GeoViewpoint("View15b").setDescription("Sonoma State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,100000.0))
      .addChild(new GeoViewpoint("View15c").setDescription("Sonoma State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,50000.0))
      .addChild(new GeoViewpoint("View15d").setDescription("Sonoma State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,25000.0))
      .addChild(new GeoViewpoint("View15e").setDescription("Sonoma State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,10000.0))
      .addChild(new GeoViewpoint("View16a").setDescription("California Maritime Academy 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,200000.0))
      .addChild(new GeoViewpoint("View16b").setDescription("California Maritime Academy 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,100000.0))
      .addChild(new GeoViewpoint("View16c").setDescription("California Maritime Academy 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,50000.0))
      .addChild(new GeoViewpoint("View16d").setDescription("California Maritime Academy 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,25000.0))
      .addChild(new GeoViewpoint("View16e").setDescription("California Maritime Academy 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,10000.0))
      .addChild(new GeoViewpoint("View17a").setDescription("San Francisco State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,200000.0))
      .addChild(new GeoViewpoint("View17b").setDescription("San Francisco State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,100000.0))
      .addChild(new GeoViewpoint("View17c").setDescription("San Francisco State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,50000.0))
      .addChild(new GeoViewpoint("View17d").setDescription("San Francisco State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,25000.0))
      .addChild(new GeoViewpoint("View17e").setDescription("San Francisco State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,10000.0))
      .addChild(new GeoViewpoint("View18a").setDescription("California State University, East Bay 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,200000.0))
      .addChild(new GeoViewpoint("View18b").setDescription("California State University, East Bay 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,100000.0))
      .addChild(new GeoViewpoint("View18c").setDescription("California State University, East Bay 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,50000.0))
      .addChild(new GeoViewpoint("View18d").setDescription("California State University, East Bay 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,25000.0))
      .addChild(new GeoViewpoint("View18e").setDescription("California State University, East Bay 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,10000.0))
      .addChild(new GeoViewpoint("View19a").setDescription("California State University Stanislaus 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,200000.0))
      .addChild(new GeoViewpoint("View19b").setDescription("California State University Stanislaus 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,100000.0))
      .addChild(new GeoViewpoint("View19c").setDescription("California State University Stanislaus 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,50000.0))
      .addChild(new GeoViewpoint("View19d").setDescription("California State University Stanislaus 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,25000.0))
      .addChild(new GeoViewpoint("View19e").setDescription("California State University Stanislaus 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,10000.0))
      .addChild(new GeoViewpoint("View20a").setDescription("San Jose State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,200000.0))
      .addChild(new GeoViewpoint("View20b").setDescription("San Jose State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,100000.0))
      .addChild(new GeoViewpoint("View20c").setDescription("San Jose State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,50000.0))
      .addChild(new GeoViewpoint("View20d").setDescription("San Jose State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,25000.0))
      .addChild(new GeoViewpoint("View20e").setDescription("San Jose State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,10000.0))
      .addChild(new GeoViewpoint("View21a").setDescription("California State University, Monterey Bay 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,200000.0))
      .addChild(new GeoViewpoint("View21b").setDescription("California State University, Monterey Bay 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,100000.0))
      .addChild(new GeoViewpoint("View21c").setDescription("California State University, Monterey Bay 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,50000.0))
      .addChild(new GeoViewpoint("View21d").setDescription("California State University, Monterey Bay 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,25000.0))
      .addChild(new GeoViewpoint("View21e").setDescription("California State University, Monterey Bay 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,10000.0))
      .addChild(new GeoViewpoint("View22a").setDescription("Fresno State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,200000.0))
      .addChild(new GeoViewpoint("View22b").setDescription("Fresno State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,100000.0))
      .addChild(new GeoViewpoint("View22c").setDescription("Fresno State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,50000.0))
      .addChild(new GeoViewpoint("View22d").setDescription("Fresno State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,25000.0))
      .addChild(new GeoViewpoint("View22e").setDescription("Fresno State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,10000.0))
      .addChild(new GeoViewpoint("View23a").setDescription("California State University, Bakersfield 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,200000.0))
      .addChild(new GeoViewpoint("View23b").setDescription("California State University, Bakersfield 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,100000.0))
      .addChild(new GeoViewpoint("View23c").setDescription("California State University, Bakersfield 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,50000.0))
      .addChild(new GeoViewpoint("View23d").setDescription("California State University, Bakersfield 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,25000.0))
      .addChild(new GeoViewpoint("View23e").setDescription("California State University, Bakersfield 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,10000.0))
      .addChild(new GeoViewpoint("View24a").setDescription("California Polytechnic State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,200000.0))
      .addChild(new GeoViewpoint("View24b").setDescription("California Polytechnic State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,100000.0))
      .addChild(new GeoViewpoint("View24c").setDescription("California Polytechnic State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,50000.0))
      .addChild(new GeoViewpoint("View24d").setDescription("California Polytechnic State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,25000.0))
      .addChild(new GeoViewpoint("View24e").setDescription("California Polytechnic State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,10000.0))
      .addChild(new GeoViewpoint("View25a").setDescription("California State University, Channel Islands 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,200000.0))
      .addChild(new GeoViewpoint("View25b").setDescription("California State University, Channel Islands 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,100000.0))
      .addChild(new GeoViewpoint("View25c").setDescription("California State University, Channel Islands 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,50000.0))
      .addChild(new GeoViewpoint("View25d").setDescription("California State University, Channel Islands 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,25000.0))
      .addChild(new GeoViewpoint("View25e").setDescription("California State University, Channel Islands 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,10000.0))
      .addChild(new GeoViewpoint("View26a").setDescription("California State University, Northridge 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,200000.0))
      .addChild(new GeoViewpoint("View26b").setDescription("California State University, Northridge 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,100000.0))
      .addChild(new GeoViewpoint("View26c").setDescription("California State University, Northridge 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,50000.0))
      .addChild(new GeoViewpoint("View26d").setDescription("California State University, Northridge 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,25000.0))
      .addChild(new GeoViewpoint("View26e").setDescription("California State University, Northridge 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,10000.0))
      .addChild(new GeoViewpoint("View27a").setDescription("California State University, Los Angeles 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,200000.0))
      .addChild(new GeoViewpoint("View27b").setDescription("California State University, Los Angeles 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,100000.0))
      .addChild(new GeoViewpoint("View27c").setDescription("California State University, Los Angeles 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,50000.0))
      .addChild(new GeoViewpoint("View27d").setDescription("California State University, Los Angeles 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,25000.0))
      .addChild(new GeoViewpoint("View27e").setDescription("California State University, Los Angeles 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,10000.0))
      .addChild(new GeoViewpoint("View28a").setDescription("California State Polytechnic University, Pomona 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,200000.0))
      .addChild(new GeoViewpoint("View28b").setDescription("California State Polytechnic University, Pomona 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,100000.0))
      .addChild(new GeoViewpoint("View28c").setDescription("California State Polytechnic University, Pomona 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,50000.0))
      .addChild(new GeoViewpoint("View28d").setDescription("California State Polytechnic University, Pomona 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,25000.0))
      .addChild(new GeoViewpoint("View28e").setDescription("California State Polytechnic University, Pomona 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,10000.0))
      .addChild(new GeoViewpoint("View29a").setDescription("California State University, San Bernardino 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,200000.0))
      .addChild(new GeoViewpoint("View29b").setDescription("California State University, San Bernardino 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,100000.0))
      .addChild(new GeoViewpoint("View29c").setDescription("California State University, San Bernardino 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,50000.0))
      .addChild(new GeoViewpoint("View29d").setDescription("California State University, San Bernardino 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,25000.0))
      .addChild(new GeoViewpoint("View29e").setDescription("California State University, San Bernardino 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,10000.0))
      .addChild(new GeoViewpoint("View30a").setDescription("California State University, Fullerton 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,200000.0))
      .addChild(new GeoViewpoint("View30b").setDescription("California State University, Fullerton 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,100000.0))
      .addChild(new GeoViewpoint("View30c").setDescription("California State University, Fullerton 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,50000.0))
      .addChild(new GeoViewpoint("View30d").setDescription("California State University, Fullerton 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,25000.0))
      .addChild(new GeoViewpoint("View30e").setDescription("California State University, Fullerton 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,10000.0))
      .addChild(new GeoViewpoint("View31a").setDescription("California State University Dominguez Hills 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,200000.0))
      .addChild(new GeoViewpoint("View31b").setDescription("California State University Dominguez Hills 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,100000.0))
      .addChild(new GeoViewpoint("View31c").setDescription("California State University Dominguez Hills 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,50000.0))
      .addChild(new GeoViewpoint("View31d").setDescription("California State University Dominguez Hills 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,25000.0))
      .addChild(new GeoViewpoint("View31e").setDescription("California State University Dominguez Hills 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,10000.0))
      .addChild(new GeoViewpoint("View32a").setDescription("California State University, Long Beach 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,200000.0))
      .addChild(new GeoViewpoint("View32b").setDescription("California State University, Long Beach 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,100000.0))
      .addChild(new GeoViewpoint("View32c").setDescription("California State University, Long Beach 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,50000.0))
      .addChild(new GeoViewpoint("View32d").setDescription("California State University, Long Beach 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,25000.0))
      .addChild(new GeoViewpoint("View32e").setDescription("California State University, Long Beach 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,10000.0))
      .addChild(new GeoViewpoint("View33a").setDescription("California State University, San Marcos 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,200000.0))
      .addChild(new GeoViewpoint("View33b").setDescription("California State University, San Marcos 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,100000.0))
      .addChild(new GeoViewpoint("View33c").setDescription("California State University, San Marcos 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,50000.0))
      .addChild(new GeoViewpoint("View33d").setDescription("California State University, San Marcos 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,25000.0))
      .addChild(new GeoViewpoint("View33e").setDescription("California State University, San Marcos 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,10000.0))
      .addChild(new GeoViewpoint("View34a").setDescription("San Diego State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,200000.0))
      .addChild(new GeoViewpoint("View34b").setDescription("San Diego State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,100000.0))
      .addChild(new GeoViewpoint("View34c").setDescription("San Diego State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,50000.0))
      .addChild(new GeoViewpoint("View34d").setDescription("San Diego State University 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,25000.0))
      .addChild(new GeoViewpoint("View34e").setDescription("San Diego State University 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,10000.0))
      .addChild(new GeoViewpoint("View35a").setDescription("CENIC 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,200000.0))
      .addChild(new GeoViewpoint("View35b").setDescription("CENIC 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,100000.0))
      .addChild(new GeoViewpoint("View35c").setDescription("CENIC 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,50000.0))
      .addChild(new GeoViewpoint("View35d").setDescription("CENIC 25km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,25000.0))
      .addChild(new GeoViewpoint("View35e").setDescription("CENIC 10km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,10000.0)))
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("CrossHair").setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"})
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrossHair prototype is enabled or not"))
      .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
      .addField(new field().setName("markerColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
      .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
      .addField(new field().setName("positionOffsetFromCamera").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
    .addChild(new ProtoInstance("CrossHair", "CrossHairInstance").setContainerField("children")
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("markerColor").setValue(new SFColor(0.1,0.8,0.1)))
      .addFieldValue(new fieldValue().setName("scale").setValue(new SFVec3f(0.5,0.5,0.5)))
      .addFieldValue(new fieldValue().setName("positionOffsetFromCamera").setValue(new SFVec3f(0.0,0.0,-5.0))))
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("HeadsUpDisplay").setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new String[] {"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"})
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
      .addField(new field().setName("screenOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
      .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
      .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("ViewpointSequencer").setName("ViewpointSequencer").setAppinfo("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene").setUrl(new String[] {"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"})
      .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Viewpoint USE nodes that are sequentially bound"))
      .addField(new field().setName("interval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("number of seconds between viewpoint shifts"))
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether ViewpointSequencer is enabled or not"))
      .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("whether ViewpointSequencer is enabled or not"))
      .addField(new field().setName("previous").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("bind previous Viewpoint in list"))
      .addField(new field().setName("next").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("bind next Viewpoint in list"))
      .addField(new field().setName("toggleMessage").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Select message to toggle ViewpointSequencer"))
      .addField(new field().setName("toggleMessageFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Color for toggleMessage text"))
      .addField(new field().setName("toggleMessageColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color for toggleMessage text"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("enable console output")))
    .addChild(new ProtoInstance("ViewpointSequencer", "ViewpointTour").setContainerField("children")
      .addFieldValue(new fieldValue().setName("interval").setValue(10))
      .addComments(" TODO initially enabled needs to be off, and scene provides selectable text or Viewpoint to activate ")
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("toggleMessage").setValue(new String[] {"ViewpointSequencer tour"}))
      .addFieldValue(new fieldValue().setName("viewpoints")
        .addChild(new GeoViewpoint().setUSE("View01a"))
        .addChild(new GeoViewpoint().setUSE("View01b"))
        .addChild(new GeoViewpoint().setUSE("View01c"))
        .addChild(new GeoViewpoint().setUSE("View01d"))
        .addChild(new GeoViewpoint().setUSE("View01e"))
        .addChild(new GeoViewpoint().setUSE("View02a"))
        .addChild(new GeoViewpoint().setUSE("View02b"))
        .addChild(new GeoViewpoint().setUSE("View02c"))
        .addChild(new GeoViewpoint().setUSE("View02d"))
        .addChild(new GeoViewpoint().setUSE("View02e"))
        .addChild(new GeoViewpoint().setUSE("View03a"))
        .addChild(new GeoViewpoint().setUSE("View03b"))
        .addChild(new GeoViewpoint().setUSE("View03c"))
        .addChild(new GeoViewpoint().setUSE("View03d"))
        .addChild(new GeoViewpoint().setUSE("View03e"))
        .addChild(new GeoViewpoint().setUSE("View04a"))
        .addChild(new GeoViewpoint().setUSE("View04b"))
        .addChild(new GeoViewpoint().setUSE("View04c"))
        .addChild(new GeoViewpoint().setUSE("View04d"))
        .addChild(new GeoViewpoint().setUSE("View04e"))
        .addChild(new GeoViewpoint().setUSE("View05a"))
        .addChild(new GeoViewpoint().setUSE("View05b"))
        .addChild(new GeoViewpoint().setUSE("View05c"))
        .addChild(new GeoViewpoint().setUSE("View05d"))
        .addChild(new GeoViewpoint().setUSE("View05e"))
        .addChild(new GeoViewpoint().setUSE("View06a"))
        .addChild(new GeoViewpoint().setUSE("View06b"))
        .addChild(new GeoViewpoint().setUSE("View06c"))
        .addChild(new GeoViewpoint().setUSE("View06d"))
        .addChild(new GeoViewpoint().setUSE("View06e"))
        .addChild(new GeoViewpoint().setUSE("View07a"))
        .addChild(new GeoViewpoint().setUSE("View07b"))
        .addChild(new GeoViewpoint().setUSE("View07c"))
        .addChild(new GeoViewpoint().setUSE("View07d"))
        .addChild(new GeoViewpoint().setUSE("View07e"))
        .addChild(new GeoViewpoint().setUSE("View08a"))
        .addChild(new GeoViewpoint().setUSE("View08b"))
        .addChild(new GeoViewpoint().setUSE("View08c"))
        .addChild(new GeoViewpoint().setUSE("View08d"))
        .addChild(new GeoViewpoint().setUSE("View08e"))
        .addChild(new GeoViewpoint().setUSE("View09a"))
        .addChild(new GeoViewpoint().setUSE("View09b"))
        .addChild(new GeoViewpoint().setUSE("View09c"))
        .addChild(new GeoViewpoint().setUSE("View09d"))
        .addChild(new GeoViewpoint().setUSE("View09e"))
        .addChild(new GeoViewpoint().setUSE("View10a"))
        .addChild(new GeoViewpoint().setUSE("View10b"))
        .addChild(new GeoViewpoint().setUSE("View10c"))
        .addChild(new GeoViewpoint().setUSE("View10d"))
        .addChild(new GeoViewpoint().setUSE("View10e"))
        .addChild(new GeoViewpoint().setUSE("View11a"))
        .addChild(new GeoViewpoint().setUSE("View11b"))
        .addChild(new GeoViewpoint().setUSE("View11c"))
        .addChild(new GeoViewpoint().setUSE("View11d"))
        .addChild(new GeoViewpoint().setUSE("View11e"))
        .addChild(new GeoViewpoint().setUSE("View12a"))
        .addChild(new GeoViewpoint().setUSE("View12b"))
        .addChild(new GeoViewpoint().setUSE("View12c"))
        .addChild(new GeoViewpoint().setUSE("View12d"))
        .addChild(new GeoViewpoint().setUSE("View12e"))
        .addChild(new GeoViewpoint().setUSE("View13a"))
        .addChild(new GeoViewpoint().setUSE("View13b"))
        .addChild(new GeoViewpoint().setUSE("View13c"))
        .addChild(new GeoViewpoint().setUSE("View13d"))
        .addChild(new GeoViewpoint().setUSE("View13e"))
        .addChild(new GeoViewpoint().setUSE("View14a"))
        .addChild(new GeoViewpoint().setUSE("View14b"))
        .addChild(new GeoViewpoint().setUSE("View14c"))
        .addChild(new GeoViewpoint().setUSE("View14d"))
        .addChild(new GeoViewpoint().setUSE("View14e"))
        .addChild(new GeoViewpoint().setUSE("View15a"))
        .addChild(new GeoViewpoint().setUSE("View15b"))
        .addChild(new GeoViewpoint().setUSE("View15c"))
        .addChild(new GeoViewpoint().setUSE("View15d"))
        .addChild(new GeoViewpoint().setUSE("View15e"))
        .addChild(new GeoViewpoint().setUSE("View16a"))
        .addChild(new GeoViewpoint().setUSE("View16b"))
        .addChild(new GeoViewpoint().setUSE("View16c"))
        .addChild(new GeoViewpoint().setUSE("View16d"))
        .addChild(new GeoViewpoint().setUSE("View16e"))
        .addChild(new GeoViewpoint().setUSE("View17a"))
        .addChild(new GeoViewpoint().setUSE("View17b"))
        .addChild(new GeoViewpoint().setUSE("View17c"))
        .addChild(new GeoViewpoint().setUSE("View17d"))
        .addChild(new GeoViewpoint().setUSE("View17e"))
        .addChild(new GeoViewpoint().setUSE("View18a"))
        .addChild(new GeoViewpoint().setUSE("View18b"))
        .addChild(new GeoViewpoint().setUSE("View18c"))
        .addChild(new GeoViewpoint().setUSE("View18d"))
        .addChild(new GeoViewpoint().setUSE("View18e"))
        .addChild(new GeoViewpoint().setUSE("View19a"))
        .addChild(new GeoViewpoint().setUSE("View19b"))
        .addChild(new GeoViewpoint().setUSE("View19c"))
        .addChild(new GeoViewpoint().setUSE("View19d"))
        .addChild(new GeoViewpoint().setUSE("View19e"))
        .addChild(new GeoViewpoint().setUSE("View20a"))
        .addChild(new GeoViewpoint().setUSE("View20b"))
        .addChild(new GeoViewpoint().setUSE("View20c"))
        .addChild(new GeoViewpoint().setUSE("View20d"))
        .addChild(new GeoViewpoint().setUSE("View20e"))
        .addChild(new GeoViewpoint().setUSE("View21a"))
        .addChild(new GeoViewpoint().setUSE("View21b"))
        .addChild(new GeoViewpoint().setUSE("View21c"))
        .addChild(new GeoViewpoint().setUSE("View21d"))
        .addChild(new GeoViewpoint().setUSE("View21e"))
        .addChild(new GeoViewpoint().setUSE("View22a"))
        .addChild(new GeoViewpoint().setUSE("View22b"))
        .addChild(new GeoViewpoint().setUSE("View22c"))
        .addChild(new GeoViewpoint().setUSE("View22d"))
        .addChild(new GeoViewpoint().setUSE("View22e"))
        .addChild(new GeoViewpoint().setUSE("View23a"))
        .addChild(new GeoViewpoint().setUSE("View23b"))
        .addChild(new GeoViewpoint().setUSE("View23c"))
        .addChild(new GeoViewpoint().setUSE("View23d"))
        .addChild(new GeoViewpoint().setUSE("View23e"))
        .addChild(new GeoViewpoint().setUSE("View24a"))
        .addChild(new GeoViewpoint().setUSE("View24b"))
        .addChild(new GeoViewpoint().setUSE("View24c"))
        .addChild(new GeoViewpoint().setUSE("View24d"))
        .addChild(new GeoViewpoint().setUSE("View24e"))
        .addChild(new GeoViewpoint().setUSE("View25a"))
        .addChild(new GeoViewpoint().setUSE("View25b"))
        .addChild(new GeoViewpoint().setUSE("View25c"))
        .addChild(new GeoViewpoint().setUSE("View25d"))
        .addChild(new GeoViewpoint().setUSE("View25e"))
        .addChild(new GeoViewpoint().setUSE("View26a"))
        .addChild(new GeoViewpoint().setUSE("View26b"))
        .addChild(new GeoViewpoint().setUSE("View26c"))
        .addChild(new GeoViewpoint().setUSE("View26d"))
        .addChild(new GeoViewpoint().setUSE("View26e"))
        .addChild(new GeoViewpoint().setUSE("View27a"))
        .addChild(new GeoViewpoint().setUSE("View27b"))
        .addChild(new GeoViewpoint().setUSE("View27c"))
        .addChild(new GeoViewpoint().setUSE("View27d"))
        .addChild(new GeoViewpoint().setUSE("View27e"))
        .addChild(new GeoViewpoint().setUSE("View28a"))
        .addChild(new GeoViewpoint().setUSE("View28b"))
        .addChild(new GeoViewpoint().setUSE("View28c"))
        .addChild(new GeoViewpoint().setUSE("View28d"))
        .addChild(new GeoViewpoint().setUSE("View28e"))
        .addChild(new GeoViewpoint().setUSE("View29a"))
        .addChild(new GeoViewpoint().setUSE("View29b"))
        .addChild(new GeoViewpoint().setUSE("View29c"))
        .addChild(new GeoViewpoint().setUSE("View29d"))
        .addChild(new GeoViewpoint().setUSE("View29e"))
        .addChild(new GeoViewpoint().setUSE("View30a"))
        .addChild(new GeoViewpoint().setUSE("View30b"))
        .addChild(new GeoViewpoint().setUSE("View30c"))
        .addChild(new GeoViewpoint().setUSE("View30d"))
        .addChild(new GeoViewpoint().setUSE("View30e"))
        .addChild(new GeoViewpoint().setUSE("View31a"))
        .addChild(new GeoViewpoint().setUSE("View31b"))
        .addChild(new GeoViewpoint().setUSE("View31c"))
        .addChild(new GeoViewpoint().setUSE("View31d"))
        .addChild(new GeoViewpoint().setUSE("View31e"))
        .addChild(new GeoViewpoint().setUSE("View32a"))
        .addChild(new GeoViewpoint().setUSE("View32b"))
        .addChild(new GeoViewpoint().setUSE("View32c"))
        .addChild(new GeoViewpoint().setUSE("View32d"))
        .addChild(new GeoViewpoint().setUSE("View32e"))
        .addChild(new GeoViewpoint().setUSE("View33a"))
        .addChild(new GeoViewpoint().setUSE("View33b"))
        .addChild(new GeoViewpoint().setUSE("View33c"))
        .addChild(new GeoViewpoint().setUSE("View33d"))
        .addChild(new GeoViewpoint().setUSE("View33e"))
        .addChild(new GeoViewpoint().setUSE("View34a"))
        .addChild(new GeoViewpoint().setUSE("View34b"))
        .addChild(new GeoViewpoint().setUSE("View34c"))
        .addChild(new GeoViewpoint().setUSE("View34d"))
        .addChild(new GeoViewpoint().setUSE("View34e"))
        .addChild(new GeoViewpoint().setUSE("View35a"))
        .addChild(new GeoViewpoint().setUSE("View35b"))
        .addChild(new GeoViewpoint().setUSE("View35c"))
        .addChild(new GeoViewpoint().setUSE("View35d"))
        .addChild(new GeoViewpoint().setUSE("View35e"))
        .addChild(new Viewpoint("View4").setDescription("View four (-X axis)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))))
    .addComments(" ==================== ")
    .addChild(new GeoLocation().setGeoCoords(36.595599,-121.877148,624990.0)
      .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"ViewpointSequencer tour"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.795918,0.505869,0.093315).setShininess(0.39).setSpecularColor(0.923469,0.428866,0.006369)))))
      .addChild(new TouchSensor("TourTouch").setDescription("Touch text to turn tour on/off"))
      .addChild(new BooleanToggle("TourToggle"))
      .addChild(new ROUTE().setFromNode("TourTouch").setFromField("isActive").setToNode("TourToggle").setToField("set_boolean"))
      .addChild(new ROUTE().setFromNode("TourToggle").setFromField("toggle").setToNode("ViewpointTour").setToField("set_enabled")))
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("ViewPositionOrientation").setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates").setUrl(new String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"})
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only"))
      .addField(new field().setName("set_traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
      .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
      .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
      .addField(new field().setName("outputViewpointString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint")))
    .addChild(new ProtoInstance("ViewPositionOrientation", "ExampleViewPositionOrientation").setContainerField("children")
      .addFieldValue(new fieldValue().setName("enabled").setValue(false)))
    .addComments(" ==================== "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CaliforniaCampusesTour5Altitudes model
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
        X3D thisExampleX3dModel = new CaliforniaCampusesTour5Altitudes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CaliforniaCampusesTour5Altitudes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CaliforniaCampusesTour5Altitudes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
