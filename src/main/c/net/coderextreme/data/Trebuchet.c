#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Trebuchet.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Working model of a 14th century Trebuchet Catapult.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "LT Joe Roth";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "20 June 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "20 October 2019";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "version";
meta7.content = "7.8";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://trebuchet.com";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://members.home.net/dimona";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "subject";
meta11.content = "trebuchet catapult Monty Python";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.title = "Trebuchet.x3d";
children = new MFNode();

children[0] = WorldInfo18;

Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"]);
Background19.bottomUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"]);
Background19.frontUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"]);
Background19.groundAngle = new MFFloat(new float[1.309,1.570796]);
Background19.groundColor = new MFColor(new float[0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6]);
Background19.leftUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"]);
Background19.rightUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"]);
Background19.skyAngle = new MFFloat(new float[1.309,1.57079]);
Background19.skyColor = new MFColor(new float[0,0.2,0.7,0,0.5,1,1,1,1]);
Background19.topUrl = new MFString(new java.lang.String["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"]);
children[1] = Background19;

Sound Sound20 = createNode("Sound");
Sound20.maxBack = 1000;
Sound20.maxFront = 1000;
AudioClip AudioClip21 = createNode("AudioClip");
AudioClip21.DEF = "HolyGrail";
AudioClip21.description = "HolyGrail";
AudioClip21.loop = True;
AudioClip21.url = new MFString(new java.lang.String["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"]);
Sound20.source = AudioClip21;

children[2] = Sound20;

Shape Shape22 = createNode("Shape");
Box Box23 = createNode("Box");
Box23.size = new SFVec3f(new float[10000,1,10000]);
Shape22.geometry = Box23;

Appearance Appearance24 = createNode("Appearance");
ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"]);
Appearance24.texture = ImageTexture25;

Shape22.appearance = Appearance24;

children[3] = Shape22;

Transform Transform26 = createNode("Transform");
Transform26.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform26.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Transform26.translation = new SFVec3f(new float[10.5,6.5,4.5]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Appearance28.DEF = "TextAppearance";
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[1,0,0]);
Material29.emissiveColor = new SFColor(new float[1,1,0]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Text Text30 = createNode("Text");
Text30.string = new MFString(new java.lang.String["Click Sling to Select Projectile"]);
FontStyle FontStyle31 = createNode("FontStyle");
Text30.fontStyle = FontStyle31;

Shape27.geometry = Text30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

children[4] = Transform26;

Transform Transform32 = createNode("Transform");
Transform32.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform32.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Transform32.translation = new SFVec3f(new float[11,5.5,6]);
Switch Switch33 = createNode("Switch");
Switch33.DEF = "Weight";
Switch33.whichChoice = 0;
Group Group34 = createNode("Group");
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Appearance36.USE = "TextAppearance";
Shape35.appearance = Appearance36;

Text Text37 = createNode("Text");
Text37.string = new MFString(new java.lang.String["Click Here to Change Counter Weight (50 lbs)"]);
Shape35.geometry = Text37;

Group34.children = new MFNode();

Group34.children[0] = Shape35;

Switch33.children = new MFNode();

Switch33.children[0] = Group34;

Group Group38 = createNode("Group");
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Appearance40.USE = "TextAppearance";
Shape39.appearance = Appearance40;

Text Text41 = createNode("Text");
Text41.string = new MFString(new java.lang.String["Click Here to Change Counter Weight (500 lbs)"]);
Shape39.geometry = Text41;

Group38.children = new MFNode();

Group38.children[0] = Shape39;

Switch33.children[1] = Group38;

Group Group42 = createNode("Group");
Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Appearance44.USE = "TextAppearance";
Shape43.appearance = Appearance44;

Text Text45 = createNode("Text");
Text45.string = new MFString(new java.lang.String["Click Here to Change Counter Weight (1000 lbs)"]);
Shape43.geometry = Text45;

Group42.children = new MFNode();

Group42.children[0] = Shape43;

Switch33.children[2] = Group42;

Group Group46 = createNode("Group");
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Appearance48.USE = "TextAppearance";
Shape47.appearance = Appearance48;

Text Text49 = createNode("Text");
Text49.string = new MFString(new java.lang.String["Click Here to Change Counter Weight (10000 lbs)"]);
Shape47.geometry = Text49;

Group46.children = new MFNode();

Group46.children[0] = Shape47;

Switch33.children[3] = Group46;

Transform32.children = new MFNode();

Transform32.children[0] = Switch33;

TouchSensor TouchSensor50 = createNode("TouchSensor");
TouchSensor50.DEF = "weightselector";
TouchSensor50.description = "weight selector";
Transform32.children[1] = TouchSensor50;

Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[8,0,0]);
Shape Shape52 = createNode("Shape");
Box Box53 = createNode("Box");
Box53.size = new SFVec3f(new float[20,1,1]);
Shape52.geometry = Box53;

Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.transparency = 1;
Appearance54.material = Material55;

Shape52.appearance = Appearance54;

Transform51.child = new undefined();

Transform51.child[0] = Shape52;

Transform32.children[2] = Transform51;

children[5] = Transform32;

Transform Transform56 = createNode("Transform");
Transform56.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform56.translation = new SFVec3f(new float[10,0.5,4.5]);
Transform Transform57 = createNode("Transform");
Transform57.DEF = "launch";
Transform57.translation = new SFVec3f(new float[0,2,5]);
Billboard Billboard58 = createNode("Billboard");
Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.diffuseColor = new SFColor(new float[1,0,0]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

Text Text62 = createNode("Text");
Text62.string = new MFString(new java.lang.String["LAUNCH"]);
FontStyle FontStyle63 = createNode("FontStyle");
Text62.fontStyle = FontStyle63;

Shape59.geometry = Text62;

Billboard58.children = new MFNode();

Billboard58.children[0] = Shape59;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[2,0.3,0]);
Shape Shape65 = createNode("Shape");
Box Box66 = createNode("Box");
Box66.size = new SFVec3f(new float[5,1,1]);
Shape65.geometry = Box66;

Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.transparency = 1;
Appearance67.material = Material68;

Shape65.appearance = Appearance67;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

Billboard58.children[1] = Transform64;

Switch Switch69 = createNode("Switch");
Switch69.DEF = "PigdogMonk";
Switch69.whichChoice = -1;
Group Group70 = createNode("Group");
Sound Sound71 = createNode("Sound");
Sound71.maxBack = 1000;
Sound71.maxFront = 1000;
AudioClip AudioClip72 = createNode("AudioClip");
AudioClip72.DEF = "PigDogSound";
AudioClip72.description = "PigDogSound";
AudioClip72.url = new MFString(new java.lang.String["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"]);
Sound71.source = AudioClip72;

Group70.children = new MFNode();

Group70.children[0] = Sound71;

Switch69.children = new MFNode();

Switch69.children[0] = Group70;

Group Group73 = createNode("Group");
Sound Sound74 = createNode("Sound");
Sound74.maxBack = 1000;
Sound74.maxFront = 1000;
AudioClip AudioClip75 = createNode("AudioClip");
AudioClip75.DEF = "MonkSound";
AudioClip75.description = "MonkSound";
AudioClip75.url = new MFString(new java.lang.String["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"]);
Sound74.source = AudioClip75;

Group73.children = new MFNode();

Group73.children[0] = Sound74;

Switch69.children[1] = Group73;

Billboard58.children[2] = Switch69;

