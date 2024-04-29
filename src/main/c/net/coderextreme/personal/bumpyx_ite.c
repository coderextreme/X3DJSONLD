#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "bumpyx_ite.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "A flower";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/bumpyx_ite.x3d";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "bumpyx_ite.x3d";
children = new MFNode();

children[0] = WorldInfo16;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
NavigationInfo17.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.position = new SFVec3f(new float[0,0,40]);
Viewpoint18.description = "Transparent rose";
children[2] = Viewpoint18;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background19;

Transform Transform20 = createNode("Transform");
Shape Shape21 = createNode("Shape");
Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 40;
Shape21.geometry = Sphere22;

Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

ComposedCubeMapTexture ComposedCubeMapTexture25 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

ComposedShader ComposedShader32 = createNode("ComposedShader");
ComposedShader32.DEF = "x_iteShader";
ComposedShader32.language = "GLSL";
field field33 = createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "inputOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

field field34 = createNode("field");
field34.name = "cube";
field34.type = "SFNode";
field34.accessType = "inputOnly";
ComposedCubeMapTexture ComposedCubeMapTexture35 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader32.field[1] = field34;

field field36 = createNode("field");
field36.name = "bias";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "0.5";
ComposedShader32.field[2] = field36;

field field37 = createNode("field");
field37.name = "scale";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "0.5";
ComposedShader32.field[3] = field37;

field field38 = createNode("field");
field38.name = "power";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "2";
ComposedShader32.field[4] = field38;

field field39 = createNode("field");
field39.name = "a";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "15";
ComposedShader32.field[5] = field39;

field field40 = createNode("field");
field40.name = "b";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "5";
ComposedShader32.field[6] = field40;

field field41 = createNode("field");
field41.name = "c";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "5";
ComposedShader32.field[7] = field41;

field field42 = createNode("field");
field42.name = "d";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "5";
ComposedShader32.field[8] = field42;

field field43 = createNode("field");
field43.name = "tdelta";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "0";
ComposedShader32.field[9] = field43;

field field44 = createNode("field");
field44.name = "pdelta";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "0";
ComposedShader32.field[10] = field44;

ShaderPart ShaderPart45 = createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart45.type = "VERTEX";
ComposedShader32.parts[11] = ShaderPart45;

ShaderPart ShaderPart46 = createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart46.type = "FRAGMENT";
ComposedShader32.parts[12] = ShaderPart46;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

Shape21.appearance = Appearance23;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

children[4] = Transform20;

}
