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
meta10.content = "geo.x3d";
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
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "a sphere";
head1.meta[12] = meta14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children = new MFNode();

children[0] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.DEF = "Tour";
Viewpoint17.description = "Tour Views";
children[1] = Viewpoint17;

//Viewpoint position='0 0 4' description='sphere in road'/
Background Background18 = createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
children[2] = Background18;

Transform Transform19 = createNode("Transform");
Shape Shape20 = createNode("Shape");
Sphere Sphere21 = createNode("Sphere");
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

ComposedCubeMapTexture ComposedCubeMapTexture24 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

ComposedShader ComposedShader31 = createNode("ComposedShader");
ComposedShader31.language = "GLSL";
field field32 = createNode("field");
field32.name = "chromaticDispertion";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0.98 1 1.033";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

field field33 = createNode("field");
field33.name = "cube";
field33.type = "SFNode";
field33.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture34 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture34.USE = "texture";
field33.children = new MFNode();

field33.children[0] = ComposedCubeMapTexture34;

ComposedShader31.field[1] = field33;

field field35 = createNode("field");
field35.name = "bias";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader31.field[2] = field35;

field field36 = createNode("field");
field36.name = "scale";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "0.5";
ComposedShader31.field[3] = field36;

field field37 = createNode("field");
field37.name = "power";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "2";
ComposedShader31.field[4] = field37;

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart38.type = "VERTEX";
ComposedShader31.parts[5] = ShaderPart38;

ShaderPart ShaderPart39 = createNode("ShaderPart");
ShaderPart39.DEF = "common";
ShaderPart39.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart39.type = "FRAGMENT";
ComposedShader31.parts[6] = ShaderPart39;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

ComposedShader ComposedShader40 = createNode("ComposedShader");
ComposedShader40.language = "GLSL";
field field41 = createNode("field");
field41.name = "chromaticDispertion";
field41.accessType = "initializeOnly";
field41.type = "SFVec3f";
field41.value = "0.98 1 1.033";
ComposedShader40.field = new MFNode();

ComposedShader40.field[0] = field41;

field field42 = createNode("field");
field42.name = "cube";
field42.type = "SFNode";
field42.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture43 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture43.USE = "texture";
field42.children = new MFNode();

field42.children[0] = ComposedCubeMapTexture43;

ComposedShader40.field[1] = field42;

field field44 = createNode("field");
field44.name = "bias";
field44.accessType = "initializeOnly";
field44.type = "SFFloat";
field44.value = "0.5";
ComposedShader40.field[2] = field44;

field field45 = createNode("field");
field45.name = "scale";
field45.accessType = "initializeOnly";
field45.type = "SFFloat";
field45.value = "0.5";
ComposedShader40.field[3] = field45;

field field46 = createNode("field");
field46.name = "power";
field46.accessType = "initializeOnly";
field46.type = "SFFloat";
field46.value = "2";
ComposedShader40.field[4] = field46;

ShaderPart ShaderPart47 = createNode("ShaderPart");
ShaderPart47.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart47.type = "VERTEX";
ComposedShader40.parts[5] = ShaderPart47;

ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart48.type = "FRAGMENT";
ComposedShader40.parts[6] = ShaderPart48;

Appearance22.shaders[1] = ComposedShader40;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[3] = Transform19;

}