Transform57.children = new MFNode();

Transform57.children[0] = Billboard58;

TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.DEF = "Launch";
TouchSensor76.description = "launch!";
Transform57.children[1] = TouchSensor76;

Transform56.children = new MFNode();

Transform56.children[0] = Transform57;

Transform Transform77 = createNode("Transform");
Switch Switch78 = createNode("Switch");
Switch78.DEF = "projectilename";
Switch78.whichChoice = 0;
Group Group79 = createNode("Group");
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Appearance81.USE = "TextAppearance";
Shape80.appearance = Appearance81;

Text Text82 = createNode("Text");
Text82.string = new MFString(new java.lang.String["Bowling Ball (10 lbs)"]);
FontStyle FontStyle83 = createNode("FontStyle");
FontStyle83.size = 0.5;
Text82.fontStyle = FontStyle83;

Shape80.geometry = Text82;

Group79.children = new MFNode();

Group79.children[0] = Shape80;

Sound Sound84 = createNode("Sound");
Sound84.maxBack = 1000;
Sound84.maxFront = 1000;
Sound84.priority = 1;
AudioClip AudioClip85 = createNode("AudioClip");
AudioClip85.DEF = "HolyHandGrenadeSound";
AudioClip85.description = "HolyHandGrenadeSound";
AudioClip85.url = new MFString(new java.lang.String["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"]);
Sound84.source = AudioClip85;

Group79.children[1] = Sound84;

Switch78.children = new MFNode();

Switch78.children[0] = Group79;

Group Group86 = createNode("Group");
Shape Shape87 = createNode("Shape");
Appearance Appearance88 = createNode("Appearance");
Appearance88.USE = "TextAppearance";
Shape87.appearance = Appearance88;

Text Text89 = createNode("Text");
Text89.string = new MFString(new java.lang.String["Cow (1000 lbs)"]);
FontStyle FontStyle90 = createNode("FontStyle");
FontStyle90.size = 0.5;
Text89.fontStyle = FontStyle90;

Shape87.geometry = Text89;

Group86.children = new MFNode();

Group86.children[0] = Shape87;

Sound Sound91 = createNode("Sound");
Sound91.maxBack = 1000;
Sound91.maxFront = 1000;
AudioClip AudioClip92 = createNode("AudioClip");
AudioClip92.DEF = "CowSound";
AudioClip92.description = "CowSound";
AudioClip92.url = new MFString(new java.lang.String["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"]);
Sound91.source = AudioClip92;

Group86.children[1] = Sound91;

Switch78.children[1] = Group86;

Group Group93 = createNode("Group");
Shape Shape94 = createNode("Shape");
Appearance Appearance95 = createNode("Appearance");
Appearance95.USE = "TextAppearance";
Shape94.appearance = Appearance95;

Text Text96 = createNode("Text");
Text96.string = new MFString(new java.lang.String["Chicken (5 lbs)"]);
FontStyle FontStyle97 = createNode("FontStyle");
FontStyle97.size = 0.5;
Text96.fontStyle = FontStyle97;

Shape94.geometry = Text96;

Group93.children = new MFNode();

Group93.children[0] = Shape94;

Sound Sound98 = createNode("Sound");
Sound98.maxBack = 1000;
Sound98.maxFront = 1000;
Sound98.priority = 1;
AudioClip AudioClip99 = createNode("AudioClip");
AudioClip99.DEF = "HamsterSound";
AudioClip99.description = "HamsterSound";
AudioClip99.url = new MFString(new java.lang.String["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"]);
Sound98.source = AudioClip99;

Group93.children[1] = Sound98;

Switch78.children[2] = Group93;

Transform77.children = new MFNode();

Transform77.children[0] = Switch78;

Transform56.children[1] = Transform77;

children[6] = Transform56;

Transform Transform100 = createNode("Transform");
Transform100.rotation = new SFRotation(new float[0,1,0,-1.67]);
Transform Transform101 = createNode("Transform");
Transform101.DEF = "aft";
Transform101.translation = new SFVec3f(new float[5,5,15]);
Transform Transform102 = createNode("Transform");
Transform102.translation = new SFVec3f(new float[-2.5,-4.5,-2]);
Transform Transform103 = createNode("Transform");
Transform103.USE = "launch";
Transform102.children = new MFNode();

Transform102.children[0] = Transform103;

Transform101.children = new MFNode();

Transform101.children[0] = Transform102;

Transform100.children = new MFNode();

Transform100.children[0] = Transform101;

children[7] = Transform100;

Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,3,0]);
Shape Shape105 = createNode("Shape");
Shape105.DEF = "plank";
Box Box106 = createNode("Box");
Box106.size = new SFVec3f(new float[25,1,1]);
Shape105.geometry = Box106;

Appearance Appearance107 = createNode("Appearance");
Appearance107.DEF = "wood";
ImageTexture ImageTexture108 = createNode("ImageTexture");
ImageTexture108.DEF = "woodTexture";
ImageTexture108.url = new MFString(new java.lang.String["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"]);
Appearance107.texture = ImageTexture108;

