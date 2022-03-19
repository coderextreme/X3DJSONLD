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
component3.name = "CubeMapTexturing";
component3.level = 1;
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
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "geo.x3d";
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
meta11.content = "https://coderextreme.net/X3DJSONLD/geo.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "a sphere";
head1.meta[10] = meta12;

head = head1;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children = new MFNode();

children[0] = NavigationInfo14;

Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.DEF = "Tour";
Viewpoint15.description = "Tour Views";
children[1] = Viewpoint15;

//Viewpoint position='0 0 4' description='sphere in road'/
Background Background16 = createNode("Background");
Background16.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
Background16.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background16.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background16.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background16.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
children[2] = Background16;

Transform Transform17 = createNode("Transform");
Shape Shape18 = createNode("Shape");
Sphere Sphere19 = createNode("Sphere");
Shape18.geometry = Sphere19;

Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material21.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance20.material = Material21;

ComposedCubeMapTexture ComposedCubeMapTexture22 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture22.DEF = "texture";
ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture23;

ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture28;

Appearance20.texture = ComposedCubeMapTexture22;

ComposedShader ComposedShader29 = createNode("ComposedShader");
ComposedShader29.language = "GLSL";
field field30 = createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

field field31 = createNode("field");
field31.name = "cube";
field31.type = "SFNode";
field31.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture32 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture32.USE = "texture";
field31.children = new MFNode();

field31.children[0] = ComposedCubeMapTexture32;

ComposedShader29.field[1] = field31;

field field33 = createNode("field");
field33.name = "bias";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader29.field[2] = field33;

field field34 = createNode("field");
field34.name = "scale";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader29.field[3] = field34;

field field35 = createNode("field");
field35.name = "power";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "2";
ComposedShader29.field[4] = field35;

ShaderPart ShaderPart36 = createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart36.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart36;

ShaderPart ShaderPart37 = createNode("ShaderPart");
ShaderPart37.DEF = "common";
ShaderPart37.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart37.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart37;

Appearance20.shaders = new MFNode();

Appearance20.shaders[0] = ComposedShader29;

ComposedShader ComposedShader38 = createNode("ComposedShader");
ComposedShader38.language = "GLSL";
field field39 = createNode("field");
field39.name = "chromaticDispertion";
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.value = "0.98 1 1.033";
ComposedShader38.field = new MFNode();

ComposedShader38.field[0] = field39;

field field40 = createNode("field");
field40.name = "cube";
field40.type = "SFNode";
field40.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture41 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture41.USE = "texture";
field40.children = new MFNode();

field40.children[0] = ComposedCubeMapTexture41;

ComposedShader38.field[1] = field40;

field field42 = createNode("field");
field42.name = "bias";
field42.accessType = "initializeOnly";
field42.type = "SFFloat";
field42.value = "0.5";
ComposedShader38.field[2] = field42;

field field43 = createNode("field");
field43.name = "scale";
field43.accessType = "initializeOnly";
field43.type = "SFFloat";
field43.value = "0.5";
ComposedShader38.field[3] = field43;

field field44 = createNode("field");
field44.name = "power";
field44.accessType = "initializeOnly";
field44.type = "SFFloat";
field44.value = "2";
ComposedShader38.field[4] = field44;

ShaderPart ShaderPart45 = createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart45.type = "VERTEX";
ComposedShader38.parts[5] = ShaderPart45;

ShaderPart ShaderPart46 = createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart46.type = "FRAGMENT";
ComposedShader38.parts[6] = ShaderPart46;

Appearance20.shaders[1] = ComposedShader38;

Shape18.appearance = Appearance20;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

children[3] = Transform17;

}
