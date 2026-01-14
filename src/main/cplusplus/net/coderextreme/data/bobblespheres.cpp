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
component2.setName(CString("X_ITE"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("Bobble Spheres Full Animation (Final Working)"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Generated from Python script"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
WorldInfo7.setTitle(CString("Bobble Spheres (PBR Full Animation)"));
Scene6.addChild(&WorldInfo7);

NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene6.addChild(&NavigationInfo8);

Background& Background9 =  Background();
Background9.setSkyAngle(new float[]{1.57}, 1);
Background9.setSkyColor(new float[]{0.15,0.25,0.8,0.9,0.9,0.9}, 6);
Scene6.addChild(&Background9);

Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setDescription(CString("Initial Camera"));
Viewpoint10.setPosition(new float[]{-70,15,-25});
Viewpoint10.setOrientation(new float[]{0.147,0.989,0.005,-1.82});
Viewpoint10.setFieldOfView(0.349);
Scene6.addChild(&Viewpoint10);

DirectionalLight& DirectionalLight11 =  DirectionalLight();
DirectionalLight11.setDirection(new float[]{-0.5,-1,-0.5});
DirectionalLight11.setIntensity(2);
Scene6.addChild(&DirectionalLight11);

//Static objects
Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{0,-1000,-1});
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
PhysicalMaterial& PhysicalMaterial15 =  PhysicalMaterial();
PhysicalMaterial15.setBaseColor(new float[]{0.5,0.5,0.5});
Appearance14.addChild(&PhysicalMaterial15);

Shape13.addChild(&Appearance14);

Sphere& Sphere16 =  Sphere();
Sphere16.setRadius(1000);
Shape13.setGeometry(&Sphere16);

Transform12.addChild(&Shape13);

Scene6.addChild(&Transform12);

Transform& Transform17 =  Transform();
Transform17.setTranslation(new float[]{0,1,0});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
PhysicalMaterial& PhysicalMaterial20 =  PhysicalMaterial();
PhysicalMaterial20.setBaseColor(new float[]{0.9,0.9,0.9});
PhysicalMaterial20.setTransmissionFactor("0.9");
PhysicalMaterial20.setRoughness(0);
PhysicalMaterial20.setIndexOfRefraction("1.5");
Appearance19.addChild(&PhysicalMaterial20);

Shape18.addChild(&Appearance19);

Sphere& Sphere21 =  Sphere();
Shape18.setGeometry(&Sphere21);

Transform17.addChild(&Shape18);

Scene6.addChild(&Transform17);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{-4,1,0});
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
PhysicalMaterial& PhysicalMaterial25 =  PhysicalMaterial();
PhysicalMaterial25.setBaseColor(new float[]{1,0.95,0.9});
PhysicalMaterial25.setTransmissionFactor("0.8");
PhysicalMaterial25.setRoughness(0.05);
PhysicalMaterial25.setIndexOfRefraction("1.1");
Appearance24.addChild(&PhysicalMaterial25);

Shape23.addChild(&Appearance24);

Sphere& Sphere26 =  Sphere();
Shape23.setGeometry(&Sphere26);

Transform22.addChild(&Shape23);

Scene6.addChild(&Transform22);

Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{4,1,0});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
PhysicalMaterial& PhysicalMaterial30 =  PhysicalMaterial();
PhysicalMaterial30.setBaseColor(new float[]{0.7,0.6,0.5});
PhysicalMaterial30.setRoughness(0.1);
Appearance29.addChild(&PhysicalMaterial30);

Shape28.addChild(&Appearance29);

Sphere& Sphere31 =  Sphere();
Shape28.setGeometry(&Sphere31);

Transform27.addChild(&Shape28);

Scene6.addChild(&Transform27);

//=== DYNAMICALLY GENERATED SPHERES ===
//Example: Matte Sphere with animated color and roughness (Using initialize())
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("T_0"));
Transform32.setTranslation(new float[]{-10.871,0.2,-10.453});
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
PhysicalMaterial& PhysicalMaterial35 =  PhysicalMaterial();
PhysicalMaterial35.setDEF(CString("M_0"));
PhysicalMaterial35.setBaseColor(new float[]{0.627,0.003,0.165});
Appearance34.addChild(&PhysicalMaterial35);

Shape33.addChild(&Appearance34);

Sphere& Sphere36 =  Sphere();
Sphere36.setRadius(0.2);
Shape33.setGeometry(&Sphere36);