Shape105.appearance = Appearance107;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Transform Transform109 = createNode("Transform");
Transform109.DEF = "angledsupport";
Transform109.rotation = new SFRotation(new float[0,0,1,1]);
Transform109.translation = new SFVec3f(new float[-5,10,0]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "plank";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

Transform104.children[1] = Transform109;

Transform Transform111 = createNode("Transform");
Transform111.DEF = "angledsupport2";
Transform111.rotation = new SFRotation(new float[0,0,1,-1]);
Transform111.translation = new SFVec3f(new float[5,10,0]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "plank";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

Transform104.children[2] = Transform111;

Transform Transform113 = createNode("Transform");
Transform113.DEF = "verticalsupport";
Transform113.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform113.scale = new SFVec3f(new float[0.9,1,1]);
Transform113.translation = new SFVec3f(new float[0,11,0]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "plank";
Transform113.child = new undefined();

Transform113.child[0] = Shape114;

//Main Verticle Support
Transform104.children[3] = Transform113;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "horizontalsupport";
Transform115.scale = new SFVec3f(new float[0.4,1,1]);
Transform115.translation = new SFVec3f(new float[0,10,0]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "plank";
Transform115.child = new undefined();

Transform115.child[0] = Shape116;

Transform104.children[4] = Transform115;

Transform Transform117 = createNode("Transform");
Transform117.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform117.scale = new SFVec3f(new float[0.6,1,1]);
Transform117.translation = new SFVec3f(new float[0,5,10]);
Transform Transform118 = createNode("Transform");
Transform118.rotation = new SFRotation(new float[0,1,0,0.4]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "plank";
Transform118.child = new undefined();

Transform118.child[0] = Shape119;

Transform117.children = new MFNode();

Transform117.children[0] = Transform118;

Transform104.children[5] = Transform117;

Transform Transform120 = createNode("Transform");
Transform120.DEF = "panel";
Transform120.translation = new SFVec3f(new float[0,18.2,-0.3]);
Shape Shape121 = createNode("Shape");
Box Box122 = createNode("Box");
Box122.size = new SFVec3f(new float[5,5,0.5]);
Shape121.geometry = Box122;

Appearance Appearance123 = createNode("Appearance");
Appearance123.USE = "wood";
Shape121.appearance = Appearance123;

Transform120.child = new undefined();

Transform120.child[0] = Shape121;

Transform104.children[6] = Transform120;

Transform Transform124 = createNode("Transform");
Transform124.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform124.translation = new SFVec3f(new float[0,0.6,2.5]);
Transform Transform125 = createNode("Transform");
Transform125.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape126 = createNode("Shape");
Extrusion Extrusion127 = createNode("Extrusion");
Extrusion127.beginCap = False;
Extrusion127.crossSection = new MFVec2f(new float[1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38]);
Extrusion127.endCap = False;
Extrusion127.solid = False;
Extrusion127.spine = new MFVec3f(new float[0,6,0,0,-11,0]);
Shape126.geometry = Extrusion127;

Appearance Appearance128 = createNode("Appearance");
Appearance128.USE = "wood";
Shape126.appearance = Appearance128;

Transform125.child = new undefined();

Transform125.child[0] = Shape126;

Transform124.children = new MFNode();

Transform124.children[0] = Transform125;

Transform104.children[7] = Transform124;

Transform Transform129 = createNode("Transform");
Transform129.DEF = "flinger";
Transform129.center = new SFVec3f(new float[7,0,0]);
Transform129.rotation = new SFRotation(new float[0,0,1,0.82]);
Transform129.scale = new SFVec3f(new float[0.9,1,1]);
Transform129.translation = new SFVec3f(new float[-7,18,2.5]);
Transform Transform130 = createNode("Transform");
Shape Shape131 = createNode("Shape");
Box Box132 = createNode("Box");
Box132.size = new SFVec3f(new float[35,1,1]);
Shape131.geometry = Box132;

Appearance Appearance133 = createNode("Appearance");
Appearance133.USE = "wood";
Shape131.appearance = Appearance133;

Transform130.child = new undefined();

Transform130.child[0] = Shape131;

Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[7,0,0]);
Shape Shape135 = createNode("Shape");
Box Box136 = createNode("Box");
Box136.size = new SFVec3f(new float[8,2,2]);
Shape135.geometry = Box136;

Appearance Appearance137 = createNode("Appearance");
Appearance137.USE = "wood";
Shape135.appearance = Appearance137;

Transform134.child = new undefined();

Transform134.child[0] = Shape135;

Transform130.children[1] = Transform134;

Transform129.children = new MFNode();

Transform129.children[0] = Transform130;

Transform Transform138 = createNode("Transform");
Transform138.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform138.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform138.translation = new SFVec3f(new float[-15,-1,0]);
Shape Shape139 = createNode("Shape");
Shape139.DEF = "Torus";
Appearance Appearance140 = createNode("Appearance");
Material Material141 = createNode("Material");
Material141.specularColor = new SFColor(new float[1,1,1]);
Appearance140.material = Material141;

Shape139.appearance = Appearance140;

Extrusion Extrusion142 = createNode("Extrusion");
Extrusion142.beginCap = False;
Extrusion142.convex = False;
Extrusion142.creaseAngle = 1.57;
Extrusion142.crossSection = new MFVec2f(new float[0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0]);
Extrusion142.endCap = False;
Extrusion142.spine = new MFVec3f(new float[2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0]);
Shape139.geometry = Extrusion142;

Transform138.child = new undefined();

Transform138.child[0] = Shape139;

Transform Transform143 = createNode("Transform");
Transform143.translation = new SFVec3f(new float[1,0,2]);
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Appearance145.DEF = "rope";
ImageTexture ImageTexture146 = createNode("ImageTexture");
ImageTexture146.USE = "woodTexture";
Appearance145.texture = ImageTexture146;

Shape144.appearance = Appearance145;

Sphere Sphere147 = createNode("Sphere");
Sphere147.radius = 1.5;
Shape144.geometry = Sphere147;

Transform143.child = new undefined();

Transform143.child[0] = Shape144;

//knott
Transform138.children[1] = Transform143;

Transform129.children[1] = Transform138;

//The Unicorn
Transform Transform148 = createNode("Transform");
Transform148.rotation = new SFRotation(new float[0,0,1,1.2]);
Transform148.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform148.translation = new SFVec3f(new float[-18.3,0.3,0]);
Shape Shape149 = createNode("Shape");
Cylinder Cylinder150 = createNode("Cylinder");
Cylinder150.height = 10;
Shape149.geometry = Cylinder150;

Appearance Appearance151 = createNode("Appearance");
Material Material152 = createNode("Material");
Material152.specularColor = new SFColor(new float[1,1,1]);
Appearance151.material = Material152;

Shape149.appearance = Appearance151;

Transform148.child = new undefined();

Transform148.child[0] = Shape149;

Transform Transform153 = createNode("Transform");
Transform153.translation = new SFVec3f(new float[0,-2.5,0]);
//The Unicorn
Shape Shape154 = createNode("Shape");
Shape154.USE = "Torus";
Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Transform Transform155 = createNode("Transform");
Transform155.translation = new SFVec3f(new float[-2,0,0]);
Shape Shape156 = createNode("Shape");
Sphere Sphere157 = createNode("Sphere");
Sphere157.radius = 1.5;
Shape156.geometry = Sphere157;

Appearance Appearance158 = createNode("Appearance");
Appearance158.USE = "rope";
Shape156.appearance = Appearance158;

Transform155.child = new undefined();

Transform155.child[0] = Shape156;

//Knott
Transform153.children[1] = Transform155;

Transform148.children[1] = Transform153;

Transform Transform159 = createNode("Transform");
Transform159.rotation = new SFRotation(new float[0,0,1,1.2]);
Transform159.translation = new SFVec3f(new float[15,55,-11]);
Transform Transform160 = createNode("Transform");
Transform160.scale = new SFVec3f(new float[5,5,5]);
Shape Shape161 = createNode("Shape");
Appearance Appearance162 = createNode("Appearance");
Appearance162.USE = "rope";
Shape161.appearance = Appearance162;

Extrusion Extrusion163 = createNode("Extrusion");
Extrusion163.beginCap = False;
Extrusion163.creaseAngle = 0.76;
Extrusion163.crossSection = new MFVec2f(new float[0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion163.endCap = False;
Extrusion163.solid = False;
Extrusion163.spine = new MFVec3f(new float[-15.2,1.4,2.2,-12,-0.8,2.2]);
Shape161.geometry = Extrusion163;

Transform160.child = new undefined();

Transform160.child[0] = Shape161;

Transform159.children = new MFNode();

Transform159.children[0] = Transform160;

Transform148.children[2] = Transform159;

Transform129.children[2] = Transform148;

Transform Transform164 = createNode("Transform");
Transform164.rotation = new SFRotation(new float[1,0,0,-1.7]);
Transform164.translation = new SFVec3f(new float[-17,-4.5,0]);
Transform Transform165 = createNode("Transform");
Transform165.scale = new SFVec3f(new float[0.2,0.2,0.2]);
//Knot
Shape Shape166 = createNode("Shape");
Shape166.USE = "Torus";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[-1,0,1.7]);
Shape Shape168 = createNode("Shape");
Sphere Sphere169 = createNode("Sphere");
Sphere169.radius = 1.5;
Shape168.geometry = Sphere169;

Appearance Appearance170 = createNode("Appearance");
Appearance170.USE = "rope";
Shape168.appearance = Appearance170;

Transform167.child = new undefined();

Transform167.child[0] = Shape168;

Transform165.children[1] = Transform167;

Transform164.children = new MFNode();

Transform164.children[0] = Transform165;

Transform129.children[3] = Transform164;

Transform Transform171 = createNode("Transform");
Transform171.DEF = "RnS";
Transform Transform172 = createNode("Transform");
Transform172.DEF = "ropes";
Transform Transform173 = createNode("Transform");
Transform173.rotation = new SFRotation(new float[0,0,1,-0.82]);
Transform173.translation = new SFVec3f(new float[7,-26,-2.5]);
Shape Shape174 = createNode("Shape");
Appearance Appearance175 = createNode("Appearance");
Appearance175.USE = "rope";
Shape174.appearance = Appearance175;

Extrusion Extrusion176 = createNode("Extrusion");
Extrusion176.beginCap = False;
Extrusion176.creaseAngle = 0.76;
Extrusion176.crossSection = new MFVec2f(new float[0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion176.endCap = False;
Extrusion176.solid = False;
Extrusion176.spine = new MFVec3f(new float[-33,0.9,2.5,-18.5,1.9,2.55]);
Shape174.geometry = Extrusion176;

Transform173.child = new undefined();

Transform173.child[0] = Shape174;

Shape Shape177 = createNode("Shape");
Appearance Appearance178 = createNode("Appearance");
Appearance178.USE = "rope";
Shape177.appearance = Appearance178;

Extrusion Extrusion179 = createNode("Extrusion");
Extrusion179.beginCap = False;
Extrusion179.creaseAngle = 0.76;
Extrusion179.crossSection = new MFVec2f(new float[0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion179.endCap = False;
Extrusion179.solid = False;
Extrusion179.spine = new MFVec3f(new float[-35.7,-0.8,2.5,-18.8,-0.8,2.55]);
Shape177.geometry = Extrusion179;

Transform173.child[1] = Shape177;

Transform172.children = new MFNode();

Transform172.children[0] = Transform173;

Transform171.children = new MFNode();

Transform171.children[0] = Transform172;

Transform Transform180 = createNode("Transform");
Transform180.DEF = "sling";
Transform180.rotation = new SFRotation(new float[0,0,1,-0.82]);
Transform180.translation = new SFVec3f(new float[-4,-15.3,0]);
Transform Transform181 = createNode("Transform");
Transform Transform182 = createNode("Transform");
Transform182.rotation = new SFRotation(new float[0,1,0,-1.57]);
Transform182.scale = new SFVec3f(new float[1,1.3,1]);
Transform182.translation = new SFVec3f(new float[0.5,0,-1]);
Transform Transform183 = createNode("Transform");
Transform183.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform Transform184 = createNode("Transform");
Transform184.scale = new SFVec3f(new float[0.3,0.3,0.3]);
Shape Shape185 = createNode("Shape");
Shape185.DEF = "halfsling";
Appearance Appearance186 = createNode("Appearance");
Appearance186.DEF = "clear";
Material Material187 = createNode("Material");
Material187.transparency = 0.5;
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

Extrusion Extrusion188 = createNode("Extrusion");
Extrusion188.crossSection = new MFVec2f(new float[0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0]);
Extrusion188.spine = new MFVec3f(new float[0,0,0,0.1,0,0]);
Shape185.geometry = Extrusion188;

Transform184.child = new undefined();

Transform184.child[0] = Shape185;

Transform Transform189 = createNode("Transform");
Transform189.scale = new SFVec3f(new float[0.3,0.3,0.3]);
Transform189.translation = new SFVec3f(new float[0,-3.5,11.5]);
Shape Shape190 = createNode("Shape");
Shape190.USE = "Torus";
Transform189.child = new undefined();

Transform189.child[0] = Shape190;

Transform Transform191 = createNode("Transform");
Transform191.translation = new SFVec3f(new float[0,0,2]);
Shape Shape192 = createNode("Shape");
Appearance Appearance193 = createNode("Appearance");
Appearance193.USE = "rope";
Shape192.appearance = Appearance193;

Sphere Sphere194 = createNode("Sphere");
Sphere194.radius = 1.5;
Shape192.geometry = Sphere194;

Transform191.child = new undefined();

Transform191.child[0] = Shape192;

Transform189.children[1] = Transform191;

Transform184.children[1] = Transform189;

Transform183.children = new MFNode();

Transform183.children[0] = Transform184;

Transform Transform195 = createNode("Transform");
Transform195.scale = new SFVec3f(new float[0.3,0.3,0.3]);
Transform195.translation = new SFVec3f(new float[2,0,0]);
Shape Shape196 = createNode("Shape");
Shape196.USE = "halfsling";
Transform195.child = new undefined();

Transform195.child[0] = Shape196;

Transform Transform197 = createNode("Transform");
Transform197.scale = new SFVec3f(new float[0.3,0.3,0.3]);
Transform197.translation = new SFVec3f(new float[0,-3.5,11.3]);
Shape Shape198 = createNode("Shape");
Shape198.USE = "Torus";
Transform197.child = new undefined();

Transform197.child[0] = Shape198;

Transform Transform199 = createNode("Transform");
Transform199.translation = new SFVec3f(new float[0,0,2]);
Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Appearance201.USE = "rope";
Shape200.appearance = Appearance201;

Sphere Sphere202 = createNode("Sphere");
Sphere202.radius = 1.5;
Shape200.geometry = Sphere202;

Transform199.child = new undefined();

Transform199.child[0] = Shape200;

Transform197.children[1] = Transform199;

Transform195.children[1] = Transform197;

Transform183.children[1] = Transform195;

Transform Transform203 = createNode("Transform");
Transform203.translation = new SFVec3f(new float[1,-1,0]);
Shape Shape204 = createNode("Shape");
Extrusion Extrusion205 = createNode("Extrusion");
Extrusion205.beginCap = False;
Extrusion205.creaseAngle = 0.785;
Extrusion205.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0]);
Extrusion205.endCap = False;
Extrusion205.solid = False;
Extrusion205.spine = new MFVec3f(new float[0,-1,0,0,1,0]);
Shape204.geometry = Extrusion205;

Appearance Appearance206 = createNode("Appearance");
Appearance206.USE = "clear";
Shape204.appearance = Appearance206;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Transform183.children[2] = Transform203;

Transform182.children = new MFNode();

Transform182.children[0] = Transform183;

TouchSensor TouchSensor207 = createNode("TouchSensor");
TouchSensor207.DEF = "LauncheeChoice";
TouchSensor207.description = "launcher choice";
Transform182.children[1] = TouchSensor207;

Transform181.children = new MFNode();

Transform181.children[0] = Transform182;

Transform Transform208 = createNode("Transform");
Transform208.DEF = "projectiletransform";
Transform208.scale = new SFVec3f(new float[0.01,0.01,0.01]);
Switch Switch209 = createNode("Switch");
Switch209.DEF = "projectile";
Switch209.whichChoice = 0;
Group Group210 = createNode("Group");
Transform Transform211 = createNode("Transform");
Transform211.translation = new SFVec3f(new float[0,0.7,0]);
Shape Shape212 = createNode("Shape");
Sphere Sphere213 = createNode("Sphere");
Sphere213.radius = 0.7;
Shape212.geometry = Sphere213;

Appearance Appearance214 = createNode("Appearance");
Appearance214.DEF = "black";
Material Material215 = createNode("Material");
Material215.diffuseColor = new SFColor(new float[0,0,0]);
Material215.specularColor = new SFColor(new float[1,1,1]);
Appearance214.material = Material215;

Shape212.appearance = Appearance214;

Transform211.child = new undefined();

Transform211.child[0] = Shape212;

Group210.children = new MFNode();

Group210.children[0] = Transform211;

Switch209.children = new MFNode();

Switch209.children[0] = Group210;

Group Group216 = createNode("Group");
Transform Transform217 = createNode("Transform");
Inline Inline218 = createNode("Inline");
Inline218.url = new MFString(new java.lang.String["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"]);
Transform217.children = new MFNode();

Transform217.children[0] = Inline218;

Group216.children = new MFNode();

Group216.children[0] = Transform217;

Switch209.children[1] = Group216;

Group Group219 = createNode("Group");
Transform Transform220 = createNode("Transform");
Transform220.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform220.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform220.translation = new SFVec3f(new float[0,0.7,0]);
Inline Inline221 = createNode("Inline");
Inline221.url = new MFString(new java.lang.String["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"]);
Transform220.children = new MFNode();

Transform220.children[0] = Inline221;

Group219.children = new MFNode();

Group219.children[0] = Transform220;

Switch209.children[2] = Group219;

Transform208.children = new MFNode();

Transform208.children[0] = Switch209;

Transform181.children[1] = Transform208;

Transform180.children = new MFNode();

Transform180.children[0] = Transform181;

Transform171.children[1] = Transform180;

Transform129.children[4] = Transform171;

Transform104.children[8] = Transform129;

Transform Transform222 = createNode("Transform");
Transform222.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform222.translation = new SFVec3f(new float[0,18,2.5]);
Shape Shape223 = createNode("Shape");
Cylinder Cylinder224 = createNode("Cylinder");
Cylinder224.height = 8;
Cylinder224.radius = 0.4;
Shape223.geometry = Cylinder224;

Appearance Appearance225 = createNode("Appearance");
Material Material226 = createNode("Material");
Material226.diffuseColor = new SFColor(new float[0,0,0]);
Material226.specularColor = new SFColor(new float[1,1,1]);
Appearance225.material = Material226;

Shape223.appearance = Appearance225;

Transform222.child = new undefined();

Transform222.child[0] = Shape223;

//Top Pivot
Transform104.children[9] = Transform222;

Transform Transform227 = createNode("Transform");
Transform227.DEF = "verticalweight";
Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[4,18,1.8]);
Shape Shape229 = createNode("Shape");
Box Box230 = createNode("Box");
Box230.size = new SFVec3f(new float[1,10,0.5]);
Shape229.geometry = Box230;

Appearance Appearance231 = createNode("Appearance");
Appearance231.USE = "wood";
Shape229.appearance = Appearance231;

Transform228.child = new undefined();

Transform228.child[0] = Shape229;

Transform227.children = new MFNode();

Transform227.children[0] = Transform228;

Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[4,18,3.2]);
Shape Shape233 = createNode("Shape");
Box Box234 = createNode("Box");
Box234.size = new SFVec3f(new float[1,10,0.5]);
Shape233.geometry = Box234;

Appearance Appearance235 = createNode("Appearance");
Appearance235.USE = "wood";
Shape233.appearance = Appearance235;

Transform232.child = new undefined();

Transform232.child[0] = Shape233;

Transform227.children[1] = Transform232;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[4,14,2.5]);
//CounterWeight
Shape Shape237 = createNode("Shape");
Cylinder Cylinder238 = createNode("Cylinder");
Cylinder238.height = 4;
Cylinder238.radius = 1.5;
Shape237.geometry = Cylinder238;

Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.diffuseColor = new SFColor(new float[0,0,0]);
Material240.specularColor = new SFColor(new float[1,1,1]);
Appearance239.material = Material240;

Shape237.appearance = Appearance239;

Transform236.child = new undefined();

Transform236.child[0] = Shape237;

Transform227.children[2] = Transform236;

Transform Transform241 = createNode("Transform");
Transform241.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform241.translation = new SFVec3f(new float[4,22,2.5]);
Shape Shape242 = createNode("Shape");
Cylinder Cylinder243 = createNode("Cylinder");
Cylinder243.height = 2.5;
Cylinder243.radius = 0.3;
Shape242.geometry = Cylinder243;

Appearance Appearance244 = createNode("Appearance");
Material Material245 = createNode("Material");
Material245.diffuseColor = new SFColor(new float[0,0,0]);
Material245.specularColor = new SFColor(new float[1,1,1]);
Appearance244.material = Material245;

Shape242.appearance = Appearance244;

Transform241.child = new undefined();

Transform241.child[0] = Shape242;

Transform227.children[3] = Transform241;

Transform104.children[10] = Transform227;

Transform Transform246 = createNode("Transform");
Transform246.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform246.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform246.translation = new SFVec3f(new float[-11.5,-1,2]);
Transform Transform247 = createNode("Transform");
Transform247.DEF = "screw";
Transform247.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape248 = createNode("Shape");
Shape248.USE = "Torus";
Transform247.child = new undefined();

Transform247.child[0] = Shape248;

Transform Transform249 = createNode("Transform");
Transform249.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform249.translation = new SFVec3f(new float[0,0,7]);
Shape Shape250 = createNode("Shape");
Cylinder Cylinder251 = createNode("Cylinder");
Cylinder251.height = 10;
Cylinder251.radius = 0.7;
Shape250.geometry = Cylinder251;

Appearance Appearance252 = createNode("Appearance");
Material Material253 = createNode("Material");
Material253.specularColor = new SFColor(new float[1,1,1]);
Appearance252.material = Material253;

Shape250.appearance = Appearance252;

Transform249.child = new undefined();

Transform249.child[0] = Shape250;

Transform247.children[1] = Transform249;

Transform246.children = new MFNode();

Transform246.children[0] = Transform247;

Transform Transform254 = createNode("Transform");
Transform254.translation = new SFVec3f(new float[0,0,7]);
Transform Transform255 = createNode("Transform");
Transform255.USE = "screw";
Transform254.children = new MFNode();

Transform254.children[0] = Transform255;

Transform246.children[1] = Transform254;

//Release Pin
Transform Transform256 = createNode("Transform");
Transform256.DEF = "Pin";
Transform256.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform256.translation = new SFVec3f(new float[0,0,-3]);
Transform Transform257 = createNode("Transform");
Transform257.USE = "screw";
Transform256.children = new MFNode();

Transform256.children[0] = Transform257;

Transform246.children[2] = Transform256;

Transform104.children[11] = Transform246;

Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0,0,5]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "plank";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

Transform Transform260 = createNode("Transform");
Transform260.USE = "angledsupport";
Transform258.children[1] = Transform260;

Transform Transform261 = createNode("Transform");
Transform261.USE = "angledsupport2";
Transform258.children[2] = Transform261;

Transform Transform262 = createNode("Transform");
Transform262.USE = "verticalsupport";
Transform258.children[3] = Transform262;

Transform Transform263 = createNode("Transform");
Transform263.USE = "horizontalsupport";
Transform258.children[4] = Transform263;

Transform Transform264 = createNode("Transform");
Transform264.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform264.scale = new SFVec3f(new float[0.6,1,1]);
Transform264.translation = new SFVec3f(new float[0,-11,-2.5]);
Transform Transform265 = createNode("Transform");
Transform265.USE = "horizontalsupport";
Transform264.children = new MFNode();

Transform264.children[0] = Transform265;

Transform258.children[5] = Transform264;

Transform Transform266 = createNode("Transform");
Transform266.rotation = new SFRotation(new float[0,0,1,-1.57]);
Transform266.scale = new SFVec3f(new float[0.6,1,1]);
Transform266.translation = new SFVec3f(new float[0,5,-10]);
Transform Transform267 = createNode("Transform");
Transform267.rotation = new SFRotation(new float[0,1,0,0.4]);
Shape Shape268 = createNode("Shape");
Shape268.USE = "plank";
Transform267.child = new undefined();

Transform267.child[0] = Shape268;

Transform266.children = new MFNode();

Transform266.children[0] = Transform267;

Transform258.children[6] = Transform266;

Transform Transform269 = createNode("Transform");
Transform269.translation = new SFVec3f(new float[0,0,0.6]);
Transform Transform270 = createNode("Transform");
Transform270.USE = "panel";
Transform269.children = new MFNode();

Transform269.children[0] = Transform270;

Transform258.children[7] = Transform269;

Transform104.children[12] = Transform258;

Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[10,-1,2.5]);
Shape Shape272 = createNode("Shape");
Shape272.DEF = "Axle";
Box Box273 = createNode("Box");
Box273.size = new SFVec3f(new float[1,1,8]);
Shape272.geometry = Box273;

Appearance Appearance274 = createNode("Appearance");
Appearance274.USE = "wood";
Shape272.appearance = Appearance274;

Transform271.child = new undefined();

Transform271.child[0] = Shape272;

Transform Transform275 = createNode("Transform");
Transform275.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform275.translation = new SFVec3f(new float[0,0,4.5]);
Shape Shape276 = createNode("Shape");
Shape276.DEF = "wheel";
Cylinder Cylinder277 = createNode("Cylinder");
Cylinder277.radius = 2;
Shape276.geometry = Cylinder277;

Appearance Appearance278 = createNode("Appearance");
Appearance278.USE = "wood";
Shape276.appearance = Appearance278;

Transform275.child = new undefined();

Transform275.child[0] = Shape276;

Shape Shape279 = createNode("Shape");
Shape279.DEF = "tracks";
Sphere Sphere280 = createNode("Sphere");
Sphere280.radius = 1.5;
Shape279.geometry = Sphere280;

Appearance Appearance281 = createNode("Appearance");
Appearance281.USE = "black";
Shape279.appearance = Appearance281;

Transform275.child[1] = Shape279;

Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[0,0.55,0]);
Shape Shape283 = createNode("Shape");
Shape283.DEF = "hub";
Sphere Sphere284 = createNode("Sphere");
Sphere284.radius = 1.5;
Shape283.geometry = Sphere284;

Appearance Appearance285 = createNode("Appearance");
Appearance285.USE = "black";
Shape283.appearance = Appearance285;

Transform282.child = new undefined();

Transform282.child[0] = Shape283;

Transform275.children[2] = Transform282;

Transform271.children[1] = Transform275;

Transform Transform286 = createNode("Transform");
Transform286.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform286.translation = new SFVec3f(new float[0,0,-4.5]);
Shape Shape287 = createNode("Shape");
Shape287.USE = "wheel";
Transform286.child = new undefined();

Transform286.child[0] = Shape287;

Shape Shape288 = createNode("Shape");
Shape288.USE = "tracks";
Transform286.child[1] = Shape288;

Transform Transform289 = createNode("Transform");
Transform289.translation = new SFVec3f(new float[0,-0.55,0]);
Shape Shape290 = createNode("Shape");
Shape290.USE = "hub";
Transform289.child = new undefined();

Transform289.child[0] = Shape290;

Transform286.children[2] = Transform289;

Transform271.children[2] = Transform286;

Transform104.children[13] = Transform271;

Transform Transform291 = createNode("Transform");
Transform291.translation = new SFVec3f(new float[-10,-1,2.5]);
Shape Shape292 = createNode("Shape");
Shape292.USE = "Axle";
Transform291.child = new undefined();

Transform291.child[0] = Shape292;

Transform Transform293 = createNode("Transform");
Transform293.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform293.translation = new SFVec3f(new float[0,0,4.5]);
Shape Shape294 = createNode("Shape");
Shape294.USE = "wheel";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "tracks";
Transform293.child[1] = Shape295;

Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[0,0.55,0]);
Shape Shape297 = createNode("Shape");
Shape297.USE = "hub";
Transform296.child = new undefined();

