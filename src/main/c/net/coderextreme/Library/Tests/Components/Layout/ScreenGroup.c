#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 01 Jan 2016 09:17:51 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.2, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 08 Jan 2016 19:26:29 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "ScreenGroup";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "ScreenGroup";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "NavigationInfo";
MetadataSet11.DEF = "NavigationInfo";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataString MetadataString12 = createNode("MetadataString");
MetadataString12.name = "type";
MetadataString12.DEF = "type";
MetadataString12.reference = "http://titania.create3000.de";
MetadataString12.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataString12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Viewpoint";
MetadataSet13.DEF = "Viewpoint";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "position";
MetadataDouble14.DEF = "position";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[0,0,10]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,1,0]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[0,0,0]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Background Background17 = createNode("Background");
Background17.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background17;

OrthoViewpoint OrthoViewpoint18 = createNode("OrthoViewpoint");
OrthoViewpoint18.description = "OthoViewpoint";
children[2] = OrthoViewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.description = "Viewpoint";
children[3] = Viewpoint19;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "Text";
Transform20.scale = new SFVec3f(new float[2,1,1]);
Transform20.scaleOrientation = new SFRotation(new float[0,0,1,0.785398]);
ScreenGroup ScreenGroup21 = createNode("ScreenGroup");
Transform Transform22 = createNode("Transform");
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,0,0]);
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Text Text26 = createNode("Text");
Text26.string = new MFString(new java.lang.String[", ","ABCDEFGHIJKLMNOPQRSTUVWXYZ, ","abcdefghijklmnopqrstuvwxyz, ","0123456789äöüß.?!,;:"]);
FontStyle FontStyle27 = createNode("FontStyle");
FontStyle27.family = new MFString(new java.lang.String["Ubuntu Mono"]);
FontStyle27.style = "-NORMAL";
FontStyle27.size = 12;
FontStyle27.justify = new MFString(new java.lang.String[", ","BEGINBEGIN"]);
Text26.fontStyle = FontStyle27;

Shape23.geometry = Text26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

ScreenGroup21.children = new MFNode();

ScreenGroup21.children[0] = Transform22;

Transform Transform28 = createNode("Transform");
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,1,1]);
Appearance30.material = Material31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../images/image.png"]);
Appearance30.texture = ImageTexture32;

Shape29.appearance = Appearance30;

Rectangle2D Rectangle2D33 = createNode("Rectangle2D");
Rectangle2D33.size = new SFVec2f(new float[1,1]);
Shape29.geometry = Rectangle2D33;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

ScreenGroup21.children[1] = Transform28;

Transform20.children = new MFNode();

Transform20.children[0] = ScreenGroup21;

children[4] = Transform20;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "Box";
Transform34.translation = new SFVec3f(new float[-0.767947,0.507512,0]);
ScreenGroup ScreenGroup35 = createNode("ScreenGroup");
Transform Transform36 = createNode("Transform");
Transform36.DEF = "Box_1";
Transform36.scale = new SFVec3f(new float[20,20,20]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

Box Box40 = createNode("Box");
Shape37.geometry = Box40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

ScreenGroup35.children = new MFNode();

ScreenGroup35.children[0] = Transform36;

Transform34.children = new MFNode();

Transform34.children[0] = ScreenGroup35;

children[5] = Transform34;

}
