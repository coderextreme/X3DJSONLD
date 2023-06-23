#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JoeSkeletonSkinSaluteSiteWalk.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Comprehensive example showing skeleton, skin, sites and interpolator animation together.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "9 January 2004";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "4 December 2022";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "27 January 2023";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "warning";
meta9.content = "Under development, numerous errors and warnings";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "TODO";
meta11.content = "Provide feedback to tovrmlx3d converter";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "TODO";
meta12.content = "HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "TODO";
meta13.content = "ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "JoeSkeletonSkinSaluteSiteWalk.original.x3dv";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Image";
meta26.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "tovrmlx3d, https://castle-engine.io/convert.php";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "reference";
meta28.content = "https://castle-engine.io/view3dscene.php#section_converting";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "translator";
meta29.content = "Michalis Kamburelis";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "translator";
meta30.content = "Don Brutzman";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "translator";
meta31.content = "Joe D. Williams";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "generator";
meta32.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[30] = meta32;

meta meta33 = createNode("meta");
meta33.name = "identifier";
meta33.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSaluteSiteWalk.x3d";
head1.meta[31] = meta33;

meta meta34 = createNode("meta");
meta34.name = "license";
meta34.content = "../license.html";
head1.meta[32] = meta34;

head = head1;

WorldInfo WorldInfo36 = createNode("WorldInfo");
WorldInfo36.info = new MFString(new java.lang.String["By Joe for Joe"]);
WorldInfo36.title = "HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3";
children = new MFNode();

children[0] = WorldInfo36;

WorldInfo WorldInfo37 = createNode("WorldInfo");
WorldInfo37.info = new MFString(new java.lang.String["By Joe for Joe"]);
WorldInfo37.title = "HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3";
children[1] = WorldInfo37;

NavigationInfo NavigationInfo38 = createNode("NavigationInfo");
NavigationInfo38.DEF = "HeadlightOnRevealsSkinTextureAndColors";
children[2] = NavigationInfo38;

Background Background39 = createNode("Background");
Background39.groundAngle = new MFFloat(new float[1.57]);
Background39.groundColor = new MFColor(new float[0,0.1,0,0,0.1,0]);
Background39.skyColor = new MFColor(new float[0,0,0.1]);
children[3] = Background39;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "cordsysfloor";
Transform40.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline41 = createNode("Inline");
Inline41.DEF = "CoordinateAxes";
Inline41.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform40.children = new MFNode();

Transform40.children[0] = Inline41;

children[4] = Transform40;

//Authoring hint: these axes are aligned within local coordinate system
Group Group42 = createNode("Group");
Group42.DEF = "ViewpointGroup";
Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "Front Up View";
Viewpoint43.orientation = new SFRotation(new float[-1,-1,0,0.55]);
Viewpoint43.position = new SFVec3f(new float[-1,2,2.5]);
Group42.children = new MFNode();

Group42.children[0] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "From Left View";
Viewpoint44.orientation = new SFRotation(new float[0.3,1,0,-1.57]);
Viewpoint44.position = new SFVec3f(new float[-2.5,1.5,0]);
Group42.children[1] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.description = "Front Mid View";
Viewpoint45.position = new SFVec3f(new float[0,0.5,1.25]);
Group42.children[2] = Viewpoint45;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.description = "Front Feet View";
Viewpoint46.position = new SFVec3f(new float[0,0,0.75]);
Group42.children[3] = Viewpoint46;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "From Right View";
Viewpoint47.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint47.position = new SFVec3f(new float[1,1,0]);
Group42.children[4] = Viewpoint47;

Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.centerOfRotation = new SFVec3f(new float[0,1.65,0]);
Viewpoint48.description = "Front Head View";
Viewpoint48.position = new SFVec3f(new float[0,1.65,0.75]);
Group42.children[5] = Viewpoint48;

Viewpoint Viewpoint49 = createNode("Viewpoint");
Viewpoint49.description = "Front Mid View";
Viewpoint49.position = new SFVec3f(new float[0,1,1.75]);
Group42.children[6] = Viewpoint49;

Viewpoint Viewpoint50 = createNode("Viewpoint");
Viewpoint50.description = "Rear View";
Viewpoint50.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint50.position = new SFVec3f(new float[0,1.5,-4]);
Group42.children[7] = Viewpoint50;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.description = "Top View";
Viewpoint51.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint51.position = new SFVec3f(new float[0,4,0]);
Group42.children[8] = Viewpoint51;

Viewpoint Viewpoint52 = createNode("Viewpoint");
Viewpoint52.description = "Bottom View";
Viewpoint52.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint52.position = new SFVec3f(new float[0,-4,0]);
Group42.children[9] = Viewpoint52;

Viewpoint Viewpoint53 = createNode("Viewpoint");
Viewpoint53.description = "Right View";
Viewpoint53.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint53.position = new SFVec3f(new float[4,1.5,0]);
Group42.children[10] = Viewpoint53;

children[5] = Group42;

Group Group54 = createNode("Group");
Group54.DEF = "VisualizationShapes";
Transform Transform55 = createNode("Transform");
Transform55.scale = new SFVec3f(new float[5,5,5]);
Transform55.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape56 = createNode("Shape");
Shape56.DEF = "jointbox";
IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet57.creaseAngle = 0.10000000149011612;
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.DEF = "boxCoords";
Coordinate58.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet57.coord = Coordinate58;

Color Color59 = createNode("Color");
Color59.color = new MFColor(new float[1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
IndexedFaceSet57.color = Color59;

Shape56.geometry = IndexedFaceSet57;

Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.ambientIntensity = 0.5;
Material61.diffuseColor = new SFColor(new float[0,0,0]);
Material61.shininess = 1;
Appearance60.material = Material61;

Shape56.appearance = Appearance60;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

Group54.children = new MFNode();

Group54.children[0] = Transform55;

Transform Transform62 = createNode("Transform");
Transform62.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform62.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape63 = createNode("Shape");
Shape63.DEF = "sitebox";
IndexedFaceSet IndexedFaceSet64 = createNode("IndexedFaceSet");
IndexedFaceSet64.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet64.creaseAngle = 0.10000000149011612;
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.USE = "boxCoords";
IndexedFaceSet64.coord = Coordinate65;

Shape63.geometry = IndexedFaceSet64;

Appearance Appearance66 = createNode("Appearance");
Material Material67 = createNode("Material");
Material67.ambientIntensity = 1;
Material67.diffuseColor = new SFColor(new float[1,0,0]);
Material67.emissiveColor = new SFColor(new float[1,0,0]);
Material67.shininess = 0.7;
Material67.specularColor = new SFColor(new float[1,0,0]);
Appearance66.material = Material67;

Shape63.appearance = Appearance66;

Transform62.children = new MFNode();

Transform62.children[0] = Shape63;

Group54.children[1] = Transform62;

Transform Transform68 = createNode("Transform");
Transform68.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform68.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape69 = createNode("Shape");
IndexedLineSet IndexedLineSet70 = createNode("IndexedLineSet");
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0,0,0,0.0001,0]);
IndexedLineSet70.coord = Coordinate71;

Shape69.geometry = IndexedLineSet70;

Appearance Appearance72 = createNode("Appearance");
Appearance72.DEF = "SegmentLine";
Material Material73 = createNode("Material");
Material73.diffuseColor = new SFColor(new float[0,1,0]);
Material73.emissiveColor = new SFColor(new float[0,1,0]);
Material73.specularColor = new SFColor(new float[0,1,0]);
Appearance72.material = Material73;

Shape69.appearance = Appearance72;

Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

Group54.children[2] = Transform68;

Transform Transform74 = createNode("Transform");
Transform74.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform74.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape75 = createNode("Shape");
Shape75.DEF = "skinsphere";
Sphere Sphere76 = createNode("Sphere");
Sphere76.radius = 0.005;
Shape75.geometry = Sphere76;

Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.ambientIntensity = 0.5;
Material78.diffuseColor = new SFColor(new float[0,1,0]);
Material78.emissiveColor = new SFColor(new float[0,1,0]);
Material78.shininess = 1;
Material78.specularColor = new SFColor(new float[0,1,0]);
Appearance77.material = Material78;

Shape75.appearance = Appearance77;

Transform74.children = new MFNode();

Transform74.children[0] = Shape75;

Group54.children[3] = Transform74;

children[6] = Group54;

Group Group79 = createNode("Group");
Group79.DEF = "SpecHumanoid";
Group Group80 = createNode("Group");
Group80.DEF = "JoeISOHumanoid";
HAnimHumanoid HAnimHumanoid81 = createNode("HAnimHumanoid");
HAnimHumanoid81.name = "Human";
HAnimHumanoid81.DEF = "Joe_Human";
HAnimHumanoid81.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid81.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape Shape82 = createNode("Shape");
Shape82.DEF = "SkinShape";
IndexedFaceSet IndexedFaceSet83 = createNode("IndexedFaceSet");
IndexedFaceSet83.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet83.creaseAngle = 3.1;
Coordinate Coordinate84 = createNode("Coordinate");
Coordinate84.DEF = "TheSkinCoord";
Coordinate84.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet83.coord = Coordinate84;

Color Color85 = createNode("Color");
Color85.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet83.color = Color85;

Shape82.geometry = IndexedFaceSet83;

Appearance Appearance86 = createNode("Appearance");
Appearance86.DEF = "SkinAppearance";
ImageTexture ImageTexture87 = createNode("ImageTexture");
ImageTexture87.DEF = "zBlueSpiralBkg2";
ImageTexture87.description = "Blue Spiral Pattern";
ImageTexture87.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance86.texture = ImageTexture87;

Material Material88 = createNode("Material");
Material88.DEF = "SkinMaterial";
Material88.ambientIntensity = 0.6;
Material88.diffuseColor = new SFColor(new float[1,1,1]);
Material88.shininess = 0.6;
Material88.transparency = 0.2;
Appearance86.material = Material88;

Shape82.appearance = Appearance86;

HAnimHumanoid81.skin = new MFNode();

HAnimHumanoid81.skin[0] = Shape82;

Coordinate Coordinate89 = createNode("Coordinate");
Coordinate89.USE = "TheSkinCoord";
HAnimHumanoid81.skinCoord = Coordinate89;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "HumanoidRoot";
HAnimJoint90.DEF = "Joe_HumanoidRoot";
HAnimJoint90.center = new SFVec3f(new float[0,0.875,0]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.name = "sacrum";
HAnimSegment91.DEF = "Joe_sacrum";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[0,0.875,0]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "jointbox";
Transform92.children = new MFNode();

Transform92.children[0] = Shape93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

Shape Shape94 = createNode("Shape");
IndexedLineSet IndexedLineSet95 = createNode("IndexedLineSet");
IndexedLineSet95.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate96 = createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[0,0.875,0,0,0.92,0]);
IndexedLineSet95.coord = Coordinate96;

Shape94.geometry = IndexedLineSet95;

Appearance Appearance97 = createNode("Appearance");
Appearance97.USE = "SegmentLine";
Shape94.appearance = Appearance97;

HAnimSegment91.children[1] = Shape94;

Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0,0.92,0.08]);
Shape Shape99 = createNode("Shape");
Shape99.USE = "skinsphere";
Transform98.children = new MFNode();

Transform98.children[0] = Shape99;

HAnimSegment91.children[2] = Transform98;

Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "skinsphere";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment91.children[3] = Transform100;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "sacroiliac";
HAnimJoint102.DEF = "Joe_sacroiliac";
HAnimJoint102.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.name = "pelvis";
HAnimSegment103.DEF = "Joe_pelvis";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform105 = createNode("Transform");
Shape Shape106 = createNode("Shape");
Shape106.USE = "jointbox";
Transform105.children = new MFNode();

Transform105.children[0] = Shape106;

Transform104.children = new MFNode();

Transform104.children[0] = Transform105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

Shape Shape107 = createNode("Shape");
IndexedLineSet IndexedLineSet108 = createNode("IndexedLineSet");
IndexedLineSet108.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate109 = createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
IndexedLineSet108.coord = Coordinate109;

Shape107.geometry = IndexedLineSet108;

Appearance Appearance110 = createNode("Appearance");
Appearance110.USE = "SegmentLine";
Shape107.appearance = Appearance110;

HAnimSegment103.children[1] = Shape107;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "l_iliocristale";
HAnimSite111.DEF = "Joe_l_iliocristale";
HAnimSite111.translation = new SFVec3f(new float[0.1425,1.065,0.0033]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "sitebox";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = Shape112;

HAnimSegment103.children[2] = HAnimSite111;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "l_trochanterion";
HAnimSite113.DEF = "Joe_l_trochanterion";
HAnimSite113.translation = new SFVec3f(new float[0.15,0.9,-0.01]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "sitebox";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = Shape114;

HAnimSegment103.children[3] = HAnimSite113;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.name = "r_iliocristale";
HAnimSite115.DEF = "Joe_r_iliocristale";
HAnimSite115.translation = new SFVec3f(new float[-0.1425,1.065,0.0033]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "sitebox";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = Shape116;

HAnimSegment103.children[4] = HAnimSite115;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.name = "r_trochanterion";
HAnimSite117.DEF = "Joe_r_trochanterion";
HAnimSite117.translation = new SFVec3f(new float[-0.15,0.9,-0.01]);
Shape Shape118 = createNode("Shape");
Shape118.USE = "sitebox";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = Shape118;

HAnimSegment103.children[5] = HAnimSite117;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "l_asis";
HAnimSite119.DEF = "Joe_l_asis";
HAnimSite119.translation = new SFVec3f(new float[0.0935,1.03,0.075]);
Shape Shape120 = createNode("Shape");
Shape120.USE = "sitebox";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = Shape120;

HAnimSegment103.children[6] = HAnimSite119;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "r_asis";
HAnimSite121.DEF = "Joe_r_asis";
HAnimSite121.translation = new SFVec3f(new float[-0.0935,1.03,0.075]);
Shape Shape122 = createNode("Shape");
Shape122.USE = "sitebox";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Shape122;

HAnimSegment103.children[7] = HAnimSite121;

HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.name = "l_psis";
HAnimSite123.DEF = "Joe_l_psis";
HAnimSite123.translation = new SFVec3f(new float[0.0773,1.019,-0.12]);
Shape Shape124 = createNode("Shape");
Shape124.USE = "sitebox";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = Shape124;

HAnimSegment103.children[8] = HAnimSite123;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "r_psis";
HAnimSite125.DEF = "Joe_r_psis";
HAnimSite125.translation = new SFVec3f(new float[-0.0773,1.019,-0.12]);
Shape Shape126 = createNode("Shape");
Shape126.USE = "sitebox";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = Shape126;

HAnimSegment103.children[9] = HAnimSite125;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "floormarker";
HAnimSite127.DEF = "Joe_floormarker";
Transform Transform128 = createNode("Transform");
Transform128.scale = new SFVec3f(new float[3,3,3]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "sitebox";
Transform128.children = new MFNode();

Transform128.children[0] = Shape129;

HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = Transform128;

HAnimSegment103.children[10] = HAnimSite127;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.name = "crotch";
HAnimSite130.DEF = "Joe_crotch";
HAnimSite130.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "sitebox";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = Shape131;

HAnimSegment103.children[11] = HAnimSite130;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "l_hip";
HAnimJoint132.DEF = "Joe_l_hip";
HAnimJoint132.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.name = "l_thigh";
HAnimSegment133.DEF = "Joe_l_thigh";
Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.1,0.92,0]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "jointbox";
Transform134.children = new MFNode();

Transform134.children[0] = Shape135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

Shape Shape136 = createNode("Shape");
IndexedLineSet IndexedLineSet137 = createNode("IndexedLineSet");
IndexedLineSet137.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate138 = createNode("Coordinate");
Coordinate138.point = new MFVec3f(new float[0.1,0.92,0,0.115,0.466,0]);
IndexedLineSet137.coord = Coordinate138;

Shape136.geometry = IndexedLineSet137;

Appearance Appearance139 = createNode("Appearance");
Appearance139.USE = "SegmentLine";
Shape136.appearance = Appearance139;

HAnimSegment133.children[1] = Shape136;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[0.1,0.9,0.0775]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "skinsphere";
Transform140.children = new MFNode();

Transform140.children[0] = Shape141;

HAnimSegment133.children[2] = Transform140;

Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[0.079,0.92,-0.14]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "skinsphere";
Transform142.children = new MFNode();

Transform142.children[0] = Shape143;

HAnimSegment133.children[3] = Transform142;

Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[0.171,0.65,0]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "skinsphere";
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

HAnimSegment133.children[4] = Transform144;

Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.02,0.65,0]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "skinsphere";
Transform146.children = new MFNode();

Transform146.children[0] = Shape147;

HAnimSegment133.children[5] = Transform146;

Transform Transform148 = createNode("Transform");
Transform148.translation = new SFVec3f(new float[0.1,0.65,-0.08]);
Shape Shape149 = createNode("Shape");
Shape149.USE = "skinsphere";
Transform148.children = new MFNode();

Transform148.children[0] = Shape149;

HAnimSegment133.children[6] = Transform148;

Transform Transform150 = createNode("Transform");
Transform150.translation = new SFVec3f(new float[0.1,0.65,0.07]);
Shape Shape151 = createNode("Shape");
Shape151.USE = "skinsphere";
Transform150.children = new MFNode();

Transform150.children[0] = Shape151;

HAnimSegment133.children[7] = Transform150;

HAnimSite HAnimSite152 = createNode("HAnimSite");
HAnimSite152.name = "l_knee_crease";
HAnimSite152.DEF = "Joe_l_knee_crease";
HAnimSite152.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape153 = createNode("Shape");
Shape153.USE = "sitebox";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = Shape153;

HAnimSegment133.children[8] = HAnimSite152;

HAnimSite HAnimSite154 = createNode("HAnimSite");
HAnimSite154.name = "l_femoral_lateral_epicn";
HAnimSite154.DEF = "Joe_l_femoral_lateral_epicn";
HAnimSite154.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape155 = createNode("Shape");
Shape155.USE = "sitebox";
HAnimSite154.children = new MFNode();

HAnimSite154.children[0] = Shape155;

HAnimSegment133.children[9] = HAnimSite154;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.name = "l_femoral_medial_epicn";
HAnimSite156.DEF = "Joe_l_femoral_medial_epicn";
HAnimSite156.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape157 = createNode("Shape");
Shape157.USE = "sitebox";
HAnimSite156.children = new MFNode();

HAnimSite156.children[0] = Shape157;

HAnimSegment133.children[10] = HAnimSite156;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.name = "l_knee";
HAnimJoint158.DEF = "Joe_l_knee";
HAnimJoint158.center = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,0]);
HAnimJoint158.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint158.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint158.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment159 = createNode("HAnimSegment");
HAnimSegment159.name = "l_calf";
HAnimSegment159.DEF = "Joe_l_calf";
Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,0]);
Shape Shape161 = createNode("Shape");
Shape161.USE = "jointbox";
Transform160.children = new MFNode();

Transform160.children[0] = Shape161;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Transform160;

Shape Shape162 = createNode("Shape");
IndexedLineSet IndexedLineSet163 = createNode("IndexedLineSet");
IndexedLineSet163.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate164 = createNode("Coordinate");
Coordinate164.point = new MFVec3f(new float[0.115,0.466,0,0.1,0.069,0]);
IndexedLineSet163.coord = Coordinate164;

Shape162.geometry = IndexedLineSet163;

Appearance Appearance165 = createNode("Appearance");
Appearance165.USE = "SegmentLine";
Shape162.appearance = Appearance165;

HAnimSegment159.children[1] = Shape162;

Transform Transform166 = createNode("Transform");
Transform166.translation = new SFVec3f(new float[0.115,0.466,0.06]);
Shape Shape167 = createNode("Shape");
Shape167.USE = "skinsphere";
Transform166.children = new MFNode();

Transform166.children[0] = Shape167;

HAnimSegment159.children[2] = Transform166;

Transform Transform168 = createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape169 = createNode("Shape");
Shape169.USE = "skinsphere";
Transform168.children = new MFNode();

Transform168.children[0] = Shape169;

HAnimSegment159.children[3] = Transform168;

Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "skinsphere";
Transform170.children = new MFNode();

Transform170.children[0] = Shape171;

HAnimSegment159.children[4] = Transform170;

Transform Transform172 = createNode("Transform");
Transform172.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape173 = createNode("Shape");
Shape173.USE = "skinsphere";
Transform172.children = new MFNode();

Transform172.children[0] = Shape173;

HAnimSegment159.children[5] = Transform172;

Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.17,0.3,0]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "skinsphere";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment159.children[6] = Transform174;

Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.06,0.3,0]);
Shape Shape177 = createNode("Shape");
Shape177.USE = "skinsphere";
Transform176.children = new MFNode();

Transform176.children[0] = Shape177;

HAnimSegment159.children[7] = Transform176;

Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.1,0.3,-0.05]);
Shape Shape179 = createNode("Shape");
Shape179.USE = "skinsphere";
Transform178.children = new MFNode();

Transform178.children[0] = Shape179;

HAnimSegment159.children[8] = Transform178;

Transform Transform180 = createNode("Transform");
Transform180.translation = new SFVec3f(new float[0.1,0.3,0.05]);
Shape Shape181 = createNode("Shape");
Shape181.USE = "skinsphere";
Transform180.children = new MFNode();

Transform180.children[0] = Shape181;

HAnimSegment159.children[9] = Transform180;

HAnimSite HAnimSite182 = createNode("HAnimSite");
HAnimSite182.name = "l_lateral_malleolus";
HAnimSite182.DEF = "Joe_l_lateral_malleolus";
HAnimSite182.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape183 = createNode("Shape");
Shape183.USE = "sitebox";
HAnimSite182.children = new MFNode();

HAnimSite182.children[0] = Shape183;

HAnimSegment159.children[10] = HAnimSite182;

HAnimSite HAnimSite184 = createNode("HAnimSite");
HAnimSite184.name = "l_medial_malleolus";
HAnimSite184.DEF = "Joe_l_medial_malleolus";
HAnimSite184.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "sitebox";
HAnimSite184.children = new MFNode();

HAnimSite184.children[0] = Shape185;

HAnimSegment159.children[11] = HAnimSite184;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.name = "l_ankle";
HAnimJoint186.DEF = "Joe_l_ankle";
HAnimJoint186.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint186.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint186.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint186.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.name = "l_hindfoot";
HAnimSegment187.DEF = "Joe_l_hindfoot";
Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[0.115,0.069,0]);
Shape Shape189 = createNode("Shape");
Shape189.USE = "jointbox";
Transform188.children = new MFNode();

Transform188.children[0] = Shape189;

HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = Transform188;

Shape Shape190 = createNode("Shape");
IndexedLineSet IndexedLineSet191 = createNode("IndexedLineSet");
IndexedLineSet191.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0.1,0.069,0,0.115,0.031,0.03]);
IndexedLineSet191.coord = Coordinate192;

Shape190.geometry = IndexedLineSet191;

Appearance Appearance193 = createNode("Appearance");
Appearance193.USE = "SegmentLine";
Shape190.appearance = Appearance193;

HAnimSegment187.children[1] = Shape190;

Transform Transform194 = createNode("Transform");
Transform194.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape195 = createNode("Shape");
Shape195.USE = "skinsphere";
Transform194.children = new MFNode();

Transform194.children[0] = Shape195;

HAnimSegment187.children[2] = Transform194;

Transform Transform196 = createNode("Transform");
Transform196.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape197 = createNode("Shape");
Shape197.USE = "skinsphere";
Transform196.children = new MFNode();

Transform196.children[0] = Shape197;

HAnimSegment187.children[3] = Transform196;

Transform Transform198 = createNode("Transform");
Transform198.translation = new SFVec3f(new float[0.115,0.069,-0.045]);
Shape Shape199 = createNode("Shape");
Shape199.USE = "skinsphere";
Transform198.children = new MFNode();

Transform198.children[0] = Shape199;

HAnimSegment187.children[4] = Transform198;

Transform Transform200 = createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.117,0.0975,0.0615]);
Shape Shape201 = createNode("Shape");
Shape201.USE = "skinsphere";
Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

HAnimSegment187.children[5] = Transform200;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.name = "l_sphyrion";
HAnimSite202.DEF = "Joe_l_sphyrion";
HAnimSite202.translation = new SFVec3f(new float[0.09,0.056,0.0125]);
Shape Shape203 = createNode("Shape");
Shape203.USE = "sitebox";
HAnimSite202.children = new MFNode();

HAnimSite202.children[0] = Shape203;

HAnimSegment187.children[6] = HAnimSite202;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.name = "l_calcaneous_post";
HAnimSite204.DEF = "Joe_l_calcaneous_post";
HAnimSite204.translation = new SFVec3f(new float[0.115,0.04,-0.055]);
Shape Shape205 = createNode("Shape");
Shape205.USE = "sitebox";
HAnimSite204.children = new MFNode();

HAnimSite204.children[0] = Shape205;

HAnimSegment187.children[7] = HAnimSite204;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.name = "l_subtalar";
HAnimJoint206.DEF = "Joe_l_subtalar";
HAnimJoint206.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint206.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint206.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.name = "l_midproximal";
HAnimSegment207.DEF = "Joe_l_midproximal";
Transform Transform208 = createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.115,0.031,0.03]);
Shape Shape209 = createNode("Shape");
Shape209.USE = "jointbox";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = Transform208;

Shape Shape210 = createNode("Shape");
IndexedLineSet IndexedLineSet211 = createNode("IndexedLineSet");
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.115,0.031,0.03,0.115,0.037,0.09]);
IndexedLineSet211.coord = Coordinate212;

Shape210.geometry = IndexedLineSet211;

Appearance Appearance213 = createNode("Appearance");
Appearance213.USE = "SegmentLine";
Shape210.appearance = Appearance213;

HAnimSegment207.children[1] = Shape210;

Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0.1375,0.006,-0.03]);
Shape Shape215 = createNode("Shape");
Shape215.USE = "skinsphere";
Transform214.children = new MFNode();

Transform214.children[0] = Shape215;

HAnimSegment207.children[2] = Transform214;

Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.095,0.006,-0.03]);
Shape Shape217 = createNode("Shape");
Shape217.USE = "skinsphere";
Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

HAnimSegment207.children[3] = Transform216;

Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.115,0.015,-0.045]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "skinsphere";
Transform218.children = new MFNode();

Transform218.children[0] = Shape219;

HAnimSegment207.children[4] = Transform218;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.name = "l_midtarsal";
HAnimJoint220.DEF = "Joe_l_midtarsal";
HAnimJoint220.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint220.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint220.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint220.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint220.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.name = "l_middistal";
HAnimSegment221.DEF = "Joe_l_middistal";
Transform Transform222 = createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.115,0.037,0.09]);
Shape Shape223 = createNode("Shape");
Shape223.USE = "jointbox";
Transform222.children = new MFNode();

Transform222.children[0] = Shape223;

HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = Transform222;

Shape Shape224 = createNode("Shape");
IndexedLineSet IndexedLineSet225 = createNode("IndexedLineSet");
IndexedLineSet225.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0.115,0.037,0.09,0.115,0.02,0.122]);
IndexedLineSet225.coord = Coordinate226;

Shape224.geometry = IndexedLineSet225;

Appearance Appearance227 = createNode("Appearance");
Appearance227.USE = "SegmentLine";
Shape224.appearance = Appearance227;

HAnimSegment221.children[1] = Shape224;

Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[0.11500000208616257,0.05999999865889549,0.10000000149011612]);
Shape Shape229 = createNode("Shape");
Shape229.USE = "skinsphere";
Transform228.children = new MFNode();

Transform228.children[0] = Shape229;

HAnimSegment221.children[2] = Transform228;

Transform Transform230 = createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.11500000208616257,0,0.07000000029802322]);
Shape Shape231 = createNode("Shape");
Shape231.USE = "skinsphere";
Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

HAnimSegment221.children[3] = Transform230;

Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.16500000655651093,0,0.07000000029802322]);
Shape Shape233 = createNode("Shape");
Shape233.USE = "skinsphere";
Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

HAnimSegment221.children[4] = Transform232;

Transform Transform234 = createNode("Transform");
Transform234.translation = new SFVec3f(new float[0.0949999988079071,0,0.07000000029802322]);
Shape Shape235 = createNode("Shape");
Shape235.USE = "skinsphere";
Transform234.children = new MFNode();

Transform234.children[0] = Shape235;

HAnimSegment221.children[5] = Transform234;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.name = "l_metatarsal_pha1";
HAnimSite236.DEF = "Joe_l_metatarsal_pha1";
HAnimSite236.translation = new SFVec3f(new float[0.08699999749660492,0.009999999776482582,0.12200000137090683]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "sitebox";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = Shape237;

HAnimSegment221.children[6] = HAnimSite236;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "l_metatarsal";
HAnimJoint238.DEF = "Joe_l_metatarsal";
HAnimJoint238.center = new SFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12200000137090683]);
HAnimJoint238.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint238.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "l_forefoot";
HAnimSegment239.DEF = "Joe_l_forefoot";
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12999999523162842]);
Shape Shape241 = createNode("Shape");
Shape241.USE = "jointbox";
Transform240.children = new MFNode();

Transform240.children[0] = Shape241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

Shape Shape242 = createNode("Shape");
IndexedLineSet IndexedLineSet243 = createNode("IndexedLineSet");
IndexedLineSet243.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate244 = createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12200000137090683,0.13199999928474426,0.013000000268220901,0.1899999976158142]);
IndexedLineSet243.coord = Coordinate244;

Shape242.geometry = IndexedLineSet243;

Appearance Appearance245 = createNode("Appearance");
Appearance245.USE = "SegmentLine";
Shape242.appearance = Appearance245;

HAnimSegment239.children[1] = Shape242;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.11500000208616257,0.03999999910593033,0.12999999523162842]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "skinsphere";
Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

HAnimSegment239.children[2] = Transform246;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.125,0,0.11999999731779099]);
Shape Shape249 = createNode("Shape");
Shape249.USE = "skinsphere";
Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

HAnimSegment239.children[3] = Transform248;

Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.16500000655651093,0,0.11999999731779099]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "skinsphere";
Transform250.children = new MFNode();

Transform250.children[0] = Shape251;

HAnimSegment239.children[4] = Transform250;

Transform Transform252 = createNode("Transform");
Transform252.translation = new SFVec3f(new float[0.08699999749660492,0,0.12200000137090683]);
Shape Shape253 = createNode("Shape");
Shape253.USE = "skinsphere";
Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

HAnimSegment239.children[5] = Transform252;

Transform Transform254 = createNode("Transform");
Transform254.translation = new SFVec3f(new float[0.09000000357627869,0.012000000104308128,0.18799999356269836]);
Shape Shape255 = createNode("Shape");
Shape255.USE = "skinsphere";
Transform254.children = new MFNode();

Transform254.children[0] = Shape255;

HAnimSegment239.children[6] = Transform254;

Transform Transform256 = createNode("Transform");
Transform256.translation = new SFVec3f(new float[0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape257 = createNode("Shape");
Shape257.USE = "skinsphere";
Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

HAnimSegment239.children[7] = Transform256;

Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.12800000607967377,0.010999999940395355,0.1850000023841858]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "skinsphere";
Transform258.children = new MFNode();

Transform258.children[0] = Shape259;

HAnimSegment239.children[8] = Transform258;

Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.1420000046491623,0.010999999940395355,0.17800000309944153]);
Shape Shape261 = createNode("Shape");
Shape261.USE = "skinsphere";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

HAnimSegment239.children[9] = Transform260;

Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[0.15399999916553497,0.009999999776482582,0.1679999977350235]);
Shape Shape263 = createNode("Shape");
Shape263.USE = "skinsphere";
Transform262.children = new MFNode();

Transform262.children[0] = Shape263;

HAnimSegment239.children[10] = Transform262;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.name = "l_metatarsal_pha5";
HAnimSite264.DEF = "Joe_l_metatarsal_pha5";
HAnimSite264.translation = new SFVec3f(new float[0.16500000655651093,0.009999999776482582,0.11999999731779099]);
Shape Shape265 = createNode("Shape");
Shape265.USE = "sitebox";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = Shape265;

