#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{-1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(3, new int32_t[]{24, 10, 10});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{200});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(1, new int32_t[]{10});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(5, new int32_t[]{0, 50, 100, 150, 200});
MFInt32 MFInt325 =  MFInt32();
MFInt325.setValue(3, new int32_t[]{73, 10, 41});
MFInt32 MFInt326 =  MFInt32();
MFInt326.setValue(6, new int32_t[]{5, 5, 5, 5, 0, 5});
MFInt32 MFInt327 =  MFInt32();
MFInt327.setValue(6, new int32_t[]{0, 0, -5, -1, 0, -6});
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
meta3.setContent(CString("Thu, 26 Mar 2015 02:16:06 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V2.0.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/Geometry3D.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Thu, 20 Oct 2016 10:58:37 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("Geometry3D"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("NavigationInfo"));
MetadataSet11.setDEF(CString("NavigationInfo"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString12 =  MetadataString();
MetadataString12.X3DNode::setName(CString("type"));
MetadataString12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString12.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet11.setValue((X3DNode *)&MetadataString12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Viewpoint"));
MetadataSet13.setDEF(CString("Viewpoint"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("position"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{1.12246000766754,-6.40655994415283,10.8308000564575}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.784070753175274,-0.334371998182479,-0.522903835180633,0.843905866146088}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{7.15990018844604,1.81043994426727,-0.955601990222931}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Selection"));
MetadataSet17.setDEF(CString("Selection"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("children"));
MetadataSet18.setDEF(CString("children"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
CFontStyle& FontStyle19 =  CFontStyle();
FontStyle19.setDEF(CString("_1"));
FontStyle19.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle19.setJustify(new CString[]{CString("END")}, 1);
MetadataSet18.setFontStyle(&FontStyle19);

MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("previous"));
MetadataSet20.setDEF(CString("previous"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet20);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("LayerSet"));
MetadataSet21.setDEF(CString("LayerSet"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger22 =  MetadataInteger();
MetadataInteger22.X3DNode::setName(CString("activeLayer"));
MetadataInteger22.setDEF(CString("activeLayer"));
MetadataInteger22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger22.setValue(MFInt320);
MetadataSet21.setValue((X3DNode *)&MetadataInteger22);

MetadataSet10.setValue((X3DNode *)&MetadataSet21);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

LayerSet& LayerSet23 =  LayerSet();
LayerSet23.setActiveLayer(1);
LayerSet23.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer24 =  Layer();
Layer24.setDEF(CString("World"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("Titania"));
MetadataSet25.setDEF(CString("Titania_1"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("AngleGrid"));
MetadataSet26.setDEF(CString("AngleGrid"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean27 =  MetadataBoolean();
MetadataBoolean27.X3DNode::setName(CString("enabled"));
MetadataBoolean27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean27.setValue(new boolean[]{False});
MetadataSet26.setValue((X3DNode *)&MetadataBoolean27);

MetadataSet25.setValue((X3DNode *)&MetadataSet26);

MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("Grid"));
MetadataSet28.setDEF(CString("Grid"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean29 =  MetadataBoolean();
MetadataBoolean29.X3DNode::setName(CString("enabled"));
MetadataBoolean29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean29.setValue(new boolean[]{True});
MetadataSet28.setValue((X3DNode *)&MetadataBoolean29);

MetadataFloat& MetadataFloat30 =  MetadataFloat();
MetadataFloat30.X3DNode::setName(CString("rotation"));
MetadataFloat30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat30.setValue(new float[]{1,0,0,1.5708}, 4);
MetadataSet28.setValue((X3DNode *)&MetadataFloat30);

MetadataFloat& MetadataFloat31 =  MetadataFloat();
MetadataFloat31.X3DNode::setName(CString("translation"));
MetadataFloat31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat31.setValue(new float[]{9,2,0}, 3);
MetadataSet28.setValue((X3DNode *)&MetadataFloat31);

MetadataInteger& MetadataInteger32 =  MetadataInteger();
MetadataInteger32.X3DNode::setName(CString("dimension"));
MetadataInteger32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger32.setValue(MFInt321);
MetadataSet28.setValue((X3DNode *)&MetadataInteger32);

MetadataSet25.setValue((X3DNode *)&MetadataSet28);

Layer24.setMetadata(&MetadataSet25);

Background& Background33 =  Background();
Background33.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer24.addChild(&Background33);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDescription(CString("Home"));
Viewpoint34.setPosition(new float[]{1.12246,-6.40656,10.8308});
Viewpoint34.setOrientation(new float[]{0.784070780208918,-0.334371906268713,-0.522903853419351,0.843906});
Viewpoint34.setCenterOfRotation(new float[]{7.1599,1.81044,-0.955602});
Layer24.addChild(&Viewpoint34);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Geometry3D"));
Group& Group36 =  Group();
Group36.setDEF(CString("RotateAnim"));
MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("Animation"));
MetadataSet37.setDEF(CString("Animation"));
MetadataInteger& MetadataInteger38 =  MetadataInteger();
MetadataInteger38.X3DNode::setName(CString("duration"));
MetadataInteger38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger38.setValue(MFInt322);
MetadataSet37.setValue((X3DNode *)&MetadataInteger38);

MetadataInteger& MetadataInteger39 =  MetadataInteger();
MetadataInteger39.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger39.setValue(MFInt323);
MetadataSet37.setValue((X3DNode *)&MetadataInteger39);

Group36.setMetadata(&MetadataSet37);

TimeSensor& TimeSensor40 =  TimeSensor();
TimeSensor40.setDEF(CString("_2"));
TimeSensor40.setCycleInterval(20);
TimeSensor40.setLoop(True);
TimeSensor40.setStartTime(1443559776.14588);
TimeSensor40.setStopTime(1443559776.14586);
Group36.addChild(&TimeSensor40);

OrientationInterpolator& OrientationInterpolator41 =  OrientationInterpolator();
OrientationInterpolator41.setDEF(CString("BoxRotationInterpolator"));
OrientationInterpolator41.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator41.setKeyValue(new float[]{0,0,1,0,-4.33648999997153e-9,-0.00000362373999997621,0.999999999993434,4.71239,-1.63447999998926e-9,-0.00000362581999997617,0.999999999993427,3.14159,-1.08247999999288e-10,-0.00000362608999997616,0.999999999993426,1.5708,0,0,1,0}, 20);
MetadataSet& MetadataSet42 =  MetadataSet();
MetadataSet42.X3DNode::setName(CString("Interpolator"));
MetadataSet42.setDEF(CString("Interpolator"));
MetadataInteger& MetadataInteger43 =  MetadataInteger();
MetadataInteger43.X3DNode::setName(CString("key"));
MetadataInteger43.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger43.setValue(MFInt324);
MetadataSet42.setValue((X3DNode *)&MetadataInteger43);

MetadataDouble& MetadataDouble44 =  MetadataDouble();
MetadataDouble44.X3DNode::setName(CString("keyValue"));
MetadataDouble44.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble44.setValue(new double[]{0,0,1,0,-4.33648983388935e-9,-0.00000362374180440383,1,4.71238899230957,-1.63447577694598e-9,-0.00000362582022717106,1,3.14159274101257,-1.08248028596325e-10,-0.00000362608693649236,1,1.570796251297,0,0,1,0}, 20);
MetadataSet42.setValue((X3DNode *)&MetadataDouble44);

MetadataString& MetadataString45 =  MetadataString();
MetadataString45.X3DNode::setName(CString("keyType"));
MetadataString45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString45.setValue(new CString[]{CString(", "), CString("LINEAR, "), CString("LINEAR, "), CString("LINEAR, "), CString("LINEARLINEAR")}, 5);
MetadataSet42.setValue((X3DNode *)&MetadataString45);

OrientationInterpolator41.setMetadata(&MetadataSet42);

Group36.addChild(&OrientationInterpolator41);

Transform35.addChild(&Group36);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("Box"));
Transform46.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor47 =  TouchSensor();
TouchSensor47.setDEF(CString("_3"));
TouchSensor47.setDescription(CString("Box"));
Transform46.addChild(&TouchSensor47);

Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Appearance49.setDEF(CString("Grey"));
Material& Material50 =  Material();
Material50.setDEF(CString("Rococo2"));
Material50.setAmbientIntensity(0.216064);
Material50.setDiffuseColor(new float[]{0.864256,0.833788,0.330482});
Material50.setSpecularColor(new float[]{0.0955906,0.0940254,0.0681705});
Material50.setShininess(0.078125);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Box& Box51 =  Box();
Box51.setDEF(CString("Box_1"));
Box51.setSize(new float[]{1,1,1});
Shape48.setGeometry(&Box51);

Transform46.addChild(&Shape48);

Transform35.addChild(&Transform46);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("Sphere"));
Transform52.setTranslation(new float[]{3,0,0});
Transform52.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor53 =  TouchSensor();
TouchSensor53.setDEF(CString("_4"));
TouchSensor53.setDescription(CString("Sphere"));
Transform52.addChild(&TouchSensor53);

Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Appearance55.setDEF(CString("Grey_1"));
Material& Material56 =  Material();
Material56.setDEF(CString("Rococo7"));
Material56.setAmbientIntensity(0.187004);
Material56.setDiffuseColor(new float[]{0.748016,0.467103,0.261641});
Material56.setSpecularColor(new float[]{0.251984,0.251984,0.251984});
Material56.setShininess(0.872727);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Sphere& Sphere57 =  Sphere();
Sphere57.setDEF(CString("Sphere_1"));
Shape54.setGeometry(&Sphere57);

Transform52.addChild(&Shape54);

Transform35.addChild(&Transform52);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("Cylinder"));
Transform58.setTranslation(new float[]{6,0,0});
Transform58.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor59 =  TouchSensor();
TouchSensor59.setDEF(CString("_5"));
TouchSensor59.setDescription(CString("Cylinder"));
Transform58.addChild(&TouchSensor59);

Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Appearance61.setDEF(CString("Grey_2"));
Material& Material62 =  Material();
Material62.setDEF(CString("Rococo13"));
Material62.setAmbientIntensity(0.187004);
Material62.setDiffuseColor(new float[]{0.748016,0.272334,0.406842});
Material62.setSpecularColor(new float[]{0.251984,0.251984,0.251984});
Material62.setShininess(0.6);
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

Cylinder& Cylinder63 =  Cylinder();
Cylinder63.setDEF(CString("Cylinder_1"));
Shape60.setGeometry(&Cylinder63);

Transform58.addChild(&Shape60);

Transform35.addChild(&Transform58);

Transform& Transform64 =  Transform();
Transform64.setDEF(CString("Cone"));
Transform64.setTranslation(new float[]{9,0,0});
Transform64.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor65 =  TouchSensor();
TouchSensor65.setDEF(CString("_6"));
TouchSensor65.setDescription(CString("Cone"));
Transform64.addChild(&TouchSensor65);

Shape& Shape66 =  Shape();
Appearance& Appearance67 =  Appearance();
Appearance67.setDEF(CString("Grey_3"));
Material& Material68 =  Material();
Material68.setDEF(CString("Rococo18"));
Material68.setAmbientIntensity(0.181818);
Material68.setDiffuseColor(new float[]{0.630959,0.368649,0.745454});
Material68.setSpecularColor(new float[]{0.278788,0.278788,0.278788});
Material68.setShininess(0.0909091);
Appearance67.addChild(&Material68);

Shape66.addChild(&Appearance67);

Cone& Cone69 =  Cone();
Cone69.setDEF(CString("Cone_1"));
Shape66.setGeometry(&Cone69);

Transform64.addChild(&Shape66);

Transform35.addChild(&Transform64);

Transform& Transform70 =  Transform();
Transform70.setDEF(CString("Extrusion"));
Transform70.setTranslation(new float[]{12,0,0});
Transform70.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
Transform70.setScale(new float[]{0.5,0.5,0.5});
TouchSensor& TouchSensor71 =  TouchSensor();
TouchSensor71.setDEF(CString("_7"));
TouchSensor71.setDescription(CString("Extrusion"));
Transform70.addChild(&TouchSensor71);

Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Appearance73.setDEF(CString("Grey_4"));
Material& Material74 =  Material();
Material74.setDEF(CString("Rococo19"));
Material74.setAmbientIntensity(0.187004);
Material74.setDiffuseColor(new float[]{0.412056,0.422504,0.748016});
Material74.setSpecularColor(new float[]{0.290909,0.290909,0.290909});
Material74.setShininess(0.787879);
Appearance73.addChild(&Material74);

Shape72.addChild(&Appearance73);

Extrusion& Extrusion75 =  Extrusion();
Extrusion75.setDEF(CString("Extrusion_1"));
Extrusion75.setBeginCap(False);
Extrusion75.setEndCap(False);
Extrusion75.setCcw(False);
Extrusion75.setCreaseAngle(3.14159);
Extrusion75.setCrossSection(new float[]{1,0,0.92388,0.382683,0.707107,0.707106,0.382684,0.923879,0,1,-0.382682,0.92388,-0.707105,0.707108,-0.923879,0.382685,-1,0,-0.923881,-0.382681,-0.707109,-0.707105,-0.382687,-0.923878,0,-1,0.38268,-0.923881,0.707104,-0.70711,0.923878,-0.382688,1,0}, 34);
Extrusion75.setOrientation(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 68);
Extrusion75.setScale(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 34);
Extrusion75.setSpine(new float[]{1,0,0,0.92388,0.382683,0,0.707107,0.707106,0,0.382684,0.923879,0,0,1,0,-0.382682,0.92388,0,-0.707105,0.707108,0,-0.923879,0.382685,0,-1,0,0,-0.923881,-0.382681,0,-0.707109,-0.707105,0,-0.382687,-0.923878,0,0,-1,0,0.38268,-0.923881,0,0.707104,-0.70711,0,0.923878,-0.382688,0,1,0,0}, 51);
Shape72.setGeometry(&Extrusion75);

Transform70.addChild(&Shape72);

Transform35.addChild(&Transform70);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("ElevationGrid"));
Transform76.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
Transform76.setCenter(new float[]{15,5.96046e-8,-0.00000369549});
TouchSensor& TouchSensor77 =  TouchSensor();
TouchSensor77.setDEF(CString("_8"));
TouchSensor77.setDescription(CString("ElevationGrid"));
Transform76.addChild(&TouchSensor77);

Transform& Transform78 =  Transform();
Transform78.setDEF(CString("ElevationGrid_1"));
Transform78.setTranslation(new float[]{14,1,0});
Transform78.setRotation(new float[]{1,0,0,1.5708});
Shape& Shape79 =  Shape();
Appearance& Appearance80 =  Appearance();
Appearance80.setDEF(CString("Grey_5"));
Material& Material81 =  Material();
Material81.setDEF(CString("Rococo25"));
Material81.setAmbientIntensity(0.187004);
Material81.setDiffuseColor(new float[]{0.261641,0.748016,0.725916});
Material81.setSpecularColor(new float[]{0.490909,0.490909,0.490909});
Material81.setShininess(0.593939);
Appearance80.addChild(&Material81);

Shape79.addChild(&Appearance80);

ElevationGrid& ElevationGrid82 =  ElevationGrid();
ElevationGrid82.setDEF(CString("ElevationGrid_2"));
ElevationGrid82.setXDimension(3);
ElevationGrid82.setZDimension(3);
ElevationGrid82.setSolid(False);
ElevationGrid82.setCreaseAngle(3.14159);
ElevationGrid82.setHeight(new float[]{0,0,0,0,1,0,0,0,0}, 9);
Shape79.setGeometry(ElevationGrid82);

Transform78.addChild(&Shape79);

Transform76.addChild(&Transform78);

Transform35.addChild(&Transform76);

Transform& Transform83 =  Transform();
Transform83.setDEF(CString("IndexedFaceSet"));
Transform83.setTranslation(new float[]{18,0,0});
Transform83.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor84 =  TouchSensor();
TouchSensor84.setDEF(CString("_9"));
TouchSensor84.setDescription(CString("IndexedFaceSet"));
Transform83.addChild(&TouchSensor84);

Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Appearance86.setDEF(CString("Grey_6"));
Material& Material87 =  Material();
Material87.setDEF(CString("Rococo29"));
Material87.setAmbientIntensity(0.187004);
Material87.setDiffuseColor(new float[]{0.360748,0.748016,0.394778});
Material87.setSpecularColor(new float[]{0.345455,0.345455,0.345455});
Material87.setShininess(0.612121);
Appearance86.addChild(&Material87);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet88 =  IndexedFaceSet();
IndexedFaceSet88.setDEF(CString("IndexedFaceSet_1"));
IndexedFaceSet88.setSolid(False);
IndexedFaceSet88.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate89 =  Coordinate();
Coordinate89.setPoint(new float[]{-1,-1,0,1,-1,0,0,1,0}, 9);
IndexedFaceSet88.setCoord(&Coordinate89);

Shape85.setGeometry(&IndexedFaceSet88);

Transform83.addChild(&Shape85);

Transform35.addChild(&Transform83);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("Box_2"));
Transform90.setTranslation(new float[]{0,3,0});
Transform90.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setUSE(CString("_3"));
Transform90.addChild(&TouchSensor91);

Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
Appearance93.setDEF(CString("Image"));
Material& Material94 =  Material();
Appearance93.addChild(&Material94);

ImageTexture& ImageTexture95 =  ImageTexture();
ImageTexture95.setUrl(new CString[]{CString("../images/test.png")}, 1);
Appearance93.addChild(&ImageTexture95);

Shape92.addChild(&Appearance93);

Box& Box96 =  Box();
Box96.setUSE(CString("Box_1"));
Shape92.setGeometry(&Box96);

Transform90.addChild(&Shape92);

Transform35.addChild(&Transform90);

Transform& Transform97 =  Transform();
Transform97.setDEF(CString("Sphere_2"));
Transform97.setTranslation(new float[]{3,3,0});
Transform97.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor98 =  TouchSensor();
TouchSensor98.setUSE(CString("_4"));
Transform97.addChild(&TouchSensor98);

Shape& Shape99 =  Shape();
Appearance& Appearance100 =  Appearance();
Appearance100.setUSE(CString("Image"));
Shape99.addChild(&Appearance100);

Sphere& Sphere101 =  Sphere();
Sphere101.setUSE(CString("Sphere_1"));
Shape99.setGeometry(&Sphere101);

Transform97.addChild(&Shape99);

Transform35.addChild(&Transform97);

Transform& Transform102 =  Transform();
Transform102.setDEF(CString("Cylinder_2"));
Transform102.setTranslation(new float[]{6,3,0});
Transform102.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor103 =  TouchSensor();
TouchSensor103.setUSE(CString("_5"));
Transform102.addChild(&TouchSensor103);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Appearance105.setUSE(CString("Image"));
Shape104.addChild(&Appearance105);

Cylinder& Cylinder106 =  Cylinder();
Cylinder106.setUSE(CString("Cylinder_1"));
Shape104.setGeometry(&Cylinder106);

Transform102.addChild(&Shape104);

Transform35.addChild(&Transform102);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("Cone_2"));
Transform107.setTranslation(new float[]{9,3,0});
Transform107.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor108 =  TouchSensor();
TouchSensor108.setUSE(CString("_6"));
Transform107.addChild(&TouchSensor108);

Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Appearance110.setUSE(CString("Image"));
Shape109.addChild(&Appearance110);

Cone& Cone111 =  Cone();
Cone111.setUSE(CString("Cone_1"));
Shape109.setGeometry(&Cone111);

Transform107.addChild(&Shape109);

Transform35.addChild(&Transform107);

Transform& Transform112 =  Transform();
Transform112.setDEF(CString("Extrusion_2"));
Transform112.setTranslation(new float[]{12,3,0});
Transform112.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
Transform112.setScale(new float[]{0.5,0.5,0.5});
TouchSensor& TouchSensor113 =  TouchSensor();
TouchSensor113.setUSE(CString("_7"));
Transform112.addChild(&TouchSensor113);

Shape& Shape114 =  Shape();
Appearance& Appearance115 =  Appearance();
Appearance115.setUSE(CString("Image"));
Shape114.addChild(&Appearance115);

Extrusion& Extrusion116 =  Extrusion();
Extrusion116.setUSE(CString("Extrusion_1"));
Shape114.setGeometry(&Extrusion116);

Transform112.addChild(&Shape114);

Transform35.addChild(&Transform112);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("ElevationGrid_3"));
Transform117.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
Transform117.setCenter(new float[]{15,3,-0.00000369549});
TouchSensor& TouchSensor118 =  TouchSensor();
TouchSensor118.setUSE(CString("_8"));
Transform117.addChild(&TouchSensor118);

Transform& Transform119 =  Transform();
Transform119.setDEF(CString("ElevationGrid_4"));
Transform119.setTranslation(new float[]{14,4,0});
Transform119.setRotation(new float[]{1,0,0,1.5708});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Appearance121.setUSE(CString("Image"));
Shape120.addChild(&Appearance121);

ElevationGrid& ElevationGrid122 =  ElevationGrid();
ElevationGrid122.setUSE(CString("ElevationGrid_2"));
Shape120.setGeometry(ElevationGrid122);

Transform119.addChild(&Shape120);

Transform117.addChild(&Transform119);

Transform35.addChild(&Transform117);

Transform& Transform123 =  Transform();
Transform123.setDEF(CString("IndexedFaceSet_2"));
Transform123.setTranslation(new float[]{18,3,0});
Transform123.setRotation(new float[]{-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702});
TouchSensor& TouchSensor124 =  TouchSensor();
TouchSensor124.setUSE(CString("_9"));
Transform123.addChild(&TouchSensor124);

Shape& Shape125 =  Shape();
Appearance& Appearance126 =  Appearance();
Appearance126.setUSE(CString("Image"));
Shape125.addChild(&Appearance126);

IndexedFaceSet& IndexedFaceSet127 =  IndexedFaceSet();
IndexedFaceSet127.setUSE(CString("IndexedFaceSet_1"));
Shape125.setGeometry(&IndexedFaceSet127);

Transform123.addChild(&Shape125);

Transform35.addChild(&Transform123);

Layer24.addChild(&Transform35);

LayerSet23.addChild(&Layer24);

Layer& Layer128 =  Layer();
Layer128.setDEF(CString("HUD"));
MetadataSet& MetadataSet129 =  MetadataSet();
MetadataSet129.X3DNode::setName(CString("Titania"));
MetadataSet129.setDEF(CString("Titania_2"));
MetadataSet129.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet130 =  MetadataSet();
MetadataSet130.X3DNode::setName(CString("Grid"));
MetadataSet130.setDEF(CString("Grid_1"));
MetadataSet130.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean131 =  MetadataBoolean();
MetadataBoolean131.X3DNode::setName(CString("enabled"));
MetadataBoolean131.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean131.setValue(new boolean[]{True});
MetadataSet130.setValue((X3DNode *)&MetadataBoolean131);

MetadataFloat& MetadataFloat132 =  MetadataFloat();
MetadataFloat132.X3DNode::setName(CString("rotation"));
MetadataFloat132.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat132.setValue(new float[]{1,0,0,1.5708}, 4);
MetadataSet130.setValue((X3DNode *)&MetadataFloat132);

MetadataFloat& MetadataFloat133 =  MetadataFloat();
MetadataFloat133.X3DNode::setName(CString("scale"));
MetadataFloat133.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat133.setValue(new float[]{0.049,0.049,0.049}, 3);
MetadataSet130.setValue((X3DNode *)&MetadataFloat133);

MetadataInteger& MetadataInteger134 =  MetadataInteger();
MetadataInteger134.X3DNode::setName(CString("dimension"));
MetadataInteger134.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger134.setValue(MFInt325);
MetadataSet130.setValue((X3DNode *)&MetadataInteger134);

MetadataInteger& MetadataInteger135 =  MetadataInteger();
MetadataInteger135.X3DNode::setName(CString("majorLineEvery"));
MetadataInteger135.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger135.setValue(MFInt326);
MetadataSet130.setValue((X3DNode *)&MetadataInteger135);

MetadataInteger& MetadataInteger136 =  MetadataInteger();
MetadataInteger136.X3DNode::setName(CString("majorLineOffset"));
MetadataInteger136.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger136.setValue(MFInt327);
MetadataSet130.setValue((X3DNode *)&MetadataInteger136);

MetadataFloat& MetadataFloat137 =  MetadataFloat();
MetadataFloat137.X3DNode::setName(CString("lineColor"));
MetadataFloat137.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat137.setValue(new float[]{1,0.7,0.7,0.0588235}, 4);
MetadataSet130.setValue((X3DNode *)&MetadataFloat137);

MetadataSet129.setValue((X3DNode *)&MetadataSet130);

MetadataSet& MetadataSet138 =  MetadataSet();
MetadataSet138.X3DNode::setName(CString("AngleGrid"));
MetadataSet138.setDEF(CString("AngleGrid_1"));
MetadataSet138.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean139 =  MetadataBoolean();
MetadataBoolean139.X3DNode::setName(CString("enabled"));
MetadataBoolean139.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean139.setValue(new boolean[]{False});
MetadataSet138.setValue((X3DNode *)&MetadataBoolean139);

MetadataSet129.setValue((X3DNode *)&MetadataSet138);

Layer128.setMetadata(&MetadataSet129);

OrthoViewpoint& OrthoViewpoint140 =  OrthoViewpoint();
Layer128.addChild(&OrthoViewpoint140);

Transform& Transform141 =  Transform();
Transform141.setDEF(CString("Header"));
Transform141.setTranslation(new float[]{-1.6905,0.955504,-1});
Transform141.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape142 =  Shape();
Appearance& Appearance143 =  Appearance();
Material& Material144 =  Material();
Appearance143.addChild(&Material144);

Shape142.addChild(&Appearance143);

Text& Text145 =  Text();
Text145.setString(new CString[]{CString(" Geometry3D")}, 1);
Text145.setSolid(True);
CFontStyle& FontStyle146 =  CFontStyle();
FontStyle146.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle146.setSize(1.61);
FontStyle146.setJustify(new CString[]{CString(", "), CString("BEGINBEGIN")}, 2);
Text145.setFontStyle(&FontStyle146);

Shape142.setGeometry(&Text145);

Transform141.addChild(&Shape142);

Layer128.addChild(&Transform141);

Group& Group147 =  Group();
Group147.setDEF(CString("ShadingMenu"));
Script& Script148 =  Script();
Script148.setDEF(CString("ShadingScript"));
field& field149 =  field();
field149.setName(CString("set_pointset"));
field149.setAccessType(CString("inputOnly"));
field149.setType(CString("SFTime"));
Script148.addChild(&field149);

field& field150 =  field();
field150.setName(CString("set_wireframe"));
field150.setAccessType(CString("inputOnly"));
field150.setType(CString("SFTime"));
Script148.addChild(&field150);

field& field151 =  field();
field151.setName(CString("set_flat"));
field151.setAccessType(CString("inputOnly"));
field151.setType(CString("SFTime"));
Script148.addChild(&field151);

field& field152 =  field();
field152.setName(CString("set_gouraud"));
field152.setAccessType(CString("inputOnly"));
field152.setType(CString("SFTime"));
Script148.addChild(&field152);

field& field153 =  field();
field153.setName(CString("set_phong"));
field153.setAccessType(CString("inputOnly"));
field153.setType(CString("SFTime"));
Script148.addChild(&field153);


Script148.setSourceCode(CString("javascript:")+
_T("function set_pointset ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"POINTSET\");")+
_T("	Browser .setDescription (\"Shading: Pointset\");")+
_T("}")+
_T("function set_wireframe ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"WIREFRAME\");")+
_T("	Browser .setDescription (\"Shading: Wirefrane\");")+
_T("}")+
_T("function set_flat ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"FLAT\");")+
_T("	Browser .setDescription (\"Shading: Flat\");")+
_T("}")+
_T("function set_gouraud ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"GOURAUD\");")+
_T("	Browser .setDescription (\"Shading: Gouraud\");")+
_T("}")+
_T("function set_phong ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
_T("	Browser .setDescription (\"Shading: Phong\");")+
_T("}"));
Group147.addChild(&Script148);

Transform& Transform154 =  Transform();
Transform154.setDEF(CString("Header_1"));
Transform154.setTranslation(new float[]{1.6905,-0.857496,-1});
Transform154.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape155 =  Shape();
Appearance& Appearance156 =  Appearance();
Material& Material157 =  Material();
Material157.setDEF(CString("Artdeco31"));
Material157.setAmbientIntensity(0);
Material157.setDiffuseColor(new float[]{0,0,0});
Material157.setShininess(0);
Appearance156.addChild(&Material157);

Shape155.addChild(&Appearance156);

Text& Text158 =  Text();
Text158.setString(new CString[]{CString("Shading")}, 1);
Text158.setSolid(True);
CFontStyle& FontStyle159 =  CFontStyle();
FontStyle159.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle159.setStyle(CString("BOLD"));
FontStyle159.setSize(0.68);
FontStyle159.setJustify(new CString[]{CString("END")}, 1);
Text158.setFontStyle(&FontStyle159);

Shape155.setGeometry(&Text158);

Transform154.addChild(&Shape155);

Group147.addChild(&Transform154);

Transform& Transform160 =  Transform();
Transform160.setDEF(CString("Text"));
Transform160.setTranslation(new float[]{1.6905,-0.955496,-1});
Transform160.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
Material& Material163 =  Material();
Appearance162.addChild(&Material163);

Shape161.addChild(&Appearance162);

Text& Text164 =  Text();
Text164.setString(new CString[]{CString("Pointset Wireframe Flat Gouraud Phong")}, 1);
Text164.setSolid(True);
CFontStyle& FontStyle165 =  CFontStyle();
FontStyle165.setUSE(CString("_1"));
Text164.setFontStyle(&FontStyle165);

Shape161.setGeometry(&Text164);

Transform160.addChild(&Shape161);

Group147.addChild(&Transform160);

Transform& Transform166 =  Transform();
Transform166.setDEF(CString("Pointset"));
Transform166.setTranslation(new float[]{0.436176,-0.916146,0});
Transform166.setScale(new float[]{0.139972,0.040588,0.040588});
Shape& Shape167 =  Shape();
Appearance& Appearance168 =  Appearance();
Material& Material169 =  Material();
Material169.setDEF(CString("_10"));
Material169.setTransparency(1);
Appearance168.addChild(&Material169);

Shape167.addChild(&Appearance168);

IndexedFaceSet& IndexedFaceSet170 =  IndexedFaceSet();
IndexedFaceSet170.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet170.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate171 =  TextureCoordinate();
TextureCoordinate171.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet170.setTexCoord(&TextureCoordinate171);

Coordinate& Coordinate172 =  Coordinate();
Coordinate172.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet170.setCoord(&Coordinate172);

Shape167.setGeometry(&IndexedFaceSet170);

Transform166.addChild(&Shape167);

TouchSensor& TouchSensor173 =  TouchSensor();
TouchSensor173.setDEF(CString("_11"));
Transform166.addChild(&TouchSensor173);

Group147.addChild(&Transform166);

Transform& Transform174 =  Transform();
Transform174.setDEF(CString("Wireframe"));
Transform174.setTranslation(new float[]{0.77569,-0.916146,0});
Transform174.setScale(new float[]{0.177062,0.040588,0.040588});
Shape& Shape175 =  Shape();
Appearance& Appearance176 =  Appearance();
Material& Material177 =  Material();
Material177.setUSE(CString("_10"));
Appearance176.addChild(&Material177);

Shape175.addChild(&Appearance176);

IndexedFaceSet& IndexedFaceSet178 =  IndexedFaceSet();
IndexedFaceSet178.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet178.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate179 =  TextureCoordinate();
TextureCoordinate179.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet178.setTexCoord(&TextureCoordinate179);

Coordinate& Coordinate180 =  Coordinate();
Coordinate180.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet178.setCoord(&Coordinate180);

Shape175.setGeometry(&IndexedFaceSet178);

Transform174.addChild(&Shape175);

TouchSensor& TouchSensor181 =  TouchSensor();
TouchSensor181.setDEF(CString("_12"));
Transform174.addChild(&TouchSensor181);

Group147.addChild(&Transform174);

Transform& Transform182 =  Transform();
Transform182.setDEF(CString("Flat"));
Transform182.setTranslation(new float[]{1.04432,-0.916146,0});
Transform182.setScale(new float[]{0.0743511,0.040588,0.040588});
Shape& Shape183 =  Shape();
Appearance& Appearance184 =  Appearance();
Material& Material185 =  Material();
Material185.setUSE(CString("_10"));
Appearance184.addChild(&Material185);

Shape183.addChild(&Appearance184);

IndexedFaceSet& IndexedFaceSet186 =  IndexedFaceSet();
IndexedFaceSet186.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet186.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate187 =  TextureCoordinate();
TextureCoordinate187.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet186.setTexCoord(&TextureCoordinate187);

Coordinate& Coordinate188 =  Coordinate();
Coordinate188.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet186.setCoord(&Coordinate188);

Shape183.setGeometry(&IndexedFaceSet186);

Transform182.addChild(&Shape183);

TouchSensor& TouchSensor189 =  TouchSensor();
TouchSensor189.setDEF(CString("_13"));
Transform182.addChild(&TouchSensor189);

Group147.addChild(&Transform182);

Transform& Transform190 =  Transform();
Transform190.setDEF(CString("Gouraud"));
Transform190.setTranslation(new float[]{1.27986,-0.916146,0});
Transform190.setScale(new float[]{0.142825,0.040588,0.040588});
Shape& Shape191 =  Shape();
Appearance& Appearance192 =  Appearance();
Material& Material193 =  Material();
Material193.setUSE(CString("_10"));
Appearance192.addChild(&Material193);

Shape191.addChild(&Appearance192);

IndexedFaceSet& IndexedFaceSet194 =  IndexedFaceSet();
IndexedFaceSet194.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet194.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate195 =  TextureCoordinate();
TextureCoordinate195.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet194.setTexCoord(&TextureCoordinate195);

Coordinate& Coordinate196 =  Coordinate();
Coordinate196.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet194.setCoord(&Coordinate196);

Shape191.setGeometry(&IndexedFaceSet194);

Transform190.addChild(&Shape191);

TouchSensor& TouchSensor197 =  TouchSensor();
TouchSensor197.setDEF(CString("_14"));
Transform190.addChild(&TouchSensor197);

Group147.addChild(&Transform190);

Transform& Transform198 =  Transform();
Transform198.setDEF(CString("Phong"));
Transform198.setTranslation(new float[]{1.55457,-0.916146,0});
Transform198.setScale(new float[]{0.111441,0.040588,0.040588});
Shape& Shape199 =  Shape();
Appearance& Appearance200 =  Appearance();
Material& Material201 =  Material();
Material201.setUSE(CString("_10"));
Appearance200.addChild(&Material201);

Shape199.addChild(&Appearance200);

IndexedFaceSet& IndexedFaceSet202 =  IndexedFaceSet();
IndexedFaceSet202.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet202.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate203 =  TextureCoordinate();
TextureCoordinate203.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet202.setTexCoord(&TextureCoordinate203);

Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setPoint(new float[]{-1,-1,0,1,-1,0,1,1,0,-1,1,0}, 12);
IndexedFaceSet202.setCoord(&Coordinate204);

Shape199.setGeometry(&IndexedFaceSet202);

Transform198.addChild(&Shape199);

TouchSensor& TouchSensor205 =  TouchSensor();
TouchSensor205.setDEF(CString("_15"));
Transform198.addChild(&TouchSensor205);

Group147.addChild(&Transform198);

Layer128.addChild(&Group147);

LayerSet23.addChild(&Layer128);

Scene8.addChild(&LayerSet23);

ROUTE& ROUTE206 =  ROUTE();
ROUTE206.setFromNode(CString("_2"));
ROUTE206.setFromField(CString("fraction_changed"));
ROUTE206.setToNode(CString("BoxRotationInterpolator"));
ROUTE206.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE206);

ROUTE& ROUTE207 =  ROUTE();
ROUTE207.setFromNode(CString("BoxRotationInterpolator"));
ROUTE207.setFromField(CString("value_changed"));
ROUTE207.setToNode(CString("Box"));
ROUTE207.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE207);

ROUTE& ROUTE208 =  ROUTE();
ROUTE208.setFromNode(CString("BoxRotationInterpolator"));
ROUTE208.setFromField(CString("value_changed"));
ROUTE208.setToNode(CString("IndexedFaceSet_2"));
ROUTE208.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE208);

ROUTE& ROUTE209 =  ROUTE();
ROUTE209.setFromNode(CString("BoxRotationInterpolator"));
ROUTE209.setFromField(CString("value_changed"));
ROUTE209.setToNode(CString("Extrusion_2"));
ROUTE209.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE209);

ROUTE& ROUTE210 =  ROUTE();
ROUTE210.setFromNode(CString("BoxRotationInterpolator"));
ROUTE210.setFromField(CString("value_changed"));
ROUTE210.setToNode(CString("Cone_2"));
ROUTE210.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE210);

ROUTE& ROUTE211 =  ROUTE();
ROUTE211.setFromNode(CString("BoxRotationInterpolator"));
ROUTE211.setFromField(CString("value_changed"));
ROUTE211.setToNode(CString("Cylinder_2"));
ROUTE211.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE211);

ROUTE& ROUTE212 =  ROUTE();
ROUTE212.setFromNode(CString("BoxRotationInterpolator"));
ROUTE212.setFromField(CString("value_changed"));
ROUTE212.setToNode(CString("Sphere_2"));
ROUTE212.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE212);

ROUTE& ROUTE213 =  ROUTE();
ROUTE213.setFromNode(CString("BoxRotationInterpolator"));
ROUTE213.setFromField(CString("value_changed"));
ROUTE213.setToNode(CString("Box_2"));
ROUTE213.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE213);

ROUTE& ROUTE214 =  ROUTE();
ROUTE214.setFromNode(CString("BoxRotationInterpolator"));
ROUTE214.setFromField(CString("value_changed"));
ROUTE214.setToNode(CString("IndexedFaceSet"));
ROUTE214.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE214);

