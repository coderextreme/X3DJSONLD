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
meta4.content = "Fri, 09 Dec 2022 15:26:53 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "comment";
meta5.content = "Rise and Shine";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Holger Seelig";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/InlineGlobal.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "Sun, 29 Jan 2023 23:15:47 GMT";
head1.meta[7] = meta9;

head = head1;

NavigationInfo NavigationInfo11 = createNode("NavigationInfo");
NavigationInfo11.headlight = False;
children = new MFNode();

children[0] = NavigationInfo11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.position = new SFVec3f(new float[5.65094,8.33655,10.783]);
Viewpoint12.orientation = new SFRotation(new float[-0.76859137417185,0.61112546586771,0.1891902865281,0.76580931764699]);
children[1] = Viewpoint12;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "Floor";
Transform13.scale = new SFVec3f(new float[100,0.1,100]);
Shape Shape14 = createNode("Shape");
Shape14.castShadow = False;
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.emissiveColor = new SFColor(new float[0.266667,0.266667,0.266667]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

Box Box17 = createNode("Box");
Shape14.geometry = Box17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

children[2] = Transform13;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[-3,1,0]);
TouchSensor TouchSensor19 = createNode("TouchSensor");
TouchSensor19.DEF = "_1";
Transform18.children = new MFNode();

Transform18.children[0] = TouchSensor19;

BooleanFilter BooleanFilter20 = createNode("BooleanFilter");
BooleanFilter20.DEF = "_2";
Transform18.children[1] = BooleanFilter20;

Inline Inline21 = createNode("Inline");
Inline21.DEF = "_3";
Inline21.url = new MFString(new java.lang.String["BoxWithLight.x3d"]);
Transform18.children[2] = Inline21;

children[3] = Transform18;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[3,1,0]);
TouchSensor TouchSensor23 = createNode("TouchSensor");
TouchSensor23.DEF = "_4";
Transform22.children = new MFNode();

Transform22.children[0] = TouchSensor23;

BooleanFilter BooleanFilter24 = createNode("BooleanFilter");
BooleanFilter24.DEF = "_5";
Transform22.children[1] = BooleanFilter24;

Inline Inline25 = createNode("Inline");
Inline25.DEF = "_6";
Inline25.url = new MFString(new java.lang.String["BoxWithLight.x3d"]);
Transform22.children[2] = Inline25;

children[4] = Transform22;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "_1";
ROUTE26.fromField = "isOver";
ROUTE26.toNode = "_2";
ROUTE26.toField = "set_boolean";
children[5] = ROUTE26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "_2";
ROUTE27.fromField = "inputNegate";
ROUTE27.toNode = "_3";
ROUTE27.toField = "set_global";
children[6] = ROUTE27;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "_4";
ROUTE28.fromField = "isOver";
ROUTE28.toNode = "_5";
ROUTE28.toField = "set_boolean";
children[7] = ROUTE28;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "_5";
ROUTE29.fromField = "inputNegate";
ROUTE29.toNode = "_6";
ROUTE29.toField = "set_global";
children[8] = ROUTE29;

}
