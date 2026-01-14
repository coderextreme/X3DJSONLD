#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Geospatial"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("CaliforniaCampuses.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Viewpoints and tour of California campuses"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("4 March 2010"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("20 October 2019"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("CaliforniaCampuses.kml"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://www.web3d.org/x3d-earth"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://x3d-earth.nps.edu"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://hamming.uc.nps.edu"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("subject"));
meta12.setContent(CString("X3D Earth"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://mmog.ern.nps.edu/California/California.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("warning"));
meta15.setContent(CString("under development"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("warning"));
meta16.setContent(CString("mmog.ern.nps.edu restricted to internal access within NPS firewall only"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("generator"));
meta17.setContent(CString("KmlToX3dViewpoints.xslt"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("generator"));
meta18.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("license"));
meta19.setContent(CString("https://savage.nps.edu/Savage/license.html"));
head1.addMeta(&meta19);

X3D0.setHead(&head1);

Scene& Scene20 =  Scene();
WorldInfo& WorldInfo21 =  WorldInfo();
WorldInfo21.setTitle(CString("CaliforniaCampuses.x3d"));
Scene20.addChild(&WorldInfo21);

Switch& Switch22 =  Switch();
Switch22.setDEF(CString("SwitchGlobes"));
Switch22.setWhichChoice(0);
//Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.
Inline& Inline23 =  Inline();
Inline23.setUrl(new CString[]{CString("http://x3d-earth.nps.edu/osmdemo.x3d")}, 1);
Switch22.addChild(&Inline23);

//<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>
Scene20.addChild(&Switch22);

NavigationInfo& NavigationInfo24 =  NavigationInfo();
NavigationInfo24.setTransitionType(new CString[]{CString("ANIMATE")}, 1);
Scene20.addChild(&NavigationInfo24);

Group& Group25 =  Group();
Group25.setDEF(CString("PlacemarkGroup"));
GeoViewpoint& GeoViewpoint26 =  GeoViewpoint();
GeoViewpoint26.setDEF(CString("View01"));
GeoViewpoint26.setDescription(CString("Naval Postgraduate School"));
GeoViewpoint26.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint26.setPosition(new double[]{36.595599,-121.877148,250000});
Group25.addChild(&GeoViewpoint26);

GeoViewpoint& GeoViewpoint27 =  GeoViewpoint();
GeoViewpoint27.setDEF(CString("View02"));
GeoViewpoint27.setDescription(CString("University of California Davis"));
GeoViewpoint27.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint27.setPosition(new double[]{38.53650615157984,-121.7489628616831,250000});
Group25.addChild(&GeoViewpoint27);

GeoViewpoint& GeoViewpoint28 =  GeoViewpoint();
GeoViewpoint28.setDEF(CString("View03"));
GeoViewpoint28.setDescription(CString("University of California Berkeley"));
GeoViewpoint28.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint28.setPosition(new double[]{37.86963434512325,-122.2593873127355,250000});
Group25.addChild(&GeoViewpoint28);

GeoViewpoint& GeoViewpoint29 =  GeoViewpoint();
GeoViewpoint29.setDEF(CString("View04"));
GeoViewpoint29.setDescription(CString("University of California San Francisco"));
GeoViewpoint29.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint29.setPosition(new double[]{37.76340647188392,-122.4582475377715,250000});
Group25.addChild(&GeoViewpoint29);

GeoViewpoint& GeoViewpoint30 =  GeoViewpoint();
GeoViewpoint30.setDEF(CString("View05"));
GeoViewpoint30.setDescription(CString("University of California Santa Cruz"));
GeoViewpoint30.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint30.setPosition(new double[]{36.99628443046043,-122.0534325473795,250000});
Group25.addChild(&GeoViewpoint30);

GeoViewpoint& GeoViewpoint31 =  GeoViewpoint();
GeoViewpoint31.setDEF(CString("View06"));
GeoViewpoint31.setDescription(CString("University of California Merced"));
GeoViewpoint31.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint31.setPosition(new double[]{37.365508575977,-120.4252597059142,250000});
Group25.addChild(&GeoViewpoint31);

GeoViewpoint& GeoViewpoint32 =  GeoViewpoint();
GeoViewpoint32.setDEF(CString("View07"));
GeoViewpoint32.setDescription(CString("University of California Santa Barbara"));
GeoViewpoint32.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint32.setPosition(new double[]{34.41124450961521,-119.8479940053906,250000});
Group25.addChild(&GeoViewpoint32);

GeoViewpoint& GeoViewpoint33 =  GeoViewpoint();
GeoViewpoint33.setDEF(CString("View08"));
GeoViewpoint33.setDescription(CString("University of California Los Angeles"));
GeoViewpoint33.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint33.setPosition(new double[]{34.07224474392262,-118.4408472225642,250000});
Group25.addChild(&GeoViewpoint33);

GeoViewpoint& GeoViewpoint34 =  GeoViewpoint();
GeoViewpoint34.setDEF(CString("View09"));
GeoViewpoint34.setDescription(CString("University of California Irvine"));
GeoViewpoint34.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint34.setPosition(new double[]{33.64623283675919,-117.8427064139082,250000});
Group25.addChild(&GeoViewpoint34);

GeoViewpoint& GeoViewpoint35 =  GeoViewpoint();
GeoViewpoint35.setDEF(CString("View10"));
GeoViewpoint35.setDescription(CString("University of California Riverside"));
GeoViewpoint35.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint35.setPosition(new double[]{33.97350567066717,-117.3281649569839,250000});
Group25.addChild(&GeoViewpoint35);

GeoViewpoint& GeoViewpoint36 =  GeoViewpoint();
GeoViewpoint36.setDEF(CString("View11"));
GeoViewpoint36.setDescription(CString("University of California San Diego"));
GeoViewpoint36.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint36.setPosition(new double[]{32.87612136607509,-117.2367298240259,250000});
Group25.addChild(&GeoViewpoint36);

GeoViewpoint& GeoViewpoint37 =  GeoViewpoint();
GeoViewpoint37.setDEF(CString("View12"));
GeoViewpoint37.setDescription(CString("Humboldt State University"));
GeoViewpoint37.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint37.setPosition(new double[]{40.87630235623448,-124.0785789217266,250000});
Group25.addChild(&GeoViewpoint37);

GeoViewpoint& GeoViewpoint38 =  GeoViewpoint();
GeoViewpoint38.setDEF(CString("View13"));
GeoViewpoint38.setDescription(CString("California State University, Chico"));
GeoViewpoint38.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint38.setPosition(new double[]{39.73031527724385,-121.8453722745223,250000});
Group25.addChild(&GeoViewpoint38);

GeoViewpoint& GeoViewpoint39 =  GeoViewpoint();
GeoViewpoint39.setDEF(CString("View14"));
GeoViewpoint39.setDescription(CString("California State University Sacramento"));
GeoViewpoint39.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint39.setPosition(new double[]{38.5626517618963,-121.4244636520556,250000});
Group25.addChild(&GeoViewpoint39);

GeoViewpoint& GeoViewpoint40 =  GeoViewpoint();
GeoViewpoint40.setDEF(CString("View15"));
GeoViewpoint40.setDescription(CString("Sonoma State University"));
GeoViewpoint40.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint40.setPosition(new double[]{38.33922929793606,-122.6744333530031,250000});
Group25.addChild(&GeoViewpoint40);

GeoViewpoint& GeoViewpoint41 =  GeoViewpoint();
GeoViewpoint41.setDEF(CString("View16"));
GeoViewpoint41.setDescription(CString("California Maritime Academy"));
GeoViewpoint41.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint41.setPosition(new double[]{38.06907065059484,-122.2309147135222,250000});
Group25.addChild(&GeoViewpoint41);

GeoViewpoint& GeoViewpoint42 =  GeoViewpoint();
GeoViewpoint42.setDEF(CString("View17"));
GeoViewpoint42.setDescription(CString("San Francisco State University"));
GeoViewpoint42.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint42.setPosition(new double[]{37.722876,-122.4781512190666,250000});
Group25.addChild(&GeoViewpoint42);

GeoViewpoint& GeoViewpoint43 =  GeoViewpoint();
GeoViewpoint43.setDEF(CString("View18"));
GeoViewpoint43.setDescription(CString("California State University, East Bay"));
GeoViewpoint43.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint43.setPosition(new double[]{37.65707914139907,-122.0569190659761,250000});
Group25.addChild(&GeoViewpoint43);

GeoViewpoint& GeoViewpoint44 =  GeoViewpoint();
GeoViewpoint44.setDEF(CString("View19"));
GeoViewpoint44.setDescription(CString("California State University Stanislaus"));
GeoViewpoint44.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint44.setPosition(new double[]{37.52552478005697,-120.8563508560606,250000});
Group25.addChild(&GeoViewpoint44);

GeoViewpoint& GeoViewpoint45 =  GeoViewpoint();
GeoViewpoint45.setDEF(CString("View20"));
GeoViewpoint45.setDescription(CString("San Jose State University"));
GeoViewpoint45.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint45.setPosition(new double[]{37.33580940527095,-121.8815343755784,250000});
Group25.addChild(&GeoViewpoint45);

GeoViewpoint& GeoViewpoint46 =  GeoViewpoint();
GeoViewpoint46.setDEF(CString("View21"));
GeoViewpoint46.setDescription(CString("California State University, Monterey Bay"));
GeoViewpoint46.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint46.setPosition(new double[]{36.6538071781493,-121.7984465276711,250000});
Group25.addChild(&GeoViewpoint46);

GeoViewpoint& GeoViewpoint47 =  GeoViewpoint();
GeoViewpoint47.setDEF(CString("View22"));
GeoViewpoint47.setDescription(CString("Fresno State University"));
GeoViewpoint47.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint47.setPosition(new double[]{36.812166,-119.7451552005852,250000});
Group25.addChild(&GeoViewpoint47);

GeoViewpoint& GeoViewpoint48 =  GeoViewpoint();
GeoViewpoint48.setDEF(CString("View23"));
GeoViewpoint48.setDescription(CString("California State University, Bakersfield"));
GeoViewpoint48.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint48.setPosition(new double[]{35.350804,-119.1043226128032,250000});
Group25.addChild(&GeoViewpoint48);

GeoViewpoint& GeoViewpoint49 =  GeoViewpoint();
GeoViewpoint49.setDEF(CString("View24"));
GeoViewpoint49.setDescription(CString("California Polytechnic State University"));
GeoViewpoint49.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint49.setPosition(new double[]{35.30115692599171,-120.6595761796351,250000});
Group25.addChild(&GeoViewpoint49);

GeoViewpoint& GeoViewpoint50 =  GeoViewpoint();
GeoViewpoint50.setDEF(CString("View25"));
GeoViewpoint50.setDescription(CString("California State University, Channel Islands"));
GeoViewpoint50.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint50.setPosition(new double[]{34.1624126428852,-119.0425264841287,250000});
Group25.addChild(&GeoViewpoint50);

GeoViewpoint& GeoViewpoint51 =  GeoViewpoint();
GeoViewpoint51.setDEF(CString("View26"));
GeoViewpoint51.setDescription(CString("California State University, Northridge"));
GeoViewpoint51.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint51.setPosition(new double[]{34.23959265263849,-118.5284272400904,250000});
Group25.addChild(&GeoViewpoint51);

GeoViewpoint& GeoViewpoint52 =  GeoViewpoint();
GeoViewpoint52.setDEF(CString("View27"));
GeoViewpoint52.setDescription(CString("California State University, Los Angeles"));
GeoViewpoint52.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint52.setPosition(new double[]{34.06645996626264,-118.1682050902557,250000});
Group25.addChild(&GeoViewpoint52);

GeoViewpoint& GeoViewpoint53 =  GeoViewpoint();
GeoViewpoint53.setDEF(CString("View28"));
GeoViewpoint53.setDescription(CString("California State Polytechnic University, Pomona"));
GeoViewpoint53.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint53.setPosition(new double[]{34.05727150000314,-117.8215320234812,250000});
Group25.addChild(&GeoViewpoint53);

GeoViewpoint& GeoViewpoint54 =  GeoViewpoint();
GeoViewpoint54.setDEF(CString("View29"));
GeoViewpoint54.setDescription(CString("California State University, San Bernardino"));
GeoViewpoint54.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint54.setPosition(new double[]{34.18180116432101,-117.3243676664719,250000});
Group25.addChild(&GeoViewpoint54);

GeoViewpoint& GeoViewpoint55 =  GeoViewpoint();
GeoViewpoint55.setDEF(CString("View30"));
GeoViewpoint55.setDescription(CString("California State University, Fullerton"));
GeoViewpoint55.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint55.setPosition(new double[]{33.882522,-117.8868367869023,250000});
Group25.addChild(&GeoViewpoint55);

GeoViewpoint& GeoViewpoint56 =  GeoViewpoint();
GeoViewpoint56.setDEF(CString("View31"));
GeoViewpoint56.setDescription(CString("California State University Dominguez Hills"));
GeoViewpoint56.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint56.setPosition(new double[]{33.86463396857103,-118.2553596272055,250000});
Group25.addChild(&GeoViewpoint56);

GeoViewpoint& GeoViewpoint57 =  GeoViewpoint();
GeoViewpoint57.setDEF(CString("View32"));
GeoViewpoint57.setDescription(CString("California State University, Long Beach"));
GeoViewpoint57.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint57.setPosition(new double[]{33.78196696470824,-118.112678253688,250000});
Group25.addChild(&GeoViewpoint57);

GeoViewpoint& GeoViewpoint58 =  GeoViewpoint();
GeoViewpoint58.setDEF(CString("View33"));
GeoViewpoint58.setDescription(CString("California State University, San Marcos"));
GeoViewpoint58.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint58.setPosition(new double[]{33.12837619265174,-117.1600194071002,250000});
Group25.addChild(&GeoViewpoint58);

GeoViewpoint& GeoViewpoint59 =  GeoViewpoint();
GeoViewpoint59.setDEF(CString("View34"));
GeoViewpoint59.setDescription(CString("San Diego State University"));
GeoViewpoint59.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint59.setPosition(new double[]{32.77593126586385,-117.0722876242553,250000});
Group25.addChild(&GeoViewpoint59);

GeoViewpoint& GeoViewpoint60 =  GeoViewpoint();
GeoViewpoint60.setDEF(CString("View35"));
GeoViewpoint60.setDescription(CString("CENIC"));
GeoViewpoint60.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint60.setPosition(new double[]{33.879947,-118.027903,250000});
Group25.addChild(&GeoViewpoint60);

Scene20.addChild(&Group25);

//====================
ExternProtoDeclare& ExternProtoDeclare61 =  ExternProtoDeclare();
ExternProtoDeclare61.setName(CString("CrossHair"));
ExternProtoDeclare61.setAppinfo(CString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"));
ExternProtoDeclare61.setUrl(new CString[]{CString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), CString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), CString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"), CString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair")}, 4);
field& field62 =  field();
field62.setName(CString("enabled"));
field62.setAccessType(CString("initializeOnly"));
field62.setAppinfo(CString("whether CrossHair prototype is enabled or not"));
field62.setType(CString("SFBool"));
ExternProtoDeclare61.addChild(&field62);

field& field63 =  field();
field63.setName(CString("set_enabled"));
field63.setAccessType(CString("inputOnly"));
field63.setAppinfo(CString("control whether enabled/disabled"));
field63.setType(CString("SFBool"));
ExternProtoDeclare61.addChild(&field63);

field& field64 =  field();
field64.setName(CString("markerColor"));
field64.setAccessType(CString("inputOutput"));
field64.setAppinfo(CString("color of CrossHair marker"));
field64.setType(CString("SFColor"));
ExternProtoDeclare61.addChild(&field64);

field& field65 =  field();
field65.setName(CString("scale"));
field65.setAccessType(CString("inputOutput"));
field65.setAppinfo(CString("size of CrossHair in meters"));
field65.setType(CString("SFVec3f"));
ExternProtoDeclare61.addChild(&field65);

field& field66 =  field();
field66.setName(CString("positionOffsetFromCamera"));
field66.setAccessType(CString("inputOutput"));
field66.setAppinfo(CString("distance in front of HUD viewpoint"));
field66.setType(CString("SFVec3f"));
ExternProtoDeclare61.addChild(&field66);

Scene20.addChild(&ExternProtoDeclare61);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(CString("CrossHair"));
ProtoInstance67.setDEF(CString("CrossHairInstance"));
fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("enabled"));
fieldValue68.setValue(CString("true"));
ProtoInstance67.addChild(&fieldValue68);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("markerColor"));
fieldValue69.setValue(CString("0.1 0.8 0.1"));
ProtoInstance67.addChild(&fieldValue69);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("scale"));
fieldValue70.setValue(CString("0.5 0.5 0.5"));
ProtoInstance67.addChild(&fieldValue70);

fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("positionOffsetFromCamera"));
fieldValue71.setValue(CString("0 0 -5"));
ProtoInstance67.addChild(&fieldValue71);

Scene20.addChild(&ProtoInstance67);

//====================
ExternProtoDeclare& ExternProtoDeclare72 =  ExternProtoDeclare();
ExternProtoDeclare72.setName(CString("HeadsUpDisplay"));
ExternProtoDeclare72.setAppinfo(CString("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"));
ExternProtoDeclare72.setUrl(new CString[]{CString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), CString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay")}, 4);
field& field73 =  field();
field73.setName(CString("children"));
field73.setAccessType(CString("inputOutput"));
field73.setAppinfo(CString("X3D content positioned at HUD offset"));
field73.setType(CString("MFNode"));
ExternProtoDeclare72.addChild(&field73);

field& field74 =  field();
field74.setName(CString("screenOffset"));
field74.setAccessType(CString("inputOutput"));
field74.setAppinfo(CString("offset position for HUD relative to current view location, default 0 0 -5"));
field74.setType(CString("SFVec3f"));
ExternProtoDeclare72.addChild(&field74);

field& field75 =  field();
field75.setName(CString("position_changed"));
field75.setAccessType(CString("outputOnly"));
field75.setAppinfo(CString("HUD position update (in world coordinates) relative to original location"));
field75.setType(CString("SFVec3f"));
ExternProtoDeclare72.addChild(&field75);

field& field76 =  field();
field76.setName(CString("orientation_changed"));
field76.setAccessType(CString("outputOnly"));
field76.setAppinfo(CString("HUD orientation update relative to original location"));
field76.setType(CString("SFRotation"));
ExternProtoDeclare72.addChild(&field76);

Scene20.addChild(&ExternProtoDeclare72);

//====================
ExternProtoDeclare& ExternProtoDeclare77 =  ExternProtoDeclare();
ExternProtoDeclare77.setName(CString("ViewpointSequencer"));
ExternProtoDeclare77.setAppinfo(CString("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"));
ExternProtoDeclare77.setUrl(new CString[]{CString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), CString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), CString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"), CString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer")}, 4);
field& field78 =  field();
field78.setName(CString("viewpoints"));
field78.setAccessType(CString("initializeOnly"));
field78.setAppinfo(CString("Viewpoint USE nodes that are sequentially bound"));
field78.setType(CString("MFNode"));
ExternProtoDeclare77.addChild(&field78);