HAnimSegment239.children[11] = HAnimSite264;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "l_digit2";
HAnimSite266.DEF = "Joe_l_digit2";
HAnimSite266.translation = new SFVec3f(new float[0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape267 = createNode("Shape");
Shape267.USE = "sitebox";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = Shape267;

HAnimSegment239.children[12] = HAnimSite266;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint220.children[1] = HAnimJoint238;

HAnimJoint206.children[1] = HAnimJoint220;

HAnimJoint186.children[1] = HAnimJoint206;

HAnimJoint158.children[1] = HAnimJoint186;

HAnimJoint132.children[1] = HAnimJoint158;

HAnimJoint102.children[1] = HAnimJoint132;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "r_hip";
HAnimJoint268.DEF = "Joe_r_hip";
HAnimJoint268.center = new SFVec3f(new float[-0.10000000149011612,0.9200000166893005,0]);
HAnimJoint268.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101]);
HAnimJoint268.skinCoordWeight = new MFFloat(new float[0.6499999761581421,1,1,1,1,1]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "r_thigh";
HAnimSegment269.DEF = "Joe_r_thigh";
Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.10000000149011612,0.9200000166893005,0]);
Shape Shape271 = createNode("Shape");
Shape271.USE = "jointbox";
Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = Transform270;

Shape Shape272 = createNode("Shape");
IndexedLineSet IndexedLineSet273 = createNode("IndexedLineSet");
IndexedLineSet273.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate274 = createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[-0.10000000149011612,0.9200000166893005,0,-0.10000000149011612,0.49129998683929443,0]);
IndexedLineSet273.coord = Coordinate274;

Shape272.geometry = IndexedLineSet273;

Appearance Appearance275 = createNode("Appearance");
Appearance275.USE = "SegmentLine";
Shape272.appearance = Appearance275;

HAnimSegment269.children[1] = Shape272;

Transform Transform276 = createNode("Transform");
Transform276.translation = new SFVec3f(new float[-0.07900000363588333,0.9200000166893005,-0.14000000059604645]);
Shape Shape277 = createNode("Shape");
Shape277.USE = "skinsphere";
Transform276.children = new MFNode();

Transform276.children[0] = Shape277;

HAnimSegment269.children[2] = Transform276;

Transform Transform278 = createNode("Transform");
Transform278.translation = new SFVec3f(new float[-0.10000000149011612,0.8999999761581421,0.07500000298023224]);
Shape Shape279 = createNode("Shape");
Shape279.USE = "skinsphere";
Transform278.children = new MFNode();

Transform278.children[0] = Shape279;

HAnimSegment269.children[3] = Transform278;

Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.17100000381469727,0.6499999761581421,0]);
Shape Shape281 = createNode("Shape");
Shape281.USE = "skinsphere";
Transform280.children = new MFNode();

Transform280.children[0] = Shape281;

HAnimSegment269.children[4] = Transform280;

Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[-0.019999999552965164,0.6499999761581421,0]);
Shape Shape283 = createNode("Shape");
Shape283.USE = "skinsphere";
Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

HAnimSegment269.children[5] = Transform282;

Transform Transform284 = createNode("Transform");
Transform284.translation = new SFVec3f(new float[-0.10000000149011612,0.6499999761581421,-0.07999999821186066]);
Shape Shape285 = createNode("Shape");
Shape285.USE = "skinsphere";
Transform284.children = new MFNode();

Transform284.children[0] = Shape285;

HAnimSegment269.children[6] = Transform284;

Transform Transform286 = createNode("Transform");
Transform286.translation = new SFVec3f(new float[-0.10000000149011612,0.6499999761581421,0.07000000029802322]);
Shape Shape287 = createNode("Shape");
Shape287.USE = "skinsphere";
Transform286.children = new MFNode();

Transform286.children[0] = Shape287;

HAnimSegment269.children[7] = Transform286;

HAnimSite HAnimSite288 = createNode("HAnimSite");
HAnimSite288.name = "r_knee_crease";
HAnimSite288.DEF = "Joe_r_knee_crease";
HAnimSite288.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape289 = createNode("Shape");
Shape289.USE = "sitebox";
HAnimSite288.children = new MFNode();

HAnimSite288.children[0] = Shape289;

HAnimSegment269.children[8] = HAnimSite288;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.name = "r_femoral_lateral_epicn";
HAnimSite290.DEF = "Joe_r_femoral_lateral_epicn";
HAnimSite290.translation = new SFVec3f(new float[-0.17000000178813934,0.4659999907016754,0]);
Shape Shape291 = createNode("Shape");
Shape291.USE = "sitebox";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = Shape291;

HAnimSegment269.children[9] = HAnimSite290;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_femoral_medial_epicn";
HAnimSite292.DEF = "Joe_r_femoral_medial_epicn";
HAnimSite292.translation = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
Shape Shape293 = createNode("Shape");
Shape293.USE = "sitebox";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = Shape293;

HAnimSegment269.children[10] = HAnimSite292;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.name = "r_knee";
HAnimJoint294.DEF = "Joe_r_knee";
HAnimJoint294.center = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
HAnimJoint294.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369]);
HAnimJoint294.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint294.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint294.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.name = "r_calf";
HAnimSegment295.DEF = "Joe_r_calf";
Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[-0.10000000149011612,0.49129998683929443,0]);
Shape Shape297 = createNode("Shape");
Shape297.USE = "jointbox";
Transform296.children = new MFNode();

Transform296.children[0] = Shape297;

HAnimSegment295.children = new MFNode();

HAnimSegment295.children[0] = Transform296;

Shape Shape298 = createNode("Shape");
IndexedLineSet IndexedLineSet299 = createNode("IndexedLineSet");
IndexedLineSet299.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate300 = createNode("Coordinate");
Coordinate300.point = new MFVec3f(new float[-0.10000000149011612,0.49129998683929443,0,-0.10000000149011612,0.07119999825954437,0]);
IndexedLineSet299.coord = Coordinate300;

Shape298.geometry = IndexedLineSet299;

Appearance Appearance301 = createNode("Appearance");
Appearance301.USE = "SegmentLine";
Shape298.appearance = Appearance301;

HAnimSegment295.children[1] = Shape298;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,0.05999999865889549]);
Shape Shape303 = createNode("Shape");
Shape303.USE = "skinsphere";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

HAnimSegment295.children[2] = Transform302;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "skinsphere";
Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

HAnimSegment295.children[3] = Transform304;

Transform Transform306 = createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.17000000178813934,0.4659999907016754,0]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "skinsphere";
Transform306.children = new MFNode();

Transform306.children[0] = Shape307;

HAnimSegment295.children[4] = Transform306;

Transform Transform308 = createNode("Transform");
Transform308.translation = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
Shape Shape309 = createNode("Shape");
Shape309.USE = "skinsphere";
Transform308.children = new MFNode();

Transform308.children[0] = Shape309;

HAnimSegment295.children[5] = Transform308;

Transform Transform310 = createNode("Transform");
Transform310.translation = new SFVec3f(new float[-0.17000000178813934,0.30000001192092896,0]);
Shape Shape311 = createNode("Shape");
Shape311.USE = "skinsphere";
Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

HAnimSegment295.children[6] = Transform310;

Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.05999999865889549,0.30000001192092896,0]);
Shape Shape313 = createNode("Shape");
Shape313.USE = "skinsphere";
Transform312.children = new MFNode();

Transform312.children[0] = Shape313;

HAnimSegment295.children[7] = Transform312;

Transform Transform314 = createNode("Transform");
Transform314.translation = new SFVec3f(new float[-0.10000000149011612,0.30000001192092896,-0.05000000074505806]);
Shape Shape315 = createNode("Shape");
Shape315.USE = "skinsphere";
Transform314.children = new MFNode();

Transform314.children[0] = Shape315;

HAnimSegment295.children[8] = Transform314;

Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[-0.10000000149011612,0.30000001192092896,0.05000000074505806]);
Shape Shape317 = createNode("Shape");
Shape317.USE = "skinsphere";
Transform316.children = new MFNode();

Transform316.children[0] = Shape317;

HAnimSegment295.children[9] = Transform316;

HAnimSite HAnimSite318 = createNode("HAnimSite");
HAnimSite318.name = "r_lateral_malleolus";
HAnimSite318.DEF = "Joe_r_lateral_malleolus";
HAnimSite318.translation = new SFVec3f(new float[-0.15000000596046448,0.07000000029802322,0]);
Shape Shape319 = createNode("Shape");
Shape319.USE = "sitebox";
HAnimSite318.children = new MFNode();

HAnimSite318.children[0] = Shape319;

HAnimSegment295.children[10] = HAnimSite318;

HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.name = "r_medial_malleolus";
HAnimSite320.DEF = "Joe_r_medial_malleolus";
HAnimSite320.translation = new SFVec3f(new float[-0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape321 = createNode("Shape");
Shape321.USE = "sitebox";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = Shape321;

HAnimSegment295.children[11] = HAnimSite320;

HAnimJoint294.children = new MFNode();

HAnimJoint294.children[0] = HAnimSegment295;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.name = "r_ankle";
HAnimJoint322.DEF = "Joe_r_ankle";
HAnimJoint322.center = new SFVec3f(new float[-0.11500000208616257,0.0689999982714653,0]);
HAnimJoint322.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint322.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint322.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment323 = createNode("HAnimSegment");
HAnimSegment323.name = "r_hindfoot";
HAnimSegment323.DEF = "Joe_r_hindfoot";
Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[-0.10000000149011612,0.07119999825954437,0]);
Shape Shape325 = createNode("Shape");
Shape325.USE = "jointbox";
Transform324.children = new MFNode();

Transform324.children[0] = Shape325;

HAnimSegment323.children = new MFNode();

HAnimSegment323.children[0] = Transform324;

Shape Shape326 = createNode("Shape");
IndexedLineSet IndexedLineSet327 = createNode("IndexedLineSet");
IndexedLineSet327.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.10000000149011612,0.07119999825954437,0,-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
IndexedLineSet327.coord = Coordinate328;

Shape326.geometry = IndexedLineSet327;

Appearance Appearance329 = createNode("Appearance");
Appearance329.USE = "SegmentLine";
Shape326.appearance = Appearance329;

HAnimSegment323.children[1] = Shape326;

Transform Transform330 = createNode("Transform");
Transform330.translation = new SFVec3f(new float[-0.15000000596046448,0.07000000029802322,0]);
Shape Shape331 = createNode("Shape");
Shape331.USE = "skinsphere";
Transform330.children = new MFNode();

Transform330.children[0] = Shape331;

HAnimSegment323.children[2] = Transform330;

Transform Transform332 = createNode("Transform");
Transform332.translation = new SFVec3f(new float[-0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape333 = createNode("Shape");
Shape333.USE = "skinsphere";
Transform332.children = new MFNode();

Transform332.children[0] = Shape333;

HAnimSegment323.children[3] = Transform332;

Transform Transform334 = createNode("Transform");
Transform334.translation = new SFVec3f(new float[-0.11500000208616257,0.0689999982714653,-0.04500000178813934]);
Shape Shape335 = createNode("Shape");
Shape335.USE = "skinsphere";
Transform334.children = new MFNode();

Transform334.children[0] = Shape335;

HAnimSegment323.children[4] = Transform334;

Transform Transform336 = createNode("Transform");
Transform336.translation = new SFVec3f(new float[-0.11699999868869781,0.09749999642372131,0.061500001698732376]);
Shape Shape337 = createNode("Shape");
Shape337.USE = "skinsphere";
Transform336.children = new MFNode();

Transform336.children[0] = Shape337;

HAnimSegment323.children[5] = Transform336;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "r_sphyrion";
HAnimSite338.DEF = "Joe_r_sphyrion";
HAnimSite338.translation = new SFVec3f(new float[-0.09000000357627869,0.0560000017285347,0.012500000186264515]);
Shape Shape339 = createNode("Shape");
Shape339.USE = "sitebox";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = Shape339;

HAnimSegment323.children[6] = HAnimSite338;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.name = "r_calcaneous_post";
HAnimSite340.DEF = "Joe_r_calcaneous_post";
HAnimSite340.translation = new SFVec3f(new float[-0.11500000208616257,0.03999999910593033,-0.054999999701976776]);
Shape Shape341 = createNode("Shape");
Shape341.USE = "sitebox";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = Shape341;

HAnimSegment323.children[7] = HAnimSite340;

HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.name = "r_subtalar";
HAnimJoint342.DEF = "Joe_r_subtalar";
HAnimJoint342.center = new SFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
HAnimJoint342.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint342.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint342.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint342.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment343 = createNode("HAnimSegment");
HAnimSegment343.name = "r_midproximal";
HAnimSegment343.DEF = "Joe_r_midproximal";
Transform Transform344 = createNode("Transform");
Transform344.translation = new SFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
Shape Shape345 = createNode("Shape");
Shape345.USE = "jointbox";
Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

HAnimSegment343.children = new MFNode();

HAnimSegment343.children[0] = Transform344;

Shape Shape346 = createNode("Shape");
IndexedLineSet IndexedLineSet347 = createNode("IndexedLineSet");
IndexedLineSet347.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582,-0.10000000149011612,0.019999999552965164,0.07000000029802322]);
IndexedLineSet347.coord = Coordinate348;

Shape346.geometry = IndexedLineSet347;

Appearance Appearance349 = createNode("Appearance");
Appearance349.USE = "SegmentLine";
Shape346.appearance = Appearance349;

HAnimSegment343.children[1] = Shape346;

Transform Transform350 = createNode("Transform");
Transform350.translation = new SFVec3f(new float[-0.13750000298023224,0.006000000052154064,-0.029999999329447746]);
Shape Shape351 = createNode("Shape");
Shape351.USE = "skinsphere";
Transform350.children = new MFNode();

Transform350.children[0] = Shape351;

HAnimSegment343.children[2] = Transform350;

Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.0949999988079071,0.006000000052154064,-0.029999999329447746]);
Shape Shape353 = createNode("Shape");
Shape353.USE = "skinsphere";
Transform352.children = new MFNode();

Transform352.children[0] = Shape353;

HAnimSegment343.children[3] = Transform352;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.0949999988079071,0.006000000052154064,-0.029999999329447746]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "skinsphere";
Transform354.children = new MFNode();

Transform354.children[0] = Shape355;

HAnimSegment343.children[4] = Transform354;

HAnimJoint342.children = new MFNode();

HAnimJoint342.children[0] = HAnimSegment343;

HAnimJoint HAnimJoint356 = createNode("HAnimJoint");
HAnimJoint356.name = "r_midtarsal";
HAnimJoint356.DEF = "Joe_r_midtarsal";
HAnimJoint356.center = new SFVec3f(new float[-0.11500000208616257,0.03700000047683716,0.09000000357627869]);
HAnimJoint356.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint356.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint356.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment357 = createNode("HAnimSegment");
HAnimSegment357.name = "r_middistal";
HAnimSegment357.DEF = "Joe_r_middistal";
Transform Transform358 = createNode("Transform");
Transform358.translation = new SFVec3f(new float[-0.10000000149011612,0.019999999552965164,0.07000000029802322]);
Shape Shape359 = createNode("Shape");
Shape359.USE = "jointbox";
Transform358.children = new MFNode();

Transform358.children[0] = Shape359;

HAnimSegment357.children = new MFNode();

HAnimSegment357.children[0] = Transform358;

Shape Shape360 = createNode("Shape");
IndexedLineSet IndexedLineSet361 = createNode("IndexedLineSet");
IndexedLineSet361.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate362 = createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[-0.10000000149011612,0.019999999552965164,0.07000000029802322,-0.10000000149011612,0.009999999776482582,0.14000000059604645]);
IndexedLineSet361.coord = Coordinate362;

Shape360.geometry = IndexedLineSet361;

Appearance Appearance363 = createNode("Appearance");
Appearance363.USE = "SegmentLine";
Shape360.appearance = Appearance363;

HAnimSegment357.children[1] = Shape360;

Transform Transform364 = createNode("Transform");
Transform364.translation = new SFVec3f(new float[-0.11500000208616257,0.05999999865889549,0.10000000149011612]);
Shape Shape365 = createNode("Shape");
Shape365.USE = "skinsphere";
Transform364.children = new MFNode();

Transform364.children[0] = Shape365;

HAnimSegment357.children[2] = Transform364;

Transform Transform366 = createNode("Transform");
Transform366.translation = new SFVec3f(new float[-0.11500000208616257,0,0.07000000029802322]);
Shape Shape367 = createNode("Shape");
Shape367.USE = "skinsphere";
Transform366.children = new MFNode();

Transform366.children[0] = Shape367;

HAnimSegment357.children[3] = Transform366;

Transform Transform368 = createNode("Transform");
Transform368.translation = new SFVec3f(new float[-0.16500000655651093,0,0.07000000029802322]);
Shape Shape369 = createNode("Shape");
Shape369.USE = "skinsphere";
Transform368.children = new MFNode();

Transform368.children[0] = Shape369;

HAnimSegment357.children[4] = Transform368;

Transform Transform370 = createNode("Transform");
Transform370.translation = new SFVec3f(new float[-0.16500000655651093,0,0.07000000029802322]);
Shape Shape371 = createNode("Shape");
Shape371.USE = "skinsphere";
Transform370.children = new MFNode();

Transform370.children[0] = Shape371;

HAnimSegment357.children[5] = Transform370;

HAnimSite HAnimSite372 = createNode("HAnimSite");
HAnimSite372.name = "r_metatarsal_pha1";
HAnimSite372.DEF = "Joe_r_metatarsal_pha1";
HAnimSite372.translation = new SFVec3f(new float[-0.11500000208616257,0.019999999552965164,0.12200000137090683]);
Shape Shape373 = createNode("Shape");
Shape373.USE = "sitebox";
HAnimSite372.children = new MFNode();

HAnimSite372.children[0] = Shape373;

HAnimSegment357.children[6] = HAnimSite372;

HAnimJoint356.children = new MFNode();

HAnimJoint356.children[0] = HAnimSegment357;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.name = "r_metatarsal";
HAnimJoint374.DEF = "Joe_r_metatarsal";
HAnimJoint374.center = new SFVec3f(new float[-0.10000000149011612,0.009999999776482582,0.14000000059604645]);
HAnimJoint374.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint374.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint374.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint374.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment375 = createNode("HAnimSegment");
HAnimSegment375.name = "r_forefoot";
HAnimSegment375.DEF = "Joe_r_forefoot";
Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[-0.10859999805688858,0.009999999776482582,0.14000000059604645]);
Shape Shape377 = createNode("Shape");
Shape377.USE = "jointbox";
Transform376.children = new MFNode();

Transform376.children[0] = Shape377;

HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = Transform376;

Shape Shape378 = createNode("Shape");
IndexedLineSet IndexedLineSet379 = createNode("IndexedLineSet");
IndexedLineSet379.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.10000000149011612,0.009999999776482582,0.14000000059604645,-0.10429999977350235,0.0015999999595806003,0.20000000298023224]);
IndexedLineSet379.coord = Coordinate380;

Shape378.geometry = IndexedLineSet379;

Appearance Appearance381 = createNode("Appearance");
Appearance381.USE = "SegmentLine";
Shape378.appearance = Appearance381;

HAnimSegment375.children[1] = Shape378;

Transform Transform382 = createNode("Transform");
Transform382.translation = new SFVec3f(new float[-0.11500000208616257,0.03999999910593033,0.12999999523162842]);
Shape Shape383 = createNode("Shape");
Shape383.USE = "skinsphere";
Transform382.children = new MFNode();

Transform382.children[0] = Shape383;

HAnimSegment375.children[2] = Transform382;

Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.125,0,0.11999999731779099]);
Shape Shape385 = createNode("Shape");
Shape385.USE = "skinsphere";
Transform384.children = new MFNode();

Transform384.children[0] = Shape385;

HAnimSegment375.children[3] = Transform384;

Transform Transform386 = createNode("Transform");
Transform386.translation = new SFVec3f(new float[-0.16500000655651093,0,0.11999999731779099]);
Shape Shape387 = createNode("Shape");
Shape387.USE = "skinsphere";
Transform386.children = new MFNode();

Transform386.children[0] = Shape387;

HAnimSegment375.children[4] = Transform386;

Transform Transform388 = createNode("Transform");
Transform388.translation = new SFVec3f(new float[-0.08699999749660492,0,0.12200000137090683]);
Shape Shape389 = createNode("Shape");
Shape389.USE = "skinsphere";
Transform388.children = new MFNode();

Transform388.children[0] = Shape389;

HAnimSegment375.children[5] = Transform388;

Transform Transform390 = createNode("Transform");
Transform390.translation = new SFVec3f(new float[-0.09000000357627869,0.012000000104308128,0.18799999356269836]);
Shape Shape391 = createNode("Shape");
Shape391.USE = "skinsphere";
Transform390.children = new MFNode();

Transform390.children[0] = Shape391;

HAnimSegment375.children[6] = Transform390;

Transform Transform392 = createNode("Transform");
Transform392.translation = new SFVec3f(new float[-0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape393 = createNode("Shape");
Shape393.USE = "skinsphere";
Transform392.children = new MFNode();

Transform392.children[0] = Shape393;

HAnimSegment375.children[7] = Transform392;

Transform Transform394 = createNode("Transform");
Transform394.translation = new SFVec3f(new float[-0.12800000607967377,0.010999999940395355,0.1850000023841858]);
Shape Shape395 = createNode("Shape");
Shape395.USE = "skinsphere";
Transform394.children = new MFNode();

Transform394.children[0] = Shape395;

HAnimSegment375.children[8] = Transform394;

Transform Transform396 = createNode("Transform");
Transform396.translation = new SFVec3f(new float[-0.1420000046491623,0.010999999940395355,0.17800000309944153]);
Shape Shape397 = createNode("Shape");
Shape397.USE = "skinsphere";
Transform396.children = new MFNode();

Transform396.children[0] = Shape397;

HAnimSegment375.children[9] = Transform396;

Transform Transform398 = createNode("Transform");
Transform398.translation = new SFVec3f(new float[-0.15399999916553497,0.009999999776482582,0.1679999977350235]);
Shape Shape399 = createNode("Shape");
Shape399.USE = "skinsphere";
Transform398.children = new MFNode();

Transform398.children[0] = Shape399;

HAnimSegment375.children[10] = Transform398;

HAnimSite HAnimSite400 = createNode("HAnimSite");
HAnimSite400.name = "r_metatarsal_pha5";
HAnimSite400.DEF = "Joe_r_metatarsal_pha5";
HAnimSite400.translation = new SFVec3f(new float[-0.16500000655651093,0.009999999776482582,0.11999999731779099]);
Shape Shape401 = createNode("Shape");
Shape401.USE = "sitebox";
HAnimSite400.children = new MFNode();

HAnimSite400.children[0] = Shape401;

HAnimSegment375.children[11] = HAnimSite400;

HAnimSite HAnimSite402 = createNode("HAnimSite");
HAnimSite402.name = "r_digit2";
HAnimSite402.DEF = "Joe_r_digit2";
HAnimSite402.translation = new SFVec3f(new float[-0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape403 = createNode("Shape");
Shape403.USE = "sitebox";
HAnimSite402.children = new MFNode();

HAnimSite402.children[0] = Shape403;

HAnimSegment375.children[12] = HAnimSite402;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

HAnimJoint356.children[1] = HAnimJoint374;

HAnimJoint342.children[1] = HAnimJoint356;

HAnimJoint322.children[1] = HAnimJoint342;

HAnimJoint294.children[1] = HAnimJoint322;

HAnimJoint268.children[1] = HAnimJoint294;

HAnimJoint102.children[2] = HAnimJoint268;

HAnimJoint90.children[1] = HAnimJoint102;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.name = "vl5";
HAnimJoint404.DEF = "Joe_vl5";
HAnimJoint404.center = new SFVec3f(new float[0,1.0449999570846558,-0.0949999988079071]);
HAnimJoint404.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint404.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment405 = createNode("HAnimSegment");
HAnimSegment405.name = "toPelvis";
HAnimSegment405.DEF = "Joe_toPelvisMarker";
Shape Shape406 = createNode("Shape");
IndexedLineSet IndexedLineSet407 = createNode("IndexedLineSet");
IndexedLineSet407.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate408 = createNode("Coordinate");
Coordinate408.point = new MFVec3f(new float[0,1.0449999570846558,-0.0949999988079071,0,0.914900004863739,0.0015999999595806003]);
IndexedLineSet407.coord = Coordinate408;

Shape406.geometry = IndexedLineSet407;

Appearance Appearance409 = createNode("Appearance");
Appearance409.USE = "SegmentLine";
Shape406.appearance = Appearance409;

HAnimSegment405.children = new MFNode();

HAnimSegment405.children[0] = Shape406;

HAnimJoint404.children = new MFNode();

HAnimJoint404.children[0] = HAnimSegment405;

HAnimSegment HAnimSegment410 = createNode("HAnimSegment");
HAnimSegment410.name = "l5";
HAnimSegment410.DEF = "Joe_l5";
Shape Shape411 = createNode("Shape");
IndexedLineSet IndexedLineSet412 = createNode("IndexedLineSet");
IndexedLineSet412.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate413 = createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0,1.0449999570846558,-0.0949999988079071,0,1.0679999589920044,-0.08500000089406967]);
IndexedLineSet412.coord = Coordinate413;

Shape411.geometry = IndexedLineSet412;

Appearance Appearance414 = createNode("Appearance");
Appearance414.USE = "SegmentLine";
Shape411.appearance = Appearance414;

HAnimSegment410.children = new MFNode();

HAnimSegment410.children[0] = Shape411;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "waist_preferred_post";
HAnimSite415.DEF = "Joe_waist_preferred_post";
HAnimSite415.translation = new SFVec3f(new float[0,1.0915000438690186,-0.10909999907016754]);
Shape Shape416 = createNode("Shape");
Shape416.USE = "sitebox";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = Shape416;

HAnimSegment410.children[1] = HAnimSite415;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.name = "navel";
HAnimSite417.DEF = "Joe_navel";
HAnimSite417.translation = new SFVec3f(new float[0,1.0722500085830688,0.09000000357627869]);
Shape Shape418 = createNode("Shape");
Shape418.USE = "sitebox";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = Shape418;

HAnimSegment410.children[2] = HAnimSite417;

HAnimJoint404.children[1] = HAnimSegment410;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.name = "vl4";
HAnimJoint419.DEF = "Joe_vl4";
HAnimJoint419.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimJoint419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint419.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.name = "l4";
HAnimSegment420.DEF = "Joe_l4";
Shape Shape421 = createNode("Shape");
IndexedLineSet IndexedLineSet422 = createNode("IndexedLineSet");
IndexedLineSet422.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[0,1.0679999589920044,-0.08500000089406967,0,1.0920000076293945,-0.07249999791383743]);
IndexedLineSet422.coord = Coordinate423;

Shape421.geometry = IndexedLineSet422;

Appearance Appearance424 = createNode("Appearance");
Appearance424.USE = "SegmentLine";
Shape421.appearance = Appearance424;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Shape421;

Transform Transform425 = createNode("Transform");
Transform425.translation = new SFVec3f(new float[0,1.068,-0.085]);
Shape Shape426 = createNode("Shape");
Shape426.USE = "jointbox";
Transform425.children = new MFNode();

Transform425.children[0] = Shape426;

HAnimSegment420.children[1] = Transform425;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.name = "vl3";
HAnimJoint427.DEF = "Joe_vl3";
HAnimJoint427.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimJoint427.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint427.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment428 = createNode("HAnimSegment");
HAnimSegment428.name = "l3";
HAnimSegment428.DEF = "Joe_l3";
Shape Shape429 = createNode("Shape");
IndexedLineSet IndexedLineSet430 = createNode("IndexedLineSet");
IndexedLineSet430.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate431 = createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0,1.092,-0.0725,0,1.12,-0.065]);
IndexedLineSet430.coord = Coordinate431;

Shape429.geometry = IndexedLineSet430;

Appearance Appearance432 = createNode("Appearance");
Appearance432.USE = "SegmentLine";
Shape429.appearance = Appearance432;

HAnimSegment428.children = new MFNode();

HAnimSegment428.children[0] = Shape429;

Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[0,1.092,-0.0725]);
Shape Shape434 = createNode("Shape");
Shape434.USE = "jointbox";
Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

HAnimSegment428.children[1] = Transform433;

HAnimJoint427.children = new MFNode();

HAnimJoint427.children[0] = HAnimSegment428;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.name = "vl2";
HAnimJoint435.DEF = "Joe_vl2";
HAnimJoint435.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint435.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint435.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint435.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint435.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment436 = createNode("HAnimSegment");
HAnimSegment436.name = "l2";
HAnimSegment436.DEF = "Joe_l2";
Shape Shape437 = createNode("Shape");
IndexedLineSet IndexedLineSet438 = createNode("IndexedLineSet");
IndexedLineSet438.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate439 = createNode("Coordinate");
Coordinate439.point = new MFVec3f(new float[0,1.1200000047683716,-0.06499999761581421,0,1.145900011062622,-0.0625]);
IndexedLineSet438.coord = Coordinate439;

Shape437.geometry = IndexedLineSet438;

Appearance Appearance440 = createNode("Appearance");
Appearance440.USE = "SegmentLine";
Shape437.appearance = Appearance440;

HAnimSegment436.children = new MFNode();

HAnimSegment436.children[0] = Shape437;

Transform Transform441 = createNode("Transform");
Transform441.translation = new SFVec3f(new float[0,1.1200000047683716,-0.06499999761581421]);
Shape Shape442 = createNode("Shape");
Shape442.USE = "jointbox";
Transform441.children = new MFNode();

Transform441.children[0] = Shape442;

HAnimSegment436.children[1] = Transform441;

Transform Transform443 = createNode("Transform");
Transform443.translation = new SFVec3f(new float[-0.08699999749660492,1.190000057220459,-0.09000000357627869]);
Shape Shape444 = createNode("Shape");
Shape444.USE = "skinsphere";
Transform443.children = new MFNode();

Transform443.children[0] = Shape444;

HAnimSegment436.children[2] = Transform443;

Transform Transform445 = createNode("Transform");
Transform445.translation = new SFVec3f(new float[0.08699999749660492,1.190000057220459,-0.09000000357627869]);
Shape Shape446 = createNode("Shape");
Shape446.USE = "skinsphere";
Transform445.children = new MFNode();

Transform445.children[0] = Shape446;

HAnimSegment436.children[3] = Transform445;

Transform Transform447 = createNode("Transform");
Transform447.translation = new SFVec3f(new float[0.1720000058412552,1.3200000524520874,-0.029999999329447746]);
Shape Shape448 = createNode("Shape");
Shape448.USE = "skinsphere";
Transform447.children = new MFNode();

Transform447.children[0] = Shape448;

HAnimSegment436.children[4] = Transform447;

Transform Transform449 = createNode("Transform");
Transform449.translation = new SFVec3f(new float[-0.1720000058412552,1.3200000524520874,-0.029999999329447746]);
Shape Shape450 = createNode("Shape");
Shape450.USE = "skinsphere";
Transform449.children = new MFNode();

Transform449.children[0] = Shape450;

HAnimSegment436.children[5] = Transform449;

Transform Transform451 = createNode("Transform");
Transform451.translation = new SFVec3f(new float[0.15000000596046448,1.2300000190734863,-0.014999999664723873]);
Shape Shape452 = createNode("Shape");
Shape452.USE = "skinsphere";
Transform451.children = new MFNode();

Transform451.children[0] = Shape452;

HAnimSegment436.children[6] = Transform451;

Transform Transform453 = createNode("Transform");
Transform453.translation = new SFVec3f(new float[-0.15000000596046448,1.2300000190734863,-0.014999999664723873]);
Shape Shape454 = createNode("Shape");
Shape454.USE = "skinsphere";
Transform453.children = new MFNode();

Transform453.children[0] = Shape454;

HAnimSegment436.children[7] = Transform453;

HAnimSite HAnimSite455 = createNode("HAnimSite");
HAnimSite455.name = "r_rib10";
HAnimSite455.DEF = "Joe_r_rib10";
HAnimSite455.translation = new SFVec3f(new float[-0.08699999749660492,1.190000057220459,0.09000000357627869]);
Shape Shape456 = createNode("Shape");
Shape456.USE = "sitebox";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = Shape456;

HAnimSegment436.children[8] = HAnimSite455;

HAnimSite HAnimSite457 = createNode("HAnimSite");
HAnimSite457.name = "l_rib10";
HAnimSite457.DEF = "Joe_l_rib10";
HAnimSite457.translation = new SFVec3f(new float[0.08699999749660492,1.190000057220459,0.09000000357627869]);
Shape Shape458 = createNode("Shape");
Shape458.USE = "sitebox";
HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = Shape458;