Transform296.child[0] = Shape297;

Transform293.children[2] = Transform296;

Transform291.children[1] = Transform293;

Transform Transform298 = createNode("Transform");
Transform298.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform298.translation = new SFVec3f(new float[0,0,-4.5]);
Shape Shape299 = createNode("Shape");
Shape299.USE = "wheel";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

Shape Shape300 = createNode("Shape");
Shape300.USE = "tracks";
Transform298.child[1] = Shape300;

Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[0,-0.55,0]);
Shape Shape302 = createNode("Shape");
Shape302.USE = "hub";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

Transform298.children[2] = Transform301;

Transform291.children[2] = Transform298;

Transform Transform303 = createNode("Transform");
Transform303.rotation = new SFRotation(new float[0,1,0,-0.6]);
Transform303.translation = new SFVec3f(new float[0,100,400]);
Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[1,3,0]);
Viewpoint Viewpoint305 = createNode("Viewpoint");
Viewpoint305.description = "Side";
Transform304.children = new MFNode();

Transform304.children[0] = Viewpoint305;

Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

Transform Transform306 = createNode("Transform");
Transform306.USE = "launch";
Transform303.children[1] = Transform306;

Transform Transform307 = createNode("Transform");
TouchSensor TouchSensor308 = createNode("TouchSensor");
TouchSensor308.USE = "LauncheeChoice";
Transform307.children = new MFNode();

