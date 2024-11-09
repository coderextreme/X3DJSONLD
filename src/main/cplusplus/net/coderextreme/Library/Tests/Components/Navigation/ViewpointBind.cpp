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
component2.setName(CString("EventUtilities"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("PointingDeviceSensor"));
component3.setLevel(1);
head1.addChild(&component3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Thu, 25 Jul 2024 16:05:29 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.7.7, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Fri, 26 Jul 2024 08:42:24 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Sunrize"));
MetadataSet10.X3DNode::setReference(CString("https://create3000.github.io/sunrize/"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("GridTool"));
MetadataBoolean& MetadataBoolean12 =  MetadataBoolean();
MetadataBoolean12.X3DNode::setName(CString("visible"));
MetadataBoolean12.setValue(new boolean[]{True});
MetadataSet11.setValue((X3DNode *)&MetadataBoolean12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(CString("VP 1"));
Viewpoint13.setPosition(new float[]{2.869677,3.854335,8.769781});
Viewpoint13.setOrientation(new float[]{-0.7765887,0.6177187,0.1238285,0.5052317});
Scene8.addChild(&Viewpoint13);

Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDescription(CString("VP 2"));
Viewpoint14.setPosition(new float[]{5.220812,4.072179,7.49403});
Viewpoint14.setOrientation(new float[]{0.552572167518166,-0.815206166947771,-0.173501887755142,5.54787878432596});
Scene8.addChild(&Viewpoint14);

Viewpoint& Viewpoint15 =  Viewpoint();
Viewpoint15.setDescription(CString("VP 3"));
Viewpoint15.setPosition(new float[]{-4.394869,3.689521,8.189784});
Viewpoint15.setOrientation(new float[]{-0.598566281364909,-0.78681718523343,-0.15045638515638,0.61843686641716});
Scene8.addChild(&Viewpoint15);

Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDEF(CString("VP4"));
Viewpoint16.setPosition(new float[]{-0.01965156,7.869416,6.170244});
Viewpoint16.setOrientation(new float[]{-0.99999337845167,-0.00327218228127219,-0.00159244338455401,0.905841696657087});
Scene8.addChild(&Viewpoint16);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("YellowBox"));
Transform17.setTranslation(new float[]{-2,0,0});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDEF(CString("Summer16"));
Material20.setAmbientIntensity(0.259459);
Material20.setDiffuseColor(new float[]{1,0.957367,0.0324675});
Material20.setSpecularColor(new float[]{0.990909,0.940502,0.208259});
Material20.setShininess(0.363636);
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Box& Box21 =  Box();
Box21.setDEF(CString("_1"));
Shape18.setGeometry(&Box21);

Transform17.addChild(&Shape18);

TouchSensor& TouchSensor22 =  TouchSensor();
TouchSensor22.setDEF(CString("_2"));
Transform17.addChild(&TouchSensor22);

BooleanTrigger& BooleanTrigger23 =  BooleanTrigger();
BooleanTrigger23.setDEF(CString("_3"));
Transform17.addChild(&BooleanTrigger23);

Scene8.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("LilaBox"));
Transform24.setTranslation(new float[]{2,0,0});
Anchor& Anchor25 =  Anchor();
Anchor25.setUrl(new CString[]{CString("#VP4")}, 1);
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(CString("Summer6"));
Material28.setAmbientIntensity(0.25);
Material28.setDiffuseColor(new float[]{0.35102,0.255782,0.732203});
Material28.setSpecularColor(new float[]{0.0801129,0.345487,0.578378});
Material28.setShininess(0.0918919);
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Box& Box29 =  Box();
Box29.setUSE(CString("_1"));
Shape26.setGeometry(&Box29);

Anchor25.addChild(&Shape26);

Transform24.addChild(&Anchor25);

Scene8.addChild(&Transform24);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("_2"));
ROUTE30.setFromField(CString("touchTime"));
ROUTE30.setToNode(CString("_3"));
ROUTE30.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("_3"));
ROUTE31.setFromField(CString("triggerTrue"));
ROUTE31.setToNode(CString("VP4"));
ROUTE31.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE31);

X3D0.setScene(&Scene8);

}
