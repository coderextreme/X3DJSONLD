#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Wed, 18 Mar 2015 02:58:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 18 Mar 2015 02:58:01 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("Schwelle"));
Transform10.setTranslation(new float[]{-30.5547,4.33352,-18.8377});
Transform10.setRotation(new float[]{0,1,0,4.71239});
Transform10.setScale(new float[]{0.471668,0.00738103,0.0652795});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setCreaseAngle(0.5);
IndexedFaceSet14.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1}, 25);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1}, 24);
IndexedFaceSet14.setCoord(&Coordinate15);

Shape11.setGeometry(&IndexedFaceSet14);

Transform10.addChild(&Shape11);

Group8.addChild(&Transform10);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("Rahmen"));
Transform16.setTranslation(new float[]{-30.5562,5.44625,-19.2761});
Transform16.setRotation(new float[]{0,-1,0,1.5708});
Transform16.setScale(new float[]{0.0342311,1.11498,0.0407675});
Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Material19.setAmbientIntensity(0);
Material19.setDiffuseColor(new float[]{0.117021,0.022394,0});
Material19.setSpecularColor(new float[]{0.117021,0.117021,0.117021});
Material19.setEmissiveColor(new float[]{0.0744681,0.0744681,0.0744681});
Material19.setShininess(0.574468);
Appearance18.addChild(&Material19);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setCreaseAngle(0.5);
IndexedFaceSet20.setCoordIndex(new int32_t[]{4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1}, 84);
Coordinate& Coordinate21 =  Coordinate();
Coordinate21.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1}, 66);
IndexedFaceSet20.setCoord(&Coordinate21);

Shape17.setGeometry(&IndexedFaceSet20);

Transform16.addChild(&Shape17);

Group8.addChild(&Transform16);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("Tuer_AnimSound"));
Transform22.setScale(new float[]{0.999993,0.999999,0.999993});
Transform22.setCenter(new float[]{-30.5078,5.43194,-18.8276});
Group& Group23 =  Group();
Group& Group24 =  Group();
Group24.setDEF(CString("open_door"));
TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(CString("Time"));
TimeSensor25.setCycleInterval(10);
TimeSensor25.setStopTime(1);
Group24.addChild(&TimeSensor25);

Group23.addChild(&Group24);

PositionInterpolator& PositionInterpolator26 =  PositionInterpolator();
PositionInterpolator26.setDEF(CString("UnnamedTransformTranslationInterp"));
PositionInterpolator26.setKey(new float[]{0,0.04,0.96,1}, 4);
PositionInterpolator26.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,0,0}, 12);
Group23.addChild(&PositionInterpolator26);

OrientationInterpolator& OrientationInterpolator27 =  OrientationInterpolator();
OrientationInterpolator27.setDEF(CString("UnnamedTransformRotationInterp"));
OrientationInterpolator27.setKey(new float[]{0,0.04,0.16,0.86,0.96,1}, 6);
OrientationInterpolator27.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0}, 24);
Group23.addChild(&OrientationInterpolator27);

OrientationInterpolator& OrientationInterpolator28 =  OrientationInterpolator();
OrientationInterpolator28.setDEF(CString("UnnamedShapeRotationInterp"));
OrientationInterpolator28.setKey(new float[]{0,0.04,0.1,0.92,0.96,1}, 6);
OrientationInterpolator28.setKeyValue(new float[]{0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944}, 24);
Group23.addChild(&OrientationInterpolator28);

PositionInterpolator& PositionInterpolator29 =  PositionInterpolator();
PositionInterpolator29.setDEF(CString("UnnamedTransformCenterInterp"));
PositionInterpolator29.setKey(new float[]{0,0.04}, 2);
PositionInterpolator29.setKeyValue(new float[]{-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393}, 6);
Group23.addChild(&PositionInterpolator29);

OrientationInterpolator& OrientationInterpolator30 =  OrientationInterpolator();
OrientationInterpolator30.setDEF(CString("UnnamedShapeScaleOrientationInterp"));
OrientationInterpolator30.setKey(new float[]{0,0.04}, 2);
OrientationInterpolator30.setKeyValue(new float[]{-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239}, 8);
Group23.addChild(&OrientationInterpolator30);

