//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Geospatial"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("geobubbles.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("manual"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("geo bubbles"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint& GeoViewpoint9 =  GeoViewpoint();
GeoViewpoint9.setDEF(CString("Tour"));
GeoViewpoint9.setPosition(new double[]{0.0,0.0,4.0});
GeoViewpoint9.setOrientation(new float[]{1.0,0.0,0.0,0.0});
GeoViewpoint9.setDescription(CString("Tour Views"));
Scene8.addChild(&GeoViewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl(new CString[]{CString("../resources/images/BK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
Background10.setBottomUrl(new CString[]{CString("../resources/images/BT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
Background10.setFrontUrl(new CString[]{CString("../resources/images/FR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
Background10.setLeftUrl(new CString[]{CString("../resources/images/LF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
Background10.setRightUrl(new CString[]{CString("../resources/images/RT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
Background10.setTopUrl(new CString[]{CString("../resources/images/TP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
Scene8.addChild(&Background10);

Transform& Transform11 =  Transform();
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material15.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

Scene8.addChild(&Transform11);

TimeSensor& TimeSensor16 =  TimeSensor();
TimeSensor16.setDEF(CString("TourTime"));
TimeSensor16.setCycleInterval(5);
TimeSensor16.setLoop(true);
Scene8.addChild(&TimeSensor16);

GeoPositionInterpolator& GeoPositionInterpolator17 =  GeoPositionInterpolator();
GeoPositionInterpolator17.setDEF(CString("TourPosition"));
GeoPositionInterpolator17.setKey(new float[]{0.0,1.0}, 2);
GeoPositionInterpolator17.setKeyValue(new double[]{0.0015708,0.0,4.0,0.0,0.0015708,4.0}, 6);
Scene8.addChild(&GeoPositionInterpolator17);

Script& Script18 =  Script();
Script18.setDEF(CString("RandomTourTime"));
field& field19 =  field();
field19.setName(CString("set_cycle"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFTime"));
Script18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("val"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFFloat"));
field20.setValue(CString("0"));
Script18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("positions"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFVec3d"));
field21.setValue(CString("0.0015708 0 4 0 0.0015708 4"));
Script18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("position"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("MFVec3d"));
field22.setValue(CString("0.0015708 0 4 0 0.0015708 4"));
Script18.addChild(&field22);


//Script18.setSourceCode(CString("ecmascript:")+
//_T("               function set_cycle(value) {")+
//_T("                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo")+
//_T("                        var ov = val;")+
//_T("			// Browser.print('old '+ov);")+
//_T("                        do {")+
//_T("                                val = Math.floor(Math.random()*2);")+
//_T("                                var vc = val;")+
//_T("                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);")+
//_T("                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);")+
//_T("			// Browser.println(positions[ov]);")+
//_T("			// Browser.println(positions[vc]);")+
//_T("                        position = new MFVec3d();")+
//_T("                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);")+
//_T("                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);")+
//_T("               }"));
Scene8.addChild(&Script18);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("TourTime"));
ROUTE23.setFromField(CString("cycleTime"));
ROUTE23.setToNode(CString("RandomTourTime"));
ROUTE23.setToField(CString("set_cycle"));
Scene8.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("RandomTourTime"));
ROUTE24.setFromField(CString("position"));
ROUTE24.setToNode(CString("TourPosition"));
ROUTE24.setToField(CString("keyValue"));
Scene8.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("TourTime"));
ROUTE25.setFromField(CString("fraction_changed"));
ROUTE25.setToNode(CString("TourPosition"));
ROUTE25.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("TourPosition"));
ROUTE26.setFromField(CString("geovalue_changed"));
ROUTE26.setToNode(CString("Tour"));
ROUTE26.setToField(CString("set_position"));
Scene8.addChild(&ROUTE26);

X3D0.setScene(&Scene8);

//}
