//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(2);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JoeSkeletonSkinSiteSaluteWalk.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Michalis Kamburelis"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translator"));
meta7.setContent(CString("Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translator"));
meta8.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 January 2004"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("translated"));
meta10.setContent(CString("4 December 2022"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("modified"));
meta11.setContent(CString("16 March 2026"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("TODO"));
meta12.setContent(CString("X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("JoeSkeletonSkinSiteSaluteWalk.original.x3dv"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("Image"));
meta16.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("drawing"));
meta17.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("Image"));
meta18.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("Image"));
meta23.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("Image"));
meta24.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("Image"));
meta25.setContent(CString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("generator"));
meta26.setContent(CString("tovrmlx3d, https://castle-engine.io/convert.php"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("reference"));
meta27.setContent(CString("https://castle-engine.io/view3dscene.php#section_converting"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("generator"));
meta28.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("generator"));
meta29.setContent(CString("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("identifier"));
meta30.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("license"));
meta31.setContent(CString("../license.html"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(CString("generator"));
meta32.setContent(CString("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"));
head1.addMeta(&meta32);

X3D0.setHead(&head1);

Scene& Scene33 =  Scene();
WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setInfo(new CString[]{CString("By Joe for Joe"), CString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")}, 2);
WorldInfo34.setTitle(CString("JoeSkeletonSkinSiteSaluteWalk.x3d"));
Scene33.addChild(&WorldInfo34);

NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setDEF(CString("HeadlightOnRevealsSkinTextureAndColors"));
Scene33.addChild(&NavigationInfo35);

Background& Background36 =  Background();
Background36.setGroundAngle(new float[]{1.57}, 1);
Background36.setGroundColor(new float[]{0.0,0.1,0.0,0.0,0.1,0.0}, 6);
Background36.setSkyColor(new float[]{0.0,0.0,0.1}, 3);
Scene33.addChild(&Background36);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("cordsysfloor"));
Transform37.setScale(new float[]{0.175,0.175,0.175});
Inline& Inline38 =  Inline();
Inline38.setDEF(CString("CoordinateAxes"));
Inline38.setUrl(new CString[]{CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), CString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), CString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")}, 8);
Transform37.addChild(&Inline38);

Scene33.addChild(&Transform37);

//Authoring hint: these axes are aligned within local coordinate system
Group& Group39 =  Group();
Group39.setDEF(CString("ViewpointGroup"));
Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Front Up View"));
Viewpoint40.setOrientation(new float[]{-1.0,-1.0,0.0,0.55});
Viewpoint40.setPosition(new float[]{-1.0,2.0,2.5});
Group39.addChild(&Viewpoint40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("From Left View"));
Viewpoint41.setOrientation(new float[]{0.3,1.0,0.0,-1.57});
Viewpoint41.setPosition(new float[]{-2.5,1.5,0.0});
Group39.addChild(&Viewpoint41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("Front Mid View"));
Viewpoint42.setPosition(new float[]{0.0,0.5,1.25});
Group39.addChild(&Viewpoint42);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDescription(CString("Front Feet View"));
Viewpoint43.setPosition(new float[]{0.0,0.0,0.75});
Group39.addChild(&Viewpoint43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setDescription(CString("From Right View"));
Viewpoint44.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint44.setPosition(new float[]{1.0,1.0,0.0});
Group39.addChild(&Viewpoint44);

Viewpoint& Viewpoint45 =  Viewpoint();
Viewpoint45.setCenterOfRotation(new float[]{0.0,1.65,0.0});
Viewpoint45.setDescription(CString("Front Head View"));
Viewpoint45.setPosition(new float[]{0.0,1.65,0.75});
Group39.addChild(&Viewpoint45);

Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setDescription(CString("Front Mid View"));
Viewpoint46.setPosition(new float[]{0.0,1.0,1.75});
Group39.addChild(&Viewpoint46);

Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDescription(CString("Rear View"));
Viewpoint47.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint47.setPosition(new float[]{0.0,1.5,-4.0});
Group39.addChild(&Viewpoint47);

Viewpoint& Viewpoint48 =  Viewpoint();
Viewpoint48.setDescription(CString("Top View"));
Viewpoint48.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint48.setPosition(new float[]{0.0,4.0,0.0});
Group39.addChild(&Viewpoint48);

Viewpoint& Viewpoint49 =  Viewpoint();
Viewpoint49.setDescription(CString("Bottom View"));
Viewpoint49.setOrientation(new float[]{1.0,0.0,0.0,1.57});
Viewpoint49.setPosition(new float[]{0.0,-4.0,0.0});
Group39.addChild(&Viewpoint49);

Viewpoint& Viewpoint50 =  Viewpoint();
Viewpoint50.setDescription(CString("Right View"));
Viewpoint50.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint50.setPosition(new float[]{4.0,1.5,0.0});
Group39.addChild(&Viewpoint50);

Scene33.addChild(&Group39);

Group& Group51 =  Group();
Group51.setDEF(CString("VisualizationShapes"));
Group51.setVisible(false);
Transform& Transform52 =  Transform();
Transform52.setScale(new float[]{5.0,5.0,5.0});
Transform52.setTranslation(new float[]{0.0,2.1,0.0});
Shape& Shape53 =  Shape();
Shape53.setDEF(CString("jointbox"));
Appearance& Appearance54 =  Appearance();
Material& Material55 =  Material();
Material55.setAmbientIntensity(0.5);
Material55.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material55.setShininess(1);
Appearance54.addChild(&Material55);

Shape53.addChild(&Appearance54);

IndexedFaceSet& IndexedFaceSet56 =  IndexedFaceSet();
IndexedFaceSet56.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet56.setCreaseAngle(0.1);
CColor& Color57 =  CColor();
Color57.setColor(new float[]{1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0}, 18);
IndexedFaceSet56.setColor(&Color57);

Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setDEF(CString("boxCoords"));
Coordinate58.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.0157,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet56.setCoord(&Coordinate58);

Shape53.setGeometry(&IndexedFaceSet56);

Transform52.addChild(&Shape53);

Group51.addChild(&Transform52);

Transform& Transform59 =  Transform();
Transform59.setScale(new float[]{0.1,0.1,0.1});
Transform59.setTranslation(new float[]{-0.2,0.773,-0.016});
Shape& Shape60 =  Shape();
Shape60.setDEF(CString("sitebox"));
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Material62.setAmbientIntensity(1);
Material62.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material62.setEmissiveColor(new float[]{1.0,0.0,0.0});
Material62.setShininess(0.7);
Material62.setSpecularColor(new float[]{1.0,0.0,0.0});
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet63.setCreaseAngle(0.1);
Coordinate& Coordinate64 =  Coordinate();
Coordinate64.setUSE(CString("boxCoords"));
IndexedFaceSet63.setCoord(&Coordinate64);

Shape60.setGeometry(&IndexedFaceSet63);

Transform59.addChild(&Shape60);

Group51.addChild(&Transform59);

Transform& Transform65 =  Transform();
Transform65.setScale(new float[]{0.1,0.1,0.1});
Transform65.setTranslation(new float[]{0.0,0.2,0.0});
Shape& Shape66 =  Shape();
Appearance& Appearance67 =  Appearance();
Appearance67.setDEF(CString("SegmentLine"));
Material& Material68 =  Material();
Material68.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material68.setEmissiveColor(new float[]{0.0,1.0,0.0});
Material68.setSpecularColor(new float[]{0.0,1.0,0.0});
Appearance67.addChild(&Material68);

Shape66.addChild(&Appearance67);

IndexedLineSet& IndexedLineSet69 =  IndexedLineSet();
IndexedLineSet69.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate70 =  Coordinate();
Coordinate70.setPoint(new float[]{0.0,0.0,0.0,0.0,0.0001,0.0}, 6);
IndexedLineSet69.setCoord(&Coordinate70);

Shape66.setGeometry(&IndexedLineSet69);

Transform65.addChild(&Shape66);

Group51.addChild(&Transform65);

Transform& Transform71 =  Transform();
Transform71.setScale(new float[]{0.1,0.1,0.1});
Transform71.setTranslation(new float[]{-0.2,0.773,-0.016});
Shape& Shape72 =  Shape();
Shape72.setDEF(CString("skinsphere"));
Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setAmbientIntensity(0.5);
Material74.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material74.setEmissiveColor(new float[]{0.0,1.0,0.0});
Material74.setShininess(1);
Material74.setSpecularColor(new float[]{0.0,1.0,0.0});
Appearance73.addChild(&Material74);

Shape72.addChild(&Appearance73);

Sphere& Sphere75 =  Sphere();
Sphere75.setRadius(0.005);
Shape72.setGeometry(&Sphere75);

Transform71.addChild(&Shape72);

Group51.addChild(&Transform71);

Scene33.addChild(&Group51);

Group& Group76 =  Group();
Group76.setDEF(CString("SpecHumanoid"));
Group& Group77 =  Group();
Group77.setDEF(CString("JoeISOHumanoid"));
HAnimHumanoid& HAnimHumanoid78 =  HAnimHumanoid();
HAnimHumanoid78.X3DNode::setName(CString("Human"));
HAnimHumanoid78.setDEF(CString("Joe_Human"));
HAnimHumanoid78.setLoa(4);
HAnimHumanoid78.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
MetadataSet& MetadataSet79 =  MetadataSet();
MetadataSet79.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet79.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString80 =  MetadataString();
MetadataString80.X3DNode::setName(CString("humanoidVersion"));
MetadataString80.setValue(new CString[]{CString("2.0")}, 1);
MetadataSet79.setValue((X3DNode *)&MetadataString80);

HAnimHumanoid78.setMetadata(&MetadataSet79);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.X3DNode::setName(CString("humanoid_root"));
HAnimJoint81.setDEF(CString("Joe_humanoid_root"));
HAnimJoint81.setCenter(new float[]{0.0,0.875,0.0});
HAnimSegment& HAnimSegment82 =  HAnimSegment();
HAnimSegment82.X3DNode::setName(CString("sacrum"));
HAnimSegment82.setDEF(CString("Joe_sacrum"));
Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{0.0,0.875,0.0});
Shape& Shape84 =  Shape();
Shape84.setUSE(CString("jointbox"));
Transform83.addChild(&Shape84);

HAnimSegment82.addChild(&Transform83);

Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Appearance86.setUSE(CString("SegmentLine"));
Shape85.addChild(&Appearance86);

IndexedLineSet& IndexedLineSet87 =  IndexedLineSet();
IndexedLineSet87.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate88 =  Coordinate();
Coordinate88.setPoint(new float[]{0.0,0.875,0.0,0.0,0.92,0.0}, 6);
IndexedLineSet87.setCoord(&Coordinate88);

Shape85.setGeometry(&IndexedLineSet87);

HAnimSegment82.addChild(&Shape85);

Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[]{0.0,0.92,0.08});
Shape& Shape90 =  Shape();
Shape90.setUSE(CString("skinsphere"));
Transform89.addChild(&Shape90);

HAnimSegment82.addChild(&Transform89);

Transform& Transform91 =  Transform();
Transform91.setTranslation(new float[]{0.0,0.87,-0.022});
Shape& Shape92 =  Shape();
Shape92.setUSE(CString("skinsphere"));
Transform91.addChild(&Shape92);

HAnimSegment82.addChild(&Transform91);

HAnimJoint81.addChildren(&HAnimSegment82);

HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.X3DNode::setName(CString("sacroiliac"));
HAnimJoint93.setDEF(CString("Joe_sacroiliac"));
HAnimJoint93.setCenter(new float[]{0.0,0.92,0.0});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint93.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
HAnimSegment& HAnimSegment94 =  HAnimSegment();
HAnimSegment94.X3DNode::setName(CString("pelvis"));
HAnimSegment94.setDEF(CString("Joe_pelvis"));
Transform& Transform95 =  Transform();
Transform95.setTranslation(new float[]{0.0,0.9149,0.0016});
Transform& Transform96 =  Transform();
Shape& Shape97 =  Shape();
Shape97.setUSE(CString("jointbox"));
Transform96.addChild(&Shape97);

Transform95.addChild(&Transform96);

HAnimSegment94.addChild(&Transform95);

Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Appearance99.setUSE(CString("SegmentLine"));
Shape98.addChild(&Appearance99);

IndexedLineSet& IndexedLineSet100 =  IndexedLineSet();
IndexedLineSet100.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate101 =  Coordinate();
Coordinate101.setPoint(new float[]{0.0,0.92,0.0,0.0961,0.9124,0.0,-0.095,0.9171,0.0029,0.0,1.045,-0.095}, 12);
IndexedLineSet100.setCoord(&Coordinate101);

Shape98.setGeometry(&IndexedLineSet100);

HAnimSegment94.addChild(&Shape98);

HAnimSite& HAnimSite102 =  HAnimSite();
HAnimSite102.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite102.setDEF(CString("Joe_l_iliocristale_pt"));
HAnimSite102.setTranslation(new float[]{0.1425,1.065,0.0033});
Shape& Shape103 =  Shape();
Shape103.setUSE(CString("sitebox"));
HAnimSite102.addChild(&Shape103);

HAnimSegment94.addChild(&HAnimSite102);

HAnimSite& HAnimSite104 =  HAnimSite();
HAnimSite104.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite104.setDEF(CString("Joe_l_trochanterion_pt"));
HAnimSite104.setTranslation(new float[]{0.15,0.9,-0.01});
Shape& Shape105 =  Shape();
Shape105.setUSE(CString("sitebox"));
HAnimSite104.addChild(&Shape105);

HAnimSegment94.addChild(&HAnimSite104);

HAnimSite& HAnimSite106 =  HAnimSite();
HAnimSite106.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite106.setDEF(CString("Joe_r_iliocristale_pt"));
HAnimSite106.setTranslation(new float[]{-0.1425,1.065,0.0033});
Shape& Shape107 =  Shape();
Shape107.setUSE(CString("sitebox"));
HAnimSite106.addChild(&Shape107);

HAnimSegment94.addChild(&HAnimSite106);

HAnimSite& HAnimSite108 =  HAnimSite();
HAnimSite108.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite108.setDEF(CString("Joe_r_trochanterion_pt"));
HAnimSite108.setTranslation(new float[]{-0.15,0.9,-0.01});
Shape& Shape109 =  Shape();
Shape109.setUSE(CString("sitebox"));
HAnimSite108.addChild(&Shape109);

HAnimSegment94.addChild(&HAnimSite108);

HAnimSite& HAnimSite110 =  HAnimSite();
HAnimSite110.X3DNode::setName(CString("l_asis_pt"));
HAnimSite110.setDEF(CString("Joe_l_asis_pt"));
HAnimSite110.setTranslation(new float[]{0.0935,1.03,0.075});
Shape& Shape111 =  Shape();
Shape111.setUSE(CString("sitebox"));
HAnimSite110.addChild(&Shape111);

HAnimSegment94.addChild(&HAnimSite110);

HAnimSite& HAnimSite112 =  HAnimSite();
HAnimSite112.X3DNode::setName(CString("r_asis_pt"));
HAnimSite112.setDEF(CString("Joe_r_asis_pt"));
HAnimSite112.setTranslation(new float[]{-0.0935,1.03,0.075});
Shape& Shape113 =  Shape();
Shape113.setUSE(CString("sitebox"));
HAnimSite112.addChild(&Shape113);

HAnimSegment94.addChild(&HAnimSite112);

HAnimSite& HAnimSite114 =  HAnimSite();
HAnimSite114.X3DNode::setName(CString("l_psis_pt"));
HAnimSite114.setDEF(CString("Joe_l_psis_pt"));
HAnimSite114.setTranslation(new float[]{0.0773,1.019,-0.12});
Shape& Shape115 =  Shape();
Shape115.setUSE(CString("sitebox"));
HAnimSite114.addChild(&Shape115);

HAnimSegment94.addChild(&HAnimSite114);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.X3DNode::setName(CString("r_psis_pt"));
HAnimSite116.setDEF(CString("Joe_r_psis_pt"));
HAnimSite116.setTranslation(new float[]{-0.0773,1.019,-0.12});
Shape& Shape117 =  Shape();
Shape117.setUSE(CString("sitebox"));
HAnimSite116.addChild(&Shape117);

HAnimSegment94.addChild(&HAnimSite116);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.X3DNode::setName(CString("floormarker_pt"));
HAnimSite118.setDEF(CString("Joe_floormarker_pt"));
Transform& Transform119 =  Transform();
Transform119.setScale(new float[]{3.0,3.0,3.0});
Shape& Shape120 =  Shape();
Shape120.setUSE(CString("sitebox"));
Transform119.addChild(&Shape120);

HAnimSite118.addChild(&Transform119);

HAnimSegment94.addChild(&HAnimSite118);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.X3DNode::setName(CString("crotch_pt"));
HAnimSite121.setDEF(CString("Joe_crotch_pt"));
HAnimSite121.setTranslation(new float[]{0.0,0.87,-0.022});
Shape& Shape122 =  Shape();
Shape122.setUSE(CString("sitebox"));
HAnimSite121.addChild(&Shape122);

HAnimSegment94.addChild(&HAnimSite121);

HAnimJoint93.addChildren(&HAnimSegment94);

HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("l_hip"));
HAnimJoint123.setDEF(CString("Joe_l_hip"));
HAnimJoint123.setCenter(new float[]{0.1,0.92,0.0});
HAnimJoint123.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint123.setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
HAnimSegment& HAnimSegment124 =  HAnimSegment();
HAnimSegment124.X3DNode::setName(CString("l_thigh"));
HAnimSegment124.setDEF(CString("Joe_l_thigh"));
Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{0.1,0.92,0.0});
Shape& Shape126 =  Shape();
Shape126.setUSE(CString("jointbox"));
Transform125.addChild(&Shape126);

HAnimSegment124.addChild(&Transform125);

Shape& Shape127 =  Shape();
Appearance& Appearance128 =  Appearance();
Appearance128.setUSE(CString("SegmentLine"));
Shape127.addChild(&Appearance128);

IndexedLineSet& IndexedLineSet129 =  IndexedLineSet();
IndexedLineSet129.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate130 =  Coordinate();
Coordinate130.setPoint(new float[]{0.1,0.92,0.0,0.115,0.466,0.0}, 6);
IndexedLineSet129.setCoord(&Coordinate130);

Shape127.setGeometry(&IndexedLineSet129);

HAnimSegment124.addChild(&Shape127);

Transform& Transform131 =  Transform();
Transform131.setTranslation(new float[]{0.1,0.9,0.0775});
Shape& Shape132 =  Shape();
Shape132.setUSE(CString("skinsphere"));
Transform131.addChild(&Shape132);

HAnimSegment124.addChild(&Transform131);

Transform& Transform133 =  Transform();
Transform133.setTranslation(new float[]{0.079,0.92,-0.14});
Shape& Shape134 =  Shape();
Shape134.setUSE(CString("skinsphere"));
Transform133.addChild(&Shape134);

HAnimSegment124.addChild(&Transform133);

Transform& Transform135 =  Transform();
Transform135.setTranslation(new float[]{0.171,0.65,0.0});
Shape& Shape136 =  Shape();
Shape136.setUSE(CString("skinsphere"));
Transform135.addChild(&Shape136);

HAnimSegment124.addChild(&Transform135);

Transform& Transform137 =  Transform();
Transform137.setTranslation(new float[]{0.02,0.65,0.0});
Shape& Shape138 =  Shape();
Shape138.setUSE(CString("skinsphere"));
Transform137.addChild(&Shape138);

HAnimSegment124.addChild(&Transform137);

Transform& Transform139 =  Transform();
Transform139.setTranslation(new float[]{0.1,0.65,-0.08});
Shape& Shape140 =  Shape();
Shape140.setUSE(CString("skinsphere"));
Transform139.addChild(&Shape140);

HAnimSegment124.addChild(&Transform139);

Transform& Transform141 =  Transform();
Transform141.setTranslation(new float[]{0.1,0.65,0.07});
Shape& Shape142 =  Shape();
Shape142.setUSE(CString("skinsphere"));
Transform141.addChild(&Shape142);

HAnimSegment124.addChild(&Transform141);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite143.setDEF(CString("Joe_l_knee_crease_pt"));
HAnimSite143.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape144 =  Shape();
Shape144.setUSE(CString("sitebox"));
HAnimSite143.addChild(&Shape144);

HAnimSegment124.addChild(&HAnimSite143);

HAnimSite& HAnimSite145 =  HAnimSite();
HAnimSite145.X3DNode::setName(CString("l_femoral_lateral_epicondyle_pt"));
HAnimSite145.setDEF(CString("Joe_l_femoral_lateral_epicondyle_pt"));
HAnimSite145.setTranslation(new float[]{0.17,0.466,0.0});
Shape& Shape146 =  Shape();
Shape146.setUSE(CString("sitebox"));
HAnimSite145.addChild(&Shape146);

HAnimSegment124.addChild(&HAnimSite145);

HAnimSite& HAnimSite147 =  HAnimSite();
HAnimSite147.X3DNode::setName(CString("l_femoral_medial_epicondyle_pt"));
HAnimSite147.setDEF(CString("Joe_l_femoral_medial_epicondyle_pt"));
HAnimSite147.setTranslation(new float[]{0.05,0.466,0.0});
Shape& Shape148 =  Shape();
Shape148.setUSE(CString("sitebox"));
HAnimSite147.addChild(&Shape148);

HAnimSegment124.addChild(&HAnimSite147);

HAnimJoint123.addChildren(&HAnimSegment124);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.X3DNode::setName(CString("l_knee"));
HAnimJoint149.setDEF(CString("Joe_l_knee"));
HAnimJoint149.setCenter(new float[]{0.115,0.466,0.0});
HAnimJoint149.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint149.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimSegment& HAnimSegment150 =  HAnimSegment();
HAnimSegment150.X3DNode::setName(CString("l_calf"));
HAnimSegment150.setDEF(CString("Joe_l_calf"));
Transform& Transform151 =  Transform();
Transform151.setTranslation(new float[]{0.115,0.466,0.0});
Shape& Shape152 =  Shape();
Shape152.setUSE(CString("jointbox"));
Transform151.addChild(&Shape152);

HAnimSegment150.addChild(&Transform151);

Shape& Shape153 =  Shape();
Appearance& Appearance154 =  Appearance();
Appearance154.setUSE(CString("SegmentLine"));
Shape153.addChild(&Appearance154);

IndexedLineSet& IndexedLineSet155 =  IndexedLineSet();
IndexedLineSet155.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate156 =  Coordinate();
Coordinate156.setPoint(new float[]{0.115,0.466,0.0,0.1,0.069,0.0}, 6);
IndexedLineSet155.setCoord(&Coordinate156);

Shape153.setGeometry(&IndexedLineSet155);

HAnimSegment150.addChild(&Shape153);

Transform& Transform157 =  Transform();
Transform157.setTranslation(new float[]{0.115,0.466,0.06});
Shape& Shape158 =  Shape();
Shape158.setUSE(CString("skinsphere"));
Transform157.addChild(&Shape158);

HAnimSegment150.addChild(&Transform157);

Transform& Transform159 =  Transform();
Transform159.setTranslation(new float[]{0.115,0.466,-0.055});
Shape& Shape160 =  Shape();
Shape160.setUSE(CString("skinsphere"));
Transform159.addChild(&Shape160);

HAnimSegment150.addChild(&Transform159);

Transform& Transform161 =  Transform();
Transform161.setTranslation(new float[]{0.17,0.466,0.0});
Shape& Shape162 =  Shape();
Shape162.setUSE(CString("skinsphere"));
Transform161.addChild(&Shape162);

HAnimSegment150.addChild(&Transform161);

Transform& Transform163 =  Transform();
Transform163.setTranslation(new float[]{0.05,0.466,0.0});
Shape& Shape164 =  Shape();
Shape164.setUSE(CString("skinsphere"));
Transform163.addChild(&Shape164);

HAnimSegment150.addChild(&Transform163);

Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{0.17,0.3,0.0});
Shape& Shape166 =  Shape();
Shape166.setUSE(CString("skinsphere"));
Transform165.addChild(&Shape166);

HAnimSegment150.addChild(&Transform165);

Transform& Transform167 =  Transform();
Transform167.setTranslation(new float[]{0.06,0.3,0.0});
Shape& Shape168 =  Shape();
Shape168.setUSE(CString("skinsphere"));
Transform167.addChild(&Shape168);

HAnimSegment150.addChild(&Transform167);

Transform& Transform169 =  Transform();
Transform169.setTranslation(new float[]{0.1,0.3,-0.05});
Shape& Shape170 =  Shape();
Shape170.setUSE(CString("skinsphere"));
Transform169.addChild(&Shape170);

HAnimSegment150.addChild(&Transform169);

Transform& Transform171 =  Transform();
Transform171.setTranslation(new float[]{0.1,0.3,0.05});
Shape& Shape172 =  Shape();
Shape172.setUSE(CString("skinsphere"));
Transform171.addChild(&Shape172);

HAnimSegment150.addChild(&Transform171);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite173.setDEF(CString("Joe_l_lateral_malleolus_pt"));
HAnimSite173.setTranslation(new float[]{0.15,0.07,0.0});
Shape& Shape174 =  Shape();
Shape174.setUSE(CString("sitebox"));
HAnimSite173.addChild(&Shape174);

HAnimSegment150.addChild(&HAnimSite173);

HAnimSite& HAnimSite175 =  HAnimSite();
HAnimSite175.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite175.setDEF(CString("Joe_l_medial_malleolus_pt"));
HAnimSite175.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape176 =  Shape();
Shape176.setUSE(CString("sitebox"));
HAnimSite175.addChild(&Shape176);

HAnimSegment150.addChild(&HAnimSite175);

HAnimJoint149.addChildren(&HAnimSegment150);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.X3DNode::setName(CString("l_talocrural"));
HAnimJoint177.setDEF(CString("Joe_l_talocrural"));
HAnimJoint177.setCenter(new float[]{0.115,0.069,0.0});
HAnimJoint177.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint177.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment178 =  HAnimSegment();
HAnimSegment178.X3DNode::setName(CString("l_talus"));
HAnimSegment178.setDEF(CString("Joe_l_talus"));
Transform& Transform179 =  Transform();
Transform179.setTranslation(new float[]{0.115,0.069,0.0});
Shape& Shape180 =  Shape();
Shape180.setUSE(CString("jointbox"));
Transform179.addChild(&Shape180);

HAnimSegment178.addChild(&Transform179);

Shape& Shape181 =  Shape();
Appearance& Appearance182 =  Appearance();
Appearance182.setUSE(CString("SegmentLine"));
Shape181.addChild(&Appearance182);

IndexedLineSet& IndexedLineSet183 =  IndexedLineSet();
IndexedLineSet183.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate184 =  Coordinate();
Coordinate184.setPoint(new float[]{0.1,0.069,0.0,0.115,0.031,0.03}, 6);
IndexedLineSet183.setCoord(&Coordinate184);

Shape181.setGeometry(&IndexedLineSet183);

HAnimSegment178.addChild(&Shape181);

Transform& Transform185 =  Transform();
Transform185.setTranslation(new float[]{0.15,0.07,0.0});
Shape& Shape186 =  Shape();
Shape186.setUSE(CString("skinsphere"));
Transform185.addChild(&Shape186);

HAnimSegment178.addChild(&Transform185);

Transform& Transform187 =  Transform();
Transform187.setTranslation(new float[]{0.085,0.086,0.0125});
Shape& Shape188 =  Shape();
Shape188.setUSE(CString("skinsphere"));
Transform187.addChild(&Shape188);

HAnimSegment178.addChild(&Transform187);

Transform& Transform189 =  Transform();
Transform189.setTranslation(new float[]{0.115,0.069,-0.045});
Shape& Shape190 =  Shape();
Shape190.setUSE(CString("skinsphere"));
Transform189.addChild(&Shape190);

HAnimSegment178.addChild(&Transform189);

Transform& Transform191 =  Transform();
Transform191.setTranslation(new float[]{0.117,0.0975,0.0615});
Shape& Shape192 =  Shape();
Shape192.setUSE(CString("skinsphere"));
Transform191.addChild(&Shape192);

HAnimSegment178.addChild(&Transform191);

HAnimSite& HAnimSite193 =  HAnimSite();
HAnimSite193.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite193.setDEF(CString("Joe_l_sphyrion_pt"));
HAnimSite193.setTranslation(new float[]{0.09,0.056,0.0125});
Shape& Shape194 =  Shape();
Shape194.setUSE(CString("sitebox"));
HAnimSite193.addChild(&Shape194);

HAnimSegment178.addChild(&HAnimSite193);

HAnimSite& HAnimSite195 =  HAnimSite();
HAnimSite195.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite195.setDEF(CString("Joe_l_calcaneus_posterior_pt"));
HAnimSite195.setTranslation(new float[]{0.115,0.04,-0.055});
Shape& Shape196 =  Shape();
Shape196.setUSE(CString("sitebox"));
HAnimSite195.addChild(&Shape196);

HAnimSegment178.addChild(&HAnimSite195);

HAnimJoint177.addChildren(&HAnimSegment178);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint197.setDEF(CString("Joe_l_tarsometatarsal_2"));
HAnimJoint197.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint197.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint197.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment198 =  HAnimSegment();
HAnimSegment198.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment198.setDEF(CString("Joe_l_metatarsal_2"));
Transform& Transform199 =  Transform();
Transform199.setTranslation(new float[]{0.115,0.031,0.03});
Shape& Shape200 =  Shape();
Shape200.setUSE(CString("jointbox"));
Transform199.addChild(&Shape200);

HAnimSegment198.addChild(&Transform199);

Shape& Shape201 =  Shape();
Appearance& Appearance202 =  Appearance();
Appearance202.setUSE(CString("SegmentLine"));
Shape201.addChild(&Appearance202);

IndexedLineSet& IndexedLineSet203 =  IndexedLineSet();
IndexedLineSet203.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
IndexedLineSet203.setCoord(&Coordinate204);

Shape201.setGeometry(&IndexedLineSet203);

HAnimSegment198.addChild(&Shape201);

Transform& Transform205 =  Transform();
Transform205.setTranslation(new float[]{0.1375,0.006,-0.03});
Shape& Shape206 =  Shape();
Shape206.setUSE(CString("skinsphere"));
Transform205.addChild(&Shape206);

HAnimSegment198.addChild(&Transform205);

Transform& Transform207 =  Transform();
Transform207.setTranslation(new float[]{0.095,0.006,-0.03});
Shape& Shape208 =  Shape();
Shape208.setUSE(CString("skinsphere"));
Transform207.addChild(&Shape208);

HAnimSegment198.addChild(&Transform207);

Transform& Transform209 =  Transform();
Transform209.setTranslation(new float[]{0.115,0.015,-0.045});
Shape& Shape210 =  Shape();
Shape210.setUSE(CString("skinsphere"));
Transform209.addChild(&Shape210);

HAnimSegment198.addChild(&Transform209);

HAnimJoint197.addChildren(&HAnimSegment198);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint211.setDEF(CString("Joe_l_metatarsophalangeal_2"));
HAnimJoint211.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint211.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint211.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment212 =  HAnimSegment();
HAnimSegment212.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment212.setDEF(CString("Joe_l_tarsal_proximal_phalanx_2"));
Transform& Transform213 =  Transform();
Transform213.setTranslation(new float[]{0.115,0.037,0.09});
Shape& Shape214 =  Shape();
Shape214.setUSE(CString("jointbox"));
Transform213.addChild(&Shape214);

HAnimSegment212.addChild(&Transform213);

Shape& Shape215 =  Shape();
Appearance& Appearance216 =  Appearance();
Appearance216.setUSE(CString("SegmentLine"));
Shape215.addChild(&Appearance216);

IndexedLineSet& IndexedLineSet217 =  IndexedLineSet();
IndexedLineSet217.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate218 =  Coordinate();
Coordinate218.setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
IndexedLineSet217.setCoord(&Coordinate218);

Shape215.setGeometry(&IndexedLineSet217);

HAnimSegment212.addChild(&Shape215);

Transform& Transform219 =  Transform();
Transform219.setTranslation(new float[]{0.115,0.06,0.1});
Shape& Shape220 =  Shape();
Shape220.setUSE(CString("skinsphere"));
Transform219.addChild(&Shape220);

HAnimSegment212.addChild(&Transform219);

Transform& Transform221 =  Transform();
Transform221.setTranslation(new float[]{0.115,0.0,0.07});
Shape& Shape222 =  Shape();
Shape222.setUSE(CString("skinsphere"));
Transform221.addChild(&Shape222);

HAnimSegment212.addChild(&Transform221);

Transform& Transform223 =  Transform();
Transform223.setTranslation(new float[]{0.165,0.0,0.07});
Shape& Shape224 =  Shape();
Shape224.setUSE(CString("skinsphere"));
Transform223.addChild(&Shape224);

HAnimSegment212.addChild(&Transform223);

Transform& Transform225 =  Transform();
Transform225.setTranslation(new float[]{0.095,0.0,0.07});
Shape& Shape226 =  Shape();
Shape226.setUSE(CString("skinsphere"));
Transform225.addChild(&Shape226);

HAnimSegment212.addChild(&Transform225);

HAnimSite& HAnimSite227 =  HAnimSite();
HAnimSite227.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite227.setDEF(CString("Joe_l_metatarsal_phalanx_1_pt"));
HAnimSite227.setTranslation(new float[]{0.087,0.01,0.122});
Shape& Shape228 =  Shape();
Shape228.setUSE(CString("sitebox"));
HAnimSite227.addChild(&Shape228);

HAnimSegment212.addChild(&HAnimSite227);

HAnimJoint211.addChildren(&HAnimSegment212);

HAnimJoint& HAnimJoint229 =  HAnimJoint();
HAnimJoint229.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint229.setDEF(CString("Joe_l_metatarsal"));
HAnimJoint229.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint229.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint229.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment230 =  HAnimSegment();
HAnimSegment230.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSegment230.setDEF(CString("Joe_l_tarsal_distal_phalanx_2"));
Transform& Transform231 =  Transform();
Transform231.setTranslation(new float[]{0.115,0.02,0.13});
Shape& Shape232 =  Shape();
Shape232.setUSE(CString("jointbox"));
Transform231.addChild(&Shape232);

HAnimSegment230.addChild(&Transform231);

Shape& Shape233 =  Shape();
Appearance& Appearance234 =  Appearance();
Appearance234.setUSE(CString("SegmentLine"));
Shape233.addChild(&Appearance234);

IndexedLineSet& IndexedLineSet235 =  IndexedLineSet();
IndexedLineSet235.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate236 =  Coordinate();
Coordinate236.setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
IndexedLineSet235.setCoord(&Coordinate236);

Shape233.setGeometry(&IndexedLineSet235);

HAnimSegment230.addChild(&Shape233);

Transform& Transform237 =  Transform();
Transform237.setTranslation(new float[]{0.115,0.04,0.13});
Shape& Shape238 =  Shape();
Shape238.setUSE(CString("skinsphere"));
Transform237.addChild(&Shape238);

HAnimSegment230.addChild(&Transform237);

Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[]{0.125,0.0,0.12});
Shape& Shape240 =  Shape();
Shape240.setUSE(CString("skinsphere"));
Transform239.addChild(&Shape240);

HAnimSegment230.addChild(&Transform239);

Transform& Transform241 =  Transform();
Transform241.setTranslation(new float[]{0.165,0.0,0.12});
Shape& Shape242 =  Shape();
Shape242.setUSE(CString("skinsphere"));
Transform241.addChild(&Shape242);

HAnimSegment230.addChild(&Transform241);

Transform& Transform243 =  Transform();
Transform243.setTranslation(new float[]{0.087,0.0,0.122});
Shape& Shape244 =  Shape();
Shape244.setUSE(CString("skinsphere"));
Transform243.addChild(&Shape244);

HAnimSegment230.addChild(&Transform243);

Transform& Transform245 =  Transform();
Transform245.setTranslation(new float[]{0.09,0.012,0.188});
Shape& Shape246 =  Shape();
Shape246.setUSE(CString("skinsphere"));
Transform245.addChild(&Shape246);

HAnimSegment230.addChild(&Transform245);

Transform& Transform247 =  Transform();
Transform247.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape248 =  Shape();
Shape248.setUSE(CString("skinsphere"));
Transform247.addChild(&Shape248);

HAnimSegment230.addChild(&Transform247);

Transform& Transform249 =  Transform();
Transform249.setTranslation(new float[]{0.128,0.011,0.185});
Shape& Shape250 =  Shape();
Shape250.setUSE(CString("skinsphere"));
Transform249.addChild(&Shape250);

HAnimSegment230.addChild(&Transform249);

Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{0.142,0.011,0.178});
Shape& Shape252 =  Shape();
Shape252.setUSE(CString("skinsphere"));
Transform251.addChild(&Shape252);

HAnimSegment230.addChild(&Transform251);

Transform& Transform253 =  Transform();
Transform253.setTranslation(new float[]{0.154,0.01,0.168});
Shape& Shape254 =  Shape();
Shape254.setUSE(CString("skinsphere"));
Transform253.addChild(&Shape254);

HAnimSegment230.addChild(&Transform253);

HAnimSite& HAnimSite255 =  HAnimSite();
HAnimSite255.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite255.setDEF(CString("Joe_l_metatarsal_phalanx_5_pt"));
HAnimSite255.setTranslation(new float[]{0.165,0.01,0.12});
Shape& Shape256 =  Shape();
Shape256.setUSE(CString("sitebox"));
HAnimSite255.addChild(&Shape256);

HAnimSegment230.addChild(&HAnimSite255);

