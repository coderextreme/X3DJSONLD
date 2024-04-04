#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.2"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("CameraPrototypes.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman and Jeff Weekley"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("16 March 2009"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("25 October 2016"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("TODO"));
meta7.setContent(CString("Schematron rules, backed up by initialize() checks"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("BeyondViewpointCameraNodesWeb3D2009.pdf"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("subject"));
meta10.setContent(CString("Camera nodes for Viewpoint navigation control"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("CameraExamples.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("license"));
meta15.setContent(CString("../license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
//=============== Camera ==============
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Camera"));
ProtoDeclare17.setAppinfo(CString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field& field19 =  field();
field19.setName(CString("description"));
field19.setAccessType(CString("inputOutput"));
field19.setAppinfo(CString("Text description to be displayed for this Camera"));
field19.setType(CString("SFString"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("position"));
field20.setAccessType(CString("inputOutput"));
field20.setAppinfo(CString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
field20.setType(CString("SFVec3f"));
field20.setValue(CString("0 0 10"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("orientation"));
field21.setAccessType(CString("inputOutput"));
field21.setAppinfo(CString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
field21.setType(CString("SFRotation"));
field21.setValue(CString("0 0 1 0"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("fieldOfView"));
field22.setAccessType(CString("inputOutput"));
field22.setAppinfo(CString("pi/4"));
field22.setType(CString("SFFloat"));
field22.setValue(CString("0.7854"));
ProtoInterface18.addChild(&field22);

field& field23 =  field();
field23.setName(CString("set_fraction"));
field23.setAccessType(CString("inputOnly"));
field23.setAppinfo(CString("input fraction drives interpolators"));
field23.setType(CString("SFFloat"));
ProtoInterface18.addChild(&field23);

field& field24 =  field();
field24.setName(CString("set_bind"));
field24.setAccessType(CString("inputOnly"));
field24.setAppinfo(CString("input event binds or unbinds this Camera"));
field24.setType(CString("SFBool"));
ProtoInterface18.addChild(&field24);

field& field25 =  field();
field25.setName(CString("bindTime"));
field25.setAccessType(CString("outputOnly"));
field25.setAppinfo(CString("output event indicates when this Camera is bound"));
field25.setType(CString("SFTime"));
ProtoInterface18.addChild(&field25);

field& field26 =  field();
field26.setName(CString("isBound"));
field26.setAccessType(CString("outputOnly"));
field26.setAppinfo(CString("output event indicates whether this Camera is bound or unbound"));
field26.setType(CString("SFBool"));
ProtoInterface18.addChild(&field26);

field& field27 =  field();
field27.setName(CString("nearClipPlane"));
field27.setAccessType(CString("inputOutput"));
field27.setAppinfo(CString("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"));
field27.setType(CString("SFFloat"));
field27.setValue(CString("0.25"));
ProtoInterface18.addChild(&field27);

field& field28 =  field();
field28.setName(CString("farClipPlane"));
field28.setAccessType(CString("inputOutput"));
field28.setAppinfo(CString("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"));
field28.setType(CString("SFFloat"));
field28.setValue(CString("0"));
ProtoInterface18.addChild(&field28);

field& field29 =  field();
field29.setName(CString("shots"));
field29.setAccessType(CString("inputOutput"));
field29.setAppinfo(CString("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
field29.setType(CString("MFNode"));
//initialization nodes (if any) go here
ProtoInterface18.addChild(&field29);

field& field30 =  field();
field30.setName(CString("headlight"));
field30.setAccessType(CString("inputOutput"));
field30.setAppinfo(CString("Whether camera headlight is on or off"));
field30.setType(CString("SFBool"));
field30.setValue(CString("true"));
ProtoInterface18.addChild(&field30);

field& field31 =  field();
field31.setName(CString("headlightColor"));
field31.setAccessType(CString("inputOutput"));
field31.setAppinfo(CString("Camera headlight color"));
field31.setType(CString("SFColor"));
field31.setValue(CString("1 1 1"));
ProtoInterface18.addChild(&field31);

field& field32 =  field();
field32.setName(CString("headlightIntensity"));
field32.setAccessType(CString("inputOutput"));
field32.setAppinfo(CString("Camera headlight intensity"));
field32.setType(CString("SFFloat"));
field32.setValue(CString("1"));
ProtoInterface18.addChild(&field32);

field& field33 =  field();
field33.setName(CString("filterColor"));
field33.setAccessType(CString("inputOutput"));
field33.setAppinfo(CString("Camera filter color that modifies virtual lens capture"));
field33.setType(CString("SFColor"));
field33.setValue(CString("1 1 1"));
ProtoInterface18.addChild(&field33);

field& field34 =  field();
field34.setName(CString("filterTransparency"));
field34.setAccessType(CString("inputOutput"));
field34.setAppinfo(CString("Camera filter transparency that modifies virtual lens capture"));
field34.setType(CString("SFFloat"));
field34.setValue(CString("1"));
ProtoInterface18.addChild(&field34);

field& field35 =  field();
field35.setName(CString("upVector"));
field35.setAccessType(CString("inputOutput"));
field35.setAppinfo(CString("upVector changes modify camera orientation (and possibly vice versa)"));
field35.setType(CString("SFVec3f"));
field35.setValue(CString("0 1 0"));
ProtoInterface18.addChild(&field35);

field& field36 =  field();
field36.setName(CString("fStop"));
field36.setAccessType(CString("inputOutput"));
field36.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("5.6"));
ProtoInterface18.addChild(&field36);

field& field37 =  field();
field37.setName(CString("focusDistance"));
field37.setAccessType(CString("inputOutput"));
field37.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("10"));
ProtoInterface18.addChild(&field37);

field& field38 =  field();
field38.setName(CString("isActive"));
field38.setAccessType(CString("outputOnly"));
field38.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field38.setType(CString("SFBool"));
ProtoInterface18.addChild(&field38);

field& field39 =  field();
field39.setName(CString("totalDuration"));
field39.setAccessType(CString("outputOnly"));
field39.setAppinfo(CString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
field39.setType(CString("SFTime"));
ProtoInterface18.addChild(&field39);

field& field40 =  field();
field40.setName(CString("offlineRender"));
field40.setAccessType(CString("inputOutput"));
field40.setAppinfo(CString("OfflineRender node"));
field40.setType(CString("SFNode"));
//initialization node (if any) goes here
ProtoInterface18.addChild(&field40);

field& field41 =  field();
field41.setName(CString("traceEnabled"));
field41.setAccessType(CString("initializeOnly"));
field41.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field41.setType(CString("SFBool"));
field41.setValue(CString("false"));
ProtoInterface18.addChild(&field41);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody42 =  ProtoBody();
Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDEF(CString("CameraViewpoint"));
IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("description"));
connect45.setProtoField(CString("description"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("position"));
connect46.setProtoField(CString("position"));
IS44.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("orientation"));
connect47.setProtoField(CString("orientation"));
IS44.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(CString("fieldOfView"));
connect48.setProtoField(CString("fieldOfView"));
IS44.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("set_bind"));
connect49.setProtoField(CString("set_bind"));
IS44.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("bindTime"));
connect50.setProtoField(CString("bindTime"));
IS44.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(CString("isBound"));
connect51.setProtoField(CString("isBound"));
IS44.addChild(&connect51);

Viewpoint43.addChild(&IS44);

ProtoBody42.addChild(&Viewpoint43);

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
NavigationInfo& NavigationInfo52 =  NavigationInfo();
NavigationInfo52.setDEF(CString("CameraNavInfo"));
NavigationInfo52.setType(new CString[3]{CString("EXAMINE"), CString("FLY"), CString("ANY")}, 3);
IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(CString("set_bind"));
connect54.setProtoField(CString("set_bind"));
IS53.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("headlight"));
connect55.setProtoField(CString("headlight"));
IS53.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("visibilityLimit"));
connect56.setProtoField(CString("farClipPlane"));
IS53.addChild(&connect56);

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo52.addChild(&IS53);

ProtoBody42.addChild(&NavigationInfo52);

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
DirectionalLight& DirectionalLight57 =  DirectionalLight();
DirectionalLight57.setDEF(CString("CameraDirectionalLight"));
DirectionalLight57.setGlobal(True);
//TODO confirm other default field values match NavigationInfo spec
IS& IS58 =  IS();
Connect& connect59 =  Connect();
connect59.setNodeField(CString("on"));
connect59.setProtoField(CString("headlight"));
IS58.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(CString("color"));
connect60.setProtoField(CString("headlightColor"));
IS58.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(CString("intensity"));
connect61.setProtoField(CString("headlightIntensity"));
IS58.addChild(&connect61);

DirectionalLight57.addChild(&IS58);

ProtoBody42.addChild(&DirectionalLight57);

PositionInterpolator& PositionInterpolator62 =  PositionInterpolator();
PositionInterpolator62.setDEF(CString("CameraPositionInterpolator"));
PositionInterpolator62.setKey(new float[2]{0.0,1.0}, 2);
PositionInterpolator62.setKeyValue(new float[6]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
IS& IS63 =  IS();
Connect& connect64 =  Connect();
connect64.setNodeField(CString("set_fraction"));
connect64.setProtoField(CString("set_fraction"));
IS63.addChild(&connect64);

PositionInterpolator62.addChild(&IS63);

ProtoBody42.addChild(&PositionInterpolator62);

OrientationInterpolator& OrientationInterpolator65 =  OrientationInterpolator();
OrientationInterpolator65.setDEF(CString("CameraOrientationInterpolator"));
OrientationInterpolator65.setKey(new float[2]{0.0,1.0}, 2);
OrientationInterpolator65.setKeyValue(new float[8]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(CString("set_fraction"));
connect67.setProtoField(CString("set_fraction"));
IS66.addChild(&connect67);

OrientationInterpolator65.addChild(&IS66);

ProtoBody42.addChild(&OrientationInterpolator65);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromField(CString("value_changed"));
ROUTE68.setFromNode(CString("CameraPositionInterpolator"));
ROUTE68.setToField(CString("position"));
ROUTE68.setToNode(CString("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setFromNode(CString("CameraOrientationInterpolator"));
ROUTE69.setToField(CString("orientation"));
ROUTE69.setToNode(CString("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE69);

Script& Script70 =  Script();
Script70.setDEF(CString("CameraScript"));
Script70.setDirectOutput(True);
Script70.setMustEvaluate(True);
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
field& field71 =  field();
field71.setName(CString("description"));
field71.setAccessType(CString("inputOutput"));
field71.setAppinfo(CString("Text description to be displayed for this Camera"));
field71.setType(CString("SFString"));
Script70.addChild(&field71);

field& field72 =  field();
field72.setName(CString("position"));
field72.setAccessType(CString("inputOutput"));
field72.setAppinfo(CString("Camera position in local transformation frame"));
field72.setType(CString("SFVec3f"));
Script70.addChild(&field72);

field& field73 =  field();
field73.setName(CString("orientation"));
field73.setAccessType(CString("inputOutput"));
field73.setAppinfo(CString("Camera rotation in local transformation frame"));
field73.setType(CString("SFRotation"));
Script70.addChild(&field73);

field& field74 =  field();
field74.setName(CString("set_fraction"));
field74.setAccessType(CString("inputOnly"));
field74.setAppinfo(CString("input fraction drives interpolators"));
field74.setType(CString("SFFloat"));
Script70.addChild(&field74);

field& field75 =  field();
field75.setName(CString("set_bind"));
field75.setAccessType(CString("inputOnly"));
field75.setAppinfo(CString("input event binds or unbinds this Camera"));
field75.setType(CString("SFBool"));
Script70.addChild(&field75);

field& field76 =  field();
field76.setName(CString("fieldOfView"));
field76.setAccessType(CString("inputOutput"));
field76.setAppinfo(CString("pi/4"));
field76.setType(CString("SFFloat"));
Script70.addChild(&field76);

field& field77 =  field();
field77.setName(CString("nearClipPlane"));
field77.setAccessType(CString("inputOutput"));
field77.setAppinfo(CString("Vector distance to near clipping plane"));
field77.setType(CString("SFFloat"));
Script70.addChild(&field77);

field& field78 =  field();
field78.setName(CString("farClipPlane"));
field78.setAccessType(CString("inputOutput"));
field78.setAppinfo(CString("Vector distance to far clipping plane"));
field78.setType(CString("SFFloat"));
Script70.addChild(&field78);

field& field79 =  field();
field79.setName(CString("shots"));
field79.setAccessType(CString("inputOutput"));
field79.setAppinfo(CString("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
field79.setType(CString("MFNode"));
//initialization nodes (if any) go here
Script70.addChild(&field79);

field& field80 =  field();
field80.setName(CString("filterColor"));
field80.setAccessType(CString("inputOutput"));
field80.setAppinfo(CString("Camera filter color that modifies virtual lens capture"));
field80.setType(CString("SFColor"));
Script70.addChild(&field80);

field& field81 =  field();
field81.setName(CString("filterTransparency"));
field81.setAccessType(CString("inputOutput"));
field81.setAppinfo(CString("Camera filter transparency that modifies virtual lens capture"));
field81.setType(CString("SFFloat"));
Script70.addChild(&field81);

field& field82 =  field();
field82.setName(CString("upVector"));
field82.setAccessType(CString("inputOutput"));
field82.setAppinfo(CString("upVector changes modify camera orientation (and possibly vice versa)"));
field82.setType(CString("SFVec3f"));
Script70.addChild(&field82);

field& field83 =  field();
field83.setName(CString("fStop"));
field83.setAccessType(CString("inputOutput"));
field83.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field83.setType(CString("SFFloat"));
Script70.addChild(&field83);

field& field84 =  field();
field84.setName(CString("focusDistance"));
field84.setAccessType(CString("inputOutput"));
field84.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field84.setType(CString("SFFloat"));
Script70.addChild(&field84);

field& field85 =  field();
field85.setName(CString("isActive"));
field85.setAccessType(CString("outputOnly"));
field85.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field85.setType(CString("SFBool"));
Script70.addChild(&field85);

field& field86 =  field();
field86.setName(CString("totalDuration"));
field86.setAccessType(CString("outputOnly"));
field86.setAppinfo(CString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
field86.setType(CString("SFTime"));
Script70.addChild(&field86);

field& field87 =  field();
field87.setName(CString("offlineRender"));
field87.setAccessType(CString("inputOutput"));
field87.setAppinfo(CString("OfflineRender node"));
field87.setType(CString("SFNode"));
//initialization node (if any) goes here
Script70.addChild(&field87);

field& field88 =  field();
field88.setName(CString("ViewpointNode"));
field88.setAccessType(CString("initializeOnly"));
field88.setAppinfo(CString("node reference to permit getting setting fields from within Script"));
field88.setType(CString("SFNode"));
Viewpoint& Viewpoint89 =  Viewpoint();
Viewpoint89.setUSE(CString("CameraViewpoint"));
field88.addChild(&Viewpoint89);

Script70.addChild(&field88);

field& field90 =  field();
field90.setName(CString("NavInfoNode"));
field90.setAccessType(CString("initializeOnly"));
field90.setAppinfo(CString("node reference to permit getting setting fields from within Script"));
field90.setType(CString("SFNode"));
NavigationInfo& NavigationInfo91 =  NavigationInfo();
NavigationInfo91.setUSE(CString("CameraNavInfo"));
field90.addChild(&NavigationInfo91);

Script70.addChild(&field90);

field& field92 =  field();
field92.setName(CString("CameraPI"));
field92.setAccessType(CString("initializeOnly"));
field92.setAppinfo(CString("node reference to permit getting setting fields from within Script"));
field92.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator93 =  PositionInterpolator();
PositionInterpolator93.setUSE(CString("CameraPositionInterpolator"));
field92.addChild(&PositionInterpolator93);

Script70.addChild(&field92);

field& field94 =  field();
field94.setName(CString("CameraOI"));
field94.setAccessType(CString("initializeOnly"));
field94.setAppinfo(CString("node reference to permit getting setting fields from within Script"));
field94.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator95 =  OrientationInterpolator();
OrientationInterpolator95.setUSE(CString("CameraOrientationInterpolator"));
field94.addChild(&OrientationInterpolator95);

Script70.addChild(&field94);

field& field96 =  field();
field96.setName(CString("key"));
field96.setAccessType(CString("inputOutput"));
field96.setAppinfo(CString("key array for interpolators"));
field96.setType(CString("MFFloat"));
Script70.addChild(&field96);

field& field97 =  field();
field97.setName(CString("keyValuePosition"));
field97.setAccessType(CString("inputOutput"));
field97.setAppinfo(CString("keyValue array for PositionInterpolator"));
field97.setType(CString("MFVec3f"));
Script70.addChild(&field97);

field& field98 =  field();
field98.setName(CString("keyValueOrientation"));
field98.setAccessType(CString("inputOutput"));
field98.setAppinfo(CString("keyValue array for OrientationInterpolator"));
field98.setType(CString("MFRotation"));
Script70.addChild(&field98);

field& field99 =  field();
field99.setName(CString("animated"));
field99.setAccessType(CString("inputOutput"));
field99.setAppinfo(CString("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"));
field99.setType(CString("SFBool"));
field99.setValue(CString("false"));
Script70.addChild(&field99);

field& field100 =  field();
field100.setName(CString("initialized"));
field100.setAccessType(CString("initializeOnly"));
field100.setAppinfo(CString("perform checkShots() function once immediately after initialization"));
field100.setType(CString("SFBool"));
field100.setValue(CString("false"));
Script70.addChild(&field100);

field& field101 =  field();
field101.setName(CString("shotCount"));
field101.setAccessType(CString("initializeOnly"));
field101.setAppinfo(CString("how many CameraShot nodes are contained in shots array"));
field101.setType(CString("SFInt32"));
field101.setValue(CString("0"));
Script70.addChild(&field101);

field& field102 =  field();
field102.setName(CString("movesCount"));
field102.setAccessType(CString("initializeOnly"));
field102.setAppinfo(CString("how many CameraMove nodes are contained in moves array"));
field102.setType(CString("SFInt32"));
field102.setValue(CString("0"));
Script70.addChild(&field102);

field& field103 =  field();
field103.setName(CString("frameCount"));
field103.setAccessType(CString("initializeOnly"));
field103.setAppinfo(CString("how many frames were created in current loop"));
field103.setType(CString("SFFloat"));
field103.setValue(CString("0"));
Script70.addChild(&field103);

field& field104 =  field();
field104.setName(CString("startTime"));
field104.setAccessType(CString("initializeOnly"));
field104.setAppinfo(CString("holding variable"));
field104.setType(CString("SFTime"));
field104.setValue(CString("0"));
Script70.addChild(&field104);

field& field105 =  field();
field105.setName(CString("priorTraceTime"));
field105.setAccessType(CString("initializeOnly"));
field105.setAppinfo(CString("holding variable"));
field105.setType(CString("SFTime"));
field105.setValue(CString("0"));
Script70.addChild(&field105);

field& field106 =  field();
field106.setName(CString("traceEnabled"));
field106.setAccessType(CString("initializeOnly"));
field106.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field106.setType(CString("SFBool"));
Script70.addChild(&field106);

IS& IS107 =  IS();
Connect& connect108 =  Connect();
connect108.setNodeField(CString("description"));
connect108.setProtoField(CString("description"));
IS107.addChild(&connect108);

Connect& connect109 =  Connect();
connect109.setNodeField(CString("position"));
connect109.setProtoField(CString("position"));
IS107.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(CString("orientation"));
connect110.setProtoField(CString("orientation"));
IS107.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(CString("set_fraction"));
connect111.setProtoField(CString("set_fraction"));
IS107.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(CString("set_bind"));
connect112.setProtoField(CString("set_bind"));
IS107.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(CString("fieldOfView"));
connect113.setProtoField(CString("fieldOfView"));
IS107.addChild(&connect113);

Connect& connect114 =  Connect();
connect114.setNodeField(CString("nearClipPlane"));
connect114.setProtoField(CString("nearClipPlane"));
IS107.addChild(&connect114);

Connect& connect115 =  Connect();
connect115.setNodeField(CString("farClipPlane"));
connect115.setProtoField(CString("farClipPlane"));
IS107.addChild(&connect115);

Connect& connect116 =  Connect();
connect116.setNodeField(CString("shots"));
connect116.setProtoField(CString("shots"));
IS107.addChild(&connect116);

Connect& connect117 =  Connect();
connect117.setNodeField(CString("filterColor"));
connect117.setProtoField(CString("filterColor"));
IS107.addChild(&connect117);

Connect& connect118 =  Connect();
connect118.setNodeField(CString("filterTransparency"));
connect118.setProtoField(CString("filterTransparency"));
IS107.addChild(&connect118);

Connect& connect119 =  Connect();
connect119.setNodeField(CString("upVector"));
connect119.setProtoField(CString("upVector"));
IS107.addChild(&connect119);

Connect& connect120 =  Connect();
connect120.setNodeField(CString("fStop"));
connect120.setProtoField(CString("fStop"));
IS107.addChild(&connect120);

Connect& connect121 =  Connect();
connect121.setNodeField(CString("focusDistance"));
connect121.setProtoField(CString("focusDistance"));
IS107.addChild(&connect121);

Connect& connect122 =  Connect();
connect122.setNodeField(CString("isActive"));
connect122.setProtoField(CString("isActive"));
IS107.addChild(&connect122);

Connect& connect123 =  Connect();
connect123.setNodeField(CString("totalDuration"));
connect123.setProtoField(CString("totalDuration"));
IS107.addChild(&connect123);

Connect& connect124 =  Connect();
connect124.setNodeField(CString("offlineRender"));
connect124.setProtoField(CString("offlineRender"));
IS107.addChild(&connect124);

Connect& connect125 =  Connect();
connect125.setNodeField(CString("traceEnabled"));
connect125.setProtoField(CString("traceEnabled"));
IS107.addChild(&connect125);

Script70.addChild(&IS107);


Script70.setSourceCode(CString("ecmascript:")+
_T("function initialize () // CameraScript")+
_T("{")+
_T("//  tracePrint ('initialize start...');")+
_T("    NavInfoNode.avatarSize[0]   = nearClipPlane;")+
_T("    // remaining setups deferred to invocation of checkShots() method")+
_T("    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization")+
_T("    alwaysPrint ('initialize complete');")+
_T("}")+
_T("function checkShots (eventValue)")+
_T("{")+
_T("    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');")+
_T("    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes")+
_T("    totalDuration= 0;")+
_T("    shotCount  = shots.length;")+
_T("    movesCount = 0;")+
_T("    for (i = 0; i < shotCount; i++) // shots index")+
_T("    {")+
_T("       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);")+
_T("       movesCount   += shots[i].moves.length;")+
_T("       totalDuration = totalDuration + shots[i].shotDuration;")+
_T("       if (shots[i].moves.length == 0)")+
_T("       {")+
_T("          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');")+
_T("       }")+
_T("    }")+
_T("    // size checks before proceeding")+
_T("    if (shotCount == 0)")+
_T("    {")+
_T("       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');")+
_T("       return;")+
_T("    }")+
_T("    else if (movesCount == 0)")+
_T("    {")+
_T("       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');")+
_T("       return;")+
_T("    }")+
_T("    else if (totalDuration == 0)")+
_T("    {")+
_T("       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');")+
_T("       return;")+
_T("    }")+
_T("    tracePrint ('number of contained CameraShot nodes=' + shotCount);")+
_T("    tracePrint ('number of contained CameraMove nodes=' + movesCount);")+
_T("    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');")+
_T("    // compute interpolators")+
_T("    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation")+
_T("    for (i = 0; i < shotCount; i++) // shots index")+
_T("    {")+
_T("        if (i==0) // initial entries")+
_T("        {")+
_T("           key[0]                   = 0.0; // no previous move")+
_T("           keyValuePosition[0]      = shots[i].initialPosition;")+
_T("           keyValueOrientation[0]   = shots[i].initialOrientation;")+
_T("        }")+
_T("        else     // new shot repositions, reorients camera as clean break from preceding shot/move")+
_T("        {")+
_T("           key[k+1]                 = key[k]; // start from end from previous move")+
_T("           keyValuePosition[k+1]    = shots[i].initialPosition;")+
_T("           keyValueOrientation[k+1] = shots[i].initialOrientation;")+
_T("           k++;")+
_T("        }")+
_T("        tracePrint (shots[i].description);")+
_T("        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);")+
_T("        for (j = 0; j < shots[i].moves.length; j++) // moves index")+
_T("        {")+
_T("            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime")+
_T("            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime")+
_T("            //  tracePrint ('durationFloat=' + durationFloat);")+
_T("            key[k+1]               = key[k] + (durationFloat / totalDuration);")+
_T("            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;")+
_T("            if (!animated)")+
_T("            {")+
_T("                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
_T("            }")+
_T("            else")+
_T("            {")+
_T("                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)")+
_T("                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions")+
_T("                // test if difference vector is zero, if so maintain previous rotation")+
_T("                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();")+
_T("                if (shotVector.length() >= 0)")+
_T("                {")+
_T("                    // default view direction is along -Z axis")+
_T("                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);")+
_T("                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
_T("                }")+
_T("                else // note (k > 0)")+
_T("                {")+
_T("                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change")+
_T("                }")+
_T("                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());")+
_T("                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());")+
_T("                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());")+
_T("                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());")+
_T("                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());")+
_T("                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');")+
_T("            }")+
_T("            k++; // update index to match latest key, keyValuePosition, keyValueOrientation")+
_T("            // check animated parameter:  set true if any of moves are tracking moves")+
_T("            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true")+
_T("         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);")+
_T("            // intermediate trace")+
_T("            tracePrint ('                key=' + key);")+
_T("            tracePrint ('   keyValuePosition=' + keyValuePosition);")+
_T("            tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
_T("            tracePrint ('- ' + shots[i].moves[j].description);")+
_T("        }")+
_T("    }")+
_T("    tracePrint ('                key=' + key);")+
_T("    tracePrint ('   keyValuePosition=' + keyValuePosition);")+
_T("    tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
_T("    if (key.length != keyValuePosition.length)")+
_T("    {")+
_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
_T("                  'key.length=' + key.length + ' must equal ' +")+
_T("                  'keyValuePosition.length=' + keyValuePosition.length);")+
_T("    }")+
_T("    if (key.length != keyValueOrientation.length)")+
_T("    {")+
_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
_T("                  'key.length=' + key.length + ' must equal ' +")+
_T("                  'keyValueOrientation.length=' + keyValueOrientation.length);")+
_T("    }")+
_T("    if (key.length != (shotCount + movesCount))")+
_T("    {")+
_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
_T("                  'key.length=' + key.length + ' must equal ' +")+
_T("                  '(shotCount + movesCount)=' + (shotCount + movesCount));")+
_T("    }")+
_T("    tracePrint ('           animated=' + animated);")+
_T("    // set node values")+
_T("    CameraPI.key      = key;")+
_T("    CameraOI.key      = key;")+
_T("    CameraPI.keyValue = keyValuePosition;")+
_T("    CameraOI.keyValue = keyValueOrientation;")+
_T("    if (!animated) // output results")+
_T("    {")+
_T("        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
_T("        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
_T("    }")+
_T("    tracePrint ('checkShots() complete');")+
_T("}")+
_T("function stripBrackets (fieldArray)")+
_T("{")+
_T("    // some browsers add brackets to array output strings, this function strips them")+
_T("    outputString = '';")+
_T("    for (i = 0; i < fieldArray.length; i++)")+
_T("    {")+
_T("       outputString += fieldArray[i].toString();")+
_T("       if (i < fieldArray.length - 1) outputString += ' ';")+
_T("    }")+
_T("    return outputString;")+
_T("}")+
_T("function set_fraction (eventValue, timestamp) // input event received for inputOnly field")+
_T("{")+
_T("   // traceEnabled = false;  // for testing purposes")+
_T("   // if Camera is being animated, immediately recompute interpolator settings")+
_T("   if (animated) checkShots (true);")+
_T("   // trace progress on console with reduced output frequency")+
_T("   if (frameCount == 0)")+
_T("   {")+
_T("      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);")+
_T("      startTime      = timestamp;")+
_T("      priorTraceTime = timestamp;")+
_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
_T("      if (animated) // output results")+
_T("      {")+
_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
_T("        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
_T("      }")+
_T("   }")+
_T("   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval")+
_T("   {")+
_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
_T("      priorTraceTime = timestamp;")+
_T("      if (animated) // output results")+
_T("      {")+
_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
_T("        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
_T("      }")+
_T("   }")+
_T("   if (eventValue == 0)")+
_T("   {")+
_T("      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored")+
_T("      frameCount++;")+
_T("   }")+
_T("   else if (eventValue == 1)")+
_T("   {")+
_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
_T("      if (animated) // output results")+
_T("      {")+
_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
_T("      }")+
_T("      alwaysPrint ('Animation loop complete.');")+
_T("      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally")+
_T("   }")+
_T("   else")+
_T("   {")+
_T("      frameCount++;")+
_T("   }")+
_T("}")+
_T("function set_bind (eventValue) // input event received for inputOnly field")+
_T("{")+
_T("   // need to ensure CameraShot nodes are properly initialized")+
_T("   if (initialized == false)")+
_T("   {")+
_T("      checkShots (true);")+
_T("      initialized = true;")+
_T("   }")+
_T("   if (eventValue)")+
_T("   {")+
_T("       tracePrint ('Camera has been bound');")+
_T("   }")+
_T("   else")+
_T("   {")+
_T("       tracePrint ('Camera has been unbound');")+
_T("   }")+
_T("}")+
_T("function set_description (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    description = eventValue;")+
_T("}")+
_T("function set_position (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    position = eventValue;")+
_T("}")+
_T("function set_orientation (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    orientation = eventValue;")+
_T("}")+
_T("function set_fieldOfView (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    fieldOfView = eventValue;")+
_T("}")+
_T("function set_nearClipPlane (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    nearClipPlane = eventValue;")+
_T("}")+
_T("function set_farClipPlane (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    farClipPlane = eventValue;")+
_T("}")+
_T("function set_shots (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    shots = eventValue;")+
_T("}")+
_T("function set_filterColor (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    filterColor = eventValue;")+
_T("}")+
_T("function set_filterTransparency (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    filterTransparency = eventValue;")+
_T("}")+
_T("function set_upVector (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    upVector = eventValue;")+
_T("}")+
_T("function set_fStop (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    fStop = eventValue;")+
_T("}")+
_T("function set_focusDistance (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    focusDistance = eventValue;")+
_T("}")+
_T("function set_offlineRender (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    offlineRender = eventValue;")+
_T("}")+
_T("function set_key (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    key = eventValue;")+
_T("}")+
_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    keyValuePosition = eventValue;")+
_T("}")+
_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    keyValueOrientation = eventValue;")+
_T("}")+
_T("function set_animated (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    animated = eventValue;")+
_T("}")+
_T("function tracePrint (outputValue)")+
_T("{")+
_T("	if (traceEnabled) alwaysPrint (outputValue);")+
_T("}")+
_T("function alwaysPrint (outputValue)")+
_T("{")+
_T("    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies")+
_T("    var outputString = outputValue.toString(); // utility function according to spec")+
_T("    if (outputString == null) outputString = outputValue; // direct cast")+
_T("    if  (description.length > 0)")+
_T("         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');")+
_T("    else")+
_T("         Browser.print ('[Camera] ' + outputString + '\\n');")+
_T("}"));
ProtoBody42.addChild(&Script70);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromField(CString("position"));
ROUTE126.setFromNode(CString("CameraScript"));
ROUTE126.setToField(CString("position"));
ROUTE126.setToNode(CString("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromField(CString("orientation"));
ROUTE127.setFromNode(CString("CameraScript"));
ROUTE127.setToField(CString("orientation"));
ROUTE127.setToNode(CString("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromField(CString("isActive"));
ROUTE128.setFromNode(CString("CameraScript"));
ROUTE128.setToField(CString("set_bind"));
ROUTE128.setToNode(CString("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromField(CString("isActive"));
ROUTE129.setFromNode(CString("CameraScript"));
ROUTE129.setToField(CString("set_bind"));
ROUTE129.setToNode(CString("CameraNavInfo"));
ProtoBody42.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromField(CString("isActive"));
ROUTE130.setFromNode(CString("CameraScript"));
ROUTE130.setToField(CString("on"));
ROUTE130.setToNode(CString("CameraDirectionalLight"));
ProtoBody42.addChild(&ROUTE130);

ProtoDeclare17.addChild(&ProtoBody42);

Scene16.addChild(&ProtoDeclare17);

//=============== CameraShot ==============
ProtoDeclare& ProtoDeclare131 =  ProtoDeclare();
ProtoDeclare131.setName(CString("CameraShot"));
ProtoDeclare131.setAppinfo(CString("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."));
ProtoInterface& ProtoInterface132 =  ProtoInterface();
field& field133 =  field();
field133.setName(CString("description"));
field133.setAccessType(CString("inputOutput"));
field133.setAppinfo(CString("Text description to be displayed for this CameraShot"));
field133.setType(CString("SFString"));
ProtoInterface132.addChild(&field133);

field& field134 =  field();
field134.setName(CString("enabled"));
field134.setAccessType(CString("inputOutput"));
field134.setAppinfo(CString("Whether this CameraShot can be activated"));
field134.setType(CString("SFBool"));
field134.setValue(CString("true"));
ProtoInterface132.addChild(&field134);

field& field135 =  field();
field135.setName(CString("moves"));
field135.setAccessType(CString("inputOutput"));
field135.setAppinfo(CString("Set of CameraMovement nodes"));
field135.setType(CString("MFNode"));
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface132.addChild(&field135);

field& field136 =  field();
field136.setName(CString("initialPosition"));
field136.setAccessType(CString("inputOutput"));
field136.setAppinfo(CString("Setup to reinitialize camera position for this shot"));
field136.setType(CString("SFVec3f"));
field136.setValue(CString("0 0 10"));
ProtoInterface132.addChild(&field136);

field& field137 =  field();
field137.setName(CString("initialOrientation"));
field137.setAccessType(CString("inputOutput"));
field137.setAppinfo(CString("Setup to reinitialize camera rotation for this shot"));
field137.setType(CString("SFRotation"));
field137.setValue(CString("0 0 1 0"));
ProtoInterface132.addChild(&field137);

field& field138 =  field();
field138.setName(CString("initialAimPoint"));
field138.setAccessType(CString("inputOutput"));
field138.setAppinfo(CString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
field138.setType(CString("SFVec3f"));
field138.setValue(CString("0 0 0"));
ProtoInterface132.addChild(&field138);

field& field139 =  field();
field139.setName(CString("initialFieldOfView"));
field139.setAccessType(CString("inputOutput"));
field139.setAppinfo(CString("pi/4"));
field139.setType(CString("SFFloat"));
field139.setValue(CString("0.7854"));
ProtoInterface132.addChild(&field139);

field& field140 =  field();
field140.setName(CString("initialFStop"));
field140.setAccessType(CString("inputOutput"));
field140.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field140.setType(CString("SFFloat"));
field140.setValue(CString("5.6"));
ProtoInterface132.addChild(&field140);

field& field141 =  field();
field141.setName(CString("initialFocusDistance"));
field141.setAccessType(CString("inputOutput"));
field141.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field141.setType(CString("SFFloat"));
field141.setValue(CString("10"));
ProtoInterface132.addChild(&field141);

field& field142 =  field();
field142.setName(CString("shotDuration"));
field142.setAccessType(CString("outputOnly"));
field142.setAppinfo(CString("Subtotal duration of contained CameraMovement move durations"));
field142.setType(CString("SFTime"));
ProtoInterface132.addChild(&field142);

field& field143 =  field();
field143.setName(CString("isActive"));
field143.setAccessType(CString("outputOnly"));
field143.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field143.setType(CString("SFBool"));
ProtoInterface132.addChild(&field143);

field& field144 =  field();
field144.setName(CString("traceEnabled"));
field144.setAccessType(CString("initializeOnly"));
field144.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field144.setType(CString("SFBool"));
field144.setValue(CString("false"));
ProtoInterface132.addChild(&field144);

ProtoDeclare131.addChild(&ProtoInterface132);

ProtoBody& ProtoBody145 =  ProtoBody();
Script& Script146 =  Script();
Script146.setDEF(CString("CameraShotScript"));
Script146.setDirectOutput(True);
Script146.setMustEvaluate(True);
field& field147 =  field();
field147.setName(CString("description"));
field147.setAccessType(CString("inputOutput"));
field147.setAppinfo(CString("Text description to be displayed for this CameraShot"));
field147.setType(CString("SFString"));
Script146.addChild(&field147);

field& field148 =  field();
field148.setName(CString("enabled"));
field148.setAccessType(CString("inputOutput"));
field148.setAppinfo(CString("Whether this CameraShot can be activated"));
field148.setType(CString("SFBool"));
Script146.addChild(&field148);

field& field149 =  field();
field149.setName(CString("moves"));
field149.setAccessType(CString("inputOutput"));
field149.setAppinfo(CString("Set of CameraMovement nodes"));
field149.setType(CString("MFNode"));
//initialization nodes (if any) go here
Script146.addChild(&field149);

field& field150 =  field();
field150.setName(CString("initialPosition"));
field150.setAccessType(CString("inputOutput"));
field150.setAppinfo(CString("Setup to reinitialize camera position for this shot"));
field150.setType(CString("SFVec3f"));
Script146.addChild(&field150);

field& field151 =  field();
field151.setName(CString("initialOrientation"));
field151.setAccessType(CString("inputOutput"));
field151.setAppinfo(CString("Setup to reinitialize camera rotation for this shot"));
field151.setType(CString("SFRotation"));
Script146.addChild(&field151);

field& field152 =  field();
field152.setName(CString("initialAimPoint"));
field152.setAccessType(CString("inputOutput"));
field152.setAppinfo(CString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
field152.setType(CString("SFVec3f"));
Script146.addChild(&field152);

field& field153 =  field();
field153.setName(CString("initialFieldOfView"));
field153.setAccessType(CString("inputOutput"));
field153.setAppinfo(CString("pi/4"));
field153.setType(CString("SFFloat"));
Script146.addChild(&field153);

field& field154 =  field();
field154.setName(CString("initialFStop"));
field154.setAccessType(CString("inputOutput"));
field154.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field154.setType(CString("SFFloat"));
Script146.addChild(&field154);

field& field155 =  field();
field155.setName(CString("initialFocusDistance"));
field155.setAccessType(CString("inputOutput"));
field155.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field155.setType(CString("SFFloat"));
Script146.addChild(&field155);

field& field156 =  field();
field156.setName(CString("shotDuration"));
field156.setAccessType(CString("outputOnly"));
field156.setAppinfo(CString("Subtotal duration of contained CameraMovement move durations"));
field156.setType(CString("SFTime"));
Script146.addChild(&field156);

field& field157 =  field();
field157.setName(CString("isActive"));
field157.setAccessType(CString("outputOnly"));
field157.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field157.setType(CString("SFBool"));
Script146.addChild(&field157);

field& field158 =  field();
field158.setName(CString("traceEnabled"));
field158.setAccessType(CString("initializeOnly"));
field158.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field158.setType(CString("SFBool"));
Script146.addChild(&field158);

field& field159 =  field();
field159.setName(CString("key"));
field159.setAccessType(CString("inputOutput"));
field159.setAppinfo(CString("key array for interpolators"));
field159.setType(CString("MFFloat"));
Script146.addChild(&field159);

field& field160 =  field();
field160.setName(CString("keyValuePosition"));
field160.setAccessType(CString("inputOutput"));
field160.setAppinfo(CString("keyValue array for PositionInterpolator"));
field160.setType(CString("MFVec3f"));
Script146.addChild(&field160);

field& field161 =  field();
field161.setName(CString("keyValueOrientation"));
field161.setAccessType(CString("inputOutput"));
field161.setAppinfo(CString("keyValue array for OrientationInterpolator"));
field161.setType(CString("MFRotation"));
Script146.addChild(&field161);

IS& IS162 =  IS();
Connect& connect163 =  Connect();
connect163.setNodeField(CString("description"));
connect163.setProtoField(CString("description"));
IS162.addChild(&connect163);

Connect& connect164 =  Connect();
connect164.setNodeField(CString("enabled"));
connect164.setProtoField(CString("enabled"));
IS162.addChild(&connect164);

Connect& connect165 =  Connect();
connect165.setNodeField(CString("moves"));
connect165.setProtoField(CString("moves"));
IS162.addChild(&connect165);

Connect& connect166 =  Connect();
connect166.setNodeField(CString("initialPosition"));
connect166.setProtoField(CString("initialPosition"));
IS162.addChild(&connect166);

Connect& connect167 =  Connect();
connect167.setNodeField(CString("initialOrientation"));
connect167.setProtoField(CString("initialOrientation"));
IS162.addChild(&connect167);

Connect& connect168 =  Connect();
connect168.setNodeField(CString("initialAimPoint"));
connect168.setProtoField(CString("initialAimPoint"));
IS162.addChild(&connect168);

Connect& connect169 =  Connect();
connect169.setNodeField(CString("initialFieldOfView"));
connect169.setProtoField(CString("initialFieldOfView"));
IS162.addChild(&connect169);

Connect& connect170 =  Connect();
connect170.setNodeField(CString("initialFStop"));
connect170.setProtoField(CString("initialFStop"));
IS162.addChild(&connect170);

Connect& connect171 =  Connect();
connect171.setNodeField(CString("initialFocusDistance"));
connect171.setProtoField(CString("initialFocusDistance"));
IS162.addChild(&connect171);

Connect& connect172 =  Connect();
connect172.setNodeField(CString("shotDuration"));
connect172.setProtoField(CString("shotDuration"));
IS162.addChild(&connect172);

Connect& connect173 =  Connect();
connect173.setNodeField(CString("isActive"));
connect173.setProtoField(CString("isActive"));
IS162.addChild(&connect173);

Connect& connect174 =  Connect();
connect174.setNodeField(CString("traceEnabled"));
connect174.setProtoField(CString("traceEnabled"));
IS162.addChild(&connect174);

Script146.addChild(&IS162);


Script146.setSourceCode(CString("ecmascript:")+
_T("function initialize () // CameraShotScript")+
_T("{")+
_T("//  tracePrint ('initialize start...');")+
_T("    // compute shotDuration by summing durations from contained CameraMovement nodes")+
_T("    shotDuration = 0;")+
_T("    for (i = 0; i < moves.length; i++)")+
_T("    {")+
_T("        shotDuration = shotDuration + moves[i].duration;")+
_T("    }")+
_T("    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');")+
_T("//  tracePrint ('... initialize() complete');")+
_T("}")+
_T("function set_description (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    description = eventValue;")+
_T("}")+
_T("function set_enabled (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    enabled = eventValue;")+
_T("}")+
_T("function set_moves (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    moves = eventValue;")+
_T("}")+
_T("function set_initialPosition (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialPosition = eventValue;")+
_T("}")+
_T("function set_initialOrientation (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialOrientation = eventValue;")+
_T("}")+
_T("function set_initialAimPoint (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialAimPoint = eventValue;")+
_T("}")+
_T("function set_initialFieldOfView (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialFieldOfView = eventValue;")+
_T("}")+
_T("function set_initialFStop (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialFStop = eventValue;")+
_T("}")+
_T("function set_initialFocusDistance (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    initialFocusDistance = eventValue;")+
_T("}")+
_T("function set_key (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    key = eventValue;")+
_T("}")+
_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    keyValuePosition = eventValue;")+
_T("}")+
_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    keyValueOrientation = eventValue;")+
_T("}")+
_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
_T("function tracePrint (outputValue)")+
_T("{")+
_T("	if (traceEnabled) alwaysPrint (outputValue);")+
_T("}")+
_T("function alwaysPrint (outputValue)")+
_T("{")+
_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
_T("    var outputString = outputValue.toString(); // utility function according to spec")+
_T("    if (outputString == null) outputString = outputValue; // direct cast")+
_T("    if  (description.length > 0)")+
_T("         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');")+
_T("    else")+
_T("         Browser.print ('[CameraShot] ' + outputString + '\\n');")+
_T("}"));
ProtoBody145.addChild(&Script146);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare131.addChild(&ProtoBody145);

Scene16.addChild(&ProtoDeclare131);

//=============== CameraMovement ==============
ProtoDeclare& ProtoDeclare175 =  ProtoDeclare();
ProtoDeclare175.setName(CString("CameraMovement"));
ProtoDeclare175.setAppinfo(CString("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."));
ProtoInterface& ProtoInterface176 =  ProtoInterface();
field& field177 =  field();
field177.setName(CString("description"));
field177.setAccessType(CString("inputOutput"));
field177.setAppinfo(CString("Text description to be displayed for this CameraMovement"));
field177.setType(CString("SFString"));
ProtoInterface176.addChild(&field177);

field& field178 =  field();
field178.setName(CString("enabled"));
field178.setAccessType(CString("inputOutput"));
field178.setAppinfo(CString("Whether this CameraMovement can be activated"));
field178.setType(CString("SFBool"));
field178.setValue(CString("true"));
ProtoInterface176.addChild(&field178);

field& field179 =  field();
field179.setName(CString("duration"));
field179.setAccessType(CString("inputOutput"));
field179.setAppinfo(CString("Duration in seconds for this move"));
field179.setType(CString("SFFloat"));
field179.setValue(CString("0"));
ProtoInterface176.addChild(&field179);

field& field180 =  field();
field180.setName(CString("goalPosition"));
field180.setAccessType(CString("inputOutput"));
field180.setAppinfo(CString("Goal camera position for this move"));
field180.setType(CString("SFVec3f"));
field180.setValue(CString("0 0 10"));
ProtoInterface176.addChild(&field180);

field& field181 =  field();
field181.setName(CString("goalOrientation"));
field181.setAccessType(CString("inputOutput"));
field181.setAppinfo(CString("Goal camera rotation for this move"));
field181.setType(CString("SFRotation"));
field181.setValue(CString("0 0 1 0"));
ProtoInterface176.addChild(&field181);

field& field182 =  field();
field182.setName(CString("tracking"));
field182.setAccessType(CString("inputOutput"));
field182.setAppinfo(CString("Whether or not camera direction is tracking towards the aimPoint"));
field182.setType(CString("SFBool"));
field182.setValue(CString("false"));
ProtoInterface176.addChild(&field182);

field& field183 =  field();
field183.setName(CString("goalAimPoint"));
field183.setAccessType(CString("inputOutput"));
field183.setAppinfo(CString("Goal aimPoint for this move, ignored if tracking=false"));
field183.setType(CString("SFVec3f"));
field183.setValue(CString("0 0 0"));
ProtoInterface176.addChild(&field183);

field& field184 =  field();
field184.setName(CString("goalFieldOfView"));
field184.setAccessType(CString("inputOutput"));
field184.setAppinfo(CString("Goal fieldOfView for this move"));
field184.setType(CString("SFFloat"));
field184.setValue(CString("0.7854"));
ProtoInterface176.addChild(&field184);

field& field185 =  field();
field185.setName(CString("goalFStop"));
field185.setAccessType(CString("inputOutput"));
field185.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field185.setType(CString("SFFloat"));
field185.setValue(CString("5.6"));
ProtoInterface176.addChild(&field185);

field& field186 =  field();
field186.setName(CString("goalFocusDistance"));
field186.setAccessType(CString("inputOutput"));
field186.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field186.setType(CString("SFFloat"));
field186.setValue(CString("10"));
ProtoInterface176.addChild(&field186);

field& field187 =  field();
field187.setName(CString("isActive"));
field187.setAccessType(CString("outputOnly"));
field187.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field187.setType(CString("SFBool"));
ProtoInterface176.addChild(&field187);

field& field188 =  field();
field188.setName(CString("traceEnabled"));
field188.setAccessType(CString("initializeOnly"));
field188.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field188.setType(CString("SFBool"));
field188.setValue(CString("false"));
ProtoInterface176.addChild(&field188);

ProtoDeclare175.addChild(&ProtoInterface176);

ProtoBody& ProtoBody189 =  ProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
Script& Script190 =  Script();
Script190.setDEF(CString("CameraMovementScript"));
Script190.setDirectOutput(True);
Script190.setMustEvaluate(True);
field& field191 =  field();
field191.setName(CString("description"));
field191.setAccessType(CString("inputOutput"));
field191.setAppinfo(CString("Text description to be displayed for this CameraMovement"));
field191.setType(CString("SFString"));
Script190.addChild(&field191);

field& field192 =  field();
field192.setName(CString("enabled"));
field192.setAccessType(CString("inputOutput"));
field192.setAppinfo(CString("Whether this CameraMovement can be activated"));
field192.setType(CString("SFBool"));
Script190.addChild(&field192);

field& field193 =  field();
field193.setName(CString("duration"));
field193.setAccessType(CString("inputOutput"));
field193.setAppinfo(CString("Duration in seconds for this move"));
field193.setType(CString("SFFloat"));
Script190.addChild(&field193);

field& field194 =  field();
field194.setName(CString("goalPosition"));
field194.setAccessType(CString("inputOutput"));
field194.setAppinfo(CString("Goal camera position for this move"));
field194.setType(CString("SFVec3f"));
Script190.addChild(&field194);

field& field195 =  field();
field195.setName(CString("goalOrientation"));
field195.setAccessType(CString("inputOutput"));
field195.setAppinfo(CString("Goal camera rotation for this move"));
field195.setType(CString("SFRotation"));
Script190.addChild(&field195);

field& field196 =  field();
field196.setName(CString("tracking"));
field196.setAccessType(CString("inputOutput"));
field196.setAppinfo(CString("Whether or not camera direction is tracking towards the aimPoint"));
field196.setType(CString("SFBool"));
Script190.addChild(&field196);

field& field197 =  field();
field197.setName(CString("goalAimPoint"));
field197.setAccessType(CString("inputOutput"));
field197.setAppinfo(CString("Goal aimPoint for this move, ignored if tracking=false"));
field197.setType(CString("SFVec3f"));
Script190.addChild(&field197);

field& field198 =  field();
field198.setName(CString("goalFieldOfView"));
field198.setAccessType(CString("inputOutput"));
field198.setAppinfo(CString("Goal fieldOfView for this move"));
field198.setType(CString("SFFloat"));
Script190.addChild(&field198);

field& field199 =  field();
field199.setName(CString("goalFStop"));
field199.setAccessType(CString("inputOutput"));
field199.setAppinfo(CString("Focal length divided effective aperture diameter indicating width of focal plane"));
field199.setType(CString("SFFloat"));
Script190.addChild(&field199);

field& field200 =  field();
field200.setName(CString("goalFocusDistance"));
field200.setAccessType(CString("inputOutput"));
field200.setAppinfo(CString("Distance to focal plane of sharpest focus"));
field200.setType(CString("SFFloat"));
Script190.addChild(&field200);

field& field201 =  field();
field201.setName(CString("isActive"));
field201.setAccessType(CString("outputOnly"));
field201.setAppinfo(CString("Mark start/stop with true/false output respectively useful to trigger external animations"));
field201.setType(CString("SFBool"));
Script190.addChild(&field201);

field& field202 =  field();
field202.setName(CString("traceEnabled"));
field202.setAccessType(CString("initializeOnly"));
field202.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field202.setType(CString("SFBool"));
Script190.addChild(&field202);

IS& IS203 =  IS();
Connect& connect204 =  Connect();
connect204.setNodeField(CString("description"));
connect204.setProtoField(CString("description"));
IS203.addChild(&connect204);

Connect& connect205 =  Connect();
connect205.setNodeField(CString("enabled"));
connect205.setProtoField(CString("enabled"));
IS203.addChild(&connect205);

Connect& connect206 =  Connect();
connect206.setNodeField(CString("duration"));
connect206.setProtoField(CString("duration"));
IS203.addChild(&connect206);

Connect& connect207 =  Connect();
connect207.setNodeField(CString("goalPosition"));
connect207.setProtoField(CString("goalPosition"));
IS203.addChild(&connect207);

Connect& connect208 =  Connect();
connect208.setNodeField(CString("goalOrientation"));
connect208.setProtoField(CString("goalOrientation"));
IS203.addChild(&connect208);

Connect& connect209 =  Connect();
connect209.setNodeField(CString("tracking"));
connect209.setProtoField(CString("tracking"));
IS203.addChild(&connect209);

Connect& connect210 =  Connect();
connect210.setNodeField(CString("goalAimPoint"));
connect210.setProtoField(CString("goalAimPoint"));
IS203.addChild(&connect210);

Connect& connect211 =  Connect();
connect211.setNodeField(CString("goalFieldOfView"));
connect211.setProtoField(CString("goalFieldOfView"));
IS203.addChild(&connect211);

Connect& connect212 =  Connect();
connect212.setNodeField(CString("goalFStop"));
connect212.setProtoField(CString("goalFStop"));
IS203.addChild(&connect212);

Connect& connect213 =  Connect();
connect213.setNodeField(CString("goalFocusDistance"));
connect213.setProtoField(CString("goalFocusDistance"));
IS203.addChild(&connect213);

Connect& connect214 =  Connect();
connect214.setNodeField(CString("isActive"));
connect214.setProtoField(CString("isActive"));
IS203.addChild(&connect214);

Connect& connect215 =  Connect();
connect215.setNodeField(CString("traceEnabled"));
connect215.setProtoField(CString("traceEnabled"));
IS203.addChild(&connect215);

Script190.addChild(&IS203);


Script190.setSourceCode(CString("ecmascript:")+
_T("function initialize () // CameraMovementScript")+
_T("{")+
_T("//  tracePrint ('initialize start...');")+
_T("    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +")+
_T("                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()")+
_T("                           );")+
_T("    if (duration < 0)")+
_T("    {")+
_T("       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');")+
_T("       duration = 0;")+
_T("    }")+
_T("    else if (duration == 0)")+
_T("    {")+
_T("       alwaysPrint ('warning: duration=0, nothing to do!');")+
_T("    }")+
_T("    tracePrint ('... initialize complete');")+
_T("}")+
_T("function set_goalAimPoint (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalAimPoint_changed = eventValue;")+
_T("    tracePrint ('goalAimPoint=' + goalAimPoint.toString());")+
_T("    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator")+
_T("}")+
_T("function set_description (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    description = eventValue;")+
_T("}")+
_T("function set_enabled (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    enabled = eventValue;")+
_T("}")+
_T("function set_duration (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    duration = eventValue;")+
_T("}")+
_T("function set_goalPosition (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalPosition = eventValue;")+
_T("}")+
_T("function set_goalOrientation (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalOrientation = eventValue;")+
_T("}")+
_T("function set_tracking (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    tracking = eventValue;")+
_T("}")+
_T("function set_goalFieldOfView (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalFieldOfView = eventValue;")+
_T("}")+
_T("function set_goalFStop (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalFStop = eventValue;")+
_T("}")+
_T("function set_goalFocusDistance (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    goalFocusDistance = eventValue;")+
_T("}")+
_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
_T("function tracePrint (outputValue)")+
_T("{")+
_T("	if (traceEnabled) alwaysPrint (outputValue);")+
_T("}")+
_T("function alwaysPrint (outputValue)")+
_T("{")+
_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
_T("    var outputString = outputValue.toString(); // utility function according to spec")+
_T("    if (outputString == null) outputString = outputValue; // direct cast")+
_T("    if  (description.length > 0)")+
_T("         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');")+
_T("    else")+
_T("         Browser.print ('[CameraMovement] ' + outputString + '\\n');")+
_T("}"));
ProtoBody189.addChild(&Script190);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare175.addChild(&ProtoBody189);

Scene16.addChild(&ProtoDeclare175);

//=============== OfflineRender ==============
ProtoDeclare& ProtoDeclare216 =  ProtoDeclare();
ProtoDeclare216.setName(CString("OfflineRender"));
ProtoDeclare216.setAppinfo(CString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."));
ProtoInterface& ProtoInterface217 =  ProtoInterface();
//TODO non-photorealistic rendering (NPR) parameters
field& field218 =  field();
field218.setName(CString("description"));
field218.setAccessType(CString("inputOutput"));
field218.setAppinfo(CString("Text description to be displayed for this OfflineRender"));
field218.setType(CString("SFString"));
ProtoInterface217.addChild(&field218);

field& field219 =  field();
field219.setName(CString("enabled"));
field219.setAccessType(CString("inputOutput"));
field219.setAppinfo(CString("Whether this OfflineRender can be activated"));
field219.setType(CString("SFBool"));
field219.setValue(CString("true"));
ProtoInterface217.addChild(&field219);

field& field220 =  field();
field220.setName(CString("frameRate"));
field220.setAccessType(CString("inputOutput"));
field220.setAppinfo(CString("Frames per second recorded for this rendering"));
field220.setType(CString("SFFloat"));
field220.setValue(CString("30"));
ProtoInterface217.addChild(&field220);

field& field221 =  field();
field221.setName(CString("frameSize"));
field221.setAccessType(CString("inputOutput"));
field221.setAppinfo(CString("Size of frame in number of pixels width and height"));
field221.setType(CString("SFVec2f"));
field221.setValue(CString("640 480"));
ProtoInterface217.addChild(&field221);

field& field222 =  field();
field222.setName(CString("pixelAspectRatio"));
field222.setAccessType(CString("inputOutput"));
field222.setAppinfo(CString("Relative dimensions of pixel height/width typically 1.33 or 1"));
field222.setType(CString("SFFloat"));
field222.setValue(CString("1.33"));
ProtoInterface217.addChild(&field222);

field& field223 =  field();
field223.setName(CString("set_startTime"));
field223.setAccessType(CString("inputOnly"));
field223.setAppinfo(CString("Begin render operation"));
field223.setType(CString("SFTime"));
ProtoInterface217.addChild(&field223);

field& field224 =  field();
field224.setName(CString("progress"));
field224.setAccessType(CString("outputOnly"));
field224.setAppinfo(CString("Progress performing render operation (0..1)"));
field224.setType(CString("SFFloat"));
ProtoInterface217.addChild(&field224);

field& field225 =  field();
field225.setName(CString("renderCompleteTime"));
field225.setAccessType(CString("outputOnly"));
field225.setAppinfo(CString("Render operation complete"));
field225.setType(CString("SFTime"));
ProtoInterface217.addChild(&field225);

field& field226 =  field();
field226.setName(CString("movieFormat"));
field226.setAccessType(CString("initializeOnly"));
field226.setAppinfo(CString("Format of rendered output movie (mpeg mp4 etc.), use first supported format"));
field226.setType(CString("MFString"));
field226.setValue(CString("\"mpeg\""));
ProtoInterface217.addChild(&field226);

field& field227 =  field();
field227.setName(CString("imageFormat"));
field227.setAccessType(CString("initializeOnly"));
field227.setAppinfo(CString("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"));
field227.setType(CString("MFString"));
field227.setValue(CString("\"png\""));
ProtoInterface217.addChild(&field227);

field& field228 =  field();
field228.setName(CString("traceEnabled"));
field228.setAccessType(CString("initializeOnly"));
field228.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field228.setType(CString("SFBool"));
field228.setValue(CString("false"));
ProtoInterface217.addChild(&field228);

ProtoDeclare216.addChild(&ProtoInterface217);

ProtoBody& ProtoBody229 =  ProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
Script& Script230 =  Script();
Script230.setDEF(CString("OfflineRenderScript"));
Script230.setMustEvaluate(True);
field& field231 =  field();
field231.setName(CString("description"));
field231.setAccessType(CString("inputOutput"));
field231.setAppinfo(CString("Text description to be displayed for this OfflineRender"));
field231.setType(CString("SFString"));
Script230.addChild(&field231);

field& field232 =  field();
field232.setName(CString("enabled"));
field232.setAccessType(CString("inputOutput"));
field232.setAppinfo(CString("Whether this OfflineRender can be activated"));
field232.setType(CString("SFBool"));
Script230.addChild(&field232);

field& field233 =  field();
field233.setName(CString("frameRate"));
field233.setAccessType(CString("inputOutput"));
field233.setAppinfo(CString("Frames per second recorded for this rendering"));
field233.setType(CString("SFFloat"));
Script230.addChild(&field233);

field& field234 =  field();
field234.setName(CString("frameSize"));
field234.setAccessType(CString("inputOutput"));
field234.setAppinfo(CString("Size of frame in number of pixels width and height"));
field234.setType(CString("SFVec2f"));
Script230.addChild(&field234);

field& field235 =  field();
field235.setName(CString("pixelAspectRatio"));
field235.setAccessType(CString("inputOutput"));
field235.setAppinfo(CString("Relative dimensions of pixel height/width typically 1.33 or 1"));
field235.setType(CString("SFFloat"));
Script230.addChild(&field235);

field& field236 =  field();
field236.setName(CString("set_startTime"));
field236.setAccessType(CString("inputOnly"));
field236.setAppinfo(CString("Begin render operation"));
field236.setType(CString("SFTime"));
Script230.addChild(&field236);

field& field237 =  field();
field237.setName(CString("progress"));
field237.setAccessType(CString("outputOnly"));
field237.setAppinfo(CString("Progress performing render operation (0..1)"));
field237.setType(CString("SFFloat"));
Script230.addChild(&field237);

field& field238 =  field();
field238.setName(CString("renderCompleteTime"));
field238.setAccessType(CString("outputOnly"));
field238.setAppinfo(CString("Render operation complete"));
field238.setType(CString("SFTime"));
Script230.addChild(&field238);

field& field239 =  field();
field239.setName(CString("movieFormat"));
field239.setAccessType(CString("initializeOnly"));
field239.setAppinfo(CString("Format of rendered output movie (mpeg mp4 etc.)"));
field239.setType(CString("MFString"));
Script230.addChild(&field239);

field& field240 =  field();
field240.setName(CString("imageFormat"));
field240.setAccessType(CString("initializeOnly"));
field240.setAppinfo(CString("Format of rendered output images (png jpeg gif tiff etc.)"));
field240.setType(CString("MFString"));
Script230.addChild(&field240);

field& field241 =  field();
field241.setName(CString("traceEnabled"));
field241.setAccessType(CString("initializeOnly"));
field241.setAppinfo(CString("enable console output to trace script computations and prototype progress"));
field241.setType(CString("SFBool"));
Script230.addChild(&field241);

IS& IS242 =  IS();
Connect& connect243 =  Connect();
connect243.setNodeField(CString("description"));
connect243.setProtoField(CString("description"));
IS242.addChild(&connect243);

Connect& connect244 =  Connect();
connect244.setNodeField(CString("enabled"));
connect244.setProtoField(CString("enabled"));
IS242.addChild(&connect244);

Connect& connect245 =  Connect();
connect245.setNodeField(CString("frameRate"));
connect245.setProtoField(CString("frameRate"));
IS242.addChild(&connect245);

Connect& connect246 =  Connect();
connect246.setNodeField(CString("frameSize"));
connect246.setProtoField(CString("frameSize"));
IS242.addChild(&connect246);

Connect& connect247 =  Connect();
connect247.setNodeField(CString("pixelAspectRatio"));
connect247.setProtoField(CString("pixelAspectRatio"));
IS242.addChild(&connect247);

Connect& connect248 =  Connect();
connect248.setNodeField(CString("set_startTime"));
connect248.setProtoField(CString("set_startTime"));
IS242.addChild(&connect248);

Connect& connect249 =  Connect();
connect249.setNodeField(CString("progress"));
connect249.setProtoField(CString("progress"));
IS242.addChild(&connect249);

Connect& connect250 =  Connect();
connect250.setNodeField(CString("renderCompleteTime"));
connect250.setProtoField(CString("renderCompleteTime"));
IS242.addChild(&connect250);

Connect& connect251 =  Connect();
connect251.setNodeField(CString("movieFormat"));
connect251.setProtoField(CString("movieFormat"));
IS242.addChild(&connect251);

Connect& connect252 =  Connect();
connect252.setNodeField(CString("imageFormat"));
connect252.setProtoField(CString("imageFormat"));
IS242.addChild(&connect252);

Connect& connect253 =  Connect();
connect253.setNodeField(CString("traceEnabled"));
connect253.setProtoField(CString("traceEnabled"));
IS242.addChild(&connect253);

Script230.addChild(&IS242);


Script230.setSourceCode(CString("ecmascript:")+
_T("function initialize () // OfflineRenderScript")+
_T("{")+
_T("//  tracePrint ('initialize start...');")+
_T("    tracePrint ('... initialize complete');")+
_T("}")+
_T("function set_description (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    description = eventValue;")+
_T("}")+
_T("function set_enabled (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    enabled = eventValue;")+
_T("}")+
_T("function set_frameRate (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    frameRate = eventValue;")+
_T("}")+
_T("function set_frameSize (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    frameSize = eventValue;")+
_T("}")+
_T("function set_pixelAspectRatio (eventValue) // input event received for inputOutput field")+
_T("{")+
_T("    pixelAspectRatio = eventValue;")+
_T("}")+
_T("function set_startTime (eventValue) // input event received for inputOnly field")+
_T("{")+
_T("   // do something with input eventValue;")+
_T("}")+
_T("function tracePrint (outputValue)")+
_T("{")+
_T("	if (traceEnabled) alwaysPrint (outputValue);")+
_T("}")+
_T("function alwaysPrint (outputValue)")+
_T("{")+
_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
_T("    var outputString = outputValue.toString(); // utility function according to spec")+
_T("    if (outputString == null) outputString = outputValue; // direct cast")+
_T("    if  (description.length > 0)")+
_T("         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');")+
_T("    else")+
_T("         Browser.print ('[OfflineRender] ' + outputString + '\\n');")+
_T("}"));
ProtoBody229.addChild(&Script230);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare216.addChild(&ProtoBody229);

Scene16.addChild(&ProtoDeclare216);

//=============== Launch Prototype Example ==============
Background& Background254 =  Background();
Background254.setSkyColor(new float[3]{0.282353,0.380392,0.470588}, 3);
Scene16.addChild(&Background254);

Anchor& Anchor255 =  Anchor();
Anchor255.setDescription(CString("launch CameraExample scene"));
Anchor255.setUrl(new CString[4]{CString("CameraExamples.x3d"), CString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"), CString("CameraExamples.wrl"), CString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl")}, 4);
Transform& Transform256 =  Transform();
Shape& Shape257 =  Shape();
Text& Text258 =  Text();
Text258.setString(new CString[5]{CString("CameraPrototypes.x3d"), CString("defines multiple prototype nodes"), CString(""), CString("Click on this text to see"), CString("CameraExamples.x3d scene")}, 5);
CFontStyle& FontStyle259 =  CFontStyle();
FontStyle259.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text258.setFontStyle(&FontStyle259);

Shape257.setGeometry(&Text258);

Appearance& Appearance260 =  Appearance();
Material& Material261 =  Material();
Material261.setDiffuseColor(new float[3]{1.0,1.0,0.2});
Appearance260.addChild(&Material261);

Shape257.addChild(&Appearance260);

Transform256.addChild(&Shape257);

Anchor255.addChild(&Transform256);

Scene16.addChild(&Anchor255);

X3D0.setScene(&Scene16);

}
