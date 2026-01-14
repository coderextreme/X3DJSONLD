#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Core";
component8.level = 1;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "ParticleSystems";
component9.level = 3;
head1.component[7] = component9;

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "particleballs.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "A balls proto with configurable shaders";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/particleballs.x3d";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "particleballs.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "Tour Views";
Viewpoint17.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
ParticleSystem ParticleSystem20 = createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
BoundedPhysicsModel BoundedPhysicsModel21 = createNode("BoundedPhysicsModel");
Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 100;
BoundedPhysicsModel21.geometry = Sphere22;

ParticleSystem20.physics = new MFNode();

ParticleSystem20.physics[0] = BoundedPhysicsModel21;

ExplosionEmitter ExplosionEmitter23 = createNode("ExplosionEmitter");
ExplosionEmitter23.speed = 2;
ExplosionEmitter23.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter23;

//<Shape>
Sphere Sphere24 = createNode("Sphere");
ParticleSystem20.geometry = Sphere24;

Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

ComposedCubeMapTexture ComposedCubeMapTexture27 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
ComposedShader ComposedShader34 = createNode("ComposedShader");
ComposedShader34.language = "GLSL";
field field35 = createNode("field");
field35.name = "chromaticDispertion";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.value = "0.98 1 1.033";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

field field36 = createNode("field");
field36.name = "cube";
field36.type = "SFNode";
field36.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture37 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture37.USE = "texture";
field36.children = new MFNode();

field36.children[0] = ComposedCubeMapTexture37;

ComposedShader34.field[1] = field36;

field field38 = createNode("field");
field38.name = "bias";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader34.field[2] = field38;

field field39 = createNode("field");
field39.name = "scale";
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader34.field[3] = field39;

field field40 = createNode("field");
field40.name = "power";
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
field40.value = "2";
ComposedShader34.field[4] = field40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x_iteparticles.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs"]);
ShaderPart41.type = "VERTEX";
ComposedShader34.parts[5] = ShaderPart41;

ShaderPart ShaderPart42 = createNode("ShaderPart");
ShaderPart42.DEF = "commonfs";
ShaderPart42.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]);
ShaderPart42.type = "FRAGMENT";
ComposedShader34.parts[6] = ShaderPart42;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

ParticleSystem20.appearance = Appearance25;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

//</Shape>
children[4] = Transform19;

}
