#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Rendering";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Grouping";
component6.level = 3;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "CubeMapTexturing";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Core";
component8.level = 1;
head1.component[6] = component8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "ball.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "manual";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "a prismatic sphere";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "ball.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,0,12]);
Viewpoint17.description = "Tour Views";
children[2] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.topUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background18.backUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.leftUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.frontUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.rightUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
Shape Shape20 = createNode("Shape");
Sphere Sphere21 = createNode("Sphere");
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.699999988079071,0.699999988079071,0.699999988079071]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

ComposedShader ComposedShader24 = createNode("ComposedShader");
ComposedShader24.language = "GLSL";
field field25 = createNode("field");
field25.name = "chromaticDispertion";
field25.accessType = "initializeOnly";
field25.type = "SFVec3f";
field25.value = "0.980000019073486 1 1.03299999237061";
ComposedShader24.field = new MFNode();

ComposedShader24.field[0] = field25;

field field26 = createNode("field");
field26.name = "cube";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
ComposedCubeMapTexture ComposedCubeMapTexture27 = createNode("ComposedCubeMapTexture");
ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

field26.children = new MFNode();

field26.children[0] = ComposedCubeMapTexture27;

ComposedShader24.field[1] = field26;

field field34 = createNode("field");
field34.name = "bias";
field34.accessType = "initializeOnly";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader24.field[2] = field34;

field field35 = createNode("field");
field35.name = "scale";
field35.accessType = "initializeOnly";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader24.field[3] = field35;

field field36 = createNode("field");
field36.name = "power";
field36.accessType = "initializeOnly";
field36.type = "SFFloat";
field36.value = "2";
ComposedShader24.field[4] = field36;

ShaderPart ShaderPart37 = createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"]);
ShaderPart37.type = "VERTEX";
ComposedShader24.parts[5] = ShaderPart37;

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.DEF = "commonfs";
ShaderPart38.url = new MFString(new java.lang.String["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"]);
ShaderPart38.type = "FRAGMENT";
ComposedShader24.parts[6] = ShaderPart38;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader24;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[4] = Transform19;

}
