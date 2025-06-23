const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Geospatial", 1));
scene.addMetaData("title", "CaliforniaCampuses.x3d");
scene.addMetaData("description", "Viewpoints and tour of California campuses");
scene.addMetaData("creator", "Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor");
scene.addMetaData("created", "4 March 2010");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("reference", "CaliforniaCampuses.kml");
scene.addMetaData("reference", "https://www.web3d.org/x3d-earth");
scene.addMetaData("reference", "http://x3d-earth.nps.edu");
scene.addMetaData("reference", "http://hamming.uc.nps.edu");
scene.addMetaData("subject", "X3D Earth");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d");
scene.addMetaData("reference", "http://mmog.ern.nps.edu/California/California.x3d");
scene.addMetaData("warning", "under development");
scene.addMetaData("warning", "mmog.ern.nps.edu restricted to internal access within NPS firewall only");
scene.addMetaData("generator", "KmlToX3dViewpoints.xslt");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "https://savage.nps.edu/Savage/license.html");
await browser .loadComponents (scene);
let WorldInfo21 = browser.currentScene.createNode("WorldInfo");
WorldInfo21.title = "CaliforniaCampuses.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo21;

let Switch22 = browser.currentScene.createNode("Switch");
Switch22.DEF = "SwitchGlobes";
Switch22.whichChoice = 0;
//Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.
let Inline23 = browser.currentScene.createNode("Inline");
Inline23.url = new X3D.MFString([new X3D.SFString("http://x3d-earth.nps.edu/osmdemo.x3d")]);
Switch22YYY.children = new X3D.MFNode();

Switch22ZZZ.children[0] = Inline23;

//<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>
browser.currentScene.children[1] = Switch22;

let NavigationInfo24 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo24.transitionType = new X3D.MFString([new X3D.SFString("ANIMATE")]);
browser.currentScene.children[2] = NavigationInfo24;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "PlacemarkGroup";
let GeoViewpoint26 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint26.DEF = "View01";
GeoViewpoint26.description = "Naval Postgraduate School";
GeoViewpoint26.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint26.position = new X3D.SFVec3d([36.595599,-121.877148,250000]);
Group25YYY.children = new X3D.MFNode();

Group25ZZZ.children[0] = GeoViewpoint26;

let GeoViewpoint27 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint27.DEF = "View02";
GeoViewpoint27.description = "University of California Davis";
GeoViewpoint27.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint27.position = new X3D.SFVec3d([38.53650615157984,-121.7489628616831,250000]);
Group25ZZZ.children[1] = GeoViewpoint27;

let GeoViewpoint28 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint28.DEF = "View03";
GeoViewpoint28.description = "University of California Berkeley";
GeoViewpoint28.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint28.position = new X3D.SFVec3d([37.86963434512325,-122.2593873127355,250000]);
Group25ZZZ.children[2] = GeoViewpoint28;

let GeoViewpoint29 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint29.DEF = "View04";
GeoViewpoint29.description = "University of California San Francisco";
GeoViewpoint29.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint29.position = new X3D.SFVec3d([37.76340647188392,-122.4582475377715,250000]);
Group25ZZZ.children[3] = GeoViewpoint29;

let GeoViewpoint30 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint30.DEF = "View05";
GeoViewpoint30.description = "University of California Santa Cruz";
GeoViewpoint30.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint30.position = new X3D.SFVec3d([36.99628443046043,-122.0534325473795,250000]);
Group25ZZZ.children[4] = GeoViewpoint30;

let GeoViewpoint31 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint31.DEF = "View06";
GeoViewpoint31.description = "University of California Merced";
GeoViewpoint31.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint31.position = new X3D.SFVec3d([37.365508575977,-120.4252597059142,250000]);
Group25ZZZ.children[5] = GeoViewpoint31;

let GeoViewpoint32 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint32.DEF = "View07";
GeoViewpoint32.description = "University of California Santa Barbara";
GeoViewpoint32.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint32.position = new X3D.SFVec3d([34.41124450961521,-119.8479940053906,250000]);
Group25ZZZ.children[6] = GeoViewpoint32;

let GeoViewpoint33 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint33.DEF = "View08";
GeoViewpoint33.description = "University of California Los Angeles";
GeoViewpoint33.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint33.position = new X3D.SFVec3d([34.07224474392262,-118.4408472225642,250000]);
Group25ZZZ.children[7] = GeoViewpoint33;

