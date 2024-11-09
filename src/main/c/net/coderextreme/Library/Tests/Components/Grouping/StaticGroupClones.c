#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "created";
meta2.content = "Tue, 27 Aug 2024 20:45:48 GMT";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Holger Seelig";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "Sunrize X3D Editor V1.7.15, https://create3000.github.io/sunrize/";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "Tue, 27 Aug 2024 20:51:25 GMT";
head1.meta[3] = meta5;

head = head1;

WorldInfo WorldInfo7 = createNode("WorldInfo");
MetadataSet MetadataSet8 = createNode("MetadataSet");
MetadataSet8.name = "Sunrize";
MetadataSet8.reference = "https://create3000.github.io/sunrize/";
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "GridTool";
MetadataBoolean MetadataBoolean10 = createNode("MetadataBoolean");
MetadataBoolean10.name = "visible";
MetadataBoolean10.value = new MFBool(new boolean[True]);
MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataBoolean10;

MetadataSet8.value = new MFNode();

MetadataSet8.value[0] = MetadataSet9;

WorldInfo7.metadata = MetadataSet8;

children = new MFNode();

children[0] = WorldInfo7;

Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.description = "Initial View";
children[1] = Viewpoint11;

StaticGroup StaticGroup12 = createNode("StaticGroup");
Group Group13 = createNode("Group");
Group13.DEF = "Clones";
Transform Transform14 = createNode("Transform");
Transform14.DEF = "Sphere_1";
Transform14.translation = new SFVec3f(new float[-3,0,0]);
Shape Shape15 = createNode("Shape");
Shape15.DEF = "_1";
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.8,0,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

Sphere Sphere18 = createNode("Sphere");
Shape15.geometry = Sphere18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Group13.children = new MFNode();

Group13.children[0] = Transform14;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "Sphere_2";
Transform19.translation = new SFVec3f(new float[-1,0,0]);
Shape Shape20 = createNode("Shape");
Shape20.USE = "_1";
Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Group13.children[1] = Transform19;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "Sphere_3";
Transform21.translation = new SFVec3f(new float[1,0,0]);
Shape Shape22 = createNode("Shape");
Shape22.USE = "_1";
Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Group13.children[2] = Transform21;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "Sphere_4";
Transform23.translation = new SFVec3f(new float[3,0,0]);
Shape Shape24 = createNode("Shape");
Shape24.USE = "_1";
Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group13.children[3] = Transform23;

StaticGroup12.children = new MFNode();

StaticGroup12.children[0] = Group13;

Group Group25 = createNode("Group");
Transform Transform26 = createNode("Transform");
Transform26.DEF = "Sphere_5";
Transform26.translation = new SFVec3f(new float[-3,-2,0]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Appearance28.DEF = "_2";
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[1,0.8509804,0.4]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Sphere Sphere30 = createNode("Sphere");
Shape27.geometry = Sphere30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "Sphere_6";
Transform31.translation = new SFVec3f(new float[-1,-2,0]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Appearance33.USE = "_2";
Shape32.appearance = Appearance33;

Sphere Sphere34 = createNode("Sphere");
Shape32.geometry = Sphere34;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Group25.children[1] = Transform31;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "Sphere_7";
Transform35.translation = new SFVec3f(new float[1,-2,0]);
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Appearance37.USE = "_2";
Shape36.appearance = Appearance37;

Sphere Sphere38 = createNode("Sphere");
Shape36.geometry = Sphere38;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Group25.children[2] = Transform35;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "Sphere";
Transform39.translation = new SFVec3f(new float[3,-2,0]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Appearance41.USE = "_2";
Shape40.appearance = Appearance41;

Sphere Sphere42 = createNode("Sphere");
Shape40.geometry = Sphere42;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Group25.children[3] = Transform39;

StaticGroup12.children[1] = Group25;

children[2] = StaticGroup12;

Background Background43 = createNode("Background");
Background43.DEF = "Gray";
Background43.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[3] = Background43;

}