HAnimSite& HAnimSite257 =  HAnimSite();
HAnimSite257.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_pt"));
HAnimSite257.setDEF(CString("Joe_l_tarsal_distal_phalanx_2_pt"));
HAnimSite257.setTranslation(new float[]{0.11,0.011,0.19});
Shape& Shape258 =  Shape();
Shape258.setUSE(CString("sitebox"));
HAnimSite257.addChild(&Shape258);

HAnimSegment230.addChild(&HAnimSite257);

HAnimJoint229.addChildren(&HAnimSegment230);

HAnimJoint211.addChildren(&HAnimJoint229);

HAnimJoint197.addChildren(&HAnimJoint211);

HAnimJoint177.addChildren(&HAnimJoint197);

HAnimJoint149.addChildren(&HAnimJoint177);

HAnimJoint123.addChildren(&HAnimJoint149);

HAnimJoint93.addChildren(&HAnimJoint123);

HAnimJoint& HAnimJoint259 =  HAnimJoint();
HAnimJoint259.X3DNode::setName(CString("r_hip"));
HAnimJoint259.setDEF(CString("Joe_r_hip"));
HAnimJoint259.setCenter(new float[]{-0.1,0.92,0.0});
HAnimJoint259.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
HAnimJoint259.setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
HAnimSegment& HAnimSegment260 =  HAnimSegment();
HAnimSegment260.X3DNode::setName(CString("r_thigh"));
HAnimSegment260.setDEF(CString("Joe_r_thigh"));
Transform& Transform261 =  Transform();
Transform261.setTranslation(new float[]{-0.1,0.92,0.0});
Shape& Shape262 =  Shape();
Shape262.setUSE(CString("jointbox"));
Transform261.addChild(&Shape262);

HAnimSegment260.addChild(&Transform261);

Shape& Shape263 =  Shape();
Appearance& Appearance264 =  Appearance();
Appearance264.setUSE(CString("SegmentLine"));
Shape263.addChild(&Appearance264);

IndexedLineSet& IndexedLineSet265 =  IndexedLineSet();
IndexedLineSet265.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[]{-0.1,0.92,0.0,-0.1,0.4913,0.0}, 6);
IndexedLineSet265.setCoord(&Coordinate266);

Shape263.setGeometry(&IndexedLineSet265);

HAnimSegment260.addChild(&Shape263);

Transform& Transform267 =  Transform();
Transform267.setTranslation(new float[]{-0.079,0.92,-0.14});
Shape& Shape268 =  Shape();
Shape268.setUSE(CString("skinsphere"));
Transform267.addChild(&Shape268);

HAnimSegment260.addChild(&Transform267);

Transform& Transform269 =  Transform();
Transform269.setTranslation(new float[]{-0.1,0.9,0.075});
Shape& Shape270 =  Shape();
Shape270.setUSE(CString("skinsphere"));
Transform269.addChild(&Shape270);

HAnimSegment260.addChild(&Transform269);

Transform& Transform271 =  Transform();
Transform271.setTranslation(new float[]{-0.171,0.65,0.0});
Shape& Shape272 =  Shape();
Shape272.setUSE(CString("skinsphere"));
Transform271.addChild(&Shape272);

HAnimSegment260.addChild(&Transform271);

Transform& Transform273 =  Transform();
Transform273.setTranslation(new float[]{-0.02,0.65,0.0});
Shape& Shape274 =  Shape();
Shape274.setUSE(CString("skinsphere"));
Transform273.addChild(&Shape274);

HAnimSegment260.addChild(&Transform273);

Transform& Transform275 =  Transform();
Transform275.setTranslation(new float[]{-0.1,0.65,-0.08});
Shape& Shape276 =  Shape();
Shape276.setUSE(CString("skinsphere"));
Transform275.addChild(&Shape276);

HAnimSegment260.addChild(&Transform275);

Transform& Transform277 =  Transform();
Transform277.setTranslation(new float[]{-0.1,0.65,0.07});
Shape& Shape278 =  Shape();
Shape278.setUSE(CString("skinsphere"));
Transform277.addChild(&Shape278);

HAnimSegment260.addChild(&Transform277);

HAnimSite& HAnimSite279 =  HAnimSite();
HAnimSite279.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite279.setDEF(CString("Joe_r_knee_crease_pt"));
HAnimSite279.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape280 =  Shape();
Shape280.setUSE(CString("sitebox"));
HAnimSite279.addChild(&Shape280);

HAnimSegment260.addChild(&HAnimSite279);

HAnimSite& HAnimSite281 =  HAnimSite();
HAnimSite281.X3DNode::setName(CString("r_femoral_lateral_epicondyle_pt"));
HAnimSite281.setDEF(CString("Joe_r_femoral_lateral_epicondyle_pt"));
HAnimSite281.setTranslation(new float[]{-0.17,0.466,0.0});
Shape& Shape282 =  Shape();
Shape282.setUSE(CString("sitebox"));
HAnimSite281.addChild(&Shape282);

HAnimSegment260.addChild(&HAnimSite281);

HAnimSite& HAnimSite283 =  HAnimSite();
HAnimSite283.X3DNode::setName(CString("r_femoral_medial_epicondyle_pt"));
HAnimSite283.setDEF(CString("Joe_r_femoral_medial_epicondyle_pt"));
HAnimSite283.setTranslation(new float[]{-0.05,0.466,0.0});
Shape& Shape284 =  Shape();
Shape284.setUSE(CString("sitebox"));
HAnimSite283.addChild(&Shape284);

HAnimSegment260.addChild(&HAnimSite283);

HAnimJoint259.addChildren(&HAnimSegment260);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.X3DNode::setName(CString("r_knee"));
HAnimJoint285.setDEF(CString("Joe_r_knee"));
HAnimJoint285.setCenter(new float[]{-0.05,0.466,0.0});
HAnimJoint285.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
HAnimJoint285.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimSegment& HAnimSegment286 =  HAnimSegment();
HAnimSegment286.X3DNode::setName(CString("r_calf"));
HAnimSegment286.setDEF(CString("Joe_r_calf"));
Transform& Transform287 =  Transform();
Transform287.setTranslation(new float[]{-0.1,0.4913,0.0});
Shape& Shape288 =  Shape();
Shape288.setUSE(CString("jointbox"));
Transform287.addChild(&Shape288);

HAnimSegment286.addChild(&Transform287);

Shape& Shape289 =  Shape();
Appearance& Appearance290 =  Appearance();
Appearance290.setUSE(CString("SegmentLine"));
Shape289.addChild(&Appearance290);

IndexedLineSet& IndexedLineSet291 =  IndexedLineSet();
IndexedLineSet291.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate292 =  Coordinate();
Coordinate292.setPoint(new float[]{-0.1,0.4913,0.0,-0.1,0.0712,0.0}, 6);
IndexedLineSet291.setCoord(&Coordinate292);

Shape289.setGeometry(&IndexedLineSet291);

HAnimSegment286.addChild(&Shape289);

Transform& Transform293 =  Transform();
Transform293.setTranslation(new float[]{-0.115,0.466,0.06});
Shape& Shape294 =  Shape();
Shape294.setUSE(CString("skinsphere"));
Transform293.addChild(&Shape294);

HAnimSegment286.addChild(&Transform293);

Transform& Transform295 =  Transform();
Transform295.setTranslation(new float[]{-0.115,0.466,-0.055});
Shape& Shape296 =  Shape();
Shape296.setUSE(CString("skinsphere"));
Transform295.addChild(&Shape296);

HAnimSegment286.addChild(&Transform295);

Transform& Transform297 =  Transform();
Transform297.setTranslation(new float[]{-0.17,0.466,0.0});
Shape& Shape298 =  Shape();
Shape298.setUSE(CString("skinsphere"));
Transform297.addChild(&Shape298);

HAnimSegment286.addChild(&Transform297);

Transform& Transform299 =  Transform();
Transform299.setTranslation(new float[]{-0.05,0.466,0.0});
Shape& Shape300 =  Shape();
Shape300.setUSE(CString("skinsphere"));
Transform299.addChild(&Shape300);

HAnimSegment286.addChild(&Transform299);

Transform& Transform301 =  Transform();
Transform301.setTranslation(new float[]{-0.17,0.3,0.0});
Shape& Shape302 =  Shape();
Shape302.setUSE(CString("skinsphere"));
Transform301.addChild(&Shape302);

HAnimSegment286.addChild(&Transform301);

Transform& Transform303 =  Transform();
Transform303.setTranslation(new float[]{-0.06,0.3,0.0});
Shape& Shape304 =  Shape();
Shape304.setUSE(CString("skinsphere"));
Transform303.addChild(&Shape304);

HAnimSegment286.addChild(&Transform303);

Transform& Transform305 =  Transform();
Transform305.setTranslation(new float[]{-0.1,0.3,-0.05});
Shape& Shape306 =  Shape();
Shape306.setUSE(CString("skinsphere"));
Transform305.addChild(&Shape306);

HAnimSegment286.addChild(&Transform305);

Transform& Transform307 =  Transform();
Transform307.setTranslation(new float[]{-0.1,0.3,0.05});
Shape& Shape308 =  Shape();
Shape308.setUSE(CString("skinsphere"));
Transform307.addChild(&Shape308);

HAnimSegment286.addChild(&Transform307);

HAnimSite& HAnimSite309 =  HAnimSite();
HAnimSite309.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite309.setDEF(CString("Joe_r_lateral_malleolus_pt"));
HAnimSite309.setTranslation(new float[]{-0.15,0.07,0.0});
Shape& Shape310 =  Shape();
Shape310.setUSE(CString("sitebox"));
HAnimSite309.addChild(&Shape310);

HAnimSegment286.addChild(&HAnimSite309);

HAnimSite& HAnimSite311 =  HAnimSite();
HAnimSite311.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite311.setDEF(CString("Joe_r_medial_malleolus_pt"));
HAnimSite311.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape312 =  Shape();
Shape312.setUSE(CString("sitebox"));
HAnimSite311.addChild(&Shape312);

HAnimSegment286.addChild(&HAnimSite311);

HAnimJoint285.addChildren(&HAnimSegment286);

HAnimJoint& HAnimJoint313 =  HAnimJoint();
HAnimJoint313.X3DNode::setName(CString("r_talocrural"));
HAnimJoint313.setDEF(CString("Joe_r_talocrural"));
HAnimJoint313.setCenter(new float[]{-0.115,0.069,0.0});
HAnimJoint313.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint313.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment314 =  HAnimSegment();
HAnimSegment314.X3DNode::setName(CString("r_talus"));
HAnimSegment314.setDEF(CString("Joe_r_talus"));
Transform& Transform315 =  Transform();
Transform315.setTranslation(new float[]{-0.1,0.0712,0.0});
Shape& Shape316 =  Shape();
Shape316.setUSE(CString("jointbox"));
Transform315.addChild(&Shape316);

HAnimSegment314.addChild(&Transform315);

Shape& Shape317 =  Shape();
Appearance& Appearance318 =  Appearance();
Appearance318.setUSE(CString("SegmentLine"));
Shape317.addChild(&Appearance318);

IndexedLineSet& IndexedLineSet319 =  IndexedLineSet();
IndexedLineSet319.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate320 =  Coordinate();
Coordinate320.setPoint(new float[]{-0.1,0.0712,0.0,-0.1,0.015,-0.01}, 6);
IndexedLineSet319.setCoord(&Coordinate320);

Shape317.setGeometry(&IndexedLineSet319);

HAnimSegment314.addChild(&Shape317);

Transform& Transform321 =  Transform();
Transform321.setTranslation(new float[]{-0.15,0.07,0.0});
Shape& Shape322 =  Shape();
Shape322.setUSE(CString("skinsphere"));
Transform321.addChild(&Shape322);

HAnimSegment314.addChild(&Transform321);

Transform& Transform323 =  Transform();
Transform323.setTranslation(new float[]{-0.085,0.086,0.0125});
Shape& Shape324 =  Shape();
Shape324.setUSE(CString("skinsphere"));
Transform323.addChild(&Shape324);

HAnimSegment314.addChild(&Transform323);

Transform& Transform325 =  Transform();
Transform325.setTranslation(new float[]{-0.115,0.069,-0.045});
Shape& Shape326 =  Shape();
Shape326.setUSE(CString("skinsphere"));
Transform325.addChild(&Shape326);

HAnimSegment314.addChild(&Transform325);

Transform& Transform327 =  Transform();
Transform327.setTranslation(new float[]{-0.117,0.0975,0.0615});
Shape& Shape328 =  Shape();
Shape328.setUSE(CString("skinsphere"));
Transform327.addChild(&Shape328);

HAnimSegment314.addChild(&Transform327);

HAnimSite& HAnimSite329 =  HAnimSite();
HAnimSite329.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite329.setDEF(CString("Joe_r_sphyrion_pt"));
HAnimSite329.setTranslation(new float[]{-0.09,0.056,0.0125});
Shape& Shape330 =  Shape();
Shape330.setUSE(CString("sitebox"));
HAnimSite329.addChild(&Shape330);

HAnimSegment314.addChild(&HAnimSite329);

HAnimSite& HAnimSite331 =  HAnimSite();
HAnimSite331.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite331.setDEF(CString("Joe_r_calcaneus_posterior_pt"));
HAnimSite331.setTranslation(new float[]{-0.115,0.04,-0.055});
Shape& Shape332 =  Shape();
Shape332.setUSE(CString("sitebox"));
HAnimSite331.addChild(&Shape332);

HAnimSegment314.addChild(&HAnimSite331);

HAnimJoint313.addChildren(&HAnimSegment314);

HAnimJoint& HAnimJoint333 =  HAnimJoint();
HAnimJoint333.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint333.setDEF(CString("Joe_r_tarsometatarsal_2"));
HAnimJoint333.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint333.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint333.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimSegment& HAnimSegment334 =  HAnimSegment();
HAnimSegment334.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment334.setDEF(CString("Joe_r_metatarsal_2"));
Transform& Transform335 =  Transform();
Transform335.setTranslation(new float[]{-0.1,0.015,-0.01});
Shape& Shape336 =  Shape();
Shape336.setUSE(CString("jointbox"));
Transform335.addChild(&Shape336);

HAnimSegment334.addChild(&Transform335);

Shape& Shape337 =  Shape();
Appearance& Appearance338 =  Appearance();
Appearance338.setUSE(CString("SegmentLine"));
Shape337.addChild(&Appearance338);

IndexedLineSet& IndexedLineSet339 =  IndexedLineSet();
IndexedLineSet339.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate340 =  Coordinate();
Coordinate340.setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
IndexedLineSet339.setCoord(&Coordinate340);

Shape337.setGeometry(&IndexedLineSet339);

HAnimSegment334.addChild(&Shape337);

Transform& Transform341 =  Transform();
Transform341.setTranslation(new float[]{-0.1375,0.006,-0.03});
Shape& Shape342 =  Shape();
Shape342.setUSE(CString("skinsphere"));
Transform341.addChild(&Shape342);

HAnimSegment334.addChild(&Transform341);

Transform& Transform343 =  Transform();
Transform343.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape344 =  Shape();
Shape344.setUSE(CString("skinsphere"));
Transform343.addChild(&Shape344);

HAnimSegment334.addChild(&Transform343);

Transform& Transform345 =  Transform();
Transform345.setTranslation(new float[]{-0.095,0.006,-0.03});
Shape& Shape346 =  Shape();
Shape346.setUSE(CString("skinsphere"));
Transform345.addChild(&Shape346);

HAnimSegment334.addChild(&Transform345);

HAnimJoint333.addChildren(&HAnimSegment334);

HAnimJoint& HAnimJoint347 =  HAnimJoint();
HAnimJoint347.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint347.setDEF(CString("Joe_r_metatarsophalangeal_2"));
HAnimJoint347.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint347.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint347.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment348 =  HAnimSegment();
HAnimSegment348.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment348.setDEF(CString("Joe_r_tarsal_proximal_phalanx_2"));
Transform& Transform349 =  Transform();
Transform349.setTranslation(new float[]{-0.1,0.02,0.07});
Shape& Shape350 =  Shape();
Shape350.setUSE(CString("jointbox"));
Transform349.addChild(&Shape350);

HAnimSegment348.addChild(&Transform349);

Shape& Shape351 =  Shape();
Appearance& Appearance352 =  Appearance();
Appearance352.setUSE(CString("SegmentLine"));
Shape351.addChild(&Appearance352);

IndexedLineSet& IndexedLineSet353 =  IndexedLineSet();
IndexedLineSet353.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate354 =  Coordinate();
Coordinate354.setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
IndexedLineSet353.setCoord(&Coordinate354);

Shape351.setGeometry(&IndexedLineSet353);

HAnimSegment348.addChild(&Shape351);

Transform& Transform355 =  Transform();
Transform355.setTranslation(new float[]{-0.115,0.06,0.1});
Shape& Shape356 =  Shape();
Shape356.setUSE(CString("skinsphere"));
Transform355.addChild(&Shape356);

HAnimSegment348.addChild(&Transform355);

Transform& Transform357 =  Transform();
Transform357.setTranslation(new float[]{-0.115,0.0,0.07});
Shape& Shape358 =  Shape();
Shape358.setUSE(CString("skinsphere"));
Transform357.addChild(&Shape358);

HAnimSegment348.addChild(&Transform357);

Transform& Transform359 =  Transform();
Transform359.setTranslation(new float[]{-0.165,0.0,0.07});
Shape& Shape360 =  Shape();
Shape360.setUSE(CString("skinsphere"));
Transform359.addChild(&Shape360);

HAnimSegment348.addChild(&Transform359);

Transform& Transform361 =  Transform();
Transform361.setTranslation(new float[]{-0.165,0.0,0.07});
Shape& Shape362 =  Shape();
Shape362.setUSE(CString("skinsphere"));
Transform361.addChild(&Shape362);

HAnimSegment348.addChild(&Transform361);

HAnimSite& HAnimSite363 =  HAnimSite();
HAnimSite363.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite363.setDEF(CString("Joe_r_metatarsal_phalanx_1_pt"));
HAnimSite363.setTranslation(new float[]{-0.115,0.02,0.122});
Shape& Shape364 =  Shape();
Shape364.setUSE(CString("sitebox"));
HAnimSite363.addChild(&Shape364);

HAnimSegment348.addChild(&HAnimSite363);

HAnimJoint347.addChildren(&HAnimSegment348);

HAnimJoint& HAnimJoint365 =  HAnimJoint();
HAnimJoint365.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint365.setDEF(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimJoint365.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint365.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint365.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment366 =  HAnimSegment();
HAnimSegment366.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSegment366.setDEF(CString("Joe_r_tarsal_distal_phalanx_2"));
Transform& Transform367 =  Transform();
Transform367.setTranslation(new float[]{-0.1086,0.01,0.14});
Shape& Shape368 =  Shape();
Shape368.setUSE(CString("jointbox"));
Transform367.addChild(&Shape368);

HAnimSegment366.addChild(&Transform367);

Shape& Shape369 =  Shape();
Appearance& Appearance370 =  Appearance();
Appearance370.setUSE(CString("SegmentLine"));
Shape369.addChild(&Appearance370);

IndexedLineSet& IndexedLineSet371 =  IndexedLineSet();
IndexedLineSet371.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate372 =  Coordinate();
Coordinate372.setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
IndexedLineSet371.setCoord(&Coordinate372);

Shape369.setGeometry(&IndexedLineSet371);

HAnimSegment366.addChild(&Shape369);

Transform& Transform373 =  Transform();
Transform373.setTranslation(new float[]{-0.115,0.04,0.13});
Shape& Shape374 =  Shape();
Shape374.setUSE(CString("skinsphere"));
Transform373.addChild(&Shape374);

HAnimSegment366.addChild(&Transform373);

Transform& Transform375 =  Transform();
Transform375.setTranslation(new float[]{-0.125,0.0,0.12});
Shape& Shape376 =  Shape();
Shape376.setUSE(CString("skinsphere"));
Transform375.addChild(&Shape376);

HAnimSegment366.addChild(&Transform375);

Transform& Transform377 =  Transform();
Transform377.setTranslation(new float[]{-0.165,0.0,0.12});
Shape& Shape378 =  Shape();
Shape378.setUSE(CString("skinsphere"));
Transform377.addChild(&Shape378);

HAnimSegment366.addChild(&Transform377);

Transform& Transform379 =  Transform();
Transform379.setTranslation(new float[]{-0.087,0.0,0.122});
Shape& Shape380 =  Shape();
Shape380.setUSE(CString("skinsphere"));
Transform379.addChild(&Shape380);

HAnimSegment366.addChild(&Transform379);

Transform& Transform381 =  Transform();
Transform381.setTranslation(new float[]{-0.09,0.012,0.188});
Shape& Shape382 =  Shape();
Shape382.setUSE(CString("skinsphere"));
Transform381.addChild(&Shape382);

HAnimSegment366.addChild(&Transform381);

Transform& Transform383 =  Transform();
Transform383.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape384 =  Shape();
Shape384.setUSE(CString("skinsphere"));
Transform383.addChild(&Shape384);

HAnimSegment366.addChild(&Transform383);

Transform& Transform385 =  Transform();
Transform385.setTranslation(new float[]{-0.128,0.011,0.185});
Shape& Shape386 =  Shape();
Shape386.setUSE(CString("skinsphere"));
Transform385.addChild(&Shape386);

HAnimSegment366.addChild(&Transform385);

Transform& Transform387 =  Transform();
Transform387.setTranslation(new float[]{-0.142,0.011,0.178});
Shape& Shape388 =  Shape();
Shape388.setUSE(CString("skinsphere"));
Transform387.addChild(&Shape388);

HAnimSegment366.addChild(&Transform387);

Transform& Transform389 =  Transform();
Transform389.setTranslation(new float[]{-0.154,0.01,0.168});
Shape& Shape390 =  Shape();
Shape390.setUSE(CString("skinsphere"));
Transform389.addChild(&Shape390);

HAnimSegment366.addChild(&Transform389);

HAnimSite& HAnimSite391 =  HAnimSite();
HAnimSite391.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite391.setDEF(CString("Joe_r_metatarsal_phalanx_5_pt"));
HAnimSite391.setTranslation(new float[]{-0.165,0.01,0.12});
Shape& Shape392 =  Shape();
Shape392.setUSE(CString("sitebox"));
HAnimSite391.addChild(&Shape392);

HAnimSegment366.addChild(&HAnimSite391);

HAnimSite& HAnimSite393 =  HAnimSite();
HAnimSite393.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_pt"));
HAnimSite393.setDEF(CString("Joe_r_tarsal_distal_phalanx_2_pt"));
HAnimSite393.setTranslation(new float[]{-0.11,0.011,0.19});
Shape& Shape394 =  Shape();
Shape394.setUSE(CString("sitebox"));
HAnimSite393.addChild(&Shape394);

HAnimSegment366.addChild(&HAnimSite393);

HAnimJoint365.addChildren(&HAnimSegment366);

HAnimJoint347.addChildren(&HAnimJoint365);

HAnimJoint333.addChildren(&HAnimJoint347);

HAnimJoint313.addChildren(&HAnimJoint333);

HAnimJoint285.addChildren(&HAnimJoint313);

HAnimJoint259.addChildren(&HAnimJoint285);

HAnimJoint93.addChildren(&HAnimJoint259);

HAnimJoint81.addChildren(&HAnimJoint93);

HAnimJoint& HAnimJoint395 =  HAnimJoint();
HAnimJoint395.X3DNode::setName(CString("vl5"));
HAnimJoint395.setDEF(CString("Joe_vl5"));
HAnimJoint395.setCenter(new float[]{0.0,1.045,-0.095});
HAnimJoint395.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint395.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment396 =  HAnimSegment();
HAnimSegment396.X3DNode::setName(CString("toPelvis"));
HAnimSegment396.setDEF(CString("Joe_toPelvis"));
Shape& Shape397 =  Shape();
Appearance& Appearance398 =  Appearance();
Appearance398.setUSE(CString("SegmentLine"));
Shape397.addChild(&Appearance398);

IndexedLineSet& IndexedLineSet399 =  IndexedLineSet();
IndexedLineSet399.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate400 =  Coordinate();
Coordinate400.setPoint(new float[]{0.0,1.045,-0.095,0.0,0.9149,0.0016}, 6);
IndexedLineSet399.setCoord(&Coordinate400);

Shape397.setGeometry(&IndexedLineSet399);

HAnimSegment396.addChild(&Shape397);

HAnimJoint395.addChildren(&HAnimSegment396);

HAnimSegment& HAnimSegment401 =  HAnimSegment();
HAnimSegment401.X3DNode::setName(CString("l5"));
HAnimSegment401.setDEF(CString("Joe_l5"));
Shape& Shape402 =  Shape();
Appearance& Appearance403 =  Appearance();
Appearance403.setUSE(CString("SegmentLine"));
Shape402.addChild(&Appearance403);

IndexedLineSet& IndexedLineSet404 =  IndexedLineSet();
IndexedLineSet404.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate405 =  Coordinate();
Coordinate405.setPoint(new float[]{0.0,1.045,-0.095,0.0,1.068,-0.085}, 6);
IndexedLineSet404.setCoord(&Coordinate405);

Shape402.setGeometry(&IndexedLineSet404);

HAnimSegment401.addChild(&Shape402);

HAnimSite& HAnimSite406 =  HAnimSite();
HAnimSite406.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite406.setDEF(CString("Joe_waist_preferred_posterior_pt"));
HAnimSite406.setTranslation(new float[]{0.0,1.0915,-0.1091});
Shape& Shape407 =  Shape();
Shape407.setUSE(CString("sitebox"));
HAnimSite406.addChild(&Shape407);

HAnimSegment401.addChild(&HAnimSite406);

HAnimSite& HAnimSite408 =  HAnimSite();
HAnimSite408.X3DNode::setName(CString("navel_pt"));
HAnimSite408.setDEF(CString("Joe_navel_pt"));
HAnimSite408.setTranslation(new float[]{0.0,1.0723,0.09});
Shape& Shape409 =  Shape();
Shape409.setUSE(CString("sitebox"));
HAnimSite408.addChild(&Shape409);

HAnimSegment401.addChild(&HAnimSite408);

HAnimJoint395.addChildren(&HAnimSegment401);

HAnimJoint& HAnimJoint410 =  HAnimJoint();
HAnimJoint410.X3DNode::setName(CString("vl4"));
HAnimJoint410.setDEF(CString("Joe_vl4"));
HAnimJoint410.setCenter(new float[]{0.0,1.068,-0.085});
HAnimSegment& HAnimSegment411 =  HAnimSegment();
HAnimSegment411.X3DNode::setName(CString("l4"));
HAnimSegment411.setDEF(CString("Joe_l4"));
Shape& Shape412 =  Shape();
Appearance& Appearance413 =  Appearance();
Appearance413.setUSE(CString("SegmentLine"));
Shape412.addChild(&Appearance413);

IndexedLineSet& IndexedLineSet414 =  IndexedLineSet();
IndexedLineSet414.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate415 =  Coordinate();
Coordinate415.setPoint(new float[]{0.0,1.068,-0.085,0.0,1.092,-0.0725}, 6);
IndexedLineSet414.setCoord(&Coordinate415);

Shape412.setGeometry(&IndexedLineSet414);

HAnimSegment411.addChild(&Shape412);

Transform& Transform416 =  Transform();
Transform416.setTranslation(new float[]{0.0,1.068,-0.085});
Shape& Shape417 =  Shape();
Shape417.setUSE(CString("jointbox"));
Transform416.addChild(&Shape417);

HAnimSegment411.addChild(&Transform416);

HAnimJoint410.addChildren(&HAnimSegment411);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.X3DNode::setName(CString("vl3"));
HAnimJoint418.setDEF(CString("Joe_vl3"));
HAnimJoint418.setCenter(new float[]{0.0,1.092,-0.0725});
HAnimSegment& HAnimSegment419 =  HAnimSegment();
HAnimSegment419.X3DNode::setName(CString("l3"));
HAnimSegment419.setDEF(CString("Joe_l3"));
Shape& Shape420 =  Shape();
Appearance& Appearance421 =  Appearance();
Appearance421.setUSE(CString("SegmentLine"));
Shape420.addChild(&Appearance421);

IndexedLineSet& IndexedLineSet422 =  IndexedLineSet();
IndexedLineSet422.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate423 =  Coordinate();
Coordinate423.setPoint(new float[]{0.0,1.092,-0.0725,0.0,1.12,-0.065}, 6);
IndexedLineSet422.setCoord(&Coordinate423);

Shape420.setGeometry(&IndexedLineSet422);

HAnimSegment419.addChild(&Shape420);

Transform& Transform424 =  Transform();
Transform424.setTranslation(new float[]{0.0,1.092,-0.0725});
Shape& Shape425 =  Shape();
Shape425.setUSE(CString("jointbox"));
Transform424.addChild(&Shape425);

HAnimSegment419.addChild(&Transform424);

HAnimJoint418.addChildren(&HAnimSegment419);

HAnimJoint& HAnimJoint426 =  HAnimJoint();
HAnimJoint426.X3DNode::setName(CString("vl2"));
HAnimJoint426.setDEF(CString("Joe_vl2"));
HAnimJoint426.setCenter(new float[]{0.0,1.12,-0.065});
HAnimJoint426.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint426.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
HAnimSegment& HAnimSegment427 =  HAnimSegment();
HAnimSegment427.X3DNode::setName(CString("l2"));
HAnimSegment427.setDEF(CString("Joe_l2"));
Shape& Shape428 =  Shape();
Appearance& Appearance429 =  Appearance();
Appearance429.setUSE(CString("SegmentLine"));
Shape428.addChild(&Appearance429);

IndexedLineSet& IndexedLineSet430 =  IndexedLineSet();
IndexedLineSet430.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate431 =  Coordinate();
Coordinate431.setPoint(new float[]{0.0,1.12,-0.065,0.0,1.1459,-0.0625}, 6);
IndexedLineSet430.setCoord(&Coordinate431);

Shape428.setGeometry(&IndexedLineSet430);

HAnimSegment427.addChild(&Shape428);

Transform& Transform432 =  Transform();
Transform432.setTranslation(new float[]{0.0,1.12,-0.065});
Shape& Shape433 =  Shape();
Shape433.setUSE(CString("jointbox"));
Transform432.addChild(&Shape433);

HAnimSegment427.addChild(&Transform432);

Transform& Transform434 =  Transform();
Transform434.setTranslation(new float[]{-0.087,1.19,-0.09});
Shape& Shape435 =  Shape();
Shape435.setUSE(CString("skinsphere"));
Transform434.addChild(&Shape435);

HAnimSegment427.addChild(&Transform434);

Transform& Transform436 =  Transform();
Transform436.setTranslation(new float[]{0.087,1.19,-0.09});
Shape& Shape437 =  Shape();
Shape437.setUSE(CString("skinsphere"));
Transform436.addChild(&Shape437);

HAnimSegment427.addChild(&Transform436);

Transform& Transform438 =  Transform();
Transform438.setTranslation(new float[]{0.172,1.32,-0.03});
Shape& Shape439 =  Shape();
Shape439.setUSE(CString("skinsphere"));
Transform438.addChild(&Shape439);

HAnimSegment427.addChild(&Transform438);

Transform& Transform440 =  Transform();
Transform440.setTranslation(new float[]{-0.172,1.32,-0.03});
Shape& Shape441 =  Shape();
Shape441.setUSE(CString("skinsphere"));
Transform440.addChild(&Shape441);

HAnimSegment427.addChild(&Transform440);

Transform& Transform442 =  Transform();
Transform442.setTranslation(new float[]{0.15,1.23,-0.015});
Shape& Shape443 =  Shape();
Shape443.setUSE(CString("skinsphere"));
Transform442.addChild(&Shape443);

HAnimSegment427.addChild(&Transform442);

Transform& Transform444 =  Transform();
Transform444.setTranslation(new float[]{-0.15,1.23,-0.015});
Shape& Shape445 =  Shape();
Shape445.setUSE(CString("skinsphere"));
Transform444.addChild(&Shape445);

HAnimSegment427.addChild(&Transform444);

HAnimSite& HAnimSite446 =  HAnimSite();
HAnimSite446.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite446.setDEF(CString("Joe_r_rib10_pt"));
HAnimSite446.setTranslation(new float[]{-0.087,1.19,0.09});
Shape& Shape447 =  Shape();
Shape447.setUSE(CString("sitebox"));
HAnimSite446.addChild(&Shape447);

HAnimSegment427.addChild(&HAnimSite446);

HAnimSite& HAnimSite448 =  HAnimSite();
HAnimSite448.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite448.setDEF(CString("Joe_l_rib10_pt"));
HAnimSite448.setTranslation(new float[]{0.087,1.19,0.09});
Shape& Shape449 =  Shape();
Shape449.setUSE(CString("sitebox"));
HAnimSite448.addChild(&Shape449);

HAnimSegment427.addChild(&HAnimSite448);

HAnimSite& HAnimSite450 =  HAnimSite();
HAnimSite450.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite450.setDEF(CString("Joe_rib10_midspine_pt"));
HAnimSite450.setTranslation(new float[]{0.0,1.1908,-0.1113});
Shape& Shape451 =  Shape();
Shape451.setUSE(CString("sitebox"));
HAnimSite450.addChild(&Shape451);

HAnimSegment427.addChild(&HAnimSite450);

HAnimJoint426.addChildren(&HAnimSegment427);

HAnimJoint& HAnimJoint452 =  HAnimJoint();
HAnimJoint452.X3DNode::setName(CString("vl1"));
HAnimJoint452.setDEF(CString("Joe_vl1"));
HAnimJoint452.setCenter(new float[]{0.0,1.1459,-0.0625});
HAnimSegment& HAnimSegment453 =  HAnimSegment();
HAnimSegment453.X3DNode::setName(CString("l1"));
HAnimSegment453.setDEF(CString("Joe_l1"));
Shape& Shape454 =  Shape();
Appearance& Appearance455 =  Appearance();
Appearance455.setUSE(CString("SegmentLine"));
Shape454.addChild(&Appearance455);

IndexedLineSet& IndexedLineSet456 =  IndexedLineSet();
IndexedLineSet456.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate457 =  Coordinate();
Coordinate457.setPoint(new float[]{0.0,1.1459,-0.0625,0.0,1.179,-0.068}, 6);
IndexedLineSet456.setCoord(&Coordinate457);

Shape454.setGeometry(&IndexedLineSet456);

HAnimSegment453.addChild(&Shape454);

Transform& Transform458 =  Transform();
Transform458.setTranslation(new float[]{0.0,1.1459,-0.0625});
Shape& Shape459 =  Shape();
Shape459.setUSE(CString("jointbox"));
Transform458.addChild(&Shape459);

HAnimSegment453.addChild(&Transform458);

HAnimJoint452.addChildren(&HAnimSegment453);

HAnimJoint& HAnimJoint460 =  HAnimJoint();
HAnimJoint460.X3DNode::setName(CString("vt12"));
HAnimJoint460.setDEF(CString("Joe_vt12"));
HAnimJoint460.setCenter(new float[]{0.0,1.179,-0.068});
HAnimSegment& HAnimSegment461 =  HAnimSegment();
HAnimSegment461.X3DNode::setName(CString("t12"));
HAnimSegment461.setDEF(CString("Joe_t12"));
Shape& Shape462 =  Shape();
Appearance& Appearance463 =  Appearance();
Appearance463.setUSE(CString("SegmentLine"));
Shape462.addChild(&Appearance463);

IndexedLineSet& IndexedLineSet464 =  IndexedLineSet();
IndexedLineSet464.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate465 =  Coordinate();
Coordinate465.setPoint(new float[]{0.0,1.179,-0.068,0.0,1.242,-0.09}, 6);
IndexedLineSet464.setCoord(&Coordinate465);

Shape462.setGeometry(&IndexedLineSet464);

HAnimSegment461.addChild(&Shape462);

Transform& Transform466 =  Transform();
Transform466.setTranslation(new float[]{0.0,1.179,-0.068});
Shape& Shape467 =  Shape();
Shape467.setUSE(CString("jointbox"));
Transform466.addChild(&Shape467);

HAnimSegment461.addChild(&Transform466);

HAnimJoint460.addChildren(&HAnimSegment461);

HAnimJoint& HAnimJoint468 =  HAnimJoint();
HAnimJoint468.X3DNode::setName(CString("vt11"));
HAnimJoint468.setDEF(CString("Joe_vt11"));
HAnimJoint468.setCenter(new float[]{0.0,1.2679,-0.081});
HAnimSegment& HAnimSegment469 =  HAnimSegment();
HAnimSegment469.X3DNode::setName(CString("t11"));
HAnimSegment469.setDEF(CString("Joe_t11"));
Shape& Shape470 =  Shape();
Appearance& Appearance471 =  Appearance();
Appearance471.setUSE(CString("SegmentLine"));
Shape470.addChild(&Appearance471);

IndexedLineSet& IndexedLineSet472 =  IndexedLineSet();
IndexedLineSet472.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate473 =  Coordinate();
Coordinate473.setPoint(new float[]{0.0,1.2145,-0.0755,0.0,1.242,-0.09}, 6);
IndexedLineSet472.setCoord(&Coordinate473);

Shape470.setGeometry(&IndexedLineSet472);

HAnimSegment469.addChild(&Shape470);

Transform& Transform474 =  Transform();
Transform474.setTranslation(new float[]{0.0,1.2145,-0.0755});
Shape& Shape475 =  Shape();
Shape475.setUSE(CString("jointbox"));
Transform474.addChild(&Shape475);

HAnimSegment469.addChild(&Transform474);

HAnimJoint468.addChildren(&HAnimSegment469);

HAnimJoint& HAnimJoint476 =  HAnimJoint();
HAnimJoint476.X3DNode::setName(CString("vt10"));
HAnimJoint476.setDEF(CString("Joe_vt10"));
HAnimJoint476.setCenter(new float[]{0.0,1.242,-0.09});
HAnimJoint476.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint476.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimSegment& HAnimSegment477 =  HAnimSegment();
HAnimSegment477.X3DNode::setName(CString("t10"));
HAnimSegment477.setDEF(CString("Joe_t10"));
Shape& Shape478 =  Shape();
Appearance& Appearance479 =  Appearance();
Appearance479.setUSE(CString("SegmentLine"));
Shape478.addChild(&Appearance479);

IndexedLineSet& IndexedLineSet480 =  IndexedLineSet();
IndexedLineSet480.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate481 =  Coordinate();
Coordinate481.setPoint(new float[]{0.0,1.242,-0.09,0.0,1.268,-0.1}, 6);
IndexedLineSet480.setCoord(&Coordinate481);

Shape478.setGeometry(&IndexedLineSet480);

HAnimSegment477.addChild(&Shape478);

Transform& Transform482 =  Transform();
Transform482.setTranslation(new float[]{0.0,1.242,-0.09});
Shape& Shape483 =  Shape();
Shape483.setUSE(CString("jointbox"));
Transform482.addChild(&Shape483);

HAnimSegment477.addChild(&Transform482);

HAnimSite& HAnimSite484 =  HAnimSite();
HAnimSite484.X3DNode::setName(CString("substernale_pt"));
HAnimSite484.setDEF(CString("Joe_substernale_pt"));
HAnimSite484.setTranslation(new float[]{0.0,1.25,0.113});
Shape& Shape485 =  Shape();
Shape485.setUSE(CString("sitebox"));
HAnimSite484.addChild(&Shape485);

HAnimSegment477.addChild(&HAnimSite484);

HAnimJoint476.addChildren(&HAnimSegment477);

HAnimJoint& HAnimJoint486 =  HAnimJoint();
HAnimJoint486.X3DNode::setName(CString("vt9"));
HAnimJoint486.setDEF(CString("Joe_vt9"));
HAnimJoint486.setCenter(new float[]{0.0,1.268,-0.1});
HAnimJoint486.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint486.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment487 =  HAnimSegment();
HAnimSegment487.X3DNode::setName(CString("t9"));
HAnimSegment487.setDEF(CString("Joe_t9"));
Shape& Shape488 =  Shape();
Appearance& Appearance489 =  Appearance();
Appearance489.setUSE(CString("SegmentLine"));
Shape488.addChild(&Appearance489);

IndexedLineSet& IndexedLineSet490 =  IndexedLineSet();
IndexedLineSet490.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate491 =  Coordinate();
Coordinate491.setPoint(new float[]{0.0,1.268,-0.1,0.0,1.294,-0.11}, 6);
IndexedLineSet490.setCoord(&Coordinate491);

Shape488.setGeometry(&IndexedLineSet490);

HAnimSegment487.addChild(&Shape488);

Transform& Transform492 =  Transform();
Transform492.setTranslation(new float[]{0.0,1.268,-0.1});
Shape& Shape493 =  Shape();
Shape493.setUSE(CString("jointbox"));
Transform492.addChild(&Shape493);

HAnimSegment487.addChild(&Transform492);

HAnimSite& HAnimSite494 =  HAnimSite();
HAnimSite494.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite494.setDEF(CString("Joe_r_thelion_pt"));
HAnimSite494.setTranslation(new float[]{-0.1135,1.318,0.095});
Shape& Shape495 =  Shape();
Shape495.setUSE(CString("sitebox"));
HAnimSite494.addChild(&Shape495);

HAnimSegment487.addChild(&HAnimSite494);

HAnimSite& HAnimSite496 =  HAnimSite();
HAnimSite496.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite496.setDEF(CString("Joe_l_thelion_pt"));
HAnimSite496.setTranslation(new float[]{0.1135,1.318,0.095});
Shape& Shape497 =  Shape();
Shape497.setUSE(CString("sitebox"));
HAnimSite496.addChild(&Shape497);

HAnimSegment487.addChild(&HAnimSite496);

HAnimJoint486.addChildren(&HAnimSegment487);

HAnimJoint& HAnimJoint498 =  HAnimJoint();
HAnimJoint498.X3DNode::setName(CString("vt8"));
HAnimJoint498.setDEF(CString("Joe_vt8"));
HAnimJoint498.setCenter(new float[]{0.0,1.294,-0.11});
HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.X3DNode::setName(CString("t8"));
HAnimSegment499.setDEF(CString("Joe_t8"));
Shape& Shape500 =  Shape();
Appearance& Appearance501 =  Appearance();
Appearance501.setUSE(CString("SegmentLine"));
Shape500.addChild(&Appearance501);

IndexedLineSet& IndexedLineSet502 =  IndexedLineSet();
IndexedLineSet502.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate503 =  Coordinate();
Coordinate503.setPoint(new float[]{0.0,1.294,-0.11,0.0,1.352,-0.12}, 6);
IndexedLineSet502.setCoord(&Coordinate503);

Shape500.setGeometry(&IndexedLineSet502);

HAnimSegment499.addChild(&Shape500);

Transform& Transform504 =  Transform();
Transform504.setTranslation(new float[]{0.0,1.294,-0.11});
Shape& Shape505 =  Shape();
Shape505.setUSE(CString("jointbox"));
Transform504.addChild(&Shape505);

HAnimSegment499.addChild(&Transform504);

HAnimJoint498.addChildren(&HAnimSegment499);

HAnimJoint& HAnimJoint506 =  HAnimJoint();
HAnimJoint506.X3DNode::setName(CString("vt7"));
HAnimJoint506.setDEF(CString("Joe_vt7"));
HAnimJoint506.setCenter(new float[]{0.0,1.323,-0.1155});
HAnimSegment& HAnimSegment507 =  HAnimSegment();
HAnimSegment507.X3DNode::setName(CString("t7"));
HAnimSegment507.setDEF(CString("Joe_t7"));
Shape& Shape508 =  Shape();
Appearance& Appearance509 =  Appearance();
Appearance509.setUSE(CString("SegmentLine"));
Shape508.addChild(&Appearance509);

IndexedLineSet& IndexedLineSet510 =  IndexedLineSet();
IndexedLineSet510.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate511 =  Coordinate();
Coordinate511.setPoint(new float[]{0.0,1.352,-0.12,0.0,1.381,-0.1235}, 6);
IndexedLineSet510.setCoord(&Coordinate511);

Shape508.setGeometry(&IndexedLineSet510);

HAnimSegment507.addChild(&Shape508);

Transform& Transform512 =  Transform();
Transform512.setTranslation(new float[]{0.0,1.323,-0.1155});
Shape& Shape513 =  Shape();
Shape513.setUSE(CString("jointbox"));
Transform512.addChild(&Shape513);

HAnimSegment507.addChild(&Transform512);

HAnimJoint506.addChildren(&HAnimSegment507);

HAnimJoint& HAnimJoint514 =  HAnimJoint();
HAnimJoint514.X3DNode::setName(CString("vt6"));
HAnimJoint514.setDEF(CString("Joe_vt6"));
HAnimJoint514.setCenter(new float[]{0.0,1.352,-0.12});
HAnimSegment& HAnimSegment515 =  HAnimSegment();
HAnimSegment515.X3DNode::setName(CString("t6"));
HAnimSegment515.setDEF(CString("Joe_t6"));
Shape& Shape516 =  Shape();
Appearance& Appearance517 =  Appearance();
Appearance517.setUSE(CString("SegmentLine"));
Shape516.addChild(&Appearance517);

IndexedLineSet& IndexedLineSet518 =  IndexedLineSet();
IndexedLineSet518.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate519 =  Coordinate();
Coordinate519.setPoint(new float[]{0.0,1.381,-0.1235,0.0,1.41,-0.1235}, 6);
IndexedLineSet518.setCoord(&Coordinate519);

Shape516.setGeometry(&IndexedLineSet518);

HAnimSegment515.addChild(&Shape516);

Transform& Transform520 =  Transform();
Transform520.setTranslation(new float[]{0.0,1.352,-0.12});
Shape& Shape521 =  Shape();
Shape521.setUSE(CString("jointbox"));
Transform520.addChild(&Shape521);

HAnimSegment515.addChild(&Transform520);

HAnimJoint514.addChildren(&HAnimSegment515);

HAnimJoint& HAnimJoint522 =  HAnimJoint();
HAnimJoint522.X3DNode::setName(CString("vt5"));
HAnimJoint522.setDEF(CString("Joe_vt5"));
HAnimJoint522.setCenter(new float[]{0.0,1.381,-0.1235});
HAnimSegment& HAnimSegment523 =  HAnimSegment();
HAnimSegment523.X3DNode::setName(CString("t5"));
HAnimSegment523.setDEF(CString("Joe_t5"));
Shape& Shape524 =  Shape();
Appearance& Appearance525 =  Appearance();
Appearance525.setUSE(CString("SegmentLine"));
Shape524.addChild(&Appearance525);

IndexedLineSet& IndexedLineSet526 =  IndexedLineSet();
IndexedLineSet526.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate527 =  Coordinate();
Coordinate527.setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
IndexedLineSet526.setCoord(&Coordinate527);

Shape524.setGeometry(&IndexedLineSet526);

HAnimSegment523.addChild(&Shape524);

Transform& Transform528 =  Transform();
Transform528.setTranslation(new float[]{0.0,1.381,-0.1235});
Shape& Shape529 =  Shape();
Shape529.setUSE(CString("jointbox"));
Transform528.addChild(&Shape529);

HAnimSegment523.addChild(&Transform528);

HAnimJoint522.addChildren(&HAnimSegment523);

HAnimJoint& HAnimJoint530 =  HAnimJoint();
HAnimJoint530.X3DNode::setName(CString("vt4"));
HAnimJoint530.setDEF(CString("Joe_vt4"));
HAnimJoint530.setCenter(new float[]{0.0,1.41,-0.1235});
HAnimJoint530.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint530.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimSegment& HAnimSegment531 =  HAnimSegment();
HAnimSegment531.X3DNode::setName(CString("t4"));
HAnimSegment531.setDEF(CString("Joe_t4"));
Shape& Shape532 =  Shape();
Appearance& Appearance533 =  Appearance();
Appearance533.setUSE(CString("SegmentLine"));
Shape532.addChild(&Appearance533);

IndexedLineSet& IndexedLineSet534 =  IndexedLineSet();
IndexedLineSet534.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate535 =  Coordinate();
Coordinate535.setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
IndexedLineSet534.setCoord(&Coordinate535);

Shape532.setGeometry(&IndexedLineSet534);

HAnimSegment531.addChild(&Shape532);

Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[]{0.0,1.41,-0.1235});
Shape& Shape537 =  Shape();
Shape537.setUSE(CString("jointbox"));
Transform536.addChild(&Shape537);

