#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ball.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d";
head1.meta[3] = meta5;

component component6 = createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

component component11 = createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

component component12 = createNode("component");
component12.name = "Grouping";
component12.level = 3;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "Core";
component13.level = 1;
head1.component[11] = component13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "ball.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "Tour Views";
children[2] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

ComposedCubeMapTexture ComposedCubeMapTexture23 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

ComposedShader ComposedShader30 = createNode("ComposedShader");
ComposedShader30.language = "GLSL";
ShaderPart ShaderPart31 = createNode("ShaderPart");
ShaderPart31.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ComposedShader30.parts = new MFNode();

ComposedShader30.parts[0] = ShaderPart31;

ShaderPart ShaderPart32 = createNode("ShaderPart");
ShaderPart32.DEF = "common";
ShaderPart32.type = "FRAGMENT";
ShaderPart32.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ComposedShader30.parts[1] = ShaderPart32;

field field33 = createNode("field");
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.name = "chromaticDispertion";
field33.value = "0.98 1 1.033";
ComposedShader30.field[2] = field33;

field field34 = createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFNode";
field34.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture35 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader30.field[3] = field34;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.name = "bias";
field36.value = "0.5";
ComposedShader30.field[4] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.name = "scale";
field37.value = "0.5";
ComposedShader30.field[5] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.name = "power";
field38.value = "2";
ComposedShader30.field[6] = field38;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

ComposedShader ComposedShader39 = createNode("ComposedShader");
ComposedShader39.language = "GLSL";
ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ComposedShader39.parts = new MFNode();

ComposedShader39.parts[0] = ShaderPart40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.type = "FRAGMENT";
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ComposedShader39.parts[1] = ShaderPart41;

field field42 = createNode("field");
field42.accessType = "initializeOnly";
field42.type = "SFVec3f";
field42.name = "chromaticDispertion";
field42.value = "0.98 1 1.033";
ComposedShader39.field[2] = field42;

field field43 = createNode("field");
field43.accessType = "initializeOnly";
field43.type = "SFNode";
field43.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture44 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture44.USE = "texture";
field43.children = new MFNode();

field43.children[0] = ComposedCubeMapTexture44;

ComposedShader39.field[3] = field43;

field field45 = createNode("field");
field45.accessType = "initializeOnly";
field45.type = "SFFloat";
field45.name = "bias";
field45.value = "0.5";
ComposedShader39.field[4] = field45;

field field46 = createNode("field");
field46.accessType = "initializeOnly";
field46.type = "SFFloat";
field46.name = "scale";
field46.value = "0.5";
ComposedShader39.field[5] = field46;

field field47 = createNode("field");
field47.accessType = "initializeOnly";
field47.type = "SFFloat";
field47.name = "power";
field47.value = "2";
ComposedShader39.field[6] = field47;

Appearance21.shaders[1] = ComposedShader39;

Shape20.appearance = Appearance21;

Sphere Sphere48 = createNode("Sphere");
Shape20.geometry = Sphere48;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[4] = Transform19;

}
