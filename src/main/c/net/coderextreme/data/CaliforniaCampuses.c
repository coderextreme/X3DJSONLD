#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geospatial";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "CaliforniaCampuses.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Viewpoints and tour of California campuses";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "4 March 2010";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "20 October 2019";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "CaliforniaCampuses.kml";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d-earth";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://x3d-earth.nps.edu";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://hamming.uc.nps.edu";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "subject";
meta12.content = "X3D Earth";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://mmog.ern.nps.edu/California/California.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "warning";
meta15.content = "under development";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "warning";
meta16.content = "mmog.ern.nps.edu restricted to internal access within NPS firewall only";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "generator";
meta17.content = "KmlToX3dViewpoints.xslt";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "generator";
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "license";
meta19.content = "https://savage.nps.edu/Savage/license.html";
head1.meta[17] = meta19;

head = head1;

WorldInfo WorldInfo21 = createNode("WorldInfo");
WorldInfo21.title = "CaliforniaCampuses.x3d";
children = new MFNode();

children[0] = WorldInfo21;

Switch Switch22 = createNode("Switch");
Switch22.DEF = "SwitchGlobes";
Switch22.whichChoice = 0;
//Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.
Inline Inline23 = createNode("Inline");
Inline23.url = new MFString(new java.lang.String["http://x3d-earth.nps.edu/osmdemo.x3d"]);
Switch22.children = new MFNode();

Switch22.children[0] = Inline23;

//<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>
children[1] = Switch22;

NavigationInfo NavigationInfo24 = createNode("NavigationInfo");
NavigationInfo24.transitionType = new MFString(new java.lang.String["ANIMATE"]);
children[2] = NavigationInfo24;

Group Group25 = createNode("Group");
Group25.DEF = "PlacemarkGroup";
GeoViewpoint GeoViewpoint26 = createNode("GeoViewpoint");
GeoViewpoint26.DEF = "View01";
GeoViewpoint26.description = "Naval Postgraduate School";
GeoViewpoint26.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint26.position = new SFVec3d(new double[36.595599,-121.877148,250000]);
Group25.children = new MFNode();

Group25.children[0] = GeoViewpoint26;

GeoViewpoint GeoViewpoint27 = createNode("GeoViewpoint");
GeoViewpoint27.DEF = "View02";
GeoViewpoint27.description = "University of California Davis";
GeoViewpoint27.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint27.position = new SFVec3d(new double[38.53650615157984,-121.7489628616831,250000]);
Group25.children[1] = GeoViewpoint27;

GeoViewpoint GeoViewpoint28 = createNode("GeoViewpoint");
GeoViewpoint28.DEF = "View03";
GeoViewpoint28.description = "University of California Berkeley";
GeoViewpoint28.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint28.position = new SFVec3d(new double[37.86963434512325,-122.2593873127355,250000]);
Group25.children[2] = GeoViewpoint28;

GeoViewpoint GeoViewpoint29 = createNode("GeoViewpoint");
GeoViewpoint29.DEF = "View04";
GeoViewpoint29.description = "University of California San Francisco";
GeoViewpoint29.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint29.position = new SFVec3d(new double[37.76340647188392,-122.4582475377715,250000]);
Group25.children[3] = GeoViewpoint29;

GeoViewpoint GeoViewpoint30 = createNode("GeoViewpoint");
GeoViewpoint30.DEF = "View05";
GeoViewpoint30.description = "University of California Santa Cruz";
GeoViewpoint30.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint30.position = new SFVec3d(new double[36.99628443046043,-122.0534325473795,250000]);
Group25.children[4] = GeoViewpoint30;

GeoViewpoint GeoViewpoint31 = createNode("GeoViewpoint");
GeoViewpoint31.DEF = "View06";
GeoViewpoint31.description = "University of California Merced";
GeoViewpoint31.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint31.position = new SFVec3d(new double[37.365508575977,-120.4252597059142,250000]);
Group25.children[5] = GeoViewpoint31;