field& field79 =  field();
field79.setName(CString("interval"));
field79.setAccessType(CString("inputOutput"));
field79.setAppinfo(CString("number of seconds between viewpoint shifts"));
field79.setType(CString("SFTime"));
ExternProtoDeclare77.addChild(&field79);

field& field80 =  field();
field80.setName(CString("enabled"));
field80.setAccessType(CString("inputOutput"));
field80.setAppinfo(CString("whether ViewpointSequencer is enabled or not"));
field80.setType(CString("SFBool"));
ExternProtoDeclare77.addChild(&field80);

field& field81 =  field();
field81.setName(CString("set_enabled"));
field81.setAccessType(CString("inputOnly"));
field81.setAppinfo(CString("whether ViewpointSequencer is enabled or not"));
field81.setType(CString("SFBool"));
ExternProtoDeclare77.addChild(&field81);

field& field82 =  field();
field82.setName(CString("previous"));
field82.setAccessType(CString("inputOnly"));
field82.setAppinfo(CString("bind previous Viewpoint in list"));
field82.setType(CString("SFBool"));
ExternProtoDeclare77.addChild(&field82);

field& field83 =  field();
field83.setName(CString("next"));
field83.setAccessType(CString("inputOnly"));
field83.setAppinfo(CString("bind next Viewpoint in list"));
field83.setType(CString("SFBool"));
ExternProtoDeclare77.addChild(&field83);