Transform22.addChild(&Group23);

TouchSensor& TouchSensor31 =  TouchSensor();
TouchSensor31.setDEF(CString("Touch"));
Transform22.addChild(&TouchSensor31);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("Tuerklinke"));
Transform32.setTranslation(new float[]{0.0519834,0,0});
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("Klinke"));
Transform33.setTranslation(new float[]{-30.639,5.87077,-18.505});
Transform33.setRotation(new float[]{0.57735,-0.57735,0.57735,2.0944});
Transform33.setScale(new float[]{0.897348,0.195632,0.122587});
Transform33.setCenter(new float[]{0.0744146,-0.506144,-0.0227777});
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setAmbientIntensity(0);
Material36.setDiffuseColor(new float[]{0.691489,0.691489,0.691489});
Material36.setSpecularColor(new float[]{1,1,1});
Material36.setShininess(0.159574);
Appearance35.addChild(&Material36);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setSolid(False);
IndexedFaceSet37.setCreaseAngle(3.14159);
IndexedFaceSet37.setCoordIndex(new int32_t[]{5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1}, 70);
Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913}, 48);
IndexedFaceSet37.setCoord(&Coordinate38);

Shape34.setGeometry(&IndexedFaceSet37);

Transform33.addChild(&Shape34);

Transform32.addChild(&Transform33);

Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{-30.574,5.29324,-18.5155});
Transform39.setRotation(new float[]{1,1.78814e-7,-1.78814e-7,1.5708});
Transform39.setScale(new float[]{0.205889,0.471041,1.20274});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setDEF(CString("_1"));
Material42.setAmbientIntensity(0.28169);
Material42.setDiffuseColor(new float[]{0.755319,0.755319,0.755319});
Material42.setSpecularColor(new float[]{1,1,1});
Material42.setEmissiveColor(new float[]{0.414894,0.414894,0.414894});
Material42.setShininess(0.159574);
Appearance41.addChild(&Material42);

ImageTexture& ImageTexture43 =  ImageTexture();
ImageTexture43.setDEF(CString("_2"));
ImageTexture43.setUrl(new CString[]{CString("door2.png")}, 1);
Appearance41.addChild(&ImageTexture43);

TextureTransform& TextureTransform44 =  TextureTransform();
TextureTransform44.setRotation(4.71239);
Appearance41.setTextureTransform(TextureTransform44);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setCreaseAngle(3.14159);
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate46 =  TextureCoordinate();
TextureCoordinate46.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet45.setTexCoord(&TextureCoordinate46);

Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1}, 12);
IndexedFaceSet45.setCoord(&Coordinate47);

Shape40.setGeometry(&IndexedFaceSet45);

Transform39.addChild(&Shape40);

Transform32.addChild(&Transform39);

Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{-30.574,5.29278,-18.5155});
Transform48.setRotation(new float[]{1,1.78814e-7,-1.78814e-7,1.5708});
Transform48.setScale(new float[]{0.205889,0.471041,1.20731});
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setUSE(CString("_1"));
Appearance50.addChild(&Material51);

ImageTexture& ImageTexture52 =  ImageTexture();
ImageTexture52.setUSE(CString("_2"));
Appearance50.addChild(&ImageTexture52);

TextureTransform& TextureTransform53 =  TextureTransform();
TextureTransform53.setRotation(1.5708);
Appearance50.setTextureTransform(TextureTransform53);

Shape49.addChild(&Appearance50);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setCreaseAngle(3.14159);
IndexedFaceSet54.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate55 =  TextureCoordinate();
TextureCoordinate55.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet54.setTexCoord(&TextureCoordinate55);

Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setPoint(new float[]{0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1}, 12);
IndexedFaceSet54.setCoord(&Coordinate56);

Shape49.setGeometry(&IndexedFaceSet54);

Transform48.addChild(&Shape49);

Transform32.addChild(&Transform48);

Transform22.addChild(&Transform32);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("Tuer_brett"));
Transform57.setTranslation(new float[]{-29.5192,5.4317,-19.2538});
Transform57.setRotation(new float[]{0,-1,0,1.5708});
Transform57.setScale(new float[]{0.424754,1.08903,0.0165043});
Transform57.setCenter(new float[]{-1.0035,-0.00275892,-0.00000153935});
Shape& Shape58 =  Shape();
Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setAmbientIntensity(1.2234);
Material60.setEmissiveColor(new float[]{0.404255,0.404255,0.404255});
Material60.setShininess(0);
Appearance59.addChild(&Material60);

