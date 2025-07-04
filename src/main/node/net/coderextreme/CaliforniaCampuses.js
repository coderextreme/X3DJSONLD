var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Geospatial").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("CaliforniaCampuses.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Viewpoints and tour of California campuses"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
        .addMeta(new autoclass.meta().setName("created").setContent("4 March 2010"))
        .addMeta(new autoclass.meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new autoclass.meta().setName("reference").setContent("CaliforniaCampuses.kml"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d-earth"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://x3d-earth.nps.edu"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://hamming.uc.nps.edu"))
        .addMeta(new autoclass.meta().setName("subject").setContent("X3D Earth"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://mmog.ern.nps.edu/California/California.x3d"))
        .addMeta(new autoclass.meta().setName("warning").setContent("under development"))
        .addMeta(new autoclass.meta().setName("warning").setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
        .addMeta(new autoclass.meta().setName("generator").setContent("KmlToX3dViewpoints.xslt"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("https://savage.nps.edu/Savage/license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("CaliforniaCampuses.x3d"))
        .addChild(new autoclass.Switch().setDEF("SwitchGlobes").setWhichChoice(0)
          .addComments((new autoclass.CommentsBlock("Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.")))
          .addChild(new autoclass.Inline().setUrl(java.newArray("java.lang.String", ["http://x3d-earth.nps.edu/osmdemo.x3d"])))
          .addComments((new autoclass.CommentsBlock("<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>")))
          .addComments((new autoclass.CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>")))
          .addComments((new autoclass.CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>")))
          .addComments((new autoclass.CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>"))))
        .addChild(new autoclass.NavigationInfo().setTransitionType(java.newArray("java.lang.String", ["ANIMATE"])))
        .addChild(new autoclass.Group().setDEF("PlacemarkGroup")
          .addChild(new autoclass.GeoViewpoint().setDEF("View01").setDescription("Naval Postgraduate School").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [36.595599,-121.877148,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View02").setDescription("University of California Davis").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [38.53650615157984,-121.7489628616831,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View03").setDescription("University of California Berkeley").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.86963434512325,-122.2593873127355,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View04").setDescription("University of California San Francisco").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.76340647188392,-122.4582475377715,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View05").setDescription("University of California Santa Cruz").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [36.99628443046043,-122.0534325473795,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View06").setDescription("University of California Merced").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.365508575977,-120.4252597059142,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View07").setDescription("University of California Santa Barbara").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.41124450961521,-119.8479940053906,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View08").setDescription("University of California Los Angeles").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.07224474392262,-118.4408472225642,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View09").setDescription("University of California Irvine").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.64623283675919,-117.8427064139082,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View10").setDescription("University of California Riverside").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.97350567066717,-117.3281649569839,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View11").setDescription("University of California San Diego").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [32.87612136607509,-117.2367298240259,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View12").setDescription("Humboldt State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [40.87630235623448,-124.0785789217266,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View13").setDescription("California State University, Chico").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [39.73031527724385,-121.8453722745223,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View14").setDescription("California State University Sacramento").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [38.5626517618963,-121.4244636520556,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View15").setDescription("Sonoma State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [38.33922929793606,-122.6744333530031,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View16").setDescription("California Maritime Academy").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [38.06907065059484,-122.2309147135222,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View17").setDescription("San Francisco State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.722876,-122.4781512190666,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View18").setDescription("California State University, East Bay").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.65707914139907,-122.0569190659761,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View19").setDescription("California State University Stanislaus").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.52552478005697,-120.8563508560606,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View20").setDescription("San Jose State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [37.33580940527095,-121.8815343755784,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View21").setDescription("California State University, Monterey Bay").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [36.6538071781493,-121.7984465276711,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View22").setDescription("Fresno State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [36.812166,-119.7451552005852,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View23").setDescription("California State University, Bakersfield").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [35.350804,-119.1043226128032,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View24").setDescription("California Polytechnic State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [35.30115692599171,-120.6595761796351,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View25").setDescription("California State University, Channel Islands").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.1624126428852,-119.0425264841287,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View26").setDescription("California State University, Northridge").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.23959265263849,-118.5284272400904,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View27").setDescription("California State University, Los Angeles").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.06645996626264,-118.1682050902557,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View28").setDescription("California State Polytechnic University, Pomona").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.05727150000314,-117.8215320234812,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View29").setDescription("California State University, San Bernardino").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [34.18180116432101,-117.3243676664719,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View30").setDescription("California State University, Fullerton").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.882522,-117.8868367869023,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View31").setDescription("California State University Dominguez Hills").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.86463396857103,-118.2553596272055,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View32").setDescription("California State University, Long Beach").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.78196696470824,-118.112678253688,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View33").setDescription("California State University, San Marcos").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.12837619265174,-117.1600194071002,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View34").setDescription("San Diego State University").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [32.77593126586385,-117.0722876242553,250000])))
          .addChild(new autoclass.GeoViewpoint().setDEF("View35").setDescription("CENIC").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("double", [33.879947,-118.027903,250000]))))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild(new autoclass.ExternProtoDeclare().setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(java.newArray("java.lang.String", ["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrossHair prototype is enabled or not"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("set_enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("markerColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("positionOffsetFromCamera").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("CrossHair").setDEF("CrossHairInstance"))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild(new autoclass.ExternProtoDeclare().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(java.newArray("java.lang.String", ["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("screenOffset").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild(new autoclass.ExternProtoDeclare().setName("ViewpointSequencer").setAppinfo("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene").setUrl(java.newArray("java.lang.String", ["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"]))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("viewpoints").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Viewpoint USE nodes that are sequentially bound"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("interval").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("number of seconds between viewpoint shifts"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether ViewpointSequencer is enabled or not"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("set_enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("whether ViewpointSequencer is enabled or not"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("previous").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("bind previous Viewpoint in list"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("next").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("bind next Viewpoint in list"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("toggleMessage").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Select message to toggle ViewpointSequencer"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("toggleMessageFontSize").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Color for toggleMessage text"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("toggleMessageColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color for toggleMessage text"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("enable console output")))
        .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("ViewpointSequencer").setDEF("ViewpointTour")
          .addComments((new autoclass.CommentsBlock("initially enabled is off, scene provides selectable text to activate"))))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild(new autoclass.GeoLocation().setGeoCoords(java.newArray("double", [36.595599,-121.877148,624990]))
          .addChild(new autoclass.Billboard().setAxisOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["ViewpointSequencer tour"]))
                .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setAmbientIntensity(java.newFloat(0.25)).setDiffuseColor(java.newArray("float", [java.newFloat(0.795918), java.newFloat(0.505869), java.newFloat(0.093315)])).setShininess(java.newFloat(0.39)).setSpecularColor(java.newArray("float", [java.newFloat(0.923469), java.newFloat(0.428866), java.newFloat(0.006369)]))))))
          .addChild(new autoclass.TouchSensor().setDEF("TourTouch").setDescription("Touch text to turn tour on/off"))
          .addChild(new autoclass.BooleanToggle().setDEF("TourToggle"))
          .addChild(new autoclass.ROUTE().setFromField("isActive").setFromNode("TourTouch").setToField("set_boolean").setToNode("TourToggle"))
          .addChild(new autoclass.ROUTE().setFromField("toggle").setFromNode("TourToggle").setToField("set_enabled").setToNode("ViewpointTour")))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild(new autoclass.ExternProtoDeclare().setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates").setUrl(java.newArray("java.lang.String", ["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint")))
        .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("ViewPositionOrientation").setDEF("ExampleViewPositionOrientation"))
        .addComments((new autoclass.CommentsBlock("===================="))))      ;
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("enabled").setValue("true"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("markerColor").setValue("0.1 0.8 0.1"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("scale").setValue("0.5 0.5 0.5"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("positionOffsetFromCamera").setValue("0 0 -5"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("interval").setValue("30"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("enabled").setValue("true"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("toggleMessage").setValue("\"ViewpointSequencer tour\""));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("viewpoints")
            .addChild(new autoclass.GeoViewpoint().setUSE("View01"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View02"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View03"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View04"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View05"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View06"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View07"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View08"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View09"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View10"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View11"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View12"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View13"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View14"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View15"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View16"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View17"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View18"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View19"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View20"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View21"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View22"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View23"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View24"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View25"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View26"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View27"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View28"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View29"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View30"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View31"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View32"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View33"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View34"))
            .addChild(new autoclass.GeoViewpoint().setUSE("View35"))
            .addChild(new autoclass.Viewpoint().setDEF("View4").setDescription("View four (-X axis)").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(-10), java.newFloat(0), java.newFloat(0)]))));
ProtoInstance2
          .addFieldValue(new autoclass.fieldValue().setName("enabled").setValue("false"));
    X3D0.toFileX3D(".././CaliforniaCampuses.new.node.x3d");
    X3D0.toFileJSON(".././CaliforniaCampuses.new.node.json");
    process.exit(0);