field& field84 =  field();
field84.setName(CString("toggleMessage"));
field84.setAccessType(CString("inputOutput"));
field84.setAppinfo(CString("Select message to toggle ViewpointSequencer"));
field84.setType(CString("MFString"));
ExternProtoDeclare77.addChild(&field84);

field& field85 =  field();
field85.setName(CString("toggleMessageFontSize"));
field85.setAccessType(CString("initializeOnly"));
field85.setAppinfo(CString("Color for toggleMessage text"));
field85.setType(CString("SFFloat"));
ExternProtoDeclare77.addChild(&field85);

field& field86 =  field();
field86.setName(CString("toggleMessageColor"));
field86.setAccessType(CString("inputOutput"));
field86.setAppinfo(CString("Color for toggleMessage text"));
field86.setType(CString("SFColor"));
ExternProtoDeclare77.addChild(&field86);

field& field87 =  field();
field87.setName(CString("traceEnabled"));
field87.setAccessType(CString("inputOutput"));
field87.setAppinfo(CString("enable console output"));
field87.setType(CString("SFBool"));
ExternProtoDeclare77.addChild(&field87);

Scene20.addChild(&ExternProtoDeclare77);

ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(CString("ViewpointSequencer"));
ProtoInstance88.setDEF(CString("ViewpointTour"));
fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("interval"));
fieldValue89.setValue(CString("30"));
ProtoInstance88.addChild(&fieldValue89);