ROUTE& ROUTE215 =  ROUTE();
ROUTE215.setFromNode(CString("BoxRotationInterpolator"));
ROUTE215.setFromField(CString("value_changed"));
ROUTE215.setToNode(CString("Extrusion"));
ROUTE215.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE215);

ROUTE& ROUTE216 =  ROUTE();
ROUTE216.setFromNode(CString("BoxRotationInterpolator"));
ROUTE216.setFromField(CString("value_changed"));
ROUTE216.setToNode(CString("Cone"));
ROUTE216.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE216);

ROUTE& ROUTE217 =  ROUTE();
ROUTE217.setFromNode(CString("BoxRotationInterpolator"));
ROUTE217.setFromField(CString("value_changed"));
ROUTE217.setToNode(CString("Cylinder"));
ROUTE217.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE217);

ROUTE& ROUTE218 =  ROUTE();
ROUTE218.setFromNode(CString("BoxRotationInterpolator"));
ROUTE218.setFromField(CString("value_changed"));
ROUTE218.setToNode(CString("Sphere"));
ROUTE218.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE218);

ROUTE& ROUTE219 =  ROUTE();
ROUTE219.setFromNode(CString("BoxRotationInterpolator"));
ROUTE219.setFromField(CString("value_changed"));
ROUTE219.setToNode(CString("ElevationGrid"));
ROUTE219.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE219);