let GeoViewpoint34 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint34.DEF = "View09";
GeoViewpoint34.description = "University of California Irvine";
GeoViewpoint34.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint34.position = new X3D.SFVec3d([33.64623283675919,-117.8427064139082,250000]);
Group25ZZZ.children[8] = GeoViewpoint34;

let GeoViewpoint35 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint35.DEF = "View10";
GeoViewpoint35.description = "University of California Riverside";
GeoViewpoint35.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint35.position = new X3D.SFVec3d([33.97350567066717,-117.3281649569839,250000]);
Group25ZZZ.children[9] = GeoViewpoint35;

let GeoViewpoint36 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint36.DEF = "View11";
GeoViewpoint36.description = "University of California San Diego";
GeoViewpoint36.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint36.position = new X3D.SFVec3d([32.87612136607509,-117.2367298240259,250000]);
Group25ZZZ.children[10] = GeoViewpoint36;

let GeoViewpoint37 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint37.DEF = "View12";
GeoViewpoint37.description = "Humboldt State University";
GeoViewpoint37.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint37.position = new X3D.SFVec3d([40.87630235623448,-124.0785789217266,250000]);
Group25ZZZ.children[11] = GeoViewpoint37;

let GeoViewpoint38 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint38.DEF = "View13";
GeoViewpoint38.description = "California State University, Chico";
GeoViewpoint38.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint38.position = new X3D.SFVec3d([39.73031527724385,-121.8453722745223,250000]);
Group25ZZZ.children[12] = GeoViewpoint38;

let GeoViewpoint39 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint39.DEF = "View14";
GeoViewpoint39.description = "California State University Sacramento";
GeoViewpoint39.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint39.position = new X3D.SFVec3d([38.5626517618963,-121.4244636520556,250000]);
Group25ZZZ.children[13] = GeoViewpoint39;

let GeoViewpoint40 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint40.DEF = "View15";
GeoViewpoint40.description = "Sonoma State University";
GeoViewpoint40.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint40.position = new X3D.SFVec3d([38.33922929793606,-122.6744333530031,250000]);
Group25ZZZ.children[14] = GeoViewpoint40;

let GeoViewpoint41 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint41.DEF = "View16";
GeoViewpoint41.description = "California Maritime Academy";
GeoViewpoint41.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint41.position = new X3D.SFVec3d([38.06907065059484,-122.2309147135222,250000]);
Group25ZZZ.children[15] = GeoViewpoint41;

let GeoViewpoint42 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint42.DEF = "View17";
GeoViewpoint42.description = "San Francisco State University";
GeoViewpoint42.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint42.position = new X3D.SFVec3d([37.722876,-122.4781512190666,250000]);
Group25ZZZ.children[16] = GeoViewpoint42;

let GeoViewpoint43 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint43.DEF = "View18";
GeoViewpoint43.description = "California State University, East Bay";
GeoViewpoint43.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint43.position = new X3D.SFVec3d([37.65707914139907,-122.0569190659761,250000]);
Group25ZZZ.children[17] = GeoViewpoint43;

let GeoViewpoint44 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint44.DEF = "View19";
GeoViewpoint44.description = "California State University Stanislaus";
GeoViewpoint44.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint44.position = new X3D.SFVec3d([37.52552478005697,-120.8563508560606,250000]);
Group25ZZZ.children[18] = GeoViewpoint44;

let GeoViewpoint45 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint45.DEF = "View20";
GeoViewpoint45.description = "San Jose State University";
GeoViewpoint45.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint45.position = new X3D.SFVec3d([37.33580940527095,-121.8815343755784,250000]);
Group25ZZZ.children[19] = GeoViewpoint45;

let GeoViewpoint46 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint46.DEF = "View21";
GeoViewpoint46.description = "California State University, Monterey Bay";
GeoViewpoint46.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint46.position = new X3D.SFVec3d([36.6538071781493,-121.7984465276711,250000]);
Group25ZZZ.children[20] = GeoViewpoint46;

let GeoViewpoint47 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint47.DEF = "View22";
GeoViewpoint47.description = "Fresno State University";
GeoViewpoint47.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint47.position = new X3D.SFVec3d([36.812166,-119.7451552005852,250000]);
Group25ZZZ.children[21] = GeoViewpoint47;

