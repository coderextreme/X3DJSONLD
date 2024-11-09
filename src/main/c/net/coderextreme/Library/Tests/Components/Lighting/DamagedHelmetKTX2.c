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

unit unit3 = createNode("unit");
unit3.name = "degree";
unit3.category = "angle";
unit3.conversionFactor = 0.017453292519943295;
head1.unit[1] = unit3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Mon, 09 Oct 2023 20:31:23 GMT";
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
meta7.content = "Sunrize X3D Editor V1.1.7, https://create3000.github.io/sunrize/";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Fri, 27 Oct 2023 10:07:11 GMT";
head1.meta[6] = meta8;

head = head1;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.position = new SFVec3f(new float[-0.00248158,0.00001054537,2.385858]);
Viewpoint10.centerOfRotation = new SFVec3f(new float[-0.00248158,0.00001054537,-0.187155]);
NavigationInfo NavigationInfo11 = createNode("NavigationInfo");
Viewpoint10.navigationInfo = NavigationInfo11;

children = new MFNode();

children[0] = Viewpoint10;

Inline Inline12 = createNode("Inline");
Inline12.DEF = "DamagedHelmet";
Inline12.url = new MFString(new java.lang.String["https://raw.githubusercontent.com/KhronosGroup/glTF-Sample-Models/master/2.0/DamagedHelmet/glTF/DamagedHelmet.gltf"]);
children[1] = Inline12;

}
