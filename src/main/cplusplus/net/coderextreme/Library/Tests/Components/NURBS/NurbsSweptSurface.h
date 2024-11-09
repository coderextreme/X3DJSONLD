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
component2.setName(CString("NURBS"));
component2.setLevel(4);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("Rise and Shine"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Tue, 15 Jan 2019 11:27:45 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.2.7, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSweptSurface.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Thu, 30 Nov 2023 09:28:07 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
Background& Background10 =  Background();
Background10.setDEF(CString("Gray"));
Background10.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene9.addChild(&Background10);

Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setPosition(new float[]{3.9086,-1.0,8.05518});
Viewpoint11.setCenterOfRotation(new float[]{3.9086,-1.0,0.0});
Scene9.addChild(&Viewpoint11);

Transform& Transform12 =  Transform();
Transform12.setDEF(CString("NurbsSweptSurface"));
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDEF(CString("Rococo2"));
Material15.setAmbientIntensity(0.216064);
Material15.setDiffuseColor(new float[]{0.864256,0.833788,0.330482});
Material15.setSpecularColor(new float[]{0.0955906,0.0940254,0.0681705});
Material15.setShininess(0.078125);
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

NurbsSweptSurface& NurbsSweptSurface16 =  NurbsSweptSurface();
NurbsSweptSurface16.setCcw(false);
NurbsCurve2D& NurbsCurve2D17 =  NurbsCurve2D();
NurbsCurve2D17.setTessellation(20);
NurbsCurve2D17.setClosed(true);
NurbsCurve2D17.setControlPoint(new double[]{-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5}, 10);
NurbsSweptSurface16.setCrossSectionCurve(NurbsCurve2D17);

NurbsCurve& NurbsCurve18 =  NurbsCurve();
NurbsCurve18.setDEF(CString("_3"));
NurbsCurve18.setTessellation(40);
Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setDEF(CString("_4"));
Coordinate19.setPoint(new float[]{0.0,0.0,0.0,1.0,-0.4216,0.0,3.0,0.4216,0.0,5.0,-0.4216,0.0,7.0,0.4216,0.0,8.0,0.0,0.0}, 18);
NurbsCurve18.setControlPoint(Coordinate19);

NurbsSweptSurface16.setTrajectoryCurve(NurbsCurve18);

Shape13.setGeometry(NurbsSweptSurface16);

Transform12.addChild(&Shape13);

Scene9.addChild(&Transform12);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("NurbsSweptSurface_1"));
Transform20.setTranslation(new float[]{0.0,-2.0,0.0});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("Rococo16"));
Material23.setAmbientIntensity(0.226102);
Material23.setDiffuseColor(new float[]{0.894461,0.382776,0.904409});
Material23.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material23.setShininess(0.078125);
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

NurbsSweptSurface& NurbsSweptSurface24 =  NurbsSweptSurface();
NurbsSweptSurface24.setSolid(false);
NurbsSweptSurface24.setCcw(false);
ContourPolyline2D& ContourPolyline2D25 =  ContourPolyline2D();
ContourPolyline2D25.setControlPoint(new double[]{-0.5,0.0,0.5,0.0}, 4);
NurbsSweptSurface24.setCrossSectionCurve(ContourPolyline2D25);

NurbsCurve& NurbsCurve26 =  NurbsCurve();
NurbsCurve26.setUSE(CString("_3"));
NurbsSweptSurface24.setTrajectoryCurve(NurbsCurve26);

Shape21.setGeometry(NurbsSweptSurface24);

Transform20.addChild(&Shape21);

Scene9.addChild(&Transform20);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("_17"));
TimeSensor27.setCycleInterval(10);
TimeSensor27.setLoop(true);
Scene9.addChild(&TimeSensor27);

CoordinateInterpolator& CoordinateInterpolator28 =  CoordinateInterpolator();
CoordinateInterpolator28.setDEF(CString("_18"));
CoordinateInterpolator28.setKey(new float[]{0.0,0.5,1.0}, 3);
CoordinateInterpolator28.setKeyValue(new float[]{0.0,0.0,0.0,1.0,1.0,0.0,3.0,-1.0,0.0,5.0,1.0,0.0,7.0,-1.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,1.0,-1.0,0.0,3.0,1.0,0.0,5.0,-1.0,0.0,7.0,1.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,3.0,-1.0,0.0,5.0,1.0,0.0,7.0,-1.0,0.0,8.0,0.0,0.0}, 54);
Scene9.addChild(&CoordinateInterpolator28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("_18"));
ROUTE29.setFromField(CString("value_changed"));
ROUTE29.setToNode(CString("_4"));
ROUTE29.setToField(CString("set_point"));
Scene9.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("_17"));
ROUTE30.setFromField(CString("fraction_changed"));
ROUTE30.setToNode(CString("_18"));
ROUTE30.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE30);

X3D0.setScene(&Scene9);

//}
