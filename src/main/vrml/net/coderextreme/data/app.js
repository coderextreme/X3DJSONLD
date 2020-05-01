let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Group2 = browser.currentScene.createNode("Group");
Group2.bboxCenter = new SFVec3f(new float[0,0,0]);
Group2.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Group2.displayBBox = False;
Group2.visible = True;
let Shape3 = browser.currentScene.createNode("Shape");
Shape3.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape3.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape3.displayBBox = False;
Shape3.visible = True;
let Appearance4 = browser.currentScene.createNode("Appearance");
let Material5 = browser.currentScene.createNode("Material");
Material5.ambientIntensity = 0.2;
Material5.diffuseColor = new SFColor(new float[1,0,0]);
Material5.emissiveColor = new SFColor(new float[0,0,0]);
Material5.shininess = 0.2;
Material5.specularColor = new SFColor(new float[0,0,0]);
Material5.transparency = 0;
Appearance4.material = Material5;

Shape3.appearance = Appearance4;

let Box6 = browser.currentScene.createNode("Box");
Box6.size = new SFVec3f(new float[2,2,2]);
Box6.solid = True;
Shape3.geometry = Box6;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform7.center = new SFVec3f(new float[0,0,0]);
Transform7.displayBBox = False;
Transform7.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform7.scale = new SFVec3f(new float[4,5,6]);
Transform7.scaleOrientation = new SFRotation(new float[0,0,1,0]);
Transform7.translation = new SFVec3f(new float[1,2,3]);
Transform7.visible = True;
browser.currentScene.children[1] = Transform7;

