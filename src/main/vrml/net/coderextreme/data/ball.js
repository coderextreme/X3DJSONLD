let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint3;

let Background4 = browser.currentScene.createNode("Background");
Background4.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background4.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background4.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background4.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background4.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background4.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background4.skyColor = new MFColor(new float[0,0,0]);
Background4.transparency = 0;
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere7 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere7;

let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material9.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance8.material = Material9;

let ComposedCubeMapTexture10 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture10.DEF = "texture";
let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture10.top = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture10.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture10.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture10.top = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture10.top = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture10.top = ImageTexture16;

Appearance8.texture = ComposedCubeMapTexture10;

//<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//
let ComposedShader17 = browser.currentScene.createNode("ComposedShader");
ComposedShader17.language = "GLSL";
let field18 = browser.currentScene.createNode("field");
field18.name = "chromaticDispertion";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0.98 1 1.033";
ComposedShader17.field = new MFNode();

ComposedShader17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.type = "SFNode";
field19.accessType = "inputOutput";
let ComposedCubeMapTexture20 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture20.USE = "texture";
field19.children = new MFNode();

field19.children[0] = ComposedCubeMapTexture20;

ComposedShader17.field[1] = field19;

let field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
field21.value = "0.5";
ComposedShader17.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.5";
ComposedShader17.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.accessType = "inputOutput";
field23.type = "SFFloat";
field23.value = "2";
ComposedShader17.field[4] = field23;

let ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x3dom.vs"]);
ShaderPart24.type = "VERTEX";
ComposedShader17.parts[5] = ShaderPart24;

let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.DEF = "common";
ShaderPart25.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart25.type = "FRAGMENT";
ComposedShader17.parts[6] = ShaderPart25;

Appearance8.shaders = new MFNode();

Appearance8.shaders[0] = ComposedShader17;

let ComposedShader26 = browser.currentScene.createNode("ComposedShader");
ComposedShader26.language = "GLSL";
let field27 = browser.currentScene.createNode("field");
field27.name = "chromaticDispertion";
field27.accessType = "initializeOnly";
field27.type = "SFVec3f";
field27.value = "0.98 1 1.033";
ComposedShader26.field = new MFNode();

ComposedShader26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "cube";
field28.type = "SFNode";
field28.accessType = "initializeOnly";
let ComposedCubeMapTexture29 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture29.USE = "texture";
field28.children = new MFNode();

field28.children[0] = ComposedCubeMapTexture29;

ComposedShader26.field[1] = field28;

let field30 = browser.currentScene.createNode("field");
field30.name = "bias";
field30.accessType = "initializeOnly";
field30.type = "SFFloat";
field30.value = "0.5";
ComposedShader26.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "scale";
field31.accessType = "initializeOnly";
field31.type = "SFFloat";
field31.value = "0.5";
ComposedShader26.field[3] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "power";
field32.accessType = "initializeOnly";
field32.type = "SFFloat";
field32.value = "2";
ComposedShader26.field[4] = field32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader26.parts[5] = ShaderPart33;

let ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.USE = "common";
ComposedShader26.parts[6] = ShaderPart34;

Appearance8.shaders[1] = ComposedShader26;

Shape6.appearance = Appearance8;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

browser.currentScene.children[3] = Transform5;