HAnimSegment436.children[9] = HAnimSite457;

HAnimSite HAnimSite459 = createNode("HAnimSite");
HAnimSite459.name = "rib10_midspine";
HAnimSite459.DEF = "Joe_rib10_midspine";
HAnimSite459.translation = new SFVec3f(new float[0,1.1908,-0.1113]);
Shape Shape460 = createNode("Shape");
Shape460.USE = "sitebox";
HAnimSite459.children = new MFNode();

HAnimSite459.children[0] = Shape460;

HAnimSegment436.children[10] = HAnimSite459;

HAnimJoint435.children = new MFNode();

HAnimJoint435.children[0] = HAnimSegment436;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.name = "vl1";
HAnimJoint461.DEF = "Joe_vl1";
HAnimJoint461.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.name = "l1";
HAnimSegment462.DEF = "Joe_l1";
Shape Shape463 = createNode("Shape");
IndexedLineSet IndexedLineSet464 = createNode("IndexedLineSet");
IndexedLineSet464.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate465 = createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0,1.1459,-0.0625,0,1.179,-0.068]);
IndexedLineSet464.coord = Coordinate465;

Shape463.geometry = IndexedLineSet464;

Appearance Appearance466 = createNode("Appearance");
Appearance466.USE = "SegmentLine";
Shape463.appearance = Appearance466;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Shape463;

Transform Transform467 = createNode("Transform");
Transform467.translation = new SFVec3f(new float[0,1.1459,-0.0625]);
Shape Shape468 = createNode("Shape");
Shape468.USE = "jointbox";
Transform467.children = new MFNode();

Transform467.children[0] = Shape468;

HAnimSegment462.children[1] = Transform467;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint HAnimJoint469 = createNode("HAnimJoint");
HAnimJoint469.name = "vt12";
HAnimJoint469.DEF = "Joe_vt12";
HAnimJoint469.center = new SFVec3f(new float[0,1.1790000200271606,-0.06800000369548798]);
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.name = "t12";
HAnimSegment470.DEF = "Joe_t12";
Shape Shape471 = createNode("Shape");
IndexedLineSet IndexedLineSet472 = createNode("IndexedLineSet");
IndexedLineSet472.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate473 = createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0,1.1790000200271606,-0.06800000369548798,0,1.2419999837875366,-0.09000000357627869]);
IndexedLineSet472.coord = Coordinate473;

Shape471.geometry = IndexedLineSet472;

Appearance Appearance474 = createNode("Appearance");
Appearance474.USE = "SegmentLine";
Shape471.appearance = Appearance474;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Shape471;

Transform Transform475 = createNode("Transform");
Transform475.translation = new SFVec3f(new float[0,1.1790000200271606,-0.06800000369548798]);
Shape Shape476 = createNode("Shape");
Shape476.USE = "jointbox";
Transform475.children = new MFNode();

Transform475.children[0] = Shape476;

HAnimSegment470.children[1] = Transform475;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

HAnimJoint HAnimJoint477 = createNode("HAnimJoint");
HAnimJoint477.name = "vt11";
HAnimJoint477.DEF = "Joe_vt11";
HAnimJoint477.center = new SFVec3f(new float[0,1.267899990081787,-0.08100000023841858]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.name = "t11";
HAnimSegment478.DEF = "Joe_t11";
Shape Shape479 = createNode("Shape");
IndexedLineSet IndexedLineSet480 = createNode("IndexedLineSet");
IndexedLineSet480.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate481 = createNode("Coordinate");
Coordinate481.point = new MFVec3f(new float[0,1.2144999504089355,-0.0754999965429306,0,1.2419999837875366,-0.09000000357627869]);
IndexedLineSet480.coord = Coordinate481;

Shape479.geometry = IndexedLineSet480;

Appearance Appearance482 = createNode("Appearance");
Appearance482.USE = "SegmentLine";
Shape479.appearance = Appearance482;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Shape479;

Transform Transform483 = createNode("Transform");
Transform483.translation = new SFVec3f(new float[0,1.2144999504089355,-0.0754999965429306]);
Shape Shape484 = createNode("Shape");
Shape484.USE = "jointbox";
Transform483.children = new MFNode();

Transform483.children[0] = Shape484;

HAnimSegment478.children[1] = Transform483;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.name = "vt10";
HAnimJoint485.DEF = "Joe_vt10";
HAnimJoint485.center = new SFVec3f(new float[0,1.2419999837875366,-0.09000000357627869]);
HAnimJoint485.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint485.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint485.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.name = "t10";
HAnimSegment486.DEF = "Joe_t10";
Shape Shape487 = createNode("Shape");
IndexedLineSet IndexedLineSet488 = createNode("IndexedLineSet");
IndexedLineSet488.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate489 = createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0,1.2419999837875366,-0.09000000357627869,0,1.2680000066757202,-0.10000000149011612]);
IndexedLineSet488.coord = Coordinate489;

Shape487.geometry = IndexedLineSet488;

Appearance Appearance490 = createNode("Appearance");
Appearance490.USE = "SegmentLine";
Shape487.appearance = Appearance490;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Shape487;

Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[0,1.2419999837875366,-0.09000000357627869]);
Shape Shape492 = createNode("Shape");
Shape492.USE = "jointbox";
Transform491.children = new MFNode();

Transform491.children[0] = Shape492;

HAnimSegment486.children[1] = Transform491;

HAnimSite HAnimSite493 = createNode("HAnimSite");
HAnimSite493.name = "substernale";
HAnimSite493.DEF = "Joe_substernale";
HAnimSite493.translation = new SFVec3f(new float[0,1.25,0.11299999803304672]);
Shape Shape494 = createNode("Shape");
Shape494.USE = "sitebox";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = Shape494;

HAnimSegment486.children[2] = HAnimSite493;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.name = "vt9";
HAnimJoint495.DEF = "Joe_vt9";
HAnimJoint495.center = new SFVec3f(new float[0,1.2680000066757202,-0.10000000149011612]);
HAnimJoint495.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint495.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint495.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.name = "t9";
HAnimSegment496.DEF = "Joe_t9";
Shape Shape497 = createNode("Shape");
IndexedLineSet IndexedLineSet498 = createNode("IndexedLineSet");
IndexedLineSet498.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate499 = createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[0,1.2680000066757202,-0.10000000149011612,0,1.2940000295639038,-0.10999999940395355]);
IndexedLineSet498.coord = Coordinate499;

Shape497.geometry = IndexedLineSet498;

Appearance Appearance500 = createNode("Appearance");
Appearance500.USE = "SegmentLine";
Shape497.appearance = Appearance500;

HAnimSegment496.children = new MFNode();

HAnimSegment496.children[0] = Shape497;

Transform Transform501 = createNode("Transform");
Transform501.translation = new SFVec3f(new float[0,1.2680000066757202,-0.10000000149011612]);
Shape Shape502 = createNode("Shape");
Shape502.USE = "jointbox";
Transform501.children = new MFNode();

Transform501.children[0] = Shape502;

HAnimSegment496.children[1] = Transform501;

HAnimSite HAnimSite503 = createNode("HAnimSite");
HAnimSite503.name = "r_thelion";
HAnimSite503.DEF = "Joe_r_thelion";
HAnimSite503.translation = new SFVec3f(new float[-0.11349999904632568,1.3179999589920044,0.0949999988079071]);
Shape Shape504 = createNode("Shape");
Shape504.USE = "sitebox";
HAnimSite503.children = new MFNode();

HAnimSite503.children[0] = Shape504;

HAnimSegment496.children[2] = HAnimSite503;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.name = "l_thelion";
HAnimSite505.DEF = "Joe_l_thelion";
HAnimSite505.translation = new SFVec3f(new float[0.11349999904632568,1.3179999589920044,0.0949999988079071]);
Shape Shape506 = createNode("Shape");
Shape506.USE = "sitebox";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = Shape506;

HAnimSegment496.children[3] = HAnimSite505;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

HAnimJoint HAnimJoint507 = createNode("HAnimJoint");
HAnimJoint507.name = "vt8";
HAnimJoint507.DEF = "Joe_vt8";
HAnimJoint507.center = new SFVec3f(new float[0,1.2940000295639038,-0.10999999940395355]);
HAnimJoint507.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint507.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.name = "t8";
HAnimSegment508.DEF = "Joe_t8";
Shape Shape509 = createNode("Shape");
IndexedLineSet IndexedLineSet510 = createNode("IndexedLineSet");
IndexedLineSet510.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,1.2940000295639038,-0.10999999940395355,0,1.3519999980926514,-0.11999999731779099]);
IndexedLineSet510.coord = Coordinate511;

Shape509.geometry = IndexedLineSet510;

Appearance Appearance512 = createNode("Appearance");
Appearance512.USE = "SegmentLine";
Shape509.appearance = Appearance512;

HAnimSegment508.children = new MFNode();

HAnimSegment508.children[0] = Shape509;

Transform Transform513 = createNode("Transform");
Transform513.translation = new SFVec3f(new float[0,1.2940000295639038,-0.10999999940395355]);
Shape Shape514 = createNode("Shape");
Shape514.USE = "jointbox";
Transform513.children = new MFNode();

Transform513.children[0] = Shape514;

HAnimSegment508.children[1] = Transform513;

HAnimJoint507.children = new MFNode();

HAnimJoint507.children[0] = HAnimSegment508;

HAnimJoint HAnimJoint515 = createNode("HAnimJoint");
HAnimJoint515.name = "vt7";
HAnimJoint515.DEF = "Joe_vt7";
HAnimJoint515.center = new SFVec3f(new float[0,1.3229999542236328,-0.11550000309944153]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.name = "t7";
HAnimSegment516.DEF = "Joe_t7";
Shape Shape517 = createNode("Shape");
IndexedLineSet IndexedLineSet518 = createNode("IndexedLineSet");
IndexedLineSet518.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0,1.3519999980926514,-0.11999999731779099,0,1.38100004196167,-0.12349999696016312]);
IndexedLineSet518.coord = Coordinate519;

Shape517.geometry = IndexedLineSet518;

Appearance Appearance520 = createNode("Appearance");
Appearance520.USE = "SegmentLine";
Shape517.appearance = Appearance520;

HAnimSegment516.children = new MFNode();

HAnimSegment516.children[0] = Shape517;

Transform Transform521 = createNode("Transform");
Transform521.translation = new SFVec3f(new float[0,1.3229999542236328,-0.11550000309944153]);
Shape Shape522 = createNode("Shape");
Shape522.USE = "jointbox";
Transform521.children = new MFNode();

Transform521.children[0] = Shape522;

HAnimSegment516.children[1] = Transform521;

HAnimJoint515.children = new MFNode();

HAnimJoint515.children[0] = HAnimSegment516;

HAnimJoint HAnimJoint523 = createNode("HAnimJoint");
HAnimJoint523.name = "vt6";
HAnimJoint523.DEF = "Joe_vt6";
HAnimJoint523.center = new SFVec3f(new float[0,1.3519999980926514,-0.11999999731779099]);
HAnimJoint523.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint523.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.name = "t6";
HAnimSegment524.DEF = "Joe_t6";
Shape Shape525 = createNode("Shape");
IndexedLineSet IndexedLineSet526 = createNode("IndexedLineSet");
IndexedLineSet526.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0,1.38100004196167,-0.12349999696016312,0,1.409999966621399,-0.12349999696016312]);
IndexedLineSet526.coord = Coordinate527;

Shape525.geometry = IndexedLineSet526;

Appearance Appearance528 = createNode("Appearance");
Appearance528.USE = "SegmentLine";
Shape525.appearance = Appearance528;

HAnimSegment524.children = new MFNode();

HAnimSegment524.children[0] = Shape525;

Transform Transform529 = createNode("Transform");
Transform529.translation = new SFVec3f(new float[0,1.3519999980926514,-0.11999999731779099]);
Shape Shape530 = createNode("Shape");
Shape530.USE = "jointbox";
Transform529.children = new MFNode();

Transform529.children[0] = Shape530;

HAnimSegment524.children[1] = Transform529;

HAnimJoint523.children = new MFNode();

HAnimJoint523.children[0] = HAnimSegment524;

HAnimJoint HAnimJoint531 = createNode("HAnimJoint");
HAnimJoint531.name = "vt5";
HAnimJoint531.DEF = "Joe_vt5";
HAnimJoint531.center = new SFVec3f(new float[0,1.38100004196167,-0.12349999696016312]);
HAnimJoint531.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.name = "t5";
HAnimSegment532.DEF = "Joe_t5";
Shape Shape533 = createNode("Shape");
IndexedLineSet IndexedLineSet534 = createNode("IndexedLineSet");
IndexedLineSet534.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099]);
IndexedLineSet534.coord = Coordinate535;

Shape533.geometry = IndexedLineSet534;

Appearance Appearance536 = createNode("Appearance");
Appearance536.USE = "SegmentLine";
Shape533.appearance = Appearance536;

HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = Shape533;

Transform Transform537 = createNode("Transform");
Transform537.translation = new SFVec3f(new float[0,1.38100004196167,-0.12349999696016312]);
Shape Shape538 = createNode("Shape");
Shape538.USE = "jointbox";
Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

HAnimSegment532.children[1] = Transform537;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

HAnimJoint HAnimJoint539 = createNode("HAnimJoint");
HAnimJoint539.name = "vt4";
HAnimJoint539.DEF = "Joe_vt4";
HAnimJoint539.center = new SFVec3f(new float[0,1.409999966621399,-0.12349999696016312]);
HAnimJoint539.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint539.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint539.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint539.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.name = "t4";
HAnimSegment540.DEF = "Joe_t4";
Shape Shape541 = createNode("Shape");
IndexedLineSet IndexedLineSet542 = createNode("IndexedLineSet");
IndexedLineSet542.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate543 = createNode("Coordinate");
Coordinate543.point = new MFVec3f(new float[0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099]);
IndexedLineSet542.coord = Coordinate543;

Shape541.geometry = IndexedLineSet542;

Appearance Appearance544 = createNode("Appearance");
Appearance544.USE = "SegmentLine";
Shape541.appearance = Appearance544;

HAnimSegment540.children = new MFNode();

HAnimSegment540.children[0] = Shape541;

Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[0,1.409999966621399,-0.12349999696016312]);
Shape Shape546 = createNode("Shape");
Shape546.USE = "jointbox";
Transform545.children = new MFNode();

Transform545.children[0] = Shape546;

HAnimSegment540.children[1] = Transform545;

Transform Transform547 = createNode("Transform");
Transform547.translation = new SFVec3f(new float[0,1.409999966621399,-0.14499999582767487]);
Shape Shape548 = createNode("Shape");
Shape548.USE = "skinsphere";
Transform547.children = new MFNode();

Transform547.children[0] = Shape548;

HAnimSegment540.children[2] = Transform547;

HAnimJoint539.children = new MFNode();

HAnimJoint539.children[0] = HAnimSegment540;

HAnimJoint HAnimJoint549 = createNode("HAnimJoint");
HAnimJoint549.name = "vt3";
HAnimJoint549.DEF = "Joe_vt3";
HAnimJoint549.center = new SFVec3f(new float[0,1.437999963760376,-0.11999999731779099]);
HAnimJoint549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint549.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.name = "t3";
HAnimSegment550.DEF = "Joe_t3";
Shape Shape551 = createNode("Shape");
IndexedLineSet IndexedLineSet552 = createNode("IndexedLineSet");
IndexedLineSet552.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0,1.437999963760376,-0.11999999731779099,0,1.468000054359436,-0.10499999672174454]);
IndexedLineSet552.coord = Coordinate553;

Shape551.geometry = IndexedLineSet552;

Appearance Appearance554 = createNode("Appearance");
Appearance554.USE = "SegmentLine";
Shape551.appearance = Appearance554;

HAnimSegment550.children = new MFNode();

HAnimSegment550.children[0] = Shape551;

Transform Transform555 = createNode("Transform");
Transform555.translation = new SFVec3f(new float[0,1.437999963760376,-0.11999999731779099]);
Shape Shape556 = createNode("Shape");
Shape556.USE = "jointbox";
Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

HAnimSegment550.children[1] = Transform555;

HAnimJoint549.children = new MFNode();

HAnimJoint549.children[0] = HAnimSegment550;

HAnimJoint HAnimJoint557 = createNode("HAnimJoint");
HAnimJoint557.name = "vt2";
HAnimJoint557.DEF = "Joe_vt2";
HAnimJoint557.center = new SFVec3f(new float[0,1.468000054359436,-0.10499999672174454]);
HAnimJoint557.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint557.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment558 = createNode("HAnimSegment");
HAnimSegment558.name = "t2";
HAnimSegment558.DEF = "Joe_t2";
Shape Shape559 = createNode("Shape");
IndexedLineSet IndexedLineSet560 = createNode("IndexedLineSet");
IndexedLineSet560.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate561 = createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0,1.468000054359436,-0.10499999672174454,0,1.496999979019165,-0.09000000357627869]);
IndexedLineSet560.coord = Coordinate561;

Shape559.geometry = IndexedLineSet560;

Appearance Appearance562 = createNode("Appearance");
Appearance562.USE = "SegmentLine";
Shape559.appearance = Appearance562;

HAnimSegment558.children = new MFNode();

HAnimSegment558.children[0] = Shape559;

Transform Transform563 = createNode("Transform");
Transform563.translation = new SFVec3f(new float[0,1.468000054359436,-0.10499999672174454]);
Shape Shape564 = createNode("Shape");
Shape564.USE = "jointbox";
Transform563.children = new MFNode();

Transform563.children[0] = Shape564;

HAnimSegment558.children[1] = Transform563;

HAnimJoint557.children = new MFNode();

HAnimJoint557.children[0] = HAnimSegment558;

HAnimJoint HAnimJoint565 = createNode("HAnimJoint");
HAnimJoint565.name = "vt1";
HAnimJoint565.DEF = "Joe_vt1";
HAnimJoint565.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint565.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint565.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint565.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint565.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment566 = createNode("HAnimSegment");
HAnimSegment566.name = "t1";
HAnimSegment566.DEF = "Joe_t1";
Shape Shape567 = createNode("Shape");
IndexedLineSet IndexedLineSet568 = createNode("IndexedLineSet");
IndexedLineSet568.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate569 = createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0,1.497,-0.09,0,1.525,-0.072]);
IndexedLineSet568.coord = Coordinate569;

Shape567.geometry = IndexedLineSet568;

Appearance Appearance570 = createNode("Appearance");
Appearance570.USE = "SegmentLine";
Shape567.appearance = Appearance570;

HAnimSegment566.children = new MFNode();

HAnimSegment566.children[0] = Shape567;

Transform Transform571 = createNode("Transform");
Transform571.translation = new SFVec3f(new float[0,1.497,-0.09]);
Shape Shape572 = createNode("Shape");
Shape572.USE = "jointbox";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

HAnimSegment566.children[1] = Transform571;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.name = "suprasternale";
HAnimSite573.DEF = "Joe_suprasternale";
HAnimSite573.translation = new SFVec3f(new float[0,1.440000057220459,0.029999999329447746]);
Shape Shape574 = createNode("Shape");
Shape574.USE = "sitebox";
HAnimSite573.children = new MFNode();

HAnimSite573.children[0] = Shape574;

HAnimSegment566.children[2] = HAnimSite573;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.name = "cervicale";
HAnimSite575.DEF = "Joe_cervicale";
HAnimSite575.translation = new SFVec3f(new float[0,1.5299999713897705,-0.08399999886751175]);
Shape Shape576 = createNode("Shape");
Shape576.USE = "sitebox";
HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Shape576;

HAnimSegment566.children[3] = HAnimSite575;

HAnimJoint565.children = new MFNode();

HAnimJoint565.children[0] = HAnimSegment566;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "vc7";
HAnimJoint577.DEF = "Joe_vc7";
HAnimJoint577.center = new SFVec3f(new float[0,1.524999976158142,-0.07199999690055847]);
HAnimJoint577.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint577.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.name = "c7";
HAnimSegment578.DEF = "Joe_c7";
Shape Shape579 = createNode("Shape");
IndexedLineSet IndexedLineSet580 = createNode("IndexedLineSet");
IndexedLineSet580.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate581 = createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[0,1.524999976158142,-0.07199999690055847,0.0820000022649765,1.448799967765808,-0.03530000150203705,-0.029999999329447746,1.4600000381469727,0.019999999552965164,0,1.5399999618530273,-0.05000000074505806]);
IndexedLineSet580.coord = Coordinate581;

Shape579.geometry = IndexedLineSet580;

Appearance Appearance582 = createNode("Appearance");
Appearance582.USE = "SegmentLine";
Shape579.appearance = Appearance582;

HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = Shape579;

Transform Transform583 = createNode("Transform");
Transform583.translation = new SFVec3f(new float[0,1.524999976158142,-0.07199999690055847]);
Shape Shape584 = createNode("Shape");
Shape584.USE = "jointbox";
Transform583.children = new MFNode();

Transform583.children[0] = Shape584;

HAnimSegment578.children[1] = Transform583;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.name = "r_neck_base";
HAnimSite585.DEF = "Joe_r_neck_base";
HAnimSite585.translation = new SFVec3f(new float[-0.06459999829530716,1.5148999691009521,-0.03849999979138374]);
Shape Shape586 = createNode("Shape");
Shape586.USE = "sitebox";
HAnimSite585.children = new MFNode();

HAnimSite585.children[0] = Shape586;

HAnimSegment578.children[2] = HAnimSite585;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.name = "l_neck_base";
HAnimSite587.DEF = "Joe_l_neck_base";
HAnimSite587.translation = new SFVec3f(new float[0.06459999829530716,1.5148999691009521,-0.03849999979138374]);
Shape Shape588 = createNode("Shape");
Shape588.USE = "sitebox";
HAnimSite587.children = new MFNode();

HAnimSite587.children[0] = Shape588;

HAnimSegment578.children[3] = HAnimSite587;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint589 = createNode("HAnimJoint");
HAnimJoint589.name = "vc6";
HAnimJoint589.DEF = "Joe_vc6";
HAnimJoint589.center = new SFVec3f(new float[0,1.5399999618530273,-0.05000000074505806]);
HAnimJoint589.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint589.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment590 = createNode("HAnimSegment");
HAnimSegment590.name = "c6";
HAnimSegment590.DEF = "Joe_c6";
Shape Shape591 = createNode("Shape");
IndexedLineSet IndexedLineSet592 = createNode("IndexedLineSet");
IndexedLineSet592.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate593 = createNode("Coordinate");
Coordinate593.point = new MFVec3f(new float[0,1.5399999618530273,-0.05000000074505806,0,1.5674999952316284,-0.025599999353289604]);
IndexedLineSet592.coord = Coordinate593;

Shape591.geometry = IndexedLineSet592;

Appearance Appearance594 = createNode("Appearance");
Appearance594.USE = "SegmentLine";
Shape591.appearance = Appearance594;

HAnimSegment590.children = new MFNode();

HAnimSegment590.children[0] = Shape591;

Transform Transform595 = createNode("Transform");
Transform595.translation = new SFVec3f(new float[0,1.5399999618530273,-0.05000000074505806]);
Shape Shape596 = createNode("Shape");
Shape596.USE = "jointbox";
Transform595.children = new MFNode();

Transform595.children[0] = Shape596;

HAnimSegment590.children[1] = Transform595;

HAnimJoint589.children = new MFNode();

HAnimJoint589.children[0] = HAnimSegment590;

HAnimJoint HAnimJoint597 = createNode("HAnimJoint");
HAnimJoint597.name = "vc5";
HAnimJoint597.DEF = "Joe_vc5";
HAnimJoint597.center = new SFVec3f(new float[0,1.5520000457763672,-0.03500000014901161]);
HAnimJoint597.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint597.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment598 = createNode("HAnimSegment");
HAnimSegment598.name = "c5";
HAnimSegment598.DEF = "Joe_c5";
Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[0,1.5520000457763672,-0.03500000014901161]);
Shape Shape600 = createNode("Shape");
Shape600.USE = "jointbox";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = Transform599;

Shape Shape601 = createNode("Shape");
IndexedLineSet IndexedLineSet602 = createNode("IndexedLineSet");
IndexedLineSet602.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate603 = createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[0,1.5674999952316284,-0.025599999353289604,0,1.5822499990463257,-0.01850000023841858]);
IndexedLineSet602.coord = Coordinate603;

Shape601.geometry = IndexedLineSet602;

Appearance Appearance604 = createNode("Appearance");
Appearance604.USE = "SegmentLine";
Shape601.appearance = Appearance604;

HAnimSegment598.children[1] = Shape601;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

HAnimJoint HAnimJoint605 = createNode("HAnimJoint");
HAnimJoint605.name = "vc4";
HAnimJoint605.DEF = "Joe_vc4";
HAnimJoint605.center = new SFVec3f(new float[0,1.5674999952316284,-0.025599999353289604]);
HAnimJoint605.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint605.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment606 = createNode("HAnimSegment");
HAnimSegment606.name = "c4";
HAnimSegment606.DEF = "Joe_c4";
Shape Shape607 = createNode("Shape");
IndexedLineSet IndexedLineSet608 = createNode("IndexedLineSet");
IndexedLineSet608.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0,1.5822499990463257,-0.01850000023841858,0,1.5950000286102295,-0.017500000074505806]);
IndexedLineSet608.coord = Coordinate609;

Shape607.geometry = IndexedLineSet608;

Appearance Appearance610 = createNode("Appearance");
Appearance610.USE = "SegmentLine";
Shape607.appearance = Appearance610;

HAnimSegment606.children = new MFNode();

HAnimSegment606.children[0] = Shape607;

Transform Transform611 = createNode("Transform");
Transform611.translation = new SFVec3f(new float[0,1.5674999952316284,-0.025599999353289604]);
Shape Shape612 = createNode("Shape");
Shape612.USE = "jointbox";
Transform611.children = new MFNode();

Transform611.children[0] = Shape612;

HAnimSegment606.children[1] = Transform611;

HAnimJoint605.children = new MFNode();

HAnimJoint605.children[0] = HAnimSegment606;

HAnimJoint HAnimJoint613 = createNode("HAnimJoint");
HAnimJoint613.name = "vc3";
HAnimJoint613.DEF = "Joe_vc3";
HAnimJoint613.center = new SFVec3f(new float[0,1.5822499990463257,-0.01850000023841858]);
HAnimJoint613.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint613.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment614 = createNode("HAnimSegment");
HAnimSegment614.name = "c3";
HAnimSegment614.DEF = "Joe_c3";
Shape Shape615 = createNode("Shape");
IndexedLineSet IndexedLineSet616 = createNode("IndexedLineSet");
IndexedLineSet616.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate617 = createNode("Coordinate");
Coordinate617.point = new MFVec3f(new float[0,1.5950000286102295,-0.017500000074505806,0,1.6100000143051147,-0.014999999664723873]);
IndexedLineSet616.coord = Coordinate617;

Shape615.geometry = IndexedLineSet616;

Appearance Appearance618 = createNode("Appearance");
Appearance618.USE = "SegmentLine";
Shape615.appearance = Appearance618;

HAnimSegment614.children = new MFNode();

HAnimSegment614.children[0] = Shape615;

Transform Transform619 = createNode("Transform");
Transform619.translation = new SFVec3f(new float[0,1.5822499990463257,-0.01850000023841858]);
Shape Shape620 = createNode("Shape");
Shape620.USE = "jointbox";
Transform619.children = new MFNode();

Transform619.children[0] = Shape620;

HAnimSegment614.children[1] = Transform619;

HAnimJoint613.children = new MFNode();

HAnimJoint613.children[0] = HAnimSegment614;

HAnimJoint HAnimJoint621 = createNode("HAnimJoint");
HAnimJoint621.name = "vc2";
HAnimJoint621.DEF = "Joe_vc2";
HAnimJoint621.center = new SFVec3f(new float[0,1.5950000286102295,-0.017500000074505806]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment622 = createNode("HAnimSegment");
HAnimSegment622.name = "c2";
HAnimSegment622.DEF = "Joe_c2";
Shape Shape623 = createNode("Shape");
IndexedLineSet IndexedLineSet624 = createNode("IndexedLineSet");
IndexedLineSet624.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate625 = createNode("Coordinate");
Coordinate625.point = new MFVec3f(new float[0,1.6100000143051147,-0.014999999664723873,0,1.614400029182434,-0.0034000000450760126]);
IndexedLineSet624.coord = Coordinate625;

Shape623.geometry = IndexedLineSet624;

Appearance Appearance626 = createNode("Appearance");
Appearance626.USE = "SegmentLine";
Shape623.appearance = Appearance626;

HAnimSegment622.children = new MFNode();

HAnimSegment622.children[0] = Shape623;

Transform Transform627 = createNode("Transform");
Transform627.translation = new SFVec3f(new float[0,1.5950000286102295,-0.017500000074505806]);
Shape Shape628 = createNode("Shape");
Shape628.USE = "jointbox";
Transform627.children = new MFNode();

Transform627.children[0] = Shape628;

HAnimSegment622.children[1] = Transform627;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

HAnimJoint HAnimJoint629 = createNode("HAnimJoint");
HAnimJoint629.name = "vc1";
HAnimJoint629.DEF = "Joe_vc1";
HAnimJoint629.center = new SFVec3f(new float[0,1.6100000143051147,-0.014999999664723873]);
HAnimJoint629.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint629.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment630 = createNode("HAnimSegment");
HAnimSegment630.name = "c1";
HAnimSegment630.DEF = "Joe_c1";
Shape Shape631 = createNode("Shape");
IndexedLineSet IndexedLineSet632 = createNode("IndexedLineSet");
IndexedLineSet632.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0,1.614400029182434,-0.0034000000450760126,0,1.6299999952316284,-0.009999999776482582]);
IndexedLineSet632.coord = Coordinate633;

Shape631.geometry = IndexedLineSet632;

Appearance Appearance634 = createNode("Appearance");
Appearance634.USE = "SegmentLine";
Shape631.appearance = Appearance634;

HAnimSegment630.children = new MFNode();

HAnimSegment630.children[0] = Shape631;

Transform Transform635 = createNode("Transform");
Transform635.translation = new SFVec3f(new float[0,1.6100000143051147,-0.014999999664723873]);
Shape Shape636 = createNode("Shape");
Shape636.USE = "jointbox";
Transform635.children = new MFNode();

Transform635.children[0] = Shape636;

HAnimSegment630.children[1] = Transform635;

HAnimJoint629.children = new MFNode();

HAnimJoint629.children[0] = HAnimSegment630;

HAnimJoint HAnimJoint637 = createNode("HAnimJoint");
HAnimJoint637.name = "skullbase";
HAnimJoint637.DEF = "Joe_skullbase";
HAnimJoint637.center = new SFVec3f(new float[0,1.6299999952316284,-0.009999999776482582]);
HAnimJoint637.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint637.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment638 = createNode("HAnimSegment");
HAnimSegment638.name = "skull";
HAnimSegment638.DEF = "Joe_skull";
Shape Shape639 = createNode("Shape");
IndexedLineSet IndexedLineSet640 = createNode("IndexedLineSet");
IndexedLineSet640.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
Coordinate Coordinate641 = createNode("Coordinate");
Coordinate641.point = new MFVec3f(new float[0,1.6299999952316284,-0.009999999776482582,0.03400000184774399,1.659000039100647,0.05999999865889549,-0.03400000184774399,1.6549999713897705,0.06499999761581421]);
IndexedLineSet640.coord = Coordinate641;

Shape639.geometry = IndexedLineSet640;

Appearance Appearance642 = createNode("Appearance");
Appearance642.USE = "SegmentLine";
Shape639.appearance = Appearance642;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Shape639;

Transform Transform643 = createNode("Transform");
Transform643.translation = new SFVec3f(new float[0,1.6299999952316284,-0.009999999776482582]);
Shape Shape644 = createNode("Shape");
Shape644.USE = "jointbox";
Transform643.children = new MFNode();

Transform643.children[0] = Shape644;

HAnimSegment638.children[1] = Transform643;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.name = "skull_tip";
HAnimSite645.DEF = "Joe_skull_tip";
HAnimSite645.translation = new SFVec3f(new float[0,1.7699999809265137,0]);
Shape Shape646 = createNode("Shape");
Shape646.USE = "sitebox";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = Shape646;

