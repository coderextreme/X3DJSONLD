var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> Viewpoints and tour of California campuses. </p>
 <p> Related links: <a href="../../../Geospatial/CaliforniaCampuses.java">CaliforniaCampuses.java</a> source, <a href="../../../Geospatial/CaliforniaCampusesIndex.html" target="_top">CaliforniaCampuses catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor
 */

function CaliforniaCampuses
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CaliforniaCampuses.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #60, 20 total values */
	this.ExternProtoDeclare_CrossHair_3_60_appinfo = new autoclass.SFString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point");

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #76, 18 total values */
	this.ExternProtoDeclare_ViewpointSequencer_3_76_appinfo = new autoclass.SFString("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene");

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #139, 13 total values */
	this.ExternProtoDeclare_ViewPositionOrientation_3_139_appinfo = new autoclass.SFString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Geospatial").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("CaliforniaCampuses.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Viewpoints and tour of California campuses"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
    .addMeta((new autoclass.meta()).setName("created").setContent("4 March 2010"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CaliforniaCampuses.kml"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d-earth"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://x3d-earth.nps.edu"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://hamming.uc.nps.edu"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D Earth"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://mmog.ern.nps.edu/California/California.x3d"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("under development"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("KmlToX3dViewpoints.xslt"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://savage.nps.edu/Savage/license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CaliforniaCampuses.x3d"))
    .addChild((new autoclass.Switch("SwitchGlobes")).setWhichChoice(0)
      .addComments(" Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. ")
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"http://x3d-earth.nps.edu/osmdemo.x3d\"")))
      .addComments(" <Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/> ")
      .addComments(" <Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/> "))
    .addChild((new autoclass.NavigationInfo()).setTransitionType(new autoclass.MFString("\"ANIMATE\"")))
    .addChild((new autoclass.Group("PlacemarkGroup"))
      .addChild((new autoclass.GeoViewpoint("View01")).setDescription("Naval Postgraduate School").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.595599,-121.877148,250000.0))
      .addChild((new autoclass.GeoViewpoint("View02")).setDescription("University of California Davis").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.53650615157984,-121.7489628616831,250000.0))
      .addChild((new autoclass.GeoViewpoint("View03")).setDescription("University of California Berkeley").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.86963434512325,-122.2593873127355,250000.0))
      .addChild((new autoclass.GeoViewpoint("View04")).setDescription("University of California San Francisco").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.76340647188392,-122.4582475377715,250000.0))
      .addChild((new autoclass.GeoViewpoint("View05")).setDescription("University of California Santa Cruz").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.99628443046043,-122.0534325473795,250000.0))
      .addChild((new autoclass.GeoViewpoint("View06")).setDescription("University of California Merced").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.365508575977,-120.4252597059142,250000.0))
      .addChild((new autoclass.GeoViewpoint("View07")).setDescription("University of California Santa Barbara").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.41124450961521,-119.8479940053906,250000.0))
      .addChild((new autoclass.GeoViewpoint("View08")).setDescription("University of California Los Angeles").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.07224474392262,-118.4408472225642,250000.0))
      .addChild((new autoclass.GeoViewpoint("View09")).setDescription("University of California Irvine").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.64623283675919,-117.8427064139082,250000.0))
      .addChild((new autoclass.GeoViewpoint("View10")).setDescription("University of California Riverside").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.97350567066717,-117.3281649569839,250000.0))
      .addChild((new autoclass.GeoViewpoint("View11")).setDescription("University of California San Diego").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.87612136607509,-117.2367298240259,250000.0))
      .addChild((new autoclass.GeoViewpoint("View12")).setDescription("Humboldt State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.87630235623448,-124.0785789217266,250000.0))
      .addChild((new autoclass.GeoViewpoint("View13")).setDescription("California State University, Chico").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.73031527724385,-121.8453722745223,250000.0))
      .addChild((new autoclass.GeoViewpoint("View14")).setDescription("California State University Sacramento").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.5626517618963,-121.4244636520556,250000.0))
      .addChild((new autoclass.GeoViewpoint("View15")).setDescription("Sonoma State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.33922929793606,-122.6744333530031,250000.0))
      .addChild((new autoclass.GeoViewpoint("View16")).setDescription("California Maritime Academy").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.06907065059484,-122.2309147135222,250000.0))
      .addChild((new autoclass.GeoViewpoint("View17")).setDescription("San Francisco State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.722876,-122.4781512190666,250000.0))
      .addChild((new autoclass.GeoViewpoint("View18")).setDescription("California State University, East Bay").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.65707914139907,-122.0569190659761,250000.0))
      .addChild((new autoclass.GeoViewpoint("View19")).setDescription("California State University Stanislaus").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.52552478005697,-120.8563508560606,250000.0))
      .addChild((new autoclass.GeoViewpoint("View20")).setDescription("San Jose State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.33580940527095,-121.8815343755784,250000.0))
      .addChild((new autoclass.GeoViewpoint("View21")).setDescription("California State University, Monterey Bay").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.6538071781493,-121.7984465276711,250000.0))
      .addChild((new autoclass.GeoViewpoint("View22")).setDescription("Fresno State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.812166,-119.7451552005852,250000.0))
      .addChild((new autoclass.GeoViewpoint("View23")).setDescription("California State University, Bakersfield").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.350804,-119.1043226128032,250000.0))
      .addChild((new autoclass.GeoViewpoint("View24")).setDescription("California Polytechnic State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.30115692599171,-120.6595761796351,250000.0))
      .addChild((new autoclass.GeoViewpoint("View25")).setDescription("California State University, Channel Islands").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.1624126428852,-119.0425264841287,250000.0))
      .addChild((new autoclass.GeoViewpoint("View26")).setDescription("California State University, Northridge").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.23959265263849,-118.5284272400904,250000.0))
      .addChild((new autoclass.GeoViewpoint("View27")).setDescription("California State University, Los Angeles").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.06645996626264,-118.1682050902557,250000.0))
      .addChild((new autoclass.GeoViewpoint("View28")).setDescription("California State Polytechnic University, Pomona").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.05727150000314,-117.8215320234812,250000.0))
      .addChild((new autoclass.GeoViewpoint("View29")).setDescription("California State University, San Bernardino").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.18180116432101,-117.3243676664719,250000.0))
      .addChild((new autoclass.GeoViewpoint("View30")).setDescription("California State University, Fullerton").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.882522,-117.8868367869023,250000.0))
      .addChild((new autoclass.GeoViewpoint("View31")).setDescription("California State University Dominguez Hills").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.86463396857103,-118.2553596272055,250000.0))
      .addChild((new autoclass.GeoViewpoint("View32")).setDescription("California State University, Long Beach").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.78196696470824,-118.112678253688,250000.0))
      .addChild((new autoclass.GeoViewpoint("View33")).setDescription("California State University, San Marcos").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.12837619265174,-117.1600194071002,250000.0))
      .addChild((new autoclass.GeoViewpoint("View34")).setDescription("San Diego State University").setOrientation(1.0,0.0,0.0,-1.57).setPosition(32.77593126586385,-117.0722876242553,250000.0))
      .addChild((new autoclass.GeoViewpoint("View35")).setDescription("CENIC").setOrientation(1.0,0.0,0.0,-1.57).setPosition(33.879947,-118.027903,250000.0)))
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("CrossHair").setAppinfo(this.ExternProtoDeclare_CrossHair_3_60_appinfo).setUrl(new autoclass.MFString("\"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\""))
      .addField((new autoclass.field()).setName(enabled).setType(SFBool).setAccessType(initializeOnly).setAppinfo(whether CrossHair prototype is enabled or not))
      .addField((new autoclass.field()).setName(set_enabled).setType(SFBool).setAccessType(inputOnly).setAppinfo(control whether enabled/disabled))
      .addField((new autoclass.field()).setName(markerColor).setType(SFColor.0).setAccessType(inputOutput.0).setAppinfo(color,of,CrossHair,marker))
      .addField((new autoclass.field()).setName(scale).setType(SFVec3f).setAccessType(inputOutput.0).setAppinfo(size,of,CrossHair,in,meters))
      .addField((new autoclass.field()).setName(positionOffsetFromCamera).setType(SFVec3f).setAccessType(inputOutput.0).setAppinfo(distance,in,front,of,HUD,viewpoint)))
    .addChild((new autoclass.ProtoInstance("CrossHairInstance", "CrossHair"))
      .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue(true))
      .addFieldValue((new autoclass.fieldValue()).setName("markerColor").setValue(0.1 0.8 0.1))
      .addFieldValue((new autoclass.fieldValue()).setName("scale").setValue(0.5 0.5 0.5))
      .addFieldValue((new autoclass.fieldValue()).setName("positionOffsetFromCamera").setValue(0 0 -5)))
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new autoclass.MFString("\"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\""))
      .addField((new autoclass.field()).setName(children).setType(MFNode).setAccessType(inputOutput).setAppinfo(X3D content positioned at HUD offset))
      .addField((new autoclass.field()).setName(screenOffset).setType(SFVec3f).setAccessType(inputOutput.0).setAppinfo(offset,position,for,HUD,relative,to,current,view,location,,default,0.0,0.0,-5.0))
      .addField((new autoclass.field()).setName(position_changed).setType(SFVec3f).setAccessType(outputOnly.0).setAppinfo(HUD,position,update,(in,world,coordinates),relative,to.0,original.0,location.0))
      .addField((new autoclass.field()).setName(orientation_changed).setType(SFRotation.0).setAccessType(outputOnly.0).setAppinfo(HUD,orientation,update,relative,to.0,original.0,location.0)))
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("ViewpointSequencer").setAppinfo(this.ExternProtoDeclare_ViewpointSequencer_3_76_appinfo).setUrl(new autoclass.MFString("\"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\""))
      .addField((new autoclass.field()).setName(viewpoints).setType(MFNode).setAccessType(initializeOnly).setAppinfo(Viewpoint USE nodes that are sequentially bound))
      .addField((new autoclass.field()).setName(interval).setType(SFTime).setAccessType(inputOutput).setAppinfo(number of seconds between viewpoint shifts))
      .addField((new autoclass.field()).setName(enabled).setType(SFBool).setAccessType(inputOutput).setAppinfo(whether ViewpointSequencer is enabled or not))
      .addField((new autoclass.field()).setName(set_enabled).setType(SFBool).setAccessType(inputOnly).setAppinfo(whether ViewpointSequencer is enabled or not))
      .addField((new autoclass.field()).setName(previous).setType(SFBool).setAccessType(inputOnly).setAppinfo(bind previous Viewpoint in list))
      .addField((new autoclass.field()).setName(next).setType(SFBool).setAccessType(inputOnly).setAppinfo(bind next Viewpoint in list))
      .addField((new autoclass.field()).setName(new autoclass.MFString("\"toggleMessage\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"inputOutput\"")).setAppinfo(new autoclass.MFString("\"Select message to toggle ViewpointSequencer\"")))
      .addField((new autoclass.field()).setName(toggleMessageFontSize).setType(SFFloat).setAccessType(initializeOnly).setAppinfo(Color for toggleMessage text))
      .addField((new autoclass.field()).setName(toggleMessageColor).setType(SFColor.0).setAccessType(inputOutput.0).setAppinfo(Color,for,toggleMessage,text))
      .addField((new autoclass.field()).setName(traceEnabled).setType(SFBool).setAccessType(inputOutput).setAppinfo(enable console output)))
    .addChild((new autoclass.ProtoInstance("ViewpointTour", "ViewpointSequencer"))
      .addFieldValue((new autoclass.fieldValue()).setName("interval").setValue(30))
      .addComments(" initially enabled is off, scene provides selectable text to activate ")
      .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue(true))
      .addFieldValue((new autoclass.fieldValue()).setName("toggleMessage").setValue("ViewpointSequencer tour"))
      .addFieldValue((new autoclass.fieldValue()).setName("viewpoints")
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.GeoViewpoint()))
        .addChild((new autoclass.Viewpoint("View4")).setDescription("View four (-X axis)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))))
    .addComments(" ==================== ")
    .addChild((new autoclass.GeoLocation()).setGeoCoords(36.595599,-121.877148,624990.0)
      .addChild((new autoclass.Billboard()).setAxisOfRotation(0.0,0.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ViewpointSequencer tour\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.25).setDiffuseColor(0.795918,0.505869,0.093315).setShininess(0.39).setSpecularColor(0.923469,0.428866,0.006369)))))
      .addChild((new autoclass.TouchSensor("TourTouch")).setDescription("Touch text to turn tour on/off"))
      .addChild((new autoclass.BooleanToggle("TourToggle")))
      .addChild((new autoclass.ROUTE()).setFromNode("TourTouch").setFromField("isActive").setToNode("TourToggle").setToField("set_boolean"))
      .addChild((new autoclass.ROUTE()).setFromNode("TourToggle").setFromField("toggle").setToNode("ViewpointTour").setToField("set_enabled")))
    .addComments(" ==================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("ViewPositionOrientation").setAppinfo(this.ExternProtoDeclare_ViewPositionOrientation_3_139_appinfo).setUrl(new autoclass.MFString("\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\""))
      .addField((new autoclass.field()).setName(enabled).setType(SFBool).setAccessType(inputOutput).setAppinfo(Whether or not ViewPositionOrientation sends output to console))
      .addField((new autoclass.field()).setName(traceEnabled).setType(SFBool).setAccessType(initializeOnly).setAppinfo(Output internal trace messages for debugging this node, intended for developer use only))
      .addField((new autoclass.field()).setName(set_traceEnabled).setType(SFBool).setAccessType(inputOnly).setAppinfo(Ability to turn output tracing on/off at runtime))
      .addField((new autoclass.field()).setName(position_changed).setType(SFVec3f).setAccessType(outputOnly.0).setAppinfo(Output.0,local.0,position.0))
      .addField((new autoclass.field()).setName(orientation_changed).setType(SFRotation.0).setAccessType(outputOnly.0).setAppinfo(Output,local,orientation))
      .addField((new autoclass.field()).setName(new autoclass.MFString("\"outputViewpointString\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\"")).setAppinfo(new autoclass.MFString("\"MFString value of new Viewpoint\""))))
    .addChild((new autoclass.ProtoInstance("ExampleViewPositionOrientation", "ViewPositionOrientation"))
      .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue(false)))
    .addComments(" ==================== "));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CaliforniaCampuses model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new CaliforniaCampuses();
		console.log ("CaliforniaCampuses execution self-validation test results: " + testObject.validateSelf());
	}
}
new CaliforniaCampuses().main();