GeoViewpoint GeoViewpoint32 = createNode("GeoViewpoint");
GeoViewpoint32.DEF = "View07";
GeoViewpoint32.description = "University of California Santa Barbara";
GeoViewpoint32.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint32.position = new SFVec3d(new double[34.41124450961521,-119.8479940053906,250000]);
Group25.children[6] = GeoViewpoint32;

GeoViewpoint GeoViewpoint33 = createNode("GeoViewpoint");
GeoViewpoint33.DEF = "View08";
GeoViewpoint33.description = "University of California Los Angeles";
GeoViewpoint33.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint33.position = new SFVec3d(new double[34.07224474392262,-118.4408472225642,250000]);
Group25.children[7] = GeoViewpoint33;

GeoViewpoint GeoViewpoint34 = createNode("GeoViewpoint");
GeoViewpoint34.DEF = "View09";
GeoViewpoint34.description = "University of California Irvine";
GeoViewpoint34.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint34.position = new SFVec3d(new double[33.64623283675919,-117.8427064139082,250000]);
Group25.children[8] = GeoViewpoint34;

GeoViewpoint GeoViewpoint35 = createNode("GeoViewpoint");
GeoViewpoint35.DEF = "View10";
GeoViewpoint35.description = "University of California Riverside";
GeoViewpoint35.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint35.position = new SFVec3d(new double[33.97350567066717,-117.3281649569839,250000]);
Group25.children[9] = GeoViewpoint35;

GeoViewpoint GeoViewpoint36 = createNode("GeoViewpoint");
GeoViewpoint36.DEF = "View11";
GeoViewpoint36.description = "University of California San Diego";
GeoViewpoint36.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint36.position = new SFVec3d(new double[32.87612136607509,-117.2367298240259,250000]);
Group25.children[10] = GeoViewpoint36;

GeoViewpoint GeoViewpoint37 = createNode("GeoViewpoint");
GeoViewpoint37.DEF = "View12";
GeoViewpoint37.description = "Humboldt State University";
GeoViewpoint37.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint37.position = new SFVec3d(new double[40.87630235623448,-124.0785789217266,250000]);
Group25.children[11] = GeoViewpoint37;

GeoViewpoint GeoViewpoint38 = createNode("GeoViewpoint");
GeoViewpoint38.DEF = "View13";
GeoViewpoint38.description = "California State University, Chico";
GeoViewpoint38.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint38.position = new SFVec3d(new double[39.73031527724385,-121.8453722745223,250000]);
Group25.children[12] = GeoViewpoint38;

GeoViewpoint GeoViewpoint39 = createNode("GeoViewpoint");
GeoViewpoint39.DEF = "View14";
GeoViewpoint39.description = "California State University Sacramento";
GeoViewpoint39.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint39.position = new SFVec3d(new double[38.5626517618963,-121.4244636520556,250000]);
Group25.children[13] = GeoViewpoint39;

GeoViewpoint GeoViewpoint40 = createNode("GeoViewpoint");
GeoViewpoint40.DEF = "View15";
GeoViewpoint40.description = "Sonoma State University";
GeoViewpoint40.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint40.position = new SFVec3d(new double[38.33922929793606,-122.6744333530031,250000]);
Group25.children[14] = GeoViewpoint40;

GeoViewpoint GeoViewpoint41 = createNode("GeoViewpoint");
GeoViewpoint41.DEF = "View16";
GeoViewpoint41.description = "California Maritime Academy";
GeoViewpoint41.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint41.position = new SFVec3d(new double[38.06907065059484,-122.2309147135222,250000]);
Group25.children[15] = GeoViewpoint41;

GeoViewpoint GeoViewpoint42 = createNode("GeoViewpoint");
GeoViewpoint42.DEF = "View17";
GeoViewpoint42.description = "San Francisco State University";
GeoViewpoint42.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint42.position = new SFVec3d(new double[37.722876,-122.4781512190666,250000]);
Group25.children[16] = GeoViewpoint42;