fieldValue& fieldValue90 =  fieldValue();
fieldValue90.setName(CString("enabled"));
fieldValue90.setValue(CString("true"));
ProtoInstance88.addChild(&fieldValue90);

fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("toggleMessage"));
fieldValue91.setValue(CString("\"ViewpointSequencer tour\""));
ProtoInstance88.addChild(&fieldValue91);

fieldValue& fieldValue92 =  fieldValue();
fieldValue92.setName(CString("viewpoints"));
GeoViewpoint& GeoViewpoint93 =  GeoViewpoint();
GeoViewpoint93.setUSE(CString("View01"));
fieldValue92.addChild(GeoViewpoint93);

GeoViewpoint& GeoViewpoint94 =  GeoViewpoint();
GeoViewpoint94.setUSE(CString("View02"));
fieldValue92.addChild(GeoViewpoint94);

GeoViewpoint& GeoViewpoint95 =  GeoViewpoint();
GeoViewpoint95.setUSE(CString("View03"));
fieldValue92.addChild(GeoViewpoint95);

GeoViewpoint& GeoViewpoint96 =  GeoViewpoint();
GeoViewpoint96.setUSE(CString("View04"));
fieldValue92.addChild(GeoViewpoint96);

GeoViewpoint& GeoViewpoint97 =  GeoViewpoint();
GeoViewpoint97.setUSE(CString("View05"));
fieldValue92.addChild(GeoViewpoint97);