HAnimSegment638.children[2] = HAnimSite645;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.name = "sellion";
HAnimSite647.DEF = "Joe_sellion";
HAnimSite647.translation = new SFVec3f(new float[0,1.6649999618530273,0.09000000357627869]);
Shape Shape648 = createNode("Shape");
Shape648.USE = "sitebox";
HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = Shape648;

HAnimSegment638.children[3] = HAnimSite647;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.name = "r_infraorbitale";
HAnimSite649.DEF = "Joe_r_infraorbitale";
HAnimSite649.translation = new SFVec3f(new float[-0.032999999821186066,1.6200000047683716,0.08699999749660492]);
Shape Shape650 = createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Shape650;

HAnimSegment638.children[4] = HAnimSite649;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.name = "l_infraorbitale";
HAnimSite651.DEF = "Joe_l_infraorbitale";
HAnimSite651.translation = new SFVec3f(new float[0.032999999821186066,1.6200000047683716,0.08699999749660492]);
Shape Shape652 = createNode("Shape");
Shape652.USE = "sitebox";
HAnimSite651.children = new MFNode();

HAnimSite651.children[0] = Shape652;

HAnimSegment638.children[5] = HAnimSite651;

HAnimSite HAnimSite653 = createNode("HAnimSite");
HAnimSite653.name = "supramenton";
HAnimSite653.DEF = "Joe_supramenton";
HAnimSite653.translation = new SFVec3f(new float[0,1.5499999523162842,0.09700000286102295]);
Shape Shape654 = createNode("Shape");
Shape654.USE = "sitebox";
HAnimSite653.children = new MFNode();

HAnimSite653.children[0] = Shape654;

HAnimSegment638.children[6] = HAnimSite653;

HAnimSite HAnimSite655 = createNode("HAnimSite");
HAnimSite655.name = "r_tragion";
HAnimSite655.DEF = "Joe_r_tragion";
HAnimSite655.translation = new SFVec3f(new float[-0.07699999958276749,1.6399999856948853,-0.009999999776482582]);
Shape Shape656 = createNode("Shape");
Shape656.USE = "sitebox";
HAnimSite655.children = new MFNode();

HAnimSite655.children[0] = Shape656;

HAnimSegment638.children[7] = HAnimSite655;

HAnimSite HAnimSite657 = createNode("HAnimSite");
HAnimSite657.name = "r_gonion";
HAnimSite657.DEF = "Joe_r_gonion";
HAnimSite657.translation = new SFVec3f(new float[-0.052000001072883606,1.5800000429153442,0.014999999664723873]);
Shape Shape658 = createNode("Shape");
Shape658.USE = "sitebox";
HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = Shape658;

HAnimSegment638.children[8] = HAnimSite657;

HAnimSite HAnimSite659 = createNode("HAnimSite");
HAnimSite659.name = "l_tragion";
HAnimSite659.DEF = "Joe_l_tragion";
HAnimSite659.translation = new SFVec3f(new float[0.07699999958276749,1.6399999856948853,-0.009999999776482582]);
Shape Shape660 = createNode("Shape");
Shape660.USE = "sitebox";
HAnimSite659.children = new MFNode();

HAnimSite659.children[0] = Shape660;

HAnimSegment638.children[9] = HAnimSite659;

HAnimSite HAnimSite661 = createNode("HAnimSite");
HAnimSite661.name = "l_gonion";
HAnimSite661.DEF = "Joe_l_gonion";
HAnimSite661.translation = new SFVec3f(new float[0.06310000270605087,1.5800000429153442,0.014999999664723873]);
Shape Shape662 = createNode("Shape");
Shape662.USE = "sitebox";
HAnimSite661.children = new MFNode();

HAnimSite661.children[0] = Shape662;

HAnimSegment638.children[10] = HAnimSite661;

HAnimSite HAnimSite663 = createNode("HAnimSite");
HAnimSite663.name = "nuchale";
HAnimSite663.DEF = "Joe_nuchale";
HAnimSite663.translation = new SFVec3f(new float[0,1.625,-0.0925000011920929]);
Shape Shape664 = createNode("Shape");
Shape664.USE = "sitebox";
HAnimSite663.children = new MFNode();

HAnimSite663.children[0] = Shape664;

HAnimSegment638.children[11] = HAnimSite663;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

HAnimJoint HAnimJoint665 = createNode("HAnimJoint");
HAnimJoint665.name = "l_eyeball_joint";
HAnimJoint665.DEF = "Joe_l_eyeball_joint";
HAnimJoint665.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment666 = createNode("HAnimSegment");
HAnimSegment666.name = "l_eyeball";
HAnimSegment666.DEF = "Joe_l_eyeball";
Shape Shape667 = createNode("Shape");
IndexedLineSet IndexedLineSet668 = createNode("IndexedLineSet");
IndexedLineSet668.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate669 = createNode("Coordinate");
Coordinate669.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet668.coord = Coordinate669;

Shape667.geometry = IndexedLineSet668;

Appearance Appearance670 = createNode("Appearance");
Appearance670.USE = "SegmentLine";
Shape667.appearance = Appearance670;

HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = Shape667;

Transform Transform671 = createNode("Transform");
Transform671.scale = new SFVec3f(new float[1,1,1.4]);
Transform671.translation = new SFVec3f(new float[0.034,1.655,0.065]);
Shape Shape672 = createNode("Shape");
Shape672.USE = "jointbox";
Transform671.children = new MFNode();

Transform671.children[0] = Shape672;

HAnimSegment666.children[1] = Transform671;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

HAnimJoint637.children[1] = HAnimJoint665;

HAnimJoint HAnimJoint673 = createNode("HAnimJoint");
HAnimJoint673.name = "r_eyeball_joint";
HAnimJoint673.DEF = "Joe_r_eyeball_joint";
HAnimJoint673.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint673.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint673.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment674 = createNode("HAnimSegment");
HAnimSegment674.name = "r_eyeball";
HAnimSegment674.DEF = "Joe_r_eyeball";
Shape Shape675 = createNode("Shape");
IndexedLineSet IndexedLineSet676 = createNode("IndexedLineSet");
IndexedLineSet676.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet676.coord = Coordinate677;

Shape675.geometry = IndexedLineSet676;

Appearance Appearance678 = createNode("Appearance");
Appearance678.USE = "SegmentLine";
Shape675.appearance = Appearance678;

HAnimSegment674.children = new MFNode();

HAnimSegment674.children[0] = Shape675;

Transform Transform679 = createNode("Transform");
Transform679.scale = new SFVec3f(new float[1,1,1.4]);
Transform679.translation = new SFVec3f(new float[-0.034,1.655,0.065]);
Shape Shape680 = createNode("Shape");
Shape680.USE = "jointbox";
Transform679.children = new MFNode();

Transform679.children[0] = Shape680;

HAnimSegment674.children[1] = Transform679;

HAnimJoint673.children = new MFNode();

HAnimJoint673.children[0] = HAnimSegment674;

HAnimJoint637.children[2] = HAnimJoint673;

HAnimJoint629.children[1] = HAnimJoint637;

HAnimJoint621.children[1] = HAnimJoint629;

HAnimJoint613.children[1] = HAnimJoint621;

HAnimJoint605.children[1] = HAnimJoint613;

HAnimJoint597.children[1] = HAnimJoint605;

HAnimJoint589.children[1] = HAnimJoint597;

HAnimJoint577.children[1] = HAnimJoint589;

HAnimJoint565.children[1] = HAnimJoint577;

HAnimJoint HAnimJoint681 = createNode("HAnimJoint");
HAnimJoint681.name = "l_sternoclavicular";
HAnimJoint681.DEF = "Joe_l_sternoclavicular";
HAnimJoint681.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint681.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint681.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint681.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint681.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment682 = createNode("HAnimSegment");
HAnimSegment682.name = "l_clavicle";
HAnimSegment682.DEF = "Joe_l_clavicle";
Shape Shape683 = createNode("Shape");
IndexedLineSet IndexedLineSet684 = createNode("IndexedLineSet");
IndexedLineSet684.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0820000022649765,1.448799967765808,-0.03530000150203705,0.09619999676942825,1.426900029182434,-0.042399998754262924]);
IndexedLineSet684.coord = Coordinate685;

Shape683.geometry = IndexedLineSet684;

Appearance Appearance686 = createNode("Appearance");
Appearance686.USE = "SegmentLine";
Shape683.appearance = Appearance686;

HAnimSegment682.children = new MFNode();

HAnimSegment682.children[0] = Shape683;

Transform Transform687 = createNode("Transform");
Transform687.translation = new SFVec3f(new float[0.0820000022649765,1.448799967765808,-0.03530000150203705]);
Shape Shape688 = createNode("Shape");
Shape688.USE = "jointbox";
Transform687.children = new MFNode();

Transform687.children[0] = Shape688;

HAnimSegment682.children[1] = Transform687;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.name = "l_clavicale";
HAnimSite689.DEF = "Joe_l_clavicale";
HAnimSite689.translation = new SFVec3f(new float[0.029999999329447746,1.4600000381469727,0.03500000014901161]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "sitebox";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = Shape690;

HAnimSegment682.children[2] = HAnimSite689;

HAnimJoint681.children = new MFNode();

HAnimJoint681.children[0] = HAnimSegment682;

HAnimJoint HAnimJoint691 = createNode("HAnimJoint");
HAnimJoint691.name = "l_acromioclavicular";
HAnimJoint691.DEF = "Joe_l_acromioclavicular";
HAnimJoint691.center = new SFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924]);
HAnimJoint691.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint691.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment692 = createNode("HAnimSegment");
HAnimSegment692.name = "l_scapula";
HAnimSegment692.DEF = "Joe_l_scapula";
Shape Shape693 = createNode("Shape");
IndexedLineSet IndexedLineSet694 = createNode("IndexedLineSet");
IndexedLineSet694.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate695 = createNode("Coordinate");
Coordinate695.point = new MFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924,0.20000000298023224,1.440000057220459,-0.03999999910593033]);
IndexedLineSet694.coord = Coordinate695;

Shape693.geometry = IndexedLineSet694;

Appearance Appearance696 = createNode("Appearance");
Appearance696.USE = "SegmentLine";
Shape693.appearance = Appearance696;

HAnimSegment692.children = new MFNode();

HAnimSegment692.children[0] = Shape693;

Transform Transform697 = createNode("Transform");
Transform697.translation = new SFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924]);
Shape Shape698 = createNode("Shape");
Shape698.USE = "jointbox";
Transform697.children = new MFNode();

Transform697.children[0] = Shape698;

HAnimSegment692.children[1] = Transform697;

Transform Transform699 = createNode("Transform");
Transform699.translation = new SFVec3f(new float[0.10999999940395355,1.4270000457763672,-0.13750000298023224]);
Shape Shape700 = createNode("Shape");
Shape700.USE = "skinsphere";
Transform699.children = new MFNode();

Transform699.children[0] = Shape700;

HAnimSegment692.children[2] = Transform699;

HAnimSite HAnimSite701 = createNode("HAnimSite");
HAnimSite701.name = "l_acromion";
HAnimSite701.DEF = "Joe_l_acromion";
HAnimSite701.translation = new SFVec3f(new float[0.17499999701976776,1.4824999570846558,-0.05999999865889549]);
Shape Shape702 = createNode("Shape");
Shape702.USE = "sitebox";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = Shape702;

HAnimSegment692.children[3] = HAnimSite701;

HAnimSite HAnimSite703 = createNode("HAnimSite");
HAnimSite703.name = "l_axilla_ant";
HAnimSite703.DEF = "Joe_l_axilla_ant";
HAnimSite703.translation = new SFVec3f(new float[0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape704 = createNode("Shape");
Shape704.USE = "sitebox";
HAnimSite703.children = new MFNode();

HAnimSite703.children[0] = Shape704;

HAnimSegment692.children[4] = HAnimSite703;

HAnimSite HAnimSite705 = createNode("HAnimSite");
HAnimSite705.name = "l_axilla_post";
HAnimSite705.DEF = "Joe_l_axilla_post";
HAnimSite705.translation = new SFVec3f(new float[0.1599999964237213,1.3799999952316284,-0.125]);
Shape Shape706 = createNode("Shape");
Shape706.USE = "sitebox";
HAnimSite705.children = new MFNode();

HAnimSite705.children[0] = Shape706;

HAnimSegment692.children[5] = HAnimSite705;

HAnimJoint691.children = new MFNode();

HAnimJoint691.children[0] = HAnimSegment692;

HAnimJoint HAnimJoint707 = createNode("HAnimJoint");
HAnimJoint707.name = "l_shoulder";
HAnimJoint707.DEF = "Joe_l_shoulder";
HAnimJoint707.center = new SFVec3f(new float[0.20000000298023224,1.440000057220459,-0.03999999910593033]);
HAnimJoint707.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint707.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint707.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint707.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment708 = createNode("HAnimSegment");
HAnimSegment708.name = "l_upperarm";
HAnimSegment708.DEF = "Joe_l_upperarm";
Shape Shape709 = createNode("Shape");
IndexedLineSet IndexedLineSet710 = createNode("IndexedLineSet");
IndexedLineSet710.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate711 = createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.2029000073671341,1.440000057220459,-0.03869999945163727,0.20000000298023224,1.138800024986267,-0.03999999910593033]);
IndexedLineSet710.coord = Coordinate711;

Shape709.geometry = IndexedLineSet710;

Appearance Appearance712 = createNode("Appearance");
Appearance712.USE = "SegmentLine";
Shape709.appearance = Appearance712;

HAnimSegment708.children = new MFNode();

HAnimSegment708.children[0] = Shape709;

Transform Transform713 = createNode("Transform");
Transform713.translation = new SFVec3f(new float[0.20000000298023224,1.440000057220459,-0.03999999910593033]);
Shape Shape714 = createNode("Shape");
Shape714.USE = "jointbox";
Transform713.children = new MFNode();

Transform713.children[0] = Shape714;

HAnimSegment708.children[1] = Transform713;

Transform Transform715 = createNode("Transform");
Transform715.translation = new SFVec3f(new float[0.23499999940395355,1.4199999570846558,-0.0625]);
Shape Shape716 = createNode("Shape");
Shape716.USE = "skinsphere";
Transform715.children = new MFNode();

Transform715.children[0] = Shape716;

HAnimSegment708.children[2] = Transform715;

Transform Transform717 = createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.25,1.2699999809265137,-0.03999999910593033]);
Shape Shape718 = createNode("Shape");
Shape718.USE = "skinsphere";
Transform717.children = new MFNode();

Transform717.children[0] = Shape718;

HAnimSegment708.children[3] = Transform717;

Transform Transform719 = createNode("Transform");
Transform719.translation = new SFVec3f(new float[0.17000000178813934,1.2699999809265137,-0.03999999910593033]);
Shape Shape720 = createNode("Shape");
Shape720.USE = "skinsphere";
Transform719.children = new MFNode();

Transform719.children[0] = Shape720;

HAnimSegment708.children[4] = Transform719;

Transform Transform721 = createNode("Transform");
Transform721.translation = new SFVec3f(new float[0.20000000298023224,1.2699999809265137,-0.09000000357627869]);
Shape Shape722 = createNode("Shape");
Shape722.USE = "skinsphere";
Transform721.children = new MFNode();

Transform721.children[0] = Shape722;

HAnimSegment708.children[5] = Transform721;

Transform Transform723 = createNode("Transform");
Transform723.translation = new SFVec3f(new float[0.20000000298023224,1.2699999809265137,0.019999999552965164]);
Shape Shape724 = createNode("Shape");
Shape724.USE = "skinsphere";
Transform723.children = new MFNode();

Transform723.children[0] = Shape724;

HAnimSegment708.children[6] = Transform723;

HAnimSite HAnimSite725 = createNode("HAnimSite");
HAnimSite725.name = "l_humeral_medial_epicn";
HAnimSite725.DEF = "Joe_l_humeral_medial_epicn";
HAnimSite725.translation = new SFVec3f(new float[0.16500000655651093,1.138800024986267,-0.03999999910593033]);
Shape Shape726 = createNode("Shape");
Shape726.USE = "sitebox";
HAnimSite725.children = new MFNode();

HAnimSite725.children[0] = Shape726;

HAnimSegment708.children[7] = HAnimSite725;

HAnimSite HAnimSite727 = createNode("HAnimSite");
HAnimSite727.name = "l_radiale";
HAnimSite727.DEF = "Joe_l_radiale";
HAnimSite727.translation = new SFVec3f(new float[0.23000000417232513,1.1330000162124634,-0.054999999701976776]);
Shape Shape728 = createNode("Shape");
Shape728.USE = "sitebox";
HAnimSite727.children = new MFNode();

HAnimSite727.children[0] = Shape728;

HAnimSegment708.children[8] = HAnimSite727;

HAnimSite HAnimSite729 = createNode("HAnimSite");
HAnimSite729.name = "l_humeral_lateral_epicn";
HAnimSite729.DEF = "Joe_l_humeral_lateral_epicn";
HAnimSite729.translation = new SFVec3f(new float[0.24400000274181366,1.138800024986267,-0.03999999910593033]);
Shape Shape730 = createNode("Shape");
Shape730.USE = "sitebox";
HAnimSite729.children = new MFNode();

HAnimSite729.children[0] = Shape730;

HAnimSegment708.children[9] = HAnimSite729;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

HAnimJoint HAnimJoint731 = createNode("HAnimJoint");
HAnimJoint731.name = "l_elbow";
HAnimJoint731.DEF = "Joe_l_elbow";
HAnimJoint731.center = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033]);
HAnimJoint731.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint731.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint731.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint731.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment732 = createNode("HAnimSegment");
HAnimSegment732.name = "l_forearm";
HAnimSegment732.DEF = "Joe_l_forearm";
Shape Shape733 = createNode("Shape");
IndexedLineSet IndexedLineSet734 = createNode("IndexedLineSet");
IndexedLineSet734.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate735 = createNode("Coordinate");
Coordinate735.point = new MFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
IndexedLineSet734.coord = Coordinate735;

Shape733.geometry = IndexedLineSet734;

Appearance Appearance736 = createNode("Appearance");
Appearance736.USE = "SegmentLine";
Shape733.appearance = Appearance736;

HAnimSegment732.children = new MFNode();

HAnimSegment732.children[0] = Shape733;

Transform Transform737 = createNode("Transform");
Transform737.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033]);
Shape Shape738 = createNode("Shape");
Shape738.USE = "jointbox";
Transform737.children = new MFNode();

Transform737.children[0] = Shape738;

HAnimSegment732.children[1] = Transform737;

Transform Transform739 = createNode("Transform");
Transform739.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.013000000268220901]);
Shape Shape740 = createNode("Shape");
Shape740.USE = "skinsphere";
Transform739.children = new MFNode();

Transform739.children[0] = Shape740;

HAnimSegment732.children[2] = Transform739;

Transform Transform741 = createNode("Transform");
Transform741.translation = new SFVec3f(new float[0.22499999403953552,1,-0.009999999776482582]);
Shape Shape742 = createNode("Shape");
Shape742.USE = "skinsphere";
Transform741.children = new MFNode();

Transform741.children[0] = Shape742;

HAnimSegment732.children[3] = Transform741;

Transform Transform743 = createNode("Transform");
Transform743.translation = new SFVec3f(new float[0.22499999403953552,1,-0.07000000029802322]);
Shape Shape744 = createNode("Shape");
Shape744.USE = "skinsphere";
Transform743.children = new MFNode();

Transform743.children[0] = Shape744;

HAnimSegment732.children[4] = Transform743;

Transform Transform745 = createNode("Transform");
Transform745.translation = new SFVec3f(new float[0.1850000023841858,1,-0.009999999776482582]);
Shape Shape746 = createNode("Shape");
Shape746.USE = "skinsphere";
Transform745.children = new MFNode();

Transform745.children[0] = Shape746;

HAnimSegment732.children[5] = Transform745;

Transform Transform747 = createNode("Transform");
Transform747.translation = new SFVec3f(new float[0.1850000023841858,1,-0.07000000029802322]);
Shape Shape748 = createNode("Shape");
Shape748.USE = "skinsphere";
Transform747.children = new MFNode();

Transform747.children[0] = Shape748;

HAnimSegment732.children[6] = Transform747;

HAnimSite HAnimSite749 = createNode("HAnimSite");
HAnimSite749.name = "l_radial_styloid";
HAnimSite749.DEF = "Joe_l_radial_styloid";
HAnimSite749.translation = new SFVec3f(new float[0.19009999930858612,0.8644999861717224,-0.04149999842047691]);
Shape Shape750 = createNode("Shape");
Shape750.USE = "sitebox";
HAnimSite749.children = new MFNode();

HAnimSite749.children[0] = Shape750;

HAnimSegment732.children[7] = HAnimSite749;

HAnimSite HAnimSite751 = createNode("HAnimSite");
HAnimSite751.name = "l_olecranon";
HAnimSite751.DEF = "Joe_l_olecranon";
HAnimSite751.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.07999999821186066]);
Shape Shape752 = createNode("Shape");
Shape752.USE = "sitebox";
HAnimSite751.children = new MFNode();

HAnimSite751.children[0] = Shape752;

HAnimSegment732.children[8] = HAnimSite751;

HAnimJoint731.children = new MFNode();

HAnimJoint731.children[0] = HAnimSegment732;

HAnimJoint HAnimJoint753 = createNode("HAnimJoint");
HAnimJoint753.name = "l_wrist";
HAnimJoint753.DEF = "Joe_l_wrist";
HAnimJoint753.center = new SFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
HAnimJoint753.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint753.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint753.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint753.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment754 = createNode("HAnimSegment");
HAnimSegment754.name = "l_hand";
HAnimSegment754.DEF = "Joe_l_hand";
Shape Shape755 = createNode("Shape");
IndexedLineSet IndexedLineSet756 = createNode("IndexedLineSet");
IndexedLineSet756.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate757 = createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033,0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.19249999523162842,0.8065999746322632,-0.10360000282526016]);
IndexedLineSet756.coord = Coordinate757;

Shape755.geometry = IndexedLineSet756;

Appearance Appearance758 = createNode("Appearance");
Appearance758.USE = "SegmentLine";
Shape755.appearance = Appearance758;

HAnimSegment754.children = new MFNode();

HAnimSegment754.children[0] = Shape755;

Transform Transform759 = createNode("Transform");
Transform759.translation = new SFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
Shape Shape760 = createNode("Shape");
Shape760.USE = "jointbox";
Transform759.children = new MFNode();

Transform759.children[0] = Shape760;

HAnimSegment754.children[1] = Transform759;

HAnimSite HAnimSite761 = createNode("HAnimSite");
HAnimSite761.name = "l_metacarpal_pha2";
HAnimSite761.DEF = "Joe_l_metacarpal_pha2";
HAnimSite761.translation = new SFVec3f(new float[0.20090000331401825,0.8138999938964844,-0.02370000071823597]);
Shape Shape762 = createNode("Shape");
Shape762.USE = "sitebox";
HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = Shape762;

HAnimSegment754.children[2] = HAnimSite761;

HAnimSite HAnimSite763 = createNode("HAnimSite");
HAnimSite763.name = "l_ulnar_styloid";
HAnimSite763.DEF = "Joe_l_ulnar_styloid";
HAnimSite763.translation = new SFVec3f(new float[0.2142000049352646,0.8529000282287598,-0.06480000168085098]);
Shape Shape764 = createNode("Shape");
Shape764.USE = "sitebox";
HAnimSite763.children = new MFNode();

HAnimSite763.children[0] = Shape764;

HAnimSegment754.children[3] = HAnimSite763;

HAnimSite HAnimSite765 = createNode("HAnimSite");
HAnimSite765.name = "l_metacarpal_pha5";
HAnimSite765.DEF = "Joe_l_metacarpal_pha5";
HAnimSite765.translation = new SFVec3f(new float[0.19290000200271606,0.7860000133514404,-0.11219999939203262]);
Shape Shape766 = createNode("Shape");
Shape766.USE = "sitebox";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = Shape766;

HAnimSegment754.children[4] = HAnimSite765;

HAnimJoint753.children = new MFNode();

HAnimJoint753.children[0] = HAnimSegment754;

HAnimJoint HAnimJoint767 = createNode("HAnimJoint");
HAnimJoint767.name = "l_thumb1";
HAnimJoint767.DEF = "Joe_l_thumb1";
HAnimJoint767.center = new SFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828]);
HAnimJoint767.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint767.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint767.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint767.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment768 = createNode("HAnimSegment");
HAnimSegment768.name = "l_thumb_metacarpal";
HAnimSegment768.DEF = "Joe_l_thumb_metacarpal";
Shape Shape769 = createNode("Shape");
IndexedLineSet IndexedLineSet770 = createNode("IndexedLineSet");
IndexedLineSet770.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate771 = createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19509999454021454,0.8226000070571899,0.02459999918937683]);
IndexedLineSet770.coord = Coordinate771;

Shape769.geometry = IndexedLineSet770;

Appearance Appearance772 = createNode("Appearance");
Appearance772.USE = "SegmentLine";
Shape769.appearance = Appearance772;

HAnimSegment768.children = new MFNode();

HAnimSegment768.children[0] = Shape769;

Transform Transform773 = createNode("Transform");
Transform773.translation = new SFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828]);
Shape Shape774 = createNode("Shape");
Shape774.USE = "jointbox";
Transform773.children = new MFNode();

Transform773.children[0] = Shape774;

HAnimSegment768.children[1] = Transform773;

HAnimJoint767.children = new MFNode();

HAnimJoint767.children[0] = HAnimSegment768;

HAnimJoint HAnimJoint775 = createNode("HAnimJoint");
HAnimJoint775.name = "l_thumb2";
HAnimJoint775.DEF = "Joe_l_thumb2";
HAnimJoint775.center = new SFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683]);
HAnimJoint775.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint775.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint775.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint775.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment776 = createNode("HAnimSegment");
HAnimSegment776.name = "l_thumb_distal";
HAnimSegment776.DEF = "Joe_l_thumb_proximal";
Shape Shape777 = createNode("Shape");
IndexedLineSet IndexedLineSet778 = createNode("IndexedLineSet");
IndexedLineSet778.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate779 = createNode("Coordinate");
Coordinate779.point = new MFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683,0.19550000131130219,0.8159000277519226,0.04639999940991402]);
IndexedLineSet778.coord = Coordinate779;

Shape777.geometry = IndexedLineSet778;

Appearance Appearance780 = createNode("Appearance");
Appearance780.USE = "SegmentLine";
Shape777.appearance = Appearance780;

HAnimSegment776.children = new MFNode();

HAnimSegment776.children[0] = Shape777;

Transform Transform781 = createNode("Transform");
Transform781.translation = new SFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683]);
Shape Shape782 = createNode("Shape");
Shape782.USE = "jointbox";
Transform781.children = new MFNode();

Transform781.children[0] = Shape782;

HAnimSegment776.children[1] = Transform781;

HAnimJoint775.children = new MFNode();

HAnimJoint775.children[0] = HAnimSegment776;

HAnimJoint HAnimJoint783 = createNode("HAnimJoint");
HAnimJoint783.name = "l_thumb3";
HAnimJoint783.DEF = "Joe_l_thumb3";
HAnimJoint783.center = new SFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402]);
HAnimJoint783.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint783.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment784 = createNode("HAnimSegment");
HAnimSegment784.name = "l_thumb_distal";
HAnimSegment784.DEF = "Joe_l_thumb_distal";
Shape Shape785 = createNode("Shape");
IndexedLineSet IndexedLineSet786 = createNode("IndexedLineSet");
IndexedLineSet786.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate787 = createNode("Coordinate");
Coordinate787.point = new MFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402,0.19820000231266022,0.8061000108718872,0.07590000331401825]);
IndexedLineSet786.coord = Coordinate787;

Shape785.geometry = IndexedLineSet786;

Appearance Appearance788 = createNode("Appearance");
Appearance788.USE = "SegmentLine";
Shape785.appearance = Appearance788;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Shape785;

Transform Transform789 = createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402]);
Shape Shape790 = createNode("Shape");
Shape790.USE = "jointbox";
Transform789.children = new MFNode();

Transform789.children[0] = Shape790;

HAnimSegment784.children[1] = Transform789;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "l_thumb_distal_tip";
HAnimSite791.DEF = "Joe_l_thumb_distal_tip";
HAnimSite791.translation = new SFVec3f(new float[0.19820000231266022,0.8061000108718872,0.07590000331401825]);
Shape Shape792 = createNode("Shape");
Shape792.USE = "sitebox";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = Shape792;

HAnimSegment784.children[2] = HAnimSite791;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

HAnimJoint775.children[1] = HAnimJoint783;

HAnimJoint767.children[1] = HAnimJoint775;

HAnimJoint753.children[1] = HAnimJoint767;

HAnimJoint HAnimJoint793 = createNode("HAnimJoint");
HAnimJoint793.name = "l_index0";
HAnimJoint793.DEF = "Joe_l_index0";
HAnimJoint793.center = new SFVec3f(new float[0.19830000400543213,0.8023999929428101,-0.02800000086426735]);
HAnimJoint793.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint793.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint793.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint793.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment794 = createNode("HAnimSegment");
HAnimSegment794.name = "l_index_metacarpal";
HAnimSegment794.DEF = "Joe_l_index_metacarpal";
Shape Shape795 = createNode("Shape");
IndexedLineSet IndexedLineSet796 = createNode("IndexedLineSet");
IndexedLineSet796.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate797 = createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
IndexedLineSet796.coord = Coordinate797;

Shape795.geometry = IndexedLineSet796;

Appearance Appearance798 = createNode("Appearance");
Appearance798.USE = "SegmentLine";
Shape795.appearance = Appearance798;

HAnimSegment794.children = new MFNode();

HAnimSegment794.children[0] = Shape795;

Transform Transform799 = createNode("Transform");
Transform799.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape800 = createNode("Shape");
Shape800.USE = "jointbox";
Transform799.children = new MFNode();

Transform799.children[0] = Shape800;

HAnimSegment794.children[1] = Transform799;

HAnimJoint793.children = new MFNode();

HAnimJoint793.children[0] = HAnimSegment794;

HAnimJoint HAnimJoint801 = createNode("HAnimJoint");
HAnimJoint801.name = "l_index1";
HAnimJoint801.DEF = "Joe_l_index1";
HAnimJoint801.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint801.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint801.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint801.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint801.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment802 = createNode("HAnimSegment");
HAnimSegment802.name = "l_index_proximal";
HAnimSegment802.DEF = "Joe_l_index_proximal";
Shape Shape803 = createNode("Shape");
IndexedLineSet IndexedLineSet804 = createNode("IndexedLineSet");
IndexedLineSet804.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate805 = createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
IndexedLineSet804.coord = Coordinate805;

Shape803.geometry = IndexedLineSet804;

Appearance Appearance806 = createNode("Appearance");
Appearance806.USE = "SegmentLine";
Shape803.appearance = Appearance806;

HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = Shape803;

Transform Transform807 = createNode("Transform");
Transform807.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape808 = createNode("Shape");
Shape808.USE = "jointbox";
Transform807.children = new MFNode();

Transform807.children[0] = Shape808;

HAnimSegment802.children[1] = Transform807;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

HAnimJoint HAnimJoint809 = createNode("HAnimJoint");
HAnimJoint809.name = "l_index2";
HAnimJoint809.DEF = "Joe_l_index2";
HAnimJoint809.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint809.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint809.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint809.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint809.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment810 = createNode("HAnimSegment");
HAnimSegment810.name = "l_index_middle";
HAnimSegment810.DEF = "Joe_l_index_middle";
Shape Shape811 = createNode("Shape");
IndexedLineSet IndexedLineSet812 = createNode("IndexedLineSet");
IndexedLineSet812.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
IndexedLineSet812.coord = Coordinate813;

Shape811.geometry = IndexedLineSet812;

Appearance Appearance814 = createNode("Appearance");
Appearance814.USE = "SegmentLine";
Shape811.appearance = Appearance814;

HAnimSegment810.children = new MFNode();

HAnimSegment810.children[0] = Shape811;

Transform Transform815 = createNode("Transform");
Transform815.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape816 = createNode("Shape");
Shape816.USE = "jointbox";
Transform815.children = new MFNode();

Transform815.children[0] = Shape816;

HAnimSegment810.children[1] = Transform815;

HAnimJoint809.children = new MFNode();

HAnimJoint809.children[0] = HAnimSegment810;

