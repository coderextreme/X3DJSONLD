#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "geo.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d";
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
component12.name = "Shape";
component12.level = 4;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

component component14 = createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children = new MFNode();

children[0] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.DEF = "Tour";
Viewpoint17.description = "Tour Views";
children[1] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
children[2] = Background18;

Transform Transform19 = createNode("Transform");
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

ComposedCubeMapTexture ComposedCubeMapTexture23 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
Appearance21.texture = ComposedCubeMapTexture23;

ComposedShader ComposedShader24 = createNode("ComposedShader");
ComposedShader24.language = "GLSL";
ShaderPart ShaderPart25 = createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ComposedShader24.parts = new MFNode();

ComposedShader24.parts[0] = ShaderPart25;

ShaderPart ShaderPart26 = createNode("ShaderPart");
ShaderPart26.DEF = "common";
ShaderPart26.type = "FRAGMENT";
ShaderPart26.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ComposedShader24.parts[1] = ShaderPart26;

field field27 = createNode("field");
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.name = "chromaticDispertion";
field27.value = "0.98 1 1.033";
ComposedShader24.field[2] = field27;

field field28 = createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFNode";
field28.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture29 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture29.USE = "texture";
field28.children = new MFNode();

field28.children[0] = ComposedCubeMapTexture29;

ComposedShader24.field[3] = field28;

field field30 = createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.name = "bias";
field30.value = "0.5";
ComposedShader24.field[4] = field30;

field field31 = createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.name = "scale";
field31.value = "0.5";
ComposedShader24.field[5] = field31;

field field32 = createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.name = "power";
field32.value = "2";
ComposedShader24.field[6] = field32;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader24;

ComposedShader ComposedShader33 = createNode("ComposedShader");
ComposedShader33.language = "GLSL";
ShaderPart ShaderPart34 = createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ComposedShader33.parts = new MFNode();

ComposedShader33.parts[0] = ShaderPart34;

ShaderPart ShaderPart35 = createNode("ShaderPart");
ShaderPart35.type = "FRAGMENT";
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ComposedShader33.parts[1] = ShaderPart35;

field field36 = createNode("field");
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.name = "chromaticDispertion";
field36.value = "0.98 1 1.033";
ComposedShader33.field[2] = field36;

field field37 = createNode("field");
field37.accessType = "initializeOnly";
field37.type = "SFNode";
field37.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture38 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture38.USE = "texture";
field37.children = new MFNode();

field37.children[0] = ComposedCubeMapTexture38;

ComposedShader33.field[3] = field37;

field field39 = createNode("field");
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.name = "bias";
field39.value = "0.5";
ComposedShader33.field[4] = field39;

field field40 = createNode("field");
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
field40.name = "scale";
field40.value = "0.5";
ComposedShader33.field[5] = field40;

field field41 = createNode("field");
field41.accessType = "initializeOnly";
field41.type = "SFFloat";
field41.name = "power";
field41.value = "2";
ComposedShader33.field[6] = field41;

Appearance21.shaders[1] = ComposedShader33;

Shape20.appearance = Appearance21;

Sphere Sphere42 = createNode("Sphere");
Shape20.geometry = Sphere42;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[3] = Transform19;

}