GeoViewpoint& GeoViewpoint98 =  GeoViewpoint();
GeoViewpoint98.setUSE(CString("View06"));
fieldValue92.addChild(GeoViewpoint98);

GeoViewpoint& GeoViewpoint99 =  GeoViewpoint();
GeoViewpoint99.setUSE(CString("View07"));
fieldValue92.addChild(GeoViewpoint99);

GeoViewpoint& GeoViewpoint100 =  GeoViewpoint();
GeoViewpoint100.setUSE(CString("View08"));
fieldValue92.addChild(GeoViewpoint100);

GeoViewpoint& GeoViewpoint101 =  GeoViewpoint();
GeoViewpoint101.setUSE(CString("View09"));
fieldValue92.addChild(GeoViewpoint101);

GeoViewpoint& GeoViewpoint102 =  GeoViewpoint();
GeoViewpoint102.setUSE(CString("View10"));
fieldValue92.addChild(GeoViewpoint102);

GeoViewpoint& GeoViewpoint103 =  GeoViewpoint();
GeoViewpoint103.setUSE(CString("View11"));
fieldValue92.addChild(GeoViewpoint103);

GeoViewpoint& GeoViewpoint104 =  GeoViewpoint();
GeoViewpoint104.setUSE(CString("View12"));
fieldValue92.addChild(GeoViewpoint104);

GeoViewpoint& GeoViewpoint105 =  GeoViewpoint();
GeoViewpoint105.setUSE(CString("View13"));
fieldValue92.addChild(GeoViewpoint105);

GeoViewpoint& GeoViewpoint106 =  GeoViewpoint();
GeoViewpoint106.setUSE(CString("View14"));
fieldValue92.addChild(GeoViewpoint106);

GeoViewpoint& GeoViewpoint107 =  GeoViewpoint();
GeoViewpoint107.setUSE(CString("View15"));
fieldValue92.addChild(GeoViewpoint107);

GeoViewpoint& GeoViewpoint108 =  GeoViewpoint();
GeoViewpoint108.setUSE(CString("View16"));
fieldValue92.addChild(GeoViewpoint108);

GeoViewpoint& GeoViewpoint109 =  GeoViewpoint();
GeoViewpoint109.setUSE(CString("View17"));
fieldValue92.addChild(GeoViewpoint109);

GeoViewpoint& GeoViewpoint110 =  GeoViewpoint();
GeoViewpoint110.setUSE(CString("View18"));
fieldValue92.addChild(GeoViewpoint110);

