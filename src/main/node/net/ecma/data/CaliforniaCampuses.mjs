'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var GeoViewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3d = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var GeoLocation = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var BooleanToggle = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Geospatial"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CaliforniaCampuses.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Viewpoints and tour of California campuses")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("4 March 2010")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CaliforniaCampuses.kml")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d-earth")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://x3d-earth.nps.edu")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://hamming.uc.nps.edu")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D Earth")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://mmog.ern.nps.edu/California/California.x3d")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("mmog.ern.nps.edu restricted to internal access within NPS firewall only")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("KmlToX3dViewpoints.xslt")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://savage.nps.edu/Savage/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("CaliforniaCampuses.x3d")}),

            new Switch({
              DEF : new SFString("SwitchGlobes"),
              whichChoice : new SFInt32(0),
              /*Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.*/
              children : new MFNode([
                new Inline({
                  url : new MFString(["http://x3d-earth.nps.edu/osmdemo.x3d"])}),
              /*<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>*/])}),

            new NavigationInfo({
              transitionType : new MFString(["ANIMATE"])}),

            new Group({
              DEF : new SFString("PlacemarkGroup"),
              children : new MFNode([
                new GeoViewpoint({
                  DEF : new SFString("View01"),
                  description : new SFString("Naval Postgraduate School"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([36.595599,-121.877148,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View02"),
                  description : new SFString("University of California Davis"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([38.53650615157984,-121.7489628616831,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View03"),
                  description : new SFString("University of California Berkeley"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.86963434512325,-122.2593873127355,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View04"),
                  description : new SFString("University of California San Francisco"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.76340647188392,-122.4582475377715,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View05"),
                  description : new SFString("University of California Santa Cruz"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([36.99628443046043,-122.0534325473795,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View06"),
                  description : new SFString("University of California Merced"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.365508575977,-120.4252597059142,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View07"),
                  description : new SFString("University of California Santa Barbara"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.41124450961521,-119.8479940053906,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View08"),
                  description : new SFString("University of California Los Angeles"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.07224474392262,-118.4408472225642,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View09"),
                  description : new SFString("University of California Irvine"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.64623283675919,-117.8427064139082,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View10"),
                  description : new SFString("University of California Riverside"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.97350567066717,-117.3281649569839,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View11"),
                  description : new SFString("University of California San Diego"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([32.87612136607509,-117.2367298240259,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View12"),
                  description : new SFString("Humboldt State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([40.87630235623448,-124.0785789217266,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View13"),
                  description : new SFString("California State University, Chico"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([39.73031527724385,-121.8453722745223,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View14"),
                  description : new SFString("California State University Sacramento"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([38.5626517618963,-121.4244636520556,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View15"),
                  description : new SFString("Sonoma State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([38.33922929793606,-122.6744333530031,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View16"),
                  description : new SFString("California Maritime Academy"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([38.06907065059484,-122.2309147135222,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View17"),
                  description : new SFString("San Francisco State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.722876,-122.4781512190666,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View18"),
                  description : new SFString("California State University, East Bay"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.65707914139907,-122.0569190659761,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View19"),
                  description : new SFString("California State University Stanislaus"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.52552478005697,-120.8563508560606,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View20"),
                  description : new SFString("San Jose State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([37.33580940527095,-121.8815343755784,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View21"),
                  description : new SFString("California State University, Monterey Bay"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([36.6538071781493,-121.7984465276711,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View22"),
                  description : new SFString("Fresno State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([36.812166,-119.7451552005852,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View23"),
                  description : new SFString("California State University, Bakersfield"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([35.350804,-119.1043226128032,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View24"),
                  description : new SFString("California Polytechnic State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([35.30115692599171,-120.6595761796351,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View25"),
                  description : new SFString("California State University, Channel Islands"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.1624126428852,-119.0425264841287,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View26"),
                  description : new SFString("California State University, Northridge"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.23959265263849,-118.5284272400904,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View27"),
                  description : new SFString("California State University, Los Angeles"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.06645996626264,-118.1682050902557,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View28"),
                  description : new SFString("California State Polytechnic University, Pomona"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.05727150000314,-117.8215320234812,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View29"),
                  description : new SFString("California State University, San Bernardino"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([34.18180116432101,-117.3243676664719,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View30"),
                  description : new SFString("California State University, Fullerton"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.882522,-117.8868367869023,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View31"),
                  description : new SFString("California State University Dominguez Hills"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.86463396857103,-118.2553596272055,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View32"),
                  description : new SFString("California State University, Long Beach"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.78196696470824,-118.112678253688,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View33"),
                  description : new SFString("California State University, San Marcos"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.12837619265174,-117.1600194071002,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View34"),
                  description : new SFString("San Diego State University"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([32.77593126586385,-117.0722876242553,250000])}),

                new GeoViewpoint({
                  DEF : new SFString("View35"),
                  description : new SFString("CENIC"),
                  orientation : new SFRotation([1,0,0,-1.57]),
                  position : new SFVec3d([33.879947,-118.027903,250000])})])}),
          /*====================*/

            new ExternProtoDeclare({
              name : new SFString("CrossHair"),
              appinfo : new SFString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"),
              url : new MFString(["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("whether CrossHair prototype is enabled or not")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("control whether enabled/disabled")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("markerColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("color of CrossHair marker")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("scale"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("size of CrossHair in meters")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("positionOffsetFromCamera"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("distance in front of HUD viewpoint")})])}),

            new ProtoInstance({
              name : new SFString("CrossHair"),
              DEF : new SFString("CrossHairInstance"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("markerColor"),
                  value : new SFString("0.1 0.8 0.1")}),

                new fieldValue({
                  name : new SFString("scale"),
                  value : new SFString("0.5 0.5 0.5")}),

                new fieldValue({
                  name : new SFString("positionOffsetFromCamera"),
                  value : new SFString("0 0 -5")})])}),
          /*====================*/

            new ExternProtoDeclare({
              name : new SFString("HeadsUpDisplay"),
              appinfo : new SFString("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"),
              url : new MFString(["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("X3D content positioned at HUD offset")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("screenOffset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("offset position for HUD relative to current view location, default 0 0 -5")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("HUD position update (in world coordinates) relative to original location")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("HUD orientation update relative to original location")})])}),
          /*====================*/

            new ExternProtoDeclare({
              name : new SFString("ViewpointSequencer"),
              appinfo : new SFString("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"),
              url : new MFString(["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("viewpoints"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("Viewpoint USE nodes that are sequentially bound")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("interval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("number of seconds between viewpoint shifts")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("whether ViewpointSequencer is enabled or not")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("whether ViewpointSequencer is enabled or not")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("previous"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("bind previous Viewpoint in list")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("next"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("bind next Viewpoint in list")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("toggleMessage"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Select message to toggle ViewpointSequencer")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("toggleMessageFontSize"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("Color for toggleMessage text")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("toggleMessageColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Color for toggleMessage text")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("enable console output")})])}),

            new ProtoInstance({
              name : new SFString("ViewpointSequencer"),
              DEF : new SFString("ViewpointTour"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("interval"),
                  value : new SFString("30")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("toggleMessage"),
                  value : new SFString("\"ViewpointSequencer tour\"")}),

                new fieldValue({
                  name : new SFString("viewpoints"),
                  children : new MFNode([
                    new GeoViewpoint({
                      USE : new SFString("View01")}),

                    new GeoViewpoint({
                      USE : new SFString("View02")}),

                    new GeoViewpoint({
                      USE : new SFString("View03")}),

                    new GeoViewpoint({
                      USE : new SFString("View04")}),

                    new GeoViewpoint({
                      USE : new SFString("View05")}),

                    new GeoViewpoint({
                      USE : new SFString("View06")}),

                    new GeoViewpoint({
                      USE : new SFString("View07")}),

                    new GeoViewpoint({
                      USE : new SFString("View08")}),

                    new GeoViewpoint({
                      USE : new SFString("View09")}),

                    new GeoViewpoint({
                      USE : new SFString("View10")}),

                    new GeoViewpoint({
                      USE : new SFString("View11")}),

                    new GeoViewpoint({
                      USE : new SFString("View12")}),

                    new GeoViewpoint({
                      USE : new SFString("View13")}),

                    new GeoViewpoint({
                      USE : new SFString("View14")}),

                    new GeoViewpoint({
                      USE : new SFString("View15")}),

                    new GeoViewpoint({
                      USE : new SFString("View16")}),

                    new GeoViewpoint({
                      USE : new SFString("View17")}),

                    new GeoViewpoint({
                      USE : new SFString("View18")}),

                    new GeoViewpoint({
                      USE : new SFString("View19")}),

                    new GeoViewpoint({
                      USE : new SFString("View20")}),

                    new GeoViewpoint({
                      USE : new SFString("View21")}),

                    new GeoViewpoint({
                      USE : new SFString("View22")}),

                    new GeoViewpoint({
                      USE : new SFString("View23")}),

                    new GeoViewpoint({
                      USE : new SFString("View24")}),

                    new GeoViewpoint({
                      USE : new SFString("View25")}),

                    new GeoViewpoint({
                      USE : new SFString("View26")}),

                    new GeoViewpoint({
                      USE : new SFString("View27")}),

                    new GeoViewpoint({
                      USE : new SFString("View28")}),

                    new GeoViewpoint({
                      USE : new SFString("View29")}),

                    new GeoViewpoint({
                      USE : new SFString("View30")}),

                    new GeoViewpoint({
                      USE : new SFString("View31")}),

                    new GeoViewpoint({
                      USE : new SFString("View32")}),

                    new GeoViewpoint({
                      USE : new SFString("View33")}),

                    new GeoViewpoint({
                      USE : new SFString("View34")}),

                    new GeoViewpoint({
                      USE : new SFString("View35")}),

                    new Viewpoint({
                      DEF : new SFString("View4"),
                      description : new SFString("View four (-X axis)"),
                      orientation : new SFRotation([0,1,0,-1.57]),
                      position : new SFVec3f([-10,0,0])})])}),
              /*initially enabled is off, scene provides selectable text to activate*/])}),
          /*====================*/

            new GeoLocation({
              geoCoords : new SFVec3d([36.595599,-121.877148,624990]),
              children : new MFNode([
                new Billboard({
                  axisOfRotation : new SFVec3f([0,0,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["ViewpointSequencer tour"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.25),
                              diffuseColor : new SFColor([0.795918,0.505869,0.093315]),
                              shininess : new SFFloat(0.39),
                              specularColor : new SFColor([0.923469,0.428866,0.006369])}))}))})])}),

                new TouchSensor({
                  DEF : new SFString("TourTouch"),
                  description : new SFString("Touch text to turn tour on/off")}),

                new BooleanToggle({
                  DEF : new SFString("TourToggle")}),

                new ROUTE({
                  fromField : new SFString("isActive"),
                  fromNode : new SFString("TourTouch"),
                  toField : new SFString("set_boolean"),
                  toNode : new SFString("TourToggle")}),

                new ROUTE({
                  fromField : new SFString("toggle"),
                  fromNode : new SFString("TourToggle"),
                  toField : new SFString("set_enabled"),
                  toNode : new SFString("ViewpointTour")})])}),
          /*====================*/

            new ExternProtoDeclare({
              name : new SFString("ViewPositionOrientation"),
              appinfo : new SFString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"),
              url : new MFString(["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether or not ViewPositionOrientation sends output to console")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("Output internal trace messages for debugging this node, intended for developer use only")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("Ability to turn output tracing on/off at runtime")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Output local position")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Output local orientation")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("outputViewpointString"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("MFString value of new Viewpoint")})])}),

            new ProtoInstance({
              name : new SFString("ViewPositionOrientation"),
              DEF : new SFString("ExampleViewPositionOrientation"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("false")})])}),
          /*====================*/])}))});
console.log(X3D0.toXMLNode());
