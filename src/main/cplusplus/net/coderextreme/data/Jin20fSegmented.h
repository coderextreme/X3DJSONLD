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
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JinScaledV2L1LOA4MinimumSkeleton20f.x3d"));
head1.addMeta(&meta3);

X3D0.setHead(&head1);

Scene& Scene4 =  Scene();
//https://www.web3d.org/documents/specifications/19774/V2.0/index.html
//0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.
WorldInfo& WorldInfo5 =  WorldInfo();
WorldInfo5.setTitle(CString("20f Jin v2 loa4 Level 1, Joints, Segments, Sites"));
Scene4.addChild(&WorldInfo5);

Transform& Transform6 =  Transform();
Transform6.setDEF(CString("ContainerScene000"));
Shape& Shape7 =  Shape();
Shape7.setDEF(CString("AxisLinesShape"));
//Red +X, Green +Y, Blue +Z
IndexedLineSet& IndexedLineSet8 =  IndexedLineSet();
IndexedLineSet8.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet8.setColorPerVertex(false);
IndexedLineSet8.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
CColor& Color9 =  CColor();
Color9.setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet8.setColor(&Color9);

Coordinate& Coordinate10 =  Coordinate();
Coordinate10.setPoint(new float[]{0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}, 12);
IndexedLineSet8.setCoord(&Coordinate10);

Shape7.setGeometry(&IndexedLineSet8);

Transform6.addChild(&Shape7);

Scene4.addChild(&Transform6);

HAnimHumanoid& HAnimHumanoid11 =  HAnimHumanoid();
HAnimHumanoid11.X3DNode::setName(CString("JinLOA4S"));
HAnimHumanoid11.setDEF(CString("hanim_JinLOA4S"));
HAnimHumanoid11.setLoa(4);
HAnimHumanoid11.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint12 =  HAnimJoint();
HAnimJoint12.X3DNode::setName(CString("humanoid_root"));
HAnimJoint12.setDEF(CString("hanim_humanoid_root"));
HAnimJoint12.setCenter(new float[]{0.0,0.77,0.0});
HAnimJoint12.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint12.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment13 =  HAnimSegment();
HAnimSegment13.X3DNode::setName(CString("sacrum"));
HAnimSegment13.setDEF(CString("hanim_sacrum"));
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("Humanoid000"));
Shape& Shape15 =  Shape();
Shape15.setUSE(CString("AxisLinesShape"));
Transform14.addChild(&Shape15);

HAnimSegment13.addChild(&Transform14);

HAnimJoint12.addChildren(&HAnimSegment13);

HAnimJoint& HAnimJoint16 =  HAnimJoint();
HAnimJoint16.X3DNode::setName(CString("sacroiliac"));
HAnimJoint16.setDEF(CString("hanim_sacroiliac"));
HAnimJoint16.setCenter(new float[]{0.0,0.826,0.02});
HAnimJoint16.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint16.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment17 =  HAnimSegment();
HAnimSegment17.X3DNode::setName(CString("pelvis"));
HAnimSegment17.setDEF(CString("hanim_pelvis"));
HAnimSite& HAnimSite18 =  HAnimSite();
HAnimSite18.X3DNode::setName(CString("l_iliocristale"));
HAnimSite18.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite18.setTranslation(new float[]{0.13,0.92,0.0035});
TouchSensor& TouchSensor19 =  TouchSensor();
TouchSensor19.setDescription(CString("HAnimSite 33 hanim_l_iliocristale_pt"));
HAnimSite18.addChild(&TouchSensor19);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet23.setCreaseAngle(0.5);
IndexedFaceSet23.setSolid(false);
ColorRGBA& ColorRGBA24 =  ColorRGBA();
ColorRGBA24.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet23.addChild(&ColorRGBA24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet23.setCoord(&Coordinate25);

Shape20.setGeometry(&IndexedFaceSet23);

HAnimSite18.addChild(&Shape20);

Billboard& Billboard26 =  Billboard();
Billboard26.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape27 =  Shape();
Text& Text28 =  Text();
Text28.setString(new CString[]{CString("33")}, 1);
CFontStyle& FontStyle29 =  CFontStyle();
FontStyle29.setSize(0.035);
Text28.setFontStyle(&FontStyle29);

Shape27.setGeometry(&Text28);

Billboard26.addChild(&Shape27);

HAnimSite18.addChild(Billboard26);

HAnimSegment17.addChild(&HAnimSite18);

HAnimSite& HAnimSite30 =  HAnimSite();
HAnimSite30.X3DNode::setName(CString("r_iliocristale"));
HAnimSite30.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite30.setTranslation(new float[]{-0.13,0.92,0.0035});
TouchSensor& TouchSensor31 =  TouchSensor();
TouchSensor31.setDescription(CString("HAnimSite 36 hanim_r_iliocristale_pt"));
HAnimSite30.addChild(&TouchSensor31);

Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet35.setCreaseAngle(0.5);
IndexedFaceSet35.setSolid(false);
ColorRGBA& ColorRGBA36 =  ColorRGBA();
ColorRGBA36.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet35.addChild(&ColorRGBA36);

Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet35.setCoord(&Coordinate37);

Shape32.setGeometry(&IndexedFaceSet35);

HAnimSite30.addChild(&Shape32);

Billboard& Billboard38 =  Billboard();
Billboard38.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape39 =  Shape();
Text& Text40 =  Text();
Text40.setString(new CString[]{CString("36")}, 1);
CFontStyle& FontStyle41 =  CFontStyle();
FontStyle41.setSize(0.035);
Text40.setFontStyle(&FontStyle41);

Shape39.setGeometry(&Text40);

Billboard38.addChild(&Shape39);

HAnimSite30.addChild(Billboard38);

HAnimSegment17.addChild(&HAnimSite30);

HAnimSite& HAnimSite42 =  HAnimSite();
HAnimSite42.X3DNode::setName(CString("l_trochanterion"));
HAnimSite42.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite42.setTranslation(new float[]{0.14,0.8,0.0035});
TouchSensor& TouchSensor43 =  TouchSensor();
TouchSensor43.setDescription(CString("HAnimSite 42 hanim_l_trochanterion_pt"));
HAnimSite42.addChild(&TouchSensor43);

Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Material& Material46 =  Material();
Material46.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

IndexedFaceSet& IndexedFaceSet47 =  IndexedFaceSet();
IndexedFaceSet47.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet47.setCreaseAngle(0.5);
IndexedFaceSet47.setSolid(false);
ColorRGBA& ColorRGBA48 =  ColorRGBA();
ColorRGBA48.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet47.addChild(&ColorRGBA48);

Coordinate& Coordinate49 =  Coordinate();
Coordinate49.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet47.setCoord(&Coordinate49);

Shape44.setGeometry(&IndexedFaceSet47);

HAnimSite42.addChild(&Shape44);

Billboard& Billboard50 =  Billboard();
Billboard50.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape51 =  Shape();
Text& Text52 =  Text();
Text52.setString(new CString[]{CString("42")}, 1);
CFontStyle& FontStyle53 =  CFontStyle();
FontStyle53.setSize(0.035);
Text52.setFontStyle(&FontStyle53);

Shape51.setGeometry(&Text52);

Billboard50.addChild(&Shape51);

HAnimSite42.addChild(Billboard50);

HAnimSegment17.addChild(&HAnimSite42);

HAnimSite& HAnimSite54 =  HAnimSite();
HAnimSite54.X3DNode::setName(CString("r_trochanterion"));
HAnimSite54.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite54.setTranslation(new float[]{-0.14,0.8,0.0035});
TouchSensor& TouchSensor55 =  TouchSensor();
TouchSensor55.setDescription(CString("HAnimSite 46 hanim_r_trochanterion_pt"));
HAnimSite54.addChild(&TouchSensor55);

Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance57.addChild(&Material58);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet59 =  IndexedFaceSet();
IndexedFaceSet59.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet59.setCreaseAngle(0.5);
IndexedFaceSet59.setSolid(false);
ColorRGBA& ColorRGBA60 =  ColorRGBA();
ColorRGBA60.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet59.addChild(&ColorRGBA60);

Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet59.setCoord(&Coordinate61);

Shape56.setGeometry(&IndexedFaceSet59);

HAnimSite54.addChild(&Shape56);

Billboard& Billboard62 =  Billboard();
Billboard62.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape63 =  Shape();
Text& Text64 =  Text();
Text64.setString(new CString[]{CString("46")}, 1);
CFontStyle& FontStyle65 =  CFontStyle();
FontStyle65.setSize(0.035);
Text64.setFontStyle(&FontStyle65);

Shape63.setGeometry(&Text64);

Billboard62.addChild(&Shape63);

HAnimSite54.addChild(Billboard62);

HAnimSegment17.addChild(&HAnimSite54);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.X3DNode::setName(CString("l_asis"));
HAnimSite66.setDEF(CString("hanim_l_asis_pt"));
HAnimSite66.setTranslation(new float[]{0.1,0.86,0.0035});
TouchSensor& TouchSensor67 =  TouchSensor();
TouchSensor67.setDescription(CString("HAnimSite 32 hanim_l_asis_pt"));
HAnimSite66.addChild(&TouchSensor67);

Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

IndexedFaceSet& IndexedFaceSet71 =  IndexedFaceSet();
IndexedFaceSet71.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet71.setCreaseAngle(0.5);
IndexedFaceSet71.setSolid(false);
ColorRGBA& ColorRGBA72 =  ColorRGBA();
ColorRGBA72.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet71.addChild(&ColorRGBA72);

Coordinate& Coordinate73 =  Coordinate();
Coordinate73.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet71.setCoord(&Coordinate73);

Shape68.setGeometry(&IndexedFaceSet71);

HAnimSite66.addChild(&Shape68);

Billboard& Billboard74 =  Billboard();
Billboard74.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape75 =  Shape();
Text& Text76 =  Text();
Text76.setString(new CString[]{CString("32")}, 1);
CFontStyle& FontStyle77 =  CFontStyle();
FontStyle77.setSize(0.035);
Text76.setFontStyle(&FontStyle77);

Shape75.setGeometry(&Text76);

Billboard74.addChild(&Shape75);

HAnimSite66.addChild(Billboard74);

HAnimSegment17.addChild(&HAnimSite66);

HAnimSite& HAnimSite78 =  HAnimSite();
HAnimSite78.X3DNode::setName(CString("r_asis"));
HAnimSite78.setDEF(CString("hanim_r_asis_pt"));
HAnimSite78.setTranslation(new float[]{-0.1,0.86,0.0035});
TouchSensor& TouchSensor79 =  TouchSensor();
TouchSensor79.setDescription(CString("HAnimSite 35 hanim_r_asis_pt"));
HAnimSite78.addChild(&TouchSensor79);

Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance81.addChild(&Material82);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet83 =  IndexedFaceSet();
IndexedFaceSet83.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet83.setCreaseAngle(0.5);
IndexedFaceSet83.setSolid(false);
ColorRGBA& ColorRGBA84 =  ColorRGBA();
ColorRGBA84.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet83.addChild(&ColorRGBA84);

Coordinate& Coordinate85 =  Coordinate();
Coordinate85.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet83.setCoord(&Coordinate85);

Shape80.setGeometry(&IndexedFaceSet83);

HAnimSite78.addChild(&Shape80);

Billboard& Billboard86 =  Billboard();
Billboard86.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape87 =  Shape();
Text& Text88 =  Text();
Text88.setString(new CString[]{CString("35")}, 1);
CFontStyle& FontStyle89 =  CFontStyle();
FontStyle89.setSize(0.035);
Text88.setFontStyle(&FontStyle89);

Shape87.setGeometry(&Text88);

Billboard86.addChild(&Shape87);

HAnimSite78.addChild(Billboard86);

HAnimSegment17.addChild(&HAnimSite78);

HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.X3DNode::setName(CString("l_psis"));
HAnimSite90.setDEF(CString("hanim_l_psis_pt"));
HAnimSite90.setTranslation(new float[]{0.05,0.84,-0.11});
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setDescription(CString("HAnimSite 34 hanim_l_psis_pt"));
HAnimSite90.addChild(&TouchSensor91);

Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
Material& Material94 =  Material();
Material94.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance93.addChild(&Material94);

Shape92.addChild(&Appearance93);

IndexedFaceSet& IndexedFaceSet95 =  IndexedFaceSet();
IndexedFaceSet95.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet95.setCreaseAngle(0.5);
IndexedFaceSet95.setSolid(false);
ColorRGBA& ColorRGBA96 =  ColorRGBA();
ColorRGBA96.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet95.addChild(&ColorRGBA96);

Coordinate& Coordinate97 =  Coordinate();
Coordinate97.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet95.setCoord(&Coordinate97);

Shape92.setGeometry(&IndexedFaceSet95);

HAnimSite90.addChild(&Shape92);

Billboard& Billboard98 =  Billboard();
Billboard98.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape99 =  Shape();
Text& Text100 =  Text();
Text100.setString(new CString[]{CString("34")}, 1);
CFontStyle& FontStyle101 =  CFontStyle();
FontStyle101.setSize(0.035);
Text100.setFontStyle(&FontStyle101);

Shape99.setGeometry(&Text100);

Billboard98.addChild(&Shape99);

HAnimSite90.addChild(Billboard98);

HAnimSegment17.addChild(&HAnimSite90);

HAnimSite& HAnimSite102 =  HAnimSite();
HAnimSite102.X3DNode::setName(CString("r_psis"));
HAnimSite102.setDEF(CString("hanim_r_psis_pt"));
HAnimSite102.setTranslation(new float[]{-0.05,0.84,-0.11});
TouchSensor& TouchSensor103 =  TouchSensor();
TouchSensor103.setDescription(CString("HAnimSite 37 hanim_r_psis_pt"));
HAnimSite102.addChild(&TouchSensor103);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance105.addChild(&Material106);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet107 =  IndexedFaceSet();
IndexedFaceSet107.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet107.setCreaseAngle(0.5);
IndexedFaceSet107.setSolid(false);
ColorRGBA& ColorRGBA108 =  ColorRGBA();
ColorRGBA108.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet107.addChild(&ColorRGBA108);

Coordinate& Coordinate109 =  Coordinate();
Coordinate109.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet107.setCoord(&Coordinate109);

Shape104.setGeometry(&IndexedFaceSet107);

HAnimSite102.addChild(&Shape104);

Billboard& Billboard110 =  Billboard();
Billboard110.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape111 =  Shape();
Text& Text112 =  Text();
Text112.setString(new CString[]{CString("37")}, 1);
CFontStyle& FontStyle113 =  CFontStyle();
FontStyle113.setSize(0.035);
Text112.setFontStyle(&FontStyle113);

Shape111.setGeometry(&Text112);

Billboard110.addChild(&Shape111);

HAnimSite102.addChild(Billboard110);

HAnimSegment17.addChild(&HAnimSite102);

HAnimSite& HAnimSite114 =  HAnimSite();
HAnimSite114.X3DNode::setName(CString("crotch"));
HAnimSite114.setDEF(CString("hanim_crotch_pt"));
HAnimSite114.setTranslation(new float[]{0.0,0.703,0.0});
TouchSensor& TouchSensor115 =  TouchSensor();
TouchSensor115.setDescription(CString("HAnimSite 38 hanim_crotch_pt"));
HAnimSite114.addChild(&TouchSensor115);

Shape& Shape116 =  Shape();
Appearance& Appearance117 =  Appearance();
Material& Material118 =  Material();
Material118.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance117.addChild(&Material118);

Shape116.addChild(&Appearance117);

IndexedFaceSet& IndexedFaceSet119 =  IndexedFaceSet();
IndexedFaceSet119.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet119.setCreaseAngle(0.5);
IndexedFaceSet119.setSolid(false);
ColorRGBA& ColorRGBA120 =  ColorRGBA();
ColorRGBA120.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet119.addChild(&ColorRGBA120);

Coordinate& Coordinate121 =  Coordinate();
Coordinate121.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet119.setCoord(&Coordinate121);

Shape116.setGeometry(&IndexedFaceSet119);

HAnimSite114.addChild(&Shape116);

Billboard& Billboard122 =  Billboard();
Billboard122.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape123 =  Shape();
Text& Text124 =  Text();
Text124.setString(new CString[]{CString("38")}, 1);
CFontStyle& FontStyle125 =  CFontStyle();
FontStyle125.setSize(0.035);
Text124.setFontStyle(&FontStyle125);

Shape123.setGeometry(&Text124);

Billboard122.addChild(&Shape123);

HAnimSite114.addChild(Billboard122);

HAnimSegment17.addChild(&HAnimSite114);

HAnimSite& HAnimSite126 =  HAnimSite();
HAnimSite126.X3DNode::setName(CString("buttocks_standing_wall_contact_point"));
HAnimSite126.setDEF(CString("hanim_buttocks_standing_wall_contact_point_pt"));
HAnimSite126.setTranslation(new float[]{0.0,0.8,-0.15});
TouchSensor& TouchSensor127 =  TouchSensor();
TouchSensor127.setDescription(CString("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt"));
HAnimSite126.addChild(&TouchSensor127);

Shape& Shape128 =  Shape();
Appearance& Appearance129 =  Appearance();
Material& Material130 =  Material();
Material130.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance129.addChild(&Material130);

Shape128.addChild(&Appearance129);

IndexedFaceSet& IndexedFaceSet131 =  IndexedFaceSet();
IndexedFaceSet131.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet131.setCreaseAngle(0.5);
IndexedFaceSet131.setSolid(false);
ColorRGBA& ColorRGBA132 =  ColorRGBA();
ColorRGBA132.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet131.addChild(&ColorRGBA132);

Coordinate& Coordinate133 =  Coordinate();
Coordinate133.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet131.setCoord(&Coordinate133);

Shape128.setGeometry(&IndexedFaceSet131);

HAnimSite126.addChild(&Shape128);

Billboard& Billboard134 =  Billboard();
Billboard134.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape135 =  Shape();
Text& Text136 =  Text();
Text136.setString(new CString[]{CString("93")}, 1);
CFontStyle& FontStyle137 =  CFontStyle();
FontStyle137.setSize(0.035);
Text136.setFontStyle(&FontStyle137);

Shape135.setGeometry(&Text136);

Billboard134.addChild(&Shape135);

HAnimSite126.addChild(Billboard134);

HAnimSegment17.addChild(&HAnimSite126);

Shape& Shape138 =  Shape();
LineSet& LineSet139 =  LineSet();
LineSet139.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA140 =  ColorRGBA();
ColorRGBA140.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet139.addChild(&ColorRGBA140);

Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setPoint(new float[]{0.0,0.826,0.02,0.0,0.77,0.0}, 6);
LineSet139.setCoord(Coordinate141);

Shape138.setGeometry(&LineSet139);

HAnimSegment17.addChild(&Shape138);

HAnimJoint16.addChildren(&HAnimSegment17);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.X3DNode::setName(CString("l_hip"));
HAnimJoint142.setDEF(CString("hanim_l_hip"));
HAnimJoint142.setCenter(new float[]{0.095,0.8266,-0.0183});
HAnimJoint142.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint142.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment143 =  HAnimSegment();
HAnimSegment143.X3DNode::setName(CString("l_thigh"));
HAnimSegment143.setDEF(CString("hanim_l_thigh"));
HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.X3DNode::setName(CString("l_knee_crease"));
HAnimSite144.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite144.setTranslation(new float[]{0.09,0.41,-0.056});
TouchSensor& TouchSensor145 =  TouchSensor();
TouchSensor145.setDescription(CString("HAnimSite 90 hanim_l_knee_crease_pt"));
HAnimSite144.addChild(&TouchSensor145);

Shape& Shape146 =  Shape();
Appearance& Appearance147 =  Appearance();
Material& Material148 =  Material();
Material148.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance147.addChild(&Material148);

Shape146.addChild(&Appearance147);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet149.setCreaseAngle(0.5);
IndexedFaceSet149.setSolid(false);
ColorRGBA& ColorRGBA150 =  ColorRGBA();
ColorRGBA150.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet149.addChild(&ColorRGBA150);

Coordinate& Coordinate151 =  Coordinate();
Coordinate151.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet149.setCoord(&Coordinate151);

Shape146.setGeometry(&IndexedFaceSet149);

HAnimSite144.addChild(&Shape146);

Billboard& Billboard152 =  Billboard();
Billboard152.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape153 =  Shape();
Text& Text154 =  Text();
Text154.setString(new CString[]{CString("90")}, 1);
CFontStyle& FontStyle155 =  CFontStyle();
FontStyle155.setSize(0.035);
Text154.setFontStyle(&FontStyle155);

Shape153.setGeometry(&Text154);

Billboard152.addChild(&Shape153);

HAnimSite144.addChild(Billboard152);

HAnimSegment143.addChild(&HAnimSite144);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.X3DNode::setName(CString("l_femoral_medial_epicondyle"));
HAnimSite156.setDEF(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimSite156.setTranslation(new float[]{0.039,0.41,-0.01});
TouchSensor& TouchSensor157 =  TouchSensor();
TouchSensor157.setDescription(CString("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt"));
HAnimSite156.addChild(&TouchSensor157);

Shape& Shape158 =  Shape();
Appearance& Appearance159 =  Appearance();
Material& Material160 =  Material();
Material160.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance159.addChild(&Material160);

Shape158.addChild(&Appearance159);

IndexedFaceSet& IndexedFaceSet161 =  IndexedFaceSet();
IndexedFaceSet161.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet161.setCreaseAngle(0.5);
IndexedFaceSet161.setSolid(false);
ColorRGBA& ColorRGBA162 =  ColorRGBA();
ColorRGBA162.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet161.addChild(&ColorRGBA162);

Coordinate& Coordinate163 =  Coordinate();
Coordinate163.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet161.setCoord(&Coordinate163);

Shape158.setGeometry(&IndexedFaceSet161);

HAnimSite156.addChild(&Shape158);

Billboard& Billboard164 =  Billboard();
Billboard164.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape165 =  Shape();
Text& Text166 =  Text();
Text166.setString(new CString[]{CString("40")}, 1);
CFontStyle& FontStyle167 =  CFontStyle();
FontStyle167.setSize(0.035);
Text166.setFontStyle(&FontStyle167);

Shape165.setGeometry(&Text166);

Billboard164.addChild(&Shape165);

HAnimSite156.addChild(Billboard164);

HAnimSegment143.addChild(&HAnimSite156);

HAnimSite& HAnimSite168 =  HAnimSite();
HAnimSite168.X3DNode::setName(CString("l_femoral_lateral_epicondyle"));
HAnimSite168.setDEF(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimSite168.setTranslation(new float[]{0.127,0.41,-0.01});
TouchSensor& TouchSensor169 =  TouchSensor();
TouchSensor169.setDescription(CString("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt"));
HAnimSite168.addChild(&TouchSensor169);

Shape& Shape170 =  Shape();
Appearance& Appearance171 =  Appearance();
Material& Material172 =  Material();
Material172.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance171.addChild(&Material172);

Shape170.addChild(&Appearance171);

IndexedFaceSet& IndexedFaceSet173 =  IndexedFaceSet();
IndexedFaceSet173.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet173.setCreaseAngle(0.5);
IndexedFaceSet173.setSolid(false);
ColorRGBA& ColorRGBA174 =  ColorRGBA();
ColorRGBA174.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet173.addChild(&ColorRGBA174);

Coordinate& Coordinate175 =  Coordinate();
Coordinate175.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet173.setCoord(&Coordinate175);

Shape170.setGeometry(&IndexedFaceSet173);

HAnimSite168.addChild(&Shape170);

Billboard& Billboard176 =  Billboard();
Billboard176.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape177 =  Shape();
Text& Text178 =  Text();
Text178.setString(new CString[]{CString("39")}, 1);
CFontStyle& FontStyle179 =  CFontStyle();
FontStyle179.setSize(0.035);
Text178.setFontStyle(&FontStyle179);

Shape177.setGeometry(&Text178);

Billboard176.addChild(&Shape177);

HAnimSite168.addChild(Billboard176);

HAnimSegment143.addChild(&HAnimSite168);

HAnimSite& HAnimSite180 =  HAnimSite();
HAnimSite180.X3DNode::setName(CString("l_suprapatella"));
HAnimSite180.setDEF(CString("hanim_l_suprapatella_pt"));
HAnimSite180.setTranslation(new float[]{0.085,0.41,0.042});
TouchSensor& TouchSensor181 =  TouchSensor();
TouchSensor181.setDescription(CString("HAnimSite 41 hanim_l_suprapatella_pt"));
HAnimSite180.addChild(&TouchSensor181);

Shape& Shape182 =  Shape();
Appearance& Appearance183 =  Appearance();
Material& Material184 =  Material();
Material184.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance183.addChild(&Material184);

Shape182.addChild(&Appearance183);

IndexedFaceSet& IndexedFaceSet185 =  IndexedFaceSet();
IndexedFaceSet185.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet185.setCreaseAngle(0.5);
IndexedFaceSet185.setSolid(false);
ColorRGBA& ColorRGBA186 =  ColorRGBA();
ColorRGBA186.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet185.addChild(&ColorRGBA186);

Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet185.setCoord(&Coordinate187);

Shape182.setGeometry(&IndexedFaceSet185);

HAnimSite180.addChild(&Shape182);

Billboard& Billboard188 =  Billboard();
Billboard188.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape189 =  Shape();
Text& Text190 =  Text();
Text190.setString(new CString[]{CString("41")}, 1);
CFontStyle& FontStyle191 =  CFontStyle();
FontStyle191.setSize(0.035);
Text190.setFontStyle(&FontStyle191);

Shape189.setGeometry(&Text190);

Billboard188.addChild(&Shape189);

HAnimSite180.addChild(Billboard188);

HAnimSegment143.addChild(&HAnimSite180);

Shape& Shape192 =  Shape();
LineSet& LineSet193 =  LineSet();
LineSet193.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA194 =  ColorRGBA();
ColorRGBA194.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet193.addChild(&ColorRGBA194);

Coordinate& Coordinate195 =  Coordinate();
Coordinate195.setPoint(new float[]{0.095,0.8266,-0.0183,0.0,0.826,0.02}, 6);
LineSet193.setCoord(Coordinate195);

Shape192.setGeometry(&LineSet193);

HAnimSegment143.addChild(&Shape192);

HAnimJoint142.addChildren(&HAnimSegment143);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.X3DNode::setName(CString("l_knee"));
HAnimJoint196.setDEF(CString("hanim_l_knee"));
HAnimJoint196.setCenter(new float[]{0.0926,0.4088,-0.01944});
HAnimJoint196.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint196.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment197 =  HAnimSegment();
HAnimSegment197.X3DNode::setName(CString("l_calf"));
HAnimSegment197.setDEF(CString("hanim_l_calf"));
HAnimSite& HAnimSite198 =  HAnimSite();
HAnimSite198.X3DNode::setName(CString("l_tibiale"));
HAnimSite198.setDEF(CString("hanim_l_tibiale_pt"));
HAnimSite198.setTranslation(new float[]{0.09,0.31,0.038});
TouchSensor& TouchSensor199 =  TouchSensor();
TouchSensor199.setDescription(CString("HAnimSite 47 hanim_l_tibiale_pt"));
HAnimSite198.addChild(&TouchSensor199);

Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Material202.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance201.addChild(&Material202);

Shape200.addChild(&Appearance201);

IndexedFaceSet& IndexedFaceSet203 =  IndexedFaceSet();
IndexedFaceSet203.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet203.setCreaseAngle(0.5);
IndexedFaceSet203.setSolid(false);
ColorRGBA& ColorRGBA204 =  ColorRGBA();
ColorRGBA204.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet203.addChild(&ColorRGBA204);

Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet203.setCoord(&Coordinate205);

Shape200.setGeometry(&IndexedFaceSet203);

HAnimSite198.addChild(&Shape200);

Billboard& Billboard206 =  Billboard();
Billboard206.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape207 =  Shape();
Text& Text208 =  Text();
Text208.setString(new CString[]{CString("47")}, 1);
CFontStyle& FontStyle209 =  CFontStyle();
FontStyle209.setSize(0.035);
Text208.setFontStyle(&FontStyle209);

Shape207.setGeometry(&Text208);

Billboard206.addChild(&Shape207);

HAnimSite198.addChild(Billboard206);

HAnimSegment197.addChild(&HAnimSite198);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.X3DNode::setName(CString("l_medial_malleolus"));
HAnimSite210.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite210.setTranslation(new float[]{0.061,0.095,-0.02});
TouchSensor& TouchSensor211 =  TouchSensor();
TouchSensor211.setDescription(CString("HAnimSite 48 hanim_l_medial_malleolus_pt"));
HAnimSite210.addChild(&TouchSensor211);

Shape& Shape212 =  Shape();
Appearance& Appearance213 =  Appearance();
Material& Material214 =  Material();
Material214.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance213.addChild(&Material214);

Shape212.addChild(&Appearance213);

IndexedFaceSet& IndexedFaceSet215 =  IndexedFaceSet();
IndexedFaceSet215.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet215.setCreaseAngle(0.5);
IndexedFaceSet215.setSolid(false);
ColorRGBA& ColorRGBA216 =  ColorRGBA();
ColorRGBA216.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet215.addChild(&ColorRGBA216);

Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet215.setCoord(&Coordinate217);

Shape212.setGeometry(&IndexedFaceSet215);

HAnimSite210.addChild(&Shape212);

Billboard& Billboard218 =  Billboard();
Billboard218.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape219 =  Shape();
Text& Text220 =  Text();
Text220.setString(new CString[]{CString("48")}, 1);
CFontStyle& FontStyle221 =  CFontStyle();
FontStyle221.setSize(0.035);
Text220.setFontStyle(&FontStyle221);

Shape219.setGeometry(&Text220);

Billboard218.addChild(&Shape219);

HAnimSite210.addChild(Billboard218);

HAnimSegment197.addChild(&HAnimSite210);

HAnimSite& HAnimSite222 =  HAnimSite();
HAnimSite222.X3DNode::setName(CString("l_lateral_malleolus"));
HAnimSite222.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite222.setTranslation(new float[]{0.12,0.095,-0.02});
TouchSensor& TouchSensor223 =  TouchSensor();
TouchSensor223.setDescription(CString("HAnimSite 49 hanim_l_lateral_malleolus_pt"));
HAnimSite222.addChild(&TouchSensor223);

Shape& Shape224 =  Shape();
Appearance& Appearance225 =  Appearance();
Material& Material226 =  Material();
Material226.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance225.addChild(&Material226);

Shape224.addChild(&Appearance225);

IndexedFaceSet& IndexedFaceSet227 =  IndexedFaceSet();
IndexedFaceSet227.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet227.setCreaseAngle(0.5);
IndexedFaceSet227.setSolid(false);
ColorRGBA& ColorRGBA228 =  ColorRGBA();
ColorRGBA228.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet227.addChild(&ColorRGBA228);

Coordinate& Coordinate229 =  Coordinate();
Coordinate229.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet227.setCoord(&Coordinate229);

Shape224.setGeometry(&IndexedFaceSet227);

HAnimSite222.addChild(&Shape224);

Billboard& Billboard230 =  Billboard();
Billboard230.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape231 =  Shape();
Text& Text232 =  Text();
Text232.setString(new CString[]{CString("49")}, 1);
CFontStyle& FontStyle233 =  CFontStyle();
FontStyle233.setSize(0.035);
Text232.setFontStyle(&FontStyle233);

Shape231.setGeometry(&Text232);

Billboard230.addChild(&Shape231);

HAnimSite222.addChild(Billboard230);

HAnimSegment197.addChild(&HAnimSite222);

Shape& Shape234 =  Shape();
LineSet& LineSet235 =  LineSet();
LineSet235.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA236 =  ColorRGBA();
ColorRGBA236.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet235.addChild(&ColorRGBA236);

Coordinate& Coordinate237 =  Coordinate();
Coordinate237.setPoint(new float[]{0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183}, 6);
LineSet235.setCoord(Coordinate237);

Shape234.setGeometry(&LineSet235);

HAnimSegment197.addChild(&Shape234);

HAnimJoint196.addChildren(&HAnimSegment197);

HAnimJoint& HAnimJoint238 =  HAnimJoint();
HAnimJoint238.X3DNode::setName(CString("l_talocrural"));
HAnimJoint238.setDEF(CString("hanim_l_talocrural"));
HAnimJoint238.setCenter(new float[]{0.0888,0.09545,-0.01045});
HAnimJoint238.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint238.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment239 =  HAnimSegment();
HAnimSegment239.X3DNode::setName(CString("l_talus"));
HAnimSegment239.setDEF(CString("hanim_l_talus"));
HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.X3DNode::setName(CString("l_sphyrion"));
HAnimSite240.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite240.setTranslation(new float[]{0.054,0.065,-0.02});
TouchSensor& TouchSensor241 =  TouchSensor();
TouchSensor241.setDescription(CString("HAnimSite 50 hanim_l_sphyrion_pt"));
HAnimSite240.addChild(&TouchSensor241);

Shape& Shape242 =  Shape();
Appearance& Appearance243 =  Appearance();
Material& Material244 =  Material();
Material244.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance243.addChild(&Material244);

Shape242.addChild(&Appearance243);

IndexedFaceSet& IndexedFaceSet245 =  IndexedFaceSet();
IndexedFaceSet245.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet245.setCreaseAngle(0.5);
IndexedFaceSet245.setSolid(false);
ColorRGBA& ColorRGBA246 =  ColorRGBA();
ColorRGBA246.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet245.addChild(&ColorRGBA246);

Coordinate& Coordinate247 =  Coordinate();
Coordinate247.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet245.setCoord(&Coordinate247);

Shape242.setGeometry(&IndexedFaceSet245);

HAnimSite240.addChild(&Shape242);

Billboard& Billboard248 =  Billboard();
Billboard248.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape249 =  Shape();
Text& Text250 =  Text();
Text250.setString(new CString[]{CString("50")}, 1);
CFontStyle& FontStyle251 =  CFontStyle();
FontStyle251.setSize(0.035);
Text250.setFontStyle(&FontStyle251);

Shape249.setGeometry(&Text250);

Billboard248.addChild(&Shape249);

HAnimSite240.addChild(Billboard248);

HAnimSegment239.addChild(&HAnimSite240);

HAnimSite& HAnimSite252 =  HAnimSite();
HAnimSite252.X3DNode::setName(CString("l_calcaneus_posterior"));
HAnimSite252.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite252.setTranslation(new float[]{0.09,0.03,-0.06});
TouchSensor& TouchSensor253 =  TouchSensor();
TouchSensor253.setDescription(CString("HAnimSite 58 hanim_l_calcaneus_posterior_pt"));
HAnimSite252.addChild(&TouchSensor253);

Shape& Shape254 =  Shape();
Appearance& Appearance255 =  Appearance();
Material& Material256 =  Material();
Material256.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance255.addChild(&Material256);

Shape254.addChild(&Appearance255);

IndexedFaceSet& IndexedFaceSet257 =  IndexedFaceSet();
IndexedFaceSet257.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet257.setCreaseAngle(0.5);
IndexedFaceSet257.setSolid(false);
ColorRGBA& ColorRGBA258 =  ColorRGBA();
ColorRGBA258.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet257.addChild(&ColorRGBA258);

Coordinate& Coordinate259 =  Coordinate();
Coordinate259.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet257.setCoord(&Coordinate259);

Shape254.setGeometry(&IndexedFaceSet257);

HAnimSite252.addChild(&Shape254);

Billboard& Billboard260 =  Billboard();
Billboard260.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape261 =  Shape();
Text& Text262 =  Text();
Text262.setString(new CString[]{CString("58")}, 1);
CFontStyle& FontStyle263 =  CFontStyle();
FontStyle263.setSize(0.035);
Text262.setFontStyle(&FontStyle263);

Shape261.setGeometry(&Text262);

Billboard260.addChild(&Shape261);

HAnimSite252.addChild(Billboard260);

HAnimSegment239.addChild(&HAnimSite252);

Shape& Shape264 =  Shape();
LineSet& LineSet265 =  LineSet();
LineSet265.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA266 =  ColorRGBA();
ColorRGBA266.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet265.addChild(&ColorRGBA266);

Coordinate& Coordinate267 =  Coordinate();
Coordinate267.setPoint(new float[]{0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944}, 6);
LineSet265.setCoord(Coordinate267);

Shape264.setGeometry(&LineSet265);

HAnimSegment239.addChild(&Shape264);

HAnimJoint238.addChildren(&HAnimSegment239);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint268.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint268.setCenter(new float[]{0.0783,0.0369,0.0049});
HAnimJoint268.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint268.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment269 =  HAnimSegment();
HAnimSegment269.X3DNode::setName(CString("l_navicular"));
HAnimSegment269.setDEF(CString("hanim_l_navicular"));
Shape& Shape270 =  Shape();
LineSet& LineSet271 =  LineSet();
LineSet271.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA272 =  ColorRGBA();
ColorRGBA272.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet271.addChild(&ColorRGBA272);

Coordinate& Coordinate273 =  Coordinate();
Coordinate273.setPoint(new float[]{0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045}, 6);
LineSet271.setCoord(Coordinate273);

Shape270.setGeometry(&LineSet271);

HAnimSegment269.addChild(&Shape270);

HAnimJoint268.addChildren(&HAnimSegment269);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint274.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint274.setCenter(new float[]{0.0674,0.0321,0.0184});
HAnimJoint274.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint274.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment275 =  HAnimSegment();
HAnimSegment275.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment275.setDEF(CString("hanim_l_cuneiform_1"));
Shape& Shape276 =  Shape();
LineSet& LineSet277 =  LineSet();
LineSet277.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA278 =  ColorRGBA();
ColorRGBA278.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet277.addChild(&ColorRGBA278);

Coordinate& Coordinate279 =  Coordinate();
Coordinate279.setPoint(new float[]{0.0674,0.0321,0.0184,0.0783,0.0369,0.0049}, 6);
LineSet277.setCoord(Coordinate279);

Shape276.setGeometry(&LineSet277);

HAnimSegment275.addChild(&Shape276);

HAnimJoint274.addChildren(&HAnimSegment275);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint280.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint280.setCenter(new float[]{0.0646,0.02324,0.0442});
HAnimJoint280.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint280.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment281 =  HAnimSegment();
HAnimSegment281.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment281.setDEF(CString("hanim_l_metatarsal_1"));
Shape& Shape282 =  Shape();
LineSet& LineSet283 =  LineSet();
LineSet283.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA284 =  ColorRGBA();
ColorRGBA284.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet283.addChild(&ColorRGBA284);

Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[]{0.0646,0.02324,0.0442,0.0674,0.0321,0.0184}, 6);
LineSet283.setCoord(Coordinate285);

Shape282.setGeometry(&LineSet283);

HAnimSegment281.addChild(&Shape282);

HAnimJoint280.addChildren(&HAnimSegment281);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint286.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint286.setCenter(new float[]{0.0621,0.01442,0.0936});
HAnimJoint286.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint286.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment287 =  HAnimSegment();
HAnimSegment287.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment287.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimSite& HAnimSite288 =  HAnimSite();
HAnimSite288.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite288.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite288.setTranslation(new float[]{0.062,0.012,0.1});
TouchSensor& TouchSensor289 =  TouchSensor();
TouchSensor289.setDescription(CString("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite288.addChild(&TouchSensor289);

Shape& Shape290 =  Shape();
Appearance& Appearance291 =  Appearance();
Material& Material292 =  Material();
Material292.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance291.addChild(&Material292);

Shape290.addChild(&Appearance291);

IndexedFaceSet& IndexedFaceSet293 =  IndexedFaceSet();
IndexedFaceSet293.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet293.setCreaseAngle(0.5);
IndexedFaceSet293.setSolid(false);
ColorRGBA& ColorRGBA294 =  ColorRGBA();
ColorRGBA294.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet293.addChild(&ColorRGBA294);

Coordinate& Coordinate295 =  Coordinate();
Coordinate295.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet293.setCoord(&Coordinate295);

Shape290.setGeometry(&IndexedFaceSet293);

HAnimSite288.addChild(&Shape290);

Billboard& Billboard296 =  Billboard();
Billboard296.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape297 =  Shape();
Text& Text298 =  Text();
Text298.setString(new CString[]{CString("55")}, 1);
CFontStyle& FontStyle299 =  CFontStyle();
FontStyle299.setSize(0.035);
Text298.setFontStyle(&FontStyle299);

Shape297.setGeometry(&Text298);

Billboard296.addChild(&Shape297);

HAnimSite288.addChild(Billboard296);

HAnimSegment287.addChild(&HAnimSite288);

Shape& Shape300 =  Shape();
LineSet& LineSet301 =  LineSet();
LineSet301.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA302 =  ColorRGBA();
ColorRGBA302.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet301.addChild(&ColorRGBA302);

Coordinate& Coordinate303 =  Coordinate();
Coordinate303.setPoint(new float[]{0.0621,0.01442,0.0936,0.0646,0.02324,0.0442}, 6);
LineSet301.setCoord(Coordinate303);

Shape300.setGeometry(&LineSet301);

HAnimSegment287.addChild(&Shape300);

HAnimJoint286.addChildren(&HAnimSegment287);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint304.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint304.setCenter(new float[]{0.062,0.012,0.115});
HAnimJoint304.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint304.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment305 =  HAnimSegment();
HAnimSegment305.X3DNode::setName(CString("l_tarsal_distal_phalanx_1"));
HAnimSegment305.setDEF(CString("hanim_l_tarsal_distal_phalanx_1"));
HAnimSite& HAnimSite306 =  HAnimSite();
HAnimSite306.X3DNode::setName(CString("l_tarsal_distal_phalanx_1"));
HAnimSite306.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimSite306.setTranslation(new float[]{0.062,0.012,0.134});
TouchSensor& TouchSensor307 =  TouchSensor();
TouchSensor307.setDescription(CString("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimSite306.addChild(&TouchSensor307);

Shape& Shape308 =  Shape();
Appearance& Appearance309 =  Appearance();
Material& Material310 =  Material();
Material310.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance309.addChild(&Material310);

Shape308.addChild(&Appearance309);

IndexedFaceSet& IndexedFaceSet311 =  IndexedFaceSet();
IndexedFaceSet311.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet311.setCreaseAngle(0.5);
IndexedFaceSet311.setSolid(false);
ColorRGBA& ColorRGBA312 =  ColorRGBA();
ColorRGBA312.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet311.addChild(&ColorRGBA312);

Coordinate& Coordinate313 =  Coordinate();
Coordinate313.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet311.setCoord(&Coordinate313);

Shape308.setGeometry(&IndexedFaceSet311);

HAnimSite306.addChild(&Shape308);

Billboard& Billboard314 =  Billboard();
Billboard314.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape315 =  Shape();
Text& Text316 =  Text();
Text316.setString(new CString[]{CString("111")}, 1);
CFontStyle& FontStyle317 =  CFontStyle();
FontStyle317.setSize(0.035);
Text316.setFontStyle(&FontStyle317);

Shape315.setGeometry(&Text316);

Billboard314.addChild(&Shape315);

HAnimSite306.addChild(Billboard314);

HAnimSegment305.addChild(&HAnimSite306);

Shape& Shape318 =  Shape();
LineSet& LineSet319 =  LineSet();
LineSet319.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA320 =  ColorRGBA();
ColorRGBA320.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet319.addChild(&ColorRGBA320);

Coordinate& Coordinate321 =  Coordinate();
Coordinate321.setPoint(new float[]{0.062,0.012,0.115,0.0621,0.01442,0.0936}, 6);
LineSet319.setCoord(Coordinate321);

Shape318.setGeometry(&LineSet319);

HAnimSegment305.addChild(&Shape318);

HAnimJoint304.addChildren(&HAnimSegment305);

HAnimJoint286.addChildren(&HAnimJoint304);

HAnimJoint280.addChildren(&HAnimJoint286);

HAnimJoint274.addChildren(&HAnimJoint280);

HAnimJoint268.addChildren(&HAnimJoint274);

HAnimJoint& HAnimJoint322 =  HAnimJoint();
HAnimJoint322.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint322.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint322.setCenter(new float[]{0.0814,0.0335,0.02143});
HAnimJoint322.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint322.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment323 =  HAnimSegment();
HAnimSegment323.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment323.setDEF(CString("hanim_l_cuneiform_2"));
Shape& Shape324 =  Shape();
LineSet& LineSet325 =  LineSet();
LineSet325.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA326 =  ColorRGBA();
ColorRGBA326.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet325.addChild(&ColorRGBA326);

Coordinate& Coordinate327 =  Coordinate();
Coordinate327.setPoint(new float[]{0.0814,0.0335,0.02143,0.0783,0.0369,0.0049}, 6);
LineSet325.setCoord(Coordinate327);

Shape324.setGeometry(&LineSet325);

HAnimSegment323.addChild(&Shape324);

HAnimJoint322.addChildren(&HAnimSegment323);

HAnimJoint& HAnimJoint328 =  HAnimJoint();
HAnimJoint328.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint328.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint328.setCenter(new float[]{0.0802,0.0261,0.0411});
HAnimJoint328.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint328.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment329 =  HAnimSegment();
HAnimSegment329.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment329.setDEF(CString("hanim_l_metatarsal_2"));
Shape& Shape330 =  Shape();
LineSet& LineSet331 =  LineSet();
LineSet331.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA332 =  ColorRGBA();
ColorRGBA332.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet331.addChild(&ColorRGBA332);

Coordinate& Coordinate333 =  Coordinate();
Coordinate333.setPoint(new float[]{0.0802,0.0261,0.0411,0.0814,0.0335,0.02143}, 6);
LineSet331.setCoord(Coordinate333);

Shape330.setGeometry(&LineSet331);

HAnimSegment329.addChild(&Shape330);

HAnimJoint328.addChildren(&HAnimSegment329);

HAnimJoint& HAnimJoint334 =  HAnimJoint();
HAnimJoint334.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint334.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint334.setCenter(new float[]{0.0825,0.01497,0.09783});
HAnimJoint334.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint334.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment335 =  HAnimSegment();
HAnimSegment335.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment335.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Shape& Shape336 =  Shape();
LineSet& LineSet337 =  LineSet();
LineSet337.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA338 =  ColorRGBA();
ColorRGBA338.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet337.addChild(&ColorRGBA338);

Coordinate& Coordinate339 =  Coordinate();
Coordinate339.setPoint(new float[]{0.0825,0.01497,0.09783,0.0802,0.0261,0.0411}, 6);
LineSet337.setCoord(Coordinate339);

Shape336.setGeometry(&LineSet337);

HAnimSegment335.addChild(&Shape336);

HAnimJoint334.addChildren(&HAnimSegment335);

HAnimJoint& HAnimJoint340 =  HAnimJoint();
HAnimJoint340.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint340.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint340.setCenter(new float[]{0.0843,0.01265,0.114});
HAnimJoint340.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint340.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment341 =  HAnimSegment();
HAnimSegment341.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment341.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Shape& Shape342 =  Shape();
LineSet& LineSet343 =  LineSet();
LineSet343.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA344 =  ColorRGBA();
ColorRGBA344.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet343.addChild(&ColorRGBA344);

Coordinate& Coordinate345 =  Coordinate();
Coordinate345.setPoint(new float[]{0.0843,0.01265,0.114,0.0825,0.01497,0.09783}, 6);
LineSet343.setCoord(Coordinate345);

Shape342.setGeometry(&LineSet343);

HAnimSegment341.addChild(&Shape342);

HAnimJoint340.addChildren(&HAnimSegment341);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint346.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint346.setCenter(new float[]{0.0843,0.00982,0.123435});
HAnimJoint346.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint346.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment347 =  HAnimSegment();
HAnimSegment347.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSegment347.setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimSite& HAnimSite348 =  HAnimSite();
HAnimSite348.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSite348.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite348.setTranslation(new float[]{0.08,0.016,0.14});
TouchSensor& TouchSensor349 =  TouchSensor();
TouchSensor349.setDescription(CString("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite348.addChild(&TouchSensor349);

Shape& Shape350 =  Shape();
Appearance& Appearance351 =  Appearance();
Material& Material352 =  Material();
Material352.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance351.addChild(&Material352);

Shape350.addChild(&Appearance351);

IndexedFaceSet& IndexedFaceSet353 =  IndexedFaceSet();
IndexedFaceSet353.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet353.setCreaseAngle(0.5);
IndexedFaceSet353.setSolid(false);
ColorRGBA& ColorRGBA354 =  ColorRGBA();
ColorRGBA354.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet353.addChild(&ColorRGBA354);

Coordinate& Coordinate355 =  Coordinate();
Coordinate355.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet353.setCoord(&Coordinate355);

Shape350.setGeometry(&IndexedFaceSet353);

HAnimSite348.addChild(&Shape350);

Billboard& Billboard356 =  Billboard();
Billboard356.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape357 =  Shape();
Text& Text358 =  Text();
Text358.setString(new CString[]{CString("112")}, 1);
CFontStyle& FontStyle359 =  CFontStyle();
FontStyle359.setSize(0.035);
Text358.setFontStyle(&FontStyle359);

Shape357.setGeometry(&Text358);

Billboard356.addChild(&Shape357);

HAnimSite348.addChild(Billboard356);

HAnimSegment347.addChild(&HAnimSite348);

Shape& Shape360 =  Shape();
LineSet& LineSet361 =  LineSet();
LineSet361.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA362 =  ColorRGBA();
ColorRGBA362.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet361.addChild(&ColorRGBA362);

Coordinate& Coordinate363 =  Coordinate();
Coordinate363.setPoint(new float[]{0.0843,0.00982,0.123435,0.0843,0.01265,0.114}, 6);
LineSet361.setCoord(Coordinate363);

Shape360.setGeometry(&LineSet361);

HAnimSegment347.addChild(&Shape360);

HAnimJoint346.addChildren(&HAnimSegment347);

HAnimJoint340.addChildren(&HAnimJoint346);

HAnimJoint334.addChildren(&HAnimJoint340);

HAnimJoint328.addChildren(&HAnimJoint334);

HAnimJoint322.addChildren(&HAnimJoint328);

HAnimJoint268.addChildren(&HAnimJoint322);

HAnimJoint& HAnimJoint364 =  HAnimJoint();
HAnimJoint364.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint364.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint364.setCenter(new float[]{0.09297,0.0334,0.01982});
HAnimJoint364.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint364.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment365 =  HAnimSegment();
HAnimSegment365.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment365.setDEF(CString("hanim_l_cuneiform_3"));
Shape& Shape366 =  Shape();
LineSet& LineSet367 =  LineSet();
LineSet367.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA368 =  ColorRGBA();
ColorRGBA368.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet367.addChild(&ColorRGBA368);

Coordinate& Coordinate369 =  Coordinate();
Coordinate369.setPoint(new float[]{0.09297,0.0334,0.01982,0.0783,0.0369,0.0049}, 6);
LineSet367.setCoord(Coordinate369);

Shape366.setGeometry(&LineSet367);

HAnimSegment365.addChild(&Shape366);

HAnimJoint364.addChildren(&HAnimSegment365);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint370.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint370.setCenter(new float[]{0.09459,0.0261,0.0394});
HAnimJoint370.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint370.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment371 =  HAnimSegment();
HAnimSegment371.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment371.setDEF(CString("hanim_l_metatarsal_3"));
Shape& Shape372 =  Shape();
LineSet& LineSet373 =  LineSet();
LineSet373.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA374 =  ColorRGBA();
ColorRGBA374.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet373.addChild(&ColorRGBA374);

Coordinate& Coordinate375 =  Coordinate();
Coordinate375.setPoint(new float[]{0.09459,0.0261,0.0394,0.09297,0.0334,0.01982}, 6);
LineSet373.setCoord(Coordinate375);

Shape372.setGeometry(&LineSet373);

HAnimSegment371.addChild(&Shape372);

HAnimJoint370.addChildren(&HAnimSegment371);

HAnimJoint& HAnimJoint376 =  HAnimJoint();
HAnimJoint376.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint376.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint376.setCenter(new float[]{0.0965,0.01505,0.0954});
HAnimJoint376.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint376.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment377 =  HAnimSegment();
HAnimSegment377.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment377.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Shape& Shape378 =  Shape();
LineSet& LineSet379 =  LineSet();
LineSet379.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA380 =  ColorRGBA();
ColorRGBA380.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet379.addChild(&ColorRGBA380);

Coordinate& Coordinate381 =  Coordinate();
Coordinate381.setPoint(new float[]{0.0965,0.01505,0.0954,0.09459,0.0261,0.0394}, 6);
LineSet379.setCoord(Coordinate381);

Shape378.setGeometry(&LineSet379);

HAnimSegment377.addChild(&Shape378);

HAnimJoint376.addChildren(&HAnimSegment377);

HAnimJoint& HAnimJoint382 =  HAnimJoint();
HAnimJoint382.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint382.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint382.setCenter(new float[]{0.09886,0.01192,0.11047});
HAnimJoint382.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint382.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment383 =  HAnimSegment();
HAnimSegment383.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment383.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Shape& Shape384 =  Shape();
LineSet& LineSet385 =  LineSet();
LineSet385.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA386 =  ColorRGBA();
ColorRGBA386.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet385.addChild(&ColorRGBA386);

Coordinate& Coordinate387 =  Coordinate();
Coordinate387.setPoint(new float[]{0.09886,0.01192,0.11047,0.0965,0.01505,0.0954}, 6);
LineSet385.setCoord(Coordinate387);

Shape384.setGeometry(&LineSet385);

HAnimSegment383.addChild(&Shape384);

HAnimJoint382.addChildren(&HAnimSegment383);

HAnimJoint& HAnimJoint388 =  HAnimJoint();
HAnimJoint388.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint388.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint388.setCenter(new float[]{0.1004,0.00983,0.1197});
HAnimJoint388.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint388.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment389 =  HAnimSegment();
HAnimSegment389.X3DNode::setName(CString("l_tarsal_distal_phalanx_3"));
HAnimSegment389.setDEF(CString("hanim_l_tarsal_distal_phalanx_3"));
HAnimSite& HAnimSite390 =  HAnimSite();
HAnimSite390.X3DNode::setName(CString("l_tarsal_distal_phalanx_3"));
HAnimSite390.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimSite390.setTranslation(new float[]{0.1,0.016,0.14});
TouchSensor& TouchSensor391 =  TouchSensor();
TouchSensor391.setDescription(CString("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimSite390.addChild(&TouchSensor391);

Shape& Shape392 =  Shape();
Appearance& Appearance393 =  Appearance();
Material& Material394 =  Material();
Material394.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance393.addChild(&Material394);

Shape392.addChild(&Appearance393);

IndexedFaceSet& IndexedFaceSet395 =  IndexedFaceSet();
IndexedFaceSet395.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet395.setCreaseAngle(0.5);
IndexedFaceSet395.setSolid(false);
ColorRGBA& ColorRGBA396 =  ColorRGBA();
ColorRGBA396.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet395.addChild(&ColorRGBA396);

Coordinate& Coordinate397 =  Coordinate();
Coordinate397.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet395.setCoord(&Coordinate397);

Shape392.setGeometry(&IndexedFaceSet395);

HAnimSite390.addChild(&Shape392);

Billboard& Billboard398 =  Billboard();
Billboard398.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape399 =  Shape();
Text& Text400 =  Text();
Text400.setString(new CString[]{CString("113")}, 1);
CFontStyle& FontStyle401 =  CFontStyle();
FontStyle401.setSize(0.035);
Text400.setFontStyle(&FontStyle401);

Shape399.setGeometry(&Text400);

Billboard398.addChild(&Shape399);

HAnimSite390.addChild(Billboard398);

HAnimSegment389.addChild(&HAnimSite390);

Shape& Shape402 =  Shape();
LineSet& LineSet403 =  LineSet();
LineSet403.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA404 =  ColorRGBA();
ColorRGBA404.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet403.addChild(&ColorRGBA404);

Coordinate& Coordinate405 =  Coordinate();
Coordinate405.setPoint(new float[]{0.1004,0.00983,0.1197,0.09886,0.01192,0.11047}, 6);
LineSet403.setCoord(Coordinate405);

Shape402.setGeometry(&LineSet403);

HAnimSegment389.addChild(&Shape402);

HAnimJoint388.addChildren(&HAnimSegment389);

HAnimJoint382.addChildren(&HAnimJoint388);

HAnimJoint376.addChildren(&HAnimJoint382);

HAnimJoint370.addChildren(&HAnimJoint376);

HAnimJoint364.addChildren(&HAnimJoint370);

HAnimJoint268.addChildren(&HAnimJoint364);

HAnimJoint238.addChildren(&HAnimJoint268);

HAnimJoint& HAnimJoint406 =  HAnimJoint();
HAnimJoint406.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint406.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint406.setCenter(new float[]{0.0891,0.05798,-0.0259});
HAnimJoint406.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint406.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment407 =  HAnimSegment();
HAnimSegment407.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment407.setDEF(CString("hanim_l_calcaneus"));
Shape& Shape408 =  Shape();
LineSet& LineSet409 =  LineSet();
LineSet409.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA410 =  ColorRGBA();
ColorRGBA410.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet409.addChild(&ColorRGBA410);

Coordinate& Coordinate411 =  Coordinate();
Coordinate411.setPoint(new float[]{0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045}, 6);
LineSet409.setCoord(Coordinate411);

Shape408.setGeometry(&LineSet409);

HAnimSegment407.addChild(&Shape408);

HAnimJoint406.addChildren(&HAnimSegment407);

HAnimJoint& HAnimJoint412 =  HAnimJoint();
HAnimJoint412.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint412.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint412.setCenter(new float[]{0.11063,0.03528,0.0021});
HAnimJoint412.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint412.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment413 =  HAnimSegment();
HAnimSegment413.X3DNode::setName(CString("l_cuboid"));
HAnimSegment413.setDEF(CString("hanim_l_cuboid"));
Shape& Shape414 =  Shape();
LineSet& LineSet415 =  LineSet();
LineSet415.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA416 =  ColorRGBA();
ColorRGBA416.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet415.addChild(&ColorRGBA416);

Coordinate& Coordinate417 =  Coordinate();
Coordinate417.setPoint(new float[]{0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259}, 6);
LineSet415.setCoord(Coordinate417);

Shape414.setGeometry(&LineSet415);

HAnimSegment413.addChild(&Shape414);

HAnimJoint412.addChildren(&HAnimSegment413);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint418.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint418.setCenter(new float[]{0.10649,0.02454,0.03843});
HAnimJoint418.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint418.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment419 =  HAnimSegment();
HAnimSegment419.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment419.setDEF(CString("hanim_l_metatarsal_4"));
Shape& Shape420 =  Shape();
LineSet& LineSet421 =  LineSet();
LineSet421.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA422 =  ColorRGBA();
ColorRGBA422.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet421.addChild(&ColorRGBA422);

Coordinate& Coordinate423 =  Coordinate();
Coordinate423.setPoint(new float[]{0.10649,0.02454,0.03843,0.11063,0.03528,0.0021}, 6);
LineSet421.setCoord(Coordinate423);

Shape420.setGeometry(&LineSet421);

HAnimSegment419.addChild(&Shape420);

HAnimJoint418.addChildren(&HAnimSegment419);

HAnimJoint& HAnimJoint424 =  HAnimJoint();
HAnimJoint424.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint424.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint424.setCenter(new float[]{0.109867,0.01435,0.09117});
HAnimJoint424.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint424.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment425 =  HAnimSegment();
HAnimSegment425.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment425.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Shape& Shape426 =  Shape();
LineSet& LineSet427 =  LineSet();
LineSet427.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA428 =  ColorRGBA();
ColorRGBA428.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet427.addChild(&ColorRGBA428);

Coordinate& Coordinate429 =  Coordinate();
Coordinate429.setPoint(new float[]{0.109867,0.01435,0.09117,0.10649,0.02454,0.03843}, 6);
LineSet427.setCoord(Coordinate429);

Shape426.setGeometry(&LineSet427);

HAnimSegment425.addChild(&Shape426);

HAnimJoint424.addChildren(&HAnimSegment425);

HAnimJoint& HAnimJoint430 =  HAnimJoint();
HAnimJoint430.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint430.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint430.setCenter(new float[]{0.11416,0.01224,0.10631});
HAnimJoint430.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint430.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment431 =  HAnimSegment();
HAnimSegment431.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment431.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Shape& Shape432 =  Shape();
LineSet& LineSet433 =  LineSet();
LineSet433.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA434 =  ColorRGBA();
ColorRGBA434.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet433.addChild(&ColorRGBA434);

Coordinate& Coordinate435 =  Coordinate();
Coordinate435.setPoint(new float[]{0.11416,0.01224,0.10631,0.109867,0.01435,0.09117}, 6);
LineSet433.setCoord(Coordinate435);

Shape432.setGeometry(&LineSet433);

HAnimSegment431.addChild(&Shape432);

HAnimJoint430.addChildren(&HAnimSegment431);

HAnimJoint& HAnimJoint436 =  HAnimJoint();
HAnimJoint436.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint436.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint436.setCenter(new float[]{0.11567,0.00936,0.11369});
HAnimJoint436.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint436.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment437 =  HAnimSegment();
HAnimSegment437.X3DNode::setName(CString("l_tarsal_distal_phalanx_4"));
HAnimSegment437.setDEF(CString("hanim_l_tarsal_distal_phalanx_4"));
HAnimSite& HAnimSite438 =  HAnimSite();
HAnimSite438.X3DNode::setName(CString("l_tarsal_distal_phalanx_4"));
HAnimSite438.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimSite438.setTranslation(new float[]{0.115,0.016,0.13});
TouchSensor& TouchSensor439 =  TouchSensor();
TouchSensor439.setDescription(CString("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimSite438.addChild(&TouchSensor439);

Shape& Shape440 =  Shape();
Appearance& Appearance441 =  Appearance();
Material& Material442 =  Material();
Material442.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance441.addChild(&Material442);

Shape440.addChild(&Appearance441);

IndexedFaceSet& IndexedFaceSet443 =  IndexedFaceSet();
IndexedFaceSet443.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet443.setCreaseAngle(0.5);
IndexedFaceSet443.setSolid(false);
ColorRGBA& ColorRGBA444 =  ColorRGBA();
ColorRGBA444.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet443.addChild(&ColorRGBA444);

Coordinate& Coordinate445 =  Coordinate();
Coordinate445.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet443.setCoord(&Coordinate445);

Shape440.setGeometry(&IndexedFaceSet443);

HAnimSite438.addChild(&Shape440);

Billboard& Billboard446 =  Billboard();
Billboard446.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape447 =  Shape();
Text& Text448 =  Text();
Text448.setString(new CString[]{CString("114")}, 1);
CFontStyle& FontStyle449 =  CFontStyle();
FontStyle449.setSize(0.035);
Text448.setFontStyle(&FontStyle449);

Shape447.setGeometry(&Text448);

Billboard446.addChild(&Shape447);

HAnimSite438.addChild(Billboard446);

HAnimSegment437.addChild(&HAnimSite438);

Shape& Shape450 =  Shape();
LineSet& LineSet451 =  LineSet();
LineSet451.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA452 =  ColorRGBA();
ColorRGBA452.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet451.addChild(&ColorRGBA452);

Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[]{0.11567,0.00936,0.11369,0.11416,0.01224,0.10631}, 6);
LineSet451.setCoord(Coordinate453);

Shape450.setGeometry(&LineSet451);

HAnimSegment437.addChild(&Shape450);

HAnimJoint436.addChildren(&HAnimSegment437);

HAnimJoint430.addChildren(&HAnimJoint436);

HAnimJoint424.addChildren(&HAnimJoint430);

HAnimJoint418.addChildren(&HAnimJoint424);

HAnimJoint412.addChildren(&HAnimJoint418);

HAnimJoint& HAnimJoint454 =  HAnimJoint();
HAnimJoint454.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint454.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint454.setCenter(new float[]{0.1208,0.02094,0.03474});
HAnimJoint454.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint454.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment455 =  HAnimSegment();
HAnimSegment455.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment455.setDEF(CString("hanim_l_metatarsal_5"));
Shape& Shape456 =  Shape();
LineSet& LineSet457 =  LineSet();
LineSet457.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA458 =  ColorRGBA();
ColorRGBA458.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet457.addChild(&ColorRGBA458);

Coordinate& Coordinate459 =  Coordinate();
Coordinate459.setPoint(new float[]{0.1208,0.02094,0.03474,0.11063,0.03528,0.0021}, 6);
LineSet457.setCoord(Coordinate459);

Shape456.setGeometry(&LineSet457);

HAnimSegment455.addChild(&Shape456);

HAnimJoint454.addChildren(&HAnimSegment455);

HAnimJoint& HAnimJoint460 =  HAnimJoint();
HAnimJoint460.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint460.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint460.setCenter(new float[]{0.124065,0.01367,0.08656});
HAnimJoint460.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint460.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment461 =  HAnimSegment();
HAnimSegment461.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment461.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Shape& Shape462 =  Shape();
LineSet& LineSet463 =  LineSet();
LineSet463.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA464 =  ColorRGBA();
ColorRGBA464.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet463.addChild(&ColorRGBA464);

Coordinate& Coordinate465 =  Coordinate();
Coordinate465.setPoint(new float[]{0.124065,0.01367,0.08656,0.1208,0.02094,0.03474}, 6);
LineSet463.setCoord(Coordinate465);

Shape462.setGeometry(&LineSet463);

HAnimSegment461.addChild(&Shape462);

HAnimJoint460.addChildren(&HAnimSegment461);

HAnimJoint& HAnimJoint466 =  HAnimJoint();
HAnimJoint466.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint466.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint466.setCenter(new float[]{0.12638,0.01086,0.09414});
HAnimJoint466.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint466.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment467 =  HAnimSegment();
HAnimSegment467.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment467.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimSite& HAnimSite468 =  HAnimSite();
HAnimSite468.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite468.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite468.setTranslation(new float[]{0.12,0.02,0.04});
TouchSensor& TouchSensor469 =  TouchSensor();
TouchSensor469.setDescription(CString("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite468.addChild(&TouchSensor469);

Shape& Shape470 =  Shape();
Appearance& Appearance471 =  Appearance();
Material& Material472 =  Material();
Material472.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance471.addChild(&Material472);

Shape470.addChild(&Appearance471);

IndexedFaceSet& IndexedFaceSet473 =  IndexedFaceSet();
IndexedFaceSet473.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet473.setCreaseAngle(0.5);
IndexedFaceSet473.setSolid(false);
ColorRGBA& ColorRGBA474 =  ColorRGBA();
ColorRGBA474.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet473.addChild(&ColorRGBA474);

Coordinate& Coordinate475 =  Coordinate();
Coordinate475.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet473.setCoord(&Coordinate475);

Shape470.setGeometry(&IndexedFaceSet473);

HAnimSite468.addChild(&Shape470);

Billboard& Billboard476 =  Billboard();
Billboard476.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape477 =  Shape();
Text& Text478 =  Text();
Text478.setString(new CString[]{CString("56")}, 1);
CFontStyle& FontStyle479 =  CFontStyle();
FontStyle479.setSize(0.035);
Text478.setFontStyle(&FontStyle479);

Shape477.setGeometry(&Text478);

Billboard476.addChild(&Shape477);

HAnimSite468.addChild(Billboard476);

HAnimSegment467.addChild(&HAnimSite468);

Shape& Shape480 =  Shape();
LineSet& LineSet481 =  LineSet();
LineSet481.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA482 =  ColorRGBA();
ColorRGBA482.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet481.addChild(&ColorRGBA482);

Coordinate& Coordinate483 =  Coordinate();
Coordinate483.setPoint(new float[]{0.12638,0.01086,0.09414,0.124065,0.01367,0.08656}, 6);
LineSet481.setCoord(Coordinate483);

Shape480.setGeometry(&LineSet481);

HAnimSegment467.addChild(&Shape480);

HAnimJoint466.addChildren(&HAnimSegment467);

HAnimJoint& HAnimJoint484 =  HAnimJoint();
HAnimJoint484.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint484.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint484.setCenter(new float[]{0.12728,0.00856,0.10188});
HAnimJoint484.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint484.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment485 =  HAnimSegment();
HAnimSegment485.X3DNode::setName(CString("l_tarsal_distal_phalanx_5"));
HAnimSegment485.setDEF(CString("hanim_l_tarsal_distal_phalanx_5"));
HAnimSite& HAnimSite486 =  HAnimSite();
HAnimSite486.X3DNode::setName(CString("l_tarsal_distal_phalanx_5"));
HAnimSite486.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimSite486.setTranslation(new float[]{0.125,0.016,0.115});
TouchSensor& TouchSensor487 =  TouchSensor();
TouchSensor487.setDescription(CString("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimSite486.addChild(&TouchSensor487);

Shape& Shape488 =  Shape();
Appearance& Appearance489 =  Appearance();
Material& Material490 =  Material();
Material490.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance489.addChild(&Material490);

Shape488.addChild(&Appearance489);

IndexedFaceSet& IndexedFaceSet491 =  IndexedFaceSet();
IndexedFaceSet491.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet491.setCreaseAngle(0.5);
IndexedFaceSet491.setSolid(false);
ColorRGBA& ColorRGBA492 =  ColorRGBA();
ColorRGBA492.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet491.addChild(&ColorRGBA492);

Coordinate& Coordinate493 =  Coordinate();
Coordinate493.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet491.setCoord(&Coordinate493);

Shape488.setGeometry(&IndexedFaceSet491);

HAnimSite486.addChild(&Shape488);

Billboard& Billboard494 =  Billboard();
Billboard494.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape495 =  Shape();
Text& Text496 =  Text();
Text496.setString(new CString[]{CString("115")}, 1);
CFontStyle& FontStyle497 =  CFontStyle();
FontStyle497.setSize(0.035);
Text496.setFontStyle(&FontStyle497);

Shape495.setGeometry(&Text496);

Billboard494.addChild(&Shape495);

HAnimSite486.addChild(Billboard494);

HAnimSegment485.addChild(&HAnimSite486);

Shape& Shape498 =  Shape();
LineSet& LineSet499 =  LineSet();
LineSet499.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA500 =  ColorRGBA();
ColorRGBA500.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet499.addChild(&ColorRGBA500);

Coordinate& Coordinate501 =  Coordinate();
Coordinate501.setPoint(new float[]{0.12728,0.00856,0.10188,0.12638,0.01086,0.09414}, 6);
LineSet499.setCoord(Coordinate501);

Shape498.setGeometry(&LineSet499);

HAnimSegment485.addChild(&Shape498);

HAnimJoint484.addChildren(&HAnimSegment485);

HAnimJoint466.addChildren(&HAnimJoint484);

HAnimJoint460.addChildren(&HAnimJoint466);

HAnimJoint454.addChildren(&HAnimJoint460);

HAnimJoint412.addChildren(&HAnimJoint454);

HAnimJoint406.addChildren(&HAnimJoint412);

HAnimJoint238.addChildren(&HAnimJoint406);

HAnimJoint196.addChildren(&HAnimJoint238);

HAnimJoint142.addChildren(&HAnimJoint196);

HAnimJoint16.addChildren(&HAnimJoint142);

HAnimJoint& HAnimJoint502 =  HAnimJoint();
HAnimJoint502.X3DNode::setName(CString("r_hip"));
HAnimJoint502.setDEF(CString("hanim_r_hip"));
HAnimJoint502.setCenter(new float[]{-0.09466,0.82665,-0.01835});
HAnimJoint502.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint502.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment503 =  HAnimSegment();
HAnimSegment503.X3DNode::setName(CString("r_thigh"));
HAnimSegment503.setDEF(CString("hanim_r_thigh"));
HAnimSite& HAnimSite504 =  HAnimSite();
HAnimSite504.X3DNode::setName(CString("r_knee_crease"));
HAnimSite504.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite504.setTranslation(new float[]{-0.09,0.41,-0.056});
TouchSensor& TouchSensor505 =  TouchSensor();
TouchSensor505.setDescription(CString("HAnimSite 91 hanim_r_knee_crease_pt"));
HAnimSite504.addChild(&TouchSensor505);

Shape& Shape506 =  Shape();
Appearance& Appearance507 =  Appearance();
Material& Material508 =  Material();
Material508.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance507.addChild(&Material508);

Shape506.addChild(&Appearance507);

IndexedFaceSet& IndexedFaceSet509 =  IndexedFaceSet();
IndexedFaceSet509.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet509.setCreaseAngle(0.5);
IndexedFaceSet509.setSolid(false);
ColorRGBA& ColorRGBA510 =  ColorRGBA();
ColorRGBA510.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet509.addChild(&ColorRGBA510);

Coordinate& Coordinate511 =  Coordinate();
Coordinate511.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet509.setCoord(&Coordinate511);

Shape506.setGeometry(&IndexedFaceSet509);

HAnimSite504.addChild(&Shape506);

Billboard& Billboard512 =  Billboard();
Billboard512.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape513 =  Shape();
Text& Text514 =  Text();
Text514.setString(new CString[]{CString("91")}, 1);
CFontStyle& FontStyle515 =  CFontStyle();
FontStyle515.setSize(0.035);
Text514.setFontStyle(&FontStyle515);

Shape513.setGeometry(&Text514);

Billboard512.addChild(&Shape513);

HAnimSite504.addChild(Billboard512);

HAnimSegment503.addChild(&HAnimSite504);

HAnimSite& HAnimSite516 =  HAnimSite();
HAnimSite516.X3DNode::setName(CString("r_femoral_medial_epicondyle"));
HAnimSite516.setDEF(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimSite516.setTranslation(new float[]{-0.039,0.41,-0.01});
TouchSensor& TouchSensor517 =  TouchSensor();
TouchSensor517.setDescription(CString("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt"));
HAnimSite516.addChild(&TouchSensor517);

Shape& Shape518 =  Shape();
Appearance& Appearance519 =  Appearance();
Material& Material520 =  Material();
Material520.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance519.addChild(&Material520);

Shape518.addChild(&Appearance519);

IndexedFaceSet& IndexedFaceSet521 =  IndexedFaceSet();
IndexedFaceSet521.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet521.setCreaseAngle(0.5);
IndexedFaceSet521.setSolid(false);
ColorRGBA& ColorRGBA522 =  ColorRGBA();
ColorRGBA522.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet521.addChild(&ColorRGBA522);

Coordinate& Coordinate523 =  Coordinate();
Coordinate523.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet521.setCoord(&Coordinate523);

Shape518.setGeometry(&IndexedFaceSet521);

HAnimSite516.addChild(&Shape518);

Billboard& Billboard524 =  Billboard();
Billboard524.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape525 =  Shape();
Text& Text526 =  Text();
Text526.setString(new CString[]{CString("44")}, 1);
CFontStyle& FontStyle527 =  CFontStyle();
FontStyle527.setSize(0.035);
Text526.setFontStyle(&FontStyle527);

Shape525.setGeometry(&Text526);

Billboard524.addChild(&Shape525);

HAnimSite516.addChild(Billboard524);

HAnimSegment503.addChild(&HAnimSite516);

HAnimSite& HAnimSite528 =  HAnimSite();
HAnimSite528.X3DNode::setName(CString("r_femoral_lateral_epicondyle"));
HAnimSite528.setDEF(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimSite528.setTranslation(new float[]{-0.127,0.41,-0.01});
TouchSensor& TouchSensor529 =  TouchSensor();
TouchSensor529.setDescription(CString("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt"));
HAnimSite528.addChild(&TouchSensor529);

Shape& Shape530 =  Shape();
Appearance& Appearance531 =  Appearance();
Material& Material532 =  Material();
Material532.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance531.addChild(&Material532);

Shape530.addChild(&Appearance531);

IndexedFaceSet& IndexedFaceSet533 =  IndexedFaceSet();
IndexedFaceSet533.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet533.setCreaseAngle(0.5);
IndexedFaceSet533.setSolid(false);
ColorRGBA& ColorRGBA534 =  ColorRGBA();
ColorRGBA534.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet533.addChild(&ColorRGBA534);

Coordinate& Coordinate535 =  Coordinate();
Coordinate535.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet533.setCoord(&Coordinate535);

Shape530.setGeometry(&IndexedFaceSet533);

HAnimSite528.addChild(&Shape530);

Billboard& Billboard536 =  Billboard();
Billboard536.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape537 =  Shape();
Text& Text538 =  Text();
Text538.setString(new CString[]{CString("43")}, 1);
CFontStyle& FontStyle539 =  CFontStyle();
FontStyle539.setSize(0.035);
Text538.setFontStyle(&FontStyle539);

Shape537.setGeometry(&Text538);

Billboard536.addChild(&Shape537);

HAnimSite528.addChild(Billboard536);

HAnimSegment503.addChild(&HAnimSite528);

HAnimSite& HAnimSite540 =  HAnimSite();
HAnimSite540.X3DNode::setName(CString("r_suprapatella"));
HAnimSite540.setDEF(CString("hanim_r_suprapatella_pt"));
HAnimSite540.setTranslation(new float[]{-0.085,0.41,0.042});
TouchSensor& TouchSensor541 =  TouchSensor();
TouchSensor541.setDescription(CString("HAnimSite 45 hanim_r_suprapatella_pt"));
HAnimSite540.addChild(&TouchSensor541);

Shape& Shape542 =  Shape();
Appearance& Appearance543 =  Appearance();
Material& Material544 =  Material();
Material544.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance543.addChild(&Material544);

Shape542.addChild(&Appearance543);

IndexedFaceSet& IndexedFaceSet545 =  IndexedFaceSet();
IndexedFaceSet545.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet545.setCreaseAngle(0.5);
IndexedFaceSet545.setSolid(false);
ColorRGBA& ColorRGBA546 =  ColorRGBA();
ColorRGBA546.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet545.addChild(&ColorRGBA546);

Coordinate& Coordinate547 =  Coordinate();
Coordinate547.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet545.setCoord(&Coordinate547);

Shape542.setGeometry(&IndexedFaceSet545);

HAnimSite540.addChild(&Shape542);

Billboard& Billboard548 =  Billboard();
Billboard548.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape549 =  Shape();
Text& Text550 =  Text();
Text550.setString(new CString[]{CString("45")}, 1);
CFontStyle& FontStyle551 =  CFontStyle();
FontStyle551.setSize(0.035);
Text550.setFontStyle(&FontStyle551);

Shape549.setGeometry(&Text550);

Billboard548.addChild(&Shape549);

HAnimSite540.addChild(Billboard548);

HAnimSegment503.addChild(&HAnimSite540);

Shape& Shape552 =  Shape();
LineSet& LineSet553 =  LineSet();
LineSet553.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA554 =  ColorRGBA();
ColorRGBA554.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet553.addChild(&ColorRGBA554);

Coordinate& Coordinate555 =  Coordinate();
Coordinate555.setPoint(new float[]{-0.09466,0.82665,-0.01835,0.0,0.826,0.02}, 6);
LineSet553.setCoord(Coordinate555);

Shape552.setGeometry(&LineSet553);

HAnimSegment503.addChild(&Shape552);

HAnimJoint502.addChildren(&HAnimSegment503);

HAnimJoint& HAnimJoint556 =  HAnimJoint();
HAnimJoint556.X3DNode::setName(CString("r_knee"));
HAnimJoint556.setDEF(CString("hanim_r_knee"));
HAnimJoint556.setCenter(new float[]{-0.0926,0.408825,-0.01944});
HAnimJoint556.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint556.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment557 =  HAnimSegment();
HAnimSegment557.X3DNode::setName(CString("r_calf"));
HAnimSegment557.setDEF(CString("hanim_r_calf"));
HAnimSite& HAnimSite558 =  HAnimSite();
HAnimSite558.X3DNode::setName(CString("r_tibiale"));
HAnimSite558.setDEF(CString("hanim_r_tibiale_pt"));
HAnimSite558.setTranslation(new float[]{-0.09,0.31,0.038});
TouchSensor& TouchSensor559 =  TouchSensor();
TouchSensor559.setDescription(CString("HAnimSite 51 hanim_r_tibiale_pt"));
HAnimSite558.addChild(&TouchSensor559);

Shape& Shape560 =  Shape();
Appearance& Appearance561 =  Appearance();
Material& Material562 =  Material();
Material562.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance561.addChild(&Material562);

Shape560.addChild(&Appearance561);

IndexedFaceSet& IndexedFaceSet563 =  IndexedFaceSet();
IndexedFaceSet563.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet563.setCreaseAngle(0.5);
IndexedFaceSet563.setSolid(false);
ColorRGBA& ColorRGBA564 =  ColorRGBA();
ColorRGBA564.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet563.addChild(&ColorRGBA564);

Coordinate& Coordinate565 =  Coordinate();
Coordinate565.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet563.setCoord(&Coordinate565);

Shape560.setGeometry(&IndexedFaceSet563);

HAnimSite558.addChild(&Shape560);

Billboard& Billboard566 =  Billboard();
Billboard566.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape567 =  Shape();
Text& Text568 =  Text();
Text568.setString(new CString[]{CString("51")}, 1);
CFontStyle& FontStyle569 =  CFontStyle();
FontStyle569.setSize(0.035);
Text568.setFontStyle(&FontStyle569);

Shape567.setGeometry(&Text568);

Billboard566.addChild(&Shape567);

HAnimSite558.addChild(Billboard566);

HAnimSegment557.addChild(&HAnimSite558);

HAnimSite& HAnimSite570 =  HAnimSite();
HAnimSite570.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite570.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite570.setTranslation(new float[]{-0.061,0.095,-0.02});
TouchSensor& TouchSensor571 =  TouchSensor();
TouchSensor571.setDescription(CString("HAnimSite 52 hanim_r_medial_malleolus_pt"));
HAnimSite570.addChild(&TouchSensor571);

Shape& Shape572 =  Shape();
Appearance& Appearance573 =  Appearance();
Material& Material574 =  Material();
Material574.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance573.addChild(&Material574);

Shape572.addChild(&Appearance573);

IndexedFaceSet& IndexedFaceSet575 =  IndexedFaceSet();
IndexedFaceSet575.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet575.setCreaseAngle(0.5);
IndexedFaceSet575.setSolid(false);
ColorRGBA& ColorRGBA576 =  ColorRGBA();
ColorRGBA576.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet575.addChild(&ColorRGBA576);

Coordinate& Coordinate577 =  Coordinate();
Coordinate577.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet575.setCoord(&Coordinate577);

Shape572.setGeometry(&IndexedFaceSet575);

HAnimSite570.addChild(&Shape572);

Billboard& Billboard578 =  Billboard();
Billboard578.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape579 =  Shape();
Text& Text580 =  Text();
Text580.setString(new CString[]{CString("52")}, 1);
CFontStyle& FontStyle581 =  CFontStyle();
FontStyle581.setSize(0.035);
Text580.setFontStyle(&FontStyle581);

Shape579.setGeometry(&Text580);

Billboard578.addChild(&Shape579);

HAnimSite570.addChild(Billboard578);

HAnimSegment557.addChild(&HAnimSite570);

HAnimSite& HAnimSite582 =  HAnimSite();
HAnimSite582.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite582.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite582.setTranslation(new float[]{-0.12,0.095,-0.02});
TouchSensor& TouchSensor583 =  TouchSensor();
TouchSensor583.setDescription(CString("HAnimSite 53 hanim_r_lateral_malleolus_pt"));
HAnimSite582.addChild(&TouchSensor583);

Shape& Shape584 =  Shape();
Appearance& Appearance585 =  Appearance();
Material& Material586 =  Material();
Material586.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance585.addChild(&Material586);

Shape584.addChild(&Appearance585);

IndexedFaceSet& IndexedFaceSet587 =  IndexedFaceSet();
IndexedFaceSet587.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet587.setCreaseAngle(0.5);
IndexedFaceSet587.setSolid(false);
ColorRGBA& ColorRGBA588 =  ColorRGBA();
ColorRGBA588.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet587.addChild(&ColorRGBA588);

Coordinate& Coordinate589 =  Coordinate();
Coordinate589.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet587.setCoord(&Coordinate589);

Shape584.setGeometry(&IndexedFaceSet587);

HAnimSite582.addChild(&Shape584);

Billboard& Billboard590 =  Billboard();
Billboard590.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape591 =  Shape();
Text& Text592 =  Text();
Text592.setString(new CString[]{CString("53")}, 1);
CFontStyle& FontStyle593 =  CFontStyle();
FontStyle593.setSize(0.035);
Text592.setFontStyle(&FontStyle593);

Shape591.setGeometry(&Text592);

Billboard590.addChild(&Shape591);

HAnimSite582.addChild(Billboard590);

HAnimSegment557.addChild(&HAnimSite582);

Shape& Shape594 =  Shape();
LineSet& LineSet595 =  LineSet();
LineSet595.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA596 =  ColorRGBA();
ColorRGBA596.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet595.addChild(&ColorRGBA596);

Coordinate& Coordinate597 =  Coordinate();
Coordinate597.setPoint(new float[]{-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835}, 6);
LineSet595.setCoord(Coordinate597);

Shape594.setGeometry(&LineSet595);

HAnimSegment557.addChild(&Shape594);

HAnimJoint556.addChildren(&HAnimSegment557);

HAnimJoint& HAnimJoint598 =  HAnimJoint();
HAnimJoint598.X3DNode::setName(CString("r_talocrural"));
HAnimJoint598.setDEF(CString("hanim_r_talocrural"));
HAnimJoint598.setCenter(new float[]{-0.08845,0.09544,-0.01045});
HAnimJoint598.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint598.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment599 =  HAnimSegment();
HAnimSegment599.X3DNode::setName(CString("r_talus"));
HAnimSegment599.setDEF(CString("hanim_r_talus"));
HAnimSite& HAnimSite600 =  HAnimSite();
HAnimSite600.X3DNode::setName(CString("r_sphyrion"));
HAnimSite600.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite600.setTranslation(new float[]{-0.054,0.065,-0.02});
TouchSensor& TouchSensor601 =  TouchSensor();
TouchSensor601.setDescription(CString("HAnimSite 54 hanim_r_sphyrion_pt"));
HAnimSite600.addChild(&TouchSensor601);

Shape& Shape602 =  Shape();
Appearance& Appearance603 =  Appearance();
Material& Material604 =  Material();
Material604.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance603.addChild(&Material604);

Shape602.addChild(&Appearance603);

IndexedFaceSet& IndexedFaceSet605 =  IndexedFaceSet();
IndexedFaceSet605.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet605.setCreaseAngle(0.5);
IndexedFaceSet605.setSolid(false);
ColorRGBA& ColorRGBA606 =  ColorRGBA();
ColorRGBA606.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet605.addChild(&ColorRGBA606);

Coordinate& Coordinate607 =  Coordinate();
Coordinate607.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet605.setCoord(&Coordinate607);

Shape602.setGeometry(&IndexedFaceSet605);

HAnimSite600.addChild(&Shape602);

Billboard& Billboard608 =  Billboard();
Billboard608.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape609 =  Shape();
Text& Text610 =  Text();
Text610.setString(new CString[]{CString("54")}, 1);
CFontStyle& FontStyle611 =  CFontStyle();
FontStyle611.setSize(0.035);
Text610.setFontStyle(&FontStyle611);

Shape609.setGeometry(&Text610);

Billboard608.addChild(&Shape609);

HAnimSite600.addChild(Billboard608);

HAnimSegment599.addChild(&HAnimSite600);

HAnimSite& HAnimSite612 =  HAnimSite();
HAnimSite612.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite612.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite612.setTranslation(new float[]{-0.09,0.03,-0.06});
TouchSensor& TouchSensor613 =  TouchSensor();
TouchSensor613.setDescription(CString("HAnimSite 62 hanim_r_calcaneus_posterior_pt"));
HAnimSite612.addChild(&TouchSensor613);

Shape& Shape614 =  Shape();
Appearance& Appearance615 =  Appearance();
Material& Material616 =  Material();
Material616.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance615.addChild(&Material616);

Shape614.addChild(&Appearance615);

IndexedFaceSet& IndexedFaceSet617 =  IndexedFaceSet();
IndexedFaceSet617.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet617.setCreaseAngle(0.5);
IndexedFaceSet617.setSolid(false);
ColorRGBA& ColorRGBA618 =  ColorRGBA();
ColorRGBA618.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet617.addChild(&ColorRGBA618);

Coordinate& Coordinate619 =  Coordinate();
Coordinate619.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet617.setCoord(&Coordinate619);

Shape614.setGeometry(&IndexedFaceSet617);

HAnimSite612.addChild(&Shape614);

Billboard& Billboard620 =  Billboard();
Billboard620.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape621 =  Shape();
Text& Text622 =  Text();
Text622.setString(new CString[]{CString("62")}, 1);
CFontStyle& FontStyle623 =  CFontStyle();
FontStyle623.setSize(0.035);
Text622.setFontStyle(&FontStyle623);

Shape621.setGeometry(&Text622);

Billboard620.addChild(&Shape621);

HAnimSite612.addChild(Billboard620);

HAnimSegment599.addChild(&HAnimSite612);

Shape& Shape624 =  Shape();
LineSet& LineSet625 =  LineSet();
LineSet625.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA626 =  ColorRGBA();
ColorRGBA626.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet625.addChild(&ColorRGBA626);

Coordinate& Coordinate627 =  Coordinate();
Coordinate627.setPoint(new float[]{-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944}, 6);
LineSet625.setCoord(Coordinate627);

Shape624.setGeometry(&LineSet625);

HAnimSegment599.addChild(&Shape624);

HAnimJoint598.addChildren(&HAnimSegment599);

HAnimJoint& HAnimJoint628 =  HAnimJoint();
HAnimJoint628.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint628.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint628.setCenter(new float[]{-0.07794,0.0369,0.00486});
HAnimJoint628.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint628.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment629 =  HAnimSegment();
HAnimSegment629.X3DNode::setName(CString("r_navicular"));
HAnimSegment629.setDEF(CString("hanim_r_navicular"));
Shape& Shape630 =  Shape();
LineSet& LineSet631 =  LineSet();
LineSet631.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA632 =  ColorRGBA();
ColorRGBA632.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet631.addChild(&ColorRGBA632);

Coordinate& Coordinate633 =  Coordinate();
Coordinate633.setPoint(new float[]{-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045}, 6);
LineSet631.setCoord(Coordinate633);

Shape630.setGeometry(&LineSet631);

HAnimSegment629.addChild(&Shape630);

HAnimJoint628.addChildren(&HAnimSegment629);

HAnimJoint& HAnimJoint634 =  HAnimJoint();
HAnimJoint634.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint634.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint634.setCenter(new float[]{-0.06698,0.032107,0.01839});
HAnimJoint634.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint634.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment635 =  HAnimSegment();
HAnimSegment635.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment635.setDEF(CString("hanim_r_cuneiform_1"));
Shape& Shape636 =  Shape();
LineSet& LineSet637 =  LineSet();
LineSet637.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA638 =  ColorRGBA();
ColorRGBA638.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet637.addChild(&ColorRGBA638);

Coordinate& Coordinate639 =  Coordinate();
Coordinate639.setPoint(new float[]{-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486}, 6);
LineSet637.setCoord(Coordinate639);

Shape636.setGeometry(&LineSet637);

HAnimSegment635.addChild(&Shape636);

HAnimJoint634.addChildren(&HAnimSegment635);

HAnimJoint& HAnimJoint640 =  HAnimJoint();
HAnimJoint640.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint640.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint640.setCenter(new float[]{-0.064,0.02324,0.04419});
HAnimJoint640.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint640.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment641 =  HAnimSegment();
HAnimSegment641.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment641.setDEF(CString("hanim_r_metatarsal_1"));
Shape& Shape642 =  Shape();
LineSet& LineSet643 =  LineSet();
LineSet643.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA644 =  ColorRGBA();
ColorRGBA644.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet643.addChild(&ColorRGBA644);

Coordinate& Coordinate645 =  Coordinate();
Coordinate645.setPoint(new float[]{-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839}, 6);
LineSet643.setCoord(Coordinate645);

Shape642.setGeometry(&LineSet643);

HAnimSegment641.addChild(&Shape642);

HAnimJoint640.addChildren(&HAnimSegment641);

HAnimJoint& HAnimJoint646 =  HAnimJoint();
HAnimJoint646.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint646.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint646.setCenter(new float[]{-0.06176,0.014425,0.09362});
HAnimJoint646.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint646.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment647 =  HAnimSegment();
HAnimSegment647.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment647.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimSite& HAnimSite648 =  HAnimSite();
HAnimSite648.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite648.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite648.setTranslation(new float[]{-0.062,0.012,0.1});
TouchSensor& TouchSensor649 =  TouchSensor();
TouchSensor649.setDescription(CString("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite648.addChild(&TouchSensor649);

Shape& Shape650 =  Shape();
Appearance& Appearance651 =  Appearance();
Material& Material652 =  Material();
Material652.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance651.addChild(&Material652);

Shape650.addChild(&Appearance651);

IndexedFaceSet& IndexedFaceSet653 =  IndexedFaceSet();
IndexedFaceSet653.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet653.setCreaseAngle(0.5);
IndexedFaceSet653.setSolid(false);
ColorRGBA& ColorRGBA654 =  ColorRGBA();
ColorRGBA654.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet653.addChild(&ColorRGBA654);

Coordinate& Coordinate655 =  Coordinate();
Coordinate655.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet653.setCoord(&Coordinate655);

Shape650.setGeometry(&IndexedFaceSet653);

HAnimSite648.addChild(&Shape650);

Billboard& Billboard656 =  Billboard();
Billboard656.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape657 =  Shape();
Text& Text658 =  Text();
Text658.setString(new CString[]{CString("59")}, 1);
CFontStyle& FontStyle659 =  CFontStyle();
FontStyle659.setSize(0.035);
Text658.setFontStyle(&FontStyle659);

Shape657.setGeometry(&Text658);

Billboard656.addChild(&Shape657);

HAnimSite648.addChild(Billboard656);

HAnimSegment647.addChild(&HAnimSite648);

Shape& Shape660 =  Shape();
LineSet& LineSet661 =  LineSet();
LineSet661.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA662 =  ColorRGBA();
ColorRGBA662.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet661.addChild(&ColorRGBA662);

Coordinate& Coordinate663 =  Coordinate();
Coordinate663.setPoint(new float[]{-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419}, 6);
LineSet661.setCoord(Coordinate663);

Shape660.setGeometry(&LineSet661);

HAnimSegment647.addChild(&Shape660);

HAnimJoint646.addChildren(&HAnimSegment647);

HAnimJoint& HAnimJoint664 =  HAnimJoint();
HAnimJoint664.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint664.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint664.setCenter(new float[]{-0.06174,0.0121,0.1153});
HAnimJoint664.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint664.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment665 =  HAnimSegment();
HAnimSegment665.X3DNode::setName(CString("r_tarsal_distal_phalanx_1"));
HAnimSegment665.setDEF(CString("hanim_r_tarsal_distal_phalanx_1"));
HAnimSite& HAnimSite666 =  HAnimSite();
HAnimSite666.X3DNode::setName(CString("r_tarsal_distal_phalanx_1"));
HAnimSite666.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimSite666.setTranslation(new float[]{-0.06,0.012,0.14});
TouchSensor& TouchSensor667 =  TouchSensor();
TouchSensor667.setDescription(CString("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimSite666.addChild(&TouchSensor667);

Shape& Shape668 =  Shape();
Appearance& Appearance669 =  Appearance();
Material& Material670 =  Material();
Material670.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance669.addChild(&Material670);

Shape668.addChild(&Appearance669);

IndexedFaceSet& IndexedFaceSet671 =  IndexedFaceSet();
IndexedFaceSet671.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet671.setCreaseAngle(0.5);
IndexedFaceSet671.setSolid(false);
ColorRGBA& ColorRGBA672 =  ColorRGBA();
ColorRGBA672.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet671.addChild(&ColorRGBA672);

Coordinate& Coordinate673 =  Coordinate();
Coordinate673.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet671.setCoord(&Coordinate673);

Shape668.setGeometry(&IndexedFaceSet671);

HAnimSite666.addChild(&Shape668);

Billboard& Billboard674 =  Billboard();
Billboard674.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape675 =  Shape();
Text& Text676 =  Text();
Text676.setString(new CString[]{CString("116")}, 1);
CFontStyle& FontStyle677 =  CFontStyle();
FontStyle677.setSize(0.035);
Text676.setFontStyle(&FontStyle677);

Shape675.setGeometry(&Text676);

Billboard674.addChild(&Shape675);

HAnimSite666.addChild(Billboard674);

HAnimSegment665.addChild(&HAnimSite666);

Shape& Shape678 =  Shape();
LineSet& LineSet679 =  LineSet();
LineSet679.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA680 =  ColorRGBA();
ColorRGBA680.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet679.addChild(&ColorRGBA680);

Coordinate& Coordinate681 =  Coordinate();
Coordinate681.setPoint(new float[]{-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362}, 6);
LineSet679.setCoord(Coordinate681);

Shape678.setGeometry(&LineSet679);

HAnimSegment665.addChild(&Shape678);

HAnimJoint664.addChildren(&HAnimSegment665);

HAnimJoint646.addChildren(&HAnimJoint664);

HAnimJoint640.addChildren(&HAnimJoint646);

HAnimJoint634.addChildren(&HAnimJoint640);

HAnimJoint628.addChildren(&HAnimJoint634);

HAnimJoint& HAnimJoint682 =  HAnimJoint();
HAnimJoint682.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint682.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint682.setCenter(new float[]{-0.081,0.0335,0.02142});
HAnimJoint682.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint682.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment683 =  HAnimSegment();
HAnimSegment683.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment683.setDEF(CString("hanim_r_cuneiform_2"));
Shape& Shape684 =  Shape();
LineSet& LineSet685 =  LineSet();
LineSet685.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA686 =  ColorRGBA();
ColorRGBA686.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet685.addChild(&ColorRGBA686);

Coordinate& Coordinate687 =  Coordinate();
Coordinate687.setPoint(new float[]{-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486}, 6);
LineSet685.setCoord(Coordinate687);

Shape684.setGeometry(&LineSet685);

HAnimSegment683.addChild(&Shape684);

HAnimJoint682.addChildren(&HAnimSegment683);

HAnimJoint& HAnimJoint688 =  HAnimJoint();
HAnimJoint688.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint688.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint688.setCenter(new float[]{-0.07983,0.0261,0.04106});
HAnimJoint688.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint688.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment689 =  HAnimSegment();
HAnimSegment689.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment689.setDEF(CString("hanim_r_metatarsal_2"));
Shape& Shape690 =  Shape();
LineSet& LineSet691 =  LineSet();
LineSet691.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA692 =  ColorRGBA();
ColorRGBA692.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet691.addChild(&ColorRGBA692);

Coordinate& Coordinate693 =  Coordinate();
Coordinate693.setPoint(new float[]{-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142}, 6);
LineSet691.setCoord(Coordinate693);

Shape690.setGeometry(&LineSet691);

HAnimSegment689.addChild(&Shape690);

HAnimJoint688.addChildren(&HAnimSegment689);

HAnimJoint& HAnimJoint694 =  HAnimJoint();
HAnimJoint694.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint694.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint694.setCenter(new float[]{-0.0821,0.01497,0.09783});
HAnimJoint694.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint694.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment695 =  HAnimSegment();
HAnimSegment695.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment695.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Shape& Shape696 =  Shape();
LineSet& LineSet697 =  LineSet();
LineSet697.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA698 =  ColorRGBA();
ColorRGBA698.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet697.addChild(&ColorRGBA698);

Coordinate& Coordinate699 =  Coordinate();
Coordinate699.setPoint(new float[]{-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106}, 6);
LineSet697.setCoord(Coordinate699);

Shape696.setGeometry(&LineSet697);

HAnimSegment695.addChild(&Shape696);

HAnimJoint694.addChildren(&HAnimSegment695);

HAnimJoint& HAnimJoint700 =  HAnimJoint();
HAnimJoint700.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint700.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint700.setCenter(new float[]{-0.0839,0.012647,0.114});
HAnimJoint700.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint700.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment701 =  HAnimSegment();
HAnimSegment701.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment701.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Shape& Shape702 =  Shape();
LineSet& LineSet703 =  LineSet();
LineSet703.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA704 =  ColorRGBA();
ColorRGBA704.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet703.addChild(&ColorRGBA704);

Coordinate& Coordinate705 =  Coordinate();
Coordinate705.setPoint(new float[]{-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783}, 6);
LineSet703.setCoord(Coordinate705);

Shape702.setGeometry(&LineSet703);

HAnimSegment701.addChild(&Shape702);

HAnimJoint700.addChildren(&HAnimSegment701);

HAnimJoint& HAnimJoint706 =  HAnimJoint();
HAnimJoint706.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint706.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint706.setCenter(new float[]{-0.0839,0.009825,0.123435});
HAnimJoint706.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint706.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment707 =  HAnimSegment();
HAnimSegment707.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSegment707.setDEF(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimSite& HAnimSite708 =  HAnimSite();
HAnimSite708.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSite708.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite708.setTranslation(new float[]{-0.08,0.016,0.14});
TouchSensor& TouchSensor709 =  TouchSensor();
TouchSensor709.setDescription(CString("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite708.addChild(&TouchSensor709);

Shape& Shape710 =  Shape();
Appearance& Appearance711 =  Appearance();
Material& Material712 =  Material();
Material712.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance711.addChild(&Material712);

Shape710.addChild(&Appearance711);

IndexedFaceSet& IndexedFaceSet713 =  IndexedFaceSet();
IndexedFaceSet713.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet713.setCreaseAngle(0.5);
IndexedFaceSet713.setSolid(false);
ColorRGBA& ColorRGBA714 =  ColorRGBA();
ColorRGBA714.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet713.addChild(&ColorRGBA714);

Coordinate& Coordinate715 =  Coordinate();
Coordinate715.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet713.setCoord(&Coordinate715);

Shape710.setGeometry(&IndexedFaceSet713);

HAnimSite708.addChild(&Shape710);

Billboard& Billboard716 =  Billboard();
Billboard716.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape717 =  Shape();
Text& Text718 =  Text();
Text718.setString(new CString[]{CString("117")}, 1);
CFontStyle& FontStyle719 =  CFontStyle();
FontStyle719.setSize(0.035);
Text718.setFontStyle(&FontStyle719);

Shape717.setGeometry(&Text718);

Billboard716.addChild(&Shape717);

HAnimSite708.addChild(Billboard716);

HAnimSegment707.addChild(&HAnimSite708);

Shape& Shape720 =  Shape();
LineSet& LineSet721 =  LineSet();
LineSet721.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA722 =  ColorRGBA();
ColorRGBA722.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet721.addChild(&ColorRGBA722);

Coordinate& Coordinate723 =  Coordinate();
Coordinate723.setPoint(new float[]{-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114}, 6);
LineSet721.setCoord(Coordinate723);

Shape720.setGeometry(&LineSet721);

HAnimSegment707.addChild(&Shape720);

HAnimJoint706.addChildren(&HAnimSegment707);

HAnimJoint700.addChildren(&HAnimJoint706);

HAnimJoint694.addChildren(&HAnimJoint700);

HAnimJoint688.addChildren(&HAnimJoint694);

HAnimJoint682.addChildren(&HAnimJoint688);

HAnimJoint628.addChildren(&HAnimJoint682);

HAnimJoint& HAnimJoint724 =  HAnimJoint();
HAnimJoint724.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint724.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint724.setCenter(new float[]{-0.09261,0.03339,0.01982});
HAnimJoint724.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint724.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment725 =  HAnimSegment();
HAnimSegment725.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment725.setDEF(CString("hanim_r_cuneiform_3"));
Shape& Shape726 =  Shape();
LineSet& LineSet727 =  LineSet();
LineSet727.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA728 =  ColorRGBA();
ColorRGBA728.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet727.addChild(&ColorRGBA728);

Coordinate& Coordinate729 =  Coordinate();
Coordinate729.setPoint(new float[]{-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486}, 6);
LineSet727.setCoord(Coordinate729);

Shape726.setGeometry(&LineSet727);

HAnimSegment725.addChild(&Shape726);

HAnimJoint724.addChildren(&HAnimSegment725);

HAnimJoint& HAnimJoint730 =  HAnimJoint();
HAnimJoint730.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint730.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint730.setCenter(new float[]{-0.09423,0.0261,0.0394});
HAnimJoint730.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint730.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment731 =  HAnimSegment();
HAnimSegment731.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment731.setDEF(CString("hanim_r_metatarsal_3"));
Shape& Shape732 =  Shape();
LineSet& LineSet733 =  LineSet();
LineSet733.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA734 =  ColorRGBA();
ColorRGBA734.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet733.addChild(&ColorRGBA734);

Coordinate& Coordinate735 =  Coordinate();
Coordinate735.setPoint(new float[]{-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982}, 6);
LineSet733.setCoord(Coordinate735);

Shape732.setGeometry(&LineSet733);

HAnimSegment731.addChild(&Shape732);

HAnimJoint730.addChildren(&HAnimSegment731);

HAnimJoint& HAnimJoint736 =  HAnimJoint();
HAnimJoint736.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint736.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint736.setCenter(new float[]{-0.0961,0.01505,0.09542});
HAnimJoint736.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint736.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment737 =  HAnimSegment();
HAnimSegment737.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment737.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Shape& Shape738 =  Shape();
LineSet& LineSet739 =  LineSet();
LineSet739.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA740 =  ColorRGBA();
ColorRGBA740.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet739.addChild(&ColorRGBA740);

Coordinate& Coordinate741 =  Coordinate();
Coordinate741.setPoint(new float[]{-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394}, 6);
LineSet739.setCoord(Coordinate741);

Shape738.setGeometry(&LineSet739);

HAnimSegment737.addChild(&Shape738);

HAnimJoint736.addChildren(&HAnimSegment737);

HAnimJoint& HAnimJoint742 =  HAnimJoint();
HAnimJoint742.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint742.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint742.setCenter(new float[]{-0.0985,0.01192,0.11047});
HAnimJoint742.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint742.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment743 =  HAnimSegment();
HAnimSegment743.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment743.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Shape& Shape744 =  Shape();
LineSet& LineSet745 =  LineSet();
LineSet745.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA746 =  ColorRGBA();
ColorRGBA746.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet745.addChild(&ColorRGBA746);

Coordinate& Coordinate747 =  Coordinate();
Coordinate747.setPoint(new float[]{-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542}, 6);
LineSet745.setCoord(Coordinate747);

Shape744.setGeometry(&LineSet745);

HAnimSegment743.addChild(&Shape744);

HAnimJoint742.addChildren(&HAnimSegment743);

HAnimJoint& HAnimJoint748 =  HAnimJoint();
HAnimJoint748.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint748.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint748.setCenter(new float[]{-0.100035,0.00982,0.1197});
HAnimJoint748.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint748.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment749 =  HAnimSegment();
HAnimSegment749.X3DNode::setName(CString("r_tarsal_distal_phalanx_3"));
HAnimSegment749.setDEF(CString("hanim_r_tarsal_distal_phalanx_3"));
HAnimSite& HAnimSite750 =  HAnimSite();
HAnimSite750.X3DNode::setName(CString("r_tarsal_distal_phalanx_3"));
HAnimSite750.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimSite750.setTranslation(new float[]{-0.1,0.016,0.14});
TouchSensor& TouchSensor751 =  TouchSensor();
TouchSensor751.setDescription(CString("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimSite750.addChild(&TouchSensor751);

Shape& Shape752 =  Shape();
Appearance& Appearance753 =  Appearance();
Material& Material754 =  Material();
Material754.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance753.addChild(&Material754);

Shape752.addChild(&Appearance753);

IndexedFaceSet& IndexedFaceSet755 =  IndexedFaceSet();
IndexedFaceSet755.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet755.setCreaseAngle(0.5);
IndexedFaceSet755.setSolid(false);
ColorRGBA& ColorRGBA756 =  ColorRGBA();
ColorRGBA756.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet755.addChild(&ColorRGBA756);

Coordinate& Coordinate757 =  Coordinate();
Coordinate757.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet755.setCoord(&Coordinate757);

Shape752.setGeometry(&IndexedFaceSet755);

HAnimSite750.addChild(&Shape752);

Billboard& Billboard758 =  Billboard();
Billboard758.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape759 =  Shape();
Text& Text760 =  Text();
Text760.setString(new CString[]{CString("118")}, 1);
CFontStyle& FontStyle761 =  CFontStyle();
FontStyle761.setSize(0.035);
Text760.setFontStyle(&FontStyle761);

Shape759.setGeometry(&Text760);

Billboard758.addChild(&Shape759);

HAnimSite750.addChild(Billboard758);

HAnimSegment749.addChild(&HAnimSite750);

Shape& Shape762 =  Shape();
LineSet& LineSet763 =  LineSet();
LineSet763.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA764 =  ColorRGBA();
ColorRGBA764.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet763.addChild(&ColorRGBA764);

Coordinate& Coordinate765 =  Coordinate();
Coordinate765.setPoint(new float[]{-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047}, 6);
LineSet763.setCoord(Coordinate765);

Shape762.setGeometry(&LineSet763);

HAnimSegment749.addChild(&Shape762);

HAnimJoint748.addChildren(&HAnimSegment749);

HAnimJoint742.addChildren(&HAnimJoint748);

HAnimJoint736.addChildren(&HAnimJoint742);

HAnimJoint730.addChildren(&HAnimJoint736);

HAnimJoint724.addChildren(&HAnimJoint730);

HAnimJoint628.addChildren(&HAnimJoint724);

HAnimJoint598.addChildren(&HAnimJoint628);

HAnimJoint& HAnimJoint766 =  HAnimJoint();
HAnimJoint766.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint766.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint766.setCenter(new float[]{-0.088717,0.05798,-0.025965});
HAnimJoint766.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint766.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment767 =  HAnimSegment();
HAnimSegment767.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment767.setDEF(CString("hanim_r_calcaneus"));
Shape& Shape768 =  Shape();
LineSet& LineSet769 =  LineSet();
LineSet769.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA770 =  ColorRGBA();
ColorRGBA770.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet769.addChild(&ColorRGBA770);

Coordinate& Coordinate771 =  Coordinate();
Coordinate771.setPoint(new float[]{-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045}, 6);
LineSet769.setCoord(Coordinate771);

Shape768.setGeometry(&LineSet769);

HAnimSegment767.addChild(&Shape768);

HAnimJoint766.addChildren(&HAnimSegment767);

HAnimJoint& HAnimJoint772 =  HAnimJoint();
HAnimJoint772.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint772.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint772.setCenter(new float[]{-0.11027,0.03528,0.0021});
HAnimJoint772.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint772.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment773 =  HAnimSegment();
HAnimSegment773.X3DNode::setName(CString("r_cuboid"));
HAnimSegment773.setDEF(CString("hanim_r_cuboid"));
Shape& Shape774 =  Shape();
LineSet& LineSet775 =  LineSet();
LineSet775.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA776 =  ColorRGBA();
ColorRGBA776.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet775.addChild(&ColorRGBA776);

Coordinate& Coordinate777 =  Coordinate();
Coordinate777.setPoint(new float[]{-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965}, 6);
LineSet775.setCoord(Coordinate777);

Shape774.setGeometry(&LineSet775);

HAnimSegment773.addChild(&Shape774);

HAnimJoint772.addChildren(&HAnimSegment773);

HAnimJoint& HAnimJoint778 =  HAnimJoint();
HAnimJoint778.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint778.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint778.setCenter(new float[]{-0.10613,0.02454,0.03843});
HAnimJoint778.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint778.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment779 =  HAnimSegment();
HAnimSegment779.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment779.setDEF(CString("hanim_r_metatarsal_4"));
Shape& Shape780 =  Shape();
LineSet& LineSet781 =  LineSet();
LineSet781.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA782 =  ColorRGBA();
ColorRGBA782.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet781.addChild(&ColorRGBA782);

Coordinate& Coordinate783 =  Coordinate();
Coordinate783.setPoint(new float[]{-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021}, 6);
LineSet781.setCoord(Coordinate783);

Shape780.setGeometry(&LineSet781);

HAnimSegment779.addChild(&Shape780);

HAnimJoint778.addChildren(&HAnimSegment779);

HAnimJoint& HAnimJoint784 =  HAnimJoint();
HAnimJoint784.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint784.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint784.setCenter(new float[]{-0.1095,0.01435,0.09117});
HAnimJoint784.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint784.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment785 =  HAnimSegment();
HAnimSegment785.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment785.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Shape& Shape786 =  Shape();
LineSet& LineSet787 =  LineSet();
LineSet787.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA788 =  ColorRGBA();
ColorRGBA788.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet787.addChild(&ColorRGBA788);

Coordinate& Coordinate789 =  Coordinate();
Coordinate789.setPoint(new float[]{-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843}, 6);
LineSet787.setCoord(Coordinate789);

Shape786.setGeometry(&LineSet787);

HAnimSegment785.addChild(&Shape786);

HAnimJoint784.addChildren(&HAnimSegment785);

HAnimJoint& HAnimJoint790 =  HAnimJoint();
HAnimJoint790.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint790.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint790.setCenter(new float[]{-0.11378,0.01224,0.1063});
HAnimJoint790.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint790.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment791 =  HAnimSegment();
HAnimSegment791.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment791.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Shape& Shape792 =  Shape();
LineSet& LineSet793 =  LineSet();
LineSet793.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA794 =  ColorRGBA();
ColorRGBA794.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet793.addChild(&ColorRGBA794);

Coordinate& Coordinate795 =  Coordinate();
Coordinate795.setPoint(new float[]{-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117}, 6);
LineSet793.setCoord(Coordinate795);

Shape792.setGeometry(&LineSet793);

HAnimSegment791.addChild(&Shape792);

HAnimJoint790.addChildren(&HAnimSegment791);

HAnimJoint& HAnimJoint796 =  HAnimJoint();
HAnimJoint796.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint796.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint796.setCenter(new float[]{-0.1153,0.00937,0.11369});
HAnimJoint796.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint796.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment797 =  HAnimSegment();
HAnimSegment797.X3DNode::setName(CString("r_tarsal_distal_phalanx_4"));
HAnimSegment797.setDEF(CString("hanim_r_tarsal_distal_phalanx_4"));
HAnimSite& HAnimSite798 =  HAnimSite();
HAnimSite798.X3DNode::setName(CString("r_tarsal_distal_phalanx_4"));
HAnimSite798.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimSite798.setTranslation(new float[]{-0.115,0.016,0.13});
TouchSensor& TouchSensor799 =  TouchSensor();
TouchSensor799.setDescription(CString("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimSite798.addChild(&TouchSensor799);

Shape& Shape800 =  Shape();
Appearance& Appearance801 =  Appearance();
Material& Material802 =  Material();
Material802.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance801.addChild(&Material802);

Shape800.addChild(&Appearance801);

IndexedFaceSet& IndexedFaceSet803 =  IndexedFaceSet();
IndexedFaceSet803.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet803.setCreaseAngle(0.5);
IndexedFaceSet803.setSolid(false);
ColorRGBA& ColorRGBA804 =  ColorRGBA();
ColorRGBA804.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet803.addChild(&ColorRGBA804);

Coordinate& Coordinate805 =  Coordinate();
Coordinate805.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet803.setCoord(&Coordinate805);

Shape800.setGeometry(&IndexedFaceSet803);

HAnimSite798.addChild(&Shape800);

Billboard& Billboard806 =  Billboard();
Billboard806.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape807 =  Shape();
Text& Text808 =  Text();
Text808.setString(new CString[]{CString("119")}, 1);
CFontStyle& FontStyle809 =  CFontStyle();
FontStyle809.setSize(0.035);
Text808.setFontStyle(&FontStyle809);

Shape807.setGeometry(&Text808);

Billboard806.addChild(&Shape807);

HAnimSite798.addChild(Billboard806);

HAnimSegment797.addChild(&HAnimSite798);

Shape& Shape810 =  Shape();
LineSet& LineSet811 =  LineSet();
LineSet811.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA812 =  ColorRGBA();
ColorRGBA812.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet811.addChild(&ColorRGBA812);

Coordinate& Coordinate813 =  Coordinate();
Coordinate813.setPoint(new float[]{-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063}, 6);
LineSet811.setCoord(Coordinate813);

Shape810.setGeometry(&LineSet811);

HAnimSegment797.addChild(&Shape810);

HAnimJoint796.addChildren(&HAnimSegment797);

HAnimJoint790.addChildren(&HAnimJoint796);

HAnimJoint784.addChildren(&HAnimJoint790);

HAnimJoint778.addChildren(&HAnimJoint784);

HAnimJoint772.addChildren(&HAnimJoint778);

HAnimJoint& HAnimJoint814 =  HAnimJoint();
HAnimJoint814.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint814.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint814.setCenter(new float[]{-0.12044,0.020945,0.03474});
HAnimJoint814.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint814.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment815 =  HAnimSegment();
HAnimSegment815.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment815.setDEF(CString("hanim_r_metatarsal_5"));
Shape& Shape816 =  Shape();
LineSet& LineSet817 =  LineSet();
LineSet817.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA818 =  ColorRGBA();
ColorRGBA818.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet817.addChild(&ColorRGBA818);

Coordinate& Coordinate819 =  Coordinate();
Coordinate819.setPoint(new float[]{-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021}, 6);
LineSet817.setCoord(Coordinate819);

Shape816.setGeometry(&LineSet817);

HAnimSegment815.addChild(&Shape816);

HAnimJoint814.addChildren(&HAnimSegment815);

HAnimJoint& HAnimJoint820 =  HAnimJoint();
HAnimJoint820.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint820.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint820.setCenter(new float[]{-0.12368,0.01367,0.08656});
HAnimJoint820.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint820.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment821 =  HAnimSegment();
HAnimSegment821.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment821.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Shape& Shape822 =  Shape();
LineSet& LineSet823 =  LineSet();
LineSet823.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA824 =  ColorRGBA();
ColorRGBA824.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet823.addChild(&ColorRGBA824);

Coordinate& Coordinate825 =  Coordinate();
Coordinate825.setPoint(new float[]{-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474}, 6);
LineSet823.setCoord(Coordinate825);

Shape822.setGeometry(&LineSet823);

HAnimSegment821.addChild(&Shape822);

HAnimJoint820.addChildren(&HAnimSegment821);

HAnimJoint& HAnimJoint826 =  HAnimJoint();
HAnimJoint826.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint826.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint826.setCenter(new float[]{-0.126,0.01086,0.09414});
HAnimJoint826.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint826.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment827 =  HAnimSegment();
HAnimSegment827.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment827.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimSite& HAnimSite828 =  HAnimSite();
HAnimSite828.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite828.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite828.setTranslation(new float[]{-0.12,0.02,0.04});
TouchSensor& TouchSensor829 =  TouchSensor();
TouchSensor829.setDescription(CString("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite828.addChild(&TouchSensor829);

Shape& Shape830 =  Shape();
Appearance& Appearance831 =  Appearance();
Material& Material832 =  Material();
Material832.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance831.addChild(&Material832);

Shape830.addChild(&Appearance831);

IndexedFaceSet& IndexedFaceSet833 =  IndexedFaceSet();
IndexedFaceSet833.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet833.setCreaseAngle(0.5);
IndexedFaceSet833.setSolid(false);
ColorRGBA& ColorRGBA834 =  ColorRGBA();
ColorRGBA834.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet833.addChild(&ColorRGBA834);

Coordinate& Coordinate835 =  Coordinate();
Coordinate835.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet833.setCoord(&Coordinate835);

Shape830.setGeometry(&IndexedFaceSet833);

HAnimSite828.addChild(&Shape830);

Billboard& Billboard836 =  Billboard();
Billboard836.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape837 =  Shape();
Text& Text838 =  Text();
Text838.setString(new CString[]{CString("60")}, 1);
CFontStyle& FontStyle839 =  CFontStyle();
FontStyle839.setSize(0.035);
Text838.setFontStyle(&FontStyle839);

Shape837.setGeometry(&Text838);

Billboard836.addChild(&Shape837);

HAnimSite828.addChild(Billboard836);

HAnimSegment827.addChild(&HAnimSite828);

Shape& Shape840 =  Shape();
LineSet& LineSet841 =  LineSet();
LineSet841.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA842 =  ColorRGBA();
ColorRGBA842.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet841.addChild(&ColorRGBA842);

Coordinate& Coordinate843 =  Coordinate();
Coordinate843.setPoint(new float[]{-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656}, 6);
LineSet841.setCoord(Coordinate843);

Shape840.setGeometry(&LineSet841);

HAnimSegment827.addChild(&Shape840);

HAnimJoint826.addChildren(&HAnimSegment827);

HAnimJoint& HAnimJoint844 =  HAnimJoint();
HAnimJoint844.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint844.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint844.setCenter(new float[]{-0.1269,0.00856,0.10188});
HAnimJoint844.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint844.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment845 =  HAnimSegment();
HAnimSegment845.X3DNode::setName(CString("r_tarsal_distal_phalanx_5"));
HAnimSegment845.setDEF(CString("hanim_r_tarsal_distal_phalanx_5"));
HAnimSite& HAnimSite846 =  HAnimSite();
HAnimSite846.X3DNode::setName(CString("r_tarsal_distal_phalanx_5"));
HAnimSite846.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimSite846.setTranslation(new float[]{-0.125,0.016,0.115});
TouchSensor& TouchSensor847 =  TouchSensor();
TouchSensor847.setDescription(CString("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimSite846.addChild(&TouchSensor847);

Shape& Shape848 =  Shape();
Appearance& Appearance849 =  Appearance();
Material& Material850 =  Material();
Material850.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance849.addChild(&Material850);

Shape848.addChild(&Appearance849);

IndexedFaceSet& IndexedFaceSet851 =  IndexedFaceSet();
IndexedFaceSet851.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet851.setCreaseAngle(0.5);
IndexedFaceSet851.setSolid(false);
ColorRGBA& ColorRGBA852 =  ColorRGBA();
ColorRGBA852.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet851.addChild(&ColorRGBA852);

Coordinate& Coordinate853 =  Coordinate();
Coordinate853.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet851.setCoord(&Coordinate853);

Shape848.setGeometry(&IndexedFaceSet851);

HAnimSite846.addChild(&Shape848);

Billboard& Billboard854 =  Billboard();
Billboard854.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape855 =  Shape();
Text& Text856 =  Text();
Text856.setString(new CString[]{CString("120")}, 1);
CFontStyle& FontStyle857 =  CFontStyle();
FontStyle857.setSize(0.035);
Text856.setFontStyle(&FontStyle857);

Shape855.setGeometry(&Text856);

Billboard854.addChild(&Shape855);

HAnimSite846.addChild(Billboard854);

HAnimSegment845.addChild(&HAnimSite846);

Shape& Shape858 =  Shape();
LineSet& LineSet859 =  LineSet();
LineSet859.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA860 =  ColorRGBA();
ColorRGBA860.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet859.addChild(&ColorRGBA860);

Coordinate& Coordinate861 =  Coordinate();
Coordinate861.setPoint(new float[]{-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414}, 6);
LineSet859.setCoord(Coordinate861);

Shape858.setGeometry(&LineSet859);

HAnimSegment845.addChild(&Shape858);

HAnimJoint844.addChildren(&HAnimSegment845);

HAnimJoint826.addChildren(&HAnimJoint844);

HAnimJoint820.addChildren(&HAnimJoint826);

HAnimJoint814.addChildren(&HAnimJoint820);

HAnimJoint772.addChildren(&HAnimJoint814);

HAnimJoint766.addChildren(&HAnimJoint772);

HAnimJoint598.addChildren(&HAnimJoint766);

HAnimJoint556.addChildren(&HAnimJoint598);

HAnimJoint502.addChildren(&HAnimJoint556);

HAnimJoint16.addChildren(&HAnimJoint502);

HAnimJoint12.addChildren(&HAnimJoint16);

HAnimJoint& HAnimJoint862 =  HAnimJoint();
HAnimJoint862.X3DNode::setName(CString("vl5"));
HAnimJoint862.setDEF(CString("hanim_vl5"));
HAnimJoint862.setCenter(new float[]{0.0,0.9254,-0.01376});
HAnimJoint862.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint862.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment863 =  HAnimSegment();
HAnimSegment863.X3DNode::setName(CString("l5"));
HAnimSegment863.setDEF(CString("hanim_l5"));
HAnimSite& HAnimSite864 =  HAnimSite();
HAnimSite864.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite864.setDEF(CString("hanim_spine_1_middle_back_pt"));
HAnimSite864.setTranslation(new float[]{0.0,1.0,-0.1});
TouchSensor& TouchSensor865 =  TouchSensor();
TouchSensor865.setDescription(CString("HAnimSite 24 hanim_spine_1_middle_back_pt"));
HAnimSite864.addChild(&TouchSensor865);

Shape& Shape866 =  Shape();
Appearance& Appearance867 =  Appearance();
Material& Material868 =  Material();
Material868.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance867.addChild(&Material868);

Shape866.addChild(&Appearance867);

IndexedFaceSet& IndexedFaceSet869 =  IndexedFaceSet();
IndexedFaceSet869.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet869.setCreaseAngle(0.5);
IndexedFaceSet869.setSolid(false);
ColorRGBA& ColorRGBA870 =  ColorRGBA();
ColorRGBA870.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet869.addChild(&ColorRGBA870);

Coordinate& Coordinate871 =  Coordinate();
Coordinate871.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet869.setCoord(&Coordinate871);

Shape866.setGeometry(&IndexedFaceSet869);

HAnimSite864.addChild(&Shape866);

Billboard& Billboard872 =  Billboard();
Billboard872.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape873 =  Shape();
Text& Text874 =  Text();
Text874.setString(new CString[]{CString("24")}, 1);
CFontStyle& FontStyle875 =  CFontStyle();
FontStyle875.setSize(0.035);
Text874.setFontStyle(&FontStyle875);

Shape873.setGeometry(&Text874);

Billboard872.addChild(&Shape873);

HAnimSite864.addChild(Billboard872);

HAnimSegment863.addChild(&HAnimSite864);

HAnimSite& HAnimSite876 =  HAnimSite();
HAnimSite876.X3DNode::setName(CString("spine_2_lower_back"));
HAnimSite876.setDEF(CString("hanim_spine_2_lower_back_pt"));
HAnimSite876.setTranslation(new float[]{0.0,0.95,-0.1});
TouchSensor& TouchSensor877 =  TouchSensor();
TouchSensor877.setDescription(CString("HAnimSite 25 hanim_spine_2_lower_back_pt"));
HAnimSite876.addChild(&TouchSensor877);

Shape& Shape878 =  Shape();
Appearance& Appearance879 =  Appearance();
Material& Material880 =  Material();
Material880.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance879.addChild(&Material880);

Shape878.addChild(&Appearance879);

IndexedFaceSet& IndexedFaceSet881 =  IndexedFaceSet();
IndexedFaceSet881.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet881.setCreaseAngle(0.5);
IndexedFaceSet881.setSolid(false);
ColorRGBA& ColorRGBA882 =  ColorRGBA();
ColorRGBA882.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet881.addChild(&ColorRGBA882);

Coordinate& Coordinate883 =  Coordinate();
Coordinate883.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet881.setCoord(&Coordinate883);

Shape878.setGeometry(&IndexedFaceSet881);

HAnimSite876.addChild(&Shape878);

Billboard& Billboard884 =  Billboard();
Billboard884.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape885 =  Shape();
Text& Text886 =  Text();
Text886.setString(new CString[]{CString("25")}, 1);
CFontStyle& FontStyle887 =  CFontStyle();
FontStyle887.setSize(0.035);
Text886.setFontStyle(&FontStyle887);

Shape885.setGeometry(&Text886);

Billboard884.addChild(&Shape885);

HAnimSite876.addChild(Billboard884);

HAnimSegment863.addChild(&HAnimSite876);

HAnimSite& HAnimSite888 =  HAnimSite();
HAnimSite888.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite888.setDEF(CString("hanim_waist_preferred_anterior_pt"));
HAnimSite888.setTranslation(new float[]{0.0,0.9,0.1});
TouchSensor& TouchSensor889 =  TouchSensor();
TouchSensor889.setDescription(CString("HAnimSite 26 hanim_waist_preferred_anterior_pt"));
HAnimSite888.addChild(&TouchSensor889);

Shape& Shape890 =  Shape();
Appearance& Appearance891 =  Appearance();
Material& Material892 =  Material();
Material892.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance891.addChild(&Material892);

Shape890.addChild(&Appearance891);

IndexedFaceSet& IndexedFaceSet893 =  IndexedFaceSet();
IndexedFaceSet893.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet893.setCreaseAngle(0.5);
IndexedFaceSet893.setSolid(false);
ColorRGBA& ColorRGBA894 =  ColorRGBA();
ColorRGBA894.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet893.addChild(&ColorRGBA894);

Coordinate& Coordinate895 =  Coordinate();
Coordinate895.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet893.setCoord(&Coordinate895);

Shape890.setGeometry(&IndexedFaceSet893);

HAnimSite888.addChild(&Shape890);

Billboard& Billboard896 =  Billboard();
Billboard896.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape897 =  Shape();
Text& Text898 =  Text();
Text898.setString(new CString[]{CString("26")}, 1);
CFontStyle& FontStyle899 =  CFontStyle();
FontStyle899.setSize(0.035);
Text898.setFontStyle(&FontStyle899);

Shape897.setGeometry(&Text898);

Billboard896.addChild(&Shape897);

HAnimSite888.addChild(Billboard896);

HAnimSegment863.addChild(&HAnimSite888);

HAnimSite& HAnimSite900 =  HAnimSite();
HAnimSite900.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite900.setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite900.setTranslation(new float[]{0.0,0.9,-0.1});
TouchSensor& TouchSensor901 =  TouchSensor();
TouchSensor901.setDescription(CString("HAnimSite 27 hanim_waist_preferred_posterior_pt"));
HAnimSite900.addChild(&TouchSensor901);

Shape& Shape902 =  Shape();
Appearance& Appearance903 =  Appearance();
Material& Material904 =  Material();
Material904.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance903.addChild(&Material904);

Shape902.addChild(&Appearance903);

IndexedFaceSet& IndexedFaceSet905 =  IndexedFaceSet();
IndexedFaceSet905.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet905.setCreaseAngle(0.5);
IndexedFaceSet905.setSolid(false);
ColorRGBA& ColorRGBA906 =  ColorRGBA();
ColorRGBA906.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet905.addChild(&ColorRGBA906);

Coordinate& Coordinate907 =  Coordinate();
Coordinate907.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet905.setCoord(&Coordinate907);

Shape902.setGeometry(&IndexedFaceSet905);

HAnimSite900.addChild(&Shape902);

Billboard& Billboard908 =  Billboard();
Billboard908.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape909 =  Shape();
Text& Text910 =  Text();
Text910.setString(new CString[]{CString("27")}, 1);
CFontStyle& FontStyle911 =  CFontStyle();
FontStyle911.setSize(0.035);
Text910.setFontStyle(&FontStyle911);

Shape909.setGeometry(&Text910);

Billboard908.addChild(&Shape909);

HAnimSite900.addChild(Billboard908);

HAnimSegment863.addChild(&HAnimSite900);

HAnimSite& HAnimSite912 =  HAnimSite();
HAnimSite912.X3DNode::setName(CString("navel"));
HAnimSite912.setDEF(CString("hanim_navel_pt"));
HAnimSite912.setTranslation(new float[]{0.0,0.9,-0.1});
TouchSensor& TouchSensor913 =  TouchSensor();
TouchSensor913.setDescription(CString("HAnimSite 84 hanim_navel_pt"));
HAnimSite912.addChild(&TouchSensor913);

Shape& Shape914 =  Shape();
Appearance& Appearance915 =  Appearance();
Material& Material916 =  Material();
Material916.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance915.addChild(&Material916);

Shape914.addChild(&Appearance915);

IndexedFaceSet& IndexedFaceSet917 =  IndexedFaceSet();
IndexedFaceSet917.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet917.setCreaseAngle(0.5);
IndexedFaceSet917.setSolid(false);
ColorRGBA& ColorRGBA918 =  ColorRGBA();
ColorRGBA918.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet917.addChild(&ColorRGBA918);

Coordinate& Coordinate919 =  Coordinate();
Coordinate919.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet917.setCoord(&Coordinate919);

Shape914.setGeometry(&IndexedFaceSet917);

HAnimSite912.addChild(&Shape914);

Billboard& Billboard920 =  Billboard();
Billboard920.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape921 =  Shape();
Text& Text922 =  Text();
Text922.setString(new CString[]{CString("84")}, 1);
CFontStyle& FontStyle923 =  CFontStyle();
FontStyle923.setSize(0.035);
Text922.setFontStyle(&FontStyle923);

Shape921.setGeometry(&Text922);

Billboard920.addChild(&Shape921);

HAnimSite912.addChild(Billboard920);

HAnimSegment863.addChild(&HAnimSite912);

Shape& Shape924 =  Shape();
LineSet& LineSet925 =  LineSet();
LineSet925.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA926 =  ColorRGBA();
ColorRGBA926.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet925.addChild(&ColorRGBA926);

Coordinate& Coordinate927 =  Coordinate();
Coordinate927.setPoint(new float[]{0.0,0.9254,-0.01376,0.0,0.77,0.0}, 6);
LineSet925.setCoord(Coordinate927);

Shape924.setGeometry(&LineSet925);

HAnimSegment863.addChild(&Shape924);

HAnimJoint862.addChildren(&HAnimSegment863);

HAnimJoint& HAnimJoint928 =  HAnimJoint();
HAnimJoint928.X3DNode::setName(CString("vl4"));
HAnimJoint928.setDEF(CString("hanim_vl4"));
HAnimJoint928.setCenter(new float[]{0.0,0.9497,-0.01376});
HAnimJoint928.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint928.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment929 =  HAnimSegment();
HAnimSegment929.X3DNode::setName(CString("l4"));
HAnimSegment929.setDEF(CString("hanim_l4"));
Shape& Shape930 =  Shape();
LineSet& LineSet931 =  LineSet();
LineSet931.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA932 =  ColorRGBA();
ColorRGBA932.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet931.addChild(&ColorRGBA932);

Coordinate& Coordinate933 =  Coordinate();
Coordinate933.setPoint(new float[]{0.0,0.9497,-0.01376,0.0,0.9254,-0.01376}, 6);
LineSet931.setCoord(Coordinate933);

Shape930.setGeometry(&LineSet931);

HAnimSegment929.addChild(&Shape930);

HAnimJoint928.addChildren(&HAnimSegment929);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.X3DNode::setName(CString("vl3"));
HAnimJoint934.setDEF(CString("hanim_vl3"));
HAnimJoint934.setCenter(new float[]{0.0,0.9659,-0.01376});
HAnimJoint934.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint934.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment935 =  HAnimSegment();
HAnimSegment935.X3DNode::setName(CString("l3"));
HAnimSegment935.setDEF(CString("hanim_l3"));
Shape& Shape936 =  Shape();
LineSet& LineSet937 =  LineSet();
LineSet937.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA938 =  ColorRGBA();
ColorRGBA938.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet937.addChild(&ColorRGBA938);

Coordinate& Coordinate939 =  Coordinate();
Coordinate939.setPoint(new float[]{0.0,0.9659,-0.01376,0.0,0.9497,-0.01376}, 6);
LineSet937.setCoord(Coordinate939);

Shape936.setGeometry(&LineSet937);

HAnimSegment935.addChild(&Shape936);

HAnimJoint934.addChildren(&HAnimSegment935);

HAnimJoint& HAnimJoint940 =  HAnimJoint();
HAnimJoint940.X3DNode::setName(CString("vl2"));
HAnimJoint940.setDEF(CString("hanim_vl2"));
HAnimJoint940.setCenter(new float[]{0.0,0.98235,-0.01376});
HAnimJoint940.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint940.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment941 =  HAnimSegment();
HAnimSegment941.X3DNode::setName(CString("l2"));
HAnimSegment941.setDEF(CString("hanim_l2"));
HAnimSite& HAnimSite942 =  HAnimSite();
HAnimSite942.X3DNode::setName(CString("l_rib10"));
HAnimSite942.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite942.setTranslation(new float[]{0.09,1.0,0.04});
TouchSensor& TouchSensor943 =  TouchSensor();
TouchSensor943.setDescription(CString("HAnimSite 28 hanim_l_rib10_pt"));
HAnimSite942.addChild(&TouchSensor943);

Shape& Shape944 =  Shape();
Appearance& Appearance945 =  Appearance();
Material& Material946 =  Material();
Material946.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance945.addChild(&Material946);

Shape944.addChild(&Appearance945);

IndexedFaceSet& IndexedFaceSet947 =  IndexedFaceSet();
IndexedFaceSet947.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet947.setCreaseAngle(0.5);
IndexedFaceSet947.setSolid(false);
ColorRGBA& ColorRGBA948 =  ColorRGBA();
ColorRGBA948.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet947.addChild(&ColorRGBA948);

Coordinate& Coordinate949 =  Coordinate();
Coordinate949.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet947.setCoord(&Coordinate949);

Shape944.setGeometry(&IndexedFaceSet947);

HAnimSite942.addChild(&Shape944);

Billboard& Billboard950 =  Billboard();
Billboard950.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape951 =  Shape();
Text& Text952 =  Text();
Text952.setString(new CString[]{CString("28")}, 1);
CFontStyle& FontStyle953 =  CFontStyle();
FontStyle953.setSize(0.035);
Text952.setFontStyle(&FontStyle953);

Shape951.setGeometry(&Text952);

Billboard950.addChild(&Shape951);

HAnimSite942.addChild(Billboard950);

HAnimSegment941.addChild(&HAnimSite942);

HAnimSite& HAnimSite954 =  HAnimSite();
HAnimSite954.X3DNode::setName(CString("r_rib10"));
HAnimSite954.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite954.setTranslation(new float[]{-0.09,1.0,0.04});
TouchSensor& TouchSensor955 =  TouchSensor();
TouchSensor955.setDescription(CString("HAnimSite 30 hanim_r_rib10_pt"));
HAnimSite954.addChild(&TouchSensor955);

Shape& Shape956 =  Shape();
Appearance& Appearance957 =  Appearance();
Material& Material958 =  Material();
Material958.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance957.addChild(&Material958);

Shape956.addChild(&Appearance957);

IndexedFaceSet& IndexedFaceSet959 =  IndexedFaceSet();
IndexedFaceSet959.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet959.setCreaseAngle(0.5);
IndexedFaceSet959.setSolid(false);
ColorRGBA& ColorRGBA960 =  ColorRGBA();
ColorRGBA960.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet959.addChild(&ColorRGBA960);

Coordinate& Coordinate961 =  Coordinate();
Coordinate961.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet959.setCoord(&Coordinate961);

Shape956.setGeometry(&IndexedFaceSet959);

HAnimSite954.addChild(&Shape956);

Billboard& Billboard962 =  Billboard();
Billboard962.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape963 =  Shape();
Text& Text964 =  Text();
Text964.setString(new CString[]{CString("30")}, 1);
CFontStyle& FontStyle965 =  CFontStyle();
FontStyle965.setSize(0.035);
Text964.setFontStyle(&FontStyle965);

Shape963.setGeometry(&Text964);

Billboard962.addChild(&Shape963);

HAnimSite954.addChild(Billboard962);

HAnimSegment941.addChild(&HAnimSite954);

Shape& Shape966 =  Shape();
LineSet& LineSet967 =  LineSet();
LineSet967.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA968 =  ColorRGBA();
ColorRGBA968.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet967.addChild(&ColorRGBA968);

Coordinate& Coordinate969 =  Coordinate();
Coordinate969.setPoint(new float[]{0.0,0.98235,-0.01376,0.0,0.9659,-0.01376}, 6);
LineSet967.setCoord(Coordinate969);

Shape966.setGeometry(&LineSet967);

HAnimSegment941.addChild(&Shape966);

HAnimJoint940.addChildren(&HAnimSegment941);

HAnimJoint& HAnimJoint970 =  HAnimJoint();
HAnimJoint970.X3DNode::setName(CString("vl1"));
HAnimJoint970.setDEF(CString("hanim_vl1"));
HAnimJoint970.setCenter(new float[]{0.0,0.99967,-0.01376});
HAnimJoint970.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint970.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment971 =  HAnimSegment();
HAnimSegment971.X3DNode::setName(CString("l1"));
HAnimSegment971.setDEF(CString("hanim_l1"));
Shape& Shape972 =  Shape();
LineSet& LineSet973 =  LineSet();
LineSet973.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA974 =  ColorRGBA();
ColorRGBA974.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet973.addChild(&ColorRGBA974);

Coordinate& Coordinate975 =  Coordinate();
Coordinate975.setPoint(new float[]{0.0,0.99967,-0.01376,0.0,0.98235,-0.01376}, 6);
LineSet973.setCoord(Coordinate975);

Shape972.setGeometry(&LineSet973);

HAnimSegment971.addChild(&Shape972);

HAnimJoint970.addChildren(&HAnimSegment971);

HAnimJoint& HAnimJoint976 =  HAnimJoint();
HAnimJoint976.X3DNode::setName(CString("vt12"));
HAnimJoint976.setDEF(CString("hanim_vt12"));
HAnimJoint976.setCenter(new float[]{0.0,1.0231,-0.01376});
HAnimJoint976.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint976.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment977 =  HAnimSegment();
HAnimSegment977.X3DNode::setName(CString("t12"));
HAnimSegment977.setDEF(CString("hanim_t12"));
Shape& Shape978 =  Shape();
LineSet& LineSet979 =  LineSet();
LineSet979.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA980 =  ColorRGBA();
ColorRGBA980.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet979.addChild(&ColorRGBA980);

Coordinate& Coordinate981 =  Coordinate();
Coordinate981.setPoint(new float[]{0.0,1.0231,-0.01376,0.0,0.99967,-0.01376}, 6);
LineSet979.setCoord(Coordinate981);

Shape978.setGeometry(&LineSet979);

HAnimSegment977.addChild(&Shape978);

HAnimJoint976.addChildren(&HAnimSegment977);

HAnimJoint& HAnimJoint982 =  HAnimJoint();
HAnimJoint982.X3DNode::setName(CString("vt11"));
HAnimJoint982.setDEF(CString("hanim_vt11"));
HAnimJoint982.setCenter(new float[]{0.0,1.0467,-0.01376});
HAnimJoint982.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint982.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment983 =  HAnimSegment();
HAnimSegment983.X3DNode::setName(CString("t11"));
HAnimSegment983.setDEF(CString("hanim_t11"));
Shape& Shape984 =  Shape();
LineSet& LineSet985 =  LineSet();
LineSet985.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA986 =  ColorRGBA();
ColorRGBA986.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet985.addChild(&ColorRGBA986);

Coordinate& Coordinate987 =  Coordinate();
Coordinate987.setPoint(new float[]{0.0,1.0467,-0.01376,0.0,1.0231,-0.01376}, 6);
LineSet985.setCoord(Coordinate987);

Shape984.setGeometry(&LineSet985);

HAnimSegment983.addChild(&Shape984);

HAnimJoint982.addChildren(&HAnimSegment983);

HAnimJoint& HAnimJoint988 =  HAnimJoint();
HAnimJoint988.X3DNode::setName(CString("vt10"));
HAnimJoint988.setDEF(CString("hanim_vt10"));
HAnimJoint988.setCenter(new float[]{0.0,1.0638,-0.01378});
HAnimJoint988.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint988.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment989 =  HAnimSegment();
HAnimSegment989.X3DNode::setName(CString("t10"));
HAnimSegment989.setDEF(CString("hanim_t10"));
HAnimSite& HAnimSite990 =  HAnimSite();
HAnimSite990.X3DNode::setName(CString("substernale"));
HAnimSite990.setDEF(CString("hanim_substernale_pt"));
HAnimSite990.setTranslation(new float[]{0.0,1.08,0.076});
TouchSensor& TouchSensor991 =  TouchSensor();
TouchSensor991.setDescription(CString("HAnimSite 13 hanim_substernale_pt"));
HAnimSite990.addChild(&TouchSensor991);

Shape& Shape992 =  Shape();
Appearance& Appearance993 =  Appearance();
Material& Material994 =  Material();
Material994.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance993.addChild(&Material994);

Shape992.addChild(&Appearance993);

IndexedFaceSet& IndexedFaceSet995 =  IndexedFaceSet();
IndexedFaceSet995.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet995.setCreaseAngle(0.5);
IndexedFaceSet995.setSolid(false);
ColorRGBA& ColorRGBA996 =  ColorRGBA();
ColorRGBA996.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet995.addChild(&ColorRGBA996);

Coordinate& Coordinate997 =  Coordinate();
Coordinate997.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet995.setCoord(&Coordinate997);

Shape992.setGeometry(&IndexedFaceSet995);

HAnimSite990.addChild(&Shape992);

Billboard& Billboard998 =  Billboard();
Billboard998.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape999 =  Shape();
Text& Text1000 =  Text();
Text1000.setString(new CString[]{CString("13")}, 1);
CFontStyle& FontStyle1001 =  CFontStyle();
FontStyle1001.setSize(0.035);
Text1000.setFontStyle(&FontStyle1001);

Shape999.setGeometry(&Text1000);

Billboard998.addChild(&Shape999);

HAnimSite990.addChild(Billboard998);

HAnimSegment989.addChild(&HAnimSite990);

HAnimSite& HAnimSite1002 =  HAnimSite();
HAnimSite1002.X3DNode::setName(CString("mesosternale"));
HAnimSite1002.setDEF(CString("hanim_mesosternale_pt"));
HAnimSite1002.setTranslation(new float[]{0.0,1.15,0.076});
TouchSensor& TouchSensor1003 =  TouchSensor();
TouchSensor1003.setDescription(CString("HAnimSite 88 hanim_mesosternale_pt"));
HAnimSite1002.addChild(&TouchSensor1003);

Shape& Shape1004 =  Shape();
Appearance& Appearance1005 =  Appearance();
Material& Material1006 =  Material();
Material1006.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1005.addChild(&Material1006);

Shape1004.addChild(&Appearance1005);

IndexedFaceSet& IndexedFaceSet1007 =  IndexedFaceSet();
IndexedFaceSet1007.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1007.setCreaseAngle(0.5);
IndexedFaceSet1007.setSolid(false);
ColorRGBA& ColorRGBA1008 =  ColorRGBA();
ColorRGBA1008.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1007.addChild(&ColorRGBA1008);

Coordinate& Coordinate1009 =  Coordinate();
Coordinate1009.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1007.setCoord(&Coordinate1009);

Shape1004.setGeometry(&IndexedFaceSet1007);

HAnimSite1002.addChild(&Shape1004);

Billboard& Billboard1010 =  Billboard();
Billboard1010.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1011 =  Shape();
Text& Text1012 =  Text();
Text1012.setString(new CString[]{CString("88")}, 1);
CFontStyle& FontStyle1013 =  CFontStyle();
FontStyle1013.setSize(0.035);
Text1012.setFontStyle(&FontStyle1013);

Shape1011.setGeometry(&Text1012);

Billboard1010.addChild(&Shape1011);

HAnimSite1002.addChild(Billboard1010);

HAnimSegment989.addChild(&HAnimSite1002);

Shape& Shape1014 =  Shape();
LineSet& LineSet1015 =  LineSet();
LineSet1015.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1016 =  ColorRGBA();
ColorRGBA1016.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1015.addChild(&ColorRGBA1016);

Coordinate& Coordinate1017 =  Coordinate();
Coordinate1017.setPoint(new float[]{0.0,1.0638,-0.01378,0.0,1.0467,-0.01376}, 6);
LineSet1015.setCoord(Coordinate1017);

Shape1014.setGeometry(&LineSet1015);

HAnimSegment989.addChild(&Shape1014);

HAnimJoint988.addChildren(&HAnimSegment989);

HAnimJoint& HAnimJoint1018 =  HAnimJoint();
HAnimJoint1018.X3DNode::setName(CString("vt9"));
HAnimJoint1018.setDEF(CString("hanim_vt9"));
HAnimJoint1018.setCenter(new float[]{0.0,1.0784,-0.01376});
HAnimJoint1018.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1018.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1019 =  HAnimSegment();
HAnimSegment1019.X3DNode::setName(CString("t9"));
HAnimSegment1019.setDEF(CString("hanim_t9"));
HAnimSite& HAnimSite1020 =  HAnimSite();
HAnimSite1020.X3DNode::setName(CString("l_thelion"));
HAnimSite1020.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite1020.setTranslation(new float[]{0.07,1.12,0.09});
TouchSensor& TouchSensor1021 =  TouchSensor();
TouchSensor1021.setDescription(CString("HAnimSite 29 hanim_l_thelion_pt"));
HAnimSite1020.addChild(&TouchSensor1021);

Shape& Shape1022 =  Shape();
Appearance& Appearance1023 =  Appearance();
Material& Material1024 =  Material();
Material1024.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1023.addChild(&Material1024);

Shape1022.addChild(&Appearance1023);

IndexedFaceSet& IndexedFaceSet1025 =  IndexedFaceSet();
IndexedFaceSet1025.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1025.setCreaseAngle(0.5);
IndexedFaceSet1025.setSolid(false);
ColorRGBA& ColorRGBA1026 =  ColorRGBA();
ColorRGBA1026.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1025.addChild(&ColorRGBA1026);

Coordinate& Coordinate1027 =  Coordinate();
Coordinate1027.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1025.setCoord(&Coordinate1027);

Shape1022.setGeometry(&IndexedFaceSet1025);

HAnimSite1020.addChild(&Shape1022);

Billboard& Billboard1028 =  Billboard();
Billboard1028.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1029 =  Shape();
Text& Text1030 =  Text();
Text1030.setString(new CString[]{CString("29")}, 1);
CFontStyle& FontStyle1031 =  CFontStyle();
FontStyle1031.setSize(0.035);
Text1030.setFontStyle(&FontStyle1031);

Shape1029.setGeometry(&Text1030);

Billboard1028.addChild(&Shape1029);

HAnimSite1020.addChild(Billboard1028);

HAnimSegment1019.addChild(&HAnimSite1020);

HAnimSite& HAnimSite1032 =  HAnimSite();
HAnimSite1032.X3DNode::setName(CString("r_thelion"));
HAnimSite1032.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite1032.setTranslation(new float[]{-0.07,1.12,0.09});
TouchSensor& TouchSensor1033 =  TouchSensor();
TouchSensor1033.setDescription(CString("HAnimSite 31 hanim_r_thelion_pt"));
HAnimSite1032.addChild(&TouchSensor1033);

Shape& Shape1034 =  Shape();
Appearance& Appearance1035 =  Appearance();
Material& Material1036 =  Material();
Material1036.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1035.addChild(&Material1036);

Shape1034.addChild(&Appearance1035);

IndexedFaceSet& IndexedFaceSet1037 =  IndexedFaceSet();
IndexedFaceSet1037.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1037.setCreaseAngle(0.5);
IndexedFaceSet1037.setSolid(false);
ColorRGBA& ColorRGBA1038 =  ColorRGBA();
ColorRGBA1038.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1037.addChild(&ColorRGBA1038);

Coordinate& Coordinate1039 =  Coordinate();
Coordinate1039.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1037.setCoord(&Coordinate1039);

Shape1034.setGeometry(&IndexedFaceSet1037);

HAnimSite1032.addChild(&Shape1034);

Billboard& Billboard1040 =  Billboard();
Billboard1040.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1041 =  Shape();
Text& Text1042 =  Text();
Text1042.setString(new CString[]{CString("31")}, 1);
CFontStyle& FontStyle1043 =  CFontStyle();
FontStyle1043.setSize(0.035);
Text1042.setFontStyle(&FontStyle1043);

Shape1041.setGeometry(&Text1042);

Billboard1040.addChild(&Shape1041);

HAnimSite1032.addChild(Billboard1040);

HAnimSegment1019.addChild(&HAnimSite1032);

HAnimSite& HAnimSite1044 =  HAnimSite();
HAnimSite1044.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite1044.setDEF(CString("hanim_rear_center_midsagittal_plane_pt"));
HAnimSite1044.setTranslation(new float[]{0.0,1.1,-0.1});
TouchSensor& TouchSensor1045 =  TouchSensor();
TouchSensor1045.setDescription(CString("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt"));
HAnimSite1044.addChild(&TouchSensor1045);

Shape& Shape1046 =  Shape();
Appearance& Appearance1047 =  Appearance();
Material& Material1048 =  Material();
Material1048.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1047.addChild(&Material1048);

Shape1046.addChild(&Appearance1047);

IndexedFaceSet& IndexedFaceSet1049 =  IndexedFaceSet();
IndexedFaceSet1049.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1049.setCreaseAngle(0.5);
IndexedFaceSet1049.setSolid(false);
ColorRGBA& ColorRGBA1050 =  ColorRGBA();
ColorRGBA1050.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1049.addChild(&ColorRGBA1050);

Coordinate& Coordinate1051 =  Coordinate();
Coordinate1051.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1049.setCoord(&Coordinate1051);

Shape1046.setGeometry(&IndexedFaceSet1049);

HAnimSite1044.addChild(&Shape1046);

Billboard& Billboard1052 =  Billboard();
Billboard1052.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1053 =  Shape();
Text& Text1054 =  Text();
Text1054.setString(new CString[]{CString("92")}, 1);
CFontStyle& FontStyle1055 =  CFontStyle();
FontStyle1055.setSize(0.035);
Text1054.setFontStyle(&FontStyle1055);

Shape1053.setGeometry(&Text1054);

Billboard1052.addChild(&Shape1053);

HAnimSite1044.addChild(Billboard1052);

HAnimSegment1019.addChild(&HAnimSite1044);

HAnimSite& HAnimSite1056 =  HAnimSite();
HAnimSite1056.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite1056.setDEF(CString("hanim_l_chest_midsagittal_plane_pt"));
HAnimSite1056.setTranslation(new float[]{0.13,1.12,0.0});
TouchSensor& TouchSensor1057 =  TouchSensor();
TouchSensor1057.setDescription(CString("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt"));
HAnimSite1056.addChild(&TouchSensor1057);

Shape& Shape1058 =  Shape();
Appearance& Appearance1059 =  Appearance();
Material& Material1060 =  Material();
Material1060.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1059.addChild(&Material1060);

Shape1058.addChild(&Appearance1059);

IndexedFaceSet& IndexedFaceSet1061 =  IndexedFaceSet();
IndexedFaceSet1061.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1061.setCreaseAngle(0.5);
IndexedFaceSet1061.setSolid(false);
ColorRGBA& ColorRGBA1062 =  ColorRGBA();
ColorRGBA1062.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1061.addChild(&ColorRGBA1062);

Coordinate& Coordinate1063 =  Coordinate();
Coordinate1063.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1061.setCoord(&Coordinate1063);

Shape1058.setGeometry(&IndexedFaceSet1061);

HAnimSite1056.addChild(&Shape1058);

Billboard& Billboard1064 =  Billboard();
Billboard1064.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1065 =  Shape();
Text& Text1066 =  Text();
Text1066.setString(new CString[]{CString("94")}, 1);
CFontStyle& FontStyle1067 =  CFontStyle();
FontStyle1067.setSize(0.035);
Text1066.setFontStyle(&FontStyle1067);

Shape1065.setGeometry(&Text1066);

Billboard1064.addChild(&Shape1065);

HAnimSite1056.addChild(Billboard1064);

HAnimSegment1019.addChild(&HAnimSite1056);

HAnimSite& HAnimSite1068 =  HAnimSite();
HAnimSite1068.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite1068.setDEF(CString("hanim_r_chest_midsagittal_plane_pt"));
HAnimSite1068.setTranslation(new float[]{-0.13,1.12,0.0});
TouchSensor& TouchSensor1069 =  TouchSensor();
TouchSensor1069.setDescription(CString("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt"));
HAnimSite1068.addChild(&TouchSensor1069);

Shape& Shape1070 =  Shape();
Appearance& Appearance1071 =  Appearance();
Material& Material1072 =  Material();
Material1072.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1071.addChild(&Material1072);

Shape1070.addChild(&Appearance1071);

IndexedFaceSet& IndexedFaceSet1073 =  IndexedFaceSet();
IndexedFaceSet1073.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1073.setCreaseAngle(0.5);
IndexedFaceSet1073.setSolid(false);
ColorRGBA& ColorRGBA1074 =  ColorRGBA();
ColorRGBA1074.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1073.addChild(&ColorRGBA1074);

Coordinate& Coordinate1075 =  Coordinate();
Coordinate1075.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1073.setCoord(&Coordinate1075);

Shape1070.setGeometry(&IndexedFaceSet1073);

HAnimSite1068.addChild(&Shape1070);

Billboard& Billboard1076 =  Billboard();
Billboard1076.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1077 =  Shape();
Text& Text1078 =  Text();
Text1078.setString(new CString[]{CString("95")}, 1);
CFontStyle& FontStyle1079 =  CFontStyle();
FontStyle1079.setSize(0.035);
Text1078.setFontStyle(&FontStyle1079);

Shape1077.setGeometry(&Text1078);

Billboard1076.addChild(&Shape1077);

HAnimSite1068.addChild(Billboard1076);

HAnimSegment1019.addChild(&HAnimSite1068);

Shape& Shape1080 =  Shape();
LineSet& LineSet1081 =  LineSet();
LineSet1081.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1082 =  ColorRGBA();
ColorRGBA1082.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1081.addChild(&ColorRGBA1082);

Coordinate& Coordinate1083 =  Coordinate();
Coordinate1083.setPoint(new float[]{0.0,1.0784,-0.01376,0.0,1.0638,-0.01378}, 6);
LineSet1081.setCoord(Coordinate1083);

Shape1080.setGeometry(&LineSet1081);

HAnimSegment1019.addChild(&Shape1080);

HAnimJoint1018.addChildren(&HAnimSegment1019);

HAnimJoint& HAnimJoint1084 =  HAnimJoint();
HAnimJoint1084.X3DNode::setName(CString("vt8"));
HAnimJoint1084.setDEF(CString("hanim_vt8"));
HAnimJoint1084.setCenter(new float[]{0.0,1.093,-0.01376});
HAnimJoint1084.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1084.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1085 =  HAnimSegment();
HAnimSegment1085.X3DNode::setName(CString("t8"));
HAnimSegment1085.setDEF(CString("hanim_t8"));
Shape& Shape1086 =  Shape();
LineSet& LineSet1087 =  LineSet();
LineSet1087.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1088 =  ColorRGBA();
ColorRGBA1088.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1087.addChild(&ColorRGBA1088);

Coordinate& Coordinate1089 =  Coordinate();
Coordinate1089.setPoint(new float[]{0.0,1.093,-0.01376,0.0,1.0784,-0.01376}, 6);
LineSet1087.setCoord(Coordinate1089);

Shape1086.setGeometry(&LineSet1087);

HAnimSegment1085.addChild(&Shape1086);

HAnimJoint1084.addChildren(&HAnimSegment1085);

HAnimJoint& HAnimJoint1090 =  HAnimJoint();
HAnimJoint1090.X3DNode::setName(CString("vt7"));
HAnimJoint1090.setDEF(CString("hanim_vt7"));
HAnimJoint1090.setCenter(new float[]{0.0,1.1088,-0.01376});
HAnimJoint1090.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1090.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1091 =  HAnimSegment();
HAnimSegment1091.X3DNode::setName(CString("t7"));
HAnimSegment1091.setDEF(CString("hanim_t7"));
Shape& Shape1092 =  Shape();
LineSet& LineSet1093 =  LineSet();
LineSet1093.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1094 =  ColorRGBA();
ColorRGBA1094.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1093.addChild(&ColorRGBA1094);

Coordinate& Coordinate1095 =  Coordinate();
Coordinate1095.setPoint(new float[]{0.0,1.1088,-0.01376,0.0,1.093,-0.01376}, 6);
LineSet1093.setCoord(Coordinate1095);

Shape1092.setGeometry(&LineSet1093);

HAnimSegment1091.addChild(&Shape1092);

HAnimJoint1090.addChildren(&HAnimSegment1091);

HAnimJoint& HAnimJoint1096 =  HAnimJoint();
HAnimJoint1096.X3DNode::setName(CString("vt6"));
HAnimJoint1096.setDEF(CString("hanim_vt6"));
HAnimJoint1096.setCenter(new float[]{0.0,1.1216,-0.01376});
HAnimJoint1096.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1096.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1097 =  HAnimSegment();
HAnimSegment1097.X3DNode::setName(CString("t6"));
HAnimSegment1097.setDEF(CString("hanim_t6"));
Shape& Shape1098 =  Shape();
LineSet& LineSet1099 =  LineSet();
LineSet1099.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1100 =  ColorRGBA();
ColorRGBA1100.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1099.addChild(&ColorRGBA1100);

Coordinate& Coordinate1101 =  Coordinate();
Coordinate1101.setPoint(new float[]{0.0,1.1216,-0.01376,0.0,1.1088,-0.01376}, 6);
LineSet1099.setCoord(Coordinate1101);

Shape1098.setGeometry(&LineSet1099);

HAnimSegment1097.addChild(&Shape1098);

HAnimJoint1096.addChildren(&HAnimSegment1097);

HAnimJoint& HAnimJoint1102 =  HAnimJoint();
HAnimJoint1102.X3DNode::setName(CString("vt5"));
HAnimJoint1102.setDEF(CString("hanim_vt5"));
HAnimJoint1102.setCenter(new float[]{0.0,1.137,-0.01376});
HAnimJoint1102.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1102.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1103 =  HAnimSegment();
HAnimSegment1103.X3DNode::setName(CString("t5"));
HAnimSegment1103.setDEF(CString("hanim_t5"));
Shape& Shape1104 =  Shape();
LineSet& LineSet1105 =  LineSet();
LineSet1105.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1106 =  ColorRGBA();
ColorRGBA1106.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1105.addChild(&ColorRGBA1106);

Coordinate& Coordinate1107 =  Coordinate();
Coordinate1107.setPoint(new float[]{0.0,1.137,-0.01376,0.0,1.1216,-0.01376}, 6);
LineSet1105.setCoord(Coordinate1107);

Shape1104.setGeometry(&LineSet1105);

HAnimSegment1103.addChild(&Shape1104);

HAnimJoint1102.addChildren(&HAnimSegment1103);

HAnimJoint& HAnimJoint1108 =  HAnimJoint();
HAnimJoint1108.X3DNode::setName(CString("vt4"));
HAnimJoint1108.setDEF(CString("hanim_vt4"));
HAnimJoint1108.setCenter(new float[]{0.0,1.1524,-0.01376});
HAnimJoint1108.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1108.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1109 =  HAnimSegment();
HAnimSegment1109.X3DNode::setName(CString("t4"));
HAnimSegment1109.setDEF(CString("hanim_t4"));
Shape& Shape1110 =  Shape();
LineSet& LineSet1111 =  LineSet();
LineSet1111.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1112 =  ColorRGBA();
ColorRGBA1112.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1111.addChild(&ColorRGBA1112);

Coordinate& Coordinate1113 =  Coordinate();
Coordinate1113.setPoint(new float[]{0.0,1.1524,-0.01376,0.0,1.137,-0.01376}, 6);
LineSet1111.setCoord(Coordinate1113);

Shape1110.setGeometry(&LineSet1111);

HAnimSegment1109.addChild(&Shape1110);

HAnimJoint1108.addChildren(&HAnimSegment1109);

HAnimJoint& HAnimJoint1114 =  HAnimJoint();
HAnimJoint1114.X3DNode::setName(CString("vt3"));
HAnimJoint1114.setDEF(CString("hanim_vt3"));
HAnimJoint1114.setCenter(new float[]{0.0,1.1709,-0.01376});
HAnimJoint1114.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1114.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1115 =  HAnimSegment();
HAnimSegment1115.X3DNode::setName(CString("t3"));
HAnimSegment1115.setDEF(CString("hanim_t3"));
Shape& Shape1116 =  Shape();
LineSet& LineSet1117 =  LineSet();
LineSet1117.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1118 =  ColorRGBA();
ColorRGBA1118.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1117.addChild(&ColorRGBA1118);

Coordinate& Coordinate1119 =  Coordinate();
Coordinate1119.setPoint(new float[]{0.0,1.1709,-0.01376,0.0,1.1524,-0.01376}, 6);
LineSet1117.setCoord(Coordinate1119);

Shape1116.setGeometry(&LineSet1117);

HAnimSegment1115.addChild(&Shape1116);

HAnimJoint1114.addChildren(&HAnimSegment1115);

HAnimJoint& HAnimJoint1120 =  HAnimJoint();
HAnimJoint1120.X3DNode::setName(CString("vt2"));
HAnimJoint1120.setDEF(CString("hanim_vt2"));
HAnimJoint1120.setCenter(new float[]{0.0,1.1956,-0.01378});
HAnimJoint1120.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1120.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1121 =  HAnimSegment();
HAnimSegment1121.X3DNode::setName(CString("t2"));
HAnimSegment1121.setDEF(CString("hanim_t2"));
Shape& Shape1122 =  Shape();
LineSet& LineSet1123 =  LineSet();
LineSet1123.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1124 =  ColorRGBA();
ColorRGBA1124.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1123.addChild(&ColorRGBA1124);

Coordinate& Coordinate1125 =  Coordinate();
Coordinate1125.setPoint(new float[]{0.0,1.1956,-0.01378,0.0,1.1709,-0.01376}, 6);
LineSet1123.setCoord(Coordinate1125);

Shape1122.setGeometry(&LineSet1123);

HAnimSegment1121.addChild(&Shape1122);

HAnimJoint1120.addChildren(&HAnimSegment1121);

HAnimJoint& HAnimJoint1126 =  HAnimJoint();
HAnimJoint1126.X3DNode::setName(CString("vt1"));
HAnimJoint1126.setDEF(CString("hanim_vt1"));
HAnimJoint1126.setCenter(new float[]{0.0,1.22,-0.0138});
HAnimJoint1126.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1126.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1127 =  HAnimSegment();
HAnimSegment1127.X3DNode::setName(CString("t1"));
HAnimSegment1127.setDEF(CString("hanim_t1"));
HAnimSite& HAnimSite1128 =  HAnimSite();
HAnimSite1128.X3DNode::setName(CString("suprasternale"));
HAnimSite1128.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite1128.setTranslation(new float[]{0.0,1.22,0.08});
TouchSensor& TouchSensor1129 =  TouchSensor();
TouchSensor1129.setDescription(CString("HAnimSite 12 hanim_suprasternale_pt"));
HAnimSite1128.addChild(&TouchSensor1129);

Shape& Shape1130 =  Shape();
Appearance& Appearance1131 =  Appearance();
Material& Material1132 =  Material();
Material1132.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1131.addChild(&Material1132);

Shape1130.addChild(&Appearance1131);

IndexedFaceSet& IndexedFaceSet1133 =  IndexedFaceSet();
IndexedFaceSet1133.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1133.setCreaseAngle(0.5);
IndexedFaceSet1133.setSolid(false);
ColorRGBA& ColorRGBA1134 =  ColorRGBA();
ColorRGBA1134.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1133.addChild(&ColorRGBA1134);

Coordinate& Coordinate1135 =  Coordinate();
Coordinate1135.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1133.setCoord(&Coordinate1135);

Shape1130.setGeometry(&IndexedFaceSet1133);

HAnimSite1128.addChild(&Shape1130);

Billboard& Billboard1136 =  Billboard();
Billboard1136.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1137 =  Shape();
Text& Text1138 =  Text();
Text1138.setString(new CString[]{CString("12")}, 1);
CFontStyle& FontStyle1139 =  CFontStyle();
FontStyle1139.setSize(0.035);
Text1138.setFontStyle(&FontStyle1139);

Shape1137.setGeometry(&Text1138);

Billboard1136.addChild(&Shape1137);

HAnimSite1128.addChild(Billboard1136);

HAnimSegment1127.addChild(&HAnimSite1128);

HAnimSite& HAnimSite1140 =  HAnimSite();
HAnimSite1140.X3DNode::setName(CString("cervicale"));
HAnimSite1140.setDEF(CString("hanim_cervicale_pt"));
HAnimSite1140.setTranslation(new float[]{0.0,1.22,-0.08});
TouchSensor& TouchSensor1141 =  TouchSensor();
TouchSensor1141.setDescription(CString("HAnimSite 10 hanim_cervicale_pt"));
HAnimSite1140.addChild(&TouchSensor1141);

Shape& Shape1142 =  Shape();
Appearance& Appearance1143 =  Appearance();
Material& Material1144 =  Material();
Material1144.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1143.addChild(&Material1144);

Shape1142.addChild(&Appearance1143);

IndexedFaceSet& IndexedFaceSet1145 =  IndexedFaceSet();
IndexedFaceSet1145.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1145.setCreaseAngle(0.5);
IndexedFaceSet1145.setSolid(false);
ColorRGBA& ColorRGBA1146 =  ColorRGBA();
ColorRGBA1146.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1145.addChild(&ColorRGBA1146);

Coordinate& Coordinate1147 =  Coordinate();
Coordinate1147.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1145.setCoord(&Coordinate1147);

Shape1142.setGeometry(&IndexedFaceSet1145);

HAnimSite1140.addChild(&Shape1142);

Billboard& Billboard1148 =  Billboard();
Billboard1148.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1149 =  Shape();
Text& Text1150 =  Text();
Text1150.setString(new CString[]{CString("10")}, 1);
CFontStyle& FontStyle1151 =  CFontStyle();
FontStyle1151.setSize(0.035);
Text1150.setFontStyle(&FontStyle1151);

Shape1149.setGeometry(&Text1150);

Billboard1148.addChild(&Shape1149);

HAnimSite1140.addChild(Billboard1148);

HAnimSegment1127.addChild(&HAnimSite1140);

Shape& Shape1152 =  Shape();
LineSet& LineSet1153 =  LineSet();
LineSet1153.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1154 =  ColorRGBA();
ColorRGBA1154.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1153.addChild(&ColorRGBA1154);

Coordinate& Coordinate1155 =  Coordinate();
Coordinate1155.setPoint(new float[]{0.0,1.22,-0.0138,0.0,1.1956,-0.01378}, 6);
LineSet1153.setCoord(Coordinate1155);

Shape1152.setGeometry(&LineSet1153);

HAnimSegment1127.addChild(&Shape1152);

HAnimJoint1126.addChildren(&HAnimSegment1127);

HAnimJoint& HAnimJoint1156 =  HAnimJoint();
HAnimJoint1156.X3DNode::setName(CString("vc7"));
HAnimJoint1156.setDEF(CString("hanim_vc7"));
HAnimJoint1156.setCenter(new float[]{0.0,1.2453,-0.01506});
HAnimJoint1156.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1156.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1157 =  HAnimSegment();
HAnimSegment1157.X3DNode::setName(CString("c7"));
HAnimSegment1157.setDEF(CString("hanim_c7"));
HAnimSite& HAnimSite1158 =  HAnimSite();
HAnimSite1158.X3DNode::setName(CString("l_neck_base"));
HAnimSite1158.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite1158.setTranslation(new float[]{0.06,1.26,0.0});
TouchSensor& TouchSensor1159 =  TouchSensor();
TouchSensor1159.setDescription(CString("HAnimSite 82 hanim_l_neck_base_pt"));
HAnimSite1158.addChild(&TouchSensor1159);

Shape& Shape1160 =  Shape();
Appearance& Appearance1161 =  Appearance();
Material& Material1162 =  Material();
Material1162.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1161.addChild(&Material1162);

Shape1160.addChild(&Appearance1161);

IndexedFaceSet& IndexedFaceSet1163 =  IndexedFaceSet();
IndexedFaceSet1163.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1163.setCreaseAngle(0.5);
IndexedFaceSet1163.setSolid(false);
ColorRGBA& ColorRGBA1164 =  ColorRGBA();
ColorRGBA1164.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1163.addChild(&ColorRGBA1164);

Coordinate& Coordinate1165 =  Coordinate();
Coordinate1165.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1163.setCoord(&Coordinate1165);

Shape1160.setGeometry(&IndexedFaceSet1163);

HAnimSite1158.addChild(&Shape1160);

Billboard& Billboard1166 =  Billboard();
Billboard1166.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1167 =  Shape();
Text& Text1168 =  Text();
Text1168.setString(new CString[]{CString("82")}, 1);
CFontStyle& FontStyle1169 =  CFontStyle();
FontStyle1169.setSize(0.035);
Text1168.setFontStyle(&FontStyle1169);

Shape1167.setGeometry(&Text1168);

Billboard1166.addChild(&Shape1167);

HAnimSite1158.addChild(Billboard1166);

HAnimSegment1157.addChild(&HAnimSite1158);

HAnimSite& HAnimSite1170 =  HAnimSite();
HAnimSite1170.X3DNode::setName(CString("r_neck_base"));
HAnimSite1170.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite1170.setTranslation(new float[]{-0.06,1.26,0.0});
TouchSensor& TouchSensor1171 =  TouchSensor();
TouchSensor1171.setDescription(CString("HAnimSite 83 hanim_r_neck_base_pt"));
HAnimSite1170.addChild(&TouchSensor1171);

Shape& Shape1172 =  Shape();
Appearance& Appearance1173 =  Appearance();
Material& Material1174 =  Material();
Material1174.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1173.addChild(&Material1174);

Shape1172.addChild(&Appearance1173);

IndexedFaceSet& IndexedFaceSet1175 =  IndexedFaceSet();
IndexedFaceSet1175.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1175.setCreaseAngle(0.5);
IndexedFaceSet1175.setSolid(false);
ColorRGBA& ColorRGBA1176 =  ColorRGBA();
ColorRGBA1176.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1175.addChild(&ColorRGBA1176);

Coordinate& Coordinate1177 =  Coordinate();
Coordinate1177.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1175.setCoord(&Coordinate1177);

Shape1172.setGeometry(&IndexedFaceSet1175);

HAnimSite1170.addChild(&Shape1172);

Billboard& Billboard1178 =  Billboard();
Billboard1178.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1179 =  Shape();
Text& Text1180 =  Text();
Text1180.setString(new CString[]{CString("83")}, 1);
CFontStyle& FontStyle1181 =  CFontStyle();
FontStyle1181.setSize(0.035);
Text1180.setFontStyle(&FontStyle1181);

Shape1179.setGeometry(&Text1180);

Billboard1178.addChild(&Shape1179);

HAnimSite1170.addChild(Billboard1178);

HAnimSegment1157.addChild(&HAnimSite1170);

Shape& Shape1182 =  Shape();
LineSet& LineSet1183 =  LineSet();
LineSet1183.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1184 =  ColorRGBA();
ColorRGBA1184.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1183.addChild(&ColorRGBA1184);

Coordinate& Coordinate1185 =  Coordinate();
Coordinate1185.setPoint(new float[]{0.0,1.2453,-0.01506,0.0,1.22,-0.0138}, 6);
LineSet1183.setCoord(Coordinate1185);

Shape1182.setGeometry(&LineSet1183);

HAnimSegment1157.addChild(&Shape1182);

HAnimJoint1156.addChildren(&HAnimSegment1157);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.X3DNode::setName(CString("vc6"));
HAnimJoint1186.setDEF(CString("hanim_vc6"));
HAnimJoint1186.setCenter(new float[]{0.0,1.2575,-0.01506});
HAnimJoint1186.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1186.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1187 =  HAnimSegment();
HAnimSegment1187.X3DNode::setName(CString("c6"));
HAnimSegment1187.setDEF(CString("hanim_c6"));
Shape& Shape1188 =  Shape();
LineSet& LineSet1189 =  LineSet();
LineSet1189.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1190 =  ColorRGBA();
ColorRGBA1190.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1189.addChild(&ColorRGBA1190);

Coordinate& Coordinate1191 =  Coordinate();
Coordinate1191.setPoint(new float[]{0.0,1.2575,-0.01506,0.0,1.2453,-0.01506}, 6);
LineSet1189.setCoord(Coordinate1191);

Shape1188.setGeometry(&LineSet1189);

HAnimSegment1187.addChild(&Shape1188);

HAnimJoint1186.addChildren(&HAnimSegment1187);

HAnimJoint& HAnimJoint1192 =  HAnimJoint();
HAnimJoint1192.X3DNode::setName(CString("vc5"));
HAnimJoint1192.setDEF(CString("hanim_vc5"));
HAnimJoint1192.setCenter(new float[]{0.0,1.2699,-0.01506});
HAnimJoint1192.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1192.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1193 =  HAnimSegment();
HAnimSegment1193.X3DNode::setName(CString("c5"));
HAnimSegment1193.setDEF(CString("hanim_c5"));
Shape& Shape1194 =  Shape();
LineSet& LineSet1195 =  LineSet();
LineSet1195.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1196 =  ColorRGBA();
ColorRGBA1196.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1195.addChild(&ColorRGBA1196);

Coordinate& Coordinate1197 =  Coordinate();
Coordinate1197.setPoint(new float[]{0.0,1.2699,-0.01506,0.0,1.2575,-0.01506}, 6);
LineSet1195.setCoord(Coordinate1197);

Shape1194.setGeometry(&LineSet1195);

HAnimSegment1193.addChild(&Shape1194);

HAnimJoint1192.addChildren(&HAnimSegment1193);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.X3DNode::setName(CString("vc4"));
HAnimJoint1198.setDEF(CString("hanim_vc4"));
HAnimJoint1198.setCenter(new float[]{0.0,1.28227,-0.01506});
HAnimJoint1198.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1198.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1199 =  HAnimSegment();
HAnimSegment1199.X3DNode::setName(CString("c4"));
HAnimSegment1199.setDEF(CString("hanim_c4"));
Shape& Shape1200 =  Shape();
LineSet& LineSet1201 =  LineSet();
LineSet1201.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1202 =  ColorRGBA();
ColorRGBA1202.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1201.addChild(&ColorRGBA1202);

Coordinate& Coordinate1203 =  Coordinate();
Coordinate1203.setPoint(new float[]{0.0,1.28227,-0.01506,0.0,1.2699,-0.01506}, 6);
LineSet1201.setCoord(Coordinate1203);

Shape1200.setGeometry(&LineSet1201);

HAnimSegment1199.addChild(&Shape1200);

HAnimJoint1198.addChildren(&HAnimSegment1199);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.X3DNode::setName(CString("vc3"));
HAnimJoint1204.setDEF(CString("hanim_vc3"));
HAnimJoint1204.setCenter(new float[]{0.0,1.2951,-0.01506});
HAnimJoint1204.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1204.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1205 =  HAnimSegment();
HAnimSegment1205.X3DNode::setName(CString("c3"));
HAnimSegment1205.setDEF(CString("hanim_c3"));
Shape& Shape1206 =  Shape();
LineSet& LineSet1207 =  LineSet();
LineSet1207.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1208 =  ColorRGBA();
ColorRGBA1208.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1207.addChild(&ColorRGBA1208);

Coordinate& Coordinate1209 =  Coordinate();
Coordinate1209.setPoint(new float[]{0.0,1.2951,-0.01506,0.0,1.28227,-0.01506}, 6);
LineSet1207.setCoord(Coordinate1209);

Shape1206.setGeometry(&LineSet1207);

HAnimSegment1205.addChild(&Shape1206);

HAnimJoint1204.addChildren(&HAnimSegment1205);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.X3DNode::setName(CString("vc2"));
HAnimJoint1210.setDEF(CString("hanim_vc2"));
HAnimJoint1210.setCenter(new float[]{0.0,1.307,-0.015});
HAnimJoint1210.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1210.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1211 =  HAnimSegment();
HAnimSegment1211.X3DNode::setName(CString("c2"));
HAnimSegment1211.setDEF(CString("hanim_c2"));
HAnimSite& HAnimSite1212 =  HAnimSite();
HAnimSite1212.X3DNode::setName(CString("adams_apple"));
HAnimSite1212.setDEF(CString("hanim_adams_apple_pt"));
HAnimSite1212.setTranslation(new float[]{0.0,1.29,0.04});
TouchSensor& TouchSensor1213 =  TouchSensor();
TouchSensor1213.setDescription(CString("HAnimSite 11 hanim_adams_apple_pt"));
HAnimSite1212.addChild(&TouchSensor1213);

Shape& Shape1214 =  Shape();
Appearance& Appearance1215 =  Appearance();
Material& Material1216 =  Material();
Material1216.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1215.addChild(&Material1216);

Shape1214.addChild(&Appearance1215);

IndexedFaceSet& IndexedFaceSet1217 =  IndexedFaceSet();
IndexedFaceSet1217.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1217.setCreaseAngle(0.5);
IndexedFaceSet1217.setSolid(false);
ColorRGBA& ColorRGBA1218 =  ColorRGBA();
ColorRGBA1218.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1217.addChild(&ColorRGBA1218);

Coordinate& Coordinate1219 =  Coordinate();
Coordinate1219.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1217.setCoord(&Coordinate1219);

Shape1214.setGeometry(&IndexedFaceSet1217);

HAnimSite1212.addChild(&Shape1214);

Billboard& Billboard1220 =  Billboard();
Billboard1220.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1221 =  Shape();
Text& Text1222 =  Text();
Text1222.setString(new CString[]{CString("11")}, 1);
CFontStyle& FontStyle1223 =  CFontStyle();
FontStyle1223.setSize(0.035);
Text1222.setFontStyle(&FontStyle1223);

Shape1221.setGeometry(&Text1222);

Billboard1220.addChild(&Shape1221);

HAnimSite1212.addChild(Billboard1220);

HAnimSegment1211.addChild(&HAnimSite1212);

Shape& Shape1224 =  Shape();
LineSet& LineSet1225 =  LineSet();
LineSet1225.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1226 =  ColorRGBA();
ColorRGBA1226.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1225.addChild(&ColorRGBA1226);

Coordinate& Coordinate1227 =  Coordinate();
Coordinate1227.setPoint(new float[]{0.0,1.307,-0.015,0.0,1.2951,-0.01506}, 6);
LineSet1225.setCoord(Coordinate1227);

Shape1224.setGeometry(&LineSet1225);

HAnimSegment1211.addChild(&Shape1224);

HAnimJoint1210.addChildren(&HAnimSegment1211);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.X3DNode::setName(CString("vc1"));
HAnimJoint1228.setDEF(CString("hanim_vc1"));
HAnimJoint1228.setCenter(new float[]{0.0,1.3185,-0.0151});
HAnimJoint1228.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1228.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1229 =  HAnimSegment();
HAnimSegment1229.X3DNode::setName(CString("c1"));
HAnimSegment1229.setDEF(CString("hanim_c1"));
Shape& Shape1230 =  Shape();
LineSet& LineSet1231 =  LineSet();
LineSet1231.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1232 =  ColorRGBA();
ColorRGBA1232.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1231.addChild(&ColorRGBA1232);

Coordinate& Coordinate1233 =  Coordinate();
Coordinate1233.setPoint(new float[]{0.0,1.3185,-0.0151,0.0,1.307,-0.015}, 6);
LineSet1231.setCoord(Coordinate1233);

Shape1230.setGeometry(&LineSet1231);

HAnimSegment1229.addChild(&Shape1230);

HAnimJoint1228.addChildren(&HAnimSegment1229);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.X3DNode::setName(CString("skullbase"));
HAnimJoint1234.setDEF(CString("hanim_skullbase"));
HAnimJoint1234.setCenter(new float[]{0.0,1.3126,-0.0154});
HAnimJoint1234.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1234.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1235 =  HAnimSegment();
HAnimSegment1235.X3DNode::setName(CString("skull"));
HAnimSegment1235.setDEF(CString("hanim_skull"));
HAnimSite& HAnimSite1236 =  HAnimSite();
HAnimSite1236.X3DNode::setName(CString("skull_vertex"));
HAnimSite1236.setDEF(CString("hanim_skull_vertex_pt"));
HAnimSite1236.setTranslation(new float[]{0.0,1.612,-0.03});
TouchSensor& TouchSensor1237 =  TouchSensor();
TouchSensor1237.setDescription(CString("HAnimSite 0 hanim_skull_vertex_pt"));
HAnimSite1236.addChild(&TouchSensor1237);

Shape& Shape1238 =  Shape();
Appearance& Appearance1239 =  Appearance();
Material& Material1240 =  Material();
Material1240.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1239.addChild(&Material1240);

Shape1238.addChild(&Appearance1239);

IndexedFaceSet& IndexedFaceSet1241 =  IndexedFaceSet();
IndexedFaceSet1241.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1241.setCreaseAngle(0.5);
IndexedFaceSet1241.setSolid(false);
ColorRGBA& ColorRGBA1242 =  ColorRGBA();
ColorRGBA1242.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1241.addChild(&ColorRGBA1242);

Coordinate& Coordinate1243 =  Coordinate();
Coordinate1243.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1241.setCoord(&Coordinate1243);

Shape1238.setGeometry(&IndexedFaceSet1241);

HAnimSite1236.addChild(&Shape1238);

Billboard& Billboard1244 =  Billboard();
Billboard1244.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1245 =  Shape();
Text& Text1246 =  Text();
Text1246.setString(new CString[]{CString("0")}, 1);
CFontStyle& FontStyle1247 =  CFontStyle();
FontStyle1247.setSize(0.035);
Text1246.setFontStyle(&FontStyle1247);

Shape1245.setGeometry(&Text1246);

Billboard1244.addChild(&Shape1245);

HAnimSite1236.addChild(Billboard1244);

HAnimSegment1235.addChild(&HAnimSite1236);

HAnimSite& HAnimSite1248 =  HAnimSite();
HAnimSite1248.X3DNode::setName(CString("glabella"));
HAnimSite1248.setDEF(CString("hanim_glabella_pt"));
HAnimSite1248.setTranslation(new float[]{0.0,1.454,0.128});
TouchSensor& TouchSensor1249 =  TouchSensor();
TouchSensor1249.setDescription(CString("HAnimSite 1 hanim_glabella_pt"));
HAnimSite1248.addChild(&TouchSensor1249);

Shape& Shape1250 =  Shape();
Appearance& Appearance1251 =  Appearance();
Material& Material1252 =  Material();
Material1252.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1251.addChild(&Material1252);

Shape1250.addChild(&Appearance1251);

IndexedFaceSet& IndexedFaceSet1253 =  IndexedFaceSet();
IndexedFaceSet1253.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1253.setCreaseAngle(0.5);
IndexedFaceSet1253.setSolid(false);
ColorRGBA& ColorRGBA1254 =  ColorRGBA();
ColorRGBA1254.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1253.addChild(&ColorRGBA1254);

Coordinate& Coordinate1255 =  Coordinate();
Coordinate1255.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1253.setCoord(&Coordinate1255);

Shape1250.setGeometry(&IndexedFaceSet1253);

HAnimSite1248.addChild(&Shape1250);

Billboard& Billboard1256 =  Billboard();
Billboard1256.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1257 =  Shape();
Text& Text1258 =  Text();
Text1258.setString(new CString[]{CString("1")}, 1);
CFontStyle& FontStyle1259 =  CFontStyle();
FontStyle1259.setSize(0.035);
Text1258.setFontStyle(&FontStyle1259);

Shape1257.setGeometry(&Text1258);

Billboard1256.addChild(&Shape1257);

HAnimSite1248.addChild(Billboard1256);

HAnimSegment1235.addChild(&HAnimSite1248);

HAnimSite& HAnimSite1260 =  HAnimSite();
HAnimSite1260.X3DNode::setName(CString("sellion"));
HAnimSite1260.setDEF(CString("hanim_sellion_pt"));
HAnimSite1260.setTranslation(new float[]{0.0,1.4,0.12});
TouchSensor& TouchSensor1261 =  TouchSensor();
TouchSensor1261.setDescription(CString("HAnimSite 2 hanim_sellion_pt"));
HAnimSite1260.addChild(&TouchSensor1261);

Shape& Shape1262 =  Shape();
Appearance& Appearance1263 =  Appearance();
Material& Material1264 =  Material();
Material1264.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1263.addChild(&Material1264);

Shape1262.addChild(&Appearance1263);

IndexedFaceSet& IndexedFaceSet1265 =  IndexedFaceSet();
IndexedFaceSet1265.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1265.setCreaseAngle(0.5);
IndexedFaceSet1265.setSolid(false);
ColorRGBA& ColorRGBA1266 =  ColorRGBA();
ColorRGBA1266.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1265.addChild(&ColorRGBA1266);

Coordinate& Coordinate1267 =  Coordinate();
Coordinate1267.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1265.setCoord(&Coordinate1267);

Shape1262.setGeometry(&IndexedFaceSet1265);

HAnimSite1260.addChild(&Shape1262);

Billboard& Billboard1268 =  Billboard();
Billboard1268.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1269 =  Shape();
Text& Text1270 =  Text();
Text1270.setString(new CString[]{CString("2")}, 1);
CFontStyle& FontStyle1271 =  CFontStyle();
FontStyle1271.setSize(0.035);
Text1270.setFontStyle(&FontStyle1271);

Shape1269.setGeometry(&Text1270);

Billboard1268.addChild(&Shape1269);

HAnimSite1260.addChild(Billboard1268);

HAnimSegment1235.addChild(&HAnimSite1260);

HAnimSite& HAnimSite1272 =  HAnimSite();
HAnimSite1272.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite1272.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite1272.setTranslation(new float[]{0.039,1.38,0.09});
TouchSensor& TouchSensor1273 =  TouchSensor();
TouchSensor1273.setDescription(CString("HAnimSite 3 hanim_l_infraorbitale_pt"));
HAnimSite1272.addChild(&TouchSensor1273);

Shape& Shape1274 =  Shape();
Appearance& Appearance1275 =  Appearance();
Material& Material1276 =  Material();
Material1276.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1275.addChild(&Material1276);

Shape1274.addChild(&Appearance1275);

IndexedFaceSet& IndexedFaceSet1277 =  IndexedFaceSet();
IndexedFaceSet1277.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1277.setCreaseAngle(0.5);
IndexedFaceSet1277.setSolid(false);
ColorRGBA& ColorRGBA1278 =  ColorRGBA();
ColorRGBA1278.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1277.addChild(&ColorRGBA1278);

Coordinate& Coordinate1279 =  Coordinate();
Coordinate1279.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1277.setCoord(&Coordinate1279);

Shape1274.setGeometry(&IndexedFaceSet1277);

HAnimSite1272.addChild(&Shape1274);

Billboard& Billboard1280 =  Billboard();
Billboard1280.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1281 =  Shape();
Text& Text1282 =  Text();
Text1282.setString(new CString[]{CString("3")}, 1);
CFontStyle& FontStyle1283 =  CFontStyle();
FontStyle1283.setSize(0.035);
Text1282.setFontStyle(&FontStyle1283);

Shape1281.setGeometry(&Text1282);

Billboard1280.addChild(&Shape1281);

HAnimSite1272.addChild(Billboard1280);

HAnimSegment1235.addChild(&HAnimSite1272);

HAnimSite& HAnimSite1284 =  HAnimSite();
HAnimSite1284.X3DNode::setName(CString("l_tragion"));
HAnimSite1284.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite1284.setTranslation(new float[]{0.1,1.38,0.0282});
TouchSensor& TouchSensor1285 =  TouchSensor();
TouchSensor1285.setDescription(CString("HAnimSite 4 hanim_l_tragion_pt"));
HAnimSite1284.addChild(&TouchSensor1285);

Shape& Shape1286 =  Shape();
Appearance& Appearance1287 =  Appearance();
Material& Material1288 =  Material();
Material1288.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1287.addChild(&Material1288);

Shape1286.addChild(&Appearance1287);

IndexedFaceSet& IndexedFaceSet1289 =  IndexedFaceSet();
IndexedFaceSet1289.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1289.setCreaseAngle(0.5);
IndexedFaceSet1289.setSolid(false);
ColorRGBA& ColorRGBA1290 =  ColorRGBA();
ColorRGBA1290.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1289.addChild(&ColorRGBA1290);

Coordinate& Coordinate1291 =  Coordinate();
Coordinate1291.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1289.setCoord(&Coordinate1291);

Shape1286.setGeometry(&IndexedFaceSet1289);

HAnimSite1284.addChild(&Shape1286);

Billboard& Billboard1292 =  Billboard();
Billboard1292.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1293 =  Shape();
Text& Text1294 =  Text();
Text1294.setString(new CString[]{CString("4")}, 1);
CFontStyle& FontStyle1295 =  CFontStyle();
FontStyle1295.setSize(0.035);
Text1294.setFontStyle(&FontStyle1295);

Shape1293.setGeometry(&Text1294);

Billboard1292.addChild(&Shape1293);

HAnimSite1284.addChild(Billboard1292);

HAnimSegment1235.addChild(&HAnimSite1284);

HAnimSite& HAnimSite1296 =  HAnimSite();
HAnimSite1296.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite1296.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite1296.setTranslation(new float[]{-0.039,1.38,0.09});
TouchSensor& TouchSensor1297 =  TouchSensor();
TouchSensor1297.setDescription(CString("HAnimSite 6 hanim_r_infraorbitale_pt"));
HAnimSite1296.addChild(&TouchSensor1297);

Shape& Shape1298 =  Shape();
Appearance& Appearance1299 =  Appearance();
Material& Material1300 =  Material();
Material1300.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1299.addChild(&Material1300);

Shape1298.addChild(&Appearance1299);

IndexedFaceSet& IndexedFaceSet1301 =  IndexedFaceSet();
IndexedFaceSet1301.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1301.setCreaseAngle(0.5);
IndexedFaceSet1301.setSolid(false);
ColorRGBA& ColorRGBA1302 =  ColorRGBA();
ColorRGBA1302.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1301.addChild(&ColorRGBA1302);

Coordinate& Coordinate1303 =  Coordinate();
Coordinate1303.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1301.setCoord(&Coordinate1303);

Shape1298.setGeometry(&IndexedFaceSet1301);

HAnimSite1296.addChild(&Shape1298);

Billboard& Billboard1304 =  Billboard();
Billboard1304.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1305 =  Shape();
Text& Text1306 =  Text();
Text1306.setString(new CString[]{CString("6")}, 1);
CFontStyle& FontStyle1307 =  CFontStyle();
FontStyle1307.setSize(0.035);
Text1306.setFontStyle(&FontStyle1307);

Shape1305.setGeometry(&Text1306);

Billboard1304.addChild(&Shape1305);

HAnimSite1296.addChild(Billboard1304);

HAnimSegment1235.addChild(&HAnimSite1296);

HAnimSite& HAnimSite1308 =  HAnimSite();
HAnimSite1308.X3DNode::setName(CString("r_tragion"));
HAnimSite1308.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite1308.setTranslation(new float[]{-0.1,1.38,0.0282});
TouchSensor& TouchSensor1309 =  TouchSensor();
TouchSensor1309.setDescription(CString("HAnimSite 7 hanim_r_tragion_pt"));
HAnimSite1308.addChild(&TouchSensor1309);

Shape& Shape1310 =  Shape();
Appearance& Appearance1311 =  Appearance();
Material& Material1312 =  Material();
Material1312.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1311.addChild(&Material1312);

Shape1310.addChild(&Appearance1311);

IndexedFaceSet& IndexedFaceSet1313 =  IndexedFaceSet();
IndexedFaceSet1313.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1313.setCreaseAngle(0.5);
IndexedFaceSet1313.setSolid(false);
ColorRGBA& ColorRGBA1314 =  ColorRGBA();
ColorRGBA1314.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1313.addChild(&ColorRGBA1314);

Coordinate& Coordinate1315 =  Coordinate();
Coordinate1315.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1313.setCoord(&Coordinate1315);

Shape1310.setGeometry(&IndexedFaceSet1313);

HAnimSite1308.addChild(&Shape1310);

Billboard& Billboard1316 =  Billboard();
Billboard1316.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1317 =  Shape();
Text& Text1318 =  Text();
Text1318.setString(new CString[]{CString("7")}, 1);
CFontStyle& FontStyle1319 =  CFontStyle();
FontStyle1319.setSize(0.035);
Text1318.setFontStyle(&FontStyle1319);

Shape1317.setGeometry(&Text1318);

Billboard1316.addChild(&Shape1317);

HAnimSite1308.addChild(Billboard1316);

HAnimSegment1235.addChild(&HAnimSite1308);

HAnimSite& HAnimSite1320 =  HAnimSite();
HAnimSite1320.X3DNode::setName(CString("nuchale"));
HAnimSite1320.setDEF(CString("hanim_nuchale_pt"));
HAnimSite1320.setTranslation(new float[]{0.0039,1.35,-0.16});
TouchSensor& TouchSensor1321 =  TouchSensor();
TouchSensor1321.setDescription(CString("HAnimSite 81 hanim_nuchale_pt"));
HAnimSite1320.addChild(&TouchSensor1321);

Shape& Shape1322 =  Shape();
Appearance& Appearance1323 =  Appearance();
Material& Material1324 =  Material();
Material1324.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1323.addChild(&Material1324);

Shape1322.addChild(&Appearance1323);

IndexedFaceSet& IndexedFaceSet1325 =  IndexedFaceSet();
IndexedFaceSet1325.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1325.setCreaseAngle(0.5);
IndexedFaceSet1325.setSolid(false);
ColorRGBA& ColorRGBA1326 =  ColorRGBA();
ColorRGBA1326.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1325.addChild(&ColorRGBA1326);

Coordinate& Coordinate1327 =  Coordinate();
Coordinate1327.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1325.setCoord(&Coordinate1327);

Shape1322.setGeometry(&IndexedFaceSet1325);

HAnimSite1320.addChild(&Shape1322);

Billboard& Billboard1328 =  Billboard();
Billboard1328.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1329 =  Shape();
Text& Text1330 =  Text();
Text1330.setString(new CString[]{CString("81")}, 1);
CFontStyle& FontStyle1331 =  CFontStyle();
FontStyle1331.setSize(0.035);
Text1330.setFontStyle(&FontStyle1331);

Shape1329.setGeometry(&Text1330);

Billboard1328.addChild(&Shape1329);

HAnimSite1320.addChild(Billboard1328);

HAnimSegment1235.addChild(&HAnimSite1320);

HAnimSite& HAnimSite1332 =  HAnimSite();
HAnimSite1332.X3DNode::setName(CString("opisthocranion"));
HAnimSite1332.setDEF(CString("hanim_opisthocranion_pt"));
HAnimSite1332.setTranslation(new float[]{0.0039,1.4588,-0.18});
TouchSensor& TouchSensor1333 =  TouchSensor();
TouchSensor1333.setDescription(CString("HAnimSite 89 hanim_opisthocranion_pt"));
HAnimSite1332.addChild(&TouchSensor1333);

Shape& Shape1334 =  Shape();
Appearance& Appearance1335 =  Appearance();
Material& Material1336 =  Material();
Material1336.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1335.addChild(&Material1336);

Shape1334.addChild(&Appearance1335);

IndexedFaceSet& IndexedFaceSet1337 =  IndexedFaceSet();
IndexedFaceSet1337.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1337.setCreaseAngle(0.5);
IndexedFaceSet1337.setSolid(false);
ColorRGBA& ColorRGBA1338 =  ColorRGBA();
ColorRGBA1338.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1337.addChild(&ColorRGBA1338);

Coordinate& Coordinate1339 =  Coordinate();
Coordinate1339.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1337.setCoord(&Coordinate1339);

Shape1334.setGeometry(&IndexedFaceSet1337);

HAnimSite1332.addChild(&Shape1334);

Billboard& Billboard1340 =  Billboard();
Billboard1340.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1341 =  Shape();
Text& Text1342 =  Text();
Text1342.setString(new CString[]{CString("89")}, 1);
CFontStyle& FontStyle1343 =  CFontStyle();
FontStyle1343.setSize(0.035);
Text1342.setFontStyle(&FontStyle1343);

Shape1341.setGeometry(&Text1342);

Billboard1340.addChild(&Shape1341);

HAnimSite1332.addChild(Billboard1340);

HAnimSegment1235.addChild(&HAnimSite1332);

HAnimSite& HAnimSite1344 =  HAnimSite();
HAnimSite1344.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite1344.setDEF(CString("hanim_l_ectocanthus_pt"));
HAnimSite1344.setTranslation(new float[]{0.086,1.399,0.074});
TouchSensor& TouchSensor1345 =  TouchSensor();
TouchSensor1345.setDescription(CString("HAnimSite 85 hanim_l_ectocanthus_pt"));
HAnimSite1344.addChild(&TouchSensor1345);

Shape& Shape1346 =  Shape();
Appearance& Appearance1347 =  Appearance();
Material& Material1348 =  Material();
Material1348.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1347.addChild(&Material1348);

Shape1346.addChild(&Appearance1347);

IndexedFaceSet& IndexedFaceSet1349 =  IndexedFaceSet();
IndexedFaceSet1349.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1349.setCreaseAngle(0.5);
IndexedFaceSet1349.setSolid(false);
ColorRGBA& ColorRGBA1350 =  ColorRGBA();
ColorRGBA1350.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1349.addChild(&ColorRGBA1350);

Coordinate& Coordinate1351 =  Coordinate();
Coordinate1351.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1349.setCoord(&Coordinate1351);

Shape1346.setGeometry(&IndexedFaceSet1349);

HAnimSite1344.addChild(&Shape1346);

Billboard& Billboard1352 =  Billboard();
Billboard1352.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1353 =  Shape();
Text& Text1354 =  Text();
Text1354.setString(new CString[]{CString("85")}, 1);
CFontStyle& FontStyle1355 =  CFontStyle();
FontStyle1355.setSize(0.035);
Text1354.setFontStyle(&FontStyle1355);

Shape1353.setGeometry(&Text1354);

Billboard1352.addChild(&Shape1353);

HAnimSite1344.addChild(Billboard1352);

HAnimSegment1235.addChild(&HAnimSite1344);

HAnimSite& HAnimSite1356 =  HAnimSite();
HAnimSite1356.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite1356.setDEF(CString("hanim_r_ectocanthus_pt"));
HAnimSite1356.setTranslation(new float[]{-0.086,1.399,0.074});
TouchSensor& TouchSensor1357 =  TouchSensor();
TouchSensor1357.setDescription(CString("HAnimSite 86 hanim_r_ectocanthus_pt"));
HAnimSite1356.addChild(&TouchSensor1357);

Shape& Shape1358 =  Shape();
Appearance& Appearance1359 =  Appearance();
Material& Material1360 =  Material();
Material1360.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1359.addChild(&Material1360);

Shape1358.addChild(&Appearance1359);

IndexedFaceSet& IndexedFaceSet1361 =  IndexedFaceSet();
IndexedFaceSet1361.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1361.setCreaseAngle(0.5);
IndexedFaceSet1361.setSolid(false);
ColorRGBA& ColorRGBA1362 =  ColorRGBA();
ColorRGBA1362.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1361.addChild(&ColorRGBA1362);

Coordinate& Coordinate1363 =  Coordinate();
Coordinate1363.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1361.setCoord(&Coordinate1363);

Shape1358.setGeometry(&IndexedFaceSet1361);

HAnimSite1356.addChild(&Shape1358);

Billboard& Billboard1364 =  Billboard();
Billboard1364.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1365 =  Shape();
Text& Text1366 =  Text();
Text1366.setString(new CString[]{CString("86")}, 1);
CFontStyle& FontStyle1367 =  CFontStyle();
FontStyle1367.setSize(0.035);
Text1366.setFontStyle(&FontStyle1367);

Shape1365.setGeometry(&Text1366);

Billboard1364.addChild(&Shape1365);

HAnimSite1356.addChild(Billboard1364);

HAnimSegment1235.addChild(&HAnimSite1356);

Shape& Shape1368 =  Shape();
LineSet& LineSet1369 =  LineSet();
LineSet1369.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1370 =  ColorRGBA();
ColorRGBA1370.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1369.addChild(&ColorRGBA1370);

Coordinate& Coordinate1371 =  Coordinate();
Coordinate1371.setPoint(new float[]{0.0,1.3126,-0.0154,0.0,1.3185,-0.0151}, 6);
LineSet1369.setCoord(Coordinate1371);

Shape1368.setGeometry(&LineSet1369);

HAnimSegment1235.addChild(&Shape1368);

HAnimJoint1234.addChildren(&HAnimSegment1235);

HAnimJoint& HAnimJoint1372 =  HAnimJoint();
HAnimJoint1372.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint1372.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1372.setCenter(new float[]{0.0505,1.42425,0.03294});
HAnimJoint1372.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1372.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1373 =  HAnimSegment();
HAnimSegment1373.X3DNode::setName(CString("l_eyelid"));
HAnimSegment1373.setDEF(CString("hanim_l_eyelid"));
HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.X3DNode::setName(CString("l_eyelid_tip"));
HAnimSite1374.setDEF(CString("hanim_l_eyelid_tip"));
HAnimSite1374.setTranslation(new float[]{0.0,2.64,0.0});
TouchSensor& TouchSensor1375 =  TouchSensor();
TouchSensor1375.setDescription(CString("HAnimSite l_eyelid_tip hanim_l_eyelid_tip"));
HAnimSite1374.addChild(&TouchSensor1375);

Shape& Shape1376 =  Shape();
Appearance& Appearance1377 =  Appearance();
Material& Material1378 =  Material();
Material1378.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1377.addChild(&Material1378);

Shape1376.addChild(&Appearance1377);

IndexedFaceSet& IndexedFaceSet1379 =  IndexedFaceSet();
IndexedFaceSet1379.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1379.setCreaseAngle(0.5);
IndexedFaceSet1379.setSolid(false);
ColorRGBA& ColorRGBA1380 =  ColorRGBA();
ColorRGBA1380.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1379.addChild(&ColorRGBA1380);

Coordinate& Coordinate1381 =  Coordinate();
Coordinate1381.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1379.setCoord(&Coordinate1381);

Shape1376.setGeometry(&IndexedFaceSet1379);

HAnimSite1374.addChild(&Shape1376);

Billboard& Billboard1382 =  Billboard();
Billboard1382.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1383 =  Shape();
Text& Text1384 =  Text();
Text1384.setString(new CString[]{CString("l_eyelid_tip")}, 1);
CFontStyle& FontStyle1385 =  CFontStyle();
FontStyle1385.setSize(0.035);
Text1384.setFontStyle(&FontStyle1385);

Shape1383.setGeometry(&Text1384);

Billboard1382.addChild(&Shape1383);

HAnimSite1374.addChild(Billboard1382);

HAnimSegment1373.addChild(&HAnimSite1374);

Shape& Shape1386 =  Shape();
LineSet& LineSet1387 =  LineSet();
LineSet1387.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1388 =  ColorRGBA();
ColorRGBA1388.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1387.addChild(&ColorRGBA1388);

Coordinate& Coordinate1389 =  Coordinate();
Coordinate1389.setPoint(new float[]{0.0505,1.42425,0.03294,0.0,1.3126,-0.0154}, 6);
LineSet1387.setCoord(Coordinate1389);

Shape1386.setGeometry(&LineSet1387);

HAnimSegment1373.addChild(&Shape1386);

HAnimJoint1372.addChildren(&HAnimSegment1373);

HAnimJoint1234.addChildren(&HAnimJoint1372);

HAnimJoint& HAnimJoint1390 =  HAnimJoint();
HAnimJoint1390.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint1390.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1390.setCenter(new float[]{-0.0505,1.42425,0.03294});
HAnimJoint1390.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1390.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1391 =  HAnimSegment();
HAnimSegment1391.X3DNode::setName(CString("r_eyelid"));
HAnimSegment1391.setDEF(CString("hanim_r_eyelid"));
HAnimSite& HAnimSite1392 =  HAnimSite();
HAnimSite1392.X3DNode::setName(CString("r_eyelid_tip"));
HAnimSite1392.setDEF(CString("hanim_r_eyelid_tip"));
HAnimSite1392.setTranslation(new float[]{0.0,2.68,0.0});
TouchSensor& TouchSensor1393 =  TouchSensor();
TouchSensor1393.setDescription(CString("HAnimSite r_eyelid_tip hanim_r_eyelid_tip"));
HAnimSite1392.addChild(&TouchSensor1393);

Shape& Shape1394 =  Shape();
Appearance& Appearance1395 =  Appearance();
Material& Material1396 =  Material();
Material1396.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1395.addChild(&Material1396);

Shape1394.addChild(&Appearance1395);

IndexedFaceSet& IndexedFaceSet1397 =  IndexedFaceSet();
IndexedFaceSet1397.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1397.setCreaseAngle(0.5);
IndexedFaceSet1397.setSolid(false);
ColorRGBA& ColorRGBA1398 =  ColorRGBA();
ColorRGBA1398.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1397.addChild(&ColorRGBA1398);

Coordinate& Coordinate1399 =  Coordinate();
Coordinate1399.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1397.setCoord(&Coordinate1399);

Shape1394.setGeometry(&IndexedFaceSet1397);

HAnimSite1392.addChild(&Shape1394);

Billboard& Billboard1400 =  Billboard();
Billboard1400.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1401 =  Shape();
Text& Text1402 =  Text();
Text1402.setString(new CString[]{CString("r_eyelid_tip")}, 1);
CFontStyle& FontStyle1403 =  CFontStyle();
FontStyle1403.setSize(0.035);
Text1402.setFontStyle(&FontStyle1403);

Shape1401.setGeometry(&Text1402);

Billboard1400.addChild(&Shape1401);

HAnimSite1392.addChild(Billboard1400);

HAnimSegment1391.addChild(&HAnimSite1392);

Shape& Shape1404 =  Shape();
LineSet& LineSet1405 =  LineSet();
LineSet1405.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1406 =  ColorRGBA();
ColorRGBA1406.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1405.addChild(&ColorRGBA1406);

Coordinate& Coordinate1407 =  Coordinate();
Coordinate1407.setPoint(new float[]{-0.0505,1.42425,0.03294,0.0,1.3126,-0.0154}, 6);
LineSet1405.setCoord(Coordinate1407);

Shape1404.setGeometry(&LineSet1405);

HAnimSegment1391.addChild(&Shape1404);

HAnimJoint1390.addChildren(&HAnimSegment1391);

HAnimJoint1234.addChildren(&HAnimJoint1390);

HAnimJoint& HAnimJoint1408 =  HAnimJoint();
HAnimJoint1408.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint1408.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1408.setCenter(new float[]{0.048127,1.4049,0.08305});
HAnimJoint1408.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1408.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1409 =  HAnimSegment();
HAnimSegment1409.X3DNode::setName(CString("l_eyeball"));
HAnimSegment1409.setDEF(CString("hanim_l_eyeball"));
HAnimSite& HAnimSite1410 =  HAnimSite();
HAnimSite1410.X3DNode::setName(CString("l_eyeball_tip"));
HAnimSite1410.setDEF(CString("hanim_l_eyeball_tip"));
HAnimSite1410.setTranslation(new float[]{0.0,2.72,0.0});
TouchSensor& TouchSensor1411 =  TouchSensor();
TouchSensor1411.setDescription(CString("HAnimSite l_eyeball_tip hanim_l_eyeball_tip"));
HAnimSite1410.addChild(&TouchSensor1411);

Shape& Shape1412 =  Shape();
Appearance& Appearance1413 =  Appearance();
Material& Material1414 =  Material();
Material1414.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1413.addChild(&Material1414);

Shape1412.addChild(&Appearance1413);

IndexedFaceSet& IndexedFaceSet1415 =  IndexedFaceSet();
IndexedFaceSet1415.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1415.setCreaseAngle(0.5);
IndexedFaceSet1415.setSolid(false);
ColorRGBA& ColorRGBA1416 =  ColorRGBA();
ColorRGBA1416.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1415.addChild(&ColorRGBA1416);

Coordinate& Coordinate1417 =  Coordinate();
Coordinate1417.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1415.setCoord(&Coordinate1417);

Shape1412.setGeometry(&IndexedFaceSet1415);

HAnimSite1410.addChild(&Shape1412);

Billboard& Billboard1418 =  Billboard();
Billboard1418.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1419 =  Shape();
Text& Text1420 =  Text();
Text1420.setString(new CString[]{CString("l_eyeball_tip")}, 1);
CFontStyle& FontStyle1421 =  CFontStyle();
FontStyle1421.setSize(0.035);
Text1420.setFontStyle(&FontStyle1421);

Shape1419.setGeometry(&Text1420);

Billboard1418.addChild(&Shape1419);

HAnimSite1410.addChild(Billboard1418);

HAnimSegment1409.addChild(&HAnimSite1410);

Shape& Shape1422 =  Shape();
LineSet& LineSet1423 =  LineSet();
LineSet1423.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1424 =  ColorRGBA();
ColorRGBA1424.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1423.addChild(&ColorRGBA1424);

Coordinate& Coordinate1425 =  Coordinate();
Coordinate1425.setPoint(new float[]{0.048127,1.4049,0.08305,0.0,1.3126,-0.0154}, 6);
LineSet1423.setCoord(Coordinate1425);

Shape1422.setGeometry(&LineSet1423);

HAnimSegment1409.addChild(&Shape1422);

HAnimJoint1408.addChildren(&HAnimSegment1409);

HAnimJoint1234.addChildren(&HAnimJoint1408);

HAnimJoint& HAnimJoint1426 =  HAnimJoint();
HAnimJoint1426.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint1426.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1426.setCenter(new float[]{-0.04813,1.4049,0.08305});
HAnimJoint1426.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1426.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1427 =  HAnimSegment();
HAnimSegment1427.X3DNode::setName(CString("r_eyeball"));
HAnimSegment1427.setDEF(CString("hanim_r_eyeball"));
HAnimSite& HAnimSite1428 =  HAnimSite();
HAnimSite1428.X3DNode::setName(CString("r_eyeball_tip"));
HAnimSite1428.setDEF(CString("hanim_r_eyeball_tip"));
HAnimSite1428.setTranslation(new float[]{0.0,2.76,0.0});
TouchSensor& TouchSensor1429 =  TouchSensor();
TouchSensor1429.setDescription(CString("HAnimSite r_eyeball_tip hanim_r_eyeball_tip"));
HAnimSite1428.addChild(&TouchSensor1429);

Shape& Shape1430 =  Shape();
Appearance& Appearance1431 =  Appearance();
Material& Material1432 =  Material();
Material1432.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1431.addChild(&Material1432);

Shape1430.addChild(&Appearance1431);

IndexedFaceSet& IndexedFaceSet1433 =  IndexedFaceSet();
IndexedFaceSet1433.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1433.setCreaseAngle(0.5);
IndexedFaceSet1433.setSolid(false);
ColorRGBA& ColorRGBA1434 =  ColorRGBA();
ColorRGBA1434.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1433.addChild(&ColorRGBA1434);

Coordinate& Coordinate1435 =  Coordinate();
Coordinate1435.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1433.setCoord(&Coordinate1435);

Shape1430.setGeometry(&IndexedFaceSet1433);

HAnimSite1428.addChild(&Shape1430);

Billboard& Billboard1436 =  Billboard();
Billboard1436.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1437 =  Shape();
Text& Text1438 =  Text();
Text1438.setString(new CString[]{CString("r_eyeball_tip")}, 1);
CFontStyle& FontStyle1439 =  CFontStyle();
FontStyle1439.setSize(0.035);
Text1438.setFontStyle(&FontStyle1439);

Shape1437.setGeometry(&Text1438);

Billboard1436.addChild(&Shape1437);

HAnimSite1428.addChild(Billboard1436);

HAnimSegment1427.addChild(&HAnimSite1428);

Shape& Shape1440 =  Shape();
LineSet& LineSet1441 =  LineSet();
LineSet1441.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1442 =  ColorRGBA();
ColorRGBA1442.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1441.addChild(&ColorRGBA1442);

Coordinate& Coordinate1443 =  Coordinate();
Coordinate1443.setPoint(new float[]{-0.04813,1.4049,0.08305,0.0,1.3126,-0.0154}, 6);
LineSet1441.setCoord(Coordinate1443);

Shape1440.setGeometry(&LineSet1441);

HAnimSegment1427.addChild(&Shape1440);

HAnimJoint1426.addChildren(&HAnimSegment1427);

HAnimJoint1234.addChildren(&HAnimJoint1426);

HAnimJoint& HAnimJoint1444 =  HAnimJoint();
HAnimJoint1444.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint1444.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1444.setCenter(new float[]{0.02175,1.4139,0.1069});
HAnimJoint1444.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1444.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1445 =  HAnimSegment();
HAnimSegment1445.X3DNode::setName(CString("l_eyebrow"));
HAnimSegment1445.setDEF(CString("hanim_l_eyebrow"));
HAnimSite& HAnimSite1446 =  HAnimSite();
HAnimSite1446.X3DNode::setName(CString("l_eyebrow_tip"));
HAnimSite1446.setDEF(CString("hanim_l_eyebrow_tip"));
HAnimSite1446.setTranslation(new float[]{0.0,2.8,0.0});
TouchSensor& TouchSensor1447 =  TouchSensor();
TouchSensor1447.setDescription(CString("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip"));
HAnimSite1446.addChild(&TouchSensor1447);

Shape& Shape1448 =  Shape();
Appearance& Appearance1449 =  Appearance();
Material& Material1450 =  Material();
Material1450.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1449.addChild(&Material1450);

Shape1448.addChild(&Appearance1449);

IndexedFaceSet& IndexedFaceSet1451 =  IndexedFaceSet();
IndexedFaceSet1451.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1451.setCreaseAngle(0.5);
IndexedFaceSet1451.setSolid(false);
ColorRGBA& ColorRGBA1452 =  ColorRGBA();
ColorRGBA1452.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1451.addChild(&ColorRGBA1452);

Coordinate& Coordinate1453 =  Coordinate();
Coordinate1453.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1451.setCoord(&Coordinate1453);

Shape1448.setGeometry(&IndexedFaceSet1451);

HAnimSite1446.addChild(&Shape1448);

Billboard& Billboard1454 =  Billboard();
Billboard1454.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1455 =  Shape();
Text& Text1456 =  Text();
Text1456.setString(new CString[]{CString("l_eyebrow_tip")}, 1);
CFontStyle& FontStyle1457 =  CFontStyle();
FontStyle1457.setSize(0.035);
Text1456.setFontStyle(&FontStyle1457);

Shape1455.setGeometry(&Text1456);

Billboard1454.addChild(&Shape1455);

HAnimSite1446.addChild(Billboard1454);

HAnimSegment1445.addChild(&HAnimSite1446);

Shape& Shape1458 =  Shape();
LineSet& LineSet1459 =  LineSet();
LineSet1459.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1460 =  ColorRGBA();
ColorRGBA1460.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1459.addChild(&ColorRGBA1460);

Coordinate& Coordinate1461 =  Coordinate();
Coordinate1461.setPoint(new float[]{0.02175,1.4139,0.1069,0.0,1.3126,-0.0154}, 6);
LineSet1459.setCoord(Coordinate1461);

Shape1458.setGeometry(&LineSet1459);

HAnimSegment1445.addChild(&Shape1458);

HAnimJoint1444.addChildren(&HAnimSegment1445);

HAnimJoint1234.addChildren(&HAnimJoint1444);

HAnimJoint& HAnimJoint1462 =  HAnimJoint();
HAnimJoint1462.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint1462.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1462.setCenter(new float[]{-0.02175,1.4139,0.10694});
HAnimJoint1462.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1462.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1463 =  HAnimSegment();
HAnimSegment1463.X3DNode::setName(CString("r_eyebrow"));
HAnimSegment1463.setDEF(CString("hanim_r_eyebrow"));
HAnimSite& HAnimSite1464 =  HAnimSite();
HAnimSite1464.X3DNode::setName(CString("r_eyebrow_tip"));
HAnimSite1464.setDEF(CString("hanim_r_eyebrow_tip"));
HAnimSite1464.setTranslation(new float[]{0.0,2.84,0.0});
TouchSensor& TouchSensor1465 =  TouchSensor();
TouchSensor1465.setDescription(CString("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip"));
HAnimSite1464.addChild(&TouchSensor1465);

Shape& Shape1466 =  Shape();
Appearance& Appearance1467 =  Appearance();
Material& Material1468 =  Material();
Material1468.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1467.addChild(&Material1468);

Shape1466.addChild(&Appearance1467);

IndexedFaceSet& IndexedFaceSet1469 =  IndexedFaceSet();
IndexedFaceSet1469.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1469.setCreaseAngle(0.5);
IndexedFaceSet1469.setSolid(false);
ColorRGBA& ColorRGBA1470 =  ColorRGBA();
ColorRGBA1470.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1469.addChild(&ColorRGBA1470);

Coordinate& Coordinate1471 =  Coordinate();
Coordinate1471.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1469.setCoord(&Coordinate1471);

Shape1466.setGeometry(&IndexedFaceSet1469);

HAnimSite1464.addChild(&Shape1466);

Billboard& Billboard1472 =  Billboard();
Billboard1472.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1473 =  Shape();
Text& Text1474 =  Text();
Text1474.setString(new CString[]{CString("r_eyebrow_tip")}, 1);
CFontStyle& FontStyle1475 =  CFontStyle();
FontStyle1475.setSize(0.035);
Text1474.setFontStyle(&FontStyle1475);

Shape1473.setGeometry(&Text1474);

Billboard1472.addChild(&Shape1473);

HAnimSite1464.addChild(Billboard1472);

HAnimSegment1463.addChild(&HAnimSite1464);

Shape& Shape1476 =  Shape();
LineSet& LineSet1477 =  LineSet();
LineSet1477.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1478 =  ColorRGBA();
ColorRGBA1478.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1477.addChild(&ColorRGBA1478);

Coordinate& Coordinate1479 =  Coordinate();
Coordinate1479.setPoint(new float[]{-0.02175,1.4139,0.10694,0.0,1.3126,-0.0154}, 6);
LineSet1477.setCoord(Coordinate1479);

Shape1476.setGeometry(&LineSet1477);

HAnimSegment1463.addChild(&Shape1476);

HAnimJoint1462.addChildren(&HAnimSegment1463);

HAnimJoint1234.addChildren(&HAnimJoint1462);

HAnimJoint& HAnimJoint1480 =  HAnimJoint();
HAnimJoint1480.X3DNode::setName(CString("temporomandibular"));
HAnimJoint1480.setDEF(CString("hanim_temporomandibular"));
HAnimJoint1480.setCenter(new float[]{0.0,1.3128,0.01538});
HAnimJoint1480.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1480.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1481 =  HAnimSegment();
HAnimSegment1481.X3DNode::setName(CString("jaw"));
HAnimSegment1481.setDEF(CString("hanim_jaw"));
HAnimSite& HAnimSite1482 =  HAnimSite();
HAnimSite1482.X3DNode::setName(CString("l_gonion"));
HAnimSite1482.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite1482.setTranslation(new float[]{0.068,1.346,0.033});
TouchSensor& TouchSensor1483 =  TouchSensor();
TouchSensor1483.setDescription(CString("HAnimSite 5 hanim_l_gonion_pt"));
HAnimSite1482.addChild(&TouchSensor1483);

Shape& Shape1484 =  Shape();
Appearance& Appearance1485 =  Appearance();
Material& Material1486 =  Material();
Material1486.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1485.addChild(&Material1486);

Shape1484.addChild(&Appearance1485);

IndexedFaceSet& IndexedFaceSet1487 =  IndexedFaceSet();
IndexedFaceSet1487.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1487.setCreaseAngle(0.5);
IndexedFaceSet1487.setSolid(false);
ColorRGBA& ColorRGBA1488 =  ColorRGBA();
ColorRGBA1488.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1487.addChild(&ColorRGBA1488);

Coordinate& Coordinate1489 =  Coordinate();
Coordinate1489.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1487.setCoord(&Coordinate1489);

Shape1484.setGeometry(&IndexedFaceSet1487);

HAnimSite1482.addChild(&Shape1484);

Billboard& Billboard1490 =  Billboard();
Billboard1490.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1491 =  Shape();
Text& Text1492 =  Text();
Text1492.setString(new CString[]{CString("5")}, 1);
CFontStyle& FontStyle1493 =  CFontStyle();
FontStyle1493.setSize(0.035);
Text1492.setFontStyle(&FontStyle1493);

Shape1491.setGeometry(&Text1492);

Billboard1490.addChild(&Shape1491);

HAnimSite1482.addChild(Billboard1490);

HAnimSegment1481.addChild(&HAnimSite1482);

HAnimSite& HAnimSite1494 =  HAnimSite();
HAnimSite1494.X3DNode::setName(CString("r_gonion"));
HAnimSite1494.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite1494.setTranslation(new float[]{-0.068,1.346,0.033});
TouchSensor& TouchSensor1495 =  TouchSensor();
TouchSensor1495.setDescription(CString("HAnimSite 8 hanim_r_gonion_pt"));
HAnimSite1494.addChild(&TouchSensor1495);

Shape& Shape1496 =  Shape();
Appearance& Appearance1497 =  Appearance();
Material& Material1498 =  Material();
Material1498.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1497.addChild(&Material1498);

Shape1496.addChild(&Appearance1497);

IndexedFaceSet& IndexedFaceSet1499 =  IndexedFaceSet();
IndexedFaceSet1499.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1499.setCreaseAngle(0.5);
IndexedFaceSet1499.setSolid(false);
ColorRGBA& ColorRGBA1500 =  ColorRGBA();
ColorRGBA1500.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1499.addChild(&ColorRGBA1500);

Coordinate& Coordinate1501 =  Coordinate();
Coordinate1501.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1499.setCoord(&Coordinate1501);

Shape1496.setGeometry(&IndexedFaceSet1499);

HAnimSite1494.addChild(&Shape1496);

Billboard& Billboard1502 =  Billboard();
Billboard1502.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1503 =  Shape();
Text& Text1504 =  Text();
Text1504.setString(new CString[]{CString("8")}, 1);
CFontStyle& FontStyle1505 =  CFontStyle();
FontStyle1505.setSize(0.035);
Text1504.setFontStyle(&FontStyle1505);

Shape1503.setGeometry(&Text1504);

Billboard1502.addChild(&Shape1503);

HAnimSite1494.addChild(Billboard1502);

HAnimSegment1481.addChild(&HAnimSite1494);

HAnimSite& HAnimSite1506 =  HAnimSite();
HAnimSite1506.X3DNode::setName(CString("supramenton"));
HAnimSite1506.setDEF(CString("hanim_supramenton_pt"));
HAnimSite1506.setTranslation(new float[]{0.0,1.32,0.086});
TouchSensor& TouchSensor1507 =  TouchSensor();
TouchSensor1507.setDescription(CString("HAnimSite 9 hanim_supramenton_pt"));
HAnimSite1506.addChild(&TouchSensor1507);

Shape& Shape1508 =  Shape();
Appearance& Appearance1509 =  Appearance();
Material& Material1510 =  Material();
Material1510.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1509.addChild(&Material1510);

Shape1508.addChild(&Appearance1509);

IndexedFaceSet& IndexedFaceSet1511 =  IndexedFaceSet();
IndexedFaceSet1511.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1511.setCreaseAngle(0.5);
IndexedFaceSet1511.setSolid(false);
ColorRGBA& ColorRGBA1512 =  ColorRGBA();
ColorRGBA1512.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1511.addChild(&ColorRGBA1512);

Coordinate& Coordinate1513 =  Coordinate();
Coordinate1513.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1511.setCoord(&Coordinate1513);

Shape1508.setGeometry(&IndexedFaceSet1511);

HAnimSite1506.addChild(&Shape1508);

Billboard& Billboard1514 =  Billboard();
Billboard1514.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1515 =  Shape();
Text& Text1516 =  Text();
Text1516.setString(new CString[]{CString("9")}, 1);
CFontStyle& FontStyle1517 =  CFontStyle();
FontStyle1517.setSize(0.035);
Text1516.setFontStyle(&FontStyle1517);

Shape1515.setGeometry(&Text1516);

Billboard1514.addChild(&Shape1515);

HAnimSite1506.addChild(Billboard1514);

HAnimSegment1481.addChild(&HAnimSite1506);

HAnimSite& HAnimSite1518 =  HAnimSite();
HAnimSite1518.X3DNode::setName(CString("menton"));
HAnimSite1518.setDEF(CString("hanim_menton_pt"));
HAnimSite1518.setTranslation(new float[]{0.0,1.3,0.08});
TouchSensor& TouchSensor1519 =  TouchSensor();
TouchSensor1519.setDescription(CString("HAnimSite 87 hanim_menton_pt"));
HAnimSite1518.addChild(&TouchSensor1519);

Shape& Shape1520 =  Shape();
Appearance& Appearance1521 =  Appearance();
Material& Material1522 =  Material();
Material1522.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1521.addChild(&Material1522);

Shape1520.addChild(&Appearance1521);

IndexedFaceSet& IndexedFaceSet1523 =  IndexedFaceSet();
IndexedFaceSet1523.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1523.setCreaseAngle(0.5);
IndexedFaceSet1523.setSolid(false);
ColorRGBA& ColorRGBA1524 =  ColorRGBA();
ColorRGBA1524.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1523.addChild(&ColorRGBA1524);

Coordinate& Coordinate1525 =  Coordinate();
Coordinate1525.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1523.setCoord(&Coordinate1525);

Shape1520.setGeometry(&IndexedFaceSet1523);

HAnimSite1518.addChild(&Shape1520);

Billboard& Billboard1526 =  Billboard();
Billboard1526.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1527 =  Shape();
Text& Text1528 =  Text();
Text1528.setString(new CString[]{CString("87")}, 1);
CFontStyle& FontStyle1529 =  CFontStyle();
FontStyle1529.setSize(0.035);
Text1528.setFontStyle(&FontStyle1529);

Shape1527.setGeometry(&Text1528);

Billboard1526.addChild(&Shape1527);

HAnimSite1518.addChild(Billboard1526);

HAnimSegment1481.addChild(&HAnimSite1518);

Shape& Shape1530 =  Shape();
LineSet& LineSet1531 =  LineSet();
LineSet1531.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1532 =  ColorRGBA();
ColorRGBA1532.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1531.addChild(&ColorRGBA1532);

Coordinate& Coordinate1533 =  Coordinate();
Coordinate1533.setPoint(new float[]{0.0,1.3128,0.01538,0.0,1.3126,-0.0154}, 6);
LineSet1531.setCoord(Coordinate1533);

Shape1530.setGeometry(&LineSet1531);

HAnimSegment1481.addChild(&Shape1530);

HAnimJoint1480.addChildren(&HAnimSegment1481);

HAnimJoint1234.addChildren(&HAnimJoint1480);

HAnimJoint1228.addChildren(&HAnimJoint1234);

HAnimJoint1210.addChildren(&HAnimJoint1228);

HAnimJoint1204.addChildren(&HAnimJoint1210);

HAnimJoint1198.addChildren(&HAnimJoint1204);

HAnimJoint1192.addChildren(&HAnimJoint1198);

HAnimJoint1186.addChildren(&HAnimJoint1192);

HAnimJoint1156.addChildren(&HAnimJoint1186);

HAnimJoint1126.addChildren(&HAnimJoint1156);

HAnimJoint& HAnimJoint1534 =  HAnimJoint();
HAnimJoint1534.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint1534.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1534.setCenter(new float[]{0.03847,1.2087,-0.01378});
HAnimJoint1534.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1534.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1535 =  HAnimSegment();
HAnimSegment1535.X3DNode::setName(CString("l_clavicle"));
HAnimSegment1535.setDEF(CString("hanim_l_clavicle"));
HAnimSite& HAnimSite1536 =  HAnimSite();
HAnimSite1536.X3DNode::setName(CString("l_clavicale"));
HAnimSite1536.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite1536.setTranslation(new float[]{0.03,1.2,0.04});
TouchSensor& TouchSensor1537 =  TouchSensor();
TouchSensor1537.setDescription(CString("HAnimSite l_clavicale hanim_l_clavicale_pt"));
HAnimSite1536.addChild(&TouchSensor1537);

Shape& Shape1538 =  Shape();
Appearance& Appearance1539 =  Appearance();
Material& Material1540 =  Material();
Material1540.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1539.addChild(&Material1540);

Shape1538.addChild(&Appearance1539);

IndexedFaceSet& IndexedFaceSet1541 =  IndexedFaceSet();
IndexedFaceSet1541.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1541.setCreaseAngle(0.5);
IndexedFaceSet1541.setSolid(false);
ColorRGBA& ColorRGBA1542 =  ColorRGBA();
ColorRGBA1542.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1541.addChild(&ColorRGBA1542);

Coordinate& Coordinate1543 =  Coordinate();
Coordinate1543.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1541.setCoord(&Coordinate1543);

Shape1538.setGeometry(&IndexedFaceSet1541);

HAnimSite1536.addChild(&Shape1538);

Billboard& Billboard1544 =  Billboard();
Billboard1544.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1545 =  Shape();
Text& Text1546 =  Text();
Text1546.setString(new CString[]{CString("l_clavicale")}, 1);
CFontStyle& FontStyle1547 =  CFontStyle();
FontStyle1547.setSize(0.035);
Text1546.setFontStyle(&FontStyle1547);

Shape1545.setGeometry(&Text1546);

Billboard1544.addChild(&Shape1545);

HAnimSite1536.addChild(Billboard1544);

HAnimSegment1535.addChild(&HAnimSite1536);

Shape& Shape1548 =  Shape();
LineSet& LineSet1549 =  LineSet();
LineSet1549.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1550 =  ColorRGBA();
ColorRGBA1550.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1549.addChild(&ColorRGBA1550);

Coordinate& Coordinate1551 =  Coordinate();
Coordinate1551.setPoint(new float[]{0.03847,1.2087,-0.01378,0.0,1.22,-0.0138}, 6);
LineSet1549.setCoord(Coordinate1551);

Shape1548.setGeometry(&LineSet1549);

HAnimSegment1535.addChild(&Shape1548);

HAnimJoint1534.addChildren(&HAnimSegment1535);

HAnimJoint& HAnimJoint1552 =  HAnimJoint();
HAnimJoint1552.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint1552.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1552.setCenter(new float[]{0.12294,1.191825,-0.0129});
HAnimJoint1552.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1552.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1553 =  HAnimSegment();
HAnimSegment1553.X3DNode::setName(CString("l_scapula"));
HAnimSegment1553.setDEF(CString("hanim_l_scapula"));
HAnimSite& HAnimSite1554 =  HAnimSite();
HAnimSite1554.X3DNode::setName(CString("l_acromion"));
HAnimSite1554.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite1554.setTranslation(new float[]{0.15,1.222,-0.02});
TouchSensor& TouchSensor1555 =  TouchSensor();
TouchSensor1555.setDescription(CString("HAnimSite 15 hanim_l_acromion_pt"));
HAnimSite1554.addChild(&TouchSensor1555);

Shape& Shape1556 =  Shape();
Appearance& Appearance1557 =  Appearance();
Material& Material1558 =  Material();
Material1558.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1557.addChild(&Material1558);

Shape1556.addChild(&Appearance1557);

IndexedFaceSet& IndexedFaceSet1559 =  IndexedFaceSet();
IndexedFaceSet1559.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1559.setCreaseAngle(0.5);
IndexedFaceSet1559.setSolid(false);
ColorRGBA& ColorRGBA1560 =  ColorRGBA();
ColorRGBA1560.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1559.addChild(&ColorRGBA1560);

Coordinate& Coordinate1561 =  Coordinate();
Coordinate1561.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1559.setCoord(&Coordinate1561);

Shape1556.setGeometry(&IndexedFaceSet1559);

HAnimSite1554.addChild(&Shape1556);

Billboard& Billboard1562 =  Billboard();
Billboard1562.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1563 =  Shape();
Text& Text1564 =  Text();
Text1564.setString(new CString[]{CString("15")}, 1);
CFontStyle& FontStyle1565 =  CFontStyle();
FontStyle1565.setSize(0.035);
Text1564.setFontStyle(&FontStyle1565);

Shape1563.setGeometry(&Text1564);

Billboard1562.addChild(&Shape1563);

HAnimSite1554.addChild(Billboard1562);

HAnimSegment1553.addChild(&HAnimSite1554);

HAnimSite& HAnimSite1566 =  HAnimSite();
HAnimSite1566.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite1566.setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite1566.setTranslation(new float[]{0.15,1.16,0.04});
TouchSensor& TouchSensor1567 =  TouchSensor();
TouchSensor1567.setDescription(CString("HAnimSite 16 hanim_l_axilla_proximal_pt"));
HAnimSite1566.addChild(&TouchSensor1567);

Shape& Shape1568 =  Shape();
Appearance& Appearance1569 =  Appearance();
Material& Material1570 =  Material();
Material1570.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1569.addChild(&Material1570);

Shape1568.addChild(&Appearance1569);

IndexedFaceSet& IndexedFaceSet1571 =  IndexedFaceSet();
IndexedFaceSet1571.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1571.setCreaseAngle(0.5);
IndexedFaceSet1571.setSolid(false);
ColorRGBA& ColorRGBA1572 =  ColorRGBA();
ColorRGBA1572.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1571.addChild(&ColorRGBA1572);

Coordinate& Coordinate1573 =  Coordinate();
Coordinate1573.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1571.setCoord(&Coordinate1573);

Shape1568.setGeometry(&IndexedFaceSet1571);

HAnimSite1566.addChild(&Shape1568);

Billboard& Billboard1574 =  Billboard();
Billboard1574.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1575 =  Shape();
Text& Text1576 =  Text();
Text1576.setString(new CString[]{CString("16")}, 1);
CFontStyle& FontStyle1577 =  CFontStyle();
FontStyle1577.setSize(0.035);
Text1576.setFontStyle(&FontStyle1577);

Shape1575.setGeometry(&Text1576);

Billboard1574.addChild(&Shape1575);

HAnimSite1566.addChild(Billboard1574);

HAnimSegment1553.addChild(&HAnimSite1566);

HAnimSite& HAnimSite1578 =  HAnimSite();
HAnimSite1578.X3DNode::setName(CString("l_axilla_distal"));
HAnimSite1578.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite1578.setTranslation(new float[]{0.17,1.14,0.0});
TouchSensor& TouchSensor1579 =  TouchSensor();
TouchSensor1579.setDescription(CString("HAnimSite 17 hanim_l_axilla_distal_pt"));
HAnimSite1578.addChild(&TouchSensor1579);

Shape& Shape1580 =  Shape();
Appearance& Appearance1581 =  Appearance();
Material& Material1582 =  Material();
Material1582.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1581.addChild(&Material1582);

Shape1580.addChild(&Appearance1581);

IndexedFaceSet& IndexedFaceSet1583 =  IndexedFaceSet();
IndexedFaceSet1583.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1583.setCreaseAngle(0.5);
IndexedFaceSet1583.setSolid(false);
ColorRGBA& ColorRGBA1584 =  ColorRGBA();
ColorRGBA1584.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1583.addChild(&ColorRGBA1584);

Coordinate& Coordinate1585 =  Coordinate();
Coordinate1585.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1583.setCoord(&Coordinate1585);

Shape1580.setGeometry(&IndexedFaceSet1583);

HAnimSite1578.addChild(&Shape1580);

Billboard& Billboard1586 =  Billboard();
Billboard1586.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1587 =  Shape();
Text& Text1588 =  Text();
Text1588.setString(new CString[]{CString("17")}, 1);
CFontStyle& FontStyle1589 =  CFontStyle();
FontStyle1589.setSize(0.035);
Text1588.setFontStyle(&FontStyle1589);

Shape1587.setGeometry(&Text1588);

Billboard1586.addChild(&Shape1587);

HAnimSite1578.addChild(Billboard1586);

HAnimSegment1553.addChild(&HAnimSite1578);

HAnimSite& HAnimSite1590 =  HAnimSite();
HAnimSite1590.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite1590.setDEF(CString("hanim_l_axilla_posterior_folds_pt"));
HAnimSite1590.setTranslation(new float[]{0.15,1.145,-0.04});
TouchSensor& TouchSensor1591 =  TouchSensor();
TouchSensor1591.setDescription(CString("HAnimSite 18 hanim_l_axilla_posterior_folds_pt"));
HAnimSite1590.addChild(&TouchSensor1591);

Shape& Shape1592 =  Shape();
Appearance& Appearance1593 =  Appearance();
Material& Material1594 =  Material();
Material1594.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1593.addChild(&Material1594);

Shape1592.addChild(&Appearance1593);

IndexedFaceSet& IndexedFaceSet1595 =  IndexedFaceSet();
IndexedFaceSet1595.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1595.setCreaseAngle(0.5);
IndexedFaceSet1595.setSolid(false);
ColorRGBA& ColorRGBA1596 =  ColorRGBA();
ColorRGBA1596.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1595.addChild(&ColorRGBA1596);

Coordinate& Coordinate1597 =  Coordinate();
Coordinate1597.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1595.setCoord(&Coordinate1597);

Shape1592.setGeometry(&IndexedFaceSet1595);

HAnimSite1590.addChild(&Shape1592);

Billboard& Billboard1598 =  Billboard();
Billboard1598.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1599 =  Shape();
Text& Text1600 =  Text();
Text1600.setString(new CString[]{CString("18")}, 1);
CFontStyle& FontStyle1601 =  CFontStyle();
FontStyle1601.setSize(0.035);
Text1600.setFontStyle(&FontStyle1601);

Shape1599.setGeometry(&Text1600);

Billboard1598.addChild(&Shape1599);

HAnimSite1590.addChild(Billboard1598);

HAnimSegment1553.addChild(&HAnimSite1590);

Shape& Shape1602 =  Shape();
LineSet& LineSet1603 =  LineSet();
LineSet1603.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1604 =  ColorRGBA();
ColorRGBA1604.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1603.addChild(&ColorRGBA1604);

Coordinate& Coordinate1605 =  Coordinate();
Coordinate1605.setPoint(new float[]{0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378}, 6);
LineSet1603.setCoord(Coordinate1605);

Shape1602.setGeometry(&LineSet1603);

HAnimSegment1553.addChild(&Shape1602);

HAnimJoint1552.addChildren(&HAnimSegment1553);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.X3DNode::setName(CString("l_shoulder"));
HAnimJoint1606.setDEF(CString("hanim_l_shoulder"));
HAnimJoint1606.setCenter(new float[]{0.16506,1.17855,-0.00327});
HAnimJoint1606.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1606.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1607 =  HAnimSegment();
HAnimSegment1607.X3DNode::setName(CString("l_upperarm"));
HAnimSegment1607.setDEF(CString("hanim_l_upperarm"));
HAnimSite& HAnimSite1608 =  HAnimSite();
HAnimSite1608.X3DNode::setName(CString("l_humeral_lateral_epicondyle"));
HAnimSite1608.setDEF(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimSite1608.setTranslation(new float[]{0.2,0.95,-0.03});
TouchSensor& TouchSensor1609 =  TouchSensor();
TouchSensor1609.setDescription(CString("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt"));
HAnimSite1608.addChild(&TouchSensor1609);

Shape& Shape1610 =  Shape();
Appearance& Appearance1611 =  Appearance();
Material& Material1612 =  Material();
Material1612.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1611.addChild(&Material1612);

Shape1610.addChild(&Appearance1611);

IndexedFaceSet& IndexedFaceSet1613 =  IndexedFaceSet();
IndexedFaceSet1613.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1613.setCreaseAngle(0.5);
IndexedFaceSet1613.setSolid(false);
ColorRGBA& ColorRGBA1614 =  ColorRGBA();
ColorRGBA1614.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1613.addChild(&ColorRGBA1614);

Coordinate& Coordinate1615 =  Coordinate();
Coordinate1615.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1613.setCoord(&Coordinate1615);

Shape1610.setGeometry(&IndexedFaceSet1613);

HAnimSite1608.addChild(&Shape1610);

Billboard& Billboard1616 =  Billboard();
Billboard1616.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1617 =  Shape();
Text& Text1618 =  Text();
Text1618.setString(new CString[]{CString("63")}, 1);
CFontStyle& FontStyle1619 =  CFontStyle();
FontStyle1619.setSize(0.035);
Text1618.setFontStyle(&FontStyle1619);

Shape1617.setGeometry(&Text1618);

Billboard1616.addChild(&Shape1617);

HAnimSite1608.addChild(Billboard1616);

HAnimSegment1607.addChild(&HAnimSite1608);

HAnimSite& HAnimSite1620 =  HAnimSite();
HAnimSite1620.X3DNode::setName(CString("l_humeral_medial_epicondyle"));
HAnimSite1620.setDEF(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimSite1620.setTranslation(new float[]{0.18,0.93,-0.03});
TouchSensor& TouchSensor1621 =  TouchSensor();
TouchSensor1621.setDescription(CString("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt"));
HAnimSite1620.addChild(&TouchSensor1621);

Shape& Shape1622 =  Shape();
Appearance& Appearance1623 =  Appearance();
Material& Material1624 =  Material();
Material1624.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1623.addChild(&Material1624);

Shape1622.addChild(&Appearance1623);

IndexedFaceSet& IndexedFaceSet1625 =  IndexedFaceSet();
IndexedFaceSet1625.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1625.setCreaseAngle(0.5);
IndexedFaceSet1625.setSolid(false);
ColorRGBA& ColorRGBA1626 =  ColorRGBA();
ColorRGBA1626.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1625.addChild(&ColorRGBA1626);

Coordinate& Coordinate1627 =  Coordinate();
Coordinate1627.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1625.setCoord(&Coordinate1627);

Shape1622.setGeometry(&IndexedFaceSet1625);

HAnimSite1620.addChild(&Shape1622);

Billboard& Billboard1628 =  Billboard();
Billboard1628.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1629 =  Shape();
Text& Text1630 =  Text();
Text1630.setString(new CString[]{CString("64")}, 1);
CFontStyle& FontStyle1631 =  CFontStyle();
FontStyle1631.setSize(0.035);
Text1630.setFontStyle(&FontStyle1631);

Shape1629.setGeometry(&Text1630);

Billboard1628.addChild(&Shape1629);

HAnimSite1620.addChild(Billboard1628);

HAnimSegment1607.addChild(&HAnimSite1620);

HAnimSite& HAnimSite1632 =  HAnimSite();
HAnimSite1632.X3DNode::setName(CString("l_radiale"));
HAnimSite1632.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite1632.setTranslation(new float[]{0.2,0.91,-0.03});
TouchSensor& TouchSensor1633 =  TouchSensor();
TouchSensor1633.setDescription(CString("HAnimSite 69 hanim_l_radiale_pt"));
HAnimSite1632.addChild(&TouchSensor1633);

Shape& Shape1634 =  Shape();
Appearance& Appearance1635 =  Appearance();
Material& Material1636 =  Material();
Material1636.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1635.addChild(&Material1636);

Shape1634.addChild(&Appearance1635);

IndexedFaceSet& IndexedFaceSet1637 =  IndexedFaceSet();
IndexedFaceSet1637.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1637.setCreaseAngle(0.5);
IndexedFaceSet1637.setSolid(false);
ColorRGBA& ColorRGBA1638 =  ColorRGBA();
ColorRGBA1638.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1637.addChild(&ColorRGBA1638);

Coordinate& Coordinate1639 =  Coordinate();
Coordinate1639.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1637.setCoord(&Coordinate1639);

Shape1634.setGeometry(&IndexedFaceSet1637);

HAnimSite1632.addChild(&Shape1634);

Billboard& Billboard1640 =  Billboard();
Billboard1640.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1641 =  Shape();
Text& Text1642 =  Text();
Text1642.setString(new CString[]{CString("69")}, 1);
CFontStyle& FontStyle1643 =  CFontStyle();
FontStyle1643.setSize(0.035);
Text1642.setFontStyle(&FontStyle1643);

Shape1641.setGeometry(&Text1642);

Billboard1640.addChild(&Shape1641);

HAnimSite1632.addChild(Billboard1640);

HAnimSegment1607.addChild(&HAnimSite1632);

HAnimSite& HAnimSite1644 =  HAnimSite();
HAnimSite1644.X3DNode::setName(CString("l_bideltoid"));
HAnimSite1644.setDEF(CString("hanim_l_bideltoid_pt"));
HAnimSite1644.setTranslation(new float[]{0.225,1.185,0.0});
TouchSensor& TouchSensor1645 =  TouchSensor();
TouchSensor1645.setDescription(CString("HAnimSite 96 hanim_l_bideltoid_pt"));
HAnimSite1644.addChild(&TouchSensor1645);

Shape& Shape1646 =  Shape();
Appearance& Appearance1647 =  Appearance();
Material& Material1648 =  Material();
Material1648.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1647.addChild(&Material1648);

Shape1646.addChild(&Appearance1647);

IndexedFaceSet& IndexedFaceSet1649 =  IndexedFaceSet();
IndexedFaceSet1649.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1649.setCreaseAngle(0.5);
IndexedFaceSet1649.setSolid(false);
ColorRGBA& ColorRGBA1650 =  ColorRGBA();
ColorRGBA1650.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1649.addChild(&ColorRGBA1650);

Coordinate& Coordinate1651 =  Coordinate();
Coordinate1651.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1649.setCoord(&Coordinate1651);

Shape1646.setGeometry(&IndexedFaceSet1649);

HAnimSite1644.addChild(&Shape1646);

Billboard& Billboard1652 =  Billboard();
Billboard1652.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1653 =  Shape();
Text& Text1654 =  Text();
Text1654.setString(new CString[]{CString("96")}, 1);
CFontStyle& FontStyle1655 =  CFontStyle();
FontStyle1655.setSize(0.035);
Text1654.setFontStyle(&FontStyle1655);

Shape1653.setGeometry(&Text1654);

Billboard1652.addChild(&Shape1653);

HAnimSite1644.addChild(Billboard1652);

HAnimSegment1607.addChild(&HAnimSite1644);

Shape& Shape1656 =  Shape();
LineSet& LineSet1657 =  LineSet();
LineSet1657.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1658 =  ColorRGBA();
ColorRGBA1658.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1657.addChild(&ColorRGBA1658);

Coordinate& Coordinate1659 =  Coordinate();
Coordinate1659.setPoint(new float[]{0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129}, 6);
LineSet1657.setCoord(Coordinate1659);

Shape1656.setGeometry(&LineSet1657);

HAnimSegment1607.addChild(&Shape1656);

HAnimJoint1606.addChildren(&HAnimSegment1607);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.X3DNode::setName(CString("l_elbow"));
HAnimJoint1660.setDEF(CString("hanim_l_elbow"));
HAnimJoint1660.setCenter(new float[]{0.18209,0.9288,-0.00563});
HAnimJoint1660.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1660.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1661 =  HAnimSegment();
HAnimSegment1661.X3DNode::setName(CString("l_forearm"));
HAnimSegment1661.setDEF(CString("hanim_l_forearm"));
HAnimSite& HAnimSite1662 =  HAnimSite();
HAnimSite1662.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite1662.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite1662.setTranslation(new float[]{0.18,0.725,0.025});
TouchSensor& TouchSensor1663 =  TouchSensor();
TouchSensor1663.setDescription(CString("HAnimSite 71 hanim_l_radial_styloid_pt"));
HAnimSite1662.addChild(&TouchSensor1663);

Shape& Shape1664 =  Shape();
Appearance& Appearance1665 =  Appearance();
Material& Material1666 =  Material();
Material1666.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1665.addChild(&Material1666);

Shape1664.addChild(&Appearance1665);

IndexedFaceSet& IndexedFaceSet1667 =  IndexedFaceSet();
IndexedFaceSet1667.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1667.setCreaseAngle(0.5);
IndexedFaceSet1667.setSolid(false);
ColorRGBA& ColorRGBA1668 =  ColorRGBA();
ColorRGBA1668.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1667.addChild(&ColorRGBA1668);

Coordinate& Coordinate1669 =  Coordinate();
Coordinate1669.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1667.setCoord(&Coordinate1669);

Shape1664.setGeometry(&IndexedFaceSet1667);

HAnimSite1662.addChild(&Shape1664);

Billboard& Billboard1670 =  Billboard();
Billboard1670.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1671 =  Shape();
Text& Text1672 =  Text();
Text1672.setString(new CString[]{CString("71")}, 1);
CFontStyle& FontStyle1673 =  CFontStyle();
FontStyle1673.setSize(0.035);
Text1672.setFontStyle(&FontStyle1673);

Shape1671.setGeometry(&Text1672);

Billboard1670.addChild(&Shape1671);

HAnimSite1662.addChild(Billboard1670);

HAnimSegment1661.addChild(&HAnimSite1662);

HAnimSite& HAnimSite1674 =  HAnimSite();
HAnimSite1674.X3DNode::setName(CString("l_olecranon"));
HAnimSite1674.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite1674.setTranslation(new float[]{0.2,0.92,-0.03});
TouchSensor& TouchSensor1675 =  TouchSensor();
TouchSensor1675.setDescription(CString("HAnimSite 65 hanim_l_olecranon_pt"));
HAnimSite1674.addChild(&TouchSensor1675);

Shape& Shape1676 =  Shape();
Appearance& Appearance1677 =  Appearance();
Material& Material1678 =  Material();
Material1678.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1677.addChild(&Material1678);

Shape1676.addChild(&Appearance1677);

IndexedFaceSet& IndexedFaceSet1679 =  IndexedFaceSet();
IndexedFaceSet1679.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1679.setCreaseAngle(0.5);
IndexedFaceSet1679.setSolid(false);
ColorRGBA& ColorRGBA1680 =  ColorRGBA();
ColorRGBA1680.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1679.addChild(&ColorRGBA1680);

Coordinate& Coordinate1681 =  Coordinate();
Coordinate1681.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1679.setCoord(&Coordinate1681);

Shape1676.setGeometry(&IndexedFaceSet1679);

HAnimSite1674.addChild(&Shape1676);

Billboard& Billboard1682 =  Billboard();
Billboard1682.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1683 =  Shape();
Text& Text1684 =  Text();
Text1684.setString(new CString[]{CString("65")}, 1);
CFontStyle& FontStyle1685 =  CFontStyle();
FontStyle1685.setSize(0.035);
Text1684.setFontStyle(&FontStyle1685);

Shape1683.setGeometry(&Text1684);

Billboard1682.addChild(&Shape1683);

HAnimSite1674.addChild(Billboard1682);

HAnimSegment1661.addChild(&HAnimSite1674);

Shape& Shape1686 =  Shape();
LineSet& LineSet1687 =  LineSet();
LineSet1687.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1688 =  ColorRGBA();
ColorRGBA1688.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1687.addChild(&ColorRGBA1688);

Coordinate& Coordinate1689 =  Coordinate();
Coordinate1689.setPoint(new float[]{0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327}, 6);
LineSet1687.setCoord(Coordinate1689);

Shape1686.setGeometry(&LineSet1687);

HAnimSegment1661.addChild(&Shape1686);

HAnimJoint1660.addChildren(&HAnimSegment1661);

HAnimJoint& HAnimJoint1690 =  HAnimJoint();
HAnimJoint1690.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1690.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1690.setCenter(new float[]{0.1819,0.72427,-0.005});
HAnimJoint1690.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1690.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1691 =  HAnimSegment();
HAnimSegment1691.X3DNode::setName(CString("l_carpal"));
HAnimSegment1691.setDEF(CString("hanim_l_carpal"));
HAnimSite& HAnimSite1692 =  HAnimSite();
HAnimSite1692.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite1692.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1692.setTranslation(new float[]{0.2,0.725,0.0});
TouchSensor& TouchSensor1693 =  TouchSensor();
TouchSensor1693.setDescription(CString("HAnimSite 70 hanim_l_ulnar_styloid_pt"));
HAnimSite1692.addChild(&TouchSensor1693);

Shape& Shape1694 =  Shape();
Appearance& Appearance1695 =  Appearance();
Material& Material1696 =  Material();
Material1696.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1695.addChild(&Material1696);

Shape1694.addChild(&Appearance1695);

IndexedFaceSet& IndexedFaceSet1697 =  IndexedFaceSet();
IndexedFaceSet1697.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1697.setCreaseAngle(0.5);
IndexedFaceSet1697.setSolid(false);
ColorRGBA& ColorRGBA1698 =  ColorRGBA();
ColorRGBA1698.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1697.addChild(&ColorRGBA1698);

Coordinate& Coordinate1699 =  Coordinate();
Coordinate1699.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1697.setCoord(&Coordinate1699);

Shape1694.setGeometry(&IndexedFaceSet1697);

HAnimSite1692.addChild(&Shape1694);

Billboard& Billboard1700 =  Billboard();
Billboard1700.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1701 =  Shape();
Text& Text1702 =  Text();
Text1702.setString(new CString[]{CString("70")}, 1);
CFontStyle& FontStyle1703 =  CFontStyle();
FontStyle1703.setSize(0.035);
Text1702.setFontStyle(&FontStyle1703);

Shape1701.setGeometry(&Text1702);

Billboard1700.addChild(&Shape1701);

HAnimSite1692.addChild(Billboard1700);

HAnimSegment1691.addChild(&HAnimSite1692);

Shape& Shape1704 =  Shape();
LineSet& LineSet1705 =  LineSet();
LineSet1705.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1706 =  ColorRGBA();
ColorRGBA1706.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1705.addChild(&ColorRGBA1706);

Coordinate& Coordinate1707 =  Coordinate();
Coordinate1707.setPoint(new float[]{0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563}, 6);
LineSet1705.setCoord(Coordinate1707);

Shape1704.setGeometry(&LineSet1705);

HAnimSegment1691.addChild(&Shape1704);

HAnimJoint1690.addChildren(&HAnimSegment1691);

HAnimJoint& HAnimJoint1708 =  HAnimJoint();
HAnimJoint1708.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint1708.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1708.setCenter(new float[]{0.1813,0.706,0.0193});
HAnimJoint1708.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1708.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1709 =  HAnimSegment();
HAnimSegment1709.X3DNode::setName(CString("l_trapezium"));
HAnimSegment1709.setDEF(CString("hanim_l_trapezium"));
Shape& Shape1710 =  Shape();
LineSet& LineSet1711 =  LineSet();
LineSet1711.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1712 =  ColorRGBA();
ColorRGBA1712.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1711.addChild(&ColorRGBA1712);

Coordinate& Coordinate1713 =  Coordinate();
Coordinate1713.setPoint(new float[]{0.1813,0.706,0.0193,0.1819,0.72427,-0.005}, 6);
LineSet1711.setCoord(Coordinate1713);

Shape1710.setGeometry(&LineSet1711);

HAnimSegment1709.addChild(&Shape1710);

HAnimJoint1708.addChildren(&HAnimSegment1709);

HAnimJoint& HAnimJoint1714 =  HAnimJoint();
HAnimJoint1714.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1714.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1714.setCenter(new float[]{0.1805,0.69255,0.026});
HAnimJoint1714.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1714.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1715 =  HAnimSegment();
HAnimSegment1715.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1715.setDEF(CString("hanim_l_metacarpal_1"));
HAnimSite& HAnimSite1716 =  HAnimSite();
HAnimSite1716.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite1716.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1716.setTranslation(new float[]{0.2,0.665,0.012});
TouchSensor& TouchSensor1717 =  TouchSensor();
TouchSensor1717.setDescription(CString("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1716.addChild(&TouchSensor1717);

Shape& Shape1718 =  Shape();
Appearance& Appearance1719 =  Appearance();
Material& Material1720 =  Material();
Material1720.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1719.addChild(&Material1720);

Shape1718.addChild(&Appearance1719);

IndexedFaceSet& IndexedFaceSet1721 =  IndexedFaceSet();
IndexedFaceSet1721.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1721.setCreaseAngle(0.5);
IndexedFaceSet1721.setSolid(false);
ColorRGBA& ColorRGBA1722 =  ColorRGBA();
ColorRGBA1722.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1721.addChild(&ColorRGBA1722);

Coordinate& Coordinate1723 =  Coordinate();
Coordinate1723.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1721.setCoord(&Coordinate1723);

Shape1718.setGeometry(&IndexedFaceSet1721);

HAnimSite1716.addChild(&Shape1718);

Billboard& Billboard1724 =  Billboard();
Billboard1724.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1725 =  Shape();
Text& Text1726 =  Text();
Text1726.setString(new CString[]{CString("75")}, 1);
CFontStyle& FontStyle1727 =  CFontStyle();
FontStyle1727.setSize(0.035);
Text1726.setFontStyle(&FontStyle1727);

Shape1725.setGeometry(&Text1726);

Billboard1724.addChild(&Shape1725);

HAnimSite1716.addChild(Billboard1724);

HAnimSegment1715.addChild(&HAnimSite1716);

Shape& Shape1728 =  Shape();
LineSet& LineSet1729 =  LineSet();
LineSet1729.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1730 =  ColorRGBA();
ColorRGBA1730.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1729.addChild(&ColorRGBA1730);

Coordinate& Coordinate1731 =  Coordinate();
Coordinate1731.setPoint(new float[]{0.1805,0.69255,0.026,0.1813,0.706,0.0193}, 6);
LineSet1729.setCoord(Coordinate1731);

Shape1728.setGeometry(&LineSet1729);

HAnimSegment1715.addChild(&Shape1728);

HAnimJoint1714.addChildren(&HAnimSegment1715);

HAnimJoint& HAnimJoint1732 =  HAnimJoint();
HAnimJoint1732.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1732.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1732.setCenter(new float[]{0.181,0.6727,0.03577});
HAnimJoint1732.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1732.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1733 =  HAnimSegment();
HAnimSegment1733.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1733.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Shape& Shape1734 =  Shape();
LineSet& LineSet1735 =  LineSet();
LineSet1735.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1736 =  ColorRGBA();
ColorRGBA1736.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1735.addChild(&ColorRGBA1736);

Coordinate& Coordinate1737 =  Coordinate();
Coordinate1737.setPoint(new float[]{0.181,0.6727,0.03577,0.1805,0.69255,0.026}, 6);
LineSet1735.setCoord(Coordinate1737);

Shape1734.setGeometry(&LineSet1735);

HAnimSegment1733.addChild(&Shape1734);

HAnimJoint1732.addChildren(&HAnimSegment1733);

HAnimJoint& HAnimJoint1738 =  HAnimJoint();
HAnimJoint1738.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1738.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1738.setCenter(new float[]{0.1826,0.654,0.04966});
HAnimJoint1738.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1738.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1739 =  HAnimSegment();
HAnimSegment1739.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSegment1739.setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimSite& HAnimSite1740 =  HAnimSite();
HAnimSite1740.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSite1740.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimSite1740.setTranslation(new float[]{0.18,0.64,0.06});
TouchSensor& TouchSensor1741 =  TouchSensor();
TouchSensor1741.setDescription(CString("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip"));
HAnimSite1740.addChild(&TouchSensor1741);

Shape& Shape1742 =  Shape();
Appearance& Appearance1743 =  Appearance();
Material& Material1744 =  Material();
Material1744.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1743.addChild(&Material1744);

Shape1742.addChild(&Appearance1743);

IndexedFaceSet& IndexedFaceSet1745 =  IndexedFaceSet();
IndexedFaceSet1745.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1745.setCreaseAngle(0.5);
IndexedFaceSet1745.setSolid(false);
ColorRGBA& ColorRGBA1746 =  ColorRGBA();
ColorRGBA1746.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1745.addChild(&ColorRGBA1746);

Coordinate& Coordinate1747 =  Coordinate();
Coordinate1747.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1745.setCoord(&Coordinate1747);

Shape1742.setGeometry(&IndexedFaceSet1745);

HAnimSite1740.addChild(&Shape1742);

Billboard& Billboard1748 =  Billboard();
Billboard1748.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1749 =  Shape();
Text& Text1750 =  Text();
Text1750.setString(new CString[]{CString("101")}, 1);
CFontStyle& FontStyle1751 =  CFontStyle();
FontStyle1751.setSize(0.035);
Text1750.setFontStyle(&FontStyle1751);

Shape1749.setGeometry(&Text1750);

Billboard1748.addChild(&Shape1749);

HAnimSite1740.addChild(Billboard1748);

HAnimSegment1739.addChild(&HAnimSite1740);

Shape& Shape1752 =  Shape();
LineSet& LineSet1753 =  LineSet();
LineSet1753.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1754 =  ColorRGBA();
ColorRGBA1754.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1753.addChild(&ColorRGBA1754);

Coordinate& Coordinate1755 =  Coordinate();
Coordinate1755.setPoint(new float[]{0.1826,0.654,0.04966,0.181,0.6727,0.03577}, 6);
LineSet1753.setCoord(Coordinate1755);

Shape1752.setGeometry(&LineSet1753);

HAnimSegment1739.addChild(&Shape1752);

HAnimJoint1738.addChildren(&HAnimSegment1739);

HAnimJoint1732.addChildren(&HAnimJoint1738);

HAnimJoint1714.addChildren(&HAnimJoint1732);

HAnimJoint1708.addChildren(&HAnimJoint1714);

HAnimJoint1690.addChildren(&HAnimJoint1708);

HAnimJoint& HAnimJoint1756 =  HAnimJoint();
HAnimJoint1756.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint1756.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1756.setCenter(new float[]{0.18128,0.70695,0.00842});
HAnimJoint1756.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1756.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment1757.setDEF(CString("hanim_l_trapezoid"));
Shape& Shape1758 =  Shape();
LineSet& LineSet1759 =  LineSet();
LineSet1759.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1760 =  ColorRGBA();
ColorRGBA1760.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1759.addChild(&ColorRGBA1760);

Coordinate& Coordinate1761 =  Coordinate();
Coordinate1761.setPoint(new float[]{0.18128,0.70695,0.00842,0.1819,0.72427,-0.005}, 6);
LineSet1759.setCoord(Coordinate1761);

Shape1758.setGeometry(&LineSet1759);

HAnimSegment1757.addChild(&Shape1758);

HAnimJoint1756.addChildren(&HAnimSegment1757);

HAnimJoint& HAnimJoint1762 =  HAnimJoint();
HAnimJoint1762.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1762.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1762.setCenter(new float[]{0.18128,0.6876,0.0098});
HAnimJoint1762.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1762.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1763.setDEF(CString("hanim_l_metacarpal_2"));
Shape& Shape1764 =  Shape();
LineSet& LineSet1765 =  LineSet();
LineSet1765.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1766 =  ColorRGBA();
ColorRGBA1766.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1765.addChild(&ColorRGBA1766);

Coordinate& Coordinate1767 =  Coordinate();
Coordinate1767.setPoint(new float[]{0.18128,0.6876,0.0098,0.18128,0.70695,0.00842}, 6);
LineSet1765.setCoord(Coordinate1767);

Shape1764.setGeometry(&LineSet1765);

HAnimSegment1763.addChild(&Shape1764);

HAnimJoint1762.addChildren(&HAnimSegment1763);

HAnimJoint& HAnimJoint1768 =  HAnimJoint();
HAnimJoint1768.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1768.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1768.setCenter(new float[]{0.1837,0.6372,0.01507});
HAnimJoint1768.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1768.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1769.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Shape& Shape1770 =  Shape();
LineSet& LineSet1771 =  LineSet();
LineSet1771.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1772 =  ColorRGBA();
ColorRGBA1772.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1771.addChild(&ColorRGBA1772);

Coordinate& Coordinate1773 =  Coordinate();
Coordinate1773.setPoint(new float[]{0.1837,0.6372,0.01507,0.18128,0.6876,0.0098}, 6);
LineSet1771.setCoord(Coordinate1773);

Shape1770.setGeometry(&LineSet1771);

HAnimSegment1769.addChild(&Shape1770);

HAnimJoint1768.addChildren(&HAnimSegment1769);

HAnimJoint& HAnimJoint1774 =  HAnimJoint();
HAnimJoint1774.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1774.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1774.setCenter(new float[]{0.18171,0.6068,0.01418});
HAnimJoint1774.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1774.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1775 =  HAnimSegment();
HAnimSegment1775.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1775.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Shape& Shape1776 =  Shape();
LineSet& LineSet1777 =  LineSet();
LineSet1777.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1778 =  ColorRGBA();
ColorRGBA1778.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1777.addChild(&ColorRGBA1778);

Coordinate& Coordinate1779 =  Coordinate();
Coordinate1779.setPoint(new float[]{0.18171,0.6068,0.01418,0.1837,0.6372,0.01507}, 6);
LineSet1777.setCoord(Coordinate1779);

Shape1776.setGeometry(&LineSet1777);

HAnimSegment1775.addChild(&Shape1776);

HAnimJoint1774.addChildren(&HAnimSegment1775);

HAnimJoint& HAnimJoint1780 =  HAnimJoint();
HAnimJoint1780.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1780.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1780.setCenter(new float[]{0.18067,0.5816,0.01338});
HAnimJoint1780.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1780.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1781 =  HAnimSegment();
HAnimSegment1781.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSegment1781.setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimSite& HAnimSite1782 =  HAnimSite();
HAnimSite1782.X3DNode::setName(CString("l_dactylion"));
HAnimSite1782.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1782.setTranslation(new float[]{0.17,0.558,0.017});
TouchSensor& TouchSensor1783 =  TouchSensor();
TouchSensor1783.setDescription(CString("HAnimSite 57 hanim_l_dactylion_pt"));
HAnimSite1782.addChild(&TouchSensor1783);

Shape& Shape1784 =  Shape();
Appearance& Appearance1785 =  Appearance();
Material& Material1786 =  Material();
Material1786.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1785.addChild(&Material1786);

Shape1784.addChild(&Appearance1785);

IndexedFaceSet& IndexedFaceSet1787 =  IndexedFaceSet();
IndexedFaceSet1787.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1787.setCreaseAngle(0.5);
IndexedFaceSet1787.setSolid(false);
ColorRGBA& ColorRGBA1788 =  ColorRGBA();
ColorRGBA1788.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1787.addChild(&ColorRGBA1788);

Coordinate& Coordinate1789 =  Coordinate();
Coordinate1789.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1787.setCoord(&Coordinate1789);

Shape1784.setGeometry(&IndexedFaceSet1787);

HAnimSite1782.addChild(&Shape1784);

Billboard& Billboard1790 =  Billboard();
Billboard1790.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1791 =  Shape();
Text& Text1792 =  Text();
Text1792.setString(new CString[]{CString("57")}, 1);
CFontStyle& FontStyle1793 =  CFontStyle();
FontStyle1793.setSize(0.035);
Text1792.setFontStyle(&FontStyle1793);

Shape1791.setGeometry(&Text1792);

Billboard1790.addChild(&Shape1791);

HAnimSite1782.addChild(Billboard1790);

HAnimSegment1781.addChild(&HAnimSite1782);

HAnimSite& HAnimSite1794 =  HAnimSite();
HAnimSite1794.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSite1794.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimSite1794.setTranslation(new float[]{0.172,0.558,0.017});
TouchSensor& TouchSensor1795 =  TouchSensor();
TouchSensor1795.setDescription(CString("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip"));
HAnimSite1794.addChild(&TouchSensor1795);

Shape& Shape1796 =  Shape();
Appearance& Appearance1797 =  Appearance();
Material& Material1798 =  Material();
Material1798.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1797.addChild(&Material1798);

Shape1796.addChild(&Appearance1797);

IndexedFaceSet& IndexedFaceSet1799 =  IndexedFaceSet();
IndexedFaceSet1799.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1799.setCreaseAngle(0.5);
IndexedFaceSet1799.setSolid(false);
ColorRGBA& ColorRGBA1800 =  ColorRGBA();
ColorRGBA1800.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1799.addChild(&ColorRGBA1800);

Coordinate& Coordinate1801 =  Coordinate();
Coordinate1801.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1799.setCoord(&Coordinate1801);

Shape1796.setGeometry(&IndexedFaceSet1799);

HAnimSite1794.addChild(&Shape1796);

Billboard& Billboard1802 =  Billboard();
Billboard1802.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1803 =  Shape();
Text& Text1804 =  Text();
Text1804.setString(new CString[]{CString("102")}, 1);
CFontStyle& FontStyle1805 =  CFontStyle();
FontStyle1805.setSize(0.035);
Text1804.setFontStyle(&FontStyle1805);

Shape1803.setGeometry(&Text1804);

Billboard1802.addChild(&Shape1803);

HAnimSite1794.addChild(Billboard1802);

HAnimSegment1781.addChild(&HAnimSite1794);

Shape& Shape1806 =  Shape();
LineSet& LineSet1807 =  LineSet();
LineSet1807.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1808 =  ColorRGBA();
ColorRGBA1808.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1807.addChild(&ColorRGBA1808);

Coordinate& Coordinate1809 =  Coordinate();
Coordinate1809.setPoint(new float[]{0.18067,0.5816,0.01338,0.18171,0.6068,0.01418}, 6);
LineSet1807.setCoord(Coordinate1809);

Shape1806.setGeometry(&LineSet1807);

HAnimSegment1781.addChild(&Shape1806);

HAnimJoint1780.addChildren(&HAnimSegment1781);

HAnimJoint1774.addChildren(&HAnimJoint1780);

HAnimJoint1768.addChildren(&HAnimJoint1774);

HAnimJoint1762.addChildren(&HAnimJoint1768);

HAnimJoint1756.addChildren(&HAnimJoint1762);

HAnimJoint1690.addChildren(&HAnimJoint1756);

HAnimJoint& HAnimJoint1810 =  HAnimJoint();
HAnimJoint1810.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint1810.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1810.setCenter(new float[]{0.18108,0.708525,-0.0048});
HAnimJoint1810.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1810.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1811 =  HAnimSegment();
HAnimSegment1811.X3DNode::setName(CString("l_capitate"));
HAnimSegment1811.setDEF(CString("hanim_l_capitate"));
Shape& Shape1812 =  Shape();
LineSet& LineSet1813 =  LineSet();
LineSet1813.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1814 =  ColorRGBA();
ColorRGBA1814.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1813.addChild(&ColorRGBA1814);

Coordinate& Coordinate1815 =  Coordinate();
Coordinate1815.setPoint(new float[]{0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005}, 6);
LineSet1813.setCoord(Coordinate1815);

Shape1812.setGeometry(&LineSet1813);

HAnimSegment1811.addChild(&Shape1812);

HAnimJoint1810.addChildren(&HAnimSegment1811);

HAnimJoint& HAnimJoint1816 =  HAnimJoint();
HAnimJoint1816.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1816.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1816.setCenter(new float[]{0.18108,0.6858,-0.00625});
HAnimJoint1816.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1816.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1817 =  HAnimSegment();
HAnimSegment1817.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1817.setDEF(CString("hanim_l_metacarpal_3"));
HAnimSite& HAnimSite1818 =  HAnimSite();
HAnimSite1818.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite1818.setDEF(CString("hanim_l_metacarpal_phalanx_3_pt"));
HAnimSite1818.setTranslation(new float[]{0.2,0.665,-0.039});
TouchSensor& TouchSensor1819 =  TouchSensor();
TouchSensor1819.setDescription(CString("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt"));
HAnimSite1818.addChild(&TouchSensor1819);

Shape& Shape1820 =  Shape();
Appearance& Appearance1821 =  Appearance();
Material& Material1822 =  Material();
Material1822.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1821.addChild(&Material1822);

Shape1820.addChild(&Appearance1821);

IndexedFaceSet& IndexedFaceSet1823 =  IndexedFaceSet();
IndexedFaceSet1823.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1823.setCreaseAngle(0.5);
IndexedFaceSet1823.setSolid(false);
ColorRGBA& ColorRGBA1824 =  ColorRGBA();
ColorRGBA1824.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1823.addChild(&ColorRGBA1824);

Coordinate& Coordinate1825 =  Coordinate();
Coordinate1825.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1823.setCoord(&Coordinate1825);

Shape1820.setGeometry(&IndexedFaceSet1823);

HAnimSite1818.addChild(&Shape1820);

Billboard& Billboard1826 =  Billboard();
Billboard1826.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1827 =  Shape();
Text& Text1828 =  Text();
Text1828.setString(new CString[]{CString("76")}, 1);
CFontStyle& FontStyle1829 =  CFontStyle();
FontStyle1829.setSize(0.035);
Text1828.setFontStyle(&FontStyle1829);

Shape1827.setGeometry(&Text1828);

Billboard1826.addChild(&Shape1827);

HAnimSite1818.addChild(Billboard1826);

HAnimSegment1817.addChild(&HAnimSite1818);

Shape& Shape1830 =  Shape();
LineSet& LineSet1831 =  LineSet();
LineSet1831.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1832 =  ColorRGBA();
ColorRGBA1832.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1831.addChild(&ColorRGBA1832);

Coordinate& Coordinate1833 =  Coordinate();
Coordinate1833.setPoint(new float[]{0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048}, 6);
LineSet1831.setCoord(Coordinate1833);

Shape1830.setGeometry(&LineSet1831);

HAnimSegment1817.addChild(&Shape1830);

HAnimJoint1816.addChildren(&HAnimSegment1817);

HAnimJoint& HAnimJoint1834 =  HAnimJoint();
HAnimJoint1834.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1834.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1834.setCenter(new float[]{0.18369,0.6349,-0.0039});
HAnimJoint1834.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1834.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1835 =  HAnimSegment();
HAnimSegment1835.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1835.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Shape& Shape1836 =  Shape();
LineSet& LineSet1837 =  LineSet();
LineSet1837.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1838 =  ColorRGBA();
ColorRGBA1838.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1837.addChild(&ColorRGBA1838);

Coordinate& Coordinate1839 =  Coordinate();
Coordinate1839.setPoint(new float[]{0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625}, 6);
LineSet1837.setCoord(Coordinate1839);

Shape1836.setGeometry(&LineSet1837);

HAnimSegment1835.addChild(&Shape1836);

HAnimJoint1834.addChildren(&HAnimSegment1835);

HAnimJoint& HAnimJoint1840 =  HAnimJoint();
HAnimJoint1840.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1840.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1840.setCenter(new float[]{0.18171,0.6032,-0.0035});
HAnimJoint1840.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1840.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1841 =  HAnimSegment();
HAnimSegment1841.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1841.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Shape& Shape1842 =  Shape();
LineSet& LineSet1843 =  LineSet();
LineSet1843.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1844 =  ColorRGBA();
ColorRGBA1844.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1843.addChild(&ColorRGBA1844);

Coordinate& Coordinate1845 =  Coordinate();
Coordinate1845.setPoint(new float[]{0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039}, 6);
LineSet1843.setCoord(Coordinate1845);

Shape1842.setGeometry(&LineSet1843);

HAnimSegment1841.addChild(&Shape1842);

HAnimJoint1840.addChildren(&HAnimSegment1841);

HAnimJoint& HAnimJoint1846 =  HAnimJoint();
HAnimJoint1846.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1846.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1846.setCenter(new float[]{0.1807,0.5753,-0.0037});
HAnimJoint1846.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1846.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1847 =  HAnimSegment();
HAnimSegment1847.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSegment1847.setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimSite& HAnimSite1848 =  HAnimSite();
HAnimSite1848.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSite1848.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimSite1848.setTranslation(new float[]{0.172,0.555,-0.006});
TouchSensor& TouchSensor1849 =  TouchSensor();
TouchSensor1849.setDescription(CString("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip"));
HAnimSite1848.addChild(&TouchSensor1849);

Shape& Shape1850 =  Shape();
Appearance& Appearance1851 =  Appearance();
Material& Material1852 =  Material();
Material1852.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1851.addChild(&Material1852);

Shape1850.addChild(&Appearance1851);

IndexedFaceSet& IndexedFaceSet1853 =  IndexedFaceSet();
IndexedFaceSet1853.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1853.setCreaseAngle(0.5);
IndexedFaceSet1853.setSolid(false);
ColorRGBA& ColorRGBA1854 =  ColorRGBA();
ColorRGBA1854.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1853.addChild(&ColorRGBA1854);

Coordinate& Coordinate1855 =  Coordinate();
Coordinate1855.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1853.setCoord(&Coordinate1855);

Shape1850.setGeometry(&IndexedFaceSet1853);

HAnimSite1848.addChild(&Shape1850);

Billboard& Billboard1856 =  Billboard();
Billboard1856.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1857 =  Shape();
Text& Text1858 =  Text();
Text1858.setString(new CString[]{CString("103")}, 1);
CFontStyle& FontStyle1859 =  CFontStyle();
FontStyle1859.setSize(0.035);
Text1858.setFontStyle(&FontStyle1859);

Shape1857.setGeometry(&Text1858);

Billboard1856.addChild(&Shape1857);

HAnimSite1848.addChild(Billboard1856);

HAnimSegment1847.addChild(&HAnimSite1848);

Shape& Shape1860 =  Shape();
LineSet& LineSet1861 =  LineSet();
LineSet1861.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1862 =  ColorRGBA();
ColorRGBA1862.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1861.addChild(&ColorRGBA1862);

Coordinate& Coordinate1863 =  Coordinate();
Coordinate1863.setPoint(new float[]{0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035}, 6);
LineSet1861.setCoord(Coordinate1863);

Shape1860.setGeometry(&LineSet1861);

HAnimSegment1847.addChild(&Shape1860);

HAnimJoint1846.addChildren(&HAnimSegment1847);

HAnimJoint1840.addChildren(&HAnimJoint1846);

HAnimJoint1834.addChildren(&HAnimJoint1840);

HAnimJoint1816.addChildren(&HAnimJoint1834);

HAnimJoint1810.addChildren(&HAnimJoint1816);

HAnimJoint1690.addChildren(&HAnimJoint1810);

HAnimJoint& HAnimJoint1864 =  HAnimJoint();
HAnimJoint1864.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint1864.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1864.setCenter(new float[]{0.18108,0.70582,-0.02574});
HAnimJoint1864.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1864.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1865 =  HAnimSegment();
HAnimSegment1865.X3DNode::setName(CString("l_hamate"));
HAnimSegment1865.setDEF(CString("hanim_l_hamate"));
Shape& Shape1866 =  Shape();
LineSet& LineSet1867 =  LineSet();
LineSet1867.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1868 =  ColorRGBA();
ColorRGBA1868.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1867.addChild(&ColorRGBA1868);

Coordinate& Coordinate1869 =  Coordinate();
Coordinate1869.setPoint(new float[]{0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005}, 6);
LineSet1867.setCoord(Coordinate1869);

Shape1866.setGeometry(&LineSet1867);

HAnimSegment1865.addChild(&Shape1866);

HAnimJoint1864.addChildren(&HAnimSegment1865);

HAnimJoint& HAnimJoint1870 =  HAnimJoint();
HAnimJoint1870.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1870.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1870.setCenter(new float[]{0.1811,0.68625,-0.0199});
HAnimJoint1870.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1870.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1871 =  HAnimSegment();
HAnimSegment1871.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1871.setDEF(CString("hanim_l_metacarpal_4"));
Shape& Shape1872 =  Shape();
LineSet& LineSet1873 =  LineSet();
LineSet1873.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1874 =  ColorRGBA();
ColorRGBA1874.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1873.addChild(&ColorRGBA1874);

Coordinate& Coordinate1875 =  Coordinate();
Coordinate1875.setPoint(new float[]{0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574}, 6);
LineSet1873.setCoord(Coordinate1875);

Shape1872.setGeometry(&LineSet1873);

HAnimSegment1871.addChild(&Shape1872);

HAnimJoint1870.addChildren(&HAnimSegment1871);

HAnimJoint& HAnimJoint1876 =  HAnimJoint();
HAnimJoint1876.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1876.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1876.setCenter(new float[]{0.18369,0.63405,-0.02144});
HAnimJoint1876.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1876.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1877 =  HAnimSegment();
HAnimSegment1877.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1877.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Shape& Shape1878 =  Shape();
LineSet& LineSet1879 =  LineSet();
LineSet1879.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1880 =  ColorRGBA();
ColorRGBA1880.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1879.addChild(&ColorRGBA1880);

Coordinate& Coordinate1881 =  Coordinate();
Coordinate1881.setPoint(new float[]{0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199}, 6);
LineSet1879.setCoord(Coordinate1881);

Shape1878.setGeometry(&LineSet1879);

HAnimSegment1877.addChild(&Shape1878);

HAnimJoint1876.addChildren(&HAnimSegment1877);

HAnimJoint& HAnimJoint1882 =  HAnimJoint();
HAnimJoint1882.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1882.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1882.setCenter(new float[]{0.1817,0.6066,-0.02064});
HAnimJoint1882.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1882.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1883 =  HAnimSegment();
HAnimSegment1883.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1883.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Shape& Shape1884 =  Shape();
LineSet& LineSet1885 =  LineSet();
LineSet1885.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1886 =  ColorRGBA();
ColorRGBA1886.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1885.addChild(&ColorRGBA1886);

Coordinate& Coordinate1887 =  Coordinate();
Coordinate1887.setPoint(new float[]{0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144}, 6);
LineSet1885.setCoord(Coordinate1887);

Shape1884.setGeometry(&LineSet1885);

HAnimSegment1883.addChild(&Shape1884);

HAnimJoint1882.addChildren(&HAnimSegment1883);

HAnimJoint& HAnimJoint1888 =  HAnimJoint();
HAnimJoint1888.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1888.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1888.setCenter(new float[]{0.18067,0.580725,-0.01977});
HAnimJoint1888.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1888.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1889 =  HAnimSegment();
HAnimSegment1889.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSegment1889.setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimSite& HAnimSite1890 =  HAnimSite();
HAnimSite1890.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSite1890.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimSite1890.setTranslation(new float[]{0.172,0.559,-0.024});
TouchSensor& TouchSensor1891 =  TouchSensor();
TouchSensor1891.setDescription(CString("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip"));
HAnimSite1890.addChild(&TouchSensor1891);

Shape& Shape1892 =  Shape();
Appearance& Appearance1893 =  Appearance();
Material& Material1894 =  Material();
Material1894.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1893.addChild(&Material1894);

Shape1892.addChild(&Appearance1893);

IndexedFaceSet& IndexedFaceSet1895 =  IndexedFaceSet();
IndexedFaceSet1895.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1895.setCreaseAngle(0.5);
IndexedFaceSet1895.setSolid(false);
ColorRGBA& ColorRGBA1896 =  ColorRGBA();
ColorRGBA1896.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1895.addChild(&ColorRGBA1896);

Coordinate& Coordinate1897 =  Coordinate();
Coordinate1897.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1895.setCoord(&Coordinate1897);

Shape1892.setGeometry(&IndexedFaceSet1895);

HAnimSite1890.addChild(&Shape1892);

Billboard& Billboard1898 =  Billboard();
Billboard1898.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1899 =  Shape();
Text& Text1900 =  Text();
Text1900.setString(new CString[]{CString("104")}, 1);
CFontStyle& FontStyle1901 =  CFontStyle();
FontStyle1901.setSize(0.035);
Text1900.setFontStyle(&FontStyle1901);

Shape1899.setGeometry(&Text1900);

Billboard1898.addChild(&Shape1899);

HAnimSite1890.addChild(Billboard1898);

HAnimSegment1889.addChild(&HAnimSite1890);

Shape& Shape1902 =  Shape();
LineSet& LineSet1903 =  LineSet();
LineSet1903.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1904 =  ColorRGBA();
ColorRGBA1904.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1903.addChild(&ColorRGBA1904);

Coordinate& Coordinate1905 =  Coordinate();
Coordinate1905.setPoint(new float[]{0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064}, 6);
LineSet1903.setCoord(Coordinate1905);

Shape1902.setGeometry(&LineSet1903);

HAnimSegment1889.addChild(&Shape1902);

HAnimJoint1888.addChildren(&HAnimSegment1889);

HAnimJoint1882.addChildren(&HAnimJoint1888);

HAnimJoint1876.addChildren(&HAnimJoint1882);

HAnimJoint1870.addChildren(&HAnimJoint1876);

HAnimJoint1864.addChildren(&HAnimJoint1870);

HAnimJoint1690.addChildren(&HAnimJoint1864);

HAnimJoint& HAnimJoint1906 =  HAnimJoint();
HAnimJoint1906.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1906.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1906.setCenter(new float[]{0.18164,0.68827,-0.03278});
HAnimJoint1906.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1906.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1907 =  HAnimSegment();
HAnimSegment1907.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1907.setDEF(CString("hanim_l_metacarpal_5"));
HAnimSite& HAnimSite1908 =  HAnimSite();
HAnimSite1908.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite1908.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1908.setTranslation(new float[]{0.2,0.665,-0.036});
TouchSensor& TouchSensor1909 =  TouchSensor();
TouchSensor1909.setDescription(CString("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1908.addChild(&TouchSensor1909);

Shape& Shape1910 =  Shape();
Appearance& Appearance1911 =  Appearance();
Material& Material1912 =  Material();
Material1912.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1911.addChild(&Material1912);

Shape1910.addChild(&Appearance1911);

IndexedFaceSet& IndexedFaceSet1913 =  IndexedFaceSet();
IndexedFaceSet1913.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1913.setCreaseAngle(0.5);
IndexedFaceSet1913.setSolid(false);
ColorRGBA& ColorRGBA1914 =  ColorRGBA();
ColorRGBA1914.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1913.addChild(&ColorRGBA1914);

Coordinate& Coordinate1915 =  Coordinate();
Coordinate1915.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1913.setCoord(&Coordinate1915);

Shape1910.setGeometry(&IndexedFaceSet1913);

HAnimSite1908.addChild(&Shape1910);

Billboard& Billboard1916 =  Billboard();
Billboard1916.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1917 =  Shape();
Text& Text1918 =  Text();
Text1918.setString(new CString[]{CString("77")}, 1);
CFontStyle& FontStyle1919 =  CFontStyle();
FontStyle1919.setSize(0.035);
Text1918.setFontStyle(&FontStyle1919);

Shape1917.setGeometry(&Text1918);

Billboard1916.addChild(&Shape1917);

HAnimSite1908.addChild(Billboard1916);

HAnimSegment1907.addChild(&HAnimSite1908);

Shape& Shape1920 =  Shape();
LineSet& LineSet1921 =  LineSet();
LineSet1921.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1922 =  ColorRGBA();
ColorRGBA1922.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1921.addChild(&ColorRGBA1922);

Coordinate& Coordinate1923 =  Coordinate();
Coordinate1923.setPoint(new float[]{0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005}, 6);
LineSet1921.setCoord(Coordinate1923);

Shape1920.setGeometry(&LineSet1921);

HAnimSegment1907.addChild(&Shape1920);

HAnimJoint1906.addChildren(&HAnimSegment1907);

HAnimJoint& HAnimJoint1924 =  HAnimJoint();
HAnimJoint1924.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1924.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1924.setCenter(new float[]{0.1833,0.6381,-0.037});
HAnimJoint1924.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1924.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1925 =  HAnimSegment();
HAnimSegment1925.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1925.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Shape& Shape1926 =  Shape();
LineSet& LineSet1927 =  LineSet();
LineSet1927.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1928 =  ColorRGBA();
ColorRGBA1928.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1927.addChild(&ColorRGBA1928);

Coordinate& Coordinate1929 =  Coordinate();
Coordinate1929.setPoint(new float[]{0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278}, 6);
LineSet1927.setCoord(Coordinate1929);

Shape1926.setGeometry(&LineSet1927);

HAnimSegment1925.addChild(&Shape1926);

HAnimJoint1924.addChildren(&HAnimSegment1925);

HAnimJoint& HAnimJoint1930 =  HAnimJoint();
HAnimJoint1930.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1930.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1930.setCenter(new float[]{0.18166,0.621,-0.03715});
HAnimJoint1930.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1930.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1931 =  HAnimSegment();
HAnimSegment1931.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1931.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Shape& Shape1932 =  Shape();
LineSet& LineSet1933 =  LineSet();
LineSet1933.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1934 =  ColorRGBA();
ColorRGBA1934.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1933.addChild(&ColorRGBA1934);

Coordinate& Coordinate1935 =  Coordinate();
Coordinate1935.setPoint(new float[]{0.18166,0.621,-0.03715,0.1833,0.6381,-0.037}, 6);
LineSet1933.setCoord(Coordinate1935);

Shape1932.setGeometry(&LineSet1933);

HAnimSegment1931.addChild(&Shape1932);

HAnimJoint1930.addChildren(&HAnimSegment1931);

HAnimJoint& HAnimJoint1936 =  HAnimJoint();
HAnimJoint1936.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1936.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1936.setCenter(new float[]{0.1808,0.6023,-0.0369});
HAnimJoint1936.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1936.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1937 =  HAnimSegment();
HAnimSegment1937.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSegment1937.setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimSite& HAnimSite1938 =  HAnimSite();
HAnimSite1938.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSite1938.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimSite1938.setTranslation(new float[]{0.172,0.58,-0.039});
TouchSensor& TouchSensor1939 =  TouchSensor();
TouchSensor1939.setDescription(CString("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip"));
HAnimSite1938.addChild(&TouchSensor1939);

Shape& Shape1940 =  Shape();
Appearance& Appearance1941 =  Appearance();
Material& Material1942 =  Material();
Material1942.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1941.addChild(&Material1942);

Shape1940.addChild(&Appearance1941);

IndexedFaceSet& IndexedFaceSet1943 =  IndexedFaceSet();
IndexedFaceSet1943.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1943.setCreaseAngle(0.5);
IndexedFaceSet1943.setSolid(false);
ColorRGBA& ColorRGBA1944 =  ColorRGBA();
ColorRGBA1944.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1943.addChild(&ColorRGBA1944);

Coordinate& Coordinate1945 =  Coordinate();
Coordinate1945.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1943.setCoord(&Coordinate1945);

Shape1940.setGeometry(&IndexedFaceSet1943);

HAnimSite1938.addChild(&Shape1940);

Billboard& Billboard1946 =  Billboard();
Billboard1946.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1947 =  Shape();
Text& Text1948 =  Text();
Text1948.setString(new CString[]{CString("105")}, 1);
CFontStyle& FontStyle1949 =  CFontStyle();
FontStyle1949.setSize(0.035);
Text1948.setFontStyle(&FontStyle1949);

Shape1947.setGeometry(&Text1948);

Billboard1946.addChild(&Shape1947);

HAnimSite1938.addChild(Billboard1946);

HAnimSegment1937.addChild(&HAnimSite1938);

Shape& Shape1950 =  Shape();
LineSet& LineSet1951 =  LineSet();
LineSet1951.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1952 =  ColorRGBA();
ColorRGBA1952.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1951.addChild(&ColorRGBA1952);

Coordinate& Coordinate1953 =  Coordinate();
Coordinate1953.setPoint(new float[]{0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715}, 6);
LineSet1951.setCoord(Coordinate1953);

Shape1950.setGeometry(&LineSet1951);

HAnimSegment1937.addChild(&Shape1950);

HAnimJoint1936.addChildren(&HAnimSegment1937);

HAnimJoint1930.addChildren(&HAnimJoint1936);

HAnimJoint1924.addChildren(&HAnimJoint1930);

HAnimJoint1906.addChildren(&HAnimJoint1924);

HAnimJoint1690.addChildren(&HAnimJoint1906);

HAnimJoint1660.addChildren(&HAnimJoint1690);

HAnimJoint1606.addChildren(&HAnimJoint1660);

HAnimJoint1552.addChildren(&HAnimJoint1606);

HAnimJoint1534.addChildren(&HAnimJoint1552);

HAnimJoint1126.addChildren(&HAnimJoint1534);

HAnimJoint& HAnimJoint1954 =  HAnimJoint();
HAnimJoint1954.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1954.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1954.setCenter(new float[]{-0.03847,1.2087,-0.0138});
HAnimJoint1954.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1954.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1955 =  HAnimSegment();
HAnimSegment1955.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1955.setDEF(CString("hanim_r_clavicle"));
HAnimSite& HAnimSite1956 =  HAnimSite();
HAnimSite1956.X3DNode::setName(CString("r_clavicale"));
HAnimSite1956.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite1956.setTranslation(new float[]{-0.03,1.2,0.04});
TouchSensor& TouchSensor1957 =  TouchSensor();
TouchSensor1957.setDescription(CString("HAnimSite r_clavicale hanim_r_clavicale_pt"));
HAnimSite1956.addChild(&TouchSensor1957);

Shape& Shape1958 =  Shape();
Appearance& Appearance1959 =  Appearance();
Material& Material1960 =  Material();
Material1960.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1959.addChild(&Material1960);

Shape1958.addChild(&Appearance1959);

IndexedFaceSet& IndexedFaceSet1961 =  IndexedFaceSet();
IndexedFaceSet1961.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1961.setCreaseAngle(0.5);
IndexedFaceSet1961.setSolid(false);
ColorRGBA& ColorRGBA1962 =  ColorRGBA();
ColorRGBA1962.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1961.addChild(&ColorRGBA1962);

Coordinate& Coordinate1963 =  Coordinate();
Coordinate1963.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1961.setCoord(&Coordinate1963);

Shape1958.setGeometry(&IndexedFaceSet1961);

HAnimSite1956.addChild(&Shape1958);

Billboard& Billboard1964 =  Billboard();
Billboard1964.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1965 =  Shape();
Text& Text1966 =  Text();
Text1966.setString(new CString[]{CString("r_clavicale")}, 1);
CFontStyle& FontStyle1967 =  CFontStyle();
FontStyle1967.setSize(0.035);
Text1966.setFontStyle(&FontStyle1967);

Shape1965.setGeometry(&Text1966);

Billboard1964.addChild(&Shape1965);

HAnimSite1956.addChild(Billboard1964);

HAnimSegment1955.addChild(&HAnimSite1956);

Shape& Shape1968 =  Shape();
LineSet& LineSet1969 =  LineSet();
LineSet1969.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA1970 =  ColorRGBA();
ColorRGBA1970.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet1969.addChild(&ColorRGBA1970);

Coordinate& Coordinate1971 =  Coordinate();
Coordinate1971.setPoint(new float[]{-0.03847,1.2087,-0.0138,0.0,1.22,-0.0138}, 6);
LineSet1969.setCoord(Coordinate1971);

Shape1968.setGeometry(&LineSet1969);

HAnimSegment1955.addChild(&Shape1968);

HAnimJoint1954.addChildren(&HAnimSegment1955);

HAnimJoint& HAnimJoint1972 =  HAnimJoint();
HAnimJoint1972.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1972.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1972.setCenter(new float[]{-0.1229,1.19182,-0.0129});
HAnimJoint1972.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint1972.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment1973 =  HAnimSegment();
HAnimSegment1973.X3DNode::setName(CString("r_scapula"));
HAnimSegment1973.setDEF(CString("hanim_r_scapula"));
HAnimSite& HAnimSite1974 =  HAnimSite();
HAnimSite1974.X3DNode::setName(CString("r_acromion"));
HAnimSite1974.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite1974.setTranslation(new float[]{-0.15,1.222,-0.02});
TouchSensor& TouchSensor1975 =  TouchSensor();
TouchSensor1975.setDescription(CString("HAnimSite 20 hanim_r_acromion_pt"));
HAnimSite1974.addChild(&TouchSensor1975);

Shape& Shape1976 =  Shape();
Appearance& Appearance1977 =  Appearance();
Material& Material1978 =  Material();
Material1978.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1977.addChild(&Material1978);

Shape1976.addChild(&Appearance1977);

IndexedFaceSet& IndexedFaceSet1979 =  IndexedFaceSet();
IndexedFaceSet1979.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1979.setCreaseAngle(0.5);
IndexedFaceSet1979.setSolid(false);
ColorRGBA& ColorRGBA1980 =  ColorRGBA();
ColorRGBA1980.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1979.addChild(&ColorRGBA1980);

Coordinate& Coordinate1981 =  Coordinate();
Coordinate1981.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1979.setCoord(&Coordinate1981);

Shape1976.setGeometry(&IndexedFaceSet1979);

HAnimSite1974.addChild(&Shape1976);

Billboard& Billboard1982 =  Billboard();
Billboard1982.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1983 =  Shape();
Text& Text1984 =  Text();
Text1984.setString(new CString[]{CString("20")}, 1);
CFontStyle& FontStyle1985 =  CFontStyle();
FontStyle1985.setSize(0.035);
Text1984.setFontStyle(&FontStyle1985);

Shape1983.setGeometry(&Text1984);

Billboard1982.addChild(&Shape1983);

HAnimSite1974.addChild(Billboard1982);

HAnimSegment1973.addChild(&HAnimSite1974);

HAnimSite& HAnimSite1986 =  HAnimSite();
HAnimSite1986.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite1986.setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite1986.setTranslation(new float[]{-0.15,1.16,0.04});
TouchSensor& TouchSensor1987 =  TouchSensor();
TouchSensor1987.setDescription(CString("HAnimSite 21 hanim_r_axilla_proximal_pt"));
HAnimSite1986.addChild(&TouchSensor1987);

Shape& Shape1988 =  Shape();
Appearance& Appearance1989 =  Appearance();
Material& Material1990 =  Material();
Material1990.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1989.addChild(&Material1990);

Shape1988.addChild(&Appearance1989);

IndexedFaceSet& IndexedFaceSet1991 =  IndexedFaceSet();
IndexedFaceSet1991.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet1991.setCreaseAngle(0.5);
IndexedFaceSet1991.setSolid(false);
ColorRGBA& ColorRGBA1992 =  ColorRGBA();
ColorRGBA1992.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet1991.addChild(&ColorRGBA1992);

Coordinate& Coordinate1993 =  Coordinate();
Coordinate1993.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet1991.setCoord(&Coordinate1993);

Shape1988.setGeometry(&IndexedFaceSet1991);

HAnimSite1986.addChild(&Shape1988);

Billboard& Billboard1994 =  Billboard();
Billboard1994.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape1995 =  Shape();
Text& Text1996 =  Text();
Text1996.setString(new CString[]{CString("21")}, 1);
CFontStyle& FontStyle1997 =  CFontStyle();
FontStyle1997.setSize(0.035);
Text1996.setFontStyle(&FontStyle1997);

Shape1995.setGeometry(&Text1996);

Billboard1994.addChild(&Shape1995);

HAnimSite1986.addChild(Billboard1994);

HAnimSegment1973.addChild(&HAnimSite1986);

HAnimSite& HAnimSite1998 =  HAnimSite();
HAnimSite1998.X3DNode::setName(CString("r_axilla_distal"));
HAnimSite1998.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite1998.setTranslation(new float[]{-0.17,1.14,0.0});
TouchSensor& TouchSensor1999 =  TouchSensor();
TouchSensor1999.setDescription(CString("HAnimSite 22 hanim_r_axilla_distal_pt"));
HAnimSite1998.addChild(&TouchSensor1999);

Shape& Shape2000 =  Shape();
Appearance& Appearance2001 =  Appearance();
Material& Material2002 =  Material();
Material2002.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2001.addChild(&Material2002);

Shape2000.addChild(&Appearance2001);

IndexedFaceSet& IndexedFaceSet2003 =  IndexedFaceSet();
IndexedFaceSet2003.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2003.setCreaseAngle(0.5);
IndexedFaceSet2003.setSolid(false);
ColorRGBA& ColorRGBA2004 =  ColorRGBA();
ColorRGBA2004.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2003.addChild(&ColorRGBA2004);

Coordinate& Coordinate2005 =  Coordinate();
Coordinate2005.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2003.setCoord(&Coordinate2005);

Shape2000.setGeometry(&IndexedFaceSet2003);

HAnimSite1998.addChild(&Shape2000);

Billboard& Billboard2006 =  Billboard();
Billboard2006.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2007 =  Shape();
Text& Text2008 =  Text();
Text2008.setString(new CString[]{CString("22")}, 1);
CFontStyle& FontStyle2009 =  CFontStyle();
FontStyle2009.setSize(0.035);
Text2008.setFontStyle(&FontStyle2009);

Shape2007.setGeometry(&Text2008);

Billboard2006.addChild(&Shape2007);

HAnimSite1998.addChild(Billboard2006);

HAnimSegment1973.addChild(&HAnimSite1998);

HAnimSite& HAnimSite2010 =  HAnimSite();
HAnimSite2010.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite2010.setDEF(CString("hanim_r_axilla_posterior_folds_pt"));
HAnimSite2010.setTranslation(new float[]{-0.15,1.145,-0.04});
TouchSensor& TouchSensor2011 =  TouchSensor();
TouchSensor2011.setDescription(CString("HAnimSite 23 hanim_r_axilla_posterior_folds_pt"));
HAnimSite2010.addChild(&TouchSensor2011);

Shape& Shape2012 =  Shape();
Appearance& Appearance2013 =  Appearance();
Material& Material2014 =  Material();
Material2014.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2013.addChild(&Material2014);

Shape2012.addChild(&Appearance2013);

IndexedFaceSet& IndexedFaceSet2015 =  IndexedFaceSet();
IndexedFaceSet2015.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2015.setCreaseAngle(0.5);
IndexedFaceSet2015.setSolid(false);
ColorRGBA& ColorRGBA2016 =  ColorRGBA();
ColorRGBA2016.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2015.addChild(&ColorRGBA2016);

Coordinate& Coordinate2017 =  Coordinate();
Coordinate2017.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2015.setCoord(&Coordinate2017);

Shape2012.setGeometry(&IndexedFaceSet2015);

HAnimSite2010.addChild(&Shape2012);

Billboard& Billboard2018 =  Billboard();
Billboard2018.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2019 =  Shape();
Text& Text2020 =  Text();
Text2020.setString(new CString[]{CString("23")}, 1);
CFontStyle& FontStyle2021 =  CFontStyle();
FontStyle2021.setSize(0.035);
Text2020.setFontStyle(&FontStyle2021);

Shape2019.setGeometry(&Text2020);

Billboard2018.addChild(&Shape2019);

HAnimSite2010.addChild(Billboard2018);

HAnimSegment1973.addChild(&HAnimSite2010);

Shape& Shape2022 =  Shape();
LineSet& LineSet2023 =  LineSet();
LineSet2023.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2024 =  ColorRGBA();
ColorRGBA2024.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2023.addChild(&ColorRGBA2024);

Coordinate& Coordinate2025 =  Coordinate();
Coordinate2025.setPoint(new float[]{-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138}, 6);
LineSet2023.setCoord(Coordinate2025);

Shape2022.setGeometry(&LineSet2023);

HAnimSegment1973.addChild(&Shape2022);

HAnimJoint1972.addChildren(&HAnimSegment1973);

HAnimJoint& HAnimJoint2026 =  HAnimJoint();
HAnimJoint2026.X3DNode::setName(CString("r_shoulder"));
HAnimJoint2026.setDEF(CString("hanim_r_shoulder"));
HAnimJoint2026.setCenter(new float[]{-0.1647,1.17855,-0.00327});
HAnimJoint2026.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2026.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2027 =  HAnimSegment();
HAnimSegment2027.X3DNode::setName(CString("r_upperarm"));
HAnimSegment2027.setDEF(CString("hanim_r_upperarm"));
HAnimSite& HAnimSite2028 =  HAnimSite();
HAnimSite2028.X3DNode::setName(CString("r_humeral_lateral_epicondyle"));
HAnimSite2028.setDEF(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimSite2028.setTranslation(new float[]{-0.2,0.95,-0.03});
TouchSensor& TouchSensor2029 =  TouchSensor();
TouchSensor2029.setDescription(CString("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt"));
HAnimSite2028.addChild(&TouchSensor2029);

Shape& Shape2030 =  Shape();
Appearance& Appearance2031 =  Appearance();
Material& Material2032 =  Material();
Material2032.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2031.addChild(&Material2032);

Shape2030.addChild(&Appearance2031);

IndexedFaceSet& IndexedFaceSet2033 =  IndexedFaceSet();
IndexedFaceSet2033.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2033.setCreaseAngle(0.5);
IndexedFaceSet2033.setSolid(false);
ColorRGBA& ColorRGBA2034 =  ColorRGBA();
ColorRGBA2034.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2033.addChild(&ColorRGBA2034);

Coordinate& Coordinate2035 =  Coordinate();
Coordinate2035.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2033.setCoord(&Coordinate2035);

Shape2030.setGeometry(&IndexedFaceSet2033);

HAnimSite2028.addChild(&Shape2030);

Billboard& Billboard2036 =  Billboard();
Billboard2036.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2037 =  Shape();
Text& Text2038 =  Text();
Text2038.setString(new CString[]{CString("66")}, 1);
CFontStyle& FontStyle2039 =  CFontStyle();
FontStyle2039.setSize(0.035);
Text2038.setFontStyle(&FontStyle2039);

Shape2037.setGeometry(&Text2038);

Billboard2036.addChild(&Shape2037);

HAnimSite2028.addChild(Billboard2036);

HAnimSegment2027.addChild(&HAnimSite2028);

HAnimSite& HAnimSite2040 =  HAnimSite();
HAnimSite2040.X3DNode::setName(CString("r_humeral_medial_epicondyle"));
HAnimSite2040.setDEF(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimSite2040.setTranslation(new float[]{-0.18,0.93,-0.03});
TouchSensor& TouchSensor2041 =  TouchSensor();
TouchSensor2041.setDescription(CString("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt"));
HAnimSite2040.addChild(&TouchSensor2041);

Shape& Shape2042 =  Shape();
Appearance& Appearance2043 =  Appearance();
Material& Material2044 =  Material();
Material2044.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2043.addChild(&Material2044);

Shape2042.addChild(&Appearance2043);

IndexedFaceSet& IndexedFaceSet2045 =  IndexedFaceSet();
IndexedFaceSet2045.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2045.setCreaseAngle(0.5);
IndexedFaceSet2045.setSolid(false);
ColorRGBA& ColorRGBA2046 =  ColorRGBA();
ColorRGBA2046.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2045.addChild(&ColorRGBA2046);

Coordinate& Coordinate2047 =  Coordinate();
Coordinate2047.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2045.setCoord(&Coordinate2047);

Shape2042.setGeometry(&IndexedFaceSet2045);

HAnimSite2040.addChild(&Shape2042);

Billboard& Billboard2048 =  Billboard();
Billboard2048.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2049 =  Shape();
Text& Text2050 =  Text();
Text2050.setString(new CString[]{CString("67")}, 1);
CFontStyle& FontStyle2051 =  CFontStyle();
FontStyle2051.setSize(0.035);
Text2050.setFontStyle(&FontStyle2051);

Shape2049.setGeometry(&Text2050);

Billboard2048.addChild(&Shape2049);

HAnimSite2040.addChild(Billboard2048);

HAnimSegment2027.addChild(&HAnimSite2040);

HAnimSite& HAnimSite2052 =  HAnimSite();
HAnimSite2052.X3DNode::setName(CString("r_radiale"));
HAnimSite2052.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite2052.setTranslation(new float[]{-0.2,0.91,-0.03});
TouchSensor& TouchSensor2053 =  TouchSensor();
TouchSensor2053.setDescription(CString("HAnimSite 72 hanim_r_radiale_pt"));
HAnimSite2052.addChild(&TouchSensor2053);

Shape& Shape2054 =  Shape();
Appearance& Appearance2055 =  Appearance();
Material& Material2056 =  Material();
Material2056.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2055.addChild(&Material2056);

Shape2054.addChild(&Appearance2055);

IndexedFaceSet& IndexedFaceSet2057 =  IndexedFaceSet();
IndexedFaceSet2057.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2057.setCreaseAngle(0.5);
IndexedFaceSet2057.setSolid(false);
ColorRGBA& ColorRGBA2058 =  ColorRGBA();
ColorRGBA2058.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2057.addChild(&ColorRGBA2058);

Coordinate& Coordinate2059 =  Coordinate();
Coordinate2059.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2057.setCoord(&Coordinate2059);

Shape2054.setGeometry(&IndexedFaceSet2057);

HAnimSite2052.addChild(&Shape2054);

Billboard& Billboard2060 =  Billboard();
Billboard2060.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2061 =  Shape();
Text& Text2062 =  Text();
Text2062.setString(new CString[]{CString("72")}, 1);
CFontStyle& FontStyle2063 =  CFontStyle();
FontStyle2063.setSize(0.035);
Text2062.setFontStyle(&FontStyle2063);

Shape2061.setGeometry(&Text2062);

Billboard2060.addChild(&Shape2061);

HAnimSite2052.addChild(Billboard2060);

HAnimSegment2027.addChild(&HAnimSite2052);

HAnimSite& HAnimSite2064 =  HAnimSite();
HAnimSite2064.X3DNode::setName(CString("r_bideltoid"));
HAnimSite2064.setDEF(CString("hanim_r_bideltoid_pt"));
HAnimSite2064.setTranslation(new float[]{-0.225,1.185,0.0});
TouchSensor& TouchSensor2065 =  TouchSensor();
TouchSensor2065.setDescription(CString("HAnimSite 97 hanim_r_bideltoid_pt"));
HAnimSite2064.addChild(&TouchSensor2065);

Shape& Shape2066 =  Shape();
Appearance& Appearance2067 =  Appearance();
Material& Material2068 =  Material();
Material2068.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2067.addChild(&Material2068);

Shape2066.addChild(&Appearance2067);

IndexedFaceSet& IndexedFaceSet2069 =  IndexedFaceSet();
IndexedFaceSet2069.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2069.setCreaseAngle(0.5);
IndexedFaceSet2069.setSolid(false);
ColorRGBA& ColorRGBA2070 =  ColorRGBA();
ColorRGBA2070.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2069.addChild(&ColorRGBA2070);

Coordinate& Coordinate2071 =  Coordinate();
Coordinate2071.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2069.setCoord(&Coordinate2071);

Shape2066.setGeometry(&IndexedFaceSet2069);

HAnimSite2064.addChild(&Shape2066);

Billboard& Billboard2072 =  Billboard();
Billboard2072.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2073 =  Shape();
Text& Text2074 =  Text();
Text2074.setString(new CString[]{CString("97")}, 1);
CFontStyle& FontStyle2075 =  CFontStyle();
FontStyle2075.setSize(0.035);
Text2074.setFontStyle(&FontStyle2075);

Shape2073.setGeometry(&Text2074);

Billboard2072.addChild(&Shape2073);

HAnimSite2064.addChild(Billboard2072);

HAnimSegment2027.addChild(&HAnimSite2064);

Shape& Shape2076 =  Shape();
LineSet& LineSet2077 =  LineSet();
LineSet2077.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2078 =  ColorRGBA();
ColorRGBA2078.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2077.addChild(&ColorRGBA2078);

Coordinate& Coordinate2079 =  Coordinate();
Coordinate2079.setPoint(new float[]{-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129}, 6);
LineSet2077.setCoord(Coordinate2079);

Shape2076.setGeometry(&LineSet2077);

HAnimSegment2027.addChild(&Shape2076);

HAnimJoint2026.addChildren(&HAnimSegment2027);

HAnimJoint& HAnimJoint2080 =  HAnimJoint();
HAnimJoint2080.X3DNode::setName(CString("r_elbow"));
HAnimJoint2080.setDEF(CString("hanim_r_elbow"));
HAnimJoint2080.setCenter(new float[]{-0.1817,0.9288,-0.00564});
HAnimJoint2080.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2080.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2081 =  HAnimSegment();
HAnimSegment2081.X3DNode::setName(CString("r_forearm"));
HAnimSegment2081.setDEF(CString("hanim_r_forearm"));
HAnimSite& HAnimSite2082 =  HAnimSite();
HAnimSite2082.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite2082.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite2082.setTranslation(new float[]{-0.18,0.725,0.025});
TouchSensor& TouchSensor2083 =  TouchSensor();
TouchSensor2083.setDescription(CString("HAnimSite 74 hanim_r_radial_styloid_pt"));
HAnimSite2082.addChild(&TouchSensor2083);

Shape& Shape2084 =  Shape();
Appearance& Appearance2085 =  Appearance();
Material& Material2086 =  Material();
Material2086.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2085.addChild(&Material2086);

Shape2084.addChild(&Appearance2085);

IndexedFaceSet& IndexedFaceSet2087 =  IndexedFaceSet();
IndexedFaceSet2087.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2087.setCreaseAngle(0.5);
IndexedFaceSet2087.setSolid(false);
ColorRGBA& ColorRGBA2088 =  ColorRGBA();
ColorRGBA2088.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2087.addChild(&ColorRGBA2088);

Coordinate& Coordinate2089 =  Coordinate();
Coordinate2089.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2087.setCoord(&Coordinate2089);

Shape2084.setGeometry(&IndexedFaceSet2087);

HAnimSite2082.addChild(&Shape2084);

Billboard& Billboard2090 =  Billboard();
Billboard2090.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2091 =  Shape();
Text& Text2092 =  Text();
Text2092.setString(new CString[]{CString("74")}, 1);
CFontStyle& FontStyle2093 =  CFontStyle();
FontStyle2093.setSize(0.035);
Text2092.setFontStyle(&FontStyle2093);

Shape2091.setGeometry(&Text2092);

Billboard2090.addChild(&Shape2091);

HAnimSite2082.addChild(Billboard2090);

HAnimSegment2081.addChild(&HAnimSite2082);

HAnimSite& HAnimSite2094 =  HAnimSite();
HAnimSite2094.X3DNode::setName(CString("r_olecranon"));
HAnimSite2094.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite2094.setTranslation(new float[]{-0.2,0.92,-0.03});
TouchSensor& TouchSensor2095 =  TouchSensor();
TouchSensor2095.setDescription(CString("HAnimSite 68 hanim_r_olecranon_pt"));
HAnimSite2094.addChild(&TouchSensor2095);

Shape& Shape2096 =  Shape();
Appearance& Appearance2097 =  Appearance();
Material& Material2098 =  Material();
Material2098.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2097.addChild(&Material2098);

Shape2096.addChild(&Appearance2097);

IndexedFaceSet& IndexedFaceSet2099 =  IndexedFaceSet();
IndexedFaceSet2099.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2099.setCreaseAngle(0.5);
IndexedFaceSet2099.setSolid(false);
ColorRGBA& ColorRGBA2100 =  ColorRGBA();
ColorRGBA2100.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2099.addChild(&ColorRGBA2100);

Coordinate& Coordinate2101 =  Coordinate();
Coordinate2101.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2099.setCoord(&Coordinate2101);

Shape2096.setGeometry(&IndexedFaceSet2099);

HAnimSite2094.addChild(&Shape2096);

Billboard& Billboard2102 =  Billboard();
Billboard2102.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2103 =  Shape();
Text& Text2104 =  Text();
Text2104.setString(new CString[]{CString("68")}, 1);
CFontStyle& FontStyle2105 =  CFontStyle();
FontStyle2105.setSize(0.035);
Text2104.setFontStyle(&FontStyle2105);

Shape2103.setGeometry(&Text2104);

Billboard2102.addChild(&Shape2103);

HAnimSite2094.addChild(Billboard2102);

HAnimSegment2081.addChild(&HAnimSite2094);

Shape& Shape2106 =  Shape();
LineSet& LineSet2107 =  LineSet();
LineSet2107.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2108 =  ColorRGBA();
ColorRGBA2108.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2107.addChild(&ColorRGBA2108);

Coordinate& Coordinate2109 =  Coordinate();
Coordinate2109.setPoint(new float[]{-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327}, 6);
LineSet2107.setCoord(Coordinate2109);

Shape2106.setGeometry(&LineSet2107);

HAnimSegment2081.addChild(&Shape2106);

HAnimJoint2080.addChildren(&HAnimSegment2081);

HAnimJoint& HAnimJoint2110 =  HAnimJoint();
HAnimJoint2110.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint2110.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint2110.setCenter(new float[]{-0.1816,0.7242,-0.005});
HAnimJoint2110.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2110.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2111 =  HAnimSegment();
HAnimSegment2111.X3DNode::setName(CString("r_carpal"));
HAnimSegment2111.setDEF(CString("hanim_r_carpal"));
HAnimSite& HAnimSite2112 =  HAnimSite();
HAnimSite2112.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite2112.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite2112.setTranslation(new float[]{-0.2,0.725,0.0});
TouchSensor& TouchSensor2113 =  TouchSensor();
TouchSensor2113.setDescription(CString("HAnimSite 73 hanim_r_ulnar_styloid_pt"));
HAnimSite2112.addChild(&TouchSensor2113);

Shape& Shape2114 =  Shape();
Appearance& Appearance2115 =  Appearance();
Material& Material2116 =  Material();
Material2116.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2115.addChild(&Material2116);

Shape2114.addChild(&Appearance2115);

IndexedFaceSet& IndexedFaceSet2117 =  IndexedFaceSet();
IndexedFaceSet2117.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2117.setCreaseAngle(0.5);
IndexedFaceSet2117.setSolid(false);
ColorRGBA& ColorRGBA2118 =  ColorRGBA();
ColorRGBA2118.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2117.addChild(&ColorRGBA2118);

Coordinate& Coordinate2119 =  Coordinate();
Coordinate2119.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2117.setCoord(&Coordinate2119);

Shape2114.setGeometry(&IndexedFaceSet2117);

HAnimSite2112.addChild(&Shape2114);

Billboard& Billboard2120 =  Billboard();
Billboard2120.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2121 =  Shape();
Text& Text2122 =  Text();
Text2122.setString(new CString[]{CString("73")}, 1);
CFontStyle& FontStyle2123 =  CFontStyle();
FontStyle2123.setSize(0.035);
Text2122.setFontStyle(&FontStyle2123);

Shape2121.setGeometry(&Text2122);

Billboard2120.addChild(&Shape2121);

HAnimSite2112.addChild(Billboard2120);

HAnimSegment2111.addChild(&HAnimSite2112);

Shape& Shape2124 =  Shape();
LineSet& LineSet2125 =  LineSet();
LineSet2125.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2126 =  ColorRGBA();
ColorRGBA2126.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2125.addChild(&ColorRGBA2126);

Coordinate& Coordinate2127 =  Coordinate();
Coordinate2127.setPoint(new float[]{-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564}, 6);
LineSet2125.setCoord(Coordinate2127);

Shape2124.setGeometry(&LineSet2125);

HAnimSegment2111.addChild(&Shape2124);

HAnimJoint2110.addChildren(&HAnimSegment2111);

HAnimJoint& HAnimJoint2128 =  HAnimJoint();
HAnimJoint2128.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint2128.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint2128.setCenter(new float[]{-0.18097,0.70605,0.0193});
HAnimJoint2128.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2128.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2129 =  HAnimSegment();
HAnimSegment2129.X3DNode::setName(CString("r_trapezium"));
HAnimSegment2129.setDEF(CString("hanim_r_trapezium"));
Shape& Shape2130 =  Shape();
LineSet& LineSet2131 =  LineSet();
LineSet2131.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2132 =  ColorRGBA();
ColorRGBA2132.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2131.addChild(&ColorRGBA2132);

Coordinate& Coordinate2133 =  Coordinate();
Coordinate2133.setPoint(new float[]{-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005}, 6);
LineSet2131.setCoord(Coordinate2133);

Shape2130.setGeometry(&LineSet2131);

HAnimSegment2129.addChild(&Shape2130);

HAnimJoint2128.addChildren(&HAnimSegment2129);

HAnimJoint& HAnimJoint2134 =  HAnimJoint();
HAnimJoint2134.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint2134.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint2134.setCenter(new float[]{-0.18,0.69255,0.02598});
HAnimJoint2134.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2134.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2135 =  HAnimSegment();
HAnimSegment2135.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment2135.setDEF(CString("hanim_r_metacarpal_1"));
HAnimSite& HAnimSite2136 =  HAnimSite();
HAnimSite2136.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite2136.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite2136.setTranslation(new float[]{-0.2,0.665,0.012});
TouchSensor& TouchSensor2137 =  TouchSensor();
TouchSensor2137.setDescription(CString("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite2136.addChild(&TouchSensor2137);

Shape& Shape2138 =  Shape();
Appearance& Appearance2139 =  Appearance();
Material& Material2140 =  Material();
Material2140.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2139.addChild(&Material2140);

Shape2138.addChild(&Appearance2139);

IndexedFaceSet& IndexedFaceSet2141 =  IndexedFaceSet();
IndexedFaceSet2141.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2141.setCreaseAngle(0.5);
IndexedFaceSet2141.setSolid(false);
ColorRGBA& ColorRGBA2142 =  ColorRGBA();
ColorRGBA2142.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2141.addChild(&ColorRGBA2142);

Coordinate& Coordinate2143 =  Coordinate();
Coordinate2143.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2141.setCoord(&Coordinate2143);

Shape2138.setGeometry(&IndexedFaceSet2141);

HAnimSite2136.addChild(&Shape2138);

Billboard& Billboard2144 =  Billboard();
Billboard2144.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2145 =  Shape();
Text& Text2146 =  Text();
Text2146.setString(new CString[]{CString("78")}, 1);
CFontStyle& FontStyle2147 =  CFontStyle();
FontStyle2147.setSize(0.035);
Text2146.setFontStyle(&FontStyle2147);

Shape2145.setGeometry(&Text2146);

Billboard2144.addChild(&Shape2145);

HAnimSite2136.addChild(Billboard2144);

HAnimSegment2135.addChild(&HAnimSite2136);

Shape& Shape2148 =  Shape();
LineSet& LineSet2149 =  LineSet();
LineSet2149.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2150 =  ColorRGBA();
ColorRGBA2150.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2149.addChild(&ColorRGBA2150);

Coordinate& Coordinate2151 =  Coordinate();
Coordinate2151.setPoint(new float[]{-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193}, 6);
LineSet2149.setCoord(Coordinate2151);

Shape2148.setGeometry(&LineSet2149);

HAnimSegment2135.addChild(&Shape2148);

HAnimJoint2134.addChildren(&HAnimSegment2135);

HAnimJoint& HAnimJoint2152 =  HAnimJoint();
HAnimJoint2152.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint2152.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint2152.setCenter(new float[]{-0.18065,0.67275,0.03577});
HAnimJoint2152.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2152.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2153 =  HAnimSegment();
HAnimSegment2153.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment2153.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Shape& Shape2154 =  Shape();
LineSet& LineSet2155 =  LineSet();
LineSet2155.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2156 =  ColorRGBA();
ColorRGBA2156.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2155.addChild(&ColorRGBA2156);

Coordinate& Coordinate2157 =  Coordinate();
Coordinate2157.setPoint(new float[]{-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598}, 6);
LineSet2155.setCoord(Coordinate2157);

Shape2154.setGeometry(&LineSet2155);

HAnimSegment2153.addChild(&Shape2154);

HAnimJoint2152.addChildren(&HAnimSegment2153);

HAnimJoint& HAnimJoint2158 =  HAnimJoint();
HAnimJoint2158.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint2158.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint2158.setCenter(new float[]{-0.18227,0.654,0.0496});
HAnimJoint2158.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2158.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2159 =  HAnimSegment();
HAnimSegment2159.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimSegment2159.setDEF(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimSite& HAnimSite2160 =  HAnimSite();
HAnimSite2160.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimSite2160.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimSite2160.setTranslation(new float[]{-0.18,0.64,0.06});
TouchSensor& TouchSensor2161 =  TouchSensor();
TouchSensor2161.setDescription(CString("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip"));
HAnimSite2160.addChild(&TouchSensor2161);

Shape& Shape2162 =  Shape();
Appearance& Appearance2163 =  Appearance();
Material& Material2164 =  Material();
Material2164.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2163.addChild(&Material2164);

Shape2162.addChild(&Appearance2163);

IndexedFaceSet& IndexedFaceSet2165 =  IndexedFaceSet();
IndexedFaceSet2165.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2165.setCreaseAngle(0.5);
IndexedFaceSet2165.setSolid(false);
ColorRGBA& ColorRGBA2166 =  ColorRGBA();
ColorRGBA2166.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2165.addChild(&ColorRGBA2166);

Coordinate& Coordinate2167 =  Coordinate();
Coordinate2167.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2165.setCoord(&Coordinate2167);

Shape2162.setGeometry(&IndexedFaceSet2165);

HAnimSite2160.addChild(&Shape2162);

Billboard& Billboard2168 =  Billboard();
Billboard2168.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2169 =  Shape();
Text& Text2170 =  Text();
Text2170.setString(new CString[]{CString("106")}, 1);
CFontStyle& FontStyle2171 =  CFontStyle();
FontStyle2171.setSize(0.035);
Text2170.setFontStyle(&FontStyle2171);

Shape2169.setGeometry(&Text2170);

Billboard2168.addChild(&Shape2169);

HAnimSite2160.addChild(Billboard2168);

HAnimSegment2159.addChild(&HAnimSite2160);

Shape& Shape2172 =  Shape();
LineSet& LineSet2173 =  LineSet();
LineSet2173.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2174 =  ColorRGBA();
ColorRGBA2174.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2173.addChild(&ColorRGBA2174);

Coordinate& Coordinate2175 =  Coordinate();
Coordinate2175.setPoint(new float[]{-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577}, 6);
LineSet2173.setCoord(Coordinate2175);

Shape2172.setGeometry(&LineSet2173);

HAnimSegment2159.addChild(&Shape2172);

HAnimJoint2158.addChildren(&HAnimSegment2159);

HAnimJoint2152.addChildren(&HAnimJoint2158);

HAnimJoint2134.addChildren(&HAnimJoint2152);

HAnimJoint2128.addChildren(&HAnimJoint2134);

HAnimJoint2110.addChildren(&HAnimJoint2128);

HAnimJoint& HAnimJoint2176 =  HAnimJoint();
HAnimJoint2176.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint2176.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint2176.setCenter(new float[]{-0.18097,0.70695,0.0084});
HAnimJoint2176.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2176.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2177 =  HAnimSegment();
HAnimSegment2177.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment2177.setDEF(CString("hanim_r_trapezoid"));
Shape& Shape2178 =  Shape();
LineSet& LineSet2179 =  LineSet();
LineSet2179.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2180 =  ColorRGBA();
ColorRGBA2180.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2179.addChild(&ColorRGBA2180);

Coordinate& Coordinate2181 =  Coordinate();
Coordinate2181.setPoint(new float[]{-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005}, 6);
LineSet2179.setCoord(Coordinate2181);

Shape2178.setGeometry(&LineSet2179);

HAnimSegment2177.addChild(&Shape2178);

HAnimJoint2176.addChildren(&HAnimSegment2177);

HAnimJoint& HAnimJoint2182 =  HAnimJoint();
HAnimJoint2182.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint2182.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint2182.setCenter(new float[]{-0.1809,0.6876,0.0097});
HAnimJoint2182.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2182.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2183 =  HAnimSegment();
HAnimSegment2183.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment2183.setDEF(CString("hanim_r_metacarpal_2"));
Shape& Shape2184 =  Shape();
LineSet& LineSet2185 =  LineSet();
LineSet2185.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2186 =  ColorRGBA();
ColorRGBA2186.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2185.addChild(&ColorRGBA2186);

Coordinate& Coordinate2187 =  Coordinate();
Coordinate2187.setPoint(new float[]{-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084}, 6);
LineSet2185.setCoord(Coordinate2187);

Shape2184.setGeometry(&LineSet2185);

HAnimSegment2183.addChild(&Shape2184);

HAnimJoint2182.addChildren(&HAnimSegment2183);

HAnimJoint& HAnimJoint2188 =  HAnimJoint();
HAnimJoint2188.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint2188.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint2188.setCenter(new float[]{-0.18335,0.6372,0.01507});
HAnimJoint2188.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2188.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2189 =  HAnimSegment();
HAnimSegment2189.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment2189.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Shape& Shape2190 =  Shape();
LineSet& LineSet2191 =  LineSet();
LineSet2191.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2192 =  ColorRGBA();
ColorRGBA2192.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2191.addChild(&ColorRGBA2192);

Coordinate& Coordinate2193 =  Coordinate();
Coordinate2193.setPoint(new float[]{-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097}, 6);
LineSet2191.setCoord(Coordinate2193);

Shape2190.setGeometry(&LineSet2191);

HAnimSegment2189.addChild(&Shape2190);

HAnimJoint2188.addChildren(&HAnimSegment2189);

HAnimJoint& HAnimJoint2194 =  HAnimJoint();
HAnimJoint2194.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint2194.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint2194.setCenter(new float[]{-0.1813,0.6068,0.01418});
HAnimJoint2194.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2194.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2195 =  HAnimSegment();
HAnimSegment2195.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment2195.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Shape& Shape2196 =  Shape();
LineSet& LineSet2197 =  LineSet();
LineSet2197.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2198 =  ColorRGBA();
ColorRGBA2198.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2197.addChild(&ColorRGBA2198);

Coordinate& Coordinate2199 =  Coordinate();
Coordinate2199.setPoint(new float[]{-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507}, 6);
LineSet2197.setCoord(Coordinate2199);

Shape2196.setGeometry(&LineSet2197);

HAnimSegment2195.addChild(&Shape2196);

HAnimJoint2194.addChildren(&HAnimSegment2195);

HAnimJoint& HAnimJoint2200 =  HAnimJoint();
HAnimJoint2200.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint2200.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint2200.setCenter(new float[]{-0.1803,0.5816,0.01338});
HAnimJoint2200.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2200.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2201 =  HAnimSegment();
HAnimSegment2201.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimSegment2201.setDEF(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimSite& HAnimSite2202 =  HAnimSite();
HAnimSite2202.X3DNode::setName(CString("r_dactylion"));
HAnimSite2202.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite2202.setTranslation(new float[]{-0.17,0.558,0.017});
TouchSensor& TouchSensor2203 =  TouchSensor();
TouchSensor2203.setDescription(CString("HAnimSite 61 hanim_r_dactylion_pt"));
HAnimSite2202.addChild(&TouchSensor2203);

Shape& Shape2204 =  Shape();
Appearance& Appearance2205 =  Appearance();
Material& Material2206 =  Material();
Material2206.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2205.addChild(&Material2206);

Shape2204.addChild(&Appearance2205);

IndexedFaceSet& IndexedFaceSet2207 =  IndexedFaceSet();
IndexedFaceSet2207.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2207.setCreaseAngle(0.5);
IndexedFaceSet2207.setSolid(false);
ColorRGBA& ColorRGBA2208 =  ColorRGBA();
ColorRGBA2208.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2207.addChild(&ColorRGBA2208);

Coordinate& Coordinate2209 =  Coordinate();
Coordinate2209.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2207.setCoord(&Coordinate2209);

Shape2204.setGeometry(&IndexedFaceSet2207);

HAnimSite2202.addChild(&Shape2204);

Billboard& Billboard2210 =  Billboard();
Billboard2210.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2211 =  Shape();
Text& Text2212 =  Text();
Text2212.setString(new CString[]{CString("61")}, 1);
CFontStyle& FontStyle2213 =  CFontStyle();
FontStyle2213.setSize(0.035);
Text2212.setFontStyle(&FontStyle2213);

Shape2211.setGeometry(&Text2212);

Billboard2210.addChild(&Shape2211);

HAnimSite2202.addChild(Billboard2210);

HAnimSegment2201.addChild(&HAnimSite2202);

HAnimSite& HAnimSite2214 =  HAnimSite();
HAnimSite2214.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimSite2214.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimSite2214.setTranslation(new float[]{-0.172,0.558,0.017});
TouchSensor& TouchSensor2215 =  TouchSensor();
TouchSensor2215.setDescription(CString("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip"));
HAnimSite2214.addChild(&TouchSensor2215);

Shape& Shape2216 =  Shape();
Appearance& Appearance2217 =  Appearance();
Material& Material2218 =  Material();
Material2218.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2217.addChild(&Material2218);

Shape2216.addChild(&Appearance2217);

IndexedFaceSet& IndexedFaceSet2219 =  IndexedFaceSet();
IndexedFaceSet2219.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2219.setCreaseAngle(0.5);
IndexedFaceSet2219.setSolid(false);
ColorRGBA& ColorRGBA2220 =  ColorRGBA();
ColorRGBA2220.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2219.addChild(&ColorRGBA2220);

Coordinate& Coordinate2221 =  Coordinate();
Coordinate2221.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2219.setCoord(&Coordinate2221);

Shape2216.setGeometry(&IndexedFaceSet2219);

HAnimSite2214.addChild(&Shape2216);

Billboard& Billboard2222 =  Billboard();
Billboard2222.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2223 =  Shape();
Text& Text2224 =  Text();
Text2224.setString(new CString[]{CString("107")}, 1);
CFontStyle& FontStyle2225 =  CFontStyle();
FontStyle2225.setSize(0.035);
Text2224.setFontStyle(&FontStyle2225);

Shape2223.setGeometry(&Text2224);

Billboard2222.addChild(&Shape2223);

HAnimSite2214.addChild(Billboard2222);

HAnimSegment2201.addChild(&HAnimSite2214);

Shape& Shape2226 =  Shape();
LineSet& LineSet2227 =  LineSet();
LineSet2227.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2228 =  ColorRGBA();
ColorRGBA2228.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2227.addChild(&ColorRGBA2228);

Coordinate& Coordinate2229 =  Coordinate();
Coordinate2229.setPoint(new float[]{-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418}, 6);
LineSet2227.setCoord(Coordinate2229);

Shape2226.setGeometry(&LineSet2227);

HAnimSegment2201.addChild(&Shape2226);

HAnimJoint2200.addChildren(&HAnimSegment2201);

HAnimJoint2194.addChildren(&HAnimJoint2200);

HAnimJoint2188.addChildren(&HAnimJoint2194);

HAnimJoint2182.addChildren(&HAnimJoint2188);

HAnimJoint2176.addChildren(&HAnimJoint2182);

HAnimJoint2110.addChildren(&HAnimJoint2176);

HAnimJoint& HAnimJoint2230 =  HAnimJoint();
HAnimJoint2230.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint2230.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint2230.setCenter(new float[]{-0.18072,0.708525,-0.004797});
HAnimJoint2230.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2230.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2231 =  HAnimSegment();
HAnimSegment2231.X3DNode::setName(CString("r_capitate"));
HAnimSegment2231.setDEF(CString("hanim_r_capitate"));
Shape& Shape2232 =  Shape();
LineSet& LineSet2233 =  LineSet();
LineSet2233.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2234 =  ColorRGBA();
ColorRGBA2234.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2233.addChild(&ColorRGBA2234);

Coordinate& Coordinate2235 =  Coordinate();
Coordinate2235.setPoint(new float[]{-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005}, 6);
LineSet2233.setCoord(Coordinate2235);

Shape2232.setGeometry(&LineSet2233);

HAnimSegment2231.addChild(&Shape2232);

HAnimJoint2230.addChildren(&HAnimSegment2231);

HAnimJoint& HAnimJoint2236 =  HAnimJoint();
HAnimJoint2236.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint2236.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint2236.setCenter(new float[]{-0.18072,0.6858,-0.00625});
HAnimJoint2236.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2236.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2237 =  HAnimSegment();
HAnimSegment2237.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment2237.setDEF(CString("hanim_r_metacarpal_3"));
HAnimSite& HAnimSite2238 =  HAnimSite();
HAnimSite2238.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite2238.setDEF(CString("hanim_r_metacarpal_phalanx_3_pt"));
HAnimSite2238.setTranslation(new float[]{-0.2,0.665,0.016});
TouchSensor& TouchSensor2239 =  TouchSensor();
TouchSensor2239.setDescription(CString("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt"));
HAnimSite2238.addChild(&TouchSensor2239);

Shape& Shape2240 =  Shape();
Appearance& Appearance2241 =  Appearance();
Material& Material2242 =  Material();
Material2242.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2241.addChild(&Material2242);

Shape2240.addChild(&Appearance2241);

IndexedFaceSet& IndexedFaceSet2243 =  IndexedFaceSet();
IndexedFaceSet2243.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2243.setCreaseAngle(0.5);
IndexedFaceSet2243.setSolid(false);
ColorRGBA& ColorRGBA2244 =  ColorRGBA();
ColorRGBA2244.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2243.addChild(&ColorRGBA2244);

Coordinate& Coordinate2245 =  Coordinate();
Coordinate2245.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2243.setCoord(&Coordinate2245);

Shape2240.setGeometry(&IndexedFaceSet2243);

HAnimSite2238.addChild(&Shape2240);

Billboard& Billboard2246 =  Billboard();
Billboard2246.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2247 =  Shape();
Text& Text2248 =  Text();
Text2248.setString(new CString[]{CString("79")}, 1);
CFontStyle& FontStyle2249 =  CFontStyle();
FontStyle2249.setSize(0.035);
Text2248.setFontStyle(&FontStyle2249);

Shape2247.setGeometry(&Text2248);

Billboard2246.addChild(&Shape2247);

HAnimSite2238.addChild(Billboard2246);

HAnimSegment2237.addChild(&HAnimSite2238);

Shape& Shape2250 =  Shape();
LineSet& LineSet2251 =  LineSet();
LineSet2251.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2252 =  ColorRGBA();
ColorRGBA2252.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2251.addChild(&ColorRGBA2252);

Coordinate& Coordinate2253 =  Coordinate();
Coordinate2253.setPoint(new float[]{-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797}, 6);
LineSet2251.setCoord(Coordinate2253);

Shape2250.setGeometry(&LineSet2251);

HAnimSegment2237.addChild(&Shape2250);

HAnimJoint2236.addChildren(&HAnimSegment2237);

HAnimJoint& HAnimJoint2254 =  HAnimJoint();
HAnimJoint2254.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint2254.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint2254.setCenter(new float[]{-0.1833,0.63495,-0.0039});
HAnimJoint2254.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2254.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2255 =  HAnimSegment();
HAnimSegment2255.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment2255.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Shape& Shape2256 =  Shape();
LineSet& LineSet2257 =  LineSet();
LineSet2257.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2258 =  ColorRGBA();
ColorRGBA2258.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2257.addChild(&ColorRGBA2258);

Coordinate& Coordinate2259 =  Coordinate();
Coordinate2259.setPoint(new float[]{-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625}, 6);
LineSet2257.setCoord(Coordinate2259);

Shape2256.setGeometry(&LineSet2257);

HAnimSegment2255.addChild(&Shape2256);

HAnimJoint2254.addChildren(&HAnimSegment2255);

HAnimJoint& HAnimJoint2260 =  HAnimJoint();
HAnimJoint2260.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint2260.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint2260.setCenter(new float[]{-0.1813,0.6032,-0.0035});
HAnimJoint2260.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2260.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2261 =  HAnimSegment();
HAnimSegment2261.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment2261.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Shape& Shape2262 =  Shape();
LineSet& LineSet2263 =  LineSet();
LineSet2263.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2264 =  ColorRGBA();
ColorRGBA2264.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2263.addChild(&ColorRGBA2264);

Coordinate& Coordinate2265 =  Coordinate();
Coordinate2265.setPoint(new float[]{-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039}, 6);
LineSet2263.setCoord(Coordinate2265);

Shape2262.setGeometry(&LineSet2263);

HAnimSegment2261.addChild(&Shape2262);

HAnimJoint2260.addChildren(&HAnimSegment2261);

HAnimJoint& HAnimJoint2266 =  HAnimJoint();
HAnimJoint2266.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint2266.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint2266.setCenter(new float[]{-0.18029,0.5753,-0.00375});
HAnimJoint2266.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2266.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2267 =  HAnimSegment();
HAnimSegment2267.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimSegment2267.setDEF(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimSite& HAnimSite2268 =  HAnimSite();
HAnimSite2268.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimSite2268.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimSite2268.setTranslation(new float[]{-0.17,0.555,-0.006});
TouchSensor& TouchSensor2269 =  TouchSensor();
TouchSensor2269.setDescription(CString("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip"));
HAnimSite2268.addChild(&TouchSensor2269);

Shape& Shape2270 =  Shape();
Appearance& Appearance2271 =  Appearance();
Material& Material2272 =  Material();
Material2272.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2271.addChild(&Material2272);

Shape2270.addChild(&Appearance2271);

IndexedFaceSet& IndexedFaceSet2273 =  IndexedFaceSet();
IndexedFaceSet2273.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2273.setCreaseAngle(0.5);
IndexedFaceSet2273.setSolid(false);
ColorRGBA& ColorRGBA2274 =  ColorRGBA();
ColorRGBA2274.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2273.addChild(&ColorRGBA2274);

Coordinate& Coordinate2275 =  Coordinate();
Coordinate2275.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2273.setCoord(&Coordinate2275);

Shape2270.setGeometry(&IndexedFaceSet2273);

HAnimSite2268.addChild(&Shape2270);

Billboard& Billboard2276 =  Billboard();
Billboard2276.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2277 =  Shape();
Text& Text2278 =  Text();
Text2278.setString(new CString[]{CString("108")}, 1);
CFontStyle& FontStyle2279 =  CFontStyle();
FontStyle2279.setSize(0.035);
Text2278.setFontStyle(&FontStyle2279);

Shape2277.setGeometry(&Text2278);

Billboard2276.addChild(&Shape2277);

HAnimSite2268.addChild(Billboard2276);

HAnimSegment2267.addChild(&HAnimSite2268);

Shape& Shape2280 =  Shape();
LineSet& LineSet2281 =  LineSet();
LineSet2281.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2282 =  ColorRGBA();
ColorRGBA2282.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2281.addChild(&ColorRGBA2282);

Coordinate& Coordinate2283 =  Coordinate();
Coordinate2283.setPoint(new float[]{-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035}, 6);
LineSet2281.setCoord(Coordinate2283);

Shape2280.setGeometry(&LineSet2281);

HAnimSegment2267.addChild(&Shape2280);

HAnimJoint2266.addChildren(&HAnimSegment2267);

HAnimJoint2260.addChildren(&HAnimJoint2266);

HAnimJoint2254.addChildren(&HAnimJoint2260);

HAnimJoint2236.addChildren(&HAnimJoint2254);

HAnimJoint2230.addChildren(&HAnimJoint2236);

HAnimJoint2110.addChildren(&HAnimJoint2230);

HAnimJoint& HAnimJoint2284 =  HAnimJoint();
HAnimJoint2284.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint2284.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint2284.setCenter(new float[]{-0.18072,0.70583,-0.02574});
HAnimJoint2284.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2284.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2285 =  HAnimSegment();
HAnimSegment2285.X3DNode::setName(CString("r_hamate"));
HAnimSegment2285.setDEF(CString("hanim_r_hamate"));
Shape& Shape2286 =  Shape();
LineSet& LineSet2287 =  LineSet();
LineSet2287.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2288 =  ColorRGBA();
ColorRGBA2288.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2287.addChild(&ColorRGBA2288);

Coordinate& Coordinate2289 =  Coordinate();
Coordinate2289.setPoint(new float[]{-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005}, 6);
LineSet2287.setCoord(Coordinate2289);

Shape2286.setGeometry(&LineSet2287);

HAnimSegment2285.addChild(&Shape2286);

HAnimJoint2284.addChildren(&HAnimSegment2285);

HAnimJoint& HAnimJoint2290 =  HAnimJoint();
HAnimJoint2290.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint2290.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint2290.setCenter(new float[]{-0.18072,0.68625,-0.01992});
HAnimJoint2290.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2290.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2291 =  HAnimSegment();
HAnimSegment2291.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment2291.setDEF(CString("hanim_r_metacarpal_4"));
Shape& Shape2292 =  Shape();
LineSet& LineSet2293 =  LineSet();
LineSet2293.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2294 =  ColorRGBA();
ColorRGBA2294.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2293.addChild(&ColorRGBA2294);

Coordinate& Coordinate2295 =  Coordinate();
Coordinate2295.setPoint(new float[]{-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574}, 6);
LineSet2293.setCoord(Coordinate2295);

Shape2292.setGeometry(&LineSet2293);

HAnimSegment2291.addChild(&Shape2292);

HAnimJoint2290.addChildren(&HAnimSegment2291);

HAnimJoint& HAnimJoint2296 =  HAnimJoint();
HAnimJoint2296.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint2296.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint2296.setCenter(new float[]{-0.1833,0.63405,-0.02144});
HAnimJoint2296.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2296.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2297 =  HAnimSegment();
HAnimSegment2297.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment2297.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Shape& Shape2298 =  Shape();
LineSet& LineSet2299 =  LineSet();
LineSet2299.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2300 =  ColorRGBA();
ColorRGBA2300.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2299.addChild(&ColorRGBA2300);

Coordinate& Coordinate2301 =  Coordinate();
Coordinate2301.setPoint(new float[]{-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992}, 6);
LineSet2299.setCoord(Coordinate2301);

Shape2298.setGeometry(&LineSet2299);

HAnimSegment2297.addChild(&Shape2298);

HAnimJoint2296.addChildren(&HAnimSegment2297);

HAnimJoint& HAnimJoint2302 =  HAnimJoint();
HAnimJoint2302.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint2302.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint2302.setCenter(new float[]{-0.1813,0.6066,-0.02064});
HAnimJoint2302.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2302.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2303 =  HAnimSegment();
HAnimSegment2303.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment2303.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Shape& Shape2304 =  Shape();
LineSet& LineSet2305 =  LineSet();
LineSet2305.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2306 =  ColorRGBA();
ColorRGBA2306.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2305.addChild(&ColorRGBA2306);

Coordinate& Coordinate2307 =  Coordinate();
Coordinate2307.setPoint(new float[]{-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144}, 6);
LineSet2305.setCoord(Coordinate2307);

Shape2304.setGeometry(&LineSet2305);

HAnimSegment2303.addChild(&Shape2304);

HAnimJoint2302.addChildren(&HAnimSegment2303);

HAnimJoint& HAnimJoint2308 =  HAnimJoint();
HAnimJoint2308.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint2308.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint2308.setCenter(new float[]{-0.18029,0.5807,-0.01978});
HAnimJoint2308.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2308.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2309 =  HAnimSegment();
HAnimSegment2309.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimSegment2309.setDEF(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimSite& HAnimSite2310 =  HAnimSite();
HAnimSite2310.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimSite2310.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimSite2310.setTranslation(new float[]{-0.172,0.559,-0.024});
TouchSensor& TouchSensor2311 =  TouchSensor();
TouchSensor2311.setDescription(CString("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip"));
HAnimSite2310.addChild(&TouchSensor2311);

Shape& Shape2312 =  Shape();
Appearance& Appearance2313 =  Appearance();
Material& Material2314 =  Material();
Material2314.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2313.addChild(&Material2314);

Shape2312.addChild(&Appearance2313);

IndexedFaceSet& IndexedFaceSet2315 =  IndexedFaceSet();
IndexedFaceSet2315.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2315.setCreaseAngle(0.5);
IndexedFaceSet2315.setSolid(false);
ColorRGBA& ColorRGBA2316 =  ColorRGBA();
ColorRGBA2316.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2315.addChild(&ColorRGBA2316);

Coordinate& Coordinate2317 =  Coordinate();
Coordinate2317.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2315.setCoord(&Coordinate2317);

Shape2312.setGeometry(&IndexedFaceSet2315);

HAnimSite2310.addChild(&Shape2312);

Billboard& Billboard2318 =  Billboard();
Billboard2318.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2319 =  Shape();
Text& Text2320 =  Text();
Text2320.setString(new CString[]{CString("109")}, 1);
CFontStyle& FontStyle2321 =  CFontStyle();
FontStyle2321.setSize(0.035);
Text2320.setFontStyle(&FontStyle2321);

Shape2319.setGeometry(&Text2320);

Billboard2318.addChild(&Shape2319);

HAnimSite2310.addChild(Billboard2318);

HAnimSegment2309.addChild(&HAnimSite2310);

Shape& Shape2322 =  Shape();
LineSet& LineSet2323 =  LineSet();
LineSet2323.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2324 =  ColorRGBA();
ColorRGBA2324.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2323.addChild(&ColorRGBA2324);

Coordinate& Coordinate2325 =  Coordinate();
Coordinate2325.setPoint(new float[]{-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064}, 6);
LineSet2323.setCoord(Coordinate2325);

Shape2322.setGeometry(&LineSet2323);

HAnimSegment2309.addChild(&Shape2322);

HAnimJoint2308.addChildren(&HAnimSegment2309);

HAnimJoint2302.addChildren(&HAnimJoint2308);

HAnimJoint2296.addChildren(&HAnimJoint2302);

HAnimJoint2290.addChildren(&HAnimJoint2296);

HAnimJoint2284.addChildren(&HAnimJoint2290);

HAnimJoint2110.addChildren(&HAnimJoint2284);

HAnimJoint& HAnimJoint2326 =  HAnimJoint();
HAnimJoint2326.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint2326.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint2326.setCenter(new float[]{-0.18126,0.68827,-0.03278});
HAnimJoint2326.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2326.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2327 =  HAnimSegment();
HAnimSegment2327.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment2327.setDEF(CString("hanim_r_metacarpal_5"));
HAnimSite& HAnimSite2328 =  HAnimSite();
HAnimSite2328.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite2328.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite2328.setTranslation(new float[]{-0.2,0.665,-0.036});
TouchSensor& TouchSensor2329 =  TouchSensor();
TouchSensor2329.setDescription(CString("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite2328.addChild(&TouchSensor2329);

Shape& Shape2330 =  Shape();
Appearance& Appearance2331 =  Appearance();
Material& Material2332 =  Material();
Material2332.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2331.addChild(&Material2332);

Shape2330.addChild(&Appearance2331);

IndexedFaceSet& IndexedFaceSet2333 =  IndexedFaceSet();
IndexedFaceSet2333.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2333.setCreaseAngle(0.5);
IndexedFaceSet2333.setSolid(false);
ColorRGBA& ColorRGBA2334 =  ColorRGBA();
ColorRGBA2334.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2333.addChild(&ColorRGBA2334);

Coordinate& Coordinate2335 =  Coordinate();
Coordinate2335.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2333.setCoord(&Coordinate2335);

Shape2330.setGeometry(&IndexedFaceSet2333);

HAnimSite2328.addChild(&Shape2330);

Billboard& Billboard2336 =  Billboard();
Billboard2336.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2337 =  Shape();
Text& Text2338 =  Text();
Text2338.setString(new CString[]{CString("80")}, 1);
CFontStyle& FontStyle2339 =  CFontStyle();
FontStyle2339.setSize(0.035);
Text2338.setFontStyle(&FontStyle2339);

Shape2337.setGeometry(&Text2338);

Billboard2336.addChild(&Shape2337);

HAnimSite2328.addChild(Billboard2336);

HAnimSegment2327.addChild(&HAnimSite2328);

Shape& Shape2340 =  Shape();
LineSet& LineSet2341 =  LineSet();
LineSet2341.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2342 =  ColorRGBA();
ColorRGBA2342.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2341.addChild(&ColorRGBA2342);

Coordinate& Coordinate2343 =  Coordinate();
Coordinate2343.setPoint(new float[]{-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005}, 6);
LineSet2341.setCoord(Coordinate2343);

Shape2340.setGeometry(&LineSet2341);

HAnimSegment2327.addChild(&Shape2340);

HAnimJoint2326.addChildren(&HAnimSegment2327);

HAnimJoint& HAnimJoint2344 =  HAnimJoint();
HAnimJoint2344.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint2344.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint2344.setCenter(new float[]{-0.18297,0.6381,-0.0371});
HAnimJoint2344.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2344.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2345 =  HAnimSegment();
HAnimSegment2345.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment2345.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Shape& Shape2346 =  Shape();
LineSet& LineSet2347 =  LineSet();
LineSet2347.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2348 =  ColorRGBA();
ColorRGBA2348.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2347.addChild(&ColorRGBA2348);

Coordinate& Coordinate2349 =  Coordinate();
Coordinate2349.setPoint(new float[]{-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278}, 6);
LineSet2347.setCoord(Coordinate2349);

Shape2346.setGeometry(&LineSet2347);

HAnimSegment2345.addChild(&Shape2346);

HAnimJoint2344.addChildren(&HAnimSegment2345);

HAnimJoint& HAnimJoint2350 =  HAnimJoint();
HAnimJoint2350.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint2350.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint2350.setCenter(new float[]{-0.1813,0.621,-0.03715});
HAnimJoint2350.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2350.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2351 =  HAnimSegment();
HAnimSegment2351.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment2351.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Shape& Shape2352 =  Shape();
LineSet& LineSet2353 =  LineSet();
LineSet2353.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2354 =  ColorRGBA();
ColorRGBA2354.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2353.addChild(&ColorRGBA2354);

Coordinate& Coordinate2355 =  Coordinate();
Coordinate2355.setPoint(new float[]{-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371}, 6);
LineSet2353.setCoord(Coordinate2355);

Shape2352.setGeometry(&LineSet2353);

HAnimSegment2351.addChild(&Shape2352);

HAnimJoint2350.addChildren(&HAnimSegment2351);

HAnimJoint& HAnimJoint2356 =  HAnimJoint();
HAnimJoint2356.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint2356.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint2356.setCenter(new float[]{-0.18045,0.602325,-0.03697});
HAnimJoint2356.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint2356.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment2357 =  HAnimSegment();
HAnimSegment2357.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimSegment2357.setDEF(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimSite& HAnimSite2358 =  HAnimSite();
HAnimSite2358.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimSite2358.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimSite2358.setTranslation(new float[]{-0.172,0.58,-0.039});
TouchSensor& TouchSensor2359 =  TouchSensor();
TouchSensor2359.setDescription(CString("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip"));
HAnimSite2358.addChild(&TouchSensor2359);

Shape& Shape2360 =  Shape();
Appearance& Appearance2361 =  Appearance();
Material& Material2362 =  Material();
Material2362.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance2361.addChild(&Material2362);

Shape2360.addChild(&Appearance2361);

IndexedFaceSet& IndexedFaceSet2363 =  IndexedFaceSet();
IndexedFaceSet2363.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet2363.setCreaseAngle(0.5);
IndexedFaceSet2363.setSolid(false);
ColorRGBA& ColorRGBA2364 =  ColorRGBA();
ColorRGBA2364.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
IndexedFaceSet2363.addChild(&ColorRGBA2364);

Coordinate& Coordinate2365 =  Coordinate();
Coordinate2365.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet2363.setCoord(&Coordinate2365);

Shape2360.setGeometry(&IndexedFaceSet2363);

HAnimSite2358.addChild(&Shape2360);

Billboard& Billboard2366 =  Billboard();
Billboard2366.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Shape& Shape2367 =  Shape();
Text& Text2368 =  Text();
Text2368.setString(new CString[]{CString("110")}, 1);
CFontStyle& FontStyle2369 =  CFontStyle();
FontStyle2369.setSize(0.035);
Text2368.setFontStyle(&FontStyle2369);

Shape2367.setGeometry(&Text2368);

Billboard2366.addChild(&Shape2367);

HAnimSite2358.addChild(Billboard2366);

HAnimSegment2357.addChild(&HAnimSite2358);

Shape& Shape2370 =  Shape();
LineSet& LineSet2371 =  LineSet();
LineSet2371.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA2372 =  ColorRGBA();
ColorRGBA2372.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
LineSet2371.addChild(&ColorRGBA2372);

Coordinate& Coordinate2373 =  Coordinate();
Coordinate2373.setPoint(new float[]{-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715}, 6);
LineSet2371.setCoord(Coordinate2373);

Shape2370.setGeometry(&LineSet2371);

HAnimSegment2357.addChild(&Shape2370);

HAnimJoint2356.addChildren(&HAnimSegment2357);

HAnimJoint2350.addChildren(&HAnimJoint2356);

HAnimJoint2344.addChildren(&HAnimJoint2350);

HAnimJoint2326.addChildren(&HAnimJoint2344);

HAnimJoint2110.addChildren(&HAnimJoint2326);

HAnimJoint2080.addChildren(&HAnimJoint2110);

HAnimJoint2026.addChildren(&HAnimJoint2080);

HAnimJoint1972.addChildren(&HAnimJoint2026);

HAnimJoint1954.addChildren(&HAnimJoint1972);

HAnimJoint1126.addChildren(&HAnimJoint1954);

HAnimJoint1120.addChildren(&HAnimJoint1126);

HAnimJoint1114.addChildren(&HAnimJoint1120);

HAnimJoint1108.addChildren(&HAnimJoint1114);

HAnimJoint1102.addChildren(&HAnimJoint1108);

HAnimJoint1096.addChildren(&HAnimJoint1102);

HAnimJoint1090.addChildren(&HAnimJoint1096);

HAnimJoint1084.addChildren(&HAnimJoint1090);

HAnimJoint1018.addChildren(&HAnimJoint1084);

HAnimJoint988.addChildren(&HAnimJoint1018);

HAnimJoint982.addChildren(&HAnimJoint988);

HAnimJoint976.addChildren(&HAnimJoint982);

HAnimJoint970.addChildren(&HAnimJoint976);

HAnimJoint940.addChildren(&HAnimJoint970);

HAnimJoint934.addChildren(&HAnimJoint940);

HAnimJoint928.addChildren(&HAnimJoint934);

HAnimJoint862.addChildren(&HAnimJoint928);

HAnimJoint12.addChildren(&HAnimJoint862);

HAnimHumanoid11.setSkeleton(&HAnimJoint12);

Scene4.addChild(&HAnimHumanoid11);

NavigationInfo& NavigationInfo2374 =  NavigationInfo();
NavigationInfo2374.setHeadlight(false);
Scene4.addChild(&NavigationInfo2374);

Background& Background2375 =  Background();
Background2375.setDEF(CString("Background1"));
Background2375.setGroundColor(new float[]{0.5,0.5,0.5}, 3);
Background2375.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene4.addChild(&Background2375);

DirectionalLight& DirectionalLight2376 =  DirectionalLight();
DirectionalLight2376.setGlobal(true);
Scene4.addChild(&DirectionalLight2376);

Viewpoint& Viewpoint2377 =  Viewpoint();
Viewpoint2377.setCenterOfRotation(new float[]{0.0,1.0,0.0});
Viewpoint2377.setDescription(CString("JinLOA4"));
Viewpoint2377.setPosition(new float[]{0.0,1.0,3.0});
Scene4.addChild(&Viewpoint2377);

Transform& Transform2378 =  Transform();
Transform2378.setDEF(CString("Landmark000"));
//Another Parent Scene 0 0 0 landmark
Shape& Shape2379 =  Shape();
Shape2379.setDEF(CString("HAnim000Landmark"));
Appearance& Appearance2380 =  Appearance();
Material& Material2381 =  Material();
Material2381.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material2381.setEmissiveColor(new float[]{0.0,1.0,0.0});
Appearance2380.addChild(&Material2381);

Shape2379.addChild(&Appearance2380);

Sphere& Sphere2382 =  Sphere();
Sphere2382.setRadius(0.01);
Shape2379.setGeometry(&Sphere2382);

Transform2378.addChild(&Shape2379);

Scene4.addChild(&Transform2378);

X3D0.setScene(&Scene4);

//}
