#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Mon, 09 Nov 2015 13:19:34 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Tue, 10 Nov 2015 08:03:08 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.title = "chomp";
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "Titania";
MetadataSet9.DEF = "Titania";
MetadataSet9.reference = "http://titania.create3000.de";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "NavigationInfo";
MetadataSet10.DEF = "NavigationInfo";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataString MetadataString11 = createNode("MetadataString");
MetadataString11.name = "type";
MetadataString11.DEF = "type";
MetadataString11.reference = "http://titania.create3000.de";
MetadataString11.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataString11;

MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataSet10;

MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "Viewpoint";
MetadataSet12.DEF = "Viewpoint";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble13 = createNode("MetadataDouble");
MetadataDouble13.name = "position";
MetadataDouble13.DEF = "position";
MetadataDouble13.reference = "http://titania.create3000.de";
MetadataDouble13.value = new MFDouble(new double[0,-3.14299988746643,5.71950006484985]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataDouble13;

MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "orientation";
MetadataDouble14.DEF = "orientation";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[1,0,0,0.0134963877499104]);
MetadataSet12.value[1] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "centerOfRotation";
MetadataDouble15.DEF = "centerOfRotation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,0]);
MetadataSet12.value[2] = MetadataDouble15;

MetadataSet9.value[1] = MetadataSet12;

WorldInfo8.metadata = MetadataSet9;

children = new MFNode();

children[0] = WorldInfo8;

Sound Sound16 = createNode("Sound");
Sound16.intensity = 0.5;
Sound16.spatialize = False;
Sound16.maxBack = 10000;
Sound16.maxFront = 10000;
AudioClip AudioClip17 = createNode("AudioClip");
AudioClip17.DEF = "bubbleSound";
AudioClip17.url = new MFString(new java.lang.String["bubble.wav"]);
AudioClip17.startTime = 1447142588.57546;
AudioClip17.stopTime = 1447142588.57546;
Sound16.source = AudioClip17;

children[1] = Sound16;

Sound Sound18 = createNode("Sound");
Sound18.intensity = 0.5;
Sound18.spatialize = False;
Sound18.maxBack = 10000;
Sound18.maxFront = 10000;
AudioClip AudioClip19 = createNode("AudioClip");
AudioClip19.DEF = "bubbleSound2";
AudioClip19.url = new MFString(new java.lang.String["bubble2.wav"]);
Sound18.source = AudioClip19;

children[2] = Sound18;

Sound Sound20 = createNode("Sound");
Sound20.DEF = "Sound1";
Sound20.spatialize = False;
Sound20.maxBack = 10000;
Sound20.maxFront = 10000;
Sound20.priority = 1;
AudioClip AudioClip21 = createNode("AudioClip");
AudioClip21.DEF = "chompSound";
AudioClip21.url = new MFString(new java.lang.String["chomp.wav"]);
Sound20.source = AudioClip21;

children[3] = Sound20;

Sound Sound22 = createNode("Sound");
Sound22.DEF = "Sound2";
Sound22.spatialize = False;
Sound22.maxBack = 10000;
Sound22.maxFront = 10000;
AudioClip AudioClip23 = createNode("AudioClip");
AudioClip23.DEF = "boomSound";
AudioClip23.url = new MFString(new java.lang.String["boom.wav"]);
Sound22.source = AudioClip23;

children[4] = Sound22;

Sound Sound24 = createNode("Sound");
Sound24.DEF = "Sound3";
Sound24.spatialize = False;
Sound24.maxBack = 10000;
Sound24.maxFront = 10000;
AudioClip AudioClip25 = createNode("AudioClip");
AudioClip25.DEF = "burpSound";
AudioClip25.url = new MFString(new java.lang.String["burp.wav"]);
Sound24.source = AudioClip25;

children[5] = Sound24;

Sound Sound26 = createNode("Sound");
Sound26.DEF = "Sound4";
Sound26.spatialize = False;
Sound26.maxBack = 10000;
Sound26.maxFront = 10000;
AudioClip AudioClip27 = createNode("AudioClip");
AudioClip27.DEF = "oopsSound";
AudioClip27.url = new MFString(new java.lang.String["oops.wav"]);
Sound26.source = AudioClip27;

children[6] = Sound26;

TimeSensor TimeSensor28 = createNode("TimeSensor");
TimeSensor28.DEF = "BubbleTimer";
TimeSensor28.cycleInterval = 0.005;
TimeSensor28.loop = True;
TimeSensor28.startTime = 1;
children[7] = TimeSensor28;

Script Script29 = createNode("Script");
Script29.DEF = "BubbleScript";
field field30 = createNode("field");
field30.name = "inputFraction";
field30.accessType = "inputOnly";
field30.type = "SFFloat";
Script29.field = new MFNode();

Script29.field[0] = field30;

field field31 = createNode("field");
field31.name = "playSound";
field31.accessType = "outputOnly";
field31.type = "SFTime";
Script29.field[1] = field31;

field field32 = createNode("field");
field32.name = "playSound2";
field32.accessType = "outputOnly";
field32.type = "SFTime";
Script29.field[2] = field32;


Script29.setSourceCode(`javascript:\n"+
"		function inputFraction(f, time){\n"+
"			if (f > .8) {\n"+
"				if (f > .9) {\n"+
"					playSound=time;\n"+
"				} else {\n"+
"					playSound2=time;\n"+
"				}\n"+
"			}\n"+
"		}`)
children[8] = Script29;

DirectionalLight DirectionalLight33 = createNode("DirectionalLight");
DirectionalLight33.ambientIntensity = 0.3;
DirectionalLight33.direction = new SFVec3f(new float[-1,-1,-1]);
children[9] = DirectionalLight33;

DirectionalLight DirectionalLight34 = createNode("DirectionalLight");
DirectionalLight34.direction = new SFVec3f(new float[54,-14,-7]);
children[10] = DirectionalLight34;

DirectionalLight DirectionalLight35 = createNode("DirectionalLight");
DirectionalLight35.color = new SFColor(new float[0,0.3765,0.4588]);
DirectionalLight35.direction = new SFVec3f(new float[-43,7,90]);
children[11] = DirectionalLight35;

Inline Inline36 = createNode("Inline");
Inline36.url = new MFString(new java.lang.String["canyonv.x3d"]);
children[12] = Inline36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.DEF = "The_Start";
Viewpoint37.description = "The Start";
Viewpoint37.position = new SFVec3f(new float[0,-3.143,5.7195]);
Viewpoint37.orientation = new SFRotation(new float[1,0,0,0.0134964]);
children[13] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.DEF = "Hoffa_cam";
Viewpoint38.description = "Hoffa cam";
Viewpoint38.position = new SFVec3f(new float[-123.2,-8.351,-300.2]);
Viewpoint38.orientation = new SFRotation(new float[-0.615097,0.785295,0.0704796,0.2898]);
children[14] = Viewpoint38;

NavigationInfo NavigationInfo39 = createNode("NavigationInfo");
NavigationInfo39.DEF = "NavInfo01";
NavigationInfo39.type = new MFString(new java.lang.String[", ","FLY, ","WALKEXAMINE"]);
NavigationInfo39.avatarSize = new MFFloat(new float[1.4,1,0.75]);
NavigationInfo39.speed = 7.5;
NavigationInfo39.headlight = False;
NavigationInfo39.visibilityLimit = 50;
children[15] = NavigationInfo39;

Background Background40 = createNode("Background");
Background40.DEF = "Background01";
Background40.skyColor = new MFColor(new float[0.007843,0.3922,0.6157]);
children[16] = Background40;

Fog Fog41 = createNode("Fog");
Fog41.DEF = "Fog01";
Fog41.color = new SFColor(new float[0.007843,0.3922,0.6157]);
Fog41.visibilityRange = 50;
children[17] = Fog41;

TimeSensor TimeSensor42 = createNode("TimeSensor");
TimeSensor42.DEF = "EatTimer";
TimeSensor42.cycleInterval = 4;
children[18] = TimeSensor42;

TimeSensor TimeSensor43 = createNode("TimeSensor");
TimeSensor43.DEF = "KillTimer";
TimeSensor43.cycleInterval = 0.65;
children[19] = TimeSensor43;

Collision Collision44 = createNode("Collision");
Collision44.enabled = False;
Transform Transform45 = createNode("Transform");
Transform45.DEF = "Inline_seaweed01-ROOT";
Transform45.translation = new SFVec3f(new float[-5.15,-13.29,-28.52]);
Inline Inline46 = createNode("Inline");
Inline46.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform45.children = new MFNode();

Transform45.children[0] = Inline46;

Collision44.proxy = Transform45;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "Inline_seaweed02-ROOT";
Transform47.translation = new SFVec3f(new float[8.169,-13.02,-83.63]);
Inline Inline48 = createNode("Inline");
Inline48.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform47.children = new MFNode();

Transform47.children[0] = Inline48;

Collision44.proxy = Transform47;

Transform Transform49 = createNode("Transform");
Transform49.DEF = "Inline_seaweed03-ROOT";
Transform49.translation = new SFVec3f(new float[-10.84,-13.97,-229.5]);
Inline Inline50 = createNode("Inline");
Inline50.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform49.children = new MFNode();

Transform49.children[0] = Inline50;

Collision44.proxy = Transform49;

Transform Transform51 = createNode("Transform");
Transform51.DEF = "Inline_seaweed04-ROOT";
Transform51.translation = new SFVec3f(new float[-115.2,-13.97,-265.9]);
Inline Inline52 = createNode("Inline");
Inline52.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform51.children = new MFNode();

Transform51.children[0] = Inline52;

Collision44.proxy = Transform51;

Transform Transform53 = createNode("Transform");
Transform53.DEF = "Inline_seaweed05-ROOT";
Transform53.translation = new SFVec3f(new float[-133.7,-13.16,-352]);
Inline Inline54 = createNode("Inline");
Inline54.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform53.children = new MFNode();

Transform53.children[0] = Inline54;

Collision44.proxy = Transform53;

Transform Transform55 = createNode("Transform");
Transform55.DEF = "Inline_seaweed06-ROOT";
Transform55.translation = new SFVec3f(new float[-71.63,-14.04,-477.2]);
Inline Inline56 = createNode("Inline");
Inline56.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform55.children = new MFNode();

Transform55.children[0] = Inline56;

Collision44.proxy = Transform55;

Transform Transform57 = createNode("Transform");
Transform57.DEF = "Inline_seaweed07-ROOT";
Transform57.translation = new SFVec3f(new float[-7.091,-13.35,-514.6]);
Inline Inline58 = createNode("Inline");
Inline58.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform57.children = new MFNode();

Transform57.children[0] = Inline58;

Collision44.proxy = Transform57;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "Inline_seaweed08-ROOT";
Transform59.translation = new SFVec3f(new float[3.819,-13.82,-597.6]);
Inline Inline60 = createNode("Inline");
Inline60.url = new MFString(new java.lang.String["seaweed.x3d"]);
Transform59.children = new MFNode();

Transform59.children[0] = Inline60;

Collision44.proxy = Transform59;

children[20] = Collision44;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "Inline_skeleton-ROOT";
Transform61.translation = new SFVec3f(new float[-125.2,-14.99,-311.4]);
Collision Collision62 = createNode("Collision");
Shape Shape63 = createNode("Shape");
Box Box64 = createNode("Box");
Box64.size = new SFVec3f(new float[4,20,10]);
Shape63.geometry = Box64;

Collision62.proxy = Shape63;

VisibilitySensor VisibilitySensor65 = createNode("VisibilitySensor");
VisibilitySensor65.DEF = "skeletonVisible";
VisibilitySensor65.size = new SFVec3f(new float[1,20,1]);
Collision62.proxy = VisibilitySensor65;

Inline Inline66 = createNode("Inline");
Inline66.url = new MFString(new java.lang.String["skeleton.x3d"]);
Collision62.proxy = Inline66;

Transform61.children = new MFNode();

Transform61.children[0] = Collision62;

children[21] = Transform61;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "Inline_bubble01-ROOT";
Transform67.translation = new SFVec3f(new float[8.131,-15.99,3.069]);
Inline Inline68 = createNode("Inline");
Inline68.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform67.children = new MFNode();

Transform67.children[0] = Inline68;

children[22] = Transform67;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "Inline_bubble02-ROOT";
Transform69.translation = new SFVec3f(new float[6.463,-15.99,-24.57]);
Inline Inline70 = createNode("Inline");
Inline70.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform69.children = new MFNode();

Transform69.children[0] = Inline70;

children[23] = Transform69;

Transform Transform71 = createNode("Transform");
Transform71.DEF = "Inline_bubble03-ROOT";
Transform71.translation = new SFVec3f(new float[-4.104,-15.99,-68.02]);
Inline Inline72 = createNode("Inline");
Inline72.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform71.children = new MFNode();

Transform71.children[0] = Inline72;

children[24] = Transform71;

Transform Transform73 = createNode("Transform");
Transform73.DEF = "Inline_bubble04-ROOT";
Transform73.translation = new SFVec3f(new float[-5.198,-15.99,-112.3]);
Inline Inline74 = createNode("Inline");
Inline74.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform73.children = new MFNode();

Transform73.children[0] = Inline74;

children[25] = Transform73;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "Inline_bubble05-ROOT";
Transform75.translation = new SFVec3f(new float[8.249,-15.99,-141.4]);
Inline Inline76 = createNode("Inline");
Inline76.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform75.children = new MFNode();

Transform75.children[0] = Inline76;

children[26] = Transform75;

Transform Transform77 = createNode("Transform");
Transform77.DEF = "Inline_bubble06-ROOT";
Transform77.translation = new SFVec3f(new float[-4.603,-15.99,-167.7]);
Inline Inline78 = createNode("Inline");
Inline78.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform77.children = new MFNode();

Transform77.children[0] = Inline78;

children[27] = Transform77;

Transform Transform79 = createNode("Transform");
Transform79.DEF = "Inline_bubble07-ROOT";
Transform79.translation = new SFVec3f(new float[-1.222,-15.99,-213.5]);
Inline Inline80 = createNode("Inline");
Inline80.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform79.children = new MFNode();

Transform79.children[0] = Inline80;

children[28] = Transform79;

Transform Transform81 = createNode("Transform");
Transform81.DEF = "Inline_bubble08-ROOT";
Transform81.translation = new SFVec3f(new float[-16.28,-15.99,-214.4]);
Inline Inline82 = createNode("Inline");
Inline82.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform81.children = new MFNode();

Transform81.children[0] = Inline82;

children[29] = Transform81;

Transform Transform83 = createNode("Transform");
Transform83.DEF = "Inline_bubble09-ROOT";
Transform83.translation = new SFVec3f(new float[-55.46,-15.99,-252]);
Inline Inline84 = createNode("Inline");
Inline84.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform83.children = new MFNode();

Transform83.children[0] = Inline84;

children[30] = Transform83;

Transform Transform85 = createNode("Transform");
Transform85.DEF = "Inline_bubble10-ROOT";
Transform85.translation = new SFVec3f(new float[-100.7,-15.99,-249.8]);
Inline Inline86 = createNode("Inline");
Inline86.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform85.children = new MFNode();

Transform85.children[0] = Inline86;

children[31] = Transform85;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "Inline_bubble11-ROOT";
Transform87.translation = new SFVec3f(new float[-131.4,-15.99,-303.5]);
Inline Inline88 = createNode("Inline");
Inline88.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform87.children = new MFNode();

Transform87.children[0] = Inline88;

children[32] = Transform87;

Transform Transform89 = createNode("Transform");
Transform89.DEF = "Inline_bubble12-ROOT";
Transform89.translation = new SFVec3f(new float[-121.8,-15.99,-358.8]);
Inline Inline90 = createNode("Inline");
Inline90.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform89.children = new MFNode();

Transform89.children[0] = Inline90;

children[33] = Transform89;

Transform Transform91 = createNode("Transform");
Transform91.DEF = "Inline_bubble13-ROOT";
Transform91.translation = new SFVec3f(new float[-126.2,-15.99,-440.1]);
Inline Inline92 = createNode("Inline");
Inline92.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform91.children = new MFNode();

Transform91.children[0] = Inline92;

children[34] = Transform91;

Transform Transform93 = createNode("Transform");
Transform93.DEF = "Inline_bubble14-ROOT";
Transform93.translation = new SFVec3f(new float[-86.44,-15.99,-462.5]);
Inline Inline94 = createNode("Inline");
Inline94.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform93.children = new MFNode();

Transform93.children[0] = Inline94;

children[35] = Transform93;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "Inline_bubble15-ROOT";
Transform95.translation = new SFVec3f(new float[-48.94,-15.99,-483.8]);
Inline Inline96 = createNode("Inline");
Inline96.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform95.children = new MFNode();

Transform95.children[0] = Inline96;

children[36] = Transform95;

Transform Transform97 = createNode("Transform");
Transform97.DEF = "Inline_bubble16-ROOT";
Transform97.translation = new SFVec3f(new float[-14.27,-15.99,-497.2]);
Inline Inline98 = createNode("Inline");
Inline98.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform97.children = new MFNode();

Transform97.children[0] = Inline98;

children[37] = Transform97;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "Inline_bubble17-ROOT";
Transform99.translation = new SFVec3f(new float[-4.255,-15.99,-537.4]);
Inline Inline100 = createNode("Inline");
Inline100.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform99.children = new MFNode();

Transform99.children[0] = Inline100;

children[38] = Transform99;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "Inline_bubble18-ROOT";
Transform101.translation = new SFVec3f(new float[7.987,-15.99,-584.9]);
Inline Inline102 = createNode("Inline");
Inline102.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform101.children = new MFNode();

Transform101.children[0] = Inline102;

children[39] = Transform101;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "Inline_bubble19-ROOT";
Transform103.translation = new SFVec3f(new float[-3.237,-15.99,-621.2]);
Inline Inline104 = createNode("Inline");
Inline104.url = new MFString(new java.lang.String["bubble.x3d"]);
Transform103.children = new MFNode();

Transform103.children[0] = Inline104;

children[40] = Transform103;

Transform Transform105 = createNode("Transform");
Transform105.DEF = "Inline_bubble201-ROOT";
Transform105.translation = new SFVec3f(new float[-15.15,-15.99,-6.77]);
Inline Inline106 = createNode("Inline");
Inline106.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform105.children = new MFNode();

Transform105.children[0] = Inline106;

children[41] = Transform105;

Transform Transform107 = createNode("Transform");
Transform107.DEF = "Inline_bubble202-ROOT";
Transform107.translation = new SFVec3f(new float[3.51,-15.99,-31.52]);
Inline Inline108 = createNode("Inline");
Inline108.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform107.children = new MFNode();

Transform107.children[0] = Inline108;

children[42] = Transform107;

Transform Transform109 = createNode("Transform");
Transform109.DEF = "Inline_bubble203-ROOT";
Transform109.translation = new SFVec3f(new float[-6.846,-15.99,-62.02]);
Inline Inline110 = createNode("Inline");
Inline110.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform109.children = new MFNode();

Transform109.children[0] = Inline110;

children[43] = Transform109;

Transform Transform111 = createNode("Transform");
Transform111.DEF = "Inline_bubble204-ROOT";
Transform111.translation = new SFVec3f(new float[11.8,-15.99,-94.4]);
Inline Inline112 = createNode("Inline");
Inline112.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform111.children = new MFNode();

Transform111.children[0] = Inline112;

children[44] = Transform111;

Transform Transform113 = createNode("Transform");
Transform113.DEF = "Inline_bubble205-ROOT";
Transform113.translation = new SFVec3f(new float[-6.296,-15.99,-122.9]);
Inline Inline114 = createNode("Inline");
Inline114.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform113.children = new MFNode();

Transform113.children[0] = Inline114;

children[45] = Transform113;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "Inline_bubble206-ROOT";
Transform115.translation = new SFVec3f(new float[-12.13,-15.99,-146.1]);
Inline Inline116 = createNode("Inline");
Inline116.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform115.children = new MFNode();

Transform115.children[0] = Inline116;

children[46] = Transform115;

Transform Transform117 = createNode("Transform");
Transform117.DEF = "Inline_bubble207-ROOT";
Transform117.translation = new SFVec3f(new float[8.454,-15.99,-180.3]);
Inline Inline118 = createNode("Inline");
Inline118.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform117.children = new MFNode();

Transform117.children[0] = Inline118;

children[47] = Transform117;

Transform Transform119 = createNode("Transform");
Transform119.DEF = "Inline_bubble208-ROOT";
Transform119.translation = new SFVec3f(new float[-6.417,-15.99,-198.3]);
Inline Inline120 = createNode("Inline");
Inline120.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform119.children = new MFNode();

Transform119.children[0] = Inline120;

children[48] = Transform119;

Transform Transform121 = createNode("Transform");
Transform121.DEF = "Inline_bubble209-ROOT";
Transform121.translation = new SFVec3f(new float[-6.454,-15.99,-226.6]);
Inline Inline122 = createNode("Inline");
Inline122.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform121.children = new MFNode();

Transform121.children[0] = Inline122;

children[49] = Transform121;

Transform Transform123 = createNode("Transform");
Transform123.DEF = "Inline_bubble210-ROOT";
Transform123.translation = new SFVec3f(new float[-30.97,-15.99,-242.6]);
Inline Inline124 = createNode("Inline");
Inline124.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform123.children = new MFNode();

Transform123.children[0] = Inline124;

children[50] = Transform123;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "Inline_bubble211-ROOT";
Transform125.translation = new SFVec3f(new float[-76.67,-15.99,-241.7]);
Inline Inline126 = createNode("Inline");
Inline126.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform125.children = new MFNode();

Transform125.children[0] = Inline126;

children[51] = Transform125;

Transform Transform127 = createNode("Transform");
Transform127.DEF = "Inline_bubble212-ROOT";
Transform127.translation = new SFVec3f(new float[-101.7,-15.99,-257.1]);
Inline Inline128 = createNode("Inline");
Inline128.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform127.children = new MFNode();

Transform127.children[0] = Inline128;

children[52] = Transform127;

Transform Transform129 = createNode("Transform");
Transform129.DEF = "Inline_bubble213-ROOT";
Transform129.translation = new SFVec3f(new float[-126.8,-15.99,-284]);
Inline Inline130 = createNode("Inline");
Inline130.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform129.children = new MFNode();

Transform129.children[0] = Inline130;

children[53] = Transform129;

Transform Transform131 = createNode("Transform");
Transform131.DEF = "Inline_bubble214-ROOT";
Transform131.translation = new SFVec3f(new float[-122.2,-15.99,-310.8]);
Inline Inline132 = createNode("Inline");
Inline132.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform131.children = new MFNode();

Transform131.children[0] = Inline132;

children[54] = Transform131;

Transform Transform133 = createNode("Transform");
Transform133.DEF = "Inline_bubble215-ROOT";
Transform133.translation = new SFVec3f(new float[-126,-15.99,-361.9]);
Inline Inline134 = createNode("Inline");
Inline134.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform133.children = new MFNode();

Transform133.children[0] = Inline134;

children[55] = Transform133;

Transform Transform135 = createNode("Transform");
Transform135.DEF = "Inline_bubble216-ROOT";
Transform135.translation = new SFVec3f(new float[-141.4,-15.99,-400.1]);
Inline Inline136 = createNode("Inline");
Inline136.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform135.children = new MFNode();

Transform135.children[0] = Inline136;

children[56] = Transform135;

Transform Transform137 = createNode("Transform");
Transform137.DEF = "Inline_bubble217-ROOT";
Transform137.translation = new SFVec3f(new float[-133.6,-15.99,-337]);
Inline Inline138 = createNode("Inline");
Inline138.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform137.children = new MFNode();

Transform137.children[0] = Inline138;

children[57] = Transform137;

Transform Transform139 = createNode("Transform");
Transform139.DEF = "Inline_bubble218-ROOT";
Transform139.translation = new SFVec3f(new float[-116.2,-15.99,-429.3]);
Inline Inline140 = createNode("Inline");
Inline140.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform139.children = new MFNode();

Transform139.children[0] = Inline140;

children[58] = Transform139;

Transform Transform141 = createNode("Transform");
Transform141.DEF = "Inline_bubble219-ROOT";
Transform141.translation = new SFVec3f(new float[-105.8,-15.99,-457.6]);
Inline Inline142 = createNode("Inline");
Inline142.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform141.children = new MFNode();

Transform141.children[0] = Inline142;

children[59] = Transform141;

Transform Transform143 = createNode("Transform");
Transform143.DEF = "Inline_bubble220-ROOT";
Transform143.translation = new SFVec3f(new float[-85.19,-15.99,-467.2]);
Inline Inline144 = createNode("Inline");
Inline144.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform143.children = new MFNode();

Transform143.children[0] = Inline144;

children[60] = Transform143;

Transform Transform145 = createNode("Transform");
Transform145.DEF = "Inline_bubble221-ROOT";
Transform145.translation = new SFVec3f(new float[-46.54,-15.99,-478.8]);
Inline Inline146 = createNode("Inline");
Inline146.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform145.children = new MFNode();

Transform145.children[0] = Inline146;

children[61] = Transform145;

Transform Transform147 = createNode("Transform");
Transform147.DEF = "Inline_bubble222-ROOT";
Transform147.translation = new SFVec3f(new float[-7.292,-15.99,-494.2]);
Inline Inline148 = createNode("Inline");
Inline148.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform147.children = new MFNode();

Transform147.children[0] = Inline148;

children[62] = Transform147;

Transform Transform149 = createNode("Transform");
Transform149.DEF = "Inline_bubble223-ROOT";
Transform149.translation = new SFVec3f(new float[-3.522,-15.99,-519.8]);
Inline Inline150 = createNode("Inline");
Inline150.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform149.children = new MFNode();

Transform149.children[0] = Inline150;

children[63] = Transform149;

Transform Transform151 = createNode("Transform");
Transform151.DEF = "Inline_bubble224-ROOT";
Transform151.translation = new SFVec3f(new float[-6.843,-15.99,-544.2]);
Inline Inline152 = createNode("Inline");
Inline152.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform151.children = new MFNode();

Transform151.children[0] = Inline152;

children[64] = Transform151;

Transform Transform153 = createNode("Transform");
Transform153.DEF = "Inline_bubble225-ROOT";
Transform153.translation = new SFVec3f(new float[17.6,-15.99,-564.2]);
Inline Inline154 = createNode("Inline");
Inline154.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform153.children = new MFNode();

Transform153.children[0] = Inline154;

children[65] = Transform153;

Transform Transform155 = createNode("Transform");
Transform155.DEF = "Inline_bubble226-ROOT";
Transform155.translation = new SFVec3f(new float[3.365,-15.99,-590]);
Inline Inline156 = createNode("Inline");
Inline156.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform155.children = new MFNode();

Transform155.children[0] = Inline156;

children[66] = Transform155;

Transform Transform157 = createNode("Transform");
Transform157.DEF = "Inline_bubble227-ROOT";
Transform157.translation = new SFVec3f(new float[17.49,-15.99,-628.7]);
Inline Inline158 = createNode("Inline");
Inline158.url = new MFString(new java.lang.String["bubble2.x3d"]);
Transform157.children = new MFNode();

Transform157.children[0] = Inline158;

children[67] = Transform157;

PositionInterpolator PositionInterpolator159 = createNode("PositionInterpolator");
PositionInterpolator159.DEF = "SharkEat-POS-INTERP";
PositionInterpolator159.key = new MFFloat(new float[0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429]);
PositionInterpolator159.keyValue = new MFVec3f(new float[0.001881,-0.2842,-1.188,0.002397,-0.2545,-1.211,0.002762,-0.2227,-1.226,0.002945,-0.1925,-1.231,0.00294,-0.168,-1.228,0.002767,-0.1531,-1.217,0.002685,-0.15,-1.212,0.002685,-0.15,-1.212,0.002767,-0.1531,-1.217,0.002513,-0.1692,-1.229,0.001648,-0.1962,-1.235,0.0007906,-0.228,-1.23,0.0006205,-0.2586,-1.214,0.001867,-0.2842,-1.188,0.009928,-0.2819,-1.195,0.02599,-0.277,-1.198,0.04685,-0.2713,-1.199,0.06942,-0.2667,-1.197,0.09061,-0.265,-1.196,0.1088,-0.2673,-1.196,0.1193,-0.2725,-1.194,0.1143,-0.279,-1.192,0.0874,-0.2847,-1.187,0.02086,-0.2839,-1.188,-0.06119,-0.284,-1.188,-0.09799,-0.285,-1.187,-0.03127,-0.2837,-1.188,0.08074,-0.2835,-1.188,0.1228,-0.2847,-1.187,0.006802,-0.2832,-1.188,-0.09799,-0.285,-1.187,-0.007522,-0.2832,-1.188,0.0874,-0.2847,-1.187,0.004102,-0.2831,-1.188,-0.09799,-0.285,-1.187,-0.0861,-0.2844,-1.188,-0.02842,-0.2841,-1.188,0.001881,-0.2842,-1.188,0.002219,-0.2842,-1.188,0.003149,-0.2842,-1.188,0.004503,-0.2843,-1.188,0.006065,-0.2843,-1.188,0.007599,-0.2844,-1.188,0.00888,-0.2844,-1.188,0.00978,-0.2844,-1.188,0.01034,-0.2844,-1.188,0.01063,-0.2844,-1.188,0.01071,-0.2843,-1.188,0.01065,-0.2843,-1.188,0.01051,-0.2843,-1.188,0.01014,-0.2843,-1.188,0.009422,-0.2843,-1.188,0.00845,-0.2843,-1.188,0.007312,-0.2842,-1.188,0.0061,-0.2842,-1.188,0.004883,-0.2842,-1.188,0.003741,-0.2842,-1.188,0.002783,-0.2842,-1.188,0.002125,-0.2842,-1.188,0.001881,-0.2842,-1.188]);
children[68] = PositionInterpolator159;

OrientationInterpolator OrientationInterpolator160 = createNode("OrientationInterpolator");
OrientationInterpolator160.DEF = "SharkEat-ROT-INTERP";
OrientationInterpolator160.key = new MFFloat(new float[0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429]);
OrientationInterpolator160.keyValue = new MFRotation(new float[-0.999941,0.00659827,-0.00861635,4.167,-0.999944,0.00604627,-0.00869538,4.075,-0.999946,0.00550426,-0.00877241,3.98,-0.999948,0.00499124,-0.00884443,3.887,-0.99995,0.00452577,-0.00890956,3.799,-0.999951,0.0041228,-0.00896756,3.722,-0.999952,0.00399481,-0.00898557,3.696,-0.999952,0.00399481,-0.00898557,3.696,-0.999951,0.0041228,-0.00896756,3.722,-0.99995,0.00457123,-0.00890444,3.808,-0.999948,0.00513225,-0.00882442,3.913,-0.999945,0.00572426,-0.0087404,4.019,-0.999943,0.00625127,-0.00866537,4.109,-0.999941,0.00659827,-0.00861635,4.167,-0.999947,0.00489023,-0.00903943,4.179,-0.99995,0.00122694,-0.00991551,4.158,-0.999943,-0.00157007,-0.0105705,4.122,-0.999946,-0.000831738,-0.0103705,4.087,-0.999944,0.00602127,-0.00869838,4.071,-0.999521,0.0308406,-0.00273806,4.081,-0.997532,0.0699022,0.00664321,4.105,-0.994669,0.102097,0.0144496,4.132,-0.994277,0.105698,0.0155096,4.152,-0.999277,0.0380191,-0.000154996,4.161,-0.997328,-0.0686719,-0.0249207,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.99763,-0.0644919,-0.0239907,4.153,-0.998929,0.0462413,0.00168605,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999896,-0.00915896,-0.01117,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.999896,-0.00915896,-0.01117,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999942,-0.00419117,-0.00996641,4.155,-0.991604,-0.123701,-0.0376702,4.148,-0.996334,-0.0806727,-0.028481,4.157,-0.999921,-0.00509411,-0.0114702,4.166,-0.999941,0.00659827,-0.00861635,4.167,-0.999937,0.00754128,-0.00832831,4.167,-0.99992,0.0101602,-0.00749615,4.167,-0.999885,0.0138398,-0.00621691,4.167,-0.999833,0.0176706,-0.00464215,4.168,-0.999784,0.0205897,-0.00295795,4.168,-0.999766,0.0215893,-0.00136895,4.168,-0.999796,0.0202099,-0.000141899,4.168,-0.999853,0.0171092,0.00064827,4.168,-0.999913,0.0131702,0.00109701,4.168,-0.999956,0.0092616,0.00129994,4.168,-0.999979,0.00627387,0.00135097,4.168,-0.999986,0.00508293,0.00134698,4.168,-0.999986,0.00513293,0.00101599,4.168,-0.999986,0.00526993,0.000118798,4.167,-0.999984,0.00547091,-0.00120398,4.167,-0.99998,0.00571488,-0.00280994,4.167,-0.999972,0.00598083,-0.00455787,4.167,-0.999962,0.00622076,-0.00613477,4.167,-0.999953,0.0063967,-0.00729466,4.167,-0.999946,0.0065133,-0.00805837,4.167,-0.999942,0.00657828,-0.00848236,4.167,-0.999941,0.00659827,-0.00861635,4.167]);
children[69] = OrientationInterpolator160;

PositionInterpolator PositionInterpolator161 = createNode("PositionInterpolator");
PositionInterpolator161.DEF = "SharkEat-SCALE-INTERP";
PositionInterpolator161.key = new MFFloat(new float[0,0.01429,0.02857,0.04286,0.05714,0.07143,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143]);
PositionInterpolator161.keyValue = new MFVec3f(new float[0.001994,0.001994,0.001994,0.003883,0.003883,0.003883,0.005543,0.005543,0.005543,0.006863,0.006863,0.006863,0.007735,0.007735,0.007735,0.00805,0.00805,0.00805,0.00805,0.00805,0.00805,0.007735,0.007735,0.007735,0.006862,0.006862,0.006862,0.005541,0.005541,0.005541,0.003881,0.003881,0.003881,0.00199,0.00199,0.00199,0.002115,0.002115,0.002115,0.002209,0.002209,0.002209,0.002272,0.002272,0.002272,0.002303,0.002303,0.002303,0.002304,0.002304,0.002304,0.002273,0.002273,0.002273,0.002211,0.002211,0.002211,0.002118,0.002118,0.002118,0.001994,0.001994,0.001994]);
children[70] = PositionInterpolator161;

PositionInterpolator PositionInterpolator162 = createNode("PositionInterpolator");
PositionInterpolator162.DEF = "SharkEat_Eyeball_R-POS-INTERP";
PositionInterpolator162.key = new MFFloat(new float[0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1571,0.1714,0.1857,0.2,0.2143,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8714,0.8857]);
PositionInterpolator162.keyValue = new MFVec3f(new float[55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,48.07,2.931,-6.466,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,55.09,1.822,-6.84]);
children[71] = PositionInterpolator162;

OrientationInterpolator OrientationInterpolator163 = createNode("OrientationInterpolator");
OrientationInterpolator163.DEF = "SharkEat_Eyeball_R-ROT-INTERP";
OrientationInterpolator163.key = new MFFloat(new float[0,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8571,0.8714,0.8857]);
OrientationInterpolator163.keyValue = new MFRotation(new float[-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,0.390293,-0.920184,-0.0305395,3.013,0.151105,-0.958234,-0.242808,2.595,0.139597,-0.957581,-0.252095,2.577,0.128799,-0.95679,-0.260697,2.561,0.118698,-0.955884,-0.268695,2.547,0.109401,-0.95491,-0.276003,2.533,0.1008,-0.953898,-0.282699,2.521,0.0929768,-0.952867,-0.28879,2.51,0.0858359,-0.951855,-0.294286,2.5,0.0793787,-0.950884,-0.299195,2.491,0.0736136,-0.949947,-0.303615,2.483,0.0684887,-0.949082,-0.307494,2.476,0.064019,-0.948286,-0.310895,2.47,0.0601689,-0.947583,-0.313794,2.465,0.0569273,-0.946955,-0.316285,2.461,0.0542718,-0.946432,-0.318311,2.457,0.0521807,-0.946012,-0.319904,2.454,0.0506212,-0.945723,-0.321008,2.452,0.0495804,-0.945508,-0.321803,2.451,0.04903,-0.945401,-0.3222,2.45,0.0489586,-0.945374,-0.322291,2.45,0.0493179,-0.945459,-0.321986,2.45,0.0501108,-0.945615,-0.321405,2.451,0.051298,-0.945863,-0.320487,2.453,0.0528589,-0.946181,-0.319293,2.455,0.0547622,-0.946537,-0.317913,2.458,0.0569789,-0.946982,-0.316194,2.461,0.0595032,-0.947451,-0.314317,2.464,0.0622884,-0.947975,-0.312192,2.468,0.0653214,-0.94852,-0.309907,2.472,0.0685683,-0.949077,-0.307492,2.476,0.0720071,-0.949662,-0.304888,2.481,0.0756279,-0.950274,-0.302092,2.486,0.0793787,-0.950884,-0.299195,2.491,0.0832567,-0.951463,-0.296288,2.496,0.087227,-0.952067,-0.29319,2.502,0.091273,-0.952631,-0.290109,2.508,0.0953503,-0.953203,-0.286901,2.513,0.099454,-0.953738,-0.283711,2.519,0.103605,-0.954243,-0.280512,2.525,0.107601,-0.954709,-0.277403,2.531,0.111696,-0.955167,-0.27419,2.537,0.115598,-0.955586,-0.271096,2.542,0.119494,-0.955955,-0.268087,2.548,0.123202,-0.956316,-0.265105,2.553,0.126806,-0.956643,-0.262212,2.559,0.130302,-0.956912,-0.259503,2.564,0.133497,-0.957175,-0.256893,2.568,0.136597,-0.957379,-0.254494,2.573,0.139398,-0.957583,-0.252196,2.577,0.141905,-0.957736,-0.250209,2.581,0.144199,-0.957891,-0.248298,2.584,0.146298,-0.957986,-0.246696,2.587,0.1479,-0.958099,-0.2453,2.59,0.149305,-0.958134,-0.244309,2.592,0.150298,-0.958186,-0.243496,2.593,0.150902,-0.958216,-0.243004,2.594,0.151105,-0.958234,-0.242808,2.595,-0.682571,0.661772,-0.310087,2.578]);
children[72] = OrientationInterpolator163;

PositionInterpolator PositionInterpolator164 = createNode("PositionInterpolator");
PositionInterpolator164.DEF = "SharkEat_Eyeball_L-POS-INTERP";
PositionInterpolator164.key = new MFFloat(new float[0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286]);
PositionInterpolator164.keyValue = new MFVec3f(new float[-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-47.14,4.268,-4.764,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257]);
children[73] = PositionInterpolator164;

OrientationInterpolator OrientationInterpolator165 = createNode("OrientationInterpolator");
OrientationInterpolator165.DEF = "SharkEat_Eyeball_L-ROT-INTERP";
OrientationInterpolator165.key = new MFFloat(new float[0,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8]);
OrientationInterpolator165.keyValue = new MFRotation(new float[-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.040862,0.303215,-0.952046,0.4171,0.718259,-0.445474,0.534469,0.4786,0.699612,-0.445407,0.558709,0.5163,0.68429,-0.444994,0.577692,0.5512,0.671532,-0.444521,0.592828,0.5833,0.660917,-0.444011,0.605015,0.6126,0.651993,-0.443495,0.614993,0.6391,0.644498,-0.442998,0.623198,0.663,0.638269,-0.442579,0.62987,0.6842,0.632971,-0.44218,0.635471,0.7028,0.628684,-0.441789,0.639984,0.719,0.625093,-0.441495,0.643693,0.7328,0.622169,-0.441278,0.646668,0.7442,0.619913,-0.441009,0.649014,0.7535,0.618208,-0.440906,0.650708,0.7607,0.61697,-0.440778,0.651968,0.7658,0.616179,-0.440685,0.652778,0.7691,0.615873,-0.44068,0.653071,0.7705,0.615913,-0.440709,0.653014,0.7702,0.616384,-0.440688,0.652583,0.7683,0.617174,-0.440782,0.651773,0.765,0.61831,-0.440907,0.65061,0.7602,0.619811,-0.441008,0.649112,0.7541,0.621526,-0.441218,0.647327,0.7469,0.623602,-0.441401,0.645202,0.7385,0.625975,-0.441583,0.642775,0.7292,0.628684,-0.441789,0.639984,0.719,0.631624,-0.442017,0.636924,0.708,0.634784,-0.442289,0.633584,0.6964,0.638269,-0.442579,0.62987,0.6842,0.642004,-0.442803,0.625904,0.6715,0.645889,-0.443092,0.621689,0.6585,0.649987,-0.443391,0.617188,0.6453,0.654382,-0.443588,0.612383,0.6319,0.658897,-0.443898,0.607297,0.6184,0.663573,-0.444182,0.601975,0.605,0.668324,-0.444416,0.596521,0.5918,0.67323,-0.44462,0.590826,0.5789,0.678137,-0.444824,0.585032,0.5663,0.683058,-0.444973,0.579164,0.5541,0.687902,-0.445101,0.573302,0.5426,0.692676,-0.445285,0.567381,0.5317,0.697239,-0.445325,0.561732,0.5215,0.701516,-0.44541,0.556313,0.5122,0.705492,-0.445495,0.551194,0.5039,0.709116,-0.44551,0.546512,0.4965,0.712198,-0.445499,0.542499,0.4903,0.714786,-0.445492,0.53909,0.4853,0.716675,-0.445485,0.536582,0.4817,0.717873,-0.445483,0.53498,0.4794,0.718259,-0.445474,0.534469,0.4786,-0.374592,0.400391,-0.836282,1.719]);
children[74] = OrientationInterpolator165;

TimeSensor TimeSensor166 = createNode("TimeSensor");
TimeSensor166.DEF = "TimeSensor_inline-TIMER";
TimeSensor166.cycleInterval = 9.533;
TimeSensor166.loop = True;
TimeSensor166.startTime = 1;
children[75] = TimeSensor166;

Script Script167 = createNode("Script");
Script167.DEF = "TimeSensor_inline-SCRIPT";
field field168 = createNode("field");
field168.name = "fractionIn";
field168.accessType = "inputOnly";
field168.type = "SFFloat";
Script167.field = new MFNode();

Script167.field[0] = field168;

field field169 = createNode("field");
field169.name = "fractionOut";
field169.accessType = "outputOnly";
field169.type = "SFFloat";
Script167.field[1] = field169;


Script167.setSourceCode(`javascript:\n"+
"    function fractionIn(i) {\n"+
"    fractionOut = 0.9931 * i + 0.006944;\n"+
"  }`)
children[76] = Script167;

Switch Switch170 = createNode("Switch");
Switch170.DEF = "SittingSeagull";
Switch170.whichChoice = 0;
Group Group171 = createNode("Group");
Transform Transform172 = createNode("Transform");
Transform172.DEF = "SittingSeagullCollisionMover";
Transform172.translation = new SFVec3f(new float[4.242,0,-50.32]);
Transform Transform173 = createNode("Transform");
Transform173.DEF = "SittingSeagullCollisionSpinner";
Transform173.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor174 = createNode("ProximitySensor");
ProximitySensor174.DEF = "EatSittingSeagull";
ProximitySensor174.size = new SFVec3f(new float[5,4,4]);
ProximitySensor174.center = new SFVec3f(new float[0,0,4]);
Transform173.children = new MFNode();

Transform173.children[0] = ProximitySensor174;

Transform172.children = new MFNode();

Transform172.children[0] = Transform173;

Group171.children = new MFNode();

Group171.children[0] = Transform172;

Transform Transform175 = createNode("Transform");
Transform175.DEF = "Inline_Gull_sit-ROOT";
Transform175.translation = new SFVec3f(new float[4.242,0,-50.32]);
VisibilitySensor VisibilitySensor176 = createNode("VisibilitySensor");
VisibilitySensor176.DEF = "sittingSeagullVisible";
VisibilitySensor176.size = new SFVec3f(new float[1,1,1]);
Transform175.children = new MFNode();

Transform175.children[0] = VisibilitySensor176;

Inline Inline177 = createNode("Inline");
Inline177.url = new MFString(new java.lang.String["gullswim.x3d"]);
Transform175.children[1] = Inline177;

Group171.children[1] = Transform175;

Switch170.children = new MFNode();

Switch170.children[0] = Group171;

children[77] = Switch170;

TimeSensor TimeSensor178 = createNode("TimeSensor");
TimeSensor178.DEF = "TimeSensor_gullswim-TIMER";
TimeSensor178.cycleInterval = 9.6;
TimeSensor178.loop = True;
TimeSensor178.startTime = 1;
children[78] = TimeSensor178;

PositionInterpolator PositionInterpolator179 = createNode("PositionInterpolator");
PositionInterpolator179.DEF = "Inline_Gullswim-POS-INTERP";
PositionInterpolator179.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
PositionInterpolator179.keyValue = new MFVec3f(new float[-8.996,0,-185.5,-8.956,0,-186.4,-8.816,0,-187.3,-8.523,0,-188.1,-8.102,0,-188.8,-7.58,0,-189.5,-6.987,0,-190.1,-6.337,0,-190.7,-5.645,0,-191.2,-4.919,0,-191.6,-4.165,0,-192,-3.387,0,-192.4,-2.587,0,-192.7,-1.768,0,-192.9,-0.9306,0,-193.1,-0.07939,0,-193.1,0.7576,0,-193,1.426,0,-192.4,1.902,0,-191.7,2.281,0,-190.9,2.602,0,-190,2.879,0,-189.2,3.121,0,-188.3,3.333,0,-187.5,3.516,0,-186.6,3.671,0,-185.7,3.797,0,-184.8,3.891,0,-184,3.947,0,-183.1,3.956,0,-182.2,3.89,0,-181.3,3.702,0,-180.4,3.222,0,-179.7,2.314,0,-179.4,1.357,0,-179.3,0.395,0,-179.3,-0.5648,0,-179.4,-1.519,0,-179.5,-2.465,0,-179.7,-3.4,0,-179.9,-4.32,0,-180.2,-5.22,0,-180.5,-6.089,0,-180.9,-6.914,0,-181.4,-7.667,0,-182,-8.303,0,-182.8,-8.751,0,-183.6,-8.946,0,-184.5,-8.996,0,-185.5]);
children[79] = PositionInterpolator179;

OrientationInterpolator OrientationInterpolator180 = createNode("OrientationInterpolator");
OrientationInterpolator180.DEF = "Inline_Gullswim-ROT-INTERP";
OrientationInterpolator180.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
OrientationInterpolator180.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,0.146499,0,-1,0,0.3004,0,-1,0,0.4543,0,-1,0,0.6008,0,-1,0,0.7324,0,-1,0,0.8419,0,-1,0,0.9194,0,-1,0,0.9686,0,-1,0,1.002,0,-1,0,1.031,0,-1,0,1.07,0,-1,0,1.13,0,-1,0,1.223,0,-1,0,1.368,0,-1,0,1.616,0,-1,0,1.937,0,-1,0,2.273,0,-1,0,2.569,0,-1,0,2.768,0,-1,0,2.878,0,-1,0,2.949,0,-1,0,2.992,0,-1,0,3.017,0,-1,0,3.033,0,-1,0,3.051,0,-1,0,3.08,0,-1,0,3.131,0,-1,0,3.214,0,-1,0,3.341,0,-1,0,3.523,0,-1,0,3.742,0,-1,0,3.979,0,1,0,2.068,0,1,0,1.85,0,1,0,1.669,0,1,0,1.537,0,1,0,1.437,0,1,0,1.36,0,1,0,1.298,0,1,0,1.241,0,1,0,1.18,0,1,0,1.108,0,1,0,1.015,0,1,0,0.8902,0,1,0,0.7053,0,1,0,0.4765,0,1,0,0.2319,0,0,1,0]);
children[80] = OrientationInterpolator180;

Switch Switch181 = createNode("Switch");
Switch181.DEF = "Seagull";
Switch181.whichChoice = 0;
Group Group182 = createNode("Group");
Transform Transform183 = createNode("Transform");
Transform183.DEF = "SeagullCollisionMover";
Transform183.translation = new SFVec3f(new float[-1.33807,0,-179.481]);
Transform Transform184 = createNode("Transform");
Transform184.DEF = "SeagullCollisionSpinner";
Transform184.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor185 = createNode("ProximitySensor");
ProximitySensor185.DEF = "EatSeagull";
ProximitySensor185.size = new SFVec3f(new float[3,3,2]);
ProximitySensor185.center = new SFVec3f(new float[0,0,4]);
Transform184.children = new MFNode();

Transform184.children[0] = ProximitySensor185;

Transform183.children = new MFNode();

Transform183.children[0] = Transform184;

Group182.children = new MFNode();

Group182.children[0] = Transform183;

Transform Transform186 = createNode("Transform");
Transform186.DEF = "Inline_Gullswim-ROOT";
Transform186.translation = new SFVec3f(new float[-1.33807,0,-179.481]);
Transform186.rotation = new SFRotation(new float[0,1,0,1.45596]);
VisibilitySensor VisibilitySensor187 = createNode("VisibilitySensor");
VisibilitySensor187.DEF = "seagullVisible";
VisibilitySensor187.size = new SFVec3f(new float[1,1,1]);
Transform186.children = new MFNode();

Transform186.children[0] = VisibilitySensor187;

Inline Inline188 = createNode("Inline");
Inline188.url = new MFString(new java.lang.String["gullswim.x3d"]);
Transform186.children[1] = Inline188;

Group182.children[1] = Transform186;

Switch181.children = new MFNode();

Switch181.children[0] = Group182;

children[81] = Switch181;

TimeSensor TimeSensor189 = createNode("TimeSensor");
TimeSensor189.DEF = "TimeSensor_Fishswim-TIMER";
TimeSensor189.cycleInterval = 9.6;
TimeSensor189.loop = True;
TimeSensor189.startTime = 1;
children[82] = TimeSensor189;

PositionInterpolator PositionInterpolator190 = createNode("PositionInterpolator");
PositionInterpolator190.DEF = "Inline_Fishswim-POS-INTERP";
PositionInterpolator190.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
PositionInterpolator190.keyValue = new MFVec3f(new float[1.603,-5.208,-121.5,1.378,-4.873,-121.5,1.174,-4.566,-121.4,0.9889,-4.287,-121.4,0.8242,-4.036,-121.3,0.6794,-3.813,-121.3,0.5545,-3.619,-121.2,0.4495,-3.453,-121.2,0.3644,-3.315,-121.1,0.2992,-3.205,-121.1,0.254,-3.124,-121,0.2287,-3.07,-121,0.2232,-3.045,-120.9,0.2377,-3.048,-120.8,0.2722,-3.079,-120.8,0.3265,-3.139,-120.7,0.4007,-3.226,-120.7,0.5204,-3.371,-120.6,0.6953,-3.595,-120.5,0.9022,-3.885,-120.4,1.118,-4.231,-120.3,1.318,-4.621,-120.2,1.481,-5.042,-120.1,1.582,-5.484,-120,1.598,-5.935,-119.9,1.527,-6.383,-119.8,1.386,-6.817,-119.7,1.199,-7.224,-119.6,0.9874,-7.594,-119.5,0.7722,-7.915,-119.5,0.5753,-8.174,-119.5,0.4186,-8.362,-119.5,0.3236,-8.465,-119.5,0.3071,-8.498,-119.5,0.3628,-8.486,-119.6,0.4779,-8.432,-119.8,0.6395,-8.339,-119.9,0.8349,-8.209,-120.1,1.051,-8.045,-120.3,1.275,-7.851,-120.5,1.495,-7.63,-120.7,1.697,-7.384,-120.9,1.869,-7.116,-121.1,1.997,-6.83,-121.2,2.069,-6.528,-121.4,2.073,-6.213,-121.5,1.995,-5.889,-121.5,1.825,-5.557,-121.5,1.603,-5.208,-121.5]);
children[83] = PositionInterpolator190;

OrientationInterpolator OrientationInterpolator191 = createNode("OrientationInterpolator");
OrientationInterpolator191.DEF = "Inline_Fishswim-ROT-INTERP";
OrientationInterpolator191.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
OrientationInterpolator191.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,0.0907388,0,-1,0,0.165701,0,-1,0,0.2249,0,-1,0,0.2682,0,-1,0,0.2958,0,-1,0,0.3076,0,-1,0,0.3036,0,-1,0,0.2838,0,-1,0,0.2467,0,-1,0,0.177299,0,-1,0,0.0818187,0,1,0,0.0265027,0,1,0,0.134501,0,1,0,0.229101,0,1,0,0.297,0,1,0,0.3326,0,1,0,0.3414,0,1,0,0.3272,0,1,0,0.2939,0,1,0,0.2452,0,1,0,0.184899,0,1,0,0.116801,0,1,0,0.0447313,0,-1,0,0.0275438,0,-1,0,0.0961895,0,-1,0,0.157501,0,-1,0,0.207501,0,-1,0,0.2426,0,-1,0,0.2589,0,-1,0,0.2526,0,-1,0,0.2238,0,-1,0,0.176501,0,-1,0,0.1153,0,-1,0,0.0444908,0,1,0,0.0313569,0,1,0,0.107801,0,1,0,0.1805,0,1,0,0.2449,0,1,0,0.2965,0,1,0,0.331,0,1,0,0.3438,0,1,0,0.3316,0,1,0,0.3045,0,1,0,0.2661,0,1,0,0.2164,0,1,0,0.1555,0,1,0,0.0833692,0,0,1,0]);
children[84] = OrientationInterpolator191;

Switch Switch192 = createNode("Switch");
Switch192.DEF = "FishSwim";
Switch192.whichChoice = 0;
Group Group193 = createNode("Group");
Transform Transform194 = createNode("Transform");
Transform194.DEF = "FishSwimCollisionMover";
Transform194.translation = new SFVec3f(new float[0.797849,-8.23365,-120.062]);
Transform Transform195 = createNode("Transform");
Transform195.DEF = "FishSwimCollisionSpinner";
Transform195.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor196 = createNode("ProximitySensor");
ProximitySensor196.DEF = "EatFishSwim";
ProximitySensor196.size = new SFVec3f(new float[5,5,6]);
ProximitySensor196.center = new SFVec3f(new float[0,2,6]);
Transform195.children = new MFNode();

Transform195.children[0] = ProximitySensor196;

Transform194.children = new MFNode();

Transform194.children[0] = Transform195;

Group193.children = new MFNode();

Group193.children[0] = Transform194;

Transform Transform197 = createNode("Transform");
Transform197.DEF = "Inline_Fishswim-ROOT";
Transform197.translation = new SFVec3f(new float[0.797849,-8.23365,-120.062]);
Transform197.rotation = new SFRotation(new float[0,1,0,0.166717]);
VisibilitySensor VisibilitySensor198 = createNode("VisibilitySensor");
VisibilitySensor198.DEF = "fishSwimVisible";
VisibilitySensor198.size = new SFVec3f(new float[1,1,1]);
Transform197.children = new MFNode();

Transform197.children[0] = VisibilitySensor198;

Inline Inline199 = createNode("Inline");
Inline199.url = new MFString(new java.lang.String["fishswim.x3d"]);
Transform197.children[1] = Inline199;

Group193.children[1] = Transform197;

Switch192.children = new MFNode();

Switch192.children[0] = Group193;

children[85] = Switch192;

TimeSensor TimeSensor200 = createNode("TimeSensor");
TimeSensor200.DEF = "TimeSensor_Fishbott-TIMER";
TimeSensor200.cycleInterval = 12.6;
TimeSensor200.loop = True;
TimeSensor200.startTime = 1;
children[86] = TimeSensor200;

Switch Switch201 = createNode("Switch");
Switch201.DEF = "Fish";
Switch201.whichChoice = 0;
Group Group202 = createNode("Group");
Transform Transform203 = createNode("Transform");
Transform203.DEF = "FishCollisionMover";
Transform203.translation = new SFVec3f(new float[-70.8306,-13.977,-248.981]);
Transform Transform204 = createNode("Transform");
Transform204.DEF = "FishCollisionSpinner";
Transform204.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor205 = createNode("ProximitySensor");
ProximitySensor205.DEF = "EatFish";
ProximitySensor205.size = new SFVec3f(new float[5,5,6]);
ProximitySensor205.center = new SFVec3f(new float[0,1,5]);
Transform204.children = new MFNode();

Transform204.children[0] = ProximitySensor205;

Transform203.children = new MFNode();

Transform203.children[0] = Transform204;

Group202.children = new MFNode();

Group202.children[0] = Transform203;

Transform Transform206 = createNode("Transform");
Transform206.DEF = "Inline_Fishbott-ROOT";
Transform206.translation = new SFVec3f(new float[-70.8306,-13.977,-248.981]);
Transform206.rotation = new SFRotation(new float[-0.176036,-0.979666,-0.0962573,1.28339]);
VisibilitySensor VisibilitySensor207 = createNode("VisibilitySensor");
VisibilitySensor207.DEF = "fishVisible";
VisibilitySensor207.size = new SFVec3f(new float[1,1,1]);
Transform206.children = new MFNode();

Transform206.children[0] = VisibilitySensor207;

Inline Inline208 = createNode("Inline");
Inline208.url = new MFString(new java.lang.String["fishswim.x3d"]);
Transform206.children[1] = Inline208;

Group202.children[1] = Transform206;

Switch201.children = new MFNode();

Switch201.children[0] = Group202;

children[87] = Switch201;

PositionInterpolator PositionInterpolator209 = createNode("PositionInterpolator");
PositionInterpolator209.DEF = "Inline_Fishbott-POS-INTERP";
PositionInterpolator209.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
PositionInterpolator209.keyValue = new MFVec3f(new float[-62.58,-13.97,-248,-60.3,-14.04,-247.6,-58.11,-14.04,-247.1,-55.99,-13.95,-246.6,-53.96,-13.75,-246.3,-51.9,-13.44,-246.8,-49.87,-13.01,-247.8,-48.1,-12.48,-248.6,-46.81,-11.84,-248.6,-45.92,-10.87,-247.7,-45.4,-9.861,-246.5,-45.29,-9.219,-245.2,-45.68,-9.32,-244,-46.62,-10.06,-242.7,-47.84,-11.03,-241.6,-49.03,-11.85,-241.2,-50.1,-12.42,-241.7,-51.19,-12.93,-243,-52.35,-13.37,-244.5,-53.66,-13.71,-245.9,-55.17,-13.94,-246.6,-56.86,-14.05,-247,-58.68,-14.07,-247.2,-60.58,-14.05,-247.4,-62.51,-14.04,-247.6,-64.51,-14.08,-248,-66.61,-14.12,-248.5,-68.71,-14.12,-248.9,-70.74,-13.99,-249,-72.69,-13.71,-248.6,-74.65,-13.3,-247.7,-76.41,-12.79,-246.9,-77.76,-12.21,-246.7,-78.71,-11.37,-247.3,-79.34,-10.45,-248.4,-79.65,-9.759,-249.5,-79.64,-9.58,-250.5,-79.25,-9.961,-251.7,-78.54,-10.67,-252.9,-77.62,-11.44,-253.7,-76.57,-12.07,-253.7,-75.34,-12.68,-252.7,-73.93,-13.29,-251.2,-72.37,-13.79,-249.7,-70.71,-14.08,-248.9,-68.95,-14.19,-248.5,-67.04,-14.16,-248.4,-64.93,-14.09,-248.3,-62.58,-13.97,-248]);
children[88] = PositionInterpolator209;

OrientationInterpolator OrientationInterpolator210 = createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Inline_Fishbott-ROT-INTERP";
OrientationInterpolator210.key = new MFFloat(new float[0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[0,1,0,1.387,0.00527826,0.999949,-0.00860442,1.438,0.0117406,0.999748,-0.0191409,1.487,0.00633917,0.999927,-0.0103303,1.565,-0.0381515,0.997539,0.0588223,1.796,-0.0955276,0.983175,0.155696,2.056,-0.0739823,0.97673,0.201306,1.8,-0.150297,0.961083,0.231796,1.416,-0.496611,0.840718,0.215805,1.105,-0.726613,0.631211,0.271305,0.7756,-0.772669,0.179593,0.608875,0.3776,0.154501,-0.788506,0.595305,0.4326,0.441097,-0.838395,0.320198,0.8782,0.424126,-0.876454,0.227914,1.286,0.306211,-0.933535,0.186407,1.683,0.1735,-0.971601,0.1609,2.041,0.0748678,-0.987571,0.138196,2.282,0.0367917,-0.992947,0.112705,2.326,0.0194807,-0.996435,0.0820829,2.199,0.0117394,-0.998751,0.0485676,1.995,0.00634929,-0.999846,0.0163708,1.807,-0.00395491,-0.999976,-0.00565387,1.724,-0.0128301,-0.999806,-0.0149601,1.725,-0.0190897,-0.999683,-0.0163897,1.763,-0.0255789,-0.999558,-0.0151694,1.809,-0.0353514,-0.99924,-0.0163907,1.833,-0.0518221,-0.998341,-0.025081,1.804,-0.0966312,-0.994312,-0.0447905,1.578,-0.174097,-0.980385,-0.0923886,1.284,-0.215302,-0.960611,-0.175702,1.275,-0.2139,-0.9346,-0.2842,1.495,-0.196103,-0.911712,-0.361005,1.821,-0.173506,-0.907133,-0.383414,2.174,-0.150394,-0.926666,-0.344487,2.476,-0.112299,-0.967188,-0.227897,2.741,-0.0677372,-0.995058,-0.072597,3.012,-0.0339284,-0.997152,0.0673568,3.314,-0.0273792,-0.98917,0.144196,3.668,-0.0533996,-0.981792,0.182299,4.122,0.110004,0.974634,-0.194907,1.666,0.196598,0.963988,-0.179098,1.217,0.290908,0.946526,-0.139504,0.8946,0.282509,0.954231,-0.0981432,0.8004,0.140801,0.989108,-0.0428904,0.9928,0.0340686,0.99936,-0.0108996,1.276,-0.00788971,0.999964,0.00326288,1.419,-0.0138898,0.999887,0.00574493,1.436,-0.00617586,0.999978,0.00255394,1.409,0,1,0,1.387]);
children[89] = OrientationInterpolator210;

OrientationInterpolator OrientationInterpolator211 = createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Surfer_L_Toe03-ROT-INTERP";
OrientationInterpolator211.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036]);
children[90] = OrientationInterpolator211;

OrientationInterpolator OrientationInterpolator212 = createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Surfer_L_Toe02-ROT-INTERP";
OrientationInterpolator212.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator212.keyValue = new MFRotation(new float[0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679]);
children[91] = OrientationInterpolator212;

OrientationInterpolator OrientationInterpolator213 = createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Surfer_L_Toe01-ROT-INTERP";
OrientationInterpolator213.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator213.keyValue = new MFRotation(new float[0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491]);
children[92] = OrientationInterpolator213;

OrientationInterpolator OrientationInterpolator214 = createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Surfer_Heel_L-ROT-INTERP";
OrientationInterpolator214.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator214.keyValue = new MFRotation(new float[-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189]);
children[93] = OrientationInterpolator214;

OrientationInterpolator OrientationInterpolator215 = createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Surfer_Leg_L-ROT-INTERP";
OrientationInterpolator215.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator215.keyValue = new MFRotation(new float[0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142]);
children[94] = OrientationInterpolator215;

OrientationInterpolator OrientationInterpolator216 = createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Surfer_R_Toe03-ROT-INTERP";
OrientationInterpolator216.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator216.keyValue = new MFRotation(new float[0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0]);
children[95] = OrientationInterpolator216;

OrientationInterpolator OrientationInterpolator217 = createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Surfer_R_Toe02-ROT-INTERP";
OrientationInterpolator217.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator217.keyValue = new MFRotation(new float[0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0]);
children[96] = OrientationInterpolator217;

OrientationInterpolator OrientationInterpolator218 = createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Surfer_R_Toe01-ROT-INTERP";
OrientationInterpolator218.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator218.keyValue = new MFRotation(new float[0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0]);
children[97] = OrientationInterpolator218;

OrientationInterpolator OrientationInterpolator219 = createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Surfer_Heel_R-ROT-INTERP";
OrientationInterpolator219.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator219.keyValue = new MFRotation(new float[-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093]);
children[98] = OrientationInterpolator219;

OrientationInterpolator OrientationInterpolator220 = createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Surfer_Leg_R-ROT-INTERP";
OrientationInterpolator220.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator220.keyValue = new MFRotation(new float[0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967]);
children[99] = OrientationInterpolator220;

PositionInterpolator PositionInterpolator221 = createNode("PositionInterpolator");
PositionInterpolator221.DEF = "Surfer_Leg_R-POS-INTERP";
PositionInterpolator221.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688]);
PositionInterpolator221.keyValue = new MFVec3f(new float[-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719]);
children[100] = PositionInterpolator221;

PositionInterpolator PositionInterpolator222 = createNode("PositionInterpolator");
PositionInterpolator222.DEF = "Surfer__Boolean-POS-INTERP";
PositionInterpolator222.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
PositionInterpolator222.keyValue = new MFVec3f(new float[0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0]);
children[101] = PositionInterpolator222;

Switch Switch223 = createNode("Switch");
Switch223.DEF = "Surfer";
Switch223.whichChoice = 0;
Group Group224 = createNode("Group");
Transform Transform225 = createNode("Transform");
Transform225.DEF = "SurferCollisionMover";
Transform225.translation = new SFVec3f(new float[-126.6,0,-384.3]);
Transform Transform226 = createNode("Transform");
Transform226.DEF = "SurferCollisionSpinner";
Transform226.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor227 = createNode("ProximitySensor");
ProximitySensor227.DEF = "EatSurfer";
ProximitySensor227.size = new SFVec3f(new float[4,4,4]);
ProximitySensor227.center = new SFVec3f(new float[0,0,4]);
Transform226.children = new MFNode();

Transform226.children[0] = ProximitySensor227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

Group224.children = new MFNode();

Group224.children[0] = Transform225;

Transform Transform228 = createNode("Transform");
Transform228.DEF = "Inline_Surfer01-ROOT";
Transform228.translation = new SFVec3f(new float[-126.6,0,-384.3]);
Transform228.rotation = new SFRotation(new float[0,-1,0,0.6981]);
ProximitySensor ProximitySensor229 = createNode("ProximitySensor");
ProximitySensor229.DEF = "ScareSurfer";
ProximitySensor229.size = new SFVec3f(new float[23,5,23]);
ProximitySensor229.center = new SFVec3f(new float[0,0,-6]);
Transform228.children = new MFNode();

Transform228.children[0] = ProximitySensor229;

VisibilitySensor VisibilitySensor230 = createNode("VisibilitySensor");
VisibilitySensor230.DEF = "surferVisible";
VisibilitySensor230.size = new SFVec3f(new float[1,1,1]);
Transform228.children[1] = VisibilitySensor230;

TimeSensor TimeSensor231 = createNode("TimeSensor");
TimeSensor231.DEF = "TimeSensor_Surfer-TIMER";
TimeSensor231.cycleInterval = 6.4;
TimeSensor231.loop = True;
TimeSensor231.startTime = 1;
Transform228.children[2] = TimeSensor231;

Transform Transform232 = createNode("Transform");
Transform232.DEF = "Surfer__Boolean-ROOT";
Transform232.translation = new SFVec3f(new float[0,0.221774,0]);
Shape Shape233 = createNode("Shape");
Appearance Appearance234 = createNode("Appearance");
Material Material235 = createNode("Material");
Material235.diffuseColor = new SFColor(new float[0,0,0]);
Material235.emissiveColor = new SFColor(new float[0.007843,0.3922,0.6157]);
Material235.shininess = 0;
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

IndexedFaceSet IndexedFaceSet236 = createNode("IndexedFaceSet");
IndexedFaceSet236.DEF = "Surfer__Boolean-FACES";
IndexedFaceSet236.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,4,5,7,-1,7,6,4,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]);
Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.DEF = "Surfer__Boolean-COORD";
Coordinate237.point = new MFVec3f(new float[-5.98,0,5.451,5.98,0,5.451,-5.98,0,-5.451,5.98,0,-5.451,-5.98,3,5.451,5.98,3,5.451,-5.98,3,-5.451,5.98,3,-5.451]);
IndexedFaceSet236.coord = Coordinate237;

Shape233.geometry = IndexedFaceSet236;

Transform232.child = new undefined();

Transform232.child[0] = Shape233;

Transform Transform238 = createNode("Transform");
Transform238.DEF = "Surfer_Board-ROOT";
Transform238.translation = new SFVec3f(new float[-0.0417,-0.0001604,0.9788]);
Transform238.rotation = new SFRotation(new float[0,0,1,3.142]);
PositionInterpolator PositionInterpolator239 = createNode("PositionInterpolator");
PositionInterpolator239.DEF = "SurferAv_Board-POS-INTERP";
PositionInterpolator239.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75,0.9375,1]);
PositionInterpolator239.keyValue = new MFVec3f(new float[-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788]);
Transform238.children = new MFNode();

Transform238.children[0] = PositionInterpolator239;

OrientationInterpolator OrientationInterpolator240 = createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "SurferAv_Board-ROT-INTERP";
OrientationInterpolator240.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75,0.9375,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142]);
Transform238.children[1] = OrientationInterpolator240;

Shape Shape241 = createNode("Shape");
Appearance Appearance242 = createNode("Appearance");
Material Material243 = createNode("Material");
Material243.diffuseColor = new SFColor(new float[1,0.9882,0]);
Material243.shininess = 0.25;
Appearance242.material = Material243;

Shape241.appearance = Appearance242;

IndexedFaceSet IndexedFaceSet244 = createNode("IndexedFaceSet");
IndexedFaceSet244.DEF = "Surfer_Board-FACES";
IndexedFaceSet244.coordIndex = new MFInt32(new int[25,26,27,-1,28,29,30,-1,31,32,33,-1,34,25,27,-1,34,27,35,-1,34,35,36,-1,37,34,36,-1,38,31,33,-1,33,28,30,-1,33,30,39,-1,38,33,39,-1,38,39,37,-1,40,38,37,-1,41,42,43,-1,44,45,40,-1,44,40,37,-1,46,44,37,-1,43,46,37,-1,41,43,37,-1,47,41,37,-1,47,37,36,-1,48,47,36,-1,48,36,49,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,10,11,32,-1,32,31,10,-1,11,12,33,-1,33,32,11,-1,18,19,25,-1,25,34,18,-1,21,22,35,-1,35,27,21,-1,22,23,36,-1,36,35,22,-1,17,18,34,-1,34,37,17,-1,9,10,31,-1,31,38,9,-1,12,13,28,-1,28,33,12,-1,15,16,39,-1,39,30,15,-1,16,17,37,-1,37,39,16,-1,8,9,38,-1,38,40,8,-1,2,3,42,-1,42,41,2,-1,3,4,43,-1,43,42,3,-1,6,7,45,-1,45,44,6,-1,7,8,40,-1,40,45,7,-1,5,6,44,-1,44,46,5,-1,4,5,46,-1,46,43,4,-1,1,2,41,-1,41,47,1,-1,0,1,47,-1,47,48,0,-1,23,24,49,-1,49,36,23,-1,24,0,48,-1,48,49,24,-1]);
Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.DEF = "Surfer_Board-COORD";
Coordinate245.point = new MFVec3f(new float[0.1657,0,1.216,0.06499,0,1.079,0.08306,0,0.8577,0.1982,0,0.7584,0.08321,0,0.5542,0.09455,0,0.4045,0.2046,0,0.2595,0.4192,0,0.2487,0.4933,0,0.07054,0.611,0,0.005771,0.7443,0,0.02052,0.8736,0,0.1151,1.001,0,-0.9694,0.5954,0,-2.897,0.01121,0,-4.026,-0.5899,0,-2.87,-0.9896,0,-0.9747,-0.8437,0,0.5138,-0.4811,0,2.019,0.5406,0,2.023,0.6324,0,1.543,0.5527,0,1.594,0.406,0,1.551,0.3175,0,1.475,0.2886,0,1.288,0.5152,0.1,1.879,0.6324,0.1,1.543,0.5527,0.1,1.594,0.5674,0.1,-2.807,0.01095,0.1,-3.882,-0.5615,0.1,-2.781,0.7443,0.1,0.02052,0.8736,0.1,0.1151,0.9539,0.1,-0.971,-0.4579,0.1,1.875,0.406,0.1,1.551,0.3175,0.1,1.475,-0.8032,0.1,0.4417,0.611,0.1,0.005771,-0.9422,0.1,-0.976,0.4933,0.1,0.07054,0.08306,0.1,0.8577,0.1982,0.1,0.7584,0.08321,0.1,0.5542,0.2046,0.1,0.2595,0.4192,0.1,0.2487,0.09455,0.1,0.4045,0.06499,0.1,1.079,0.1657,0.1,1.216,0.2886,0.1,1.288]);
IndexedFaceSet244.coord = Coordinate245;

Shape241.geometry = IndexedFaceSet244;

Transform238.child[2] = Shape241;

Transform Transform246 = createNode("Transform");
Transform246.DEF = "Surfer_Leg_R-ROOT";
Transform246.translation = new SFVec3f(new float[-1.012,-0.06006,-1.719]);
Transform246.rotation = new SFRotation(new float[0.0167852,-0.00146719,0.999858,2.967]);
PositionInterpolator PositionInterpolator247 = createNode("PositionInterpolator");
PositionInterpolator247.DEF = "SurferAv_Leg_R-POS-INTERP";
PositionInterpolator247.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator247.keyValue = new MFVec3f(new float[-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306]);
Transform246.children = new MFNode();

Transform246.children[0] = PositionInterpolator247;

OrientationInterpolator OrientationInterpolator248 = createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "SurferAv_Leg_R-ROT-INTERP";
OrientationInterpolator248.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator248.keyValue = new MFRotation(new float[-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233]);
Transform246.children[1] = OrientationInterpolator248;

Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
Material Material251 = createNode("Material");
Material251.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material251.shininess = 0.25;
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

IndexedFaceSet IndexedFaceSet252 = createNode("IndexedFaceSet");
IndexedFaceSet252.DEF = "Surfer_Leg_R-FACES";
IndexedFaceSet252.creaseAngle = 3;
IndexedFaceSet252.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1]);
Coordinate Coordinate253 = createNode("Coordinate");
Coordinate253.DEF = "Surfer_Leg_R-COORD";
Coordinate253.point = new MFVec3f(new float[0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0]);
IndexedFaceSet252.coord = Coordinate253;

Shape249.geometry = IndexedFaceSet252;

Transform246.child[2] = Shape249;

Transform Transform254 = createNode("Transform");
Transform254.DEF = "Surfer_Calf_R-ROOT";
Transform254.translation = new SFVec3f(new float[0.02795,-0.3406,0.07907]);
Transform254.rotation = new SFRotation(new float[-1,0,0,0.0872687]);
Transform254.scale = new SFVec3f(new float[1,1.958,0.8]);
Shape Shape255 = createNode("Shape");
Appearance Appearance256 = createNode("Appearance");
Material Material257 = createNode("Material");
Material257.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material257.shininess = 0.25;
Appearance256.material = Material257;

Shape255.appearance = Appearance256;

IndexedFaceSet IndexedFaceSet258 = createNode("IndexedFaceSet");
IndexedFaceSet258.DEF = "Surfer_Calf_R-FACES";
IndexedFaceSet258.creaseAngle = 3;
IndexedFaceSet258.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.DEF = "Surfer_Calf_R-COORD";
Coordinate259.point = new MFVec3f(new float[0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0]);
IndexedFaceSet258.coord = Coordinate259;

Shape255.geometry = IndexedFaceSet258;

Transform254.child = new undefined();

Transform254.child[0] = Shape255;

Transform246.children[3] = Transform254;

Transform Transform260 = createNode("Transform");
Transform260.DEF = "Surfer_Heel_R-ROOT";
Transform260.translation = new SFVec3f(new float[0.00156,-1.517,-0.02254]);
Transform260.rotation = new SFRotation(new float[0.561764,0.570371,-0.599248,2.05039]);
Shape Shape261 = createNode("Shape");
Appearance Appearance262 = createNode("Appearance");
Material Material263 = createNode("Material");
Material263.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material263.shininess = 0.25;
Appearance262.material = Material263;

Shape261.appearance = Appearance262;

IndexedFaceSet IndexedFaceSet264 = createNode("IndexedFaceSet");
IndexedFaceSet264.DEF = "Surfer_Heel_R-FACES";
IndexedFaceSet264.creaseAngle = 3;
IndexedFaceSet264.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.DEF = "Surfer_Heel_R-COORD";
Coordinate265.point = new MFVec3f(new float[0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0]);
IndexedFaceSet264.coord = Coordinate265;

Shape261.geometry = IndexedFaceSet264;

Transform260.child = new undefined();

Transform260.child[0] = Shape261;

Transform Transform266 = createNode("Transform");
Transform266.DEF = "Surfer_Foot_R-ROOT";
Transform266.translation = new SFVec3f(new float[0.2704,0,-0.02074]);
Transform266.rotation = new SFRotation(new float[1,0,0,0.2618]);
Transform266.scale = new SFVec3f(new float[2.05,1,0.4436]);
PositionInterpolator PositionInterpolator267 = createNode("PositionInterpolator");
PositionInterpolator267.DEF = "SurferAv_Foot_R-POS-INTERP";
PositionInterpolator267.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator267.keyValue = new MFVec3f(new float[0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248]);
Transform266.children = new MFNode();

Transform266.children[0] = PositionInterpolator267;

OrientationInterpolator OrientationInterpolator268 = createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "SurferAv_Foot_R-ROT-INTERP";
OrientationInterpolator268.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator268.keyValue = new MFRotation(new float[-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064]);
Transform266.children[1] = OrientationInterpolator268;

Shape Shape269 = createNode("Shape");
Appearance Appearance270 = createNode("Appearance");
Material Material271 = createNode("Material");
Material271.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material271.shininess = 0.25;
Appearance270.material = Material271;

Shape269.appearance = Appearance270;

IndexedFaceSet IndexedFaceSet272 = createNode("IndexedFaceSet");
IndexedFaceSet272.DEF = "Surfer_Foot_R-FACES";
IndexedFaceSet272.creaseAngle = 3;
IndexedFaceSet272.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.DEF = "Surfer_Foot_R-COORD";
Coordinate273.point = new MFVec3f(new float[0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0]);
IndexedFaceSet272.coord = Coordinate273;

Shape269.geometry = IndexedFaceSet272;

Transform266.child[2] = Shape269;

Transform Transform274 = createNode("Transform");
Transform274.DEF = "Surfer_R_Toe02-ROOT";
Transform274.translation = new SFVec3f(new float[0.2303,0.006877,-0.04773]);
Transform274.scaleOrientation = new SFRotation(new float[-0.0943647,0.793154,-0.601665,0.3048]);
PositionInterpolator PositionInterpolator275 = createNode("PositionInterpolator");
PositionInterpolator275.DEF = "SurferAv_R_Toe02-POS-INTERP";
PositionInterpolator275.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator275.keyValue = new MFVec3f(new float[0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421]);
Transform274.children = new MFNode();

Transform274.children[0] = PositionInterpolator275;

Shape Shape276 = createNode("Shape");
Appearance Appearance277 = createNode("Appearance");
Material Material278 = createNode("Material");
Material278.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material278.shininess = 0.25;
Appearance277.material = Material278;

Shape276.appearance = Appearance277;

IndexedFaceSet IndexedFaceSet279 = createNode("IndexedFaceSet");
IndexedFaceSet279.DEF = "Surfer_R_Toe02-FACES";
IndexedFaceSet279.creaseAngle = 3;
IndexedFaceSet279.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate280 = createNode("Coordinate");
Coordinate280.DEF = "Surfer_R_Toe02-COORD";
Coordinate280.point = new MFVec3f(new float[0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0]);
IndexedFaceSet279.coord = Coordinate280;

Shape276.geometry = IndexedFaceSet279;

Transform274.child[1] = Shape276;

Transform266.children[3] = Transform274;

Transform Transform281 = createNode("Transform");
Transform281.DEF = "Surfer_R_Toe03-ROOT";
Transform281.translation = new SFVec3f(new float[0.1815,0.1298,-0.01264]);
Transform281.scale = new SFVec3f(new float[0.6226,1.016,2.312]);
Transform281.scaleOrientation = new SFRotation(new float[-0.225302,0.706107,-0.671306,0.4788]);
PositionInterpolator PositionInterpolator282 = createNode("PositionInterpolator");
PositionInterpolator282.DEF = "SurferAv_R_Toe03-POS-INTERP";
PositionInterpolator282.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator282.keyValue = new MFVec3f(new float[0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192]);
Transform281.children = new MFNode();

Transform281.children[0] = PositionInterpolator282;

Shape Shape283 = createNode("Shape");
Appearance Appearance284 = createNode("Appearance");
Material Material285 = createNode("Material");
Material285.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material285.shininess = 0.25;
Appearance284.material = Material285;

Shape283.appearance = Appearance284;

IndexedFaceSet IndexedFaceSet286 = createNode("IndexedFaceSet");
IndexedFaceSet286.DEF = "Surfer_R_Toe03-FACES";
IndexedFaceSet286.creaseAngle = 3;
IndexedFaceSet286.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.DEF = "Surfer_R_Toe03-COORD";
Coordinate287.point = new MFVec3f(new float[0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0]);
IndexedFaceSet286.coord = Coordinate287;

Shape283.geometry = IndexedFaceSet286;

Transform281.child[1] = Shape283;

Transform266.children[4] = Transform281;

Transform Transform288 = createNode("Transform");
Transform288.DEF = "Surfer_R_Toe01-ROOT";
Transform288.translation = new SFVec3f(new float[0.2213,-0.1486,0.02582]);
Transform288.scale = new SFVec3f(new float[0.7877,1.009,2.394]);
Transform288.scaleOrientation = new SFRotation(new float[0.477093,0.832788,-0.280796,0.5705]);
PositionInterpolator PositionInterpolator289 = createNode("PositionInterpolator");
PositionInterpolator289.DEF = "SurferAv_R_Toe01-POS-INTERP";
PositionInterpolator289.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator289.keyValue = new MFVec3f(new float[0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507]);
Transform288.children = new MFNode();

Transform288.children[0] = PositionInterpolator289;

Shape Shape290 = createNode("Shape");
Appearance Appearance291 = createNode("Appearance");
Material Material292 = createNode("Material");
Material292.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material292.shininess = 0.25;
Appearance291.material = Material292;

Shape290.appearance = Appearance291;

IndexedFaceSet IndexedFaceSet293 = createNode("IndexedFaceSet");
IndexedFaceSet293.DEF = "Surfer_R_Toe01-FACES";
IndexedFaceSet293.creaseAngle = 3;
IndexedFaceSet293.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate294 = createNode("Coordinate");
Coordinate294.DEF = "Surfer_R_Toe01-COORD";
Coordinate294.point = new MFVec3f(new float[0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0]);
IndexedFaceSet293.coord = Coordinate294;

Shape290.geometry = IndexedFaceSet293;

Transform288.child[1] = Shape290;

Transform266.children[5] = Transform288;

Transform260.children[1] = Transform266;

Transform246.children[4] = Transform260;

Transform238.children[3] = Transform246;

Transform Transform295 = createNode("Transform");
Transform295.DEF = "Surfer_Leg_L-ROOT";
Transform295.translation = new SFVec3f(new float[1.032,-0.004764,-1.719]);
Transform295.rotation = new SFRotation(new float[0.0175088,-0.0391158,0.999081,3.1757]);
PositionInterpolator PositionInterpolator296 = createNode("PositionInterpolator");
PositionInterpolator296.DEF = "SurferAv_Leg_L-POS-INTERP";
PositionInterpolator296.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator296.keyValue = new MFVec3f(new float[1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846]);
Transform295.children = new MFNode();

Transform295.children[0] = PositionInterpolator296;

OrientationInterpolator OrientationInterpolator297 = createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "SurferAv_Leg_L-ROT-INTERP";
OrientationInterpolator297.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862392,-0.720193,-0.688393,3.155]);
Transform295.children[1] = OrientationInterpolator297;

Shape Shape298 = createNode("Shape");
Appearance Appearance299 = createNode("Appearance");
Material Material300 = createNode("Material");
Material300.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material300.shininess = 0.25;
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

IndexedFaceSet IndexedFaceSet301 = createNode("IndexedFaceSet");
IndexedFaceSet301.DEF = "Surfer_Leg_L-FACES";
IndexedFaceSet301.creaseAngle = 3;
IndexedFaceSet301.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1]);
Coordinate Coordinate302 = createNode("Coordinate");
Coordinate302.DEF = "Surfer_Leg_L-COORD";
Coordinate302.point = new MFVec3f(new float[0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0]);
IndexedFaceSet301.coord = Coordinate302;

Shape298.geometry = IndexedFaceSet301;

Transform295.child[2] = Shape298;

Transform Transform303 = createNode("Transform");
Transform303.DEF = "Surfer_Calf_L-ROOT";
Transform303.translation = new SFVec3f(new float[-0.03083,-0.4032,0.05773]);
Transform303.rotation = new SFRotation(new float[-1,0,0,0.0872687]);
Transform303.scale = new SFVec3f(new float[1,1.958,0.8]);
Shape Shape304 = createNode("Shape");
Appearance Appearance305 = createNode("Appearance");
Material Material306 = createNode("Material");
Material306.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material306.shininess = 0.25;
Appearance305.material = Material306;

Shape304.appearance = Appearance305;

IndexedFaceSet IndexedFaceSet307 = createNode("IndexedFaceSet");
IndexedFaceSet307.DEF = "Surfer_Calf_L-FACES";
IndexedFaceSet307.creaseAngle = 3;
IndexedFaceSet307.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate308 = createNode("Coordinate");
Coordinate308.DEF = "Surfer_Calf_L-COORD";
Coordinate308.point = new MFVec3f(new float[0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0]);
IndexedFaceSet307.coord = Coordinate308;

Shape304.geometry = IndexedFaceSet307;

Transform303.child = new undefined();

Transform303.child[0] = Shape304;

Transform295.children[3] = Transform303;

Transform Transform309 = createNode("Transform");
Transform309.DEF = "Surfer_Heel_L-ROOT";
Transform309.translation = new SFVec3f(new float[0.001562,-1.517,-0.02254]);
Transform309.rotation = new SFRotation(new float[-0.650792,-0.524689,0.54879,4.06427]);
Shape Shape310 = createNode("Shape");
Appearance Appearance311 = createNode("Appearance");
Material Material312 = createNode("Material");
Material312.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material312.shininess = 0.25;
Appearance311.material = Material312;

Shape310.appearance = Appearance311;

IndexedFaceSet IndexedFaceSet313 = createNode("IndexedFaceSet");
IndexedFaceSet313.DEF = "Surfer_Heel_L-FACES";
IndexedFaceSet313.creaseAngle = 3;
IndexedFaceSet313.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate314 = createNode("Coordinate");
Coordinate314.DEF = "Surfer_Heel_L-COORD";
Coordinate314.point = new MFVec3f(new float[0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0]);
IndexedFaceSet313.coord = Coordinate314;

Shape310.geometry = IndexedFaceSet313;

Transform309.child = new undefined();

Transform309.child[0] = Shape310;

Transform Transform315 = createNode("Transform");
Transform315.DEF = "Surfer_Foot_L-ROOT";
Transform315.translation = new SFVec3f(new float[0.2704,0,-0.02074]);
Transform315.rotation = new SFRotation(new float[-1,0,0,0.3491]);
Transform315.scale = new SFVec3f(new float[2.05,1,0.4436]);
PositionInterpolator PositionInterpolator316 = createNode("PositionInterpolator");
PositionInterpolator316.DEF = "SurferAv_Foot_L-POS-INTERP";
PositionInterpolator316.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator316.keyValue = new MFVec3f(new float[0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438]);
Transform315.children = new MFNode();

Transform315.children[0] = PositionInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "SurferAv_Foot_L-ROT-INTERP";
OrientationInterpolator317.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator317.keyValue = new MFRotation(new float[-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539]);
Transform315.children[1] = OrientationInterpolator317;

Shape Shape318 = createNode("Shape");
Appearance Appearance319 = createNode("Appearance");
Material Material320 = createNode("Material");
Material320.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material320.shininess = 0.25;
Appearance319.material = Material320;

Shape318.appearance = Appearance319;

IndexedFaceSet IndexedFaceSet321 = createNode("IndexedFaceSet");
IndexedFaceSet321.DEF = "Surfer_Foot_L-FACES";
IndexedFaceSet321.creaseAngle = 3;
IndexedFaceSet321.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.DEF = "Surfer_Foot_L-COORD";
Coordinate322.point = new MFVec3f(new float[0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0]);
IndexedFaceSet321.coord = Coordinate322;

Shape318.geometry = IndexedFaceSet321;

Transform315.child[2] = Shape318;

Transform Transform323 = createNode("Transform");
Transform323.DEF = "Surfer_L_Toe01-ROOT";
Transform323.translation = new SFVec3f(new float[0.2209,0.1316,0.1773]);
Transform323.rotation = new SFRotation(new float[0,1,0,0.521445]);
Transform323.scaleOrientation = new SFRotation(new float[-0.522691,0.780787,0.342294,0.5581]);
Shape Shape324 = createNode("Shape");
Appearance Appearance325 = createNode("Appearance");
Material Material326 = createNode("Material");
Material326.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material326.shininess = 0.25;
Appearance325.material = Material326;

Shape324.appearance = Appearance325;

IndexedFaceSet IndexedFaceSet327 = createNode("IndexedFaceSet");
IndexedFaceSet327.DEF = "Surfer_L_Toe01-FACES";
IndexedFaceSet327.creaseAngle = 3;
IndexedFaceSet327.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.DEF = "Surfer_L_Toe01-COORD";
Coordinate328.point = new MFVec3f(new float[0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0]);
IndexedFaceSet327.coord = Coordinate328;

Shape324.geometry = IndexedFaceSet327;

Transform323.child = new undefined();

Transform323.child[0] = Shape324;

Transform315.children[3] = Transform323;

Transform Transform329 = createNode("Transform");
Transform329.DEF = "Surfer_L_Toe02-ROOT";
Transform329.translation = new SFVec3f(new float[0.2165,-0.01985,0.1629]);
Transform329.rotation = new SFRotation(new float[0,-1,0,0.487246]);
Transform329.scaleOrientation = new SFRotation(new float[-0.0953681,-0.782984,0.614688,0.4729]);
Shape Shape330 = createNode("Shape");
Appearance Appearance331 = createNode("Appearance");
Material Material332 = createNode("Material");
Material332.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material332.shininess = 0.25;
Appearance331.material = Material332;

Shape330.appearance = Appearance331;

IndexedFaceSet IndexedFaceSet333 = createNode("IndexedFaceSet");
IndexedFaceSet333.DEF = "Surfer_L_Toe02-FACES";
IndexedFaceSet333.creaseAngle = 3;
IndexedFaceSet333.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate334 = createNode("Coordinate");
Coordinate334.DEF = "Surfer_L_Toe02-COORD";
Coordinate334.point = new MFVec3f(new float[0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0]);
IndexedFaceSet333.coord = Coordinate334;

Shape330.geometry = IndexedFaceSet333;

Transform329.child = new undefined();

Transform329.child[0] = Shape330;

Transform315.children[4] = Transform329;

Transform Transform335 = createNode("Transform");
Transform335.DEF = "Surfer_L_Toe03-ROOT";
Transform335.translation = new SFVec3f(new float[0.1743,-0.1208,0.1519]);
Transform335.rotation = new SFRotation(new float[0,-1,0,1.21168]);
Transform335.scaleOrientation = new SFRotation(new float[-0.0780288,-0.882186,0.464392,0.5791]);
Shape Shape336 = createNode("Shape");
Appearance Appearance337 = createNode("Appearance");
Material Material338 = createNode("Material");
Material338.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material338.shininess = 0.25;
Appearance337.material = Material338;

Shape336.appearance = Appearance337;

IndexedFaceSet IndexedFaceSet339 = createNode("IndexedFaceSet");
IndexedFaceSet339.DEF = "Surfer_L_Toe03-FACES";
IndexedFaceSet339.creaseAngle = 3;
IndexedFaceSet339.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate340 = createNode("Coordinate");
Coordinate340.DEF = "Surfer_L_Toe03-COORD";
Coordinate340.point = new MFVec3f(new float[0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0]);
IndexedFaceSet339.coord = Coordinate340;

Shape336.geometry = IndexedFaceSet339;

Transform335.child = new undefined();

Transform335.child[0] = Shape336;

Transform315.children[5] = Transform335;

Transform309.children[1] = Transform315;

Transform295.children[4] = Transform309;

Transform238.children[4] = Transform295;

Transform232.children[1] = Transform238;

Transform228.children[3] = Transform232;

Group224.children[1] = Transform228;

Switch223.children = new MFNode();

Switch223.children[0] = Group224;

children[102] = Switch223;

PositionInterpolator PositionInterpolator341 = createNode("PositionInterpolator");
PositionInterpolator341.DEF = "SurferFloat__Boolean-POS-INTERP";
PositionInterpolator341.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
PositionInterpolator341.keyValue = new MFVec3f(new float[0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0]);
children[103] = PositionInterpolator341;

TimeSensor TimeSensor342 = createNode("TimeSensor");
TimeSensor342.DEF = "TimeSensor_Surfer_Av01-TIMER";
children[104] = TimeSensor342;

TimeSensor TimeSensor343 = createNode("TimeSensor");
TimeSensor343.DEF = "TimeSensor_SurferFloat-TIMER";
TimeSensor343.cycleInterval = 3.2;
TimeSensor343.loop = True;
children[105] = TimeSensor343;

Script Script344 = createNode("Script");
Script344.DEF = "SurferCollide";
Script344.mustEvaluate = True;
field field345 = createNode("field");
field345.name = "runAway";
field345.accessType = "inputOnly";
field345.type = "SFTime";
Script344.field = new MFNode();

Script344.field[0] = field345;

field field346 = createNode("field");
field346.name = "inputFraction";
field346.accessType = "inputOnly";
field346.type = "SFFloat";
Script344.field[1] = field346;

field field347 = createNode("field");
field347.name = "allSafe";
field347.accessType = "inputOnly";
field347.type = "SFTime";
Script344.field[2] = field347;

field field348 = createNode("field");
field348.name = "beingEaten";
field348.accessType = "inputOnly";
field348.type = "SFBool";
Script344.field[3] = field348;

field field349 = createNode("field");
field349.name = "scared";
field349.accessType = "initializeOnly";
field349.type = "SFInt32";
Script344.field[4] = field349;

field field350 = createNode("field");
field350.name = "switcher";
field350.accessType = "outputOnly";
field350.type = "SFInt32";
Script344.field[5] = field350;

field field351 = createNode("field");
field351.name = "startAnim";
field351.accessType = "outputOnly";
field351.type = "SFTime";
Script344.field[6] = field351;

field field352 = createNode("field");
field352.name = "outputFraction";
field352.accessType = "outputOnly";
field352.type = "SFFloat";
Script344.field[7] = field352;

field field353 = createNode("field");
field353.name = "eatEnabled";
field353.accessType = "outputOnly";
field353.type = "SFBool";
Script344.field[8] = field353;

field field354 = createNode("field");
field354.name = "startAnimLoop";
field354.accessType = "outputOnly";
field354.type = "SFTime";
Script344.field[9] = field354;

field field355 = createNode("field");
field355.name = "stopAnimLoop";
field355.accessType = "outputOnly";
field355.type = "SFTime";
Script344.field[10] = field355;

field field356 = createNode("field");
field356.name = "startFloating";
field356.accessType = "outputOnly";
field356.type = "SFTime";
Script344.field[11] = field356;

field field357 = createNode("field");
field357.name = "stopFloating";
field357.accessType = "outputOnly";
field357.type = "SFTime";
Script344.field[12] = field357;

field field358 = createNode("field");
field358.name = "playOops";
field358.accessType = "outputOnly";
field358.type = "SFTime";
Script344.field[13] = field358;

field field359 = createNode("field");
field359.name = "avoidEnabled";
field359.accessType = "outputOnly";
field359.type = "SFBool";
Script344.field[14] = field359;


Script344.setSourceCode(`javascript:\n"+
"		function beingEaten(input) {\n"+
"			if (input == TRUE) {\n"+
"				avoidEnabled = FALSE;\n"+
"				eatEnabled = FALSE;\n"+
"			}\n"+
"		}	\n"+
"		function runAway(input, time){\n"+
"			switcher = 1;\n"+
"			scared = 1;\n"+
"			eatEnabled = FALSE;\n"+
"			startAnim = time;\n"+
"			playOops = time;\n"+
"			stopAnimLoop = time;\n"+
"			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"	  function allSafe(input, time) {\n"+
"			scared = 0;\n"+
"			stopFloating = time;\n"+
"			startAnim = time;\n"+
"		}\n"+
"		function inputFraction(input, time) {\n"+
"			if (scared == 1) {\n"+
"				outputFraction = input;\n"+
"				if (input == 1.0) {\n"+
"					startFloating = time;\n"+
"				}\n"+
"			} else {\n"+
"				outputFraction = 1.0 - input;\n"+
"				if (input == 1.0) {\n"+
"					switcher = 0;\n"+
"					eatEnabled = TRUE;\n"+
"					startAnimLoop = time;\n"+
"				}\n"+
"			}\n"+
"		}`)
children[106] = Script344;

TimeSensor TimeSensor360 = createNode("TimeSensor");
TimeSensor360.DEF = "TimeSensor_Surfer2-TIMER";
TimeSensor360.cycleInterval = 6.4;
TimeSensor360.loop = True;
TimeSensor360.startTime = 1;
children[107] = TimeSensor360;

OrientationInterpolator OrientationInterpolator361 = createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Surfer2_L_Toe03-ROT-INTERP";
OrientationInterpolator361.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator361.keyValue = new MFRotation(new float[0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036]);
children[108] = OrientationInterpolator361;

OrientationInterpolator OrientationInterpolator362 = createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Surfer2_L_Toe02-ROT-INTERP";
OrientationInterpolator362.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator362.keyValue = new MFRotation(new float[0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679]);
children[109] = OrientationInterpolator362;

OrientationInterpolator OrientationInterpolator363 = createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Surfer2_L_Toe01-ROT-INTERP";
OrientationInterpolator363.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator363.keyValue = new MFRotation(new float[0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491]);
children[110] = OrientationInterpolator363;

OrientationInterpolator OrientationInterpolator364 = createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Surfer2_Heel_L-ROT-INTERP";
OrientationInterpolator364.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator364.keyValue = new MFRotation(new float[-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189]);
children[111] = OrientationInterpolator364;

OrientationInterpolator OrientationInterpolator365 = createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Surfer2_Leg_L-ROT-INTERP";
OrientationInterpolator365.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator365.keyValue = new MFRotation(new float[0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142]);
children[112] = OrientationInterpolator365;

OrientationInterpolator OrientationInterpolator366 = createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Surfer2_R_Toe03-ROT-INTERP";
OrientationInterpolator366.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator366.keyValue = new MFRotation(new float[0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0]);
children[113] = OrientationInterpolator366;

OrientationInterpolator OrientationInterpolator367 = createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Surfer2_R_Toe02-ROT-INTERP";
OrientationInterpolator367.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator367.keyValue = new MFRotation(new float[0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0]);
children[114] = OrientationInterpolator367;

OrientationInterpolator OrientationInterpolator368 = createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Surfer2_R_Toe01-ROT-INTERP";
OrientationInterpolator368.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]);
OrientationInterpolator368.keyValue = new MFRotation(new float[0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0]);
children[115] = OrientationInterpolator368;

OrientationInterpolator OrientationInterpolator369 = createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Surfer2_Heel_R-ROT-INTERP";
OrientationInterpolator369.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator369.keyValue = new MFRotation(new float[-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093]);
children[116] = OrientationInterpolator369;

OrientationInterpolator OrientationInterpolator370 = createNode("OrientationInterpolator");
OrientationInterpolator370.DEF = "Surfer2_Leg_R-ROT-INTERP";
OrientationInterpolator370.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
OrientationInterpolator370.keyValue = new MFRotation(new float[0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967]);
children[117] = OrientationInterpolator370;

PositionInterpolator PositionInterpolator371 = createNode("PositionInterpolator");
PositionInterpolator371.DEF = "Surfer2_Leg_R-POS-INTERP";
PositionInterpolator371.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688]);
PositionInterpolator371.keyValue = new MFVec3f(new float[-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719]);
children[118] = PositionInterpolator371;

PositionInterpolator PositionInterpolator372 = createNode("PositionInterpolator");
PositionInterpolator372.DEF = "Surfer2__Boolean-POS-INTERP";
PositionInterpolator372.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
PositionInterpolator372.keyValue = new MFVec3f(new float[0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0]);
children[119] = PositionInterpolator372;

Switch Switch373 = createNode("Switch");
Switch373.DEF = "Surfer2";
Switch373.whichChoice = 0;
Group Group374 = createNode("Group");
Transform Transform375 = createNode("Transform");
Transform375.DEF = "Surfer2CollisionMover";
Transform375.translation = new SFVec3f(new float[-30.65,0,-483.6]);
Transform Transform376 = createNode("Transform");
Transform376.DEF = "Surfer2CollisionSpinner";
Transform376.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor377 = createNode("ProximitySensor");
ProximitySensor377.DEF = "EatSurfer2";
ProximitySensor377.size = new SFVec3f(new float[4,4,4]);
ProximitySensor377.center = new SFVec3f(new float[0,0,4]);
Transform376.children = new MFNode();

Transform376.children[0] = ProximitySensor377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

Group374.children = new MFNode();

Group374.children[0] = Transform375;

Transform Transform378 = createNode("Transform");
Transform378.DEF = "Inline_Surfer02-ROOT";
Transform378.translation = new SFVec3f(new float[-30.65,0,-483.6]);
Transform378.rotation = new SFRotation(new float[0,-1,0,0.6981]);
ProximitySensor ProximitySensor379 = createNode("ProximitySensor");
ProximitySensor379.DEF = "ScareSurfer2";
ProximitySensor379.size = new SFVec3f(new float[23,5,23]);
ProximitySensor379.center = new SFVec3f(new float[0,0,-6]);
Transform378.children = new MFNode();

Transform378.children[0] = ProximitySensor379;

VisibilitySensor VisibilitySensor380 = createNode("VisibilitySensor");
VisibilitySensor380.DEF = "surfer2Visible";
VisibilitySensor380.size = new SFVec3f(new float[1,1,1]);
Transform378.children[1] = VisibilitySensor380;

Transform Transform381 = createNode("Transform");
Transform381.DEF = "Surfer2__Boolean-ROOT";
Transform381.translation = new SFVec3f(new float[0,0.221774,0]);
Shape Shape382 = createNode("Shape");
Appearance Appearance383 = createNode("Appearance");
Material Material384 = createNode("Material");
Material384.diffuseColor = new SFColor(new float[0,0,0]);
Material384.emissiveColor = new SFColor(new float[0.007843,0.3922,0.6157]);
Material384.shininess = 0;
Appearance383.material = Material384;

Shape382.appearance = Appearance383;

IndexedFaceSet IndexedFaceSet385 = createNode("IndexedFaceSet");
IndexedFaceSet385.USE = "Surfer__Boolean-FACES";
Shape382.geometry = IndexedFaceSet385;

Transform381.child = new undefined();

Transform381.child[0] = Shape382;

Transform Transform386 = createNode("Transform");
Transform386.DEF = "Surfer2_Board-ROOT";
Transform386.translation = new SFVec3f(new float[-0.0417,-0.0001604,0.9788]);
Transform386.rotation = new SFRotation(new float[0,0,1,3.142]);
PositionInterpolator PositionInterpolator387 = createNode("PositionInterpolator");
PositionInterpolator387.DEF = "Surfer2Av_Board-POS-INTERP";
PositionInterpolator387.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75,0.9375,1]);
PositionInterpolator387.keyValue = new MFVec3f(new float[-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788]);
Transform386.children = new MFNode();

Transform386.children[0] = PositionInterpolator387;

OrientationInterpolator OrientationInterpolator388 = createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Surfer2Av_Board-ROT-INTERP";
OrientationInterpolator388.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75,0.9375,1]);
OrientationInterpolator388.keyValue = new MFRotation(new float[0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142]);
Transform386.children[1] = OrientationInterpolator388;

Shape Shape389 = createNode("Shape");
Appearance Appearance390 = createNode("Appearance");
Material Material391 = createNode("Material");
Material391.diffuseColor = new SFColor(new float[1,0.9882,0]);
Material391.shininess = 0.25;
Appearance390.material = Material391;

Shape389.appearance = Appearance390;

IndexedFaceSet IndexedFaceSet392 = createNode("IndexedFaceSet");
IndexedFaceSet392.USE = "Surfer_Board-FACES";
Shape389.geometry = IndexedFaceSet392;

Transform386.child[2] = Shape389;

Transform Transform393 = createNode("Transform");
Transform393.DEF = "Surfer2_Leg_R-ROOT";
Transform393.translation = new SFVec3f(new float[-1.012,-0.06006,-1.719]);
Transform393.rotation = new SFRotation(new float[0.0167852,-0.00146719,0.999858,2.967]);
PositionInterpolator PositionInterpolator394 = createNode("PositionInterpolator");
PositionInterpolator394.DEF = "Surfer2Av_Leg_R-POS-INTERP";
PositionInterpolator394.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator394.keyValue = new MFVec3f(new float[-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306]);
Transform393.children = new MFNode();

Transform393.children[0] = PositionInterpolator394;

OrientationInterpolator OrientationInterpolator395 = createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Surfer2Av_Leg_R-ROT-INTERP";
OrientationInterpolator395.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator395.keyValue = new MFRotation(new float[-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233]);
Transform393.children[1] = OrientationInterpolator395;

Shape Shape396 = createNode("Shape");
Appearance Appearance397 = createNode("Appearance");
Material Material398 = createNode("Material");
Material398.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material398.shininess = 0.25;
Appearance397.material = Material398;

Shape396.appearance = Appearance397;

IndexedFaceSet IndexedFaceSet399 = createNode("IndexedFaceSet");
IndexedFaceSet399.USE = "Surfer_Leg_R-FACES";
Shape396.geometry = IndexedFaceSet399;

Transform393.child[2] = Shape396;

Transform Transform400 = createNode("Transform");
Transform400.DEF = "Surfer2_Calf_R-ROOT";
Transform400.translation = new SFVec3f(new float[0.02795,-0.3406,0.07907]);
Transform400.rotation = new SFRotation(new float[-1,0,0,0.0872687]);
Transform400.scale = new SFVec3f(new float[1,1.958,0.8]);
Shape Shape401 = createNode("Shape");
Appearance Appearance402 = createNode("Appearance");
Material Material403 = createNode("Material");
Material403.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material403.shininess = 0.25;
Appearance402.material = Material403;

Shape401.appearance = Appearance402;

IndexedFaceSet IndexedFaceSet404 = createNode("IndexedFaceSet");
IndexedFaceSet404.USE = "Surfer_Calf_R-FACES";
Shape401.geometry = IndexedFaceSet404;

Transform400.child = new undefined();

Transform400.child[0] = Shape401;

Transform393.children[3] = Transform400;

Transform Transform405 = createNode("Transform");
Transform405.DEF = "Surfer2_Heel_R-ROOT";
Transform405.translation = new SFVec3f(new float[0.00156,-1.517,-0.02254]);
Transform405.rotation = new SFRotation(new float[0.561764,0.570371,-0.599248,2.05039]);
Shape Shape406 = createNode("Shape");
Appearance Appearance407 = createNode("Appearance");
Material Material408 = createNode("Material");
Material408.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material408.shininess = 0.25;
Appearance407.material = Material408;

Shape406.appearance = Appearance407;

IndexedFaceSet IndexedFaceSet409 = createNode("IndexedFaceSet");
IndexedFaceSet409.USE = "Surfer_Heel_R-FACES";
Shape406.geometry = IndexedFaceSet409;

Transform405.child = new undefined();

Transform405.child[0] = Shape406;

Transform Transform410 = createNode("Transform");
Transform410.DEF = "Surfer2_Foot_R-ROOT";
Transform410.translation = new SFVec3f(new float[0.2704,0,-0.02074]);
Transform410.rotation = new SFRotation(new float[1,0,0,0.2618]);
Transform410.scale = new SFVec3f(new float[2.05,1,0.4436]);
PositionInterpolator PositionInterpolator411 = createNode("PositionInterpolator");
PositionInterpolator411.DEF = "Surfer2Av_Foot_R-POS-INTERP";
PositionInterpolator411.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator411.keyValue = new MFVec3f(new float[0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248]);
Transform410.children = new MFNode();

Transform410.children[0] = PositionInterpolator411;

OrientationInterpolator OrientationInterpolator412 = createNode("OrientationInterpolator");
OrientationInterpolator412.DEF = "Surfer2Av_Foot_R-ROT-INTERP";
OrientationInterpolator412.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator412.keyValue = new MFRotation(new float[-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064]);
Transform410.children[1] = OrientationInterpolator412;

Shape Shape413 = createNode("Shape");
Appearance Appearance414 = createNode("Appearance");
Material Material415 = createNode("Material");
Material415.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material415.shininess = 0.25;
Appearance414.material = Material415;

Shape413.appearance = Appearance414;

IndexedFaceSet IndexedFaceSet416 = createNode("IndexedFaceSet");
IndexedFaceSet416.USE = "Surfer_Foot_R-FACES";
Shape413.geometry = IndexedFaceSet416;

Transform410.child[2] = Shape413;

Transform Transform417 = createNode("Transform");
Transform417.DEF = "Surfer2_R_Toe02-ROOT";
Transform417.translation = new SFVec3f(new float[0.2303,0.006877,-0.04773]);
Transform417.scaleOrientation = new SFRotation(new float[-0.0943647,0.793154,-0.601665,0.3048]);
PositionInterpolator PositionInterpolator418 = createNode("PositionInterpolator");
PositionInterpolator418.DEF = "Surfer2Av_R_Toe02-POS-INTERP";
PositionInterpolator418.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator418.keyValue = new MFVec3f(new float[0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421]);
Transform417.children = new MFNode();

Transform417.children[0] = PositionInterpolator418;

Shape Shape419 = createNode("Shape");
Appearance Appearance420 = createNode("Appearance");
Material Material421 = createNode("Material");
Material421.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material421.shininess = 0.25;
Appearance420.material = Material421;

Shape419.appearance = Appearance420;

IndexedFaceSet IndexedFaceSet422 = createNode("IndexedFaceSet");
IndexedFaceSet422.USE = "Surfer_R_Toe02-FACES";
Shape419.geometry = IndexedFaceSet422;

Transform417.child[1] = Shape419;

Transform410.children[3] = Transform417;

Transform Transform423 = createNode("Transform");
Transform423.DEF = "Surfer2_R_Toe03-ROOT";
Transform423.translation = new SFVec3f(new float[0.1815,0.1298,-0.01264]);
Transform423.scale = new SFVec3f(new float[0.6226,1.016,2.312]);
Transform423.scaleOrientation = new SFRotation(new float[-0.225302,0.706107,-0.671306,0.4788]);
PositionInterpolator PositionInterpolator424 = createNode("PositionInterpolator");
PositionInterpolator424.DEF = "Surfer2Av_R_Toe03-POS-INTERP";
PositionInterpolator424.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator424.keyValue = new MFVec3f(new float[0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192]);
Transform423.children = new MFNode();

Transform423.children[0] = PositionInterpolator424;

Shape Shape425 = createNode("Shape");
Appearance Appearance426 = createNode("Appearance");
Material Material427 = createNode("Material");
Material427.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material427.shininess = 0.25;
Appearance426.material = Material427;

Shape425.appearance = Appearance426;

IndexedFaceSet IndexedFaceSet428 = createNode("IndexedFaceSet");
IndexedFaceSet428.USE = "Surfer_R_Toe03-FACES";
Shape425.geometry = IndexedFaceSet428;

Transform423.child[1] = Shape425;

Transform410.children[4] = Transform423;

Transform Transform429 = createNode("Transform");
Transform429.DEF = "Surfer2_R_Toe01-ROOT";
Transform429.translation = new SFVec3f(new float[0.2213,-0.1486,0.02582]);
Transform429.scale = new SFVec3f(new float[0.7877,1.009,2.394]);
Transform429.scaleOrientation = new SFRotation(new float[0.477093,0.832788,-0.280796,0.5705]);
PositionInterpolator PositionInterpolator430 = createNode("PositionInterpolator");
PositionInterpolator430.DEF = "Surfer2Av_R_Toe01-POS-INTERP";
PositionInterpolator430.key = new MFFloat(new float[0,0.1875,0.375]);
PositionInterpolator430.keyValue = new MFVec3f(new float[0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507]);
Transform429.children = new MFNode();

Transform429.children[0] = PositionInterpolator430;

Shape Shape431 = createNode("Shape");
Appearance Appearance432 = createNode("Appearance");
Material Material433 = createNode("Material");
Material433.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material433.shininess = 0.25;
Appearance432.material = Material433;

Shape431.appearance = Appearance432;

IndexedFaceSet IndexedFaceSet434 = createNode("IndexedFaceSet");
IndexedFaceSet434.USE = "Surfer_R_Toe01-FACES";
Shape431.geometry = IndexedFaceSet434;

Transform429.child[1] = Shape431;

Transform410.children[5] = Transform429;

Transform405.children[1] = Transform410;

Transform393.children[4] = Transform405;

Transform386.children[3] = Transform393;

Transform Transform435 = createNode("Transform");
Transform435.DEF = "Surfer2_Leg_L-ROOT";
Transform435.translation = new SFVec3f(new float[1.032,-0.004764,-1.719]);
Transform435.rotation = new SFRotation(new float[0.0175088,-0.0391158,0.999081,3.1757]);
PositionInterpolator PositionInterpolator436 = createNode("PositionInterpolator");
PositionInterpolator436.DEF = "Surfer2Av_Leg_L-POS-INTERP";
PositionInterpolator436.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator436.keyValue = new MFVec3f(new float[1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846]);
Transform435.children = new MFNode();

Transform435.children[0] = PositionInterpolator436;

OrientationInterpolator OrientationInterpolator437 = createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Surfer2Av_Leg_L-ROT-INTERP";
OrientationInterpolator437.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator437.keyValue = new MFRotation(new float[0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862391,-0.720193,-0.688393,3.155]);
Transform435.children[1] = OrientationInterpolator437;

Shape Shape438 = createNode("Shape");
Appearance Appearance439 = createNode("Appearance");
Material Material440 = createNode("Material");
Material440.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material440.shininess = 0.25;
Appearance439.material = Material440;

Shape438.appearance = Appearance439;

IndexedFaceSet IndexedFaceSet441 = createNode("IndexedFaceSet");
IndexedFaceSet441.USE = "Surfer_Leg_L-FACES";
Shape438.geometry = IndexedFaceSet441;

Transform435.child[2] = Shape438;

Transform Transform442 = createNode("Transform");
Transform442.DEF = "Surfer2_Calf_L-ROOT";
Transform442.translation = new SFVec3f(new float[-0.03083,-0.4032,0.05773]);
Transform442.rotation = new SFRotation(new float[-1,0,0,0.0872687]);
Transform442.scale = new SFVec3f(new float[1,1.958,0.8]);
Shape Shape443 = createNode("Shape");
Appearance Appearance444 = createNode("Appearance");
Material Material445 = createNode("Material");
Material445.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material445.shininess = 0.25;
Appearance444.material = Material445;

Shape443.appearance = Appearance444;

IndexedFaceSet IndexedFaceSet446 = createNode("IndexedFaceSet");
IndexedFaceSet446.USE = "Surfer_Calf_L-FACES";
Shape443.geometry = IndexedFaceSet446;

Transform442.child = new undefined();

Transform442.child[0] = Shape443;

Transform435.children[3] = Transform442;

Transform Transform447 = createNode("Transform");
Transform447.DEF = "Surfer2_Heel_L-ROOT";
Transform447.translation = new SFVec3f(new float[0.001562,-1.517,-0.02254]);
Transform447.rotation = new SFRotation(new float[-0.650792,-0.524689,0.54879,4.06427]);
Shape Shape448 = createNode("Shape");
Appearance Appearance449 = createNode("Appearance");
Material Material450 = createNode("Material");
Material450.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material450.shininess = 0.25;
Appearance449.material = Material450;

Shape448.appearance = Appearance449;

IndexedFaceSet IndexedFaceSet451 = createNode("IndexedFaceSet");
IndexedFaceSet451.USE = "Surfer_Heel_L-FACES";
Shape448.geometry = IndexedFaceSet451;

Transform447.child = new undefined();

Transform447.child[0] = Shape448;

Transform Transform452 = createNode("Transform");
Transform452.DEF = "Surfer2_Foot_L-ROOT";
Transform452.translation = new SFVec3f(new float[0.2704,0,-0.02074]);
Transform452.rotation = new SFRotation(new float[-1,0,0,0.3491]);
Transform452.scale = new SFVec3f(new float[2.05,1,0.4436]);
PositionInterpolator PositionInterpolator453 = createNode("PositionInterpolator");
PositionInterpolator453.DEF = "Surfer2Av_Foot_L-POS-INTERP";
PositionInterpolator453.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
PositionInterpolator453.keyValue = new MFVec3f(new float[0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438]);
Transform452.children = new MFNode();

Transform452.children[0] = PositionInterpolator453;

OrientationInterpolator OrientationInterpolator454 = createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Surfer2Av_Foot_L-ROT-INTERP";
OrientationInterpolator454.key = new MFFloat(new float[0,0.1875,0.375,0.5625,0.75]);
OrientationInterpolator454.keyValue = new MFRotation(new float[-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539]);
Transform452.children[1] = OrientationInterpolator454;

Shape Shape455 = createNode("Shape");
Appearance Appearance456 = createNode("Appearance");
Material Material457 = createNode("Material");
Material457.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material457.shininess = 0.25;
Appearance456.material = Material457;

Shape455.appearance = Appearance456;

IndexedFaceSet IndexedFaceSet458 = createNode("IndexedFaceSet");
IndexedFaceSet458.USE = "Surfer_Foot_L-FACES";
Shape455.geometry = IndexedFaceSet458;

Transform452.child[2] = Shape455;

Transform Transform459 = createNode("Transform");
Transform459.DEF = "Surfer2_L_Toe01-ROOT";
Transform459.translation = new SFVec3f(new float[0.2209,0.1316,0.1773]);
Transform459.rotation = new SFRotation(new float[0,1,0,0.521445]);
Transform459.scaleOrientation = new SFRotation(new float[-0.522691,0.780787,0.342294,0.5581]);
Shape Shape460 = createNode("Shape");
Appearance Appearance461 = createNode("Appearance");
Material Material462 = createNode("Material");
Material462.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material462.shininess = 0.25;
Appearance461.material = Material462;

Shape460.appearance = Appearance461;

IndexedFaceSet IndexedFaceSet463 = createNode("IndexedFaceSet");
IndexedFaceSet463.USE = "Surfer_L_Toe01-FACES";
Shape460.geometry = IndexedFaceSet463;

Transform459.child = new undefined();

Transform459.child[0] = Shape460;

Transform452.children[3] = Transform459;

Transform Transform464 = createNode("Transform");
Transform464.DEF = "Surfer2_L_Toe02-ROOT";
Transform464.translation = new SFVec3f(new float[0.2165,-0.01985,0.1629]);
Transform464.rotation = new SFRotation(new float[0,-1,0,0.487246]);
Transform464.scaleOrientation = new SFRotation(new float[-0.0953681,-0.782984,0.614688,0.4729]);
Shape Shape465 = createNode("Shape");
Appearance Appearance466 = createNode("Appearance");
Material Material467 = createNode("Material");
Material467.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material467.shininess = 0.25;
Appearance466.material = Material467;

Shape465.appearance = Appearance466;

IndexedFaceSet IndexedFaceSet468 = createNode("IndexedFaceSet");
IndexedFaceSet468.USE = "Surfer_L_Toe02-FACES";
Shape465.geometry = IndexedFaceSet468;

Transform464.child = new undefined();

Transform464.child[0] = Shape465;

Transform452.children[4] = Transform464;

Transform Transform469 = createNode("Transform");
Transform469.DEF = "Surfer2_L_Toe03-ROOT";
Transform469.translation = new SFVec3f(new float[0.1743,-0.1208,0.1519]);
Transform469.rotation = new SFRotation(new float[0,-1,0,1.21168]);
Transform469.scaleOrientation = new SFRotation(new float[-0.0780288,-0.882186,0.464392,0.5791]);
Shape Shape470 = createNode("Shape");
Appearance Appearance471 = createNode("Appearance");
Material Material472 = createNode("Material");
Material472.diffuseColor = new SFColor(new float[0.702,0.6,0.3843]);
Material472.shininess = 0.25;
Appearance471.material = Material472;

Shape470.appearance = Appearance471;

IndexedFaceSet IndexedFaceSet473 = createNode("IndexedFaceSet");
IndexedFaceSet473.USE = "Surfer_L_Toe03-FACES";
Shape470.geometry = IndexedFaceSet473;

Transform469.child = new undefined();

Transform469.child[0] = Shape470;

Transform452.children[5] = Transform469;

Transform447.children[1] = Transform452;

Transform435.children[4] = Transform447;

Transform386.children[4] = Transform435;

Transform381.children[1] = Transform386;

Transform378.children[2] = Transform381;

Group374.children[1] = Transform378;

Switch373.children = new MFNode();

Switch373.children[0] = Group374;

children[120] = Switch373;

Script Script474 = createNode("Script");
Script474.DEF = "Surfer2Collide";
Script474.mustEvaluate = True;
field field475 = createNode("field");
field475.name = "runAway";
field475.accessType = "inputOnly";
field475.type = "SFTime";
Script474.field = new MFNode();

Script474.field[0] = field475;

field field476 = createNode("field");
field476.name = "inputFraction";
field476.accessType = "inputOnly";
field476.type = "SFFloat";
Script474.field[1] = field476;

field field477 = createNode("field");
field477.name = "allSafe";
field477.accessType = "inputOnly";
field477.type = "SFTime";
Script474.field[2] = field477;

field field478 = createNode("field");
field478.name = "beingEaten";
field478.accessType = "inputOnly";
field478.type = "SFBool";
Script474.field[3] = field478;

field field479 = createNode("field");
field479.name = "scared";
field479.accessType = "initializeOnly";
field479.type = "SFInt32";
Script474.field[4] = field479;

field field480 = createNode("field");
field480.name = "switcher";
field480.accessType = "outputOnly";
field480.type = "SFInt32";
Script474.field[5] = field480;

field field481 = createNode("field");
field481.name = "startAnim";
field481.accessType = "outputOnly";
field481.type = "SFTime";
Script474.field[6] = field481;

field field482 = createNode("field");
field482.name = "outputFraction";
field482.accessType = "outputOnly";
field482.type = "SFFloat";
Script474.field[7] = field482;

field field483 = createNode("field");
field483.name = "eatEnabled";
field483.accessType = "outputOnly";
field483.type = "SFBool";
Script474.field[8] = field483;

field field484 = createNode("field");
field484.name = "startAnimLoop";
field484.accessType = "outputOnly";
field484.type = "SFTime";
Script474.field[9] = field484;

field field485 = createNode("field");
field485.name = "stopAnimLoop";
field485.accessType = "outputOnly";
field485.type = "SFTime";
Script474.field[10] = field485;

field field486 = createNode("field");
field486.name = "startFloating";
field486.accessType = "outputOnly";
field486.type = "SFTime";
Script474.field[11] = field486;

field field487 = createNode("field");
field487.name = "stopFloating";
field487.accessType = "outputOnly";
field487.type = "SFTime";
Script474.field[12] = field487;

field field488 = createNode("field");
field488.name = "playOops";
field488.accessType = "outputOnly";
field488.type = "SFTime";
Script474.field[13] = field488;

field field489 = createNode("field");
field489.name = "avoidEnabled";
field489.accessType = "outputOnly";
field489.type = "SFBool";
Script474.field[14] = field489;


Script474.setSourceCode(`javascript:\n"+
"		function beingEaten(input) {\n"+
"			if (input == TRUE) {\n"+
"				avoidEnabled = FALSE;\n"+
"				eatEnabled = FALSE;\n"+
"			}\n"+
"		}	\n"+
"		function runAway(input, time){\n"+
"			switcher = 1;\n"+
"			scared = 1;\n"+
"			eatEnabled = FALSE;\n"+
"			startAnim = time;\n"+
"			playOops = time;\n"+
"			stopAnimLoop = time;\n"+
"			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"	  function allSafe(input, time) {\n"+
"			scared = 0;\n"+
"			stopFloating = time;\n"+
"			startAnim = time;\n"+
"		}\n"+
"		function inputFraction(input, time) {\n"+
"			if (scared == 1) {\n"+
"				outputFraction = input;\n"+
"				if (input == 1.0) {\n"+
"					startFloating = time;\n"+
"				}\n"+
"			} else {\n"+
"				outputFraction = 1.0 - input;\n"+
"				if (input == 1.0) {\n"+
"					switcher = 0;\n"+
"					eatEnabled = TRUE;\n"+
"					startAnimLoop = time;\n"+
"				}\n"+
"			}\n"+
"		}`)
children[121] = Script474;

PositionInterpolator PositionInterpolator490 = createNode("PositionInterpolator");
PositionInterpolator490.DEF = "Surfer2Float__Boolean-POS-INTERP";
PositionInterpolator490.key = new MFFloat(new float[0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]);
PositionInterpolator490.keyValue = new MFVec3f(new float[0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0]);
children[122] = PositionInterpolator490;

TimeSensor TimeSensor491 = createNode("TimeSensor");
TimeSensor491.DEF = "TimeSensor_Surfer2_Av01-TIMER";
children[123] = TimeSensor491;

TimeSensor TimeSensor492 = createNode("TimeSensor");
TimeSensor492.DEF = "TimeSensor_Surfer2Float-TIMER";
TimeSensor492.cycleInterval = 3.2;
TimeSensor492.loop = True;
children[124] = TimeSensor492;

TimeSensor TimeSensor493 = createNode("TimeSensor");
TimeSensor493.DEF = "TimeSensor_Innertube-TIMER";
TimeSensor493.cycleInterval = 3;
TimeSensor493.loop = True;
TimeSensor493.startTime = 1;
children[125] = TimeSensor493;

TimeSensor TimeSensor494 = createNode("TimeSensor");
TimeSensor494.DEF = "TimeSensor_InnertubeFast-TIMER";
TimeSensor494.enabled = False;
TimeSensor494.loop = True;
children[126] = TimeSensor494;

Switch Switch495 = createNode("Switch");
Switch495.DEF = "Tuber";
Switch495.whichChoice = 0;
Group Group496 = createNode("Group");
Transform Transform497 = createNode("Transform");
Transform497.DEF = "TuberCollisionMover";
Transform497.translation = new SFVec3f(new float[-100.8,0,-451.9]);
Transform Transform498 = createNode("Transform");
Transform498.DEF = "TuberCollisionSpinner";
Transform498.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor499 = createNode("ProximitySensor");
ProximitySensor499.DEF = "EatTuber";
ProximitySensor499.size = new SFVec3f(new float[6,6,4]);
ProximitySensor499.center = new SFVec3f(new float[0,0,4]);
Transform498.children = new MFNode();

Transform498.children[0] = ProximitySensor499;

Transform497.children = new MFNode();

Transform497.children[0] = Transform498;

Group496.children = new MFNode();

Group496.children[0] = Transform497;

Transform Transform500 = createNode("Transform");
Transform500.DEF = "Inline_Tube01-ROOT";
Transform500.translation = new SFVec3f(new float[-100.8,0,-451.9]);
Transform500.rotation = new SFRotation(new float[0,-1,0,3.944]);
ProximitySensor ProximitySensor501 = createNode("ProximitySensor");
ProximitySensor501.DEF = "ScareTuber";
ProximitySensor501.size = new SFVec3f(new float[15,5,17]);
Transform500.children = new MFNode();

Transform500.children[0] = ProximitySensor501;

VisibilitySensor VisibilitySensor502 = createNode("VisibilitySensor");
VisibilitySensor502.DEF = "tuberVisible";
VisibilitySensor502.size = new SFVec3f(new float[1,1,1]);
Transform500.children[1] = VisibilitySensor502;

Transform Transform503 = createNode("Transform");
Transform503.DEF = "Innertube_boolean-ROOT";
Transform503.translation = new SFVec3f(new float[-0.05191,0,-0.05077]);
Shape Shape504 = createNode("Shape");
Appearance Appearance505 = createNode("Appearance");
Material Material506 = createNode("Material");
Material506.diffuseColor = new SFColor(new float[0,0,0]);
Material506.emissiveColor = new SFColor(new float[0.007843,0.3922,0.6157]);
Material506.shininess = 0;
Appearance505.material = Material506;

Shape504.appearance = Appearance505;

IndexedFaceSet IndexedFaceSet507 = createNode("IndexedFaceSet");
IndexedFaceSet507.DEF = "Innertube_boolean-FACES";
IndexedFaceSet507.colorIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]);
IndexedFaceSet507.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]);
Color Color508 = createNode("Color");
Color508.color = new MFColor(new float[0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157]);
IndexedFaceSet507.color = Color508;

Coordinate Coordinate509 = createNode("Coordinate");
Coordinate509.DEF = "Innertube_boolean-COORD";
Coordinate509.point = new MFVec3f(new float[-2.523,0,2.66,2.605,0,2.66,-2.523,0,-5.753,2.605,0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753]);
IndexedFaceSet507.coord = Coordinate509;

Shape504.geometry = IndexedFaceSet507;

Transform503.child = new undefined();

Transform503.child[0] = Shape504;

Transform Transform510 = createNode("Transform");
Transform510.DEF = "Innertube-ROOT";
Transform510.translation = new SFVec3f(new float[0.05259,-0.002682,0.04626]);
Transform510.rotation = new SFRotation(new float[-0.0180521,0.999674,0.0180521,1.57099]);
Transform510.scaleOrientation = new SFRotation(new float[0.834748,-0.4924,-0.24645,0.00573601]);
OrientationInterpolator OrientationInterpolator511 = createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Innertube-ROT-INTERP";
OrientationInterpolator511.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571]);
Transform510.children = new MFNode();

Transform510.children[0] = OrientationInterpolator511;

Shape Shape512 = createNode("Shape");
Appearance Appearance513 = createNode("Appearance");
Material Material514 = createNode("Material");
Material514.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material514.shininess = 0.25;
Appearance513.material = Material514;

Shape512.appearance = Appearance513;

IndexedFaceSet IndexedFaceSet515 = createNode("IndexedFaceSet");
IndexedFaceSet515.DEF = "Innertube-FACES";
IndexedFaceSet515.creaseAngle = 3;
IndexedFaceSet515.colorIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]);
IndexedFaceSet515.coordIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]);
Color Color516 = createNode("Color");
Color516.color = new MFColor(new float[0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647]);
IndexedFaceSet515.color = Color516;

Coordinate Coordinate517 = createNode("Coordinate");
Coordinate517.DEF = "Innertube-COORD";
Coordinate517.point = new MFVec3f(new float[0,0,-2.37,0,0.4114,-2.237,0,0.4114,-1.104,0,0,-0.9704,0,-0.4114,-1.104,0,-0.6657,-1.454,0,-0.6657,-1.887,0,-0.4114,-2.237,1.676,0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0,0,2.237,0.4114,0,1.104,0.4114,0,0.9704,0,0,1.104,-0.4114,0,1.454,-0.6657,0,1.887,-0.6657,0,2.237,-0.4114,0,1.676,0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0,0,2.37,0,0.4114,2.237,0,0.4114,1.104,0,0,0.9704,0,-0.4114,1.104,0,-0.6657,1.454,0,-0.6657,1.887,0,-0.4114,2.237,-1.676,0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0,0,-2.237,0.4114,0,-1.104,0.4114,0,-0.9704,0,0,-1.104,-0.4114,0,-1.454,-0.6657,0,-1.887,-0.6657,0,-2.237,-0.4114,0,-1.676,0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582]);
IndexedFaceSet515.coord = Coordinate517;

Shape512.geometry = IndexedFaceSet515;

Transform510.child[1] = Shape512;

Transform Transform518 = createNode("Transform");
Transform518.DEF = "Innertube_L_leg-ROOT";
Transform518.translation = new SFVec3f(new float[3.1493,-0.334482,-0.816699]);
Transform518.rotation = new SFRotation(new float[-0.00159022,-0.0416662,0.99913,0.596085]);
Transform518.scaleOrientation = new SFRotation(new float[0,-0.0296788,-0.99956,0.0631516]);
PositionInterpolator PositionInterpolator519 = createNode("PositionInterpolator");
PositionInterpolator519.DEF = "Innertube_L_leg-POS-INTERP";
PositionInterpolator519.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator519.keyValue = new MFVec3f(new float[2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342]);
Transform518.children = new MFNode();

Transform518.children[0] = PositionInterpolator519;

OrientationInterpolator OrientationInterpolator520 = createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Innertube_L_leg-ROT-INTERP";
OrientationInterpolator520.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562]);
Transform518.children[1] = OrientationInterpolator520;

Shape Shape521 = createNode("Shape");
Appearance Appearance522 = createNode("Appearance");
Material Material523 = createNode("Material");
Material523.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material523.shininess = 0.25;
Appearance522.material = Material523;

Shape521.appearance = Appearance522;

IndexedFaceSet IndexedFaceSet524 = createNode("IndexedFaceSet");
IndexedFaceSet524.DEF = "Innertube_L_leg-FACES";
IndexedFaceSet524.creaseAngle = 3;
IndexedFaceSet524.colorIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]);
IndexedFaceSet524.coordIndex = new MFInt32(new int[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]);
Color Color525 = createNode("Color");
Color525.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet524.color = Color525;

Coordinate Coordinate526 = createNode("Coordinate");
Coordinate526.DEF = "Innertube_L_leg-COORD";
Coordinate526.point = new MFVec3f(new float[0.2432,0,0,0.172,0,-0.172,0,0,-0.2432,-0.172,0,-0.172,-0.2432,0,0,-0.172,0,0.172,0,0,0.2432,0.172,0,0.172,0.2432,1.5,0,0.172,1.5,-0.172,0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0,-0.172,1.5,0.172,0,1.5,0.2432,0.172,1.5,0.172]);
IndexedFaceSet524.coord = Coordinate526;

Shape521.geometry = IndexedFaceSet524;

Transform518.child[2] = Shape521;

Transform Transform527 = createNode("Transform");
Transform527.DEF = "Innertube_L_flipper-ROOT";
Transform527.translation = new SFVec3f(new float[-0.304026,-0.965158,-0.0556783]);
Transform527.rotation = new SFRotation(new float[-0.603271,-0.529571,-0.596338,2.01785]);
Transform527.scale = new SFVec3f(new float[1,1.343,0.9976]);
Transform527.scaleOrientation = new SFRotation(new float[-0.317708,0.946024,-0.0640316,0.2952]);
PositionInterpolator PositionInterpolator528 = createNode("PositionInterpolator");
PositionInterpolator528.DEF = "Innertube_L_flipper-POS-INTERP";
PositionInterpolator528.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator528.keyValue = new MFVec3f(new float[-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153]);
Transform527.children = new MFNode();

Transform527.children[0] = PositionInterpolator528;

OrientationInterpolator OrientationInterpolator529 = createNode("OrientationInterpolator");
OrientationInterpolator529.DEF = "Innertube_L_flipper-ROT-INTERP";
OrientationInterpolator529.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator529.keyValue = new MFRotation(new float[-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897]);
Transform527.children[1] = OrientationInterpolator529;

Shape Shape530 = createNode("Shape");
Appearance Appearance531 = createNode("Appearance");
Material Material532 = createNode("Material");
Material532.diffuseColor = new SFColor(new float[0.8941,0.8392,0.6]);
Appearance531.material = Material532;

Shape530.appearance = Appearance531;

IndexedFaceSet IndexedFaceSet533 = createNode("IndexedFaceSet");
IndexedFaceSet533.DEF = "Innertube_L_flipper-FACES";
IndexedFaceSet533.colorIndex = new MFInt32(new int[8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]);
IndexedFaceSet533.coordIndex = new MFInt32(new int[8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]);
Color Color534 = createNode("Color");
Color534.color = new MFColor(new float[0.6588,0.451,0,0.6588,0.451,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,0.6588,0.451,0,0.6588,0.451,0,0.6588,0.451,0]);
IndexedFaceSet533.color = Color534;

Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.DEF = "Innertube_L_flipper-COORD";
Coordinate535.point = new MFVec3f(new float[-0.3059,0,1.228,0.3059,0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0,0.07611,-1.258,0,0.1522,1.374,0,0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037]);
IndexedFaceSet533.coord = Coordinate535;

Shape530.geometry = IndexedFaceSet533;

Transform527.child[2] = Shape530;

Transform Transform536 = createNode("Transform");
Transform536.DEF = "Innertube_foot_L-ROOT";
Transform536.translation = new SFVec3f(new float[0.009344,0.2285,1.015]);
Transform536.rotation = new SFRotation(new float[0.548102,0.543802,-0.635502,2.018]);
Transform536.scale = new SFVec3f(new float[1.002,1,0.7445]);
Transform536.scaleOrientation = new SFRotation(new float[-0.0369916,0.178508,-0.983243,0.2825]);
Shape Shape537 = createNode("Shape");
Appearance Appearance538 = createNode("Appearance");
Material Material539 = createNode("Material");
Material539.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material539.shininess = 0.25;
Appearance538.material = Material539;

Shape537.appearance = Appearance538;

IndexedFaceSet IndexedFaceSet540 = createNode("IndexedFaceSet");
IndexedFaceSet540.DEF = "Innertube_foot_L-FACES";
IndexedFaceSet540.creaseAngle = 3;
IndexedFaceSet540.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
IndexedFaceSet540.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
Color Color541 = createNode("Color");
Color541.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet540.color = Color541;

Coordinate Coordinate542 = createNode("Coordinate");
Coordinate542.DEF = "Innertube_foot_L-COORD";
Coordinate542.point = new MFVec3f(new float[0,0.2454,0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0]);
IndexedFaceSet540.coord = Coordinate542;

Shape537.geometry = IndexedFaceSet540;

Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform527.children[3] = Transform536;

Transform518.children[3] = Transform527;

Transform510.children[2] = Transform518;

Transform Transform543 = createNode("Transform");
Transform543.DEF = "Innertube_R_leg-ROOT";
Transform543.translation = new SFVec3f(new float[3.11954,-0.354196,0.821474]);
Transform543.rotation = new SFRotation(new float[0.000625451,-0.0344513,0.999406,0.571893]);
Transform543.scaleOrientation = new SFRotation(new float[0,-0.00266799,0.999996,0.7854]);
PositionInterpolator PositionInterpolator544 = createNode("PositionInterpolator");
PositionInterpolator544.DEF = "Innertube_R_leg-POS-INTERP";
PositionInterpolator544.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator544.keyValue = new MFVec3f(new float[3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144]);
Transform543.children = new MFNode();

Transform543.children[0] = PositionInterpolator544;

OrientationInterpolator OrientationInterpolator545 = createNode("OrientationInterpolator");
OrientationInterpolator545.DEF = "Innertube_R_leg-ROT-INTERP";
OrientationInterpolator545.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator545.keyValue = new MFRotation(new float[0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544]);
Transform543.children[1] = OrientationInterpolator545;

Shape Shape546 = createNode("Shape");
Appearance Appearance547 = createNode("Appearance");
Material Material548 = createNode("Material");
Material548.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material548.shininess = 0.25;
Appearance547.material = Material548;

Shape546.appearance = Appearance547;

IndexedFaceSet IndexedFaceSet549 = createNode("IndexedFaceSet");
IndexedFaceSet549.USE = "Innertube_L_leg-FACES";
Shape546.geometry = IndexedFaceSet549;

Transform543.child[2] = Shape546;

Transform Transform550 = createNode("Transform");
Transform550.DEF = "Innertube_R_flipper-ROOT";
Transform550.translation = new SFVec3f(new float[0.414497,-0.929076,-0.0268408]);
Transform550.rotation = new SFRotation(new float[-0.41021,-0.823318,-0.392271,1.71108]);
Transform550.scale = new SFVec3f(new float[1,1.343,0.9976]);
Transform550.scaleOrientation = new SFRotation(new float[-0.317708,0.946024,-0.0640316,0.2952]);
PositionInterpolator PositionInterpolator551 = createNode("PositionInterpolator");
PositionInterpolator551.DEF = "Innertube_R_flipper-POS-INTERP";
PositionInterpolator551.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator551.keyValue = new MFVec3f(new float[0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338]);
Transform550.children = new MFNode();

Transform550.children[0] = PositionInterpolator551;

OrientationInterpolator OrientationInterpolator552 = createNode("OrientationInterpolator");
OrientationInterpolator552.DEF = "Innertube_R_flipper-ROT-INTERP";
OrientationInterpolator552.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator552.keyValue = new MFRotation(new float[-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488008,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627]);
Transform550.children[1] = OrientationInterpolator552;

Shape Shape553 = createNode("Shape");
Appearance Appearance554 = createNode("Appearance");
Material Material555 = createNode("Material");
Material555.diffuseColor = new SFColor(new float[0.8941,0.8392,0.6]);
Appearance554.material = Material555;

Shape553.appearance = Appearance554;

IndexedFaceSet IndexedFaceSet556 = createNode("IndexedFaceSet");
IndexedFaceSet556.USE = "Innertube_L_flipper-FACES";
Shape553.geometry = IndexedFaceSet556;

Transform550.child[2] = Shape553;

Transform Transform557 = createNode("Transform");
Transform557.DEF = "Innertube_foot_R-ROOT";
Transform557.translation = new SFVec3f(new float[0.000116,0.2244,0.9932]);
Transform557.rotation = new SFRotation(new float[0.552227,0.536026,-0.638531,2.029]);
Transform557.scale = new SFVec3f(new float[1.002,1,0.7445]);
Transform557.scaleOrientation = new SFRotation(new float[-0.102804,0.168407,-0.980342,0.2838]);
Shape Shape558 = createNode("Shape");
Appearance Appearance559 = createNode("Appearance");
Material Material560 = createNode("Material");
Material560.diffuseColor = new SFColor(new float[0.9804,0.7686,0.7255]);
Material560.shininess = 0.25;
Appearance559.material = Material560;

Shape558.appearance = Appearance559;

IndexedFaceSet IndexedFaceSet561 = createNode("IndexedFaceSet");
IndexedFaceSet561.DEF = "Innertube_foot_R-FACES";
IndexedFaceSet561.creaseAngle = 3;
IndexedFaceSet561.colorIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
IndexedFaceSet561.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]);
Color Color562 = createNode("Color");
Color562.color = new MFColor(new float[0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549]);
IndexedFaceSet561.color = Color562;

Coordinate Coordinate563 = createNode("Coordinate");
Coordinate563.DEF = "Innertube_foot_R-COORD";
Coordinate563.point = new MFVec3f(new float[0,0.2454,0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0]);
IndexedFaceSet561.coord = Coordinate563;

Shape558.geometry = IndexedFaceSet561;

Transform557.child = new undefined();

Transform557.child[0] = Shape558;

Transform550.children[3] = Transform557;

Transform543.children[3] = Transform550;

Transform510.children[3] = Transform543;

Transform Transform564 = createNode("Transform");
Transform564.DEF = "Innertube_Dummy-ROOT";
Transform564.translation = new SFVec3f(new float[-0.004756,-0.7784,0.073]);
Transform564.rotation = new SFRotation(new float[0.565059,-0.565059,0.601179,2.05904]);
Transform564.scaleOrientation = new SFRotation(new float[0.745084,-0.0868981,0.661286,0.1436]);
OrientationInterpolator OrientationInterpolator565 = createNode("OrientationInterpolator");
OrientationInterpolator565.DEF = "Innertube_Dummy-ROT-INTERP";
OrientationInterpolator565.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator565.keyValue = new MFRotation(new float[0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581875,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031]);
Transform564.children = new MFNode();

Transform564.children[0] = OrientationInterpolator565;

Transform Transform566 = createNode("Transform");
Transform566.DEF = "Innertube_L_butt-ROOT";
Transform566.translation = new SFVec3f(new float[-0.4121,0.006308,-0.3326]);
Transform566.rotation = new SFRotation(new float[-0.999991,0.00291315,0.00291315,1.5707]);
Transform566.scale = new SFVec3f(new float[1.47,1.55,1.893]);
OrientationInterpolator OrientationInterpolator567 = createNode("OrientationInterpolator");
OrientationInterpolator567.DEF = "Innertube_L_butt-ROT-INTERP";
OrientationInterpolator567.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator567.keyValue = new MFRotation(new float[-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578]);
Transform566.children = new MFNode();

Transform566.children[0] = OrientationInterpolator567;

Shape Shape568 = createNode("Shape");
Appearance Appearance569 = createNode("Appearance");
Material Material570 = createNode("Material");
Material570.diffuseColor = new SFColor(new float[0.6902,0.102,0.102]);
Appearance569.material = Material570;

Shape568.appearance = Appearance569;

IndexedFaceSet IndexedFaceSet571 = createNode("IndexedFaceSet");
IndexedFaceSet571.DEF = "Innertube_L_butt-FACES";
IndexedFaceSet571.creaseAngle = 3;
IndexedFaceSet571.colorIndex = new MFInt32(new int[0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]);
IndexedFaceSet571.coordIndex = new MFInt32(new int[0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]);
Color Color572 = createNode("Color");
Color572.color = new MFColor(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet571.color = Color572;

Coordinate Coordinate573 = createNode("Coordinate");
Coordinate573.DEF = "Innertube_L_butt-COORD";
Coordinate573.point = new MFVec3f(new float[-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0,0.3378,0.1463,-0.3416,0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0,-0.2415,-0.3416,0.2415,0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0,0.2415,-0.3416,-0.2415,0,-0.4831,0]);
IndexedFaceSet571.coord = Coordinate573;

Shape568.geometry = IndexedFaceSet571;

Transform566.child[1] = Shape568;

Transform564.children[1] = Transform566;

Transform Transform574 = createNode("Transform");
Transform574.DEF = "Innertube_R_butt-ROOT";
Transform574.translation = new SFVec3f(new float[0.3298,0.006308,-0.3294]);
Transform574.rotation = new SFRotation(new float[-0.999996,-0.00210999,-0.00210999,1.571]);
Transform574.scale = new SFVec3f(new float[1.47,1.55,1.893]);
Shape Shape575 = createNode("Shape");
Appearance Appearance576 = createNode("Appearance");
Material Material577 = createNode("Material");
Material577.diffuseColor = new SFColor(new float[0.6902,0.102,0.102]);
Appearance576.material = Material577;

Shape575.appearance = Appearance576;

IndexedFaceSet IndexedFaceSet578 = createNode("IndexedFaceSet");
IndexedFaceSet578.USE = "Innertube_L_butt-FACES";
Shape575.geometry = IndexedFaceSet578;

Transform574.child = new undefined();

Transform574.child[0] = Shape575;

Transform564.children[2] = Transform574;

Transform510.children[4] = Transform564;

Transform503.children[1] = Transform510;

Transform500.children[2] = Transform503;

Group496.children[1] = Transform500;

Switch495.children = new MFNode();

Switch495.children[0] = Group496;

children[127] = Switch495;

ScalarInterpolator ScalarInterpolator579 = createNode("ScalarInterpolator");
ScalarInterpolator579.DEF = "Mapper";
ScalarInterpolator579.key = new MFFloat(new float[0,1]);
ScalarInterpolator579.keyValue = new MFFloat(new float[0,1]);
children[128] = ScalarInterpolator579;

Script Script580 = createNode("Script");
Script580.DEF = "TubeCollide";
Script580.mustEvaluate = True;
field field581 = createNode("field");
field581.name = "finishedRunning";
field581.accessType = "inputOnly";
field581.type = "SFBool";
Script580.field = new MFNode();

Script580.field[0] = field581;

field field582 = createNode("field");
field582.name = "finishedRunning2";
field582.accessType = "inputOnly";
field582.type = "SFBool";
Script580.field[1] = field582;

field field583 = createNode("field");
field583.name = "runAway";
field583.accessType = "inputOnly";
field583.type = "SFTime";
Script580.field[2] = field583;

field field584 = createNode("field");
field584.name = "beingEaten";
field584.accessType = "inputOnly";
field584.type = "SFBool";
Script580.field[3] = field584;

field field585 = createNode("field");
field585.name = "tubePosition";
field585.accessType = "initializeOnly";
field585.type = "SFInt32";
Script580.field[4] = field585;

field field586 = createNode("field");
field586.name = "tubeHit";
field586.accessType = "outputOnly";
field586.type = "SFTime";
Script580.field[5] = field586;

field field587 = createNode("field");
field587.name = "tubeRun";
field587.accessType = "outputOnly";
field587.type = "SFTime";
Script580.field[6] = field587;

field field588 = createNode("field");
field588.name = "tubeRun2";
field588.accessType = "outputOnly";
field588.type = "SFTime";
Script580.field[7] = field588;

field field589 = createNode("field");
field589.name = "enableHit";
field589.accessType = "outputOnly";
field589.type = "SFBool";
Script580.field[8] = field589;

field field590 = createNode("field");
field590.name = "enableRun";
field590.accessType = "outputOnly";
field590.type = "SFBool";
Script580.field[9] = field590;

field field591 = createNode("field");
field591.name = "kickFaster";
field591.accessType = "outputOnly";
field591.type = "SFBool";
Script580.field[10] = field591;

field field592 = createNode("field");
field592.name = "kickSlower";
field592.accessType = "outputOnly";
field592.type = "SFBool";
Script580.field[11] = field592;

field field593 = createNode("field");
field593.name = "kickStart";
field593.accessType = "outputOnly";
field593.type = "SFTime";
Script580.field[12] = field593;


Script580.setSourceCode(`javascript:\n"+
"		function beingEaten (input){\n"+
"			if (input == TRUE) {\n"+
"				enableRun = FALSE;\n"+
"				enableHit = FALSE;\n"+
"			}\n"+
"		}\n"+
"		function runAway (input, time) {\n"+
"			enableHit = FALSE;\n"+
"			kickSlower = FALSE;\n"+
"			kickFaster = TRUE;\n"+
"			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));\n"+
"			if (tubePosition == 0) {\n"+
"				tubeRun = time;\n"+
"			} else {\n"+
"				tubeRun2 = time;\n"+
"			}\n"+
"		}\n"+
"		function finishedRunning (input, time) {\n"+
"			if (input == FALSE) {\n"+
"				tubePosition = 1;\n"+
"				enableHit = TRUE;\n"+
"				kickFaster = FALSE;\n"+
"				kickSlower = TRUE;\n"+
"				kickStart = time;\n"+
"			}\n"+
"		}\n"+
"		function finishedRunning2 (input, time) {\n"+
"			if (input == FALSE) {\n"+
"				tubePosition = 0;\n"+
"				enableHit = TRUE;\n"+
"				kickFaster = FALSE;\n"+
"				kickSlower = TRUE;\n"+
"				kickStart = time;\n"+
"			}\n"+
"		}`)
children[129] = Script580;

TimeSensor TimeSensor594 = createNode("TimeSensor");
TimeSensor594.DEF = "TuberRun";
TimeSensor594.cycleInterval = 2;
children[130] = TimeSensor594;

TimeSensor TimeSensor595 = createNode("TimeSensor");
TimeSensor595.DEF = "TuberRun2";
TimeSensor595.cycleInterval = 2;
children[131] = TimeSensor595;

PositionInterpolator PositionInterpolator596 = createNode("PositionInterpolator");
PositionInterpolator596.DEF = "Inline_Tube01_avoid01-POS-INTERP";
PositionInterpolator596.key = new MFFloat(new float[0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
PositionInterpolator596.keyValue = new MFVec3f(new float[-100.8,0,-451.9,-100.7,0,-452.1,-100.4,0,-452.8,-99.9,0,-453.9,-99.31,0,-455.4,-98.93,0,-457.2,-99,0,-459,-99.67,0,-460.9,-101.1,0,-462.8,-102.9,0,-464.3,-104.8,0,-465,-106.6,0,-465.1,-108.4,0,-464.8,-110,0,-464.3,-111.1,0,-463.8,-111.8,0,-463.5,-112,0,-463.4]);
children[132] = PositionInterpolator596;

OrientationInterpolator OrientationInterpolator597 = createNode("OrientationInterpolator");
OrientationInterpolator597.DEF = "Inline_Tube01_avoid01-ROT-INTERP";
OrientationInterpolator597.key = new MFFloat(new float[0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
OrientationInterpolator597.keyValue = new MFRotation(new float[0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582]);
children[133] = OrientationInterpolator597;

PositionInterpolator PositionInterpolator598 = createNode("PositionInterpolator");
PositionInterpolator598.DEF = "Inline_Tube01_avoid02-POS-INTERP";
PositionInterpolator598.key = new MFFloat(new float[0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
PositionInterpolator598.keyValue = new MFVec3f(new float[-112,0,-463.4,-112,0,-463.4,-112.1,0,-463.2,-112.5,0,-462.6,-113.1,0,-461.5,-113.8,0,-460,-114.3,0,-458.3,-114.3,0,-456.5,-113.7,0,-454.7,-112.3,0,-452.8,-110.4,0,-451.3,-108.5,0,-450.5,-106.6,0,-450.4,-104.7,0,-450.6,-103,0,-451.1,-101.8,0,-451.5,-101.1,0,-451.8,-100.8,0,-451.9]);
children[134] = PositionInterpolator598;

OrientationInterpolator OrientationInterpolator599 = createNode("OrientationInterpolator");
OrientationInterpolator599.DEF = "Inline_Tube01_avoid02-ROT-INTERP";
OrientationInterpolator599.key = new MFFloat(new float[0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
OrientationInterpolator599.keyValue = new MFRotation(new float[0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944]);
children[135] = OrientationInterpolator599;

VisibilitySensor VisibilitySensor600 = createNode("VisibilitySensor");
VisibilitySensor600.DEF = "SeeEnd";
VisibilitySensor600.size = new SFVec3f(new float[1,1,1]);
VisibilitySensor600.center = new SFVec3f(new float[7,0,-650]);
children[136] = VisibilitySensor600;

TimeSensor TimeSensor601 = createNode("TimeSensor");
TimeSensor601.DEF = "Tuber2Run";
TimeSensor601.cycleInterval = 2;
children[137] = TimeSensor601;

TimeSensor TimeSensor602 = createNode("TimeSensor");
TimeSensor602.DEF = "Tuber2Run2";
TimeSensor602.cycleInterval = 2;
children[138] = TimeSensor602;

Switch Switch603 = createNode("Switch");
Switch603.DEF = "Tuber2";
Switch603.whichChoice = 0;
Group Group604 = createNode("Group");
Transform Transform605 = createNode("Transform");
Transform605.DEF = "Tuber2CollisionMover";
Transform605.translation = new SFVec3f(new float[6.848,0,-554.5]);
Transform Transform606 = createNode("Transform");
Transform606.DEF = "Tuber2CollisionSpinner";
Transform606.rotation = new SFRotation(new float[1,0,0,0.0134964]);
ProximitySensor ProximitySensor607 = createNode("ProximitySensor");
ProximitySensor607.DEF = "EatTuber2";
ProximitySensor607.size = new SFVec3f(new float[6,6,4]);
ProximitySensor607.center = new SFVec3f(new float[0,0,4]);
Transform606.children = new MFNode();

Transform606.children[0] = ProximitySensor607;

Transform605.children = new MFNode();

Transform605.children[0] = Transform606;

Group604.children = new MFNode();

Group604.children[0] = Transform605;

Transform Transform608 = createNode("Transform");
Transform608.DEF = "Inline_Tube02-ROOT";
Transform608.translation = new SFVec3f(new float[6.848,0,-554.5]);
Transform608.rotation = new SFRotation(new float[0,-1,0,3.944]);
ProximitySensor ProximitySensor609 = createNode("ProximitySensor");
ProximitySensor609.DEF = "ScareTuber2";
ProximitySensor609.size = new SFVec3f(new float[15,5,17]);
Transform608.children = new MFNode();

Transform608.children[0] = ProximitySensor609;

VisibilitySensor VisibilitySensor610 = createNode("VisibilitySensor");
VisibilitySensor610.DEF = "tuber2Visible";
VisibilitySensor610.size = new SFVec3f(new float[1,1,1]);
Transform608.children[1] = VisibilitySensor610;

Transform Transform611 = createNode("Transform");
Transform Transform612 = createNode("Transform");
Transform612.USE = "Innertube_boolean-ROOT";
Transform611.children = new MFNode();

Transform611.children[0] = Transform612;

Transform608.children[2] = Transform611;

Group604.children[1] = Transform608;

Switch603.children = new MFNode();

Switch603.children[0] = Group604;

children[139] = Switch603;

Script Script613 = createNode("Script");
Script613.DEF = "TubeCollide2";
Script613.mustEvaluate = True;
field field614 = createNode("field");
field614.name = "finishedRunning";
field614.accessType = "inputOnly";
field614.type = "SFBool";
Script613.field = new MFNode();

Script613.field[0] = field614;

field field615 = createNode("field");
field615.name = "finishedRunning2";
field615.accessType = "inputOnly";
field615.type = "SFBool";
Script613.field[1] = field615;

field field616 = createNode("field");
field616.name = "runAway";
field616.accessType = "inputOnly";
field616.type = "SFTime";
Script613.field[2] = field616;

field field617 = createNode("field");
field617.name = "beingEaten";
field617.accessType = "inputOnly";
field617.type = "SFBool";
Script613.field[3] = field617;

field field618 = createNode("field");
field618.name = "tubePosition";
field618.accessType = "initializeOnly";
field618.type = "SFInt32";
Script613.field[4] = field618;

field field619 = createNode("field");
field619.name = "tubeHit";
field619.accessType = "outputOnly";
field619.type = "SFTime";
Script613.field[5] = field619;

field field620 = createNode("field");
field620.name = "tubeRun";
field620.accessType = "outputOnly";
field620.type = "SFTime";
Script613.field[6] = field620;

field field621 = createNode("field");
field621.name = "tubeRun2";
field621.accessType = "outputOnly";
field621.type = "SFTime";
Script613.field[7] = field621;

field field622 = createNode("field");
field622.name = "enableHit";
field622.accessType = "outputOnly";
field622.type = "SFBool";
Script613.field[8] = field622;

field field623 = createNode("field");
field623.name = "enableRun";
field623.accessType = "outputOnly";
field623.type = "SFBool";
Script613.field[9] = field623;

field field624 = createNode("field");
field624.name = "kickFaster";
field624.accessType = "outputOnly";
field624.type = "SFBool";
Script613.field[10] = field624;

field field625 = createNode("field");
field625.name = "kickSlower";
field625.accessType = "outputOnly";
field625.type = "SFBool";
Script613.field[11] = field625;

field field626 = createNode("field");
field626.name = "kickStart";
field626.accessType = "outputOnly";
field626.type = "SFTime";
Script613.field[12] = field626;


Script613.setSourceCode(`javascript:\n"+
"		function beingEaten (input){\n"+
"			if (input == TRUE) {\n"+
"				enableRun = FALSE;\n"+
"				enableHit = FALSE;\n"+
"			}\n"+
"		}\n"+
"		function runAway (input, time) {\n"+
"			enableHit = FALSE;\n"+
"			kickSlower = FALSE;\n"+
"			kickFaster = TRUE;\n"+
"			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));\n"+
"			if (tubePosition == 0) {\n"+
"				tubeRun = time;\n"+
"			} else {\n"+
"				tubeRun2 = time;\n"+
"			}\n"+
"		}\n"+
"		function finishedRunning (input, time) {\n"+
"			if (input == FALSE) {\n"+
"				tubePosition = 1;\n"+
"				enableHit = TRUE;\n"+
"				kickFaster = FALSE;\n"+
"				kickSlower = TRUE;\n"+
"				kickStart = time;\n"+
"			}\n"+
"		}\n"+
"		function finishedRunning2 (input, time) {\n"+
"			if (input == FALSE) {\n"+
"				tubePosition = 0;\n"+
"				enableHit = TRUE;\n"+
"				kickFaster = FALSE;\n"+
"				kickSlower = TRUE;\n"+
"				kickStart = time;\n"+
"			}\n"+
"		}`)
children[140] = Script613;

PositionInterpolator PositionInterpolator627 = createNode("PositionInterpolator");
PositionInterpolator627.DEF = "Inline_Tube02_avoid01-POS-INTERP";
PositionInterpolator627.key = new MFFloat(new float[0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
PositionInterpolator627.keyValue = new MFVec3f(new float[6.848,0,-554.5,6.955,0,-554.7,7.276,0,-555.4,7.783,0,-556.5,8.374,0,-558,8.759,0,-559.8,8.69,0,-561.6,8.017,0,-563.5,6.588,0,-565.4,4.741,0,-566.9,2.912,0,-567.6,1.097,0,-567.8,-0.7067,0,-567.4,-2.279,0,-566.9,-3.4,0,-566.4,-4.072,0,-566.1,-4.296,0,-566]);
children[141] = PositionInterpolator627;

OrientationInterpolator OrientationInterpolator628 = createNode("OrientationInterpolator");
OrientationInterpolator628.DEF = "Inline_Tube02_avoid01-ROT-INTERP";
OrientationInterpolator628.key = new MFFloat(new float[0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
OrientationInterpolator628.keyValue = new MFRotation(new float[0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582]);
children[142] = OrientationInterpolator628;

PositionInterpolator PositionInterpolator629 = createNode("PositionInterpolator");
PositionInterpolator629.DEF = "Inline_Tube02_avoid02-POS-INTERP";
PositionInterpolator629.key = new MFFloat(new float[0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
PositionInterpolator629.keyValue = new MFVec3f(new float[-4.296,0,-566,-4.296,0,-566,-4.423,0,-565.8,-4.798,0,-565.2,-5.394,0,-564.1,-6.103,0,-562.6,-6.608,0,-560.9,-6.635,0,-559.1,-6.026,0,-557.3,-4.62,0,-555.4,-2.75,0,-553.9,-0.857,0,-553.2,1.053,0,-553,2.977,0,-553.2,4.668,0,-553.7,5.879,0,-554.1,6.605,0,-554.4,6.848,0,-554.5]);
children[143] = PositionInterpolator629;

OrientationInterpolator OrientationInterpolator630 = createNode("OrientationInterpolator");
OrientationInterpolator630.DEF = "Inline_Tube02_avoid02-ROT-INTERP";
OrientationInterpolator630.key = new MFFloat(new float[0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]);
OrientationInterpolator630.keyValue = new MFRotation(new float[0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944]);
children[144] = OrientationInterpolator630;

TimeSensor TimeSensor631 = createNode("TimeSensor");
TimeSensor631.DEF = "frameRateTimer";
TimeSensor631.cycleInterval = 3;
TimeSensor631.loop = True;
TimeSensor631.startTime = 1;
children[145] = TimeSensor631;

TimeSensor TimeSensor632 = createNode("TimeSensor");
TimeSensor632.DEF = "TimeSensor01-TIMER";
TimeSensor632.cycleInterval = 1.6;
TimeSensor632.loop = True;
TimeSensor632.startTime = 1;
children[146] = TimeSensor632;

Script Script633 = createNode("Script");
Script633.DEF = "TimeSensor01-SCRIPT";
field field634 = createNode("field");
field634.name = "fractionIn";
field634.accessType = "inputOnly";
field634.type = "SFFloat";
Script633.field = new MFNode();

Script633.field[0] = field634;

field field635 = createNode("field");
field635.name = "fractionOut";
field635.accessType = "outputOnly";
field635.type = "SFFloat";
Script633.field[1] = field635;


Script633.setSourceCode(`javascript:\n"+
"    function fractionIn(i) {\n"+
"    fractionOut = 0.48 * i;\n"+
"  }`)
children[147] = Script633;

TimeSensor TimeSensor636 = createNode("TimeSensor");
TimeSensor636.DEF = "TimeSensor02-TIMER";
TimeSensor636.cycleInterval = 3.333;
TimeSensor636.loop = True;
TimeSensor636.startTime = 1;
children[148] = TimeSensor636;

Transform Transform637 = createNode("Transform");
Transform637.DEF = "SharkHead";
Transform637.translation = new SFVec3f(new float[0,-3.143,5.7195]);
Transform637.rotation = new SFRotation(new float[1,0,0,0.0134964]);
Collision Collision638 = createNode("Collision");
Collision638.enabled = False;
Group Group639 = createNode("Group");
Transform Transform640 = createNode("Transform");
Transform640.DEF = "Shark-ROOT";
Transform640.translation = new SFVec3f(new float[-0.01057,-0.2844,-1.188]);
Transform640.rotation = new SFRotation(new float[-0.998454,-0.0414381,0.0370383,4.165]);
Transform640.scale = new SFVec3f(new float[0.001994,0.001994,0.001994]);
Transform640.scaleOrientation = new SFRotation(new float[0.0561707,-0.194402,-0.979312,0.8002]);
TimeSensor TimeSensor641 = createNode("TimeSensor");
TimeSensor641.DEF = "Shark-TIMER";
TimeSensor641.cycleInterval = 3.333;
Transform640.children = new MFNode();

Transform640.children[0] = TimeSensor641;

PositionInterpolator PositionInterpolator642 = createNode("PositionInterpolator");
PositionInterpolator642.DEF = "Shark-POS-INTERP";
PositionInterpolator642.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator642.keyValue = new MFVec3f(new float[-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188]);
Transform640.children[1] = PositionInterpolator642;

OrientationInterpolator OrientationInterpolator643 = createNode("OrientationInterpolator");
OrientationInterpolator643.DEF = "Shark-ROT-INTERP";
OrientationInterpolator643.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
OrientationInterpolator643.keyValue = new MFRotation(new float[-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166]);
Transform640.children[2] = OrientationInterpolator643;

Shape Shape644 = createNode("Shape");
Appearance Appearance645 = createNode("Appearance");
Material Material646 = createNode("Material");
Material646.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material646.shininess = 0.25;
Appearance645.material = Material646;

Shape644.appearance = Appearance645;

IndexedFaceSet IndexedFaceSet647 = createNode("IndexedFaceSet");
IndexedFaceSet647.DEF = "Shark-FACES";
IndexedFaceSet647.creaseAngle = 3;
IndexedFaceSet647.colorIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1]);
IndexedFaceSet647.coordIndex = new MFInt32(new int[0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1]);
Color Color648 = createNode("Color");
Color648.color = new MFColor(new float[0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333]);
IndexedFaceSet647.color = Color648;

Coordinate Coordinate649 = createNode("Coordinate");
Coordinate649.DEF = "Shark-COORD";
Coordinate649.point = new MFVec3f(new float[0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92,-29.54,18.3,-33.92,-59.07,11.28,0,75.19,183.2,0.2692,34.67,186.3,-38.64,-35.03,186.3,-38.64,-75.37,183.2,0.2692]);
IndexedFaceSet647.coord = Coordinate649;

Shape644.geometry = IndexedFaceSet647;

Transform640.child[3] = Shape644;

Transform Transform650 = createNode("Transform");
Transform650.DEF = "Shark_Eyeball_R-ROOT";
Transform650.translation = new SFVec3f(new float[55.09,1.822,-6.84]);
Transform650.rotation = new SFRotation(new float[-0.682571,0.661772,-0.310087,2.578]);
Transform650.scale = new SFVec3f(new float[1.042,1.042,1.042]);
Transform650.scaleOrientation = new SFRotation(new float[0.225199,0.944898,0.237599,0.6613]);
Shape Shape651 = createNode("Shape");
Appearance Appearance652 = createNode("Appearance");
Material Material653 = createNode("Material");
Material653.diffuseColor = new SFColor(new float[1,1,1]);
Appearance652.material = Material653;

Shape651.appearance = Appearance652;

IndexedFaceSet IndexedFaceSet654 = createNode("IndexedFaceSet");
IndexedFaceSet654.DEF = "Shark_Eyeball_R-FACES";
IndexedFaceSet654.creaseAngle = 3;
IndexedFaceSet654.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]);
Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.DEF = "Shark_Eyeball_R-COORD";
Coordinate655.point = new MFVec3f(new float[0,8.453,0,5.977,5.977,0,4.226,5.977,-4.226,0,5.977,-5.977,-4.226,5.977,-4.226,-5.977,5.977,0,-4.226,5.977,4.226,0,5.977,5.977,4.226,5.977,4.226,8.453,0,0,5.977,0,-5.977,0,0,-8.453,-5.977,0,-5.977,-8.453,0,0,-5.977,0,5.977,0,0,8.453,5.977,0,5.977,5.977,-5.977,0,4.226,-5.977,-4.226,0,-5.977,-5.977,-4.226,-5.977,-4.226,-5.977,-5.977,0,-4.226,-5.977,4.226,0,-5.977,5.977,4.226,-5.977,4.226,0,-8.453,0]);
IndexedFaceSet654.coord = Coordinate655;

Shape651.geometry = IndexedFaceSet654;

Transform650.child = new undefined();

Transform650.child[0] = Shape651;

Transform Transform656 = createNode("Transform");
Transform656.DEF = "Shark_Pupil_R-ROOT";
Transform656.translation = new SFVec3f(new float[0.00001311,0,8.714]);
Transform656.scaleOrientation = new SFRotation(new float[-0.6563,0,-0.7545,0.2488]);
TouchSensor TouchSensor657 = createNode("TouchSensor");
TouchSensor657.DEF = "eyeClick";
Transform656.children = new MFNode();

Transform656.children[0] = TouchSensor657;

Shape Shape658 = createNode("Shape");
Appearance Appearance659 = createNode("Appearance");
Material Material660 = createNode("Material");
Material660.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material660.shininess = 0.25;
Appearance659.material = Material660;

Shape658.appearance = Appearance659;

IndexedFaceSet IndexedFaceSet661 = createNode("IndexedFaceSet");
IndexedFaceSet661.DEF = "Shark_Pupil_R-FACES";
IndexedFaceSet661.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate662 = createNode("Coordinate");
Coordinate662.DEF = "Shark_Pupil_R-COORD";
Coordinate662.point = new MFVec3f(new float[0,2.536,0,2.196,1.268,0,1.098,1.268,-1.902,-1.098,1.268,-1.902,-2.196,1.268,0,-1.098,1.268,1.902,1.098,1.268,1.902,2.196,-1.268,0,1.098,-1.268,-1.902,-1.098,-1.268,-1.902,-2.196,-1.268,0,-1.098,-1.268,1.902,1.098,-1.268,1.902,0,-2.536,0]);
IndexedFaceSet661.coord = Coordinate662;

Shape658.geometry = IndexedFaceSet661;

Transform656.child[1] = Shape658;

Transform650.children[1] = Transform656;

Transform640.children[4] = Transform650;

Transform Transform663 = createNode("Transform");
Transform663.DEF = "Shark_Eyeball_L-ROOT";
Transform663.translation = new SFVec3f(new float[-54.37,2.848,-8.257]);
Transform663.rotation = new SFRotation(new float[-0.374592,0.400391,-0.836282,1.719]);
Transform663.scale = new SFVec3f(new float[1.048,1.048,1.048]);
Transform663.scaleOrientation = new SFRotation(new float[-0.756681,-0.653784,0,0.5694]);
Shape Shape664 = createNode("Shape");
Appearance Appearance665 = createNode("Appearance");
Material Material666 = createNode("Material");
Material666.diffuseColor = new SFColor(new float[1,1,1]);
Appearance665.material = Material666;

Shape664.appearance = Appearance665;

IndexedFaceSet IndexedFaceSet667 = createNode("IndexedFaceSet");
IndexedFaceSet667.USE = "Shark_Eyeball_R-FACES";
Shape664.geometry = IndexedFaceSet667;

Transform663.child = new undefined();

Transform663.child[0] = Shape664;

Transform Transform668 = createNode("Transform");
Transform668.DEF = "Shark_Pupil_L-ROOT";
Transform668.translation = new SFVec3f(new float[0,0,-9.028]);
Transform668.scaleOrientation = new SFRotation(new float[0,-0.415701,0.909501,0.2019]);
TouchSensor TouchSensor669 = createNode("TouchSensor");
TouchSensor669.DEF = "eyeClick2";
Transform668.children = new MFNode();

Transform668.children[0] = TouchSensor669;

Shape Shape670 = createNode("Shape");
Appearance Appearance671 = createNode("Appearance");
Material Material672 = createNode("Material");
Material672.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material672.shininess = 0.25;
Appearance671.material = Material672;

Shape670.appearance = Appearance671;

IndexedFaceSet IndexedFaceSet673 = createNode("IndexedFaceSet");
IndexedFaceSet673.USE = "Shark_Pupil_R-FACES";
Shape670.geometry = IndexedFaceSet673;

Transform668.child[1] = Shape670;

Transform663.children[1] = Transform668;

Transform640.children[5] = Transform663;

Transform Transform674 = createNode("Transform");
Transform674.DEF = "Shark_Gill_L01-ROOT";
Transform674.translation = new SFVec3f(new float[-49.99,54.17,-2.679]);
Transform674.rotation = new SFRotation(new float[0.645888,-0.686787,0.333394,3.713]);
Transform674.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform674.scaleOrientation = new SFRotation(new float[0.770007,-0.632706,-0.0823007,0.2026]);
PositionInterpolator PositionInterpolator675 = createNode("PositionInterpolator");
PositionInterpolator675.DEF = "Shark_Gill_L01-SCALE-INTERP";
PositionInterpolator675.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator675.keyValue = new MFVec3f(new float[21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform674.children = new MFNode();

Transform674.children[0] = PositionInterpolator675;

Transform Transform676 = createNode("Transform");
Transform676.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape677 = createNode("Shape");
Appearance Appearance678 = createNode("Appearance");
Material Material679 = createNode("Material");
Material679.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material679.shininess = 0.25;
Appearance678.material = Material679;

Shape677.appearance = Appearance678;

Box Box680 = createNode("Box");
Box680.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape677.geometry = Box680;

Transform676.child = new undefined();

Transform676.child[0] = Shape677;

Transform674.children[1] = Transform676;

Transform640.children[6] = Transform674;

Transform Transform681 = createNode("Transform");
Transform681.DEF = "Shark_Gill_L03-ROOT";
Transform681.translation = new SFVec3f(new float[-51.44,81.59,-3.382]);
Transform681.rotation = new SFRotation(new float[0.645888,-0.686787,0.333394,3.713]);
Transform681.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform681.scaleOrientation = new SFRotation(new float[0.770007,-0.632706,-0.0823007,0.2026]);
PositionInterpolator PositionInterpolator682 = createNode("PositionInterpolator");
PositionInterpolator682.DEF = "Shark_Gill_L03-SCALE-INTERP";
PositionInterpolator682.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator682.keyValue = new MFVec3f(new float[21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform681.children = new MFNode();

Transform681.children[0] = PositionInterpolator682;

Transform Transform683 = createNode("Transform");
Transform683.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape684 = createNode("Shape");
Appearance Appearance685 = createNode("Appearance");
Material Material686 = createNode("Material");
Material686.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material686.shininess = 0.25;
Appearance685.material = Material686;

Shape684.appearance = Appearance685;

Box Box687 = createNode("Box");
Box687.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape684.geometry = Box687;

Transform683.child = new undefined();

Transform683.child[0] = Shape684;

Transform681.children[1] = Transform683;

Transform640.children[7] = Transform681;

Transform Transform688 = createNode("Transform");
Transform688.DEF = "Shark_Gill_R02-ROOT";
Transform688.translation = new SFVec3f(new float[48.9,67.81,-5.426]);
Transform688.rotation = new SFRotation(new float[-0.316607,0.318407,-0.89352,1.764]);
Transform688.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform688.scaleOrientation = new SFRotation(new float[0.536701,-0.840101,-0.0786301,0.347]);
PositionInterpolator PositionInterpolator689 = createNode("PositionInterpolator");
PositionInterpolator689.DEF = "Shark_Gill_R02-SCALE-INTERP";
PositionInterpolator689.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator689.keyValue = new MFVec3f(new float[21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform688.children = new MFNode();

Transform688.children[0] = PositionInterpolator689;

Transform Transform690 = createNode("Transform");
Transform690.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape691 = createNode("Shape");
Appearance Appearance692 = createNode("Appearance");
Material Material693 = createNode("Material");
Material693.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material693.shininess = 0.25;
Appearance692.material = Material693;

Shape691.appearance = Appearance692;

Box Box694 = createNode("Box");
Box694.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape691.geometry = Box694;

Transform690.child = new undefined();

Transform690.child[0] = Shape691;

Transform688.children[1] = Transform690;

Transform640.children[8] = Transform688;

Transform Transform695 = createNode("Transform");
Transform695.DEF = "Shark_Gill_R01-ROOT";
Transform695.translation = new SFVec3f(new float[47.87,53.67,-5.074]);
Transform695.rotation = new SFRotation(new float[-0.316607,0.318407,-0.89352,1.764]);
Transform695.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform695.scaleOrientation = new SFRotation(new float[0.536701,-0.840101,-0.0786301,0.347]);
PositionInterpolator PositionInterpolator696 = createNode("PositionInterpolator");
PositionInterpolator696.DEF = "Shark_Gill_R01-SCALE-INTERP";
PositionInterpolator696.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator696.keyValue = new MFVec3f(new float[21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform695.children = new MFNode();

Transform695.children[0] = PositionInterpolator696;

Transform Transform697 = createNode("Transform");
Transform697.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape698 = createNode("Shape");
Appearance Appearance699 = createNode("Appearance");
Material Material700 = createNode("Material");
Material700.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material700.shininess = 0.25;
Appearance699.material = Material700;

Shape698.appearance = Appearance699;

Box Box701 = createNode("Box");
Box701.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape698.geometry = Box701;

Transform697.child = new undefined();

Transform697.child[0] = Shape698;

Transform695.children[1] = Transform697;

Transform640.children[9] = Transform695;

Transform Transform702 = createNode("Transform");
Transform702.DEF = "Shark_Gill_R03-ROOT";
Transform702.translation = new SFVec3f(new float[49.86,81.06,-5.755]);
Transform702.rotation = new SFRotation(new float[-0.316607,0.318407,-0.89352,1.764]);
Transform702.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform702.scaleOrientation = new SFRotation(new float[0.536701,-0.840101,-0.0786301,0.347]);
PositionInterpolator PositionInterpolator703 = createNode("PositionInterpolator");
PositionInterpolator703.DEF = "Shark_Gill_R03-SCALE-INTERP";
PositionInterpolator703.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator703.keyValue = new MFVec3f(new float[21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform702.children = new MFNode();

Transform702.children[0] = PositionInterpolator703;

Transform Transform704 = createNode("Transform");
Transform704.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape705 = createNode("Shape");
Appearance Appearance706 = createNode("Appearance");
Material Material707 = createNode("Material");
Material707.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material707.shininess = 0.25;
Appearance706.material = Material707;

Shape705.appearance = Appearance706;

Box Box708 = createNode("Box");
Box708.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape705.geometry = Box708;

Transform704.child = new undefined();

Transform704.child[0] = Shape705;

Transform702.children[1] = Transform704;

Transform640.children[10] = Transform702;

Transform Transform709 = createNode("Transform");
Transform709.DEF = "Shark_Gill_L02-ROOT";
Transform709.translation = new SFVec3f(new float[-50.64,67.65,-3.755]);
Transform709.rotation = new SFRotation(new float[0.646034,-0.686736,0.333217,3.713]);
Transform709.scale = new SFVec3f(new float[21.15,23.8704,21.15]);
Transform709.scaleOrientation = new SFRotation(new float[0.927626,0,-0.37351,0.187601]);
PositionInterpolator PositionInterpolator710 = createNode("PositionInterpolator");
PositionInterpolator710.DEF = "Shark_Gill_L02-SCALE-INTERP";
PositionInterpolator710.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator710.keyValue = new MFVec3f(new float[21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15]);
Transform709.children = new MFNode();

Transform709.children[0] = PositionInterpolator710;

Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[0,0.1148,0]);
Shape Shape712 = createNode("Shape");
Appearance Appearance713 = createNode("Appearance");
Material Material714 = createNode("Material");
Material714.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material714.shininess = 0.25;
Appearance713.material = Material714;

Shape712.appearance = Appearance713;

Box Box715 = createNode("Box");
Box715.size = new SFVec3f(new float[0.2295,0.2295,1.071]);
Shape712.geometry = Box715;

Transform711.child = new undefined();

Transform711.child[0] = Shape712;

Transform709.children[1] = Transform711;

Transform640.children[11] = Transform709;

Transform Transform716 = createNode("Transform");
Transform716.DEF = "Shark_Fin_L-ROOT";
Transform716.translation = new SFVec3f(new float[-68.62,84.59,15.82]);
Transform716.rotation = new SFRotation(new float[-0.775069,0.451282,-0.442282,1.789]);
Transform716.scale = new SFVec3f(new float[253.3,501.6,779.7]);
Transform716.scaleOrientation = new SFRotation(new float[0,1,0,0.719]);
Transform Transform717 = createNode("Transform");
Transform717.translation = new SFVec3f(new float[0,0.005132,0]);
Shape Shape718 = createNode("Shape");
Appearance Appearance719 = createNode("Appearance");
Material Material720 = createNode("Material");
Material720.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material720.shininess = 0.25;
Appearance719.material = Material720;

Shape718.appearance = Appearance719;

Box Box721 = createNode("Box");
Box721.size = new SFVec3f(new float[0.1078,0.01026,0.1052]);
Shape718.geometry = Box721;

Transform717.child = new undefined();

Transform717.child[0] = Shape718;

Transform716.children = new MFNode();

Transform716.children[0] = Transform717;

Transform640.children[12] = Transform716;

Transform Transform722 = createNode("Transform");
Transform722.DEF = "Shark_Fin_R-ROOT";
Transform722.translation = new SFVec3f(new float[72.39,86.19,16.73]);
Transform722.rotation = new SFRotation(new float[-0.903272,0.305291,-0.301491,1.64]);
Transform722.scale = new SFVec3f(new float[253.3,501.6,779.7]);
Transform722.scaleOrientation = new SFRotation(new float[0,1,0,0.719]);
Transform Transform723 = createNode("Transform");
Transform723.translation = new SFVec3f(new float[0,0.005132,0]);
Shape Shape724 = createNode("Shape");
Appearance Appearance725 = createNode("Appearance");
Material Material726 = createNode("Material");
Material726.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material726.shininess = 0.25;
Appearance725.material = Material726;

Shape724.appearance = Appearance725;

Box Box727 = createNode("Box");
Box727.size = new SFVec3f(new float[0.1078,0.01026,0.1052]);
Shape724.geometry = Box727;

Transform723.child = new undefined();

Transform723.child[0] = Shape724;

Transform722.children = new MFNode();

Transform722.children[0] = Transform723;

Transform640.children[13] = Transform722;

Transform Transform728 = createNode("Transform");
Transform728.DEF = "Shark_Fin_T-ROOT";
Transform728.translation = new SFVec3f(new float[-3.415,141.4,-20.76]);
Transform728.rotation = new SFRotation(new float[-0.105105,-0.112805,-0.988042,1.578]);
Transform728.scale = new SFVec3f(new float[372.2,501.6,895.7]);
Transform728.scaleOrientation = new SFRotation(new float[-0.000692,0.999999,-0.0007271,0.7108]);
Shape Shape729 = createNode("Shape");
Appearance Appearance730 = createNode("Appearance");
Material Material731 = createNode("Material");
Material731.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material731.shininess = 0.25;
Appearance730.material = Material731;

Shape729.appearance = Appearance730;

IndexedFaceSet IndexedFaceSet732 = createNode("IndexedFaceSet");
IndexedFaceSet732.DEF = "Shark_Fin_T-FACES";
IndexedFaceSet732.coordIndex = new MFInt32(new int[0,7,2,-1,6,8,3,-1,7,1,4,-1,6,5,2,-1,9,0,3,-1,8,4,1,-1,5,6,3,-1,4,6,7,-1,9,1,7,-1,2,7,6,-1,6,4,8,-1,3,8,9,-1,1,9,8,-1,0,9,7,-1]);
Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.DEF = "Shark_Fin_T-COORD";
Coordinate733.point = new MFVec3f(new float[-0.07286,-0.0002971,0.02072,-0.09155,-0.002948,-0.02931,0.06054,0.00003569,-0.05069,-0.07286,0.006703,0.02072,-0.09155,0.004052,-0.02931,0.06054,0.007036,-0.05069,-0.02512,0.007556,-0.0462,-0.02512,0.0005558,-0.0462,-0.07472,0.005046,-0.01182,-0.07472,-0.001954,-0.01182]);
IndexedFaceSet732.coord = Coordinate733;

Shape729.geometry = IndexedFaceSet732;

Transform728.child = new undefined();

Transform728.child[0] = Shape729;

Transform640.children[14] = Transform728;

Group639.children = new MFNode();

Group639.children[0] = Transform640;

TimeSensor TimeSensor734 = createNode("TimeSensor");
TimeSensor734.DEF = "SharkDeathTimer";
TimeSensor734.cycleInterval = 15;
Group639.children[1] = TimeSensor734;

TimeSensor TimeSensor735 = createNode("TimeSensor");
TimeSensor735.DEF = "SharkBoomTimer";
TimeSensor735.cycleInterval = 5.6;
Group639.children[2] = TimeSensor735;

TimeSensor TimeSensor736 = createNode("TimeSensor");
TimeSensor736.DEF = "FishBurpTimer";
TimeSensor736.cycleInterval = 11;
Group639.children[3] = TimeSensor736;

PositionInterpolator PositionInterpolator737 = createNode("PositionInterpolator");
PositionInterpolator737.DEF = "SharkDeath-POS-INTERP";
PositionInterpolator737.key = new MFFloat(new float[0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3867]);
PositionInterpolator737.keyValue = new MFVec3f(new float[0.001881,-0.2842,-1.188,-0.006575,-0.2482,-1.068,0.0003181,-0.2849,-1.189,0.0008941,-0.2852,-1.189,0.0009147,-0.2853,-1.189,0.0006456,-0.2852,-1.189,0.0003574,-0.285,-1.189,0.0003181,-0.2849,-1.189,0.0006044,-0.2844,-1.188,0.001038,-0.2836,-1.188,0.001502,-0.2833,-1.188,0.001881,-0.2842,-1.188,0.001798,-0.2354,-0.8653,0.0004518,-0.2849,-1.189,0.0004518,-0.2849,-1.189,0.001798,-0.2733,-0.9422,0.0004518,-0.2849,-1.189,0.02244,-0.2735,-0.9417,0.0004518,-0.2849,-1.189,0.002354,-0.2591,-0.9724,0.001798,-0.2733,-0.9422,0.002354,-0.2591,-1.05,0.002118,-0.2651,-1.094,0.003038,-0.2415,-1.159,0.002682,-0.2506,-1.178,0.0009442,-0.2082,-1.348,0.001113,-0.1891,-1.58,0.0012,-0.1793,-1.676,0.001513,-0.1439,-1.656,0.001513,-2.072,-1.656]);
Group639.children[4] = PositionInterpolator737;

OrientationInterpolator OrientationInterpolator738 = createNode("OrientationInterpolator");
OrientationInterpolator738.DEF = "SharkDeath-ROT-INTERP";
OrientationInterpolator738.key = new MFFloat(new float[0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.32,0.3333]);
OrientationInterpolator738.keyValue = new MFRotation(new float[-0.999941,0.00659827,-0.00861636,4.167,-0.995366,0.0222392,0.0935568,4.139,-0.999992,-0.000109199,-0.00407597,4.174,-0.999891,-0.00264198,-0.0145299,4.177,-0.999872,-0.00318291,-0.0156896,4.178,-0.99993,-0.00245707,-0.0116103,4.177,-0.999979,-0.00118997,-0.00638587,4.175,-0.999992,-0.000109199,-0.00407597,4.174,-0.999987,0.00111799,-0.00492194,4.169,-0.999976,0.00296893,-0.00619885,4.16,-0.999959,0.0049528,-0.00754669,4.157,-0.999941,0.00659827,-0.00861636,4.167,0.999946,-0.0065003,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,-0.99999,0.000493395,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,0.998106,-0.0500803,0.0357302,2.015,-0.99999,0.000493495,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174]);
Group639.children[5] = OrientationInterpolator738;

PositionInterpolator PositionInterpolator739 = createNode("PositionInterpolator");
PositionInterpolator739.DEF = "SharkDeath-SCALE-INTERP";
PositionInterpolator739.key = new MFFloat(new float[0,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3734]);
PositionInterpolator739.keyValue = new MFVec3f(new float[0.001994,0.001994,0.001994,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.002339,0.002339,0.002339,0.003329,0.003329,0.003329,0.002946,0.002946,0.002946,0.003939,0.003939,0.003939,0.004608,0.004608,0.004608,0.00495,0.00495,0.00495,0.006188,0.006188,0.006188,0.000001,0.000001,0.000001]);
Group639.children[6] = PositionInterpolator739;

Transform Transform740 = createNode("Transform");
Transform740.DEF = "SharkDeath-ROOT";
Transform740.translation = new SFVec3f(new float[0.001881,-0.2842,-1.188]);
Transform740.rotation = new SFRotation(new float[-0.999941,0.00659827,-0.00861635,4.167]);
Transform740.scale = new SFVec3f(new float[0.001994,0.001994,0.001994]);
Transform740.scaleOrientation = new SFRotation(new float[-0.00414896,0.999991,0,0.3366]);
Transform Transform741 = createNode("Transform");
Transform741.DEF = "SharkDeath_Eyeball_R-ROOT";
Transform741.translation = new SFVec3f(new float[55.09,1.822,-6.84]);
Transform741.rotation = new SFRotation(new float[-0.682571,0.661772,-0.310087,2.578]);
Transform741.scale = new SFVec3f(new float[1.042,1.042,1.042]);
Transform741.scaleOrientation = new SFRotation(new float[-0.859288,-0.0939287,0.502793,0.2111]);
PositionInterpolator PositionInterpolator742 = createNode("PositionInterpolator");
PositionInterpolator742.DEF = "SharkDeath_Eyeball_R-POS-INTERP";
PositionInterpolator742.key = new MFFloat(new float[0]);
PositionInterpolator742.keyValue = new MFVec3f(new float[55.09,1.822,-6.84]);
Transform741.children = new MFNode();

Transform741.children[0] = PositionInterpolator742;

OrientationInterpolator OrientationInterpolator743 = createNode("OrientationInterpolator");
OrientationInterpolator743.DEF = "SharkDeath_Eyeball_R-ROT-INTERP";
OrientationInterpolator743.key = new MFFloat(new float[0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933]);
OrientationInterpolator743.keyValue = new MFRotation(new float[-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,-0.711681,0.699782,-0.0617684,3.069,-0.706442,0.700642,0.100206,3.397,-0.703618,0.698918,0.128203,3.452,-0.702038,0.697837,0.142008,3.479,-0.701805,0.697705,0.143801,3.483,-0.702782,0.698382,0.135497,3.466,-0.704594,0.699494,0.119399,3.435,-0.706684,0.700785,0.0974579,3.391,-0.708719,0.701819,0.0718819,3.34,-0.710388,0.702388,0.0447192,3.285,-0.711647,0.702446,0.0113307,3.218,-0.712116,0.701315,-0.0323707,3.129,-0.711003,0.698203,-0.0835904,3.025,-0.707543,0.692742,-0.139609,2.912,-0.70152,0.684619,-0.197906,2.796,-0.693003,0.674103,-0.255601,2.683,-0.682571,0.661772,-0.310087,2.578]);
Transform741.children[1] = OrientationInterpolator743;

PositionInterpolator PositionInterpolator744 = createNode("PositionInterpolator");
PositionInterpolator744.DEF = "SharkDeath_Eyeball_R-SCALE-INTERP";
PositionInterpolator744.key = new MFFloat(new float[0,0.01333,0.02667,0.1467,0.16,0.1733,0.2933,0.3067,0.32]);
PositionInterpolator744.keyValue = new MFVec3f(new float[1.042,1.042,1.042,2.454,2.454,2.454,1.042,1.042,1.042,1.042,1.042,1.042,1.938,1.938,1.937,1.042,1.042,1.042,1.042,1.042,1.042,1.583,1.583,1.583,1.042,1.042,1.042]);
Transform741.children[2] = PositionInterpolator744;

Transform740.children = new MFNode();

Transform740.children[0] = Transform741;

Transform Transform745 = createNode("Transform");
Transform745.DEF = "SharkDeath_Eyeball_L-ROOT";
Transform745.translation = new SFVec3f(new float[-54.37,2.848,-8.257]);
Transform745.rotation = new SFRotation(new float[-0.374592,0.400391,-0.836282,1.719]);
Transform745.scale = new SFVec3f(new float[1.048,1.048,1.048]);
Transform745.scaleOrientation = new SFRotation(new float[0.682806,-0.223402,-0.695606,0.2779]);
PositionInterpolator PositionInterpolator746 = createNode("PositionInterpolator");
PositionInterpolator746.DEF = "SharkDeath_Eyeball_L-POS-INTERP";
PositionInterpolator746.key = new MFFloat(new float[0]);
PositionInterpolator746.keyValue = new MFVec3f(new float[-54.37,2.848,-8.257]);
Transform745.children = new MFNode();

Transform745.children[0] = PositionInterpolator746;

OrientationInterpolator OrientationInterpolator747 = createNode("OrientationInterpolator");
OrientationInterpolator747.DEF = "SharkDeath_Eyeball_L-ROT-INTERP";
OrientationInterpolator747.key = new MFFloat(new float[0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067]);
OrientationInterpolator747.keyValue = new MFRotation(new float[-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.113603,0.148104,-0.982425,1.57,0.0838699,-0.04633,-0.995399,1.564,0.119496,-0.0817271,-0.989465,1.571,0.138505,-0.100604,-0.985239,1.576,0.143596,-0.105697,-0.983976,1.578,0.137193,-0.0993252,-0.985552,1.576,0.121495,-0.0836666,-0.98906,1.572,0.0985271,-0.0608682,-0.993271,1.567,0.0705967,-0.0331684,-0.996953,1.562,0.0399898,-0.00286899,-0.999196,1.559,0.00276406,0.0338807,-0.999422,1.557,-0.0448909,0.0807816,-0.99572,1.559,-0.100001,0.134802,-0.985813,1.567,-0.159306,0.192708,-0.968238,1.583,-0.219304,0.251004,-0.942816,1.607,-0.276809,0.30651,-0.91073,1.639,-0.329115,0.356916,-0.874239,1.677,-0.374592,0.400391,-0.836282,1.719]);
Transform745.children[1] = OrientationInterpolator747;

PositionInterpolator PositionInterpolator748 = createNode("PositionInterpolator");
PositionInterpolator748.DEF = "SharkDeath_Eyeball_L-SCALE-INTERP";
PositionInterpolator748.key = new MFFloat(new float[0,0.01333,0.02667,0.1867,0.2,0.2133,0.3067,0.32,0.3333]);
PositionInterpolator748.keyValue = new MFVec3f(new float[1.048,1.048,1.048,2.548,2.548,2.548,1.048,1.048,1.048,1.048,1.048,1.048,1.928,1.928,1.928,1.048,1.048,1.048,1.048,1.048,1.048,1.582,1.582,1.582,1.048,1.048,1.048]);
Transform745.children[2] = PositionInterpolator748;

Transform740.children[1] = Transform745;

Group639.children[7] = Transform740;

Group Group749 = createNode("Group");
Transform Transform750 = createNode("Transform");
Transform750.DEF = "Dummy_SharkDeath_explode-ROOT";
Transform750.translation = new SFVec3f(new float[-0.000025,-1.738,-1.326]);
PositionInterpolator PositionInterpolator751 = createNode("PositionInterpolator");
PositionInterpolator751.DEF = "Dummy_SharkDeath_explode-POS-INTERP";
PositionInterpolator751.key = new MFFloat(new float[0,0.3733,0.3867]);
PositionInterpolator751.keyValue = new MFVec3f(new float[-0.000025,-1.738,-1.326,-0.000025,-1.738,-1.326,-0.000025,-0.2489,-1.326]);
Transform750.children = new MFNode();

Transform750.children[0] = PositionInterpolator751;

Transform Transform752 = createNode("Transform");
Transform752.DEF = "SharkDeath_explode_Eyeball_L-ROOT";
Transform752.translation = new SFVec3f(new float[-0.3353,0.1388,-0.2908]);
Transform752.rotation = new SFRotation(new float[0.520301,0.852102,-0.0566501,1.925]);
Transform752.scale = new SFVec3f(new float[0.006484,0.006484,0.006484]);
Transform752.scaleOrientation = new SFRotation(new float[-0.710431,0.595526,0.375016,0.0659083]);
PositionInterpolator PositionInterpolator753 = createNode("PositionInterpolator");
PositionInterpolator753.DEF = "SharkDeath_explode_Eyeball_L-POS-INTERP";
PositionInterpolator753.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator753.keyValue = new MFVec3f(new float[-0.3353,0.1388,-0.2908,-0.3353,0.1388,-0.2908,-0.8877,0.6117,-0.2908,-1.44,1.085,-0.2908]);
Transform752.children = new MFNode();

Transform752.children[0] = PositionInterpolator753;

Shape Shape754 = createNode("Shape");
Appearance Appearance755 = createNode("Appearance");
Material Material756 = createNode("Material");
Material756.diffuseColor = new SFColor(new float[1,1,1]);
Appearance755.material = Material756;

Shape754.appearance = Appearance755;

IndexedFaceSet IndexedFaceSet757 = createNode("IndexedFaceSet");
IndexedFaceSet757.DEF = "SharkDeath_explode_Eyeball_L-FACES";
IndexedFaceSet757.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.DEF = "SharkDeath_explode_Eyeball_L-COORD";
Coordinate758.point = new MFVec3f(new float[0,8.453,0,0,4.226,-7.32,-6.34,4.226,-3.66,-6.34,4.226,3.66,0,4.226,7.32,6.34,4.226,3.66,6.34,4.226,-3.66,0,-4.226,-7.32,-6.34,-4.226,-3.66,-6.34,-4.226,3.66,0,-4.226,7.32,6.34,-4.226,3.66,6.34,-4.226,-3.66,0,-8.453,0]);
IndexedFaceSet757.coord = Coordinate758;

Shape754.geometry = IndexedFaceSet757;

Transform752.child[1] = Shape754;

Transform Transform759 = createNode("Transform");
Transform759.DEF = "SharkDeath_explode_Pupil_L-ROOT";
Transform759.translation = new SFVec3f(new float[0,0,-9.027]);
Shape Shape760 = createNode("Shape");
Appearance Appearance761 = createNode("Appearance");
Material Material762 = createNode("Material");
Material762.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material762.shininess = 0.25;
Appearance761.material = Material762;

Shape760.appearance = Appearance761;

IndexedFaceSet IndexedFaceSet763 = createNode("IndexedFaceSet");
IndexedFaceSet763.DEF = "SharkDeath_explode_Pupil_L-FACES";
IndexedFaceSet763.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]);
Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.DEF = "SharkDeath_explode_Pupil_L-COORD";
Coordinate764.point = new MFVec3f(new float[0,2.536,0,0,1.268,-2.196,-1.902,1.268,-1.098,-1.902,1.268,1.098,0,1.268,2.196,1.902,1.268,1.098,1.902,1.268,-1.098,0,-1.268,-2.196,-1.902,-1.268,-1.098,-1.902,-1.268,1.098,0,-1.268,2.196,1.902,-1.268,1.098,1.902,-1.268,-1.098,0,-2.536,0]);
IndexedFaceSet763.coord = Coordinate764;

Shape760.geometry = IndexedFaceSet763;

Transform759.child = new undefined();

Transform759.child[0] = Shape760;

Transform752.children[2] = Transform759;

Transform750.children[1] = Transform752;

Transform Transform765 = createNode("Transform");
Transform765.DEF = "SharkDeath_explode_Eyeball_R-ROOT";
Transform765.translation = new SFVec3f(new float[0.3421,0.1366,-0.2959]);
Transform765.rotation = new SFRotation(new float[-0.119501,0.808308,0.576505,1.566]);
Transform765.scale = new SFVec3f(new float[0.006446,0.006446,0.006446]);
Transform765.scaleOrientation = new SFRotation(new float[-0.315206,0.144103,-0.938019,0.524]);
PositionInterpolator PositionInterpolator766 = createNode("PositionInterpolator");
PositionInterpolator766.DEF = "SharkDeath_explode_Eyeball_R-POS-INTERP";
PositionInterpolator766.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator766.keyValue = new MFVec3f(new float[0.3421,0.1366,-0.2959,0.3421,0.1366,-0.2959,0.8428,0.5922,-0.2959,1.343,1.048,-0.2959]);
Transform765.children = new MFNode();

Transform765.children[0] = PositionInterpolator766;

Shape Shape767 = createNode("Shape");
Appearance Appearance768 = createNode("Appearance");
Material Material769 = createNode("Material");
Material769.diffuseColor = new SFColor(new float[1,1,1]);
Appearance768.material = Material769;

Shape767.appearance = Appearance768;

IndexedFaceSet IndexedFaceSet770 = createNode("IndexedFaceSet");
IndexedFaceSet770.USE = "SharkDeath_explode_Eyeball_L-FACES";
Shape767.geometry = IndexedFaceSet770;

Transform765.child[1] = Shape767;

Transform Transform771 = createNode("Transform");
Transform771.DEF = "SharkDeath_explode_Pupil_R-ROOT";
Transform771.translation = new SFVec3f(new float[0,-0.0000144,8.714]);
Shape Shape772 = createNode("Shape");
Appearance Appearance773 = createNode("Appearance");
Material Material774 = createNode("Material");
Material774.diffuseColor = new SFColor(new float[0.102,0.102,0.102]);
Material774.shininess = 0.25;
Appearance773.material = Material774;

Shape772.appearance = Appearance773;

IndexedFaceSet IndexedFaceSet775 = createNode("IndexedFaceSet");
IndexedFaceSet775.USE = "SharkDeath_explode_Pupil_L-FACES";
Shape772.geometry = IndexedFaceSet775;

Transform771.child = new undefined();

Transform771.child[0] = Shape772;

Transform765.children[2] = Transform771;

Transform750.children[2] = Transform765;

Transform Transform776 = createNode("Transform");
Transform776.DEF = "SharkDeath_explode00-ROOT";
Transform776.translation = new SFVec3f(new float[-0.4308,-0.2435,0.06649]);
Transform776.rotation = new SFRotation(new float[0.445898,0.858995,0.251599,1.161]);
Transform776.scale = new SFVec3f(new float[1.567,3.104,4.824]);
Transform776.scaleOrientation = new SFRotation(new float[0,1,0,0.719]);
PositionInterpolator PositionInterpolator777 = createNode("PositionInterpolator");
PositionInterpolator777.DEF = "SharkDeath_explode00-POS-INTERP";
PositionInterpolator777.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator777.keyValue = new MFVec3f(new float[-0.4308,-0.2435,0.06649,-0.4308,-0.2435,0.06649,-0.8008,-0.09703,0.06649,-1.171,0.04949,0.06649]);
Transform776.children = new MFNode();

Transform776.children[0] = PositionInterpolator777;

Shape Shape778 = createNode("Shape");
Appearance Appearance779 = createNode("Appearance");
Material Material780 = createNode("Material");
Material780.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material780.shininess = 0.25;
Appearance779.material = Material780;

Shape778.appearance = Appearance779;

IndexedFaceSet IndexedFaceSet781 = createNode("IndexedFaceSet");
IndexedFaceSet781.DEF = "SharkDeath_explode00-FACES";
IndexedFaceSet781.coordIndex = new MFInt32(new int[2,1,0,-1]);
Coordinate Coordinate782 = createNode("Coordinate");
Coordinate782.DEF = "SharkDeath_explode00-COORD";
Coordinate782.point = new MFVec3f(new float[-0.05388,0.01026,0.0526,-0.05388,0.01026,-0.0526,0.05388,0.01026,-0.0526]);
IndexedFaceSet781.coord = Coordinate782;

Shape778.geometry = IndexedFaceSet781;

Transform776.child[1] = Shape778;

Transform750.children[3] = Transform776;

Transform Transform783 = createNode("Transform");
Transform783.DEF = "SharkDeath_explode01-ROOT";
Transform783.translation = new SFVec3f(new float[0.4502,-0.2508,0.07826]);
Transform783.rotation = new SFRotation(new float[0.650419,0.728922,0.213606,0.8453]);
Transform783.scale = new SFVec3f(new float[1.567,3.104,4.824]);
Transform783.scaleOrientation = new SFRotation(new float[0,1,0,0.719]);
PositionInterpolator PositionInterpolator784 = createNode("PositionInterpolator");
PositionInterpolator784.DEF = "SharkDeath_explode01-POS-INTERP";
PositionInterpolator784.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator784.keyValue = new MFVec3f(new float[0.4502,-0.2508,0.07826,0.4502,-0.2508,0.07826,0.7577,-0.08718,0.07826,1.065,0.07641,0.07826]);
Transform783.children = new MFNode();

Transform783.children[0] = PositionInterpolator784;

Shape Shape785 = createNode("Shape");
Appearance Appearance786 = createNode("Appearance");
Material Material787 = createNode("Material");
Material787.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material787.shininess = 0.25;
Appearance786.material = Material787;

Shape785.appearance = Appearance786;

IndexedFaceSet IndexedFaceSet788 = createNode("IndexedFaceSet");
IndexedFaceSet788.DEF = "SharkDeath_explode01-FACES";
IndexedFaceSet788.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.DEF = "SharkDeath_explode01-COORD";
Coordinate789.point = new MFVec3f(new float[-0.05388,0.01026,0.0526,0.05388,0.01026,0.0526,0.05388,0.01026,-0.0526]);
IndexedFaceSet788.coord = Coordinate789;

Shape785.geometry = IndexedFaceSet788;

Transform783.child[1] = Shape785;

Transform750.children[4] = Transform783;

Transform Transform790 = createNode("Transform");
Transform790.DEF = "SharkDeath_explode02-ROOT";
Transform790.translation = new SFVec3f(new float[-0.03068,0.05687,-0.3348]);
Transform790.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform790.scale = new SFVec3f(new float[0.006236,0.006236,0.006236]);
Transform790.scaleOrientation = new SFRotation(new float[-0.0063492,0.0223107,0.999731,0.7856]);
PositionInterpolator PositionInterpolator791 = createNode("PositionInterpolator");
PositionInterpolator791.DEF = "SharkDeath_explode02-POS-INTERP";
PositionInterpolator791.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator791.keyValue = new MFVec3f(new float[-0.03068,0.05687,-0.3348,-0.03068,0.05687,-0.3348,-0.2365,0.6657,0.016,-0.4852,1.238,0.3554]);
Transform790.children = new MFNode();

Transform790.children[0] = PositionInterpolator791;

OrientationInterpolator OrientationInterpolator792 = createNode("OrientationInterpolator");
OrientationInterpolator792.DEF = "SharkDeath_explode02-ROT-INTERP";
OrientationInterpolator792.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
OrientationInterpolator792.keyValue = new MFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.929108,0.294703,0.223402,4.018,-0.748303,0.526602,0.403402,3.76]);
Transform790.children[1] = OrientationInterpolator792;

PositionInterpolator PositionInterpolator793 = createNode("PositionInterpolator");
PositionInterpolator793.DEF = "SharkDeath_explode02-SCALE-INTERP";
PositionInterpolator793.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator793.keyValue = new MFVec3f(new float[0.006236,0.006236,0.006236,0.006236,0.006236,0.006236,0.002989,0.002989,0.002989,0.0002585,0.0002585,0.0002585]);
Transform790.children[2] = PositionInterpolator793;

Shape Shape794 = createNode("Shape");
Appearance Appearance795 = createNode("Appearance");
Material Material796 = createNode("Material");
Material796.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material796.shininess = 0.25;
Appearance795.material = Material796;

Shape794.appearance = Appearance795;

IndexedFaceSet IndexedFaceSet797 = createNode("IndexedFaceSet");
IndexedFaceSet797.DEF = "SharkDeath_explode02-FACES";
IndexedFaceSet797.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate798 = createNode("Coordinate");
Coordinate798.DEF = "SharkDeath_explode02-COORD";
Coordinate798.point = new MFVec3f(new float[29.53,18.3,-33.92,-29.54,18.3,-33.92,-35.03,186.3,-38.64]);
IndexedFaceSet797.coord = Coordinate798;

Shape794.geometry = IndexedFaceSet797;

Transform790.child[3] = Shape794;

Transform750.children[5] = Transform790;

Transform Transform799 = createNode("Transform");
Transform799.DEF = "SharkDeath_explode03-ROOT";
Transform799.translation = new SFVec3f(new float[0.0338,0.09924,-0.1897]);
Transform799.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform799.scale = new SFVec3f(new float[0.004872,0.004872,0.004872]);
Transform799.scaleOrientation = new SFRotation(new float[0.314787,-0.949162,0,0.2634]);
PositionInterpolator PositionInterpolator800 = createNode("PositionInterpolator");
PositionInterpolator800.DEF = "SharkDeath_explode03-POS-INTERP";
PositionInterpolator800.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator800.keyValue = new MFVec3f(new float[0.0338,0.09924,-0.1897,0.0338,0.09924,-0.1897,0.2199,0.713,0.08534,0.4266,1.263,0.3428]);
Transform799.children = new MFNode();

Transform799.children[0] = PositionInterpolator800;

OrientationInterpolator OrientationInterpolator801 = createNode("OrientationInterpolator");
OrientationInterpolator801.DEF = "SharkDeath_explode03-ROT-INTERP";
OrientationInterpolator801.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
OrientationInterpolator801.keyValue = new MFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.985139,0.109404,0.132405,4.044,-0.943824,0.208205,0.256607,3.892]);
Transform799.children[1] = OrientationInterpolator801;

PositionInterpolator PositionInterpolator802 = createNode("PositionInterpolator");
PositionInterpolator802.DEF = "SharkDeath_explode03-SCALE-INTERP";
PositionInterpolator802.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator802.keyValue = new MFVec3f(new float[0.004872,0.004872,0.004872,0.004872,0.004872,0.004872,0.002364,0.002364,0.002364,0.0001437,0.0001437,0.0001437]);
Transform799.children[2] = PositionInterpolator802;

Shape Shape803 = createNode("Shape");
Appearance Appearance804 = createNode("Appearance");
Material Material805 = createNode("Material");
Material805.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material805.shininess = 0.25;
Appearance804.material = Material805;

Shape803.appearance = Appearance804;

IndexedFaceSet IndexedFaceSet806 = createNode("IndexedFaceSet");
IndexedFaceSet806.DEF = "SharkDeath_explode03-FACES";
IndexedFaceSet806.coordIndex = new MFInt32(new int[0,2,1,-1]);
Coordinate Coordinate807 = createNode("Coordinate");
Coordinate807.DEF = "SharkDeath_explode03-COORD";
Coordinate807.point = new MFVec3f(new float[29.53,18.3,-33.92,34.67,186.3,-38.64,-35.03,186.3,-38.64]);
IndexedFaceSet806.coord = Coordinate807;

Shape803.geometry = IndexedFaceSet806;

Transform799.child[3] = Shape803;

Transform750.children[6] = Transform799;

Transform Transform808 = createNode("Transform");
Transform808.DEF = "SharkDeath_explode04-ROOT";
Transform808.translation = new SFVec3f(new float[-0.1079,0.03875,-0.1554]);
Transform808.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform808.scale = new SFVec3f(new float[0.004288,0.004288,0.004288]);
Transform808.scaleOrientation = new SFRotation(new float[-0.098672,0,0.99512,0.369]);
PositionInterpolator PositionInterpolator809 = createNode("PositionInterpolator");
PositionInterpolator809.DEF = "SharkDeath_explode04-POS-INTERP";
PositionInterpolator809.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator809.keyValue = new MFVec3f(new float[-0.1079,0.03875,-0.1554,-0.1079,0.03875,-0.1554,-0.4529,0.3377,-0.1004,-0.7978,0.6366,-0.04533]);
Transform808.children = new MFNode();

Transform808.children[0] = PositionInterpolator809;

PositionInterpolator PositionInterpolator810 = createNode("PositionInterpolator");
PositionInterpolator810.DEF = "SharkDeath_explode04-SCALE-INTERP";
PositionInterpolator810.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator810.keyValue = new MFVec3f(new float[0.004288,0.004288,0.004288,0.004288,0.004288,0.004288,0.003688,0.003688,0.003688,0.003088,0.003088,0.003088]);
Transform808.children[1] = PositionInterpolator810;

Shape Shape811 = createNode("Shape");
Appearance Appearance812 = createNode("Appearance");
Material Material813 = createNode("Material");
Material813.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material813.shininess = 0.25;
Appearance812.material = Material813;

Shape811.appearance = Appearance812;

IndexedFaceSet IndexedFaceSet814 = createNode("IndexedFaceSet");
IndexedFaceSet814.DEF = "SharkDeath_explode04-FACES";
IndexedFaceSet814.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate815 = createNode("Coordinate");
Coordinate815.DEF = "SharkDeath_explode04-COORD";
Coordinate815.point = new MFVec3f(new float[-29.54,18.3,-33.92,-59.07,11.28,0,-75.37,183.2,0.2692]);
IndexedFaceSet814.coord = Coordinate815;

Shape811.geometry = IndexedFaceSet814;

Transform808.child[2] = Shape811;

Transform750.children[7] = Transform808;

Transform Transform816 = createNode("Transform");
Transform816.DEF = "SharkDeath_explode05-ROOT";
Transform816.translation = new SFVec3f(new float[0.04049,0.01028,-0.3648]);
Transform816.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform816.scale = new SFVec3f(new float[0.008663,0.008663,0.008663]);
Transform816.scaleOrientation = new SFRotation(new float[0.999889,-0.0148998,0,0.7854]);
PositionInterpolator PositionInterpolator817 = createNode("PositionInterpolator");
PositionInterpolator817.DEF = "SharkDeath_explode05-POS-INTERP";
PositionInterpolator817.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator817.keyValue = new MFVec3f(new float[0.04049,0.01028,-0.3648,0.04049,0.01028,-0.3648,-0.08023,0.5155,-0.3648,-0.201,1.021,-0.3648]);
Transform816.children = new MFNode();

Transform816.children[0] = PositionInterpolator817;

Shape Shape818 = createNode("Shape");
Appearance Appearance819 = createNode("Appearance");
Material Material820 = createNode("Material");
Material820.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material820.shininess = 0.25;
Appearance819.material = Material820;

Shape818.appearance = Appearance819;

IndexedFaceSet IndexedFaceSet821 = createNode("IndexedFaceSet");
IndexedFaceSet821.DEF = "SharkDeath_explode05-FACES";
IndexedFaceSet821.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate822 = createNode("Coordinate");
Coordinate822.DEF = "SharkDeath_explode05-COORD";
Coordinate822.point = new MFVec3f(new float[15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-29.54,18.3,-33.92]);
IndexedFaceSet821.coord = Coordinate822;

Shape818.geometry = IndexedFaceSet821;

Transform816.child[1] = Shape818;

Transform750.children[8] = Transform816;

Transform Transform823 = createNode("Transform");
Transform823.DEF = "SharkDeath_explode06-ROOT";
Transform823.translation = new SFVec3f(new float[-0.02379,0.1379,-0.3297]);
Transform823.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform823.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform823.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator824 = createNode("PositionInterpolator");
PositionInterpolator824.DEF = "SharkDeath_explode06-POS-INTERP";
PositionInterpolator824.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator824.keyValue = new MFVec3f(new float[-0.02379,0.1379,-0.3297,-0.02379,0.1379,-0.3297,0.2675,0.5166,-0.3297,0.5589,0.8954,-0.3297]);
Transform823.children = new MFNode();

Transform823.children[0] = PositionInterpolator824;

Shape Shape825 = createNode("Shape");
Appearance Appearance826 = createNode("Appearance");
Material Material827 = createNode("Material");
Material827.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material827.shininess = 0.25;
Appearance826.material = Material827;

Shape825.appearance = Appearance826;

IndexedFaceSet IndexedFaceSet828 = createNode("IndexedFaceSet");
IndexedFaceSet828.DEF = "SharkDeath_explode06-FACES";
IndexedFaceSet828.coordIndex = new MFInt32(new int[0,2,1,-1]);
Coordinate Coordinate829 = createNode("Coordinate");
Coordinate829.DEF = "SharkDeath_explode06-COORD";
Coordinate829.point = new MFVec3f(new float[38.19,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92]);
IndexedFaceSet828.coord = Coordinate829;

Shape825.geometry = IndexedFaceSet828;

Transform823.child[1] = Shape825;

Transform750.children[9] = Transform823;

Transform Transform830 = createNode("Transform");
Transform830.DEF = "SharkDeath_explode07-ROOT";
Transform830.translation = new SFVec3f(new float[0.006222,0.1048,-0.3297]);
Transform830.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform830.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform830.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator831 = createNode("PositionInterpolator");
PositionInterpolator831.DEF = "SharkDeath_explode07-POS-INTERP";
PositionInterpolator831.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator831.keyValue = new MFVec3f(new float[0.006222,0.1048,-0.3297,0.006222,0.1048,-0.3297,0.3083,0.5231,-0.3297,0.6104,0.9414,-0.3297]);
Transform830.children = new MFNode();

Transform830.children[0] = PositionInterpolator831;

Shape Shape832 = createNode("Shape");
Appearance Appearance833 = createNode("Appearance");
Material Material834 = createNode("Material");
Material834.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material834.shininess = 0.25;
Appearance833.material = Material834;

Shape832.appearance = Appearance833;

IndexedFaceSet IndexedFaceSet835 = createNode("IndexedFaceSet");
IndexedFaceSet835.DEF = "SharkDeath_explode07-FACES";
IndexedFaceSet835.coordIndex = new MFInt32(new int[0,2,1,-1]);
Coordinate Coordinate836 = createNode("Coordinate");
Coordinate836.DEF = "SharkDeath_explode07-COORD";
Coordinate836.point = new MFVec3f(new float[0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37]);
IndexedFaceSet835.coord = Coordinate836;

Shape832.geometry = IndexedFaceSet835;

Transform830.child[1] = Shape832;

Transform750.children[10] = Transform830;

Transform Transform837 = createNode("Transform");
Transform837.DEF = "SharkDeath_explode08-ROOT";
Transform837.translation = new SFVec3f(new float[-0.002922,0.1146,-0.3297]);
Transform837.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform837.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform837.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator838 = createNode("PositionInterpolator");
PositionInterpolator838.DEF = "SharkDeath_explode08-POS-INTERP";
PositionInterpolator838.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator838.keyValue = new MFVec3f(new float[-0.002922,0.1146,-0.3297,-0.002922,0.1146,-0.3297,-0.2865,0.5781,-0.3297,-0.5701,1.042,-0.3297]);
Transform837.children = new MFNode();

Transform837.children[0] = PositionInterpolator838;

Shape Shape839 = createNode("Shape");
Appearance Appearance840 = createNode("Appearance");
Material Material841 = createNode("Material");
Material841.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material841.shininess = 0.25;
Appearance840.material = Material841;

Shape839.appearance = Appearance840;

IndexedFaceSet IndexedFaceSet842 = createNode("IndexedFaceSet");
IndexedFaceSet842.DEF = "SharkDeath_explode08-FACES";
IndexedFaceSet842.coordIndex = new MFInt32(new int[0,2,1,-1]);
Coordinate Coordinate843 = createNode("Coordinate");
Coordinate843.DEF = "SharkDeath_explode08-COORD";
Coordinate843.point = new MFVec3f(new float[0,-89.63,0,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825]);
IndexedFaceSet842.coord = Coordinate843;

Shape839.geometry = IndexedFaceSet842;

Transform837.child[1] = Shape839;

Transform750.children[11] = Transform837;

Transform Transform844 = createNode("Transform");
Transform844.DEF = "SharkDeath_explode09-ROOT";
Transform844.translation = new SFVec3f(new float[-0.009646,0.1135,-0.3297]);
Transform844.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform844.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform844.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator845 = createNode("PositionInterpolator");
PositionInterpolator845.DEF = "SharkDeath_explode09-POS-INTERP";
PositionInterpolator845.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator845.keyValue = new MFVec3f(new float[-0.009646,0.1135,-0.3297,-0.009646,0.1135,-0.3297,0.02514,0.574,-0.3297,0.05992,1.034,-0.3297]);
Transform844.children = new MFNode();

Transform844.children[0] = PositionInterpolator845;

Shape Shape846 = createNode("Shape");
Appearance Appearance847 = createNode("Appearance");
Material Material848 = createNode("Material");
Material848.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material848.shininess = 0.25;
Appearance847.material = Material848;

Shape846.appearance = Appearance847;

IndexedFaceSet IndexedFaceSet849 = createNode("IndexedFaceSet");
IndexedFaceSet849.DEF = "SharkDeath_explode09-FACES";
IndexedFaceSet849.coordIndex = new MFInt32(new int[0,2,1,-1]);
Coordinate Coordinate850 = createNode("Coordinate");
Coordinate850.DEF = "SharkDeath_explode09-COORD";
Coordinate850.point = new MFVec3f(new float[0,-89.63,0,15.62,-19.32,-23.37,-16.02,-19.32,-23.37]);
IndexedFaceSet849.coord = Coordinate850;

Shape846.geometry = IndexedFaceSet849;

Transform844.child[1] = Shape846;

Transform750.children[12] = Transform844;

Transform Transform851 = createNode("Transform");
Transform851.DEF = "SharkDeath_explode10-ROOT";
Transform851.translation = new SFVec3f(new float[-0.01117,0.1097,-0.3297]);
Transform851.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform851.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform851.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator852 = createNode("PositionInterpolator");
PositionInterpolator852.DEF = "SharkDeath_explode10-POS-INTERP";
PositionInterpolator852.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator852.keyValue = new MFVec3f(new float[-0.01117,0.1097,-0.3297,-0.01117,0.1097,-0.3297,-0.2838,0.4991,-0.3297,-0.5564,0.8885,-0.3297]);
Transform851.children = new MFNode();

Transform851.children[0] = PositionInterpolator852;

Shape Shape853 = createNode("Shape");
Appearance Appearance854 = createNode("Appearance");
Material Material855 = createNode("Material");
Material855.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material855.shininess = 0.25;
Appearance854.material = Material855;

Shape853.appearance = Appearance854;

IndexedFaceSet IndexedFaceSet856 = createNode("IndexedFaceSet");
IndexedFaceSet856.DEF = "SharkDeath_explode10-FACES";
IndexedFaceSet856.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate857 = createNode("Coordinate");
Coordinate857.DEF = "SharkDeath_explode10-COORD";
Coordinate857.point = new MFVec3f(new float[-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,-59.07,11.28,0]);
IndexedFaceSet856.coord = Coordinate857;

Shape853.geometry = IndexedFaceSet856;

Transform851.child[1] = Shape853;

Transform750.children[13] = Transform851;

Transform Transform858 = createNode("Transform");
Transform858.DEF = "SharkDeath_explode11-ROOT";
Transform858.translation = new SFVec3f(new float[0.01048,0.1126,-0.3297]);
Transform858.rotation = new SFRotation(new float[-0.99999,0.000493995,-0.00441496,4.174]);
Transform858.scale = new SFVec3f(new float[0.006188,0.006188,0.006188]);
Transform858.scaleOrientation = new SFRotation(new float[-0.176294,0.0335388,-0.983766,0.797]);
PositionInterpolator PositionInterpolator859 = createNode("PositionInterpolator");
PositionInterpolator859.DEF = "SharkDeath_explode11-POS-INTERP";
PositionInterpolator859.key = new MFFloat(new float[0,0.3867,0.4,0.4133]);
PositionInterpolator859.keyValue = new MFVec3f(new float[0.01048,0.1126,-0.3297,0.01048,0.1126,-0.3297,0.3472,0.398,-0.3297,0.684,0.6834,-0.3297]);
Transform858.children = new MFNode();

Transform858.children[0] = PositionInterpolator859;

Shape Shape860 = createNode("Shape");
Appearance Appearance861 = createNode("Appearance");
Material Material862 = createNode("Material");
Material862.diffuseColor = new SFColor(new float[0.2353,0.2353,0.2353]);
Material862.shininess = 0.25;
Appearance861.material = Material862;

Shape860.appearance = Appearance861;

IndexedFaceSet IndexedFaceSet863 = createNode("IndexedFaceSet");
IndexedFaceSet863.DEF = "SharkDeath_explode11-FACES";
IndexedFaceSet863.coordIndex = new MFInt32(new int[0,1,2,-1]);
Coordinate Coordinate864 = createNode("Coordinate");
Coordinate864.DEF = "SharkDeath_explode11-COORD";
Coordinate864.point = new MFVec3f(new float[59.07,11.28,0,29.53,18.3,-33.92,34.67,186.3,-38.64]);
IndexedFaceSet863.coord = Coordinate864;

Shape860.geometry = IndexedFaceSet863;

Transform858.child[1] = Shape860;

Transform750.children[14] = Transform858;

Group749.children = new MFNode();

Group749.children[0] = Transform750;

Transform Transform865 = createNode("Transform");
Transform865.DEF = "Inline_fishswim-ROOT";
Transform865.translation = new SFVec3f(new float[-0.02236,-0.6315,-0.8669]);
Transform865.rotation = new SFRotation(new float[0,-0.965929,-0.258808,3.142]);
Transform865.scale = new SFVec3f(new float[0.1238,0.1238,0.1238]);
Transform865.scaleOrientation = new SFRotation(new float[-0.240894,-0.763981,-0.598585,0.113899]);
TimeSensor TimeSensor866 = createNode("TimeSensor");
TimeSensor866.DEF = "Inline_fishswim-TIMER";
TimeSensor866.cycleInterval = 15;
Transform865.children = new MFNode();

Transform865.children[0] = TimeSensor866;

PositionInterpolator PositionInterpolator867 = createNode("PositionInterpolator");
PositionInterpolator867.DEF = "Inline_fishswim-POS-INTERP";
PositionInterpolator867.key = new MFFloat(new float[0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]);
PositionInterpolator867.keyValue = new MFVec3f(new float[-0.02236,-0.6315,-0.8669,-0.02236,-0.6315,-0.8669,-0.03172,-0.5782,-0.9776,-0.02413,-0.5193,-1.097,0.01141,-0.452,-1.231,0.04188,-0.3847,-1.364,0.01603,-0.3309,-1.47,-0.0004942,-0.2725,-1.589,0.0637,-0.1885,-1.783,0.1401,-0.1018,-1.967,0.1695,-0.03244,-2.04,0.1668,0.02534,-2.023,0.1427,0.07361,-1.948,0.1081,0.1145,-1.845,0.0737,0.1499,-1.748,0.05022,0.1822,-1.69,0.03484,0.2085,-1.666,0.01801,0.2257,-1.652,0.0003233,0.2354,-1.647,-0.01759,0.2388,-1.648,-0.03511,0.2373,-1.655,-0.05163,0.2322,-1.665,-0.06653,0.225,-1.677,-0.07919,0.217,-1.689,-0.089,0.2096,-1.7,-0.09534,0.2042,-1.707,-0.09759,0.2021,-1.71,-0.09414,0.2021,-1.708,-0.08552,0.2021,-1.704,-0.07431,0.2021,-1.698,-0.06311,0.2021,-1.692,-0.05449,0.2021,-1.687,-0.05104,0.2021,-1.685,-0.05356,0.1989,-1.679,-0.06107,0.1894,-1.661,-0.07347,0.1739,-1.63,-0.09068,0.1526,-1.589,-0.1126,0.1257,-1.537,-0.1391,0.09354,-1.475,-0.1702,0.05628,-1.404,-0.2057,0.01418,-1.323,-0.2456,-0.03252,-1.234,-0.2897,-0.08359,-1.137,-0.338,-0.1388,-1.032,-0.3903,-0.1979,-0.9198,-0.4467,-0.2606,-0.8014,-0.5069,-0.3268,-0.6769,-0.571,-0.3961,-0.547,-0.6387,-0.4684,-0.4121,-0.7101,-0.5434,-0.2727]);
Transform865.children[1] = PositionInterpolator867;

OrientationInterpolator OrientationInterpolator868 = createNode("OrientationInterpolator");
OrientationInterpolator868.DEF = "Inline_fishswim-ROT-INTERP";
OrientationInterpolator868.key = new MFFloat(new float[0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]);
OrientationInterpolator868.keyValue = new MFRotation(new float[0,-0.965929,-0.258808,3.142,0,-0.965929,-0.258808,3.142,0.0044542,-0.851138,-0.524923,3.078,-0.0149201,0.678005,0.734906,3.353,-0.0268292,0.451886,0.891672,3.519,-0.0355304,0.173402,0.98421,3.637,-0.0370716,-0.141506,0.989243,3.658,-0.0299285,-0.454477,0.890255,3.562,-0.0161206,-0.720828,0.692927,3.37,0,-0.909965,0.414684,3.142,0.0261693,-0.883877,0.466988,2.783,0.0719675,-0.853571,0.515982,2.22,0.145901,-0.825508,0.545205,1.562,0.289898,-0.793695,0.534797,0.9193,0.648467,-0.662367,0.375181,0.4311,0.993662,-0.0487281,-0.101296,0.2808,0.864109,0.399904,-0.305603,0.3186,0.720988,0.57609,-0.385093,0.3746,0.646913,0.635612,-0.421308,0.4089,0.622901,0.644301,-0.443701,0.4159,0.634714,0.620613,-0.46041,0.4001,0.675089,0.566491,-0.472592,0.3693,0.737495,0.477996,-0.477096,0.3325,0.809589,0.354195,-0.468094,0.2985,0.871798,0.211199,-0.441999,0.274,0.90905,0.0905749,-0.406723,0.2608,0.923058,0.043598,-0.382183,0.2563,0.92601,0.0466705,-0.374604,0.2557,0.946623,0.0688317,-0.314908,0.2533,0.984594,0.113399,-0.133099,0.2547,0.993376,0.104397,0.0480188,0.2684,0.992771,0.0511185,0.108597,0.2792,0.992865,0.0235492,0.116896,0.2828,0.992866,0.0164294,0.118096,0.2837,0.992604,-0.00492202,0.1213,0.2863,0.991218,-0.0404507,0.125902,0.291,0.987349,-0.0897645,0.130707,0.2983,0.97923,-0.151805,0.134404,0.3088,0.965042,-0.22441,0.135406,0.3235,0.943302,-0.304301,0.1326,0.3434,0.913488,-0.386995,0.125598,0.3695,0.876874,-0.466886,0.114497,0.4026,0.83878,-0.534888,0.101698,0.4396,0.801628,-0.591221,0.0886031,0.4797,0.766688,-0.63749,0.0761388,0.5221,0.734643,-0.67534,0.0649238,0.5663,0.705725,-0.706325,0.055292,0.6115,0.679934,-0.731736,0.0474623,0.6573,0.657291,-0.75249,0.0415594,0.703,0.637514,-0.769517,0.0376609,0.7482]);
Transform865.children[2] = OrientationInterpolator868;

Inline Inline869 = createNode("Inline");
Inline869.url = new MFString(new java.lang.String["fishswim.x3d"]);
Transform865.children[3] = Inline869;

Group749.children[1] = Transform865;

Transform Transform870 = createNode("Transform");
Transform870.DEF = "burp-ROOT";
Transform870.translation = new SFVec3f(new float[-0.09553,-10.3051,-1.28]);
Transform870.rotation = new SFRotation(new float[1,0,0,1.571]);
TimeSensor TimeSensor871 = createNode("TimeSensor");
TimeSensor871.DEF = "burp-TIMER";
TimeSensor871.cycleInterval = 15;
Transform870.children = new MFNode();

Transform870.children[0] = TimeSensor871;

PositionInterpolator PositionInterpolator872 = createNode("PositionInterpolator");
PositionInterpolator872.DEF = "burp-POS-INTERP";
PositionInterpolator872.key = new MFFloat(new float[0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28]);
PositionInterpolator872.keyValue = new MFVec3f(new float[-0.09553,-10.3051,-1.28,-0.08801,-0.3051,-1.28,-0.0803,-0.2393,-1.28,-0.08052,-0.156,-1.28,-0.1039,-0.1078,-1.28,-0.1264,-0.06574,-1.28,-0.119,-0.01489,-1.28,-0.112,0.03499,-1.28,-0.1388,0.07693,-1.28,-0.1615,0.1175,-1.28,-0.1386,0.1606,-1.28,-0.1143,0.2069,-1.28,-0.1326,0.2585,-1.28,-0.1535,0.3143,-1.28,-0.1401,0.3757,-1.28,-0.1276,0.4379,-1.28,-0.1525,0.4961,-1.28,-0.1739,0.5516,-1.28,-0.1464,0.6022,-1.28,-0.1195,0.6542,-1.28,-0.1321,0.714,-1.28,-0.1712,0.7796,-1.28]);
Transform870.children[1] = PositionInterpolator872;

Shape Shape873 = createNode("Shape");
Appearance Appearance874 = createNode("Appearance");
Material Material875 = createNode("Material");
Material875.diffuseColor = new SFColor(new float[0.4745,0.6784,0.7961]);
Material875.emissiveColor = new SFColor(new float[0.1,0.1,0.1]);
Material875.shininess = 0.25;
Appearance874.material = Material875;

Shape873.appearance = Appearance874;

IndexedFaceSet IndexedFaceSet876 = createNode("IndexedFaceSet");
IndexedFaceSet876.DEF = "burp-FACES";
IndexedFaceSet876.creaseAngle = 3;
IndexedFaceSet876.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]);
Coordinate Coordinate877 = createNode("Coordinate");
Coordinate877.DEF = "burp-COORD";
Coordinate877.point = new MFVec3f(new float[0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866]);
IndexedFaceSet876.coord = Coordinate877;

Shape873.geometry = IndexedFaceSet876;

Transform870.child[2] = Shape873;

Group749.children[2] = Transform870;

Transform Transform878 = createNode("Transform");
Transform878.DEF = "fish_burp-ROOT";
Transform878.translation = new SFVec3f(new float[-0.05316,1.028,-1.539]);
Transform878.rotation = new SFRotation(new float[0.999799,0.01741,0.00989699,1.991]);
Transform878.scale = new SFVec3f(new float[1.24,1.24,1.24]);
Transform878.scaleOrientation = new SFRotation(new float[0.358393,-0.0232395,0.933282,0.58]);
TimeSensor TimeSensor879 = createNode("TimeSensor");
TimeSensor879.DEF = "fish_burp-TIMER";
TimeSensor879.cycleInterval = 15;
Transform878.children = new MFNode();

Transform878.children[0] = TimeSensor879;

PositionInterpolator PositionInterpolator880 = createNode("PositionInterpolator");
PositionInterpolator880.DEF = "fish_burp-POS-INTERP";
PositionInterpolator880.key = new MFFloat(new float[0,0.7732,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]);
PositionInterpolator880.keyValue = new MFVec3f(new float[-0.05316,1.028,-1.539,-0.05316,1.028,-1.539,-0.05316,0.1777,-1.539,-0.02811,0.2511,-1.539,-0.01774,0.3112,-1.539,-0.03321,0.3522,-1.539,-0.06465,0.3798,-1.539,-0.08247,0.4118,-1.539,-0.06718,0.4562,-1.539,-0.03827,0.5048,-1.539,-0.02458,0.5506,-1.539,-0.0474,0.5896,-1.539,-0.08545,0.6256,-1.539,-0.1037,0.6634,-1.539,-0.07577,0.7016,-1.539,-0.02804,0.7414,-1.539,-0.00471,0.7913,-1.539,-0.02052,0.8543,-1.539,-0.06074,0.9273,-1.539,-0.1254,1.01,-1.539]);
Transform878.children[1] = PositionInterpolator880;

Shape Shape881 = createNode("Shape");
Appearance Appearance882 = createNode("Appearance");
Material Material883 = createNode("Material");
Material883.diffuseColor = new SFColor(new float[0.4745,0.6784,0.7961]);
Material883.emissiveColor = new SFColor(new float[0.1,0.1,0.1]);
Material883.shininess = 0.25;
Appearance882.material = Material883;

Shape881.appearance = Appearance882;

IndexedFaceSet IndexedFaceSet884 = createNode("IndexedFaceSet");
IndexedFaceSet884.DEF = "fish_burp-FACES";
IndexedFaceSet884.creaseAngle = 3;
IndexedFaceSet884.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]);
Coordinate Coordinate885 = createNode("Coordinate");
Coordinate885.DEF = "fish_burp-COORD";
Coordinate885.point = new MFVec3f(new float[0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866]);
IndexedFaceSet884.coord = Coordinate885;

Shape881.geometry = IndexedFaceSet884;

Transform878.child[2] = Shape881;

Group749.children[3] = Transform878;

Transform Transform886 = createNode("Transform");
Transform886.DEF = "fish_burp02-ROOT";
Transform886.translation = new SFVec3f(new float[-0.04055,1.031,-1.526]);
Transform886.rotation = new SFRotation(new float[0.999799,0.01741,0.00989699,1.991]);
Transform886.scale = new SFVec3f(new float[0.6944,0.6944,0.6944]);
Transform886.scaleOrientation = new SFRotation(new float[0.995277,0.089008,0.0387391,0.3357]);
TimeSensor TimeSensor887 = createNode("TimeSensor");
TimeSensor887.DEF = "fish_burp02-TIMER";
TimeSensor887.cycleInterval = 15;
Transform886.children = new MFNode();

Transform886.children[0] = TimeSensor887;

PositionInterpolator PositionInterpolator888 = createNode("PositionInterpolator");
PositionInterpolator888.DEF = "fish_burp02-POS-INTERP";
PositionInterpolator888.key = new MFFloat(new float[0,0.7867,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]);
PositionInterpolator888.keyValue = new MFVec3f(new float[-0.04055,1.031,-1.526,-0.04055,1.031,-1.526,-0.04185,0.1809,-1.526,-0.0155,0.2542,-1.526,-0.005125,0.3143,-1.526,-0.02059,0.3553,-1.526,-0.05204,0.383,-1.526,-0.06986,0.4149,-1.526,-0.05457,0.4593,-1.526,-0.02566,0.508,-1.526,-0.01197,0.5537,-1.526,-0.03479,0.5927,-1.526,-0.07284,0.6288,-1.526,-0.0911,0.6665,-1.526,-0.05885,0.6992,-1.526,-0.006807,0.7334,-1.526,0.007901,0.7945,-1.526,-0.03376,0.8907,-1.526,-0.1128,1.014,-1.526]);
Transform886.children[1] = PositionInterpolator888;

Shape Shape889 = createNode("Shape");
Appearance Appearance890 = createNode("Appearance");
Material Material891 = createNode("Material");
Material891.diffuseColor = new SFColor(new float[0.4745,0.6784,0.7961]);
Material891.emissiveColor = new SFColor(new float[0.1,0.1,0.1]);
Material891.shininess = 0.25;
Appearance890.material = Material891;

Shape889.appearance = Appearance890;

IndexedFaceSet IndexedFaceSet892 = createNode("IndexedFaceSet");
IndexedFaceSet892.DEF = "fish_burp02-FACES";
IndexedFaceSet892.creaseAngle = 3;
IndexedFaceSet892.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]);
Coordinate Coordinate893 = createNode("Coordinate");
Coordinate893.DEF = "fish_burp02-COORD";
Coordinate893.point = new MFVec3f(new float[0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866]);
IndexedFaceSet892.coord = Coordinate893;

Shape889.geometry = IndexedFaceSet892;

Transform886.child[2] = Shape889;

Group749.children[4] = Transform886;

Group639.children[8] = Group749;

Collision638.proxy = Group639;

Transform637.children = new MFNode();

Transform637.children[0] = Collision638;

children[149] = Transform637;

ProximitySensor ProximitySensor894 = createNode("ProximitySensor");
ProximitySensor894.DEF = "WorldProx";
ProximitySensor894.size = new SFVec3f(new float[10000,10000,10000]);
children[150] = ProximitySensor894;

Script Script895 = createNode("Script");
Script895.DEF = "SharkSwim";
Script895.mustEvaluate = True;
field field896 = createNode("field");
field896.name = "position_changed";
field896.accessType = "inputOnly";
field896.type = "SFVec3f";
Script895.field = new MFNode();

Script895.field[0] = field896;

field field897 = createNode("field");
field897.name = "time";
field897.accessType = "inputOnly";
field897.type = "SFFloat";
Script895.field[1] = field897;

field field898 = createNode("field");
field898.name = "eatingSeagull";
field898.accessType = "inputOnly";
field898.type = "SFTime";
Script895.field[2] = field898;

field field899 = createNode("field");
field899.name = "eatingSittingSeagull";
field899.accessType = "inputOnly";
field899.type = "SFTime";
Script895.field[3] = field899;

field field900 = createNode("field");
field900.name = "eatingFishSwim";
field900.accessType = "inputOnly";
field900.type = "SFTime";
Script895.field[4] = field900;

field field901 = createNode("field");
field901.name = "eatingFish";
field901.accessType = "inputOnly";
field901.type = "SFTime";
Script895.field[5] = field901;

field field902 = createNode("field");
field902.name = "eatingSurfer";
field902.accessType = "inputOnly";
field902.type = "SFTime";
Script895.field[6] = field902;

field field903 = createNode("field");
field903.name = "eatingSurfer2";
field903.accessType = "inputOnly";
field903.type = "SFTime";
Script895.field[7] = field903;

field field904 = createNode("field");
field904.name = "eatingTuber";
field904.accessType = "inputOnly";
field904.type = "SFTime";
Script895.field[8] = field904;

field field905 = createNode("field");
field905.name = "eatingTuber2";
field905.accessType = "inputOnly";
field905.type = "SFTime";
Script895.field[9] = field905;

field field906 = createNode("field");
field906.name = "doneEating";
field906.accessType = "inputOnly";
field906.type = "SFBool";
Script895.field[10] = field906;

field field907 = createNode("field");
field907.name = "killObject";
field907.accessType = "inputOnly";
field907.type = "SFBool";
Script895.field[11] = field907;

field field908 = createNode("field");
field908.name = "testEnd";
field908.accessType = "inputOnly";
field908.type = "SFBool";
Script895.field[12] = field908;

field field909 = createNode("field");
field909.name = "animating";
field909.accessType = "initializeOnly";
field909.type = "SFBool";
Script895.field[13] = field909;

field field910 = createNode("field");
field910.name = "eating";
field910.accessType = "initializeOnly";
field910.type = "SFBool";
Script895.field[14] = field910;

field field911 = createNode("field");
field911.name = "position";
field911.accessType = "initializeOnly";
field911.type = "SFVec3f";
Script895.field[15] = field911;

field field912 = createNode("field");
field912.name = "oldTime";
field912.accessType = "initializeOnly";
field912.type = "SFFloat";
field912.value = "0.601192";
Script895.field[16] = field912;

field field913 = createNode("field");
field913.name = "timeDelta";
field913.accessType = "initializeOnly";
field913.type = "SFFloat";
field913.value = "0.0121604";
Script895.field[17] = field913;

field field914 = createNode("field");
field914.name = "eatingWhichObject";
field914.accessType = "initializeOnly";
field914.type = "SFInt32";
Script895.field[18] = field914;

field field915 = createNode("field");
field915.name = "numEatenObjects";
field915.accessType = "initializeOnly";
field915.type = "SFInt32";
Script895.field[19] = field915;

field field916 = createNode("field");
field916.name = "seagullSwitcher";
field916.accessType = "outputOnly";
field916.type = "SFInt32";
Script895.field[20] = field916;

field field917 = createNode("field");
field917.name = "sittingSeagullSwitcher";
field917.accessType = "outputOnly";
field917.type = "SFInt32";
Script895.field[21] = field917;

field field918 = createNode("field");
field918.name = "fishSwimSwitcher";
field918.accessType = "outputOnly";
field918.type = "SFInt32";
Script895.field[22] = field918;

field field919 = createNode("field");
field919.name = "fishSwitcher";
field919.accessType = "outputOnly";
field919.type = "SFInt32";
Script895.field[23] = field919;

field field920 = createNode("field");
field920.name = "surferSwitcher";
field920.accessType = "outputOnly";
field920.type = "SFInt32";
Script895.field[24] = field920;

field field921 = createNode("field");
field921.name = "surfer2Switcher";
field921.accessType = "outputOnly";
field921.type = "SFInt32";
Script895.field[25] = field921;

field field922 = createNode("field");
field922.name = "tuberSwitcher";
field922.accessType = "outputOnly";
field922.type = "SFInt32";
Script895.field[26] = field922;

field field923 = createNode("field");
field923.name = "tuber2Switcher";
field923.accessType = "outputOnly";
field923.type = "SFInt32";
Script895.field[27] = field923;

field field924 = createNode("field");
field924.name = "animation_timer";
field924.accessType = "outputOnly";
field924.type = "SFFloat";
Script895.field[28] = field924;

field field925 = createNode("field");
field925.name = "playChompSound";
field925.accessType = "outputOnly";
field925.type = "SFTime";
Script895.field[29] = field925;

field field926 = createNode("field");
field926.name = "killTrigger";
field926.accessType = "outputOnly";
field926.type = "SFInt32";
Script895.field[30] = field926;


Script895.setSourceCode(`javascript:\n"+
"		function testEnd(input){\n"+
"			if (numEatenObjects == 8) {\n"+
"				killTrigger = 1;\n"+
"			}\n"+
"		}	\n"+
"		function doneEating(done){\n"+
"			if(done == FALSE){\n"+
"			 eating=FALSE;\n"+
"			}\n"+
"		}\n"+
"		function killObject(i, time) {\n"+
"			if (i==FALSE) {\n"+
"				playChompSound = time;\n"+
"				if (eatingWhichObject == 1) {numEatenObjects = numEatenObjects + 1; seagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score3'));Browser.loadURL(new MFString('chomp3.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 2) {numEatenObjects = numEatenObjects + 1; sittingSeagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score1'));Browser.loadURL(new MFString('chomp1.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 3) {numEatenObjects = numEatenObjects + 1; fishSwimSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score2'));Browser.loadURL(new MFString('chomp2.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 4) {numEatenObjects = numEatenObjects + 1; fishSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score4'));Browser.loadURL(new MFString('chomp4.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 5) {numEatenObjects = numEatenObjects + 1; surferSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score5'));Browser.loadURL(new MFString('chomp5.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 6) {numEatenObjects = numEatenObjects + 1; surfer2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score7'));Browser.loadURL(new MFString('chomp7.htm'), new MFString('target=helpertext'));*/return;}				\n"+
"				if (eatingWhichObject == 7) {numEatenObjects = numEatenObjects + 1; tuberSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score6'));Browser.loadURL(new MFString('chomp6.htm'), new MFString('target=helpertext'));*/return;}\n"+
"				if (eatingWhichObject == 8) {numEatenObjects = numEatenObjects + 1; tuber2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score8'));Browser.loadURL(new MFString('chomp8.htm'), new MFString('target=helpertext'));*/return;}\n"+
"			}\n"+
"		}\n"+
"		function eatingSeagull() {\n"+
"			eatingWhichObject = 1;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingSittingSeagull() {\n"+
"			eatingWhichObject = 2;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingFishSwim() {\n"+
"			eatingWhichObject = 3;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingFish() {\n"+
"			eatingWhichObject = 4;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingSurfer() {\n"+
"			eatingWhichObject = 5;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingSurfer2() {\n"+
"			eatingWhichObject = 6;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingTuber() {\n"+
"			eatingWhichObject = 7;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function eatingTuber2() {\n"+
"			eatingWhichObject = 8;\n"+
"			eating = TRUE;\n"+
"		}\n"+
"		function position_changed(pos, time) {\n"+
"			if (eating == FALSE) {\n"+
"				animating = TRUE;\n"+
"				animation_timer = (animation_timer + timeDelta) % 1.01;\n"+
"			}\n"+
"		}\n"+
"		function time(currentTime) {\n"+
"			timeDelta = currentTime - oldTime;\n"+
"			oldTime = currentTime;\n"+
"			if (timeDelta < 0.0){timeDelta += 1.0;}\n"+
"			if (animating == TRUE || eating == TRUE) {\n"+
"				animating = FALSE;\n"+
"				return;\n"+
"			}\n"+
"			if (animation_timer > .99) {\n"+
"				animation_timer = 1.0\n"+
"			} else {\n"+
"				animation_timer = animation_timer + (1.3 - animation_timer) * timeDelta;\n"+
"			}\n"+
"		}`)
children[151] = Script895;

TimeSensor TimeSensor927 = createNode("TimeSensor");
TimeSensor927.DEF = "FadeTimer";
TimeSensor927.cycleInterval = 3;
children[152] = TimeSensor927;

ScalarInterpolator ScalarInterpolator928 = createNode("ScalarInterpolator");
ScalarInterpolator928.DEF = "FadeInterp";
ScalarInterpolator928.key = new MFFloat(new float[0,1]);
ScalarInterpolator928.keyValue = new MFFloat(new float[50,0.01]);
children[153] = ScalarInterpolator928;

ColorInterpolator ColorInterpolator929 = createNode("ColorInterpolator");
ColorInterpolator929.DEF = "FadeColorInterp";
ColorInterpolator929.key = new MFFloat(new float[0,1]);
ColorInterpolator929.keyValue = new MFColor(new float[0.007843,0.3922,0.6157,0,0,0]);
children[154] = ColorInterpolator929;

Script Script930 = createNode("Script");
Script930.DEF = "TextDisplay";
field field931 = createNode("field");
field931.name = "endVisible";
field931.accessType = "inputOnly";
field931.type = "SFTime";
Script930.field = new MFNode();

Script930.field[0] = field931;

field field932 = createNode("field");
field932.name = "seagullVisible";
field932.accessType = "inputOnly";
field932.type = "SFTime";
Script930.field[1] = field932;

field field933 = createNode("field");
field933.name = "sittingSeagullVisible";
field933.accessType = "inputOnly";
field933.type = "SFTime";
Script930.field[2] = field933;

field field934 = createNode("field");
field934.name = "fishVisible";
field934.accessType = "inputOnly";
field934.type = "SFTime";
Script930.field[3] = field934;

field field935 = createNode("field");
field935.name = "fishSwimVisible";
field935.accessType = "inputOnly";
field935.type = "SFTime";
Script930.field[4] = field935;

field field936 = createNode("field");
field936.name = "surferVisible";
field936.accessType = "inputOnly";
field936.type = "SFTime";
Script930.field[5] = field936;

field field937 = createNode("field");
field937.name = "surfer2Visible";
field937.accessType = "inputOnly";
field937.type = "SFTime";
Script930.field[6] = field937;

field field938 = createNode("field");
field938.name = "tuberVisible";
field938.accessType = "inputOnly";
field938.type = "SFTime";
Script930.field[7] = field938;

field field939 = createNode("field");
field939.name = "tuber2Visible";
field939.accessType = "inputOnly";
field939.type = "SFTime";
Script930.field[8] = field939;

field field940 = createNode("field");
field940.name = "skeletonVisible";
field940.accessType = "inputOnly";
field940.type = "SFTime";
Script930.field[9] = field940;

field field941 = createNode("field");
field941.name = "whichVisible";
field941.accessType = "initializeOnly";
field941.type = "SFInt32";
field941.value = "4";
Script930.field[10] = field941;


Script930.setSourceCode(`javascript:\n"+
"		function endVisible() {\n"+
"			whichVisible = 0;\n"+
"		}\n"+
"		function skeletonVisible() {\n"+
"		if (whichVisible != 9) {\n"+
"			whichVisible = 9;\n"+
"			//Browser.loadURL(new MFString('text9.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function seagullVisible() {\n"+
"		if (whichVisible != 1) {\n"+
"			whichVisible = 1;\n"+
"			//Browser.loadURL(new MFString('text3.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function sittingSeagullVisible() {\n"+
"		if (whichVisible != 2) {\n"+
"			whichVisible = 2;\n"+
"			//Browser.loadURL(new MFString('text1.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function fishVisible() {\n"+
"			if (whichVisible != 3) {\n"+
"			whichVisible = 3;\n"+
"			//Browser.loadURL(new MFString('text4.htm'), new MFString('target=helpertext'));\n"+
"			}\n"+
"		}\n"+
"		function fishSwimVisible() {\n"+
"		if (whichVisible != 4) {\n"+
"			whichVisible = 4;\n"+
"			//Browser.loadURL(new MFString('text2.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function surferVisible() {\n"+
"		if (whichVisible != 5) {\n"+
"			whichVisible = 5;\n"+
"			//Browser.loadURL(new MFString('text5.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function surfer2Visible() {\n"+
"		if (whichVisible != 6) {\n"+
"			whichVisible = 6;\n"+
"			//Browser.loadURL(new MFString('text7.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function tuberVisible() {\n"+
"		if (whichVisible != 7) {\n"+
"			whichVisible = 7;\n"+
"			//Browser.loadURL(new MFString('text6.htm'), new MFString('target=helpertext'));\n"+
"		}\n"+
"		}\n"+
"		function tuber2Visible() {\n"+
"		if (whichVisible != 8) {\n"+
"			whichVisible = 8;\n"+
"			//Browser.loadURL(new MFString('text8.htm'), new MFString('target=helpertext'));\n"+
"		}}`)
children[155] = Script930;

Script Script942 = createNode("Script");
Script942.DEF = "BoomScript";
field field943 = createNode("field");
field943.name = "startBoom";
field943.accessType = "inputOnly";
field943.type = "SFBool";
Script942.field = new MFNode();

Script942.field[0] = field943;

field field944 = createNode("field");
field944.name = "playBoom";
field944.accessType = "outputOnly";
field944.type = "SFTime";
Script942.field[1] = field944;


Script942.setSourceCode(`javascript:\n"+
"		function startBoom(boom, time){\n"+
"			if (boom == FALSE) {\n"+
"				playBoom = time;\n"+
"			}\n"+
"		}`)
children[156] = Script942;

Script Script945 = createNode("Script");
Script945.DEF = "KillShark";
Script945.mustEvaluate = True;
field field946 = createNode("field");
field946.name = "canyonEnd";
field946.accessType = "inputOnly";
field946.type = "SFBool";
Script945.field = new MFNode();

Script945.field[0] = field946;

field field947 = createNode("field");
field947.name = "Kill";
field947.accessType = "inputOnly";
field947.type = "SFInt32";
Script945.field[1] = field947;

field field948 = createNode("field");
field948.name = "deathAnimation";
field948.accessType = "inputOnly";
field948.type = "SFBool";
Script945.field[2] = field948;

field field949 = createNode("field");
field949.name = "inputSkyColor";
field949.accessType = "inputOnly";
field949.type = "SFColor";
Script945.field[3] = field949;

field field950 = createNode("field");
field950.name = "fadeDone";
field950.accessType = "inputOnly";
field950.type = "SFBool";
Script945.field[4] = field950;

field field951 = createNode("field");
field951.name = "fishBurp";
field951.accessType = "inputOnly";
field951.type = "SFBool";
Script945.field[5] = field951;

field field952 = createNode("field");
field952.name = "readyToKill";
field952.accessType = "initializeOnly";
field952.type = "SFInt32";
Script945.field[6] = field952;

field field953 = createNode("field");
field953.name = "beenToEnd";
field953.accessType = "initializeOnly";
field953.type = "SFBool";
field953.value = "true";
Script945.field[7] = field953;

field field954 = createNode("field");
field954.name = "startDeath";
field954.accessType = "outputOnly";
field954.type = "SFTime";
Script945.field[8] = field954;

field field955 = createNode("field");
field955.name = "sharkSwitcher";
field955.accessType = "outputOnly";
field955.type = "SFInt32";
Script945.field[9] = field955;

field field956 = createNode("field");
field956.name = "startFade";
field956.accessType = "outputOnly";
field956.type = "SFTime";
Script945.field[10] = field956;

field field957 = createNode("field");
field957.name = "outputSkyColor";
field957.accessType = "outputOnly";
field957.type = "MFColor";
Script945.field[11] = field957;

field field958 = createNode("field");
field958.name = "navInfoControl";
field958.accessType = "outputOnly";
field958.type = "MFString";
Script945.field[12] = field958;

field field959 = createNode("field");
field959.name = "burp";
field959.accessType = "outputOnly";
field959.type = "SFTime";
Script945.field[13] = field959;


Script945.setSourceCode(`javascript:\n"+
"		function fishBurp(input, time) {\n"+
"			if(!input) {\n"+
"				burp = time;\n"+
"			}\n"+
"		}\n"+
"		function fadeDone(input) {\n"+
"			if (input == FALSE) {\n"+
"				//Browser.loadURL(new MFString('end.htm'), new MFString('target=_parent'));\n"+
"			}\n"+
"		}\n"+
"		function Kill(input, time) {\n"+
"			readyToKill = input;\n"+
"			if (beenToEnd == TRUE) {\n"+
"				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));\n"+
"				startDeath = time;\n"+
"				sharkSwitcher = 0;\n"+
"				navInfoControl[0] = 'NONE';\n"+
"			}\n"+
"		}\n"+
"		function canyonEnd(input, t) {\n"+
"			if (input == TRUE && readyToKill == 1) {\n"+
"				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));\n"+
"				startDeath = t;\n"+
"				sharkSwitcher = 0;\n"+
"				navInfoControl[0] = 'NONE';\n"+
"			} else {\n"+
"				//Browser.loadURL(new MFString('noend.htm'), new MFString('target=helpertext'));\n"+
"				beenToEnd = TRUE;\n"+
"			}\n"+
"		}\n"+
"		function deathAnimation(input, t) {\n"+
"			if (input == FALSE) {\n"+
"				startFade = t;\n"+
"				sharkSwitcher = -1;\n"+
"			}\n"+
"		}\n"+
"		function inputSkyColor(input) {\n"+
"			outputSkyColor[0] = input;\n"+
"		}`)
children[157] = Script945;

Script Script960 = createNode("Script");
Script960.DEF = "JumpToEnd";
field field961 = createNode("field");
field961.name = "eyeClick";
field961.accessType = "inputOnly";
field961.type = "SFTime";
Script960.field = new MFNode();

Script960.field[0] = field961;

field field962 = createNode("field");
field962.name = "eyeClick2";
field962.accessType = "inputOnly";
field962.type = "SFTime";
Script960.field[1] = field962;

field field963 = createNode("field");
field963.name = "LClick";
field963.accessType = "initializeOnly";
field963.type = "SFBool";
Script960.field[2] = field963;

field field964 = createNode("field");
field964.name = "RClick";
field964.accessType = "initializeOnly";
field964.type = "SFBool";
Script960.field[3] = field964;

field field965 = createNode("field");
field965.name = "endGame";
field965.accessType = "outputOnly";
field965.type = "SFInt32";
Script960.field[4] = field965;

field field966 = createNode("field");
field966.name = "endGame2";
field966.accessType = "outputOnly";
field966.type = "SFBool";
Script960.field[5] = field966;


Script960.setSourceCode(`javascript:\n"+
"		function eyeClick() {\n"+
"			if (LClick == TRUE) {\n"+
"				endGame = 1;\n"+
"				endGame2 = TRUE;\n"+
"			}				\n"+
"			RClick = TRUE;\n"+
"		}\n"+
"		function eyeClick2() {\n"+
"			if (RClick == TRUE) {\n"+
"				endGame = 1;\n"+
"				endGame2 = TRUE;\n"+
"			}				\n"+
"			LClick = TRUE;\n"+
"		}`)
children[158] = Script960;

ROUTE ROUTE967 = createNode("ROUTE");
ROUTE967.fromNode = "BubbleTimer";
ROUTE967.fromField = "fraction_changed";
ROUTE967.toNode = "BubbleScript";
ROUTE967.toField = "inputFraction";
children[159] = ROUTE967;

ROUTE ROUTE968 = createNode("ROUTE");
ROUTE968.fromNode = "BubbleScript";
ROUTE968.fromField = "playSound";
ROUTE968.toNode = "bubbleSound";
ROUTE968.toField = "set_stopTime";
children[160] = ROUTE968;

ROUTE ROUTE969 = createNode("ROUTE");
ROUTE969.fromNode = "BubbleScript";
ROUTE969.fromField = "playSound";
ROUTE969.toNode = "bubbleSound";
ROUTE969.toField = "set_startTime";
children[161] = ROUTE969;

ROUTE ROUTE970 = createNode("ROUTE");
ROUTE970.fromNode = "BubbleScript";
ROUTE970.fromField = "playSound2";
ROUTE970.toNode = "bubbleSound2";
ROUTE970.toField = "set_stopTime";
children[162] = ROUTE970;

ROUTE ROUTE971 = createNode("ROUTE");
ROUTE971.fromNode = "BubbleScript";
ROUTE971.fromField = "playSound2";
ROUTE971.toNode = "bubbleSound2";
ROUTE971.toField = "set_startTime";
children[163] = ROUTE971;

ROUTE ROUTE972 = createNode("ROUTE");
ROUTE972.fromNode = "EatTimer";
ROUTE972.fromField = "startTime_changed";
ROUTE972.toNode = "KillTimer";
ROUTE972.toField = "set_startTime";
children[164] = ROUTE972;

ROUTE ROUTE973 = createNode("ROUTE");
ROUTE973.fromNode = "EatSeagull";
ROUTE973.fromField = "isActive";
ROUTE973.toNode = "EatSeagull";
ROUTE973.toField = "set_enabled";
children[165] = ROUTE973;

ROUTE ROUTE974 = createNode("ROUTE");
ROUTE974.fromNode = "TimeSensor_gullswim-TIMER";
ROUTE974.fromField = "fraction_changed";
ROUTE974.toNode = "Inline_Gullswim-POS-INTERP";
ROUTE974.toField = "set_fraction";
children[166] = ROUTE974;

ROUTE ROUTE975 = createNode("ROUTE");
ROUTE975.fromNode = "TimeSensor_gullswim-TIMER";
ROUTE975.fromField = "fraction_changed";
ROUTE975.toNode = "Inline_Gullswim-ROT-INTERP";
ROUTE975.toField = "set_fraction";
children[167] = ROUTE975;

ROUTE ROUTE976 = createNode("ROUTE");
ROUTE976.fromNode = "Inline_Gullswim-POS-INTERP";
ROUTE976.fromField = "value_changed";
ROUTE976.toNode = "Inline_Gullswim-ROOT";
ROUTE976.toField = "set_translation";
children[168] = ROUTE976;

ROUTE ROUTE977 = createNode("ROUTE");
ROUTE977.fromNode = "Inline_Gullswim-ROT-INTERP";
ROUTE977.fromField = "value_changed";
ROUTE977.toNode = "Inline_Gullswim-ROOT";
ROUTE977.toField = "set_rotation";
children[169] = ROUTE977;

ROUTE ROUTE978 = createNode("ROUTE");
ROUTE978.fromNode = "EatFishSwim";
ROUTE978.fromField = "isActive";
ROUTE978.toNode = "EatFishSwim";
ROUTE978.toField = "set_enabled";
children[170] = ROUTE978;

ROUTE ROUTE979 = createNode("ROUTE");
ROUTE979.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE979.fromField = "fraction_changed";
ROUTE979.toNode = "Inline_Fishswim-POS-INTERP";
ROUTE979.toField = "set_fraction";
children[171] = ROUTE979;

ROUTE ROUTE980 = createNode("ROUTE");
ROUTE980.fromNode = "TimeSensor_Fishswim-TIMER";
ROUTE980.fromField = "fraction_changed";
ROUTE980.toNode = "Inline_Fishswim-ROT-INTERP";
ROUTE980.toField = "set_fraction";
children[172] = ROUTE980;

ROUTE ROUTE981 = createNode("ROUTE");
ROUTE981.fromNode = "Inline_Fishswim-POS-INTERP";
ROUTE981.fromField = "value_changed";
ROUTE981.toNode = "Inline_Fishswim-ROOT";
ROUTE981.toField = "set_translation";
children[173] = ROUTE981;

ROUTE ROUTE982 = createNode("ROUTE");
ROUTE982.fromNode = "Inline_Fishswim-ROT-INTERP";
ROUTE982.fromField = "value_changed";
ROUTE982.toNode = "Inline_Fishswim-ROOT";
ROUTE982.toField = "set_rotation";
children[174] = ROUTE982;

ROUTE ROUTE983 = createNode("ROUTE");
ROUTE983.fromNode = "Inline_Fishbott-POS-INTERP";
ROUTE983.fromField = "value_changed";
ROUTE983.toNode = "Inline_Fishbott-ROOT";
ROUTE983.toField = "set_translation";
children[175] = ROUTE983;

ROUTE ROUTE984 = createNode("ROUTE");
ROUTE984.fromNode = "TimeSensor_Fishbott-TIMER";
ROUTE984.fromField = "fraction_changed";
ROUTE984.toNode = "Inline_Fishbott-POS-INTERP";
ROUTE984.toField = "set_fraction";
children[176] = ROUTE984;

ROUTE ROUTE985 = createNode("ROUTE");
ROUTE985.fromNode = "Inline_Fishbott-ROT-INTERP";
ROUTE985.fromField = "value_changed";
ROUTE985.toNode = "Inline_Fishbott-ROOT";
ROUTE985.toField = "set_rotation";
children[177] = ROUTE985;

ROUTE ROUTE986 = createNode("ROUTE");
ROUTE986.fromNode = "TimeSensor_Fishbott-TIMER";
ROUTE986.fromField = "fraction_changed";
ROUTE986.toNode = "Inline_Fishbott-ROT-INTERP";
ROUTE986.toField = "set_fraction";
children[178] = ROUTE986;

ROUTE ROUTE987 = createNode("ROUTE");
ROUTE987.fromNode = "EatSurfer";
ROUTE987.fromField = "isActive";
ROUTE987.toNode = "SurferCollide";
ROUTE987.toField = "beingEaten";
children[179] = ROUTE987;

ROUTE ROUTE988 = createNode("ROUTE");
ROUTE988.fromNode = "SurferCollide";
ROUTE988.fromField = "avoidEnabled";
ROUTE988.toNode = "ScareSurfer";
ROUTE988.toField = "set_enabled";
children[180] = ROUTE988;

ROUTE ROUTE989 = createNode("ROUTE");
ROUTE989.fromNode = "SurferCollide";
ROUTE989.fromField = "startFloating";
ROUTE989.toNode = "TimeSensor_SurferFloat-TIMER";
ROUTE989.toField = "set_startTime";
children[181] = ROUTE989;

ROUTE ROUTE990 = createNode("ROUTE");
ROUTE990.fromNode = "SurferCollide";
ROUTE990.fromField = "stopFloating";
ROUTE990.toNode = "TimeSensor_SurferFloat-TIMER";
ROUTE990.toField = "set_stopTime";
children[182] = ROUTE990;

ROUTE ROUTE991 = createNode("ROUTE");
ROUTE991.fromNode = "TimeSensor_SurferFloat-TIMER";
ROUTE991.fromField = "fraction_changed";
ROUTE991.toNode = "SurferFloat__Boolean-POS-INTERP";
ROUTE991.toField = "set_fraction";
children[183] = ROUTE991;

ROUTE ROUTE992 = createNode("ROUTE");
ROUTE992.fromNode = "SurferFloat__Boolean-POS-INTERP";
ROUTE992.fromField = "value_changed";
ROUTE992.toNode = "Surfer__Boolean-ROOT";
ROUTE992.toField = "set_translation";
children[184] = ROUTE992;

ROUTE ROUTE993 = createNode("ROUTE");
ROUTE993.fromNode = "SurferAv_Board-POS-INTERP";
ROUTE993.fromField = "value_changed";
ROUTE993.toNode = "Surfer_Board-ROOT";
ROUTE993.toField = "set_translation";
children[185] = ROUTE993;

ROUTE ROUTE994 = createNode("ROUTE");
ROUTE994.fromNode = "SurferCollide";
ROUTE994.fromField = "outputFraction";
ROUTE994.toNode = "SurferAv_Board-POS-INTERP";
ROUTE994.toField = "set_fraction";
children[186] = ROUTE994;

ROUTE ROUTE995 = createNode("ROUTE");
ROUTE995.fromNode = "SurferAv_Board-ROT-INTERP";
ROUTE995.fromField = "value_changed";
ROUTE995.toNode = "Surfer_Board-ROOT";
ROUTE995.toField = "set_rotation";
children[187] = ROUTE995;

ROUTE ROUTE996 = createNode("ROUTE");
ROUTE996.fromNode = "SurferCollide";
ROUTE996.fromField = "outputFraction";
ROUTE996.toNode = "SurferAv_Board-ROT-INTERP";
ROUTE996.toField = "set_fraction";
children[188] = ROUTE996;

ROUTE ROUTE997 = createNode("ROUTE");
ROUTE997.fromNode = "SurferAv_Leg_R-POS-INTERP";
ROUTE997.fromField = "value_changed";
ROUTE997.toNode = "Surfer_Leg_R-ROOT";
ROUTE997.toField = "set_translation";
children[189] = ROUTE997;

ROUTE ROUTE998 = createNode("ROUTE");
ROUTE998.fromNode = "SurferCollide";
ROUTE998.fromField = "outputFraction";
ROUTE998.toNode = "SurferAv_Leg_R-POS-INTERP";
ROUTE998.toField = "set_fraction";
children[190] = ROUTE998;

ROUTE ROUTE999 = createNode("ROUTE");
ROUTE999.fromNode = "SurferAv_Leg_R-ROT-INTERP";
ROUTE999.fromField = "value_changed";
ROUTE999.toNode = "Surfer_Leg_R-ROOT";
ROUTE999.toField = "set_rotation";
children[191] = ROUTE999;

ROUTE ROUTE1000 = createNode("ROUTE");
ROUTE1000.fromNode = "SurferCollide";
ROUTE1000.fromField = "outputFraction";
ROUTE1000.toNode = "SurferAv_Leg_R-ROT-INTERP";
ROUTE1000.toField = "set_fraction";
children[192] = ROUTE1000;

ROUTE ROUTE1001 = createNode("ROUTE");
ROUTE1001.fromNode = "SurferAv_Foot_R-POS-INTERP";
ROUTE1001.fromField = "value_changed";
ROUTE1001.toNode = "Surfer_Foot_R-ROOT";
ROUTE1001.toField = "set_translation";
children[193] = ROUTE1001;

ROUTE ROUTE1002 = createNode("ROUTE");
ROUTE1002.fromNode = "SurferCollide";
ROUTE1002.fromField = "outputFraction";
ROUTE1002.toNode = "SurferAv_Foot_R-POS-INTERP";
ROUTE1002.toField = "set_fraction";
children[194] = ROUTE1002;

ROUTE ROUTE1003 = createNode("ROUTE");
ROUTE1003.fromNode = "SurferAv_Foot_R-ROT-INTERP";
ROUTE1003.fromField = "value_changed";
ROUTE1003.toNode = "Surfer_Foot_R-ROOT";
ROUTE1003.toField = "set_rotation";
children[195] = ROUTE1003;

ROUTE ROUTE1004 = createNode("ROUTE");
ROUTE1004.fromNode = "SurferCollide";
ROUTE1004.fromField = "outputFraction";
ROUTE1004.toNode = "SurferAv_Foot_R-ROT-INTERP";
ROUTE1004.toField = "set_fraction";
children[196] = ROUTE1004;

ROUTE ROUTE1005 = createNode("ROUTE");
ROUTE1005.fromNode = "SurferAv_R_Toe02-POS-INTERP";
ROUTE1005.fromField = "value_changed";
ROUTE1005.toNode = "Surfer_R_Toe02-ROOT";
ROUTE1005.toField = "set_translation";
children[197] = ROUTE1005;

ROUTE ROUTE1006 = createNode("ROUTE");
ROUTE1006.fromNode = "SurferCollide";
ROUTE1006.fromField = "outputFraction";
ROUTE1006.toNode = "SurferAv_R_Toe02-POS-INTERP";
ROUTE1006.toField = "set_fraction";
children[198] = ROUTE1006;

ROUTE ROUTE1007 = createNode("ROUTE");
ROUTE1007.fromNode = "SurferAv_R_Toe03-POS-INTERP";
ROUTE1007.fromField = "value_changed";
ROUTE1007.toNode = "Surfer_R_Toe03-ROOT";
ROUTE1007.toField = "set_translation";
children[199] = ROUTE1007;

ROUTE ROUTE1008 = createNode("ROUTE");
ROUTE1008.fromNode = "SurferCollide";
ROUTE1008.fromField = "outputFraction";
ROUTE1008.toNode = "SurferAv_R_Toe03-POS-INTERP";
ROUTE1008.toField = "set_fraction";
children[200] = ROUTE1008;

ROUTE ROUTE1009 = createNode("ROUTE");
ROUTE1009.fromNode = "SurferAv_R_Toe01-POS-INTERP";
ROUTE1009.fromField = "value_changed";
ROUTE1009.toNode = "Surfer_R_Toe01-ROOT";
ROUTE1009.toField = "set_translation";
children[201] = ROUTE1009;

ROUTE ROUTE1010 = createNode("ROUTE");
ROUTE1010.fromNode = "SurferCollide";
ROUTE1010.fromField = "outputFraction";
ROUTE1010.toNode = "SurferAv_R_Toe01-POS-INTERP";
ROUTE1010.toField = "set_fraction";
children[202] = ROUTE1010;

ROUTE ROUTE1011 = createNode("ROUTE");
ROUTE1011.fromNode = "SurferAv_Leg_L-POS-INTERP";
ROUTE1011.fromField = "value_changed";
ROUTE1011.toNode = "Surfer_Leg_L-ROOT";
ROUTE1011.toField = "set_translation";
children[203] = ROUTE1011;

ROUTE ROUTE1012 = createNode("ROUTE");
ROUTE1012.fromNode = "SurferCollide";
ROUTE1012.fromField = "outputFraction";
ROUTE1012.toNode = "SurferAv_Leg_L-POS-INTERP";
ROUTE1012.toField = "set_fraction";
children[204] = ROUTE1012;

ROUTE ROUTE1013 = createNode("ROUTE");
ROUTE1013.fromNode = "SurferAv_Leg_L-ROT-INTERP";
ROUTE1013.fromField = "value_changed";
ROUTE1013.toNode = "Surfer_Leg_L-ROOT";
ROUTE1013.toField = "set_rotation";
children[205] = ROUTE1013;

ROUTE ROUTE1014 = createNode("ROUTE");
ROUTE1014.fromNode = "SurferCollide";
ROUTE1014.fromField = "outputFraction";
ROUTE1014.toNode = "SurferAv_Leg_L-ROT-INTERP";
ROUTE1014.toField = "set_fraction";
children[206] = ROUTE1014;

ROUTE ROUTE1015 = createNode("ROUTE");
ROUTE1015.fromNode = "SurferAv_Foot_L-POS-INTERP";
ROUTE1015.fromField = "value_changed";
ROUTE1015.toNode = "Surfer_Foot_L-ROOT";
ROUTE1015.toField = "set_translation";
children[207] = ROUTE1015;

ROUTE ROUTE1016 = createNode("ROUTE");
ROUTE1016.fromNode = "SurferCollide";
ROUTE1016.fromField = "outputFraction";
ROUTE1016.toNode = "SurferAv_Foot_L-POS-INTERP";
ROUTE1016.toField = "set_fraction";
children[208] = ROUTE1016;

ROUTE ROUTE1017 = createNode("ROUTE");
ROUTE1017.fromNode = "SurferAv_Foot_L-ROT-INTERP";
ROUTE1017.fromField = "value_changed";
ROUTE1017.toNode = "Surfer_Foot_L-ROOT";
ROUTE1017.toField = "set_rotation";
children[209] = ROUTE1017;

ROUTE ROUTE1018 = createNode("ROUTE");
ROUTE1018.fromNode = "Surfer__Boolean-POS-INTERP";
ROUTE1018.fromField = "value_changed";
ROUTE1018.toNode = "Surfer__Boolean-ROOT";
ROUTE1018.toField = "set_translation";
children[210] = ROUTE1018;

ROUTE ROUTE1019 = createNode("ROUTE");
ROUTE1019.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1019.fromField = "fraction_changed";
ROUTE1019.toNode = "Surfer__Boolean-POS-INTERP";
ROUTE1019.toField = "set_fraction";
children[211] = ROUTE1019;

ROUTE ROUTE1020 = createNode("ROUTE");
ROUTE1020.fromNode = "Surfer_Leg_R-POS-INTERP";
ROUTE1020.fromField = "value_changed";
ROUTE1020.toNode = "Surfer_Leg_R-ROOT";
ROUTE1020.toField = "set_translation";
children[212] = ROUTE1020;

ROUTE ROUTE1021 = createNode("ROUTE");
ROUTE1021.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.toNode = "Surfer_Leg_R-POS-INTERP";
ROUTE1021.toField = "set_fraction";
children[213] = ROUTE1021;

ROUTE ROUTE1022 = createNode("ROUTE");
ROUTE1022.fromNode = "Surfer_Leg_R-ROT-INTERP";
ROUTE1022.fromField = "value_changed";
ROUTE1022.toNode = "Surfer_Leg_R-ROOT";
ROUTE1022.toField = "set_rotation";
children[214] = ROUTE1022;

ROUTE ROUTE1023 = createNode("ROUTE");
ROUTE1023.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.toNode = "Surfer_Leg_R-ROT-INTERP";
ROUTE1023.toField = "set_fraction";
children[215] = ROUTE1023;

ROUTE ROUTE1024 = createNode("ROUTE");
ROUTE1024.fromNode = "Surfer_Heel_R-ROT-INTERP";
ROUTE1024.fromField = "value_changed";
ROUTE1024.toNode = "Surfer_Heel_R-ROOT";
ROUTE1024.toField = "set_rotation";
children[216] = ROUTE1024;

ROUTE ROUTE1025 = createNode("ROUTE");
ROUTE1025.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.toNode = "Surfer_Heel_R-ROT-INTERP";
ROUTE1025.toField = "set_fraction";
children[217] = ROUTE1025;

ROUTE ROUTE1026 = createNode("ROUTE");
ROUTE1026.fromNode = "Surfer_R_Toe01-ROT-INTERP";
ROUTE1026.fromField = "value_changed";
ROUTE1026.toNode = "Surfer_R_Toe01-ROOT";
ROUTE1026.toField = "set_rotation";
children[218] = ROUTE1026;

ROUTE ROUTE1027 = createNode("ROUTE");
ROUTE1027.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.toNode = "Surfer_R_Toe01-ROT-INTERP";
ROUTE1027.toField = "set_fraction";
children[219] = ROUTE1027;

ROUTE ROUTE1028 = createNode("ROUTE");
ROUTE1028.fromNode = "Surfer_R_Toe02-ROT-INTERP";
ROUTE1028.fromField = "value_changed";
ROUTE1028.toNode = "Surfer_R_Toe02-ROOT";
ROUTE1028.toField = "set_rotation";
children[220] = ROUTE1028;

ROUTE ROUTE1029 = createNode("ROUTE");
ROUTE1029.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.toNode = "Surfer_R_Toe02-ROT-INTERP";
ROUTE1029.toField = "set_fraction";
children[221] = ROUTE1029;

ROUTE ROUTE1030 = createNode("ROUTE");
ROUTE1030.fromNode = "Surfer_R_Toe03-ROT-INTERP";
ROUTE1030.fromField = "value_changed";
ROUTE1030.toNode = "Surfer_R_Toe03-ROOT";
ROUTE1030.toField = "set_rotation";
children[222] = ROUTE1030;

ROUTE ROUTE1031 = createNode("ROUTE");
ROUTE1031.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.toNode = "Surfer_R_Toe03-ROT-INTERP";
ROUTE1031.toField = "set_fraction";
children[223] = ROUTE1031;

ROUTE ROUTE1032 = createNode("ROUTE");
ROUTE1032.fromNode = "Surfer_Leg_L-ROT-INTERP";
ROUTE1032.fromField = "value_changed";
ROUTE1032.toNode = "Surfer_Leg_L-ROOT";
ROUTE1032.toField = "set_rotation";
children[224] = ROUTE1032;

ROUTE ROUTE1033 = createNode("ROUTE");
ROUTE1033.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.toNode = "Surfer_Leg_L-ROT-INTERP";
ROUTE1033.toField = "set_fraction";
children[225] = ROUTE1033;

ROUTE ROUTE1034 = createNode("ROUTE");
ROUTE1034.fromNode = "Surfer_Heel_L-ROT-INTERP";
ROUTE1034.fromField = "value_changed";
ROUTE1034.toNode = "Surfer_Heel_L-ROOT";
ROUTE1034.toField = "set_rotation";
children[226] = ROUTE1034;

ROUTE ROUTE1035 = createNode("ROUTE");
ROUTE1035.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.toNode = "Surfer_Heel_L-ROT-INTERP";
ROUTE1035.toField = "set_fraction";
children[227] = ROUTE1035;

ROUTE ROUTE1036 = createNode("ROUTE");
ROUTE1036.fromNode = "Surfer_L_Toe01-ROT-INTERP";
ROUTE1036.fromField = "value_changed";
ROUTE1036.toNode = "Surfer_L_Toe01-ROOT";
ROUTE1036.toField = "set_rotation";
children[228] = ROUTE1036;

ROUTE ROUTE1037 = createNode("ROUTE");
ROUTE1037.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.toNode = "Surfer_L_Toe01-ROT-INTERP";
ROUTE1037.toField = "set_fraction";
children[229] = ROUTE1037;

ROUTE ROUTE1038 = createNode("ROUTE");
ROUTE1038.fromNode = "Surfer_L_Toe02-ROT-INTERP";
ROUTE1038.fromField = "value_changed";
ROUTE1038.toNode = "Surfer_L_Toe02-ROOT";
ROUTE1038.toField = "set_rotation";
children[230] = ROUTE1038;

ROUTE ROUTE1039 = createNode("ROUTE");
ROUTE1039.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.toNode = "Surfer_L_Toe02-ROT-INTERP";
ROUTE1039.toField = "set_fraction";
children[231] = ROUTE1039;

ROUTE ROUTE1040 = createNode("ROUTE");
ROUTE1040.fromNode = "Surfer_L_Toe03-ROT-INTERP";
ROUTE1040.fromField = "value_changed";
ROUTE1040.toNode = "Surfer_L_Toe03-ROOT";
ROUTE1040.toField = "set_rotation";
children[232] = ROUTE1040;

ROUTE ROUTE1041 = createNode("ROUTE");
ROUTE1041.fromNode = "TimeSensor_Surfer-TIMER";
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.toNode = "Surfer_L_Toe03-ROT-INTERP";
ROUTE1041.toField = "set_fraction";
children[233] = ROUTE1041;

ROUTE ROUTE1042 = createNode("ROUTE");
ROUTE1042.fromNode = "SurferCollide";
ROUTE1042.fromField = "outputFraction";
ROUTE1042.toNode = "SurferAv_Foot_L-ROT-INTERP";
ROUTE1042.toField = "set_fraction";
children[234] = ROUTE1042;

ROUTE ROUTE1043 = createNode("ROUTE");
ROUTE1043.fromNode = "SurferCollide";
ROUTE1043.fromField = "eatEnabled";
ROUTE1043.toNode = "EatSurfer";
ROUTE1043.toField = "set_enabled";
children[235] = ROUTE1043;

ROUTE ROUTE1044 = createNode("ROUTE");
ROUTE1044.fromNode = "ScareSurfer";
ROUTE1044.fromField = "enterTime";
ROUTE1044.toNode = "SurferCollide";
ROUTE1044.toField = "runAway";
children[236] = ROUTE1044;

ROUTE ROUTE1045 = createNode("ROUTE");
ROUTE1045.fromNode = "ScareSurfer";
ROUTE1045.fromField = "exitTime";
ROUTE1045.toNode = "SurferCollide";
ROUTE1045.toField = "allSafe";
children[237] = ROUTE1045;

ROUTE ROUTE1046 = createNode("ROUTE");
ROUTE1046.fromNode = "SurferCollide";
ROUTE1046.fromField = "startAnim";
ROUTE1046.toNode = "TimeSensor_Surfer_Av01-TIMER";
ROUTE1046.toField = "set_startTime";
children[238] = ROUTE1046;

ROUTE ROUTE1047 = createNode("ROUTE");
ROUTE1047.fromNode = "SurferCollide";
ROUTE1047.fromField = "playOops";
ROUTE1047.toNode = "oopsSound";
ROUTE1047.toField = "set_stopTime";
children[239] = ROUTE1047;

ROUTE ROUTE1048 = createNode("ROUTE");
ROUTE1048.fromNode = "SurferCollide";
ROUTE1048.fromField = "playOops";
ROUTE1048.toNode = "oopsSound";
ROUTE1048.toField = "set_startTime";
children[240] = ROUTE1048;

ROUTE ROUTE1049 = createNode("ROUTE");
ROUTE1049.fromNode = "SurferCollide";
ROUTE1049.fromField = "stopAnimLoop";
ROUTE1049.toNode = "TimeSensor_Surfer-TIMER";
ROUTE1049.toField = "set_stopTime";
children[241] = ROUTE1049;

ROUTE ROUTE1050 = createNode("ROUTE");
ROUTE1050.fromNode = "SurferCollide";
ROUTE1050.fromField = "startAnimLoop";
ROUTE1050.toNode = "TimeSensor_Surfer-TIMER";
ROUTE1050.toField = "set_startTime";
children[242] = ROUTE1050;

ROUTE ROUTE1051 = createNode("ROUTE");
ROUTE1051.fromNode = "TimeSensor_Surfer_Av01-TIMER";
ROUTE1051.fromField = "fraction_changed";
ROUTE1051.toNode = "SurferCollide";
ROUTE1051.toField = "inputFraction";
children[243] = ROUTE1051;

ROUTE ROUTE1052 = createNode("ROUTE");
ROUTE1052.fromNode = "EatSurfer2";
ROUTE1052.fromField = "isActive";
ROUTE1052.toNode = "Surfer2Collide";
ROUTE1052.toField = "beingEaten";
children[244] = ROUTE1052;

ROUTE ROUTE1053 = createNode("ROUTE");
ROUTE1053.fromNode = "Surfer2Collide";
ROUTE1053.fromField = "avoidEnabled";
ROUTE1053.toNode = "ScareSurfer2";
ROUTE1053.toField = "set_enabled";
children[245] = ROUTE1053;

ROUTE ROUTE1054 = createNode("ROUTE");
ROUTE1054.fromNode = "Surfer2Collide";
ROUTE1054.fromField = "startFloating";
ROUTE1054.toNode = "TimeSensor_Surfer2Float-TIMER";
ROUTE1054.toField = "set_startTime";
children[246] = ROUTE1054;

ROUTE ROUTE1055 = createNode("ROUTE");
ROUTE1055.fromNode = "Surfer2Collide";
ROUTE1055.fromField = "stopFloating";
ROUTE1055.toNode = "TimeSensor_Surfer2Float-TIMER";
ROUTE1055.toField = "set_stopTime";
children[247] = ROUTE1055;

ROUTE ROUTE1056 = createNode("ROUTE");
ROUTE1056.fromNode = "TimeSensor_Surfer2Float-TIMER";
ROUTE1056.fromField = "fraction_changed";
ROUTE1056.toNode = "Surfer2Float__Boolean-POS-INTERP";
ROUTE1056.toField = "set_fraction";
children[248] = ROUTE1056;

ROUTE ROUTE1057 = createNode("ROUTE");
ROUTE1057.fromNode = "Surfer2Float__Boolean-POS-INTERP";
ROUTE1057.fromField = "value_changed";
ROUTE1057.toNode = "Surfer2__Boolean-ROOT";
ROUTE1057.toField = "set_translation";
children[249] = ROUTE1057;

ROUTE ROUTE1058 = createNode("ROUTE");
ROUTE1058.fromNode = "Surfer2Av_Board-POS-INTERP";
ROUTE1058.fromField = "value_changed";
ROUTE1058.toNode = "Surfer2_Board-ROOT";
ROUTE1058.toField = "set_translation";
children[250] = ROUTE1058;

ROUTE ROUTE1059 = createNode("ROUTE");
ROUTE1059.fromNode = "Surfer2Collide";
ROUTE1059.fromField = "outputFraction";
ROUTE1059.toNode = "Surfer2Av_Board-POS-INTERP";
ROUTE1059.toField = "set_fraction";
children[251] = ROUTE1059;

ROUTE ROUTE1060 = createNode("ROUTE");
ROUTE1060.fromNode = "Surfer2Av_Board-ROT-INTERP";
ROUTE1060.fromField = "value_changed";
ROUTE1060.toNode = "Surfer2_Board-ROOT";
ROUTE1060.toField = "set_rotation";
children[252] = ROUTE1060;

ROUTE ROUTE1061 = createNode("ROUTE");
ROUTE1061.fromNode = "Surfer2Collide";
ROUTE1061.fromField = "outputFraction";
ROUTE1061.toNode = "Surfer2Av_Board-ROT-INTERP";
ROUTE1061.toField = "set_fraction";
children[253] = ROUTE1061;

ROUTE ROUTE1062 = createNode("ROUTE");
ROUTE1062.fromNode = "Surfer2Av_Leg_R-POS-INTERP";
ROUTE1062.fromField = "value_changed";
ROUTE1062.toNode = "Surfer2_Leg_R-ROOT";
ROUTE1062.toField = "set_translation";
children[254] = ROUTE1062;

ROUTE ROUTE1063 = createNode("ROUTE");
ROUTE1063.fromNode = "Surfer2Collide";
ROUTE1063.fromField = "outputFraction";
ROUTE1063.toNode = "Surfer2Av_Leg_R-POS-INTERP";
ROUTE1063.toField = "set_fraction";
children[255] = ROUTE1063;

ROUTE ROUTE1064 = createNode("ROUTE");
ROUTE1064.fromNode = "Surfer2Av_Leg_R-ROT-INTERP";
ROUTE1064.fromField = "value_changed";
ROUTE1064.toNode = "Surfer2_Leg_R-ROOT";
ROUTE1064.toField = "set_rotation";
children[256] = ROUTE1064;

ROUTE ROUTE1065 = createNode("ROUTE");
ROUTE1065.fromNode = "Surfer2Collide";
ROUTE1065.fromField = "outputFraction";
ROUTE1065.toNode = "Surfer2Av_Leg_R-ROT-INTERP";
ROUTE1065.toField = "set_fraction";
children[257] = ROUTE1065;

ROUTE ROUTE1066 = createNode("ROUTE");
ROUTE1066.fromNode = "Surfer2Av_Foot_R-POS-INTERP";
ROUTE1066.fromField = "value_changed";
ROUTE1066.toNode = "Surfer2_Foot_R-ROOT";
ROUTE1066.toField = "set_translation";
children[258] = ROUTE1066;

ROUTE ROUTE1067 = createNode("ROUTE");
ROUTE1067.fromNode = "Surfer2Collide";
ROUTE1067.fromField = "outputFraction";
ROUTE1067.toNode = "Surfer2Av_Foot_R-POS-INTERP";
ROUTE1067.toField = "set_fraction";
children[259] = ROUTE1067;

ROUTE ROUTE1068 = createNode("ROUTE");
ROUTE1068.fromNode = "Surfer2Av_Foot_R-ROT-INTERP";
ROUTE1068.fromField = "value_changed";
ROUTE1068.toNode = "Surfer2_Foot_R-ROOT";
ROUTE1068.toField = "set_rotation";
children[260] = ROUTE1068;

ROUTE ROUTE1069 = createNode("ROUTE");
ROUTE1069.fromNode = "Surfer2Collide";
ROUTE1069.fromField = "outputFraction";
ROUTE1069.toNode = "Surfer2Av_Foot_R-ROT-INTERP";
ROUTE1069.toField = "set_fraction";
children[261] = ROUTE1069;

ROUTE ROUTE1070 = createNode("ROUTE");
ROUTE1070.fromNode = "Surfer2Av_R_Toe02-POS-INTERP";
ROUTE1070.fromField = "value_changed";
ROUTE1070.toNode = "Surfer2_R_Toe02-ROOT";
ROUTE1070.toField = "set_translation";
children[262] = ROUTE1070;

ROUTE ROUTE1071 = createNode("ROUTE");
ROUTE1071.fromNode = "Surfer2Collide";
ROUTE1071.fromField = "outputFraction";
ROUTE1071.toNode = "Surfer2Av_R_Toe02-POS-INTERP";
ROUTE1071.toField = "set_fraction";
children[263] = ROUTE1071;

ROUTE ROUTE1072 = createNode("ROUTE");
ROUTE1072.fromNode = "Surfer2Av_R_Toe03-POS-INTERP";
ROUTE1072.fromField = "value_changed";
ROUTE1072.toNode = "Surfer2_R_Toe03-ROOT";
ROUTE1072.toField = "set_translation";
children[264] = ROUTE1072;

ROUTE ROUTE1073 = createNode("ROUTE");
ROUTE1073.fromNode = "Surfer2Collide";
ROUTE1073.fromField = "outputFraction";
ROUTE1073.toNode = "Surfer2Av_R_Toe03-POS-INTERP";
ROUTE1073.toField = "set_fraction";
children[265] = ROUTE1073;

ROUTE ROUTE1074 = createNode("ROUTE");
ROUTE1074.fromNode = "Surfer2Av_R_Toe01-POS-INTERP";
ROUTE1074.fromField = "value_changed";
ROUTE1074.toNode = "Surfer2_R_Toe01-ROOT";
ROUTE1074.toField = "set_translation";
children[266] = ROUTE1074;

ROUTE ROUTE1075 = createNode("ROUTE");
ROUTE1075.fromNode = "Surfer2Collide";
ROUTE1075.fromField = "outputFraction";
ROUTE1075.toNode = "Surfer2Av_R_Toe01-POS-INTERP";
ROUTE1075.toField = "set_fraction";
children[267] = ROUTE1075;

ROUTE ROUTE1076 = createNode("ROUTE");
ROUTE1076.fromNode = "Surfer2Av_Leg_L-POS-INTERP";
ROUTE1076.fromField = "value_changed";
ROUTE1076.toNode = "Surfer2_Leg_L-ROOT";
ROUTE1076.toField = "set_translation";
children[268] = ROUTE1076;

ROUTE ROUTE1077 = createNode("ROUTE");
ROUTE1077.fromNode = "Surfer2Collide";
ROUTE1077.fromField = "outputFraction";
ROUTE1077.toNode = "Surfer2Av_Leg_L-POS-INTERP";
ROUTE1077.toField = "set_fraction";
children[269] = ROUTE1077;

ROUTE ROUTE1078 = createNode("ROUTE");
ROUTE1078.fromNode = "Surfer2Av_Leg_L-ROT-INTERP";
ROUTE1078.fromField = "value_changed";
ROUTE1078.toNode = "Surfer2_Leg_L-ROOT";
ROUTE1078.toField = "set_rotation";
children[270] = ROUTE1078;

ROUTE ROUTE1079 = createNode("ROUTE");
ROUTE1079.fromNode = "Surfer2Collide";
ROUTE1079.fromField = "outputFraction";
ROUTE1079.toNode = "Surfer2Av_Leg_L-ROT-INTERP";
ROUTE1079.toField = "set_fraction";
children[271] = ROUTE1079;

ROUTE ROUTE1080 = createNode("ROUTE");
ROUTE1080.fromNode = "Surfer2Av_Foot_L-POS-INTERP";
ROUTE1080.fromField = "value_changed";
ROUTE1080.toNode = "Surfer2_Foot_L-ROOT";
ROUTE1080.toField = "set_translation";
children[272] = ROUTE1080;

ROUTE ROUTE1081 = createNode("ROUTE");
ROUTE1081.fromNode = "Surfer2Collide";
ROUTE1081.fromField = "outputFraction";
ROUTE1081.toNode = "Surfer2Av_Foot_L-POS-INTERP";
ROUTE1081.toField = "set_fraction";
children[273] = ROUTE1081;

ROUTE ROUTE1082 = createNode("ROUTE");
ROUTE1082.fromNode = "Surfer2Av_Foot_L-ROT-INTERP";
ROUTE1082.fromField = "value_changed";
ROUTE1082.toNode = "Surfer2_Foot_L-ROOT";
ROUTE1082.toField = "set_rotation";
children[274] = ROUTE1082;

ROUTE ROUTE1083 = createNode("ROUTE");
ROUTE1083.fromNode = "Surfer2__Boolean-POS-INTERP";
ROUTE1083.fromField = "value_changed";
ROUTE1083.toNode = "Surfer2__Boolean-ROOT";
ROUTE1083.toField = "set_translation";
children[275] = ROUTE1083;

ROUTE ROUTE1084 = createNode("ROUTE");
ROUTE1084.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.toNode = "Surfer2__Boolean-POS-INTERP";
ROUTE1084.toField = "set_fraction";
children[276] = ROUTE1084;

ROUTE ROUTE1085 = createNode("ROUTE");
ROUTE1085.fromNode = "Surfer2_Leg_R-POS-INTERP";
ROUTE1085.fromField = "value_changed";
ROUTE1085.toNode = "Surfer2_Leg_R-ROOT";
ROUTE1085.toField = "set_translation";
children[277] = ROUTE1085;

ROUTE ROUTE1086 = createNode("ROUTE");
ROUTE1086.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.toNode = "Surfer2_Leg_R-POS-INTERP";
ROUTE1086.toField = "set_fraction";
children[278] = ROUTE1086;

ROUTE ROUTE1087 = createNode("ROUTE");
ROUTE1087.fromNode = "Surfer2_Leg_R-ROT-INTERP";
ROUTE1087.fromField = "value_changed";
ROUTE1087.toNode = "Surfer2_Leg_R-ROOT";
ROUTE1087.toField = "set_rotation";
children[279] = ROUTE1087;

ROUTE ROUTE1088 = createNode("ROUTE");
ROUTE1088.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.toNode = "Surfer2_Leg_R-ROT-INTERP";
ROUTE1088.toField = "set_fraction";
children[280] = ROUTE1088;

ROUTE ROUTE1089 = createNode("ROUTE");
ROUTE1089.fromNode = "Surfer2_Heel_R-ROT-INTERP";
ROUTE1089.fromField = "value_changed";
ROUTE1089.toNode = "Surfer2_Heel_R-ROOT";
ROUTE1089.toField = "set_rotation";
children[281] = ROUTE1089;

ROUTE ROUTE1090 = createNode("ROUTE");
ROUTE1090.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1090.fromField = "fraction_changed";
ROUTE1090.toNode = "Surfer2_Heel_R-ROT-INTERP";
ROUTE1090.toField = "set_fraction";
children[282] = ROUTE1090;

ROUTE ROUTE1091 = createNode("ROUTE");
ROUTE1091.fromNode = "Surfer2_R_Toe01-ROT-INTERP";
ROUTE1091.fromField = "value_changed";
ROUTE1091.toNode = "Surfer2_R_Toe01-ROOT";
ROUTE1091.toField = "set_rotation";
children[283] = ROUTE1091;

ROUTE ROUTE1092 = createNode("ROUTE");
ROUTE1092.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1092.fromField = "fraction_changed";
ROUTE1092.toNode = "Surfer2_R_Toe01-ROT-INTERP";
ROUTE1092.toField = "set_fraction";
children[284] = ROUTE1092;

ROUTE ROUTE1093 = createNode("ROUTE");
ROUTE1093.fromNode = "Surfer2_R_Toe02-ROT-INTERP";
ROUTE1093.fromField = "value_changed";
ROUTE1093.toNode = "Surfer2_R_Toe02-ROOT";
ROUTE1093.toField = "set_rotation";
children[285] = ROUTE1093;

ROUTE ROUTE1094 = createNode("ROUTE");
ROUTE1094.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1094.fromField = "fraction_changed";
ROUTE1094.toNode = "Surfer2_R_Toe02-ROT-INTERP";
ROUTE1094.toField = "set_fraction";
children[286] = ROUTE1094;

ROUTE ROUTE1095 = createNode("ROUTE");
ROUTE1095.fromNode = "Surfer2_R_Toe03-ROT-INTERP";
ROUTE1095.fromField = "value_changed";
ROUTE1095.toNode = "Surfer2_R_Toe03-ROOT";
ROUTE1095.toField = "set_rotation";
children[287] = ROUTE1095;

ROUTE ROUTE1096 = createNode("ROUTE");
ROUTE1096.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1096.fromField = "fraction_changed";
ROUTE1096.toNode = "Surfer2_R_Toe03-ROT-INTERP";
ROUTE1096.toField = "set_fraction";
children[288] = ROUTE1096;

ROUTE ROUTE1097 = createNode("ROUTE");
ROUTE1097.fromNode = "Surfer2_Leg_L-ROT-INTERP";
ROUTE1097.fromField = "value_changed";
ROUTE1097.toNode = "Surfer2_Leg_L-ROOT";
ROUTE1097.toField = "set_rotation";
children[289] = ROUTE1097;

ROUTE ROUTE1098 = createNode("ROUTE");
ROUTE1098.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1098.fromField = "fraction_changed";
ROUTE1098.toNode = "Surfer2_Leg_L-ROT-INTERP";
ROUTE1098.toField = "set_fraction";
children[290] = ROUTE1098;

ROUTE ROUTE1099 = createNode("ROUTE");
ROUTE1099.fromNode = "Surfer2_Heel_L-ROT-INTERP";
ROUTE1099.fromField = "value_changed";
ROUTE1099.toNode = "Surfer2_Heel_L-ROOT";
ROUTE1099.toField = "set_rotation";
children[291] = ROUTE1099;

ROUTE ROUTE1100 = createNode("ROUTE");
ROUTE1100.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1100.fromField = "fraction_changed";
ROUTE1100.toNode = "Surfer2_Heel_L-ROT-INTERP";
ROUTE1100.toField = "set_fraction";
children[292] = ROUTE1100;

ROUTE ROUTE1101 = createNode("ROUTE");
ROUTE1101.fromNode = "Surfer2_L_Toe01-ROT-INTERP";
ROUTE1101.fromField = "value_changed";
ROUTE1101.toNode = "Surfer2_L_Toe01-ROOT";
ROUTE1101.toField = "set_rotation";
children[293] = ROUTE1101;

ROUTE ROUTE1102 = createNode("ROUTE");
ROUTE1102.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1102.fromField = "fraction_changed";
ROUTE1102.toNode = "Surfer2_L_Toe01-ROT-INTERP";
ROUTE1102.toField = "set_fraction";
children[294] = ROUTE1102;

ROUTE ROUTE1103 = createNode("ROUTE");
ROUTE1103.fromNode = "Surfer2_L_Toe02-ROT-INTERP";
ROUTE1103.fromField = "value_changed";
ROUTE1103.toNode = "Surfer2_L_Toe02-ROOT";
ROUTE1103.toField = "set_rotation";
children[295] = ROUTE1103;

ROUTE ROUTE1104 = createNode("ROUTE");
ROUTE1104.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1104.fromField = "fraction_changed";
ROUTE1104.toNode = "Surfer2_L_Toe02-ROT-INTERP";
ROUTE1104.toField = "set_fraction";
children[296] = ROUTE1104;

ROUTE ROUTE1105 = createNode("ROUTE");
ROUTE1105.fromNode = "Surfer2_L_Toe03-ROT-INTERP";
ROUTE1105.fromField = "value_changed";
ROUTE1105.toNode = "Surfer2_L_Toe03-ROOT";
ROUTE1105.toField = "set_rotation";
children[297] = ROUTE1105;

ROUTE ROUTE1106 = createNode("ROUTE");
ROUTE1106.fromNode = "TimeSensor_Surfer2-TIMER";
ROUTE1106.fromField = "fraction_changed";
ROUTE1106.toNode = "Surfer2_L_Toe03-ROT-INTERP";
ROUTE1106.toField = "set_fraction";
children[298] = ROUTE1106;

ROUTE ROUTE1107 = createNode("ROUTE");
ROUTE1107.fromNode = "Surfer2Collide";
ROUTE1107.fromField = "outputFraction";
ROUTE1107.toNode = "Surfer2Av_Foot_L-ROT-INTERP";
ROUTE1107.toField = "set_fraction";
children[299] = ROUTE1107;

ROUTE ROUTE1108 = createNode("ROUTE");
ROUTE1108.fromNode = "Surfer2Collide";
ROUTE1108.fromField = "eatEnabled";
ROUTE1108.toNode = "EatSurfer2";
ROUTE1108.toField = "set_enabled";
children[300] = ROUTE1108;

ROUTE ROUTE1109 = createNode("ROUTE");
ROUTE1109.fromNode = "ScareSurfer2";
ROUTE1109.fromField = "enterTime";
ROUTE1109.toNode = "Surfer2Collide";
ROUTE1109.toField = "runAway";
children[301] = ROUTE1109;

ROUTE ROUTE1110 = createNode("ROUTE");
ROUTE1110.fromNode = "ScareSurfer2";
ROUTE1110.fromField = "exitTime";
ROUTE1110.toNode = "Surfer2Collide";
ROUTE1110.toField = "allSafe";
children[302] = ROUTE1110;

ROUTE ROUTE1111 = createNode("ROUTE");
ROUTE1111.fromNode = "Surfer2Collide";
ROUTE1111.fromField = "startAnim";
ROUTE1111.toNode = "TimeSensor_Surfer2_Av01-TIMER";
ROUTE1111.toField = "set_startTime";
children[303] = ROUTE1111;

ROUTE ROUTE1112 = createNode("ROUTE");
ROUTE1112.fromNode = "Surfer2Collide";
ROUTE1112.fromField = "playOops";
ROUTE1112.toNode = "oopsSound";
ROUTE1112.toField = "set_startTime";
children[304] = ROUTE1112;

ROUTE ROUTE1113 = createNode("ROUTE");
ROUTE1113.fromNode = "Surfer2Collide";
ROUTE1113.fromField = "stopAnimLoop";
ROUTE1113.toNode = "TimeSensor_Surfer2-TIMER";
ROUTE1113.toField = "set_stopTime";
children[305] = ROUTE1113;

ROUTE ROUTE1114 = createNode("ROUTE");
ROUTE1114.fromNode = "Surfer2Collide";
ROUTE1114.fromField = "startAnimLoop";
ROUTE1114.toNode = "TimeSensor_Surfer2-TIMER";
ROUTE1114.toField = "set_startTime";
children[306] = ROUTE1114;

ROUTE ROUTE1115 = createNode("ROUTE");
ROUTE1115.fromNode = "TimeSensor_Surfer2_Av01-TIMER";
ROUTE1115.fromField = "fraction_changed";
ROUTE1115.toNode = "Surfer2Collide";
ROUTE1115.toField = "inputFraction";
children[307] = ROUTE1115;

ROUTE ROUTE1116 = createNode("ROUTE");
ROUTE1116.fromNode = "TimeSensor_Innertube-TIMER";
ROUTE1116.fromField = "fraction_changed";
ROUTE1116.toNode = "Mapper";
ROUTE1116.toField = "set_fraction";
children[308] = ROUTE1116;

ROUTE ROUTE1117 = createNode("ROUTE");
ROUTE1117.fromNode = "TimeSensor_InnertubeFast-TIMER";
ROUTE1117.fromField = "fraction_changed";
ROUTE1117.toNode = "Mapper";
ROUTE1117.toField = "set_fraction";
children[309] = ROUTE1117;

ROUTE ROUTE1118 = createNode("ROUTE");
ROUTE1118.fromNode = "Innertube-ROT-INTERP";
ROUTE1118.fromField = "value_changed";
ROUTE1118.toNode = "Innertube-ROOT";
ROUTE1118.toField = "set_rotation";
children[310] = ROUTE1118;

ROUTE ROUTE1119 = createNode("ROUTE");
ROUTE1119.fromNode = "Mapper";
ROUTE1119.fromField = "value_changed";
ROUTE1119.toNode = "Innertube-ROT-INTERP";
ROUTE1119.toField = "set_fraction";
children[311] = ROUTE1119;

ROUTE ROUTE1120 = createNode("ROUTE");
ROUTE1120.fromNode = "Innertube_L_leg-POS-INTERP";
ROUTE1120.fromField = "value_changed";
ROUTE1120.toNode = "Innertube_L_leg-ROOT";
ROUTE1120.toField = "set_translation";
children[312] = ROUTE1120;

ROUTE ROUTE1121 = createNode("ROUTE");
ROUTE1121.fromNode = "Mapper";
ROUTE1121.fromField = "value_changed";
ROUTE1121.toNode = "Innertube_L_leg-POS-INTERP";
ROUTE1121.toField = "set_fraction";
children[313] = ROUTE1121;

ROUTE ROUTE1122 = createNode("ROUTE");
ROUTE1122.fromNode = "Innertube_L_leg-ROT-INTERP";
ROUTE1122.fromField = "value_changed";
ROUTE1122.toNode = "Innertube_L_leg-ROOT";
ROUTE1122.toField = "set_rotation";
children[314] = ROUTE1122;

ROUTE ROUTE1123 = createNode("ROUTE");
ROUTE1123.fromNode = "Mapper";
ROUTE1123.fromField = "value_changed";
ROUTE1123.toNode = "Innertube_L_leg-ROT-INTERP";
ROUTE1123.toField = "set_fraction";
children[315] = ROUTE1123;

ROUTE ROUTE1124 = createNode("ROUTE");
ROUTE1124.fromNode = "Innertube_L_flipper-POS-INTERP";
ROUTE1124.fromField = "value_changed";
ROUTE1124.toNode = "Innertube_L_flipper-ROOT";
ROUTE1124.toField = "set_translation";
children[316] = ROUTE1124;

ROUTE ROUTE1125 = createNode("ROUTE");
ROUTE1125.fromNode = "Mapper";
ROUTE1125.fromField = "value_changed";
ROUTE1125.toNode = "Innertube_L_flipper-POS-INTERP";
ROUTE1125.toField = "set_fraction";
children[317] = ROUTE1125;

ROUTE ROUTE1126 = createNode("ROUTE");
ROUTE1126.fromNode = "Innertube_L_flipper-ROT-INTERP";
ROUTE1126.fromField = "value_changed";
ROUTE1126.toNode = "Innertube_L_flipper-ROOT";
ROUTE1126.toField = "set_rotation";
children[318] = ROUTE1126;

ROUTE ROUTE1127 = createNode("ROUTE");
ROUTE1127.fromNode = "Mapper";
ROUTE1127.fromField = "value_changed";
ROUTE1127.toNode = "Innertube_L_flipper-ROT-INTERP";
ROUTE1127.toField = "set_fraction";
children[319] = ROUTE1127;

ROUTE ROUTE1128 = createNode("ROUTE");
ROUTE1128.fromNode = "Innertube_R_leg-POS-INTERP";
ROUTE1128.fromField = "value_changed";
ROUTE1128.toNode = "Innertube_R_leg-ROOT";
ROUTE1128.toField = "set_translation";
children[320] = ROUTE1128;

ROUTE ROUTE1129 = createNode("ROUTE");
ROUTE1129.fromNode = "Mapper";
ROUTE1129.fromField = "value_changed";
ROUTE1129.toNode = "Innertube_R_leg-POS-INTERP";
ROUTE1129.toField = "set_fraction";
children[321] = ROUTE1129;

ROUTE ROUTE1130 = createNode("ROUTE");
ROUTE1130.fromNode = "Innertube_R_leg-ROT-INTERP";
ROUTE1130.fromField = "value_changed";
ROUTE1130.toNode = "Innertube_R_leg-ROOT";
ROUTE1130.toField = "set_rotation";
children[322] = ROUTE1130;

ROUTE ROUTE1131 = createNode("ROUTE");
ROUTE1131.fromNode = "Mapper";
ROUTE1131.fromField = "value_changed";
ROUTE1131.toNode = "Innertube_R_leg-ROT-INTERP";
ROUTE1131.toField = "set_fraction";
children[323] = ROUTE1131;

ROUTE ROUTE1132 = createNode("ROUTE");
ROUTE1132.fromNode = "Innertube_R_flipper-POS-INTERP";
ROUTE1132.fromField = "value_changed";
ROUTE1132.toNode = "Innertube_R_flipper-ROOT";
ROUTE1132.toField = "set_translation";
children[324] = ROUTE1132;

ROUTE ROUTE1133 = createNode("ROUTE");
ROUTE1133.fromNode = "Mapper";
ROUTE1133.fromField = "value_changed";
ROUTE1133.toNode = "Innertube_R_flipper-POS-INTERP";
ROUTE1133.toField = "set_fraction";
children[325] = ROUTE1133;

ROUTE ROUTE1134 = createNode("ROUTE");
ROUTE1134.fromNode = "Innertube_R_flipper-ROT-INTERP";
ROUTE1134.fromField = "value_changed";
ROUTE1134.toNode = "Innertube_R_flipper-ROOT";
ROUTE1134.toField = "set_rotation";
children[326] = ROUTE1134;

ROUTE ROUTE1135 = createNode("ROUTE");
ROUTE1135.fromNode = "Mapper";
ROUTE1135.fromField = "value_changed";
ROUTE1135.toNode = "Innertube_R_flipper-ROT-INTERP";
ROUTE1135.toField = "set_fraction";
children[327] = ROUTE1135;

ROUTE ROUTE1136 = createNode("ROUTE");
ROUTE1136.fromNode = "Innertube_Dummy-ROT-INTERP";
ROUTE1136.fromField = "value_changed";
ROUTE1136.toNode = "Innertube_Dummy-ROOT";
ROUTE1136.toField = "set_rotation";
children[328] = ROUTE1136;

ROUTE ROUTE1137 = createNode("ROUTE");
ROUTE1137.fromNode = "Mapper";
ROUTE1137.fromField = "value_changed";
ROUTE1137.toNode = "Innertube_Dummy-ROT-INTERP";
ROUTE1137.toField = "set_fraction";
children[329] = ROUTE1137;

ROUTE ROUTE1138 = createNode("ROUTE");
ROUTE1138.fromNode = "Innertube_L_butt-ROT-INTERP";
ROUTE1138.fromField = "value_changed";
ROUTE1138.toNode = "Innertube_L_butt-ROOT";
ROUTE1138.toField = "set_rotation";
children[330] = ROUTE1138;

ROUTE ROUTE1139 = createNode("ROUTE");
ROUTE1139.fromNode = "Mapper";
ROUTE1139.fromField = "value_changed";
ROUTE1139.toNode = "Innertube_L_butt-ROT-INTERP";
ROUTE1139.toField = "set_fraction";
children[331] = ROUTE1139;

ROUTE ROUTE1140 = createNode("ROUTE");
ROUTE1140.fromNode = "TubeCollide";
ROUTE1140.fromField = "kickStart";
ROUTE1140.toNode = "TimeSensor_Innertube-TIMER";
ROUTE1140.toField = "set_startTime";
children[332] = ROUTE1140;

ROUTE ROUTE1141 = createNode("ROUTE");
ROUTE1141.fromNode = "TubeCollide";
ROUTE1141.fromField = "kickSlower";
ROUTE1141.toNode = "TimeSensor_Innertube-TIMER";
ROUTE1141.toField = "set_enabled";
children[333] = ROUTE1141;

ROUTE ROUTE1142 = createNode("ROUTE");
ROUTE1142.fromNode = "TubeCollide";
ROUTE1142.fromField = "kickFaster";
ROUTE1142.toNode = "TimeSensor_InnertubeFast-TIMER";
ROUTE1142.toField = "set_enabled";
children[334] = ROUTE1142;

ROUTE ROUTE1143 = createNode("ROUTE");
ROUTE1143.fromNode = "TubeCollide";
ROUTE1143.fromField = "enableRun";
ROUTE1143.toNode = "ScareTuber";
ROUTE1143.toField = "set_enabled";
children[335] = ROUTE1143;

ROUTE ROUTE1144 = createNode("ROUTE");
ROUTE1144.fromNode = "EatTuber";
ROUTE1144.fromField = "isActive";
ROUTE1144.toNode = "TubeCollide";
ROUTE1144.toField = "beingEaten";
children[336] = ROUTE1144;

ROUTE ROUTE1145 = createNode("ROUTE");
ROUTE1145.fromNode = "ScareTuber";
ROUTE1145.fromField = "enterTime";
ROUTE1145.toNode = "TubeCollide";
ROUTE1145.toField = "runAway";
children[337] = ROUTE1145;

ROUTE ROUTE1146 = createNode("ROUTE");
ROUTE1146.fromNode = "TubeCollide";
ROUTE1146.fromField = "enableHit";
ROUTE1146.toNode = "EatTuber";
ROUTE1146.toField = "set_enabled";
children[338] = ROUTE1146;

ROUTE ROUTE1147 = createNode("ROUTE");
ROUTE1147.fromNode = "TubeCollide";
ROUTE1147.fromField = "tubeRun";
ROUTE1147.toNode = "TuberRun";
ROUTE1147.toField = "set_startTime";
children[339] = ROUTE1147;

ROUTE ROUTE1148 = createNode("ROUTE");
ROUTE1148.fromNode = "TubeCollide";
ROUTE1148.fromField = "tubeRun2";
ROUTE1148.toNode = "TuberRun2";
ROUTE1148.toField = "set_startTime";
children[340] = ROUTE1148;

ROUTE ROUTE1149 = createNode("ROUTE");
ROUTE1149.fromNode = "TubeCollide";
ROUTE1149.fromField = "tubeRun";
ROUTE1149.toNode = "oopsSound";
ROUTE1149.toField = "set_startTime";
children[341] = ROUTE1149;

ROUTE ROUTE1150 = createNode("ROUTE");
ROUTE1150.fromNode = "TubeCollide";
ROUTE1150.fromField = "tubeRun2";
ROUTE1150.toNode = "oopsSound";
ROUTE1150.toField = "set_startTime";
children[342] = ROUTE1150;

ROUTE ROUTE1151 = createNode("ROUTE");
ROUTE1151.fromNode = "TuberRun";
ROUTE1151.fromField = "isActive";
ROUTE1151.toNode = "TubeCollide";
ROUTE1151.toField = "finishedRunning";
children[343] = ROUTE1151;

ROUTE ROUTE1152 = createNode("ROUTE");
ROUTE1152.fromNode = "TuberRun2";
ROUTE1152.fromField = "isActive";
ROUTE1152.toNode = "TubeCollide";
ROUTE1152.toField = "finishedRunning2";
children[344] = ROUTE1152;

ROUTE ROUTE1153 = createNode("ROUTE");
ROUTE1153.fromNode = "TuberRun";
ROUTE1153.fromField = "fraction_changed";
ROUTE1153.toNode = "Inline_Tube01_avoid01-POS-INTERP";
ROUTE1153.toField = "set_fraction";
children[345] = ROUTE1153;

ROUTE ROUTE1154 = createNode("ROUTE");
ROUTE1154.fromNode = "TuberRun";
ROUTE1154.fromField = "fraction_changed";
ROUTE1154.toNode = "Inline_Tube01_avoid01-ROT-INTERP";
ROUTE1154.toField = "set_fraction";
children[346] = ROUTE1154;

ROUTE ROUTE1155 = createNode("ROUTE");
ROUTE1155.fromNode = "TuberRun2";
ROUTE1155.fromField = "fraction_changed";
ROUTE1155.toNode = "Inline_Tube01_avoid02-POS-INTERP";
ROUTE1155.toField = "set_fraction";
children[347] = ROUTE1155;

ROUTE ROUTE1156 = createNode("ROUTE");
ROUTE1156.fromNode = "TuberRun2";
ROUTE1156.fromField = "fraction_changed";
ROUTE1156.toNode = "Inline_Tube01_avoid02-ROT-INTERP";
ROUTE1156.toField = "set_fraction";
children[348] = ROUTE1156;

ROUTE ROUTE1157 = createNode("ROUTE");
ROUTE1157.fromNode = "Inline_Tube01_avoid01-POS-INTERP";
ROUTE1157.fromField = "value_changed";
ROUTE1157.toNode = "Inline_Tube01-ROOT";
ROUTE1157.toField = "set_translation";
children[349] = ROUTE1157;

ROUTE ROUTE1158 = createNode("ROUTE");
ROUTE1158.fromNode = "Inline_Tube01_avoid01-ROT-INTERP";
ROUTE1158.fromField = "value_changed";
ROUTE1158.toNode = "Inline_Tube01-ROOT";
ROUTE1158.toField = "set_rotation";
children[350] = ROUTE1158;

ROUTE ROUTE1159 = createNode("ROUTE");
ROUTE1159.fromNode = "Inline_Tube01_avoid02-POS-INTERP";
ROUTE1159.fromField = "value_changed";
ROUTE1159.toNode = "Inline_Tube01-ROOT";
ROUTE1159.toField = "set_translation";
children[351] = ROUTE1159;

ROUTE ROUTE1160 = createNode("ROUTE");
ROUTE1160.fromNode = "Inline_Tube01_avoid02-ROT-INTERP";
ROUTE1160.fromField = "value_changed";
ROUTE1160.toNode = "Inline_Tube01-ROOT";
ROUTE1160.toField = "set_rotation";
children[352] = ROUTE1160;

ROUTE ROUTE1161 = createNode("ROUTE");
ROUTE1161.fromNode = "Inline_Tube01_avoid01-POS-INTERP";
ROUTE1161.fromField = "value_changed";
ROUTE1161.toNode = "TuberCollisionMover";
ROUTE1161.toField = "set_translation";
children[353] = ROUTE1161;

ROUTE ROUTE1162 = createNode("ROUTE");
ROUTE1162.fromNode = "Inline_Tube01_avoid02-POS-INTERP";
ROUTE1162.fromField = "value_changed";
ROUTE1162.toNode = "TuberCollisionMover";
ROUTE1162.toField = "set_translation";
children[354] = ROUTE1162;

ROUTE ROUTE1163 = createNode("ROUTE");
ROUTE1163.fromNode = "TubeCollide2";
ROUTE1163.fromField = "enableRun";
ROUTE1163.toNode = "ScareTuber2";
ROUTE1163.toField = "set_enabled";
children[355] = ROUTE1163;

ROUTE ROUTE1164 = createNode("ROUTE");
ROUTE1164.fromNode = "TubeCollide2";
ROUTE1164.fromField = "kickStart";
ROUTE1164.toNode = "TimeSensor_Innertube-TIMER";
ROUTE1164.toField = "set_startTime";
children[356] = ROUTE1164;

ROUTE ROUTE1165 = createNode("ROUTE");
ROUTE1165.fromNode = "TubeCollide2";
ROUTE1165.fromField = "kickSlower";
ROUTE1165.toNode = "TimeSensor_Innertube-TIMER";
ROUTE1165.toField = "set_enabled";
children[357] = ROUTE1165;

ROUTE ROUTE1166 = createNode("ROUTE");
ROUTE1166.fromNode = "TubeCollide2";
ROUTE1166.fromField = "kickFaster";
ROUTE1166.toNode = "TimeSensor_InnertubeFast-TIMER";
ROUTE1166.toField = "set_enabled";
children[358] = ROUTE1166;

ROUTE ROUTE1167 = createNode("ROUTE");
ROUTE1167.fromNode = "EatTuber2";
ROUTE1167.fromField = "isActive";
ROUTE1167.toNode = "TubeCollide2";
ROUTE1167.toField = "beingEaten";
children[359] = ROUTE1167;

ROUTE ROUTE1168 = createNode("ROUTE");
ROUTE1168.fromNode = "ScareTuber2";
ROUTE1168.fromField = "enterTime";
ROUTE1168.toNode = "TubeCollide2";
ROUTE1168.toField = "runAway";
children[360] = ROUTE1168;

ROUTE ROUTE1169 = createNode("ROUTE");
ROUTE1169.fromNode = "TubeCollide2";
ROUTE1169.fromField = "enableHit";
ROUTE1169.toNode = "EatTuber2";
ROUTE1169.toField = "set_enabled";
children[361] = ROUTE1169;

ROUTE ROUTE1170 = createNode("ROUTE");
ROUTE1170.fromNode = "TubeCollide2";
ROUTE1170.fromField = "tubeRun";
ROUTE1170.toNode = "oopsSound";
ROUTE1170.toField = "set_startTime";
children[362] = ROUTE1170;

ROUTE ROUTE1171 = createNode("ROUTE");
ROUTE1171.fromNode = "TubeCollide2";
ROUTE1171.fromField = "tubeRun2";
ROUTE1171.toNode = "oopsSound";
ROUTE1171.toField = "set_startTime";
children[363] = ROUTE1171;

ROUTE ROUTE1172 = createNode("ROUTE");
ROUTE1172.fromNode = "TubeCollide2";
ROUTE1172.fromField = "tubeRun";
ROUTE1172.toNode = "Tuber2Run";
ROUTE1172.toField = "set_startTime";
children[364] = ROUTE1172;

ROUTE ROUTE1173 = createNode("ROUTE");
ROUTE1173.fromNode = "TubeCollide2";
ROUTE1173.fromField = "tubeRun2";
ROUTE1173.toNode = "Tuber2Run2";
ROUTE1173.toField = "set_startTime";
children[365] = ROUTE1173;

ROUTE ROUTE1174 = createNode("ROUTE");
ROUTE1174.fromNode = "Tuber2Run";
ROUTE1174.fromField = "isActive";
ROUTE1174.toNode = "TubeCollide2";
ROUTE1174.toField = "finishedRunning";
children[366] = ROUTE1174;

ROUTE ROUTE1175 = createNode("ROUTE");
ROUTE1175.fromNode = "Tuber2Run2";
ROUTE1175.fromField = "isActive";
ROUTE1175.toNode = "TubeCollide2";
ROUTE1175.toField = "finishedRunning";
children[367] = ROUTE1175;

ROUTE ROUTE1176 = createNode("ROUTE");
ROUTE1176.fromNode = "Tuber2Run";
ROUTE1176.fromField = "fraction_changed";
ROUTE1176.toNode = "Inline_Tube02_avoid01-POS-INTERP";
ROUTE1176.toField = "set_fraction";
children[368] = ROUTE1176;

ROUTE ROUTE1177 = createNode("ROUTE");
ROUTE1177.fromNode = "Tuber2Run";
ROUTE1177.fromField = "fraction_changed";
ROUTE1177.toNode = "Inline_Tube02_avoid01-ROT-INTERP";
ROUTE1177.toField = "set_fraction";
children[369] = ROUTE1177;

ROUTE ROUTE1178 = createNode("ROUTE");
ROUTE1178.fromNode = "Tuber2Run2";
ROUTE1178.fromField = "fraction_changed";
ROUTE1178.toNode = "Inline_Tube02_avoid02-POS-INTERP";
ROUTE1178.toField = "set_fraction";
children[370] = ROUTE1178;

ROUTE ROUTE1179 = createNode("ROUTE");
ROUTE1179.fromNode = "Tuber2Run2";
ROUTE1179.fromField = "fraction_changed";
ROUTE1179.toNode = "Inline_Tube02_avoid02-ROT-INTERP";
ROUTE1179.toField = "set_fraction";
children[371] = ROUTE1179;

ROUTE ROUTE1180 = createNode("ROUTE");
ROUTE1180.fromNode = "Inline_Tube02_avoid01-POS-INTERP";
ROUTE1180.fromField = "value_changed";
ROUTE1180.toNode = "Inline_Tube02-ROOT";
ROUTE1180.toField = "set_translation";
children[372] = ROUTE1180;

ROUTE ROUTE1181 = createNode("ROUTE");
ROUTE1181.fromNode = "Inline_Tube02_avoid01-ROT-INTERP";
ROUTE1181.fromField = "value_changed";
ROUTE1181.toNode = "Inline_Tube02-ROOT";
ROUTE1181.toField = "set_rotation";
children[373] = ROUTE1181;

ROUTE ROUTE1182 = createNode("ROUTE");
ROUTE1182.fromNode = "Inline_Tube02_avoid02-POS-INTERP";
ROUTE1182.fromField = "value_changed";
ROUTE1182.toNode = "Inline_Tube02-ROOT";
ROUTE1182.toField = "set_translation";
children[374] = ROUTE1182;

ROUTE ROUTE1183 = createNode("ROUTE");
ROUTE1183.fromNode = "Inline_Tube02_avoid02-ROT-INTERP";
ROUTE1183.fromField = "value_changed";
ROUTE1183.toNode = "Inline_Tube02-ROOT";
ROUTE1183.toField = "set_rotation";
children[375] = ROUTE1183;

ROUTE ROUTE1184 = createNode("ROUTE");
ROUTE1184.fromNode = "Inline_Tube02_avoid01-POS-INTERP";
ROUTE1184.fromField = "value_changed";
ROUTE1184.toNode = "Tuber2CollisionMover";
ROUTE1184.toField = "set_translation";
children[376] = ROUTE1184;

ROUTE ROUTE1185 = createNode("ROUTE");
ROUTE1185.fromNode = "Inline_Tube02_avoid02-POS-INTERP";
ROUTE1185.fromField = "value_changed";
ROUTE1185.toNode = "Tuber2CollisionMover";
ROUTE1185.toField = "set_translation";
children[377] = ROUTE1185;

ROUTE ROUTE1186 = createNode("ROUTE");
ROUTE1186.fromNode = "FadeTimer";
ROUTE1186.fromField = "fraction_changed";
ROUTE1186.toNode = "FadeInterp";
ROUTE1186.toField = "set_fraction";
children[378] = ROUTE1186;

ROUTE ROUTE1187 = createNode("ROUTE");
ROUTE1187.fromNode = "FadeTimer";
ROUTE1187.fromField = "fraction_changed";
ROUTE1187.toNode = "FadeColorInterp";
ROUTE1187.toField = "set_fraction";
children[379] = ROUTE1187;

ROUTE ROUTE1188 = createNode("ROUTE");
ROUTE1188.fromNode = "FadeColorInterp";
ROUTE1188.fromField = "value_changed";
ROUTE1188.toNode = "Fog01";
ROUTE1188.toField = "set_color";
children[380] = ROUTE1188;

ROUTE ROUTE1189 = createNode("ROUTE");
ROUTE1189.fromNode = "FadeInterp";
ROUTE1189.fromField = "value_changed";
ROUTE1189.toNode = "Fog01";
ROUTE1189.toField = "set_visibilityRange";
children[381] = ROUTE1189;

ROUTE ROUTE1190 = createNode("ROUTE");
ROUTE1190.fromNode = "seagullVisible";
ROUTE1190.fromField = "enterTime";
ROUTE1190.toNode = "TextDisplay";
ROUTE1190.toField = "seagullVisible";
children[382] = ROUTE1190;

ROUTE ROUTE1191 = createNode("ROUTE");
ROUTE1191.fromNode = "sittingSeagullVisible";
ROUTE1191.fromField = "enterTime";
ROUTE1191.toNode = "TextDisplay";
ROUTE1191.toField = "sittingSeagullVisible";
children[383] = ROUTE1191;

ROUTE ROUTE1192 = createNode("ROUTE");
ROUTE1192.fromNode = "fishVisible";
ROUTE1192.fromField = "enterTime";
ROUTE1192.toNode = "TextDisplay";
ROUTE1192.toField = "fishVisible";
children[384] = ROUTE1192;

ROUTE ROUTE1193 = createNode("ROUTE");
ROUTE1193.fromNode = "fishSwimVisible";
ROUTE1193.fromField = "enterTime";
ROUTE1193.toNode = "TextDisplay";
ROUTE1193.toField = "fishSwimVisible";
children[385] = ROUTE1193;

ROUTE ROUTE1194 = createNode("ROUTE");
ROUTE1194.fromNode = "surferVisible";
ROUTE1194.fromField = "enterTime";
ROUTE1194.toNode = "TextDisplay";
ROUTE1194.toField = "surferVisible";
children[386] = ROUTE1194;

ROUTE ROUTE1195 = createNode("ROUTE");
ROUTE1195.fromNode = "surfer2Visible";
ROUTE1195.fromField = "enterTime";
ROUTE1195.toNode = "TextDisplay";
ROUTE1195.toField = "surfer2Visible";
children[387] = ROUTE1195;

ROUTE ROUTE1196 = createNode("ROUTE");
ROUTE1196.fromNode = "tuberVisible";
ROUTE1196.fromField = "enterTime";
ROUTE1196.toNode = "TextDisplay";
ROUTE1196.toField = "tuberVisible";
children[388] = ROUTE1196;

ROUTE ROUTE1197 = createNode("ROUTE");
ROUTE1197.fromNode = "tuber2Visible";
ROUTE1197.fromField = "enterTime";
ROUTE1197.toNode = "TextDisplay";
ROUTE1197.toField = "tuber2Visible";
children[389] = ROUTE1197;

ROUTE ROUTE1198 = createNode("ROUTE");
ROUTE1198.fromNode = "skeletonVisible";
ROUTE1198.fromField = "enterTime";
ROUTE1198.toNode = "TextDisplay";
ROUTE1198.toField = "skeletonVisible";
children[390] = ROUTE1198;

ROUTE ROUTE1199 = createNode("ROUTE");
ROUTE1199.fromNode = "SeeEnd";
ROUTE1199.fromField = "enterTime";
ROUTE1199.toNode = "TextDisplay";
ROUTE1199.toField = "endVisible";
children[391] = ROUTE1199;

ROUTE ROUTE1200 = createNode("ROUTE");
ROUTE1200.fromNode = "SharkBoomTimer";
ROUTE1200.fromField = "isActive";
ROUTE1200.toNode = "BoomScript";
ROUTE1200.toField = "startBoom";
children[392] = ROUTE1200;

ROUTE ROUTE1201 = createNode("ROUTE");
ROUTE1201.fromNode = "BoomScript";
ROUTE1201.fromField = "playBoom";
ROUTE1201.toNode = "boomSound";
ROUTE1201.toField = "set_startTime";
children[393] = ROUTE1201;

ROUTE ROUTE1202 = createNode("ROUTE");
ROUTE1202.fromNode = "JumpToEnd";
ROUTE1202.fromField = "endGame";
ROUTE1202.toNode = "KillShark";
ROUTE1202.toField = "Kill";
children[394] = ROUTE1202;

ROUTE ROUTE1203 = createNode("ROUTE");
ROUTE1203.fromNode = "JumpToEnd";
ROUTE1203.fromField = "endGame2";
ROUTE1203.toNode = "KillShark";
ROUTE1203.toField = "canyonEnd";
children[395] = ROUTE1203;

ROUTE ROUTE1204 = createNode("ROUTE");
ROUTE1204.fromNode = "eyeClick";
ROUTE1204.fromField = "touchTime";
ROUTE1204.toNode = "JumpToEnd";
ROUTE1204.toField = "eyeClick";
children[396] = ROUTE1204;

ROUTE ROUTE1205 = createNode("ROUTE");
ROUTE1205.fromNode = "eyeClick2";
ROUTE1205.fromField = "touchTime";
ROUTE1205.toNode = "JumpToEnd";
ROUTE1205.toField = "eyeClick2";
children[397] = ROUTE1205;

ROUTE ROUTE1206 = createNode("ROUTE");
ROUTE1206.fromNode = "EatTimer";
ROUTE1206.fromField = "isActive";
ROUTE1206.toNode = "SharkSwim";
ROUTE1206.toField = "testEnd";
children[398] = ROUTE1206;

ROUTE ROUTE1207 = createNode("ROUTE");
ROUTE1207.fromNode = "SeeEnd";
ROUTE1207.fromField = "isActive";
ROUTE1207.toNode = "KillShark";
ROUTE1207.toField = "canyonEnd";
children[399] = ROUTE1207;

ROUTE ROUTE1208 = createNode("ROUTE");
ROUTE1208.fromNode = "SharkSwim";
ROUTE1208.fromField = "killTrigger";
ROUTE1208.toNode = "KillShark";
ROUTE1208.toField = "Kill";
children[400] = ROUTE1208;

ROUTE ROUTE1209 = createNode("ROUTE");
ROUTE1209.fromNode = "KillShark";
ROUTE1209.fromField = "startDeath";
ROUTE1209.toNode = "SharkDeathTimer";
ROUTE1209.toField = "set_startTime";
children[401] = ROUTE1209;

ROUTE ROUTE1210 = createNode("ROUTE");
ROUTE1210.fromNode = "KillShark";
ROUTE1210.fromField = "startDeath";
ROUTE1210.toNode = "SharkBoomTimer";
ROUTE1210.toField = "set_startTime";
children[402] = ROUTE1210;

ROUTE ROUTE1211 = createNode("ROUTE");
ROUTE1211.fromNode = "KillShark";
ROUTE1211.fromField = "startDeath";
ROUTE1211.toNode = "FishBurpTimer";
ROUTE1211.toField = "set_startTime";
children[403] = ROUTE1211;

ROUTE ROUTE1212 = createNode("ROUTE");
ROUTE1212.fromNode = "KillShark";
ROUTE1212.fromField = "startDeath";
ROUTE1212.toNode = "burpSound";
ROUTE1212.toField = "set_startTime";
children[404] = ROUTE1212;

ROUTE ROUTE1213 = createNode("ROUTE");
ROUTE1213.fromNode = "KillShark";
ROUTE1213.fromField = "burp";
ROUTE1213.toNode = "burpSound";
ROUTE1213.toField = "set_startTime";
children[405] = ROUTE1213;

ROUTE ROUTE1214 = createNode("ROUTE");
ROUTE1214.fromNode = "SharkDeathTimer";
ROUTE1214.fromField = "isActive";
ROUTE1214.toNode = "KillShark";
ROUTE1214.toField = "deathAnimation";
children[406] = ROUTE1214;

ROUTE ROUTE1215 = createNode("ROUTE");
ROUTE1215.fromNode = "FishBurpTimer";
ROUTE1215.fromField = "isActive";
ROUTE1215.toNode = "KillShark";
ROUTE1215.toField = "fishBurp";
children[407] = ROUTE1215;

ROUTE ROUTE1216 = createNode("ROUTE");
ROUTE1216.fromNode = "KillShark";
ROUTE1216.fromField = "startFade";
ROUTE1216.toNode = "FadeTimer";
ROUTE1216.toField = "set_startTime";
children[408] = ROUTE1216;

ROUTE ROUTE1217 = createNode("ROUTE");
ROUTE1217.fromNode = "FadeColorInterp";
ROUTE1217.fromField = "value_changed";
ROUTE1217.toNode = "KillShark";
ROUTE1217.toField = "inputSkyColor";
children[409] = ROUTE1217;

ROUTE ROUTE1218 = createNode("ROUTE");
ROUTE1218.fromNode = "KillShark";
ROUTE1218.fromField = "outputSkyColor";
ROUTE1218.toNode = "Background01";
ROUTE1218.toField = "set_skyColor";
children[410] = ROUTE1218;

ROUTE ROUTE1219 = createNode("ROUTE");
ROUTE1219.fromNode = "FadeTimer";
ROUTE1219.fromField = "isActive";
ROUTE1219.toNode = "KillShark";
ROUTE1219.toField = "fadeDone";
children[411] = ROUTE1219;

ROUTE ROUTE1220 = createNode("ROUTE");
ROUTE1220.fromNode = "KillShark";
ROUTE1220.fromField = "navInfoControl";
ROUTE1220.toNode = "NavInfo01";
ROUTE1220.toField = "set_type";
children[412] = ROUTE1220;

ROUTE ROUTE1221 = createNode("ROUTE");
ROUTE1221.fromNode = "WorldProx";
ROUTE1221.fromField = "orientation_changed";
ROUTE1221.toNode = "SurferCollisionSpinner";
ROUTE1221.toField = "set_rotation";
children[413] = ROUTE1221;

ROUTE ROUTE1222 = createNode("ROUTE");
ROUTE1222.fromNode = "WorldProx";
ROUTE1222.fromField = "orientation_changed";
ROUTE1222.toNode = "Surfer2CollisionSpinner";
ROUTE1222.toField = "set_rotation";
children[414] = ROUTE1222;

ROUTE ROUTE1223 = createNode("ROUTE");
ROUTE1223.fromNode = "WorldProx";
ROUTE1223.fromField = "orientation_changed";
ROUTE1223.toNode = "TuberCollisionSpinner";
ROUTE1223.toField = "set_rotation";
children[415] = ROUTE1223;

ROUTE ROUTE1224 = createNode("ROUTE");
ROUTE1224.fromNode = "WorldProx";
ROUTE1224.fromField = "orientation_changed";
ROUTE1224.toNode = "Tuber2CollisionSpinner";
ROUTE1224.toField = "set_rotation";
children[416] = ROUTE1224;

ROUTE ROUTE1225 = createNode("ROUTE");
ROUTE1225.fromNode = "WorldProx";
ROUTE1225.fromField = "orientation_changed";
ROUTE1225.toNode = "SittingSeagullCollisionSpinner";
ROUTE1225.toField = "set_rotation";
children[417] = ROUTE1225;

ROUTE ROUTE1226 = createNode("ROUTE");
ROUTE1226.fromNode = "WorldProx";
ROUTE1226.fromField = "orientation_changed";
ROUTE1226.toNode = "SeagullCollisionSpinner";
ROUTE1226.toField = "set_rotation";
children[418] = ROUTE1226;

ROUTE ROUTE1227 = createNode("ROUTE");
ROUTE1227.fromNode = "Inline_Gullswim-ROOT";
ROUTE1227.fromField = "translation_changed";
ROUTE1227.toNode = "SeagullCollisionMover";
ROUTE1227.toField = "set_translation";
children[419] = ROUTE1227;

ROUTE ROUTE1228 = createNode("ROUTE");
ROUTE1228.fromNode = "WorldProx";
ROUTE1228.fromField = "orientation_changed";
ROUTE1228.toNode = "FishSwimCollisionSpinner";
ROUTE1228.toField = "set_rotation";
children[420] = ROUTE1228;

ROUTE ROUTE1229 = createNode("ROUTE");
ROUTE1229.fromNode = "Inline_Fishswim-ROOT";
ROUTE1229.fromField = "translation_changed";
ROUTE1229.toNode = "FishSwimCollisionMover";
ROUTE1229.toField = "set_translation";
children[421] = ROUTE1229;

ROUTE ROUTE1230 = createNode("ROUTE");
ROUTE1230.fromNode = "WorldProx";
ROUTE1230.fromField = "orientation_changed";
ROUTE1230.toNode = "FishCollisionSpinner";
ROUTE1230.toField = "set_rotation";
children[422] = ROUTE1230;

ROUTE ROUTE1231 = createNode("ROUTE");
ROUTE1231.fromNode = "Inline_Fishbott-ROOT";
ROUTE1231.fromField = "translation_changed";
ROUTE1231.toNode = "FishCollisionMover";
ROUTE1231.toField = "set_translation";
children[423] = ROUTE1231;

ROUTE ROUTE1232 = createNode("ROUTE");
ROUTE1232.fromNode = "WorldProx";
ROUTE1232.fromField = "position_changed";
ROUTE1232.toNode = "SharkSwim";
ROUTE1232.toField = "position_changed";
children[424] = ROUTE1232;

ROUTE ROUTE1233 = createNode("ROUTE");
ROUTE1233.fromNode = "TimeSensor01-TIMER";
ROUTE1233.fromField = "fraction_changed";
ROUTE1233.toNode = "SharkSwim";
ROUTE1233.toField = "time";
children[425] = ROUTE1233;

ROUTE ROUTE1234 = createNode("ROUTE");
ROUTE1234.fromNode = "WorldProx";
ROUTE1234.fromField = "position_changed";
ROUTE1234.toNode = "SharkHead";
ROUTE1234.toField = "set_translation";
children[426] = ROUTE1234;

ROUTE ROUTE1235 = createNode("ROUTE");
ROUTE1235.fromNode = "WorldProx";
ROUTE1235.fromField = "orientation_changed";
ROUTE1235.toNode = "SharkHead";
ROUTE1235.toField = "set_rotation";
children[427] = ROUTE1235;

ROUTE ROUTE1236 = createNode("ROUTE");
ROUTE1236.fromNode = "Shark-TIMER";
ROUTE1236.fromField = "fraction_changed";
ROUTE1236.toNode = "Shark-POS-INTERP";
ROUTE1236.toField = "set_fraction";
children[428] = ROUTE1236;

ROUTE ROUTE1237 = createNode("ROUTE");
ROUTE1237.fromNode = "Shark-POS-INTERP";
ROUTE1237.fromField = "value_changed";
ROUTE1237.toNode = "Shark-ROOT";
ROUTE1237.toField = "set_translation";
children[429] = ROUTE1237;

ROUTE ROUTE1238 = createNode("ROUTE");
ROUTE1238.fromNode = "SharkSwim";
ROUTE1238.fromField = "animation_timer";
ROUTE1238.toNode = "TimeSensor01-SCRIPT";
ROUTE1238.toField = "fractionIn";
children[430] = ROUTE1238;

ROUTE ROUTE1239 = createNode("ROUTE");
ROUTE1239.fromNode = "TimeSensor01-SCRIPT";
ROUTE1239.fromField = "fractionOut";
ROUTE1239.toNode = "Shark-POS-INTERP";
ROUTE1239.toField = "set_fraction";
children[431] = ROUTE1239;

ROUTE ROUTE1240 = createNode("ROUTE");
ROUTE1240.fromNode = "Shark-TIMER";
ROUTE1240.fromField = "fraction_changed";
ROUTE1240.toNode = "Shark-ROT-INTERP";
ROUTE1240.toField = "set_fraction";
children[432] = ROUTE1240;

ROUTE ROUTE1241 = createNode("ROUTE");
ROUTE1241.fromNode = "Shark-ROT-INTERP";
ROUTE1241.fromField = "value_changed";
ROUTE1241.toNode = "Shark-ROOT";
ROUTE1241.toField = "set_rotation";
children[433] = ROUTE1241;

ROUTE ROUTE1242 = createNode("ROUTE");
ROUTE1242.fromNode = "TimeSensor01-SCRIPT";
ROUTE1242.fromField = "fractionOut";
ROUTE1242.toNode = "Shark-ROT-INTERP";
ROUTE1242.toField = "set_fraction";
children[434] = ROUTE1242;

ROUTE ROUTE1243 = createNode("ROUTE");
ROUTE1243.fromNode = "TimeSensor02-TIMER";
ROUTE1243.fromField = "fraction_changed";
ROUTE1243.toNode = "Shark_Gill_L01-SCALE-INTERP";
ROUTE1243.toField = "set_fraction";
children[435] = ROUTE1243;

ROUTE ROUTE1244 = createNode("ROUTE");
ROUTE1244.fromNode = "Shark_Gill_L01-SCALE-INTERP";
ROUTE1244.fromField = "value_changed";
ROUTE1244.toNode = "Shark_Gill_L01-ROOT";
ROUTE1244.toField = "set_scale";
children[436] = ROUTE1244;

ROUTE ROUTE1245 = createNode("ROUTE");
ROUTE1245.fromNode = "TimeSensor02-TIMER";
ROUTE1245.fromField = "fraction_changed";
ROUTE1245.toNode = "Shark_Gill_L03-SCALE-INTERP";
ROUTE1245.toField = "set_fraction";
children[437] = ROUTE1245;

ROUTE ROUTE1246 = createNode("ROUTE");
ROUTE1246.fromNode = "Shark_Gill_L03-SCALE-INTERP";
ROUTE1246.fromField = "value_changed";
ROUTE1246.toNode = "Shark_Gill_L03-ROOT";
ROUTE1246.toField = "set_scale";
children[438] = ROUTE1246;

ROUTE ROUTE1247 = createNode("ROUTE");
ROUTE1247.fromNode = "TimeSensor02-TIMER";
ROUTE1247.fromField = "fraction_changed";
ROUTE1247.toNode = "Shark_Gill_R02-SCALE-INTERP";
ROUTE1247.toField = "set_fraction";
children[439] = ROUTE1247;

ROUTE ROUTE1248 = createNode("ROUTE");
ROUTE1248.fromNode = "Shark_Gill_R02-SCALE-INTERP";
ROUTE1248.fromField = "value_changed";
ROUTE1248.toNode = "Shark_Gill_R02-ROOT";
ROUTE1248.toField = "set_scale";
children[440] = ROUTE1248;

ROUTE ROUTE1249 = createNode("ROUTE");
ROUTE1249.fromNode = "TimeSensor02-TIMER";
ROUTE1249.fromField = "fraction_changed";
ROUTE1249.toNode = "Shark_Gill_R01-SCALE-INTERP";
ROUTE1249.toField = "set_fraction";
children[441] = ROUTE1249;

ROUTE ROUTE1250 = createNode("ROUTE");
ROUTE1250.fromNode = "Shark_Gill_R01-SCALE-INTERP";
ROUTE1250.fromField = "value_changed";
ROUTE1250.toNode = "Shark_Gill_R01-ROOT";
ROUTE1250.toField = "set_scale";
children[442] = ROUTE1250;

ROUTE ROUTE1251 = createNode("ROUTE");
ROUTE1251.fromNode = "TimeSensor02-TIMER";
ROUTE1251.fromField = "fraction_changed";
ROUTE1251.toNode = "Shark_Gill_R03-SCALE-INTERP";
ROUTE1251.toField = "set_fraction";
children[443] = ROUTE1251;

ROUTE ROUTE1252 = createNode("ROUTE");
ROUTE1252.fromNode = "Shark_Gill_R03-SCALE-INTERP";
ROUTE1252.fromField = "value_changed";
ROUTE1252.toNode = "Shark_Gill_R03-ROOT";
ROUTE1252.toField = "set_scale";
children[444] = ROUTE1252;

ROUTE ROUTE1253 = createNode("ROUTE");
ROUTE1253.fromNode = "TimeSensor02-TIMER";
ROUTE1253.fromField = "fraction_changed";
ROUTE1253.toNode = "Shark_Gill_L02-SCALE-INTERP";
ROUTE1253.toField = "set_fraction";
children[445] = ROUTE1253;

ROUTE ROUTE1254 = createNode("ROUTE");
ROUTE1254.fromNode = "Shark_Gill_L02-SCALE-INTERP";
ROUTE1254.fromField = "value_changed";
ROUTE1254.toNode = "Shark_Gill_L02-ROOT";
ROUTE1254.toField = "set_scale";
children[446] = ROUTE1254;

ROUTE ROUTE1255 = createNode("ROUTE");
ROUTE1255.fromNode = "EatSeagull";
ROUTE1255.fromField = "enterTime";
ROUTE1255.toNode = "EatTimer";
ROUTE1255.toField = "set_startTime";
children[447] = ROUTE1255;

ROUTE ROUTE1256 = createNode("ROUTE");
ROUTE1256.fromNode = "EatSeagull";
ROUTE1256.fromField = "enterTime";
ROUTE1256.toNode = "TimeSensor_gullswim-TIMER";
ROUTE1256.toField = "set_stopTime";
children[448] = ROUTE1256;

ROUTE ROUTE1257 = createNode("ROUTE");
ROUTE1257.fromNode = "EatSeagull";
ROUTE1257.fromField = "enterTime";
ROUTE1257.toNode = "SharkSwim";
ROUTE1257.toField = "eatingSeagull";
children[449] = ROUTE1257;

ROUTE ROUTE1258 = createNode("ROUTE");
ROUTE1258.fromNode = "EatFishSwim";
ROUTE1258.fromField = "enterTime";
ROUTE1258.toNode = "EatTimer";
ROUTE1258.toField = "set_startTime";
children[450] = ROUTE1258;

ROUTE ROUTE1259 = createNode("ROUTE");
ROUTE1259.fromNode = "EatFishSwim";
ROUTE1259.fromField = "enterTime";
ROUTE1259.toNode = "TimeSensor_Fishswim-TIMER";
ROUTE1259.toField = "set_stopTime";
children[451] = ROUTE1259;

ROUTE ROUTE1260 = createNode("ROUTE");
ROUTE1260.fromNode = "EatFishSwim";
ROUTE1260.fromField = "enterTime";
ROUTE1260.toNode = "SharkSwim";
ROUTE1260.toField = "eatingFishSwim";
children[452] = ROUTE1260;

ROUTE ROUTE1261 = createNode("ROUTE");
ROUTE1261.fromNode = "EatFish";
ROUTE1261.fromField = "enterTime";
ROUTE1261.toNode = "EatTimer";
ROUTE1261.toField = "set_startTime";
children[453] = ROUTE1261;

ROUTE ROUTE1262 = createNode("ROUTE");
ROUTE1262.fromNode = "EatFish";
ROUTE1262.fromField = "enterTime";
ROUTE1262.toNode = "TimeSensor_Fishbott-TIMER";
ROUTE1262.toField = "set_stopTime";
children[454] = ROUTE1262;

ROUTE ROUTE1263 = createNode("ROUTE");
ROUTE1263.fromNode = "EatFish";
ROUTE1263.fromField = "enterTime";
ROUTE1263.toNode = "SharkSwim";
ROUTE1263.toField = "eatingFish";
children[455] = ROUTE1263;

ROUTE ROUTE1264 = createNode("ROUTE");
ROUTE1264.fromNode = "EatSittingSeagull";
ROUTE1264.fromField = "enterTime";
ROUTE1264.toNode = "EatTimer";
ROUTE1264.toField = "set_startTime";
children[456] = ROUTE1264;

ROUTE ROUTE1265 = createNode("ROUTE");
ROUTE1265.fromNode = "EatSittingSeagull";
ROUTE1265.fromField = "enterTime";
ROUTE1265.toNode = "SharkSwim";
ROUTE1265.toField = "eatingSittingSeagull";
children[457] = ROUTE1265;

ROUTE ROUTE1266 = createNode("ROUTE");
ROUTE1266.fromNode = "EatSurfer";
ROUTE1266.fromField = "enterTime";
ROUTE1266.toNode = "EatTimer";
ROUTE1266.toField = "set_startTime";
children[458] = ROUTE1266;

ROUTE ROUTE1267 = createNode("ROUTE");
ROUTE1267.fromNode = "EatSurfer";
ROUTE1267.fromField = "enterTime";
ROUTE1267.toNode = "SharkSwim";
ROUTE1267.toField = "eatingSurfer";
children[459] = ROUTE1267;

ROUTE ROUTE1268 = createNode("ROUTE");
ROUTE1268.fromNode = "EatSurfer2";
ROUTE1268.fromField = "enterTime";
ROUTE1268.toNode = "EatTimer";
ROUTE1268.toField = "set_startTime";
children[460] = ROUTE1268;

ROUTE ROUTE1269 = createNode("ROUTE");
ROUTE1269.fromNode = "EatSurfer2";
ROUTE1269.fromField = "enterTime";
ROUTE1269.toNode = "SharkSwim";
ROUTE1269.toField = "eatingSurfer2";
children[461] = ROUTE1269;

ROUTE ROUTE1270 = createNode("ROUTE");
ROUTE1270.fromNode = "EatTuber";
ROUTE1270.fromField = "enterTime";
ROUTE1270.toNode = "EatTimer";
ROUTE1270.toField = "set_startTime";
children[462] = ROUTE1270;

ROUTE ROUTE1271 = createNode("ROUTE");
ROUTE1271.fromNode = "EatTuber";
ROUTE1271.fromField = "enterTime";
ROUTE1271.toNode = "SharkSwim";
ROUTE1271.toField = "eatingTuber";
children[463] = ROUTE1271;

ROUTE ROUTE1272 = createNode("ROUTE");
ROUTE1272.fromNode = "EatTuber2";
ROUTE1272.fromField = "enterTime";
ROUTE1272.toNode = "EatTimer";
ROUTE1272.toField = "set_startTime";
children[464] = ROUTE1272;

ROUTE ROUTE1273 = createNode("ROUTE");
ROUTE1273.fromNode = "EatTuber2";
ROUTE1273.fromField = "enterTime";
ROUTE1273.toNode = "SharkSwim";
ROUTE1273.toField = "eatingTuber2";
children[465] = ROUTE1273;

ROUTE ROUTE1274 = createNode("ROUTE");
ROUTE1274.fromNode = "SharkSwim";
ROUTE1274.fromField = "seagullSwitcher";
ROUTE1274.toNode = "Seagull";
ROUTE1274.toField = "set_whichChoice";
children[466] = ROUTE1274;

ROUTE ROUTE1275 = createNode("ROUTE");
ROUTE1275.fromNode = "SharkSwim";
ROUTE1275.fromField = "fishSwimSwitcher";
ROUTE1275.toNode = "FishSwim";
ROUTE1275.toField = "set_whichChoice";
children[467] = ROUTE1275;

ROUTE ROUTE1276 = createNode("ROUTE");
ROUTE1276.fromNode = "SharkSwim";
ROUTE1276.fromField = "fishSwitcher";
ROUTE1276.toNode = "Fish";
ROUTE1276.toField = "set_whichChoice";
children[468] = ROUTE1276;

ROUTE ROUTE1277 = createNode("ROUTE");
ROUTE1277.fromNode = "SharkSwim";
ROUTE1277.fromField = "sittingSeagullSwitcher";
ROUTE1277.toNode = "SittingSeagull";
ROUTE1277.toField = "set_whichChoice";
children[469] = ROUTE1277;

ROUTE ROUTE1278 = createNode("ROUTE");
ROUTE1278.fromNode = "SharkSwim";
ROUTE1278.fromField = "surferSwitcher";
ROUTE1278.toNode = "Surfer";
ROUTE1278.toField = "set_whichChoice";
children[470] = ROUTE1278;

ROUTE ROUTE1279 = createNode("ROUTE");
ROUTE1279.fromNode = "SharkSwim";
ROUTE1279.fromField = "surfer2Switcher";
ROUTE1279.toNode = "Surfer2";
ROUTE1279.toField = "set_whichChoice";
children[471] = ROUTE1279;

ROUTE ROUTE1280 = createNode("ROUTE");
ROUTE1280.fromNode = "SharkSwim";
ROUTE1280.fromField = "tuberSwitcher";
ROUTE1280.toNode = "Tuber";
ROUTE1280.toField = "set_whichChoice";
children[472] = ROUTE1280;

ROUTE ROUTE1281 = createNode("ROUTE");
ROUTE1281.fromNode = "SharkSwim";
ROUTE1281.fromField = "tuber2Switcher";
ROUTE1281.toNode = "Tuber2";
ROUTE1281.toField = "set_whichChoice";
children[473] = ROUTE1281;

ROUTE ROUTE1282 = createNode("ROUTE");
ROUTE1282.fromNode = "SharkSwim";
ROUTE1282.fromField = "playChompSound";
ROUTE1282.toNode = "chompSound";
ROUTE1282.toField = "set_startTime";
children[474] = ROUTE1282;

ROUTE ROUTE1283 = createNode("ROUTE");
ROUTE1283.fromNode = "EatTimer";
ROUTE1283.fromField = "isActive";
ROUTE1283.toNode = "SharkSwim";
ROUTE1283.toField = "doneEating";
children[475] = ROUTE1283;

ROUTE ROUTE1284 = createNode("ROUTE");
ROUTE1284.fromNode = "KillTimer";
ROUTE1284.fromField = "isActive";
ROUTE1284.toNode = "SharkSwim";
ROUTE1284.toField = "killObject";
children[476] = ROUTE1284;

ROUTE ROUTE1285 = createNode("ROUTE");
ROUTE1285.fromNode = "SharkEat-POS-INTERP";
ROUTE1285.fromField = "value_changed";
ROUTE1285.toNode = "Shark-ROOT";
ROUTE1285.toField = "set_translation";
children[477] = ROUTE1285;

ROUTE ROUTE1286 = createNode("ROUTE");
ROUTE1286.fromNode = "EatTimer";
ROUTE1286.fromField = "fraction_changed";
ROUTE1286.toNode = "SharkEat-POS-INTERP";
ROUTE1286.toField = "set_fraction";
children[478] = ROUTE1286;

ROUTE ROUTE1287 = createNode("ROUTE");
ROUTE1287.fromNode = "SharkEat-ROT-INTERP";
ROUTE1287.fromField = "value_changed";
ROUTE1287.toNode = "Shark-ROOT";
ROUTE1287.toField = "set_rotation";
children[479] = ROUTE1287;

ROUTE ROUTE1288 = createNode("ROUTE");
ROUTE1288.fromNode = "EatTimer";
ROUTE1288.fromField = "fraction_changed";
ROUTE1288.toNode = "SharkEat-ROT-INTERP";
ROUTE1288.toField = "set_fraction";
children[480] = ROUTE1288;

ROUTE ROUTE1289 = createNode("ROUTE");
ROUTE1289.fromNode = "SharkEat-SCALE-INTERP";
ROUTE1289.fromField = "value_changed";
ROUTE1289.toNode = "Shark-ROOT";
ROUTE1289.toField = "set_scale";
children[481] = ROUTE1289;

ROUTE ROUTE1290 = createNode("ROUTE");
ROUTE1290.fromNode = "EatTimer";
ROUTE1290.fromField = "fraction_changed";
ROUTE1290.toNode = "SharkEat-SCALE-INTERP";
ROUTE1290.toField = "set_fraction";
children[482] = ROUTE1290;

ROUTE ROUTE1291 = createNode("ROUTE");
ROUTE1291.fromNode = "SharkEat_Eyeball_R-POS-INTERP";
ROUTE1291.fromField = "value_changed";
ROUTE1291.toNode = "Shark_Eyeball_R-ROOT";
ROUTE1291.toField = "set_translation";
children[483] = ROUTE1291;

ROUTE ROUTE1292 = createNode("ROUTE");
ROUTE1292.fromNode = "EatTimer";
ROUTE1292.fromField = "fraction_changed";
ROUTE1292.toNode = "SharkEat_Eyeball_R-POS-INTERP";
ROUTE1292.toField = "set_fraction";
children[484] = ROUTE1292;

ROUTE ROUTE1293 = createNode("ROUTE");
ROUTE1293.fromNode = "SharkEat_Eyeball_R-ROT-INTERP";
ROUTE1293.fromField = "value_changed";
ROUTE1293.toNode = "Shark_Eyeball_R-ROOT";
ROUTE1293.toField = "set_rotation";
children[485] = ROUTE1293;

ROUTE ROUTE1294 = createNode("ROUTE");
ROUTE1294.fromNode = "EatTimer";
ROUTE1294.fromField = "fraction_changed";
ROUTE1294.toNode = "SharkEat_Eyeball_R-ROT-INTERP";
ROUTE1294.toField = "set_fraction";
children[486] = ROUTE1294;

ROUTE ROUTE1295 = createNode("ROUTE");
ROUTE1295.fromNode = "SharkEat_Eyeball_L-POS-INTERP";
ROUTE1295.fromField = "value_changed";
ROUTE1295.toNode = "Shark_Eyeball_L-ROOT";
ROUTE1295.toField = "set_translation";
children[487] = ROUTE1295;

ROUTE ROUTE1296 = createNode("ROUTE");
ROUTE1296.fromNode = "EatTimer";
ROUTE1296.fromField = "fraction_changed";
ROUTE1296.toNode = "SharkEat_Eyeball_L-POS-INTERP";
ROUTE1296.toField = "set_fraction";
children[488] = ROUTE1296;

ROUTE ROUTE1297 = createNode("ROUTE");
ROUTE1297.fromNode = "SharkEat_Eyeball_L-ROT-INTERP";
ROUTE1297.fromField = "value_changed";
ROUTE1297.toNode = "Shark_Eyeball_L-ROOT";
ROUTE1297.toField = "set_rotation";
children[489] = ROUTE1297;

ROUTE ROUTE1298 = createNode("ROUTE");
ROUTE1298.fromNode = "EatTimer";
ROUTE1298.fromField = "fraction_changed";
ROUTE1298.toNode = "SharkEat_Eyeball_L-ROT-INTERP";
ROUTE1298.toField = "set_fraction";
children[490] = ROUTE1298;

ROUTE ROUTE1299 = createNode("ROUTE");
ROUTE1299.fromNode = "burp-TIMER";
ROUTE1299.fromField = "fraction_changed";
ROUTE1299.toNode = "burp-POS-INTERP";
ROUTE1299.toField = "set_fraction";
children[491] = ROUTE1299;

ROUTE ROUTE1300 = createNode("ROUTE");
ROUTE1300.fromNode = "burp-POS-INTERP";
ROUTE1300.fromField = "value_changed";
ROUTE1300.toNode = "burp-ROOT";
ROUTE1300.toField = "set_translation";
children[492] = ROUTE1300;

ROUTE ROUTE1301 = createNode("ROUTE");
ROUTE1301.fromNode = "SharkDeathTimer";
ROUTE1301.fromField = "fraction_changed";
ROUTE1301.toNode = "burp-POS-INTERP";
ROUTE1301.toField = "set_fraction";
children[493] = ROUTE1301;

ROUTE ROUTE1302 = createNode("ROUTE");
ROUTE1302.fromNode = "SharkDeath-POS-INTERP";
ROUTE1302.fromField = "value_changed";
ROUTE1302.toNode = "Shark-ROOT";
ROUTE1302.toField = "set_translation";
children[494] = ROUTE1302;

ROUTE ROUTE1303 = createNode("ROUTE");
ROUTE1303.fromNode = "SharkDeathTimer";
ROUTE1303.fromField = "fraction_changed";
ROUTE1303.toNode = "SharkDeath-POS-INTERP";
ROUTE1303.toField = "set_fraction";
children[495] = ROUTE1303;

ROUTE ROUTE1304 = createNode("ROUTE");
ROUTE1304.fromNode = "SharkDeath-ROT-INTERP";
ROUTE1304.fromField = "value_changed";
ROUTE1304.toNode = "Shark-ROOT";
ROUTE1304.toField = "set_rotation";
children[496] = ROUTE1304;

ROUTE ROUTE1305 = createNode("ROUTE");
ROUTE1305.fromNode = "SharkDeathTimer";
ROUTE1305.fromField = "fraction_changed";
ROUTE1305.toNode = "SharkDeath-ROT-INTERP";
ROUTE1305.toField = "set_fraction";
children[497] = ROUTE1305;

ROUTE ROUTE1306 = createNode("ROUTE");
ROUTE1306.fromNode = "SharkDeath-SCALE-INTERP";
ROUTE1306.fromField = "value_changed";
ROUTE1306.toNode = "Shark-ROOT";
ROUTE1306.toField = "set_scale";
children[498] = ROUTE1306;

ROUTE ROUTE1307 = createNode("ROUTE");
ROUTE1307.fromNode = "SharkDeathTimer";
ROUTE1307.fromField = "fraction_changed";
ROUTE1307.toNode = "SharkDeath-SCALE-INTERP";
ROUTE1307.toField = "set_fraction";
children[499] = ROUTE1307;

ROUTE ROUTE1308 = createNode("ROUTE");
ROUTE1308.fromNode = "SharkDeath_Eyeball_R-POS-INTERP";
ROUTE1308.fromField = "value_changed";
ROUTE1308.toNode = "Shark_Eyeball_R-ROOT";
ROUTE1308.toField = "set_translation";
children[500] = ROUTE1308;

ROUTE ROUTE1309 = createNode("ROUTE");
ROUTE1309.fromNode = "SharkDeathTimer";
ROUTE1309.fromField = "fraction_changed";
ROUTE1309.toNode = "SharkDeath_Eyeball_R-POS-INTERP";
ROUTE1309.toField = "set_fraction";
children[501] = ROUTE1309;

ROUTE ROUTE1310 = createNode("ROUTE");
ROUTE1310.fromNode = "SharkDeath_Eyeball_R-ROT-INTERP";
ROUTE1310.fromField = "value_changed";
ROUTE1310.toNode = "Shark_Eyeball_R-ROOT";
ROUTE1310.toField = "set_rotation";
children[502] = ROUTE1310;

ROUTE ROUTE1311 = createNode("ROUTE");
ROUTE1311.fromNode = "SharkDeathTimer";
ROUTE1311.fromField = "fraction_changed";
ROUTE1311.toNode = "SharkDeath_Eyeball_R-ROT-INTERP";
ROUTE1311.toField = "set_fraction";
children[503] = ROUTE1311;

ROUTE ROUTE1312 = createNode("ROUTE");
ROUTE1312.fromNode = "SharkDeath_Eyeball_R-SCALE-INTERP";
ROUTE1312.fromField = "value_changed";
ROUTE1312.toNode = "Shark_Eyeball_R-ROOT";
ROUTE1312.toField = "set_scale";
children[504] = ROUTE1312;

ROUTE ROUTE1313 = createNode("ROUTE");
ROUTE1313.fromNode = "SharkDeathTimer";
ROUTE1313.fromField = "fraction_changed";
ROUTE1313.toNode = "SharkDeath_Eyeball_R-SCALE-INTERP";
ROUTE1313.toField = "set_fraction";
children[505] = ROUTE1313;

ROUTE ROUTE1314 = createNode("ROUTE");
ROUTE1314.fromNode = "SharkDeath_Eyeball_L-POS-INTERP";
ROUTE1314.fromField = "value_changed";
ROUTE1314.toNode = "Shark_Eyeball_L-ROOT";
ROUTE1314.toField = "set_translation";
children[506] = ROUTE1314;

ROUTE ROUTE1315 = createNode("ROUTE");
ROUTE1315.fromNode = "SharkDeathTimer";
ROUTE1315.fromField = "fraction_changed";
ROUTE1315.toNode = "SharkDeath_Eyeball_L-POS-INTERP";
ROUTE1315.toField = "set_fraction";
children[507] = ROUTE1315;

ROUTE ROUTE1316 = createNode("ROUTE");
ROUTE1316.fromNode = "SharkDeath_Eyeball_L-ROT-INTERP";
ROUTE1316.fromField = "value_changed";
ROUTE1316.toNode = "Shark_Eyeball_L-ROOT";
ROUTE1316.toField = "set_rotation";
children[508] = ROUTE1316;

ROUTE ROUTE1317 = createNode("ROUTE");
ROUTE1317.fromNode = "SharkDeathTimer";
ROUTE1317.fromField = "fraction_changed";
ROUTE1317.toNode = "SharkDeath_Eyeball_L-ROT-INTERP";
ROUTE1317.toField = "set_fraction";
children[509] = ROUTE1317;

ROUTE ROUTE1318 = createNode("ROUTE");
ROUTE1318.fromNode = "SharkDeath_Eyeball_L-SCALE-INTERP";
ROUTE1318.fromField = "value_changed";
ROUTE1318.toNode = "Shark_Eyeball_L-ROOT";
ROUTE1318.toField = "set_scale";
children[510] = ROUTE1318;

ROUTE ROUTE1319 = createNode("ROUTE");
ROUTE1319.fromNode = "SharkDeathTimer";
ROUTE1319.fromField = "fraction_changed";
ROUTE1319.toNode = "SharkDeath_Eyeball_L-SCALE-INTERP";
ROUTE1319.toField = "set_fraction";
children[511] = ROUTE1319;

ROUTE ROUTE1320 = createNode("ROUTE");
ROUTE1320.fromNode = "Dummy_SharkDeath_explode-POS-INTERP";
ROUTE1320.fromField = "value_changed";
ROUTE1320.toNode = "Dummy_SharkDeath_explode-ROOT";
ROUTE1320.toField = "set_translation";
children[512] = ROUTE1320;

ROUTE ROUTE1321 = createNode("ROUTE");
ROUTE1321.fromNode = "SharkDeathTimer";
ROUTE1321.fromField = "fraction_changed";
ROUTE1321.toNode = "Dummy_SharkDeath_explode-POS-INTERP";
ROUTE1321.toField = "set_fraction";
children[513] = ROUTE1321;

ROUTE ROUTE1322 = createNode("ROUTE");
ROUTE1322.fromNode = "SharkDeath_explode_Eyeball_L-POS-INTERP";
ROUTE1322.fromField = "value_changed";
ROUTE1322.toNode = "SharkDeath_explode_Eyeball_L-ROOT";
ROUTE1322.toField = "set_translation";
children[514] = ROUTE1322;

ROUTE ROUTE1323 = createNode("ROUTE");
ROUTE1323.fromNode = "SharkDeathTimer";
ROUTE1323.fromField = "fraction_changed";
ROUTE1323.toNode = "SharkDeath_explode_Eyeball_L-POS-INTERP";
ROUTE1323.toField = "set_fraction";
children[515] = ROUTE1323;

ROUTE ROUTE1324 = createNode("ROUTE");
ROUTE1324.fromNode = "SharkDeath_explode_Eyeball_R-POS-INTERP";
ROUTE1324.fromField = "value_changed";
ROUTE1324.toNode = "SharkDeath_explode_Eyeball_R-ROOT";
ROUTE1324.toField = "set_translation";
children[516] = ROUTE1324;

ROUTE ROUTE1325 = createNode("ROUTE");
ROUTE1325.fromNode = "SharkDeathTimer";
ROUTE1325.fromField = "fraction_changed";
ROUTE1325.toNode = "SharkDeath_explode_Eyeball_R-POS-INTERP";
ROUTE1325.toField = "set_fraction";
children[517] = ROUTE1325;

ROUTE ROUTE1326 = createNode("ROUTE");
ROUTE1326.fromNode = "SharkDeath_explode00-POS-INTERP";
ROUTE1326.fromField = "value_changed";
ROUTE1326.toNode = "SharkDeath_explode00-ROOT";
ROUTE1326.toField = "set_translation";
children[518] = ROUTE1326;

ROUTE ROUTE1327 = createNode("ROUTE");
ROUTE1327.fromNode = "SharkDeathTimer";
ROUTE1327.fromField = "fraction_changed";
ROUTE1327.toNode = "SharkDeath_explode00-POS-INTERP";
ROUTE1327.toField = "set_fraction";
children[519] = ROUTE1327;

ROUTE ROUTE1328 = createNode("ROUTE");
ROUTE1328.fromNode = "SharkDeath_explode01-POS-INTERP";
ROUTE1328.fromField = "value_changed";
ROUTE1328.toNode = "SharkDeath_explode01-ROOT";
ROUTE1328.toField = "set_translation";
children[520] = ROUTE1328;

ROUTE ROUTE1329 = createNode("ROUTE");
ROUTE1329.fromNode = "SharkDeathTimer";
ROUTE1329.fromField = "fraction_changed";
ROUTE1329.toNode = "SharkDeath_explode01-POS-INTERP";
ROUTE1329.toField = "set_fraction";
children[521] = ROUTE1329;

ROUTE ROUTE1330 = createNode("ROUTE");
ROUTE1330.fromNode = "SharkDeath_explode02-POS-INTERP";
ROUTE1330.fromField = "value_changed";
ROUTE1330.toNode = "SharkDeath_explode02-ROOT";
ROUTE1330.toField = "set_translation";
children[522] = ROUTE1330;

ROUTE ROUTE1331 = createNode("ROUTE");
ROUTE1331.fromNode = "SharkDeathTimer";
ROUTE1331.fromField = "fraction_changed";
ROUTE1331.toNode = "SharkDeath_explode02-POS-INTERP";
ROUTE1331.toField = "set_fraction";
children[523] = ROUTE1331;

ROUTE ROUTE1332 = createNode("ROUTE");
ROUTE1332.fromNode = "SharkDeath_explode02-ROT-INTERP";
ROUTE1332.fromField = "value_changed";
ROUTE1332.toNode = "SharkDeath_explode02-ROOT";
ROUTE1332.toField = "set_rotation";
children[524] = ROUTE1332;

ROUTE ROUTE1333 = createNode("ROUTE");
ROUTE1333.fromNode = "SharkDeathTimer";
ROUTE1333.fromField = "fraction_changed";
ROUTE1333.toNode = "SharkDeath_explode02-ROT-INTERP";
ROUTE1333.toField = "set_fraction";
children[525] = ROUTE1333;

ROUTE ROUTE1334 = createNode("ROUTE");
ROUTE1334.fromNode = "SharkDeath_explode02-SCALE-INTERP";
ROUTE1334.fromField = "value_changed";
ROUTE1334.toNode = "SharkDeath_explode02-ROOT";
ROUTE1334.toField = "set_scale";
children[526] = ROUTE1334;

ROUTE ROUTE1335 = createNode("ROUTE");
ROUTE1335.fromNode = "SharkDeathTimer";
ROUTE1335.fromField = "fraction_changed";
ROUTE1335.toNode = "SharkDeath_explode02-SCALE-INTERP";
ROUTE1335.toField = "set_fraction";
children[527] = ROUTE1335;

ROUTE ROUTE1336 = createNode("ROUTE");
ROUTE1336.fromNode = "SharkDeath_explode03-POS-INTERP";
ROUTE1336.fromField = "value_changed";
ROUTE1336.toNode = "SharkDeath_explode03-ROOT";
ROUTE1336.toField = "set_translation";
children[528] = ROUTE1336;

ROUTE ROUTE1337 = createNode("ROUTE");
ROUTE1337.fromNode = "SharkDeathTimer";
ROUTE1337.fromField = "fraction_changed";
ROUTE1337.toNode = "SharkDeath_explode03-POS-INTERP";
ROUTE1337.toField = "set_fraction";
children[529] = ROUTE1337;

ROUTE ROUTE1338 = createNode("ROUTE");
ROUTE1338.fromNode = "SharkDeath_explode03-ROT-INTERP";
ROUTE1338.fromField = "value_changed";
ROUTE1338.toNode = "SharkDeath_explode03-ROOT";
ROUTE1338.toField = "set_rotation";
children[530] = ROUTE1338;

ROUTE ROUTE1339 = createNode("ROUTE");
ROUTE1339.fromNode = "SharkDeathTimer";
ROUTE1339.fromField = "fraction_changed";
ROUTE1339.toNode = "SharkDeath_explode03-ROT-INTERP";
ROUTE1339.toField = "set_fraction";
children[531] = ROUTE1339;

ROUTE ROUTE1340 = createNode("ROUTE");
ROUTE1340.fromNode = "SharkDeath_explode03-SCALE-INTERP";
ROUTE1340.fromField = "value_changed";
ROUTE1340.toNode = "SharkDeath_explode03-ROOT";
ROUTE1340.toField = "set_scale";
children[532] = ROUTE1340;

ROUTE ROUTE1341 = createNode("ROUTE");
ROUTE1341.fromNode = "SharkDeathTimer";
ROUTE1341.fromField = "fraction_changed";
ROUTE1341.toNode = "SharkDeath_explode03-SCALE-INTERP";
ROUTE1341.toField = "set_fraction";
children[533] = ROUTE1341;

ROUTE ROUTE1342 = createNode("ROUTE");
ROUTE1342.fromNode = "SharkDeath_explode04-POS-INTERP";
ROUTE1342.fromField = "value_changed";
ROUTE1342.toNode = "SharkDeath_explode04-ROOT";
ROUTE1342.toField = "set_translation";
children[534] = ROUTE1342;

ROUTE ROUTE1343 = createNode("ROUTE");
ROUTE1343.fromNode = "SharkDeathTimer";
ROUTE1343.fromField = "fraction_changed";
ROUTE1343.toNode = "SharkDeath_explode04-POS-INTERP";
ROUTE1343.toField = "set_fraction";
children[535] = ROUTE1343;

ROUTE ROUTE1344 = createNode("ROUTE");
ROUTE1344.fromNode = "SharkDeath_explode04-SCALE-INTERP";
ROUTE1344.fromField = "value_changed";
ROUTE1344.toNode = "SharkDeath_explode04-ROOT";
ROUTE1344.toField = "set_scale";
children[536] = ROUTE1344;

ROUTE ROUTE1345 = createNode("ROUTE");
ROUTE1345.fromNode = "SharkDeathTimer";
ROUTE1345.fromField = "fraction_changed";
ROUTE1345.toNode = "SharkDeath_explode04-SCALE-INTERP";
ROUTE1345.toField = "set_fraction";
children[537] = ROUTE1345;

ROUTE ROUTE1346 = createNode("ROUTE");
ROUTE1346.fromNode = "SharkDeath_explode05-POS-INTERP";
ROUTE1346.fromField = "value_changed";
ROUTE1346.toNode = "SharkDeath_explode05-ROOT";
ROUTE1346.toField = "set_translation";
children[538] = ROUTE1346;

ROUTE ROUTE1347 = createNode("ROUTE");
ROUTE1347.fromNode = "SharkDeathTimer";
ROUTE1347.fromField = "fraction_changed";
ROUTE1347.toNode = "SharkDeath_explode05-POS-INTERP";
ROUTE1347.toField = "set_fraction";
children[539] = ROUTE1347;

ROUTE ROUTE1348 = createNode("ROUTE");
ROUTE1348.fromNode = "SharkDeath_explode06-POS-INTERP";
ROUTE1348.fromField = "value_changed";
ROUTE1348.toNode = "SharkDeath_explode06-ROOT";
ROUTE1348.toField = "set_translation";
children[540] = ROUTE1348;

ROUTE ROUTE1349 = createNode("ROUTE");
ROUTE1349.fromNode = "SharkDeathTimer";
ROUTE1349.fromField = "fraction_changed";
ROUTE1349.toNode = "SharkDeath_explode06-POS-INTERP";
ROUTE1349.toField = "set_fraction";
children[541] = ROUTE1349;

ROUTE ROUTE1350 = createNode("ROUTE");
ROUTE1350.fromNode = "SharkDeath_explode07-POS-INTERP";
ROUTE1350.fromField = "value_changed";
ROUTE1350.toNode = "SharkDeath_explode07-ROOT";
ROUTE1350.toField = "set_translation";
children[542] = ROUTE1350;

ROUTE ROUTE1351 = createNode("ROUTE");
ROUTE1351.fromNode = "SharkDeathTimer";
ROUTE1351.fromField = "fraction_changed";
ROUTE1351.toNode = "SharkDeath_explode07-POS-INTERP";
ROUTE1351.toField = "set_fraction";
children[543] = ROUTE1351;

ROUTE ROUTE1352 = createNode("ROUTE");
ROUTE1352.fromNode = "SharkDeath_explode08-POS-INTERP";
ROUTE1352.fromField = "value_changed";
ROUTE1352.toNode = "SharkDeath_explode08-ROOT";
ROUTE1352.toField = "set_translation";
children[544] = ROUTE1352;

ROUTE ROUTE1353 = createNode("ROUTE");
ROUTE1353.fromNode = "SharkDeathTimer";
ROUTE1353.fromField = "fraction_changed";
ROUTE1353.toNode = "SharkDeath_explode08-POS-INTERP";
ROUTE1353.toField = "set_fraction";
children[545] = ROUTE1353;

ROUTE ROUTE1354 = createNode("ROUTE");
ROUTE1354.fromNode = "SharkDeath_explode09-POS-INTERP";
ROUTE1354.fromField = "value_changed";
ROUTE1354.toNode = "SharkDeath_explode09-ROOT";
ROUTE1354.toField = "set_translation";
children[546] = ROUTE1354;

ROUTE ROUTE1355 = createNode("ROUTE");
ROUTE1355.fromNode = "SharkDeathTimer";
ROUTE1355.fromField = "fraction_changed";
ROUTE1355.toNode = "SharkDeath_explode09-POS-INTERP";
ROUTE1355.toField = "set_fraction";
children[547] = ROUTE1355;

ROUTE ROUTE1356 = createNode("ROUTE");
ROUTE1356.fromNode = "SharkDeath_explode10-POS-INTERP";
ROUTE1356.fromField = "value_changed";
ROUTE1356.toNode = "SharkDeath_explode10-ROOT";
ROUTE1356.toField = "set_translation";
children[548] = ROUTE1356;

ROUTE ROUTE1357 = createNode("ROUTE");
ROUTE1357.fromNode = "SharkDeathTimer";
ROUTE1357.fromField = "fraction_changed";
ROUTE1357.toNode = "SharkDeath_explode10-POS-INTERP";
ROUTE1357.toField = "set_fraction";
children[549] = ROUTE1357;

ROUTE ROUTE1358 = createNode("ROUTE");
ROUTE1358.fromNode = "SharkDeath_explode11-POS-INTERP";
ROUTE1358.fromField = "value_changed";
ROUTE1358.toNode = "SharkDeath_explode11-ROOT";
ROUTE1358.toField = "set_translation";
children[550] = ROUTE1358;

ROUTE ROUTE1359 = createNode("ROUTE");
ROUTE1359.fromNode = "SharkDeathTimer";
ROUTE1359.fromField = "fraction_changed";
ROUTE1359.toNode = "SharkDeath_explode11-POS-INTERP";
ROUTE1359.toField = "set_fraction";
children[551] = ROUTE1359;

ROUTE ROUTE1360 = createNode("ROUTE");
ROUTE1360.fromNode = "Inline_fishswim-TIMER";
ROUTE1360.fromField = "fraction_changed";
ROUTE1360.toNode = "Inline_fishswim-POS-INTERP";
ROUTE1360.toField = "set_fraction";
children[552] = ROUTE1360;

ROUTE ROUTE1361 = createNode("ROUTE");
ROUTE1361.fromNode = "Inline_fishswim-POS-INTERP";
ROUTE1361.fromField = "value_changed";
ROUTE1361.toNode = "Inline_fishswim-ROOT";
ROUTE1361.toField = "set_translation";
children[553] = ROUTE1361;

ROUTE ROUTE1362 = createNode("ROUTE");
ROUTE1362.fromNode = "SharkDeathTimer";
ROUTE1362.fromField = "fraction_changed";
ROUTE1362.toNode = "Inline_fishswim-POS-INTERP";
ROUTE1362.toField = "set_fraction";
children[554] = ROUTE1362;

ROUTE ROUTE1363 = createNode("ROUTE");
ROUTE1363.fromNode = "Inline_fishswim-TIMER";
ROUTE1363.fromField = "fraction_changed";
ROUTE1363.toNode = "Inline_fishswim-ROT-INTERP";
ROUTE1363.toField = "set_fraction";
children[555] = ROUTE1363;

ROUTE ROUTE1364 = createNode("ROUTE");
ROUTE1364.fromNode = "Inline_fishswim-ROT-INTERP";
ROUTE1364.fromField = "value_changed";
ROUTE1364.toNode = "Inline_fishswim-ROOT";
ROUTE1364.toField = "set_rotation";
children[556] = ROUTE1364;

ROUTE ROUTE1365 = createNode("ROUTE");
ROUTE1365.fromNode = "SharkDeathTimer";
ROUTE1365.fromField = "fraction_changed";
ROUTE1365.toNode = "Inline_fishswim-ROT-INTERP";
ROUTE1365.toField = "set_fraction";
children[557] = ROUTE1365;

ROUTE ROUTE1366 = createNode("ROUTE");
ROUTE1366.fromNode = "fish_burp-TIMER";
ROUTE1366.fromField = "fraction_changed";
ROUTE1366.toNode = "fish_burp-POS-INTERP";
ROUTE1366.toField = "set_fraction";
children[558] = ROUTE1366;

ROUTE ROUTE1367 = createNode("ROUTE");
ROUTE1367.fromNode = "SharkDeathTimer";
ROUTE1367.fromField = "fraction_changed";
ROUTE1367.toNode = "fish_burp-POS-INTERP";
ROUTE1367.toField = "set_fraction";
children[559] = ROUTE1367;

ROUTE ROUTE1368 = createNode("ROUTE");
ROUTE1368.fromNode = "fish_burp-POS-INTERP";
ROUTE1368.fromField = "value_changed";
ROUTE1368.toNode = "fish_burp-ROOT";
ROUTE1368.toField = "set_translation";
children[560] = ROUTE1368;

ROUTE ROUTE1369 = createNode("ROUTE");
ROUTE1369.fromNode = "fish_burp02-TIMER";
ROUTE1369.fromField = "fraction_changed";
ROUTE1369.toNode = "fish_burp02-POS-INTERP";
ROUTE1369.toField = "set_fraction";
children[561] = ROUTE1369;

ROUTE ROUTE1370 = createNode("ROUTE");
ROUTE1370.fromNode = "SharkDeathTimer";
ROUTE1370.fromField = "fraction_changed";
ROUTE1370.toNode = "fish_burp02-POS-INTERP";
ROUTE1370.toField = "set_fraction";
children[562] = ROUTE1370;

ROUTE ROUTE1371 = createNode("ROUTE");
ROUTE1371.fromNode = "fish_burp02-POS-INTERP";
ROUTE1371.fromField = "value_changed";
ROUTE1371.toNode = "fish_burp02-ROOT";
ROUTE1371.toField = "set_translation";
children[563] = ROUTE1371;

}