HAnimSegment531.addChild(&Transform536);

Transform& Transform538 =  Transform();
Transform538.setTranslation(new float[]{0.0,1.41,-0.145});
Shape& Shape539 =  Shape();
Shape539.setUSE(CString("skinsphere"));
Transform538.addChild(&Shape539);

HAnimSegment531.addChild(&Transform538);

HAnimJoint530.addChildren(&HAnimSegment531);

HAnimJoint& HAnimJoint540 =  HAnimJoint();
HAnimJoint540.X3DNode::setName(CString("vt3"));
HAnimJoint540.setDEF(CString("Joe_vt3"));
HAnimJoint540.setCenter(new float[]{0.0,1.438,-0.12});
HAnimSegment& HAnimSegment541 =  HAnimSegment();
HAnimSegment541.X3DNode::setName(CString("t3"));
HAnimSegment541.setDEF(CString("Joe_t3"));
Shape& Shape542 =  Shape();
Appearance& Appearance543 =  Appearance();
Appearance543.setUSE(CString("SegmentLine"));
Shape542.addChild(&Appearance543);

IndexedLineSet& IndexedLineSet544 =  IndexedLineSet();
IndexedLineSet544.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate545 =  Coordinate();
Coordinate545.setPoint(new float[]{0.0,1.438,-0.12,0.0,1.468,-0.105}, 6);
IndexedLineSet544.setCoord(&Coordinate545);

Shape542.setGeometry(&IndexedLineSet544);

HAnimSegment541.addChild(&Shape542);

Transform& Transform546 =  Transform();
Transform546.setTranslation(new float[]{0.0,1.438,-0.12});
Shape& Shape547 =  Shape();
Shape547.setUSE(CString("jointbox"));
Transform546.addChild(&Shape547);

HAnimSegment541.addChild(&Transform546);

HAnimJoint540.addChildren(&HAnimSegment541);

HAnimJoint& HAnimJoint548 =  HAnimJoint();
HAnimJoint548.X3DNode::setName(CString("vt2"));
HAnimJoint548.setDEF(CString("Joe_vt2"));
HAnimJoint548.setCenter(new float[]{0.0,1.468,-0.105});
HAnimSegment& HAnimSegment549 =  HAnimSegment();
HAnimSegment549.X3DNode::setName(CString("t2"));
HAnimSegment549.setDEF(CString("Joe_t2"));
Shape& Shape550 =  Shape();
Appearance& Appearance551 =  Appearance();
Appearance551.setUSE(CString("SegmentLine"));
Shape550.addChild(&Appearance551);

IndexedLineSet& IndexedLineSet552 =  IndexedLineSet();
IndexedLineSet552.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate553 =  Coordinate();
Coordinate553.setPoint(new float[]{0.0,1.468,-0.105,0.0,1.497,-0.09}, 6);
IndexedLineSet552.setCoord(&Coordinate553);

Shape550.setGeometry(&IndexedLineSet552);

HAnimSegment549.addChild(&Shape550);

Transform& Transform554 =  Transform();
Transform554.setTranslation(new float[]{0.0,1.468,-0.105});
Shape& Shape555 =  Shape();
Shape555.setUSE(CString("jointbox"));
Transform554.addChild(&Shape555);

HAnimSegment549.addChild(&Transform554);

HAnimJoint548.addChildren(&HAnimSegment549);

HAnimJoint& HAnimJoint556 =  HAnimJoint();
HAnimJoint556.X3DNode::setName(CString("vt1"));
HAnimJoint556.setDEF(CString("Joe_vt1"));
HAnimJoint556.setCenter(new float[]{0.0,1.497,-0.09});
HAnimJoint556.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint556.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment557 =  HAnimSegment();
HAnimSegment557.X3DNode::setName(CString("t1"));
HAnimSegment557.setDEF(CString("Joe_t1"));
Shape& Shape558 =  Shape();
Appearance& Appearance559 =  Appearance();
Appearance559.setUSE(CString("SegmentLine"));
Shape558.addChild(&Appearance559);

IndexedLineSet& IndexedLineSet560 =  IndexedLineSet();
IndexedLineSet560.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate561 =  Coordinate();
Coordinate561.setPoint(new float[]{0.0,1.497,-0.09,0.0,1.525,-0.072}, 6);
IndexedLineSet560.setCoord(&Coordinate561);

Shape558.setGeometry(&IndexedLineSet560);

HAnimSegment557.addChild(&Shape558);

Transform& Transform562 =  Transform();
Transform562.setTranslation(new float[]{0.0,1.497,-0.09});
Shape& Shape563 =  Shape();
Shape563.setUSE(CString("jointbox"));
Transform562.addChild(&Shape563);

HAnimSegment557.addChild(&Transform562);

HAnimSite& HAnimSite564 =  HAnimSite();
HAnimSite564.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite564.setDEF(CString("Joe_suprasternale_pt"));
HAnimSite564.setTranslation(new float[]{0.0,1.44,0.03});
Shape& Shape565 =  Shape();
Shape565.setUSE(CString("sitebox"));
HAnimSite564.addChild(&Shape565);

HAnimSegment557.addChild(&HAnimSite564);

HAnimSite& HAnimSite566 =  HAnimSite();
HAnimSite566.X3DNode::setName(CString("cervicale_pt"));
HAnimSite566.setDEF(CString("Joe_cervicale_pt"));
HAnimSite566.setTranslation(new float[]{0.0,1.53,-0.084});
Shape& Shape567 =  Shape();
Shape567.setUSE(CString("sitebox"));
HAnimSite566.addChild(&Shape567);

HAnimSegment557.addChild(&HAnimSite566);

HAnimJoint556.addChildren(&HAnimSegment557);

HAnimJoint& HAnimJoint568 =  HAnimJoint();
HAnimJoint568.X3DNode::setName(CString("vc7"));
HAnimJoint568.setDEF(CString("Joe_vc7"));
HAnimJoint568.setCenter(new float[]{0.0,1.525,-0.072});
HAnimJoint568.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint568.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment569 =  HAnimSegment();
HAnimSegment569.X3DNode::setName(CString("c7"));
HAnimSegment569.setDEF(CString("Joe_c7"));
Shape& Shape570 =  Shape();
Appearance& Appearance571 =  Appearance();
Appearance571.setUSE(CString("SegmentLine"));
Shape570.addChild(&Appearance571);

IndexedLineSet& IndexedLineSet572 =  IndexedLineSet();
IndexedLineSet572.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate573 =  Coordinate();
Coordinate573.setPoint(new float[]{0.0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0.0,1.54,-0.05}, 12);
IndexedLineSet572.setCoord(&Coordinate573);

Shape570.setGeometry(&IndexedLineSet572);

HAnimSegment569.addChild(&Shape570);

Transform& Transform574 =  Transform();
Transform574.setTranslation(new float[]{0.0,1.525,-0.072});
Shape& Shape575 =  Shape();
Shape575.setUSE(CString("jointbox"));
Transform574.addChild(&Shape575);

HAnimSegment569.addChild(&Transform574);

HAnimSite& HAnimSite576 =  HAnimSite();
HAnimSite576.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite576.setDEF(CString("Joe_r_neck_base_pt"));
HAnimSite576.setTranslation(new float[]{-0.0646,1.5149,-0.0385});
Shape& Shape577 =  Shape();
Shape577.setUSE(CString("sitebox"));
HAnimSite576.addChild(&Shape577);

HAnimSegment569.addChild(&HAnimSite576);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite578.setDEF(CString("Joe_l_neck_base_pt"));
HAnimSite578.setTranslation(new float[]{0.0646,1.5149,-0.0385});
Shape& Shape579 =  Shape();
Shape579.setUSE(CString("sitebox"));
HAnimSite578.addChild(&Shape579);

HAnimSegment569.addChild(&HAnimSite578);

HAnimJoint568.addChildren(&HAnimSegment569);

HAnimJoint& HAnimJoint580 =  HAnimJoint();
HAnimJoint580.X3DNode::setName(CString("vc6"));
HAnimJoint580.setDEF(CString("Joe_vc6"));
HAnimJoint580.setCenter(new float[]{0.0,1.54,-0.05});
HAnimSegment& HAnimSegment581 =  HAnimSegment();
HAnimSegment581.X3DNode::setName(CString("c6"));
HAnimSegment581.setDEF(CString("Joe_c6"));
Shape& Shape582 =  Shape();
Appearance& Appearance583 =  Appearance();
Appearance583.setUSE(CString("SegmentLine"));
Shape582.addChild(&Appearance583);

IndexedLineSet& IndexedLineSet584 =  IndexedLineSet();
IndexedLineSet584.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate585 =  Coordinate();
Coordinate585.setPoint(new float[]{0.0,1.54,-0.05,0.0,1.5675,-0.0256}, 6);
IndexedLineSet584.setCoord(&Coordinate585);

Shape582.setGeometry(&IndexedLineSet584);

HAnimSegment581.addChild(&Shape582);

Transform& Transform586 =  Transform();
Transform586.setTranslation(new float[]{0.0,1.54,-0.05});
Shape& Shape587 =  Shape();
Shape587.setUSE(CString("jointbox"));
Transform586.addChild(&Shape587);

HAnimSegment581.addChild(&Transform586);

HAnimJoint580.addChildren(&HAnimSegment581);

HAnimJoint& HAnimJoint588 =  HAnimJoint();
HAnimJoint588.X3DNode::setName(CString("vc5"));
HAnimJoint588.setDEF(CString("Joe_vc5"));
HAnimJoint588.setCenter(new float[]{0.0,1.552,-0.035});
HAnimSegment& HAnimSegment589 =  HAnimSegment();
HAnimSegment589.X3DNode::setName(CString("c5"));
HAnimSegment589.setDEF(CString("Joe_c5"));
Transform& Transform590 =  Transform();
Transform590.setTranslation(new float[]{0.0,1.552,-0.035});
Shape& Shape591 =  Shape();
Shape591.setUSE(CString("jointbox"));
Transform590.addChild(&Shape591);

HAnimSegment589.addChild(&Transform590);

Shape& Shape592 =  Shape();
Appearance& Appearance593 =  Appearance();
Appearance593.setUSE(CString("SegmentLine"));
Shape592.addChild(&Appearance593);

IndexedLineSet& IndexedLineSet594 =  IndexedLineSet();
IndexedLineSet594.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate595 =  Coordinate();
Coordinate595.setPoint(new float[]{0.0,1.5675,-0.0256,0.0,1.5823,-0.0185}, 6);
IndexedLineSet594.setCoord(&Coordinate595);

Shape592.setGeometry(&IndexedLineSet594);

HAnimSegment589.addChild(&Shape592);

HAnimJoint588.addChildren(&HAnimSegment589);

HAnimJoint& HAnimJoint596 =  HAnimJoint();
HAnimJoint596.X3DNode::setName(CString("vc4"));
HAnimJoint596.setDEF(CString("Joe_vc4"));
HAnimJoint596.setCenter(new float[]{0.0,1.5675,-0.0256});
HAnimSegment& HAnimSegment597 =  HAnimSegment();
HAnimSegment597.X3DNode::setName(CString("c4"));
HAnimSegment597.setDEF(CString("Joe_c4"));
Shape& Shape598 =  Shape();
Appearance& Appearance599 =  Appearance();
Appearance599.setUSE(CString("SegmentLine"));
Shape598.addChild(&Appearance599);

IndexedLineSet& IndexedLineSet600 =  IndexedLineSet();
IndexedLineSet600.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate601 =  Coordinate();
Coordinate601.setPoint(new float[]{0.0,1.5823,-0.0185,0.0,1.595,-0.0175}, 6);
IndexedLineSet600.setCoord(&Coordinate601);

Shape598.setGeometry(&IndexedLineSet600);

HAnimSegment597.addChild(&Shape598);

Transform& Transform602 =  Transform();
Transform602.setTranslation(new float[]{0.0,1.5675,-0.0256});
Shape& Shape603 =  Shape();
Shape603.setUSE(CString("jointbox"));
Transform602.addChild(&Shape603);

HAnimSegment597.addChild(&Transform602);

HAnimJoint596.addChildren(&HAnimSegment597);

HAnimJoint& HAnimJoint604 =  HAnimJoint();
HAnimJoint604.X3DNode::setName(CString("vc3"));
HAnimJoint604.setDEF(CString("Joe_vc3"));
HAnimJoint604.setCenter(new float[]{0.0,1.5823,-0.0185});
HAnimSegment& HAnimSegment605 =  HAnimSegment();
HAnimSegment605.X3DNode::setName(CString("c3"));
HAnimSegment605.setDEF(CString("Joe_c3"));
Shape& Shape606 =  Shape();
Appearance& Appearance607 =  Appearance();
Appearance607.setUSE(CString("SegmentLine"));
Shape606.addChild(&Appearance607);

IndexedLineSet& IndexedLineSet608 =  IndexedLineSet();
IndexedLineSet608.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate609 =  Coordinate();
Coordinate609.setPoint(new float[]{0.0,1.595,-0.0175,0.0,1.61,-0.015}, 6);
IndexedLineSet608.setCoord(&Coordinate609);

Shape606.setGeometry(&IndexedLineSet608);

HAnimSegment605.addChild(&Shape606);

Transform& Transform610 =  Transform();
Transform610.setTranslation(new float[]{0.0,1.5823,-0.0185});
Shape& Shape611 =  Shape();
Shape611.setUSE(CString("jointbox"));
Transform610.addChild(&Shape611);

HAnimSegment605.addChild(&Transform610);

HAnimJoint604.addChildren(&HAnimSegment605);

HAnimJoint& HAnimJoint612 =  HAnimJoint();
HAnimJoint612.X3DNode::setName(CString("vc2"));
HAnimJoint612.setDEF(CString("Joe_vc2"));
HAnimJoint612.setCenter(new float[]{0.0,1.595,-0.0175});
HAnimSegment& HAnimSegment613 =  HAnimSegment();
HAnimSegment613.X3DNode::setName(CString("c2"));
HAnimSegment613.setDEF(CString("Joe_c2"));
Shape& Shape614 =  Shape();
Appearance& Appearance615 =  Appearance();
Appearance615.setUSE(CString("SegmentLine"));
Shape614.addChild(&Appearance615);

IndexedLineSet& IndexedLineSet616 =  IndexedLineSet();
IndexedLineSet616.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate617 =  Coordinate();
Coordinate617.setPoint(new float[]{0.0,1.61,-0.015,0.0,1.6144,-0.0034}, 6);
IndexedLineSet616.setCoord(&Coordinate617);

Shape614.setGeometry(&IndexedLineSet616);

HAnimSegment613.addChild(&Shape614);

Transform& Transform618 =  Transform();
Transform618.setTranslation(new float[]{0.0,1.595,-0.0175});
Shape& Shape619 =  Shape();
Shape619.setUSE(CString("jointbox"));
Transform618.addChild(&Shape619);

HAnimSegment613.addChild(&Transform618);

HAnimJoint612.addChildren(&HAnimSegment613);

HAnimJoint& HAnimJoint620 =  HAnimJoint();
HAnimJoint620.X3DNode::setName(CString("vc1"));
HAnimJoint620.setDEF(CString("Joe_vc1"));
HAnimJoint620.setCenter(new float[]{0.0,1.61,-0.015});
HAnimSegment& HAnimSegment621 =  HAnimSegment();
HAnimSegment621.X3DNode::setName(CString("c1"));
HAnimSegment621.setDEF(CString("Joe_c1"));
Shape& Shape622 =  Shape();
Appearance& Appearance623 =  Appearance();
Appearance623.setUSE(CString("SegmentLine"));
Shape622.addChild(&Appearance623);

IndexedLineSet& IndexedLineSet624 =  IndexedLineSet();
IndexedLineSet624.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate625 =  Coordinate();
Coordinate625.setPoint(new float[]{0.0,1.6144,-0.0034,0.0,1.63,-0.01}, 6);
IndexedLineSet624.setCoord(&Coordinate625);

Shape622.setGeometry(&IndexedLineSet624);

HAnimSegment621.addChild(&Shape622);

Transform& Transform626 =  Transform();
Transform626.setTranslation(new float[]{0.0,1.61,-0.015});
Shape& Shape627 =  Shape();
Shape627.setUSE(CString("jointbox"));
Transform626.addChild(&Shape627);

HAnimSegment621.addChild(&Transform626);

HAnimJoint620.addChildren(&HAnimSegment621);

HAnimJoint& HAnimJoint628 =  HAnimJoint();
HAnimJoint628.X3DNode::setName(CString("skullbase"));
HAnimJoint628.setDEF(CString("Joe_skullbase"));
HAnimJoint628.setCenter(new float[]{0.0,1.63,-0.01});
HAnimJoint628.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint628.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
HAnimSegment& HAnimSegment629 =  HAnimSegment();
HAnimSegment629.X3DNode::setName(CString("skull"));
HAnimSegment629.setDEF(CString("Joe_skull"));
Shape& Shape630 =  Shape();
Appearance& Appearance631 =  Appearance();
Appearance631.setUSE(CString("SegmentLine"));
Shape630.addChild(&Appearance631);

