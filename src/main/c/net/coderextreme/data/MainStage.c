#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "MainStage.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Main stage for HAnim scene Winter and Spring.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Joe Williams";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "Joe Williams and Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "25 May 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "27 May 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "originals/0MainStageScene0525.x3dv";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

component component11 = createNode("component");
component11.name = "HAnim";
component11.level = 1;
head1.component[9] = component11;

head = head1;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "MainStage.x3d";
children = new MFNode();

children[0] = WorldInfo13;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.headlight = False;
children[1] = NavigationInfo14;

DirectionalLight DirectionalLight15 = createNode("DirectionalLight");
DirectionalLight15.global = True;
DirectionalLight15.ambientIntensity = 1;
DirectionalLight15.direction = new SFVec3f(new float[-0.5,-0.5,-0.5]);
children[2] = DirectionalLight15;

DirectionalLight DirectionalLight16 = createNode("DirectionalLight");
DirectionalLight16.global = True;
DirectionalLight16.ambientIntensity = 1;
DirectionalLight16.direction = new SFVec3f(new float[-1,-1,-1]);
children[3] = DirectionalLight16;

DirectionalLight DirectionalLight17 = createNode("DirectionalLight");
DirectionalLight17.global = True;
DirectionalLight17.intensity = 0.5;
DirectionalLight17.ambientIntensity = 1;
DirectionalLight17.direction = new SFVec3f(new float[1,1,-1]);
children[4] = DirectionalLight17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "Scene_StageFrontViewFar";
Viewpoint18.description = "hanim_Stage Front View";
Viewpoint18.position = new SFVec3f(new float[0,4,10]);
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.449999988]);
children[5] = Viewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "Scene_InclinedView";
Viewpoint19.description = "hanim_Inclined View";
Viewpoint19.position = new SFVec3f(new float[2.62,1.05,4.06]);
Viewpoint19.orientation = new SFRotation(new float[-0.112999998,0.992999971,0.034699999,0.671000004]);
children[6] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "Scene_StageFrontView";
Viewpoint20.description = "hanim_Stage Front View";
Viewpoint20.position = new SFVec3f(new float[0,1,5]);
children[7] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "Scene_FeetStageBottomView";
Viewpoint21.description = "hanim_feet View";
Viewpoint21.position = new SFVec3f(new float[0,-10,0]);
Viewpoint21.orientation = new SFRotation(new float[1,0,0,1.570000052]);
children[8] = Viewpoint21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "Scene_HeadTopView";
Viewpoint22.description = "hanim_Head Top View";
Viewpoint22.position = new SFVec3f(new float[0,15,0]);
Viewpoint22.orientation = new SFRotation(new float[1,0,0,-1.570000052]);
children[9] = Viewpoint22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "Scene_TopFrontCloseView";
Viewpoint23.description = "hanim_Head Top View";
Viewpoint23.position = new SFVec3f(new float[0,8,3]);
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-1.100000024]);
children[10] = Viewpoint23;

Group Group24 = createNode("Group");
Group24.DEF = "HAnimStage";
Transform Transform25 = createNode("Transform");
Transform25.DEF = "cordsysfloor";
Transform25.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline26 = createNode("Inline");
Inline26.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform25.children = new MFNode();

Transform25.children[0] = Inline26;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "StageGeometry";
Transform27.translation = new SFVec3f(new float[0,-0.01,0]);
Transform27.scale = new SFVec3f(new float[1,0.01,1]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.transparency = 0.6;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Box Box31 = createNode("Box");
Box31.size = new SFVec3f(new float[9,1,9]);
Shape28.geometry = Box31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "Circle0";
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Appearance34.DEF = "LineColor";
Material Material35 = createNode("Material");
Material35.ambientIntensity = 1;
Material35.diffuseColor = new SFColor(new float[0.7,0,0.9]);
Material35.specularColor = new SFColor(new float[0,0,1]);
Material35.emissiveColor = new SFColor(new float[0.45,0.45,1]);
Material35.shininess = 1;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

IndexedLineSet IndexedLineSet36 = createNode("IndexedLineSet");
IndexedLineSet36.DEF = "Orbit1";
IndexedLineSet36.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet36.coord = Coordinate37;

Shape33.geometry = IndexedLineSet36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Transform27.children[1] = Transform32;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "Circle1";
Transform38.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Appearance40.USE = "LineColor";
Shape39.appearance = Appearance40;

IndexedLineSet IndexedLineSet41 = createNode("IndexedLineSet");
IndexedLineSet41.USE = "Orbit1";
Shape39.geometry = IndexedLineSet41;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Transform27.children[2] = Transform38;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "Circle2";
Transform42.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Appearance44.USE = "LineColor";
Shape43.appearance = Appearance44;

IndexedLineSet IndexedLineSet45 = createNode("IndexedLineSet");
IndexedLineSet45.USE = "Orbit1";
Shape43.geometry = IndexedLineSet45;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform27.children[3] = Transform42;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "Circle3";
Transform46.scale = new SFVec3f(new float[2,1,2]);
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Appearance48.USE = "LineColor";
Shape47.appearance = Appearance48;

IndexedLineSet IndexedLineSet49 = createNode("IndexedLineSet");
IndexedLineSet49.USE = "Orbit1";
Shape47.geometry = IndexedLineSet49;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform27.children[4] = Transform46;

Transform Transform50 = createNode("Transform");
Transform50.DEF = "Circle4";
Transform50.scale = new SFVec3f(new float[3,1,3]);
Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Appearance52.USE = "LineColor";
Shape51.appearance = Appearance52;

IndexedLineSet IndexedLineSet53 = createNode("IndexedLineSet");
IndexedLineSet53.USE = "Orbit1";
Shape51.geometry = IndexedLineSet53;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform27.children[5] = Transform50;

Group24.children[1] = Transform27;

children[11] = Group24;

}
