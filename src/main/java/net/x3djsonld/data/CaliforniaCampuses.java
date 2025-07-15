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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Viewpoints and tour of California campuses. </p>
 <p> Related links: Catalog page <a href="../../../Geospatial/CaliforniaCampusesIndex.html" target="_blank">CaliforniaCampuses</a>,  source <a href="../../../Geospatial/CaliforniaCampuses.java">CaliforniaCampuses.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/CaliforniaCampuses.x3d">CaliforniaCampuses.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor
 */

public class CaliforniaCampuses
{
	/** Default constructor to create this object. */
	public CaliforniaCampuses ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CaliforniaCampuses.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Viewpoints and tour of California campuses"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 March 2010"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CaliforniaCampuses.kml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d-earth"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://x3d-earth.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://hamming.uc.nps.edu"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Earth"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://mmog.ern.nps.edu/California/California.x3d"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("KmlToX3dViewpoints.xslt"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://savage.nps.edu/Savage/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CaliforniaCampuses.x3d"))
    .addChild(new Switch("SwitchGlobes").setWhichChoice(0)
      .addComments(" Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. ")
      .addChild(new Inline().setUrl(new String[] {"http://x3d-earth.nps.edu/osmdemo.x3d"}))
      .addComments(" <Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/> "))
    .addChild(new NavigationInfo().setTransitionType(new String[] {"ANIMATE"}))
    .addChild(new Group("PlacemarkGroup")
      .addChild(new GeoViewpoint("View01").setDescription("Naval Postgraduate School").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,250000.0))
      .addChild(new GeoViewpoint("View02").setDescription("University of California Davis").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,250000.0))
      .addChild(new GeoViewpoint("View03").setDescription("University of California Berkeley").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,250000.0))
      .addChild(new GeoViewpoint("View04").setDescription("University of California San Francisco").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,250000.0))
      .addChild(new GeoViewpoint("View05").setDescription("University of California Santa Cruz").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,250000.0))
      .addChild(new GeoViewpoint("View06").setDescription("University of California Merced").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,250000.0))
      .addChild(new GeoViewpoint("View07").setDescription("University of California Santa Barbara").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,250000.0))
      .addChild(new GeoViewpoint("View08").setDescription("University of California Los Angeles").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,250000.0))
      .addChild(new GeoViewpoint("View09").setDescription("University of California Irvine").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,250000.0))
      .addChild(new GeoViewpoint("View10").setDescription("University of California Riverside").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,250000.0))
      .addChild(new GeoViewpoint("View11").setDescription("University of California San Diego").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,250000.0))
      .addChild(new GeoViewpoint("View12").setDescription("Humboldt State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,250000.0))
      .addChild(new GeoViewpoint("View13").setDescription("California State University, Chico").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,250000.0))
      .addChild(new GeoViewpoint("View14").setDescription("California State University Sacramento").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,250000.0))
      .addChild(new GeoViewpoint("View15").setDescription("Sonoma State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,250000.0))
      .addChild(new GeoViewpoint("View16").setDescription("California Maritime Academy").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,250000.0))
      .addChild(new GeoViewpoint("View17").setDescription("San Francisco State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,250000.0))
      .addChild(new GeoViewpoint("View18").setDescription("California State University, East Bay").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,250000.0))
      .addChild(new GeoViewpoint("View19").setDescription("California State University Stanislaus").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,250000.0))
      .addChild(new GeoViewpoint("View20").setDescription("San Jose State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,250000.0))
      .addChild(new GeoViewpoint("View21").setDescription("California State University, Monterey Bay").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,250000.0))
      .addChild(new GeoViewpoint("View22").setDescription("Fresno State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,250000.0))
      .addChild(new GeoViewpoint("View23").setDescription("California State University, Bakersfield").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,250000.0))
      .addChild(new GeoViewpoint("View24").setDescription("California Polytechnic State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,250000.0))
      .addChild(new GeoViewpoint("View25").setDescription("California State University, Channel Islands").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,250000.0))
      .addChild(new GeoViewpoint("View26").setDescription("California State University, Northridge").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,250000.0))
      .addChild(new GeoViewpoint("View27").setDescription("California State University, Los Angeles").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,250000.0))
      .addChild(new GeoViewpoint("View28").setDescription("California State Polytechnic University, Pomona").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,250000.0))
      .addChild(new GeoViewpoint("View29").setDescription("California State University, San Bernardino").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,250000.0))
      .addChild(new GeoViewpoint("View30").setDescription("California State University, Fullerton").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,250000.0))
      .addChild(new GeoViewpoint("View31").setDescription("California State University Dominguez Hills").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,250000.0))
      .addChild(new GeoViewpoint("View32").setDescription("California State University, Long Beach").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,250000.0))
      .addChild(new GeoViewpoint("View33").setDescription("California State University, San Marcos").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,250000.0))
      .addChild(new GeoViewpoint("View34").setDescription("San Diego State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,250000.0))
      .addChild(new GeoViewpoint("View35").setDescription("CENIC").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,250000.0)))
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
    .addChild(new ExternProtoDeclare("HeadsUpDisplay").setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new String[] {"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"})
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
      .addFieldValue(new fieldValue().setName("interval").setValue(30))
      .addComments(" initially enabled is off, scene provides selectable text to activate ")
      .addFieldValue(new fieldValue().setName("enabled").setValue(true))
      .addFieldValue(new fieldValue().setName("toggleMessage").setValue(new String[] {"ViewpointSequencer tour"}))
      .addFieldValue(new fieldValue().setName("viewpoints")
        .addChild(new GeoViewpoint().setUSE("View01"))
        .addChild(new GeoViewpoint().setUSE("View02"))
        .addChild(new GeoViewpoint().setUSE("View03"))
        .addChild(new GeoViewpoint().setUSE("View04"))
        .addChild(new GeoViewpoint().setUSE("View05"))
        .addChild(new GeoViewpoint().setUSE("View06"))
        .addChild(new GeoViewpoint().setUSE("View07"))
        .addChild(new GeoViewpoint().setUSE("View08"))
        .addChild(new GeoViewpoint().setUSE("View09"))
        .addChild(new GeoViewpoint().setUSE("View10"))
        .addChild(new GeoViewpoint().setUSE("View11"))
        .addChild(new GeoViewpoint().setUSE("View12"))
        .addChild(new GeoViewpoint().setUSE("View13"))
        .addChild(new GeoViewpoint().setUSE("View14"))
        .addChild(new GeoViewpoint().setUSE("View15"))
        .addChild(new GeoViewpoint().setUSE("View16"))
        .addChild(new GeoViewpoint().setUSE("View17"))
        .addChild(new GeoViewpoint().setUSE("View18"))
        .addChild(new GeoViewpoint().setUSE("View19"))
        .addChild(new GeoViewpoint().setUSE("View20"))
        .addChild(new GeoViewpoint().setUSE("View21"))
        .addChild(new GeoViewpoint().setUSE("View22"))
        .addChild(new GeoViewpoint().setUSE("View23"))
        .addChild(new GeoViewpoint().setUSE("View24"))
        .addChild(new GeoViewpoint().setUSE("View25"))
        .addChild(new GeoViewpoint().setUSE("View26"))
        .addChild(new GeoViewpoint().setUSE("View27"))
        .addChild(new GeoViewpoint().setUSE("View28"))
        .addChild(new GeoViewpoint().setUSE("View29"))
        .addChild(new GeoViewpoint().setUSE("View30"))
        .addChild(new GeoViewpoint().setUSE("View31"))
        .addChild(new GeoViewpoint().setUSE("View32"))
        .addChild(new GeoViewpoint().setUSE("View33"))
        .addChild(new GeoViewpoint().setUSE("View34"))
        .addChild(new GeoViewpoint().setUSE("View35"))
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
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CaliforniaCampuses model
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
        X3D thisExampleX3dModel = new CaliforniaCampuses().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.CaliforniaCampuses\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.CaliforniaCampuses self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./CaliforniaCampuses_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./CaliforniaCampuses_JavaExport.x3d"; 
                String filenameX3DV = "./CaliforniaCampuses_JavaExport.x3dv"; 
                String filenameJSON = "./CaliforniaCampuses_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