Transform307.children[0] = TouchSensor308;

Switch Switch309 = createNode("Switch");
Switch309.USE = "projectilename";
Transform307.children[1] = Switch309;

Transform Transform310 = createNode("Transform");
Transform310.translation = new SFVec3f(new float[2.5,0,0]);
Shape Shape311 = createNode("Shape");
Box Box312 = createNode("Box");
Box312.size = new SFVec3f(new float[5,0.5,0.5]);
Shape311.geometry = Box312;

Appearance Appearance313 = createNode("Appearance");
Material Material314 = createNode("Material");
Material314.transparency = 1;
Appearance313.material = Material314;

Shape311.appearance = Appearance313;

Transform310.child = new undefined();

Transform310.child[0] = Shape311;

Transform307.children[2] = Transform310;

Transform303.children[2] = Transform307;

Transform Transform315 = createNode("Transform");
Transform315.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Transform315.translation = new SFVec3f(new float[0,-1,0]);
TouchSensor TouchSensor316 = createNode("TouchSensor");
TouchSensor316.USE = "weightselector";
Transform315.children = new MFNode();

Transform315.children[0] = TouchSensor316;

Switch Switch317 = createNode("Switch");
Switch317.USE = "Weight";
Transform315.children[1] = Switch317;

Transform Transform318 = createNode("Transform");
Transform318.translation = new SFVec3f(new float[8,0,0]);
Shape Shape319 = createNode("Shape");
Box Box320 = createNode("Box");
Box320.size = new SFVec3f(new float[17,1,0.5]);
Shape319.geometry = Box320;

