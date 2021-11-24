package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Viewpoints and tour of California campuses. </p>
 <p> Related links: <a href="../../../Geospatial/CaliforniaCampusesTour3Altitudes.java">CaliforniaCampusesTour3Altitudes.java</a> source, <a href="../../../Geospatial/CaliforniaCampusesTour3AltitudesIndex.html" target="_top">CaliforniaCampusesTour3Altitudes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/CaliforniaCampusesTour3Altitudes.x3d">CaliforniaCampusesTour3Altitudes.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour3Altitudes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour3Altitudes.x3d</a> </td>
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

public class CaliforniaCampusesTour3Altitudes
{
	/** Default constructor to create this object. */
	public CaliforniaCampusesTour3Altitudes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CaliforniaCampusesTour3Altitudes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Viewpoints and tour of California campuses"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 March 2010"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CaliforniaCampuses.kml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d-earth"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://x3d-earth.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://hamming.uc.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Earth"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour3Altitudes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://mmog.ern.nps.edu/California/California.x3d"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("KmlToX3dViewpoints.xslt"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://savage.nps.edu/Savage/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CaliforniaCampusesTour3Altitudes.x3d"))
    .addChild(new Group("LightGroup"))
    .addChild(new Switch("SwitchGlobes").setWhichChoice(0)
      .addComments(" Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. ")
      .addComments(" <Inline load='true' url='\"CaliforniaDemo.x3d\"'/> ")
      .addChild(new Inline().setUrl(new String[] {"http://x3d-earth.nps.edu/osmdemo.x3d"}))
      .addComments(" <Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/> "))
    .addChild(new NavigationInfo().setTransitionType(new String[] {"ANIMATE"}))
    .addChild(new Group("PlacemarkGroup")
      .addChild(new GeoViewpoint("View01high").setDescription("Naval Postgraduate School 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,200000.0))
      .addChild(new GeoViewpoint("View01medium").setDescription("Naval Postgraduate School 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,100000.0))
      .addChild(new GeoViewpoint("View01low").setDescription("Naval Postgraduate School 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,50000.0))
      .addChild(new GeoViewpoint("View02high").setDescription("University of California Davis 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,200000.0))
      .addChild(new GeoViewpoint("View02medium").setDescription("University of California Davis 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,100000.0))
      .addChild(new GeoViewpoint("View02low").setDescription("University of California Davis 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,50000.0))
      .addChild(new GeoViewpoint("View03high").setDescription("University of California Berkeley 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,200000.0))
      .addChild(new GeoViewpoint("View03medium").setDescription("University of California Berkeley 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,100000.0))
      .addChild(new GeoViewpoint("View03low").setDescription("University of California Berkeley 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,50000.0))
      .addChild(new GeoViewpoint("View04high").setDescription("University of California San Francisco 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,200000.0))
      .addChild(new GeoViewpoint("View04medium").setDescription("University of California San Francisco 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,100000.0))
      .addChild(new GeoViewpoint("View04low").setDescription("University of California San Francisco 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,50000.0))
      .addChild(new GeoViewpoint("View05high").setDescription("University of California Santa Cruz 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,200000.0))
      .addChild(new GeoViewpoint("View05medium").setDescription("University of California Santa Cruz 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,100000.0))
      .addChild(new GeoViewpoint("View05low").setDescription("University of California Santa Cruz 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,50000.0))
      .addChild(new GeoViewpoint("View06high").setDescription("University of California Merced 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,200000.0))
      .addChild(new GeoViewpoint("View06medium").setDescription("University of California Merced 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,100000.0))
      .addChild(new GeoViewpoint("View06low").setDescription("University of California Merced 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,50000.0))
      .addChild(new GeoViewpoint("View07high").setDescription("University of California Santa Barbara 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,200000.0))
      .addChild(new GeoViewpoint("View07medium").setDescription("University of California Santa Barbara 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,100000.0))
      .addChild(new GeoViewpoint("View07low").setDescription("University of California Santa Barbara 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,50000.0))
      .addChild(new GeoViewpoint("View08high").setDescription("University of California Los Angeles 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,200000.0))
      .addChild(new GeoViewpoint("View08medium").setDescription("University of California Los Angeles 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,100000.0))
      .addChild(new GeoViewpoint("View08low").setDescription("University of California Los Angeles 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,50000.0))
      .addChild(new GeoViewpoint("View09high").setDescription("University of California Irvine 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,200000.0))
      .addChild(new GeoViewpoint("View09medium").setDescription("University of California Irvine 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,100000.0))
      .addChild(new GeoViewpoint("View09low").setDescription("University of California Irvine 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,50000.0))
      .addChild(new GeoViewpoint("View10high").setDescription("University of California Riverside 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,200000.0))
      .addChild(new GeoViewpoint("View10medium").setDescription("University of California Riverside 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,100000.0))
      .addChild(new GeoViewpoint("View10low").setDescription("University of California Riverside 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,50000.0))
      .addChild(new GeoViewpoint("View11high").setDescription("University of California San Diego 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,200000.0))
      .addChild(new GeoViewpoint("View11medium").setDescription("University of California San Diego 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,100000.0))
      .addChild(new GeoViewpoint("View11low").setDescription("University of California San Diego 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,50000.0))
      .addChild(new GeoViewpoint("View12high").setDescription("Humboldt State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,200000.0))
      .addChild(new GeoViewpoint("View12medium").setDescription("Humboldt State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,100000.0))
      .addChild(new GeoViewpoint("View12low").setDescription("Humboldt State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,50000.0))
      .addChild(new GeoViewpoint("View13high").setDescription("California State University, Chico 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,200000.0))
      .addChild(new GeoViewpoint("View13medium").setDescription("California State University, Chico 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,100000.0))
      .addChild(new GeoViewpoint("View13low").setDescription("California State University, Chico 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,50000.0))
      .addChild(new GeoViewpoint("View14high").setDescription("California State University Sacramento 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,200000.0))
      .addChild(new GeoViewpoint("View14medium").setDescription("California State University Sacramento 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,100000.0))
      .addChild(new GeoViewpoint("View14low").setDescription("California State University Sacramento 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,50000.0))
      .addChild(new GeoViewpoint("View15high").setDescription("Sonoma State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,200000.0))
      .addChild(new GeoViewpoint("View15medium").setDescription("Sonoma State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,100000.0))
      .addChild(new GeoViewpoint("View15low").setDescription("Sonoma State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,50000.0))
      .addChild(new GeoViewpoint("View16high").setDescription("California Maritime Academy 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,200000.0))
      .addChild(new GeoViewpoint("View16medium").setDescription("California Maritime Academy 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,100000.0))
      .addChild(new GeoViewpoint("View16low").setDescription("California Maritime Academy 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,50000.0))
      .addChild(new GeoViewpoint("View17high").setDescription("San Francisco State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,200000.0))
      .addChild(new GeoViewpoint("View17medium").setDescription("San Francisco State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,100000.0))
      .addChild(new GeoViewpoint("View17low").setDescription("San Francisco State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,50000.0))
      .addChild(new GeoViewpoint("View18high").setDescription("California State University, East Bay 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,200000.0))
      .addChild(new GeoViewpoint("View18medium").setDescription("California State University, East Bay 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,100000.0))
      .addChild(new GeoViewpoint("View18low").setDescription("California State University, East Bay 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,50000.0))
      .addChild(new GeoViewpoint("View19high").setDescription("California State University Stanislaus 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,200000.0))
      .addChild(new GeoViewpoint("View19medium").setDescription("California State University Stanislaus 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,100000.0))
      .addChild(new GeoViewpoint("View19low").setDescription("California State University Stanislaus 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,50000.0))
      .addChild(new GeoViewpoint("View20high").setDescription("San Jose State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,200000.0))
      .addChild(new GeoViewpoint("View20medium").setDescription("San Jose State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,100000.0))
      .addChild(new GeoViewpoint("View20low").setDescription("San Jose State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,50000.0))
      .addChild(new GeoViewpoint("View21high").setDescription("California State University, Monterey Bay 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,200000.0))
      .addChild(new GeoViewpoint("View21medium").setDescription("California State University, Monterey Bay 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,100000.0))
      .addChild(new GeoViewpoint("View21low").setDescription("California State University, Monterey Bay 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,50000.0))
      .addChild(new GeoViewpoint("View22high").setDescription("Fresno State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,200000.0))
      .addChild(new GeoViewpoint("View22medium").setDescription("Fresno State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,100000.0))
      .addChild(new GeoViewpoint("View22low").setDescription("Fresno State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,50000.0))
      .addChild(new GeoViewpoint("View23high").setDescription("California State University, Bakersfield 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,200000.0))
      .addChild(new GeoViewpoint("View23medium").setDescription("California State University, Bakersfield 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,100000.0))
      .addChild(new GeoViewpoint("View23low").setDescription("California State University, Bakersfield 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,50000.0))
      .addChild(new GeoViewpoint("View24high").setDescription("California Polytechnic State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,200000.0))
      .addChild(new GeoViewpoint("View24medium").setDescription("California Polytechnic State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,100000.0))
      .addChild(new GeoViewpoint("View24low").setDescription("California Polytechnic State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,50000.0))
      .addChild(new GeoViewpoint("View25high").setDescription("California State University, Channel Islands 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,200000.0))
      .addChild(new GeoViewpoint("View25medium").setDescription("California State University, Channel Islands 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,100000.0))
      .addChild(new GeoViewpoint("View25low").setDescription("California State University, Channel Islands 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,50000.0))
      .addChild(new GeoViewpoint("View26high").setDescription("California State University, Northridge 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,200000.0))
      .addChild(new GeoViewpoint("View26medium").setDescription("California State University, Northridge 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,100000.0))
      .addChild(new GeoViewpoint("View26low").setDescription("California State University, Northridge 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,50000.0))
      .addChild(new GeoViewpoint("View27high").setDescription("California State University, Los Angeles 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,200000.0))
      .addChild(new GeoViewpoint("View27medium").setDescription("California State University, Los Angeles 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,100000.0))
      .addChild(new GeoViewpoint("View27low").setDescription("California State University, Los Angeles 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,50000.0))
      .addChild(new GeoViewpoint("View28high").setDescription("California State Polytechnic University, Pomona 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,200000.0))
      .addChild(new GeoViewpoint("View28medium").setDescription("California State Polytechnic University, Pomona 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,100000.0))
      .addChild(new GeoViewpoint("View28low").setDescription("California State Polytechnic University, Pomona 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,50000.0))
      .addChild(new GeoViewpoint("View29high").setDescription("California State University, San Bernardino 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,200000.0))
      .addChild(new GeoViewpoint("View29medium").setDescription("California State University, San Bernardino 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,100000.0))
      .addChild(new GeoViewpoint("View29low").setDescription("California State University, San Bernardino 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,50000.0))
      .addChild(new GeoViewpoint("View30high").setDescription("California State University, Fullerton 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,200000.0))
      .addChild(new GeoViewpoint("View30medium").setDescription("California State University, Fullerton 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,100000.0))
      .addChild(new GeoViewpoint("View30low").setDescription("California State University, Fullerton 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,50000.0))
      .addChild(new GeoViewpoint("View31high").setDescription("California State University Dominguez Hills 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,200000.0))
      .addChild(new GeoViewpoint("View31medium").setDescription("California State University Dominguez Hills 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,100000.0))
      .addChild(new GeoViewpoint("View31low").setDescription("California State University Dominguez Hills 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,50000.0))
      .addChild(new GeoViewpoint("View32high").setDescription("California State University, Long Beach 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,200000.0))
      .addChild(new GeoViewpoint("View32medium").setDescription("California State University, Long Beach 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,100000.0))
      .addChild(new GeoViewpoint("View32low").setDescription("California State University, Long Beach 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,50000.0))
      .addChild(new GeoViewpoint("View33high").setDescription("California State University, San Marcos 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,200000.0))
      .addChild(new GeoViewpoint("View33medium").setDescription("California State University, San Marcos 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,100000.0))
      .addChild(new GeoViewpoint("View33low").setDescription("California State University, San Marcos 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,50000.0))
      .addChild(new GeoViewpoint("View34high").setDescription("San Diego State University 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,200000.0))
      .addChild(new GeoViewpoint("View34medium").setDescription("San Diego State University 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,100000.0))
      .addChild(new GeoViewpoint("View34low").setDescription("San Diego State University 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,50000.0))
      .addChild(new GeoViewpoint("View35high").setDescription("CENIC 200km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,200000.0))
      .addChild(new GeoViewpoint("View35medium").setDescription("CENIC 100km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,100000.0))
      .addChild(new GeoViewpoint("View35low").setDescription("CENIC 50km").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,50000.0)))
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
        .addChild(new GeoViewpoint().setUSE("View01high"))
        .addChild(new GeoViewpoint().setUSE("View01medium"))
        .addChild(new GeoViewpoint().setUSE("View01low"))
        .addChild(new GeoViewpoint().setUSE("View02high"))
        .addChild(new GeoViewpoint().setUSE("View02medium"))
        .addChild(new GeoViewpoint().setUSE("View02low"))
        .addChild(new GeoViewpoint().setUSE("View03high"))
        .addChild(new GeoViewpoint().setUSE("View03medium"))
        .addChild(new GeoViewpoint().setUSE("View03low"))
        .addChild(new GeoViewpoint().setUSE("View04high"))
        .addChild(new GeoViewpoint().setUSE("View04medium"))
        .addChild(new GeoViewpoint().setUSE("View04low"))
        .addChild(new GeoViewpoint().setUSE("View05high"))
        .addChild(new GeoViewpoint().setUSE("View05medium"))
        .addChild(new GeoViewpoint().setUSE("View05low"))
        .addChild(new GeoViewpoint().setUSE("View06high"))
        .addChild(new GeoViewpoint().setUSE("View06medium"))
        .addChild(new GeoViewpoint().setUSE("View06low"))
        .addChild(new GeoViewpoint().setUSE("View07high"))
        .addChild(new GeoViewpoint().setUSE("View07medium"))
        .addChild(new GeoViewpoint().setUSE("View07low"))
        .addChild(new GeoViewpoint().setUSE("View08high"))
        .addChild(new GeoViewpoint().setUSE("View08medium"))
        .addChild(new GeoViewpoint().setUSE("View08low"))
        .addChild(new GeoViewpoint().setUSE("View09high"))
        .addChild(new GeoViewpoint().setUSE("View09medium"))
        .addChild(new GeoViewpoint().setUSE("View09low"))
        .addChild(new GeoViewpoint().setUSE("View10high"))
        .addChild(new GeoViewpoint().setUSE("View10medium"))
        .addChild(new GeoViewpoint().setUSE("View10low"))
        .addChild(new GeoViewpoint().setUSE("View11high"))
        .addChild(new GeoViewpoint().setUSE("View11medium"))
        .addChild(new GeoViewpoint().setUSE("View11low"))
        .addChild(new GeoViewpoint().setUSE("View12high"))
        .addChild(new GeoViewpoint().setUSE("View12medium"))
        .addChild(new GeoViewpoint().setUSE("View12low"))
        .addChild(new GeoViewpoint().setUSE("View13high"))
        .addChild(new GeoViewpoint().setUSE("View13medium"))
        .addChild(new GeoViewpoint().setUSE("View13low"))
        .addChild(new GeoViewpoint().setUSE("View14high"))
        .addChild(new GeoViewpoint().setUSE("View14medium"))
        .addChild(new GeoViewpoint().setUSE("View14low"))
        .addChild(new GeoViewpoint().setUSE("View15high"))
        .addChild(new GeoViewpoint().setUSE("View15medium"))
        .addChild(new GeoViewpoint().setUSE("View15low"))
        .addChild(new GeoViewpoint().setUSE("View16high"))
        .addChild(new GeoViewpoint().setUSE("View16medium"))
        .addChild(new GeoViewpoint().setUSE("View16low"))
        .addChild(new GeoViewpoint().setUSE("View17high"))
        .addChild(new GeoViewpoint().setUSE("View17medium"))
        .addChild(new GeoViewpoint().setUSE("View17low"))
        .addChild(new GeoViewpoint().setUSE("View18high"))
        .addChild(new GeoViewpoint().setUSE("View18medium"))
        .addChild(new GeoViewpoint().setUSE("View18low"))
        .addChild(new GeoViewpoint().setUSE("View19high"))
        .addChild(new GeoViewpoint().setUSE("View19medium"))
        .addChild(new GeoViewpoint().setUSE("View19low"))
        .addChild(new GeoViewpoint().setUSE("View20high"))
        .addChild(new GeoViewpoint().setUSE("View20medium"))
        .addChild(new GeoViewpoint().setUSE("View20low"))
        .addChild(new GeoViewpoint().setUSE("View21high"))
        .addChild(new GeoViewpoint().setUSE("View21medium"))
        .addChild(new GeoViewpoint().setUSE("View21low"))
        .addChild(new GeoViewpoint().setUSE("View22high"))
        .addChild(new GeoViewpoint().setUSE("View22medium"))
        .addChild(new GeoViewpoint().setUSE("View22low"))
        .addChild(new GeoViewpoint().setUSE("View23high"))
        .addChild(new GeoViewpoint().setUSE("View23medium"))
        .addChild(new GeoViewpoint().setUSE("View23low"))
        .addChild(new GeoViewpoint().setUSE("View24high"))
        .addChild(new GeoViewpoint().setUSE("View24medium"))
        .addChild(new GeoViewpoint().setUSE("View24low"))
        .addChild(new GeoViewpoint().setUSE("View25high"))
        .addChild(new GeoViewpoint().setUSE("View25medium"))
        .addChild(new GeoViewpoint().setUSE("View25low"))
        .addChild(new GeoViewpoint().setUSE("View26high"))
        .addChild(new GeoViewpoint().setUSE("View26medium"))
        .addChild(new GeoViewpoint().setUSE("View26low"))
        .addChild(new GeoViewpoint().setUSE("View27high"))
        .addChild(new GeoViewpoint().setUSE("View27medium"))
        .addChild(new GeoViewpoint().setUSE("View27low"))
        .addChild(new GeoViewpoint().setUSE("View28high"))
        .addChild(new GeoViewpoint().setUSE("View28medium"))
        .addChild(new GeoViewpoint().setUSE("View28low"))
        .addChild(new GeoViewpoint().setUSE("View29high"))
        .addChild(new GeoViewpoint().setUSE("View29medium"))
        .addChild(new GeoViewpoint().setUSE("View29low"))
        .addChild(new GeoViewpoint().setUSE("View30high"))
        .addChild(new GeoViewpoint().setUSE("View30medium"))
        .addChild(new GeoViewpoint().setUSE("View30low"))
        .addChild(new GeoViewpoint().setUSE("View31high"))
        .addChild(new GeoViewpoint().setUSE("View31medium"))
        .addChild(new GeoViewpoint().setUSE("View31low"))
        .addChild(new GeoViewpoint().setUSE("View32high"))
        .addChild(new GeoViewpoint().setUSE("View32medium"))
        .addChild(new GeoViewpoint().setUSE("View32low"))
        .addChild(new GeoViewpoint().setUSE("View33high"))
        .addChild(new GeoViewpoint().setUSE("View33medium"))
        .addChild(new GeoViewpoint().setUSE("View33low"))
        .addChild(new GeoViewpoint().setUSE("View34high"))
        .addChild(new GeoViewpoint().setUSE("View34medium"))
        .addChild(new GeoViewpoint().setUSE("View34low"))
        .addChild(new GeoViewpoint().setUSE("View35high"))
        .addChild(new GeoViewpoint().setUSE("View35medium"))
        .addChild(new GeoViewpoint().setUSE("View35low"))
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
	 * @return CaliforniaCampusesTour3Altitudes model
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
        X3D thisExampleX3dModel = new CaliforniaCampusesTour3Altitudes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CaliforniaCampusesTour3Altitudes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CaliforniaCampusesTour3Altitudes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