ROUTE& ROUTE220 =  ROUTE();
ROUTE220.setFromNode(CString("BoxRotationInterpolator"));
ROUTE220.setFromField(CString("value_changed"));
ROUTE220.setToNode(CString("ElevationGrid_3"));
ROUTE220.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE220);

ROUTE& ROUTE221 =  ROUTE();
ROUTE221.setFromNode(CString("_15"));
ROUTE221.setFromField(CString("touchTime"));
ROUTE221.setToNode(CString("ShadingScript"));
ROUTE221.setToField(CString("set_phong"));
Scene8.addChild(&ROUTE221);

ROUTE& ROUTE222 =  ROUTE();
ROUTE222.setFromNode(CString("_14"));
ROUTE222.setFromField(CString("touchTime"));
ROUTE222.setToNode(CString("ShadingScript"));
ROUTE222.setToField(CString("set_gouraud"));
Scene8.addChild(&ROUTE222);

ROUTE& ROUTE223 =  ROUTE();
ROUTE223.setFromNode(CString("_13"));
ROUTE223.setFromField(CString("touchTime"));
ROUTE223.setToNode(CString("ShadingScript"));
ROUTE223.setToField(CString("set_flat"));
Scene8.addChild(&ROUTE223);

ROUTE& ROUTE224 =  ROUTE();
ROUTE224.setFromNode(CString("_12"));
ROUTE224.setFromField(CString("touchTime"));
ROUTE224.setToNode(CString("ShadingScript"));
ROUTE224.setToField(CString("set_wireframe"));
Scene8.addChild(&ROUTE224);

ROUTE& ROUTE225 =  ROUTE();
ROUTE225.setFromNode(CString("_11"));
ROUTE225.setFromField(CString("touchTime"));
ROUTE225.setToNode(CString("ShadingScript"));
ROUTE225.setToField(CString("set_pointset"));
Scene8.addChild(&ROUTE225);

X3D0.setScene(&Scene8);

}