let GeoViewpoint48 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint48.DEF = "View23";
GeoViewpoint48.description = "California State University, Bakersfield";
GeoViewpoint48.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint48.position = new X3D.SFVec3d([35.350804,-119.1043226128032,250000]);
Group25ZZZ.children[22] = GeoViewpoint48;

let GeoViewpoint49 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint49.DEF = "View24";
GeoViewpoint49.description = "California Polytechnic State University";
GeoViewpoint49.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint49.position = new X3D.SFVec3d([35.30115692599171,-120.6595761796351,250000]);
Group25ZZZ.children[23] = GeoViewpoint49;

let GeoViewpoint50 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint50.DEF = "View25";
GeoViewpoint50.description = "California State University, Channel Islands";
GeoViewpoint50.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint50.position = new X3D.SFVec3d([34.1624126428852,-119.0425264841287,250000]);
Group25ZZZ.children[24] = GeoViewpoint50;

let GeoViewpoint51 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint51.DEF = "View26";
GeoViewpoint51.description = "California State University, Northridge";
GeoViewpoint51.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint51.position = new X3D.SFVec3d([34.23959265263849,-118.5284272400904,250000]);
Group25ZZZ.children[25] = GeoViewpoint51;

let GeoViewpoint52 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint52.DEF = "View27";
GeoViewpoint52.description = "California State University, Los Angeles";
GeoViewpoint52.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint52.position = new X3D.SFVec3d([34.06645996626264,-118.1682050902557,250000]);
Group25ZZZ.children[26] = GeoViewpoint52;

let GeoViewpoint53 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint53.DEF = "View28";
GeoViewpoint53.description = "California State Polytechnic University, Pomona";
GeoViewpoint53.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint53.position = new X3D.SFVec3d([34.05727150000314,-117.8215320234812,250000]);
Group25ZZZ.children[27] = GeoViewpoint53;

let GeoViewpoint54 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint54.DEF = "View29";
GeoViewpoint54.description = "California State University, San Bernardino";
GeoViewpoint54.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint54.position = new X3D.SFVec3d([34.18180116432101,-117.3243676664719,250000]);
Group25ZZZ.children[28] = GeoViewpoint54;

let GeoViewpoint55 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint55.DEF = "View30";
GeoViewpoint55.description = "California State University, Fullerton";
GeoViewpoint55.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint55.position = new X3D.SFVec3d([33.882522,-117.8868367869023,250000]);
Group25ZZZ.children[29] = GeoViewpoint55;

let GeoViewpoint56 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint56.DEF = "View31";
GeoViewpoint56.description = "California State University Dominguez Hills";
GeoViewpoint56.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint56.position = new X3D.SFVec3d([33.86463396857103,-118.2553596272055,250000]);
Group25ZZZ.children[30] = GeoViewpoint56;

let GeoViewpoint57 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint57.DEF = "View32";
GeoViewpoint57.description = "California State University, Long Beach";
GeoViewpoint57.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint57.position = new X3D.SFVec3d([33.78196696470824,-118.112678253688,250000]);
Group25ZZZ.children[31] = GeoViewpoint57;

let GeoViewpoint58 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint58.DEF = "View33";
GeoViewpoint58.description = "California State University, San Marcos";
GeoViewpoint58.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint58.position = new X3D.SFVec3d([33.12837619265174,-117.1600194071002,250000]);
Group25ZZZ.children[32] = GeoViewpoint58;

let GeoViewpoint59 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint59.DEF = "View34";
GeoViewpoint59.description = "San Diego State University";
GeoViewpoint59.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint59.position = new X3D.SFVec3d([32.77593126586385,-117.0722876242553,250000]);
Group25ZZZ.children[33] = GeoViewpoint59;

let GeoViewpoint60 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint60.DEF = "View35";
GeoViewpoint60.description = "CENIC";
GeoViewpoint60.orientation = new X3D.SFRotation([1,0,0,-1.57]);
GeoViewpoint60.position = new X3D.SFVec3d([33.879947,-118.027903,250000]);
Group25ZZZ.children[34] = GeoViewpoint60;

browser.currentScene.children[3] = Group25;

