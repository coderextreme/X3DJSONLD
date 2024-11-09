#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Geometry2D"));
component2.setLevel(2);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Fri, 06 Oct 2023 17:33:14 GMT"));
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
meta6.setContent(CString("Sunrize X3D Editor V1.1.5, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Fri, 06 Oct 2023 20:12:22 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
NavigationInfo& NavigationInfo9 =  NavigationInfo();
NavigationInfo9.setHeadlight(False);
Scene8.addChild(&NavigationInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("PhongAmbient1"));
Transform10.setTranslation(new float[]{-1.5,1.5,0});
Transform& Transform11 =  Transform();
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setAmbientIntensity(1);
Appearance13.addChild(&Material14);

Shape12.addChild(&Appearance13);

Rectangle2D& Rectangle2D15 =  Rectangle2D();
Shape12.setGeometry(Rectangle2D15);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

DirectionalLight& DirectionalLight16 =  DirectionalLight();
DirectionalLight16.setAmbientIntensity(1);
Transform10.addChild(&DirectionalLight16);

Scene8.addChild(&Transform10);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("PhongAmbient0"));
Transform17.setTranslation(new float[]{-1.5,-1.5,0});
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("Rectangle2D"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setAmbientIntensity(1);
Appearance20.addChild(&Material21);

Shape19.addChild(&Appearance20);

Rectangle2D& Rectangle2D22 =  Rectangle2D();
Shape19.setGeometry(Rectangle2D22);

Transform18.addChild(&Shape19);

Transform17.addChild(&Transform18);

DirectionalLight& DirectionalLight23 =  DirectionalLight();
Transform17.addChild(&DirectionalLight23);

Scene8.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("PBRSpot"));
Transform24.setTranslation(new float[]{1.5,1.5,0});
Transform& Transform25 =  Transform();
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
PhysicalMaterial& PhysicalMaterial28 =  PhysicalMaterial();
Appearance27.addChild(&PhysicalMaterial28);

Shape26.addChild(&Appearance27);

Rectangle2D& Rectangle2D29 =  Rectangle2D();
Shape26.setGeometry(Rectangle2D29);

Transform25.addChild(&Shape26);

Transform24.addChild(&Transform25);

SpotLight& SpotLight30 =  SpotLight();
SpotLight30.setGlobal(False);
SpotLight30.setColor(new float[]{0.8,0,0});
SpotLight30.setIntensity(10);
SpotLight30.setLocation(new float[]{0,0,1});
SpotLight30.setBeamWidth(0.6);
SpotLight30.setCutOffAngle(0.7);
Transform24.addChild(&SpotLight30);

Scene8.addChild(&Transform24);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("PBRDirectional"));
Transform31.setTranslation(new float[]{1.5,-1.5,0});
Transform& Transform32 =  Transform();
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
PhysicalMaterial& PhysicalMaterial35 =  PhysicalMaterial();
Appearance34.addChild(&PhysicalMaterial35);

Shape33.addChild(&Appearance34);

Rectangle2D& Rectangle2D36 =  Rectangle2D();
Shape33.setGeometry(Rectangle2D36);

Transform32.addChild(&Shape33);

Transform31.addChild(&Transform32);

DirectionalLight& DirectionalLight37 =  DirectionalLight();
DirectionalLight37.setIntensity(10);
Transform31.addChild(&DirectionalLight37);

Scene8.addChild(&Transform31);

X3D0.setScene(&Scene8);

}