IndexedLineSet& IndexedLineSet632 =  IndexedLineSet();
IndexedLineSet632.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
Coordinate& Coordinate633 =  Coordinate();
Coordinate633.setPoint(new float[]{0.0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
IndexedLineSet632.setCoord(&Coordinate633);

Shape630.setGeometry(&IndexedLineSet632);

HAnimSegment629.addChild(&Shape630);

Transform& Transform634 =  Transform();
Transform634.setTranslation(new float[]{0.0,1.63,-0.01});
Shape& Shape635 =  Shape();
Shape635.setUSE(CString("jointbox"));
Transform634.addChild(&Shape635);

HAnimSegment629.addChild(&Transform634);

HAnimSite& HAnimSite636 =  HAnimSite();
HAnimSite636.X3DNode::setName(CString("skull_vertex_tip"));
HAnimSite636.setDEF(CString("Joe_skull_vertex_tip"));
HAnimSite636.setTranslation(new float[]{0.0,1.77,0.0});
Shape& Shape637 =  Shape();
Shape637.setUSE(CString("sitebox"));
HAnimSite636.addChild(&Shape637);

HAnimSegment629.addChild(&HAnimSite636);

HAnimSite& HAnimSite638 =  HAnimSite();
HAnimSite638.X3DNode::setName(CString("sellion_pt"));
HAnimSite638.setDEF(CString("Joe_sellion_pt"));
HAnimSite638.setTranslation(new float[]{0.0,1.665,0.09});
Shape& Shape639 =  Shape();
Shape639.setUSE(CString("sitebox"));
HAnimSite638.addChild(&Shape639);

HAnimSegment629.addChild(&HAnimSite638);

HAnimSite& HAnimSite640 =  HAnimSite();
HAnimSite640.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite640.setDEF(CString("Joe_r_infraorbitale_pt"));
HAnimSite640.setTranslation(new float[]{-0.033,1.62,0.087});
Shape& Shape641 =  Shape();
Shape641.setUSE(CString("sitebox"));
HAnimSite640.addChild(&Shape641);

HAnimSegment629.addChild(&HAnimSite640);

HAnimSite& HAnimSite642 =  HAnimSite();
HAnimSite642.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite642.setDEF(CString("Joe_l_infraorbitale_pt"));
HAnimSite642.setTranslation(new float[]{0.033,1.62,0.087});
Shape& Shape643 =  Shape();
Shape643.setUSE(CString("sitebox"));
HAnimSite642.addChild(&Shape643);

HAnimSegment629.addChild(&HAnimSite642);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.X3DNode::setName(CString("supramenton_pt"));
HAnimSite644.setDEF(CString("Joe_supramenton_pt"));
HAnimSite644.setTranslation(new float[]{0.0,1.55,0.097});
Shape& Shape645 =  Shape();
Shape645.setUSE(CString("sitebox"));
HAnimSite644.addChild(&Shape645);

HAnimSegment629.addChild(&HAnimSite644);

HAnimSite& HAnimSite646 =  HAnimSite();
HAnimSite646.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite646.setDEF(CString("Joe_r_tragion_pt"));
HAnimSite646.setTranslation(new float[]{-0.077,1.64,-0.01});
Shape& Shape647 =  Shape();
Shape647.setUSE(CString("sitebox"));
HAnimSite646.addChild(&Shape647);

HAnimSegment629.addChild(&HAnimSite646);

HAnimSite& HAnimSite648 =  HAnimSite();
HAnimSite648.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite648.setDEF(CString("Joe_r_gonion_pt"));
HAnimSite648.setTranslation(new float[]{-0.052,1.58,0.015});
Shape& Shape649 =  Shape();
Shape649.setUSE(CString("sitebox"));
HAnimSite648.addChild(&Shape649);

HAnimSegment629.addChild(&HAnimSite648);

HAnimSite& HAnimSite650 =  HAnimSite();
HAnimSite650.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite650.setDEF(CString("Joe_l_tragion_pt"));
HAnimSite650.setTranslation(new float[]{0.077,1.64,-0.01});
Shape& Shape651 =  Shape();
Shape651.setUSE(CString("sitebox"));
HAnimSite650.addChild(&Shape651);

HAnimSegment629.addChild(&HAnimSite650);

HAnimSite& HAnimSite652 =  HAnimSite();
HAnimSite652.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite652.setDEF(CString("Joe_l_gonion_pt"));
HAnimSite652.setTranslation(new float[]{0.0631,1.58,0.015});
Shape& Shape653 =  Shape();
Shape653.setUSE(CString("sitebox"));
HAnimSite652.addChild(&Shape653);

HAnimSegment629.addChild(&HAnimSite652);

HAnimSite& HAnimSite654 =  HAnimSite();
HAnimSite654.X3DNode::setName(CString("nuchale_pt"));
HAnimSite654.setDEF(CString("Joe_nuchale_pt"));
HAnimSite654.setTranslation(new float[]{0.0,1.625,-0.0925});
Shape& Shape655 =  Shape();
Shape655.setUSE(CString("sitebox"));
HAnimSite654.addChild(&Shape655);

HAnimSegment629.addChild(&HAnimSite654);

HAnimJoint628.addChildren(&HAnimSegment629);

HAnimJoint& HAnimJoint656 =  HAnimJoint();
HAnimJoint656.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint656.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint656.setCenter(new float[]{0.034,1.659,0.06});
HAnimSegment& HAnimSegment657 =  HAnimSegment();
HAnimSegment657.X3DNode::setName(CString("l_eyeball"));
HAnimSegment657.setDEF(CString("Joe_l_eyeball"));
Shape& Shape658 =  Shape();
Appearance& Appearance659 =  Appearance();
Appearance659.setUSE(CString("SegmentLine"));
Shape658.addChild(&Appearance659);

IndexedLineSet& IndexedLineSet660 =  IndexedLineSet();
IndexedLineSet660.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate661 =  Coordinate();
Coordinate661.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet660.setCoord(&Coordinate661);

Shape658.setGeometry(&IndexedLineSet660);

HAnimSegment657.addChild(&Shape658);

Transform& Transform662 =  Transform();
Transform662.setScale(new float[]{1.0,1.0,1.4});
Transform662.setTranslation(new float[]{0.034,1.655,0.065});
Shape& Shape663 =  Shape();
Shape663.setUSE(CString("jointbox"));
Transform662.addChild(&Shape663);

HAnimSegment657.addChild(&Transform662);

HAnimJoint656.addChildren(&HAnimSegment657);

HAnimJoint628.addChildren(&HAnimJoint656);

HAnimJoint& HAnimJoint664 =  HAnimJoint();
HAnimJoint664.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint664.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint664.setCenter(new float[]{-0.034,1.659,0.06});
HAnimSegment& HAnimSegment665 =  HAnimSegment();
HAnimSegment665.X3DNode::setName(CString("r_eyeball"));
HAnimSegment665.setDEF(CString("Joe_r_eyeball"));
Shape& Shape666 =  Shape();
Appearance& Appearance667 =  Appearance();
Appearance667.setUSE(CString("SegmentLine"));
Shape666.addChild(&Appearance667);

IndexedLineSet& IndexedLineSet668 =  IndexedLineSet();
IndexedLineSet668.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate669 =  Coordinate();
Coordinate669.setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
IndexedLineSet668.setCoord(&Coordinate669);

Shape666.setGeometry(&IndexedLineSet668);

HAnimSegment665.addChild(&Shape666);

Transform& Transform670 =  Transform();
Transform670.setScale(new float[]{1.0,1.0,1.4});
Transform670.setTranslation(new float[]{-0.034,1.655,0.065});
Shape& Shape671 =  Shape();
Shape671.setUSE(CString("jointbox"));
Transform670.addChild(&Shape671);

HAnimSegment665.addChild(&Transform670);

HAnimJoint664.addChildren(&HAnimSegment665);

HAnimJoint628.addChildren(&HAnimJoint664);

HAnimJoint620.addChildren(&HAnimJoint628);

HAnimJoint612.addChildren(&HAnimJoint620);

HAnimJoint604.addChildren(&HAnimJoint612);

HAnimJoint596.addChildren(&HAnimJoint604);

HAnimJoint588.addChildren(&HAnimJoint596);

HAnimJoint580.addChildren(&HAnimJoint588);

HAnimJoint568.addChildren(&HAnimJoint580);

HAnimJoint556.addChildren(&HAnimJoint568);

HAnimJoint& HAnimJoint672 =  HAnimJoint();
HAnimJoint672.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint672.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint672.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint672.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint672.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimSegment& HAnimSegment673 =  HAnimSegment();
HAnimSegment673.X3DNode::setName(CString("l_clavicle"));
HAnimSegment673.setDEF(CString("Joe_l_clavicle"));
Shape& Shape674 =  Shape();
Appearance& Appearance675 =  Appearance();
Appearance675.setUSE(CString("SegmentLine"));
Shape674.addChild(&Appearance675);

IndexedLineSet& IndexedLineSet676 =  IndexedLineSet();
IndexedLineSet676.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate677 =  Coordinate();
Coordinate677.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
IndexedLineSet676.setCoord(&Coordinate677);

Shape674.setGeometry(&IndexedLineSet676);

HAnimSegment673.addChild(&Shape674);

Transform& Transform678 =  Transform();
Transform678.setTranslation(new float[]{0.082,1.4488,-0.0353});
Shape& Shape679 =  Shape();
Shape679.setUSE(CString("jointbox"));
Transform678.addChild(&Shape679);

HAnimSegment673.addChild(&Transform678);

HAnimSite& HAnimSite680 =  HAnimSite();
HAnimSite680.X3DNode::setName(CString("l_clavicle_pt"));
HAnimSite680.setDEF(CString("Joe_l_clavicle_pt"));
HAnimSite680.setTranslation(new float[]{0.03,1.46,0.035});
Shape& Shape681 =  Shape();
Shape681.setUSE(CString("sitebox"));
HAnimSite680.addChild(&Shape681);

HAnimSegment673.addChild(&HAnimSite680);

HAnimJoint672.addChildren(&HAnimSegment673);

HAnimJoint& HAnimJoint682 =  HAnimJoint();
HAnimJoint682.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint682.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint682.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint682.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint682.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimSegment& HAnimSegment683 =  HAnimSegment();
HAnimSegment683.X3DNode::setName(CString("l_scapula"));
HAnimSegment683.setDEF(CString("Joe_l_scapula"));
Shape& Shape684 =  Shape();
Appearance& Appearance685 =  Appearance();
Appearance685.setUSE(CString("SegmentLine"));
Shape684.addChild(&Appearance685);

IndexedLineSet& IndexedLineSet686 =  IndexedLineSet();
IndexedLineSet686.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate687 =  Coordinate();
Coordinate687.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
IndexedLineSet686.setCoord(&Coordinate687);

Shape684.setGeometry(&IndexedLineSet686);

HAnimSegment683.addChild(&Shape684);

Transform& Transform688 =  Transform();
Transform688.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Shape& Shape689 =  Shape();
Shape689.setUSE(CString("jointbox"));
Transform688.addChild(&Shape689);

HAnimSegment683.addChild(&Transform688);

Transform& Transform690 =  Transform();
Transform690.setTranslation(new float[]{0.11,1.427,-0.1375});
Shape& Shape691 =  Shape();
Shape691.setUSE(CString("skinsphere"));
Transform690.addChild(&Shape691);

HAnimSegment683.addChild(&Transform690);

HAnimSite& HAnimSite692 =  HAnimSite();
HAnimSite692.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite692.setDEF(CString("Joe_l_acromion_pt"));
HAnimSite692.setTranslation(new float[]{0.175,1.4825,-0.06});
Shape& Shape693 =  Shape();
Shape693.setUSE(CString("sitebox"));
HAnimSite692.addChild(&Shape693);

HAnimSegment683.addChild(&HAnimSite692);

HAnimSite& HAnimSite694 =  HAnimSite();
HAnimSite694.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite694.setDEF(CString("Joe_l_axilla_proximal_pt"));
HAnimSite694.setTranslation(new float[]{0.17,1.38,0.007});
Shape& Shape695 =  Shape();
Shape695.setUSE(CString("sitebox"));
HAnimSite694.addChild(&Shape695);

HAnimSegment683.addChild(&HAnimSite694);

HAnimSite& HAnimSite696 =  HAnimSite();
HAnimSite696.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite696.setDEF(CString("Joe_l_axilla_distal_pt"));
HAnimSite696.setTranslation(new float[]{0.16,1.38,-0.125});
Shape& Shape697 =  Shape();
Shape697.setUSE(CString("sitebox"));
HAnimSite696.addChild(&Shape697);

HAnimSegment683.addChild(&HAnimSite696);

HAnimJoint682.addChildren(&HAnimSegment683);

HAnimJoint& HAnimJoint698 =  HAnimJoint();
HAnimJoint698.X3DNode::setName(CString("l_shoulder"));
HAnimJoint698.setDEF(CString("Joe_l_shoulder"));
HAnimJoint698.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint698.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint698.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimSegment& HAnimSegment699 =  HAnimSegment();
HAnimSegment699.X3DNode::setName(CString("l_upperarm"));
HAnimSegment699.setDEF(CString("Joe_l_upperarm"));
Shape& Shape700 =  Shape();
Appearance& Appearance701 =  Appearance();
Appearance701.setUSE(CString("SegmentLine"));
Shape700.addChild(&Appearance701);

IndexedLineSet& IndexedLineSet702 =  IndexedLineSet();
IndexedLineSet702.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate703 =  Coordinate();
Coordinate703.setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
IndexedLineSet702.setCoord(&Coordinate703);

Shape700.setGeometry(&IndexedLineSet702);

HAnimSegment699.addChild(&Shape700);

Transform& Transform704 =  Transform();
Transform704.setTranslation(new float[]{0.2,1.44,-0.04});
Shape& Shape705 =  Shape();
Shape705.setUSE(CString("jointbox"));
Transform704.addChild(&Shape705);

HAnimSegment699.addChild(&Transform704);

Transform& Transform706 =  Transform();
Transform706.setTranslation(new float[]{0.235,1.42,-0.0625});
Shape& Shape707 =  Shape();
Shape707.setUSE(CString("skinsphere"));
Transform706.addChild(&Shape707);

HAnimSegment699.addChild(&Transform706);

Transform& Transform708 =  Transform();
Transform708.setTranslation(new float[]{0.25,1.27,-0.04});
Shape& Shape709 =  Shape();
Shape709.setUSE(CString("skinsphere"));
Transform708.addChild(&Shape709);

HAnimSegment699.addChild(&Transform708);

Transform& Transform710 =  Transform();
Transform710.setTranslation(new float[]{0.17,1.27,-0.04});
Shape& Shape711 =  Shape();
Shape711.setUSE(CString("skinsphere"));
Transform710.addChild(&Shape711);

HAnimSegment699.addChild(&Transform710);

Transform& Transform712 =  Transform();
Transform712.setTranslation(new float[]{0.2,1.27,-0.09});
Shape& Shape713 =  Shape();
Shape713.setUSE(CString("skinsphere"));
Transform712.addChild(&Shape713);

HAnimSegment699.addChild(&Transform712);

Transform& Transform714 =  Transform();
Transform714.setTranslation(new float[]{0.2,1.27,0.02});
Shape& Shape715 =  Shape();
Shape715.setUSE(CString("skinsphere"));
Transform714.addChild(&Shape715);

HAnimSegment699.addChild(&Transform714);

HAnimSite& HAnimSite716 =  HAnimSite();
HAnimSite716.X3DNode::setName(CString("l_humeral_medial_epicondyle_pt"));
HAnimSite716.setDEF(CString("Joe_l_humeral_medial_epicondyle_pt"));
HAnimSite716.setTranslation(new float[]{0.165,1.1388,-0.04});
Shape& Shape717 =  Shape();
Shape717.setUSE(CString("sitebox"));
HAnimSite716.addChild(&Shape717);

HAnimSegment699.addChild(&HAnimSite716);

HAnimSite& HAnimSite718 =  HAnimSite();
HAnimSite718.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite718.setDEF(CString("Joe_l_radiale_pt"));
HAnimSite718.setTranslation(new float[]{0.23,1.133,-0.055});
Shape& Shape719 =  Shape();
Shape719.setUSE(CString("sitebox"));
HAnimSite718.addChild(&Shape719);

HAnimSegment699.addChild(&HAnimSite718);

HAnimSite& HAnimSite720 =  HAnimSite();
HAnimSite720.X3DNode::setName(CString("l_humeral_lateral_epicondyle_pt"));
HAnimSite720.setDEF(CString("Joe_l_humeral_lateral_epicondyle_pt"));
HAnimSite720.setTranslation(new float[]{0.244,1.1388,-0.04});
Shape& Shape721 =  Shape();
Shape721.setUSE(CString("sitebox"));
HAnimSite720.addChild(&Shape721);

HAnimSegment699.addChild(&HAnimSite720);

HAnimJoint698.addChildren(&HAnimSegment699);

HAnimJoint& HAnimJoint722 =  HAnimJoint();
HAnimJoint722.X3DNode::setName(CString("l_elbow"));
HAnimJoint722.setDEF(CString("Joe_l_elbow"));
HAnimJoint722.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint722.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint722.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
HAnimSegment& HAnimSegment723 =  HAnimSegment();
HAnimSegment723.X3DNode::setName(CString("l_forearm"));
HAnimSegment723.setDEF(CString("Joe_l_forearm"));
Shape& Shape724 =  Shape();
Appearance& Appearance725 =  Appearance();
Appearance725.setUSE(CString("SegmentLine"));
Shape724.addChild(&Appearance725);

IndexedLineSet& IndexedLineSet726 =  IndexedLineSet();
IndexedLineSet726.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate727 =  Coordinate();
Coordinate727.setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
IndexedLineSet726.setCoord(&Coordinate727);

Shape724.setGeometry(&IndexedLineSet726);

HAnimSegment723.addChild(&Shape724);

Transform& Transform728 =  Transform();
Transform728.setTranslation(new float[]{0.2,1.1388,-0.04});
Shape& Shape729 =  Shape();
Shape729.setUSE(CString("jointbox"));
Transform728.addChild(&Shape729);

HAnimSegment723.addChild(&Transform728);

Transform& Transform730 =  Transform();
Transform730.setTranslation(new float[]{0.2,1.1388,-0.013});
Shape& Shape731 =  Shape();
Shape731.setUSE(CString("skinsphere"));
Transform730.addChild(&Shape731);

HAnimSegment723.addChild(&Transform730);

Transform& Transform732 =  Transform();
Transform732.setTranslation(new float[]{0.225,1.0,-0.01});
Shape& Shape733 =  Shape();
Shape733.setUSE(CString("skinsphere"));
Transform732.addChild(&Shape733);

HAnimSegment723.addChild(&Transform732);

Transform& Transform734 =  Transform();
Transform734.setTranslation(new float[]{0.225,1.0,-0.07});
Shape& Shape735 =  Shape();
Shape735.setUSE(CString("skinsphere"));
Transform734.addChild(&Shape735);

HAnimSegment723.addChild(&Transform734);

Transform& Transform736 =  Transform();
Transform736.setTranslation(new float[]{0.185,1.0,-0.01});
Shape& Shape737 =  Shape();
Shape737.setUSE(CString("skinsphere"));
Transform736.addChild(&Shape737);

HAnimSegment723.addChild(&Transform736);

Transform& Transform738 =  Transform();
Transform738.setTranslation(new float[]{0.185,1.0,-0.07});
Shape& Shape739 =  Shape();
Shape739.setUSE(CString("skinsphere"));
Transform738.addChild(&Shape739);

HAnimSegment723.addChild(&Transform738);

HAnimSite& HAnimSite740 =  HAnimSite();
HAnimSite740.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite740.setDEF(CString("Joe_l_radial_styloid_pt"));
HAnimSite740.setTranslation(new float[]{0.1901,0.8645,-0.0415});
Shape& Shape741 =  Shape();
Shape741.setUSE(CString("sitebox"));
HAnimSite740.addChild(&Shape741);

HAnimSegment723.addChild(&HAnimSite740);

HAnimSite& HAnimSite742 =  HAnimSite();
HAnimSite742.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite742.setDEF(CString("Joe_l_olecranon_pt"));
HAnimSite742.setTranslation(new float[]{0.2,1.1388,-0.08});
Shape& Shape743 =  Shape();
Shape743.setUSE(CString("sitebox"));
HAnimSite742.addChild(&Shape743);

HAnimSegment723.addChild(&HAnimSite742);

HAnimJoint722.addChildren(&HAnimSegment723);

HAnimJoint& HAnimJoint744 =  HAnimJoint();
HAnimJoint744.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint744.setDEF(CString("Joe_l_radiocarpal"));
HAnimJoint744.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint744.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint744.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimSegment& HAnimSegment745 =  HAnimSegment();
HAnimSegment745.X3DNode::setName(CString("l_carpal"));
HAnimSegment745.setDEF(CString("Joe_l_carpal"));
Shape& Shape746 =  Shape();
Appearance& Appearance747 =  Appearance();
Appearance747.setUSE(CString("SegmentLine"));
Shape746.addChild(&Appearance747);

IndexedLineSet& IndexedLineSet748 =  IndexedLineSet();
IndexedLineSet748.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate749 =  Coordinate();
Coordinate749.setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
IndexedLineSet748.setCoord(&Coordinate749);

Shape746.setGeometry(&IndexedLineSet748);

HAnimSegment745.addChild(&Shape746);

Transform& Transform750 =  Transform();
Transform750.setTranslation(new float[]{0.2,0.87,-0.04});
Shape& Shape751 =  Shape();
Shape751.setUSE(CString("jointbox"));
Transform750.addChild(&Shape751);

HAnimSegment745.addChild(&Transform750);

HAnimSite& HAnimSite752 =  HAnimSite();
HAnimSite752.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite752.setDEF(CString("Joe_l_metacarpal_phalanx_2_pt"));
HAnimSite752.setTranslation(new float[]{0.2009,0.8139,-0.0237});
Shape& Shape753 =  Shape();
Shape753.setUSE(CString("sitebox"));
HAnimSite752.addChild(&Shape753);

HAnimSegment745.addChild(&HAnimSite752);

HAnimSite& HAnimSite754 =  HAnimSite();
HAnimSite754.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite754.setDEF(CString("Joe_l_ulnar_styloid_pt"));
HAnimSite754.setTranslation(new float[]{0.2142,0.8529,-0.0648});
Shape& Shape755 =  Shape();
Shape755.setUSE(CString("sitebox"));
HAnimSite754.addChild(&Shape755);

HAnimSegment745.addChild(&HAnimSite754);

HAnimSite& HAnimSite756 =  HAnimSite();
HAnimSite756.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite756.setDEF(CString("Joe_l_metacarpal_phalanx_5_pt"));
HAnimSite756.setTranslation(new float[]{0.1929,0.786,-0.1122});
Shape& Shape757 =  Shape();
Shape757.setUSE(CString("sitebox"));
HAnimSite756.addChild(&Shape757);

HAnimSegment745.addChild(&HAnimSite756);

HAnimJoint744.addChildren(&HAnimSegment745);

HAnimJoint& HAnimJoint758 =  HAnimJoint();
HAnimJoint758.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint758.setDEF(CString("Joe_l_carpometacarpal_1"));
HAnimJoint758.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint758.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint758.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment759 =  HAnimSegment();
HAnimSegment759.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment759.setDEF(CString("Joe_l_metacarpal_1"));
Shape& Shape760 =  Shape();
Appearance& Appearance761 =  Appearance();
Appearance761.setUSE(CString("SegmentLine"));
Shape760.addChild(&Appearance761);

IndexedLineSet& IndexedLineSet762 =  IndexedLineSet();
IndexedLineSet762.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate763 =  Coordinate();
Coordinate763.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
IndexedLineSet762.setCoord(&Coordinate763);

Shape760.setGeometry(&IndexedLineSet762);

HAnimSegment759.addChild(&Shape760);

Transform& Transform764 =  Transform();
Transform764.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Shape& Shape765 =  Shape();
Shape765.setUSE(CString("jointbox"));
Transform764.addChild(&Shape765);

HAnimSegment759.addChild(&Transform764);

HAnimJoint758.addChildren(&HAnimSegment759);

HAnimJoint& HAnimJoint766 =  HAnimJoint();
HAnimJoint766.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint766.setDEF(CString("Joe_l_metacarpophalangeal_1"));
HAnimJoint766.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint766.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint766.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
HAnimSegment& HAnimSegment767 =  HAnimSegment();
HAnimSegment767.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment767.setDEF(CString("Joe_l_carpal_proximal_phalanx_1"));
Shape& Shape768 =  Shape();
Appearance& Appearance769 =  Appearance();
Appearance769.setUSE(CString("SegmentLine"));
Shape768.addChild(&Appearance769);

IndexedLineSet& IndexedLineSet770 =  IndexedLineSet();
IndexedLineSet770.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate771 =  Coordinate();
Coordinate771.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
IndexedLineSet770.setCoord(&Coordinate771);

Shape768.setGeometry(&IndexedLineSet770);

HAnimSegment767.addChild(&Shape768);

Transform& Transform772 =  Transform();
Transform772.setTranslation(new float[]{0.1951,0.8226,0.0246});
Shape& Shape773 =  Shape();
Shape773.setUSE(CString("jointbox"));
Transform772.addChild(&Shape773);

HAnimSegment767.addChild(&Transform772);

HAnimJoint766.addChildren(&HAnimSegment767);

HAnimJoint& HAnimJoint774 =  HAnimJoint();
HAnimJoint774.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint774.setDEF(CString("Joe_l_carpal_interphalangeal_1"));
HAnimJoint774.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint774.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint774.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment775 =  HAnimSegment();
HAnimSegment775.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSegment775.setDEF(CString("Joe_l_carpal_distal_phalanx_1"));
Shape& Shape776 =  Shape();
Appearance& Appearance777 =  Appearance();
Appearance777.setUSE(CString("SegmentLine"));
Shape776.addChild(&Appearance777);

IndexedLineSet& IndexedLineSet778 =  IndexedLineSet();
IndexedLineSet778.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate779 =  Coordinate();
Coordinate779.setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
IndexedLineSet778.setCoord(&Coordinate779);

Shape776.setGeometry(&IndexedLineSet778);

HAnimSegment775.addChild(&Shape776);

Transform& Transform780 =  Transform();
Transform780.setTranslation(new float[]{0.1955,0.8159,0.0464});
Shape& Shape781 =  Shape();
Shape781.setUSE(CString("jointbox"));
Transform780.addChild(&Shape781);

HAnimSegment775.addChild(&Transform780);

HAnimSite& HAnimSite782 =  HAnimSite();
HAnimSite782.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite782.setDEF(CString("Joe_l_carpal_distal_phalanx_1_tip"));
HAnimSite782.setTranslation(new float[]{0.1982,0.8061,0.0759});
Shape& Shape783 =  Shape();
Shape783.setUSE(CString("sitebox"));
HAnimSite782.addChild(&Shape783);

HAnimSegment775.addChild(&HAnimSite782);

HAnimJoint774.addChildren(&HAnimSegment775);

HAnimJoint766.addChildren(&HAnimJoint774);

HAnimJoint758.addChildren(&HAnimJoint766);

HAnimJoint744.addChildren(&HAnimJoint758);

HAnimJoint& HAnimJoint784 =  HAnimJoint();
HAnimJoint784.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint784.setDEF(CString("Joe_l_carpometacarpal_2"));
HAnimJoint784.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint784.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint784.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment785 =  HAnimSegment();
HAnimSegment785.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment785.setDEF(CString("Joe_l_metacarpal_2"));
Shape& Shape786 =  Shape();
Appearance& Appearance787 =  Appearance();
Appearance787.setUSE(CString("SegmentLine"));
Shape786.addChild(&Appearance787);

IndexedLineSet& IndexedLineSet788 =  IndexedLineSet();
IndexedLineSet788.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate789 =  Coordinate();
Coordinate789.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
IndexedLineSet788.setCoord(&Coordinate789);

Shape786.setGeometry(&IndexedLineSet788);

HAnimSegment785.addChild(&Shape786);

Transform& Transform790 =  Transform();
Transform790.setTranslation(new float[]{0.1983,0.8024,-0.028});
Shape& Shape791 =  Shape();
Shape791.setUSE(CString("jointbox"));
Transform790.addChild(&Shape791);

HAnimSegment785.addChild(&Transform790);

HAnimJoint784.addChildren(&HAnimSegment785);

HAnimJoint& HAnimJoint792 =  HAnimJoint();
HAnimJoint792.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint792.setDEF(CString("Joe_l_metacarpophalangeal_2"));
HAnimJoint792.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint792.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint792.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
HAnimSegment& HAnimSegment793 =  HAnimSegment();
HAnimSegment793.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment793.setDEF(CString("Joe_l_carpal_proximal_phalanx_2"));
Shape& Shape794 =  Shape();
Appearance& Appearance795 =  Appearance();
Appearance795.setUSE(CString("SegmentLine"));
Shape794.addChild(&Appearance795);

IndexedLineSet& IndexedLineSet796 =  IndexedLineSet();
IndexedLineSet796.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate797 =  Coordinate();
Coordinate797.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
IndexedLineSet796.setCoord(&Coordinate797);

Shape794.setGeometry(&IndexedLineSet796);

HAnimSegment793.addChild(&Shape794);

Transform& Transform798 =  Transform();
Transform798.setTranslation(new float[]{0.1983,0.7815,-0.028});
Shape& Shape799 =  Shape();
Shape799.setUSE(CString("jointbox"));
Transform798.addChild(&Shape799);

HAnimSegment793.addChild(&Transform798);

HAnimJoint792.addChildren(&HAnimSegment793);

HAnimJoint& HAnimJoint800 =  HAnimJoint();
HAnimJoint800.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint800.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimJoint800.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint800.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint800.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment801 =  HAnimSegment();
HAnimSegment801.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment801.setDEF(CString("Joe_l_carpal_middle_phalanx_2"));
Shape& Shape802 =  Shape();
Appearance& Appearance803 =  Appearance();
Appearance803.setUSE(CString("SegmentLine"));
Shape802.addChild(&Appearance803);

IndexedLineSet& IndexedLineSet804 =  IndexedLineSet();
IndexedLineSet804.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate805 =  Coordinate();
Coordinate805.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
IndexedLineSet804.setCoord(&Coordinate805);

Shape802.setGeometry(&IndexedLineSet804);

HAnimSegment801.addChild(&Shape802);

Transform& Transform806 =  Transform();
Transform806.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Shape& Shape807 =  Shape();
Shape807.setUSE(CString("jointbox"));
Transform806.addChild(&Shape807);

HAnimSegment801.addChild(&Transform806);

HAnimJoint800.addChildren(&HAnimSegment801);

HAnimJoint& HAnimJoint808 =  HAnimJoint();
HAnimJoint808.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint808.setDEF(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimJoint808.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint808.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint808.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment809 =  HAnimSegment();
HAnimSegment809.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSegment809.setDEF(CString("Joe_l_carpal_distal_phalanx_2"));
Shape& Shape810 =  Shape();
Appearance& Appearance811 =  Appearance();
Appearance811.setUSE(CString("SegmentLine"));
Shape810.addChild(&Appearance811);

IndexedLineSet& IndexedLineSet812 =  IndexedLineSet();
IndexedLineSet812.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate813 =  Coordinate();
Coordinate813.setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
IndexedLineSet812.setCoord(&Coordinate813);

Shape810.setGeometry(&IndexedLineSet812);

HAnimSegment809.addChild(&Shape810);

Transform& Transform814 =  Transform();
Transform814.setTranslation(new float[]{0.2028,0.7139,-0.0236});
Shape& Shape815 =  Shape();
Shape815.setUSE(CString("jointbox"));
Transform814.addChild(&Shape815);

HAnimSegment809.addChild(&Transform814);

HAnimSite& HAnimSite816 =  HAnimSite();
HAnimSite816.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite816.setDEF(CString("Joe_l_carpal_distal_phalanx_2_tip"));
HAnimSite816.setTranslation(new float[]{0.2089,0.6858,-0.0245});
Shape& Shape817 =  Shape();
Shape817.setUSE(CString("sitebox"));
HAnimSite816.addChild(&Shape817);

HAnimSegment809.addChild(&HAnimSite816);

HAnimSite& HAnimSite818 =  HAnimSite();
HAnimSite818.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite818.setDEF(CString("Joe_l_dactylion_pt"));
HAnimSite818.setTranslation(new float[]{0.2056,0.6743,-0.0482});
Shape& Shape819 =  Shape();
Shape819.setUSE(CString("sitebox"));
HAnimSite818.addChild(&Shape819);

HAnimSegment809.addChild(&HAnimSite818);

HAnimJoint808.addChildren(&HAnimSegment809);

HAnimJoint800.addChildren(&HAnimJoint808);

HAnimJoint792.addChildren(&HAnimJoint800);

HAnimJoint784.addChildren(&HAnimJoint792);

HAnimJoint744.addChildren(&HAnimJoint784);

HAnimJoint& HAnimJoint820 =  HAnimJoint();
HAnimJoint820.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint820.setDEF(CString("Joe_l_carpometacarpal_3"));
HAnimJoint820.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint820.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint820.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment821 =  HAnimSegment();
HAnimSegment821.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment821.setDEF(CString("Joe_l_metacarpal_3"));
Shape& Shape822 =  Shape();
Appearance& Appearance823 =  Appearance();
Appearance823.setUSE(CString("SegmentLine"));
Shape822.addChild(&Appearance823);

IndexedLineSet& IndexedLineSet824 =  IndexedLineSet();
IndexedLineSet824.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate825 =  Coordinate();
Coordinate825.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
IndexedLineSet824.setCoord(&Coordinate825);

Shape822.setGeometry(&IndexedLineSet824);

HAnimSegment821.addChild(&Shape822);

Transform& Transform826 =  Transform();
Transform826.setTranslation(new float[]{0.1987,0.8029,-0.053});
Shape& Shape827 =  Shape();
Shape827.setUSE(CString("jointbox"));
Transform826.addChild(&Shape827);

HAnimSegment821.addChild(&Transform826);

HAnimJoint820.addChildren(&HAnimSegment821);

HAnimJoint& HAnimJoint828 =  HAnimJoint();
HAnimJoint828.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint828.setDEF(CString("Joe_l_metacarpophalangeal_3"));
HAnimJoint828.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint828.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint828.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimSegment& HAnimSegment829 =  HAnimSegment();
HAnimSegment829.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment829.setDEF(CString("Joe_l_carpal_proximal_phalanx_3"));
Shape& Shape830 =  Shape();
Appearance& Appearance831 =  Appearance();
Appearance831.setUSE(CString("SegmentLine"));
Shape830.addChild(&Appearance831);

IndexedLineSet& IndexedLineSet832 =  IndexedLineSet();
IndexedLineSet832.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate833 =  Coordinate();
Coordinate833.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
IndexedLineSet832.setCoord(&Coordinate833);

Shape830.setGeometry(&IndexedLineSet832);

HAnimSegment829.addChild(&Shape830);

Transform& Transform834 =  Transform();
Transform834.setTranslation(new float[]{0.1987,0.7818,-0.053});
Shape& Shape835 =  Shape();
Shape835.setUSE(CString("jointbox"));
Transform834.addChild(&Shape835);

HAnimSegment829.addChild(&Transform834);

HAnimJoint828.addChildren(&HAnimSegment829);

HAnimJoint& HAnimJoint836 =  HAnimJoint();
HAnimJoint836.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint836.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimJoint836.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint836.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint836.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment837 =  HAnimSegment();
HAnimSegment837.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment837.setDEF(CString("Joe_l_carpal_middle_phalanx_3"));
Shape& Shape838 =  Shape();
Appearance& Appearance839 =  Appearance();
Appearance839.setUSE(CString("SegmentLine"));
Shape838.addChild(&Appearance839);

IndexedLineSet& IndexedLineSet840 =  IndexedLineSet();
IndexedLineSet840.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate841 =  Coordinate();
Coordinate841.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
IndexedLineSet840.setCoord(&Coordinate841);

Shape838.setGeometry(&IndexedLineSet840);

HAnimSegment837.addChild(&Shape838);

Transform& Transform842 =  Transform();
Transform842.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Shape& Shape843 =  Shape();
Shape843.setUSE(CString("jointbox"));
Transform842.addChild(&Shape843);

HAnimSegment837.addChild(&Transform842);

HAnimJoint836.addChildren(&HAnimSegment837);

HAnimJoint& HAnimJoint844 =  HAnimJoint();
HAnimJoint844.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint844.setDEF(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimJoint844.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint844.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint844.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment845 =  HAnimSegment();
HAnimSegment845.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSegment845.setDEF(CString("Joe_l_carpal_distal_phalanx_3"));
Shape& Shape846 =  Shape();
Appearance& Appearance847 =  Appearance();
Appearance847.setUSE(CString("SegmentLine"));
Shape846.addChild(&Appearance847);

IndexedLineSet& IndexedLineSet848 =  IndexedLineSet();
IndexedLineSet848.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate849 =  Coordinate();
Coordinate849.setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
IndexedLineSet848.setCoord(&Coordinate849);

Shape846.setGeometry(&IndexedLineSet848);

HAnimSegment845.addChild(&Shape846);

HAnimSite& HAnimSite850 =  HAnimSite();
HAnimSite850.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite850.setDEF(CString("Joe_l_carpal_distal_phalanx_3_tip"));
HAnimSite850.setTranslation(new float[]{0.208,0.6731,-0.0491});
Shape& Shape851 =  Shape();
Shape851.setUSE(CString("sitebox"));
HAnimSite850.addChild(&Shape851);

HAnimSegment845.addChild(&HAnimSite850);

Transform& Transform852 =  Transform();
Transform852.setTranslation(new float[]{0.2026,0.7011,-0.0494});
Shape& Shape853 =  Shape();
Shape853.setUSE(CString("jointbox"));
Transform852.addChild(&Shape853);

HAnimSegment845.addChild(&Transform852);

HAnimJoint844.addChildren(&HAnimSegment845);

HAnimJoint836.addChildren(&HAnimJoint844);

HAnimJoint828.addChildren(&HAnimJoint836);

HAnimJoint820.addChildren(&HAnimJoint828);

HAnimJoint744.addChildren(&HAnimJoint820);

HAnimJoint& HAnimJoint854 =  HAnimJoint();
HAnimJoint854.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint854.setDEF(CString("Joe_l_carpometacarpal_4"));
HAnimJoint854.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint854.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint854.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment855 =  HAnimSegment();
HAnimSegment855.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment855.setDEF(CString("Joe_l_metacarpal_4"));
Shape& Shape856 =  Shape();
Appearance& Appearance857 =  Appearance();
Appearance857.setUSE(CString("SegmentLine"));
Shape856.addChild(&Appearance857);

IndexedLineSet& IndexedLineSet858 =  IndexedLineSet();
IndexedLineSet858.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate859 =  Coordinate();
Coordinate859.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
IndexedLineSet858.setCoord(&Coordinate859);

Shape856.setGeometry(&IndexedLineSet858);

HAnimSegment855.addChild(&Shape856);

Transform& Transform860 =  Transform();
Transform860.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Shape& Shape861 =  Shape();
Shape861.setUSE(CString("jointbox"));
Transform860.addChild(&Shape861);

HAnimSegment855.addChild(&Transform860);

HAnimJoint854.addChildren(&HAnimSegment855);

HAnimJoint& HAnimJoint862 =  HAnimJoint();
HAnimJoint862.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint862.setDEF(CString("Joe_l_metacarpophalangeal_4"));
HAnimJoint862.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint862.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint862.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimSegment& HAnimSegment863 =  HAnimSegment();
HAnimSegment863.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment863.setDEF(CString("Joe_l_carpal_proximal_phalanx_4"));
Shape& Shape864 =  Shape();
Appearance& Appearance865 =  Appearance();
Appearance865.setUSE(CString("SegmentLine"));
Shape864.addChild(&Appearance865);

IndexedLineSet& IndexedLineSet866 =  IndexedLineSet();
IndexedLineSet866.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate867 =  Coordinate();
Coordinate867.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
IndexedLineSet866.setCoord(&Coordinate867);

Shape864.setGeometry(&IndexedLineSet866);

HAnimSegment863.addChild(&Shape864);

Transform& Transform868 =  Transform();
Transform868.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Shape& Shape869 =  Shape();
Shape869.setUSE(CString("jointbox"));
Transform868.addChild(&Shape869);

HAnimSegment863.addChild(&Transform868);

HAnimJoint862.addChildren(&HAnimSegment863);

HAnimJoint& HAnimJoint870 =  HAnimJoint();
HAnimJoint870.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint870.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimJoint870.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint870.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint870.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment871 =  HAnimSegment();
HAnimSegment871.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment871.setDEF(CString("Joe_l_carpal_middle_phalanx_4"));
Shape& Shape872 =  Shape();
Appearance& Appearance873 =  Appearance();
Appearance873.setUSE(CString("SegmentLine"));
Shape872.addChild(&Appearance873);

IndexedLineSet& IndexedLineSet874 =  IndexedLineSet();
IndexedLineSet874.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate875 =  Coordinate();
Coordinate875.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
IndexedLineSet874.setCoord(&Coordinate875);

Shape872.setGeometry(&IndexedLineSet874);

HAnimSegment871.addChild(&Shape872);

Transform& Transform876 =  Transform();
Transform876.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Shape& Shape877 =  Shape();
Shape877.setUSE(CString("jointbox"));
Transform876.addChild(&Shape877);

HAnimSegment871.addChild(&Transform876);

HAnimJoint870.addChildren(&HAnimSegment871);

HAnimJoint& HAnimJoint878 =  HAnimJoint();
HAnimJoint878.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint878.setDEF(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimJoint878.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint878.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint878.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment879 =  HAnimSegment();
HAnimSegment879.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSegment879.setDEF(CString("Joe_l_carpal_distal_phalanx_4"));
Shape& Shape880 =  Shape();
Appearance& Appearance881 =  Appearance();
Appearance881.setUSE(CString("SegmentLine"));
Shape880.addChild(&Appearance881);

IndexedLineSet& IndexedLineSet882 =  IndexedLineSet();
IndexedLineSet882.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate883 =  Coordinate();
Coordinate883.setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
IndexedLineSet882.setCoord(&Coordinate883);

Shape880.setGeometry(&IndexedLineSet882);

HAnimSegment879.addChild(&Shape880);

Transform& Transform884 =  Transform();
Transform884.setTranslation(new float[]{0.1983,0.7045,-0.0767});
Shape& Shape885 =  Shape();
Shape885.setUSE(CString("jointbox"));
Transform884.addChild(&Shape885);

HAnimSegment879.addChild(&Transform884);

HAnimSite& HAnimSite886 =  HAnimSite();
HAnimSite886.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite886.setDEF(CString("Joe_l_carpal_distal_phalanx_4_tip"));
HAnimSite886.setTranslation(new float[]{0.2035,0.675,-0.0756});
Shape& Shape887 =  Shape();
Shape887.setUSE(CString("sitebox"));
HAnimSite886.addChild(&Shape887);

HAnimSegment879.addChild(&HAnimSite886);

HAnimJoint878.addChildren(&HAnimSegment879);

HAnimJoint870.addChildren(&HAnimJoint878);

HAnimJoint862.addChildren(&HAnimJoint870);

HAnimJoint854.addChildren(&HAnimJoint862);

HAnimJoint744.addChildren(&HAnimJoint854);

HAnimJoint& HAnimJoint888 =  HAnimJoint();
HAnimJoint888.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint888.setDEF(CString("Joe_l_carpometacarpal_5"));
HAnimJoint888.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint888.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint888.setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
HAnimSegment& HAnimSegment889 =  HAnimSegment();
HAnimSegment889.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment889.setDEF(CString("Joe_l_metacarpal_5"));
Shape& Shape890 =  Shape();
Appearance& Appearance891 =  Appearance();
Appearance891.setUSE(CString("SegmentLine"));
Shape890.addChild(&Appearance891);

IndexedLineSet& IndexedLineSet892 =  IndexedLineSet();
IndexedLineSet892.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate893 =  Coordinate();
Coordinate893.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
IndexedLineSet892.setCoord(&Coordinate893);

Shape890.setGeometry(&IndexedLineSet892);

HAnimSegment889.addChild(&Shape890);

Transform& Transform894 =  Transform();
Transform894.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Shape& Shape895 =  Shape();
Shape895.setUSE(CString("jointbox"));
Transform894.addChild(&Shape895);

HAnimSegment889.addChild(&Transform894);

HAnimJoint888.addChildren(&HAnimSegment889);

HAnimJoint& HAnimJoint896 =  HAnimJoint();
HAnimJoint896.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint896.setDEF(CString("Joe_l_metacarpophalangeal_5"));
HAnimJoint896.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint896.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint896.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimSegment& HAnimSegment897 =  HAnimSegment();
HAnimSegment897.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment897.setDEF(CString("Joe_l_carpal_proximal_phalanx_5"));
Shape& Shape898 =  Shape();
Appearance& Appearance899 =  Appearance();
Appearance899.setUSE(CString("SegmentLine"));
Shape898.addChild(&Appearance899);

IndexedLineSet& IndexedLineSet900 =  IndexedLineSet();
IndexedLineSet900.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate901 =  Coordinate();
Coordinate901.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
IndexedLineSet900.setCoord(&Coordinate901);

Shape898.setGeometry(&IndexedLineSet900);

HAnimSegment897.addChild(&Shape898);

Transform& Transform902 =  Transform();
Transform902.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Shape& Shape903 =  Shape();
Shape903.setUSE(CString("jointbox"));
Transform902.addChild(&Shape903);

HAnimSegment897.addChild(&Transform902);

HAnimJoint896.addChildren(&HAnimSegment897);

HAnimJoint& HAnimJoint904 =  HAnimJoint();
HAnimJoint904.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint904.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimJoint904.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint904.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint904.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment905 =  HAnimSegment();
HAnimSegment905.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment905.setDEF(CString("Joe_l_carpal_middle_phalanx_5"));
Transform& Transform906 =  Transform();
Transform906.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Shape& Shape907 =  Shape();
Shape907.setUSE(CString("jointbox"));
Transform906.addChild(&Shape907);

HAnimSegment905.addChild(&Transform906);

Shape& Shape908 =  Shape();
Appearance& Appearance909 =  Appearance();
Appearance909.setUSE(CString("SegmentLine"));
Shape908.addChild(&Appearance909);

IndexedLineSet& IndexedLineSet910 =  IndexedLineSet();
IndexedLineSet910.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate911 =  Coordinate();
Coordinate911.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
IndexedLineSet910.setCoord(&Coordinate911);

Shape908.setGeometry(&IndexedLineSet910);

HAnimSegment905.addChild(&Shape908);

HAnimJoint904.addChildren(&HAnimSegment905);

HAnimJoint& HAnimJoint912 =  HAnimJoint();
HAnimJoint912.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint912.setDEF(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimJoint912.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint912.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint912.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment913 =  HAnimSegment();
HAnimSegment913.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSegment913.setDEF(CString("Joe_l_carpal_distal_phalanx_5"));
Shape& Shape914 =  Shape();
Appearance& Appearance915 =  Appearance();
Appearance915.setUSE(CString("SegmentLine"));
Shape914.addChild(&Appearance915);

IndexedLineSet& IndexedLineSet916 =  IndexedLineSet();
IndexedLineSet916.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate917 =  Coordinate();
Coordinate917.setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
IndexedLineSet916.setCoord(&Coordinate917);

Shape914.setGeometry(&IndexedLineSet916);

HAnimSegment913.addChild(&Shape914);

Transform& Transform918 =  Transform();
Transform918.setTranslation(new float[]{0.1948,0.7277,-0.1017});
Shape& Shape919 =  Shape();
Shape919.setUSE(CString("jointbox"));
Transform918.addChild(&Shape919);

HAnimSegment913.addChild(&Transform918);

HAnimSite& HAnimSite920 =  HAnimSite();
HAnimSite920.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite920.setDEF(CString("Joe_l_carpal_distal_phalanx_5_tip"));
HAnimSite920.setTranslation(new float[]{0.2014,0.7009,-0.1012});
Shape& Shape921 =  Shape();
Shape921.setUSE(CString("sitebox"));
HAnimSite920.addChild(&Shape921);

HAnimSegment913.addChild(&HAnimSite920);

HAnimJoint912.addChildren(&HAnimSegment913);

HAnimJoint904.addChildren(&HAnimJoint912);

HAnimJoint896.addChildren(&HAnimJoint904);

HAnimJoint888.addChildren(&HAnimJoint896);

HAnimJoint744.addChildren(&HAnimJoint888);

HAnimJoint722.addChildren(&HAnimJoint744);

HAnimJoint698.addChildren(&HAnimJoint722);

HAnimJoint682.addChildren(&HAnimJoint698);

HAnimJoint672.addChildren(&HAnimJoint682);

HAnimJoint556.addChildren(&HAnimJoint672);

HAnimJoint& HAnimJoint922 =  HAnimJoint();
HAnimJoint922.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint922.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint922.setCenter(new float[]{-0.03,1.46,0.0});
HAnimJoint922.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint922.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimSegment& HAnimSegment923 =  HAnimSegment();
HAnimSegment923.X3DNode::setName(CString("r_clavicle"));
HAnimSegment923.setDEF(CString("Joe_r_clavicle"));
Shape& Shape924 =  Shape();
Appearance& Appearance925 =  Appearance();
Appearance925.setUSE(CString("SegmentLine"));
Shape924.addChild(&Appearance925);

IndexedLineSet& IndexedLineSet926 =  IndexedLineSet();
IndexedLineSet926.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate927 =  Coordinate();
Coordinate927.setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
IndexedLineSet926.setCoord(&Coordinate927);

Shape924.setGeometry(&IndexedLineSet926);

HAnimSegment923.addChild(&Shape924);

Transform& Transform928 =  Transform();
Transform928.setTranslation(new float[]{-0.03,1.46,0.02});
Shape& Shape929 =  Shape();
Shape929.setUSE(CString("jointbox"));
Transform928.addChild(&Shape929);

HAnimSegment923.addChild(&Transform928);

HAnimSite& HAnimSite930 =  HAnimSite();
HAnimSite930.X3DNode::setName(CString("r_clavicle_pt"));
HAnimSite930.setDEF(CString("Joe_r_clavicle_pt"));
HAnimSite930.setTranslation(new float[]{-0.03,1.46,0.035});
Shape& Shape931 =  Shape();
Shape931.setUSE(CString("sitebox"));
HAnimSite930.addChild(&Shape931);

HAnimSegment923.addChild(&HAnimSite930);

HAnimJoint922.addChildren(&HAnimSegment923);

HAnimJoint& HAnimJoint932 =  HAnimJoint();
HAnimJoint932.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint932.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint932.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint932.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint932.setSkinCoordWeight(new float[]{1.0,0.9}, 2);
HAnimSegment& HAnimSegment933 =  HAnimSegment();
HAnimSegment933.X3DNode::setName(CString("r_scapula"));
HAnimSegment933.setDEF(CString("Joe_r_scapula"));
Shape& Shape934 =  Shape();
Appearance& Appearance935 =  Appearance();
Appearance935.setUSE(CString("SegmentLine"));
Shape934.addChild(&Appearance935);

IndexedLineSet& IndexedLineSet936 =  IndexedLineSet();
IndexedLineSet936.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate937 =  Coordinate();
Coordinate937.setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
IndexedLineSet936.setCoord(&Coordinate937);

Shape934.setGeometry(&IndexedLineSet936);

HAnimSegment933.addChild(&Shape934);

Transform& Transform938 =  Transform();
Transform938.setTranslation(new float[]{-0.09,1.41,-0.09});
Shape& Shape939 =  Shape();
Shape939.setUSE(CString("jointbox"));
Transform938.addChild(&Shape939);

HAnimSegment933.addChild(&Transform938);

Transform& Transform940 =  Transform();
Transform940.setTranslation(new float[]{-0.11,1.427,-0.1375});
Shape& Shape941 =  Shape();
Shape941.setUSE(CString("skinsphere"));
Transform940.addChild(&Shape941);

HAnimSegment933.addChild(&Transform940);

HAnimSite& HAnimSite942 =  HAnimSite();
HAnimSite942.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite942.setDEF(CString("Joe_r_acromion_pt"));
HAnimSite942.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape943 =  Shape();
Shape943.setUSE(CString("sitebox"));
HAnimSite942.addChild(&Shape943);

HAnimSegment933.addChild(&HAnimSite942);

HAnimSite& HAnimSite944 =  HAnimSite();
HAnimSite944.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite944.setDEF(CString("Joe_r_axilla_proximal_pt"));
HAnimSite944.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape945 =  Shape();
Shape945.setUSE(CString("sitebox"));
HAnimSite944.addChild(&Shape945);

HAnimSegment933.addChild(&HAnimSite944);

HAnimSite& HAnimSite946 =  HAnimSite();
HAnimSite946.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite946.setDEF(CString("Joe_r_axilla_distal_pt"));
HAnimSite946.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape947 =  Shape();
Shape947.setUSE(CString("sitebox"));
HAnimSite946.addChild(&Shape947);

HAnimSegment933.addChild(&HAnimSite946);

HAnimJoint932.addChildren(&HAnimSegment933);

HAnimJoint& HAnimJoint948 =  HAnimJoint();
HAnimJoint948.X3DNode::setName(CString("r_shoulder"));
HAnimJoint948.setDEF(CString("Joe_r_shoulder"));
HAnimJoint948.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint948.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint948.setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
HAnimSegment& HAnimSegment949 =  HAnimSegment();
HAnimSegment949.X3DNode::setName(CString("r_upperarm"));
HAnimSegment949.setDEF(CString("Joe_r_upperarm"));
Transform& Transform950 =  Transform();
Transform950.setTranslation(new float[]{-0.2,1.44,-0.04});
Shape& Shape951 =  Shape();
Shape951.setUSE(CString("jointbox"));
Transform950.addChild(&Shape951);

HAnimSegment949.addChild(&Transform950);

Shape& Shape952 =  Shape();
Appearance& Appearance953 =  Appearance();
Appearance953.setUSE(CString("SegmentLine"));
Shape952.addChild(&Appearance953);

IndexedLineSet& IndexedLineSet954 =  IndexedLineSet();
IndexedLineSet954.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate955 =  Coordinate();
Coordinate955.setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
IndexedLineSet954.setCoord(&Coordinate955);

Shape952.setGeometry(&IndexedLineSet954);

HAnimSegment949.addChild(&Shape952);

Transform& Transform956 =  Transform();
Transform956.setTranslation(new float[]{-0.178,1.4825,-0.0625});
Shape& Shape957 =  Shape();
Shape957.setUSE(CString("skinsphere"));
Transform956.addChild(&Shape957);

HAnimSegment949.addChild(&Transform956);

Transform& Transform958 =  Transform();
Transform958.setTranslation(new float[]{-0.17,1.38,0.007});
Shape& Shape959 =  Shape();
Shape959.setUSE(CString("skinsphere"));
Transform958.addChild(&Shape959);

HAnimSegment949.addChild(&Transform958);

Transform& Transform960 =  Transform();
Transform960.setTranslation(new float[]{-0.16,1.38,-0.127});
Shape& Shape961 =  Shape();
Shape961.setUSE(CString("skinsphere"));
Transform960.addChild(&Shape961);

HAnimSegment949.addChild(&Transform960);

Transform& Transform962 =  Transform();
Transform962.setTranslation(new float[]{-0.235,1.42,-0.0625});
Shape& Shape963 =  Shape();
Shape963.setUSE(CString("skinsphere"));
Transform962.addChild(&Shape963);

HAnimSegment949.addChild(&Transform962);

Transform& Transform964 =  Transform();
Transform964.setTranslation(new float[]{-0.23,1.235,-0.04});
Shape& Shape965 =  Shape();
Shape965.setUSE(CString("skinsphere"));
Transform964.addChild(&Shape965);

HAnimSegment949.addChild(&Transform964);

Transform& Transform966 =  Transform();
Transform966.setTranslation(new float[]{-0.16,1.23,-0.04});
Shape& Shape967 =  Shape();
Shape967.setUSE(CString("skinsphere"));
Transform966.addChild(&Shape967);

HAnimSegment949.addChild(&Transform966);

Transform& Transform968 =  Transform();
Transform968.setTranslation(new float[]{-0.2,1.23,-0.105});
Shape& Shape969 =  Shape();
Shape969.setUSE(CString("skinsphere"));
Transform968.addChild(&Shape969);

HAnimSegment949.addChild(&Transform968);

Transform& Transform970 =  Transform();
Transform970.setTranslation(new float[]{-0.2,1.235,0.02});
Shape& Shape971 =  Shape();
Shape971.setUSE(CString("skinsphere"));
Transform970.addChild(&Shape971);

HAnimSegment949.addChild(&Transform970);

HAnimSite& HAnimSite972 =  HAnimSite();
HAnimSite972.X3DNode::setName(CString("r_humeral_medial_epicondyle_pt"));
HAnimSite972.setDEF(CString("Joe_r_humeral_medial_epicondyle_pt"));
HAnimSite972.setTranslation(new float[]{-0.165,1.1388,-0.04});
Shape& Shape973 =  Shape();
Shape973.setUSE(CString("sitebox"));
HAnimSite972.addChild(&Shape973);

HAnimSegment949.addChild(&HAnimSite972);

HAnimSite& HAnimSite974 =  HAnimSite();
HAnimSite974.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite974.setDEF(CString("Joe_r_radiale_pt"));
HAnimSite974.setTranslation(new float[]{-0.23,1.133,-0.055});
Shape& Shape975 =  Shape();
Shape975.setUSE(CString("sitebox"));
HAnimSite974.addChild(&Shape975);

HAnimSegment949.addChild(&HAnimSite974);

HAnimSite& HAnimSite976 =  HAnimSite();
HAnimSite976.X3DNode::setName(CString("r_humeral_lateral_epicondyle_pt"));
HAnimSite976.setDEF(CString("Joe_r_humeral_lateral_epicondyle_pt"));
HAnimSite976.setTranslation(new float[]{-0.244,1.1388,-0.04});
Shape& Shape977 =  Shape();
Shape977.setUSE(CString("sitebox"));
HAnimSite976.addChild(&Shape977);

HAnimSegment949.addChild(&HAnimSite976);

HAnimJoint948.addChildren(&HAnimSegment949);

HAnimJoint& HAnimJoint978 =  HAnimJoint();
HAnimJoint978.X3DNode::setName(CString("r_elbow"));
HAnimJoint978.setDEF(CString("Joe_r_elbow"));
HAnimJoint978.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint978.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint978.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
HAnimSegment& HAnimSegment979 =  HAnimSegment();
HAnimSegment979.X3DNode::setName(CString("r_forearm"));
HAnimSegment979.setDEF(CString("Joe_r_forearm"));
Shape& Shape980 =  Shape();
Appearance& Appearance981 =  Appearance();
Appearance981.setUSE(CString("SegmentLine"));
Shape980.addChild(&Appearance981);

IndexedLineSet& IndexedLineSet982 =  IndexedLineSet();
IndexedLineSet982.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate983 =  Coordinate();
Coordinate983.setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
IndexedLineSet982.setCoord(&Coordinate983);

Shape980.setGeometry(&IndexedLineSet982);

HAnimSegment979.addChild(&Shape980);

Transform& Transform984 =  Transform();
Transform984.setTranslation(new float[]{-0.2,1.1388,-0.04});
Shape& Shape985 =  Shape();
Shape985.setUSE(CString("jointbox"));
Transform984.addChild(&Shape985);

HAnimSegment979.addChild(&Transform984);

Transform& Transform986 =  Transform();
Transform986.setTranslation(new float[]{-0.2,1.1388,0.013});
Shape& Shape987 =  Shape();
Shape987.setUSE(CString("skinsphere"));
Transform986.addChild(&Shape987);

HAnimSegment979.addChild(&Transform986);

Transform& Transform988 =  Transform();
Transform988.setTranslation(new float[]{-0.225,1.0,-0.01});
Shape& Shape989 =  Shape();
Shape989.setUSE(CString("skinsphere"));
Transform988.addChild(&Shape989);

HAnimSegment979.addChild(&Transform988);

Transform& Transform990 =  Transform();
Transform990.setTranslation(new float[]{-0.225,1.0,-0.07});
Shape& Shape991 =  Shape();
Shape991.setUSE(CString("skinsphere"));
Transform990.addChild(&Shape991);

HAnimSegment979.addChild(&Transform990);

Transform& Transform992 =  Transform();
Transform992.setTranslation(new float[]{-0.185,1.0,-0.01});
Shape& Shape993 =  Shape();
Shape993.setUSE(CString("skinsphere"));
Transform992.addChild(&Shape993);

HAnimSegment979.addChild(&Transform992);

Transform& Transform994 =  Transform();
Transform994.setTranslation(new float[]{-0.185,1.0,-0.07});
Shape& Shape995 =  Shape();
Shape995.setUSE(CString("skinsphere"));
Transform994.addChild(&Shape995);

HAnimSegment979.addChild(&Transform994);

HAnimSite& HAnimSite996 =  HAnimSite();
HAnimSite996.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite996.setDEF(CString("Joe_r_radial_styloid_pt"));
HAnimSite996.setTranslation(new float[]{-0.2,0.9,-0.015});
Shape& Shape997 =  Shape();
Shape997.setUSE(CString("sitebox"));
HAnimSite996.addChild(&Shape997);

HAnimSegment979.addChild(&HAnimSite996);

HAnimSite& HAnimSite998 =  HAnimSite();
HAnimSite998.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite998.setDEF(CString("Joe_r_olecranon_pt"));
HAnimSite998.setTranslation(new float[]{-0.2,1.1388,-0.08});
Shape& Shape999 =  Shape();
Shape999.setUSE(CString("sitebox"));
HAnimSite998.addChild(&Shape999);

HAnimSegment979.addChild(&HAnimSite998);

HAnimJoint978.addChildren(&HAnimSegment979);

HAnimJoint& HAnimJoint1000 =  HAnimJoint();
HAnimJoint1000.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1000.setDEF(CString("Joe_r_radiocarpal"));
HAnimJoint1000.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint1000.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint1000.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimSegment& HAnimSegment1001 =  HAnimSegment();
HAnimSegment1001.X3DNode::setName(CString("r_carpal"));
HAnimSegment1001.setDEF(CString("Joe_r_carpal"));
Shape& Shape1002 =  Shape();
Appearance& Appearance1003 =  Appearance();
Appearance1003.setUSE(CString("SegmentLine"));
Shape1002.addChild(&Appearance1003);

IndexedLineSet& IndexedLineSet1004 =  IndexedLineSet();
IndexedLineSet1004.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
Coordinate& Coordinate1005 =  Coordinate();
Coordinate1005.setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0.0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
IndexedLineSet1004.setCoord(&Coordinate1005);

Shape1002.setGeometry(&IndexedLineSet1004);

HAnimSegment1001.addChild(&Shape1002);

Transform& Transform1006 =  Transform();
Transform1006.setTranslation(new float[]{-0.2,0.89,-0.04});
Shape& Shape1007 =  Shape();
Shape1007.setUSE(CString("jointbox"));
Transform1006.addChild(&Shape1007);

HAnimSegment1001.addChild(&Transform1006);

HAnimSite& HAnimSite1008 =  HAnimSite();
HAnimSite1008.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1008.setDEF(CString("Joe_r_ulnar_styloid_pt"));
HAnimSite1008.setTranslation(new float[]{-0.2,0.9,-0.085});
Shape& Shape1009 =  Shape();
Shape1009.setUSE(CString("sitebox"));
HAnimSite1008.addChild(&Shape1009);

HAnimSegment1001.addChild(&HAnimSite1008);

HAnimJoint1000.addChildren(&HAnimSegment1001);

HAnimJoint& HAnimJoint1010 =  HAnimJoint();
HAnimJoint1010.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1010.setDEF(CString("Joe_r_carpometacarpal_1"));
HAnimJoint1010.setCenter(new float[]{-0.2,0.85,0.0});
HAnimJoint1010.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint1010.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment1011 =  HAnimSegment();
HAnimSegment1011.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1011.setDEF(CString("Joe_r_metacarpal_1"));
Shape& Shape1012 =  Shape();
Appearance& Appearance1013 =  Appearance();
Appearance1013.setUSE(CString("SegmentLine"));
Shape1012.addChild(&Appearance1013);

IndexedLineSet& IndexedLineSet1014 =  IndexedLineSet();
IndexedLineSet1014.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1015 =  Coordinate();
Coordinate1015.setPoint(new float[]{-0.2,0.85,0.0,-0.2,0.82,0.03}, 6);
IndexedLineSet1014.setCoord(&Coordinate1015);

Shape1012.setGeometry(&IndexedLineSet1014);

HAnimSegment1011.addChild(&Shape1012);

Transform& Transform1016 =  Transform();
Transform1016.setTranslation(new float[]{-0.2,0.85,0.0});
Shape& Shape1017 =  Shape();
Shape1017.setUSE(CString("jointbox"));
Transform1016.addChild(&Shape1017);

HAnimSegment1011.addChild(&Transform1016);

HAnimJoint1010.addChildren(&HAnimSegment1011);

HAnimJoint& HAnimJoint1018 =  HAnimJoint();
HAnimJoint1018.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1018.setDEF(CString("Joe_r_metacarpophalangeal_1"));
HAnimJoint1018.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint1018.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint1018.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
HAnimSegment& HAnimSegment1019 =  HAnimSegment();
HAnimSegment1019.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1019.setDEF(CString("Joe_r_carpal_proximal_phalanx_1"));
Shape& Shape1020 =  Shape();
Appearance& Appearance1021 =  Appearance();
Appearance1021.setUSE(CString("SegmentLine"));
Shape1020.addChild(&Appearance1021);

IndexedLineSet& IndexedLineSet1022 =  IndexedLineSet();
IndexedLineSet1022.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1023 =  Coordinate();
Coordinate1023.setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
IndexedLineSet1022.setCoord(&Coordinate1023);

Shape1020.setGeometry(&IndexedLineSet1022);

HAnimSegment1019.addChild(&Shape1020);

Transform& Transform1024 =  Transform();
Transform1024.setTranslation(new float[]{-0.2,0.82,0.03});
Shape& Shape1025 =  Shape();
Shape1025.setUSE(CString("jointbox"));
Transform1024.addChild(&Shape1025);

HAnimSegment1019.addChild(&Transform1024);

HAnimJoint1018.addChildren(&HAnimSegment1019);

HAnimJoint& HAnimJoint1026 =  HAnimJoint();
HAnimJoint1026.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1026.setDEF(CString("Joe_r_carpal_interphalangeal_1"));
HAnimJoint1026.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint1026.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint1026.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment1027 =  HAnimSegment();
HAnimSegment1027.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimSegment1027.setDEF(CString("Joe_r_carpal_distal_phalanx_1"));
Shape& Shape1028 =  Shape();
Appearance& Appearance1029 =  Appearance();
Appearance1029.setUSE(CString("SegmentLine"));
Shape1028.addChild(&Appearance1029);

IndexedLineSet& IndexedLineSet1030 =  IndexedLineSet();
IndexedLineSet1030.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1031 =  Coordinate();
Coordinate1031.setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
IndexedLineSet1030.setCoord(&Coordinate1031);

Shape1028.setGeometry(&IndexedLineSet1030);

HAnimSegment1027.addChild(&Shape1028);

Transform& Transform1032 =  Transform();
Transform1032.setDEF(CString("Thumbnail"));
Transform1032.setTranslation(new float[]{-0.2,0.785,0.075});
Shape& Shape1033 =  Shape();
Shape1033.setUSE(CString("skinsphere"));
Transform1032.addChild(&Shape1033);

HAnimSegment1027.addChild(&Transform1032);

Transform& Transform1034 =  Transform();
Transform1034.setTranslation(new float[]{-0.2,0.8,0.05});
Shape& Shape1035 =  Shape();
Shape1035.setUSE(CString("jointbox"));
Transform1034.addChild(&Shape1035);

HAnimSegment1027.addChild(&Transform1034);

HAnimSite& HAnimSite1036 =  HAnimSite();
HAnimSite1036.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1036.setDEF(CString("Joe_r_carpal_distal_phalanx_1_tip"));
HAnimSite1036.setTranslation(new float[]{-0.2,0.78,0.07});
Shape& Shape1037 =  Shape();
Shape1037.setUSE(CString("sitebox"));
HAnimSite1036.addChild(&Shape1037);

HAnimSegment1027.addChild(&HAnimSite1036);

HAnimJoint1026.addChildren(&HAnimSegment1027);

HAnimJoint1018.addChildren(&HAnimJoint1026);

HAnimJoint1010.addChildren(&HAnimJoint1018);

HAnimJoint1000.addChildren(&HAnimJoint1010);

HAnimJoint& HAnimJoint1038 =  HAnimJoint();
HAnimJoint1038.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1038.setDEF(CString("Joe_r_carpometacarpal_2"));
HAnimJoint1038.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint1038.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint1038.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment1039 =  HAnimSegment();
HAnimSegment1039.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1039.setDEF(CString("Joe_r_metacarpal_2"));
Shape& Shape1040 =  Shape();
Appearance& Appearance1041 =  Appearance();
Appearance1041.setUSE(CString("SegmentLine"));
Shape1040.addChild(&Appearance1041);

IndexedLineSet& IndexedLineSet1042 =  IndexedLineSet();
IndexedLineSet1042.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1043 =  Coordinate();
Coordinate1043.setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
IndexedLineSet1042.setCoord(&Coordinate1043);

Shape1040.setGeometry(&IndexedLineSet1042);

HAnimSegment1039.addChild(&Shape1040);

Transform& Transform1044 =  Transform();
Transform1044.setTranslation(new float[]{-0.2,0.84,-0.015});
Shape& Shape1045 =  Shape();
Shape1045.setUSE(CString("jointbox"));
Transform1044.addChild(&Shape1045);

HAnimSegment1039.addChild(&Transform1044);

HAnimSite& HAnimSite1046 =  HAnimSite();
HAnimSite1046.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1046.setDEF(CString("Joe_r_metacarpal_phalanx_2_pt"));
HAnimSite1046.setTranslation(new float[]{-0.2,0.793,-0.005});
Shape& Shape1047 =  Shape();
Shape1047.setUSE(CString("sitebox"));
HAnimSite1046.addChild(&Shape1047);

HAnimSegment1039.addChild(&HAnimSite1046);

HAnimJoint1038.addChildren(&HAnimSegment1039);

HAnimJoint& HAnimJoint1048 =  HAnimJoint();
HAnimJoint1048.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1048.setDEF(CString("Joe_r_metacarpophalangeal_2"));
HAnimJoint1048.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint1048.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint1048.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
HAnimSegment& HAnimSegment1049 =  HAnimSegment();
HAnimSegment1049.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1049.setDEF(CString("Joe_r_carpal_proximal_phalanx_2"));
Shape& Shape1050 =  Shape();
Appearance& Appearance1051 =  Appearance();
Appearance1051.setUSE(CString("SegmentLine"));
Shape1050.addChild(&Appearance1051);

IndexedLineSet& IndexedLineSet1052 =  IndexedLineSet();
IndexedLineSet1052.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1053 =  Coordinate();
Coordinate1053.setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
IndexedLineSet1052.setCoord(&Coordinate1053);

Shape1050.setGeometry(&IndexedLineSet1052);

HAnimSegment1049.addChild(&Shape1050);

Transform& Transform1054 =  Transform();
Transform1054.setTranslation(new float[]{-0.2,0.793,-0.015});
Shape& Shape1055 =  Shape();
Shape1055.setUSE(CString("jointbox"));
Transform1054.addChild(&Shape1055);

HAnimSegment1049.addChild(&Transform1054);

HAnimJoint1048.addChildren(&HAnimSegment1049);

HAnimJoint& HAnimJoint1056 =  HAnimJoint();
HAnimJoint1056.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1056.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1056.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint1056.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint1056.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment1057 =  HAnimSegment();
HAnimSegment1057.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1057.setDEF(CString("Joe_r_carpal_middle_phalanx_2"));
Shape& Shape1058 =  Shape();
Appearance& Appearance1059 =  Appearance();
Appearance1059.setUSE(CString("SegmentLine"));
Shape1058.addChild(&Appearance1059);

IndexedLineSet& IndexedLineSet1060 =  IndexedLineSet();
IndexedLineSet1060.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1061 =  Coordinate();
Coordinate1061.setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
IndexedLineSet1060.setCoord(&Coordinate1061);

Shape1058.setGeometry(&IndexedLineSet1060);

HAnimSegment1057.addChild(&Shape1058);

Transform& Transform1062 =  Transform();
Transform1062.setTranslation(new float[]{-0.2,0.745,-0.015});
Shape& Shape1063 =  Shape();
Shape1063.setUSE(CString("jointbox"));
Transform1062.addChild(&Shape1063);

HAnimSegment1057.addChild(&Transform1062);

HAnimJoint1056.addChildren(&HAnimSegment1057);

HAnimJoint& HAnimJoint1064 =  HAnimJoint();
HAnimJoint1064.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1064.setDEF(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimJoint1064.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint1064.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint1064.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment1065 =  HAnimSegment();
HAnimSegment1065.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimSegment1065.setDEF(CString("Joe_r_carpal_distal_phalanx_2"));
Shape& Shape1066 =  Shape();
Appearance& Appearance1067 =  Appearance();
Appearance1067.setUSE(CString("SegmentLine"));
Shape1066.addChild(&Appearance1067);

IndexedLineSet& IndexedLineSet1068 =  IndexedLineSet();
IndexedLineSet1068.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1069 =  Coordinate();
Coordinate1069.setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
IndexedLineSet1068.setCoord(&Coordinate1069);

Shape1066.setGeometry(&IndexedLineSet1068);

HAnimSegment1065.addChild(&Shape1066);

Transform& Transform1070 =  Transform();
Transform1070.setTranslation(new float[]{-0.2,0.72,-0.015});
Shape& Shape1071 =  Shape();
Shape1071.setUSE(CString("jointbox"));
Transform1070.addChild(&Shape1071);

HAnimSegment1065.addChild(&Transform1070);

HAnimSite& HAnimSite1072 =  HAnimSite();
HAnimSite1072.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1072.setDEF(CString("Joe_r_carpal_distal_phalanx_2_tip"));
HAnimSite1072.setTranslation(new float[]{-0.2,0.695,-0.015});
Shape& Shape1073 =  Shape();
Shape1073.setUSE(CString("sitebox"));
HAnimSite1072.addChild(&Shape1073);

HAnimSegment1065.addChild(&HAnimSite1072);

HAnimJoint1064.addChildren(&HAnimSegment1065);

HAnimJoint1056.addChildren(&HAnimJoint1064);

HAnimJoint1048.addChildren(&HAnimJoint1056);

HAnimJoint1038.addChildren(&HAnimJoint1048);

HAnimJoint1000.addChildren(&HAnimJoint1038);

HAnimJoint& HAnimJoint1074 =  HAnimJoint();
HAnimJoint1074.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1074.setDEF(CString("Joe_r_carpometacarpal_3"));
HAnimJoint1074.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint1074.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint1074.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment1075 =  HAnimSegment();
HAnimSegment1075.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1075.setDEF(CString("Joe_r_metacarpal_3"));
Shape& Shape1076 =  Shape();
Appearance& Appearance1077 =  Appearance();
Appearance1077.setUSE(CString("SegmentLine"));
Shape1076.addChild(&Appearance1077);

IndexedLineSet& IndexedLineSet1078 =  IndexedLineSet();
IndexedLineSet1078.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1079 =  Coordinate();
Coordinate1079.setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
IndexedLineSet1078.setCoord(&Coordinate1079);

Shape1076.setGeometry(&IndexedLineSet1078);

HAnimSegment1075.addChild(&Shape1076);

Transform& Transform1080 =  Transform();
Transform1080.setTranslation(new float[]{-0.2,0.835,-0.04});
Shape& Shape1081 =  Shape();
Shape1081.setUSE(CString("jointbox"));
Transform1080.addChild(&Shape1081);

HAnimSegment1075.addChild(&Transform1080);

HAnimJoint1074.addChildren(&HAnimSegment1075);

HAnimJoint& HAnimJoint1082 =  HAnimJoint();
HAnimJoint1082.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1082.setDEF(CString("Joe_r_metacarpophalangeal_3"));
HAnimJoint1082.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint1082.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint1082.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1083 =  HAnimSegment();
HAnimSegment1083.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1083.setDEF(CString("Joe_r_carpal_proximal_phalanx_3"));
Shape& Shape1084 =  Shape();
Appearance& Appearance1085 =  Appearance();
Appearance1085.setUSE(CString("SegmentLine"));
Shape1084.addChild(&Appearance1085);

IndexedLineSet& IndexedLineSet1086 =  IndexedLineSet();
IndexedLineSet1086.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1087 =  Coordinate();
Coordinate1087.setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
IndexedLineSet1086.setCoord(&Coordinate1087);

Shape1084.setGeometry(&IndexedLineSet1086);

HAnimSegment1083.addChild(&Shape1084);

Transform& Transform1088 =  Transform();
Transform1088.setTranslation(new float[]{-0.2,0.788,-0.04});
Shape& Shape1089 =  Shape();
Shape1089.setUSE(CString("jointbox"));
Transform1088.addChild(&Shape1089);

HAnimSegment1083.addChild(&Transform1088);

HAnimJoint1082.addChildren(&HAnimSegment1083);

HAnimJoint& HAnimJoint1090 =  HAnimJoint();
HAnimJoint1090.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1090.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1090.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint1090.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint1090.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment1091 =  HAnimSegment();
HAnimSegment1091.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1091.setDEF(CString("Joe_r_carpal_middle_phalanx_3"));
Shape& Shape1092 =  Shape();
Appearance& Appearance1093 =  Appearance();
Appearance1093.setUSE(CString("SegmentLine"));
Shape1092.addChild(&Appearance1093);

IndexedLineSet& IndexedLineSet1094 =  IndexedLineSet();
IndexedLineSet1094.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1095 =  Coordinate();
Coordinate1095.setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
IndexedLineSet1094.setCoord(&Coordinate1095);

Shape1092.setGeometry(&IndexedLineSet1094);

HAnimSegment1091.addChild(&Shape1092);

Transform& Transform1096 =  Transform();
Transform1096.setTranslation(new float[]{-0.2,0.74,-0.04});
Shape& Shape1097 =  Shape();
Shape1097.setUSE(CString("jointbox"));
Transform1096.addChild(&Shape1097);

HAnimSegment1091.addChild(&Transform1096);

HAnimJoint1090.addChildren(&HAnimSegment1091);

HAnimJoint& HAnimJoint1098 =  HAnimJoint();
HAnimJoint1098.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1098.setDEF(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimJoint1098.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint1098.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint1098.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment1099 =  HAnimSegment();
HAnimSegment1099.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimSegment1099.setDEF(CString("Joe_r_carpal_distal_phalanx_3"));
Shape& Shape1100 =  Shape();
Appearance& Appearance1101 =  Appearance();
Appearance1101.setUSE(CString("SegmentLine"));
Shape1100.addChild(&Appearance1101);

IndexedLineSet& IndexedLineSet1102 =  IndexedLineSet();
IndexedLineSet1102.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1103 =  Coordinate();
Coordinate1103.setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
IndexedLineSet1102.setCoord(&Coordinate1103);

Shape1100.setGeometry(&IndexedLineSet1102);

HAnimSegment1099.addChild(&Shape1100);

Transform& Transform1104 =  Transform();
Transform1104.setTranslation(new float[]{-0.2,0.7142,-0.04});
Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("jointbox"));
Transform1104.addChild(&Shape1105);

HAnimSegment1099.addChild(&Transform1104);

HAnimSite& HAnimSite1106 =  HAnimSite();
HAnimSite1106.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1106.setDEF(CString("Joe_r_dactylion_pt"));
HAnimSite1106.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1107 =  Shape();
Shape1107.setUSE(CString("sitebox"));
HAnimSite1106.addChild(&Shape1107);

HAnimSegment1099.addChild(&HAnimSite1106);

HAnimSite& HAnimSite1108 =  HAnimSite();
HAnimSite1108.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1108.setDEF(CString("Joe_r_carpal_distal_phalanx_3_tip"));
HAnimSite1108.setTranslation(new float[]{-0.2,0.68,-0.04});
Shape& Shape1109 =  Shape();
Shape1109.setUSE(CString("sitebox"));
HAnimSite1108.addChild(&Shape1109);

HAnimSegment1099.addChild(&HAnimSite1108);

HAnimJoint1098.addChildren(&HAnimSegment1099);

HAnimJoint1090.addChildren(&HAnimJoint1098);

HAnimJoint1082.addChildren(&HAnimJoint1090);

HAnimJoint1074.addChildren(&HAnimJoint1082);

HAnimJoint1000.addChildren(&HAnimJoint1074);

HAnimJoint& HAnimJoint1110 =  HAnimJoint();
HAnimJoint1110.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1110.setDEF(CString("Joe_r_carpometacarpal_4"));
HAnimJoint1110.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint1110.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint1110.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimSegment& HAnimSegment1111 =  HAnimSegment();
HAnimSegment1111.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1111.setDEF(CString("Joe_r_metacarpal_4"));
Shape& Shape1112 =  Shape();
Appearance& Appearance1113 =  Appearance();
Appearance1113.setUSE(CString("SegmentLine"));
Shape1112.addChild(&Appearance1113);

IndexedLineSet& IndexedLineSet1114 =  IndexedLineSet();
IndexedLineSet1114.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1115 =  Coordinate();
Coordinate1115.setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
IndexedLineSet1114.setCoord(&Coordinate1115);

Shape1112.setGeometry(&IndexedLineSet1114);

HAnimSegment1111.addChild(&Shape1112);

Transform& Transform1116 =  Transform();
Transform1116.setTranslation(new float[]{-0.2,0.835,-0.065});
Shape& Shape1117 =  Shape();
Shape1117.setUSE(CString("jointbox"));
Transform1116.addChild(&Shape1117);

HAnimSegment1111.addChild(&Transform1116);

HAnimJoint1110.addChildren(&HAnimSegment1111);

HAnimJoint& HAnimJoint1118 =  HAnimJoint();
HAnimJoint1118.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1118.setDEF(CString("Joe_r_metacarpophalangeal_4"));
HAnimJoint1118.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint1118.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint1118.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimSegment& HAnimSegment1119 =  HAnimSegment();
HAnimSegment1119.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1119.setDEF(CString("Joe_r_carpal_proximal_phalanx_4"));
Shape& Shape1120 =  Shape();
Appearance& Appearance1121 =  Appearance();
Appearance1121.setUSE(CString("SegmentLine"));
Shape1120.addChild(&Appearance1121);

IndexedLineSet& IndexedLineSet1122 =  IndexedLineSet();
IndexedLineSet1122.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1123 =  Coordinate();
Coordinate1123.setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
IndexedLineSet1122.setCoord(&Coordinate1123);

Shape1120.setGeometry(&IndexedLineSet1122);

HAnimSegment1119.addChild(&Shape1120);

Transform& Transform1124 =  Transform();
Transform1124.setTranslation(new float[]{-0.2,0.793,-0.065});
Shape& Shape1125 =  Shape();
Shape1125.setUSE(CString("jointbox"));
Transform1124.addChild(&Shape1125);

HAnimSegment1119.addChild(&Transform1124);

HAnimJoint1118.addChildren(&HAnimSegment1119);

HAnimJoint& HAnimJoint1126 =  HAnimJoint();
HAnimJoint1126.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1126.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1126.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint1126.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint1126.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment1127 =  HAnimSegment();
HAnimSegment1127.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1127.setDEF(CString("Joe_r_carpal_middle_phalanx_4"));
Shape& Shape1128 =  Shape();
Appearance& Appearance1129 =  Appearance();
Appearance1129.setUSE(CString("SegmentLine"));
Shape1128.addChild(&Appearance1129);

IndexedLineSet& IndexedLineSet1130 =  IndexedLineSet();
IndexedLineSet1130.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1131 =  Coordinate();
Coordinate1131.setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
IndexedLineSet1130.setCoord(&Coordinate1131);

Shape1128.setGeometry(&IndexedLineSet1130);

HAnimSegment1127.addChild(&Shape1128);

Transform& Transform1132 =  Transform();
Transform1132.setTranslation(new float[]{-0.2,0.74,-0.065});
Shape& Shape1133 =  Shape();
Shape1133.setUSE(CString("jointbox"));
Transform1132.addChild(&Shape1133);

HAnimSegment1127.addChild(&Transform1132);

HAnimJoint1126.addChildren(&HAnimSegment1127);

HAnimJoint& HAnimJoint1134 =  HAnimJoint();
HAnimJoint1134.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1134.setDEF(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimJoint1134.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint1134.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint1134.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment1135 =  HAnimSegment();
HAnimSegment1135.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimSegment1135.setDEF(CString("Joe_r_carpal_distal_phalanx_4"));
Shape& Shape1136 =  Shape();
Appearance& Appearance1137 =  Appearance();
Appearance1137.setUSE(CString("SegmentLine"));
Shape1136.addChild(&Appearance1137);

IndexedLineSet& IndexedLineSet1138 =  IndexedLineSet();
IndexedLineSet1138.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1139 =  Coordinate();
Coordinate1139.setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
IndexedLineSet1138.setCoord(&Coordinate1139);

Shape1136.setGeometry(&IndexedLineSet1138);

HAnimSegment1135.addChild(&Shape1136);

Transform& Transform1140 =  Transform();
Transform1140.setTranslation(new float[]{-0.2,0.7177,-0.065});
Shape& Shape1141 =  Shape();
Shape1141.setUSE(CString("jointbox"));
Transform1140.addChild(&Shape1141);

HAnimSegment1135.addChild(&Transform1140);

HAnimSite& HAnimSite1142 =  HAnimSite();
HAnimSite1142.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1142.setDEF(CString("Joe_r_carpal_distal_phalanx_4_tip"));
HAnimSite1142.setTranslation(new float[]{-0.2,0.695,-0.065});
Shape& Shape1143 =  Shape();
Shape1143.setUSE(CString("sitebox"));
HAnimSite1142.addChild(&Shape1143);

HAnimSegment1135.addChild(&HAnimSite1142);

HAnimJoint1134.addChildren(&HAnimSegment1135);

HAnimJoint1126.addChildren(&HAnimJoint1134);

HAnimJoint1118.addChildren(&HAnimJoint1126);

HAnimJoint1110.addChildren(&HAnimJoint1118);

HAnimJoint1000.addChildren(&HAnimJoint1110);

HAnimJoint& HAnimJoint1144 =  HAnimJoint();
HAnimJoint1144.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1144.setDEF(CString("Joe_r_carpometacarpal_5"));
HAnimJoint1144.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint1144.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint1144.setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
HAnimSegment& HAnimSegment1145 =  HAnimSegment();
HAnimSegment1145.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1145.setDEF(CString("Joe_r_metacarpal_5"));
Shape& Shape1146 =  Shape();
Appearance& Appearance1147 =  Appearance();
Appearance1147.setUSE(CString("SegmentLine"));
Shape1146.addChild(&Appearance1147);

IndexedLineSet& IndexedLineSet1148 =  IndexedLineSet();
IndexedLineSet1148.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1149 =  Coordinate();
Coordinate1149.setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
IndexedLineSet1148.setCoord(&Coordinate1149);

Shape1146.setGeometry(&IndexedLineSet1148);

HAnimSegment1145.addChild(&Shape1146);

Transform& Transform1150 =  Transform();
Transform1150.setTranslation(new float[]{-0.2,0.84,-0.085});
Shape& Shape1151 =  Shape();
Shape1151.setUSE(CString("jointbox"));
Transform1150.addChild(&Shape1151);

HAnimSegment1145.addChild(&Transform1150);

HAnimSite& HAnimSite1152 =  HAnimSite();
HAnimSite1152.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1152.setDEF(CString("Joe_r_metacarpal_phalanx_5_pt"));
HAnimSite1152.setTranslation(new float[]{-0.2,0.79,-0.095});
Shape& Shape1153 =  Shape();
Shape1153.setUSE(CString("sitebox"));
HAnimSite1152.addChild(&Shape1153);

HAnimSegment1145.addChild(&HAnimSite1152);

HAnimJoint1144.addChildren(&HAnimSegment1145);

HAnimJoint& HAnimJoint1154 =  HAnimJoint();
HAnimJoint1154.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1154.setDEF(CString("Joe_r_metacarpophalangeal_5"));
HAnimJoint1154.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint1154.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint1154.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimSegment& HAnimSegment1155 =  HAnimSegment();
HAnimSegment1155.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1155.setDEF(CString("Joe_r_carpal_proximal_phalanx_5"));
Shape& Shape1156 =  Shape();
Appearance& Appearance1157 =  Appearance();
Appearance1157.setUSE(CString("SegmentLine"));
Shape1156.addChild(&Appearance1157);

IndexedLineSet& IndexedLineSet1158 =  IndexedLineSet();
IndexedLineSet1158.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1159 =  Coordinate();
Coordinate1159.setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
IndexedLineSet1158.setCoord(&Coordinate1159);

Shape1156.setGeometry(&IndexedLineSet1158);

HAnimSegment1155.addChild(&Shape1156);

Transform& Transform1160 =  Transform();
Transform1160.setTranslation(new float[]{-0.2,0.79,-0.085});
Shape& Shape1161 =  Shape();
Shape1161.setUSE(CString("jointbox"));
Transform1160.addChild(&Shape1161);

HAnimSegment1155.addChild(&Transform1160);

HAnimJoint1154.addChildren(&HAnimSegment1155);

HAnimJoint& HAnimJoint1162 =  HAnimJoint();
HAnimJoint1162.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1162.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1162.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint1162.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint1162.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimSegment& HAnimSegment1163 =  HAnimSegment();
HAnimSegment1163.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1163.setDEF(CString("Joe_r_carpal_middle_phalanx_5"));
Shape& Shape1164 =  Shape();
Appearance& Appearance1165 =  Appearance();
Appearance1165.setUSE(CString("SegmentLine"));
Shape1164.addChild(&Appearance1165);

IndexedLineSet& IndexedLineSet1166 =  IndexedLineSet();
IndexedLineSet1166.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1167 =  Coordinate();
Coordinate1167.setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
IndexedLineSet1166.setCoord(&Coordinate1167);

Shape1164.setGeometry(&IndexedLineSet1166);

HAnimSegment1163.addChild(&Shape1164);

Transform& Transform1168 =  Transform();
Transform1168.setTranslation(new float[]{-0.2,0.755,-0.085});
Shape& Shape1169 =  Shape();
Shape1169.setUSE(CString("jointbox"));
Transform1168.addChild(&Shape1169);

HAnimSegment1163.addChild(&Transform1168);

HAnimJoint1162.addChildren(&HAnimSegment1163);

HAnimJoint& HAnimJoint1170 =  HAnimJoint();
HAnimJoint1170.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1170.setDEF(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimJoint1170.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint1170.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint1170.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimSegment& HAnimSegment1171 =  HAnimSegment();
HAnimSegment1171.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimSegment1171.setDEF(CString("Joe_r_carpal_distal_phalanx_5"));
Shape& Shape1172 =  Shape();
Appearance& Appearance1173 =  Appearance();
Appearance1173.setUSE(CString("SegmentLine"));
Shape1172.addChild(&Appearance1173);

IndexedLineSet& IndexedLineSet1174 =  IndexedLineSet();
IndexedLineSet1174.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate1175 =  Coordinate();
Coordinate1175.setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
IndexedLineSet1174.setCoord(&Coordinate1175);

Shape1172.setGeometry(&IndexedLineSet1174);

HAnimSegment1171.addChild(&Shape1172);

Transform& Transform1176 =  Transform();
Transform1176.setTranslation(new float[]{-0.2,0.735,-0.085});
Shape& Shape1177 =  Shape();
Shape1177.setUSE(CString("jointbox"));
Transform1176.addChild(&Shape1177);

HAnimSegment1171.addChild(&Transform1176);

HAnimSite& HAnimSite1178 =  HAnimSite();
HAnimSite1178.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1178.setDEF(CString("Joe_r_carpal_distal_phalanx_5_tip"));
HAnimSite1178.setTranslation(new float[]{-0.2,0.72,-0.085});
Shape& Shape1179 =  Shape();
Shape1179.setUSE(CString("sitebox"));
HAnimSite1178.addChild(&Shape1179);

HAnimSegment1171.addChild(&HAnimSite1178);

HAnimJoint1170.addChildren(&HAnimSegment1171);

HAnimJoint1162.addChildren(&HAnimJoint1170);

HAnimJoint1154.addChildren(&HAnimJoint1162);

HAnimJoint1144.addChildren(&HAnimJoint1154);

HAnimJoint1000.addChildren(&HAnimJoint1144);

HAnimJoint978.addChildren(&HAnimJoint1000);

HAnimJoint948.addChildren(&HAnimJoint978);

HAnimJoint932.addChildren(&HAnimJoint948);

HAnimJoint922.addChildren(&HAnimJoint932);

HAnimJoint556.addChildren(&HAnimJoint922);

HAnimJoint548.addChildren(&HAnimJoint556);

HAnimJoint540.addChildren(&HAnimJoint548);

HAnimJoint530.addChildren(&HAnimJoint540);

HAnimJoint522.addChildren(&HAnimJoint530);

HAnimJoint514.addChildren(&HAnimJoint522);

HAnimJoint506.addChildren(&HAnimJoint514);

HAnimJoint498.addChildren(&HAnimJoint506);

HAnimJoint486.addChildren(&HAnimJoint498);

HAnimJoint476.addChildren(&HAnimJoint486);

HAnimJoint468.addChildren(&HAnimJoint476);

HAnimJoint460.addChildren(&HAnimJoint468);

HAnimJoint452.addChildren(&HAnimJoint460);

HAnimJoint426.addChildren(&HAnimJoint452);

HAnimJoint418.addChildren(&HAnimJoint426);

HAnimJoint410.addChildren(&HAnimJoint418);

HAnimJoint395.addChildren(&HAnimJoint410);

HAnimJoint81.addChildren(&HAnimJoint395);

HAnimHumanoid78.setSkeleton(&HAnimJoint81);

Shape& Shape1180 =  Shape();
Shape1180.setDEF(CString("SkinShape"));
Appearance& Appearance1181 =  Appearance();
Appearance1181.setDEF(CString("SkinAppearance"));
Material& Material1182 =  Material();
Material1182.setDEF(CString("SkinMaterial"));
Material1182.setAmbientIntensity(0.6);
Material1182.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material1182.setShininess(0.6);
Material1182.setTransparency(0.2);
Appearance1181.addChild(&Material1182);

ImageTexture& ImageTexture1183 =  ImageTexture();
ImageTexture1183.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture1183.setDescription(CString("Blue Spiral Pattern"));
ImageTexture1183.setUrl(new CString[]{CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
Appearance1181.addChild(&ImageTexture1183);

Shape1180.addChild(&Appearance1181);

IndexedFaceSet& IndexedFaceSet1184 =  IndexedFaceSet();
IndexedFaceSet1184.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet1184.setCreaseAngle(3.1);
CColor& Color1185 =  CColor();
Color1185.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0}, 2079);
IndexedFaceSet1184.setColor(&Color1185);

Coordinate& Coordinate1186 =  Coordinate();
Coordinate1186.setDEF(CString("TheSkinCoord"));
Coordinate1186.setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet1184.setCoord(&Coordinate1186);

Shape1180.setGeometry(&IndexedFaceSet1184);

HAnimHumanoid78.setSkin(&Shape1180);

Coordinate& Coordinate1187 =  Coordinate();
Coordinate1187.setUSE(CString("TheSkinCoord"));
HAnimHumanoid78.setSkinCoord(&Coordinate1187);

HAnimJoint& HAnimJoint1188 =  HAnimJoint();
HAnimJoint1188.setUSE(CString("Joe_humanoid_root"));
HAnimHumanoid78.setJoints(&HAnimJoint1188);

HAnimJoint& HAnimJoint1189 =  HAnimJoint();
HAnimJoint1189.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid78.setJoints(&HAnimJoint1189);

HAnimJoint& HAnimJoint1190 =  HAnimJoint();
HAnimJoint1190.setUSE(CString("Joe_vl5"));
HAnimHumanoid78.setJoints(&HAnimJoint1190);

HAnimJoint& HAnimJoint1191 =  HAnimJoint();
HAnimJoint1191.setUSE(CString("Joe_vl4"));
HAnimHumanoid78.setJoints(&HAnimJoint1191);

HAnimJoint& HAnimJoint1192 =  HAnimJoint();
HAnimJoint1192.setUSE(CString("Joe_vl3"));
HAnimHumanoid78.setJoints(&HAnimJoint1192);

HAnimJoint& HAnimJoint1193 =  HAnimJoint();
HAnimJoint1193.setUSE(CString("Joe_vl2"));
HAnimHumanoid78.setJoints(&HAnimJoint1193);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.setUSE(CString("Joe_vl1"));
HAnimHumanoid78.setJoints(&HAnimJoint1194);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.setUSE(CString("Joe_vt12"));
HAnimHumanoid78.setJoints(&HAnimJoint1195);

HAnimJoint& HAnimJoint1196 =  HAnimJoint();
HAnimJoint1196.setUSE(CString("Joe_vt11"));
HAnimHumanoid78.setJoints(&HAnimJoint1196);

HAnimJoint& HAnimJoint1197 =  HAnimJoint();
HAnimJoint1197.setUSE(CString("Joe_vt10"));
HAnimHumanoid78.setJoints(&HAnimJoint1197);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.setUSE(CString("Joe_vt9"));
HAnimHumanoid78.setJoints(&HAnimJoint1198);

HAnimJoint& HAnimJoint1199 =  HAnimJoint();
HAnimJoint1199.setUSE(CString("Joe_vt8"));
HAnimHumanoid78.setJoints(&HAnimJoint1199);

HAnimJoint& HAnimJoint1200 =  HAnimJoint();
HAnimJoint1200.setUSE(CString("Joe_vt7"));
HAnimHumanoid78.setJoints(&HAnimJoint1200);

HAnimJoint& HAnimJoint1201 =  HAnimJoint();
HAnimJoint1201.setUSE(CString("Joe_vt6"));
HAnimHumanoid78.setJoints(&HAnimJoint1201);

HAnimJoint& HAnimJoint1202 =  HAnimJoint();
HAnimJoint1202.setUSE(CString("Joe_vt5"));
HAnimHumanoid78.setJoints(&HAnimJoint1202);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.setUSE(CString("Joe_vt4"));
HAnimHumanoid78.setJoints(&HAnimJoint1203);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setUSE(CString("Joe_vt3"));
HAnimHumanoid78.setJoints(&HAnimJoint1204);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setUSE(CString("Joe_vt2"));
HAnimHumanoid78.setJoints(&HAnimJoint1205);

HAnimJoint& HAnimJoint1206 =  HAnimJoint();
HAnimJoint1206.setUSE(CString("Joe_vt1"));
HAnimHumanoid78.setJoints(&HAnimJoint1206);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.setUSE(CString("Joe_vc7"));
HAnimHumanoid78.setJoints(&HAnimJoint1207);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setUSE(CString("Joe_vc6"));
HAnimHumanoid78.setJoints(&HAnimJoint1208);

HAnimJoint& HAnimJoint1209 =  HAnimJoint();
HAnimJoint1209.setUSE(CString("Joe_vc5"));
HAnimHumanoid78.setJoints(&HAnimJoint1209);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.setUSE(CString("Joe_vc4"));
HAnimHumanoid78.setJoints(&HAnimJoint1210);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.setUSE(CString("Joe_vc3"));
HAnimHumanoid78.setJoints(&HAnimJoint1211);

HAnimJoint& HAnimJoint1212 =  HAnimJoint();
HAnimJoint1212.setUSE(CString("Joe_vc2"));
HAnimHumanoid78.setJoints(&HAnimJoint1212);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setUSE(CString("Joe_vc1"));
HAnimHumanoid78.setJoints(&HAnimJoint1213);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setUSE(CString("Joe_skullbase"));
HAnimHumanoid78.setJoints(&HAnimJoint1214);

HAnimJoint& HAnimJoint1215 =  HAnimJoint();
HAnimJoint1215.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid78.setJoints(&HAnimJoint1215);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid78.setJoints(&HAnimJoint1216);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setUSE(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1217);

HAnimJoint& HAnimJoint1218 =  HAnimJoint();
HAnimJoint1218.setUSE(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1218);

HAnimJoint& HAnimJoint1219 =  HAnimJoint();
HAnimJoint1219.setUSE(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1219);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.setUSE(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.setUSE(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setUSE(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.setUSE(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.setUSE(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.setUSE(CString("Joe_l_carpal_interphalangeal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setUSE(CString("Joe_r_carpal_interphalangeal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1226);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1227);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1228);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1229);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1230);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1231);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1232);

HAnimJoint& HAnimJoint1233 =  HAnimJoint();
HAnimJoint1233.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1233);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1234);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.setUSE(CString("Joe_l_carpometacarpal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1235);

HAnimJoint& HAnimJoint1236 =  HAnimJoint();
HAnimJoint1236.setUSE(CString("Joe_r_carpometacarpal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1236);

HAnimJoint& HAnimJoint1237 =  HAnimJoint();
HAnimJoint1237.setUSE(CString("Joe_l_carpometacarpal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1237);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setUSE(CString("Joe_r_carpometacarpal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1238);

HAnimJoint& HAnimJoint1239 =  HAnimJoint();
HAnimJoint1239.setUSE(CString("Joe_l_carpometacarpal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1239);

HAnimJoint& HAnimJoint1240 =  HAnimJoint();
HAnimJoint1240.setUSE(CString("Joe_r_carpometacarpal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1240);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.setUSE(CString("Joe_l_carpometacarpal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1241);

HAnimJoint& HAnimJoint1242 =  HAnimJoint();
HAnimJoint1242.setUSE(CString("Joe_r_carpometacarpal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1242);

HAnimJoint& HAnimJoint1243 =  HAnimJoint();
HAnimJoint1243.setUSE(CString("Joe_l_carpometacarpal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1243);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.setUSE(CString("Joe_r_carpometacarpal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1244);

HAnimJoint& HAnimJoint1245 =  HAnimJoint();
HAnimJoint1245.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid78.setJoints(&HAnimJoint1245);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid78.setJoints(&HAnimJoint1246);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid78.setJoints(&HAnimJoint1247);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid78.setJoints(&HAnimJoint1248);

HAnimJoint& HAnimJoint1249 =  HAnimJoint();
HAnimJoint1249.setUSE(CString("Joe_l_hip"));
HAnimHumanoid78.setJoints(&HAnimJoint1249);

HAnimJoint& HAnimJoint1250 =  HAnimJoint();
HAnimJoint1250.setUSE(CString("Joe_r_hip"));
HAnimHumanoid78.setJoints(&HAnimJoint1250);

HAnimJoint& HAnimJoint1251 =  HAnimJoint();
HAnimJoint1251.setUSE(CString("Joe_l_knee"));
HAnimHumanoid78.setJoints(&HAnimJoint1251);

HAnimJoint& HAnimJoint1252 =  HAnimJoint();
HAnimJoint1252.setUSE(CString("Joe_r_knee"));
HAnimHumanoid78.setJoints(&HAnimJoint1252);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.setUSE(CString("Joe_l_metacarpophalangeal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1253);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("Joe_r_metacarpophalangeal_1"));
HAnimHumanoid78.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("Joe_l_metacarpophalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("Joe_r_metacarpophalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("Joe_l_metacarpophalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("Joe_r_metacarpophalangeal_3"));
HAnimHumanoid78.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("Joe_l_metacarpophalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("Joe_r_metacarpophalangeal_4"));
HAnimHumanoid78.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("Joe_l_metacarpophalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("Joe_r_metacarpophalangeal_5"));
HAnimHumanoid78.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("Joe_l_metatarsal"));
HAnimHumanoid78.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("Joe_l_metatarsophalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("Joe_r_metatarsophalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1265);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.setUSE(CString("Joe_l_radiocarpal"));
HAnimHumanoid78.setJoints(&HAnimJoint1266);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("Joe_r_radiocarpal"));
HAnimHumanoid78.setJoints(&HAnimJoint1267);

HAnimJoint& HAnimJoint1268 =  HAnimJoint();
HAnimJoint1268.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid78.setJoints(&HAnimJoint1268);

HAnimJoint& HAnimJoint1269 =  HAnimJoint();
HAnimJoint1269.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid78.setJoints(&HAnimJoint1269);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid78.setJoints(&HAnimJoint1270);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid78.setJoints(&HAnimJoint1271);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setUSE(CString("Joe_l_talocrural"));
HAnimHumanoid78.setJoints(&HAnimJoint1272);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.setUSE(CString("Joe_r_talocrural"));
HAnimHumanoid78.setJoints(&HAnimJoint1273);

HAnimJoint& HAnimJoint1274 =  HAnimJoint();
HAnimJoint1274.setUSE(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1274);

HAnimJoint& HAnimJoint1275 =  HAnimJoint();
HAnimJoint1275.setUSE(CString("Joe_l_tarsometatarsal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1275);

HAnimJoint& HAnimJoint1276 =  HAnimJoint();
HAnimJoint1276.setUSE(CString("Joe_r_tarsometatarsal_2"));
HAnimHumanoid78.setJoints(&HAnimJoint1276);

HAnimSegment& HAnimSegment1277 =  HAnimSegment();
HAnimSegment1277.setUSE(CString("Joe_c1"));
HAnimHumanoid78.setSegments(&HAnimSegment1277);

HAnimSegment& HAnimSegment1278 =  HAnimSegment();
HAnimSegment1278.setUSE(CString("Joe_c2"));
HAnimHumanoid78.setSegments(&HAnimSegment1278);

HAnimSegment& HAnimSegment1279 =  HAnimSegment();
HAnimSegment1279.setUSE(CString("Joe_c3"));
HAnimHumanoid78.setSegments(&HAnimSegment1279);

HAnimSegment& HAnimSegment1280 =  HAnimSegment();
HAnimSegment1280.setUSE(CString("Joe_c4"));
HAnimHumanoid78.setSegments(&HAnimSegment1280);

HAnimSegment& HAnimSegment1281 =  HAnimSegment();
HAnimSegment1281.setUSE(CString("Joe_c5"));
HAnimHumanoid78.setSegments(&HAnimSegment1281);

HAnimSegment& HAnimSegment1282 =  HAnimSegment();
HAnimSegment1282.setUSE(CString("Joe_c6"));
HAnimHumanoid78.setSegments(&HAnimSegment1282);

HAnimSegment& HAnimSegment1283 =  HAnimSegment();
HAnimSegment1283.setUSE(CString("Joe_c7"));
HAnimHumanoid78.setSegments(&HAnimSegment1283);

HAnimSegment& HAnimSegment1284 =  HAnimSegment();
HAnimSegment1284.setUSE(CString("Joe_l1"));
HAnimHumanoid78.setSegments(&HAnimSegment1284);

HAnimSegment& HAnimSegment1285 =  HAnimSegment();
HAnimSegment1285.setUSE(CString("Joe_l2"));
HAnimHumanoid78.setSegments(&HAnimSegment1285);

HAnimSegment& HAnimSegment1286 =  HAnimSegment();
HAnimSegment1286.setUSE(CString("Joe_l3"));
HAnimHumanoid78.setSegments(&HAnimSegment1286);

HAnimSegment& HAnimSegment1287 =  HAnimSegment();
HAnimSegment1287.setUSE(CString("Joe_l4"));
HAnimHumanoid78.setSegments(&HAnimSegment1287);

HAnimSegment& HAnimSegment1288 =  HAnimSegment();
HAnimSegment1288.setUSE(CString("Joe_l5"));
HAnimHumanoid78.setSegments(&HAnimSegment1288);

HAnimSegment& HAnimSegment1289 =  HAnimSegment();
HAnimSegment1289.setUSE(CString("Joe_pelvis"));
HAnimHumanoid78.setSegments(&HAnimSegment1289);

HAnimSegment& HAnimSegment1290 =  HAnimSegment();
HAnimSegment1290.setUSE(CString("Joe_sacrum"));
HAnimHumanoid78.setSegments(&HAnimSegment1290);

HAnimSegment& HAnimSegment1291 =  HAnimSegment();
HAnimSegment1291.setUSE(CString("Joe_skull"));
HAnimHumanoid78.setSegments(&HAnimSegment1291);

HAnimSegment& HAnimSegment1292 =  HAnimSegment();
HAnimSegment1292.setUSE(CString("Joe_t1"));
HAnimHumanoid78.setSegments(&HAnimSegment1292);

HAnimSegment& HAnimSegment1293 =  HAnimSegment();
HAnimSegment1293.setUSE(CString("Joe_t10"));
HAnimHumanoid78.setSegments(&HAnimSegment1293);

HAnimSegment& HAnimSegment1294 =  HAnimSegment();
HAnimSegment1294.setUSE(CString("Joe_t11"));
HAnimHumanoid78.setSegments(&HAnimSegment1294);

HAnimSegment& HAnimSegment1295 =  HAnimSegment();
HAnimSegment1295.setUSE(CString("Joe_t12"));
HAnimHumanoid78.setSegments(&HAnimSegment1295);

HAnimSegment& HAnimSegment1296 =  HAnimSegment();
HAnimSegment1296.setUSE(CString("Joe_t2"));
HAnimHumanoid78.setSegments(&HAnimSegment1296);

HAnimSegment& HAnimSegment1297 =  HAnimSegment();
HAnimSegment1297.setUSE(CString("Joe_t3"));
HAnimHumanoid78.setSegments(&HAnimSegment1297);

HAnimSegment& HAnimSegment1298 =  HAnimSegment();
HAnimSegment1298.setUSE(CString("Joe_t4"));
HAnimHumanoid78.setSegments(&HAnimSegment1298);

HAnimSegment& HAnimSegment1299 =  HAnimSegment();
HAnimSegment1299.setUSE(CString("Joe_t5"));
HAnimHumanoid78.setSegments(&HAnimSegment1299);

HAnimSegment& HAnimSegment1300 =  HAnimSegment();
HAnimSegment1300.setUSE(CString("Joe_t6"));
HAnimHumanoid78.setSegments(&HAnimSegment1300);

HAnimSegment& HAnimSegment1301 =  HAnimSegment();
HAnimSegment1301.setUSE(CString("Joe_t7"));
HAnimHumanoid78.setSegments(&HAnimSegment1301);

HAnimSegment& HAnimSegment1302 =  HAnimSegment();
HAnimSegment1302.setUSE(CString("Joe_t8"));
HAnimHumanoid78.setSegments(&HAnimSegment1302);

HAnimSegment& HAnimSegment1303 =  HAnimSegment();
HAnimSegment1303.setUSE(CString("Joe_t9"));
HAnimHumanoid78.setSegments(&HAnimSegment1303);

HAnimSegment& HAnimSegment1304 =  HAnimSegment();
HAnimSegment1304.setUSE(CString("Joe_toPelvis"));
HAnimHumanoid78.setSegments(&HAnimSegment1304);

HAnimSegment& HAnimSegment1305 =  HAnimSegment();
HAnimSegment1305.setUSE(CString("Joe_l_calf"));
HAnimHumanoid78.setSegments(&HAnimSegment1305);

HAnimSegment& HAnimSegment1306 =  HAnimSegment();
HAnimSegment1306.setUSE(CString("Joe_r_calf"));
HAnimHumanoid78.setSegments(&HAnimSegment1306);

HAnimSegment& HAnimSegment1307 =  HAnimSegment();
HAnimSegment1307.setUSE(CString("Joe_l_carpal"));
HAnimHumanoid78.setSegments(&HAnimSegment1307);

HAnimSegment& HAnimSegment1308 =  HAnimSegment();
HAnimSegment1308.setUSE(CString("Joe_r_carpal"));
HAnimHumanoid78.setSegments(&HAnimSegment1308);

HAnimSegment& HAnimSegment1309 =  HAnimSegment();
HAnimSegment1309.setUSE(CString("Joe_l_carpal_distal_phalanx_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1309);

HAnimSegment& HAnimSegment1310 =  HAnimSegment();
HAnimSegment1310.setUSE(CString("Joe_r_carpal_distal_phalanx_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1310);

HAnimSegment& HAnimSegment1311 =  HAnimSegment();
HAnimSegment1311.setUSE(CString("Joe_l_carpal_distal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1311);

HAnimSegment& HAnimSegment1312 =  HAnimSegment();
HAnimSegment1312.setUSE(CString("Joe_r_carpal_distal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1312);

HAnimSegment& HAnimSegment1313 =  HAnimSegment();
HAnimSegment1313.setUSE(CString("Joe_l_carpal_distal_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1313);

HAnimSegment& HAnimSegment1314 =  HAnimSegment();
HAnimSegment1314.setUSE(CString("Joe_r_carpal_distal_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1314);

HAnimSegment& HAnimSegment1315 =  HAnimSegment();
HAnimSegment1315.setUSE(CString("Joe_l_carpal_distal_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1315);

HAnimSegment& HAnimSegment1316 =  HAnimSegment();
HAnimSegment1316.setUSE(CString("Joe_r_carpal_distal_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1316);

HAnimSegment& HAnimSegment1317 =  HAnimSegment();
HAnimSegment1317.setUSE(CString("Joe_l_carpal_distal_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1317);

HAnimSegment& HAnimSegment1318 =  HAnimSegment();
HAnimSegment1318.setUSE(CString("Joe_r_carpal_distal_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1318);

HAnimSegment& HAnimSegment1319 =  HAnimSegment();
HAnimSegment1319.setUSE(CString("Joe_l_carpal_middle_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1319);

HAnimSegment& HAnimSegment1320 =  HAnimSegment();
HAnimSegment1320.setUSE(CString("Joe_r_carpal_middle_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1320);

HAnimSegment& HAnimSegment1321 =  HAnimSegment();
HAnimSegment1321.setUSE(CString("Joe_l_carpal_middle_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1321);

HAnimSegment& HAnimSegment1322 =  HAnimSegment();
HAnimSegment1322.setUSE(CString("Joe_r_carpal_middle_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1322);

HAnimSegment& HAnimSegment1323 =  HAnimSegment();
HAnimSegment1323.setUSE(CString("Joe_l_carpal_middle_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1323);

HAnimSegment& HAnimSegment1324 =  HAnimSegment();
HAnimSegment1324.setUSE(CString("Joe_r_carpal_middle_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1324);

HAnimSegment& HAnimSegment1325 =  HAnimSegment();
HAnimSegment1325.setUSE(CString("Joe_l_carpal_middle_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1325);

HAnimSegment& HAnimSegment1326 =  HAnimSegment();
HAnimSegment1326.setUSE(CString("Joe_r_carpal_middle_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1326);

HAnimSegment& HAnimSegment1327 =  HAnimSegment();
HAnimSegment1327.setUSE(CString("Joe_l_carpal_proximal_phalanx_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1327);

HAnimSegment& HAnimSegment1328 =  HAnimSegment();
HAnimSegment1328.setUSE(CString("Joe_r_carpal_proximal_phalanx_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1328);

HAnimSegment& HAnimSegment1329 =  HAnimSegment();
HAnimSegment1329.setUSE(CString("Joe_l_carpal_proximal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1329);

HAnimSegment& HAnimSegment1330 =  HAnimSegment();
HAnimSegment1330.setUSE(CString("Joe_r_carpal_proximal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1330);

HAnimSegment& HAnimSegment1331 =  HAnimSegment();
HAnimSegment1331.setUSE(CString("Joe_l_carpal_proximal_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1331);

HAnimSegment& HAnimSegment1332 =  HAnimSegment();
HAnimSegment1332.setUSE(CString("Joe_r_carpal_proximal_phalanx_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1332);

HAnimSegment& HAnimSegment1333 =  HAnimSegment();
HAnimSegment1333.setUSE(CString("Joe_l_carpal_proximal_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1333);

HAnimSegment& HAnimSegment1334 =  HAnimSegment();
HAnimSegment1334.setUSE(CString("Joe_r_carpal_proximal_phalanx_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1334);

HAnimSegment& HAnimSegment1335 =  HAnimSegment();
HAnimSegment1335.setUSE(CString("Joe_l_carpal_proximal_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1335);

HAnimSegment& HAnimSegment1336 =  HAnimSegment();
HAnimSegment1336.setUSE(CString("Joe_r_carpal_proximal_phalanx_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1336);

HAnimSegment& HAnimSegment1337 =  HAnimSegment();
HAnimSegment1337.setUSE(CString("Joe_l_clavicle"));
HAnimHumanoid78.setSegments(&HAnimSegment1337);

HAnimSegment& HAnimSegment1338 =  HAnimSegment();
HAnimSegment1338.setUSE(CString("Joe_r_clavicle"));
HAnimHumanoid78.setSegments(&HAnimSegment1338);

HAnimSegment& HAnimSegment1339 =  HAnimSegment();
HAnimSegment1339.setUSE(CString("Joe_l_eyeball"));
HAnimHumanoid78.setSegments(&HAnimSegment1339);

HAnimSegment& HAnimSegment1340 =  HAnimSegment();
HAnimSegment1340.setUSE(CString("Joe_r_eyeball"));
HAnimHumanoid78.setSegments(&HAnimSegment1340);

HAnimSegment& HAnimSegment1341 =  HAnimSegment();
HAnimSegment1341.setUSE(CString("Joe_l_forearm"));
HAnimHumanoid78.setSegments(&HAnimSegment1341);

HAnimSegment& HAnimSegment1342 =  HAnimSegment();
HAnimSegment1342.setUSE(CString("Joe_r_forearm"));
HAnimHumanoid78.setSegments(&HAnimSegment1342);

HAnimSegment& HAnimSegment1343 =  HAnimSegment();
HAnimSegment1343.setUSE(CString("Joe_l_metacarpal_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1343);

HAnimSegment& HAnimSegment1344 =  HAnimSegment();
HAnimSegment1344.setUSE(CString("Joe_r_metacarpal_1"));
HAnimHumanoid78.setSegments(&HAnimSegment1344);

HAnimSegment& HAnimSegment1345 =  HAnimSegment();
HAnimSegment1345.setUSE(CString("Joe_l_metacarpal_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1345);

HAnimSegment& HAnimSegment1346 =  HAnimSegment();
HAnimSegment1346.setUSE(CString("Joe_r_metacarpal_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1346);

HAnimSegment& HAnimSegment1347 =  HAnimSegment();
HAnimSegment1347.setUSE(CString("Joe_l_metacarpal_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1347);

HAnimSegment& HAnimSegment1348 =  HAnimSegment();
HAnimSegment1348.setUSE(CString("Joe_r_metacarpal_3"));
HAnimHumanoid78.setSegments(&HAnimSegment1348);

HAnimSegment& HAnimSegment1349 =  HAnimSegment();
HAnimSegment1349.setUSE(CString("Joe_l_metacarpal_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1349);

HAnimSegment& HAnimSegment1350 =  HAnimSegment();
HAnimSegment1350.setUSE(CString("Joe_r_metacarpal_4"));
HAnimHumanoid78.setSegments(&HAnimSegment1350);

HAnimSegment& HAnimSegment1351 =  HAnimSegment();
HAnimSegment1351.setUSE(CString("Joe_l_metacarpal_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1351);

HAnimSegment& HAnimSegment1352 =  HAnimSegment();
HAnimSegment1352.setUSE(CString("Joe_r_metacarpal_5"));
HAnimHumanoid78.setSegments(&HAnimSegment1352);

HAnimSegment& HAnimSegment1353 =  HAnimSegment();
HAnimSegment1353.setUSE(CString("Joe_l_metatarsal_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1353);

HAnimSegment& HAnimSegment1354 =  HAnimSegment();
HAnimSegment1354.setUSE(CString("Joe_r_metatarsal_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1354);

HAnimSegment& HAnimSegment1355 =  HAnimSegment();
HAnimSegment1355.setUSE(CString("Joe_l_scapula"));
HAnimHumanoid78.setSegments(&HAnimSegment1355);

HAnimSegment& HAnimSegment1356 =  HAnimSegment();
HAnimSegment1356.setUSE(CString("Joe_r_scapula"));
HAnimHumanoid78.setSegments(&HAnimSegment1356);

HAnimSegment& HAnimSegment1357 =  HAnimSegment();
HAnimSegment1357.setUSE(CString("Joe_l_talus"));
HAnimHumanoid78.setSegments(&HAnimSegment1357);

HAnimSegment& HAnimSegment1358 =  HAnimSegment();
HAnimSegment1358.setUSE(CString("Joe_r_talus"));
HAnimHumanoid78.setSegments(&HAnimSegment1358);

HAnimSegment& HAnimSegment1359 =  HAnimSegment();
HAnimSegment1359.setUSE(CString("Joe_l_tarsal_distal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1359);

HAnimSegment& HAnimSegment1360 =  HAnimSegment();
HAnimSegment1360.setUSE(CString("Joe_r_tarsal_distal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1360);

HAnimSegment& HAnimSegment1361 =  HAnimSegment();
HAnimSegment1361.setUSE(CString("Joe_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1361);

HAnimSegment& HAnimSegment1362 =  HAnimSegment();
HAnimSegment1362.setUSE(CString("Joe_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid78.setSegments(&HAnimSegment1362);

HAnimSegment& HAnimSegment1363 =  HAnimSegment();
HAnimSegment1363.setUSE(CString("Joe_l_thigh"));
HAnimHumanoid78.setSegments(&HAnimSegment1363);

HAnimSegment& HAnimSegment1364 =  HAnimSegment();
HAnimSegment1364.setUSE(CString("Joe_r_thigh"));
HAnimHumanoid78.setSegments(&HAnimSegment1364);

HAnimSegment& HAnimSegment1365 =  HAnimSegment();
HAnimSegment1365.setUSE(CString("Joe_l_upperarm"));
HAnimHumanoid78.setSegments(&HAnimSegment1365);

HAnimSegment& HAnimSegment1366 =  HAnimSegment();
HAnimSegment1366.setUSE(CString("Joe_r_upperarm"));
HAnimHumanoid78.setSegments(&HAnimSegment1366);

HAnimSite& HAnimSite1367 =  HAnimSite();
HAnimSite1367.setUSE(CString("Joe_cervicale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1367);

HAnimSite& HAnimSite1368 =  HAnimSite();
HAnimSite1368.setUSE(CString("Joe_crotch_pt"));
HAnimHumanoid78.setSites(&HAnimSite1368);

HAnimSite& HAnimSite1369 =  HAnimSite();
HAnimSite1369.setUSE(CString("Joe_floormarker_pt"));
HAnimHumanoid78.setSites(&HAnimSite1369);

HAnimSite& HAnimSite1370 =  HAnimSite();
HAnimSite1370.setUSE(CString("Joe_navel_pt"));
HAnimHumanoid78.setSites(&HAnimSite1370);

HAnimSite& HAnimSite1371 =  HAnimSite();
HAnimSite1371.setUSE(CString("Joe_nuchale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1371);

HAnimSite& HAnimSite1372 =  HAnimSite();
HAnimSite1372.setUSE(CString("Joe_rib10_midspine_pt"));
HAnimHumanoid78.setSites(&HAnimSite1372);

HAnimSite& HAnimSite1373 =  HAnimSite();
HAnimSite1373.setUSE(CString("Joe_sellion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1373);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.setUSE(CString("Joe_skull_vertex_tip"));
HAnimHumanoid78.setSites(&HAnimSite1374);

HAnimSite& HAnimSite1375 =  HAnimSite();
HAnimSite1375.setUSE(CString("Joe_substernale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1375);

HAnimSite& HAnimSite1376 =  HAnimSite();
HAnimSite1376.setUSE(CString("Joe_supramenton_pt"));
HAnimHumanoid78.setSites(&HAnimSite1376);

HAnimSite& HAnimSite1377 =  HAnimSite();
HAnimSite1377.setUSE(CString("Joe_suprasternale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1377);

HAnimSite& HAnimSite1378 =  HAnimSite();
HAnimSite1378.setUSE(CString("Joe_waist_preferred_posterior_pt"));
HAnimHumanoid78.setSites(&HAnimSite1378);

HAnimSite& HAnimSite1379 =  HAnimSite();
HAnimSite1379.setUSE(CString("Joe_l_acromion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1379);

HAnimSite& HAnimSite1380 =  HAnimSite();
HAnimSite1380.setUSE(CString("Joe_r_acromion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1380);

HAnimSite& HAnimSite1381 =  HAnimSite();
HAnimSite1381.setUSE(CString("Joe_l_asis_pt"));
HAnimHumanoid78.setSites(&HAnimSite1381);

HAnimSite& HAnimSite1382 =  HAnimSite();
HAnimSite1382.setUSE(CString("Joe_r_asis_pt"));
HAnimHumanoid78.setSites(&HAnimSite1382);

HAnimSite& HAnimSite1383 =  HAnimSite();
HAnimSite1383.setUSE(CString("Joe_l_axilla_distal_pt"));
HAnimHumanoid78.setSites(&HAnimSite1383);

HAnimSite& HAnimSite1384 =  HAnimSite();
HAnimSite1384.setUSE(CString("Joe_r_axilla_distal_pt"));
HAnimHumanoid78.setSites(&HAnimSite1384);

HAnimSite& HAnimSite1385 =  HAnimSite();
HAnimSite1385.setUSE(CString("Joe_l_axilla_proximal_pt"));
HAnimHumanoid78.setSites(&HAnimSite1385);

HAnimSite& HAnimSite1386 =  HAnimSite();
HAnimSite1386.setUSE(CString("Joe_r_axilla_proximal_pt"));
HAnimHumanoid78.setSites(&HAnimSite1386);

HAnimSite& HAnimSite1387 =  HAnimSite();
HAnimSite1387.setUSE(CString("Joe_l_calcaneus_posterior_pt"));
HAnimHumanoid78.setSites(&HAnimSite1387);

HAnimSite& HAnimSite1388 =  HAnimSite();
HAnimSite1388.setUSE(CString("Joe_r_calcaneus_posterior_pt"));
HAnimHumanoid78.setSites(&HAnimSite1388);

HAnimSite& HAnimSite1389 =  HAnimSite();
HAnimSite1389.setUSE(CString("Joe_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid78.setSites(&HAnimSite1389);

HAnimSite& HAnimSite1390 =  HAnimSite();
HAnimSite1390.setUSE(CString("Joe_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid78.setSites(&HAnimSite1390);

HAnimSite& HAnimSite1391 =  HAnimSite();
HAnimSite1391.setUSE(CString("Joe_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid78.setSites(&HAnimSite1391);

HAnimSite& HAnimSite1392 =  HAnimSite();
HAnimSite1392.setUSE(CString("Joe_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid78.setSites(&HAnimSite1392);

HAnimSite& HAnimSite1393 =  HAnimSite();
HAnimSite1393.setUSE(CString("Joe_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid78.setSites(&HAnimSite1393);

HAnimSite& HAnimSite1394 =  HAnimSite();
HAnimSite1394.setUSE(CString("Joe_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid78.setSites(&HAnimSite1394);

HAnimSite& HAnimSite1395 =  HAnimSite();
HAnimSite1395.setUSE(CString("Joe_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid78.setSites(&HAnimSite1395);

HAnimSite& HAnimSite1396 =  HAnimSite();
HAnimSite1396.setUSE(CString("Joe_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid78.setSites(&HAnimSite1396);

HAnimSite& HAnimSite1397 =  HAnimSite();
HAnimSite1397.setUSE(CString("Joe_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid78.setSites(&HAnimSite1397);

HAnimSite& HAnimSite1398 =  HAnimSite();
HAnimSite1398.setUSE(CString("Joe_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid78.setSites(&HAnimSite1398);

HAnimSite& HAnimSite1399 =  HAnimSite();
HAnimSite1399.setUSE(CString("Joe_l_clavicle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1399);

HAnimSite& HAnimSite1400 =  HAnimSite();
HAnimSite1400.setUSE(CString("Joe_r_clavicle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1400);

HAnimSite& HAnimSite1401 =  HAnimSite();
HAnimSite1401.setUSE(CString("Joe_l_dactylion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1401);

HAnimSite& HAnimSite1402 =  HAnimSite();
HAnimSite1402.setUSE(CString("Joe_r_dactylion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1402);

HAnimSite& HAnimSite1403 =  HAnimSite();
HAnimSite1403.setUSE(CString("Joe_l_femoral_lateral_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1403);

HAnimSite& HAnimSite1404 =  HAnimSite();
HAnimSite1404.setUSE(CString("Joe_r_femoral_lateral_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1404);

HAnimSite& HAnimSite1405 =  HAnimSite();
HAnimSite1405.setUSE(CString("Joe_l_femoral_medial_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1405);

HAnimSite& HAnimSite1406 =  HAnimSite();
HAnimSite1406.setUSE(CString("Joe_r_femoral_medial_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1406);

HAnimSite& HAnimSite1407 =  HAnimSite();
HAnimSite1407.setUSE(CString("Joe_l_gonion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1407);

HAnimSite& HAnimSite1408 =  HAnimSite();
HAnimSite1408.setUSE(CString("Joe_r_gonion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1408);

HAnimSite& HAnimSite1409 =  HAnimSite();
HAnimSite1409.setUSE(CString("Joe_l_humeral_lateral_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1409);

HAnimSite& HAnimSite1410 =  HAnimSite();
HAnimSite1410.setUSE(CString("Joe_r_humeral_lateral_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1410);

HAnimSite& HAnimSite1411 =  HAnimSite();
HAnimSite1411.setUSE(CString("Joe_l_humeral_medial_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1411);

HAnimSite& HAnimSite1412 =  HAnimSite();
HAnimSite1412.setUSE(CString("Joe_r_humeral_medial_epicondyle_pt"));
HAnimHumanoid78.setSites(&HAnimSite1412);

HAnimSite& HAnimSite1413 =  HAnimSite();
HAnimSite1413.setUSE(CString("Joe_l_iliocristale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1413);

HAnimSite& HAnimSite1414 =  HAnimSite();
HAnimSite1414.setUSE(CString("Joe_r_iliocristale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1414);

HAnimSite& HAnimSite1415 =  HAnimSite();
HAnimSite1415.setUSE(CString("Joe_l_infraorbitale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1415);

HAnimSite& HAnimSite1416 =  HAnimSite();
HAnimSite1416.setUSE(CString("Joe_r_infraorbitale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1416);

HAnimSite& HAnimSite1417 =  HAnimSite();
HAnimSite1417.setUSE(CString("Joe_l_knee_crease_pt"));
HAnimHumanoid78.setSites(&HAnimSite1417);

HAnimSite& HAnimSite1418 =  HAnimSite();
HAnimSite1418.setUSE(CString("Joe_r_knee_crease_pt"));
HAnimHumanoid78.setSites(&HAnimSite1418);

HAnimSite& HAnimSite1419 =  HAnimSite();
HAnimSite1419.setUSE(CString("Joe_l_lateral_malleolus_pt"));
HAnimHumanoid78.setSites(&HAnimSite1419);

HAnimSite& HAnimSite1420 =  HAnimSite();
HAnimSite1420.setUSE(CString("Joe_r_lateral_malleolus_pt"));
HAnimHumanoid78.setSites(&HAnimSite1420);

HAnimSite& HAnimSite1421 =  HAnimSite();
HAnimSite1421.setUSE(CString("Joe_l_medial_malleolus_pt"));
HAnimHumanoid78.setSites(&HAnimSite1421);

HAnimSite& HAnimSite1422 =  HAnimSite();
HAnimSite1422.setUSE(CString("Joe_r_medial_malleolus_pt"));
HAnimHumanoid78.setSites(&HAnimSite1422);

HAnimSite& HAnimSite1423 =  HAnimSite();
HAnimSite1423.setUSE(CString("Joe_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid78.setSites(&HAnimSite1423);

HAnimSite& HAnimSite1424 =  HAnimSite();
HAnimSite1424.setUSE(CString("Joe_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid78.setSites(&HAnimSite1424);

HAnimSite& HAnimSite1425 =  HAnimSite();
HAnimSite1425.setUSE(CString("Joe_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid78.setSites(&HAnimSite1425);

HAnimSite& HAnimSite1426 =  HAnimSite();
HAnimSite1426.setUSE(CString("Joe_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid78.setSites(&HAnimSite1426);

HAnimSite& HAnimSite1427 =  HAnimSite();
HAnimSite1427.setUSE(CString("Joe_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid78.setSites(&HAnimSite1427);

HAnimSite& HAnimSite1428 =  HAnimSite();
HAnimSite1428.setUSE(CString("Joe_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid78.setSites(&HAnimSite1428);

HAnimSite& HAnimSite1429 =  HAnimSite();
HAnimSite1429.setUSE(CString("Joe_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid78.setSites(&HAnimSite1429);

HAnimSite& HAnimSite1430 =  HAnimSite();
HAnimSite1430.setUSE(CString("Joe_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid78.setSites(&HAnimSite1430);

HAnimSite& HAnimSite1431 =  HAnimSite();
HAnimSite1431.setUSE(CString("Joe_l_neck_base_pt"));
HAnimHumanoid78.setSites(&HAnimSite1431);

HAnimSite& HAnimSite1432 =  HAnimSite();
HAnimSite1432.setUSE(CString("Joe_r_neck_base_pt"));
HAnimHumanoid78.setSites(&HAnimSite1432);

HAnimSite& HAnimSite1433 =  HAnimSite();
HAnimSite1433.setUSE(CString("Joe_l_olecranon_pt"));
HAnimHumanoid78.setSites(&HAnimSite1433);

HAnimSite& HAnimSite1434 =  HAnimSite();
HAnimSite1434.setUSE(CString("Joe_r_olecranon_pt"));
HAnimHumanoid78.setSites(&HAnimSite1434);

HAnimSite& HAnimSite1435 =  HAnimSite();
HAnimSite1435.setUSE(CString("Joe_l_psis_pt"));
HAnimHumanoid78.setSites(&HAnimSite1435);

HAnimSite& HAnimSite1436 =  HAnimSite();
HAnimSite1436.setUSE(CString("Joe_r_psis_pt"));
HAnimHumanoid78.setSites(&HAnimSite1436);

HAnimSite& HAnimSite1437 =  HAnimSite();
HAnimSite1437.setUSE(CString("Joe_l_radial_styloid_pt"));
HAnimHumanoid78.setSites(&HAnimSite1437);

HAnimSite& HAnimSite1438 =  HAnimSite();
HAnimSite1438.setUSE(CString("Joe_r_radial_styloid_pt"));
HAnimHumanoid78.setSites(&HAnimSite1438);

HAnimSite& HAnimSite1439 =  HAnimSite();
HAnimSite1439.setUSE(CString("Joe_l_radiale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1439);

HAnimSite& HAnimSite1440 =  HAnimSite();
HAnimSite1440.setUSE(CString("Joe_r_radiale_pt"));
HAnimHumanoid78.setSites(&HAnimSite1440);

HAnimSite& HAnimSite1441 =  HAnimSite();
HAnimSite1441.setUSE(CString("Joe_l_rib10_pt"));
HAnimHumanoid78.setSites(&HAnimSite1441);

HAnimSite& HAnimSite1442 =  HAnimSite();
HAnimSite1442.setUSE(CString("Joe_r_rib10_pt"));
HAnimHumanoid78.setSites(&HAnimSite1442);

HAnimSite& HAnimSite1443 =  HAnimSite();
HAnimSite1443.setUSE(CString("Joe_l_sphyrion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1443);

HAnimSite& HAnimSite1444 =  HAnimSite();
HAnimSite1444.setUSE(CString("Joe_r_sphyrion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1444);

HAnimSite& HAnimSite1445 =  HAnimSite();
HAnimSite1445.setUSE(CString("Joe_l_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid78.setSites(&HAnimSite1445);

HAnimSite& HAnimSite1446 =  HAnimSite();
HAnimSite1446.setUSE(CString("Joe_r_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid78.setSites(&HAnimSite1446);

HAnimSite& HAnimSite1447 =  HAnimSite();
HAnimSite1447.setUSE(CString("Joe_l_thelion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1447);

HAnimSite& HAnimSite1448 =  HAnimSite();
HAnimSite1448.setUSE(CString("Joe_r_thelion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1448);

HAnimSite& HAnimSite1449 =  HAnimSite();
HAnimSite1449.setUSE(CString("Joe_l_tragion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1449);

HAnimSite& HAnimSite1450 =  HAnimSite();
HAnimSite1450.setUSE(CString("Joe_r_tragion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1450);

HAnimSite& HAnimSite1451 =  HAnimSite();
HAnimSite1451.setUSE(CString("Joe_l_trochanterion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1451);

HAnimSite& HAnimSite1452 =  HAnimSite();
HAnimSite1452.setUSE(CString("Joe_r_trochanterion_pt"));
HAnimHumanoid78.setSites(&HAnimSite1452);

HAnimSite& HAnimSite1453 =  HAnimSite();
HAnimSite1453.setUSE(CString("Joe_l_ulnar_styloid_pt"));
HAnimHumanoid78.setSites(&HAnimSite1453);

HAnimSite& HAnimSite1454 =  HAnimSite();
HAnimSite1454.setUSE(CString("Joe_r_ulnar_styloid_pt"));
HAnimHumanoid78.setSites(&HAnimSite1454);

Group77.addChild(&HAnimHumanoid78);

Group76.addChild(&Group77);

Scene33.addChild(&Group76);

TimeSensor& TimeSensor1455 =  TimeSensor();
TimeSensor1455.setDEF(CString("Time1"));
TimeSensor1455.setCycleInterval(2.86);
TimeSensor1455.setLoop(true);
Scene33.addChild(&TimeSensor1455);

TimeSensor& TimeSensor1456 =  TimeSensor();
TimeSensor1456.setDEF(CString("Time2"));
TimeSensor1456.setCycleInterval(5.72);
TimeSensor1456.setLoop(true);
Scene33.addChild(&TimeSensor1456);

TimeSensor& TimeSensor1457 =  TimeSensor();
TimeSensor1457.setDEF(CString("Time3"));
TimeSensor1457.setCycleInterval(5.8);
TimeSensor1457.setLoop(true);
Scene33.addChild(&TimeSensor1457);

OrientationInterpolator& OrientationInterpolator1458 =  OrientationInterpolator();
OrientationInterpolator1458.setDEF(CString("Pitch"));
OrientationInterpolator1458.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1458.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.256,1.0,0.0,0.0,2.512,1.0,0.0,0.0,3.768,1.0,0.0,0.0,5.024,1.0,0.0,0.0,6.28}, 24);
Scene33.addChild(&OrientationInterpolator1458);

OrientationInterpolator& OrientationInterpolator1459 =  OrientationInterpolator();
OrientationInterpolator1459.setDEF(CString("Yaw"));
OrientationInterpolator1459.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1459.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.256,0.0,1.0,0.0,2.512,0.0,1.0,0.0,3.768,0.0,1.0,0.0,5.024,0.0,1.0,0.0,6.28}, 24);
Scene33.addChild(&OrientationInterpolator1459);

OrientationInterpolator& OrientationInterpolator1460 =  OrientationInterpolator();
OrientationInterpolator1460.setDEF(CString("Roll"));
OrientationInterpolator1460.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1460.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.256,0.0,0.0,1.0,2.512,0.0,0.0,1.0,3.768,0.0,0.0,1.0,5.024,0.0,0.0,1.0,6.28}, 24);
Scene33.addChild(&OrientationInterpolator1460);

OrientationInterpolator& OrientationInterpolator1461 =  OrientationInterpolator();
OrientationInterpolator1461.setDEF(CString("vc6Yaw"));
OrientationInterpolator1461.setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 9);
OrientationInterpolator1461.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.7,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.5,-0.4,-1.0,0.0,0.7,-0.4,-1.0,0.0,0.4,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 36);
Scene33.addChild(&OrientationInterpolator1461);

ROUTE& ROUTE1462 =  ROUTE();
ROUTE1462.setFromField(CString("fraction_changed"));
ROUTE1462.setFromNode(CString("Time2"));
ROUTE1462.setToField(CString("set_fraction"));
ROUTE1462.setToNode(CString("vc6Yaw"));
Scene33.addChild(&ROUTE1462);

ROUTE& ROUTE1463 =  ROUTE();
ROUTE1463.setFromField(CString("value_changed"));
ROUTE1463.setFromNode(CString("vc6Yaw"));
ROUTE1463.setToField(CString("set_rotation"));
ROUTE1463.setToNode(CString("Joe_vc6"));
Scene33.addChild(&ROUTE1463);

OrientationInterpolator& OrientationInterpolator1464 =  OrientationInterpolator();
OrientationInterpolator1464.setDEF(CString("EyeballsRotation"));
OrientationInterpolator1464.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1.0}, 10);
OrientationInterpolator1464.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,0.2,0.2,0.2,-0.2,0.2,0.2,0.2,-0.2,-0.2,0.2,0.2,0.2,-0.2,0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 40);
Scene33.addChild(&OrientationInterpolator1464);

ROUTE& ROUTE1465 =  ROUTE();
ROUTE1465.setFromField(CString("fraction_changed"));
ROUTE1465.setFromNode(CString("Time3"));
ROUTE1465.setToField(CString("set_fraction"));
ROUTE1465.setToNode(CString("EyeballsRotation"));
Scene33.addChild(&ROUTE1465);

ROUTE& ROUTE1466 =  ROUTE();
ROUTE1466.setFromField(CString("value_changed"));
ROUTE1466.setFromNode(CString("EyeballsRotation"));
ROUTE1466.setToField(CString("set_rotation"));
ROUTE1466.setToNode(CString("Joe_r_eyeball_joint"));
Scene33.addChild(&ROUTE1466);

ROUTE& ROUTE1467 =  ROUTE();
ROUTE1467.setFromField(CString("value_changed"));
ROUTE1467.setFromNode(CString("EyeballsRotation"));
ROUTE1467.setToField(CString("set_rotation"));
ROUTE1467.setToNode(CString("Joe_l_eyeball_joint"));
Scene33.addChild(&ROUTE1467);

OrientationInterpolator& OrientationInterpolator1468 =  OrientationInterpolator();
OrientationInterpolator1468.setDEF(CString("r_sternoclavicularRelax"));
OrientationInterpolator1468.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1468.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,-1.0,0.0,0.11,0.2,-1.0,0.0,0.11,0.1,-1.0,0.0,0.1,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1468);

OrientationInterpolator& OrientationInterpolator1469 =  OrientationInterpolator();
OrientationInterpolator1469.setDEF(CString("r_acromioclavicularRelax"));
OrientationInterpolator1469.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1469.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1469);

OrientationInterpolator& OrientationInterpolator1470 =  OrientationInterpolator();
OrientationInterpolator1470.setDEF(CString("r_shoulderRelax"));
OrientationInterpolator1470.setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
OrientationInterpolator1470.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1470);

OrientationInterpolator& OrientationInterpolator1471 =  OrientationInterpolator();
OrientationInterpolator1471.setDEF(CString("r_elbowRelax"));
OrientationInterpolator1471.setKey(new float[]{0.0,0.15,0.4,0.6,0.9,1.0}, 6);
OrientationInterpolator1471.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.2,0.0,0.01,0.5,-0.2,0.0,0.01,0.5,-0.2,0.0,0.01,0.5,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1471);

OrientationInterpolator& OrientationInterpolator1472 =  OrientationInterpolator();
OrientationInterpolator1472.setDEF(CString("r_wristRelax"));
OrientationInterpolator1472.setKey(new float[]{0.0,0.2,0.4,0.6,0.9,1.0}, 6);
OrientationInterpolator1472.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.1,-0.09,0.25,0.0,0.1,-0.09,0.25,0.0,0.1,-0.09,0.25,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1472);

OrientationInterpolator& OrientationInterpolator1473 =  OrientationInterpolator();
OrientationInterpolator1473.setDEF(CString("r_index0Relax"));
OrientationInterpolator1473.setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
OrientationInterpolator1473.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1473);

OrientationInterpolator& OrientationInterpolator1474 =  OrientationInterpolator();
OrientationInterpolator1474.setDEF(CString("r_index1Relax"));
OrientationInterpolator1474.setKey(new float[]{0.0,0.1,0.2,0.6,0.8,1.0}, 6);
OrientationInterpolator1474.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.135,-0.135,1.0,0.357,-0.159,-0.153,1.0,0.355,-0.159,-0.153,1.0,0.357,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1474);

OrientationInterpolator& OrientationInterpolator1475 =  OrientationInterpolator();
OrientationInterpolator1475.setDEF(CString("r_middle0Relax"));
OrientationInterpolator1475.setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
OrientationInterpolator1475.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.14,0.0,0.0,-1.0,0.14,0.0,0.0,-1.0,0.14,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1475);

OrientationInterpolator& OrientationInterpolator1476 =  OrientationInterpolator();
OrientationInterpolator1476.setDEF(CString("r_middle1Relax"));
OrientationInterpolator1476.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator1476.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.3,0.257,0.0,0.0,0.3,0.37,0.0,0.0,0.3,0.39,0.0,0.0,0.3,0.31,0.0,0.0,0.3,0.32,0.0,0.0,0.3,0.34,0.0,0.0,0.3,0.28,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 44);
Scene33.addChild(&OrientationInterpolator1476);

OrientationInterpolator& OrientationInterpolator1477 =  OrientationInterpolator();
OrientationInterpolator1477.setDEF(CString("r_ring0Relax"));
OrientationInterpolator1477.setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
OrientationInterpolator1477.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.25,0.25,-1.0,0.1,0.25,0.25,-1.0,0.1,0.25,0.25,-1.0,0.1,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1477);

OrientationInterpolator& OrientationInterpolator1478 =  OrientationInterpolator();
OrientationInterpolator1478.setDEF(CString("r_ring1Relax"));
OrientationInterpolator1478.setKey(new float[]{0.0,0.1,0.4,0.5,0.8,1.0}, 6);
OrientationInterpolator1478.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.135,0.135,1.0,0.27,0.135,0.135,1.0,0.27,0.135,0.15,1.0,0.27,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1478);

OrientationInterpolator& OrientationInterpolator1479 =  OrientationInterpolator();
OrientationInterpolator1479.setDEF(CString("r_pinky0Relax"));
OrientationInterpolator1479.setKey(new float[]{0.0,0.1,0.3,0.5,0.8,1.0}, 6);
OrientationInterpolator1479.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.35,0.35,-0.7,0.12,0.35,0.35,-0.9,0.12,0.35,0.35,-0.7,0.12,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1479);

OrientationInterpolator& OrientationInterpolator1480 =  OrientationInterpolator();
OrientationInterpolator1480.setDEF(CString("r_pinky1Relax"));
OrientationInterpolator1480.setKey(new float[]{0.0,0.1,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1480.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,0.25,1.0,0.27,0.2,0.22,1.0,0.27,0.22,0.2,1.0,0.27,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1480);

OrientationInterpolator& OrientationInterpolator1481 =  OrientationInterpolator();
OrientationInterpolator1481.setDEF(CString("r_thumb1Relax"));
OrientationInterpolator1481.setKey(new float[]{0.0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1.0}, 10);
OrientationInterpolator1481.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,1.0,1.0,0.5,-0.16,0.16,0.785,0.5,-0.16,0.16,0.785,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,0.0,0.0,1.0,0.0}, 40);
Scene33.addChild(&OrientationInterpolator1481);

OrientationInterpolator& OrientationInterpolator1482 =  OrientationInterpolator();
OrientationInterpolator1482.setDEF(CString("r_thumb2Relax"));
OrientationInterpolator1482.setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
OrientationInterpolator1482.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.45,1.0,0.0,0.0,0.45,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 28);
Scene33.addChild(&OrientationInterpolator1482);

OrientationInterpolator& OrientationInterpolator1483 =  OrientationInterpolator();
OrientationInterpolator1483.setDEF(CString("r_thumb3Relax"));
OrientationInterpolator1483.setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
OrientationInterpolator1483.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
Scene33.addChild(&OrientationInterpolator1483);

OrientationInterpolator& OrientationInterpolator1484 =  OrientationInterpolator();
OrientationInterpolator1484.setDEF(CString("r_fingers2Relax"));
OrientationInterpolator1484.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator1484.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.43,0.0,0.0,1.0,0.44,0.0,0.0,1.0,0.46,0.0,0.0,1.0,0.44,0.0,0.0,1.0,0.245,0.0,0.0,1.0,0.24,0.0,0.0,1.0,0.21,0.0,0.0,1.0,0.24,0.0,0.0,1.0,0.0}, 44);
Scene33.addChild(&OrientationInterpolator1484);

OrientationInterpolator& OrientationInterpolator1485 =  OrientationInterpolator();
OrientationInterpolator1485.setDEF(CString("r_fingers3Relax"));
OrientationInterpolator1485.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator1485.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.37,0.0,0.0,1.0,0.38,0.0,0.0,1.0,0.39,0.0,0.0,1.0,0.38,0.0,0.0,1.0,0.27,0.0,0.0,1.0,0.28,0.0,0.0,1.0,0.27,0.0,0.0,1.0,0.28,0.0,0.0,1.0,0.0}, 44);
Scene33.addChild(&OrientationInterpolator1485);

ROUTE& ROUTE1486 =  ROUTE();
ROUTE1486.setFromField(CString("value_changed"));
ROUTE1486.setFromNode(CString("r_sternoclavicularRelax"));
ROUTE1486.setToField(CString("set_rotation"));
ROUTE1486.setToNode(CString("Joe_r_sternoclavicular"));
Scene33.addChild(&ROUTE1486);

ROUTE& ROUTE1487 =  ROUTE();
ROUTE1487.setFromField(CString("value_changed"));
ROUTE1487.setFromNode(CString("r_acromioclavicularRelax"));
ROUTE1487.setToField(CString("set_rotation"));
ROUTE1487.setToNode(CString("Joe_r_acromioclavicular"));
Scene33.addChild(&ROUTE1487);

ROUTE& ROUTE1488 =  ROUTE();
ROUTE1488.setFromField(CString("value_changed"));
ROUTE1488.setFromNode(CString("r_shoulderRelax"));
ROUTE1488.setToField(CString("set_rotation"));
ROUTE1488.setToNode(CString("Joe_r_shoulder"));
Scene33.addChild(&ROUTE1488);

ROUTE& ROUTE1489 =  ROUTE();
ROUTE1489.setFromField(CString("value_changed"));
ROUTE1489.setFromNode(CString("r_elbowRelax"));
ROUTE1489.setToField(CString("set_rotation"));
ROUTE1489.setToNode(CString("Joe_r_elbow"));
Scene33.addChild(&ROUTE1489);

ROUTE& ROUTE1490 =  ROUTE();
ROUTE1490.setFromField(CString("value_changed"));
ROUTE1490.setFromNode(CString("r_wristRelax"));
ROUTE1490.setToField(CString("set_rotation"));
ROUTE1490.setToNode(CString("Joe_r_radiocarpal"));
Scene33.addChild(&ROUTE1490);

ROUTE& ROUTE1491 =  ROUTE();
ROUTE1491.setFromField(CString("value_changed"));
ROUTE1491.setFromNode(CString("r_thumb1Relax"));
ROUTE1491.setToField(CString("set_rotation"));
ROUTE1491.setToNode(CString("Joe_r_carpometacarpal_1"));
Scene33.addChild(&ROUTE1491);

ROUTE& ROUTE1492 =  ROUTE();
ROUTE1492.setFromField(CString("value_changed"));
ROUTE1492.setFromNode(CString("r_thumb2Relax"));
ROUTE1492.setToField(CString("set_rotation"));
ROUTE1492.setToNode(CString("Joe_r_metacarpophalangeal_1"));
Scene33.addChild(&ROUTE1492);

ROUTE& ROUTE1493 =  ROUTE();
ROUTE1493.setFromField(CString("value_changed"));
ROUTE1493.setFromNode(CString("r_thumb3Relax"));
ROUTE1493.setToField(CString("set_rotation"));
ROUTE1493.setToNode(CString("Joe_r_carpal_interphalangeal_1"));
Scene33.addChild(&ROUTE1493);

ROUTE& ROUTE1494 =  ROUTE();
ROUTE1494.setFromField(CString("value_changed"));
ROUTE1494.setFromNode(CString("r_index0Relax"));
ROUTE1494.setToField(CString("set_rotation"));
ROUTE1494.setToNode(CString("Joe_r_carpometacarpal_2"));
Scene33.addChild(&ROUTE1494);

ROUTE& ROUTE1495 =  ROUTE();
ROUTE1495.setFromField(CString("value_changed"));
ROUTE1495.setFromNode(CString("r_index1Relax"));
ROUTE1495.setToField(CString("set_rotation"));
ROUTE1495.setToNode(CString("Joe_r_metacarpophalangeal_2"));
Scene33.addChild(&ROUTE1495);

ROUTE& ROUTE1496 =  ROUTE();
ROUTE1496.setFromField(CString("value_changed"));
ROUTE1496.setFromNode(CString("r_fingers2Relax"));
ROUTE1496.setToField(CString("set_rotation"));
ROUTE1496.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_2"));
Scene33.addChild(&ROUTE1496);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromField(CString("value_changed"));
ROUTE1497.setFromNode(CString("r_fingers3Relax"));
ROUTE1497.setToField(CString("set_rotation"));
ROUTE1497.setToNode(CString("Joe_r_carpal_distal_interphalangeal_2"));
Scene33.addChild(&ROUTE1497);

ROUTE& ROUTE1498 =  ROUTE();
ROUTE1498.setFromField(CString("value_changed"));
ROUTE1498.setFromNode(CString("r_middle0Relax"));
ROUTE1498.setToField(CString("set_rotation"));
ROUTE1498.setToNode(CString("Joe_r_carpometacarpal_3"));
Scene33.addChild(&ROUTE1498);

ROUTE& ROUTE1499 =  ROUTE();
ROUTE1499.setFromField(CString("value_changed"));
ROUTE1499.setFromNode(CString("r_middle1Relax"));
ROUTE1499.setToField(CString("set_rotation"));
ROUTE1499.setToNode(CString("Joe_r_metacarpophalangeal_3"));
Scene33.addChild(&ROUTE1499);

ROUTE& ROUTE1500 =  ROUTE();
ROUTE1500.setFromField(CString("value_changed"));
ROUTE1500.setFromNode(CString("r_fingers2Relax"));
ROUTE1500.setToField(CString("set_rotation"));
ROUTE1500.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_3"));
Scene33.addChild(&ROUTE1500);

ROUTE& ROUTE1501 =  ROUTE();
ROUTE1501.setFromField(CString("value_changed"));
ROUTE1501.setFromNode(CString("r_fingers3Relax"));
ROUTE1501.setToField(CString("set_rotation"));
ROUTE1501.setToNode(CString("Joe_r_carpal_distal_interphalangeal_3"));
Scene33.addChild(&ROUTE1501);

ROUTE& ROUTE1502 =  ROUTE();
ROUTE1502.setFromField(CString("value_changed"));
ROUTE1502.setFromNode(CString("r_ring0Relax"));
ROUTE1502.setToField(CString("set_rotation"));
ROUTE1502.setToNode(CString("Joe_r_carpometacarpal_4"));
Scene33.addChild(&ROUTE1502);

ROUTE& ROUTE1503 =  ROUTE();
ROUTE1503.setFromField(CString("value_changed"));
ROUTE1503.setFromNode(CString("r_ring1Relax"));
ROUTE1503.setToField(CString("set_rotation"));
ROUTE1503.setToNode(CString("Joe_r_metacarpophalangeal_4"));
Scene33.addChild(&ROUTE1503);

ROUTE& ROUTE1504 =  ROUTE();
ROUTE1504.setFromField(CString("value_changed"));
ROUTE1504.setFromNode(CString("r_fingers2Relax"));
ROUTE1504.setToField(CString("set_rotation"));
ROUTE1504.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_4"));
Scene33.addChild(&ROUTE1504);

ROUTE& ROUTE1505 =  ROUTE();
ROUTE1505.setFromField(CString("value_changed"));
ROUTE1505.setFromNode(CString("r_fingers3Relax"));
ROUTE1505.setToField(CString("set_rotation"));
ROUTE1505.setToNode(CString("Joe_r_carpal_distal_interphalangeal_4"));
Scene33.addChild(&ROUTE1505);

ROUTE& ROUTE1506 =  ROUTE();
ROUTE1506.setFromField(CString("value_changed"));
ROUTE1506.setFromNode(CString("r_pinky0Relax"));
ROUTE1506.setToField(CString("set_rotation"));
ROUTE1506.setToNode(CString("Joe_r_carpometacarpal_5"));
Scene33.addChild(&ROUTE1506);

ROUTE& ROUTE1507 =  ROUTE();
ROUTE1507.setFromField(CString("value_changed"));
ROUTE1507.setFromNode(CString("r_pinky1Relax"));
ROUTE1507.setToField(CString("set_rotation"));
ROUTE1507.setToNode(CString("Joe_r_metacarpophalangeal_5"));
Scene33.addChild(&ROUTE1507);

ROUTE& ROUTE1508 =  ROUTE();
ROUTE1508.setFromField(CString("value_changed"));
ROUTE1508.setFromNode(CString("r_fingers2Relax"));
ROUTE1508.setToField(CString("set_rotation"));
ROUTE1508.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_5"));
Scene33.addChild(&ROUTE1508);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromField(CString("value_changed"));
ROUTE1509.setFromNode(CString("r_fingers3Relax"));
ROUTE1509.setToField(CString("set_rotation"));
ROUTE1509.setToNode(CString("Joe_r_carpal_distal_interphalangeal_5"));
Scene33.addChild(&ROUTE1509);

OrientationInterpolator& OrientationInterpolator1510 =  OrientationInterpolator();
OrientationInterpolator1510.setDEF(CString("r_sternoclavicularRoll"));
OrientationInterpolator1510.setKey(new float[]{0.0,0.2,0.4,0.5,0.7,0.8,1.0}, 7);
OrientationInterpolator1510.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.1,0.0,0.0,-1.0,0.22,0.0,0.5,-1.0,0.27,0.0,0.0,-1.0,0.1,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
Scene33.addChild(&OrientationInterpolator1510);

OrientationInterpolator& OrientationInterpolator1511 =  OrientationInterpolator();
OrientationInterpolator1511.setDEF(CString("r_acromioclavicularRoll"));
OrientationInterpolator1511.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1511.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1511);

OrientationInterpolator& OrientationInterpolator1512 =  OrientationInterpolator();
OrientationInterpolator1512.setDEF(CString("r_shoulderRoll"));
OrientationInterpolator1512.setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
OrientationInterpolator1512.setKeyValue(new float[]{1.0,0.0,0.0,0.0,0.0,0.0,-1.0,1.66,-0.25,0.0,-1.0,1.76,0.0,0.0,-1.0,1.256,0.0,0.0,-1.0,0.05,1.0,0.0,0.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1512);

OrientationInterpolator& OrientationInterpolator1513 =  OrientationInterpolator();
OrientationInterpolator1513.setDEF(CString("r_ForeArmPitch"));
OrientationInterpolator1513.setKey(new float[]{0.0,0.15,0.3,0.5,0.7,0.9,1.0}, 7);
OrientationInterpolator1513.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.55,-1.0,-0.25,0.0,2.55,-1.0,-0.25,0.0,2.55,-1.0,-0.25,0.0,2.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
Scene33.addChild(&OrientationInterpolator1513);

OrientationInterpolator& OrientationInterpolator1514 =  OrientationInterpolator();
OrientationInterpolator1514.setDEF(CString("r_wristRoll"));
OrientationInterpolator1514.setKey(new float[]{0.0,0.2,0.4,0.6,0.65,0.75,0.85,1.0}, 8);
OrientationInterpolator1514.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.55,0.0,0.0,-1.0,1.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 32);
Scene33.addChild(&OrientationInterpolator1514);

OrientationInterpolator& OrientationInterpolator1515 =  OrientationInterpolator();
OrientationInterpolator1515.setDEF(CString("r_handPitch"));
OrientationInterpolator1515.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1515.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,0.01,0.25,0.0,0.0,-0.01,0.03,0.0,0.0,0.01,0.05,0.0,0.0,0.01,0.01,0.0,0.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1515);

OrientationInterpolator& OrientationInterpolator1516 =  OrientationInterpolator();
OrientationInterpolator1516.setDEF(CString("r_thumb1Pitch"));
OrientationInterpolator1516.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1516.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1516);

OrientationInterpolator& OrientationInterpolator1517 =  OrientationInterpolator();
OrientationInterpolator1517.setDEF(CString("r_thumb2Pitch"));
OrientationInterpolator1517.setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
OrientationInterpolator1517.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.3,1.0,1.0,0.0,0.3,1.0,1.0,0.0,0.6,1.0,1.0,0.0,0.3,0.0,1.0,1.0,0.0}, 24);
Scene33.addChild(&OrientationInterpolator1517);

OrientationInterpolator& OrientationInterpolator1518 =  OrientationInterpolator();
OrientationInterpolator1518.setDEF(CString("l_shoulderRoll"));
OrientationInterpolator1518.setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
OrientationInterpolator1518.setKeyValue(new float[]{0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.66,0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.256,0.0,0.0,1.0,0.05,0.25,0.0,1.0,1.76}, 24);
Scene33.addChild(&OrientationInterpolator1518);

ROUTE& ROUTE1519 =  ROUTE();
ROUTE1519.setFromField(CString("fraction_changed"));
ROUTE1519.setFromNode(CString("Time2"));
ROUTE1519.setToField(CString("set_fraction"));
ROUTE1519.setToNode(CString("r_sternoclavicularRoll"));
Scene33.addChild(&ROUTE1519);

ROUTE& ROUTE1520 =  ROUTE();
ROUTE1520.setFromField(CString("fraction_changed"));
ROUTE1520.setFromNode(CString("Time2"));
ROUTE1520.setToField(CString("set_fraction"));
ROUTE1520.setToNode(CString("r_acromioclavicularRoll"));
Scene33.addChild(&ROUTE1520);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromField(CString("fraction_changed"));
ROUTE1521.setFromNode(CString("Time2"));
ROUTE1521.setToField(CString("set_fraction"));
ROUTE1521.setToNode(CString("r_shoulderRoll"));
Scene33.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromField(CString("fraction_changed"));
ROUTE1522.setFromNode(CString("Time2"));
ROUTE1522.setToField(CString("set_fraction"));
ROUTE1522.setToNode(CString("r_ForeArmPitch"));
Scene33.addChild(&ROUTE1522);

ROUTE& ROUTE1523 =  ROUTE();
ROUTE1523.setFromField(CString("fraction_changed"));
ROUTE1523.setFromNode(CString("Time2"));
ROUTE1523.setToField(CString("set_fraction"));
ROUTE1523.setToNode(CString("r_wristRoll"));
Scene33.addChild(&ROUTE1523);

ROUTE& ROUTE1524 =  ROUTE();
ROUTE1524.setFromField(CString("fraction_changed"));
ROUTE1524.setFromNode(CString("Time2"));
ROUTE1524.setToField(CString("set_fraction"));
ROUTE1524.setToNode(CString("r_handPitch"));
Scene33.addChild(&ROUTE1524);

ROUTE& ROUTE1525 =  ROUTE();
ROUTE1525.setFromField(CString("fraction_changed"));
ROUTE1525.setFromNode(CString("Time2"));
ROUTE1525.setToField(CString("set_fraction"));
ROUTE1525.setToNode(CString("r_thumb1Pitch"));
Scene33.addChild(&ROUTE1525);

ROUTE& ROUTE1526 =  ROUTE();
ROUTE1526.setFromField(CString("fraction_changed"));
ROUTE1526.setFromNode(CString("Time2"));
ROUTE1526.setToField(CString("set_fraction"));
ROUTE1526.setToNode(CString("r_thumb2Pitch"));
Scene33.addChild(&ROUTE1526);

ROUTE& ROUTE1527 =  ROUTE();
ROUTE1527.setFromField(CString("value_changed"));
ROUTE1527.setFromNode(CString("r_sternoclavicularRoll"));
ROUTE1527.setToField(CString("set_rotation"));
ROUTE1527.setToNode(CString("Joe_r_sternoclavicular"));
Scene33.addChild(&ROUTE1527);

ROUTE& ROUTE1528 =  ROUTE();
ROUTE1528.setFromField(CString("value_changed"));
ROUTE1528.setFromNode(CString("r_acromioclavicularRoll"));
ROUTE1528.setToField(CString("set_rotation"));
ROUTE1528.setToNode(CString("Joe_r_acromioclavicular"));
Scene33.addChild(&ROUTE1528);

ROUTE& ROUTE1529 =  ROUTE();
ROUTE1529.setFromField(CString("value_changed"));
ROUTE1529.setFromNode(CString("r_shoulderRoll"));
ROUTE1529.setToField(CString("set_rotation"));
ROUTE1529.setToNode(CString("Joe_r_shoulder"));
Scene33.addChild(&ROUTE1529);

ROUTE& ROUTE1530 =  ROUTE();
ROUTE1530.setFromField(CString("value_changed"));
ROUTE1530.setFromNode(CString("r_ForeArmPitch"));
ROUTE1530.setToField(CString("set_rotation"));
ROUTE1530.setToNode(CString("Joe_r_elbow"));
Scene33.addChild(&ROUTE1530);

ROUTE& ROUTE1531 =  ROUTE();
ROUTE1531.setFromField(CString("value_changed"));
ROUTE1531.setFromNode(CString("r_wristRoll"));
ROUTE1531.setToField(CString("set_rotation"));
ROUTE1531.setToNode(CString("Joe_r_radiocarpal"));
Scene33.addChild(&ROUTE1531);

ROUTE& ROUTE1532 =  ROUTE();
ROUTE1532.setFromField(CString("value_changed"));
ROUTE1532.setFromNode(CString("r_handPitch"));
ROUTE1532.setToField(CString("set_rotation"));
ROUTE1532.setToNode(CString("Joe_r_carpometacarpal_2"));
Scene33.addChild(&ROUTE1532);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromField(CString("value_changed"));
ROUTE1533.setFromNode(CString("r_handPitch"));
ROUTE1533.setToField(CString("set_rotation"));
ROUTE1533.setToNode(CString("Joe_r_metacarpophalangeal_2"));
Scene33.addChild(&ROUTE1533);

ROUTE& ROUTE1534 =  ROUTE();
ROUTE1534.setFromField(CString("value_changed"));
ROUTE1534.setFromNode(CString("r_handPitch"));
ROUTE1534.setToField(CString("set_rotation"));
ROUTE1534.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_2"));
Scene33.addChild(&ROUTE1534);

ROUTE& ROUTE1535 =  ROUTE();
ROUTE1535.setFromField(CString("value_changed"));
ROUTE1535.setFromNode(CString("r_handPitch"));
ROUTE1535.setToField(CString("set_rotation"));
ROUTE1535.setToNode(CString("Joe_r_carpal_distal_interphalangeal_2"));
Scene33.addChild(&ROUTE1535);

ROUTE& ROUTE1536 =  ROUTE();
ROUTE1536.setFromField(CString("value_changed"));
ROUTE1536.setFromNode(CString("r_handPitch"));
ROUTE1536.setToField(CString("set_rotation"));
ROUTE1536.setToNode(CString("Joe_r_carpometacarpal_3"));
Scene33.addChild(&ROUTE1536);

ROUTE& ROUTE1537 =  ROUTE();
ROUTE1537.setFromField(CString("value_changed"));
ROUTE1537.setFromNode(CString("r_handPitch"));
ROUTE1537.setToField(CString("set_rotation"));
ROUTE1537.setToNode(CString("Joe_r_metacarpophalangeal_3"));
Scene33.addChild(&ROUTE1537);

ROUTE& ROUTE1538 =  ROUTE();
ROUTE1538.setFromField(CString("value_changed"));
ROUTE1538.setFromNode(CString("r_handPitch"));
ROUTE1538.setToField(CString("set_rotation"));
ROUTE1538.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_3"));
Scene33.addChild(&ROUTE1538);

ROUTE& ROUTE1539 =  ROUTE();
ROUTE1539.setFromField(CString("value_changed"));
ROUTE1539.setFromNode(CString("r_handPitch"));
ROUTE1539.setToField(CString("set_rotation"));
ROUTE1539.setToNode(CString("Joe_r_carpal_distal_interphalangeal_3"));
Scene33.addChild(&ROUTE1539);

ROUTE& ROUTE1540 =  ROUTE();
ROUTE1540.setFromField(CString("value_changed"));
ROUTE1540.setFromNode(CString("r_handPitch"));
ROUTE1540.setToField(CString("set_rotation"));
ROUTE1540.setToNode(CString("Joe_r_carpometacarpal_4"));
Scene33.addChild(&ROUTE1540);

ROUTE& ROUTE1541 =  ROUTE();
ROUTE1541.setFromField(CString("value_changed"));
ROUTE1541.setFromNode(CString("r_handPitch"));
ROUTE1541.setToField(CString("set_rotation"));
ROUTE1541.setToNode(CString("Joe_r_metacarpophalangeal_4"));
Scene33.addChild(&ROUTE1541);

ROUTE& ROUTE1542 =  ROUTE();
ROUTE1542.setFromField(CString("value_changed"));
ROUTE1542.setFromNode(CString("r_handPitch"));
ROUTE1542.setToField(CString("set_rotation"));
ROUTE1542.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_4"));
Scene33.addChild(&ROUTE1542);

ROUTE& ROUTE1543 =  ROUTE();
ROUTE1543.setFromField(CString("value_changed"));
ROUTE1543.setFromNode(CString("r_handPitch"));
ROUTE1543.setToField(CString("set_rotation"));
ROUTE1543.setToNode(CString("Joe_r_carpal_distal_interphalangeal_4"));
Scene33.addChild(&ROUTE1543);

ROUTE& ROUTE1544 =  ROUTE();
ROUTE1544.setFromField(CString("value_changed"));
ROUTE1544.setFromNode(CString("r_handPitch"));
ROUTE1544.setToField(CString("set_rotation"));
ROUTE1544.setToNode(CString("Joe_r_carpometacarpal_5"));
Scene33.addChild(&ROUTE1544);

ROUTE& ROUTE1545 =  ROUTE();
ROUTE1545.setFromField(CString("value_changed"));
ROUTE1545.setFromNode(CString("r_handPitch"));
ROUTE1545.setToField(CString("set_rotation"));
ROUTE1545.setToNode(CString("Joe_r_metacarpophalangeal_5"));
Scene33.addChild(&ROUTE1545);

ROUTE& ROUTE1546 =  ROUTE();
ROUTE1546.setFromField(CString("value_changed"));
ROUTE1546.setFromNode(CString("r_handPitch"));
ROUTE1546.setToField(CString("set_rotation"));
ROUTE1546.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_5"));
Scene33.addChild(&ROUTE1546);

ROUTE& ROUTE1547 =  ROUTE();
ROUTE1547.setFromField(CString("value_changed"));
ROUTE1547.setFromNode(CString("r_handPitch"));
ROUTE1547.setToField(CString("set_rotation"));
ROUTE1547.setToNode(CString("Joe_r_carpal_distal_interphalangeal_5"));
Scene33.addChild(&ROUTE1547);

ROUTE& ROUTE1548 =  ROUTE();
ROUTE1548.setFromField(CString("value_changed"));
ROUTE1548.setFromNode(CString("r_thumb1Pitch"));
ROUTE1548.setToField(CString("set_rotation"));
ROUTE1548.setToNode(CString("Joe_r_carpometacarpal_1"));
Scene33.addChild(&ROUTE1548);

ROUTE& ROUTE1549 =  ROUTE();
ROUTE1549.setFromField(CString("value_changed"));
ROUTE1549.setFromNode(CString("r_thumb2Pitch"));
ROUTE1549.setToField(CString("set_rotation"));
ROUTE1549.setToNode(CString("Joe_r_metacarpophalangeal_1"));
Scene33.addChild(&ROUTE1549);

ROUTE& ROUTE1550 =  ROUTE();
ROUTE1550.setFromField(CString("value_changed"));
ROUTE1550.setFromNode(CString("r_thumb2Pitch"));
ROUTE1550.setToField(CString("set_rotation"));
ROUTE1550.setToNode(CString("Joe_r_carpal_interphalangeal_1"));
Scene33.addChild(&ROUTE1550);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromField(CString("value_changed"));
ROUTE1551.setFromNode(CString("l_shoulderRoll"));
ROUTE1551.setToField(CString("set_rotation"));
ROUTE1551.setToNode(CString("Joe_l_shoulder"));
Scene33.addChild(&ROUTE1551);

Group& Group1552 =  Group();
PositionInterpolator& PositionInterpolator1553 =  PositionInterpolator();
PositionInterpolator1553.setDEF(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator1553.setKey(new float[]{0.0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator1553.setKeyValue(new float[]{0.0,-0.0093,0.0,0.0,-0.0039,0.0,0.0,-0.0088,0.0,0.0,-0.0149,0.0,0.0,-0.0264,0.0,0.0,-0.0393,0.0,0.0,-0.0502,0.0,0.0,-0.0747,0.0,0.0,-0.0273,0.0,0.0,-0.0161,0.0,0.0,-0.0113,0.0,0.0,-0.0058,0.0,0.0,-0.002,0.0,0.0,-0.0026,0.0,0.0,-0.0143,0.0,0.0,-0.038,0.0,0.0,-0.0565,0.0,0.0,-0.045,0.0,0.0,-0.0093,0.0}, 57);
Group1552.addChild(&PositionInterpolator1553);

OrientationInterpolator& OrientationInterpolator1554 =  OrientationInterpolator();
OrientationInterpolator1554.setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator1554.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator1554.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
Group1552.addChild(&OrientationInterpolator1554);

OrientationInterpolator& OrientationInterpolator1555 =  OrientationInterpolator();
OrientationInterpolator1555.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator1555.setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator1555.setKeyValue(new float[]{-0.873,0.0609,0.484,0.2865,0.9963,-0.0106,0.0848,0.2488,0.9965,0.0159,-0.0822,0.3836,-0.7018,-0.0322,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.0223,0.0817,0.5351,-0.9809,0.0491,0.1881,0.5204,-0.873,0.0609,0.484,0.2865}, 32);
Group1552.addChild(&OrientationInterpolator1555);

OrientationInterpolator& OrientationInterpolator1556 =  OrientationInterpolator();
OrientationInterpolator1556.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator1556.setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator1556.setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.0868,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.0996,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
Group1552.addChild(&OrientationInterpolator1556);

OrientationInterpolator& OrientationInterpolator1557 =  OrientationInterpolator();
OrientationInterpolator1557.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator1557.setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
OrientationInterpolator1557.setKeyValue(new float[]{-1.0,0.0,0.0,0.0671,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.2222,-1.0,0.0,0.0,0.0671}, 28);
Group1552.addChild(&OrientationInterpolator1557);

OrientationInterpolator& OrientationInterpolator1558 =  OrientationInterpolator();
OrientationInterpolator1558.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator1558.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1.0}, 11);
OrientationInterpolator1558.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.127,-1.0,0.0,0.0,0.018,-1.0,0.0,0.0,0.058,-1.0,0.0,0.0,0.24,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.33,0.0,0.0,1.0,0.0}, 44);
Group1552.addChild(&OrientationInterpolator1558);

OrientationInterpolator& OrientationInterpolator1559 =  OrientationInterpolator();
OrientationInterpolator1559.setDEF(CString("L_subtalar_ANIMATOR"));
OrientationInterpolator1559.setKey(new float[]{0.0,0.3,1.0}, 3);
OrientationInterpolator1559.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group1552.addChild(&OrientationInterpolator1559);

OrientationInterpolator& OrientationInterpolator1560 =  OrientationInterpolator();
OrientationInterpolator1560.setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator1560.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator1560.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
Group1552.addChild(&OrientationInterpolator1560);

OrientationInterpolator& OrientationInterpolator1561 =  OrientationInterpolator();
OrientationInterpolator1561.setDEF(CString("L_metatarsal_ANIMATOR"));
OrientationInterpolator1561.setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
OrientationInterpolator1561.setKeyValue(new float[]{-1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.15,1.0,0.0,0.0,0.3,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3}, 20);
Group1552.addChild(&OrientationInterpolator1561);

OrientationInterpolator& OrientationInterpolator1562 =  OrientationInterpolator();
OrientationInterpolator1562.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator1562.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator1562.setKeyValue(new float[]{-0.5831,0.0351,0.8116,0.1481,-0.995,0.023,0.0967,0.4683,-1.0,0.0019,0.008,0.4732,-0.998,-0.0158,-0.061,0.5079,-0.9911,-0.0354,-0.1286,0.5419,-0.9131,-0.0624,-0.403,0.3361,-0.4306,-0.0796,-0.899,0.0704,1.0,0.0,0.0,0.2571,0.9891,-0.0281,0.1444,0.3879,-0.5831,0.0351,0.8116,0.1481}, 40);
Group1552.addChild(&OrientationInterpolator1562);

OrientationInterpolator& OrientationInterpolator1563 =  OrientationInterpolator();
OrientationInterpolator1563.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator1563.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator1563.setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.0935,1.0,0.0,0.0,0.0856,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
Group1552.addChild(&OrientationInterpolator1563);

OrientationInterpolator& OrientationInterpolator1564 =  OrientationInterpolator();
OrientationInterpolator1564.setDEF(CString("R_subtalar_ANIMATOR"));
OrientationInterpolator1564.setKey(new float[]{0.0,0.225,0.25,0.35,0.45,0.85,0.91}, 7);
OrientationInterpolator1564.setKeyValue(new float[]{-1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.25}, 28);
Group1552.addChild(&OrientationInterpolator1564);

OrientationInterpolator& OrientationInterpolator1565 =  OrientationInterpolator();
OrientationInterpolator1565.setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator1565.setKey(new float[]{0.0,0.22,1.0}, 3);
OrientationInterpolator1565.setKeyValue(new float[]{1.0,0.0,0.0,-0.2,0.0,0.0,1.0,0.0,1.0,0.0,0.0,-0.2}, 12);
Group1552.addChild(&OrientationInterpolator1565);

OrientationInterpolator& OrientationInterpolator1566 =  OrientationInterpolator();
OrientationInterpolator1566.setDEF(CString("R_metatarsal_ANIMATOR"));
OrientationInterpolator1566.setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
OrientationInterpolator1566.setKeyValue(new float[]{-1.0,0.0,0.0,0.15,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.15}, 20);
Group1552.addChild(&OrientationInterpolator1566);

OrientationInterpolator& OrientationInterpolator1567 =  OrientationInterpolator();
OrientationInterpolator1567.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator1567.setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator1567.setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.0197,-0.5974,0.8017,0.0823,0.0093,-0.9648,0.2627,0.1734,-0.0124,0.9549,-0.2968,0.0873,-0.0081,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
Group1552.addChild(&OrientationInterpolator1567);

OrientationInterpolator& OrientationInterpolator1568 =  OrientationInterpolator();
OrientationInterpolator1568.setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator1568.setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
OrientationInterpolator1568.setKeyValue(new float[]{0.0,-1.0,0.0,0.0864,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.0439,0.0,-1.0,0.0,0.0312,0.0,-1.0,0.0,0.0794,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.0864}, 40);
Group1552.addChild(&OrientationInterpolator1568);

OrientationInterpolator& OrientationInterpolator1569 =  OrientationInterpolator();
OrientationInterpolator1569.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator1569.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1569.setKeyValue(new float[]{1.0,0.0,0.4,0.12,-1.0,0.0,0.4,0.186,1.0,0.0,0.1,0.336,1.0,0.0,0.4,0.12}, 16);
Group1552.addChild(&OrientationInterpolator1569);

OrientationInterpolator& OrientationInterpolator1570 =  OrientationInterpolator();
OrientationInterpolator1570.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator1570.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1570.setKeyValue(new float[]{-1.0,0.0,0.0,0.066,-1.0,0.0,0.0,0.488,-1.0,0.0,0.0,0.0177,-1.0,0.0,0.0,0.066}, 16);
Group1552.addChild(&OrientationInterpolator1570);

OrientationInterpolator& OrientationInterpolator1571 =  OrientationInterpolator();
OrientationInterpolator1571.setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator1571.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1571.setKeyValue(new float[]{0.0,-1.0,0.0,0.461,-0.3302,-0.9275,0.1755,0.5388,0.0328,-0.9993,-0.0172,0.492,0.0,-1.0,0.0,0.4611}, 16);
Group1552.addChild(&OrientationInterpolator1571);

OrientationInterpolator& OrientationInterpolator1572 =  OrientationInterpolator();
OrientationInterpolator1572.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator1572.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1572.setKeyValue(new float[]{-1.0,0.0,-1.0,0.092,1.0,0.0,-0.2,0.3197,-1.0,0.0,-0.5,0.1564,-1.0,0.0,-1.0,0.092}, 16);
Group1552.addChild(&OrientationInterpolator1572);

OrientationInterpolator& OrientationInterpolator1573 =  OrientationInterpolator();
OrientationInterpolator1573.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator1573.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1573.setKeyValue(new float[]{-1.0,0.0,0.0,0.4115,-1.0,0.0,0.0,0.0925,-1.0,0.0,0.0,0.5726,-1.0,0.0,0.0,0.4115}, 16);
Group1552.addChild(&OrientationInterpolator1573);

OrientationInterpolator& OrientationInterpolator1574 =  OrientationInterpolator();
OrientationInterpolator1574.setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator1574.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator1574.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.0258,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
Group1552.addChild(&OrientationInterpolator1574);

Scene33.addChild(&Group1552);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromField(CString("fraction_changed"));
ROUTE1575.setFromNode(CString("Time1"));
ROUTE1575.setToField(CString("set_fraction"));
ROUTE1575.setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
Scene33.addChild(&ROUTE1575);

ROUTE& ROUTE1576 =  ROUTE();
ROUTE1576.setFromField(CString("fraction_changed"));
ROUTE1576.setFromNode(CString("Time1"));
ROUTE1576.setToField(CString("set_fraction"));
ROUTE1576.setToNode(CString("HUMANOIDROOT_ANIMATOR"));
Scene33.addChild(&ROUTE1576);

ROUTE& ROUTE1577 =  ROUTE();
ROUTE1577.setFromField(CString("fraction_changed"));
ROUTE1577.setFromNode(CString("Time1"));
ROUTE1577.setToField(CString("set_fraction"));
ROUTE1577.setToNode(CString("L_HIP_ANIMATOR"));
Scene33.addChild(&ROUTE1577);

ROUTE& ROUTE1578 =  ROUTE();
ROUTE1578.setFromField(CString("fraction_changed"));
ROUTE1578.setFromNode(CString("Time1"));
ROUTE1578.setToField(CString("set_fraction"));
ROUTE1578.setToNode(CString("L_KNEE_ANIMATOR"));
Scene33.addChild(&ROUTE1578);

ROUTE& ROUTE1579 =  ROUTE();
ROUTE1579.setFromField(CString("fraction_changed"));
ROUTE1579.setFromNode(CString("Time1"));
ROUTE1579.setToField(CString("set_fraction"));
ROUTE1579.setToNode(CString("L_ANKLE_ANIMATOR"));
Scene33.addChild(&ROUTE1579);

ROUTE& ROUTE1580 =  ROUTE();
ROUTE1580.setFromField(CString("fraction_changed"));
ROUTE1580.setFromNode(CString("Time1"));
ROUTE1580.setToField(CString("set_fraction"));
ROUTE1580.setToNode(CString("L_subtalar_ANIMATOR"));
Scene33.addChild(&ROUTE1580);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromField(CString("fraction_changed"));
ROUTE1581.setFromNode(CString("Time1"));
ROUTE1581.setToField(CString("set_fraction"));
ROUTE1581.setToNode(CString("L_MIDTARSAL_ANIMATOR"));
Scene33.addChild(&ROUTE1581);

ROUTE& ROUTE1582 =  ROUTE();
ROUTE1582.setFromField(CString("fraction_changed"));
ROUTE1582.setFromNode(CString("Time1"));
ROUTE1582.setToField(CString("set_fraction"));
ROUTE1582.setToNode(CString("L_metatarsal_ANIMATOR"));
Scene33.addChild(&ROUTE1582);

ROUTE& ROUTE1583 =  ROUTE();
ROUTE1583.setFromField(CString("fraction_changed"));
ROUTE1583.setFromNode(CString("Time1"));
ROUTE1583.setToField(CString("set_fraction"));
ROUTE1583.setToNode(CString("R_HIP_ANIMATOR"));
Scene33.addChild(&ROUTE1583);

ROUTE& ROUTE1584 =  ROUTE();
ROUTE1584.setFromField(CString("fraction_changed"));
ROUTE1584.setFromNode(CString("Time1"));
ROUTE1584.setToField(CString("set_fraction"));
ROUTE1584.setToNode(CString("R_KNEE_ANIMATOR"));
Scene33.addChild(&ROUTE1584);

ROUTE& ROUTE1585 =  ROUTE();
ROUTE1585.setFromField(CString("fraction_changed"));
ROUTE1585.setFromNode(CString("Time1"));
ROUTE1585.setToField(CString("set_fraction"));
ROUTE1585.setToNode(CString("R_ANKLE_ANIMATOR"));
Scene33.addChild(&ROUTE1585);

ROUTE& ROUTE1586 =  ROUTE();
ROUTE1586.setFromField(CString("fraction_changed"));
ROUTE1586.setFromNode(CString("Time1"));
ROUTE1586.setToField(CString("set_fraction"));
ROUTE1586.setToNode(CString("R_subtalar_ANIMATOR"));
Scene33.addChild(&ROUTE1586);

ROUTE& ROUTE1587 =  ROUTE();
ROUTE1587.setFromField(CString("fraction_changed"));
ROUTE1587.setFromNode(CString("Time1"));
ROUTE1587.setToField(CString("set_fraction"));
ROUTE1587.setToNode(CString("R_MIDTARSAL_ANIMATOR"));
Scene33.addChild(&ROUTE1587);

ROUTE& ROUTE1588 =  ROUTE();
ROUTE1588.setFromField(CString("fraction_changed"));
ROUTE1588.setFromNode(CString("Time1"));
ROUTE1588.setToField(CString("set_fraction"));
ROUTE1588.setToNode(CString("R_metatarsal_ANIMATOR"));
Scene33.addChild(&ROUTE1588);

ROUTE& ROUTE1589 =  ROUTE();
ROUTE1589.setFromField(CString("fraction_changed"));
ROUTE1589.setFromNode(CString("Time1"));
ROUTE1589.setToField(CString("set_fraction"));
ROUTE1589.setToNode(CString("VL5_ANIMATOR"));
Scene33.addChild(&ROUTE1589);

ROUTE& ROUTE1590 =  ROUTE();
ROUTE1590.setFromField(CString("fraction_changed"));
ROUTE1590.setFromNode(CString("Time1"));
ROUTE1590.setToField(CString("set_fraction"));
ROUTE1590.setToNode(CString("SKULLBASE_ANIMATOR"));
Scene33.addChild(&ROUTE1590);

ROUTE& ROUTE1591 =  ROUTE();
ROUTE1591.setFromField(CString("fraction_changed"));
ROUTE1591.setFromNode(CString("Time1"));
ROUTE1591.setToField(CString("set_fraction"));
ROUTE1591.setToNode(CString("L_SHOULDER_ANIMATOR"));
Scene33.addChild(&ROUTE1591);

ROUTE& ROUTE1592 =  ROUTE();
ROUTE1592.setFromField(CString("fraction_changed"));
ROUTE1592.setFromNode(CString("Time1"));
ROUTE1592.setToField(CString("set_fraction"));
ROUTE1592.setToNode(CString("L_ELBOW_ANIMATOR"));
Scene33.addChild(&ROUTE1592);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromField(CString("fraction_changed"));
ROUTE1593.setFromNode(CString("Time1"));
ROUTE1593.setToField(CString("set_fraction"));
ROUTE1593.setToNode(CString("L_WRIST_ANIMATOR"));
Scene33.addChild(&ROUTE1593);

ROUTE& ROUTE1594 =  ROUTE();
ROUTE1594.setFromField(CString("value_changed"));
ROUTE1594.setFromNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ROUTE1594.setToField(CString("set_translation"));
ROUTE1594.setToNode(CString("Joe_humanoid_root"));
Scene33.addChild(&ROUTE1594);

ROUTE& ROUTE1595 =  ROUTE();
ROUTE1595.setFromField(CString("value_changed"));
ROUTE1595.setFromNode(CString("HUMANOIDROOT_ANIMATOR"));
ROUTE1595.setToField(CString("set_rotation"));
ROUTE1595.setToNode(CString("Joe_humanoid_root"));
Scene33.addChild(&ROUTE1595);

ROUTE& ROUTE1596 =  ROUTE();
ROUTE1596.setFromField(CString("value_changed"));
ROUTE1596.setFromNode(CString("L_HIP_ANIMATOR"));
ROUTE1596.setToField(CString("set_rotation"));
ROUTE1596.setToNode(CString("Joe_l_hip"));
Scene33.addChild(&ROUTE1596);

ROUTE& ROUTE1597 =  ROUTE();
ROUTE1597.setFromField(CString("value_changed"));
ROUTE1597.setFromNode(CString("L_KNEE_ANIMATOR"));
ROUTE1597.setToField(CString("set_rotation"));
ROUTE1597.setToNode(CString("Joe_l_knee"));
Scene33.addChild(&ROUTE1597);

ROUTE& ROUTE1598 =  ROUTE();
ROUTE1598.setFromField(CString("value_changed"));
ROUTE1598.setFromNode(CString("L_ANKLE_ANIMATOR"));
ROUTE1598.setToField(CString("set_rotation"));
ROUTE1598.setToNode(CString("Joe_l_talocrural"));
Scene33.addChild(&ROUTE1598);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromField(CString("value_changed"));
ROUTE1599.setFromNode(CString("L_MIDTARSAL_ANIMATOR"));
ROUTE1599.setToField(CString("set_rotation"));
ROUTE1599.setToNode(CString("Joe_l_metatarsophalangeal_2"));
Scene33.addChild(&ROUTE1599);

ROUTE& ROUTE1600 =  ROUTE();
ROUTE1600.setFromField(CString("value_changed"));
ROUTE1600.setFromNode(CString("L_subtalar_ANIMATOR"));
ROUTE1600.setToField(CString("set_rotation"));
ROUTE1600.setToNode(CString("Joe_l_tarsometatarsal_2"));
Scene33.addChild(&ROUTE1600);

ROUTE& ROUTE1601 =  ROUTE();
ROUTE1601.setFromField(CString("value_changed"));
ROUTE1601.setFromNode(CString("L_metatarsal_ANIMATOR"));
ROUTE1601.setToField(CString("set_rotation"));
ROUTE1601.setToNode(CString("Joe_l_metatarsal"));
Scene33.addChild(&ROUTE1601);

ROUTE& ROUTE1602 =  ROUTE();
ROUTE1602.setFromField(CString("value_changed"));
ROUTE1602.setFromNode(CString("R_HIP_ANIMATOR"));
ROUTE1602.setToField(CString("set_rotation"));
ROUTE1602.setToNode(CString("Joe_r_hip"));
Scene33.addChild(&ROUTE1602);

ROUTE& ROUTE1603 =  ROUTE();
ROUTE1603.setFromField(CString("value_changed"));
ROUTE1603.setFromNode(CString("R_KNEE_ANIMATOR"));
ROUTE1603.setToField(CString("set_rotation"));
ROUTE1603.setToNode(CString("Joe_r_knee"));
Scene33.addChild(&ROUTE1603);

ROUTE& ROUTE1604 =  ROUTE();
ROUTE1604.setFromField(CString("value_changed"));
ROUTE1604.setFromNode(CString("R_ANKLE_ANIMATOR"));
ROUTE1604.setToField(CString("set_rotation"));
ROUTE1604.setToNode(CString("Joe_r_talocrural"));
Scene33.addChild(&ROUTE1604);

ROUTE& ROUTE1605 =  ROUTE();
ROUTE1605.setFromField(CString("value_changed"));
ROUTE1605.setFromNode(CString("R_subtalar_ANIMATOR"));
ROUTE1605.setToField(CString("set_rotation"));
ROUTE1605.setToNode(CString("Joe_r_tarsometatarsal_2"));
Scene33.addChild(&ROUTE1605);

ROUTE& ROUTE1606 =  ROUTE();
ROUTE1606.setFromField(CString("value_changed"));
ROUTE1606.setFromNode(CString("R_MIDTARSAL_ANIMATOR"));
ROUTE1606.setToField(CString("set_rotation"));
ROUTE1606.setToNode(CString("Joe_r_metatarsophalangeal_2"));
Scene33.addChild(&ROUTE1606);

ROUTE& ROUTE1607 =  ROUTE();
ROUTE1607.setFromField(CString("value_changed"));
ROUTE1607.setFromNode(CString("R_metatarsal_ANIMATOR"));
ROUTE1607.setToField(CString("set_rotation"));
ROUTE1607.setToNode(CString("Joe_r_tarsal_distal_interphalangeal_2"));
Scene33.addChild(&ROUTE1607);

ROUTE& ROUTE1608 =  ROUTE();
ROUTE1608.setFromField(CString("value_changed"));
ROUTE1608.setFromNode(CString("VL5_ANIMATOR"));
ROUTE1608.setToField(CString("set_rotation"));
ROUTE1608.setToNode(CString("Joe_vl5"));
Scene33.addChild(&ROUTE1608);

ROUTE& ROUTE1609 =  ROUTE();
ROUTE1609.setFromField(CString("value_changed"));
ROUTE1609.setFromNode(CString("SKULLBASE_ANIMATOR"));
ROUTE1609.setToField(CString("set_rotation"));
ROUTE1609.setToNode(CString("Joe_skullbase"));
Scene33.addChild(&ROUTE1609);

ROUTE& ROUTE1610 =  ROUTE();
ROUTE1610.setFromField(CString("value_changed"));
ROUTE1610.setFromNode(CString("L_SHOULDER_ANIMATOR"));
ROUTE1610.setToField(CString("set_rotation"));
ROUTE1610.setToNode(CString("Joe_l_shoulder"));
Scene33.addChild(&ROUTE1610);

ROUTE& ROUTE1611 =  ROUTE();
ROUTE1611.setFromField(CString("value_changed"));
ROUTE1611.setFromNode(CString("L_ELBOW_ANIMATOR"));
ROUTE1611.setToField(CString("set_rotation"));
ROUTE1611.setToNode(CString("Joe_l_elbow"));
Scene33.addChild(&ROUTE1611);

ROUTE& ROUTE1612 =  ROUTE();
ROUTE1612.setFromField(CString("value_changed"));
ROUTE1612.setFromNode(CString("L_WRIST_ANIMATOR"));
ROUTE1612.setToField(CString("set_rotation"));
ROUTE1612.setToNode(CString("Joe_l_radiocarpal"));
Scene33.addChild(&ROUTE1612);

ROUTE& ROUTE1613 =  ROUTE();
ROUTE1613.setFromField(CString("value_changed"));
ROUTE1613.setFromNode(CString("R_SHOULDER_ANIMATOR"));
ROUTE1613.setToField(CString("set_rotation"));
ROUTE1613.setToNode(CString("Joe_r_shoulder"));
Scene33.addChild(&ROUTE1613);

ROUTE& ROUTE1614 =  ROUTE();
ROUTE1614.setFromField(CString("value_changed"));
ROUTE1614.setFromNode(CString("R_ELBOW_ANIMATOR"));
ROUTE1614.setToField(CString("set_rotation"));
ROUTE1614.setToNode(CString("Joe_r_elbow"));
Scene33.addChild(&ROUTE1614);

ROUTE& ROUTE1615 =  ROUTE();
ROUTE1615.setFromField(CString("value_changed"));
ROUTE1615.setFromNode(CString("R_WRIST_ANIMATOR"));
ROUTE1615.setToField(CString("set_rotation"));
ROUTE1615.setToNode(CString("Joe_r_radiocarpal"));
Scene33.addChild(&ROUTE1615);

X3D0.setScene(&Scene33);

//}