Transform32.addChild(&Shape33);

Scene6.addChild(&Transform32);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("C_0"));
TimeSensor37.setCycleInterval(5.21);
TimeSensor37.setLoop(True);
Scene6.addChild(&TimeSensor37);

PositionInterpolator& PositionInterpolator38 =  PositionInterpolator();
PositionInterpolator38.setDEF(CString("PI_0"));
PositionInterpolator38.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator38.setKeyValue(new float[]{-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453}, 9);
Scene6.addChild(&PositionInterpolator38);

ColorInterpolator& ColorInterpolator39 =  ColorInterpolator();
ColorInterpolator39.setDEF(CString("CI_0"));
ColorInterpolator39.setKey(new float[]{0,0.5,1}, 3);
ColorInterpolator39.setKeyValue(new float[]{0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165}, 9);
Scene6.addChild(&ColorInterpolator39);

ScalarInterpolator& ScalarInterpolator40 =  ScalarInterpolator();
ScalarInterpolator40.setDEF(CString("SI_0"));
ScalarInterpolator40.setKey(new float[]{0,0.5,1}, 3);
ScalarInterpolator40.setKeyValue(new float[]{1,0.4,1}, 3);
Scene6.addChild(&ScalarInterpolator40);

Script& Script41 =  Script();
Script41.setDEF(CString("Animator_0"));
field& field42 =  field();
field42.setName(CString("set_color"));
field42.setType(CString("SFColor"));
field42.setAccessType(CString("inputOnly"));
Script41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_roughness"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOnly"));
Script41.addChild(&field43);

field& field44 =  field();
field44.setName(CString("targetMaterial"));
field44.setType(CString("SFNode"));
field44.setAccessType(CString("initializeOnly"));
PhysicalMaterial& PhysicalMaterial45 =  PhysicalMaterial();
PhysicalMaterial45.setUSE(CString("M_0"));
field44.addChild(PhysicalMaterial45);

Script41.addChild(&field44);


Script41.setSourceCode(CString("ecmascript:")+
_T("        var matNode = null; // Variable to hold the material node reference")+
_T("        function initialize() {")+
_T("          // This function runs AFTER the targetMaterial field is connected.")+
_T("          // We safely store the reference to the actual material node.")+
_T("          matNode = targetMaterial.value;")+
_T("        }")+
_T("        function set_color(value, timestamp) {")+
_T("          if (matNode) { // Check if the node reference was stored")+
_T("            matNode.baseColor = value;")+
_T("          }")+
_T("        }")+
_T("        function set_roughness(value, timestamp) {")+
_T("          if (matNode) {")+
_T("            matNode.roughness = value;")+
_T("          }")+
_T("        }"));
Scene6.addChild(&Script41);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("C_0"));
ROUTE46.setFromField(CString("fraction_changed"));
ROUTE46.setToNode(CString("PI_0"));
ROUTE46.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("PI_0"));
ROUTE47.setFromField(CString("value_changed"));
ROUTE47.setToNode(CString("T_0"));
ROUTE47.setToField(CString("set_translation"));
Scene6.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("C_0"));
ROUTE48.setFromField(CString("fraction_changed"));
ROUTE48.setToNode(CString("CI_0"));
ROUTE48.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("CI_0"));
ROUTE49.setFromField(CString("value_changed"));
ROUTE49.setToNode(CString("Animator_0"));
ROUTE49.setToField(CString("set_color"));
Scene6.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("C_0"));
ROUTE50.setFromField(CString("fraction_changed"));
ROUTE50.setToNode(CString("SI_0"));
ROUTE50.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("SI_0"));
ROUTE51.setFromField(CString("value_changed"));
ROUTE51.setToNode(CString("Animator_0"));
ROUTE51.setToField(CString("set_roughness"));
Scene6.addChild(&ROUTE51);

//Example: Metal Sphere with animated roughness (Using initialize())
Transform& Transform52 =  Transform();
Transform52.setDEF(CString("T_1"));
Transform52.setTranslation(new float[]{-10.411,0.2,-9.16});
Shape& Shape53 =  Shape();
Appearance& Appearance54 =  Appearance();
PhysicalMaterial& PhysicalMaterial55 =  PhysicalMaterial();
PhysicalMaterial55.setDEF(CString("M_1"));
PhysicalMaterial55.setBaseColor(new float[]{0.707,0.888,0.536});
PhysicalMaterial55.setRoughness(0.2);
Appearance54.addChild(&PhysicalMaterial55);