Appearance Appearance321 = createNode("Appearance");
Material Material322 = createNode("Material");
Material322.transparency = 1;
Appearance321.material = Material322;

Shape319.appearance = Appearance321;

Transform318.child = new undefined();

Transform318.child[0] = Shape319;

Transform315.children[2] = Transform318;

Transform303.children[3] = Transform315;

Transform291.children[3] = Transform303;

Transform Transform323 = createNode("Transform");
Transform323.DEF = "ProjectileTransform";
Transform323.translation = new SFVec3f(new float[14.25,1.25,0]);
Switch Switch324 = createNode("Switch");
Switch324.USE = "projectile";
Transform323.children = new MFNode();

Transform323.children[0] = Switch324;

Transform Transform325 = createNode("Transform");
Transform325.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform325.translation = new SFVec3f(new float[0,1,0]);
Viewpoint Viewpoint326 = createNode("Viewpoint");
Viewpoint326.description = "Projectile Cam";
Viewpoint326.position = new SFVec3f(new float[0,0,15]);
Transform325.children = new MFNode();

Transform325.children[0] = Viewpoint326;

Transform323.children[1] = Transform325;

Transform291.children[4] = Transform323;

Transform Transform327 = createNode("Transform");
Transform327.translation = new SFVec3f(new float[20,2,0]);
Transform Transform328 = createNode("Transform");
Transform328.DEF = "Front";
Transform328.rotation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint Viewpoint329 = createNode("Viewpoint");
Viewpoint329.description = "Fore";
Transform328.children = new MFNode();