GeoViewpoint GeoViewpoint43 = createNode("GeoViewpoint");
GeoViewpoint43.DEF = "View18";
GeoViewpoint43.description = "California State University, East Bay";
GeoViewpoint43.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint43.position = new SFVec3d(new double[37.65707914139907,-122.0569190659761,250000]);
Group25.children[17] = GeoViewpoint43;

GeoViewpoint GeoViewpoint44 = createNode("GeoViewpoint");
GeoViewpoint44.DEF = "View19";
GeoViewpoint44.description = "California State University Stanislaus";
GeoViewpoint44.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint44.position = new SFVec3d(new double[37.52552478005697,-120.8563508560606,250000]);
Group25.children[18] = GeoViewpoint44;

GeoViewpoint GeoViewpoint45 = createNode("GeoViewpoint");
GeoViewpoint45.DEF = "View20";
GeoViewpoint45.description = "San Jose State University";
GeoViewpoint45.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint45.position = new SFVec3d(new double[37.33580940527095,-121.8815343755784,250000]);
Group25.children[19] = GeoViewpoint45;

GeoViewpoint GeoViewpoint46 = createNode("GeoViewpoint");
GeoViewpoint46.DEF = "View21";
GeoViewpoint46.description = "California State University, Monterey Bay";
GeoViewpoint46.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint46.position = new SFVec3d(new double[36.6538071781493,-121.7984465276711,250000]);
Group25.children[20] = GeoViewpoint46;

GeoViewpoint GeoViewpoint47 = createNode("GeoViewpoint");
GeoViewpoint47.DEF = "View22";
GeoViewpoint47.description = "Fresno State University";
GeoViewpoint47.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint47.position = new SFVec3d(new double[36.812166,-119.7451552005852,250000]);
Group25.children[21] = GeoViewpoint47;

GeoViewpoint GeoViewpoint48 = createNode("GeoViewpoint");
GeoViewpoint48.DEF = "View23";
GeoViewpoint48.description = "California State University, Bakersfield";
GeoViewpoint48.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint48.position = new SFVec3d(new double[35.350804,-119.1043226128032,250000]);
Group25.children[22] = GeoViewpoint48;

GeoViewpoint GeoViewpoint49 = createNode("GeoViewpoint");
GeoViewpoint49.DEF = "View24";
GeoViewpoint49.description = "California Polytechnic State University";
GeoViewpoint49.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint49.position = new SFVec3d(new double[35.30115692599171,-120.6595761796351,250000]);
Group25.children[23] = GeoViewpoint49;

GeoViewpoint GeoViewpoint50 = createNode("GeoViewpoint");
GeoViewpoint50.DEF = "View25";
GeoViewpoint50.description = "California State University, Channel Islands";
GeoViewpoint50.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint50.position = new SFVec3d(new double[34.1624126428852,-119.0425264841287,250000]);
Group25.children[24] = GeoViewpoint50;

GeoViewpoint GeoViewpoint51 = createNode("GeoViewpoint");
GeoViewpoint51.DEF = "View26";
GeoViewpoint51.description = "California State University, Northridge";
GeoViewpoint51.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint51.position = new SFVec3d(new double[34.23959265263849,-118.5284272400904,250000]);
Group25.children[25] = GeoViewpoint51;

GeoViewpoint GeoViewpoint52 = createNode("GeoViewpoint");
GeoViewpoint52.DEF = "View27";
GeoViewpoint52.description = "California State University, Los Angeles";
GeoViewpoint52.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint52.position = new SFVec3d(new double[34.06645996626264,-118.1682050902557,250000]);
Group25.children[26] = GeoViewpoint52;

GeoViewpoint GeoViewpoint53 = createNode("GeoViewpoint");
GeoViewpoint53.DEF = "View28";
GeoViewpoint53.description = "California State Polytechnic University, Pomona";
GeoViewpoint53.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint53.position = new SFVec3d(new double[34.05727150000314,-117.8215320234812,250000]);
Group25.children[27] = GeoViewpoint53;

GeoViewpoint GeoViewpoint54 = createNode("GeoViewpoint");
GeoViewpoint54.DEF = "View29";
GeoViewpoint54.description = "California State University, San Bernardino";
GeoViewpoint54.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint54.position = new SFVec3d(new double[34.18180116432101,-117.3243676664719,250000]);
Group25.children[28] = GeoViewpoint54;