Shape53.addChild(&Appearance54);

Sphere& Sphere56 =  Sphere();
Sphere56.setRadius(0.2);
Shape53.setGeometry(&Sphere56);

Transform52.addChild(&Shape53);

Scene6.addChild(&Transform52);

TimeSensor& TimeSensor57 =  TimeSensor();
TimeSensor57.setDEF(CString("C_1"));
TimeSensor57.setCycleInterval(4.15);
TimeSensor57.setLoop(True);
Scene6.addChild(&TimeSensor57);

PositionInterpolator& PositionInterpolator58 =  PositionInterpolator();
PositionInterpolator58.setDEF(CString("PI_1"));
PositionInterpolator58.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator58.setKeyValue(new float[]{-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16}, 9);
Scene6.addChild(&PositionInterpolator58);

ScalarInterpolator& ScalarInterpolator59 =  ScalarInterpolator();
ScalarInterpolator59.setDEF(CString("SI_1"));
ScalarInterpolator59.setKey(new float[]{0,0.5,1}, 3);
ScalarInterpolator59.setKeyValue(new float[]{0.5,0,0.5}, 3);
Scene6.addChild(&ScalarInterpolator59);

Script& Script60 =  Script();
Script60.setDEF(CString("Animator_1"));
field& field61 =  field();
field61.setName(CString("set_roughness"));
field61.setType(CString("SFFloat"));
field61.setAccessType(CString("inputOnly"));
Script60.addChild(&field61);

field& field62 =  field();
field62.setName(CString("targetMaterial"));
field62.setType(CString("SFNode"));
field62.setAccessType(CString("initializeOnly"));
PhysicalMaterial& PhysicalMaterial63 =  PhysicalMaterial();
PhysicalMaterial63.setUSE(CString("M_1"));
field62.addChild(PhysicalMaterial63);

Script60.addChild(&field62);


Script60.setSourceCode(CString("ecmascript:")+
_T("        var matNode = null;")+
_T("        function initialize() {")+
_T("          matNode = targetMaterial.value;")+
_T("        }")+
_T("        function set_roughness(value, timestamp) {")+
_T("          if (matNode) {")+
_T("            matNode.roughness = value;")+
_T("          }")+
_T("        }"));
Scene6.addChild(&Script60);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("C_1"));
ROUTE64.setFromField(CString("fraction_changed"));
ROUTE64.setToNode(CString("PI_1"));
ROUTE64.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("PI_1"));
ROUTE65.setFromField(CString("value_changed"));
ROUTE65.setToNode(CString("T_1"));
ROUTE65.setToField(CString("set_translation"));
Scene6.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("C_1"));
ROUTE66.setFromField(CString("fraction_changed"));
ROUTE66.setToNode(CString("SI_1"));
ROUTE66.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("SI_1"));
ROUTE67.setFromField(CString("value_changed"));
ROUTE67.setToNode(CString("Animator_1"));
ROUTE67.setToField(CString("set_roughness"));
Scene6.addChild(&ROUTE67);

//The extension-based spheres were already correct and need no changes
Transform& Transform68 =  Transform();
Transform68.setDEF(CString("T_2"));
Transform68.setTranslation(new float[]{-10.155,0.2,-8.324});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
PhysicalMaterial& PhysicalMaterial71 =  PhysicalMaterial();
PhysicalMaterial71.setTransmissionFactor("0.95");
PhysicalMaterial71.setRoughness(0.05);
IORMaterialExtension& IORMaterialExtension72 =  IORMaterialExtension();
IORMaterialExtension72.setDEF(CString("IOR_2"));
IORMaterialExtension72.setIndexOfRefraction(CString("1.5"));
PhysicalMaterial71.setIORMaterialExtension(IORMaterialExtension72);

Appearance70.addChild(&PhysicalMaterial71);

Shape69.addChild(&Appearance70);

Sphere& Sphere73 =  Sphere();
Sphere73.setRadius(0.2);
Shape69.setGeometry(&Sphere73);

Transform68.addChild(&Shape69);

Scene6.addChild(&Transform68);

TimeSensor& TimeSensor74 =  TimeSensor();
TimeSensor74.setDEF(CString("C_2"));
TimeSensor74.setCycleInterval(3.88);
TimeSensor74.setLoop(True);
Scene6.addChild(&TimeSensor74);