GeoViewpoint& GeoViewpoint111 =  GeoViewpoint();
GeoViewpoint111.setUSE(CString("View19"));
fieldValue92.addChild(GeoViewpoint111);

GeoViewpoint& GeoViewpoint112 =  GeoViewpoint();
GeoViewpoint112.setUSE(CString("View20"));
fieldValue92.addChild(GeoViewpoint112);

GeoViewpoint& GeoViewpoint113 =  GeoViewpoint();
GeoViewpoint113.setUSE(CString("View21"));
fieldValue92.addChild(GeoViewpoint113);

GeoViewpoint& GeoViewpoint114 =  GeoViewpoint();
GeoViewpoint114.setUSE(CString("View22"));
fieldValue92.addChild(GeoViewpoint114);

GeoViewpoint& GeoViewpoint115 =  GeoViewpoint();
GeoViewpoint115.setUSE(CString("View23"));
fieldValue92.addChild(GeoViewpoint115);

GeoViewpoint& GeoViewpoint116 =  GeoViewpoint();
GeoViewpoint116.setUSE(CString("View24"));
fieldValue92.addChild(GeoViewpoint116);

GeoViewpoint& GeoViewpoint117 =  GeoViewpoint();
GeoViewpoint117.setUSE(CString("View25"));
fieldValue92.addChild(GeoViewpoint117);

GeoViewpoint& GeoViewpoint118 =  GeoViewpoint();
GeoViewpoint118.setUSE(CString("View26"));
fieldValue92.addChild(GeoViewpoint118);

GeoViewpoint& GeoViewpoint119 =  GeoViewpoint();
GeoViewpoint119.setUSE(CString("View27"));
fieldValue92.addChild(GeoViewpoint119);

GeoViewpoint& GeoViewpoint120 =  GeoViewpoint();
GeoViewpoint120.setUSE(CString("View28"));
fieldValue92.addChild(GeoViewpoint120);

GeoViewpoint& GeoViewpoint121 =  GeoViewpoint();
GeoViewpoint121.setUSE(CString("View29"));
fieldValue92.addChild(GeoViewpoint121);

GeoViewpoint& GeoViewpoint122 =  GeoViewpoint();
GeoViewpoint122.setUSE(CString("View30"));
fieldValue92.addChild(GeoViewpoint122);

GeoViewpoint& GeoViewpoint123 =  GeoViewpoint();
GeoViewpoint123.setUSE(CString("View31"));
fieldValue92.addChild(GeoViewpoint123);

GeoViewpoint& GeoViewpoint124 =  GeoViewpoint();
GeoViewpoint124.setUSE(CString("View32"));
fieldValue92.addChild(GeoViewpoint124);

GeoViewpoint& GeoViewpoint125 =  GeoViewpoint();
GeoViewpoint125.setUSE(CString("View33"));
fieldValue92.addChild(GeoViewpoint125);

GeoViewpoint& GeoViewpoint126 =  GeoViewpoint();
GeoViewpoint126.setUSE(CString("View34"));
fieldValue92.addChild(GeoViewpoint126);

GeoViewpoint& GeoViewpoint127 =  GeoViewpoint();
GeoViewpoint127.setUSE(CString("View35"));
fieldValue92.addChild(GeoViewpoint127);

Viewpoint& Viewpoint128 =  Viewpoint();
Viewpoint128.setDEF(CString("View4"));
Viewpoint128.setDescription(CString("View four (-X axis)"));
Viewpoint128.setOrientation(new float[]{0,1,0,-1.57});
Viewpoint128.setPosition(new float[]{-10,0,0});
fieldValue92.addChild(&Viewpoint128);

ProtoInstance88.addChild(&fieldValue92);

//initially enabled is off, scene provides selectable text to activate
Scene20.addChild(&ProtoInstance88);

//====================
GeoLocation& GeoLocation129 =  GeoLocation();
GeoLocation129.setGeoCoords(new double[]{36.595599,-121.877148,624990});
Billboard& Billboard130 =  Billboard();
Billboard130.setAxisOfRotation(new float[]{0,0,0});
Shape& Shape131 =  Shape();
Text& Text132 =  Text();
Text132.setString(new CString[]{CString("ViewpointSequencer tour")}, 1);
CFontStyle& FontStyle133 =  CFontStyle();
FontStyle133.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text132.setFontStyle(&FontStyle133);

