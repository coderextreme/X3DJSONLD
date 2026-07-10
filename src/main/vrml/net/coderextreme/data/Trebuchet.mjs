const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "Trebuchet.x3d");
scene.addMetaData("description", "Working model of a 14th century Trebuchet Catapult.");
scene.addMetaData("creator", "LT Joe Roth");
scene.addMetaData("created", "20 June 2001");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("version", "7.8");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d");
scene.addMetaData("reference", "http://trebuchet.com");
scene.addMetaData("reference", "http://members.home.net/dimona");
scene.addMetaData("subject", "trebuchet catapult Monty Python");
scene.addMetaData("reference", "Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under "Fair Use" clause of the DMCA");
scene.addMetaData("reference", "https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm");
scene.addMetaData("reference", "http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "Trebuchet.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg")]);
Background19.bottomUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg")]);
Background19.frontUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg")]);
Background19.groundAngle = new X3D.MFFloat([1.309,1.570796]);
Background19.groundColor = new X3D.MFColor([0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6]);
Background19.leftUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg")]);
Background19.rightUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg")]);
Background19.skyAngle = new X3D.MFFloat([1.309,1.57079]);
Background19.skyColor = new X3D.MFColor([0,0.2,0.7,0,0.5,1,1,1,1]);
Background19.topUrl = new X3D.MFString([new X3D.SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg")]);
browser.currentScene.children[1] = Background19;

let Sound20 = browser.currentScene.createNode("Sound");
Sound20.maxBack = 1000;
Sound20.maxFront = 1000;
let AudioClip21 = browser.currentScene.createNode("AudioClip");
AudioClip21.DEF = "HolyGrail";
AudioClip21.description = "HolyGrail";
AudioClip21.loop = True;
AudioClip21.url = new X3D.MFString([new X3D.SFString("holygral.mp3"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/holygral.mp3")]);
source = AudioClip21;

browser.currentScene.children[2] = Sound20;

let Shape22 = browser.currentScene.createNode("Shape");
let Box23 = browser.currentScene.createNode("Box");
Box23.size = new X3D.SFVec3f([10000,1,10000]);
geometry = Box23;

let Appearance24 = browser.currentScene.createNode("Appearance");
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("grass.jpg"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg")]);
texture = ImageTexture25;

appearance = Appearance24;

browser.currentScene.children[3] = Shape22;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform26.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
Transform26.translation = new X3D.SFVec3f([10.5,6.5,4.5]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "TextAppearance";
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new X3D.SFColor([1,0,0]);
Material29.emissiveColor = new X3D.SFColor([1,1,0]);
material = Material29;

appearance = Appearance28;

let Text30 = browser.currentScene.createNode("Text");
Text30.string = new X3D.MFString([new X3D.SFString("Click Sling to Select Projectile")]);
let FontStyle31 = browser.currentScene.createNode("FontStyle");
fontStyle = FontStyle31;

geometry = Text30;

Transform26YYY.child = new X3D.undefined();

Transform26ZZZ.child[0] = Shape27;

browser.currentScene.children[4] = Transform26;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform32.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
Transform32.translation = new X3D.SFVec3f([11,5.5,6]);
let Switch33 = browser.currentScene.createNode("Switch");
Switch33.DEF = "Weight";
Switch33.whichChoice = 0;
let Group34 = browser.currentScene.createNode("Group");
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
Appearance36.USE = "TextAppearance";
appearance = Appearance36;

let Text37 = browser.currentScene.createNode("Text");
Text37.string = new X3D.MFString([new X3D.SFString("Click Here to Change Counter Weight (50 lbs)")]);
geometry = Text37;

Group34YYY.children = new X3D.MFNode();

Group34ZZZ.children[0] = Shape35;

Switch33YYY.children = new X3D.MFNode();

Switch33ZZZ.children[0] = Group34;

let Group38 = browser.currentScene.createNode("Group");
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.USE = "TextAppearance";
appearance = Appearance40;

let Text41 = browser.currentScene.createNode("Text");
Text41.string = new X3D.MFString([new X3D.SFString("Click Here to Change Counter Weight (500 lbs)")]);
geometry = Text41;

Group38YYY.children = new X3D.MFNode();

Group38ZZZ.children[0] = Shape39;

Switch33ZZZ.children[1] = Group38;

let Group42 = browser.currentScene.createNode("Group");
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.USE = "TextAppearance";
appearance = Appearance44;

let Text45 = browser.currentScene.createNode("Text");
Text45.string = new X3D.MFString([new X3D.SFString("Click Here to Change Counter Weight (1000 lbs)")]);
geometry = Text45;

Group42YYY.children = new X3D.MFNode();

Group42ZZZ.children[0] = Shape43;

Switch33ZZZ.children[2] = Group42;

let Group46 = browser.currentScene.createNode("Group");
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "TextAppearance";
appearance = Appearance48;

let Text49 = browser.currentScene.createNode("Text");
Text49.string = new X3D.MFString([new X3D.SFString("Click Here to Change Counter Weight (10000 lbs)")]);
geometry = Text49;

Group46YYY.children = new X3D.MFNode();

Group46ZZZ.children[0] = Shape47;

Switch33ZZZ.children[3] = Group46;

Transform32YYY.children = new X3D.MFNode();

Transform32ZZZ.children[0] = Switch33;

let TouchSensor50 = browser.currentScene.createNode("TouchSensor");
TouchSensor50.DEF = "weightselector";
TouchSensor50.description = "weight selector";
Transform32ZZZ.children[1] = TouchSensor50;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new X3D.SFVec3f([8,0,0]);
let Shape52 = browser.currentScene.createNode("Shape");
let Box53 = browser.currentScene.createNode("Box");
Box53.size = new X3D.SFVec3f([20,1,1]);
geometry = Box53;

let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.transparency = 1;
material = Material55;

appearance = Appearance54;

Transform51YYY.child = new X3D.undefined();

Transform51ZZZ.child[0] = Shape52;

Transform32ZZZ.children[2] = Transform51;

browser.currentScene.children[5] = Transform32;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform56.translation = new X3D.SFVec3f([10,0.5,4.5]);
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.DEF = "launch";
Transform57.translation = new X3D.SFVec3f([0,2,5]);
let Billboard58 = browser.currentScene.createNode("Billboard");
let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material61;

appearance = Appearance60;

let Text62 = browser.currentScene.createNode("Text");
Text62.string = new X3D.MFString([new X3D.SFString("LAUNCH")]);
let FontStyle63 = browser.currentScene.createNode("FontStyle");
fontStyle = FontStyle63;

geometry = Text62;

Billboard58YYY.children = new X3D.MFNode();

Billboard58ZZZ.children[0] = Shape59;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new X3D.SFVec3f([2,0.3,0]);
let Shape65 = browser.currentScene.createNode("Shape");
let Box66 = browser.currentScene.createNode("Box");
Box66.size = new X3D.SFVec3f([5,1,1]);
geometry = Box66;

let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.transparency = 1;
material = Material68;

appearance = Appearance67;

Transform64YYY.child = new X3D.undefined();

Transform64ZZZ.child[0] = Shape65;

Billboard58ZZZ.children[1] = Transform64;

let Switch69 = browser.currentScene.createNode("Switch");
Switch69.DEF = "PigdogMonk";
Switch69.whichChoice = -1;
let Group70 = browser.currentScene.createNode("Group");
let Sound71 = browser.currentScene.createNode("Sound");
Sound71.maxBack = 1000;
Sound71.maxFront = 1000;
let AudioClip72 = browser.currentScene.createNode("AudioClip");
AudioClip72.DEF = "PigDogSound";
AudioClip72.description = "PigDogSound";
AudioClip72.url = new X3D.MFString([new X3D.SFString("pigdog.wav"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/pigdog.wav")]);
source = AudioClip72;

Group70YYY.children = new X3D.MFNode();

Group70ZZZ.children[0] = Sound71;

Switch69YYY.children = new X3D.MFNode();

Switch69ZZZ.children[0] = Group70;

let Group73 = browser.currentScene.createNode("Group");
let Sound74 = browser.currentScene.createNode("Sound");
Sound74.maxBack = 1000;
Sound74.maxFront = 1000;
let AudioClip75 = browser.currentScene.createNode("AudioClip");
AudioClip75.DEF = "MonkSound";
AudioClip75.description = "MonkSound";
AudioClip75.url = new X3D.MFString([new X3D.SFString("monks.wav"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/monks.wav")]);
source = AudioClip75;

Group73YYY.children = new X3D.MFNode();

Group73ZZZ.children[0] = Sound74;

Switch69ZZZ.children[1] = Group73;

Billboard58ZZZ.children[2] = Switch69;

Transform57YYY.children = new X3D.MFNode();

Transform57ZZZ.children[0] = Billboard58;

let TouchSensor76 = browser.currentScene.createNode("TouchSensor");
TouchSensor76.DEF = "Launch";
TouchSensor76.description = "launch!";
Transform57ZZZ.children[1] = TouchSensor76;

Transform56YYY.children = new X3D.MFNode();

Transform56ZZZ.children[0] = Transform57;

let Transform77 = browser.currentScene.createNode("Transform");
let Switch78 = browser.currentScene.createNode("Switch");
Switch78.DEF = "projectilename";
Switch78.whichChoice = 0;
let Group79 = browser.currentScene.createNode("Group");
let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
Appearance81.USE = "TextAppearance";
appearance = Appearance81;

let Text82 = browser.currentScene.createNode("Text");
Text82.string = new X3D.MFString([new X3D.SFString("Bowling Ball (10 lbs)")]);
let FontStyle83 = browser.currentScene.createNode("FontStyle");
FontStyle83.size = 0.5;
fontStyle = FontStyle83;

geometry = Text82;

Group79YYY.children = new X3D.MFNode();

Group79ZZZ.children[0] = Shape80;

let Sound84 = browser.currentScene.createNode("Sound");
Sound84.maxBack = 1000;
Sound84.maxFront = 1000;
Sound84.priority = 1;
let AudioClip85 = browser.currentScene.createNode("AudioClip");
AudioClip85.DEF = "HolyHandGrenadeSound";
AudioClip85.description = "HolyHandGrenadeSound";
AudioClip85.url = new X3D.MFString([new X3D.SFString("grenade.wav"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/grenade.wav")]);
source = AudioClip85;

Group79ZZZ.children[1] = Sound84;

Switch78YYY.children = new X3D.MFNode();

Switch78ZZZ.children[0] = Group79;

let Group86 = browser.currentScene.createNode("Group");
let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
Appearance88.USE = "TextAppearance";
appearance = Appearance88;

let Text89 = browser.currentScene.createNode("Text");
Text89.string = new X3D.MFString([new X3D.SFString("Cow (1000 lbs)")]);
let FontStyle90 = browser.currentScene.createNode("FontStyle");
FontStyle90.size = 0.5;
fontStyle = FontStyle90;

geometry = Text89;

Group86YYY.children = new X3D.MFNode();

Group86ZZZ.children[0] = Shape87;

let Sound91 = browser.currentScene.createNode("Sound");
Sound91.maxBack = 1000;
Sound91.maxFront = 1000;
let AudioClip92 = browser.currentScene.createNode("AudioClip");
AudioClip92.DEF = "CowSound";
AudioClip92.description = "CowSound";
AudioClip92.url = new X3D.MFString([new X3D.SFString("lavache.wav"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/lavache.wav")]);
source = AudioClip92;

Group86ZZZ.children[1] = Sound91;

Switch78ZZZ.children[1] = Group86;

let Group93 = browser.currentScene.createNode("Group");
let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
Appearance95.USE = "TextAppearance";
appearance = Appearance95;

let Text96 = browser.currentScene.createNode("Text");
Text96.string = new X3D.MFString([new X3D.SFString("Chicken (5 lbs)")]);
let FontStyle97 = browser.currentScene.createNode("FontStyle");
FontStyle97.size = 0.5;
fontStyle = FontStyle97;

geometry = Text96;

Group93YYY.children = new X3D.MFNode();

Group93ZZZ.children[0] = Shape94;

let Sound98 = browser.currentScene.createNode("Sound");
Sound98.maxBack = 1000;
Sound98.maxFront = 1000;
Sound98.priority = 1;
let AudioClip99 = browser.currentScene.createNode("AudioClip");
AudioClip99.DEF = "HamsterSound";
AudioClip99.description = "HamsterSound";
AudioClip99.url = new X3D.MFString([new X3D.SFString("hamster.wav"), new X3D.SFString("http://www.nps.navy.mil/code32/vrml/hamster.wav")]);
source = AudioClip99;

Group93ZZZ.children[1] = Sound98;

Switch78ZZZ.children[2] = Group93;

Transform77YYY.children = new X3D.MFNode();

Transform77ZZZ.children[0] = Switch78;

Transform56ZZZ.children[1] = Transform77;

browser.currentScene.children[6] = Transform56;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.rotation = new X3D.SFRotation([0,1,0,-1.67]);
let Transform101 = browser.currentScene.createNode("Transform");
Transform101.DEF = "aft";
Transform101.translation = new X3D.SFVec3f([5,5,15]);
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new X3D.SFVec3f([-2.5,-4.5,-2]);
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.USE = "launch";
Transform102YYY.children = new X3D.MFNode();

Transform102ZZZ.children[0] = Transform103;

Transform101YYY.children = new X3D.MFNode();

Transform101ZZZ.children[0] = Transform102;

Transform100YYY.children = new X3D.MFNode();

Transform100ZZZ.children[0] = Transform101;

browser.currentScene.children[7] = Transform100;

let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new X3D.SFVec3f([0,3,0]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.DEF = "plank";
let Box106 = browser.currentScene.createNode("Box");
Box106.size = new X3D.SFVec3f([25,1,1]);
geometry = Box106;

let Appearance107 = browser.currentScene.createNode("Appearance");
Appearance107.DEF = "wood";
let ImageTexture108 = browser.currentScene.createNode("ImageTexture");
ImageTexture108.DEF = "woodTexture";
ImageTexture108.url = new X3D.MFString([new X3D.SFString("wood.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif")]);
texture = ImageTexture108;

appearance = Appearance107;

Transform104YYY.child = new X3D.undefined();

Transform104ZZZ.child[0] = Shape105;

let Transform109 = browser.currentScene.createNode("Transform");
Transform109.DEF = "angledsupport";
Transform109.rotation = new X3D.SFRotation([0,0,1,1]);
Transform109.translation = new X3D.SFVec3f([-5,10,0]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "plank";
Transform109YYY.child = new X3D.undefined();

Transform109ZZZ.child[0] = Shape110;

Transform104ZZZ.children[1] = Transform109;

let Transform111 = browser.currentScene.createNode("Transform");
Transform111.DEF = "angledsupport2";
Transform111.rotation = new X3D.SFRotation([0,0,1,-1]);
Transform111.translation = new X3D.SFVec3f([5,10,0]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "plank";
Transform111YYY.child = new X3D.undefined();

Transform111ZZZ.child[0] = Shape112;

Transform104ZZZ.children[2] = Transform111;

let Transform113 = browser.currentScene.createNode("Transform");
Transform113.DEF = "verticalsupport";
Transform113.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform113.scale = new X3D.SFVec3f([0.9,1,1]);
Transform113.translation = new X3D.SFVec3f([0,11,0]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "plank";
Transform113YYY.child = new X3D.undefined();

Transform113ZZZ.child[0] = Shape114;

//Main Verticle Support
Transform104ZZZ.children[3] = Transform113;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.DEF = "horizontalsupport";
Transform115.scale = new X3D.SFVec3f([0.4,1,1]);
Transform115.translation = new X3D.SFVec3f([0,10,0]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "plank";
Transform115YYY.child = new X3D.undefined();

Transform115ZZZ.child[0] = Shape116;

Transform104ZZZ.children[4] = Transform115;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform117.scale = new X3D.SFVec3f([0.6,1,1]);
Transform117.translation = new X3D.SFVec3f([0,5,10]);
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.rotation = new X3D.SFRotation([0,1,0,0.4]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "plank";
Transform118YYY.child = new X3D.undefined();

Transform118ZZZ.child[0] = Shape119;

Transform117YYY.children = new X3D.MFNode();

Transform117ZZZ.children[0] = Transform118;

Transform104ZZZ.children[5] = Transform117;

let Transform120 = browser.currentScene.createNode("Transform");
Transform120.DEF = "panel";
Transform120.translation = new X3D.SFVec3f([0,18.2,-0.3]);
let Shape121 = browser.currentScene.createNode("Shape");
let Box122 = browser.currentScene.createNode("Box");
Box122.size = new X3D.SFVec3f([5,5,0.5]);
geometry = Box122;

let Appearance123 = browser.currentScene.createNode("Appearance");
Appearance123.USE = "wood";
appearance = Appearance123;

Transform120YYY.child = new X3D.undefined();

Transform120ZZZ.child[0] = Shape121;

Transform104ZZZ.children[6] = Transform120;

let Transform124 = browser.currentScene.createNode("Transform");
Transform124.rotation = new X3D.SFRotation([1,0,0,-1.57]);
Transform124.translation = new X3D.SFVec3f([0,0.6,2.5]);
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape126 = browser.currentScene.createNode("Shape");
let Extrusion127 = browser.currentScene.createNode("Extrusion");
Extrusion127.beginCap = False;
Extrusion127.crossSection = new X3D.MFVec2f([1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38]);
Extrusion127.endCap = False;
Extrusion127.solid = False;
Extrusion127.spine = new X3D.MFVec3f([0,6,0,0,-11,0]);
geometry = Extrusion127;

let Appearance128 = browser.currentScene.createNode("Appearance");
Appearance128.USE = "wood";
appearance = Appearance128;

Transform125YYY.child = new X3D.undefined();

Transform125ZZZ.child[0] = Shape126;

Transform124YYY.children = new X3D.MFNode();

Transform124ZZZ.children[0] = Transform125;

Transform104ZZZ.children[7] = Transform124;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.DEF = "flinger";
Transform129.center = new X3D.SFVec3f([7,0,0]);
Transform129.rotation = new X3D.SFRotation([0,0,1,0.82]);
Transform129.scale = new X3D.SFVec3f([0.9,1,1]);
Transform129.translation = new X3D.SFVec3f([-7,18,2.5]);
let Transform130 = browser.currentScene.createNode("Transform");
let Shape131 = browser.currentScene.createNode("Shape");
let Box132 = browser.currentScene.createNode("Box");
Box132.size = new X3D.SFVec3f([35,1,1]);
geometry = Box132;

let Appearance133 = browser.currentScene.createNode("Appearance");
Appearance133.USE = "wood";
appearance = Appearance133;

Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new X3D.SFVec3f([7,0,0]);
let Shape135 = browser.currentScene.createNode("Shape");
let Box136 = browser.currentScene.createNode("Box");
Box136.size = new X3D.SFVec3f([8,2,2]);
geometry = Box136;

let Appearance137 = browser.currentScene.createNode("Appearance");
Appearance137.USE = "wood";
appearance = Appearance137;

Transform134YYY.child = new X3D.undefined();

Transform134ZZZ.child[0] = Shape135;

Transform130ZZZ.children[1] = Transform134;

Transform129YYY.children = new X3D.MFNode();

Transform129ZZZ.children[0] = Transform130;

let Transform138 = browser.currentScene.createNode("Transform");
Transform138.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform138.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform138.translation = new X3D.SFVec3f([-15,-1,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.DEF = "Torus";
let Appearance140 = browser.currentScene.createNode("Appearance");
let Material141 = browser.currentScene.createNode("Material");
Material141.specularColor = new X3D.SFColor([1,1,1]);
material = Material141;

appearance = Appearance140;

let Extrusion142 = browser.currentScene.createNode("Extrusion");
Extrusion142.beginCap = False;
Extrusion142.convex = False;
Extrusion142.creaseAngle = 1.57;
Extrusion142.crossSection = new X3D.MFVec2f([0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0]);
Extrusion142.endCap = False;
Extrusion142.spine = new X3D.MFVec3f([2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0]);
geometry = Extrusion142;

Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new X3D.SFVec3f([1,0,2]);
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
Appearance145.DEF = "rope";
let ImageTexture146 = browser.currentScene.createNode("ImageTexture");
ImageTexture146.USE = "woodTexture";
texture = ImageTexture146;

appearance = Appearance145;

let Sphere147 = browser.currentScene.createNode("Sphere");
Sphere147.radius = 1.5;
geometry = Sphere147;

Transform143YYY.child = new X3D.undefined();

Transform143ZZZ.child[0] = Shape144;

//knott
Transform138ZZZ.children[1] = Transform143;

Transform129ZZZ.children[1] = Transform138;

//The Unicorn
let Transform148 = browser.currentScene.createNode("Transform");
Transform148.rotation = new X3D.SFRotation([0,0,1,1.2]);
Transform148.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform148.translation = new X3D.SFVec3f([-18.3,0.3,0]);
let Shape149 = browser.currentScene.createNode("Shape");
let Cylinder150 = browser.currentScene.createNode("Cylinder");
Cylinder150.height = 10;
geometry = Cylinder150;

let Appearance151 = browser.currentScene.createNode("Appearance");
let Material152 = browser.currentScene.createNode("Material");
Material152.specularColor = new X3D.SFColor([1,1,1]);
material = Material152;

appearance = Appearance151;

Transform148YYY.child = new X3D.undefined();

Transform148ZZZ.child[0] = Shape149;

let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new X3D.SFVec3f([0,-2.5,0]);
//The Unicorn
let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "Torus";
Transform153YYY.child = new X3D.undefined();

Transform153ZZZ.child[0] = Shape154;

let Transform155 = browser.currentScene.createNode("Transform");
Transform155.translation = new X3D.SFVec3f([-2,0,0]);
let Shape156 = browser.currentScene.createNode("Shape");
let Sphere157 = browser.currentScene.createNode("Sphere");
Sphere157.radius = 1.5;
geometry = Sphere157;

let Appearance158 = browser.currentScene.createNode("Appearance");
Appearance158.USE = "rope";
appearance = Appearance158;

Transform155YYY.child = new X3D.undefined();

Transform155ZZZ.child[0] = Shape156;

//Knott
Transform153ZZZ.children[1] = Transform155;

Transform148ZZZ.children[1] = Transform153;

let Transform159 = browser.currentScene.createNode("Transform");
Transform159.rotation = new X3D.SFRotation([0,0,1,1.2]);
Transform159.translation = new X3D.SFVec3f([15,55,-11]);
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.scale = new X3D.SFVec3f([5,5,5]);
let Shape161 = browser.currentScene.createNode("Shape");
let Appearance162 = browser.currentScene.createNode("Appearance");
Appearance162.USE = "rope";
appearance = Appearance162;

let Extrusion163 = browser.currentScene.createNode("Extrusion");
Extrusion163.beginCap = False;
Extrusion163.creaseAngle = 0.76;
Extrusion163.crossSection = new X3D.MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion163.endCap = False;
Extrusion163.solid = False;
Extrusion163.spine = new X3D.MFVec3f([-15.2,1.4,2.2,-12,-0.8,2.2]);
geometry = Extrusion163;

Transform160YYY.child = new X3D.undefined();

Transform160ZZZ.child[0] = Shape161;

Transform159YYY.children = new X3D.MFNode();

Transform159ZZZ.children[0] = Transform160;

Transform148ZZZ.children[2] = Transform159;

Transform129ZZZ.children[2] = Transform148;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.rotation = new X3D.SFRotation([1,0,0,-1.7]);
Transform164.translation = new X3D.SFVec3f([-17,-4.5,0]);
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
//Knot
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "Torus";
Transform165YYY.child = new X3D.undefined();

Transform165ZZZ.child[0] = Shape166;

let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new X3D.SFVec3f([-1,0,1.7]);
let Shape168 = browser.currentScene.createNode("Shape");
let Sphere169 = browser.currentScene.createNode("Sphere");
Sphere169.radius = 1.5;
geometry = Sphere169;

let Appearance170 = browser.currentScene.createNode("Appearance");
Appearance170.USE = "rope";
appearance = Appearance170;

Transform167YYY.child = new X3D.undefined();

Transform167ZZZ.child[0] = Shape168;

Transform165ZZZ.children[1] = Transform167;

Transform164YYY.children = new X3D.MFNode();

Transform164ZZZ.children[0] = Transform165;

Transform129ZZZ.children[3] = Transform164;

let Transform171 = browser.currentScene.createNode("Transform");
Transform171.DEF = "RnS";
let Transform172 = browser.currentScene.createNode("Transform");
Transform172.DEF = "ropes";
let Transform173 = browser.currentScene.createNode("Transform");
Transform173.rotation = new X3D.SFRotation([0,0,1,-0.82]);
Transform173.translation = new X3D.SFVec3f([7,-26,-2.5]);
let Shape174 = browser.currentScene.createNode("Shape");
let Appearance175 = browser.currentScene.createNode("Appearance");
Appearance175.USE = "rope";
appearance = Appearance175;

let Extrusion176 = browser.currentScene.createNode("Extrusion");
Extrusion176.beginCap = False;
Extrusion176.creaseAngle = 0.76;
Extrusion176.crossSection = new X3D.MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion176.endCap = False;
Extrusion176.solid = False;
Extrusion176.spine = new X3D.MFVec3f([-33,0.9,2.5,-18.5,1.9,2.55]);
geometry = Extrusion176;

Transform173YYY.child = new X3D.undefined();

Transform173ZZZ.child[0] = Shape174;

let Shape177 = browser.currentScene.createNode("Shape");
let Appearance178 = browser.currentScene.createNode("Appearance");
Appearance178.USE = "rope";
appearance = Appearance178;

let Extrusion179 = browser.currentScene.createNode("Extrusion");
Extrusion179.beginCap = False;
Extrusion179.creaseAngle = 0.76;
Extrusion179.crossSection = new X3D.MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]);
Extrusion179.endCap = False;
Extrusion179.solid = False;
Extrusion179.spine = new X3D.MFVec3f([-35.7,-0.8,2.5,-18.8,-0.8,2.55]);
geometry = Extrusion179;

Transform173ZZZ.child[1] = Shape177;

Transform172YYY.children = new X3D.MFNode();

Transform172ZZZ.children[0] = Transform173;

Transform171YYY.children = new X3D.MFNode();

Transform171ZZZ.children[0] = Transform172;

let Transform180 = browser.currentScene.createNode("Transform");
Transform180.DEF = "sling";
Transform180.rotation = new X3D.SFRotation([0,0,1,-0.82]);
Transform180.translation = new X3D.SFVec3f([-4,-15.3,0]);
let Transform181 = browser.currentScene.createNode("Transform");
let Transform182 = browser.currentScene.createNode("Transform");
Transform182.rotation = new X3D.SFRotation([0,1,0,-1.57]);
Transform182.scale = new X3D.SFVec3f([1,1.3,1]);
Transform182.translation = new X3D.SFVec3f([0.5,0,-1]);
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.scale = new X3D.SFVec3f([0.3,0.3,0.3]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.DEF = "halfsling";
let Appearance186 = browser.currentScene.createNode("Appearance");
Appearance186.DEF = "clear";
let Material187 = browser.currentScene.createNode("Material");
Material187.transparency = 0.5;
material = Material187;

appearance = Appearance186;

let Extrusion188 = browser.currentScene.createNode("Extrusion");
Extrusion188.crossSection = new X3D.MFVec2f([0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0]);
Extrusion188.spine = new X3D.MFVec3f([0,0,0,0.1,0,0]);
geometry = Extrusion188;

Transform184YYY.child = new X3D.undefined();

Transform184ZZZ.child[0] = Shape185;

let Transform189 = browser.currentScene.createNode("Transform");
Transform189.scale = new X3D.SFVec3f([0.3,0.3,0.3]);
Transform189.translation = new X3D.SFVec3f([0,-3.5,11.5]);
let Shape190 = browser.currentScene.createNode("Shape");
Shape190.USE = "Torus";
Transform189YYY.child = new X3D.undefined();

Transform189ZZZ.child[0] = Shape190;

let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new X3D.SFVec3f([0,0,2]);
let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
Appearance193.USE = "rope";
appearance = Appearance193;

let Sphere194 = browser.currentScene.createNode("Sphere");
Sphere194.radius = 1.5;
geometry = Sphere194;

Transform191YYY.child = new X3D.undefined();

Transform191ZZZ.child[0] = Shape192;

Transform189ZZZ.children[1] = Transform191;

Transform184ZZZ.children[1] = Transform189;

Transform183YYY.children = new X3D.MFNode();

Transform183ZZZ.children[0] = Transform184;

let Transform195 = browser.currentScene.createNode("Transform");
Transform195.scale = new X3D.SFVec3f([0.3,0.3,0.3]);
Transform195.translation = new X3D.SFVec3f([2,0,0]);
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "halfsling";
Transform195YYY.child = new X3D.undefined();

Transform195ZZZ.child[0] = Shape196;

let Transform197 = browser.currentScene.createNode("Transform");
Transform197.scale = new X3D.SFVec3f([0.3,0.3,0.3]);
Transform197.translation = new X3D.SFVec3f([0,-3.5,11.3]);
let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "Torus";
Transform197YYY.child = new X3D.undefined();

Transform197ZZZ.child[0] = Shape198;

let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new X3D.SFVec3f([0,0,2]);
let Shape200 = browser.currentScene.createNode("Shape");
let Appearance201 = browser.currentScene.createNode("Appearance");
Appearance201.USE = "rope";
appearance = Appearance201;

let Sphere202 = browser.currentScene.createNode("Sphere");
Sphere202.radius = 1.5;
geometry = Sphere202;

Transform199YYY.child = new X3D.undefined();

Transform199ZZZ.child[0] = Shape200;

Transform197ZZZ.children[1] = Transform199;

Transform195ZZZ.children[1] = Transform197;

Transform183ZZZ.children[1] = Transform195;

let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new X3D.SFVec3f([1,-1,0]);
let Shape204 = browser.currentScene.createNode("Shape");
let Extrusion205 = browser.currentScene.createNode("Extrusion");
Extrusion205.beginCap = False;
Extrusion205.creaseAngle = 0.785;
Extrusion205.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0]);
Extrusion205.endCap = False;
Extrusion205.solid = False;
Extrusion205.spine = new X3D.MFVec3f([0,-1,0,0,1,0]);
geometry = Extrusion205;

let Appearance206 = browser.currentScene.createNode("Appearance");
Appearance206.USE = "clear";
appearance = Appearance206;

Transform203YYY.child = new X3D.undefined();

Transform203ZZZ.child[0] = Shape204;

Transform183ZZZ.children[2] = Transform203;

Transform182YYY.children = new X3D.MFNode();

Transform182ZZZ.children[0] = Transform183;

let TouchSensor207 = browser.currentScene.createNode("TouchSensor");
TouchSensor207.DEF = "LauncheeChoice";
TouchSensor207.description = "launcher choice";
Transform182ZZZ.children[1] = TouchSensor207;

Transform181YYY.children = new X3D.MFNode();

Transform181ZZZ.children[0] = Transform182;

let Transform208 = browser.currentScene.createNode("Transform");
Transform208.DEF = "projectiletransform";
Transform208.scale = new X3D.SFVec3f([0.01,0.01,0.01]);
let Switch209 = browser.currentScene.createNode("Switch");
Switch209.DEF = "projectile";
Switch209.whichChoice = 0;
let Group210 = browser.currentScene.createNode("Group");
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new X3D.SFVec3f([0,0.7,0]);
let Shape212 = browser.currentScene.createNode("Shape");
let Sphere213 = browser.currentScene.createNode("Sphere");
Sphere213.radius = 0.7;
geometry = Sphere213;

let Appearance214 = browser.currentScene.createNode("Appearance");
Appearance214.DEF = "black";
let Material215 = browser.currentScene.createNode("Material");
Material215.diffuseColor = new X3D.SFColor([0,0,0]);
Material215.specularColor = new X3D.SFColor([1,1,1]);
material = Material215;

appearance = Appearance214;

Transform211YYY.child = new X3D.undefined();

Transform211ZZZ.child[0] = Shape212;

Group210YYY.children = new X3D.MFNode();

Group210ZZZ.children[0] = Transform211;

Switch209YYY.children = new X3D.MFNode();

Switch209ZZZ.children[0] = Group210;

let Group216 = browser.currentScene.createNode("Group");
let Transform217 = browser.currentScene.createNode("Transform");
let Inline218 = browser.currentScene.createNode("Inline");
Inline218.url = new X3D.MFString([new X3D.SFString("cow.wrl"), new X3D.SFString("http://www.uoguelph.ca/~dchiu/cow.wrl")]);
Transform217YYY.children = new X3D.MFNode();

Transform217ZZZ.children[0] = Inline218;

Group216YYY.children = new X3D.MFNode();

Group216ZZZ.children[0] = Transform217;

Switch209ZZZ.children[1] = Group216;

let Group219 = browser.currentScene.createNode("Group");
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform220.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform220.translation = new X3D.SFVec3f([0,0.7,0]);
let Inline221 = browser.currentScene.createNode("Inline");
Inline221.url = new X3D.MFString([new X3D.SFString("vrml_ginger.wrl"), new X3D.SFString("http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl")]);
Transform220YYY.children = new X3D.MFNode();

Transform220ZZZ.children[0] = Inline221;

Group219YYY.children = new X3D.MFNode();

Group219ZZZ.children[0] = Transform220;

Switch209ZZZ.children[2] = Group219;

Transform208YYY.children = new X3D.MFNode();

Transform208ZZZ.children[0] = Switch209;

Transform181ZZZ.children[1] = Transform208;

Transform180YYY.children = new X3D.MFNode();

Transform180ZZZ.children[0] = Transform181;

Transform171ZZZ.children[1] = Transform180;

Transform129ZZZ.children[4] = Transform171;

Transform104ZZZ.children[8] = Transform129;

let Transform222 = browser.currentScene.createNode("Transform");
Transform222.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform222.translation = new X3D.SFVec3f([0,18,2.5]);
let Shape223 = browser.currentScene.createNode("Shape");
let Cylinder224 = browser.currentScene.createNode("Cylinder");
Cylinder224.height = 8;
Cylinder224.radius = 0.4;
geometry = Cylinder224;

let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.diffuseColor = new X3D.SFColor([0,0,0]);
Material226.specularColor = new X3D.SFColor([1,1,1]);
material = Material226;

appearance = Appearance225;

Transform222YYY.child = new X3D.undefined();

Transform222ZZZ.child[0] = Shape223;

//Top Pivot
Transform104ZZZ.children[9] = Transform222;

let Transform227 = browser.currentScene.createNode("Transform");
Transform227.DEF = "verticalweight";
let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new X3D.SFVec3f([4,18,1.8]);
let Shape229 = browser.currentScene.createNode("Shape");
let Box230 = browser.currentScene.createNode("Box");
Box230.size = new X3D.SFVec3f([1,10,0.5]);
geometry = Box230;

let Appearance231 = browser.currentScene.createNode("Appearance");
Appearance231.USE = "wood";
appearance = Appearance231;

Transform228YYY.child = new X3D.undefined();

Transform228ZZZ.child[0] = Shape229;

Transform227YYY.children = new X3D.MFNode();

Transform227ZZZ.children[0] = Transform228;

let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new X3D.SFVec3f([4,18,3.2]);
let Shape233 = browser.currentScene.createNode("Shape");
let Box234 = browser.currentScene.createNode("Box");
Box234.size = new X3D.SFVec3f([1,10,0.5]);
geometry = Box234;

let Appearance235 = browser.currentScene.createNode("Appearance");
Appearance235.USE = "wood";
appearance = Appearance235;

Transform232YYY.child = new X3D.undefined();

Transform232ZZZ.child[0] = Shape233;

Transform227ZZZ.children[1] = Transform232;

let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new X3D.SFVec3f([4,14,2.5]);
//CounterWeight
let Shape237 = browser.currentScene.createNode("Shape");
let Cylinder238 = browser.currentScene.createNode("Cylinder");
Cylinder238.height = 4;
Cylinder238.radius = 1.5;
geometry = Cylinder238;

let Appearance239 = browser.currentScene.createNode("Appearance");
let Material240 = browser.currentScene.createNode("Material");
Material240.diffuseColor = new X3D.SFColor([0,0,0]);
Material240.specularColor = new X3D.SFColor([1,1,1]);
material = Material240;

appearance = Appearance239;

Transform236YYY.child = new X3D.undefined();

Transform236ZZZ.child[0] = Shape237;

Transform227ZZZ.children[2] = Transform236;

let Transform241 = browser.currentScene.createNode("Transform");
Transform241.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform241.translation = new X3D.SFVec3f([4,22,2.5]);
let Shape242 = browser.currentScene.createNode("Shape");
let Cylinder243 = browser.currentScene.createNode("Cylinder");
Cylinder243.height = 2.5;
Cylinder243.radius = 0.3;
geometry = Cylinder243;

let Appearance244 = browser.currentScene.createNode("Appearance");
let Material245 = browser.currentScene.createNode("Material");
Material245.diffuseColor = new X3D.SFColor([0,0,0]);
Material245.specularColor = new X3D.SFColor([1,1,1]);
material = Material245;

appearance = Appearance244;

Transform241YYY.child = new X3D.undefined();

Transform241ZZZ.child[0] = Shape242;

Transform227ZZZ.children[3] = Transform241;

Transform104ZZZ.children[10] = Transform227;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform246.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform246.translation = new X3D.SFVec3f([-11.5,-1,2]);
let Transform247 = browser.currentScene.createNode("Transform");
Transform247.DEF = "screw";
Transform247.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "Torus";
Transform247YYY.child = new X3D.undefined();

Transform247ZZZ.child[0] = Shape248;

let Transform249 = browser.currentScene.createNode("Transform");
Transform249.rotation = new X3D.SFRotation([1,0,0,-1.57]);
Transform249.translation = new X3D.SFVec3f([0,0,7]);
let Shape250 = browser.currentScene.createNode("Shape");
let Cylinder251 = browser.currentScene.createNode("Cylinder");
Cylinder251.height = 10;
Cylinder251.radius = 0.7;
geometry = Cylinder251;

let Appearance252 = browser.currentScene.createNode("Appearance");
let Material253 = browser.currentScene.createNode("Material");
Material253.specularColor = new X3D.SFColor([1,1,1]);
material = Material253;

appearance = Appearance252;

Transform249YYY.child = new X3D.undefined();

Transform249ZZZ.child[0] = Shape250;

Transform247ZZZ.children[1] = Transform249;

Transform246YYY.children = new X3D.MFNode();

Transform246ZZZ.children[0] = Transform247;

let Transform254 = browser.currentScene.createNode("Transform");
Transform254.translation = new X3D.SFVec3f([0,0,7]);
let Transform255 = browser.currentScene.createNode("Transform");
Transform255.USE = "screw";
Transform254YYY.children = new X3D.MFNode();

Transform254ZZZ.children[0] = Transform255;

Transform246ZZZ.children[1] = Transform254;

//Release Pin
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.DEF = "Pin";
Transform256.rotation = new X3D.SFRotation([1,0,0,-1.57]);
Transform256.translation = new X3D.SFVec3f([0,0,-3]);
let Transform257 = browser.currentScene.createNode("Transform");
Transform257.USE = "screw";
Transform256YYY.children = new X3D.MFNode();

Transform256ZZZ.children[0] = Transform257;

Transform246ZZZ.children[2] = Transform256;

Transform104ZZZ.children[11] = Transform246;

let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new X3D.SFVec3f([0,0,5]);
let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "plank";
Transform258YYY.child = new X3D.undefined();

Transform258ZZZ.child[0] = Shape259;

let Transform260 = browser.currentScene.createNode("Transform");
Transform260.USE = "angledsupport";
Transform258ZZZ.children[1] = Transform260;

let Transform261 = browser.currentScene.createNode("Transform");
Transform261.USE = "angledsupport2";
Transform258ZZZ.children[2] = Transform261;

let Transform262 = browser.currentScene.createNode("Transform");
Transform262.USE = "verticalsupport";
Transform258ZZZ.children[3] = Transform262;

let Transform263 = browser.currentScene.createNode("Transform");
Transform263.USE = "horizontalsupport";
Transform258ZZZ.children[4] = Transform263;

let Transform264 = browser.currentScene.createNode("Transform");
Transform264.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform264.scale = new X3D.SFVec3f([0.6,1,1]);
Transform264.translation = new X3D.SFVec3f([0,-11,-2.5]);
let Transform265 = browser.currentScene.createNode("Transform");
Transform265.USE = "horizontalsupport";
Transform264YYY.children = new X3D.MFNode();

Transform264ZZZ.children[0] = Transform265;

Transform258ZZZ.children[5] = Transform264;

let Transform266 = browser.currentScene.createNode("Transform");
Transform266.rotation = new X3D.SFRotation([0,0,1,-1.57]);
Transform266.scale = new X3D.SFVec3f([0.6,1,1]);
Transform266.translation = new X3D.SFVec3f([0,5,-10]);
let Transform267 = browser.currentScene.createNode("Transform");
Transform267.rotation = new X3D.SFRotation([0,1,0,0.4]);
let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "plank";
Transform267YYY.child = new X3D.undefined();

Transform267ZZZ.child[0] = Shape268;

Transform266YYY.children = new X3D.MFNode();

Transform266ZZZ.children[0] = Transform267;

Transform258ZZZ.children[6] = Transform266;

let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new X3D.SFVec3f([0,0,0.6]);
let Transform270 = browser.currentScene.createNode("Transform");
Transform270.USE = "panel";
Transform269YYY.children = new X3D.MFNode();

Transform269ZZZ.children[0] = Transform270;

Transform258ZZZ.children[7] = Transform269;

Transform104ZZZ.children[12] = Transform258;

let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new X3D.SFVec3f([10,-1,2.5]);
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.DEF = "Axle";
let Box273 = browser.currentScene.createNode("Box");
Box273.size = new X3D.SFVec3f([1,1,8]);
geometry = Box273;

let Appearance274 = browser.currentScene.createNode("Appearance");
Appearance274.USE = "wood";
appearance = Appearance274;

Transform271YYY.child = new X3D.undefined();

Transform271ZZZ.child[0] = Shape272;

let Transform275 = browser.currentScene.createNode("Transform");
Transform275.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform275.translation = new X3D.SFVec3f([0,0,4.5]);
let Shape276 = browser.currentScene.createNode("Shape");
Shape276.DEF = "wheel";
let Cylinder277 = browser.currentScene.createNode("Cylinder");
Cylinder277.radius = 2;
geometry = Cylinder277;

let Appearance278 = browser.currentScene.createNode("Appearance");
Appearance278.USE = "wood";
appearance = Appearance278;

Transform275YYY.child = new X3D.undefined();

Transform275ZZZ.child[0] = Shape276;

let Shape279 = browser.currentScene.createNode("Shape");
Shape279.DEF = "tracks";
let Sphere280 = browser.currentScene.createNode("Sphere");
Sphere280.radius = 1.5;
geometry = Sphere280;

let Appearance281 = browser.currentScene.createNode("Appearance");
Appearance281.USE = "black";
appearance = Appearance281;

Transform275ZZZ.child[1] = Shape279;

let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new X3D.SFVec3f([0,0.55,0]);
let Shape283 = browser.currentScene.createNode("Shape");
Shape283.DEF = "hub";
let Sphere284 = browser.currentScene.createNode("Sphere");
Sphere284.radius = 1.5;
geometry = Sphere284;

let Appearance285 = browser.currentScene.createNode("Appearance");
Appearance285.USE = "black";
appearance = Appearance285;

Transform282YYY.child = new X3D.undefined();

Transform282ZZZ.child[0] = Shape283;

Transform275ZZZ.children[2] = Transform282;

Transform271ZZZ.children[1] = Transform275;

let Transform286 = browser.currentScene.createNode("Transform");
Transform286.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform286.translation = new X3D.SFVec3f([0,0,-4.5]);
let Shape287 = browser.currentScene.createNode("Shape");
Shape287.USE = "wheel";
Transform286YYY.child = new X3D.undefined();

Transform286ZZZ.child[0] = Shape287;

let Shape288 = browser.currentScene.createNode("Shape");
Shape288.USE = "tracks";
Transform286ZZZ.child[1] = Shape288;

let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new X3D.SFVec3f([0,-0.55,0]);
let Shape290 = browser.currentScene.createNode("Shape");
Shape290.USE = "hub";
Transform289YYY.child = new X3D.undefined();

Transform289ZZZ.child[0] = Shape290;

Transform286ZZZ.children[2] = Transform289;

Transform271ZZZ.children[2] = Transform286;

Transform104ZZZ.children[13] = Transform271;

let Transform291 = browser.currentScene.createNode("Transform");
Transform291.translation = new X3D.SFVec3f([-10,-1,2.5]);
let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "Axle";
Transform291YYY.child = new X3D.undefined();

Transform291ZZZ.child[0] = Shape292;

let Transform293 = browser.currentScene.createNode("Transform");
Transform293.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform293.translation = new X3D.SFVec3f([0,0,4.5]);
let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "wheel";
Transform293YYY.child = new X3D.undefined();

Transform293ZZZ.child[0] = Shape294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "tracks";
Transform293ZZZ.child[1] = Shape295;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new X3D.SFVec3f([0,0.55,0]);
let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "hub";
Transform296YYY.child = new X3D.undefined();

Transform296ZZZ.child[0] = Shape297;

Transform293ZZZ.children[2] = Transform296;

Transform291ZZZ.children[1] = Transform293;

let Transform298 = browser.currentScene.createNode("Transform");
Transform298.rotation = new X3D.SFRotation([1,0,0,1.57]);
Transform298.translation = new X3D.SFVec3f([0,0,-4.5]);
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "wheel";
Transform298YYY.child = new X3D.undefined();

Transform298ZZZ.child[0] = Shape299;

let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "tracks";
Transform298ZZZ.child[1] = Shape300;

let Transform301 = browser.currentScene.createNode("Transform");
Transform301.translation = new X3D.SFVec3f([0,-0.55,0]);
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "hub";
Transform301YYY.child = new X3D.undefined();

Transform301ZZZ.child[0] = Shape302;

Transform298ZZZ.children[2] = Transform301;

Transform291ZZZ.children[2] = Transform298;

let Transform303 = browser.currentScene.createNode("Transform");
Transform303.rotation = new X3D.SFRotation([0,1,0,-0.6]);
Transform303.translation = new X3D.SFVec3f([0,100,400]);
let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new X3D.SFVec3f([1,3,0]);
let Viewpoint305 = browser.currentScene.createNode("Viewpoint");
Viewpoint305.description = "Side";
Transform304YYY.children = new X3D.MFNode();

Transform304ZZZ.children[0] = Viewpoint305;

Transform303YYY.children = new X3D.MFNode();

Transform303ZZZ.children[0] = Transform304;

let Transform306 = browser.currentScene.createNode("Transform");
Transform306.USE = "launch";
Transform303ZZZ.children[1] = Transform306;

let Transform307 = browser.currentScene.createNode("Transform");
let TouchSensor308 = browser.currentScene.createNode("TouchSensor");
TouchSensor308.USE = "LauncheeChoice";
Transform307YYY.children = new X3D.MFNode();

Transform307ZZZ.children[0] = TouchSensor308;

let Switch309 = browser.currentScene.createNode("Switch");
Switch309.USE = "projectilename";
Transform307ZZZ.children[1] = Switch309;

let Transform310 = browser.currentScene.createNode("Transform");
Transform310.translation = new X3D.SFVec3f([2.5,0,0]);
let Shape311 = browser.currentScene.createNode("Shape");
let Box312 = browser.currentScene.createNode("Box");
Box312.size = new X3D.SFVec3f([5,0.5,0.5]);
geometry = Box312;

let Appearance313 = browser.currentScene.createNode("Appearance");
let Material314 = browser.currentScene.createNode("Material");
Material314.transparency = 1;
material = Material314;

appearance = Appearance313;

Transform310YYY.child = new X3D.undefined();

Transform310ZZZ.child[0] = Shape311;

Transform307ZZZ.children[2] = Transform310;

Transform303ZZZ.children[2] = Transform307;

let Transform315 = browser.currentScene.createNode("Transform");
Transform315.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
Transform315.translation = new X3D.SFVec3f([0,-1,0]);
let TouchSensor316 = browser.currentScene.createNode("TouchSensor");
TouchSensor316.USE = "weightselector";
Transform315YYY.children = new X3D.MFNode();

Transform315ZZZ.children[0] = TouchSensor316;

let Switch317 = browser.currentScene.createNode("Switch");
Switch317.USE = "Weight";
Transform315ZZZ.children[1] = Switch317;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new X3D.SFVec3f([8,0,0]);
let Shape319 = browser.currentScene.createNode("Shape");
let Box320 = browser.currentScene.createNode("Box");
Box320.size = new X3D.SFVec3f([17,1,0.5]);
geometry = Box320;

let Appearance321 = browser.currentScene.createNode("Appearance");
let Material322 = browser.currentScene.createNode("Material");
Material322.transparency = 1;
material = Material322;

appearance = Appearance321;

Transform318YYY.child = new X3D.undefined();

Transform318ZZZ.child[0] = Shape319;

Transform315ZZZ.children[2] = Transform318;

Transform303ZZZ.children[3] = Transform315;

Transform291ZZZ.children[3] = Transform303;

let Transform323 = browser.currentScene.createNode("Transform");
Transform323.DEF = "ProjectileTransform";
Transform323.translation = new X3D.SFVec3f([14.25,1.25,0]);
let Switch324 = browser.currentScene.createNode("Switch");
Switch324.USE = "projectile";
Transform323YYY.children = new X3D.MFNode();

Transform323ZZZ.children[0] = Switch324;

let Transform325 = browser.currentScene.createNode("Transform");
Transform325.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform325.translation = new X3D.SFVec3f([0,1,0]);
let Viewpoint326 = browser.currentScene.createNode("Viewpoint");
Viewpoint326.description = "Projectile Cam";
Viewpoint326.position = new X3D.SFVec3f([0,0,15]);
Transform325YYY.children = new X3D.MFNode();

Transform325ZZZ.children[0] = Viewpoint326;

Transform323ZZZ.children[1] = Transform325;

Transform291ZZZ.children[4] = Transform323;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new X3D.SFVec3f([20,2,0]);
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.DEF = "Front";
Transform328.rotation = new X3D.SFRotation([0,1,0,1.57]);
let Viewpoint329 = browser.currentScene.createNode("Viewpoint");
Viewpoint329.description = "Fore";
Transform328YYY.children = new X3D.MFNode();

Transform328ZZZ.children[0] = Viewpoint329;

Transform327YYY.children = new X3D.MFNode();

Transform327ZZZ.children[0] = Transform328;

Transform291ZZZ.children[5] = Transform327;

let Transform330 = browser.currentScene.createNode("Transform");
Transform330.translation = new X3D.SFVec3f([-8,4,0]);
let Transform331 = browser.currentScene.createNode("Transform");
Transform331.rotation = new X3D.SFRotation([0,1,0,-1.57]);
let Viewpoint332 = browser.currentScene.createNode("Viewpoint");
Viewpoint332.description = "Aft";
Transform331YYY.children = new X3D.MFNode();

Transform331ZZZ.children[0] = Viewpoint332;

Transform330YYY.children = new X3D.MFNode();

Transform330ZZZ.children[0] = Transform331;

Transform291ZZZ.children[6] = Transform330;

let Script333 = browser.currentScene.createNode("Script");
Script333.DEF = "WeightScript";
Script334.getField("set_boolean")Script333YYY.field = new X3D.MFNode();

Script335.getField("whichchoice")Script333YYY.field = new X3D.MFNode();

Script336.getField("CounterWeight")Script333YYY.field = new X3D.MFNode();


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
Transform291ZZZ.children[7] = Script333;

let Script337 = browser.currentScene.createNode("Script");
Script337.DEF = "LauncheeScript";
Script338.getField("set_boolean")Script337YYY.field = new X3D.MFNode();

Script339.getField("whichchoice")Script337YYY.field = new X3D.MFNode();

Script340.getField("ProjectileWeight")Script337YYY.field = new X3D.MFNode();


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
Transform291ZZZ.children[8] = Script337;

let Script341 = browser.currentScene.createNode("Script");
Script341.DEF = "PigdogMonkScript";
Script342.getField("set_boolean")Script341YYY.field = new X3D.MFNode();

Script343.getField("whichchoice")Script341YYY.field = new X3D.MFNode();


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
Transform291ZZZ.children[9] = Script341;

let Script344 = browser.currentScene.createNode("Script");
Script344.DEF = "Mover";
Script345.getField("set_fraction")Script344YYY.field = new X3D.MFNode();

Script346.getField("set_MassCounterWeight")Script344YYY.field = new X3D.MFNode();

Script347.getField("set_MassProjectileWeight")Script344YYY.field = new X3D.MFNode();

Script348.getField("MassCounterWeight").setValue("1");
Script344YYY.field = new X3D.MFNode();

Script349.getField("MassProjectileWeight").setValue("1");
Script344YYY.field = new X3D.MFNode();

Script350.getField("transparent")Script344YYY.field = new X3D.MFNode();

Script351.getField("value_changed")Script344YYY.field = new X3D.MFNode();


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
Transform291ZZZ.children[10] = Script344;

Transform104ZZZ.children[14] = Transform291;

browser.currentScene.children[8] = Transform104;

let TimeSensor352 = browser.currentScene.createNode("TimeSensor");
TimeSensor352.DEF = "clock";
TimeSensor352.cycleInterval = 10;
browser.currentScene.children[9] = TimeSensor352;

let PositionInterpolator353 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator353.DEF = "verticalweightpath";
PositionInterpolator353.key = new X3D.MFFloat([0,0.1,0.2,0.2,0.3,0.9]);
PositionInterpolator353.keyValue = new X3D.MFVec3f([1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0]);
browser.currentScene.children[10] = PositionInterpolator353;

let OrientationInterpolator354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "flingerangles";
OrientationInterpolator354.key = new X3D.MFFloat([0,0.1,0.2,0.2,0.3,0.9]);
OrientationInterpolator354.keyValue = new X3D.MFRotation([0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82]);
browser.currentScene.children[11] = OrientationInterpolator354;

let PositionInterpolator355 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator355.DEF = "pinpath";
PositionInterpolator355.key = new X3D.MFFloat([0,0.01,0.95,1]);
PositionInterpolator355.keyValue = new X3D.MFVec3f([0,0,-3,0,0,-10,0,0,-10,0,0,-3]);
browser.currentScene.children[12] = PositionInterpolator355;

let OrientationInterpolator356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "RnSAngels";
OrientationInterpolator356.key = new X3D.MFFloat([0,0.7,1]);
OrientationInterpolator356.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-3.14,0,0,1,0]);
browser.currentScene.children[13] = OrientationInterpolator356;

let PositionInterpolator357 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator357.DEF = "invisiable";
PositionInterpolator357.key = new X3D.MFFloat([0,0.2,0.98,0.99]);
PositionInterpolator357.keyValue = new X3D.MFVec3f([1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1]);
browser.currentScene.children[14] = PositionInterpolator357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromField = "fraction_changed";
ROUTE358.fromNode = "clock";
ROUTE358.toField = "set_fraction";
ROUTE358.toNode = "invisiable";
browser.currentScene.children[15] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "value_changed";
ROUTE359.fromNode = "invisiable";
ROUTE359.toField = "set_scale";
ROUTE359.toNode = "projectiletransform";
browser.currentScene.children[16] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "CounterWeight";
ROUTE360.fromNode = "WeightScript";
ROUTE360.toField = "set_MassCounterWeight";
ROUTE360.toNode = "Mover";
browser.currentScene.children[17] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "ProjectileWeight";
ROUTE361.fromNode = "LauncheeScript";
ROUTE361.toField = "set_MassProjectileWeight";
ROUTE361.toNode = "Mover";
browser.currentScene.children[18] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromField = "fraction_changed";
ROUTE362.fromNode = "clock";
ROUTE362.toField = "set_fraction";
ROUTE362.toNode = "Mover";
browser.currentScene.children[19] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromField = "value_changed";
ROUTE363.fromNode = "Mover";
ROUTE363.toField = "set_translation";
ROUTE363.toNode = "ProjectileTransform";
browser.currentScene.children[20] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromField = "transparent";
ROUTE364.fromNode = "Mover";
ROUTE364.toField = "set_scale";
ROUTE364.toNode = "ProjectileTransform";
browser.currentScene.children[21] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromField = "touchTime";
ROUTE365.fromNode = "Launch";
ROUTE365.toField = "set_startTime";
ROUTE365.toNode = "clock";
browser.currentScene.children[22] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromField = "isActive";
ROUTE366.fromNode = "Launch";
ROUTE366.toField = "set_boolean";
ROUTE366.toNode = "PigdogMonkScript";
browser.currentScene.children[23] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromField = "touchTime";
ROUTE367.fromNode = "Launch";
ROUTE367.toField = "set_startTime";
ROUTE367.toNode = "PigDogSound";
browser.currentScene.children[24] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromField = "touchTime";
ROUTE368.fromNode = "Launch";
ROUTE368.toField = "set_startTime";
ROUTE368.toNode = "MonkSound";
browser.currentScene.children[25] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromField = "whichchoice";
ROUTE369.fromNode = "PigdogMonkScript";
ROUTE369.toField = "whichChoice";
ROUTE369.toNode = "PigdogMonk";
browser.currentScene.children[26] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromField = "touchTime";
ROUTE370.fromNode = "LauncheeChoice";
ROUTE370.toField = "set_startTime";
ROUTE370.toNode = "HolyHandGrenadeSound";
browser.currentScene.children[27] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromField = "touchTime";
ROUTE371.fromNode = "LauncheeChoice";
ROUTE371.toField = "set_startTime";
ROUTE371.toNode = "CowSound";
browser.currentScene.children[28] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromField = "touchTime";
ROUTE372.fromNode = "LauncheeChoice";
ROUTE372.toField = "set_startTime";
ROUTE372.toNode = "HamsterSound";
browser.currentScene.children[29] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromField = "isActive";
ROUTE373.fromNode = "LauncheeChoice";
ROUTE373.toField = "set_boolean";
ROUTE373.toNode = "LauncheeScript";
browser.currentScene.children[30] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "whichchoice";
ROUTE374.fromNode = "LauncheeScript";
ROUTE374.toField = "whichChoice";
ROUTE374.toNode = "projectile";
browser.currentScene.children[31] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "whichchoice";
ROUTE375.fromNode = "LauncheeScript";
ROUTE375.toField = "whichChoice";
ROUTE375.toNode = "projectilename";
browser.currentScene.children[32] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "isActive";
ROUTE376.fromNode = "weightselector";
ROUTE376.toField = "set_boolean";
ROUTE376.toNode = "WeightScript";
browser.currentScene.children[33] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "whichchoice";
ROUTE377.fromNode = "WeightScript";
ROUTE377.toField = "whichChoice";
ROUTE377.toNode = "Weight";
browser.currentScene.children[34] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "fraction_changed";
ROUTE378.fromNode = "clock";
ROUTE378.toField = "set_fraction";
ROUTE378.toNode = "flingerangles";
browser.currentScene.children[35] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "value_changed";
ROUTE379.fromNode = "flingerangles";
ROUTE379.toField = "set_rotation";
ROUTE379.toNode = "flinger";
browser.currentScene.children[36] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "fraction_changed";
ROUTE380.fromNode = "clock";
ROUTE380.toField = "set_fraction";
ROUTE380.toNode = "verticalweightpath";
browser.currentScene.children[37] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "value_changed";
ROUTE381.fromNode = "verticalweightpath";
ROUTE381.toField = "set_translation";
ROUTE381.toNode = "verticalweight";
browser.currentScene.children[38] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromField = "fraction_changed";
ROUTE382.fromNode = "clock";
ROUTE382.toField = "set_fraction";
ROUTE382.toNode = "pinpath";
browser.currentScene.children[39] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromField = "value_changed";
ROUTE383.fromNode = "pinpath";
ROUTE383.toField = "set_translation";
ROUTE383.toNode = "Pin";
browser.currentScene.children[40] = ROUTE383;

}
main ();