Transform328.children[0] = Viewpoint329;

Transform327.children = new MFNode();

Transform327.children[0] = Transform328;

Transform291.children[5] = Transform327;

Transform Transform330 = createNode("Transform");
Transform330.translation = new SFVec3f(new float[-8,4,0]);
Transform Transform331 = createNode("Transform");
Transform331.rotation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint Viewpoint332 = createNode("Viewpoint");
Viewpoint332.description = "Aft";
Transform331.children = new MFNode();

Transform331.children[0] = Viewpoint332;

Transform330.children = new MFNode();

Transform330.children[0] = Transform331;

Transform291.children[6] = Transform330;

Script Script333 = createNode("Script");
Script333.DEF = "WeightScript";
field field334 = createNode("field");
field334.name = "set_boolean";
field334.accessType = "inputOnly";
field334.type = "SFBool";
Script333.field = new MFNode();

Script333.field[0] = field334;

field field335 = createNode("field");
field335.name = "whichchoice";
field335.accessType = "outputOnly";
field335.type = "SFInt32";
Script333.field[1] = field335;

field field336 = createNode("field");
field336.name = "CounterWeight";
field336.accessType = "outputOnly";
field336.type = "SFFloat";
Script333.field[2] = field336;


Script333.setSourceCode(`ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.println ('CounterWeight ='+CounterWeight);\n"+
"}`)
Transform291.children[7] = Script333;

Script Script337 = createNode("Script");
Script337.DEF = "LauncheeScript";
field field338 = createNode("field");
field338.name = "set_boolean";
field338.accessType = "inputOnly";
field338.type = "SFBool";
Script337.field = new MFNode();

Script337.field[0] = field338;

field field339 = createNode("field");
field339.name = "whichchoice";
field339.accessType = "outputOnly";
field339.type = "SFInt32";
Script337.field[1] = field339;

field field340 = createNode("field");
field340.name = "ProjectileWeight";
field340.accessType = "outputOnly";
field340.type = "SFFloat";
Script337.field[2] = field340;


Script337.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.println ('Projectile Weight'+ProjectileWeight);\n"+
"}`)
Transform291.children[8] = Script337;

Script Script341 = createNode("Script");
Script341.DEF = "PigdogMonkScript";
field field342 = createNode("field");
field342.name = "set_boolean";
field342.accessType = "inputOnly";
field342.type = "SFBool";
Script341.field = new MFNode();

Script341.field[0] = field342;

field field343 = createNode("field");
field343.name = "whichchoice";
field343.accessType = "outputOnly";
field343.type = "SFInt32";
Script341.field[1] = field343;


Script341.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}`)
Transform291.children[9] = Script341;

Script Script344 = createNode("Script");
Script344.DEF = "Mover";
field field345 = createNode("field");
field345.name = "set_fraction";
field345.accessType = "inputOnly";
field345.type = "SFFloat";
Script344.field = new MFNode();

Script344.field[0] = field345;

field field346 = createNode("field");
field346.name = "set_MassCounterWeight";
field346.accessType = "inputOnly";
field346.type = "SFFloat";
Script344.field[1] = field346;

field field347 = createNode("field");
field347.name = "set_MassProjectileWeight";
field347.accessType = "inputOnly";
field347.type = "SFFloat";
Script344.field[2] = field347;

field field348 = createNode("field");
field348.name = "MassCounterWeight";
field348.accessType = "initializeOnly";
field348.type = "SFFloat";
field348.value = "1";
Script344.field[3] = field348;

field field349 = createNode("field");
field349.name = "MassProjectileWeight";
field349.accessType = "initializeOnly";
field349.type = "SFFloat";
field349.value = "1";
Script344.field[4] = field349;

field field350 = createNode("field");
field350.name = "transparent";
field350.accessType = "outputOnly";
field350.type = "SFVec3f";
Script344.field[5] = field350;

field field351 = createNode("field");
field351.name = "value_changed";
field351.accessType = "outputOnly";
field351.type = "SFVec3f";
Script344.field[6] = field351;


Script344.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.println ('new MassCounterWeight =' + MassCounterWeight);\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction ( fraction, eventTime )\n"+
"{\n"+
"	var TrebuchetHeight=45;\n"+
"	var Height =25;\n"+
"      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        var z = 0;\n"+
"        transparent = new SFVec3f (1,1,1);\n"+
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\n"+
"		{\n"+
"		x=x-10;\n"+
"		y=y+1;\n"+
"		transparent = new SFVec3f(.01, .01, .01);\n"+
"			}\n"+
"\n"+
"	value_changed = new SFVec3f (x, y, z);\n"+
"	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}`)
Transform291.children[10] = Script344;

Transform104.children[14] = Transform291;

children[8] = Transform104;

TimeSensor TimeSensor352 = createNode("TimeSensor");
TimeSensor352.DEF = "clock";
TimeSensor352.cycleInterval = 10;
children[9] = TimeSensor352;

PositionInterpolator PositionInterpolator353 = createNode("PositionInterpolator");
PositionInterpolator353.DEF = "verticalweightpath";
PositionInterpolator353.key = new MFFloat(new float[0,0.1,0.2,0.2,0.3,0.9]);
PositionInterpolator353.keyValue = new MFVec3f(new float[1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0]);
children[10] = PositionInterpolator353;

OrientationInterpolator OrientationInterpolator354 = createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "flingerangles";
OrientationInterpolator354.key = new MFFloat(new float[0,0.1,0.2,0.2,0.3,0.9]);
OrientationInterpolator354.keyValue = new MFRotation(new float[0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82]);
children[11] = OrientationInterpolator354;

PositionInterpolator PositionInterpolator355 = createNode("PositionInterpolator");
PositionInterpolator355.DEF = "pinpath";
PositionInterpolator355.key = new MFFloat(new float[0,0.01,0.95,1]);
PositionInterpolator355.keyValue = new MFVec3f(new float[0,0,-3,0,0,-10,0,0,-10,0,0,-3]);
children[12] = PositionInterpolator355;