Shape131.setGeometry(&Text132);

Appearance& Appearance134 =  Appearance();
Material& Material135 =  Material();
Material135.setAmbientIntensity(0.25);
Material135.setDiffuseColor(new float[]{0.795918,0.505869,0.093315});
Material135.setShininess(0.39);
Material135.setSpecularColor(new float[]{0.923469,0.428866,0.006369});
Appearance134.addChild(&Material135);

Shape131.addChild(&Appearance134);

Billboard130.addChild(&Shape131);

GeoLocation129.addChildren(Billboard130);

TouchSensor& TouchSensor136 =  TouchSensor();
TouchSensor136.setDEF(CString("TourTouch"));
TouchSensor136.setDescription(CString("Touch text to turn tour on/off"));
GeoLocation129.addChildren(&TouchSensor136);

BooleanToggle& BooleanToggle137 =  BooleanToggle();
BooleanToggle137.setDEF(CString("TourToggle"));
GeoLocation129.addChildren(BooleanToggle137);

ROUTE& ROUTE138 =  ROUTE();
ROUTE138.setFromField(CString("isActive"));
ROUTE138.setFromNode(CString("TourTouch"));
ROUTE138.setToField(CString("set_boolean"));
ROUTE138.setToNode(CString("TourToggle"));
GeoLocation129.addChildren(&ROUTE138);

ROUTE& ROUTE139 =  ROUTE();
ROUTE139.setFromField(CString("toggle"));
ROUTE139.setFromNode(CString("TourToggle"));
ROUTE139.setToField(CString("set_enabled"));
ROUTE139.setToNode(CString("ViewpointTour"));
GeoLocation129.addChildren(&ROUTE139);

Scene20.addChild(&GeoLocation129);

//====================
ExternProtoDeclare& ExternProtoDeclare140 =  ExternProtoDeclare();
ExternProtoDeclare140.setName(CString("ViewPositionOrientation"));
ExternProtoDeclare140.setAppinfo(CString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"));
ExternProtoDeclare140.setUrl(new CString[]{CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), CString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), CString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")}, 4);
field& field141 =  field();
field141.setName(CString("enabled"));
field141.setAccessType(CString("inputOutput"));
field141.setAppinfo(CString("Whether or not ViewPositionOrientation sends output to console"));
field141.setType(CString("SFBool"));
ExternProtoDeclare140.addChild(&field141);

field& field142 =  field();
field142.setName(CString("traceEnabled"));
field142.setAccessType(CString("initializeOnly"));
field142.setAppinfo(CString("Output internal trace messages for debugging this node, intended for developer use only"));
field142.setType(CString("SFBool"));
ExternProtoDeclare140.addChild(&field142);

field& field143 =  field();
field143.setName(CString("set_traceEnabled"));
field143.setAccessType(CString("inputOnly"));
field143.setAppinfo(CString("Ability to turn output tracing on/off at runtime"));
field143.setType(CString("SFBool"));
ExternProtoDeclare140.addChild(&field143);

field& field144 =  field();
field144.setName(CString("position_changed"));
field144.setAccessType(CString("outputOnly"));
field144.setAppinfo(CString("Output local position"));
field144.setType(CString("SFVec3f"));
ExternProtoDeclare140.addChild(&field144);

field& field145 =  field();
field145.setName(CString("orientation_changed"));
field145.setAccessType(CString("outputOnly"));
field145.setAppinfo(CString("Output local orientation"));
field145.setType(CString("SFRotation"));
ExternProtoDeclare140.addChild(&field145);

field& field146 =  field();
field146.setName(CString("outputViewpointString"));
field146.setAccessType(CString("outputOnly"));
field146.setAppinfo(CString("MFString value of new Viewpoint"));
field146.setType(CString("MFString"));
ExternProtoDeclare140.addChild(&field146);

Scene20.addChild(&ExternProtoDeclare140);

ProtoInstance& ProtoInstance147 =  ProtoInstance();
ProtoInstance147.setName(CString("ViewPositionOrientation"));
ProtoInstance147.setDEF(CString("ExampleViewPositionOrientation"));
fieldValue& fieldValue148 =  fieldValue();
fieldValue148.setName(CString("enabled"));
fieldValue148.setValue(CString("false"));
ProtoInstance147.addChild(&fieldValue148);

Scene20.addChild(&ProtoInstance147);

//====================
X3D0.setScene(&Scene20);

}