//====================
let ExternProtoDeclare61 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare61.name = "CrossHair";
ExternProtoDeclare61.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare61.url = new X3D.MFString([new X3D.SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), new X3D.SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair")]);
ExternProtoDeclare62.getField("enabled")ExternProtoDeclare61YYY.field = new X3D.MFNode();

ExternProtoDeclare63.getField("set_enabled")ExternProtoDeclare61YYY.field = new X3D.MFNode();

ExternProtoDeclare64.getField("markerColor")ExternProtoDeclare61YYY.field = new X3D.MFNode();

ExternProtoDeclare65.getField("scale")ExternProtoDeclare61YYY.field = new X3D.MFNode();

ExternProtoDeclare66.getField("positionOffsetFromCamera")ExternProtoDeclare61YYY.field = new X3D.MFNode();

browser.currentScene.children[4] = ExternProtoDeclare61;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "CrossHair";
ProtoInstance67.DEF = "CrossHairInstance";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "enabled";
fieldValue68.value = "true";
ProtoInstance67YYY.fieldValue = new X3D.MFNode();

ProtoInstance67ZZZ.fieldValue[0] = fieldValue68;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "markerColor";
fieldValue69.value = "0.1 0.8 0.1";
ProtoInstance67ZZZ.fieldValue[1] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "scale";
fieldValue70.value = "0.5 0.5 0.5";
ProtoInstance67ZZZ.fieldValue[2] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "positionOffsetFromCamera";
fieldValue71.value = "0 0 -5";
ProtoInstance67ZZZ.fieldValue[3] = fieldValue71;

browser.currentScene.children[5] = ProtoInstance67;

//====================
let ExternProtoDeclare72 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare72.name = "HeadsUpDisplay";
ExternProtoDeclare72.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location";
ExternProtoDeclare72.url = new X3D.MFString([new X3D.SFString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), new X3D.SFString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay")]);
ExternProtoDeclare73.getField("children")ExternProtoDeclare72YYY.field = new X3D.MFNode();

ExternProtoDeclare74.getField("screenOffset")ExternProtoDeclare72YYY.field = new X3D.MFNode();

ExternProtoDeclare75.getField("position_changed")ExternProtoDeclare72YYY.field = new X3D.MFNode();

ExternProtoDeclare76.getField("orientation_changed")ExternProtoDeclare72YYY.field = new X3D.MFNode();

browser.currentScene.children[6] = ExternProtoDeclare72;

//====================
let ExternProtoDeclare77 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare77.name = "ViewpointSequencer";
ExternProtoDeclare77.appinfo = "Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene";
ExternProtoDeclare77.url = new X3D.MFString([new X3D.SFString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), new X3D.SFString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer")]);
ExternProtoDeclare78.getField("viewpoints")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare79.getField("interval")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare80.getField("enabled")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare81.getField("set_enabled")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare82.getField("previous")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare83.getField("next")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare84.getField("toggleMessage")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare85.getField("toggleMessageFontSize")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare86.getField("toggleMessageColor")ExternProtoDeclare77YYY.field = new X3D.MFNode();

ExternProtoDeclare87.getField("traceEnabled")ExternProtoDeclare77YYY.field = new X3D.MFNode();

browser.currentScene.children[7] = ExternProtoDeclare77;

let ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.name = "ViewpointSequencer";
ProtoInstance88.DEF = "ViewpointTour";
let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "interval";
fieldValue89.value = "30";
ProtoInstance88YYY.fieldValue = new X3D.MFNode();

ProtoInstance88ZZZ.fieldValue[0] = fieldValue89;

let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "enabled";
fieldValue90.value = "true";
ProtoInstance88ZZZ.fieldValue[1] = fieldValue90;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "toggleMessage";
fieldValue91.value = "\"ViewpointSequencer tour\"";
ProtoInstance88ZZZ.fieldValue[2] = fieldValue91;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "viewpoints";
let GeoViewpoint93 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint93.USE = "View01";
fieldValue92YYY.children = new X3D.MFNode();

fieldValue92ZZZ.children[0] = GeoViewpoint93;

let GeoViewpoint94 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint94.USE = "View02";
fieldValue92ZZZ.children[1] = GeoViewpoint94;

let GeoViewpoint95 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint95.USE = "View03";
fieldValue92ZZZ.children[2] = GeoViewpoint95;

let GeoViewpoint96 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint96.USE = "View04";
fieldValue92ZZZ.children[3] = GeoViewpoint96;

let GeoViewpoint97 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint97.USE = "View05";
fieldValue92ZZZ.children[4] = GeoViewpoint97;

let GeoViewpoint98 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint98.USE = "View06";
fieldValue92ZZZ.children[5] = GeoViewpoint98;

let GeoViewpoint99 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint99.USE = "View07";
fieldValue92ZZZ.children[6] = GeoViewpoint99;

let GeoViewpoint100 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint100.USE = "View08";
fieldValue92ZZZ.children[7] = GeoViewpoint100;

let GeoViewpoint101 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint101.USE = "View09";
fieldValue92ZZZ.children[8] = GeoViewpoint101;

let GeoViewpoint102 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint102.USE = "View10";
fieldValue92ZZZ.children[9] = GeoViewpoint102;

let GeoViewpoint103 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint103.USE = "View11";
fieldValue92ZZZ.children[10] = GeoViewpoint103;

let GeoViewpoint104 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint104.USE = "View12";
fieldValue92ZZZ.children[11] = GeoViewpoint104;

let GeoViewpoint105 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint105.USE = "View13";
fieldValue92ZZZ.children[12] = GeoViewpoint105;

let GeoViewpoint106 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint106.USE = "View14";
fieldValue92ZZZ.children[13] = GeoViewpoint106;

let GeoViewpoint107 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint107.USE = "View15";
fieldValue92ZZZ.children[14] = GeoViewpoint107;

let GeoViewpoint108 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint108.USE = "View16";
fieldValue92ZZZ.children[15] = GeoViewpoint108;

let GeoViewpoint109 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint109.USE = "View17";
fieldValue92ZZZ.children[16] = GeoViewpoint109;

let GeoViewpoint110 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint110.USE = "View18";
fieldValue92ZZZ.children[17] = GeoViewpoint110;

let GeoViewpoint111 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint111.USE = "View19";
fieldValue92ZZZ.children[18] = GeoViewpoint111;

let GeoViewpoint112 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint112.USE = "View20";
fieldValue92ZZZ.children[19] = GeoViewpoint112;

let GeoViewpoint113 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint113.USE = "View21";
fieldValue92ZZZ.children[20] = GeoViewpoint113;

let GeoViewpoint114 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint114.USE = "View22";
fieldValue92ZZZ.children[21] = GeoViewpoint114;

let GeoViewpoint115 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint115.USE = "View23";
fieldValue92ZZZ.children[22] = GeoViewpoint115;

let GeoViewpoint116 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint116.USE = "View24";
fieldValue92ZZZ.children[23] = GeoViewpoint116;

let GeoViewpoint117 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint117.USE = "View25";
fieldValue92ZZZ.children[24] = GeoViewpoint117;

let GeoViewpoint118 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint118.USE = "View26";
fieldValue92ZZZ.children[25] = GeoViewpoint118;

let GeoViewpoint119 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint119.USE = "View27";
fieldValue92ZZZ.children[26] = GeoViewpoint119;

let GeoViewpoint120 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint120.USE = "View28";
fieldValue92ZZZ.children[27] = GeoViewpoint120;

let GeoViewpoint121 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint121.USE = "View29";
fieldValue92ZZZ.children[28] = GeoViewpoint121;

let GeoViewpoint122 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint122.USE = "View30";
fieldValue92ZZZ.children[29] = GeoViewpoint122;

let GeoViewpoint123 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint123.USE = "View31";
fieldValue92ZZZ.children[30] = GeoViewpoint123;

let GeoViewpoint124 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint124.USE = "View32";
fieldValue92ZZZ.children[31] = GeoViewpoint124;

let GeoViewpoint125 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint125.USE = "View33";
fieldValue92ZZZ.children[32] = GeoViewpoint125;

let GeoViewpoint126 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint126.USE = "View34";
fieldValue92ZZZ.children[33] = GeoViewpoint126;

let GeoViewpoint127 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint127.USE = "View35";
fieldValue92ZZZ.children[34] = GeoViewpoint127;

let Viewpoint128 = browser.currentScene.createNode("Viewpoint");
Viewpoint128.DEF = "View4";
Viewpoint128.description = "View four (-X axis)";
Viewpoint128.orientation = new X3D.SFRotation([0,1,0,-1.57]);
Viewpoint128.position = new X3D.SFVec3f([-10,0,0]);
fieldValue92ZZZ.children[35] = Viewpoint128;

ProtoInstance88ZZZ.fieldValue[3] = fieldValue92;

//initially enabled is off, scene provides selectable text to activate
browser.currentScene.children[8] = ProtoInstance88;

//====================
let GeoLocation129 = browser.currentScene.createNode("GeoLocation");
GeoLocation129.geoCoords = new X3D.SFVec3d([36.595599,-121.877148,624990]);
let Billboard130 = browser.currentScene.createNode("Billboard");
Billboard130.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape131 = browser.currentScene.createNode("Shape");
let Text132 = browser.currentScene.createNode("Text");
Text132.string = new X3D.MFString([new X3D.SFString("ViewpointSequencer tour")]);
let FontStyle133 = browser.currentScene.createNode("FontStyle");
FontStyle133.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle133;

geometry = Text132;

let Appearance134 = browser.currentScene.createNode("Appearance");
let Material135 = browser.currentScene.createNode("Material");
Material135.ambientIntensity = 0.25;
Material135.diffuseColor = new X3D.SFColor([0.795918,0.505869,0.093315]);
Material135.shininess = 0.39;
Material135.specularColor = new X3D.SFColor([0.923469,0.428866,0.006369]);
material = Material135;

appearance = Appearance134;

Billboard130YYY.children = new X3D.MFNode();

Billboard130ZZZ.children[0] = Shape131;

GeoLocation129YYY.children = new X3D.MFNode();

GeoLocation129ZZZ.children[0] = Billboard130;

let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.DEF = "TourTouch";
TouchSensor136.description = "Touch text to turn tour on/off";
GeoLocation129ZZZ.children[1] = TouchSensor136;

let BooleanToggle137 = browser.currentScene.createNode("BooleanToggle");
BooleanToggle137.DEF = "TourToggle";
GeoLocation129ZZZ.children[2] = BooleanToggle137;

let ROUTE138 = browser.currentScene.createNode("ROUTE");
ROUTE138.fromField = "isActive";
ROUTE138.fromNode = "TourTouch";
ROUTE138.toField = "set_boolean";
ROUTE138.toNode = "TourToggle";
GeoLocation129ZZZ.children[3] = ROUTE138;

let ROUTE139 = browser.currentScene.createNode("ROUTE");
ROUTE139.fromField = "toggle";
ROUTE139.fromNode = "TourToggle";
ROUTE139.toField = "set_enabled";
ROUTE139.toNode = "ViewpointTour";
GeoLocation129ZZZ.children[4] = ROUTE139;

browser.currentScene.children[9] = GeoLocation129;

//====================
let ExternProtoDeclare140 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare140.name = "ViewPositionOrientation";
ExternProtoDeclare140.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare140.url = new X3D.MFString([new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")]);
ExternProtoDeclare141.getField("enabled")ExternProtoDeclare140YYY.field = new X3D.MFNode();

ExternProtoDeclare142.getField("traceEnabled")ExternProtoDeclare140YYY.field = new X3D.MFNode();

ExternProtoDeclare143.getField("set_traceEnabled")ExternProtoDeclare140YYY.field = new X3D.MFNode();

ExternProtoDeclare144.getField("position_changed")ExternProtoDeclare140YYY.field = new X3D.MFNode();

ExternProtoDeclare145.getField("orientation_changed")ExternProtoDeclare140YYY.field = new X3D.MFNode();

ExternProtoDeclare146.getField("outputViewpointString")ExternProtoDeclare140YYY.field = new X3D.MFNode();

browser.currentScene.children[10] = ExternProtoDeclare140;

let ProtoInstance147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance147.name = "ViewPositionOrientation";
ProtoInstance147.DEF = "ExampleViewPositionOrientation";
let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "enabled";
fieldValue148.value = "false";
ProtoInstance147YYY.fieldValue = new X3D.MFNode();

ProtoInstance147ZZZ.fieldValue[0] = fieldValue148;

browser.currentScene.children[11] = ProtoInstance147;

//====================
}
main ();