GeoViewpoint GeoViewpoint55 = createNode("GeoViewpoint");
GeoViewpoint55.DEF = "View30";
GeoViewpoint55.description = "California State University, Fullerton";
GeoViewpoint55.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint55.position = new SFVec3d(new double[33.882522,-117.8868367869023,250000]);
Group25.children[29] = GeoViewpoint55;

GeoViewpoint GeoViewpoint56 = createNode("GeoViewpoint");
GeoViewpoint56.DEF = "View31";
GeoViewpoint56.description = "California State University Dominguez Hills";
GeoViewpoint56.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint56.position = new SFVec3d(new double[33.86463396857103,-118.2553596272055,250000]);
Group25.children[30] = GeoViewpoint56;

GeoViewpoint GeoViewpoint57 = createNode("GeoViewpoint");
GeoViewpoint57.DEF = "View32";
GeoViewpoint57.description = "California State University, Long Beach";
GeoViewpoint57.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint57.position = new SFVec3d(new double[33.78196696470824,-118.112678253688,250000]);
Group25.children[31] = GeoViewpoint57;

GeoViewpoint GeoViewpoint58 = createNode("GeoViewpoint");
GeoViewpoint58.DEF = "View33";
GeoViewpoint58.description = "California State University, San Marcos";
GeoViewpoint58.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint58.position = new SFVec3d(new double[33.12837619265174,-117.1600194071002,250000]);
Group25.children[32] = GeoViewpoint58;

GeoViewpoint GeoViewpoint59 = createNode("GeoViewpoint");
GeoViewpoint59.DEF = "View34";
GeoViewpoint59.description = "San Diego State University";
GeoViewpoint59.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint59.position = new SFVec3d(new double[32.77593126586385,-117.0722876242553,250000]);
Group25.children[33] = GeoViewpoint59;

GeoViewpoint GeoViewpoint60 = createNode("GeoViewpoint");
GeoViewpoint60.DEF = "View35";
GeoViewpoint60.description = "CENIC";
GeoViewpoint60.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint60.position = new SFVec3d(new double[33.879947,-118.027903,250000]);
Group25.children[34] = GeoViewpoint60;

children[3] = Group25;

//====================
ExternProtoDeclare ExternProtoDeclare61 = createNode("ExternProtoDeclare");
ExternProtoDeclare61.name = "CrossHair";
ExternProtoDeclare61.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare61.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]);
field field62 = createNode("field");
field62.name = "enabled";
field62.accessType = "initializeOnly";
field62.appinfo = "whether CrossHair prototype is enabled or not";
field62.type = "SFBool";
ExternProtoDeclare61.field = new MFNode();

ExternProtoDeclare61.field[0] = field62;

field field63 = createNode("field");
field63.name = "set_enabled";
field63.accessType = "inputOnly";
field63.appinfo = "control whether enabled/disabled";
field63.type = "SFBool";
ExternProtoDeclare61.field[1] = field63;

field field64 = createNode("field");
field64.name = "markerColor";
field64.accessType = "inputOutput";
field64.appinfo = "color of CrossHair marker";
field64.type = "SFColor";
ExternProtoDeclare61.field[2] = field64;

field field65 = createNode("field");
field65.name = "scale";
field65.accessType = "inputOutput";
field65.appinfo = "size of CrossHair in meters";
field65.type = "SFVec3f";
ExternProtoDeclare61.field[3] = field65;

field field66 = createNode("field");
field66.name = "positionOffsetFromCamera";
field66.accessType = "inputOutput";
field66.appinfo = "distance in front of HUD viewpoint";
field66.type = "SFVec3f";
ExternProtoDeclare61.field[4] = field66;

