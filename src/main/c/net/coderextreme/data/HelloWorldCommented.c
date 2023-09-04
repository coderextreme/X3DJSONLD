#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HelloWorldCommented.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "19 December 2015";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "20 October 2019";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "info";
meta7.content = "HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "HelloWorldCommented.json";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "HelloWorldCommentedOriginalEncoding.json";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HelloWorldCommentedAlternativeEncoding.json";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "license";
meta12.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "Hello world!";
children = new MFNode();

children[0] = WorldInfo14;

Group Group15 = createNode("Group");
Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.DEF = "ViewUpClose";
Viewpoint16.description = "Hello world!";
Viewpoint16.position = new SFVec3f(new float[0,-1,7]);
Viewpoint16.centerOfRotation = new SFVec3f(new float[0,-1,0]);
Group15.children = new MFNode();

Group15.children[0] = Viewpoint16;

Transform Transform17 = createNode("Transform");
Transform17.rotation = new SFRotation(new float[0,1,0,3]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.DEF = "MaterialLightBlue";
Material20.diffuseColor = new SFColor(new float[0.1,0.5,1]);
Appearance19.material = Material20;

ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.DEF = "ImageCloudlessEarth";
ImageTexture21.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance19.texture = ImageTexture21;

Shape18.appearance = Appearance19;

Sphere Sphere22 = createNode("Sphere");
Shape18.geometry = Sphere22;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Group15.children[1] = Transform17;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.USE = "MaterialLightBlue";
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Text Text27 = createNode("Text");
Text27.DEF = "TextMessage";
Text27.string = new MFString(new java.lang.String["Hello","world!"]);
FontStyle FontStyle28 = createNode("FontStyle");
FontStyle28.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text27.fontStyle = FontStyle28;

Shape24.geometry = Text27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group15.children[2] = Transform23;

children[1] = Group15;

}
