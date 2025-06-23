#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ViewFrustumExample.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translated";
meta5.content = "16 August 2008";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "20 October 2019";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "ViewFrustumPrototype.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "drawing";
meta8.content = "ViewFrustumComputation.png";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "ViewFrustumOverheadView.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "ViewFrustumObliqueView.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "ViewpointCalculator.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "ViewpointCalculatorComposed.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "subject";
meta13.content = "view culling frustum";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.title = "ViewFrustumExample.x3d";
children = new MFNode();

children[0] = WorldInfo18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.description = "ViewFrustum from above, looking down";
Viewpoint19.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint19.position = new SFVec3f(new float[0,40,0]);
children[1] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.description = "ViewFrustum from point of view";
children[2] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.description = "ViewFrustum behind point of view";
Viewpoint21.position = new SFVec3f(new float[0,0,15]);
children[3] = Viewpoint21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.description = "ViewFrustum oblique side view";
Viewpoint22.orientation = new SFRotation(new float[0.8005,0.5926,0.0898,-0.3743]);
Viewpoint22.position = new SFVec3f(new float[-5,5,20]);
children[4] = Viewpoint22;

NavigationInfo NavigationInfo23 = createNode("NavigationInfo");
NavigationInfo23.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
children[5] = NavigationInfo23;

ExternProtoDeclare ExternProtoDeclare24 = createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "ViewFrustum";
ExternProtoDeclare24.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare24.url = new MFString(new java.lang.String["ViewFrustumPrototype.x3d#ViewFrustum"]);
field field25 = createNode("field");
field25.name = "ViewpointNode";
field25.accessType = "initializeOnly";
field25.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field25.type = "SFNode";
ExternProtoDeclare24.field = new MFNode();

ExternProtoDeclare24.field[0] = field25;

field field26 = createNode("field");
field26.name = "NavigationInfoNode";
field26.accessType = "initializeOnly";
field26.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field26.type = "SFNode";
ExternProtoDeclare24.field[1] = field26;

field field27 = createNode("field");
field27.name = "visible";
field27.accessType = "inputOutput";
field27.appinfo = "whether or not frustum geometry is rendered";
field27.type = "SFBool";
ExternProtoDeclare24.field[2] = field27;

field field28 = createNode("field");
field28.name = "lineColor";
field28.accessType = "inputOutput";
field28.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field28.type = "SFColor";
ExternProtoDeclare24.field[3] = field28;

field field29 = createNode("field");
field29.name = "frustumColor";
field29.accessType = "inputOutput";
field29.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field29.type = "SFColor";
ExternProtoDeclare24.field[4] = field29;

field field30 = createNode("field");
field30.name = "transparency";
field30.accessType = "inputOutput";
field30.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field30.type = "SFFloat";
ExternProtoDeclare24.field[5] = field30;

field field31 = createNode("field");
field31.name = "aspectRatio";
field31.accessType = "inputOutput";
field31.appinfo = "assumed ratio height/width, default value 0.75";
field31.type = "SFFloat";
ExternProtoDeclare24.field[6] = field31;

field field32 = createNode("field");
field32.name = "trace";
field32.accessType = "initializeOnly";
field32.appinfo = "debug support, default false";
field32.type = "SFBool";
ExternProtoDeclare24.field[7] = field32;

children[6] = ExternProtoDeclare24;

//Example use
ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "ViewFrustum";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "ViewpointNode";
//prefer empty description to prevent entry in player's ViewpointList
Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "ViewFrustum ViewpointNode";
fieldValue34.children = new MFNode();

fieldValue34.children[0] = Viewpoint35;

ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

fieldValue fieldValue36 = createNode("fieldValue");
fieldValue36.name = "NavigationInfoNode";
NavigationInfo NavigationInfo37 = createNode("NavigationInfo");
NavigationInfo37.visibilityLimit = 15;
fieldValue36.children = new MFNode();

fieldValue36.children[0] = NavigationInfo37;

ProtoInstance33.fieldValue[1] = fieldValue36;

fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "visible";
fieldValue38.value = "true";
ProtoInstance33.fieldValue[2] = fieldValue38;

fieldValue fieldValue39 = createNode("fieldValue");
fieldValue39.name = "lineColor";
fieldValue39.value = "0.9 0.9 0.9";
ProtoInstance33.fieldValue[3] = fieldValue39;

fieldValue fieldValue40 = createNode("fieldValue");
fieldValue40.name = "frustumColor";
fieldValue40.value = "0.8 0.8 0.8";
ProtoInstance33.fieldValue[4] = fieldValue40;

fieldValue fieldValue41 = createNode("fieldValue");
fieldValue41.name = "transparency";
fieldValue41.value = "0.75";
ProtoInstance33.fieldValue[5] = fieldValue41;

fieldValue fieldValue42 = createNode("fieldValue");
fieldValue42.name = "trace";
fieldValue42.value = "true";
ProtoInstance33.fieldValue[6] = fieldValue42;

children[7] = ProtoInstance33;

//Visualization assists
Inline Inline43 = createNode("Inline");
Inline43.DEF = "GridXZ";
Inline43.url = new MFString(new java.lang.String["GridXZ_20x20Fixed.x3d"]);
children[8] = Inline43;

Transform Transform44 = createNode("Transform");
Transform44.scale = new SFVec3f(new float[5,5,5]);
Inline Inline45 = createNode("Inline");
Inline45.DEF = "CoordinateAxes";
Inline45.url = new MFString(new java.lang.String["CoordinateAxes.x3d"]);
Transform44.children = new MFNode();

Transform44.children[0] = Inline45;

children[9] = Transform44;

}
