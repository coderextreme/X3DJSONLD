#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EventUtilities";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "PointingDeviceSensor";
component3.level = 1;
head1.component[1] = component3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Thu, 25 Jul 2024 16:05:29 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V1.7.7, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Fri, 26 Jul 2024 08:42:24 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Sunrize";
MetadataSet10.reference = "https://create3000.github.io/sunrize/";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "GridTool";
MetadataBoolean MetadataBoolean12 = createNode("MetadataBoolean");
MetadataBoolean12.name = "visible";
MetadataBoolean12.value = new MFBool(new boolean[True]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataBoolean12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.description = "VP 1";
Viewpoint13.position = new SFVec3f(new float[2.869677,3.854335,8.769781]);
Viewpoint13.orientation = new SFRotation(new float[-0.7765887,0.6177187,0.1238285,0.5052317]);
children[1] = Viewpoint13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.description = "VP 2";
Viewpoint14.position = new SFVec3f(new float[5.220812,4.072179,7.49403]);
Viewpoint14.orientation = new SFRotation(new float[0.552572167518166,-0.815206166947771,-0.173501887755142,5.54787878432596]);
children[2] = Viewpoint14;

Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.description = "VP 3";
Viewpoint15.position = new SFVec3f(new float[-4.394869,3.689521,8.189784]);
Viewpoint15.orientation = new SFRotation(new float[-0.598566281364909,-0.78681718523343,-0.15045638515638,0.61843686641716]);
children[3] = Viewpoint15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.DEF = "VP4";
Viewpoint16.position = new SFVec3f(new float[-0.01965156,7.869416,6.170244]);
Viewpoint16.orientation = new SFRotation(new float[-0.99999337845167,-0.00327218228127219,-0.00159244338455401,0.905841696657087]);
children[4] = Viewpoint16;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "YellowBox";
Transform17.translation = new SFVec3f(new float[-2,0,0]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.DEF = "Summer16";
Material20.ambientIntensity = 0.259459;
Material20.diffuseColor = new SFColor(new float[1,0.957367,0.0324675]);
Material20.specularColor = new SFColor(new float[0.990909,0.940502,0.208259]);
Material20.shininess = 0.363636;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Box Box21 = createNode("Box");
Box21.DEF = "_1";
Shape18.geometry = Box21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

TouchSensor TouchSensor22 = createNode("TouchSensor");
TouchSensor22.DEF = "_2";
Transform17.children[1] = TouchSensor22;

BooleanTrigger BooleanTrigger23 = createNode("BooleanTrigger");
BooleanTrigger23.DEF = "_3";
Transform17.children[2] = BooleanTrigger23;

children[5] = Transform17;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "LilaBox";
Transform24.translation = new SFVec3f(new float[2,0,0]);
Anchor Anchor25 = createNode("Anchor");
Anchor25.url = new MFString(new java.lang.String["#VP4"]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.DEF = "Summer6";
Material28.ambientIntensity = 0.25;
Material28.diffuseColor = new SFColor(new float[0.35102,0.255782,0.732203]);
Material28.specularColor = new SFColor(new float[0.0801129,0.345487,0.578378]);
Material28.shininess = 0.0918919;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Box Box29 = createNode("Box");
Box29.USE = "_1";
Shape26.geometry = Box29;

Anchor25.children = new MFNode();

Anchor25.children[0] = Shape26;

Transform24.children = new MFNode();

Transform24.children[0] = Anchor25;

children[6] = Transform24;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "_2";
ROUTE30.fromField = "touchTime";
ROUTE30.toNode = "_3";
ROUTE30.toField = "set_triggerTime";
children[7] = ROUTE30;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "_3";
ROUTE31.fromField = "triggerTrue";
ROUTE31.toNode = "VP4";
ROUTE31.toField = "set_bind";
children[8] = ROUTE31;

}