HAnimJoint HAnimJoint817 = createNode("HAnimJoint");
HAnimJoint817.name = "l_index3";
HAnimJoint817.DEF = "Joe_l_index3";
HAnimJoint817.center = new SFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207]);
HAnimJoint817.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint817.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint817.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint817.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment818 = createNode("HAnimSegment");
HAnimSegment818.name = "l_index_distal";
HAnimSegment818.DEF = "Joe_l_index_distal";
Shape Shape819 = createNode("Shape");
IndexedLineSet IndexedLineSet820 = createNode("IndexedLineSet");
IndexedLineSet820.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate821 = createNode("Coordinate");
Coordinate821.point = new MFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207,0.20890000462532043,0.6858000159263611,-0.02449999935925007]);
IndexedLineSet820.coord = Coordinate821;

Shape819.geometry = IndexedLineSet820;

Appearance Appearance822 = createNode("Appearance");
Appearance822.USE = "SegmentLine";
Shape819.appearance = Appearance822;

HAnimSegment818.children = new MFNode();

HAnimSegment818.children[0] = Shape819;

Transform Transform823 = createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207]);
Shape Shape824 = createNode("Shape");
Shape824.USE = "jointbox";
Transform823.children = new MFNode();

Transform823.children[0] = Shape824;

HAnimSegment818.children[1] = Transform823;

HAnimSite HAnimSite825 = createNode("HAnimSite");
HAnimSite825.name = "l_index_distal_tip";
HAnimSite825.DEF = "Joe_l_index_distal_tip";
HAnimSite825.translation = new SFVec3f(new float[0.20890000462532043,0.6858000159263611,-0.02449999935925007]);
Shape Shape826 = createNode("Shape");
Shape826.USE = "sitebox";
HAnimSite825.children = new MFNode();

HAnimSite825.children[0] = Shape826;

HAnimSegment818.children[2] = HAnimSite825;

HAnimSite HAnimSite827 = createNode("HAnimSite");
HAnimSite827.name = "l_dactylion";
HAnimSite827.DEF = "Joe_l_dactylion";
HAnimSite827.translation = new SFVec3f(new float[0.20559999346733093,0.6743000149726868,-0.04820000007748604]);
Shape Shape828 = createNode("Shape");
Shape828.USE = "sitebox";
HAnimSite827.children = new MFNode();

HAnimSite827.children[0] = Shape828;

HAnimSegment818.children[3] = HAnimSite827;

HAnimJoint817.children = new MFNode();

HAnimJoint817.children[0] = HAnimSegment818;

HAnimJoint809.children[1] = HAnimJoint817;

HAnimJoint801.children[1] = HAnimJoint809;

HAnimJoint793.children[1] = HAnimJoint801;

HAnimJoint753.children[2] = HAnimJoint793;

HAnimJoint HAnimJoint829 = createNode("HAnimJoint");
HAnimJoint829.name = "l_middle0";
HAnimJoint829.DEF = "Joe_l_middle0";
HAnimJoint829.center = new SFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123]);
HAnimJoint829.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint829.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment830 = createNode("HAnimSegment");
HAnimSegment830.name = "l_middle_metacarpal";
HAnimSegment830.DEF = "Joe_l_middle_metacarpal";
Shape Shape831 = createNode("Shape");
IndexedLineSet IndexedLineSet832 = createNode("IndexedLineSet");
IndexedLineSet832.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate833 = createNode("Coordinate");
Coordinate833.point = new MFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
IndexedLineSet832.coord = Coordinate833;

Shape831.geometry = IndexedLineSet832;

Appearance Appearance834 = createNode("Appearance");
Appearance834.USE = "SegmentLine";
Shape831.appearance = Appearance834;

HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = Shape831;

Transform Transform835 = createNode("Transform");
Transform835.translation = new SFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123]);
Shape Shape836 = createNode("Shape");
Shape836.USE = "jointbox";
Transform835.children = new MFNode();

Transform835.children[0] = Shape836;

HAnimSegment830.children[1] = Transform835;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

HAnimJoint HAnimJoint837 = createNode("HAnimJoint");
HAnimJoint837.name = "l_middle1";
HAnimJoint837.DEF = "Joe_l_middle1";
HAnimJoint837.center = new SFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
HAnimJoint837.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint837.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint837.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint837.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment838 = createNode("HAnimSegment");
HAnimSegment838.name = "l_middle_proximal";
HAnimSegment838.DEF = "Joe_l_middle_proximal";
Shape Shape839 = createNode("Shape");
IndexedLineSet IndexedLineSet840 = createNode("IndexedLineSet");
IndexedLineSet840.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate841 = createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123,0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
IndexedLineSet840.coord = Coordinate841;

Shape839.geometry = IndexedLineSet840;

Appearance Appearance842 = createNode("Appearance");
Appearance842.USE = "SegmentLine";
Shape839.appearance = Appearance842;

HAnimSegment838.children = new MFNode();

HAnimSegment838.children[0] = Shape839;

Transform Transform843 = createNode("Transform");
Transform843.translation = new SFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
Shape Shape844 = createNode("Shape");
Shape844.USE = "jointbox";
Transform843.children = new MFNode();

Transform843.children[0] = Shape844;

HAnimSegment838.children[1] = Transform843;

HAnimJoint837.children = new MFNode();

HAnimJoint837.children[0] = HAnimSegment838;

HAnimJoint HAnimJoint845 = createNode("HAnimJoint");
HAnimJoint845.name = "l_middle2";
HAnimJoint845.DEF = "Joe_l_middle2";
HAnimJoint845.center = new SFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
HAnimJoint845.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint845.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint845.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint845.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment846 = createNode("HAnimSegment");
HAnimSegment846.name = "l_middle_middle";
HAnimSegment846.DEF = "Joe_l_middle_middle";
Shape Shape847 = createNode("Shape");
IndexedLineSet IndexedLineSet848 = createNode("IndexedLineSet");
IndexedLineSet848.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate849 = createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932,0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
IndexedLineSet848.coord = Coordinate849;

Shape847.geometry = IndexedLineSet848;

Appearance Appearance850 = createNode("Appearance");
Appearance850.USE = "SegmentLine";
Shape847.appearance = Appearance850;

HAnimSegment846.children = new MFNode();

HAnimSegment846.children[0] = Shape847;

Transform Transform851 = createNode("Transform");
Transform851.translation = new SFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
Shape Shape852 = createNode("Shape");
Shape852.USE = "jointbox";
Transform851.children = new MFNode();

Transform851.children[0] = Shape852;

HAnimSegment846.children[1] = Transform851;

HAnimJoint845.children = new MFNode();

HAnimJoint845.children[0] = HAnimSegment846;

HAnimJoint HAnimJoint853 = createNode("HAnimJoint");
HAnimJoint853.name = "l_middle3";
HAnimJoint853.DEF = "Joe_l_middle3";
HAnimJoint853.center = new SFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
HAnimJoint853.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint853.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint853.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint853.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment854 = createNode("HAnimSegment");
HAnimSegment854.name = "l_middle_distal";
HAnimSegment854.DEF = "Joe_l_middle_distal";
Shape Shape855 = createNode("Shape");
IndexedLineSet IndexedLineSet856 = createNode("IndexedLineSet");
IndexedLineSet856.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate857 = createNode("Coordinate");
Coordinate857.point = new MFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485,0.20800000429153442,0.6730999946594238,-0.04910000041127205]);
IndexedLineSet856.coord = Coordinate857;

Shape855.geometry = IndexedLineSet856;

Appearance Appearance858 = createNode("Appearance");
Appearance858.USE = "SegmentLine";
Shape855.appearance = Appearance858;

HAnimSegment854.children = new MFNode();

HAnimSegment854.children[0] = Shape855;

HAnimSite HAnimSite859 = createNode("HAnimSite");
HAnimSite859.name = "l_middle_distal_tip";
HAnimSite859.DEF = "Joe_l_middle_distal_tip";
HAnimSite859.translation = new SFVec3f(new float[0.20800000429153442,0.6730999946594238,-0.04910000041127205]);
Shape Shape860 = createNode("Shape");
Shape860.USE = "sitebox";
HAnimSite859.children = new MFNode();

HAnimSite859.children[0] = Shape860;

HAnimSegment854.children[1] = HAnimSite859;

Transform Transform861 = createNode("Transform");
Transform861.translation = new SFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
Shape Shape862 = createNode("Shape");
Shape862.USE = "jointbox";
Transform861.children = new MFNode();

Transform861.children[0] = Shape862;

HAnimSegment854.children[2] = Transform861;

HAnimJoint853.children = new MFNode();

HAnimJoint853.children[0] = HAnimSegment854;

HAnimJoint845.children[1] = HAnimJoint853;

HAnimJoint837.children[1] = HAnimJoint845;

HAnimJoint829.children[1] = HAnimJoint837;

HAnimJoint753.children[3] = HAnimJoint829;

HAnimJoint HAnimJoint863 = createNode("HAnimJoint");
HAnimJoint863.name = "l_ring0";
HAnimJoint863.DEF = "Joe_l_ring0";
HAnimJoint863.center = new SFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038]);
HAnimJoint863.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint863.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint863.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint863.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment864 = createNode("HAnimSegment");
HAnimSegment864.name = "l_ring_metacarpal";
HAnimSegment864.DEF = "Joe_l_ring_metacarpal";
Shape Shape865 = createNode("Shape");
IndexedLineSet IndexedLineSet866 = createNode("IndexedLineSet");
IndexedLineSet866.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate867 = createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.1956000030040741,0.781499981880188,-0.07940000295639038]);
IndexedLineSet866.coord = Coordinate867;

Shape865.geometry = IndexedLineSet866;

Appearance Appearance868 = createNode("Appearance");
Appearance868.USE = "SegmentLine";
Shape865.appearance = Appearance868;

HAnimSegment864.children = new MFNode();

HAnimSegment864.children[0] = Shape865;

Transform Transform869 = createNode("Transform");
Transform869.translation = new SFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038]);
Shape Shape870 = createNode("Shape");
Shape870.USE = "jointbox";
Transform869.children = new MFNode();

Transform869.children[0] = Shape870;

HAnimSegment864.children[1] = Transform869;

HAnimJoint863.children = new MFNode();

HAnimJoint863.children[0] = HAnimSegment864;

HAnimJoint HAnimJoint871 = createNode("HAnimJoint");
HAnimJoint871.name = "l_ring1";
HAnimJoint871.DEF = "Joe_l_ring1";
HAnimJoint871.center = new SFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038]);
HAnimJoint871.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint871.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment872 = createNode("HAnimSegment");
HAnimSegment872.name = "l_ring_proximal";
HAnimSegment872.DEF = "Joe_l_ring_proximal";
Shape Shape873 = createNode("Shape");
IndexedLineSet IndexedLineSet874 = createNode("IndexedLineSet");
IndexedLineSet874.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate875 = createNode("Coordinate");
Coordinate875.point = new MFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038,0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
IndexedLineSet874.coord = Coordinate875;

Shape873.geometry = IndexedLineSet874;

Appearance Appearance876 = createNode("Appearance");
Appearance876.USE = "SegmentLine";
Shape873.appearance = Appearance876;

HAnimSegment872.children = new MFNode();

HAnimSegment872.children[0] = Shape873;

Transform Transform877 = createNode("Transform");
Transform877.translation = new SFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038]);
Shape Shape878 = createNode("Shape");
Shape878.USE = "jointbox";
Transform877.children = new MFNode();

Transform877.children[0] = Shape878;

HAnimSegment872.children[1] = Transform877;

HAnimJoint871.children = new MFNode();

HAnimJoint871.children[0] = HAnimSegment872;

HAnimJoint HAnimJoint879 = createNode("HAnimJoint");
HAnimJoint879.name = "l_ring2";
HAnimJoint879.DEF = "Joe_l_ring2";
HAnimJoint879.center = new SFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
HAnimJoint879.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint879.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint879.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint879.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment880 = createNode("HAnimSegment");
HAnimSegment880.name = "l_ring_middle";
HAnimSegment880.DEF = "Joe_l_ring_middle";
Shape Shape881 = createNode("Shape");
IndexedLineSet IndexedLineSet882 = createNode("IndexedLineSet");
IndexedLineSet882.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate883 = createNode("Coordinate");
Coordinate883.point = new MFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967,0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
IndexedLineSet882.coord = Coordinate883;

Shape881.geometry = IndexedLineSet882;

Appearance Appearance884 = createNode("Appearance");
Appearance884.USE = "SegmentLine";
Shape881.appearance = Appearance884;

HAnimSegment880.children = new MFNode();

HAnimSegment880.children[0] = Shape881;

Transform Transform885 = createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
Shape Shape886 = createNode("Shape");
Shape886.USE = "jointbox";
Transform885.children = new MFNode();

Transform885.children[0] = Shape886;

HAnimSegment880.children[1] = Transform885;

HAnimJoint879.children = new MFNode();

HAnimJoint879.children[0] = HAnimSegment880;

HAnimJoint HAnimJoint887 = createNode("HAnimJoint");
HAnimJoint887.name = "l_ring3";
HAnimJoint887.DEF = "Joe_l_ring3";
HAnimJoint887.center = new SFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
HAnimJoint887.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint887.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint887.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint887.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment888 = createNode("HAnimSegment");
HAnimSegment888.name = "l_ring_distal";
HAnimSegment888.DEF = "Joe_l_ring_distal";
Shape Shape889 = createNode("Shape");
IndexedLineSet IndexedLineSet890 = createNode("IndexedLineSet");
IndexedLineSet890.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate891 = createNode("Coordinate");
Coordinate891.point = new MFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235,0.20350000262260437,0.675000011920929,-0.07559999823570251]);
IndexedLineSet890.coord = Coordinate891;

Shape889.geometry = IndexedLineSet890;

Appearance Appearance892 = createNode("Appearance");
Appearance892.USE = "SegmentLine";
Shape889.appearance = Appearance892;

HAnimSegment888.children = new MFNode();

HAnimSegment888.children[0] = Shape889;

Transform Transform893 = createNode("Transform");
Transform893.translation = new SFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
Shape Shape894 = createNode("Shape");
Shape894.USE = "jointbox";
Transform893.children = new MFNode();

Transform893.children[0] = Shape894;

HAnimSegment888.children[1] = Transform893;

HAnimSite HAnimSite895 = createNode("HAnimSite");
HAnimSite895.name = "l_ring_distal_tip";
HAnimSite895.DEF = "Joe_l_ring_distal_tip";
HAnimSite895.translation = new SFVec3f(new float[0.20350000262260437,0.675000011920929,-0.07559999823570251]);
Shape Shape896 = createNode("Shape");
Shape896.USE = "sitebox";
HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = Shape896;

HAnimSegment888.children[2] = HAnimSite895;

HAnimJoint887.children = new MFNode();

HAnimJoint887.children[0] = HAnimSegment888;

HAnimJoint879.children[1] = HAnimJoint887;

HAnimJoint871.children[1] = HAnimJoint879;

HAnimJoint863.children[1] = HAnimJoint871;

HAnimJoint753.children[4] = HAnimJoint863;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.name = "l_pinky0";
HAnimJoint897.DEF = "Joe_l_pinky0";
HAnimJoint897.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint897.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint897.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment898 = createNode("HAnimSegment");
HAnimSegment898.name = "l_pinky_metacarpal";
HAnimSegment898.DEF = "Joe_l_pinky_metacarpal";
Shape Shape899 = createNode("Shape");
IndexedLineSet IndexedLineSet900 = createNode("IndexedLineSet");
IndexedLineSet900.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate901 = createNode("Coordinate");
Coordinate901.point = new MFVec3f(new float[0.19249999523162842,0.8065999746322632,-0.10360000282526016,0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
IndexedLineSet900.coord = Coordinate901;

Shape899.geometry = IndexedLineSet900;

Appearance Appearance902 = createNode("Appearance");
Appearance902.USE = "SegmentLine";
Shape899.appearance = Appearance902;

HAnimSegment898.children = new MFNode();

HAnimSegment898.children[0] = Shape899;

Transform Transform903 = createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.19249999523162842,0.8065999746322632,-0.10360000282526016]);
Shape Shape904 = createNode("Shape");
Shape904.USE = "jointbox";
Transform903.children = new MFNode();

Transform903.children[0] = Shape904;

HAnimSegment898.children[1] = Transform903;

HAnimJoint897.children = new MFNode();

HAnimJoint897.children[0] = HAnimSegment898;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.name = "l_pinky1";
HAnimJoint905.DEF = "Joe_l_pinky1";
HAnimJoint905.center = new SFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
HAnimJoint905.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint905.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint905.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint905.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment906 = createNode("HAnimSegment");
HAnimSegment906.name = "l_pinky_proximal";
HAnimSegment906.DEF = "Joe_l_pinky_proximal";
Shape Shape907 = createNode("Shape");
IndexedLineSet IndexedLineSet908 = createNode("IndexedLineSet");
IndexedLineSet908.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate909 = createNode("Coordinate");
Coordinate909.point = new MFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016,0.19380000233650208,0.745199978351593,-0.10239999741315842]);
IndexedLineSet908.coord = Coordinate909;

Shape907.geometry = IndexedLineSet908;

Appearance Appearance910 = createNode("Appearance");
Appearance910.USE = "SegmentLine";
Shape907.appearance = Appearance910;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Shape907;

Transform Transform911 = createNode("Transform");
Transform911.translation = new SFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
Shape Shape912 = createNode("Shape");
Shape912.USE = "jointbox";
Transform911.children = new MFNode();

Transform911.children[0] = Shape912;

HAnimSegment906.children[1] = Transform911;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

HAnimJoint HAnimJoint913 = createNode("HAnimJoint");
HAnimJoint913.name = "l_pinky2";
HAnimJoint913.DEF = "Joe_l_pinky2";
HAnimJoint913.center = new SFVec3f(new float[0.19380000233650208,0.745199978351593,-0.10239999741315842]);
HAnimJoint913.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint913.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint913.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint913.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment914 = createNode("HAnimSegment");
HAnimSegment914.name = "l_pinky_middle";
HAnimSegment914.DEF = "Joe_l_pinky_middle";
Transform Transform915 = createNode("Transform");
Transform915.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape916 = createNode("Shape");
Shape916.USE = "jointbox";
Transform915.children = new MFNode();

Transform915.children[0] = Shape916;

HAnimSegment914.children = new MFNode();

HAnimSegment914.children[0] = Transform915;

Shape Shape917 = createNode("Shape");
IndexedLineSet IndexedLineSet918 = createNode("IndexedLineSet");
IndexedLineSet918.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate919 = createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.19380000233650208,0.745199978351593,-0.10239999741315842,0.19480000436306,0.7276999950408936,-0.10170000046491623]);
IndexedLineSet918.coord = Coordinate919;

Shape917.geometry = IndexedLineSet918;

Appearance Appearance920 = createNode("Appearance");
Appearance920.USE = "SegmentLine";
Shape917.appearance = Appearance920;

HAnimSegment914.children[1] = Shape917;

HAnimJoint913.children = new MFNode();

HAnimJoint913.children[0] = HAnimSegment914;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.name = "l_pinky3";
HAnimJoint921.DEF = "Joe_l_pinky3";
HAnimJoint921.center = new SFVec3f(new float[0.19480000436306,0.7276999950408936,-0.10170000046491623]);
HAnimJoint921.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint921.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint921.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint921.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment922 = createNode("HAnimSegment");
HAnimSegment922.name = "l_pinky_distal";
HAnimSegment922.DEF = "Joe_l_pinky_distal";
Shape Shape923 = createNode("Shape");
IndexedLineSet IndexedLineSet924 = createNode("IndexedLineSet");
IndexedLineSet924.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate925 = createNode("Coordinate");
Coordinate925.point = new MFVec3f(new float[0.19480000436306,0.7276999950408936,-0.10170000046491623,0.2013999968767166,0.7009000182151794,-0.10119999945163727]);
IndexedLineSet924.coord = Coordinate925;

Shape923.geometry = IndexedLineSet924;

Appearance Appearance926 = createNode("Appearance");
Appearance926.USE = "SegmentLine";
Shape923.appearance = Appearance926;

HAnimSegment922.children = new MFNode();

HAnimSegment922.children[0] = Shape923;

Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape928 = createNode("Shape");
Shape928.USE = "jointbox";
Transform927.children = new MFNode();

Transform927.children[0] = Shape928;

HAnimSegment922.children[1] = Transform927;

HAnimSite HAnimSite929 = createNode("HAnimSite");
HAnimSite929.name = "l_pinky_distal_tip";
HAnimSite929.DEF = "Joe_l_pinky_distal_tip";
HAnimSite929.translation = new SFVec3f(new float[0.2013999968767166,0.7009000182151794,-0.10119999945163727]);
Shape Shape930 = createNode("Shape");
Shape930.USE = "sitebox";
HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = Shape930;

HAnimSegment922.children[2] = HAnimSite929;

HAnimJoint921.children = new MFNode();

HAnimJoint921.children[0] = HAnimSegment922;

HAnimJoint913.children[1] = HAnimJoint921;

HAnimJoint905.children[1] = HAnimJoint913;

HAnimJoint897.children[1] = HAnimJoint905;

HAnimJoint753.children[5] = HAnimJoint897;

HAnimJoint731.children[1] = HAnimJoint753;

HAnimJoint707.children[1] = HAnimJoint731;

HAnimJoint691.children[1] = HAnimJoint707;

HAnimJoint681.children[1] = HAnimJoint691;

HAnimJoint565.children[2] = HAnimJoint681;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.name = "r_sternoclavicular";
HAnimJoint931.DEF = "Joe_r_sternoclavicular";
HAnimJoint931.center = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0]);
HAnimJoint931.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint931.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment932 = createNode("HAnimSegment");
HAnimSegment932.name = "r_clavicle";
HAnimSegment932.DEF = "Joe_r_clavicle";
Shape Shape933 = createNode("Shape");
IndexedLineSet IndexedLineSet934 = createNode("IndexedLineSet");
IndexedLineSet934.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate935 = createNode("Coordinate");
Coordinate935.point = new MFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.019999999552965164,-0.09000000357627869,1.409999966621399,-0.09000000357627869]);
IndexedLineSet934.coord = Coordinate935;

Shape933.geometry = IndexedLineSet934;

Appearance Appearance936 = createNode("Appearance");
Appearance936.USE = "SegmentLine";
Shape933.appearance = Appearance936;

HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = Shape933;

Transform Transform937 = createNode("Transform");
Transform937.translation = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.019999999552965164]);
Shape Shape938 = createNode("Shape");
Shape938.USE = "jointbox";
Transform937.children = new MFNode();

Transform937.children[0] = Shape938;

HAnimSegment932.children[1] = Transform937;

HAnimSite HAnimSite939 = createNode("HAnimSite");
HAnimSite939.name = "r_clavicale";
HAnimSite939.DEF = "Joe_r_clavicale";
HAnimSite939.translation = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.03500000014901161]);
Shape Shape940 = createNode("Shape");
Shape940.USE = "sitebox";
HAnimSite939.children = new MFNode();

HAnimSite939.children[0] = Shape940;

HAnimSegment932.children[2] = HAnimSite939;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.name = "r_acromioclavicular";
HAnimJoint941.DEF = "Joe_r_acromioclavicular";
HAnimJoint941.center = new SFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.10999999940395355]);
HAnimJoint941.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint941.skinCoordWeight = new MFFloat(new float[1,0.8999999761581421]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment942 = createNode("HAnimSegment");
HAnimSegment942.name = "r_scapula";
HAnimSegment942.DEF = "Joe_r_scapula";
Shape Shape943 = createNode("Shape");
IndexedLineSet IndexedLineSet944 = createNode("IndexedLineSet");
IndexedLineSet944.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate945 = createNode("Coordinate");
Coordinate945.point = new MFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.09000000357627869,-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
IndexedLineSet944.coord = Coordinate945;

Shape943.geometry = IndexedLineSet944;

Appearance Appearance946 = createNode("Appearance");
Appearance946.USE = "SegmentLine";
Shape943.appearance = Appearance946;

HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = Shape943;

Transform Transform947 = createNode("Transform");
Transform947.translation = new SFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.09000000357627869]);
Shape Shape948 = createNode("Shape");
Shape948.USE = "jointbox";
Transform947.children = new MFNode();

Transform947.children[0] = Shape948;

HAnimSegment942.children[1] = Transform947;

Transform Transform949 = createNode("Transform");
Transform949.translation = new SFVec3f(new float[-0.10999999940395355,1.4270000457763672,-0.13750000298023224]);
Shape Shape950 = createNode("Shape");
Shape950.USE = "skinsphere";
Transform949.children = new MFNode();

Transform949.children[0] = Shape950;

HAnimSegment942.children[2] = Transform949;

HAnimSite HAnimSite951 = createNode("HAnimSite");
HAnimSite951.name = "r_acromion";
HAnimSite951.DEF = "Joe_r_acromion";
HAnimSite951.translation = new SFVec3f(new float[-0.17800000309944153,1.4824999570846558,-0.0625]);
Shape Shape952 = createNode("Shape");
Shape952.USE = "sitebox";
HAnimSite951.children = new MFNode();

HAnimSite951.children[0] = Shape952;

HAnimSegment942.children[3] = HAnimSite951;

HAnimSite HAnimSite953 = createNode("HAnimSite");
HAnimSite953.name = "r_axilla_ant";
HAnimSite953.DEF = "Joe_r_axilla_ant";
HAnimSite953.translation = new SFVec3f(new float[-0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape954 = createNode("Shape");
Shape954.USE = "sitebox";
HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = Shape954;

HAnimSegment942.children[4] = HAnimSite953;

HAnimSite HAnimSite955 = createNode("HAnimSite");
HAnimSite955.name = "r_axilla_post";
HAnimSite955.DEF = "Joe_r_axilla_post";
HAnimSite955.translation = new SFVec3f(new float[-0.1599999964237213,1.3799999952316284,-0.12700000405311584]);
Shape Shape956 = createNode("Shape");
Shape956.USE = "sitebox";
HAnimSite955.children = new MFNode();

HAnimSite955.children[0] = Shape956;

HAnimSegment942.children[5] = HAnimSite955;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

HAnimJoint HAnimJoint957 = createNode("HAnimJoint");
HAnimJoint957.name = "r_shoulder";
HAnimJoint957.DEF = "Joe_r_shoulder";
HAnimJoint957.center = new SFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
HAnimJoint957.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint957.skinCoordWeight = new MFFloat(new float[0.10000000149011612,1,1,1,1,1,1,1,0.30000001192092896,0.20000000298023224]);
HAnimJoint957.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint957.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment958 = createNode("HAnimSegment");
HAnimSegment958.name = "r_upperarm";
HAnimSegment958.DEF = "Joe_r_upperarm";
Transform Transform959 = createNode("Transform");
Transform959.translation = new SFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
Shape Shape960 = createNode("Shape");
Shape960.USE = "jointbox";
Transform959.children = new MFNode();

Transform959.children[0] = Shape960;

HAnimSegment958.children = new MFNode();

HAnimSegment958.children[0] = Transform959;

Shape Shape961 = createNode("Shape");
IndexedLineSet IndexedLineSet962 = createNode("IndexedLineSet");
IndexedLineSet962.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
IndexedLineSet962.coord = Coordinate963;

Shape961.geometry = IndexedLineSet962;

Appearance Appearance964 = createNode("Appearance");
Appearance964.USE = "SegmentLine";
Shape961.appearance = Appearance964;

HAnimSegment958.children[1] = Shape961;

Transform Transform965 = createNode("Transform");
Transform965.translation = new SFVec3f(new float[-0.17800000309944153,1.4824999570846558,-0.0625]);
Shape Shape966 = createNode("Shape");
Shape966.USE = "skinsphere";
Transform965.children = new MFNode();

Transform965.children[0] = Shape966;

HAnimSegment958.children[2] = Transform965;

Transform Transform967 = createNode("Transform");
Transform967.translation = new SFVec3f(new float[-0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape968 = createNode("Shape");
Shape968.USE = "skinsphere";
Transform967.children = new MFNode();

Transform967.children[0] = Shape968;

HAnimSegment958.children[3] = Transform967;

Transform Transform969 = createNode("Transform");
Transform969.translation = new SFVec3f(new float[-0.1599999964237213,1.3799999952316284,-0.12700000405311584]);
Shape Shape970 = createNode("Shape");
Shape970.USE = "skinsphere";
Transform969.children = new MFNode();

Transform969.children[0] = Shape970;

HAnimSegment958.children[4] = Transform969;

Transform Transform971 = createNode("Transform");
Transform971.translation = new SFVec3f(new float[-0.23499999940395355,1.4199999570846558,-0.0625]);
Shape Shape972 = createNode("Shape");
Shape972.USE = "skinsphere";
Transform971.children = new MFNode();

Transform971.children[0] = Shape972;

HAnimSegment958.children[5] = Transform971;

Transform Transform973 = createNode("Transform");
Transform973.translation = new SFVec3f(new float[-0.23000000417232513,1.2350000143051147,-0.03999999910593033]);
Shape Shape974 = createNode("Shape");
Shape974.USE = "skinsphere";
Transform973.children = new MFNode();

Transform973.children[0] = Shape974;

HAnimSegment958.children[6] = Transform973;

Transform Transform975 = createNode("Transform");
Transform975.translation = new SFVec3f(new float[-0.1599999964237213,1.2300000190734863,-0.03999999910593033]);
Shape Shape976 = createNode("Shape");
Shape976.USE = "skinsphere";
Transform975.children = new MFNode();

Transform975.children[0] = Shape976;

HAnimSegment958.children[7] = Transform975;

Transform Transform977 = createNode("Transform");
Transform977.translation = new SFVec3f(new float[-0.20000000298023224,1.2300000190734863,-0.10499999672174454]);
Shape Shape978 = createNode("Shape");
Shape978.USE = "skinsphere";
Transform977.children = new MFNode();

Transform977.children[0] = Shape978;

HAnimSegment958.children[8] = Transform977;

Transform Transform979 = createNode("Transform");
Transform979.translation = new SFVec3f(new float[-0.20000000298023224,1.2350000143051147,0.019999999552965164]);
Shape Shape980 = createNode("Shape");
Shape980.USE = "skinsphere";
Transform979.children = new MFNode();

Transform979.children[0] = Shape980;

HAnimSegment958.children[9] = Transform979;

HAnimSite HAnimSite981 = createNode("HAnimSite");
HAnimSite981.name = "r_humeral_medial_epicn";
HAnimSite981.DEF = "Joe_r_humeral_medial_epicn";
HAnimSite981.translation = new SFVec3f(new float[-0.16500000655651093,1.138800024986267,-0.03999999910593033]);
Shape Shape982 = createNode("Shape");
Shape982.USE = "sitebox";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = Shape982;

HAnimSegment958.children[10] = HAnimSite981;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.name = "r_radiale";
HAnimSite983.DEF = "Joe_r_radiale";
HAnimSite983.translation = new SFVec3f(new float[-0.23000000417232513,1.1330000162124634,-0.054999999701976776]);
Shape Shape984 = createNode("Shape");
Shape984.USE = "sitebox";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = Shape984;

HAnimSegment958.children[11] = HAnimSite983;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.name = "r_humeral_lateral_epicn";
HAnimSite985.DEF = "Joe_r_humeral_lateral_epicn";
HAnimSite985.translation = new SFVec3f(new float[-0.24400000274181366,1.138800024986267,-0.03999999910593033]);
Shape Shape986 = createNode("Shape");
Shape986.USE = "sitebox";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = Shape986;

HAnimSegment958.children[12] = HAnimSite985;

HAnimJoint957.children = new MFNode();

HAnimJoint957.children[0] = HAnimSegment958;

HAnimJoint HAnimJoint987 = createNode("HAnimJoint");
HAnimJoint987.name = "r_elbow";
HAnimJoint987.DEF = "Joe_r_elbow";
HAnimJoint987.center = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
HAnimJoint987.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint987.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint987.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint987.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.name = "r_forearm";
HAnimSegment988.DEF = "Joe_r_forearm";
Shape Shape989 = createNode("Shape");
IndexedLineSet IndexedLineSet990 = createNode("IndexedLineSet");
IndexedLineSet990.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate991 = createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
IndexedLineSet990.coord = Coordinate991;

Shape989.geometry = IndexedLineSet990;

Appearance Appearance992 = createNode("Appearance");
Appearance992.USE = "SegmentLine";
Shape989.appearance = Appearance992;

HAnimSegment988.children = new MFNode();

HAnimSegment988.children[0] = Shape989;

Transform Transform993 = createNode("Transform");
Transform993.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
Shape Shape994 = createNode("Shape");
Shape994.USE = "jointbox";
Transform993.children = new MFNode();

Transform993.children[0] = Shape994;

HAnimSegment988.children[1] = Transform993;

Transform Transform995 = createNode("Transform");
Transform995.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,0.013000000268220901]);
Shape Shape996 = createNode("Shape");
Shape996.USE = "skinsphere";
Transform995.children = new MFNode();

Transform995.children[0] = Shape996;

HAnimSegment988.children[2] = Transform995;

Transform Transform997 = createNode("Transform");
Transform997.translation = new SFVec3f(new float[-0.22499999403953552,1,-0.009999999776482582]);
Shape Shape998 = createNode("Shape");
Shape998.USE = "skinsphere";
Transform997.children = new MFNode();

Transform997.children[0] = Shape998;

HAnimSegment988.children[3] = Transform997;

Transform Transform999 = createNode("Transform");
Transform999.translation = new SFVec3f(new float[-0.22499999403953552,1,-0.07000000029802322]);
Shape Shape1000 = createNode("Shape");
Shape1000.USE = "skinsphere";
Transform999.children = new MFNode();

Transform999.children[0] = Shape1000;

HAnimSegment988.children[4] = Transform999;

Transform Transform1001 = createNode("Transform");
Transform1001.translation = new SFVec3f(new float[-0.1850000023841858,1,-0.009999999776482582]);
Shape Shape1002 = createNode("Shape");
Shape1002.USE = "skinsphere";
Transform1001.children = new MFNode();

Transform1001.children[0] = Shape1002;

HAnimSegment988.children[5] = Transform1001;

Transform Transform1003 = createNode("Transform");
Transform1003.translation = new SFVec3f(new float[-0.1850000023841858,1,-0.07000000029802322]);
Shape Shape1004 = createNode("Shape");
Shape1004.USE = "skinsphere";
Transform1003.children = new MFNode();

Transform1003.children[0] = Shape1004;

HAnimSegment988.children[6] = Transform1003;

HAnimSite HAnimSite1005 = createNode("HAnimSite");
HAnimSite1005.name = "r_radial_styloid";
HAnimSite1005.DEF = "Joe_r_radial_styloid";
HAnimSite1005.translation = new SFVec3f(new float[-0.20000000298023224,0.8999999761581421,-0.014999999664723873]);
Shape Shape1006 = createNode("Shape");
Shape1006.USE = "sitebox";
HAnimSite1005.children = new MFNode();

HAnimSite1005.children[0] = Shape1006;

HAnimSegment988.children[7] = HAnimSite1005;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.name = "r_olecranon";
HAnimSite1007.DEF = "Joe_r_olecranon";
HAnimSite1007.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.07999999821186066]);
Shape Shape1008 = createNode("Shape");
Shape1008.USE = "sitebox";
HAnimSite1007.children = new MFNode();

