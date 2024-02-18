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
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Grouping";
component6.level = 3;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Core";
component7.level = 1;
head1.component[5] = component7;

//component name='Shaders' level='1'></component
//component name='CubeMapTexturing' level='1'></component
meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "ball.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "manual";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "a prismatic sphere";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "ball.x3d";
children = new MFNode();

children[0] = WorldInfo14;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.description = "Tour Views";
Viewpoint16.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint16;

Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background17;

Transform Transform18 = createNode("Transform");
Shape Shape19 = createNode("Shape");
Sphere Sphere20 = createNode("Sphere");
Shape19.geometry = Sphere20;

Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

ComposedCubeMapTexture ComposedCubeMapTexture23 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

ComposedShader ComposedShader30 = createNode("ComposedShader");
ComposedShader30.language = "GLSL";
field field31 = createNode("field");
field31.name = "chromaticDispertion";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0.98 1 1.033";
ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

field field32 = createNode("field");
field32.name = "cube";
field32.type = "SFNode";
field32.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture33 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32.children = new MFNode();

field32.children[0] = ComposedCubeMapTexture33;

ComposedShader30.field[1] = field32;

field field34 = createNode("field");
field34.name = "bias";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader30.field[2] = field34;

field field35 = createNode("field");
field35.name = "scale";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader30.field[3] = field35;

field field36 = createNode("field");
field36.name = "power";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "2";
ComposedShader30.field[4] = field36;

ShaderPart ShaderPart37 = createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["../shaders/castle.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]);
ShaderPart37.type = "VERTEX";
ComposedShader30.parts[5] = ShaderPart37;

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.DEF = "commonfs";
ShaderPart38.url = new MFString(new java.lang.String["../shaders/castle.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"]);
ShaderPart38.type = "FRAGMENT";
ComposedShader30.parts[6] = ShaderPart38;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

Shape19.appearance = Appearance21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

children[4] = Transform18;

}
