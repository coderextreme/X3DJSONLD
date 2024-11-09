//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Tue, 19 Sep 2023 11:12:51 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("comment"));
meta4.setContent(CString("Rise and Shine"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.1.2, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 19 Sep 2023 13:09:55 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
HAnimHumanoid& HAnimHumanoid9 =  HAnimHumanoid();
HAnimHumanoid9.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint10 =  HAnimJoint();
HAnimJoint10.setDEF(CString("_1"));
HAnimJoint10.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint10.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimDisplacer& HAnimDisplacer11 =  HAnimDisplacer();
HAnimDisplacer11.setDEF(CString("_2"));
HAnimDisplacer11.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer11.setWeight(0.756);
HAnimDisplacer11.setDisplacements(new float[]{-3.0,0.0,0.0}, 3);
HAnimJoint10.setDisplacers(HAnimDisplacer11);

HAnimDisplacer& HAnimDisplacer12 =  HAnimDisplacer();
HAnimDisplacer12.setDEF(CString("_3"));
HAnimDisplacer12.setCoordIndex(new int32_t[]{1}, 1);
HAnimDisplacer12.setWeight(0.756);
HAnimDisplacer12.setDisplacements(new float[]{-1.0,-2.0,0.0}, 3);
HAnimJoint10.setDisplacers(HAnimDisplacer12);

HAnimDisplacer& HAnimDisplacer13 =  HAnimDisplacer();
HAnimDisplacer13.setDEF(CString("_4"));
HAnimDisplacer13.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer13.setWeight(0.756);
HAnimDisplacer13.setDisplacements(new float[]{1.0,0.0,0.0}, 3);
HAnimJoint10.setDisplacers(HAnimDisplacer13);

HAnimDisplacer& HAnimDisplacer14 =  HAnimDisplacer();
HAnimDisplacer14.setDEF(CString("_5"));
HAnimDisplacer14.setCoordIndex(new int32_t[]{3}, 1);
HAnimDisplacer14.setWeight(0.756);
HAnimDisplacer14.setDisplacements(new float[]{-1.0,2.0,0.0}, 3);
HAnimJoint10.setDisplacers(HAnimDisplacer14);

HAnimDisplacer& HAnimDisplacer15 =  HAnimDisplacer();
HAnimDisplacer15.setDEF(CString("_6"));
HAnimDisplacer15.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer15.setWeight(0.756);
HAnimDisplacer15.setDisplacements(new float[]{1.0,0.0,0.0}, 3);
HAnimJoint10.setDisplacers(HAnimDisplacer15);

HAnimJoint& HAnimJoint16 =  HAnimJoint();
HAnimJoint16.setDEF(CString("_7"));
HAnimJoint16.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint16.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimDisplacer& HAnimDisplacer17 =  HAnimDisplacer();
HAnimDisplacer17.setDEF(CString("_8"));
HAnimDisplacer17.setCoordIndex(new int32_t[]{1}, 1);
HAnimDisplacer17.setWeight(0.756);
HAnimDisplacer17.setDisplacements(new float[]{1.0,0.0,0.0}, 3);
HAnimJoint16.setDisplacers(HAnimDisplacer17);

HAnimJoint& HAnimJoint18 =  HAnimJoint();
HAnimJoint18.setDEF(CString("_9"));
HAnimJoint18.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint18.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimDisplacer& HAnimDisplacer19 =  HAnimDisplacer();
HAnimDisplacer19.setDEF(CString("_10"));
HAnimDisplacer19.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer19.setWeight(0.756);
HAnimDisplacer19.setDisplacements(new float[]{1.0,0.0,0.0}, 3);
HAnimJoint18.setDisplacers(HAnimDisplacer19);

HAnimJoint& HAnimJoint20 =  HAnimJoint();
HAnimJoint20.setDEF(CString("_11"));
HAnimJoint20.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint20.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimDisplacer& HAnimDisplacer21 =  HAnimDisplacer();
HAnimDisplacer21.setDEF(CString("_12"));
HAnimDisplacer21.setCoordIndex(new int32_t[]{3}, 1);
HAnimDisplacer21.setWeight(0.756);
HAnimDisplacer21.setDisplacements(new float[]{1.0,0.0,0.0}, 3);
HAnimJoint20.setDisplacers(HAnimDisplacer21);

HAnimJoint18.addChildren(&HAnimJoint20);

HAnimJoint16.addChildren(&HAnimJoint18);

HAnimJoint10.addChildren(&HAnimJoint16);

HAnimHumanoid9.setSkeleton(&HAnimJoint10);

HAnimJoint& HAnimJoint22 =  HAnimJoint();
HAnimJoint22.setUSE(CString("_1"));
HAnimHumanoid9.setJoints(&HAnimJoint22);

HAnimJoint& HAnimJoint23 =  HAnimJoint();
HAnimJoint23.setUSE(CString("_7"));
HAnimHumanoid9.setJoints(&HAnimJoint23);

HAnimJoint& HAnimJoint24 =  HAnimJoint();
HAnimJoint24.setUSE(CString("_9"));
HAnimHumanoid9.setJoints(&HAnimJoint24);

HAnimJoint& HAnimJoint25 =  HAnimJoint();
HAnimJoint25.setUSE(CString("_11"));
HAnimHumanoid9.setJoints(&HAnimJoint25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setDEF(CString("_13"));
Coordinate26.setPoint(new float[]{1.0,1.0,0.0,-1.0,1.0,0.0,-1.0,-1.0,0.0,1.0,-1.0,0.0}, 12);
HAnimHumanoid9.setSkinCoord(&Coordinate26);

Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
UnlitMaterial& UnlitMaterial29 =  UnlitMaterial();
UnlitMaterial29.setEmissiveColor(new float[]{0.4156863,0.1960784,0.6235294});
UnlitMaterial29.setNormalScale(0);
Appearance28.addChild(&UnlitMaterial29);

Shape27.addChild(&Appearance28);

IndexedLineSet& IndexedLineSet30 =  IndexedLineSet();
IndexedLineSet30.setCoordIndex(new int32_t[]{0,1,2,3,0,-1}, 6);
Coordinate& Coordinate31 =  Coordinate();
Coordinate31.setUSE(CString("_13"));
IndexedLineSet30.setCoord(&Coordinate31);

Shape27.setGeometry(&IndexedLineSet30);

HAnimHumanoid9.setSkin(&Shape27);

Scene8.addChild(&HAnimHumanoid9);

TimeSensor& TimeSensor32 =  TimeSensor();
TimeSensor32.setDEF(CString("_14"));
TimeSensor32.setLoop(true);
Scene8.addChild(&TimeSensor32);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(CString("_14"));
ROUTE33.setFromField(CString("fraction_changed"));
ROUTE33.setToNode(CString("_2"));
ROUTE33.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE33);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("_14"));
ROUTE34.setFromField(CString("fraction_changed"));
ROUTE34.setToNode(CString("_3"));
ROUTE34.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("_14"));
ROUTE35.setFromField(CString("fraction_changed"));
ROUTE35.setToNode(CString("_4"));
ROUTE35.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("_14"));
ROUTE36.setFromField(CString("fraction_changed"));
ROUTE36.setToNode(CString("_5"));
ROUTE36.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("_14"));
ROUTE37.setFromField(CString("fraction_changed"));
ROUTE37.setToNode(CString("_6"));
ROUTE37.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("_14"));
ROUTE38.setFromField(CString("fraction_changed"));
ROUTE38.setToNode(CString("_12"));
ROUTE38.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("_14"));
ROUTE39.setFromField(CString("fraction_changed"));
ROUTE39.setToNode(CString("_10"));
ROUTE39.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("_14"));
ROUTE40.setFromField(CString("fraction_changed"));
ROUTE40.setToNode(CString("_8"));
ROUTE40.setToField(CString("set_weight"));
Scene8.addChild(&ROUTE40);

X3D0.setScene(&Scene8);

//}