HAnimSite1007.children[0] = Shape1008;

HAnimSegment988.children[8] = HAnimSite1007;

HAnimJoint987.children = new MFNode();

HAnimJoint987.children[0] = HAnimSegment988;

HAnimJoint HAnimJoint1009 = createNode("HAnimJoint");
HAnimJoint1009.name = "r_wrist";
HAnimJoint1009.DEF = "Joe_r_wrist";
HAnimJoint1009.center = new SFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
HAnimJoint1009.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint1009.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint1009.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1009.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.name = "r_hand";
HAnimSegment1010.DEF = "Joe_r_hand";
Shape Shape1011 = createNode("Shape");
IndexedLineSet IndexedLineSet1012 = createNode("IndexedLineSet");
IndexedLineSet1012.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate1013 = createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
IndexedLineSet1012.coord = Coordinate1013;

Shape1011.geometry = IndexedLineSet1012;

Appearance Appearance1014 = createNode("Appearance");
Appearance1014.USE = "SegmentLine";
Shape1011.appearance = Appearance1014;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Shape1011;

Transform Transform1015 = createNode("Transform");
Transform1015.translation = new SFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
Shape Shape1016 = createNode("Shape");
Shape1016.USE = "jointbox";
Transform1015.children = new MFNode();

Transform1015.children[0] = Shape1016;

HAnimSegment1010.children[1] = Transform1015;

HAnimSite HAnimSite1017 = createNode("HAnimSite");
HAnimSite1017.name = "r_ulnar_styloid";
HAnimSite1017.DEF = "Joe_r_ulnar_styloid";
HAnimSite1017.translation = new SFVec3f(new float[-0.20000000298023224,0.8999999761581421,-0.08500000089406967]);
Shape Shape1018 = createNode("Shape");
Shape1018.USE = "sitebox";
HAnimSite1017.children = new MFNode();

HAnimSite1017.children[0] = Shape1018;

HAnimSegment1010.children[2] = HAnimSite1017;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

HAnimJoint HAnimJoint1019 = createNode("HAnimJoint");
HAnimJoint1019.name = "r_thumb1";
HAnimJoint1019.DEF = "Joe_r_thumb1";
HAnimJoint1019.center = new SFVec3f(new float[-0.20000000298023224,0.8500000238418579,0]);
HAnimJoint1019.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint1019.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1019.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1019.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1020 = createNode("HAnimSegment");
HAnimSegment1020.name = "r_thumb_metacarpal";
HAnimSegment1020.DEF = "Joe_r_thumb_metacarpal";
Shape Shape1021 = createNode("Shape");
IndexedLineSet IndexedLineSet1022 = createNode("IndexedLineSet");
IndexedLineSet1022.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
IndexedLineSet1022.coord = Coordinate1023;

Shape1021.geometry = IndexedLineSet1022;

Appearance Appearance1024 = createNode("Appearance");
Appearance1024.USE = "SegmentLine";
Shape1021.appearance = Appearance1024;

HAnimSegment1020.children = new MFNode();

HAnimSegment1020.children[0] = Shape1021;

Transform Transform1025 = createNode("Transform");
Transform1025.translation = new SFVec3f(new float[-0.20000000298023224,0.8500000238418579,0]);
Shape Shape1026 = createNode("Shape");
Shape1026.USE = "jointbox";
Transform1025.children = new MFNode();

Transform1025.children[0] = Shape1026;

HAnimSegment1020.children[1] = Transform1025;

HAnimJoint1019.children = new MFNode();

HAnimJoint1019.children[0] = HAnimSegment1020;

HAnimJoint HAnimJoint1027 = createNode("HAnimJoint");
HAnimJoint1027.name = "r_thumb2";
HAnimJoint1027.DEF = "Joe_r_thumb2";
HAnimJoint1027.center = new SFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
HAnimJoint1027.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint1027.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint1027.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1027.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1028 = createNode("HAnimSegment");
HAnimSegment1028.name = "r_thumb_proximal";
HAnimSegment1028.DEF = "Joe_r_thumb_proximal";
Shape Shape1029 = createNode("Shape");
IndexedLineSet IndexedLineSet1030 = createNode("IndexedLineSet");
IndexedLineSet1030.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1031 = createNode("Coordinate");
Coordinate1031.point = new MFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.800000011920929,0.05000000074505806]);
IndexedLineSet1030.coord = Coordinate1031;

Shape1029.geometry = IndexedLineSet1030;

Appearance Appearance1032 = createNode("Appearance");
Appearance1032.USE = "SegmentLine";
Shape1029.appearance = Appearance1032;

HAnimSegment1028.children = new MFNode();

HAnimSegment1028.children[0] = Shape1029;

Transform Transform1033 = createNode("Transform");
Transform1033.translation = new SFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
Shape Shape1034 = createNode("Shape");
Shape1034.USE = "jointbox";
Transform1033.children = new MFNode();

Transform1033.children[0] = Shape1034;

HAnimSegment1028.children[1] = Transform1033;

HAnimJoint1027.children = new MFNode();

HAnimJoint1027.children[0] = HAnimSegment1028;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.name = "r_thumb3";
HAnimJoint1035.DEF = "Joe_r_thumb3";
HAnimJoint1035.center = new SFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806]);
HAnimJoint1035.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint1035.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1035.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1035.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.name = "r_thumb_distal";
HAnimSegment1036.DEF = "Joe_r_thumb_distal";
Shape Shape1037 = createNode("Shape");
IndexedLineSet IndexedLineSet1038 = createNode("IndexedLineSet");
IndexedLineSet1038.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1039 = createNode("Coordinate");
Coordinate1039.point = new MFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.7799999713897705,0.07000000029802322]);
IndexedLineSet1038.coord = Coordinate1039;

Shape1037.geometry = IndexedLineSet1038;

Appearance Appearance1040 = createNode("Appearance");
Appearance1040.USE = "SegmentLine";
Shape1037.appearance = Appearance1040;

HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = Shape1037;

Transform Transform1041 = createNode("Transform");
Transform1041.DEF = "Thumbnail";
Transform1041.translation = new SFVec3f(new float[-0.20000000298023224,0.7850000262260437,0.07500000298023224]);
Shape Shape1042 = createNode("Shape");
Shape1042.USE = "skinsphere";
Transform1041.children = new MFNode();

Transform1041.children[0] = Shape1042;

HAnimSegment1036.children[1] = Transform1041;

Transform Transform1043 = createNode("Transform");
Transform1043.translation = new SFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806]);
Shape Shape1044 = createNode("Shape");
Shape1044.USE = "jointbox";
Transform1043.children = new MFNode();

Transform1043.children[0] = Shape1044;

HAnimSegment1036.children[2] = Transform1043;

HAnimSite HAnimSite1045 = createNode("HAnimSite");
HAnimSite1045.name = "r_thumb_distal_tip";
HAnimSite1045.DEF = "Joe_r_thumb_distal_tip";
HAnimSite1045.translation = new SFVec3f(new float[-0.20000000298023224,0.7799999713897705,0.07000000029802322]);
Shape Shape1046 = createNode("Shape");
Shape1046.USE = "sitebox";
HAnimSite1045.children = new MFNode();

HAnimSite1045.children[0] = Shape1046;

HAnimSegment1036.children[3] = HAnimSite1045;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

HAnimJoint1027.children[1] = HAnimJoint1035;

HAnimJoint1019.children[1] = HAnimJoint1027;

HAnimJoint1009.children[1] = HAnimJoint1019;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.name = "r_index0";
HAnimJoint1047.DEF = "Joe_r_index0";
HAnimJoint1047.center = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873]);
HAnimJoint1047.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint1047.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1047.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1047.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1048 = createNode("HAnimSegment");
HAnimSegment1048.name = "r_index_metacarpal";
HAnimSegment1048.DEF = "Joe_r_index_metacarpal";
Shape Shape1049 = createNode("Shape");
IndexedLineSet IndexedLineSet1050 = createNode("IndexedLineSet");
IndexedLineSet1050.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
IndexedLineSet1050.coord = Coordinate1051;

Shape1049.geometry = IndexedLineSet1050;

Appearance Appearance1052 = createNode("Appearance");
Appearance1052.USE = "SegmentLine";
Shape1049.appearance = Appearance1052;

HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = Shape1049;

Transform Transform1053 = createNode("Transform");
Transform1053.translation = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873]);
Shape Shape1054 = createNode("Shape");
Shape1054.USE = "jointbox";
Transform1053.children = new MFNode();

Transform1053.children[0] = Shape1054;

HAnimSegment1048.children[1] = Transform1053;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.name = "r_metacarpal_pha2";
HAnimSite1055.DEF = "Joe_r_metacarpal_pha2";
HAnimSite1055.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.004999999888241291]);
Shape Shape1056 = createNode("Shape");
Shape1056.USE = "sitebox";
HAnimSite1055.children = new MFNode();

HAnimSite1055.children[0] = Shape1056;

HAnimSegment1048.children[2] = HAnimSite1055;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

HAnimJoint HAnimJoint1057 = createNode("HAnimJoint");
HAnimJoint1057.name = "r_index1";
HAnimJoint1057.DEF = "Joe_r_index1";
HAnimJoint1057.center = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
HAnimJoint1057.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint1057.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint1057.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1057.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1058 = createNode("HAnimSegment");
HAnimSegment1058.name = "r_index_proximal";
HAnimSegment1058.DEF = "Joe_r_index_proximal";
Shape Shape1059 = createNode("Shape");
IndexedLineSet IndexedLineSet1060 = createNode("IndexedLineSet");
IndexedLineSet1060.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1061 = createNode("Coordinate");
Coordinate1061.point = new MFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
IndexedLineSet1060.coord = Coordinate1061;

Shape1059.geometry = IndexedLineSet1060;

Appearance Appearance1062 = createNode("Appearance");
Appearance1062.USE = "SegmentLine";
Shape1059.appearance = Appearance1062;

HAnimSegment1058.children = new MFNode();

HAnimSegment1058.children[0] = Shape1059;

Transform Transform1063 = createNode("Transform");
Transform1063.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
Shape Shape1064 = createNode("Shape");
Shape1064.USE = "jointbox";
Transform1063.children = new MFNode();

Transform1063.children[0] = Shape1064;

HAnimSegment1058.children[1] = Transform1063;

HAnimJoint1057.children = new MFNode();

HAnimJoint1057.children[0] = HAnimSegment1058;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.name = "r_index2";
HAnimJoint1065.DEF = "Joe_r_index2";
HAnimJoint1065.center = new SFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
HAnimJoint1065.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint1065.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1065.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1065.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.name = "r_index_middle";
HAnimSegment1066.DEF = "Joe_r_index_middle";
Shape Shape1067 = createNode("Shape");
IndexedLineSet IndexedLineSet1068 = createNode("IndexedLineSet");
IndexedLineSet1068.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1069 = createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
IndexedLineSet1068.coord = Coordinate1069;

Shape1067.geometry = IndexedLineSet1068;

Appearance Appearance1070 = createNode("Appearance");
Appearance1070.USE = "SegmentLine";
Shape1067.appearance = Appearance1070;

HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = Shape1067;

Transform Transform1071 = createNode("Transform");
Transform1071.translation = new SFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
Shape Shape1072 = createNode("Shape");
Shape1072.USE = "jointbox";
Transform1071.children = new MFNode();

Transform1071.children[0] = Shape1072;

HAnimSegment1066.children[1] = Transform1071;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.name = "r_index3";
HAnimJoint1073.DEF = "Joe_r_index3";
HAnimJoint1073.center = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
HAnimJoint1073.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint1073.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1073.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1073.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.name = "r_index_distal";
HAnimSegment1074.DEF = "Joe_r_index_distal";
Shape Shape1075 = createNode("Shape");
IndexedLineSet IndexedLineSet1076 = createNode("IndexedLineSet");
IndexedLineSet1076.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1077 = createNode("Coordinate");
Coordinate1077.point = new MFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.014999999664723873]);
IndexedLineSet1076.coord = Coordinate1077;

Shape1075.geometry = IndexedLineSet1076;

Appearance Appearance1078 = createNode("Appearance");
Appearance1078.USE = "SegmentLine";
Shape1075.appearance = Appearance1078;

HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = Shape1075;

Transform Transform1079 = createNode("Transform");
Transform1079.translation = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
Shape Shape1080 = createNode("Shape");
Shape1080.USE = "jointbox";
Transform1079.children = new MFNode();

Transform1079.children[0] = Shape1080;

HAnimSegment1074.children[1] = Transform1079;

HAnimSite HAnimSite1081 = createNode("HAnimSite");
HAnimSite1081.name = "r_index_distal_tip";
HAnimSite1081.DEF = "Joe_r_index_distal_tip";
HAnimSite1081.translation = new SFVec3f(new float[-0.20000000298023224,0.6949999928474426,-0.014999999664723873]);
Shape Shape1082 = createNode("Shape");
Shape1082.USE = "sitebox";
HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = Shape1082;

HAnimSegment1074.children[2] = HAnimSite1081;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

HAnimJoint1065.children[1] = HAnimJoint1073;

HAnimJoint1057.children[1] = HAnimJoint1065;

HAnimJoint1047.children[1] = HAnimJoint1057;

HAnimJoint1009.children[2] = HAnimJoint1047;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.name = "r_middle0";
HAnimJoint1083.DEF = "Joe_r_middle0";
HAnimJoint1083.center = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033]);
HAnimJoint1083.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint1083.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.name = "r_middle_metacarpal";
HAnimSegment1084.DEF = "Joe_r_middle_metacarpal";
Shape Shape1085 = createNode("Shape");
IndexedLineSet IndexedLineSet1086 = createNode("IndexedLineSet");
IndexedLineSet1086.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1087 = createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
IndexedLineSet1086.coord = Coordinate1087;

Shape1085.geometry = IndexedLineSet1086;

Appearance Appearance1088 = createNode("Appearance");
Appearance1088.USE = "SegmentLine";
Shape1085.appearance = Appearance1088;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Shape1085;

Transform Transform1089 = createNode("Transform");
Transform1089.translation = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033]);
Shape Shape1090 = createNode("Shape");
Shape1090.USE = "jointbox";
Transform1089.children = new MFNode();

Transform1089.children[0] = Shape1090;

HAnimSegment1084.children[1] = Transform1089;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1091 = createNode("HAnimJoint");
HAnimJoint1091.name = "r_middle1";
HAnimJoint1091.DEF = "Joe_r_middle1";
HAnimJoint1091.center = new SFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
HAnimJoint1091.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint1091.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint1091.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1092 = createNode("HAnimSegment");
HAnimSegment1092.name = "r_middle_proximal";
HAnimSegment1092.DEF = "Joe_r_middle_proximal";
Shape Shape1093 = createNode("Shape");
IndexedLineSet IndexedLineSet1094 = createNode("IndexedLineSet");
IndexedLineSet1094.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1095 = createNode("Coordinate");
Coordinate1095.point = new MFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
IndexedLineSet1094.coord = Coordinate1095;

Shape1093.geometry = IndexedLineSet1094;

Appearance Appearance1096 = createNode("Appearance");
Appearance1096.USE = "SegmentLine";
Shape1093.appearance = Appearance1096;

HAnimSegment1092.children = new MFNode();

HAnimSegment1092.children[0] = Shape1093;

Transform Transform1097 = createNode("Transform");
Transform1097.translation = new SFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
Shape Shape1098 = createNode("Shape");
Shape1098.USE = "jointbox";
Transform1097.children = new MFNode();

Transform1097.children[0] = Shape1098;

HAnimSegment1092.children[1] = Transform1097;

HAnimJoint1091.children = new MFNode();

HAnimJoint1091.children[0] = HAnimSegment1092;

HAnimJoint HAnimJoint1099 = createNode("HAnimJoint");
HAnimJoint1099.name = "r_middle2";
HAnimJoint1099.DEF = "Joe_r_middle2";
HAnimJoint1099.center = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
HAnimJoint1099.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint1099.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1099.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1099.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1100 = createNode("HAnimSegment");
HAnimSegment1100.name = "r_middle_middle";
HAnimSegment1100.DEF = "Joe_r_middle_middle";
Shape Shape1101 = createNode("Shape");
IndexedLineSet IndexedLineSet1102 = createNode("IndexedLineSet");
IndexedLineSet1102.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1103 = createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
IndexedLineSet1102.coord = Coordinate1103;

Shape1101.geometry = IndexedLineSet1102;

Appearance Appearance1104 = createNode("Appearance");
Appearance1104.USE = "SegmentLine";
Shape1101.appearance = Appearance1104;

HAnimSegment1100.children = new MFNode();

HAnimSegment1100.children[0] = Shape1101;

Transform Transform1105 = createNode("Transform");
Transform1105.translation = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
Shape Shape1106 = createNode("Shape");
Shape1106.USE = "jointbox";
Transform1105.children = new MFNode();

Transform1105.children[0] = Shape1106;

HAnimSegment1100.children[1] = Transform1105;

HAnimJoint1099.children = new MFNode();

HAnimJoint1099.children[0] = HAnimSegment1100;

HAnimJoint HAnimJoint1107 = createNode("HAnimJoint");
HAnimJoint1107.name = "r_middle3";
HAnimJoint1107.DEF = "Joe_r_middle3";
HAnimJoint1107.center = new SFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
HAnimJoint1107.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint1107.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1107.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1108 = createNode("HAnimSegment");
HAnimSegment1108.name = "r_middle_distal";
HAnimSegment1108.DEF = "Joe_r_middle_distal";
Shape Shape1109 = createNode("Shape");
IndexedLineSet IndexedLineSet1110 = createNode("IndexedLineSet");
IndexedLineSet1110.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1111 = createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.6758000254631042,-0.03999999910593033]);
IndexedLineSet1110.coord = Coordinate1111;

Shape1109.geometry = IndexedLineSet1110;

Appearance Appearance1112 = createNode("Appearance");
Appearance1112.USE = "SegmentLine";
Shape1109.appearance = Appearance1112;

HAnimSegment1108.children = new MFNode();

HAnimSegment1108.children[0] = Shape1109;

Transform Transform1113 = createNode("Transform");
Transform1113.translation = new SFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
Shape Shape1114 = createNode("Shape");
Shape1114.USE = "jointbox";
Transform1113.children = new MFNode();

Transform1113.children[0] = Shape1114;

HAnimSegment1108.children[1] = Transform1113;

HAnimSite HAnimSite1115 = createNode("HAnimSite");
HAnimSite1115.name = "r_dactylion";
HAnimSite1115.DEF = "Joe_r_dactylion";
HAnimSite1115.translation = new SFVec3f(new float[-0.20000000298023224,0.6800000071525574,-0.03999999910593033]);
Shape Shape1116 = createNode("Shape");
Shape1116.USE = "sitebox";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = Shape1116;

HAnimSegment1108.children[2] = HAnimSite1115;

HAnimSite HAnimSite1117 = createNode("HAnimSite");
HAnimSite1117.name = "r_middle_distal_tip";
HAnimSite1117.DEF = "Joe_r_middle_distal_tip";
HAnimSite1117.translation = new SFVec3f(new float[-0.20000000298023224,0.6800000071525574,-0.03999999910593033]);
Shape Shape1118 = createNode("Shape");
Shape1118.USE = "sitebox";
HAnimSite1117.children = new MFNode();

HAnimSite1117.children[0] = Shape1118;

HAnimSegment1108.children[3] = HAnimSite1117;

HAnimJoint1107.children = new MFNode();

HAnimJoint1107.children[0] = HAnimSegment1108;

HAnimJoint1099.children[1] = HAnimJoint1107;

HAnimJoint1091.children[1] = HAnimJoint1099;

HAnimJoint1083.children[1] = HAnimJoint1091;

HAnimJoint1009.children[3] = HAnimJoint1083;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.name = "r_ring0";
HAnimJoint1119.DEF = "Joe_r_ring0";
HAnimJoint1119.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint1119.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint1119.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1119.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1120 = createNode("HAnimSegment");
HAnimSegment1120.name = "r_ring_metacarpal";
HAnimSegment1120.DEF = "Joe_r_ring_metacarpal";
Shape Shape1121 = createNode("Shape");
IndexedLineSet IndexedLineSet1122 = createNode("IndexedLineSet");
IndexedLineSet1122.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1123 = createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
IndexedLineSet1122.coord = Coordinate1123;

Shape1121.geometry = IndexedLineSet1122;

Appearance Appearance1124 = createNode("Appearance");
Appearance1124.USE = "SegmentLine";
Shape1121.appearance = Appearance1124;

HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = Shape1121;

Transform Transform1125 = createNode("Transform");
Transform1125.translation = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.06499999761581421]);
Shape Shape1126 = createNode("Shape");
Shape1126.USE = "jointbox";
Transform1125.children = new MFNode();

Transform1125.children[0] = Shape1126;

HAnimSegment1120.children[1] = Transform1125;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.name = "r_ring1";
HAnimJoint1127.DEF = "Joe_r_ring1";
HAnimJoint1127.center = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
HAnimJoint1127.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1127.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint1127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1127.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1128 = createNode("HAnimSegment");
HAnimSegment1128.name = "r_ring_proximal";
HAnimSegment1128.DEF = "Joe_r_ring_proximal";
Shape Shape1129 = createNode("Shape");
IndexedLineSet IndexedLineSet1130 = createNode("IndexedLineSet");
IndexedLineSet1130.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1131 = createNode("Coordinate");
Coordinate1131.point = new MFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
IndexedLineSet1130.coord = Coordinate1131;

Shape1129.geometry = IndexedLineSet1130;

Appearance Appearance1132 = createNode("Appearance");
Appearance1132.USE = "SegmentLine";
Shape1129.appearance = Appearance1132;

HAnimSegment1128.children = new MFNode();

HAnimSegment1128.children[0] = Shape1129;

Transform Transform1133 = createNode("Transform");
Transform1133.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
Shape Shape1134 = createNode("Shape");
Shape1134.USE = "jointbox";
Transform1133.children = new MFNode();

Transform1133.children[0] = Shape1134;

HAnimSegment1128.children[1] = Transform1133;

HAnimJoint1127.children = new MFNode();

HAnimJoint1127.children[0] = HAnimSegment1128;

HAnimJoint HAnimJoint1135 = createNode("HAnimJoint");
HAnimJoint1135.name = "r_ring2";
HAnimJoint1135.DEF = "Joe_r_ring2";
HAnimJoint1135.center = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
HAnimJoint1135.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1135.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1135.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1136 = createNode("HAnimSegment");
HAnimSegment1136.name = "r_ring_middle";
HAnimSegment1136.DEF = "Joe_r_ring_middle";
Shape Shape1137 = createNode("Shape");
IndexedLineSet IndexedLineSet1138 = createNode("IndexedLineSet");
IndexedLineSet1138.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1139 = createNode("Coordinate");
Coordinate1139.point = new MFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
IndexedLineSet1138.coord = Coordinate1139;

Shape1137.geometry = IndexedLineSet1138;

Appearance Appearance1140 = createNode("Appearance");
Appearance1140.USE = "SegmentLine";
Shape1137.appearance = Appearance1140;

HAnimSegment1136.children = new MFNode();

HAnimSegment1136.children[0] = Shape1137;

Transform Transform1141 = createNode("Transform");
Transform1141.translation = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
Shape Shape1142 = createNode("Shape");
Shape1142.USE = "jointbox";
Transform1141.children = new MFNode();

Transform1141.children[0] = Shape1142;

HAnimSegment1136.children[1] = Transform1141;

HAnimJoint1135.children = new MFNode();

HAnimJoint1135.children[0] = HAnimSegment1136;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.name = "r_ring3";
HAnimJoint1143.DEF = "Joe_r_ring3";
HAnimJoint1143.center = new SFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
HAnimJoint1143.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1143.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1143.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1144 = createNode("HAnimSegment");
HAnimSegment1144.name = "r_ring_distal";
HAnimSegment1144.DEF = "Joe_r_ring_distal";
Shape Shape1145 = createNode("Shape");
IndexedLineSet IndexedLineSet1146 = createNode("IndexedLineSet");
IndexedLineSet1146.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1147 = createNode("Coordinate");
Coordinate1147.point = new MFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.06499999761581421]);
IndexedLineSet1146.coord = Coordinate1147;

Shape1145.geometry = IndexedLineSet1146;

Appearance Appearance1148 = createNode("Appearance");
Appearance1148.USE = "SegmentLine";
Shape1145.appearance = Appearance1148;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Shape1145;

Transform Transform1149 = createNode("Transform");
Transform1149.translation = new SFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "jointbox";
Transform1149.children = new MFNode();

Transform1149.children[0] = Shape1150;

HAnimSegment1144.children[1] = Transform1149;

HAnimSite HAnimSite1151 = createNode("HAnimSite");
HAnimSite1151.name = "r_ring_distal_tip";
HAnimSite1151.DEF = "Joe_r_ring_distal_tip";
HAnimSite1151.translation = new SFVec3f(new float[-0.20000000298023224,0.6949999928474426,-0.06499999761581421]);
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "sitebox";
HAnimSite1151.children = new MFNode();

HAnimSite1151.children[0] = Shape1152;

HAnimSegment1144.children[2] = HAnimSite1151;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

HAnimJoint1135.children[1] = HAnimJoint1143;

HAnimJoint1127.children[1] = HAnimJoint1135;

HAnimJoint1119.children[1] = HAnimJoint1127;

HAnimJoint1009.children[4] = HAnimJoint1119;

HAnimJoint HAnimJoint1153 = createNode("HAnimJoint");
HAnimJoint1153.name = "r_pinky0";
HAnimJoint1153.DEF = "Joe_r_pinky0";
HAnimJoint1153.center = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
HAnimJoint1153.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1153.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint1153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1153.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1154 = createNode("HAnimSegment");
HAnimSegment1154.name = "r_pinky_metacarpal";
HAnimSegment1154.DEF = "Joe_r_pinky_metacarpal";
Shape Shape1155 = createNode("Shape");
IndexedLineSet IndexedLineSet1156 = createNode("IndexedLineSet");
IndexedLineSet1156.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1157 = createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
IndexedLineSet1156.coord = Coordinate1157;

Shape1155.geometry = IndexedLineSet1156;

Appearance Appearance1158 = createNode("Appearance");
Appearance1158.USE = "SegmentLine";
Shape1155.appearance = Appearance1158;

HAnimSegment1154.children = new MFNode();

HAnimSegment1154.children[0] = Shape1155;

Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
Shape Shape1160 = createNode("Shape");
Shape1160.USE = "jointbox";
Transform1159.children = new MFNode();

Transform1159.children[0] = Shape1160;

HAnimSegment1154.children[1] = Transform1159;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.name = "r_metacarpal_pha5";
HAnimSite1161.DEF = "Joe_r_metacarpal_pha5";
HAnimSite1161.translation = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.0949999988079071]);
Shape Shape1162 = createNode("Shape");
Shape1162.USE = "sitebox";
HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = Shape1162;

HAnimSegment1154.children[2] = HAnimSite1161;

HAnimJoint1153.children = new MFNode();

HAnimJoint1153.children[0] = HAnimSegment1154;

HAnimJoint HAnimJoint1163 = createNode("HAnimJoint");
HAnimJoint1163.name = "r_pinky1";
HAnimJoint1163.DEF = "Joe_r_pinky1";
HAnimJoint1163.center = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
HAnimJoint1163.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1163.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint1163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1164 = createNode("HAnimSegment");
HAnimSegment1164.name = "r_pinky_proximal";
HAnimSegment1164.DEF = "Joe_r_pinky_proximal";
Shape Shape1165 = createNode("Shape");
IndexedLineSet IndexedLineSet1166 = createNode("IndexedLineSet");
IndexedLineSet1166.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1167 = createNode("Coordinate");
Coordinate1167.point = new MFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
IndexedLineSet1166.coord = Coordinate1167;

Shape1165.geometry = IndexedLineSet1166;

Appearance Appearance1168 = createNode("Appearance");
Appearance1168.USE = "SegmentLine";
Shape1165.appearance = Appearance1168;

HAnimSegment1164.children = new MFNode();

HAnimSegment1164.children[0] = Shape1165;

Transform Transform1169 = createNode("Transform");
Transform1169.translation = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
Shape Shape1170 = createNode("Shape");
Shape1170.USE = "jointbox";
Transform1169.children = new MFNode();

Transform1169.children[0] = Shape1170;

HAnimSegment1164.children[1] = Transform1169;

HAnimJoint1163.children = new MFNode();

HAnimJoint1163.children[0] = HAnimSegment1164;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.name = "r_pinky2";
HAnimJoint1171.DEF = "Joe_r_pinky2";
HAnimJoint1171.center = new SFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
HAnimJoint1171.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1171.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1171.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1172 = createNode("HAnimSegment");
HAnimSegment1172.name = "r_pinky_middle";
HAnimSegment1172.DEF = "Joe_r_pinky_middle";
Shape Shape1173 = createNode("Shape");
IndexedLineSet IndexedLineSet1174 = createNode("IndexedLineSet");
IndexedLineSet1174.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1175 = createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.08500000089406967]);
IndexedLineSet1174.coord = Coordinate1175;

Shape1173.geometry = IndexedLineSet1174;

Appearance Appearance1176 = createNode("Appearance");
Appearance1176.USE = "SegmentLine";
Shape1173.appearance = Appearance1176;

HAnimSegment1172.children = new MFNode();

HAnimSegment1172.children[0] = Shape1173;

