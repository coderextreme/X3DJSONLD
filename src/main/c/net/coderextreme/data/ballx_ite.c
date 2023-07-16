#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

meta meta11 = createNode("meta");
meta11.name = "title";
meta11.content = "ball.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "manual";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/ball.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "description";
meta15.content = "a prismatic sphere";
head1.meta[13] = meta15;

head = head1;

WorldInfo WorldInfo17 = createNode("WorldInfo");
WorldInfo17.title = "ball.x3d";
children = new MFNode();

children[0] = WorldInfo17;

NavigationInfo NavigationInfo18 = createNode("NavigationInfo");
NavigationInfo18.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.description = "Tour Views";
children[2] = Viewpoint19;

Background Background20 = createNode("Background");
Background20.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background20.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background20.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background20.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background20.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background20.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background20;

Transform Transform21 = createNode("Transform");
Shape Shape22 = createNode("Shape");
Sphere Sphere23 = createNode("Sphere");
Shape22.geometry = Sphere23;

Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

ComposedCubeMapTexture ComposedCubeMapTexture26 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

ComposedShader ComposedShader33 = createNode("ComposedShader");
ComposedShader33.language = "GLSL";
field field34 = createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

field field35 = createNode("field");
field35.name = "cube";
field35.type = "SFNode";
field35.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture36 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35.children = new MFNode();

field35.children[0] = ComposedCubeMapTexture36;

ComposedShader33.field[1] = field35;

field field37 = createNode("field");
field37.name = "bias";
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader33.field[2] = field37;

field field38 = createNode("field");
field38.name = "scale";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader33.field[3] = field38;

field field39 = createNode("field");
field39.name = "power";
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader33.field[4] = field39;

ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader33.parts[5] = ShaderPart40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader33.parts[6] = ShaderPart41;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

Shape22.appearance = Appearance24;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

children[4] = Transform21;

}