PositionInterpolator& PositionInterpolator75 =  PositionInterpolator();
PositionInterpolator75.setDEF(CString("PI_2"));
PositionInterpolator75.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator75.setKeyValue(new float[]{-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324}, 9);
Scene6.addChild(&PositionInterpolator75);

ScalarInterpolator& ScalarInterpolator76 =  ScalarInterpolator();
ScalarInterpolator76.setDEF(CString("SI_2"));
ScalarInterpolator76.setKey(new float[]{0,0.5,1}, 3);
ScalarInterpolator76.setKeyValue(new float[]{1.4,1.7,1.4}, 3);
Scene6.addChild(&ScalarInterpolator76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("C_2"));
ROUTE77.setFromField(CString("fraction_changed"));
ROUTE77.setToNode(CString("PI_2"));
ROUTE77.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("PI_2"));
ROUTE78.setFromField(CString("value_changed"));
ROUTE78.setToNode(CString("T_2"));
ROUTE78.setToField(CString("set_translation"));
Scene6.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("C_2"));
ROUTE79.setFromField(CString("fraction_changed"));
ROUTE79.setToNode(CString("SI_2"));
ROUTE79.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("SI_2"));
ROUTE80.setFromField(CString("value_changed"));
ROUTE80.setToNode(CString("IOR_2"));
ROUTE80.setToField(CString("set_indexOfRefraction"));
Scene6.addChild(&ROUTE80);

Transform& Transform81 =  Transform();
Transform81.setDEF(CString("T_3"));
Transform81.setTranslation(new float[]{-10.518,0.2,-7.283});
Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
PhysicalMaterial& PhysicalMaterial84 =  PhysicalMaterial();
PhysicalMaterial84.setTransmissionFactor("0.95");
PhysicalMaterial84.setRoughness(0.05);
PhysicalMaterial84.setIndexOfRefraction("1.33");
IridescenceMaterialExtension& IridescenceMaterialExtension85 =  IridescenceMaterialExtension();
IridescenceMaterialExtension85.setDEF(CString("IRI_3"));
IridescenceMaterialExtension85.setIridescence(CString("1"));
IridescenceMaterialExtension85.setIridescenceIndexOfRefraction(CString("1.3"));
IridescenceMaterialExtension85.setIridescenceThicknessMinimum(CString("100"));
PhysicalMaterial84.setIridescenceMaterialExtension(IridescenceMaterialExtension85);

Appearance83.addChild(&PhysicalMaterial84);

Shape82.addChild(&Appearance83);

Sphere& Sphere86 =  Sphere();
Sphere86.setRadius(0.2);
Shape82.setGeometry(&Sphere86);

Transform81.addChild(&Shape82);

Scene6.addChild(&Transform81);

TimeSensor& TimeSensor87 =  TimeSensor();
TimeSensor87.setDEF(CString("C_3"));
TimeSensor87.setCycleInterval(6);
TimeSensor87.setLoop(True);
Scene6.addChild(&TimeSensor87);

PositionInterpolator& PositionInterpolator88 =  PositionInterpolator();
PositionInterpolator88.setDEF(CString("PI_3"));
PositionInterpolator88.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator88.setKeyValue(new float[]{-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283}, 9);
Scene6.addChild(&PositionInterpolator88);

ScalarInterpolator& ScalarInterpolator89 =  ScalarInterpolator();
ScalarInterpolator89.setDEF(CString("SI_3"));
ScalarInterpolator89.setKey(new float[]{0,0.5,1}, 3);
ScalarInterpolator89.setKeyValue(new float[]{100,700,100}, 3);
Scene6.addChild(&ScalarInterpolator89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("C_3"));
ROUTE90.setFromField(CString("fraction_changed"));
ROUTE90.setToNode(CString("PI_3"));
ROUTE90.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("PI_3"));
ROUTE91.setFromField(CString("value_changed"));
ROUTE91.setToNode(CString("T_3"));
ROUTE91.setToField(CString("set_translation"));
Scene6.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("C_3"));
ROUTE92.setFromField(CString("fraction_changed"));
ROUTE92.setToNode(CString("SI_3"));
ROUTE92.setToField(CString("set_fraction"));
Scene6.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("SI_3"));
ROUTE93.setFromField(CString("value_changed"));
ROUTE93.setToNode(CString("IRI_3"));
ROUTE93.setToField(CString("set_iridescenceThicknessMaximum"));
Scene6.addChild(&ROUTE93);

X3D0.setScene(&Scene6);

}