Transform Transform1177 = createNode("Transform");
Transform1177.translation = new SFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
Shape Shape1178 = createNode("Shape");
Shape1178.USE = "jointbox";
Transform1177.children = new MFNode();

Transform1177.children[0] = Shape1178;

HAnimSegment1172.children[1] = Transform1177;

HAnimJoint1171.children = new MFNode();

HAnimJoint1171.children[0] = HAnimSegment1172;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.name = "r_pinky3";
HAnimJoint1179.DEF = "Joe_r_pinky3";
HAnimJoint1179.center = new SFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.09000000357627869]);
HAnimJoint1179.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1179.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1179.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1180 = createNode("HAnimSegment");
HAnimSegment1180.name = "r_pinky_distal";
HAnimSegment1180.DEF = "Joe_r_pinky_distal";
Shape Shape1181 = createNode("Shape");
IndexedLineSet IndexedLineSet1182 = createNode("IndexedLineSet");
IndexedLineSet1182.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.08500000089406967]);
IndexedLineSet1182.coord = Coordinate1183;

Shape1181.geometry = IndexedLineSet1182;

Appearance Appearance1184 = createNode("Appearance");
Appearance1184.USE = "SegmentLine";
Shape1181.appearance = Appearance1184;

HAnimSegment1180.children = new MFNode();

HAnimSegment1180.children[0] = Shape1181;

Transform Transform1185 = createNode("Transform");
Transform1185.translation = new SFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.08500000089406967]);
Shape Shape1186 = createNode("Shape");
Shape1186.USE = "jointbox";
Transform1185.children = new MFNode();

Transform1185.children[0] = Shape1186;

HAnimSegment1180.children[1] = Transform1185;

HAnimSite HAnimSite1187 = createNode("HAnimSite");
HAnimSite1187.name = "r_pinky_distal_tip";
HAnimSite1187.DEF = "Joe_r_pinky_distal_tip";
HAnimSite1187.translation = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.08500000089406967]);
Shape Shape1188 = createNode("Shape");
Shape1188.USE = "sitebox";
HAnimSite1187.children = new MFNode();

HAnimSite1187.children[0] = Shape1188;

HAnimSegment1180.children[2] = HAnimSite1187;

HAnimJoint1179.children = new MFNode();

HAnimJoint1179.children[0] = HAnimSegment1180;

HAnimJoint1171.children[1] = HAnimJoint1179;

HAnimJoint1163.children[1] = HAnimJoint1171;

HAnimJoint1153.children[1] = HAnimJoint1163;

HAnimJoint1009.children[5] = HAnimJoint1153;

HAnimJoint987.children[1] = HAnimJoint1009;

HAnimJoint957.children[1] = HAnimJoint987;

HAnimJoint941.children[1] = HAnimJoint957;

HAnimJoint931.children[1] = HAnimJoint941;

HAnimJoint565.children[3] = HAnimJoint931;

HAnimJoint557.children[1] = HAnimJoint565;

HAnimJoint549.children[1] = HAnimJoint557;

HAnimJoint539.children[1] = HAnimJoint549;

HAnimJoint531.children[1] = HAnimJoint539;

HAnimJoint523.children[1] = HAnimJoint531;

HAnimJoint515.children[1] = HAnimJoint523;

HAnimJoint507.children[1] = HAnimJoint515;

HAnimJoint495.children[1] = HAnimJoint507;

HAnimJoint485.children[1] = HAnimJoint495;

HAnimJoint477.children[1] = HAnimJoint485;

HAnimJoint469.children[1] = HAnimJoint477;

HAnimJoint461.children[1] = HAnimJoint469;

HAnimJoint435.children[1] = HAnimJoint461;

HAnimJoint427.children[1] = HAnimJoint435;

HAnimJoint419.children[1] = HAnimJoint427;

HAnimJoint404.children[2] = HAnimJoint419;

HAnimJoint90.children[2] = HAnimJoint404;

HAnimHumanoid81.joints[1] = HAnimJoint90;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_HumanoidRoot";
HAnimHumanoid81.joints[2] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_sacroiliac";
HAnimHumanoid81.joints[3] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_l_hip";
HAnimHumanoid81.joints[4] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_l_knee";
HAnimHumanoid81.joints[5] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_l_ankle";
HAnimHumanoid81.joints[6] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_l_subtalar";
HAnimHumanoid81.joints[7] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_l_midtarsal";
HAnimHumanoid81.joints[8] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_l_metatarsal";
HAnimHumanoid81.joints[9] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_r_hip";
HAnimHumanoid81.joints[10] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_r_knee";
HAnimHumanoid81.joints[11] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_r_ankle";
HAnimHumanoid81.joints[12] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_r_subtalar";
HAnimHumanoid81.joints[13] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_r_midtarsal";
HAnimHumanoid81.joints[14] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_r_metatarsal";
HAnimHumanoid81.joints[15] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vl5";
HAnimHumanoid81.joints[16] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vl4";
HAnimHumanoid81.joints[17] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vl3";
HAnimHumanoid81.joints[18] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vl2";
HAnimHumanoid81.joints[19] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vl1";
HAnimHumanoid81.joints[20] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vt12";
HAnimHumanoid81.joints[21] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vt11";
HAnimHumanoid81.joints[22] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vt10";
HAnimHumanoid81.joints[23] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_vt9";
HAnimHumanoid81.joints[24] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_vt8";
HAnimHumanoid81.joints[25] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_vt7";
HAnimHumanoid81.joints[26] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_vt6";
HAnimHumanoid81.joints[27] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_vt5";
HAnimHumanoid81.joints[28] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_vt4";
HAnimHumanoid81.joints[29] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_vt3";
HAnimHumanoid81.joints[30] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_vt2";
HAnimHumanoid81.joints[31] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_vt1";
HAnimHumanoid81.joints[32] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_vc7";
HAnimHumanoid81.joints[33] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_vc6";
HAnimHumanoid81.joints[34] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_vc5";
HAnimHumanoid81.joints[35] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_vc4";
HAnimHumanoid81.joints[36] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_vc3";
HAnimHumanoid81.joints[37] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_vc2";
HAnimHumanoid81.joints[38] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_vc1";
HAnimHumanoid81.joints[39] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_skullbase";
HAnimHumanoid81.joints[40] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_l_eyeball_joint";
HAnimHumanoid81.joints[41] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_r_eyeball_joint";
HAnimHumanoid81.joints[42] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_l_sternoclavicular";
HAnimHumanoid81.joints[43] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_l_acromioclavicular";
HAnimHumanoid81.joints[44] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_l_shoulder";
HAnimHumanoid81.joints[45] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_l_elbow";
HAnimHumanoid81.joints[46] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_l_wrist";
HAnimHumanoid81.joints[47] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_l_thumb1";
HAnimHumanoid81.joints[48] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_l_thumb2";
HAnimHumanoid81.joints[49] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_l_thumb3";
HAnimHumanoid81.joints[50] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_l_index0";
HAnimHumanoid81.joints[51] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_l_index1";
HAnimHumanoid81.joints[52] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_l_index2";
HAnimHumanoid81.joints[53] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_l_index3";
HAnimHumanoid81.joints[54] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_l_middle0";
HAnimHumanoid81.joints[55] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_l_middle1";
HAnimHumanoid81.joints[56] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_l_middle2";
HAnimHumanoid81.joints[57] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_l_middle3";
HAnimHumanoid81.joints[58] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_l_ring0";
HAnimHumanoid81.joints[59] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_l_ring1";
HAnimHumanoid81.joints[60] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_l_ring2";
HAnimHumanoid81.joints[61] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_l_ring3";
HAnimHumanoid81.joints[62] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_l_pinky0";
HAnimHumanoid81.joints[63] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_l_pinky1";
HAnimHumanoid81.joints[64] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_l_pinky2";
HAnimHumanoid81.joints[65] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_l_pinky3";
HAnimHumanoid81.joints[66] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_r_sternoclavicular";
HAnimHumanoid81.joints[67] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_r_acromioclavicular";
HAnimHumanoid81.joints[68] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_r_shoulder";
HAnimHumanoid81.joints[69] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_r_elbow";
HAnimHumanoid81.joints[70] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_r_wrist";
HAnimHumanoid81.joints[71] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_r_thumb1";
HAnimHumanoid81.joints[72] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_r_thumb2";
HAnimHumanoid81.joints[73] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_r_thumb3";
HAnimHumanoid81.joints[74] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_index0";
HAnimHumanoid81.joints[75] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_r_index1";
HAnimHumanoid81.joints[76] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_r_index2";
HAnimHumanoid81.joints[77] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_r_index3";
HAnimHumanoid81.joints[78] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_r_middle0";
HAnimHumanoid81.joints[79] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_r_middle1";
HAnimHumanoid81.joints[80] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "Joe_r_middle2";
HAnimHumanoid81.joints[81] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "Joe_r_middle3";
HAnimHumanoid81.joints[82] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "Joe_r_ring0";
HAnimHumanoid81.joints[83] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "Joe_r_ring1";
HAnimHumanoid81.joints[84] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "Joe_r_ring2";
HAnimHumanoid81.joints[85] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "Joe_r_ring3";
HAnimHumanoid81.joints[86] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "Joe_r_pinky0";
HAnimHumanoid81.joints[87] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "Joe_r_pinky1";
HAnimHumanoid81.joints[88] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "Joe_r_pinky2";
HAnimHumanoid81.joints[89] = HAnimJoint1276;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.USE = "Joe_r_pinky3";
HAnimHumanoid81.joints[90] = HAnimJoint1277;

Group80.children = new MFNode();

Group80.children[0] = HAnimHumanoid81;

Group79.children = new MFNode();

Group79.children[0] = Group80;

children[7] = Group79;

TimeSensor TimeSensor1278 = createNode("TimeSensor");
TimeSensor1278.DEF = "Time1";
TimeSensor1278.cycleInterval = 2.86;
TimeSensor1278.loop = True;
children[8] = TimeSensor1278;

TimeSensor TimeSensor1279 = createNode("TimeSensor");
TimeSensor1279.DEF = "Time2";
TimeSensor1279.cycleInterval = 5.72;
TimeSensor1279.loop = True;
children[9] = TimeSensor1279;

TimeSensor TimeSensor1280 = createNode("TimeSensor");
TimeSensor1280.DEF = "Time3";
TimeSensor1280.cycleInterval = 5.8;
TimeSensor1280.loop = True;
children[10] = TimeSensor1280;

OrientationInterpolator OrientationInterpolator1281 = createNode("OrientationInterpolator");
OrientationInterpolator1281.DEF = "Pitch";
OrientationInterpolator1281.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1281.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.7679998874664307,1,0,0,5.02400016784668,1,0,0,6.28000020980835]);
children[11] = OrientationInterpolator1281;

OrientationInterpolator OrientationInterpolator1282 = createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "Yaw";
OrientationInterpolator1282.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1282.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.7679998874664307,0,1,0,5.02400016784668,0,1,0,6.28000020980835]);
children[12] = OrientationInterpolator1282;

OrientationInterpolator OrientationInterpolator1283 = createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "Roll";
OrientationInterpolator1283.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.7679998874664307,0,0,1,5.02400016784668,0,0,1,6.28000020980835]);
children[13] = OrientationInterpolator1283;

OrientationInterpolator OrientationInterpolator1284 = createNode("OrientationInterpolator");
OrientationInterpolator1284.DEF = "vc6Yaw";
OrientationInterpolator1284.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1]);
OrientationInterpolator1284.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4000000059604645,-1,0,0.699999988079071,-0.4000000059604645,-1,0,0.4000000059604645,0,1,0,0,0,1,0,0]);
children[14] = OrientationInterpolator1284;

ROUTE ROUTE1285 = createNode("ROUTE");
ROUTE1285.fromField = "fraction_changed";
ROUTE1285.fromNode = "Time2";
ROUTE1285.toField = "set_fraction";
ROUTE1285.toNode = "vc6Yaw";
children[15] = ROUTE1285;

ROUTE ROUTE1286 = createNode("ROUTE");
ROUTE1286.fromField = "value_changed";
ROUTE1286.fromNode = "vc6Yaw";
ROUTE1286.toField = "set_rotation";
ROUTE1286.toNode = "Joe_vc6";
children[16] = ROUTE1286;

OrientationInterpolator OrientationInterpolator1287 = createNode("OrientationInterpolator");
OrientationInterpolator1287.DEF = "EyeballsRotation";
OrientationInterpolator1287.key = new MFFloat(new float[0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1]);
OrientationInterpolator1287.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0,0,1,0,0,0,1,0]);
children[17] = OrientationInterpolator1287;

ROUTE ROUTE1288 = createNode("ROUTE");
ROUTE1288.fromField = "fraction_changed";
ROUTE1288.fromNode = "Time3";
ROUTE1288.toField = "set_fraction";
ROUTE1288.toNode = "EyeballsRotation";
children[18] = ROUTE1288;

ROUTE ROUTE1289 = createNode("ROUTE");
ROUTE1289.fromField = "value_changed";
ROUTE1289.fromNode = "EyeballsRotation";
ROUTE1289.toField = "set_rotation";
ROUTE1289.toNode = "Joe_r_eyeball_joint";
children[19] = ROUTE1289;

ROUTE ROUTE1290 = createNode("ROUTE");
ROUTE1290.fromField = "value_changed";
ROUTE1290.fromNode = "EyeballsRotation";
ROUTE1290.toField = "set_rotation";
ROUTE1290.toNode = "Joe_l_eyeball_joint";
children[20] = ROUTE1290;

OrientationInterpolator OrientationInterpolator1291 = createNode("OrientationInterpolator");
OrientationInterpolator1291.DEF = "r_sternoclavicularRelax";
OrientationInterpolator1291.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.20000000298023224,-1,0,0.10999999940395355,0.20000000298023224,-1,0,0.10999999940395355,0.10000000149011612,-1,0,0.10000000149011612,0,0,1,0]);
children[21] = OrientationInterpolator1291;

OrientationInterpolator OrientationInterpolator1292 = createNode("OrientationInterpolator");
OrientationInterpolator1292.DEF = "r_acromioclavicularRelax";
OrientationInterpolator1292.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
children[22] = OrientationInterpolator1292;

OrientationInterpolator OrientationInterpolator1293 = createNode("OrientationInterpolator");
OrientationInterpolator1293.DEF = "r_shoulderRelax";
OrientationInterpolator1293.key = new MFFloat(new float[0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0,0,1,0]);
children[23] = OrientationInterpolator1293;

OrientationInterpolator OrientationInterpolator1294 = createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "r_elbowRelax";
OrientationInterpolator1294.key = new MFFloat(new float[0,0.15000000596046448,0.4000000059604645,0.6000000238418579,0.8999999761581421,1]);
OrientationInterpolator1294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.20000000298023224,0,0.009999999776482582,0.5,-0.20000000298023224,0,0.009999999776482582,0.5,-0.20000000298023224,0,0.009999999776482582,0.5,0,0,1,0]);
children[24] = OrientationInterpolator1294;

OrientationInterpolator OrientationInterpolator1295 = createNode("OrientationInterpolator");
OrientationInterpolator1295.DEF = "r_wristRelax";
OrientationInterpolator1295.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.8999999761581421,1]);
OrientationInterpolator1295.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0.10000000149011612,-0.09000000357627869,0.25,0,0.10000000149011612,-0.09000000357627869,0.25,0,0.10000000149011612,-0.09000000357627869,0.25,0,0,1,0]);
children[25] = OrientationInterpolator1295;

OrientationInterpolator OrientationInterpolator1296 = createNode("OrientationInterpolator");
OrientationInterpolator1296.DEF = "r_index0Relax";
OrientationInterpolator1296.key = new MFFloat(new float[0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]);
children[26] = OrientationInterpolator1296;

OrientationInterpolator OrientationInterpolator1297 = createNode("OrientationInterpolator");
OrientationInterpolator1297.DEF = "r_index1Relax";
OrientationInterpolator1297.key = new MFFloat(new float[0,0.10000000149011612,0.20000000298023224,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.13500000536441803,-0.13500000536441803,1,0.3569999933242798,-0.1589999943971634,-0.15299999713897705,1,0.35499998927116394,-0.1589999943971634,-0.15299999713897705,1,0.3569999933242798,0,0,1,0]);
children[27] = OrientationInterpolator1297;

OrientationInterpolator OrientationInterpolator1298 = createNode("OrientationInterpolator");
OrientationInterpolator1298.DEF = "r_middle0Relax";
OrientationInterpolator1298.key = new MFFloat(new float[0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,-1,0.14000000059604645,0,0,-1,0.14000000059604645,0,0,-1,0.14000000059604645,0,0,1,0]);
children[28] = OrientationInterpolator1298;

OrientationInterpolator OrientationInterpolator1299 = createNode("OrientationInterpolator");
OrientationInterpolator1299.DEF = "r_middle1Relax";
OrientationInterpolator1299.key = new MFFloat(new float[0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1]);
OrientationInterpolator1299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,0.30000001192092896,0.25699999928474426,0,0,0.30000001192092896,0.3700000047683716,0,0,0.30000001192092896,0.38999998569488525,0,0,0.30000001192092896,0.3100000023841858,0,0,0.30000001192092896,0.3199999928474426,0,0,0.30000001192092896,0.3400000035762787,0,0,0.30000001192092896,0.2800000011920929,0,0,1,0,0,0,1,0]);
children[29] = OrientationInterpolator1299;

OrientationInterpolator OrientationInterpolator1300 = createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "r_ring0Relax";
OrientationInterpolator1300.key = new MFFloat(new float[0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.25,0.25,-1,0.10000000149011612,0.25,0.25,-1,0.10000000149011612,0.25,0.25,-1,0.10000000149011612,0,0,1,0]);
children[30] = OrientationInterpolator1300;

OrientationInterpolator OrientationInterpolator1301 = createNode("OrientationInterpolator");
OrientationInterpolator1301.DEF = "r_ring1Relax";
OrientationInterpolator1301.key = new MFFloat(new float[0,0.10000000149011612,0.4000000059604645,0.5,0.800000011920929,1]);
OrientationInterpolator1301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.13500000536441803,0.13500000536441803,1,0.27000001072883606,0.13500000536441803,0.13500000536441803,1,0.27000001072883606,0.13500000536441803,0.15000000596046448,1,0.27000001072883606,0,0,1,0]);
children[31] = OrientationInterpolator1301;

OrientationInterpolator OrientationInterpolator1302 = createNode("OrientationInterpolator");
OrientationInterpolator1302.DEF = "r_pinky0Relax";
OrientationInterpolator1302.key = new MFFloat(new float[0,0.10000000149011612,0.30000001192092896,0.5,0.800000011920929,1]);
OrientationInterpolator1302.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.3499999940395355,0.3499999940395355,-0.699999988079071,0.11999999731779099,0.3499999940395355,0.3499999940395355,-0.8999999761581421,0.11999999731779099,0.3499999940395355,0.3499999940395355,-0.699999988079071,0.11999999731779099,0,0,1,0]);
children[32] = OrientationInterpolator1302;

OrientationInterpolator OrientationInterpolator1303 = createNode("OrientationInterpolator");
OrientationInterpolator1303.DEF = "r_pinky1Relax";
OrientationInterpolator1303.key = new MFFloat(new float[0,0.10000000149011612,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.20000000298023224,0.25,1,0.27000001072883606,0.20000000298023224,0.2199999988079071,1,0.27000001072883606,0.2199999988079071,0.20000000298023224,1,0.27000001072883606,0,0,1,0]);
children[33] = OrientationInterpolator1303;

OrientationInterpolator OrientationInterpolator1304 = createNode("OrientationInterpolator");
OrientationInterpolator1304.DEF = "r_thumb1Relax";
OrientationInterpolator1304.key = new MFFloat(new float[0,0.029999999329447746,0.07999999821186066,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.800000011920929,0.949999988079071,1]);
OrientationInterpolator1304.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.1599999964237213,0.1599999964237213,0.7850000262260437,0.5,-0.1599999964237213,0.1599999964237213,0.7850000262260437,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]);
children[34] = OrientationInterpolator1304;

OrientationInterpolator OrientationInterpolator1305 = createNode("OrientationInterpolator");
OrientationInterpolator1305.DEF = "r_thumb2Relax";
OrientationInterpolator1305.key = new MFFloat(new float[0,0.20000000298023224,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1]);
OrientationInterpolator1305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.44999998807907104,1,0,0,0.44999998807907104,1,0,0,0.44999998807907104,0,0,1,0]);
children[35] = OrientationInterpolator1305;

OrientationInterpolator OrientationInterpolator1306 = createNode("OrientationInterpolator");
OrientationInterpolator1306.DEF = "r_thumb3Relax";
OrientationInterpolator1306.key = new MFFloat(new float[0,0.20000000298023224,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1]);
OrientationInterpolator1306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.44999998807907104,0,0,1,0,0,0,1,0]);
children[36] = OrientationInterpolator1306;

OrientationInterpolator OrientationInterpolator1307 = createNode("OrientationInterpolator");
OrientationInterpolator1307.DEF = "r_fingers2Relax";
OrientationInterpolator1307.key = new MFFloat(new float[0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1]);
OrientationInterpolator1307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.4300000071525574,0,0,1,0.4399999976158142,0,0,1,0.46000000834465027,0,0,1,0.4399999976158142,0,0,1,0.24500000476837158,0,0,1,0.23999999463558197,0,0,1,0.20999999344348907,0,0,1,0.23999999463558197,0,0,1,0]);
children[37] = OrientationInterpolator1307;

OrientationInterpolator OrientationInterpolator1308 = createNode("OrientationInterpolator");
OrientationInterpolator1308.DEF = "r_fingers3Relax";
OrientationInterpolator1308.key = new MFFloat(new float[0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1]);
OrientationInterpolator1308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.3700000047683716,0,0,1,0.3799999952316284,0,0,1,0.38999998569488525,0,0,1,0.3799999952316284,0,0,1,0.27000001072883606,0,0,1,0.2800000011920929,0,0,1,0.27000001072883606,0,0,1,0.2800000011920929,0,0,1,0]);
children[38] = OrientationInterpolator1308;

ROUTE ROUTE1309 = createNode("ROUTE");
ROUTE1309.fromField = "value_changed";
ROUTE1309.fromNode = "r_sternoclavicularRelax";
ROUTE1309.toField = "set_rotation";
ROUTE1309.toNode = "Joe_r_sternoclavicular";
children[39] = ROUTE1309;

ROUTE ROUTE1310 = createNode("ROUTE");
ROUTE1310.fromField = "value_changed";
ROUTE1310.fromNode = "r_acromioclavicularRelax";
ROUTE1310.toField = "set_rotation";
ROUTE1310.toNode = "Joe_r_acromioclavicular";
children[40] = ROUTE1310;

ROUTE ROUTE1311 = createNode("ROUTE");
ROUTE1311.fromField = "value_changed";
ROUTE1311.fromNode = "r_shoulderRelax";
ROUTE1311.toField = "set_rotation";
ROUTE1311.toNode = "Joe_r_shoulder";
children[41] = ROUTE1311;

ROUTE ROUTE1312 = createNode("ROUTE");
ROUTE1312.fromField = "value_changed";
ROUTE1312.fromNode = "r_elbowRelax";
ROUTE1312.toField = "set_rotation";
ROUTE1312.toNode = "Joe_r_elbow";
children[42] = ROUTE1312;

ROUTE ROUTE1313 = createNode("ROUTE");
ROUTE1313.fromField = "value_changed";
ROUTE1313.fromNode = "r_wristRelax";
ROUTE1313.toField = "set_rotation";
ROUTE1313.toNode = "Joe_r_wrist";
children[43] = ROUTE1313;

ROUTE ROUTE1314 = createNode("ROUTE");
ROUTE1314.fromField = "value_changed";
ROUTE1314.fromNode = "r_thumb1Relax";
ROUTE1314.toField = "set_rotation";
ROUTE1314.toNode = "Joe_r_thumb1";
children[44] = ROUTE1314;

ROUTE ROUTE1315 = createNode("ROUTE");
ROUTE1315.fromField = "value_changed";
ROUTE1315.fromNode = "r_thumb2Relax";
ROUTE1315.toField = "set_rotation";
ROUTE1315.toNode = "Joe_r_thumb2";
children[45] = ROUTE1315;

ROUTE ROUTE1316 = createNode("ROUTE");
ROUTE1316.fromField = "value_changed";
ROUTE1316.fromNode = "r_thumb3Relax";
ROUTE1316.toField = "set_rotation";
ROUTE1316.toNode = "Joe_r_thumb3";
children[46] = ROUTE1316;

ROUTE ROUTE1317 = createNode("ROUTE");
ROUTE1317.fromField = "value_changed";
ROUTE1317.fromNode = "r_index0Relax";
ROUTE1317.toField = "set_rotation";
ROUTE1317.toNode = "Joe_r_index0";
children[47] = ROUTE1317;

ROUTE ROUTE1318 = createNode("ROUTE");
ROUTE1318.fromField = "value_changed";
ROUTE1318.fromNode = "r_index1Relax";
ROUTE1318.toField = "set_rotation";
ROUTE1318.toNode = "Joe_r_index1";
children[48] = ROUTE1318;

ROUTE ROUTE1319 = createNode("ROUTE");
ROUTE1319.fromField = "value_changed";
ROUTE1319.fromNode = "r_fingers2Relax";
ROUTE1319.toField = "set_rotation";
ROUTE1319.toNode = "Joe_r_index2";
children[49] = ROUTE1319;

ROUTE ROUTE1320 = createNode("ROUTE");
ROUTE1320.fromField = "value_changed";
ROUTE1320.fromNode = "r_fingers3Relax";
ROUTE1320.toField = "set_rotation";
ROUTE1320.toNode = "Joe_r_index3";
children[50] = ROUTE1320;

ROUTE ROUTE1321 = createNode("ROUTE");
ROUTE1321.fromField = "value_changed";
ROUTE1321.fromNode = "r_middle0Relax";
ROUTE1321.toField = "set_rotation";
ROUTE1321.toNode = "Joe_r_middle0";
children[51] = ROUTE1321;

ROUTE ROUTE1322 = createNode("ROUTE");
ROUTE1322.fromField = "value_changed";
ROUTE1322.fromNode = "r_middle1Relax";
ROUTE1322.toField = "set_rotation";
ROUTE1322.toNode = "Joe_r_middle1";
children[52] = ROUTE1322;

ROUTE ROUTE1323 = createNode("ROUTE");
ROUTE1323.fromField = "value_changed";
ROUTE1323.fromNode = "r_fingers2Relax";
ROUTE1323.toField = "set_rotation";
ROUTE1323.toNode = "Joe_r_middle2";
children[53] = ROUTE1323;

ROUTE ROUTE1324 = createNode("ROUTE");
ROUTE1324.fromField = "value_changed";
ROUTE1324.fromNode = "r_fingers3Relax";
ROUTE1324.toField = "set_rotation";
ROUTE1324.toNode = "Joe_r_middle3";
children[54] = ROUTE1324;

ROUTE ROUTE1325 = createNode("ROUTE");
ROUTE1325.fromField = "value_changed";
ROUTE1325.fromNode = "r_ring0Relax";
ROUTE1325.toField = "set_rotation";
ROUTE1325.toNode = "Joe_r_ring0";
children[55] = ROUTE1325;

ROUTE ROUTE1326 = createNode("ROUTE");
ROUTE1326.fromField = "value_changed";
ROUTE1326.fromNode = "r_ring1Relax";
ROUTE1326.toField = "set_rotation";
ROUTE1326.toNode = "Joe_r_ring1";
children[56] = ROUTE1326;

ROUTE ROUTE1327 = createNode("ROUTE");
ROUTE1327.fromField = "value_changed";
ROUTE1327.fromNode = "r_fingers2Relax";
ROUTE1327.toField = "set_rotation";
ROUTE1327.toNode = "Joe_r_ring2";
children[57] = ROUTE1327;

ROUTE ROUTE1328 = createNode("ROUTE");
ROUTE1328.fromField = "value_changed";
ROUTE1328.fromNode = "r_fingers3Relax";
ROUTE1328.toField = "set_rotation";
ROUTE1328.toNode = "Joe_r_ring3";
children[58] = ROUTE1328;

ROUTE ROUTE1329 = createNode("ROUTE");
ROUTE1329.fromField = "value_changed";
ROUTE1329.fromNode = "r_pinky0Relax";
ROUTE1329.toField = "set_rotation";
ROUTE1329.toNode = "Joe_r_pinky0";
children[59] = ROUTE1329;

ROUTE ROUTE1330 = createNode("ROUTE");
ROUTE1330.fromField = "value_changed";
ROUTE1330.fromNode = "r_pinky1Relax";
ROUTE1330.toField = "set_rotation";
ROUTE1330.toNode = "Joe_r_pinky1";
children[60] = ROUTE1330;

ROUTE ROUTE1331 = createNode("ROUTE");
ROUTE1331.fromField = "value_changed";
ROUTE1331.fromNode = "r_fingers2Relax";
ROUTE1331.toField = "set_rotation";
ROUTE1331.toNode = "Joe_r_pinky2";
children[61] = ROUTE1331;

ROUTE ROUTE1332 = createNode("ROUTE");
ROUTE1332.fromField = "value_changed";
ROUTE1332.fromNode = "r_fingers3Relax";
ROUTE1332.toField = "set_rotation";
ROUTE1332.toNode = "Joe_r_pinky3";
children[62] = ROUTE1332;

OrientationInterpolator OrientationInterpolator1333 = createNode("OrientationInterpolator");
OrientationInterpolator1333.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1333.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.699999988079071,0.800000011920929,1]);
OrientationInterpolator1333.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.10000000149011612,0,0,-1,0.2199999988079071,0,0.5,-1,0.27000001072883606,0,0,-1,0.10000000149011612,0,0,1,0,0,0,1,0]);
children[63] = OrientationInterpolator1333;

OrientationInterpolator OrientationInterpolator1334 = createNode("OrientationInterpolator");
OrientationInterpolator1334.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1334.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05000000074505806,0,0,1,0,0,0,1,0,0,0,1,0]);
children[64] = OrientationInterpolator1334;

OrientationInterpolator OrientationInterpolator1335 = createNode("OrientationInterpolator");
OrientationInterpolator1335.DEF = "r_shoulderRoll";
OrientationInterpolator1335.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1]);
OrientationInterpolator1335.keyValue = new MFRotation(new float[1,0,0,0,0,0,-1,1.659999966621399,-0.25,0,-1,1.7599999904632568,0,0,-1,1.25600004196167,0,0,-1,0.05000000074505806,1,0,0,0]);
children[65] = OrientationInterpolator1335;

OrientationInterpolator OrientationInterpolator1336 = createNode("OrientationInterpolator");
OrientationInterpolator1336.DEF = "r_ForeArmPitch";
OrientationInterpolator1336.key = new MFFloat(new float[0,0.15000000596046448,0.30000001192092896,0.5,0.699999988079071,0.8999999761581421,1]);
OrientationInterpolator1336.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,0,0,1,0,0,0,1,0]);
children[66] = OrientationInterpolator1336;

OrientationInterpolator OrientationInterpolator1337 = createNode("OrientationInterpolator");
OrientationInterpolator1337.DEF = "r_wristRoll";
OrientationInterpolator1337.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.6499999761581421,0.75,0.8500000238418579,1]);
OrientationInterpolator1337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.5499999523162842,0,0,-1,1.5499999523162842,0,0,1,0,0,0,1,0]);
children[67] = OrientationInterpolator1337;

OrientationInterpolator OrientationInterpolator1338 = createNode("OrientationInterpolator");
OrientationInterpolator1338.DEF = "r_handPitch";
OrientationInterpolator1338.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1338.keyValue = new MFRotation(new float[0,0,1,0,0,0,0.009999999776482582,0.25,0,0,-0.009999999776482582,0.029999999329447746,0,0,0.009999999776482582,0.05000000074505806,0,0,0.009999999776482582,0.009999999776482582,0,0,1,0]);
children[68] = OrientationInterpolator1338;

OrientationInterpolator OrientationInterpolator1339 = createNode("OrientationInterpolator");
OrientationInterpolator1339.DEF = "r_thumb1Pitch";
OrientationInterpolator1339.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1339.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.4000000059604645,1,0,0,0.20000000298023224,1,0,0,0]);
children[69] = OrientationInterpolator1339;