children[4] = ExternProtoDeclare61;

ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "CrossHair";
ProtoInstance67.DEF = "CrossHairInstance";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "enabled";
fieldValue68.value = "true";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "markerColor";
fieldValue69.value = "0.1 0.8 0.1";
ProtoInstance67.fieldValue[1] = fieldValue69;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "scale";
fieldValue70.value = "0.5 0.5 0.5";
ProtoInstance67.fieldValue[2] = fieldValue70;

fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "positionOffsetFromCamera";
fieldValue71.value = "0 0 -5";
ProtoInstance67.fieldValue[3] = fieldValue71;

children[5] = ProtoInstance67;

//====================
ExternProtoDeclare ExternProtoDeclare72 = createNode("ExternProtoDeclare");
ExternProtoDeclare72.name = "HeadsUpDisplay";
ExternProtoDeclare72.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location";
ExternProtoDeclare72.url = new MFString(new java.lang.String["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]);
field field73 = createNode("field");
field73.name = "children";
field73.accessType = "inputOutput";
field73.appinfo = "X3D content positioned at HUD offset";
field73.type = "MFNode";
ExternProtoDeclare72.field = new MFNode();

ExternProtoDeclare72.field[0] = field73;

field field74 = createNode("field");
field74.name = "screenOffset";
field74.accessType = "inputOutput";
field74.appinfo = "offset position for HUD relative to current view location, default 0 0 -5";
field74.type = "SFVec3f";
ExternProtoDeclare72.field[1] = field74;

field field75 = createNode("field");
field75.name = "position_changed";
field75.accessType = "outputOnly";
field75.appinfo = "HUD position update (in world coordinates) relative to original location";
field75.type = "SFVec3f";
ExternProtoDeclare72.field[2] = field75;

field field76 = createNode("field");
field76.name = "orientation_changed";
field76.accessType = "outputOnly";
field76.appinfo = "HUD orientation update relative to original location";
field76.type = "SFRotation";
ExternProtoDeclare72.field[3] = field76;

children[6] = ExternProtoDeclare72;

//====================
ExternProtoDeclare ExternProtoDeclare77 = createNode("ExternProtoDeclare");
ExternProtoDeclare77.name = "ViewpointSequencer";
ExternProtoDeclare77.appinfo = "Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene";
ExternProtoDeclare77.url = new MFString(new java.lang.String["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"]);
field field78 = createNode("field");
field78.name = "viewpoints";
field78.accessType = "initializeOnly";
field78.appinfo = "Viewpoint USE nodes that are sequentially bound";
field78.type = "MFNode";
ExternProtoDeclare77.field = new MFNode();

ExternProtoDeclare77.field[0] = field78;

field field79 = createNode("field");
field79.name = "interval";
field79.accessType = "inputOutput";
field79.appinfo = "number of seconds between viewpoint shifts";
field79.type = "SFTime";
ExternProtoDeclare77.field[1] = field79;

field field80 = createNode("field");
field80.name = "enabled";
field80.accessType = "inputOutput";
field80.appinfo = "whether ViewpointSequencer is enabled or not";
field80.type = "SFBool";
ExternProtoDeclare77.field[2] = field80;

field field81 = createNode("field");
field81.name = "set_enabled";
field81.accessType = "inputOnly";
field81.appinfo = "whether ViewpointSequencer is enabled or not";
field81.type = "SFBool";
ExternProtoDeclare77.field[3] = field81;

field field82 = createNode("field");
field82.name = "previous";
field82.accessType = "inputOnly";
field82.appinfo = "bind previous Viewpoint in list";
field82.type = "SFBool";
ExternProtoDeclare77.field[4] = field82;

field field83 = createNode("field");
field83.name = "next";
field83.accessType = "inputOnly";
field83.appinfo = "bind next Viewpoint in list";
field83.type = "SFBool";
ExternProtoDeclare77.field[5] = field83;

field field84 = createNode("field");
field84.name = "toggleMessage";
field84.accessType = "inputOutput";
field84.appinfo = "Select message to toggle ViewpointSequencer";
field84.type = "MFString";
ExternProtoDeclare77.field[6] = field84;

field field85 = createNode("field");
field85.name = "toggleMessageFontSize";
field85.accessType = "initializeOnly";
field85.appinfo = "Color for toggleMessage text";
field85.type = "SFFloat";
ExternProtoDeclare77.field[7] = field85;

field field86 = createNode("field");
field86.name = "toggleMessageColor";
field86.accessType = "inputOutput";
field86.appinfo = "Color for toggleMessage text";
field86.type = "SFColor";
ExternProtoDeclare77.field[8] = field86;

field field87 = createNode("field");
field87.name = "traceEnabled";
field87.accessType = "inputOutput";
field87.appinfo = "enable console output";
field87.type = "SFBool";
ExternProtoDeclare77.field[9] = field87;

children[7] = ExternProtoDeclare77;

ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "ViewpointSequencer";
ProtoInstance88.DEF = "ViewpointTour";
fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "interval";
fieldValue89.value = "30";
ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "enabled";
fieldValue90.value = "true";
ProtoInstance88.fieldValue[1] = fieldValue90;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "toggleMessage";
fieldValue91.value = "\"ViewpointSequencer tour\"";
ProtoInstance88.fieldValue[2] = fieldValue91;

fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "viewpoints";
GeoViewpoint GeoViewpoint93 = createNode("GeoViewpoint");
GeoViewpoint93.USE = "View01";
fieldValue92.children = new MFNode();

fieldValue92.children[0] = GeoViewpoint93;

GeoViewpoint GeoViewpoint94 = createNode("GeoViewpoint");
GeoViewpoint94.USE = "View02";
fieldValue92.children[1] = GeoViewpoint94;

GeoViewpoint GeoViewpoint95 = createNode("GeoViewpoint");
GeoViewpoint95.USE = "View03";
fieldValue92.children[2] = GeoViewpoint95;

GeoViewpoint GeoViewpoint96 = createNode("GeoViewpoint");
GeoViewpoint96.USE = "View04";
fieldValue92.children[3] = GeoViewpoint96;

GeoViewpoint GeoViewpoint97 = createNode("GeoViewpoint");
GeoViewpoint97.USE = "View05";
fieldValue92.children[4] = GeoViewpoint97;

GeoViewpoint GeoViewpoint98 = createNode("GeoViewpoint");
GeoViewpoint98.USE = "View06";
fieldValue92.children[5] = GeoViewpoint98;

GeoViewpoint GeoViewpoint99 = createNode("GeoViewpoint");
GeoViewpoint99.USE = "View07";
fieldValue92.children[6] = GeoViewpoint99;

GeoViewpoint GeoViewpoint100 = createNode("GeoViewpoint");
GeoViewpoint100.USE = "View08";
fieldValue92.children[7] = GeoViewpoint100;

GeoViewpoint GeoViewpoint101 = createNode("GeoViewpoint");
GeoViewpoint101.USE = "View09";
fieldValue92.children[8] = GeoViewpoint101;

GeoViewpoint GeoViewpoint102 = createNode("GeoViewpoint");
GeoViewpoint102.USE = "View10";
fieldValue92.children[9] = GeoViewpoint102;

GeoViewpoint GeoViewpoint103 = createNode("GeoViewpoint");
GeoViewpoint103.USE = "View11";
fieldValue92.children[10] = GeoViewpoint103;

GeoViewpoint GeoViewpoint104 = createNode("GeoViewpoint");
GeoViewpoint104.USE = "View12";
fieldValue92.children[11] = GeoViewpoint104;

GeoViewpoint GeoViewpoint105 = createNode("GeoViewpoint");
GeoViewpoint105.USE = "View13";
fieldValue92.children[12] = GeoViewpoint105;

GeoViewpoint GeoViewpoint106 = createNode("GeoViewpoint");
GeoViewpoint106.USE = "View14";
fieldValue92.children[13] = GeoViewpoint106;

GeoViewpoint GeoViewpoint107 = createNode("GeoViewpoint");
GeoViewpoint107.USE = "View15";
fieldValue92.children[14] = GeoViewpoint107;

GeoViewpoint GeoViewpoint108 = createNode("GeoViewpoint");
GeoViewpoint108.USE = "View16";
fieldValue92.children[15] = GeoViewpoint108;

GeoViewpoint GeoViewpoint109 = createNode("GeoViewpoint");
GeoViewpoint109.USE = "View17";
fieldValue92.children[16] = GeoViewpoint109;

GeoViewpoint GeoViewpoint110 = createNode("GeoViewpoint");
GeoViewpoint110.USE = "View18";
fieldValue92.children[17] = GeoViewpoint110;

GeoViewpoint GeoViewpoint111 = createNode("GeoViewpoint");
GeoViewpoint111.USE = "View19";
fieldValue92.children[18] = GeoViewpoint111;

GeoViewpoint GeoViewpoint112 = createNode("GeoViewpoint");
GeoViewpoint112.USE = "View20";
fieldValue92.children[19] = GeoViewpoint112;

GeoViewpoint GeoViewpoint113 = createNode("GeoViewpoint");
GeoViewpoint113.USE = "View21";
fieldValue92.children[20] = GeoViewpoint113;

GeoViewpoint GeoViewpoint114 = createNode("GeoViewpoint");
GeoViewpoint114.USE = "View22";
fieldValue92.children[21] = GeoViewpoint114;

GeoViewpoint GeoViewpoint115 = createNode("GeoViewpoint");
GeoViewpoint115.USE = "View23";
fieldValue92.children[22] = GeoViewpoint115;

GeoViewpoint GeoViewpoint116 = createNode("GeoViewpoint");
GeoViewpoint116.USE = "View24";
fieldValue92.children[23] = GeoViewpoint116;

GeoViewpoint GeoViewpoint117 = createNode("GeoViewpoint");
GeoViewpoint117.USE = "View25";
fieldValue92.children[24] = GeoViewpoint117;

GeoViewpoint GeoViewpoint118 = createNode("GeoViewpoint");
GeoViewpoint118.USE = "View26";
fieldValue92.children[25] = GeoViewpoint118;

GeoViewpoint GeoViewpoint119 = createNode("GeoViewpoint");
GeoViewpoint119.USE = "View27";
fieldValue92.children[26] = GeoViewpoint119;

GeoViewpoint GeoViewpoint120 = createNode("GeoViewpoint");
GeoViewpoint120.USE = "View28";
fieldValue92.children[27] = GeoViewpoint120;

GeoViewpoint GeoViewpoint121 = createNode("GeoViewpoint");
GeoViewpoint121.USE = "View29";
fieldValue92.children[28] = GeoViewpoint121;

GeoViewpoint GeoViewpoint122 = createNode("GeoViewpoint");
GeoViewpoint122.USE = "View30";
fieldValue92.children[29] = GeoViewpoint122;

GeoViewpoint GeoViewpoint123 = createNode("GeoViewpoint");
GeoViewpoint123.USE = "View31";
fieldValue92.children[30] = GeoViewpoint123;

GeoViewpoint GeoViewpoint124 = createNode("GeoViewpoint");
GeoViewpoint124.USE = "View32";
fieldValue92.children[31] = GeoViewpoint124;

GeoViewpoint GeoViewpoint125 = createNode("GeoViewpoint");
GeoViewpoint125.USE = "View33";
fieldValue92.children[32] = GeoViewpoint125;

GeoViewpoint GeoViewpoint126 = createNode("GeoViewpoint");
GeoViewpoint126.USE = "View34";
fieldValue92.children[33] = GeoViewpoint126;

GeoViewpoint GeoViewpoint127 = createNode("GeoViewpoint");
GeoViewpoint127.USE = "View35";
fieldValue92.children[34] = GeoViewpoint127;

Viewpoint Viewpoint128 = createNode("Viewpoint");
Viewpoint128.DEF = "View4";
Viewpoint128.description = "View four (-X axis)";
Viewpoint128.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint128.position = new SFVec3f(new float[-10,0,0]);
fieldValue92.children[35] = Viewpoint128;

ProtoInstance88.fieldValue[3] = fieldValue92;

//initially enabled is off, scene provides selectable text to activate
children[8] = ProtoInstance88;

//====================
GeoLocation GeoLocation129 = createNode("GeoLocation");
GeoLocation129.geoCoords = new SFVec3d(new double[36.595599,-121.877148,624990]);
Billboard Billboard130 = createNode("Billboard");
Billboard130.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape131 = createNode("Shape");
Text Text132 = createNode("Text");
Text132.string = new MFString(new java.lang.String["ViewpointSequencer tour"]);
FontStyle FontStyle133 = createNode("FontStyle");
FontStyle133.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text132.fontStyle = FontStyle133;

Shape131.geometry = Text132;

Appearance Appearance134 = createNode("Appearance");
Material Material135 = createNode("Material");
Material135.ambientIntensity = 0.25;
Material135.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material135.shininess = 0.39;
Material135.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
Appearance134.material = Material135;

Shape131.appearance = Appearance134;

Billboard130.children = new MFNode();

Billboard130.children[0] = Shape131;

GeoLocation129.children = new MFNode();

GeoLocation129.children[0] = Billboard130;

TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.DEF = "TourTouch";
TouchSensor136.description = "Touch text to turn tour on/off";
GeoLocation129.children[1] = TouchSensor136;

BooleanToggle BooleanToggle137 = createNode("BooleanToggle");
BooleanToggle137.DEF = "TourToggle";
GeoLocation129.children[2] = BooleanToggle137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromField = "isActive";
ROUTE138.fromNode = "TourTouch";
ROUTE138.toField = "set_boolean";
ROUTE138.toNode = "TourToggle";
GeoLocation129.children[3] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromField = "toggle";
ROUTE139.fromNode = "TourToggle";
ROUTE139.toField = "set_enabled";
ROUTE139.toNode = "ViewpointTour";
GeoLocation129.children[4] = ROUTE139;

children[9] = GeoLocation129;

//====================
ExternProtoDeclare ExternProtoDeclare140 = createNode("ExternProtoDeclare");
ExternProtoDeclare140.name = "ViewPositionOrientation";
ExternProtoDeclare140.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare140.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
field field141 = createNode("field");
field141.name = "enabled";
field141.accessType = "inputOutput";
field141.appinfo = "Whether or not ViewPositionOrientation sends output to console";
field141.type = "SFBool";
ExternProtoDeclare140.field = new MFNode();

ExternProtoDeclare140.field[0] = field141;

field field142 = createNode("field");
field142.name = "traceEnabled";
field142.accessType = "initializeOnly";
field142.appinfo = "Output internal trace messages for debugging this node, intended for developer use only";
field142.type = "SFBool";
ExternProtoDeclare140.field[1] = field142;

field field143 = createNode("field");
field143.name = "set_traceEnabled";
field143.accessType = "inputOnly";
field143.appinfo = "Ability to turn output tracing on/off at runtime";
field143.type = "SFBool";
ExternProtoDeclare140.field[2] = field143;

field field144 = createNode("field");
field144.name = "position_changed";
field144.accessType = "outputOnly";
field144.appinfo = "Output local position";
field144.type = "SFVec3f";
ExternProtoDeclare140.field[3] = field144;

field field145 = createNode("field");
field145.name = "orientation_changed";
field145.accessType = "outputOnly";
field145.appinfo = "Output local orientation";
field145.type = "SFRotation";
ExternProtoDeclare140.field[4] = field145;

field field146 = createNode("field");
field146.name = "outputViewpointString";
field146.accessType = "outputOnly";
field146.appinfo = "MFString value of new Viewpoint";
field146.type = "MFString";
ExternProtoDeclare140.field[5] = field146;

children[10] = ExternProtoDeclare140;

ProtoInstance ProtoInstance147 = createNode("ProtoInstance");
ProtoInstance147.name = "ViewPositionOrientation";
ProtoInstance147.DEF = "ExampleViewPositionOrientation";
fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "enabled";
fieldValue148.value = "false";
ProtoInstance147.fieldValue = new MFNode();

ProtoInstance147.fieldValue[0] = fieldValue148;

children[11] = ProtoInstance147;

//====================
}
