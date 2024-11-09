#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "CubeMapTexturing";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 23 Aug 2024 19:51:47 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Sunrize X3D Editor V1.7.12, https://create3000.github.io/sunrize/";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 24 Aug 2024 11:20:35 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.title = "StaticGroup test with Inline node";
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "Sunrize";
MetadataSet9.reference = "https://create3000.github.io/sunrize/";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "GridTool";
MetadataBoolean MetadataBoolean11 = createNode("MetadataBoolean");
MetadataBoolean11.name = "visible";
MetadataBoolean11.value = new MFBool(new boolean[True]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataBoolean11;

MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataSet10;

WorldInfo8.metadata = MetadataSet9;

children = new MFNode();

children[0] = WorldInfo8;

Background Background12 = createNode("Background");
Background12.DEF = "Summer";
Background12.skyAngle = new MFFloat(new float[0.8,1.3,1.4,1.5708]);
Background12.skyColor = new MFColor(new float[0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]);
Background12.groundAngle = new MFFloat(new float[0.659972,1.2,1.39912,1.5708]);
Background12.groundColor = new MFColor(new float[0.105712,0.156051,0.297,0.187629,0.255857,0.398,0.33604,0.405546,0.542,0.3612,0.469145,0.602,0.39471,0.522059,0.669]);
children[1] = Background12;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.description = "Initial View";
Viewpoint13.position = new SFVec3f(new float[0.2750405,0.4539119,0.8405286]);
Viewpoint13.orientation = new SFRotation(new float[-0.776588739330481,0.61771873128448,0.123828506271318,0.5052317]);
Viewpoint13.centerOfRotation = new SFVec3f(new float[0,0.0844979,0]);
Viewpoint13.nearDistance = 0.001;
Viewpoint13.farDistance = 1000;
children[2] = Viewpoint13;

StaticGroup StaticGroup14 = createNode("StaticGroup");
StaticGroup14.DEF = "glTF";
Transform Transform15 = createNode("Transform");
Transform15.DEF = "chess4xv4xh2xd";
Transform Transform16 = createNode("Transform");
Transform16.DEF = "chess4xv2xh2xd";
Transform Transform17 = createNode("Transform");
Transform17.DEF = "chess2xv2xh2xd";
Transform Transform18 = createNode("Transform");
Transform18.DEF = "chess2xv2xh";
Transform Transform19 = createNode("Transform");
Transform19.DEF = "chess2xv";
Transform Transform20 = createNode("Transform");
Transform20.DEF = "chess";
Inline Inline21 = createNode("Inline");
Inline21.url = new MFString(new java.lang.String["https://raw.githubusercontent.com/KhronosGroup/glTF-Sample-Assets/master/Models/ABeautifulGame/glTF/ABeautifulGame.gltf"]);
Transform20.children = new MFNode();

Transform20.children[0] = Inline21;

Transform19.children = new MFNode();

Transform19.children[0] = Transform20;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[0,0.2,0]);
Transform Transform23 = createNode("Transform");
Transform23.USE = "chess";
Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

Transform19.children[1] = Transform22;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[1,0,0]);
Transform Transform25 = createNode("Transform");
Transform25.USE = "chess2xv";
Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

Transform18.children[1] = Transform24;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,0,1]);
Transform Transform27 = createNode("Transform");
Transform27.USE = "chess2xv2xh";
Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform17.children[1] = Transform26;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,0.4,0]);
Transform Transform29 = createNode("Transform");
Transform29.USE = "chess2xv2xh2xd";
Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform16.children[1] = Transform28;

Transform15.children = new MFNode();

Transform15.children[0] = Transform16;

Transform Transform30 = createNode("Transform");
Transform30.translation = new SFVec3f(new float[2,0,0]);
Transform Transform31 = createNode("Transform");
Transform31.USE = "chess4xv2xh2xd";
Transform30.children = new MFNode();

Transform30.children[0] = Transform31;

Transform15.children[1] = Transform30;

StaticGroup14.children = new MFNode();

StaticGroup14.children[0] = Transform15;

Transform Transform32 = createNode("Transform");
Transform32.translation = new SFVec3f(new float[0,0,2]);
Transform Transform33 = createNode("Transform");
Transform33.USE = "chess4xv4xh2xd";
Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

StaticGroup14.children[1] = Transform32;

children[3] = StaticGroup14;

}