OrientationInterpolator OrientationInterpolator1340 = createNode("OrientationInterpolator");
OrientationInterpolator1340.DEF = "r_thumb2Pitch";
OrientationInterpolator1340.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1340.keyValue = new MFRotation(new float[0,0,1,0,1,1,0,0.30000001192092896,1,1,0,0.30000001192092896,1,1,0,0.6000000238418579,1,1,0,0.30000001192092896,0,1,1,0]);
children[70] = OrientationInterpolator1340;

OrientationInterpolator OrientationInterpolator1341 = createNode("OrientationInterpolator");
OrientationInterpolator1341.DEF = "l_shoulderRoll";
OrientationInterpolator1341.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1]);
OrientationInterpolator1341.keyValue = new MFRotation(new float[0.25,0,1,1.7599999904632568,0,0,1,1.659999966621399,0.25,0,1,1.7599999904632568,0,0,1,1.25600004196167,0,0,1,0.05000000074505806,0.25,0,1,1.7599999904632568]);
children[71] = OrientationInterpolator1341;

ROUTE ROUTE1342 = createNode("ROUTE");
ROUTE1342.fromField = "fraction_changed";
ROUTE1342.fromNode = "Time2";
ROUTE1342.toField = "set_fraction";
ROUTE1342.toNode = "r_sternoclavicularRoll";
children[72] = ROUTE1342;

ROUTE ROUTE1343 = createNode("ROUTE");
ROUTE1343.fromField = "fraction_changed";
ROUTE1343.fromNode = "Time2";
ROUTE1343.toField = "set_fraction";
ROUTE1343.toNode = "r_acromioclavicularRoll";
children[73] = ROUTE1343;

ROUTE ROUTE1344 = createNode("ROUTE");
ROUTE1344.fromField = "fraction_changed";
ROUTE1344.fromNode = "Time2";
ROUTE1344.toField = "set_fraction";
ROUTE1344.toNode = "r_shoulderRoll";
children[74] = ROUTE1344;

ROUTE ROUTE1345 = createNode("ROUTE");
ROUTE1345.fromField = "fraction_changed";
ROUTE1345.fromNode = "Time2";
ROUTE1345.toField = "set_fraction";
ROUTE1345.toNode = "r_ForeArmPitch";
children[75] = ROUTE1345;

ROUTE ROUTE1346 = createNode("ROUTE");
ROUTE1346.fromField = "fraction_changed";
ROUTE1346.fromNode = "Time2";
ROUTE1346.toField = "set_fraction";
ROUTE1346.toNode = "r_wristRoll";
children[76] = ROUTE1346;

ROUTE ROUTE1347 = createNode("ROUTE");
ROUTE1347.fromField = "fraction_changed";
ROUTE1347.fromNode = "Time2";
ROUTE1347.toField = "set_fraction";
ROUTE1347.toNode = "r_handPitch";
children[77] = ROUTE1347;

ROUTE ROUTE1348 = createNode("ROUTE");
ROUTE1348.fromField = "fraction_changed";
ROUTE1348.fromNode = "Time2";
ROUTE1348.toField = "set_fraction";
ROUTE1348.toNode = "r_thumb1Pitch";
children[78] = ROUTE1348;

ROUTE ROUTE1349 = createNode("ROUTE");
ROUTE1349.fromField = "fraction_changed";
ROUTE1349.fromNode = "Time2";
ROUTE1349.toField = "set_fraction";
ROUTE1349.toNode = "r_thumb2Pitch";
children[79] = ROUTE1349;

ROUTE ROUTE1350 = createNode("ROUTE");
ROUTE1350.fromField = "value_changed";
ROUTE1350.fromNode = "r_sternoclavicularRoll";
ROUTE1350.toField = "set_rotation";
ROUTE1350.toNode = "Joe_r_sternoclavicular";
children[80] = ROUTE1350;

ROUTE ROUTE1351 = createNode("ROUTE");
ROUTE1351.fromField = "value_changed";
ROUTE1351.fromNode = "r_acromioclavicularRoll";
ROUTE1351.toField = "set_rotation";
ROUTE1351.toNode = "Joe_r_acromioclavicular";
children[81] = ROUTE1351;

ROUTE ROUTE1352 = createNode("ROUTE");
ROUTE1352.fromField = "value_changed";
ROUTE1352.fromNode = "r_shoulderRoll";
ROUTE1352.toField = "set_rotation";
ROUTE1352.toNode = "Joe_r_shoulder";
children[82] = ROUTE1352;

ROUTE ROUTE1353 = createNode("ROUTE");
ROUTE1353.fromField = "value_changed";
ROUTE1353.fromNode = "r_ForeArmPitch";
ROUTE1353.toField = "set_rotation";
ROUTE1353.toNode = "Joe_r_elbow";
children[83] = ROUTE1353;

ROUTE ROUTE1354 = createNode("ROUTE");
ROUTE1354.fromField = "value_changed";
ROUTE1354.fromNode = "r_wristRoll";
ROUTE1354.toField = "set_rotation";
ROUTE1354.toNode = "Joe_r_wrist";
children[84] = ROUTE1354;

ROUTE ROUTE1355 = createNode("ROUTE");
ROUTE1355.fromField = "value_changed";
ROUTE1355.fromNode = "r_handPitch";
ROUTE1355.toField = "set_rotation";
ROUTE1355.toNode = "Joe_r_index0";
children[85] = ROUTE1355;

ROUTE ROUTE1356 = createNode("ROUTE");
ROUTE1356.fromField = "value_changed";
ROUTE1356.fromNode = "r_handPitch";
ROUTE1356.toField = "set_rotation";
ROUTE1356.toNode = "Joe_r_index1";
children[86] = ROUTE1356;

ROUTE ROUTE1357 = createNode("ROUTE");
ROUTE1357.fromField = "value_changed";
ROUTE1357.fromNode = "r_handPitch";
ROUTE1357.toField = "set_rotation";
ROUTE1357.toNode = "Joe_r_index2";
children[87] = ROUTE1357;

ROUTE ROUTE1358 = createNode("ROUTE");
ROUTE1358.fromField = "value_changed";
ROUTE1358.fromNode = "r_handPitch";
ROUTE1358.toField = "set_rotation";
ROUTE1358.toNode = "Joe_r_index3";
children[88] = ROUTE1358;

ROUTE ROUTE1359 = createNode("ROUTE");
ROUTE1359.fromField = "value_changed";
ROUTE1359.fromNode = "r_handPitch";
ROUTE1359.toField = "set_rotation";
ROUTE1359.toNode = "Joe_r_middle0";
children[89] = ROUTE1359;

ROUTE ROUTE1360 = createNode("ROUTE");
ROUTE1360.fromField = "value_changed";
ROUTE1360.fromNode = "r_handPitch";
ROUTE1360.toField = "set_rotation";
ROUTE1360.toNode = "Joe_r_middle1";
children[90] = ROUTE1360;

ROUTE ROUTE1361 = createNode("ROUTE");
ROUTE1361.fromField = "value_changed";
ROUTE1361.fromNode = "r_handPitch";
ROUTE1361.toField = "set_rotation";
ROUTE1361.toNode = "Joe_r_middle2";
children[91] = ROUTE1361;

ROUTE ROUTE1362 = createNode("ROUTE");
ROUTE1362.fromField = "value_changed";
ROUTE1362.fromNode = "r_handPitch";
ROUTE1362.toField = "set_rotation";
ROUTE1362.toNode = "Joe_r_middle3";
children[92] = ROUTE1362;

ROUTE ROUTE1363 = createNode("ROUTE");
ROUTE1363.fromField = "value_changed";
ROUTE1363.fromNode = "r_handPitch";
ROUTE1363.toField = "set_rotation";
ROUTE1363.toNode = "Joe_r_ring0";
children[93] = ROUTE1363;

ROUTE ROUTE1364 = createNode("ROUTE");
ROUTE1364.fromField = "value_changed";
ROUTE1364.fromNode = "r_handPitch";
ROUTE1364.toField = "set_rotation";
ROUTE1364.toNode = "Joe_r_ring1";
children[94] = ROUTE1364;

ROUTE ROUTE1365 = createNode("ROUTE");
ROUTE1365.fromField = "value_changed";
ROUTE1365.fromNode = "r_handPitch";
ROUTE1365.toField = "set_rotation";
ROUTE1365.toNode = "Joe_r_ring2";
children[95] = ROUTE1365;

ROUTE ROUTE1366 = createNode("ROUTE");
ROUTE1366.fromField = "value_changed";
ROUTE1366.fromNode = "r_handPitch";
ROUTE1366.toField = "set_rotation";
ROUTE1366.toNode = "Joe_r_ring3";
children[96] = ROUTE1366;

ROUTE ROUTE1367 = createNode("ROUTE");
ROUTE1367.fromField = "value_changed";
ROUTE1367.fromNode = "r_handPitch";
ROUTE1367.toField = "set_rotation";
ROUTE1367.toNode = "Joe_r_pinky0";
children[97] = ROUTE1367;

ROUTE ROUTE1368 = createNode("ROUTE");
ROUTE1368.fromField = "value_changed";
ROUTE1368.fromNode = "r_handPitch";
ROUTE1368.toField = "set_rotation";
ROUTE1368.toNode = "Joe_r_pinky1";
children[98] = ROUTE1368;

ROUTE ROUTE1369 = createNode("ROUTE");
ROUTE1369.fromField = "value_changed";
ROUTE1369.fromNode = "r_handPitch";
ROUTE1369.toField = "set_rotation";
ROUTE1369.toNode = "Joe_r_pinky2";
children[99] = ROUTE1369;

ROUTE ROUTE1370 = createNode("ROUTE");
ROUTE1370.fromField = "value_changed";
ROUTE1370.fromNode = "r_handPitch";
ROUTE1370.toField = "set_rotation";
ROUTE1370.toNode = "Joe_r_pinky3";
children[100] = ROUTE1370;

ROUTE ROUTE1371 = createNode("ROUTE");
ROUTE1371.fromField = "value_changed";
ROUTE1371.fromNode = "r_thumb1Pitch";
ROUTE1371.toField = "set_rotation";
ROUTE1371.toNode = "Joe_r_thumb1";
children[101] = ROUTE1371;

ROUTE ROUTE1372 = createNode("ROUTE");
ROUTE1372.fromField = "value_changed";
ROUTE1372.fromNode = "r_thumb2Pitch";
ROUTE1372.toField = "set_rotation";
ROUTE1372.toNode = "Joe_r_thumb2";
children[102] = ROUTE1372;

ROUTE ROUTE1373 = createNode("ROUTE");
ROUTE1373.fromField = "value_changed";
ROUTE1373.fromNode = "r_thumb2Pitch";
ROUTE1373.toField = "set_rotation";
ROUTE1373.toNode = "Joe_r_thumb3";
children[103] = ROUTE1373;

ROUTE ROUTE1374 = createNode("ROUTE");
ROUTE1374.fromField = "value_changed";
ROUTE1374.fromNode = "l_shoulderRoll";
ROUTE1374.toField = "set_rotation";
ROUTE1374.toNode = "Joe_l_shoulder";
children[104] = ROUTE1374;

Group Group1375 = createNode("Group");
PositionInterpolator PositionInterpolator1376 = createNode("PositionInterpolator");
PositionInterpolator1376.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1376.key = new MFFloat(new float[0,0.041669998317956924,0.125,0.16670000553131104,0.20829999446868896,0.25,0.29170000553131104,0.375,0.45829999446868896,0.5,0.541700005531311,0.583299994468689,0.625,0.708299994468689,0.75,0.791700005531311,0.875,0.916700005531311,1]);
PositionInterpolator1376.keyValue = new MFVec3f(new float[0,-0.009279999881982803,0,0,-0.0038580000400543213,0,0,-0.008847000077366829,0,0,-0.01486000046133995,0,0,-0.026410000398755074,0,0,-0.039340000599622726,0,0,-0.050200000405311584,0,0,-0.07468999922275543,0,0,-0.027319999411702156,0,0,-0.01607999950647354,0,0,-0.011289999820291996,0,0,-0.0058189998380839825,0,0,-0.0020039998926222324,0,0,-0.0025790000800043344,0,0,-0.014299999922513962,0,0,-0.03799000009894371,0,0,-0.05648000165820122,0,0,-0.04500000178813934,0,0,-0.009279999881982803,0]);
Group1375.children = new MFNode();

Group1375.children[0] = PositionInterpolator1376;

OrientationInterpolator OrientationInterpolator1377 = createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1377.key = new MFFloat(new float[0,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
Group1375.children[1] = OrientationInterpolator1377;

OrientationInterpolator OrientationInterpolator1378 = createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1378.key = new MFFloat(new float[0,0.25,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388,0.9962999820709229,-0.010569999925792217,0.08481000363826752,0.24879999458789825,0.9965000152587891,0.01590999960899353,-0.08222000300884247,0.38359999656677246,-0.7017999887466431,-0.03223000094294548,-0.7117000222206116,0.12890000641345978,-1,0,0,0.551800012588501,-0.996399998664856,0.02230999991297722,0.08169999718666077,0.535099983215332,-0.98089998960495,0.04912000149488449,0.18809999525547028,0.5203999876976013,-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388]);
Group1375.children[2] = OrientationInterpolator1378;

OrientationInterpolator OrientationInterpolator1379 = createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1379.key = new MFFloat(new float[0,0.20829999446868896,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[1,0,0,0.32260000705718994,1,0,0,0.15559999644756317,1,0,0,0.08677999675273895,1,0,0,0.8751000165939331,1,0,0,1.13100004196167,1,0,0,0.09961000084877014,1,0,0,0.39419999718666077,1,0,0,0.32260000705718994]);
Group1375.children[3] = OrientationInterpolator1379;

OrientationInterpolator OrientationInterpolator1380 = createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1380.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.375,0.666700005531311,0.916700005531311,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[-1,0,0,0.06710000336170197,-1,0,0,0.2152000069618225,-1,0,0,0.31839999556541443,-1,0,0,0.4717000126838684,-1,0,0,0.29120001196861267,1,0,0,0.22220000624656677,-1,0,0,0.06710000336170197]);
Group1375.children[4] = OrientationInterpolator1380;

OrientationInterpolator OrientationInterpolator1381 = createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1381.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.375,0.45829999446868896,0.5,0.666700005531311,0.75,0.7799999713897705,0.916700005531311,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.10719999670982361,1,0,0,0.4000000059604645,1,0,0,0.12700000405311584,-1,0,0,0.017999999225139618,-1,0,0,0.057999998331069946,-1,0,0,0.23999999463558197,-1,0,0,0.3499999940395355,-1,0,0,0.33000001311302185,0,0,1,0]);
Group1375.children[5] = OrientationInterpolator1381;

OrientationInterpolator OrientationInterpolator1382 = createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1382.key = new MFFloat(new float[0,0.30000001192092896,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1375.children[6] = OrientationInterpolator1382;

OrientationInterpolator OrientationInterpolator1383 = createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1383.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.20000000298023224,1,0,0,0]);
Group1375.children[7] = OrientationInterpolator1383;

OrientationInterpolator OrientationInterpolator1384 = createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1384.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.800000011920929,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448,1,0,0,0.30000001192092896,0,0,1,0,-1,0,0,0.30000001192092896]);
Group1375.children[8] = OrientationInterpolator1384;

OrientationInterpolator OrientationInterpolator1385 = createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1385.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054,-0.9950000047683716,0.02295999974012375,0.0967399999499321,0.4683000147342682,-1,0.0019000000320374966,0.007960000075399876,0.4731999933719635,-0.9980000257492065,-0.015799999237060547,-0.06102000176906586,0.5078999996185303,-0.991100013256073,-0.03540999814867973,-0.12860000133514404,0.5418999791145325,-0.913100004196167,-0.0624300017952919,-0.40299999713897705,0.3361000120639801,-0.43059998750686646,-0.07962000370025635,-0.8989999890327454,0.07038000226020813,1,0,0,0.257099986076355,0.9890999794006348,-0.028049999848008156,0.1444000005722046,0.3878999948501587,-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054]);
Group1375.children[9] = OrientationInterpolator1385;

OrientationInterpolator OrientationInterpolator1386 = createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1386.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[1,0,0,0.8572999835014343,1,0,0,0.8925999999046326,1,0,0,0.535099983215332,1,0,0,0.17560000717639923,1,0,0,0.11940000206232071,1,0,0,0.31529998779296875,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.2475000023841858,1,0,0,0.8572999835014343]);
Group1375.children[10] = OrientationInterpolator1386;

OrientationInterpolator OrientationInterpolator1387 = createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1387.key = new MFFloat(new float[0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]);
Group1375.children[11] = OrientationInterpolator1387;

OrientationInterpolator OrientationInterpolator1388 = createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1388.key = new MFFloat(new float[0,0.2199999988079071,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[1,0,0,-0.20000000298023224,0,0,1,0,1,0,0,-0.20000000298023224]);
Group1375.children[12] = OrientationInterpolator1388;

OrientationInterpolator OrientationInterpolator1389 = createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1389.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.800000011920929,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[-1,0,0,0.15000000596046448,0,0,1,0,1,0,0,0.30000001192092896,-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448]);
Group1375.children[13] = OrientationInterpolator1389;

OrientationInterpolator OrientationInterpolator1390 = createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "VL5_ANIMATOR";
OrientationInterpolator1390.key = new MFFloat(new float[0,0.20829999446868896,0.375,0.75,0.833299994468689,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,1,0,0.08259999752044678,-0.01971999928355217,-0.5974000096321106,0.8016999959945679,0.08230999857187271,0.009296000003814697,-0.9648000001907349,0.26269999146461487,0.17339999973773956,-0.012380000203847885,0.9549000263214111,-0.29679998755455017,0.0873199999332428,-0.008124999701976776,0.9690999984741211,-0.24629999697208405,0.15800000727176666,0,1,0,0.08259999752044678]);
Group1375.children[14] = OrientationInterpolator1390;

OrientationInterpolator OrientationInterpolator1391 = createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1391.key = new MFFloat(new float[0,0.375,0.41670000553131104,0.5,0.583299994468689,0.666700005531311,0.75,0.833299994468689,0.916700005531311,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,-1,0,0.08640000224113464,0,1,0,0.18250000476837158,0,1,0,0.15049999952316284,0,1,0,0.10530000180006027,0,1,0,0.04391000047326088,0,-1,0,0.031190000474452972,0,-1,0,0.0793600007891655,0,-1,0,0.1615999937057495,0,-1,0,0.1550000011920929,0,-1,0,0.08641999959945679]);
Group1375.children[15] = OrientationInterpolator1391;

OrientationInterpolator OrientationInterpolator1392 = createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1392.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[1,0,0.4000000059604645,0.11999999731779099,-1,0,0.4000000059604645,0.1860000044107437,1,0,0.10000000149011612,0.335999995470047,1,0,0.4000000059604645,0.11999999731779099]);
Group1375.children[16] = OrientationInterpolator1392;

OrientationInterpolator OrientationInterpolator1393 = createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1393.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[-1,0,0,0.06599999964237213,-1,0,0,0.4880000054836273,-1,0,0,0.01769999973475933,-1,0,0,0.06598780304193497]);
Group1375.children[17] = OrientationInterpolator1393;

OrientationInterpolator OrientationInterpolator1394 = createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1394.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,-1,0,0.460999995470047,-0.3301999866962433,-0.9275000095367432,0.17550000548362732,0.5388000011444092,0.03277739882469177,-0.99931401014328,-0.01721850037574768,0.4920330047607422,0,-1,0,0.4611000120639801]);
Group1375.children[18] = OrientationInterpolator1394;

OrientationInterpolator OrientationInterpolator1395 = createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1395.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[-1,0,-1,0.09200000017881393,1,0,-0.20000000298023224,0.3197000026702881,-1,0,-0.5,0.15639999508857727,-1,0,-1,0.09200000017881393]);
Group1375.children[19] = OrientationInterpolator1395;

OrientationInterpolator OrientationInterpolator1396 = createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1396.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[-1,0,0,0.4115000069141388,-1,0,0,0.0925000011920929,-1,0,0,0.5725679993629456,-1,0,0,0.4115079939365387]);
Group1375.children[20] = OrientationInterpolator1396;

OrientationInterpolator OrientationInterpolator1397 = createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1397.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038,0.15330000221729279,-0.9878000020980835,0.02582000009715557,0.3901999890804291,-0.5701000094413757,0.7603999972343445,-0.3109999895095825,0.3659999966621399,-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038]);
Group1375.children[21] = OrientationInterpolator1397;

children[105] = Group1375;

ROUTE ROUTE1398 = createNode("ROUTE");
ROUTE1398.fromField = "fraction_changed";
ROUTE1398.fromNode = "Time1";
ROUTE1398.toField = "set_fraction";
ROUTE1398.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
children[106] = ROUTE1398;

ROUTE ROUTE1399 = createNode("ROUTE");
ROUTE1399.fromField = "fraction_changed";
ROUTE1399.fromNode = "Time1";
ROUTE1399.toField = "set_fraction";
ROUTE1399.toNode = "HUMANOIDROOT_ANIMATOR";
children[107] = ROUTE1399;

ROUTE ROUTE1400 = createNode("ROUTE");
ROUTE1400.fromField = "fraction_changed";
ROUTE1400.fromNode = "Time1";
ROUTE1400.toField = "set_fraction";
ROUTE1400.toNode = "L_HIP_ANIMATOR";
children[108] = ROUTE1400;

ROUTE ROUTE1401 = createNode("ROUTE");
ROUTE1401.fromField = "fraction_changed";
ROUTE1401.fromNode = "Time1";
ROUTE1401.toField = "set_fraction";
ROUTE1401.toNode = "L_KNEE_ANIMATOR";
children[109] = ROUTE1401;

ROUTE ROUTE1402 = createNode("ROUTE");
ROUTE1402.fromField = "fraction_changed";
ROUTE1402.fromNode = "Time1";
ROUTE1402.toField = "set_fraction";
ROUTE1402.toNode = "L_ANKLE_ANIMATOR";
children[110] = ROUTE1402;

ROUTE ROUTE1403 = createNode("ROUTE");
ROUTE1403.fromField = "fraction_changed";
ROUTE1403.fromNode = "Time1";
ROUTE1403.toField = "set_fraction";
ROUTE1403.toNode = "L_subtalar_ANIMATOR";
children[111] = ROUTE1403;

ROUTE ROUTE1404 = createNode("ROUTE");
ROUTE1404.fromField = "fraction_changed";
ROUTE1404.fromNode = "Time1";
ROUTE1404.toField = "set_fraction";
ROUTE1404.toNode = "L_MIDTARSAL_ANIMATOR";
children[112] = ROUTE1404;

ROUTE ROUTE1405 = createNode("ROUTE");
ROUTE1405.fromField = "fraction_changed";
ROUTE1405.fromNode = "Time1";
ROUTE1405.toField = "set_fraction";
ROUTE1405.toNode = "L_metatarsal_ANIMATOR";
children[113] = ROUTE1405;

ROUTE ROUTE1406 = createNode("ROUTE");
ROUTE1406.fromField = "fraction_changed";
ROUTE1406.fromNode = "Time1";
ROUTE1406.toField = "set_fraction";
ROUTE1406.toNode = "R_HIP_ANIMATOR";
children[114] = ROUTE1406;

ROUTE ROUTE1407 = createNode("ROUTE");
ROUTE1407.fromField = "fraction_changed";
ROUTE1407.fromNode = "Time1";
ROUTE1407.toField = "set_fraction";
ROUTE1407.toNode = "R_KNEE_ANIMATOR";
children[115] = ROUTE1407;

ROUTE ROUTE1408 = createNode("ROUTE");
ROUTE1408.fromField = "fraction_changed";
ROUTE1408.fromNode = "Time1";
ROUTE1408.toField = "set_fraction";
ROUTE1408.toNode = "R_ANKLE_ANIMATOR";
children[116] = ROUTE1408;

ROUTE ROUTE1409 = createNode("ROUTE");
ROUTE1409.fromField = "fraction_changed";
ROUTE1409.fromNode = "Time1";
ROUTE1409.toField = "set_fraction";
ROUTE1409.toNode = "R_subtalar_ANIMATOR";
children[117] = ROUTE1409;

ROUTE ROUTE1410 = createNode("ROUTE");
ROUTE1410.fromField = "fraction_changed";
ROUTE1410.fromNode = "Time1";
ROUTE1410.toField = "set_fraction";
ROUTE1410.toNode = "R_MIDTARSAL_ANIMATOR";
children[118] = ROUTE1410;

ROUTE ROUTE1411 = createNode("ROUTE");
ROUTE1411.fromField = "fraction_changed";
ROUTE1411.fromNode = "Time1";
ROUTE1411.toField = "set_fraction";
ROUTE1411.toNode = "R_metatarsal_ANIMATOR";
children[119] = ROUTE1411;

ROUTE ROUTE1412 = createNode("ROUTE");
ROUTE1412.fromField = "fraction_changed";
ROUTE1412.fromNode = "Time1";
ROUTE1412.toField = "set_fraction";
ROUTE1412.toNode = "VL5_ANIMATOR";
children[120] = ROUTE1412;

ROUTE ROUTE1413 = createNode("ROUTE");
ROUTE1413.fromField = "fraction_changed";
ROUTE1413.fromNode = "Time1";
ROUTE1413.toField = "set_fraction";
ROUTE1413.toNode = "SKULLBASE_ANIMATOR";
children[121] = ROUTE1413;

ROUTE ROUTE1414 = createNode("ROUTE");
ROUTE1414.fromField = "fraction_changed";
ROUTE1414.fromNode = "Time1";
ROUTE1414.toField = "set_fraction";
ROUTE1414.toNode = "L_SHOULDER_ANIMATOR";
children[122] = ROUTE1414;

ROUTE ROUTE1415 = createNode("ROUTE");
ROUTE1415.fromField = "fraction_changed";
ROUTE1415.fromNode = "Time1";
ROUTE1415.toField = "set_fraction";
ROUTE1415.toNode = "L_ELBOW_ANIMATOR";
children[123] = ROUTE1415;

ROUTE ROUTE1416 = createNode("ROUTE");
ROUTE1416.fromField = "fraction_changed";
ROUTE1416.fromNode = "Time1";
ROUTE1416.toField = "set_fraction";
ROUTE1416.toNode = "L_WRIST_ANIMATOR";
children[124] = ROUTE1416;

ROUTE ROUTE1417 = createNode("ROUTE");
ROUTE1417.fromField = "value_changed";
ROUTE1417.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1417.toField = "set_translation";
ROUTE1417.toNode = "Joe_HumanoidRoot";
children[125] = ROUTE1417;

ROUTE ROUTE1418 = createNode("ROUTE");
ROUTE1418.fromField = "value_changed";
ROUTE1418.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1418.toField = "set_rotation";
ROUTE1418.toNode = "Joe_HumanoidRoot";
children[126] = ROUTE1418;

ROUTE ROUTE1419 = createNode("ROUTE");
ROUTE1419.fromField = "value_changed";
ROUTE1419.fromNode = "L_HIP_ANIMATOR";
ROUTE1419.toField = "set_rotation";
ROUTE1419.toNode = "Joe_l_hip";
children[127] = ROUTE1419;

ROUTE ROUTE1420 = createNode("ROUTE");
ROUTE1420.fromField = "value_changed";
ROUTE1420.fromNode = "L_KNEE_ANIMATOR";
ROUTE1420.toField = "set_rotation";
ROUTE1420.toNode = "Joe_l_knee";
children[128] = ROUTE1420;

ROUTE ROUTE1421 = createNode("ROUTE");
ROUTE1421.fromField = "value_changed";
ROUTE1421.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1421.toField = "set_rotation";
ROUTE1421.toNode = "Joe_l_ankle";
children[129] = ROUTE1421;

ROUTE ROUTE1422 = createNode("ROUTE");
ROUTE1422.fromField = "value_changed";
ROUTE1422.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1422.toField = "set_rotation";
ROUTE1422.toNode = "Joe_l_midtarsal";
children[130] = ROUTE1422;

ROUTE ROUTE1423 = createNode("ROUTE");
ROUTE1423.fromField = "value_changed";
ROUTE1423.fromNode = "L_subtalar_ANIMATOR";
ROUTE1423.toField = "set_rotation";
ROUTE1423.toNode = "Joe_l_subtalar";
children[131] = ROUTE1423;

ROUTE ROUTE1424 = createNode("ROUTE");
ROUTE1424.fromField = "value_changed";
ROUTE1424.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1424.toField = "set_rotation";
ROUTE1424.toNode = "Joe_l_metatarsal";
children[132] = ROUTE1424;

ROUTE ROUTE1425 = createNode("ROUTE");
ROUTE1425.fromField = "value_changed";
ROUTE1425.fromNode = "R_HIP_ANIMATOR";
ROUTE1425.toField = "set_rotation";
ROUTE1425.toNode = "Joe_r_hip";
children[133] = ROUTE1425;

ROUTE ROUTE1426 = createNode("ROUTE");
ROUTE1426.fromField = "value_changed";
ROUTE1426.fromNode = "R_KNEE_ANIMATOR";
ROUTE1426.toField = "set_rotation";
ROUTE1426.toNode = "Joe_r_knee";
children[134] = ROUTE1426;

ROUTE ROUTE1427 = createNode("ROUTE");
ROUTE1427.fromField = "value_changed";
ROUTE1427.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1427.toField = "set_rotation";
ROUTE1427.toNode = "Joe_r_ankle";
children[135] = ROUTE1427;

ROUTE ROUTE1428 = createNode("ROUTE");
ROUTE1428.fromField = "value_changed";
ROUTE1428.fromNode = "R_subtalar_ANIMATOR";
ROUTE1428.toField = "set_rotation";
ROUTE1428.toNode = "Joe_r_subtalar";
children[136] = ROUTE1428;

ROUTE ROUTE1429 = createNode("ROUTE");
ROUTE1429.fromField = "value_changed";
ROUTE1429.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1429.toField = "set_rotation";
ROUTE1429.toNode = "Joe_r_midtarsal";
children[137] = ROUTE1429;

ROUTE ROUTE1430 = createNode("ROUTE");
ROUTE1430.fromField = "value_changed";
ROUTE1430.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1430.toField = "set_rotation";
ROUTE1430.toNode = "Joe_r_metatarsal";
children[138] = ROUTE1430;

ROUTE ROUTE1431 = createNode("ROUTE");
ROUTE1431.fromField = "value_changed";
ROUTE1431.fromNode = "VL5_ANIMATOR";
ROUTE1431.toField = "set_rotation";
ROUTE1431.toNode = "Joe_vl5";
children[139] = ROUTE1431;

ROUTE ROUTE1432 = createNode("ROUTE");
ROUTE1432.fromField = "value_changed";
ROUTE1432.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1432.toField = "set_rotation";
ROUTE1432.toNode = "Joe_skullbase";
children[140] = ROUTE1432;

ROUTE ROUTE1433 = createNode("ROUTE");
ROUTE1433.fromField = "value_changed";
ROUTE1433.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1433.toField = "set_rotation";
ROUTE1433.toNode = "Joe_l_shoulder";
children[141] = ROUTE1433;

ROUTE ROUTE1434 = createNode("ROUTE");
ROUTE1434.fromField = "value_changed";
ROUTE1434.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1434.toField = "set_rotation";
ROUTE1434.toNode = "Joe_l_elbow";
children[142] = ROUTE1434;

ROUTE ROUTE1435 = createNode("ROUTE");
ROUTE1435.fromField = "value_changed";
ROUTE1435.fromNode = "L_WRIST_ANIMATOR";
ROUTE1435.toField = "set_rotation";
ROUTE1435.toNode = "Joe_l_wrist";
children[143] = ROUTE1435;

ROUTE ROUTE1436 = createNode("ROUTE");
ROUTE1436.fromField = "value_changed";
ROUTE1436.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1436.toField = "set_rotation";
ROUTE1436.toNode = "Joe_r_shoulder";
children[144] = ROUTE1436;

ROUTE ROUTE1437 = createNode("ROUTE");
ROUTE1437.fromField = "value_changed";
ROUTE1437.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1437.toField = "set_rotation";
ROUTE1437.toNode = "Joe_r_elbow";
children[145] = ROUTE1437;

ROUTE ROUTE1438 = createNode("ROUTE");
ROUTE1438.fromField = "value_changed";
ROUTE1438.fromNode = "R_WRIST_ANIMATOR";
ROUTE1438.toField = "set_rotation";
ROUTE1438.toNode = "Joe_r_wrist";
children[146] = ROUTE1438;

}