OrientationInterpolator OrientationInterpolator356 = createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "RnSAngels";
OrientationInterpolator356.key = new MFFloat(new float[0,0.7,1]);
OrientationInterpolator356.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-3.14,0,0,1,0]);
children[13] = OrientationInterpolator356;

PositionInterpolator PositionInterpolator357 = createNode("PositionInterpolator");
PositionInterpolator357.DEF = "invisiable";
PositionInterpolator357.key = new MFFloat(new float[0,0.2,0.98,0.99]);
PositionInterpolator357.keyValue = new MFVec3f(new float[1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1]);
children[14] = PositionInterpolator357;

ROUTE ROUTE358 = createNode("ROUTE");
ROUTE358.fromField = "fraction_changed";
ROUTE358.fromNode = "clock";
ROUTE358.toField = "set_fraction";
ROUTE358.toNode = "invisiable";
children[15] = ROUTE358;

ROUTE ROUTE359 = createNode("ROUTE");
ROUTE359.fromField = "value_changed";
ROUTE359.fromNode = "invisiable";
ROUTE359.toField = "set_scale";
ROUTE359.toNode = "projectiletransform";
children[16] = ROUTE359;

ROUTE ROUTE360 = createNode("ROUTE");
ROUTE360.fromField = "CounterWeight";
ROUTE360.fromNode = "WeightScript";
ROUTE360.toField = "set_MassCounterWeight";
ROUTE360.toNode = "Mover";
children[17] = ROUTE360;

ROUTE ROUTE361 = createNode("ROUTE");
ROUTE361.fromField = "ProjectileWeight";
ROUTE361.fromNode = "LauncheeScript";
ROUTE361.toField = "set_MassProjectileWeight";
ROUTE361.toNode = "Mover";
children[18] = ROUTE361;

ROUTE ROUTE362 = createNode("ROUTE");
ROUTE362.fromField = "fraction_changed";
ROUTE362.fromNode = "clock";
ROUTE362.toField = "set_fraction";
ROUTE362.toNode = "Mover";
children[19] = ROUTE362;

ROUTE ROUTE363 = createNode("ROUTE");
ROUTE363.fromField = "value_changed";
ROUTE363.fromNode = "Mover";
ROUTE363.toField = "set_translation";
ROUTE363.toNode = "ProjectileTransform";
children[20] = ROUTE363;

ROUTE ROUTE364 = createNode("ROUTE");
ROUTE364.fromField = "transparent";
ROUTE364.fromNode = "Mover";
ROUTE364.toField = "set_scale";
ROUTE364.toNode = "ProjectileTransform";
children[21] = ROUTE364;

ROUTE ROUTE365 = createNode("ROUTE");
ROUTE365.fromField = "touchTime";
ROUTE365.fromNode = "Launch";
ROUTE365.toField = "set_startTime";
ROUTE365.toNode = "clock";
children[22] = ROUTE365;

ROUTE ROUTE366 = createNode("ROUTE");
ROUTE366.fromField = "isActive";
ROUTE366.fromNode = "Launch";
ROUTE366.toField = "set_boolean";
ROUTE366.toNode = "PigdogMonkScript";
children[23] = ROUTE366;

ROUTE ROUTE367 = createNode("ROUTE");
ROUTE367.fromField = "touchTime";
ROUTE367.fromNode = "Launch";
ROUTE367.toField = "set_startTime";
ROUTE367.toNode = "PigDogSound";
children[24] = ROUTE367;

ROUTE ROUTE368 = createNode("ROUTE");
ROUTE368.fromField = "touchTime";
ROUTE368.fromNode = "Launch";
ROUTE368.toField = "set_startTime";
ROUTE368.toNode = "MonkSound";
children[25] = ROUTE368;

ROUTE ROUTE369 = createNode("ROUTE");
ROUTE369.fromField = "whichchoice";
ROUTE369.fromNode = "PigdogMonkScript";
ROUTE369.toField = "whichChoice";
ROUTE369.toNode = "PigdogMonk";
children[26] = ROUTE369;

ROUTE ROUTE370 = createNode("ROUTE");
ROUTE370.fromField = "touchTime";
ROUTE370.fromNode = "LauncheeChoice";
ROUTE370.toField = "set_startTime";
ROUTE370.toNode = "HolyHandGrenadeSound";
children[27] = ROUTE370;

ROUTE ROUTE371 = createNode("ROUTE");
ROUTE371.fromField = "touchTime";
ROUTE371.fromNode = "LauncheeChoice";
ROUTE371.toField = "set_startTime";
ROUTE371.toNode = "CowSound";
children[28] = ROUTE371;

ROUTE ROUTE372 = createNode("ROUTE");
ROUTE372.fromField = "touchTime";
ROUTE372.fromNode = "LauncheeChoice";
ROUTE372.toField = "set_startTime";
ROUTE372.toNode = "HamsterSound";
children[29] = ROUTE372;

ROUTE ROUTE373 = createNode("ROUTE");
ROUTE373.fromField = "isActive";
ROUTE373.fromNode = "LauncheeChoice";
ROUTE373.toField = "set_boolean";
ROUTE373.toNode = "LauncheeScript";
children[30] = ROUTE373;

ROUTE ROUTE374 = createNode("ROUTE");
ROUTE374.fromField = "whichchoice";
ROUTE374.fromNode = "LauncheeScript";
ROUTE374.toField = "whichChoice";
ROUTE374.toNode = "projectile";
children[31] = ROUTE374;

ROUTE ROUTE375 = createNode("ROUTE");
ROUTE375.fromField = "whichchoice";
ROUTE375.fromNode = "LauncheeScript";
ROUTE375.toField = "whichChoice";
ROUTE375.toNode = "projectilename";
children[32] = ROUTE375;

ROUTE ROUTE376 = createNode("ROUTE");
ROUTE376.fromField = "isActive";
ROUTE376.fromNode = "weightselector";
ROUTE376.toField = "set_boolean";
ROUTE376.toNode = "WeightScript";
children[33] = ROUTE376;

ROUTE ROUTE377 = createNode("ROUTE");
ROUTE377.fromField = "whichchoice";
ROUTE377.fromNode = "WeightScript";
ROUTE377.toField = "whichChoice";
ROUTE377.toNode = "Weight";
children[34] = ROUTE377;

ROUTE ROUTE378 = createNode("ROUTE");
ROUTE378.fromField = "fraction_changed";
ROUTE378.fromNode = "clock";
ROUTE378.toField = "set_fraction";
ROUTE378.toNode = "flingerangles";
children[35] = ROUTE378;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromField = "value_changed";
ROUTE379.fromNode = "flingerangles";
ROUTE379.toField = "set_rotation";
ROUTE379.toNode = "flinger";
children[36] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromField = "fraction_changed";
ROUTE380.fromNode = "clock";
ROUTE380.toField = "set_fraction";
ROUTE380.toNode = "verticalweightpath";
children[37] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromField = "value_changed";
ROUTE381.fromNode = "verticalweightpath";
ROUTE381.toField = "set_translation";
ROUTE381.toNode = "verticalweight";
children[38] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromField = "fraction_changed";
ROUTE382.fromNode = "clock";
ROUTE382.toField = "set_fraction";
ROUTE382.toNode = "pinpath";
children[39] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromField = "value_changed";
ROUTE383.fromNode = "pinpath";
ROUTE383.toField = "set_translation";
ROUTE383.toNode = "Pin";
children[40] = ROUTE383;

}