ImageTexture& ImageTexture61 =  ImageTexture();
ImageTexture61.setUrl(new CString[]{CString("door1.png")}, 1);
Appearance59.addChild(&ImageTexture61);

TextureTransform& TextureTransform62 =  TextureTransform();
TextureTransform62.setScale(new float[]{1.4,1});
Appearance59.setTextureTransform(TextureTransform62);

Shape58.addChild(&Appearance59);

Box& Box63 =  Box();
Shape58.setGeometry(&Box63);

Transform57.addChild(&Shape58);

Transform22.addChild(&Transform57);

Sound& Sound64 =  Sound();
Sound64.setDEF(CString("Sound1"));
Sound64.setLocation(new float[]{-30.5078,5.43195,-18.8276});
AudioClip& AudioClip65 =  AudioClip();
AudioClip65.setDEF(CString("door_snd"));
AudioClip65.setDescription(CString("Start mit Trklick"));
AudioClip65.setUrl(new CString[]{CString("door_snd.aiff")}, 1);
Sound64.setSource(AudioClip65);

Transform22.addChild(&Sound64);

Group8.addChild(&Transform22);

Viewpoint& Viewpoint66 =  Viewpoint();
Viewpoint66.setDEF(CString("VP1"));
Viewpoint66.setDescription(CString("viewpoint1"));
Viewpoint66.setPosition(new float[]{-32.9477,5.71937,-19.2926});
Viewpoint66.setOrientation(new float[]{0.0810581,0.991517,0.101609,4.48266});
Group8.addChild(&Viewpoint66);

Scene7.addChild(&Group8);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Touch"));
ROUTE67.setFromField(CString("touchTime"));
ROUTE67.setToNode(CString("Time"));
ROUTE67.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Time"));
ROUTE68.setFromField(CString("fraction_changed"));
ROUTE68.setToNode(CString("UnnamedTransformTranslationInterp"));
ROUTE68.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Time"));
ROUTE69.setFromField(CString("fraction_changed"));
ROUTE69.setToNode(CString("UnnamedTransformRotationInterp"));
ROUTE69.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("Time"));
ROUTE70.setFromField(CString("fraction_changed"));
ROUTE70.setToNode(CString("UnnamedShapeRotationInterp"));
ROUTE70.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Time"));
ROUTE71.setFromField(CString("fraction_changed"));
ROUTE71.setToNode(CString("UnnamedTransformCenterInterp"));
ROUTE71.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("Time"));
ROUTE72.setFromField(CString("fraction_changed"));
ROUTE72.setToNode(CString("UnnamedShapeScaleOrientationInterp"));
ROUTE72.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("UnnamedShapeRotationInterp"));
ROUTE73.setFromField(CString("value_changed"));
ROUTE73.setToNode(CString("Klinke"));
ROUTE73.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("UnnamedShapeScaleOrientationInterp"));
ROUTE74.setFromField(CString("value_changed"));
ROUTE74.setToNode(CString("Klinke"));
ROUTE74.setToField(CString("set_scaleOrientation"));
Scene7.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("Touch"));
ROUTE75.setFromField(CString("touchTime"));
ROUTE75.setToNode(CString("door_snd"));
ROUTE75.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("UnnamedTransformTranslationInterp"));
ROUTE76.setFromField(CString("value_changed"));
ROUTE76.setToNode(CString("Tuer_AnimSound"));
ROUTE76.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("UnnamedTransformRotationInterp"));
ROUTE77.setFromField(CString("value_changed"));
ROUTE77.setToNode(CString("Tuer_AnimSound"));
ROUTE77.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("UnnamedTransformCenterInterp"));
ROUTE78.setFromField(CString("value_changed"));
ROUTE78.setToNode(CString("Tuer_AnimSound"));
ROUTE78.setToField(CString("set_center"));
Scene7.addChild(&ROUTE78);

X3D0.setScene(&Scene7);

}
